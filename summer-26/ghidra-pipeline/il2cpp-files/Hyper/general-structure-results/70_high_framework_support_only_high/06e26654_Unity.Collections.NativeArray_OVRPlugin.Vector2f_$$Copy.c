/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 06e26654
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  void *__dest;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_08d8ca5c(8);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    lVar6 = 0x20;
    do {
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) goto LAB_06e26820;
      if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_06e26824;
      if (param_2 == 0) goto LAB_06e26820;
      memcpy(&stack0x00000050,(void *)(lVar4 + lVar6),0x48);
      memcpy(&stack0x00000098,&stack0x00000050,0x48);
      uVar2 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),&stack0x00000098,
                         *(undefined8 *)(param_2 + 0x28));
      iVar1 = *(int *)(param_1 + 0x18);
      if ((uVar2 & 1) != 0) break;
      uVar9 = uVar9 + 1;
      lVar6 = lVar6 + 0x48;
    } while ((long)uVar9 < (long)iVar1);
  }
  if (iVar1 <= (int)uVar9) {
    return 0;
  }
  uVar2 = uVar9 & 0xffffffff;
  do {
    uVar9 = (ulong)((int)uVar9 + 1);
    do {
      iVar7 = (int)uVar9;
      uVar5 = (uint)uVar2;
      if (iVar1 <= iVar7) {
        FUN_08d9ef4c(*(undefined8 *)(param_1 + 0x10),uVar2,iVar1 - uVar5,0);
        iVar1 = *(int *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x18) = uVar5;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        return iVar1 - uVar5;
      }
      uVar9 = (ulong)iVar7;
      lVar6 = (long)iVar7 * 0x48 + 0x20;
      do {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 == 0) goto LAB_06e26820;
        if (*(uint *)(lVar4 + 0x18) <= (uint)uVar9) goto LAB_06e26824;
        if (param_2 == 0) goto LAB_06e26820;
        memcpy(&stack0x00000008,(void *)(lVar4 + lVar6),0x48);
        memcpy(&stack0x00000098,&stack0x00000008,0x48);
        uVar3 = (**(code **)(param_2 + 0x18))
                          (*(undefined8 *)(param_2 + 0x40),&stack0x00000098,
                           *(undefined8 *)(param_2 + 0x28));
        iVar1 = *(int *)(param_1 + 0x18);
        if ((uVar3 & 1) == 0) break;
        uVar9 = uVar9 + 1;
        lVar6 = lVar6 + 0x48;
      } while ((long)uVar9 < (long)iVar1);
      uVar8 = (uint)uVar9;
    } while (iVar1 <= (int)uVar8);
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 == 0) {
LAB_06e26820:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if ((*(uint *)(lVar6 + 0x18) <= uVar8) || (*(uint *)(lVar6 + 0x18) <= uVar5)) {
LAB_06e26824:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    __dest = (void *)(lVar6 + 0x20 + (long)(int)uVar5 * 0x48);
    uVar2 = (ulong)(uVar5 + 1);
    memmove(__dest,(void *)(lVar6 + 0x20 + (long)(int)uVar8 * 0x48),0x48);
    thunk_FUN_049ee3d8(__dest,0);
    iVar1 = *(int *)(param_1 + 0x18);
  } while( true );
}


