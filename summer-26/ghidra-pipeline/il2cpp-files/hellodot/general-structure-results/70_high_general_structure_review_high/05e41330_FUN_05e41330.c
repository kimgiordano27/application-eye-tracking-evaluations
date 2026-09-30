/*
FUNCTION_NAME: FUN_05e41330
ENTRY_POINT: 05e41330
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_15;telemetry_or_network_hits_8
*/


void FUN_05e41330(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined2 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  
  if ((DAT_06a7b435 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cad60);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_ICollection<JsonSchemaModel>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_ICollection<JsonSchema>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dcfd8);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<ToyConfig>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<CreatureIconService_QueuedRequest,_bool>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Collections_Generic_IEnumerator<KeyValuePair<BodyPoseComparerActiveState_JointComparerConfig,_BodyPoseComparerActiveState_BodyPoseComparerFeatureState>>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<CaptureIconService_CaptureRequest,_bool>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<DebugSettings_Option,_string>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Type,_ReflectionObject>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Type,_SerializationEvents>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Type,_string>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Type,_Type>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Type,_TypeValuePair>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<Type,_DiscriminatedUnionConverter_Union>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<TypeValuePair,_string>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<ushort,_object>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<FlipboardCounter_Digit,_bool>_TypeInfo);
    DAT_06a7b435 = 1;
  }
  FUN_05e3d4d8(param_1);
  puVar1 = PTR_DAT_065c8c40;
  plVar10 = (long *)param_1[0x11];
  if (plVar10 != (long *)0x0) {
    lVar5 = *(long *)PTR_DAT_065c8c40;
    if ((*(byte *)(lVar5 + 0x130) <= *(byte *)(*plVar10 + 0x130)) &&
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) == lVar5)) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      bVar3 = FUN_05ef59b8(plVar10,0,0);
      *(byte *)(param_1 + 0x16) = bVar3 & 1;
      if ((bVar3 & 1) == 0) goto LAB_05e41480;
      plVar10 = (long *)param_1[0x11];
      uVar6 = thunk_FUN_02cea894(*(undefined8 *)
                                  System_Collections_Generic_ICollection<JsonSchema>_TypeInfo);
      FUN_047b3b70(uVar6,param_1,*(undefined8 *)(*param_1 + 0x260),0);
      puVar2 = System_Func<CaptureIconService_CaptureRequest,_bool>_TypeInfo;
      if (plVar10 == (long *)0x0) {
LAB_05e41af4:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar5 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)System_Func<CaptureIconService_CaptureRequest,_bool>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05e41558;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02ce0a7c(plVar10,*(long *)
                                     System_Func<CaptureIconService_CaptureRequest,_bool>_TypeInfo,0
                           );
LAB_05e41558:
      (*(code *)*puVar7)(plVar10,uVar6,puVar7[1]);
      plVar10 = (long *)param_1[0x11];
      uVar6 = thunk_FUN_02cea894(*(undefined8 *)
                                  System_Collections_Generic_ICollection<JsonSchemaModel>_TypeInfo);
      FUN_047b3b70(uVar6,param_1,*(undefined8 *)(*param_1 + 0x270),0);
      if (plVar10 == (long *)0x0) goto LAB_05e41af4;
      lVar5 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_05e415e8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)puVar2,2);
LAB_05e415e8:
      (*(code *)*puVar7)(plVar10,uVar6,puVar7[1]);
      puVar2 = System_Func<CreatureIconService_QueuedRequest,_bool>_TypeInfo;
      if (*(char *)((long)param_1 + 0xb2) != '\0') {
        plVar10 = (long *)param_1[0x12];
        if (plVar10 == (long *)0x0) goto LAB_05e41af4;
        lVar5 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)System_Func<CreatureIconService_QueuedRequest,_bool>_TypeInfo) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_05e4165c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_02ce0a7c(plVar10,*(long *)
                                       System_Func<CreatureIconService_QueuedRequest,_bool>_TypeInfo
                              ,0);
LAB_05e4165c:
        lVar5 = (*(code *)*puVar7)(plVar10,puVar7[1]);
        uVar6 = thunk_FUN_02cea894(*(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo);
        FUN_040e7b1c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x280),0);
        if (lVar5 == 0) goto LAB_05e41af4;
        FUN_040e9d5c(lVar5,uVar6,
                     *(undefined8 *)System_Func<Type,_DiscriminatedUnionConverter_Union>_TypeInfo);
        plVar10 = (long *)param_1[0x12];
        if (plVar10 == (long *)0x0) goto LAB_05e41af4;
        lVar5 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_05e4170c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)puVar2,1);
LAB_05e4170c:
        lVar5 = (*(code *)*puVar7)(plVar10,puVar7[1]);
        uVar6 = thunk_FUN_02cea894(*(undefined8 *)System_Func<Type,_Type>_TypeInfo);
        FUN_040e7b1c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x290),0);
        if (lVar5 == 0) goto LAB_05e41af4;
        FUN_040e9d5c(lVar5,uVar6,*(undefined8 *)System_Func<Type,_TypeValuePair>_TypeInfo);
      }
      puVar2 = System_Func<DebugSettings_Option,_string>_TypeInfo;
      if (*(char *)((long)param_1 + 0xb3) != '\0') {
        plVar10 = (long *)param_1[0x13];
        if (plVar10 == (long *)0x0) goto LAB_05e41af4;
        lVar5 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)System_Func<DebugSettings_Option,_string>_TypeInfo) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_05e417c8;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_02ce0a7c(plVar10,*(long *)System_Func<DebugSettings_Option,_string>_TypeInfo,0)
        ;
LAB_05e417c8:
        lVar5 = (*(code *)*puVar7)(plVar10,puVar7[1]);
        uVar6 = thunk_FUN_02cea894(*(undefined8 *)System_Func<Type,_ReflectionObject>_TypeInfo);
        FUN_040e7b1c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2a0),0);
        if (lVar5 == 0) goto LAB_05e41af4;
        FUN_040e9d5c(lVar5,uVar6,*(undefined8 *)System_Func<TypeValuePair,_string>_TypeInfo);
        plVar10 = (long *)param_1[0x13];
        if (plVar10 == (long *)0x0) goto LAB_05e41af4;
        lVar5 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_05e41878;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)puVar2,1);
LAB_05e41878:
        lVar5 = (*(code *)*puVar7)(plVar10,puVar7[1]);
        uVar6 = thunk_FUN_02cea894(*(undefined8 *)System_Func<Type,_string>_TypeInfo);
        FUN_040e7b1c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2b0),0);
        if (lVar5 == 0) goto LAB_05e41af4;
        FUN_040e9d5c(lVar5,uVar6,*(undefined8 *)System_Func<ushort,_object>_TypeInfo);
      }
      if (*(char *)((long)param_1 + 0xb4) != '\0') {
        plVar10 = (long *)param_1[0x14];
        if (plVar10 == (long *)0x0) goto LAB_05e41af4;
        lVar5 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)
                 System_Collections_Generic_IEnumerator<KeyValuePair<BodyPoseComparerActiveState_JointComparerConfig,_BodyPoseComparerActiveState_BodyPoseComparerFeatureState>>_TypeInfo
               ) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_05e41934;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_02ce0a7c(plVar10,*(long *)
                                       System_Collections_Generic_IEnumerator<KeyValuePair<BodyPoseComparerActiveState_JointComparerConfig,_BodyPoseComparerActiveState_BodyPoseComparerFeatureState>>_TypeInfo
                              ,0);
LAB_05e41934:
        plVar10 = (long *)(*(code *)*puVar7)(plVar10,puVar7[1]);
        uVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cad60);
        FUN_047b506c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2c0),0);
        if (plVar10 == (long *)0x0) goto LAB_05e41af4;
        lVar5 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)Google_Protobuf_MessageParser<ToyConfig>_TypeInfo
               ) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_05e419c8;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_02ce0a7c(plVar10,*(long *)Google_Protobuf_MessageParser<ToyConfig>_TypeInfo,0);
LAB_05e419c8:
        uVar6 = (*(code *)*puVar7)(plVar10,uVar6,puVar7[1]);
        if (param_1[9] == 0) goto LAB_05e41af4;
        FUN_05d62c2c(param_1[9],uVar6,0);
      }
      plVar10 = (long *)param_1[0x11];
      *(undefined1 *)(param_1 + 0x19) = 0;
      if (plVar10 == (long *)0x0) {
LAB_05e41a5c:
        bVar3 = 1;
      }
      else {
        lVar5 = *plVar10;
        bVar3 = *(byte *)(*(long *)System_Func<FlipboardCounter_Digit,_bool>_TypeInfo + 0x130);
        if ((*(byte *)(lVar5 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)System_Func<FlipboardCounter_Digit,_bool>_TypeInfo)) {
          bVar3 = *(byte *)(*(long *)PTR_DAT_065dcfd8 + 0x130);
          if ((*(byte *)(lVar5 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_065dcfd8
             )) goto LAB_05e41a5c;
          bVar3 = FUN_05ef2278(plVar10,0);
        }
        else {
          lVar5 = plVar10[6];
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar8 = FUN_05ef59b8(lVar5,0,0);
          if ((uVar8 & 1) == 0) {
            bVar3 = 0;
          }
          else {
            if (plVar10[6] == 0) goto LAB_05e41af4;
            bVar3 = FUN_05dc7eec(plVar10[6],param_1[0x11],0);
          }
        }
        bVar3 = bVar3 & 1;
      }
      *(byte *)((long)param_1 + 0xc9) = bVar3;
      if (param_1[0x1c] != 0) {
        FUN_05ef7cbc(param_1,param_1[0x1c],0);
      }
      uVar6 = FUN_05e41af8(param_1);
      lVar5 = FUN_05ef7a50(param_1,uVar6,0);
      param_1[0x1c] = lVar5;
      goto LAB_05e41480;
    }
  }
  *(undefined1 *)(param_1 + 0x16) = 0;
LAB_05e41480:
  uVar4 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
  UnityEngine_TextEditingUtilities__CanPaste(param_1,uVar4);
  return;
}


