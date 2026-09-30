/*
FUNCTION_NAME: OVRPlugin$$SuggestVirtualKeyboardLocation
ENTRY_POINT: 0694e198
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SuggestVirtualKeyboardLocation(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *unaff_x19;
  long unaff_x20;
  long lVar8;
  long lVar9;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    lVar3 = FUN_0447b40c(*(long *)(unaff_x20 + 0x10),*(undefined8 *)PTR_DAT_084b68a8);
    puVar2 = PTR_DAT_084b5d98;
    if ((lVar3 != 0) && (uVar1 = *(uint *)(lVar3 + 0x18), 0 < (int)uVar1)) {
      lVar9 = 0;
      do {
        if (uVar1 <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        plVar4 = *(long **)(lVar3 + 0x20 + lVar9 * 8);
        if (plVar4 == (long *)0x0) goto LAB_0694e2ac;
        lVar8 = *unaff_x19;
        uVar5 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
        if (lVar8 == 0) goto LAB_0694e2ac;
        lVar6 = *(long *)(lVar8 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_0694e2ac;
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
          thunk_FUN_03afed3c();
        }
        else {
          FUN_04de85b0(lVar8,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
        }
        uVar1 = *(uint *)(lVar3 + 0x18);
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < (int)uVar1);
    }
    return;
  }
LAB_0694e2ac:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


