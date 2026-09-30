/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0265cd70
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__System_Collections_IEnumerator_get_Current
               (void)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  
  while( true ) {
    lVar4 = *(long *)(unaff_x23 + 0x10);
    lVar5 = *unaff_x29;
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    if (lVar4 == 0) break;
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      plVar2 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
      *plVar2 = unaff_x24;
      thunk_FUN_01656ef8(plVar2,unaff_x24);
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x58) + 8))
                (unaff_x23,unaff_x24);
    }
    unaff_x22 = unaff_x22 + 1;
    if (unaff_x19 == unaff_x22) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar3 = FUN_026469c4();
      *(undefined8 *)(in_stack_00000008 + 0x18) = uVar3;
      thunk_FUN_01656ef8();
      return;
    }
    unaff_x23 = *unaff_x21;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    FUN_0370a814(unaff_x22,0);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_016466fc(*unaff_x26);
    }
    uVar3 = FUN_02646940();
    unaff_x24 = thunk_FUN_015d056c(*unaff_x28);
    if ((unaff_x24 == 0) || (FUN_02671be0(unaff_x24,uVar3), unaff_x23 == 0)) break;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


