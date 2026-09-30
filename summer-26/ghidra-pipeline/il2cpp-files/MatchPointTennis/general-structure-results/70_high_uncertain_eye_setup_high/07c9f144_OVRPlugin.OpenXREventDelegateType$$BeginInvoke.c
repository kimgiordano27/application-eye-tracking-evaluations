/*
FUNCTION_NAME: OVRPlugin.OpenXREventDelegateType$$BeginInvoke
ENTRY_POINT: 07c9f144
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OpenXREventDelegateType__BeginInvoke(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long lVar10;
  
  FUN_04447ba8(PTR_DAT_09f4d938);
  *(undefined1 *)(unaff_x20 + 0x9cb) = 1;
  if (unaff_x19[0xe] != 0) {
    iVar1 = (**(code **)(*unaff_x19 + 0x1c8))();
    lVar10 = unaff_x19[0xe];
    if (lVar10 == 0) {
LAB_07c9f280:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (iVar1 != *(int *)(lVar10 + 0x10)) {
      uVar3 = FUN_071b94f8();
      uVar2 = (**(code **)(*unaff_x19 + 0x1c8))();
      plVar4 = (long *)FUN_07c9b974();
      if (plVar4 == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        lVar7 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f4d938) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_07c9f240;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f4d938,0);
LAB_07c9f240:
        uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if (plVar4 == (long *)0x0) goto LAB_07c9f280;
      }
      FUN_07c9f284(lVar10,uVar3,uVar2,uVar6);
      return;
    }
  }
  return;
}


