/*
FUNCTION_NAME: FUN_058bf39c
ENTRY_POINT: 058bf39c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_15;telemetry_or_network_hits_4
*/


void FUN_058bf39c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  puVar1 = UnityEngine_Experimental_GlobalIllumination_Lightmapping_RequestLightsDelegate_TypeInfo;
  if ((DAT_06b80a28 & 1) == 0) {
    FUN_02d6084c(
                UnityEngine_Experimental_GlobalIllumination_Lightmapping_RequestLightsDelegate_TypeInfo
                );
    FUN_02d6084c(System_Collections_ListDictionaryInternal_DictionaryNode_TypeInfo);
    FUN_02d6084c(PTR_DAT_06785ff8);
    FUN_02d6084c(PTR_DAT_0675e1a8);
    FUN_02d6084c(System_Collections_ListDictionaryInternal_NodeEnumerator_TypeInfo);
    FUN_02d6084c(System_Collections_ListDictionaryInternal_NodeKeyValueCollection_TypeInfo);
    FUN_02d6084c(PTR_DAT_06786000);
    FUN_02d6084c(UnityEngine_UIElements_ListView_UxmlFactory_TypeInfo);
    FUN_02d6084c(UnityEngine_UIElements_ListViewDragger_DragPosition_TypeInfo);
    FUN_02d6084c(
                UnityEngine_XR_OpenXR_Features_Meta_LoadAllSharedAnchors_IncrementalResultsDelegate_TypeInfo
                );
    FUN_02d6084c(
                System_Linq_Expressions_Interpreter_EqualInstruction_EqualBooleanLiftedToNull_TypeInfo
                );
    FUN_02d6084c(Unity_VisualScripting_FullSerializer_fsConverter_TypeInfo);
    FUN_02d6084c(UnityEngine_XR_OpenXR_Features_Meta_LoadAllSharedAnchors_LoadAsyncDelegate_TypeInfo
                );
    FUN_02d6084c(System_LocalAppContext_<>c_TypeInfo);
    FUN_02d6084c(System_Linq_Expressions_Interpreter_LocalVariables_VariableScope_TypeInfo);
    FUN_02d6084c(Assets_SimpleLocalization_Scripts_LocalizationManager_<>c_TypeInfo);
    DAT_06b80a28 = 1;
  }
  *(undefined8 *)(param_1 + 0xa0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  FUN_0504920c(param_1,0);
  lVar2 = Unity_Mathematics_math__double3x2(*(undefined8 *)puVar1,0);
  plVar4 = (long *)(param_1 + 0x10);
  *plVar4 = lVar2;
  thunk_FUN_02dd37b4(plVar4,lVar2);
  if (*plVar4 != 0) {
    lVar2 = FUN_05817f04(*plVar4,*(undefined8 *)System_LocalAppContext_<>c_TypeInfo,1,0);
    plVar4 = (long *)(param_1 + 0x18);
    *plVar4 = lVar2;
    thunk_FUN_02dd37b4(plVar4,lVar2);
    if (*plVar4 != 0) {
      uVar3 = FUN_05817c00(*plVar4,*(undefined8 *)PTR_DAT_0675e1a8,1,0);
      *(undefined8 *)(param_1 + 0x28) = uVar3;
      thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x28),uVar3);
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar3 = FUN_05817c00(*(long *)(param_1 + 0x18),
                             *(undefined8 *)
                              Assets_SimpleLocalization_Scripts_LocalizationManager_<>c_TypeInfo,1,0
                            );
        *(undefined8 *)(param_1 + 0x30) = uVar3;
        thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x30),uVar3);
        if (*(long *)(param_1 + 0x18) != 0) {
          uVar3 = FUN_05817c00(*(long *)(param_1 + 0x18),
                               *(undefined8 *)
                                System_Linq_Expressions_Interpreter_LocalVariables_VariableScope_TypeInfo
                               ,1,0);
          *(undefined8 *)(param_1 + 0x38) = uVar3;
          thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x38),uVar3);
          if (*(long *)(param_1 + 0x10) != 0) {
            lVar2 = FUN_05817f04(*(long *)(param_1 + 0x10),
                                 *(undefined8 *)
                                  Unity_VisualScripting_FullSerializer_fsConverter_TypeInfo,1,0);
            plVar4 = (long *)(param_1 + 0x40);
            *plVar4 = lVar2;
            thunk_FUN_02dd37b4(plVar4,lVar2);
            if (*plVar4 != 0) {
              uVar3 = FUN_05817c00(*plVar4,*(undefined8 *)
                                            System_Collections_ListDictionaryInternal_DictionaryNode_TypeInfo
                                   ,1,0);
              *(undefined8 *)(param_1 + 0x50) = uVar3;
              thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x50),uVar3);
              if (*(long *)(param_1 + 0x40) != 0) {
                uVar3 = FUN_05817c00(*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_06785ff8,1,0);
                *(undefined8 *)(param_1 + 0x58) = uVar3;
                thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x58),uVar3);
                if (*(long *)(param_1 + 0x40) != 0) {
                  uVar3 = FUN_05817c00(*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_06786000,1,0
                                      );
                  *(undefined8 *)(param_1 + 0x60) = uVar3;
                  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x60),uVar3);
                  if (*(long *)(param_1 + 0x40) != 0) {
                    uVar3 = FUN_05817c00(*(long *)(param_1 + 0x40),
                                         *(undefined8 *)
                                          System_Linq_Expressions_Interpreter_EqualInstruction_EqualBooleanLiftedToNull_TypeInfo
                                         ,1,0);
                    *(undefined8 *)(param_1 + 0x68) = uVar3;
                    thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x68),uVar3);
                    if (*(long *)(param_1 + 0x40) != 0) {
                      uVar3 = FUN_05817c00(*(long *)(param_1 + 0x40),
                                           *(undefined8 *)
                                            System_Collections_ListDictionaryInternal_NodeEnumerator_TypeInfo
                                           ,1,0);
                      *(undefined8 *)(param_1 + 0x70) = uVar3;
                      thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x70),uVar3);
                      if (*(long *)(param_1 + 0x40) != 0) {
                        uVar3 = FUN_05817c00(*(long *)(param_1 + 0x40),
                                             *(undefined8 *)
                                              UnityEngine_XR_OpenXR_Features_Meta_LoadAllSharedAnchors_IncrementalResultsDelegate_TypeInfo
                                             ,1,0);
                        *(undefined8 *)(param_1 + 0x78) = uVar3;
                        thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x78),uVar3);
                        if (*(long *)(param_1 + 0x40) != 0) {
                          uVar3 = FUN_05817c00(*(long *)(param_1 + 0x40),
                                               *(undefined8 *)
                                                UnityEngine_UIElements_ListViewDragger_DragPosition_TypeInfo
                                               ,1,0);
                          *(undefined8 *)(param_1 + 0x80) = uVar3;
                          thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x80),uVar3);
                          if (*(long *)(param_1 + 0x40) != 0) {
                            uVar3 = FUN_05817c00(*(long *)(param_1 + 0x40),
                                                 *(undefined8 *)
                                                  System_Collections_ListDictionaryInternal_NodeKeyValueCollection_TypeInfo
                                                 ,1,0);
                            *(undefined8 *)(param_1 + 0x88) = uVar3;
                            thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x88),uVar3);
                            if (*(long *)(param_1 + 0x40) != 0) {
                              uVar3 = FUN_05817c00(*(long *)(param_1 + 0x40),
                                                   *(undefined8 *)
                                                                                                        
                                                  UnityEngine_UIElements_ListView_UxmlFactory_TypeInfo
                                                  ,1,0);
                              *(undefined8 *)(param_1 + 0x90) = uVar3;
                              thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x90),uVar3);
                              if (*(long *)(param_1 + 0x40) != 0) {
                                uVar3 = FUN_05817c00(*(long *)(param_1 + 0x40),
                                                     *(undefined8 *)
                                                                                                            
                                                  UnityEngine_XR_OpenXR_Features_Meta_LoadAllSharedAnchors_LoadAsyncDelegate_TypeInfo
                                                  ,1,0);
                                *(undefined8 *)(param_1 + 0x98) = uVar3;
                                thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x98),uVar3);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


