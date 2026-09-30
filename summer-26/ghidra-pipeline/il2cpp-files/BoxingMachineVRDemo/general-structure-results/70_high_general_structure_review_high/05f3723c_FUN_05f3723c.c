/*
FUNCTION_NAME: FUN_05f3723c
ENTRY_POINT: 05f3723c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_3
*/


void FUN_05f3723c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar3 = Method_Newtonsoft_Json_Serialization_DefaultContractResolver_FilterMembers__;
  puVar2 = Method_UnityEngine_Component_GetComponent<ParticleSystem>__;
  puVar1 = Method_UnityEngine_Component_GetComponent<OVRMesh>__;
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05f370dc with catch @ 05f37244
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05f37128 with catch @ 05f37248
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05f37144 with catch @ 05f3724c
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05f370bc with catch @ 05f37250
                        */
  if ((DAT_06b8405a & 1) == 0) {
    FUN_02d6084c(Method_UnityEngine_Component_GetComponent<OVRMesh>__);
    FUN_02d6084c(Method_Newtonsoft_Json_Serialization_DefaultContractResolver_CreateProperties__);
    FUN_02d6084c(
                Method_Newtonsoft_Json_Serialization_DefaultContractResolver_GetAttributeConstructor__
                );
    FUN_02d6084c(Method_Firebase_CharVector_IndexOf__);
    FUN_02d6084c(PTR_DAT_0675e660);
    FUN_02d6084c(Method_Newtonsoft_Json_Serialization_DefaultContractResolver_IsValidCallback__);
    FUN_02d6084c(
                Method_Newtonsoft_Json_Serialization_DefaultContractResolver_ShouldSerializeEntityMember__
                );
    FUN_02d6084c(
                Method_Newtonsoft_Json_Serialization_DefaultContractResolver_ThrowUnableToSerializeError__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<ValueTuple<EventModifiers,_char>>__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<ValueTuple<EventModifiers,_KeyCode>>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<PackageInitializationInfo>>_SetException__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<PackageInitializationInfo>>_SetStateMachine__
                );
    FUN_02d6084c(PTR_DAT_0675e1b8);
    FUN_02d6084c(Method_UnityEngine_Component_GetComponent<ParticleSystem>__);
    FUN_02d6084c(Method_Newtonsoft_Json_Serialization_DefaultContractResolver_FilterMembers__);
    FUN_02d6084c(
                Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<ValueTuple<NavigationDeviceType,_EventModifiers>>__
                );
    DAT_06b8405a = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  FUN_05f33054(param_1);
  uVar7 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_05ece52c(uVar7,0);
  *(undefined8 *)(param_1 + 0x310) = uVar7;
  thunk_FUN_02dd37b4(param_1 + 0x310,uVar7);
  lVar9 = *(long *)(param_1 + 0x310);
  uVar7 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  FUN_047d0110(uVar7,param_1,*(undefined8 *)puVar3,0);
  puVar1 = Method_Firebase_CharVector_IndexOf__;
  if (lVar9 != 0) {
    FUN_05ecd57c(lVar9,uVar7,0);
    *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(param_1 + 0x19c);
    uVar8 = FUN_0335c1c4(param_1,(undefined8 *)(param_1 + 0x2d0),*(undefined8 *)puVar1);
    if ((uVar8 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_060224f0(*(undefined8 *)
                    Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<ValueTuple<NavigationDeviceType,_EventModifiers>>__
                   ,param_1,0);
    }
    if (*(long *)(param_1 + 0x2d0) != 0) {
      FUN_0335bf1c(*(long *)(param_1 + 0x2d0),1,*(undefined8 *)(param_1 + 0x2f8),
                   *(undefined8 *)
                    Method_Newtonsoft_Json_Serialization_DefaultContractResolver_GetAttributeConstructor__
                  );
      puVar3 = 
      Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<ValueTuple<EventModifiers,_KeyCode>>__
      ;
      puVar2 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<PackageInitializationInfo>>_SetStateMachine__
      ;
      puVar1 = PTR_DAT_0675e1b8;
      lVar9 = *(long *)(param_1 + 0x2f8);
      if (lVar9 != 0) {
        iVar6 = *(int *)(lVar9 + 0x18) + -1;
        if (iVar6 < 0) {
LAB_05f374c0:
          uVar7 = FUN_06066c74(param_1,0);
          FUN_05f378cc(param_1,uVar7);
          puVar5 = 
          Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<ValueTuple<EventModifiers,_char>>__
          ;
          puVar4 = 
          Method_Newtonsoft_Json_Serialization_DefaultContractResolver_ShouldSerializeEntityMember__
          ;
          puVar3 = Method_Newtonsoft_Json_Serialization_DefaultContractResolver_IsValidCallback__;
          puVar2 = Method_Newtonsoft_Json_Serialization_DefaultContractResolver_CreateProperties__;
          if (*(long *)(param_1 + 0x210) != 0) {
            iVar6 = FUN_0417f050(*(long *)(param_1 + 0x210),
                                 *(undefined8 *)
                                  Method_Newtonsoft_Json_Serialization_DefaultContractResolver_CreateProperties__
                                );
            if (iVar6 < 1) {
              if (*(long *)(param_1 + 0x1f8) == 0) goto LAB_05f374bc;
              FUN_03aaceb0(&local_88,*(long *)(param_1 + 0x1f8),*(undefined8 *)puVar5);
              uStack_68 = uStack_80;
              local_70 = local_88;
              local_60 = local_78;
              while (uVar8 = FUN_04a7a4a0(&local_70,*(undefined8 *)puVar4), uVar7 = local_60,
                    (uVar8 & 1) != 0) {
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar8 = FUN_0606a004(uVar7,0,0);
                if ((uVar8 & 1) != 0) {
                  FUN_05f38a50(param_1,uVar7,*(undefined8 *)(param_1 + 0x210));
                }
              }
            }
            else {
              if (*(long *)(param_1 + 0x1f8) == 0) goto LAB_05f374bc;
              FUN_03aaceb0(&local_88,*(long *)(param_1 + 0x1f8),*(undefined8 *)puVar5);
              uStack_68 = uStack_80;
              local_70 = local_88;
              local_60 = local_78;
              iVar6 = 0;
              while (uVar8 = FUN_04a7a4a0(&local_70,*(undefined8 *)puVar4), uVar7 = local_60,
                    (uVar8 & 1) != 0) {
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar8 = FUN_0606a004(uVar7,0,0);
                if ((uVar8 & 1) != 0) {
                  FUN_05f38df0(param_1,uVar7,iVar6,*(undefined8 *)(param_1 + 0x210));
                  iVar6 = iVar6 + 1;
                }
              }
            }
            FUN_04a7a49c(&local_70,*(undefined8 *)puVar3);
            if (*(long *)(param_1 + 0x218) != 0) {
              iVar6 = FUN_0417f050(*(long *)(param_1 + 0x218),*(undefined8 *)puVar2);
              if (iVar6 < 1) {
                if (*(long *)(param_1 + 0x200) != 0) {
                  FUN_03aaceb0(&local_88,*(long *)(param_1 + 0x200),*(undefined8 *)puVar5);
                  uStack_68 = uStack_80;
                  local_70 = local_88;
                  local_60 = local_78;
                  while (uVar8 = FUN_04a7a4a0(&local_70,*(undefined8 *)puVar4), uVar7 = local_60,
                        (uVar8 & 1) != 0) {
                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    uVar8 = FUN_0606a004(uVar7,0,0);
                    if ((uVar8 & 1) != 0) {
                      FUN_05f38a50(param_1,uVar7,*(undefined8 *)(param_1 + 0x218));
                    }
                  }
                  goto LAB_05f37808;
                }
              }
              else if (*(long *)(param_1 + 0x200) != 0) {
                FUN_03aaceb0(&local_88,*(long *)(param_1 + 0x200),*(undefined8 *)puVar5);
                uStack_68 = uStack_80;
                local_70 = local_88;
                local_60 = local_78;
                iVar6 = 0;
                while (uVar8 = FUN_04a7a4a0(&local_70,*(undefined8 *)puVar4), uVar7 = local_60,
                      (uVar8 & 1) != 0) {
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar8 = FUN_0606a004(uVar7,0,0);
                  if ((uVar8 & 1) != 0) {
                    FUN_05f38df0(param_1,uVar7,iVar6,*(undefined8 *)(param_1 + 0x218));
                    iVar6 = iVar6 + 1;
                  }
                }
LAB_05f37808:
                FUN_04a7a49c(&local_70,*(undefined8 *)puVar3);
                FUN_05f3795c(param_1);
                return;
              }
            }
          }
        }
        else {
          do {
            lVar9 = FUN_03aac1c4(lVar9,iVar6,*(undefined8 *)puVar2);
            if (lVar9 == 0) break;
            uVar7 = FUN_060e9cf4(lVar9,0);
            uVar10 = *(undefined8 *)(param_1 + 0x2d0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(*(long *)puVar1);
            }
            uVar8 = FUN_0606a004(uVar7,uVar10,0);
            if ((uVar8 & 1) != 0) {
              if (*(long *)(param_1 + 0x2f8) == 0) break;
              FUN_03aadb8c(*(long *)(param_1 + 0x2f8),iVar6,*(undefined8 *)puVar3);
            }
            iVar6 = iVar6 + -1;
            if (iVar6 < 0) goto LAB_05f374c0;
            lVar9 = *(long *)(param_1 + 0x2f8);
          } while (lVar9 != 0);
        }
      }
    }
  }
LAB_05f374bc:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


