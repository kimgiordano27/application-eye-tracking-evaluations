/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnRoomAnchorUpdated$$BeginInvoke
ENTRY_POINT: 04a6d660
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated__BeginInvoke(ulong param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  
  if ((param_1 & 1) != 0) {
    FUN_04a6d82c();
    return;
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    FUN_02b76218(lVar5);
  }
  plVar3 = (long *)thunk_FUN_02b79548();
  if (plVar3 != (long *)0x0) {
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02b76218(lVar5);
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04a6d72c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02b7654c(plVar3,lVar5,0);
LAB_04a6d72c:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  FUN_04a6fb30();
  FUN_04a6e688();
  iVar1 = *(int *)(unaff_x20 + 0x20);
  if (0 < iVar1) {
    if (*(long *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(*(long *)(unaff_x20 + 0x18) + 0x18) / iVar1;
    }
    if (3 < iVar2) {
      FUN_04a6f944();
      return;
    }
  }
  return;
}


