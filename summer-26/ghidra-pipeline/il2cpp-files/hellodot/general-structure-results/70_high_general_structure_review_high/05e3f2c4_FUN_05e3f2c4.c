/*
FUNCTION_NAME: FUN_05e3f2c4
ENTRY_POINT: 05e3f2c4
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05e3f2c4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  
  if ((DAT_06a7b42b & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cad60);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Vector2,_Vector2>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Vector2Int,_int>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dcfd8);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<ToyConfig>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_ICollection<IAssetRequest<Toy>>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<TransformPair,_bool>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Type,_Func<object[],_object>>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<ushort,_double,_object>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_ICollection<Column>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<ToyConfigs>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_MessageParser<TrayScanDetails>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Type,_ReflectionObject>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Type,_SerializationEvents>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<Type>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Type,_string>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Type,_Type>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<UInt32Value>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Type,_TypeValuePair>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<UInt64Value>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_MessageParser<UninterpretedOption>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<Value>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<Type,_DiscriminatedUnionConverter_Union>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<TypeValuePair,_string>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<ushort,_object>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<Vector2Proto>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<PoolableManager_PoolableInfo,_int>_TypeInfo);
    DAT_06a7b42b = 1;
  }
  FUN_05e3d4d8(param_1);
  puVar1 = PTR_DAT_065c8c40;
  plVar13 = (long *)param_1[0x11];
  if (plVar13 != (long *)0x0) {
    lVar8 = *(long *)PTR_DAT_065c8c40;
    if ((*(byte *)(lVar8 + 0x130) <= *(byte *)(*plVar13 + 0x130)) &&
       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8)) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      bVar7 = FUN_05ef59b8(plVar13,0,0);
      *(byte *)(param_1 + 0x1a) = bVar7 & 1;
      if ((bVar7 & 1) == 0) goto LAB_05e3f494;
      plVar13 = (long *)param_1[0x11];
      uVar9 = thunk_FUN_02cea894(*(undefined8 *)System_Func<Vector2,_Vector2>_TypeInfo);
      FUN_047b3b70(uVar9,param_1,*(undefined8 *)(*param_1 + 0x230),0);
      puVar2 = System_Func<ushort,_double,_object>_TypeInfo;
      if (plVar13 == (long *)0x0) {
LAB_05e3feb8:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar8 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)System_Func<ushort,_double,_object>_TypeInfo) {
            puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_05e3f55c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_02ce0a7c(plVar13,*(long *)System_Func<ushort,_double,_object>_TypeInfo,0);
LAB_05e3f55c:
      (*(code *)*puVar10)(plVar13,uVar9,puVar10[1]);
      plVar13 = (long *)param_1[0x11];
      uVar9 = thunk_FUN_02cea894(*(undefined8 *)System_Func<Vector2Int,_int>_TypeInfo);
      FUN_047b3b70(uVar9,param_1,*(undefined8 *)(*param_1 + 0x240),0);
      if (plVar13 == (long *)0x0) goto LAB_05e3feb8;
      lVar8 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_05e3f5ec;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)puVar2,2);
LAB_05e3f5ec:
      (*(code *)*puVar10)(plVar13,uVar9,puVar10[1]);
      puVar2 = System_Func<Type,_Func<object[],_object>>_TypeInfo;
      plVar13 = (long *)param_1[0x12];
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)System_Func<Type,_Func<object[],_object>>_TypeInfo) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05e3f658;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02ce0a7c(plVar13,*(long *)System_Func<Type,_Func<object[],_object>>_TypeInfo,0
                              );
LAB_05e3f658:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        puVar3 = System_Func<Type,_SerializationEvents>_TypeInfo;
        uVar9 = thunk_FUN_02cea894(*(undefined8 *)System_Func<Type,_SerializationEvents>_TypeInfo);
        FUN_040e7b1c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x250),0);
        puVar6 = System_Func<Type,_DiscriminatedUnionConverter_Union>_TypeInfo;
        if (lVar8 == 0) goto LAB_05e3feb8;
        FUN_040e9d5c(lVar8,uVar9,
                     *(undefined8 *)System_Func<Type,_DiscriminatedUnionConverter_Union>_TypeInfo);
        plVar13 = (long *)param_1[0x12];
        if (plVar13 == (long *)0x0) goto LAB_05e3feb8;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto UnityEngine_TextSelectingUtilities__MoveCursorToPosition_Internal;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)puVar2,1);
UnityEngine_TextSelectingUtilities__MoveCursorToPosition_Internal:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        puVar4 = System_Func<Type,_Type>_TypeInfo;
        uVar9 = thunk_FUN_02cea894(*(undefined8 *)System_Func<Type,_Type>_TypeInfo);
        FUN_040e7b1c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x260),0);
        puVar5 = System_Func<Type,_TypeValuePair>_TypeInfo;
        if (lVar8 == 0) goto LAB_05e3feb8;
        FUN_040e9d5c(lVar8,uVar9,*(undefined8 *)System_Func<Type,_TypeValuePair>_TypeInfo);
        plVar13 = (long *)param_1[0x12];
        if (plVar13 == (long *)0x0) goto LAB_05e3feb8;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto FUN_05e3f7b8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)puVar2,2);
FUN_05e3f7b8:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
        FUN_040e7b1c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x270),0);
        if (lVar8 == 0) goto LAB_05e3feb8;
        FUN_040e9d5c(lVar8,uVar9,*(undefined8 *)puVar6);
        plVar13 = (long *)param_1[0x12];
        if (plVar13 == (long *)0x0) goto LAB_05e3feb8;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 3) * 0x10 + 0x138);
              goto LAB_05e3f858;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)puVar2,3);
LAB_05e3f858:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
        FUN_040e7b1c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x280),0);
        if (lVar8 == 0) goto LAB_05e3feb8;
        FUN_040e9d5c(lVar8,uVar9,*(undefined8 *)puVar5);
      }
      puVar2 = System_Func<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo;
      plVar13 = (long *)param_1[0x13];
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)System_Func<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05e3f8fc;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02ce0a7c(plVar13,*(long *)
                                        System_Func<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo,0)
        ;
LAB_05e3f8fc:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02cea894(*(undefined8 *)System_Func<Type,_ReflectionObject>_TypeInfo);
        FUN_040e7b1c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x290),0);
        if (lVar8 == 0) goto LAB_05e3feb8;
        FUN_040e9d5c(lVar8,uVar9,*(undefined8 *)System_Func<TypeValuePair,_string>_TypeInfo);
        plVar13 = (long *)param_1[0x13];
        if (plVar13 == (long *)0x0) goto LAB_05e3feb8;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_05e3f9ac;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)puVar2,1);
LAB_05e3f9ac:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02cea894(*(undefined8 *)System_Func<Type,_string>_TypeInfo);
        FUN_040e7b1c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x2a0),0);
        if (lVar8 == 0) goto LAB_05e3feb8;
        FUN_040e9d5c(lVar8,uVar9,*(undefined8 *)System_Func<ushort,_object>_TypeInfo);
      }
      puVar2 = System_Func<TransformPair,_bool>_TypeInfo;
      plVar13 = (long *)param_1[0x14];
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)System_Func<TransformPair,_bool>_TypeInfo) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05e3fa60;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02ce0a7c(plVar13,*(long *)System_Func<TransformPair,_bool>_TypeInfo,0);
LAB_05e3fa60:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02cea894(*(undefined8 *)
                                    Google_Protobuf_MessageParser<TrayScanDetails>_TypeInfo);
        FUN_040e7b1c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x2b0),0);
        if (lVar8 == 0) goto LAB_05e3feb8;
        FUN_040e9d5c(lVar8,uVar9,*(undefined8 *)Google_Protobuf_MessageParser<Value>_TypeInfo);
        plVar13 = (long *)param_1[0x14];
        if (plVar13 == (long *)0x0) goto LAB_05e3feb8;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_05e3fb10;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)puVar2,1);
LAB_05e3fb10:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02cea894(*(undefined8 *)Google_Protobuf_MessageParser<Type>_TypeInfo);
        FUN_040e7b1c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x2c0),0);
        if (lVar8 == 0) goto LAB_05e3feb8;
        FUN_040e9d5c(lVar8,uVar9,*(undefined8 *)Google_Protobuf_MessageParser<UInt64Value>_TypeInfo)
        ;
      }
      puVar2 = System_Collections_Generic_ICollection<IAssetRequest<Toy>>_TypeInfo;
      plVar13 = (long *)param_1[0x15];
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)System_Collections_Generic_ICollection<IAssetRequest<Toy>>_TypeInfo) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05e3fbc4;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02ce0a7c(plVar13,*(long *)
                                        System_Collections_Generic_ICollection<IAssetRequest<Toy>>_TypeInfo
                               ,0);
LAB_05e3fbc4:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02cea894(*(undefined8 *)
                                    Google_Protobuf_MessageParser<UInt32Value>_TypeInfo);
        FUN_040e7b1c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x2d0),0);
        if (lVar8 == 0) goto LAB_05e3feb8;
        FUN_040e9d5c(lVar8,uVar9,*(undefined8 *)Google_Protobuf_MessageParser<Vector2Proto>_TypeInfo
                    );
        plVar13 = (long *)param_1[0x15];
        if (plVar13 == (long *)0x0) goto LAB_05e3feb8;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_05e3fc74;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)puVar2,1);
LAB_05e3fc74:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02cea894(*(undefined8 *)Google_Protobuf_MessageParser<ToyConfigs>_TypeInfo
                                  );
        FUN_040e7b1c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x2e0),0);
        if (lVar8 == 0) goto LAB_05e3feb8;
        FUN_040e9d5c(lVar8,uVar9,
                     *(undefined8 *)Google_Protobuf_MessageParser<UninterpretedOption>_TypeInfo);
      }
      plVar13 = (long *)param_1[0x16];
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)System_Collections_Generic_ICollection<Column>_TypeInfo) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05e3fd28;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02ce0a7c(plVar13,*(long *)
                                        System_Collections_Generic_ICollection<Column>_TypeInfo,0);
LAB_05e3fd28:
        plVar13 = (long *)(*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cad60);
        FUN_047b506c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x2f0),0);
        if (plVar13 == (long *)0x0) goto LAB_05e3feb8;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Google_Protobuf_MessageParser<ToyConfig>_TypeInfo) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto FUN_05e3fdbc;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02ce0a7c(plVar13,*(long *)Google_Protobuf_MessageParser<ToyConfig>_TypeInfo,0)
        ;
FUN_05e3fdbc:
        uVar9 = (*(code *)*puVar10)(plVar13,uVar9,puVar10[1]);
        if (param_1[9] == 0) goto LAB_05e3feb8;
        FUN_05d62c2c(param_1[9],uVar9,0);
      }
      plVar13 = (long *)param_1[0x11];
      *(undefined1 *)((long)param_1 + 0xd1) = 0;
      if (plVar13 == (long *)0x0) {
LAB_05e3fe50:
        bVar7 = 1;
      }
      else {
        lVar8 = *plVar13;
        bVar7 = *(byte *)(*(long *)System_Func<PoolableManager_PoolableInfo,_int>_TypeInfo + 0x130);
        if ((*(byte *)(lVar8 + 0x130) < bVar7) ||
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar7 * 8 + -8) !=
            *(long *)System_Func<PoolableManager_PoolableInfo,_int>_TypeInfo)) {
          bVar7 = *(byte *)(*(long *)PTR_DAT_065dcfd8 + 0x130);
          if ((*(byte *)(lVar8 + 0x130) < bVar7) ||
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)PTR_DAT_065dcfd8
             )) goto LAB_05e3fe50;
          bVar7 = FUN_05ef2278(plVar13,0);
        }
        else {
          lVar8 = plVar13[7];
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar11 = FUN_05ef59b8(lVar8,0,0);
          if ((uVar11 & 1) == 0) {
            bVar7 = 0;
          }
          else {
            if (plVar13[7] == 0) goto LAB_05e3feb8;
            bVar7 = FUN_05dc8cc4(plVar13[7],param_1[0x11],0);
          }
        }
        bVar7 = bVar7 & 1;
      }
      *(byte *)((long)param_1 + 0xd2) = bVar7;
      goto LAB_05e3f494;
    }
  }
  *(undefined1 *)(param_1 + 0x1a) = 0;
LAB_05e3f494:
  FUN_05e3e028(param_1);
  return;
}


