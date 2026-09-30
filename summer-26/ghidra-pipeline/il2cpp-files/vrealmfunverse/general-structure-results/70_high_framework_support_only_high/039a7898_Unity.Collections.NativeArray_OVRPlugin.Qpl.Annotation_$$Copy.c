/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 039a7898
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    Oculus_Interaction_ActiveStateTracker__InjectOptionalGameObjects(8);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < 1) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    lVar8 = 0x20;
    do {
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) goto LAB_039a7a64;
      if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_039a7a68;
      if (param_2 == 0) goto LAB_039a7a64;
      puVar4 = (undefined8 *)(lVar5 + lVar8);
      uStack_68 = puVar4[1];
      local_70 = *puVar4;
      uStack_58 = puVar4[3];
      uStack_60 = puVar4[2];
      local_50 = puVar4[4];
      uVar2 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),&local_70,*(undefined8 *)(param_2 + 0x28));
      iVar1 = *(int *)(param_1 + 0x18);
      if ((uVar2 & 1) != 0) break;
      uVar11 = uVar11 + 1;
      lVar8 = lVar8 + 0x28;
    } while ((long)uVar11 < (long)iVar1);
  }
  if (iVar1 <= (int)uVar11) {
    return 0;
  }
  uVar2 = uVar11 & 0xffffffff;
  do {
    uVar11 = (ulong)((int)uVar11 + 1);
    do {
      iVar9 = (int)uVar11;
      uVar7 = (uint)uVar2;
      if (iVar1 <= iVar9) {
        FUN_04d9e084(*(undefined8 *)(param_1 + 0x10),uVar2,iVar1 - uVar7,0);
        iVar1 = *(int *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x18) = uVar7;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        return iVar1 - uVar7;
      }
      uVar11 = (ulong)iVar9;
      lVar8 = (long)iVar9 * 0x28 + 0x20;
      do {
        lVar5 = *(long *)(param_1 + 0x10);
        if (lVar5 == 0) goto LAB_039a7a64;
        if (*(uint *)(lVar5 + 0x18) <= (uint)uVar11) goto LAB_039a7a68;
        if (param_2 == 0) goto LAB_039a7a64;
        puVar4 = (undefined8 *)(lVar5 + lVar8);
        uStack_68 = puVar4[1];
        local_70 = *puVar4;
        uStack_58 = puVar4[3];
        uStack_60 = puVar4[2];
        local_50 = puVar4[4];
        uVar3 = (**(code **)(param_2 + 0x18))
                          (*(undefined8 *)(param_2 + 0x40),&local_70,*(undefined8 *)(param_2 + 0x28)
                          );
        iVar1 = *(int *)(param_1 + 0x18);
        if ((uVar3 & 1) == 0) break;
        uVar11 = uVar11 + 1;
        lVar8 = lVar8 + 0x28;
      } while ((long)uVar11 < (long)iVar1);
      uVar10 = (uint)uVar11;
    } while (iVar1 <= (int)uVar10);
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 == 0) {
LAB_039a7a64:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((*(uint *)(lVar8 + 0x18) <= uVar10) || (*(uint *)(lVar8 + 0x18) <= uVar7)) {
LAB_039a7a68:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    puVar6 = (undefined8 *)(lVar8 + 0x20 + (long)(int)uVar10 * 0x28);
    puVar4 = (undefined8 *)(lVar8 + 0x20 + (long)(int)uVar7 * 0x28);
    uVar2 = (ulong)(uVar7 + 1);
    uVar15 = puVar6[1];
    uVar14 = *puVar6;
    uVar13 = puVar6[3];
    uVar12 = puVar6[2];
    puVar4[4] = puVar6[4];
    puVar4[1] = uVar15;
    *puVar4 = uVar14;
    puVar4[3] = uVar13;
    puVar4[2] = uVar12;
    thunk_FUN_02bb0e9c(puVar4,0);
    iVar1 = *(int *)(param_1 + 0x18);
  } while( true );
}


