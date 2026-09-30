/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$GetEnumerator
ENTRY_POINT: 0399c6b8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4f>__GetEnumerator
              (void *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar5;
  uint uVar6;
  ulong unaff_x23;
  int unaff_w24;
  
  do {
    thunk_FUN_02bb0e9c(param_1,param_2);
    iVar1 = *(int *)(unaff_x19 + 0x18);
    unaff_x23 = (ulong)((int)unaff_x23 + 1);
    do {
      iVar5 = (int)unaff_x23;
      if (iVar1 <= iVar5) {
        FUN_04d9e084(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar1 - unaff_w21,0);
        iVar1 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar1 - unaff_w21;
      }
      unaff_x23 = (ulong)iVar5;
      lVar4 = (long)iVar5 * (long)unaff_w24 + 0x20;
      do {
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 == 0) goto LAB_0399c708;
        if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x23) goto LAB_0399c70c;
        if (unaff_x20 == 0) goto LAB_0399c708;
        memcpy(&stack0x00000000,(void *)(lVar3 + lVar4),0x1b0);
        memcpy(&stack0x00000360,&stack0x00000000,0x1b0);
        uVar2 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000360,
                           *(undefined8 *)(unaff_x20 + 0x28));
        iVar1 = *(int *)(unaff_x19 + 0x18);
        if ((uVar2 & 1) == 0) break;
        unaff_x23 = unaff_x23 + 1;
        lVar4 = lVar4 + 0x1b0;
      } while ((long)unaff_x23 < (long)iVar1);
      uVar6 = (uint)unaff_x23;
    } while (iVar1 <= (int)uVar6);
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) {
LAB_0399c708:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((*(uint *)(lVar4 + 0x18) <= uVar6) || (*(uint *)(lVar4 + 0x18) <= unaff_w21)) {
LAB_0399c70c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    param_1 = (void *)(lVar4 + 0x20 + (long)(int)unaff_w21 * (long)unaff_w24);
    unaff_w21 = unaff_w21 + 1;
    memmove(param_1,(void *)(lVar4 + 0x20 + (long)(int)uVar6 * (long)unaff_w24),0x1b0);
    param_2 = 0;
  } while( true );
}


