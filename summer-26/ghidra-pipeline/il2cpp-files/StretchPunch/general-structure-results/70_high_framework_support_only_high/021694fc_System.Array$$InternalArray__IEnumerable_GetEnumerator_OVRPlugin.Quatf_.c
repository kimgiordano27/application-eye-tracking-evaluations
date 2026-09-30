/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.Quatf>
ENTRY_POINT: 021694fc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02169570) */

void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_Quatf>
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long in_x10;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  undefined8 in_stack_00000030;
  
  do {
    *(int *)(unaff_x20 + 0x18) = (int)in_x10 + 1;
    *(long *)(param_1 + in_x10 * 8 + 0x20) = param_3;
    thunk_FUN_01e10808();
    while( true ) {
      do {
        uVar2 = FUN_02c52b88(&stack0x00000020,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x48));
        uVar1 = in_stack_00000030;
        if ((uVar2 & 1) == 0) {
          FUN_02c52b84(&stack0x00000020,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x50));
          return;
        }
        lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01dde7f8(lVar3);
        }
        lVar3 = thunk_FUN_01de26bc(uVar1,lVar3);
      } while (lVar3 == 0);
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01dde7f8(lVar3);
      }
      lVar3 = thunk_FUN_01de26bc(uVar1,lVar3);
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01dde7f8(lVar4);
      }
      if (lVar3 == 0) {
        param_3 = 0;
      }
      else {
        param_3 = thunk_FUN_01de26bc(lVar3,lVar4);
        if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(lVar3,lVar4);
        }
      }
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      param_1 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      in_x10 = (long)(int)*(uint *)(unaff_x20 + 0x18);
      if (*(uint *)(unaff_x20 + 0x18) < *(uint *)(param_1 + 0x18)) break;
      FUN_03198f70();
    }
  } while( true );
}


