/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$.ctor
ENTRY_POINT: 024cc394
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>___ctor
               (long param_1,long param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  char in_NG;
  char in_OV;
  uint in_w8;
  ulong uVar3;
  int iVar4;
  int in_w12;
  long lVar5;
  undefined4 *puVar6;
  
  if (in_NG == in_OV) {
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar2 = *(uint *)(lVar5 + 0x18);
    uVar3 = 0;
    iVar4 = 0;
    puVar6 = (undefined4 *)(lVar5 + 0x28);
    do {
      if (uVar2 <= uVar3) {
LAB_024cc40c:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      if (-1 < (int)puVar6[-2]) {
        uVar1 = iVar4 + param_3;
        if (in_w8 <= uVar1) goto LAB_024cc40c;
        iVar4 = iVar4 + 1;
        *(undefined4 *)(param_2 + (long)(int)uVar1 * 4 + 0x20) = *puVar6;
        in_w12 = *(int *)(param_1 + 0x24);
      }
      if (param_4 <= iVar4) {
        return;
      }
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 3;
    } while ((long)uVar3 < (long)in_w12);
  }
  return;
}


