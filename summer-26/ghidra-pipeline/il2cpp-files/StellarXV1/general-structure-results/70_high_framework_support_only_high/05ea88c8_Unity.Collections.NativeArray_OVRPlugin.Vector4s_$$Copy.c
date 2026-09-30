/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 05ea88c8
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
               (long *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_040b1acc(lVar4);
  }
  uVar3 = (ulong)*(uint *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0xfc);
  if (param_2 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
  }
  else {
    memset(auStack_50 + -(uVar3 + 0xf & 0x1fffffff0),0,uVar3);
    lVar4 = *(long *)(param_3 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    uVar3 = FUN_040777e0(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10),
                         auStack_50 + -(uVar3 + 0xf & 0x1fffffff0));
    if ((uVar3 & 1) == 0) {
      uVar2 = thunk_FUN_0408781c(param_2,0);
      lVar4 = *(long *)(param_3 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc(lVar4);
      }
      uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
      if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar5 = FUN_0768890c(uVar5,0);
      uVar3 = FUN_07692be0(uVar2,uVar5,0);
      if ((uVar3 & 1) != 0) {
        FUN_0769a388(0);
      }
    }
    *param_1 = param_2;
    thunk_FUN_040ec700(param_1,param_2);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 1) = 0;
    *(int *)((long)param_1 + 0xc) = (int)uVar2;
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


