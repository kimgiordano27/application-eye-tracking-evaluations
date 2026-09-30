/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopyTo
ENTRY_POINT: 02766458
PROGRAM: sharks-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopyTo
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               long *param_5,long param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if (param_5 == (long *)0x0) {
    param_5 = (long *)FUN_0208f1b0(*(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 8))
    ;
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  uVar1 = thunk_FUN_01861bbc();
  lVar2 = **(long **)(*(long *)(param_6 + 0x20) + 0xc0);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0185daa4(lVar2);
  }
  if (param_5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  lVar3 = *param_5;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar2) {
        lVar2 = lVar3 + (long)*piVar5 * 0x10 + 0x138;
        goto LAB_0276651c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar2 = FUN_0185dba8(param_5,lVar2,0);
LAB_0276651c:
  FUN_0209c0ac(uVar1,param_5,*(undefined8 *)(lVar2 + 8),
               *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x38));
  lVar2 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0185daa4();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02766d58(param_2,param_3,param_4,uVar1,
               *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x40));
  return;
}


