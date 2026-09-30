/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 0265cd14
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__Dispose(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int in_w8;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  
  while( true ) {
    if (in_w8 == 0) {
      thunk_FUN_016466fc();
    }
    FUN_0370a814(unaff_x22,0);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_016466fc(*unaff_x26);
    }
    uVar2 = FUN_02646940();
    lVar3 = thunk_FUN_015d056c(*unaff_x28);
    if ((lVar3 == 0) || (FUN_02671be0(lVar3,uVar2), unaff_x23 == 0)) break;
    lVar5 = *(long *)(unaff_x23 + 0x10);
    lVar6 = *unaff_x29;
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    if (lVar5 == 0) break;
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      plVar4 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      *plVar4 = lVar3;
      thunk_FUN_01656ef8(plVar4,lVar3);
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x58) + 8))
                (unaff_x23,lVar3);
    }
    unaff_x22 = unaff_x22 + 1;
    if (unaff_x19 == unaff_x22) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar2 = FUN_026469c4();
      *(undefined8 *)(in_stack_00000008 + 0x18) = uVar2;
      thunk_FUN_01656ef8();
      return;
    }
    unaff_x23 = *unaff_x21;
    in_w8 = *(int *)(*unaff_x27 + 0xe0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


