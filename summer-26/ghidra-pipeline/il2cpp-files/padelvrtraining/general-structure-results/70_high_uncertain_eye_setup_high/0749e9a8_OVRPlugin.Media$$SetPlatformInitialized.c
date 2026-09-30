/*
FUNCTION_NAME: OVRPlugin.Media$$SetPlatformInitialized
ENTRY_POINT: 0749e9a8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Media__SetPlatformInitialized(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long *plVar5;
  uint uVar6;
  long *unaff_x22;
  long lVar7;
  
  if (unaff_x20 != (long *)0x0) {
    lVar2 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_09221d00) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_0749ea08;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_03d8f370();
LAB_0749ea08:
    (*(code *)*puVar1)();
    uVar6 = 0;
    while (lVar2 = *(long *)(unaff_x19 + 0xa0), lVar2 != 0) {
      if (*(uint *)(lVar2 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      lVar7 = *(long *)(unaff_x19 + 0x80);
      if (lVar7 == 0) break;
      plVar5 = *(long **)(lVar2 + (long)(int)uVar6 * 8 + 0x20);
      if (plVar5 == (long *)0x0) break;
      lVar2 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
            goto LAB_0749ea94;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_03d8f370(plVar5,*unaff_x22,1);
LAB_0749ea94:
      (*(code *)*puVar1)(plVar5,lVar7 + 0x30,puVar1[1]);
      uVar6 = uVar6 + 1;
      if (uVar6 == 0x1a) {
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


