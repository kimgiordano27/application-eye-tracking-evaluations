/*
FUNCTION_NAME: UnityEngine.Renderer$$CopyMaterialArray
ENTRY_POINT: 0359279c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 151
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


uint UnityEngine_Renderer__CopyMaterialArray
               (undefined8 param_1,long param_2,int param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  if ((DAT_0412e081 & 1) == 0) {
    param_1 = FUN_01ab69ac(OVRPlugin_OVRP_1_31_0_TypeInfo);
    DAT_0412e081 = 1;
  }
  puVar1 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (param_4 == 9) {
    if (param_2 == 0) {
LAB_035929d8:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar12 = *(uint *)(param_2 + 0x18);
    if (param_3 + 1U < uVar12) {
      uVar3 = FUN_03591da0(param_1,*(undefined2 *)(param_2 + (long)(int)(param_3 + 1U) * 2 + 0x20));
      if (param_3 + 2U < uVar12) {
        uVar4 = FUN_03591da0(uVar3,*(undefined2 *)(param_2 + (long)(int)(param_3 + 2U) * 2 + 0x20));
        if ((param_3 + 3U < uVar12) && (param_3 + 4U < uVar12)) {
          uVar5 = FUN_03591da0(uVar4,*(undefined2 *)(param_2 + 0x20 + (long)(int)(param_3 + 3U) * 2)
                              );
          uVar6 = FUN_03591da0(uVar5,*(undefined2 *)(param_2 + 0x20 + (long)(int)(param_3 + 4U) * 2)
                              );
          if ((param_3 + 5U < uVar12) && (param_3 + 6U < uVar12)) {
            uVar7 = FUN_03591da0(uVar6,*(undefined2 *)
                                        (param_2 + 0x20 + (long)(int)(param_3 + 5U) * 2));
            uVar8 = FUN_03591da0(uVar7,*(undefined2 *)
                                        (param_2 + 0x20 + (long)(int)(param_3 + 6U) * 2));
            if ((param_3 + 7U < uVar12) && (param_3 + 8U < uVar12)) {
              uVar12 = (int)uVar6 + (int)uVar5 * 0x10;
              uVar13 = (int)uVar8 + (int)uVar7 * 0x10;
              uVar5 = FUN_03591da0(uVar8,*(undefined2 *)
                                          (param_2 + 0x20 + (long)(int)(param_3 + 7U) * 2));
              iVar2 = FUN_03591da0(uVar5,*(undefined2 *)
                                          (param_2 + 0x20 + (long)(int)(param_3 + 8U) * 2));
              uVar11 = iVar2 + (int)uVar5 * 0x10;
              uVar10 = (int)uVar4 + (int)uVar3 * 0x10;
              goto LAB_035929ac;
            }
          }
        }
      }
    }
  }
  else {
    if (param_4 != 7) {
      lVar9 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar9 = *(long *)puVar1;
      }
      uVar10 = *(uint *)(*(long *)(lVar9 + 0xb8) + 0x68);
      uVar12 = uVar10 >> 8;
      uVar13 = uVar10 >> 0x10;
      uVar11 = uVar10 >> 0x18;
LAB_035929ac:
      return uVar11 << 0x18 | (uVar13 & 0xff) << 0x10 | (uVar12 & 0xff) << 8 | uVar10 & 0xff;
    }
    if (param_2 == 0) goto LAB_035929d8;
    uVar12 = *(uint *)(param_2 + 0x18);
    if (param_3 + 1U < uVar12) {
      uVar3 = FUN_03591da0(param_1,*(undefined2 *)(param_2 + (long)(int)(param_3 + 1U) * 2 + 0x20));
      if (param_3 + 2U < uVar12) {
        uVar4 = FUN_03591da0(uVar3,*(undefined2 *)(param_2 + (long)(int)(param_3 + 2U) * 2 + 0x20));
        if ((param_3 + 3U < uVar12) && (param_3 + 4U < uVar12)) {
          uVar5 = FUN_03591da0(uVar4,*(undefined2 *)(param_2 + 0x20 + (long)(int)(param_3 + 3U) * 2)
                              );
          uVar6 = FUN_03591da0(uVar5,*(undefined2 *)(param_2 + 0x20 + (long)(int)(param_3 + 4U) * 2)
                              );
          if ((param_3 + 5U < uVar12) && (param_3 + 6U < uVar12)) {
            uVar12 = (int)uVar6 + (int)uVar5 * 0x10;
            uVar5 = FUN_03591da0(uVar6,*(undefined2 *)
                                        (param_2 + 0x20 + (long)(int)(param_3 + 5U) * 2));
            iVar2 = FUN_03591da0(uVar5,*(undefined2 *)
                                        (param_2 + 0x20 + (long)(int)(param_3 + 6U) * 2));
            uVar13 = iVar2 + (int)uVar5 * 0x10;
            uVar10 = (int)uVar4 + (int)uVar3 * 0x10;
            uVar11 = 0xff;
            goto LAB_035929ac;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


