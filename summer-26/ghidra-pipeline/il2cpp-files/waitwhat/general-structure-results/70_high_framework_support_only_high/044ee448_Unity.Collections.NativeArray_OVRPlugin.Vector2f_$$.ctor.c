/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 044ee448
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector2f>___ctor(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05941350(8);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < 1) {
    uVar10 = 0;
  }
  else {
    lVar8 = 0;
    uVar10 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 == 0) goto LAB_044ee5a8;
      if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_044ee5ac;
      if (param_2 == 0) goto LAB_044ee5a8;
      uVar4 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(lVar6 + lVar8 + 0x20),
                         *(undefined8 *)(lVar6 + lVar8 + 0x28),*(undefined8 *)(param_2 + 0x28));
      iVar1 = *(int *)(param_1 + 0x18);
      if ((uVar4 & 1) != 0) break;
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((long)uVar10 < (long)iVar1);
  }
  if (iVar1 <= (int)uVar10) {
    return 0;
  }
  uVar4 = uVar10 & 0xffffffff;
  do {
    uVar10 = (ulong)((int)uVar10 + 1);
    do {
      uVar7 = (uint)uVar4;
      if (iVar1 <= (int)uVar10) {
        FUN_0595236c(*(undefined8 *)(param_1 + 0x10),uVar4,iVar1 - uVar7,0);
        iVar1 = *(int *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x18) = uVar7;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        return iVar1 - uVar7;
      }
      uVar11 = -(uVar10 >> 0x1f & 1) & 0xfffffff000000000 | (uVar10 & 0xffffffff) << 4;
      uVar10 = (ulong)(int)uVar10;
      do {
        lVar8 = *(long *)(param_1 + 0x10);
        if (lVar8 == 0) goto LAB_044ee5a8;
        if (*(uint *)(lVar8 + 0x18) <= (uint)uVar10) goto LAB_044ee5ac;
        if (param_2 == 0) goto LAB_044ee5a8;
        uVar5 = (**(code **)(param_2 + 0x18))
                          (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(lVar8 + uVar11 + 0x20),
                           *(undefined8 *)(lVar8 + uVar11 + 0x28),*(undefined8 *)(param_2 + 0x28));
        iVar1 = *(int *)(param_1 + 0x18);
        if ((uVar5 & 1) == 0) break;
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 + 0x10;
      } while ((long)uVar10 < (long)iVar1);
      uVar9 = (uint)uVar10;
    } while (iVar1 <= (int)uVar9);
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 == 0) {
LAB_044ee5a8:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if ((*(uint *)(lVar8 + 0x18) <= uVar9) || (*(uint *)(lVar8 + 0x18) <= uVar7)) {
LAB_044ee5ac:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    puVar2 = (undefined8 *)(lVar8 + 0x20 + (long)(int)uVar9 * 0x10);
    uVar12 = *puVar2;
    puVar3 = (undefined8 *)(lVar8 + 0x20 + (long)(int)uVar7 * 0x10);
    puVar3[1] = puVar2[1];
    *puVar3 = uVar12;
    uVar4 = (ulong)(uVar7 + 1);
    iVar1 = *(int *)(param_1 + 0x18);
  } while( true );
}


