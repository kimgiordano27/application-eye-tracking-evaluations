/*
FUNCTION_NAME: FUN_05e3febc
ENTRY_POINT: 05e3febc
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05e3febc(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  
  if ((DAT_06a7b42c & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Vector2,_Vector2>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Vector2Int,_int>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_ICollection<IAssetRequest<Toy>>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<TransformPair,_bool>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Type,_Func<object[],_object>>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<ushort,_double,_object>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<ToyConfigs>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_MessageParser<TrayScanDetails>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Type,_ReflectionObject>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Type,_SerializationEvents>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<Type>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Type,_string>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Type,_Type>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<UInt32Value>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<ValueConnection,_ValueInput>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<ValueConnection,_ValueOutput>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<Vector2Range>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<ValueInput,_bool>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<Vector3>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<Vector4Proto>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<ValueInput,_int>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<Vector4Range>_TypeInfo);
    DAT_06a7b42c = 1;
  }
  if (param_1[9] == 0) goto LAB_05e40828;
  UnityEngine_XR_OpenXR_Input_OpenXRInput__GetActionHandle(param_1[9],0);
  if ((char)param_1[0x1a] != '\0') {
    plVar11 = (long *)param_1[0x11];
    uVar6 = thunk_FUN_02cea894(*(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo);
    FUN_047b3b70(uVar6,param_1,*(undefined8 *)(*param_1 + 0x230),0);
    puVar2 = System_Func<ushort,_double,_object>_TypeInfo;
    puVar1 = System_Func<Vector2Int,_int>_TypeInfo;
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)System_Func<ushort,_double,_object>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_05e400a4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02ce0a7c(plVar11,*(long *)System_Func<ushort,_double,_object>_TypeInfo,1);
LAB_05e400a4:
      (*(code *)*puVar7)(plVar11,uVar6,puVar7[1]);
      plVar11 = (long *)param_1[0x11];
      uVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
      FUN_047b3b70(uVar6,param_1,*(undefined8 *)(*param_1 + 0x240),0);
      if (plVar11 != (long *)0x0) {
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
              goto LAB_05e4012c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)puVar2,3);
LAB_05e4012c:
        (*(code *)*puVar7)(plVar11,uVar6,puVar7[1]);
        puVar1 = System_Func<Type,_Func<object[],_object>>_TypeInfo;
        plVar11 = (long *)param_1[0x12];
        if (plVar11 != (long *)0x0) {
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)System_Func<Type,_Func<object[],_object>>_TypeInfo) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_05e40198;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_02ce0a7c(plVar11,*(long *)System_Func<Type,_Func<object[],_object>>_TypeInfo,
                                0);
LAB_05e40198:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          puVar2 = System_Func<Type,_SerializationEvents>_TypeInfo;
          uVar6 = thunk_FUN_02cea894(*(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo)
          ;
          FUN_040e7b1c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x250),0);
          puVar4 = System_Func<ValueConnection,_ValueOutput>_TypeInfo;
          if (lVar8 == 0) goto LAB_05e40828;
          FUN_040e9d98(lVar8,uVar6,*(undefined8 *)System_Func<ValueConnection,_ValueOutput>_TypeInfo
                      );
          plVar11 = (long *)param_1[0x12];
          if (plVar11 == (long *)0x0) goto LAB_05e40828;
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_05e40248;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)puVar1,1);
LAB_05e40248:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          puVar3 = System_Func<Type,_Type>_TypeInfo;
          uVar6 = thunk_FUN_02cea894(*(undefined8 *)System_Func<Type,_Type>_TypeInfo);
          FUN_040e7b1c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x260),0);
          puVar5 = System_Func<ValueInput,_int>_TypeInfo;
          if (lVar8 == 0) goto LAB_05e40828;
          FUN_040e9d98(lVar8,uVar6,*(undefined8 *)System_Func<ValueInput,_int>_TypeInfo);
          plVar11 = (long *)param_1[0x12];
          if (plVar11 == (long *)0x0) goto LAB_05e40828;
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                goto LAB_05e402f8;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)puVar1,2);
LAB_05e402f8:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          uVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
          FUN_040e7b1c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x270),0);
          if (lVar8 == 0) goto LAB_05e40828;
          FUN_040e9d98(lVar8,uVar6,*(undefined8 *)puVar4);
          plVar11 = (long *)param_1[0x12];
          if (plVar11 == (long *)0x0) goto LAB_05e40828;
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
                goto LAB_05e40398;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)puVar1,3);
LAB_05e40398:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          uVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
          FUN_040e7b1c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x280),0);
          if (lVar8 == 0) goto LAB_05e40828;
          FUN_040e9d98(lVar8,uVar6,*(undefined8 *)puVar5);
        }
        puVar1 = System_Func<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo;
        plVar11 = (long *)param_1[0x13];
        if (plVar11 != (long *)0x0) {
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)System_Func<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_05e4043c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_02ce0a7c(plVar11,*(long *)
                                         System_Func<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo,0
                               );
LAB_05e4043c:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          uVar6 = thunk_FUN_02cea894(*(undefined8 *)System_Func<Type,_ReflectionObject>_TypeInfo);
          FUN_040e7b1c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x290),0);
          if (lVar8 == 0) goto LAB_05e40828;
          FUN_040e9d98(lVar8,uVar6,*(undefined8 *)System_Func<ValueConnection,_ValueInput>_TypeInfo)
          ;
          plVar11 = (long *)param_1[0x13];
          if (plVar11 == (long *)0x0) goto LAB_05e40828;
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_05e404ec;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)puVar1,1);
LAB_05e404ec:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          uVar6 = thunk_FUN_02cea894(*(undefined8 *)System_Func<Type,_string>_TypeInfo);
          FUN_040e7b1c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2a0),0);
          if (lVar8 == 0) goto LAB_05e40828;
          FUN_040e9d98(lVar8,uVar6,*(undefined8 *)System_Func<ValueInput,_bool>_TypeInfo);
        }
        puVar1 = System_Func<TransformPair,_bool>_TypeInfo;
        plVar11 = (long *)param_1[0x14];
        if (plVar11 != (long *)0x0) {
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)System_Func<TransformPair,_bool>_TypeInfo) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_05e405a0;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_02ce0a7c(plVar11,*(long *)System_Func<TransformPair,_bool>_TypeInfo,0);
LAB_05e405a0:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          uVar6 = thunk_FUN_02cea894(*(undefined8 *)
                                      Google_Protobuf_MessageParser<TrayScanDetails>_TypeInfo);
          FUN_040e7b1c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2b0),0);
          if (lVar8 == 0) goto LAB_05e40828;
          FUN_040e9d98(lVar8,uVar6,
                       *(undefined8 *)Google_Protobuf_MessageParser<Vector4Range>_TypeInfo);
          plVar11 = (long *)param_1[0x14];
          if (plVar11 == (long *)0x0) goto LAB_05e40828;
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto UnityEngine_Input__get_mouseScrollDelta_Injected;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)puVar1,1);
UnityEngine_Input__get_mouseScrollDelta_Injected:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          uVar6 = thunk_FUN_02cea894(*(undefined8 *)Google_Protobuf_MessageParser<Type>_TypeInfo);
          FUN_040e7b1c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2c0),0);
          if (lVar8 == 0) goto LAB_05e40828;
          FUN_040e9d98(lVar8,uVar6,
                       *(undefined8 *)Google_Protobuf_MessageParser<Vector2Range>_TypeInfo);
        }
        puVar1 = System_Collections_Generic_ICollection<IAssetRequest<Toy>>_TypeInfo;
        plVar11 = (long *)param_1[0x15];
        if (plVar11 == (long *)0x0) goto LAB_05e4080c;
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)System_Collections_Generic_ICollection<IAssetRequest<Toy>>_TypeInfo) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_05e40704;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_02ce0a7c(plVar11,*(long *)
                                       System_Collections_Generic_ICollection<IAssetRequest<Toy>>_TypeInfo
                              ,0);
LAB_05e40704:
        lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
        uVar6 = thunk_FUN_02cea894(*(undefined8 *)
                                    Google_Protobuf_MessageParser<UInt32Value>_TypeInfo);
        FUN_040e7b1c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2d0),0);
        if (lVar8 != 0) {
          FUN_040e9d98(lVar8,uVar6,*(undefined8 *)Google_Protobuf_MessageParser<Vector3>_TypeInfo);
          plVar11 = (long *)param_1[0x15];
          if (plVar11 != (long *)0x0) {
            lVar8 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                  puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_05e407b4;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar7 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)puVar1,1);
LAB_05e407b4:
            lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
            uVar6 = thunk_FUN_02cea894(*(undefined8 *)
                                        Google_Protobuf_MessageParser<ToyConfigs>_TypeInfo);
            FUN_040e7b1c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2e0),0);
            if (lVar8 != 0) {
              FUN_040e9d98(lVar8,uVar6,
                           *(undefined8 *)Google_Protobuf_MessageParser<Vector4Proto>_TypeInfo);
              goto LAB_05e4080c;
            }
          }
        }
      }
    }
LAB_05e40828:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
LAB_05e4080c:
  *(undefined1 *)(param_1 + 0x1a) = 0;
  return;
}


