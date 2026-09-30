/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 0291a6ec
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector2f>__Dispose
               (undefined8 param_1,int param_2,int param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  char in_NG;
  char in_OV;
  long lVar2;
  ulong unaff_x24;
  int iVar3;
  ulong uVar4;
  
  if (in_NG == in_OV) {
    uVar4 = unaff_x24 >> 1 & 0x7fffffff;
    do {
      lVar2 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ae9e74();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ae9e74();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar2 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ae9e74();
      }
      System_Array_InternalEnumerator<OVRPlugin_Vector2f>__System_Collections_IEnumerator_get_Current
                (param_1,uVar4,unaff_x24 & 0xffffffff,param_2,param_4,
                 *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x98));
      iVar3 = (int)uVar4;
      uVar1 = iVar3 - 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0 && 0 < iVar3);
    if (1 < (int)unaff_x24) {
      do {
        lVar2 = *(long *)(param_5 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01ae9e74();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01ae9e74();
        }
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_01ae9e74();
        }
        FUN_0291a014(param_1,param_2,param_3);
        lVar2 = *(long *)(param_5 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01ae9e74();
        }
        System_Array_InternalEnumerator<OVRPlugin_Vector2f>__System_Collections_IEnumerator_get_Current
                  (param_1,1,-param_2 + param_3,param_2,param_4,
                   *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x98));
        param_3 = param_3 + -1;
      } while (2 < -param_2 + param_3 + 2);
    }
  }
  return;
}


