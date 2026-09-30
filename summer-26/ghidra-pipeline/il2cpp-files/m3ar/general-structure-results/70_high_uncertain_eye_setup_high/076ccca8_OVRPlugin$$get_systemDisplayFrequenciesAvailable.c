/*
FUNCTION_NAME: OVRPlugin$$get_systemDisplayFrequenciesAvailable
ENTRY_POINT: 076ccca8
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_systemDisplayFrequenciesAvailable(void)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long lVar8;
  
  puVar1 = PTR_DAT_08fadcd0;
  lVar8 = *(long *)(unaff_x19 + 0x30);
  if (*(int *)(unaff_x19 + 0x10) == 1) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    goto LAB_076ccd58;
  }
  if (*(int *)(unaff_x19 + 0x10) == 0) {
    iVar2 = 0;
    *(undefined4 *)(unaff_x19 + 0x38) = 0;
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    while (iVar2 < 5) {
      if ((lVar8 == 0) || (plVar3 = (long *)FUN_076cc40c(lVar8,iVar2), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_076ccd48;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_0406ae20(plVar3,*(long *)puVar1,0);
LAB_076ccd48:
      iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if (iVar2 != 0) {
        FUN_065fe708();
        *(undefined4 *)(unaff_x19 + 0x10) = 1;
        *(undefined8 *)(unaff_x19 + 0x20) = 0;
        *(undefined8 *)(unaff_x19 + 0x18) = 0;
        return 1;
      }
LAB_076ccd58:
      iVar2 = *(int *)(unaff_x19 + 0x38) + 1;
      *(int *)(unaff_x19 + 0x38) = iVar2;
    }
  }
  return 0;
}


