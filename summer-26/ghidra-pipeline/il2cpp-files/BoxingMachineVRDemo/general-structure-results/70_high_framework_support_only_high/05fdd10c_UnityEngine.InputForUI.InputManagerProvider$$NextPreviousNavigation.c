/*
FUNCTION_NAME: UnityEngine.InputForUI.InputManagerProvider$$NextPreviousNavigation
ENTRY_POINT: 05fdd10c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_InputForUI_InputManagerProvider__NextPreviousNavigation(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int in_w10;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x27;
  undefined8 in_stack_00000008;
  
  uVar4 = *param_1;
  lVar5 = *(long *)(unaff_x23 + 0x10);
  *(int *)(unaff_x23 + 0x1c) = in_w10 + 1;
  if (lVar5 != 0) {
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
      thunk_FUN_02dd37b4();
    }
    else {
      FUN_03aac494();
    }
    *(long *)(unaff_x22 + 0x30) = unaff_x23;
    thunk_FUN_02dd37b4();
    lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__);
    FUN_03aabc60(lVar5,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
    lVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                              );
    FUN_05fc0944(lVar2,0);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x18) =
           *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<OVRManager>__;
      thunk_FUN_02dd37b4();
      *(undefined8 *)(lVar2 + 0x10) =
           *(undefined8 *)Method_Unity_VisualScripting_GraphPointer_Initialize__;
      thunk_FUN_02dd37b4();
      if (lVar5 != 0) {
        lVar6 = *(long *)(lVar5 + 0x10);
        lVar7 = *unaff_x27;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            plVar3 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
            *plVar3 = lVar2;
            thunk_FUN_02dd37b4(plVar3,lVar2);
          }
          else {
            FUN_03aac494(lVar5,lVar2,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(unaff_x22 + 0x28) = lVar5;
          thunk_FUN_02dd37b4((long *)(unaff_x22 + 0x28),lVar5);
          lVar5 = *(long *)(unaff_x21 + 0x10);
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar5 != 0) {
            uVar1 = *(uint *)(unaff_x21 + 0x18);
            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
              *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
              thunk_FUN_02dd37b4();
            }
            else {
              FUN_03aac494();
            }
            *(long *)(unaff_x20 + 0x28) = unaff_x21;
            thunk_FUN_02dd37b4();
            FUN_05fc0710(in_stack_00000008);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


