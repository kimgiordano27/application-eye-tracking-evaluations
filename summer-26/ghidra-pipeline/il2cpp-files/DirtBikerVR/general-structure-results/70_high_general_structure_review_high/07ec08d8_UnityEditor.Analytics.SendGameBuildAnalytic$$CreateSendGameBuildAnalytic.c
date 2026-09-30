/*
FUNCTION_NAME: UnityEditor.Analytics.SendGameBuildAnalytic$$CreateSendGameBuildAnalytic
ENTRY_POINT: 07ec08d8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEditor_Analytics_SendGameBuildAnalytic__CreateSendGameBuildAnalytic
               (undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x19;
  undefined8 uVar10;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long in_stack_00000008;
  
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    param_1 = *(undefined8 **)(*unaff_x22 + 0xb8);
  }
  uVar10 = *param_1;
  lVar7 = thunk_FUN_03ac74bc(*unaff_x23);
  FUN_066b5934(lVar7,uVar10,
               *(undefined8 *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_visualInput__,
               0);
  plVar8 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
  *plVar8 = lVar7;
  thunk_FUN_03afed3c(plVar8,lVar7);
  puVar5 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__;
  puVar4 = Method_UnityEngine_UIElements_BaseField<Vector3>_set_showMixedValue__;
  puVar3 = PTR_DAT_08493c18;
  puVar2 = PTR_DAT_08487110;
  puVar1 = PTR_DAT_08487108;
  if (unaff_x19 != (long *)0x0) {
    unaff_x19[0x61] = lVar7;
    thunk_FUN_03afed3c(unaff_x19 + 0x61,lVar7);
    uVar10 = *(undefined8 *)puVar5;
    *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
    unaff_x19[0x67] = 0x41b0000000000000;
    lVar7 = thunk_FUN_03ac74bc(uVar10);
    FUN_0679343c(lVar7,0);
    unaff_x19[0x6d] = lVar7;
    thunk_FUN_03afed3c(unaff_x19 + 0x6d,lVar7);
    lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
    System_Collections_Generic_List<SpawnWaypoint>__TrimExcess(lVar7,*(undefined8 *)puVar2);
    unaff_x19[0x6e] = lVar7;
    thunk_FUN_03afed3c(unaff_x19 + 0x6e,lVar7);
    FUN_07db5314();
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07e0aa30();
    lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
    FUN_07ec0dd8();
    puVar1 = PTR_DAT_08495778;
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x28) = unaff_x19[0x6e];
      thunk_FUN_03afed3c();
      unaff_x19[0x6f] = lVar7;
      thunk_FUN_03afed3c(unaff_x19 + 0x6f,lVar7);
      FUN_07ebf6e8();
      lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
      FUN_07f052a0(lVar7,0);
      plVar8 = unaff_x19 + 0x69;
      unaff_x19[0x69] = lVar7;
      thunk_FUN_03afed3c(plVar8,lVar7);
      if (unaff_x19[0x69] != 0) {
        FUN_07e0aa30(unaff_x19[0x69],*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x788),0);
        if (*plVar8 != 0) {
          lVar7 = *(long *)(*plVar8 + 0x338);
          uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0849a030);
          FUN_05e3cc5c();
          puVar1 = PTR_DAT_08493e38;
          if (lVar7 != 0) {
            FUN_07f0b0a0(lVar7,uVar10,0);
            lVar7 = unaff_x19[0x69];
            uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
            FUN_064612a8();
            puVar1 = PTR_DAT_08494d40;
            if (lVar7 != 0) {
              FUN_0446886c(lVar7,uVar10,0,*(undefined8 *)PTR_DAT_08493e40);
              thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
              FUN_064612a8();
              FUN_0446886c();
              puVar1 = PTR_DAT_08493c28;
              plVar9 = (long *)unaff_x19[0x69];
              if (plVar9 != (long *)0x0) {
                lVar7 = (**(code **)(*plVar9 + 0x988))(plVar9,*(undefined8 *)(*plVar9 + 0x990));
                uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                FUN_064612a8();
                if (lVar7 != 0) {
                  FUN_0446886c(lVar7,uVar10,0,*(undefined8 *)PTR_DAT_08494d28);
                  puVar1 = PTR_DAT_08493c30;
                  plVar9 = (long *)*plVar8;
                  if (plVar9 != (long *)0x0) {
                    lVar7 = (**(code **)(*plVar9 + 0x988))(plVar9,*(undefined8 *)(*plVar9 + 0x990));
                    uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                    FUN_064612a8();
                    if (lVar7 != 0) {
                      FUN_0446886c(lVar7,uVar10,0,*(undefined8 *)PTR_DAT_08494d30);
                      in_stack_00000008 = unaff_x19[0x4d];
                      FUN_07e13e7c(&stack0x00000008,unaff_x19[0x69],0);
                      plVar9 = (long *)unaff_x19[0x69];
                      if (plVar9 != (long *)0x0) {
                        plVar9 = (long *)(**(code **)(*plVar9 + 0x988))
                                                   (plVar9,*(undefined8 *)(*plVar9 + 0x990));
                        if (plVar9 != (long *)0x0) {
                          (**(code **)(*plVar9 + 0x248))(plVar9,1,*(undefined8 *)(*plVar9 + 0x250));
                          plVar9 = (long *)*plVar8;
                          if (plVar9 != (long *)0x0) {
                            lVar7 = (**(code **)(*plVar9 + 0x988))
                                              (plVar9,*(undefined8 *)(*plVar9 + 0x990));
                            if (lVar7 != 0) {
                              uVar6 = FUN_07e05068(lVar7,0);
                              FUN_07e05088(lVar7,uVar6 & 0xfffffffd,0);
                              if (*plVar8 != 0) {
                                FUN_07e04a6c(*plVar8,*(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__
                                             ,0);
                                if ((*plVar8 != 0) &&
                                   (lVar7 = *(long *)(*plVar8 + 0x338), lVar7 != 0)) {
                                  FUN_07e04a6c(lVar7,0,0);
                                  puVar1 = Unity_Netcode_NetworkConfig_<>c_TypeInfo;
                                  if ((*plVar8 != 0) &&
                                     (lVar7 = *(long *)(*plVar8 + 0x330), lVar7 != 0)) {
                                    FUN_07e04a6c(lVar7,0,0);
                                    (**(code **)(*unaff_x19 + 0x248))();
                                    FUN_07e04898();
                                    FUN_07f40ad4();
                                    lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                                    FUN_05f21d70();
                                    unaff_x19[0x72] = lVar7;
                                    thunk_FUN_03afed3c(unaff_x19 + 0x72,lVar7);
                                    lVar7 = thunk_FUN_03ac74bc(*unaff_x23);
                                    FUN_066b5934();
                                    unaff_x19[0x73] = lVar7;
                                    thunk_FUN_03afed3c(unaff_x19 + 0x73,lVar7);
                                    FUN_07ec05dc();
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


