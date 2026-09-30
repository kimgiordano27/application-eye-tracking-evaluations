/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 0265d120
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


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_Reset
               (void)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long lVar7;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  
  while( true ) {
    if ((bool)in_ZR) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar4 = FUN_02646f98();
      *(undefined8 *)(in_stack_00000008 + 0x18) = uVar4;
      thunk_FUN_01656ef8();
      return;
    }
    lVar7 = *unaff_x21;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    FUN_0370a814(unaff_x22,0);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_016466fc(*unaff_x26);
    }
    uVar4 = FUN_02646f14();
    lVar2 = thunk_FUN_015d056c(*unaff_x28);
    if ((lVar2 == 0) || (FUN_02671c84(lVar2,uVar4), lVar7 == 0)) break;
    lVar5 = *(long *)(lVar7 + 0x10);
    lVar6 = *unaff_x29;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar5 == 0) break;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      plVar3 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      *plVar3 = lVar2;
      thunk_FUN_01656ef8(plVar3,lVar2);
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x58) + 8))(lVar7,lVar2);
    }
    unaff_x22 = unaff_x22 + 1;
    in_ZR = unaff_x19 == unaff_x22;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


