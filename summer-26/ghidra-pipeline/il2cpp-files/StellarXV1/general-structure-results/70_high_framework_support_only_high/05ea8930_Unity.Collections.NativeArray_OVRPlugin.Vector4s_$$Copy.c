/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 05ea8930
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy
               (undefined8 param_1,undefined8 param_2,size_t param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  void *unaff_x22;
  undefined8 uVar4;
  long unaff_x23;
  long unaff_x29;
  
  if (unaff_x20 == 0) {
    if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
      *unaff_x19 = 0;
      unaff_x19[1] = 0;
      return;
    }
  }
  else {
    memset(unaff_x22,0,param_3);
    lVar1 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_040b1acc();
    }
    uVar2 = FUN_040777e0(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x10));
    if ((uVar2 & 1) == 0) {
      uVar3 = thunk_FUN_0408781c();
      lVar1 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_040b1acc(lVar1);
      }
      uVar4 = *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x18);
      if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar4 = FUN_0768890c(uVar4,0);
      uVar2 = FUN_07692be0(uVar3,uVar4,0);
      if ((uVar2 & 1) != 0) {
        FUN_0769a388(0);
      }
    }
    *unaff_x19 = unaff_x20;
    thunk_FUN_040ec700();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined4 *)(unaff_x19 + 1) = 0;
    *(int *)((long)unaff_x19 + 0xc) = (int)uVar3;
    if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


