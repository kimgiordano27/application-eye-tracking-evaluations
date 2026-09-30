/*
FUNCTION_NAME: OVRPlugin$$GetControllerIsInHand
ENTRY_POINT: 06940834
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerIsInHand(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  int iVar9;
  long unaff_x20;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0xd60));
  FUN_03a8a718(PTR_DAT_084879f8);
  *(undefined1 *)(unaff_x20 + 0xfa3) = 1;
  puVar3 = PTR_DAT_084b5d60;
  puVar2 = PTR_DAT_084879f8;
  puVar1 = PTR_DAT_084879f0;
  lVar8 = *(long *)(unaff_x19 + 0x10);
  if (lVar8 != 0) {
    if (*(float *)(lVar8 + 0x140) < 2.0) {
      return;
    }
    iVar9 = 0;
    while (*(long *)(lVar8 + 0xe8) != 0) {
      iVar4 = FUN_06936294();
      if (iVar4 <= iVar9) {
        return;
      }
      if ((((*(long *)(unaff_x19 + 0x10) == 0) ||
           (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8), lVar8 == 0)) ||
          (lVar8 = *(long *)(lVar8 + 0x58), lVar8 == 0)) ||
         ((lVar8 = FUN_04de82e0(lVar8,iVar9,*(undefined8 *)puVar3), lVar8 == 0 ||
          (plVar6 = *(long **)(lVar8 + 0x80), plVar6 == (long *)0x0)))) break;
      uVar5 = (**(code **)(*plVar6 + 0x2e8))(plVar6,*(undefined8 *)(*plVar6 + 0x2f0));
      if (*(long *)(unaff_x19 + 0x38) == 0) break;
      uVar7 = FUN_04cd1394(*(long *)(unaff_x19 + 0x38),iVar9,*(undefined8 *)puVar1);
      if (((uVar7 & 1) == 0) && (((uVar5 ^ 1) & 1) == 0)) {
        if ((*(long *)(unaff_x19 + 0x10) == 0) ||
           (((lVar8 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8), lVar8 == 0 ||
             (lVar8 = *(long *)(lVar8 + 0x58), lVar8 == 0)) ||
            (lVar8 = FUN_04de82e0(lVar8,iVar9,*(undefined8 *)puVar3), lVar8 == 0)))) break;
        FUN_06940970();
      }
      if (*(long *)(unaff_x19 + 0x38) == 0) break;
      FUN_04cd13e8(*(long *)(unaff_x19 + 0x38),iVar9,uVar5 & 1,*(undefined8 *)puVar2);
      lVar8 = *(long *)(unaff_x19 + 0x10);
      iVar9 = iVar9 + 1;
      if (lVar8 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


