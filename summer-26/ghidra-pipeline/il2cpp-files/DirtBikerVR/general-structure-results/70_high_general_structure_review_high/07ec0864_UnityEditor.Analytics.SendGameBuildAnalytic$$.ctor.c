/*
FUNCTION_NAME: UnityEditor.Analytics.SendGameBuildAnalytic$$.ctor
ENTRY_POINT: 07ec0864
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEditor_Analytics_SendGameBuildAnalytic___ctor(void)

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
  long *plVar10;
  undefined8 *puVar11;
  long *unaff_x19;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  long *unaff_x22;
  long in_stack_00000008;
  
  FUN_03a8a718();
  FUN_03a8a718(Method_UnityEngine_UIElements_BaseField<Vector3>_set_showMixedValue__);
  FUN_03a8a718(Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__);
  FUN_03a8a718(Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_visualInput__);
  FUN_03a8a718(Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__);
  FUN_03a8a718(Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__);
  *(undefined1 *)(unaff_x20 + 0xca9) = 1;
  lVar8 = *unaff_x22;
  in_stack_00000008 = 0;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar8 = *unaff_x22;
  }
  puVar3 = PTR_DAT_08488640;
  puVar11 = *(undefined8 **)(lVar8 + 0xb8);
  lVar12 = puVar11[1];
  if (lVar12 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar11 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar13 = *puVar11;
    lVar12 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
    FUN_066b5934(lVar12,uVar13,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_visualInput__,0);
    plVar9 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar9 = lVar12;
    thunk_FUN_03afed3c(plVar9,lVar12);
  }
  puVar6 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__;
  puVar5 = Method_UnityEngine_UIElements_BaseField<Vector3>_set_showMixedValue__;
  puVar4 = PTR_DAT_08493c18;
  puVar2 = PTR_DAT_08487110;
  puVar1 = PTR_DAT_08487108;
  if (unaff_x19 != (long *)0x0) {
    unaff_x19[0x61] = lVar12;
    thunk_FUN_03afed3c(unaff_x19 + 0x61,lVar12);
    uVar13 = *(undefined8 *)puVar6;
    *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
    unaff_x19[0x67] = 0x41b0000000000000;
    lVar8 = thunk_FUN_03ac74bc(uVar13);
    FUN_0679343c(lVar8,0);
    unaff_x19[0x6d] = lVar8;
    thunk_FUN_03afed3c(unaff_x19 + 0x6d,lVar8);
    lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
    System_Collections_Generic_List<SpawnWaypoint>__TrimExcess(lVar8,*(undefined8 *)puVar2);
    unaff_x19[0x6e] = lVar8;
    thunk_FUN_03afed3c(unaff_x19 + 0x6e,lVar8);
    FUN_07db5314();
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07e0aa30();
    lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
    FUN_07ec0dd8();
    puVar1 = PTR_DAT_08495778;
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x28) = unaff_x19[0x6e];
      thunk_FUN_03afed3c();
      unaff_x19[0x6f] = lVar8;
      thunk_FUN_03afed3c(unaff_x19 + 0x6f,lVar8);
      FUN_07ebf6e8();
      lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
      FUN_07f052a0(lVar8,0);
      plVar9 = unaff_x19 + 0x69;
      unaff_x19[0x69] = lVar8;
      thunk_FUN_03afed3c(plVar9,lVar8);
      if (unaff_x19[0x69] != 0) {
        FUN_07e0aa30(unaff_x19[0x69],*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x788),0);
        if (*plVar9 != 0) {
          lVar8 = *(long *)(*plVar9 + 0x338);
          uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0849a030);
          FUN_05e3cc5c();
          puVar1 = PTR_DAT_08493e38;
          if (lVar8 != 0) {
            FUN_07f0b0a0(lVar8,uVar13,0);
            lVar8 = unaff_x19[0x69];
            uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
            FUN_064612a8();
            puVar1 = PTR_DAT_08494d40;
            if (lVar8 != 0) {
              FUN_0446886c(lVar8,uVar13,0,*(undefined8 *)PTR_DAT_08493e40);
              thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
              FUN_064612a8();
              FUN_0446886c();
              puVar1 = PTR_DAT_08493c28;
              plVar10 = (long *)unaff_x19[0x69];
              if (plVar10 != (long *)0x0) {
                lVar8 = (**(code **)(*plVar10 + 0x988))(plVar10,*(undefined8 *)(*plVar10 + 0x990));
                uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                FUN_064612a8();
                if (lVar8 != 0) {
                  FUN_0446886c(lVar8,uVar13,0,*(undefined8 *)PTR_DAT_08494d28);
                  puVar1 = PTR_DAT_08493c30;
                  plVar10 = (long *)*plVar9;
                  if (plVar10 != (long *)0x0) {
                    lVar8 = (**(code **)(*plVar10 + 0x988))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x990));
                    uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                    FUN_064612a8();
                    if (lVar8 != 0) {
                      FUN_0446886c(lVar8,uVar13,0,*(undefined8 *)PTR_DAT_08494d30);
                      in_stack_00000008 = unaff_x19[0x4d];
                      FUN_07e13e7c(&stack0x00000008,unaff_x19[0x69],0);
                      plVar10 = (long *)unaff_x19[0x69];
                      if (plVar10 != (long *)0x0) {
                        plVar10 = (long *)(**(code **)(*plVar10 + 0x988))
                                                    (plVar10,*(undefined8 *)(*plVar10 + 0x990));
                        if (plVar10 != (long *)0x0) {
                          (**(code **)(*plVar10 + 0x248))
                                    (plVar10,1,*(undefined8 *)(*plVar10 + 0x250));
                          plVar10 = (long *)*plVar9;
                          if (plVar10 != (long *)0x0) {
                            lVar8 = (**(code **)(*plVar10 + 0x988))
                                              (plVar10,*(undefined8 *)(*plVar10 + 0x990));
                            if (lVar8 != 0) {
                              uVar7 = FUN_07e05068(lVar8,0);
                              FUN_07e05088(lVar8,uVar7 & 0xfffffffd,0);
                              if (*plVar9 != 0) {
                                FUN_07e04a6c(*plVar9,*(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__
                                             ,0);
                                if ((*plVar9 != 0) &&
                                   (lVar8 = *(long *)(*plVar9 + 0x338), lVar8 != 0)) {
                                  FUN_07e04a6c(lVar8,0,0);
                                  puVar1 = Unity_Netcode_NetworkConfig_<>c_TypeInfo;
                                  if ((*plVar9 != 0) &&
                                     (lVar8 = *(long *)(*plVar9 + 0x330), lVar8 != 0)) {
                                    FUN_07e04a6c(lVar8,0,0);
                                    (**(code **)(*unaff_x19 + 0x248))();
                                    FUN_07e04898();
                                    FUN_07f40ad4();
                                    lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                                    FUN_05f21d70();
                                    unaff_x19[0x72] = lVar8;
                                    thunk_FUN_03afed3c(unaff_x19 + 0x72,lVar8);
                                    lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
                                    FUN_066b5934();
                                    unaff_x19[0x73] = lVar8;
                                    thunk_FUN_03afed3c(unaff_x19 + 0x73,lVar8);
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


