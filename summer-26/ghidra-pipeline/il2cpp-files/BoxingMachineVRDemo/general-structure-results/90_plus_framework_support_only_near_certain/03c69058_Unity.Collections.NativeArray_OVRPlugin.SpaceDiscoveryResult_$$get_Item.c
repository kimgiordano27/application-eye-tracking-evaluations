/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$get_Item
ENTRY_POINT: 03c69058
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__get_Item
               (undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_050188b4(8);
  }
  if (0 < *(int *)(param_2 + 0x18)) {
    uVar5 = 0;
    lVar4 = 0x20;
    do {
      lVar3 = *(long *)(param_2 + 0x10);
      if (lVar3 == 0) goto LAB_03c69148;
      if (*(uint *)(lVar3 + 0x18) <= uVar5) {
LAB_03c6914c:
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      puVar1 = (undefined8 *)(lVar3 + lVar4);
      if (param_3 == 0) {
LAB_03c69148:
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      local_70 = *puVar1;
      uStack_68 = puVar1[1];
      uStack_60 = puVar1[2];
      uStack_58 = puVar1[3];
      local_50 = puVar1[4];
      uStack_48 = puVar1[5];
      uStack_40 = puVar1[6];
      uStack_38 = puVar1[7];
      uVar2 = (**(code **)(param_3 + 0x18))
                        (*(undefined8 *)(param_3 + 0x40),&local_70,*(undefined8 *)(param_3 + 0x28));
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(param_2 + 0x10);
        if (lVar3 != 0) {
          if ((uint)uVar5 < *(uint *)(lVar3 + 0x18)) {
            puVar1 = (undefined8 *)(lVar3 + lVar4);
            uVar8 = puVar1[4];
            uVar7 = puVar1[7];
            uVar6 = puVar1[6];
            uVar12 = puVar1[1];
            uVar11 = *puVar1;
            uVar10 = puVar1[3];
            uVar9 = puVar1[2];
            param_1[5] = puVar1[5];
            param_1[4] = uVar8;
            param_1[7] = uVar7;
            param_1[6] = uVar6;
            param_1[1] = uVar12;
            *param_1 = uVar11;
            param_1[3] = uVar10;
            param_1[2] = uVar9;
            return;
          }
          goto LAB_03c6914c;
        }
        goto LAB_03c69148;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x40;
    } while ((long)uVar5 < (long)*(int *)(param_2 + 0x18));
  }
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


