/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$ShowRoomDetails
ENTRY_POINT: 0771b12c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__ShowRoomDetails
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  undefined8 *unaff_x25;
  long unaff_x27;
  uint unaff_w28;
  
  while (uVar2 = FUN_05badb74(unaff_x22,unaff_w23,param_3), unaff_x21 != 0) {
    lVar3 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar3 == 0) break;
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
      thunk_FUN_044bb4b4();
    }
    else {
      FUN_05bade44();
    }
    unaff_w23 = unaff_w23 + 1;
    if (*(int *)(unaff_x22 + 0x18) <= unaff_w23) {
      do {
        uVar1 = *(uint *)(unaff_x27 + 0x18);
        unaff_w28 = unaff_w28 + 1;
        if ((int)uVar1 <= (int)unaff_w28) {
          do {
            unaff_w24 = unaff_w24 + 1;
            if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)unaff_w24) {
              lVar3 = (**(code **)(*unaff_x19 + 0x178))();
              if (lVar3 != 0) {
                *(undefined4 *)(lVar3 + 0x18) = 0xcb4;
                lVar3 = (**(code **)(*unaff_x19 + 0x178))();
                if ((unaff_x21 != 0) && (uVar2 = FUN_05baf9bc(), lVar3 != 0)) {
                  *(undefined8 *)(lVar3 + 0x20) = uVar2;
                  thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x20),uVar2);
                  return;
                }
              }
              goto LAB_0771b238;
            }
            if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) goto LAB_0771b23c;
            lVar3 = *(long *)(unaff_x20 + (long)(int)unaff_w24 * 8 + 0x20);
            if ((lVar3 == 0) || (unaff_x27 = *(long *)(lVar3 + 0x10), unaff_x27 == 0))
            goto LAB_0771b238;
            uVar1 = *(uint *)(unaff_x27 + 0x18);
          } while ((int)uVar1 < 1);
          unaff_w28 = 0;
        }
        if (uVar1 <= unaff_w28) {
LAB_0771b23c:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        lVar3 = *(long *)(unaff_x27 + (long)(int)unaff_w28 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_0771b238;
        unaff_x22 = *(long *)(lVar3 + 0x18);
      } while ((unaff_x22 == 0) || (*(int *)(unaff_x22 + 0x18) < 1));
      unaff_w23 = 0;
    }
    lVar3 = FUN_05badb74(unaff_x22,unaff_w23,*unaff_x25);
    if (lVar3 == 0) break;
    *(uint *)(lVar3 + 0x30) = unaff_w28;
    param_3 = *unaff_x25;
  }
LAB_0771b238:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


