/*
FUNCTION_NAME: FUN_056e9880
ENTRY_POINT: 056e9880
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_15;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_056e9880(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  
  puVar2 = Method_System_Collections_Generic_Dictionary<byte,_PhotonTeam>_get_Item__;
  puVar3 = Method_Unity_Properties_ContainerPropertyBag<BackgroundRepeat>_AddProperty<Repeat>__;
  puVar1 = PTR_DAT_06646310;
  if ((DAT_06a54bd6 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06648638);
    FUN_02d4dc40(Method_System_Collections_Generic_Dictionary<byte,_PhotonTeam>_get_Item__);
    FUN_02d4dc40(Method_System_Collections_Generic_Dictionary<byte,_PhotonTeam>_get_Keys__);
    FUN_02d4dc40(PTR_DAT_06649ff0);
    FUN_02d4dc40(PTR_DAT_06646310);
    FUN_02d4dc40(Method_System_Collections_Generic_Dictionary<byte,_PhotonTeam>_set_Item__);
    FUN_02d4dc40(Method_System_Collections_Generic_Dictionary<byte,_RemoteVoice>__ctor__);
    FUN_02d4dc40(Method_System_Collections_Generic_Dictionary<byte,_RemoteVoice>_ContainsKey__);
    FUN_02d4dc40(
                Method_Unity_Properties_ContainerPropertyBag<BackgroundRepeat>_AddProperty<Repeat>__
                );
    FUN_02d4dc40(GravityAccountsLinkingHandlerDefualt_<>c__DisplayClass10_0_TypeInfo);
    FUN_02d4dc40(GravityAccountsLinkingHandlerDefualt_<>c__DisplayClass11_0_TypeInfo);
    FUN_02d4dc40(System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanChar_TypeInfo
                );
    FUN_02d4dc40(PTR_DAT_0665ef50);
    FUN_02d4dc40(Method_System_Collections_Generic_Dictionary<byte,_RemoteVoice>_GetEnumerator__);
    FUN_02d4dc40(PlayFab_ClientModels_GetTitleDataRequest_TypeInfo);
    FUN_02d4dc40(Method_System_Collections_Generic_Dictionary<byte,_RemoteVoice>_Remove__);
    FUN_02d4dc40(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
                );
    FUN_02d4dc40(Method_System_Collections_Generic_Dictionary<byte,_RemoteVoice>_TryGetValue__);
    FUN_02d4dc40(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualInt16_TypeInfo
                );
    FUN_02d4dc40(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualInt32_TypeInfo
                );
    FUN_02d4dc40(UnityEngine_Rendering_Universal_Internal_DeferredPass_<>c_TypeInfo);
    FUN_02d4dc40(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64_TypeInfo
                );
    FUN_02d4dc40(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16_TypeInfo
                );
    FUN_02d4dc40(RootMotion_FinalIK_Grounding_OnSphereCastDelegate_TypeInfo);
    FUN_02d4dc40(PTR_DAT_066495b8);
    FUN_02d4dc40(Method_System_Collections_Generic_Dictionary<byte,_RemoteVoice>_set_Item__);
    FUN_02d4dc40(Method_System_Collections_Generic_Dictionary<byte,_string>__ctor__);
    FUN_02d4dc40(UnityEngine_Rendering_Universal_HDRDebugViewPass_PassDataCIExy_TypeInfo);
    DAT_06a54bd6 = 1;
  }
  uVar8 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
  FUN_056f9390(uVar8,0);
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar8;
  thunk_FUN_02dc1ef0(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar8);
  lVar9 = FUN_02d4dd2c(*(undefined8 *)puVar1,0x13);
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) != 0) {
      *(undefined8 *)(lVar9 + 0x20) =
           *(undefined8 *)
            System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16_TypeInfo
      ;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x20));
      if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar9 + 0x28) =
             *(undefined8 *)UnityEngine_Rendering_Universal_Internal_DeferredPass_<>c_TypeInfo;
        thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x28));
        if (2 < *(uint *)(lVar9 + 0x18)) {
          *(undefined8 *)(lVar9 + 0x30) =
               *(undefined8 *)
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
          ;
          thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x30));
          if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar9 + 0x38) =
                 *(undefined8 *)PlayFab_ClientModels_GetTitleDataRequest_TypeInfo;
            thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x38));
            if (4 < *(uint *)(lVar9 + 0x18)) {
              *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)PTR_DAT_0665ef50;
              thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x40));
              if (5 < *(uint *)(lVar9 + 0x18)) {
                *(undefined8 *)(lVar9 + 0x48) =
                     *(undefined8 *)
                      System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualInt16_TypeInfo
                ;
                thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x48));
                if (6 < *(uint *)(lVar9 + 0x18)) {
                  *(undefined8 *)(lVar9 + 0x50) =
                       *(undefined8 *)
                        System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanChar_TypeInfo
                  ;
                  thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x50));
                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar9 + 0x58) =
                         *(undefined8 *)
                          System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64_TypeInfo
                    ;
                    thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x58));
                    if (8 < *(uint *)(lVar9 + 0x18)) {
                      *(undefined8 *)(lVar9 + 0x60) =
                           *(undefined8 *)
                            GravityAccountsLinkingHandlerDefualt_<>c__DisplayClass11_0_TypeInfo;
                      thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x60));
                      if (9 < *(uint *)(lVar9 + 0x18)) {
                        *(undefined8 *)(lVar9 + 0x68) =
                             *(undefined8 *)
                              RootMotion_FinalIK_Grounding_OnSphereCastDelegate_TypeInfo;
                        thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x68));
                        if (10 < *(uint *)(lVar9 + 0x18)) {
                          *(undefined8 *)(lVar9 + 0x70) =
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<byte,_RemoteVoice>_GetEnumerator__
                          ;
                          thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x70));
                          if (0xb < *(uint *)(lVar9 + 0x18)) {
                            *(undefined8 *)(lVar9 + 0x78) =
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<byte,_RemoteVoice>_set_Item__
                            ;
                            thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x78));
                            if (0xc < *(uint *)(lVar9 + 0x18)) {
                              *(undefined8 *)(lVar9 + 0x80) =
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<byte,_RemoteVoice>_Remove__
                              ;
                              thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x80));
                              if (0xd < *(uint *)(lVar9 + 0x18)) {
                                *(undefined8 *)(lVar9 + 0x88) =
                                     *(undefined8 *)
                                      GravityAccountsLinkingHandlerDefualt_<>c__DisplayClass10_0_TypeInfo
                                ;
                                thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x88));
                                if (0xe < *(uint *)(lVar9 + 0x18)) {
                                  *(undefined8 *)(lVar9 + 0x90) =
                                       *(undefined8 *)
                                        UnityEngine_Rendering_Universal_HDRDebugViewPass_PassDataCIExy_TypeInfo
                                  ;
                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x90));
                                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffff0) != 0) {
                                    *(undefined8 *)(lVar9 + 0x98) =
                                         *(undefined8 *)
                                          System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualInt32_TypeInfo
                                    ;
                                    thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0x98));
                                    if (0x10 < *(uint *)(lVar9 + 0x18)) {
                                      *(undefined8 *)(lVar9 + 0xa0) =
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_Dictionary<byte,_RemoteVoice>_TryGetValue__
                                      ;
                                      thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0xa0));
                                      if (0x11 < *(uint *)(lVar9 + 0x18)) {
                                        *(undefined8 *)(lVar9 + 0xa8) =
                                             *(undefined8 *)
                                              Method_System_Collections_Generic_Dictionary<byte,_string>__ctor__
                                        ;
                                        thunk_FUN_02dc1ef0((undefined8 *)(lVar9 + 0xa8));
                                        puVar7 = 
                                        Method_System_Collections_Generic_Dictionary<byte,_RemoteVoice>_ContainsKey__
                                        ;
                                        puVar6 = 
                                        Method_System_Collections_Generic_Dictionary<byte,_RemoteVoice>__ctor__
                                        ;
                                        puVar5 = 
                                        Method_System_Collections_Generic_Dictionary<byte,_PhotonTeam>_set_Item__
                                        ;
                                        puVar4 = 
                                        Method_System_Collections_Generic_Dictionary<byte,_PhotonTeam>_get_Keys__
                                        ;
                                        puVar2 = PTR_DAT_06649ff0;
                                        puVar1 = PTR_DAT_06648638;
                                        if (0x12 < *(uint *)(lVar9 + 0x18)) {
                                          *(undefined8 *)(lVar9 + 0xb0) =
                                               *(undefined8 *)PTR_DAT_066495b8;
                                          thunk_FUN_02dc1ef0();
                                          plVar10 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
                                          *plVar10 = lVar9;
                                          thunk_FUN_02dc1ef0(plVar10,lVar9);
                                          uVar8 = FUN_02d4dd2c(*(undefined8 *)puVar2,0x20);
                                          FUN_04f3287c(uVar8,*(undefined8 *)puVar5,0);
                                          puVar11 = (undefined8 *)
                                                    (*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
                                          *puVar11 = uVar8;
                                          thunk_FUN_02dc1ef0(puVar11,uVar8);
                                          uVar8 = FUN_02d4dd2c(*(undefined8 *)puVar1,6);
                                          FUN_04f3287c(uVar8,*(undefined8 *)puVar6,0);
                                          puVar11 = (undefined8 *)
                                                    (*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
                                          *puVar11 = uVar8;
                                          thunk_FUN_02dc1ef0(puVar11,uVar8);
                                          uVar8 = FUN_02d4dd2c(*(undefined8 *)puVar4,0x80);
                                          FUN_04f3287c(uVar8,*(undefined8 *)puVar7,0);
                                          puVar11 = (undefined8 *)
                                                    (*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
                                          *puVar11 = uVar8;
                                          thunk_FUN_02dc1ef0(puVar11,uVar8);
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
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d4def0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


