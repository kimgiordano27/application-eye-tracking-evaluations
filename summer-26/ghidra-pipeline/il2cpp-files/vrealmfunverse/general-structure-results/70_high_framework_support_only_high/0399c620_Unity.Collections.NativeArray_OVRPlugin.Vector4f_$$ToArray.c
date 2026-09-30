/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$ToArray
ENTRY_POINT: 0399c620
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4f>__ToArray(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  void *__dest;
  uint uVar4;
  long unaff_x23;
  int unaff_w24;
  
  do {
    memcpy(&stack0x00000000,(void *)(param_1 + unaff_x22),0x1b0);
    memcpy(&stack0x00000360,&stack0x00000000,0x1b0);
    uVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000360,
                       *(undefined8 *)(unaff_x20 + 0x28));
    iVar1 = *(int *)(unaff_x19 + 0x18);
    if ((uVar2 & 1) == 0) {
LAB_0399c670:
      uVar4 = (uint)unaff_x23;
      if ((int)uVar4 < iVar1) {
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 == 0) break;
        if ((*(uint *)(lVar3 + 0x18) <= uVar4) || (*(uint *)(lVar3 + 0x18) <= unaff_w21))
        goto LAB_0399c70c;
        __dest = (void *)(lVar3 + 0x20 + (long)(int)unaff_w21 * (long)unaff_w24);
        unaff_w21 = unaff_w21 + 1;
        memmove(__dest,(void *)(lVar3 + 0x20 + (long)(int)uVar4 * (long)unaff_w24),0x1b0);
        thunk_FUN_02bb0e9c(__dest,0);
        iVar1 = *(int *)(unaff_x19 + 0x18);
        uVar4 = uVar4 + 1;
      }
      if (iVar1 <= (int)uVar4) {
        FUN_04d9e084(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar1 - unaff_w21,0);
        iVar1 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar1 - unaff_w21;
      }
      unaff_x23 = (long)(int)uVar4;
      unaff_x22 = (long)(int)uVar4 * (long)unaff_w24 + 0x20;
    }
    else {
      unaff_x23 = unaff_x23 + 1;
      unaff_x22 = unaff_x22 + 0x1b0;
      if (iVar1 <= unaff_x23) goto LAB_0399c670;
    }
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= (uint)unaff_x23) {
LAB_0399c70c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
  } while (unaff_x20 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


