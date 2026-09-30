/*
FUNCTION_NAME: UnityEditor.Analytics.NavmeshBakingAnalytic$$CreateNavmeshBakingAnalytic
ENTRY_POINT: 07ec0750
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEditor_Analytics_NavmeshBakingAnalytic__CreateNavmeshBakingAnalytic(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  long *plVar13;
  long in_stack_00000008;
  
  plVar13 = *(long **)(unaff_x22 + 0x9b0);
  if ((*(byte *)(unaff_x20 + 0xca9) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_0849a030);
    FUN_03a8a718(Unity_Netcode_NetworkConfig_<>c_TypeInfo);
    FUN_03a8a718(PTR_DAT_08488640);
    FUN_03a8a718(Method_UnityEngine_UIElements_BaseField<Vector2>_get_visualInput__);
    FUN_03a8a718(Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__);
    FUN_03a8a718(Method_UnityEngine_UIElements_BaseField<Vector2>_set_value__);
    FUN_03a8a718(Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__);
    FUN_03a8a718(Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_visualInput__);
    FUN_03a8a718(Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__);
    FUN_03a8a718(Method_UnityEngine_UIElements_BaseField<Vector3>_get_visualInput__);
    FUN_03a8a718(PTR_DAT_08493c18);
    FUN_03a8a718(PTR_DAT_08494d28);
    FUN_03a8a718(PTR_DAT_08494d38);
    FUN_03a8a718(PTR_DAT_08494d30);
    FUN_03a8a718(PTR_DAT_08493e40);
    FUN_03a8a718(PTR_DAT_08493c28);
    FUN_03a8a718(PTR_DAT_08493e38);
    FUN_03a8a718(PTR_DAT_08493c30);
    FUN_03a8a718(PTR_DAT_08494d40);
    FUN_03a8a718(PTR_DAT_08487110);
    FUN_03a8a718(PTR_DAT_08487108);
    FUN_03a8a718(PTR_DAT_08495778);
    FUN_03a8a718(Method_UnityEngine_UIElements_BaseField<Vector3>_set_showMixedValue__);
    FUN_03a8a718(Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__);
    FUN_03a8a718(Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_visualInput__);
    FUN_03a8a718(Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__);
    FUN_03a8a718(Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__);
    *(undefined1 *)(unaff_x20 + 0xca9) = 1;
  }
  lVar8 = *plVar13;
  in_stack_00000008 = 0;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar8 = *plVar13;
  }
  puVar3 = PTR_DAT_08488640;
  puVar10 = *(undefined8 **)(lVar8 + 0xb8);
  lVar11 = puVar10[1];
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar10 = *(undefined8 **)(*plVar13 + 0xb8);
    }
    uVar12 = *puVar10;
    lVar11 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
    FUN_066b5934(lVar11,uVar12,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_visualInput__,0);
    plVar13 = (long *)(*(long *)(*plVar13 + 0xb8) + 8);
    *plVar13 = lVar11;
    thunk_FUN_03afed3c(plVar13,lVar11);
  }
  puVar6 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__;
  puVar5 = Method_UnityEngine_UIElements_BaseField<Vector3>_set_showMixedValue__;
  puVar4 = PTR_DAT_08493c18;
  puVar2 = PTR_DAT_08487110;
  puVar1 = PTR_DAT_08487108;
  if (param_1 != (long *)0x0) {
    param_1[0x61] = lVar11;
    thunk_FUN_03afed3c(param_1 + 0x61,lVar11);
    uVar12 = *(undefined8 *)puVar6;
    *(undefined1 *)((long)param_1 + 0x334) = 0;
    param_1[0x67] = 0x41b0000000000000;
    lVar8 = thunk_FUN_03ac74bc(uVar12);
    FUN_0679343c(lVar8,0);
    param_1[0x6d] = lVar8;
    thunk_FUN_03afed3c(param_1 + 0x6d,lVar8);
    lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
    System_Collections_Generic_List<SpawnWaypoint>__TrimExcess(lVar8,*(undefined8 *)puVar2);
    param_1[0x6e] = lVar8;
    thunk_FUN_03afed3c(param_1 + 0x6e,lVar8);
    FUN_07db5314(param_1,0);
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar8 = *(long *)puVar4;
    }
    FUN_07e0aa30(param_1,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x748),0);
    lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
    FUN_07ec0dd8();
    puVar1 = PTR_DAT_08495778;
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x28) = param_1[0x6e];
      thunk_FUN_03afed3c();
      param_1[0x6f] = lVar8;
      thunk_FUN_03afed3c(param_1 + 0x6f,lVar8);
      FUN_07ebf6e8(param_1,1);
      lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
      FUN_07f052a0(lVar8,0);
      plVar13 = param_1 + 0x69;
      param_1[0x69] = lVar8;
      thunk_FUN_03afed3c(plVar13,lVar8);
      if (param_1[0x69] != 0) {
        FUN_07e0aa30(param_1[0x69],*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x788),0);
        puVar1 = Method_UnityEngine_UIElements_BaseField<Vector3>_get_visualInput__;
        if (*plVar13 != 0) {
          lVar8 = *(long *)(*plVar13 + 0x338);
          uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0849a030);
          FUN_05e3cc5c(uVar12,param_1,*(undefined8 *)puVar1,0);
          puVar2 = Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__;
          puVar1 = PTR_DAT_08493e38;
          if (lVar8 != 0) {
            FUN_07f0b0a0(lVar8,uVar12,0);
            lVar8 = param_1[0x69];
            uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
            FUN_064612a8(uVar12,param_1,*(undefined8 *)puVar2,0);
            puVar4 = Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__;
            puVar2 = PTR_DAT_08494d40;
            puVar1 = PTR_DAT_08494d38;
            if (lVar8 != 0) {
              FUN_0446886c(lVar8,uVar12,0,*(undefined8 *)PTR_DAT_08493e40);
              uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
              FUN_064612a8(uVar12,param_1,*(undefined8 *)puVar4,0);
              FUN_0446886c(param_1,uVar12,0,*(undefined8 *)puVar1);
              puVar2 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_visualInput__;
              puVar1 = PTR_DAT_08493c28;
              plVar9 = (long *)param_1[0x69];
              if (plVar9 != (long *)0x0) {
                lVar8 = (**(code **)(*plVar9 + 0x988))(plVar9,*(undefined8 *)(*plVar9 + 0x990));
                uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                FUN_064612a8(uVar12,param_1,*(undefined8 *)puVar2,0);
                if (lVar8 != 0) {
                  FUN_0446886c(lVar8,uVar12,0,*(undefined8 *)PTR_DAT_08494d28);
                  puVar2 = Method_UnityEngine_UIElements_BaseField<Vector2>_set_value__;
                  puVar1 = PTR_DAT_08493c30;
                  plVar9 = (long *)*plVar13;
                  if (plVar9 != (long *)0x0) {
                    lVar8 = (**(code **)(*plVar9 + 0x988))(plVar9,*(undefined8 *)(*plVar9 + 0x990));
                    uVar12 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                    FUN_064612a8(uVar12,param_1,*(undefined8 *)puVar2,0);
                    if (lVar8 != 0) {
                      FUN_0446886c(lVar8,uVar12,0,*(undefined8 *)PTR_DAT_08494d30);
                      in_stack_00000008 = param_1[0x4d];
                      FUN_07e13e7c(&stack0x00000008,param_1[0x69],0);
                      plVar9 = (long *)param_1[0x69];
                      if (plVar9 != (long *)0x0) {
                        plVar9 = (long *)(**(code **)(*plVar9 + 0x988))
                                                   (plVar9,*(undefined8 *)(*plVar9 + 0x990));
                        if (plVar9 != (long *)0x0) {
                          (**(code **)(*plVar9 + 0x248))(plVar9,1,*(undefined8 *)(*plVar9 + 0x250));
                          plVar9 = (long *)*plVar13;
                          if (plVar9 != (long *)0x0) {
                            lVar8 = (**(code **)(*plVar9 + 0x988))
                                              (plVar9,*(undefined8 *)(*plVar9 + 0x990));
                            if (lVar8 != 0) {
                              uVar7 = FUN_07e05068(lVar8,0);
                              FUN_07e05088(lVar8,uVar7 & 0xfffffffd,0);
                              if (*plVar13 != 0) {
                                FUN_07e04a6c(*plVar13,*(undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__
                                             ,0);
                                if ((*plVar13 != 0) &&
                                   (lVar8 = *(long *)(*plVar13 + 0x338), lVar8 != 0)) {
                                  FUN_07e04a6c(lVar8,0,0);
                                  puVar4 = 
                                  Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_visualInput__
                                  ;
                                  puVar2 = 
                                  Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__
                                  ;
                                  puVar1 = Unity_Netcode_NetworkConfig_<>c_TypeInfo;
                                  if ((*plVar13 != 0) &&
                                     (lVar8 = *(long *)(*plVar13 + 0x330), lVar8 != 0)) {
                                    FUN_07e04a6c(lVar8,0,0);
                                    (**(code **)(*param_1 + 0x248))
                                              (param_1,1,*(undefined8 *)(*param_1 + 0x250));
                                    FUN_07e04898(param_1,1,0);
                                    FUN_07f40ad4(param_1,1,0);
                                    lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                                    FUN_05f21d70(lVar8,param_1,*(undefined8 *)puVar2,0);
                                    param_1[0x72] = lVar8;
                                    thunk_FUN_03afed3c(param_1 + 0x72,lVar8);
                                    lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
                                    FUN_066b5934(lVar8,param_1,*(undefined8 *)puVar4,0);
                                    param_1[0x73] = lVar8;
                                    thunk_FUN_03afed3c(param_1 + 0x73,lVar8);
                                    FUN_07ec05dc(param_1,0);
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


