/*
FUNCTION_NAME: FUN_06187708
ENTRY_POINT: 06187708
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_06187708(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_06767628;
  if ((DAT_06b8ade4 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06767628);
    FUN_02d6084c(PTR_DAT_06767d10);
    FUN_02d6084c(
                Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_OnColumnChanged__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_OnColumnClicked__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_OnColumnControlGeometryChanged__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_OnColumnRemoved__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_OnColumnReordered__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_OnColumnResized__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_OnGeometryChanged__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_OnMoveManipulatorActivated__
                );
    FUN_02d6084c(Method_System_Linq_Expressions_Interpreter_NotInstruction_Create__);
    FUN_02d6084c(
                Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ScheduleDoLayout__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_UpdateSortedColumns__
                );
    FUN_02d6084c(Method_UnityEngine_UIElements_MultiColumnController_BindItem<object>__);
    FUN_02d6084c(
                Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AddProperty<Visibility>__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AddProperty<WhiteSpace>__
                );
    FUN_02d6084c(Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AddProperty<Wrap>__);
    FUN_02d6084c(Method_System_Resources_ResourceManager__ctor__);
    FUN_02d6084c(Method_System_Resources_ResourceManager_GetSatelliteContractVersion__);
    FUN_02d6084c(Method_System_Resources_ResourceManager_GetString__);
    FUN_02d6084c(Method_System_Resources_ResourceReader_AllocateStringForNameIndex__);
    FUN_02d6084c(Method_System_Resources_ResourceReader_CompareStringEqualsName__);
    FUN_02d6084c(Method_System_Resources_ResourceReader_DeserializeObject__);
    FUN_02d6084c(Method_System_Resources_ResourceReader_FindPosForResource__);
    FUN_02d6084c(Method_System_Resources_ResourceReader_FindType__);
    FUN_02d6084c(Method_System_Resources_ResourceReader_GetEnumerator__);
    FUN_02d6084c(Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AddProperty<Vector3>__
                );
    DAT_06b8ade4 = 1;
  }
  lVar5 = *(long *)puVar2;
  local_48 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar2;
  }
  puVar4 = Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AddProperty<Vector3>__;
  puVar1 = PTR_DAT_0675e258;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar5 != 0) {
    local_48 = *(undefined8 *)(lVar5 + 0x28);
    lVar5 = *(long *)(PTR_DAT_0675e258 + 0x38);
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
    uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x28) + 0x20,0);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar5);
      lVar5 = *(long *)puVar4;
    }
    puVar3 = PTR_DAT_06767d10;
    lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x68);
    if (lVar9 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar5);
        lVar5 = *(long *)puVar4;
      }
      uVar10 = **(undefined8 **)(lVar5 + 0xb8);
      lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_OnMoveManipulatorActivated__
                                );
      FUN_043637b4(lVar9,uVar10,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AddProperty<Visibility>__
                   ,0);
      plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68);
      *plVar8 = lVar9;
      thunk_FUN_02dd37b4(plVar8,lVar9);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_0618615c(&local_48,uVar6,uVar7,lVar9);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 != 0) {
      local_48 = *(undefined8 *)(lVar5 + 0x28);
      lVar5 = *(long *)(puVar1 + 0x38);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
      uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x30) + 0x20,0);
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar5);
        lVar5 = *(long *)puVar4;
      }
      lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x70);
      if (lVar9 == 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(lVar5);
          lVar5 = *(long *)puVar4;
        }
        uVar10 = **(undefined8 **)(lVar5 + 0xb8);
        lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                    Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_OnGeometryChanged__
                                  );
        FUN_04363d10(lVar9,uVar10,*(undefined8 *)Method_System_Resources_ResourceManager__ctor__,0);
        plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x70);
        *plVar8 = lVar9;
        thunk_FUN_02dd37b4(plVar8,lVar9);
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_0618615c(&local_48,uVar6,uVar7,lVar9);
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar5 != 0) {
        local_48 = *(undefined8 *)(lVar5 + 0x28);
        lVar5 = *(long *)(puVar1 + 0x38);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
        uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x88) + 0x20,0);
        lVar5 = *(long *)puVar4;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(lVar5);
          lVar5 = *(long *)puVar4;
        }
        lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x78);
        if (lVar9 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(lVar5);
            lVar5 = *(long *)puVar4;
          }
          uVar10 = **(undefined8 **)(lVar5 + 0xb8);
          lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                      Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_UpdateSortedColumns__
                                    );
          FUN_0436393c(lVar9,uVar10,
                       *(undefined8 *)
                        Method_System_Resources_ResourceManager_GetSatelliteContractVersion__,0);
          plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x78);
          *plVar8 = lVar9;
          thunk_FUN_02dd37b4(plVar8,lVar9);
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_0618615c(&local_48,uVar6,uVar7,lVar9);
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar5 = *(long *)puVar2;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar5 != 0) {
          local_48 = *(undefined8 *)(lVar5 + 0x28);
          lVar5 = *(long *)(puVar1 + 0x38);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
          uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x48) + 0x20,0);
          lVar5 = *(long *)puVar4;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(lVar5);
            lVar5 = *(long *)puVar4;
          }
          lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x80);
          if (lVar9 == 0) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(lVar5);
              lVar5 = *(long *)puVar4;
            }
            uVar10 = **(undefined8 **)(lVar5 + 0xb8);
            lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                        Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_OnColumnRemoved__
                                      );
            FUN_04363ac4(lVar9,uVar10,
                         *(undefined8 *)Method_System_Resources_ResourceManager_GetString__,0);
            plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x80);
            *plVar8 = lVar9;
            thunk_FUN_02dd37b4(plVar8,lVar9);
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_0618615c(&local_48,uVar6,uVar7,lVar9);
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar5 = *(long *)puVar2;
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
          if (lVar5 != 0) {
            local_48 = *(undefined8 *)(lVar5 + 0x28);
            lVar5 = *(long *)(puVar1 + 0x38);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
            uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x68) + 0x20,0);
            lVar5 = *(long *)puVar4;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(lVar5);
              lVar5 = *(long *)puVar4;
            }
            lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x88);
            if (lVar9 == 0) {
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(lVar5);
                lVar5 = *(long *)puVar4;
              }
              uVar10 = **(undefined8 **)(lVar5 + 0xb8);
              lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                          Method_UnityEngine_UIElements_MultiColumnController_BindItem<object>__
                                        );
              FUN_04363b88(lVar9,uVar10,
                           *(undefined8 *)
                            Method_System_Resources_ResourceReader_AllocateStringForNameIndex__,0);
              plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x88);
              *plVar8 = lVar9;
              thunk_FUN_02dd37b4(plVar8,lVar9);
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_0618615c(&local_48,uVar6,uVar7,lVar9);
            lVar5 = *(long *)puVar2;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar5 = *(long *)puVar2;
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
            if (lVar5 != 0) {
              local_48 = *(undefined8 *)(lVar5 + 0x28);
              lVar5 = *(long *)(puVar1 + 0x38);
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
              uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x18) + 0x20,0);
              lVar5 = *(long *)puVar4;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(lVar5);
                lVar5 = *(long *)puVar4;
              }
              lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x90);
              if (lVar9 == 0) {
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(lVar5);
                  lVar5 = *(long *)puVar4;
                }
                uVar10 = **(undefined8 **)(lVar5 + 0xb8);
                lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                            Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_OnColumnReordered__
                                          );
                FUN_04363878(lVar9,uVar10,
                             *(undefined8 *)
                              Method_System_Resources_ResourceReader_CompareStringEqualsName__,0);
                plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x90);
                *plVar8 = lVar9;
                thunk_FUN_02dd37b4(plVar8,lVar9);
              }
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_0618615c(&local_48,uVar6,uVar7,lVar9);
              lVar5 = *(long *)puVar2;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
                lVar5 = *(long *)puVar2;
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
              if (lVar5 != 0) {
                local_48 = *(undefined8 *)(lVar5 + 0x28);
                lVar5 = *(long *)(puVar1 + 0x38);
                if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
                uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x40) + 0x20,0);
                lVar5 = *(long *)puVar4;
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(lVar5);
                  lVar5 = *(long *)puVar4;
                }
                lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x98);
                if (lVar9 == 0) {
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(lVar5);
                    lVar5 = *(long *)puVar4;
                  }
                  uVar10 = **(undefined8 **)(lVar5 + 0xb8);
                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                              Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_OnColumnClicked__
                                            );
                  FUN_04363e98(lVar9,uVar10,
                               *(undefined8 *)
                                Method_System_Resources_ResourceReader_DeserializeObject__,0);
                  plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x98);
                  *plVar8 = lVar9;
                  thunk_FUN_02dd37b4(plVar8,lVar9);
                }
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_0618615c(&local_48,uVar6,uVar7,lVar9);
                lVar5 = *(long *)puVar2;
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                  lVar5 = *(long *)puVar2;
                }
                lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                if (lVar5 != 0) {
                  local_48 = *(undefined8 *)(lVar5 + 0x28);
                  lVar5 = *(long *)(puVar1 + 0x38);
                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
                  uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x50) + 0x20,0);
                  lVar5 = *(long *)puVar4;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(lVar5);
                    lVar5 = *(long *)puVar4;
                  }
                  lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xa0);
                  if (lVar9 == 0) {
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4(lVar5);
                      lVar5 = *(long *)puVar4;
                    }
                    uVar10 = **(undefined8 **)(lVar5 + 0xb8);
                    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ScheduleDoLayout__
                                              );
                    FUN_04363f5c(lVar9,uVar10,
                                 *(undefined8 *)
                                  Method_System_Resources_ResourceReader_FindPosForResource__,0);
                    plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa0);
                    *plVar8 = lVar9;
                    thunk_FUN_02dd37b4(plVar8,lVar9);
                  }
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  FUN_0618615c(&local_48,uVar6,uVar7,lVar9);
                  lVar5 = *(long *)puVar2;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                    lVar5 = *(long *)puVar2;
                  }
                  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                  if (lVar5 != 0) {
                    local_48 = *(undefined8 *)(lVar5 + 0x28);
                    lVar5 = *(long *)(puVar1 + 0x38);
                    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
                    uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x70) + 0x20,0);
                    lVar5 = *(long *)puVar4;
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4(lVar5);
                      lVar5 = *(long *)puVar4;
                    }
                    lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xa8);
                    if (lVar9 == 0) {
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4(lVar5);
                        lVar5 = *(long *)puVar4;
                      }
                      uVar10 = **(undefined8 **)(lVar5 + 0xb8);
                      lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                  Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_OnColumnControlGeometryChanged__
                                                );
                      FUN_04364020(lVar9,uVar10,
                                   *(undefined8 *)Method_System_Resources_ResourceReader_FindType__,
                                   0);
                      plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa8);
                      *plVar8 = lVar9;
                      thunk_FUN_02dd37b4(plVar8,lVar9);
                    }
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    FUN_0618615c(&local_48,uVar6,uVar7,lVar9);
                    lVar5 = *(long *)puVar2;
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                      lVar5 = *(long *)puVar2;
                    }
                    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                    if (lVar5 != 0) {
                      local_48 = *(undefined8 *)(lVar5 + 0x28);
                      lVar5 = *(long *)(puVar1 + 0x38);
                      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
                      uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x78) + 0x20,0);
                      lVar5 = *(long *)puVar4;
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4(lVar5);
                        lVar5 = *(long *)puVar4;
                      }
                      lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xb0);
                      if (lVar9 == 0) {
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4(lVar5);
                          lVar5 = *(long *)puVar4;
                        }
                        uVar10 = **(undefined8 **)(lVar5 + 0xb8);
                        lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_OnColumnResized__
                                                  );
                        FUN_04363dd4(lVar9,uVar10,
                                     *(undefined8 *)
                                      Method_System_Resources_ResourceReader_GetEnumerator__,0);
                        plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb0);
                        *plVar8 = lVar9;
                        thunk_FUN_02dd37b4(plVar8,lVar9);
                      }
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      FUN_0618615c(&local_48,uVar6,uVar7,lVar9);
                      lVar5 = *(long *)puVar2;
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                        lVar5 = *(long *)puVar2;
                      }
                      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                      if (lVar5 != 0) {
                        local_48 = *(undefined8 *)(lVar5 + 0x28);
                        lVar5 = *(long *)(puVar1 + 0x38);
                        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4();
                        }
                        uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
                        uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x80) + 0x20,0);
                        lVar5 = *(long *)puVar4;
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4(lVar5);
                          lVar5 = *(long *)puVar4;
                        }
                        lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xb8);
                        if (lVar9 == 0) {
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4(lVar5);
                            lVar5 = *(long *)puVar4;
                          }
                          uVar10 = **(undefined8 **)(lVar5 + 0xb8);
                          lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_OnColumnChanged__
                                                  );
                          FUN_04363a00(lVar9,uVar10,
                                       *(undefined8 *)
                                        Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AddProperty<WhiteSpace>__
                                       ,0);
                          plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb8);
                          *plVar8 = lVar9;
                          thunk_FUN_02dd37b4(plVar8,lVar9);
                        }
                        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4();
                        }
                        FUN_0618615c(&local_48,uVar6,uVar7,lVar9);
                        lVar5 = *(long *)puVar2;
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4();
                          lVar5 = *(long *)puVar2;
                        }
                        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                        if (lVar5 != 0) {
                          local_48 = *(undefined8 *)(lVar5 + 0x28);
                          lVar5 = *(long *)(puVar1 + 0x90);
                          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4();
                          }
                          uVar6 = FUN_05015c2c(lVar5 + 0x20,0);
                          uVar7 = FUN_05015c2c(*(long *)(puVar1 + 0x38) + 0x20,0);
                          lVar5 = *(long *)puVar4;
                          if (*(int *)(lVar5 + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4(lVar5);
                            lVar5 = *(long *)puVar4;
                          }
                          lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xc0);
                          if (lVar9 == 0) {
                            if (*(int *)(lVar5 + 0xe4) == 0) {
                              thunk_FUN_02dbd7b4(lVar5);
                              lVar5 = *(long *)puVar4;
                            }
                            uVar10 = **(undefined8 **)(lVar5 + 0xb8);
                            lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                
                                                  Method_System_Linq_Expressions_Interpreter_NotInstruction_Create__
                                                  );
                            FUN_0439b50c(lVar9,uVar10,
                                         *(undefined8 *)
                                          Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AddProperty<Wrap>__
                                         ,0);
                            plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xc0);
                            *plVar8 = lVar9;
                            thunk_FUN_02dd37b4(plVar8,lVar9);
                          }
                          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4();
                          }
                          FUN_0618615c(&local_48,uVar6,uVar7,lVar9);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


