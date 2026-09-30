/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyTo
ENTRY_POINT: 05cd1830
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


/* WARNING: Removing unreachable block (ram,0x05cd17c8) */
/* WARNING: Removing unreachable block (ram,0x05cd18bc) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyTo
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong in_x9;
  int *in_x10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x21;
  undefined4 unaff_w22;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
code_r0x05cd1830:
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)(*in_x10 + 3) * 0x10 + 0x138);
      goto LAB_05cd1868;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
LAB_05cd1848:
  puVar3 = (undefined8 *)FUN_03d8f370(unaff_x21,param_3,3);
LAB_05cd1868:
  (*(code *)*puVar3)(unaff_x21,unaff_x20,unaff_w22,puVar3[1]);
  do {
    if (*(char *)(in_stack_00000018 + 0x148) != '\0') {
LAB_05cd1944:
      FUN_03877148();
      return;
    }
    uVar4 = *(undefined8 *)(in_stack_00000018 + 0x120);
    in_stack_00000010._4_1_ = '\0';
    FUN_071e78b0(uVar4,(long)&stack0x00000010 + 4,0);
    lVar2 = *(long *)(in_stack_00000018 + 0x120);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(int *)(lVar2 + 0x20) < 1) {
      unaff_x20 = 0;
    }
    else {
      unaff_x20 = FUN_0607266c(lVar2,*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf0));
    }
    if (in_stack_00000010._4_1_ != '\0') {
      thunk_FUN_03d180a8(uVar4,0);
    }
    if (unaff_x20 != 0) break;
    if (*(char *)(in_stack_00000018 + 0x148) != '\0') goto LAB_05cd1944;
    plVar1 = *(long **)(in_stack_00000018 + 0x128);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    (**(code **)(*plVar1 + 0x1e8))(plVar1,*(undefined8 *)(*plVar1 + 0x1f0));
  } while( true );
  FUN_05cd1b4c(in_stack_00000018,unaff_x20,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 200));
  unaff_x21 = *(long **)(in_stack_00000018 + 0x138);
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  param_3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb8);
  if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
    param_3 = FUN_03d8f26c(param_3);
  }
  param_1 = *unaff_x21;
  unaff_w22 = *(undefined4 *)(unaff_x20 + 0x18);
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (in_x9 != 0) goto code_r0x05cd1828;
  goto LAB_05cd1848;
code_r0x05cd1828:
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  goto code_r0x05cd1830;
}


