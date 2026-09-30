/*
FUNCTION_NAME: FUN_055d4f50
ENTRY_POINT: 055d4f50
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_16;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_055d4f50(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar2 = System_Func<MouseMoveEvent>_TypeInfo;
  if ((DAT_06b7f39d & 1) == 0) {
    FUN_02d6084c(System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo);
    FUN_02d6084c(PTR_DAT_0675e238);
    FUN_02d6084c(
                System_Collections_Generic_IEnumerable<InputBindingCompositeContext_PartBinding>_TypeInfo
                );
    FUN_02d6084c(System_Collections_Generic_IEnumerable<OVRPermissionsRequester_Permission>_TypeInfo
                );
    FUN_02d6084c(System_Collections_Generic_IEnumerable<OVRSemanticLabels_Classification>_TypeInfo);
    FUN_02d6084c(System_Func<MouseMoveEvent>_TypeInfo);
    FUN_02d6084c(
                System_Collections_Generic_IEnumerable<OpenXRInteractionFeature_ActionConfig>_TypeInfo
                );
    FUN_02d6084c(PTR_DAT_0676d7f8);
    FUN_02d6084c(
                System_Collections_Generic_IEnumerable<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
                );
    FUN_02d6084c(PTR_DAT_067648c0);
    FUN_02d6084c(System_Collections_Generic_IEnumerable<DebugUI_Table_Row>_TypeInfo);
    FUN_02d6084c(
                System_Collections_Generic_IEnumerator<Action<RenderTargetIdentifier,_CommandBuffer>>_TypeInfo
                );
    FUN_02d6084c(System_Collections_Generic_IEnumerator<IGrouping<string,_MemberInfo>>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_IEnumerator<KeyValuePair<FieldPath,_object>>_TypeInfo);
    FUN_02d6084c(
                System_Collections_Generic_IEnumerator<KeyValuePair<int,_ValueTuple<RTHandle,_int>>>_TypeInfo
                );
    FUN_02d6084c(System_Collections_Generic_IEnumerator<KeyValuePair<int,_object>>_TypeInfo);
    FUN_02d6084c(
                System_Collections_Generic_IEnumerator<KeyValuePair<LabelTarget,_LabelInfo>>_TypeInfo
                );
    FUN_02d6084c(System_Collections_Generic_IEnumerator<KeyValuePair<object,_object>>_TypeInfo);
    DAT_06b7f39d = 1;
  }
  uVar7 = FUN_055bd170(10,0);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar7;
  thunk_FUN_02dd37b4(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar7);
  uVar7 = FUN_055af274(0,0);
  puVar10 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  *puVar10 = uVar7;
  thunk_FUN_02dd37b4(puVar10,uVar7);
  puVar6 = System_Collections_Generic_IEnumerable<OVRSemanticLabels_Classification>_TypeInfo;
  puVar5 = System_Collections_Generic_IEnumerable<OVRPermissionsRequester_Permission>_TypeInfo;
  puVar4 = System_Collections_Generic_IEnumerable<InputBindingCompositeContext_PartBinding>_TypeInfo
  ;
  puVar3 = System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo;
  puVar1 = PTR_DAT_0675e238;
  plVar8 = *(long **)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  if (plVar8 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar8 + 0x288))(plVar8,0,*(undefined8 *)(*plVar8 + 0x290));
    puVar10 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *puVar10 = uVar7;
    thunk_FUN_02dd37b4(puVar10,uVar7);
    uVar7 = FUN_02d60934(*(undefined8 *)puVar6,0);
    puVar10 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *puVar10 = uVar7;
    thunk_FUN_02dd37b4(puVar10,uVar7);
    uVar7 = FUN_02d60934(*(undefined8 *)puVar5,0);
    puVar10 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    *puVar10 = uVar7;
    thunk_FUN_02dd37b4(puVar10,uVar7);
    uStack_48 = _UNK_0120af88;
    local_50 = _DAT_0120af80;
    uVar7 = FUN_02d6093c(*(undefined8 *)puVar3,&local_50);
    FUN_04f2efa4(uVar7,*(undefined8 *)puVar4,0);
    puVar10 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    *puVar10 = uVar7;
    thunk_FUN_02dd37b4(puVar10,uVar7);
    lVar9 = FUN_02d60934(*(undefined8 *)puVar1,0xc);
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x18) != 0) {
        *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_0676d7f8;
        thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
        if (1 < *(uint *)(lVar9 + 0x18)) {
          *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)PTR_DAT_067648c0;
          thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x28));
          if (2 < *(uint *)(lVar9 + 0x18)) {
            *(undefined8 *)(lVar9 + 0x30) =
                 *(undefined8 *)
                  System_Collections_Generic_IEnumerator<KeyValuePair<int,_ValueTuple<RTHandle,_int>>>_TypeInfo
            ;
            thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x30));
            if (3 < *(uint *)(lVar9 + 0x18)) {
              *(undefined8 *)(lVar9 + 0x38) =
                   *(undefined8 *)
                    System_Collections_Generic_IEnumerator<KeyValuePair<FieldPath,_object>>_TypeInfo
              ;
              thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x38));
              if (4 < *(uint *)(lVar9 + 0x18)) {
                *(undefined8 *)(lVar9 + 0x40) =
                     *(undefined8 *)
                      System_Collections_Generic_IEnumerable<OpenXRInteractionFeature_ActionConfig>_TypeInfo
                ;
                thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x40));
                if (5 < *(uint *)(lVar9 + 0x18)) {
                  *(undefined8 *)(lVar9 + 0x48) =
                       *(undefined8 *)
                        System_Collections_Generic_IEnumerator<IGrouping<string,_MemberInfo>>_TypeInfo
                  ;
                  thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x48));
                  if (6 < *(uint *)(lVar9 + 0x18)) {
                    *(undefined8 *)(lVar9 + 0x50) =
                         *(undefined8 *)
                          System_Collections_Generic_IEnumerable<DebugUI_Table_Row>_TypeInfo;
                    thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x50));
                    if (7 < *(uint *)(lVar9 + 0x18)) {
                      *(undefined8 *)(lVar9 + 0x58) =
                           *(undefined8 *)
                            System_Collections_Generic_IEnumerator<KeyValuePair<object,_object>>_TypeInfo
                      ;
                      thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x58));
                      if (8 < *(uint *)(lVar9 + 0x18)) {
                        *(undefined8 *)(lVar9 + 0x60) =
                             *(undefined8 *)
                              System_Collections_Generic_IEnumerator<Action<RenderTargetIdentifier,_CommandBuffer>>_TypeInfo
                        ;
                        thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x60));
                        if (9 < *(uint *)(lVar9 + 0x18)) {
                          *(undefined8 *)(lVar9 + 0x68) =
                               *(undefined8 *)
                                System_Collections_Generic_IEnumerator<KeyValuePair<LabelTarget,_LabelInfo>>_TypeInfo
                          ;
                          thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x68));
                          if (10 < *(uint *)(lVar9 + 0x18)) {
                            *(undefined8 *)(lVar9 + 0x70) =
                                 *(undefined8 *)
                                  System_Collections_Generic_IEnumerable<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
                            ;
                            thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x70));
                            if (0xb < *(uint *)(lVar9 + 0x18)) {
                              *(undefined8 *)(lVar9 + 0x78) =
                                   *(undefined8 *)
                                    System_Collections_Generic_IEnumerator<KeyValuePair<int,_object>>_TypeInfo
                              ;
                              thunk_FUN_02dd37b4();
                              plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
                              *plVar8 = lVar9;
                              thunk_FUN_02dd37b4(plVar8,lVar9);
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
      FUN_02d60af0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


