/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 06e26788
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(void)

{
  int iVar1;
  ulong uVar2;
  int in_w8;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  void *__dest;
  uint uVar5;
  long unaff_x23;
  int unaff_w24;
  
  do {
    uVar5 = (uint)unaff_x23;
    if ((int)uVar5 < in_w8) {
      lVar4 = *(long *)(unaff_x19 + 0x10);
      if (lVar4 == 0) {
LAB_06e26820:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if ((*(uint *)(lVar4 + 0x18) <= uVar5) || (*(uint *)(lVar4 + 0x18) <= unaff_w21)) {
LAB_06e26824:
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      __dest = (void *)(lVar4 + 0x20 + (long)(int)unaff_w21 * (long)unaff_w24);
      unaff_w21 = unaff_w21 + 1;
      memmove(__dest,(void *)(lVar4 + 0x20 + (long)(int)uVar5 * (long)unaff_w24),0x48);
      thunk_FUN_049ee3d8(__dest,0);
      in_w8 = *(int *)(unaff_x19 + 0x18);
      uVar5 = uVar5 + 1;
    }
    if (in_w8 <= (int)uVar5) {
      FUN_08d9ef4c(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,in_w8 - unaff_w21,0);
      iVar1 = *(int *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x18) = unaff_w21;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return iVar1 - unaff_w21;
    }
    unaff_x23 = (long)(int)uVar5;
    lVar4 = (long)(int)uVar5 * (long)unaff_w24 + 0x20;
    do {
      lVar3 = *(long *)(unaff_x19 + 0x10);
      if (lVar3 == 0) goto LAB_06e26820;
      if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x23) goto LAB_06e26824;
      if (unaff_x20 == 0) goto LAB_06e26820;
      memcpy(&stack0x00000008,(void *)(lVar3 + lVar4),0x48);
      memcpy(&stack0x00000098,&stack0x00000008,0x48);
      uVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000098,
                         *(undefined8 *)(unaff_x20 + 0x28));
      in_w8 = *(int *)(unaff_x19 + 0x18);
      if ((uVar2 & 1) == 0) break;
      unaff_x23 = unaff_x23 + 1;
      lVar4 = lVar4 + 0x48;
    } while (unaff_x23 < in_w8);
  } while( true );
}


