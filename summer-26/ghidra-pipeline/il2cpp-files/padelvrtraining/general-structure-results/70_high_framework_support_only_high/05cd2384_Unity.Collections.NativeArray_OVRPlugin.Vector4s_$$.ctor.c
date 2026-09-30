/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 05cd2384
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cd2474) */
/* WARNING: Removing unreachable block (ram,0x05cd2418) */
/* WARNING: Removing unreachable block (ram,0x05cd2338) */
/* WARNING: Removing unreachable block (ram,0x05cd2480) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor
               (undefined1 *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long *in_stack_00000030;
  undefined8 in_stack_00000048;
  
  do {
    uVar2 = FUN_06daab3c(param_1,param_2);
    plVar1 = in_stack_00000030;
    if ((uVar2 & 1) == 0) {
      FUN_06daab38(&stack0x00000020,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x168));
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_076c0384();
      if (*(long *)(unaff_x20 + 0x128) != 0) {
        FUN_071e01f8(*(long *)(unaff_x20 + 0x128),0);
        if (in_stack_00000048._4_1_ != '\0') {
          thunk_FUN_03d180a8();
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar4 = *in_stack_00000030;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05cd2374;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(in_stack_00000030,*unaff_x23,0);
LAB_05cd2374:
    (*(code *)*puVar3)(plVar1,puVar3[1]);
    param_2 = *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x160);
    param_1 = &stack0x00000020;
  } while( true );
}


