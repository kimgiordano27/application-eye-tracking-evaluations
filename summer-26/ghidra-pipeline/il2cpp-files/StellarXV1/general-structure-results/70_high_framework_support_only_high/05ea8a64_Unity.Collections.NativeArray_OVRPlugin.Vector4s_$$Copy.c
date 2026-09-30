/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 05ea8a64
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy
               (long *param_1,long param_2,uint param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  uint unaff_w20;
  long unaff_x23;
  undefined8 uVar4;
  long unaff_x25;
  long unaff_x29;
  
                    /* try { // try from 05ea8a74 to 05fa8b6b has its CatchHandler @ 05ea8b78 */
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x25 + 0x28);
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
  }
  uVar2 = (ulong)*(uint *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0xfc);
  if (param_2 == 0) {
    if (unaff_w20 != 0 || param_3 != 0) {
      FUN_0769a508(0);
    }
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
  }
  else {
    memset(&stack0x00000000 + -(uVar2 + 0xf & 0x1fffffff0),0,uVar2);
    lVar3 = *(long *)(unaff_x23 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    uVar2 = FUN_040777e0(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10),
                         &stack0x00000000 + -(uVar2 + 0xf & 0x1fffffff0));
    if ((uVar2 & 1) == 0) {
      uVar1 = thunk_FUN_0408781c(param_2,0);
      lVar3 = *(long *)(unaff_x23 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_040b1acc(lVar3);
      }
      uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18);
      if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar4 = FUN_0768890c(uVar4,0);
      uVar2 = FUN_07692be0(uVar1,uVar4,0);
      if ((uVar2 & 1) != 0) {
        FUN_0769a388(0);
      }
    }
    if ((*(uint *)(param_2 + 0x18) < param_3) || (*(uint *)(param_2 + 0x18) - param_3 < unaff_w20))
    {
      FUN_0769a508(0);
    }
    *param_1 = param_2;
    thunk_FUN_040ec700(param_1,param_2);
    *(uint *)(param_1 + 1) = param_3;
    *(uint *)((long)param_1 + 0xc) = unaff_w20;
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


