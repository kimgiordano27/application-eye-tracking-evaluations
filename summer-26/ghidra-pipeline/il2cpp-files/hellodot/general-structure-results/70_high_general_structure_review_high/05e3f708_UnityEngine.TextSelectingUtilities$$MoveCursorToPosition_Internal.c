/*
FUNCTION_NAME: UnityEngine.TextSelectingUtilities$$MoveCursorToPosition_Internal
ENTRY_POINT: 05e3f708
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void UnityEngine_TextSelectingUtilities__MoveCursorToPosition_Internal(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *plVar9;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  lVar4 = (*(code *)*param_1)();
  puVar1 = System_Func<Type,_Type>_TypeInfo;
  uVar5 = thunk_FUN_02cea894(*(undefined8 *)System_Func<Type,_Type>_TypeInfo);
  FUN_040e7b1c();
  puVar2 = System_Func<Type,_TypeValuePair>_TypeInfo;
  if (lVar4 == 0) {
LAB_05e3feb8:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  FUN_040e9d5c(lVar4,uVar5,*(undefined8 *)System_Func<Type,_TypeValuePair>_TypeInfo);
  plVar9 = *(long **)(unaff_x19 + 0x90);
  if (plVar9 == (long *)0x0) goto LAB_05e3feb8;
  lVar4 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x23) {
        puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto FUN_05e3f7b8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_02ce0a7c(plVar9,*unaff_x23,2);
FUN_05e3f7b8:
  lVar4 = (*(code *)*puVar6)(plVar9,puVar6[1]);
  uVar5 = thunk_FUN_02cea894(*unaff_x24);
  FUN_040e7b1c();
  if (lVar4 == 0) goto LAB_05e3feb8;
  FUN_040e9d5c(lVar4,uVar5,*unaff_x25);
  plVar9 = *(long **)(unaff_x19 + 0x90);
  if (plVar9 == (long *)0x0) goto LAB_05e3feb8;
  lVar4 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x23) {
        puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 3) * 0x10 + 0x138);
        goto LAB_05e3f858;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_02ce0a7c(plVar9,*unaff_x23,3);
LAB_05e3f858:
  lVar4 = (*(code *)*puVar6)(plVar9,puVar6[1]);
  uVar5 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
  FUN_040e7b1c();
  if (lVar4 == 0) goto LAB_05e3feb8;
  FUN_040e9d5c(lVar4,uVar5,*(undefined8 *)puVar2);
  puVar1 = System_Func<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo;
  plVar9 = *(long **)(unaff_x19 + 0x98);
  if (plVar9 != (long *)0x0) {
    lVar4 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)System_Func<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05e3f8fc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_02ce0a7c(plVar9,*(long *)System_Func<Type,_Tuple<bool,_bool,_bool,_bool>>_TypeInfo,
                          0);
LAB_05e3f8fc:
    lVar4 = (*(code *)*puVar6)(plVar9,puVar6[1]);
    uVar5 = thunk_FUN_02cea894(*(undefined8 *)System_Func<Type,_ReflectionObject>_TypeInfo);
    FUN_040e7b1c();
    if (lVar4 == 0) goto LAB_05e3feb8;
    FUN_040e9d5c(lVar4,uVar5,*(undefined8 *)System_Func<TypeValuePair,_string>_TypeInfo);
    plVar9 = *(long **)(unaff_x19 + 0x98);
    if (plVar9 == (long *)0x0) goto LAB_05e3feb8;
    lVar4 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_05e3f9ac;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar1,1);
LAB_05e3f9ac:
    lVar4 = (*(code *)*puVar6)(plVar9,puVar6[1]);
    uVar5 = thunk_FUN_02cea894(*(undefined8 *)System_Func<Type,_string>_TypeInfo);
    FUN_040e7b1c();
    if (lVar4 == 0) goto LAB_05e3feb8;
    FUN_040e9d5c(lVar4,uVar5,*(undefined8 *)System_Func<ushort,_object>_TypeInfo);
  }
  puVar1 = System_Func<TransformPair,_bool>_TypeInfo;
  plVar9 = *(long **)(unaff_x19 + 0xa0);
  if (plVar9 != (long *)0x0) {
    lVar4 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)System_Func<TransformPair,_bool>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05e3fa60;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)System_Func<TransformPair,_bool>_TypeInfo,0)
    ;
LAB_05e3fa60:
    lVar4 = (*(code *)*puVar6)(plVar9,puVar6[1]);
    uVar5 = thunk_FUN_02cea894(*(undefined8 *)
                                Google_Protobuf_MessageParser<TrayScanDetails>_TypeInfo);
    FUN_040e7b1c();
    if (lVar4 == 0) goto LAB_05e3feb8;
    FUN_040e9d5c(lVar4,uVar5,*(undefined8 *)Google_Protobuf_MessageParser<Value>_TypeInfo);
    plVar9 = *(long **)(unaff_x19 + 0xa0);
    if (plVar9 == (long *)0x0) goto LAB_05e3feb8;
    lVar4 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_05e3fb10;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar1,1);
LAB_05e3fb10:
    lVar4 = (*(code *)*puVar6)(plVar9,puVar6[1]);
    uVar5 = thunk_FUN_02cea894(*(undefined8 *)Google_Protobuf_MessageParser<Type>_TypeInfo);
    FUN_040e7b1c();
    if (lVar4 == 0) goto LAB_05e3feb8;
    FUN_040e9d5c(lVar4,uVar5,*(undefined8 *)Google_Protobuf_MessageParser<UInt64Value>_TypeInfo);
  }
  puVar1 = System_Collections_Generic_ICollection<IAssetRequest<Toy>>_TypeInfo;
  plVar9 = *(long **)(unaff_x19 + 0xa8);
  if (plVar9 != (long *)0x0) {
    lVar4 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)System_Collections_Generic_ICollection<IAssetRequest<Toy>>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05e3fbc4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_02ce0a7c(plVar9,*(long *)
                                  System_Collections_Generic_ICollection<IAssetRequest<Toy>>_TypeInfo
                          ,0);
LAB_05e3fbc4:
    lVar4 = (*(code *)*puVar6)(plVar9,puVar6[1]);
    uVar5 = thunk_FUN_02cea894(*(undefined8 *)Google_Protobuf_MessageParser<UInt32Value>_TypeInfo);
    FUN_040e7b1c();
    if (lVar4 == 0) goto LAB_05e3feb8;
    FUN_040e9d5c(lVar4,uVar5,*(undefined8 *)Google_Protobuf_MessageParser<Vector2Proto>_TypeInfo);
    plVar9 = *(long **)(unaff_x19 + 0xa8);
    if (plVar9 == (long *)0x0) goto LAB_05e3feb8;
    lVar4 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_05e3fc74;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar1,1);
LAB_05e3fc74:
    lVar4 = (*(code *)*puVar6)(plVar9,puVar6[1]);
    uVar5 = thunk_FUN_02cea894(*(undefined8 *)Google_Protobuf_MessageParser<ToyConfigs>_TypeInfo);
    FUN_040e7b1c();
    if (lVar4 == 0) goto LAB_05e3feb8;
    FUN_040e9d5c(lVar4,uVar5,
                 *(undefined8 *)Google_Protobuf_MessageParser<UninterpretedOption>_TypeInfo);
  }
  plVar9 = *(long **)(unaff_x19 + 0xb0);
  if (plVar9 != (long *)0x0) {
    lVar4 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)System_Collections_Generic_ICollection<Column>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05e3fd28;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_02ce0a7c(plVar9,*(long *)System_Collections_Generic_ICollection<Column>_TypeInfo,0)
    ;
LAB_05e3fd28:
    plVar9 = (long *)(*(code *)*puVar6)(plVar9,puVar6[1]);
    uVar5 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cad60);
    FUN_047b506c();
    if (plVar9 == (long *)0x0) goto LAB_05e3feb8;
    lVar4 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)Google_Protobuf_MessageParser<ToyConfig>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto FUN_05e3fdbc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_02ce0a7c(plVar9,*(long *)Google_Protobuf_MessageParser<ToyConfig>_TypeInfo,0);
FUN_05e3fdbc:
    uVar5 = (*(code *)*puVar6)(plVar9,uVar5,puVar6[1]);
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_05e3feb8;
    FUN_05d62c2c(*(long *)(unaff_x19 + 0x48),uVar5,0);
  }
  plVar9 = *(long **)(unaff_x19 + 0x88);
  *(undefined1 *)(unaff_x19 + 0xd1) = 0;
  if (plVar9 == (long *)0x0) {
LAB_05e3fe50:
    bVar3 = 1;
  }
  else {
    lVar4 = *plVar9;
    bVar3 = *(byte *)(*(long *)System_Func<PoolableManager_PoolableInfo,_int>_TypeInfo + 0x130);
    if ((*(byte *)(lVar4 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)System_Func<PoolableManager_PoolableInfo,_int>_TypeInfo)) {
      bVar3 = *(byte *)(*(long *)PTR_DAT_065dcfd8 + 0x130);
      if ((*(byte *)(lVar4 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_065dcfd8))
      goto LAB_05e3fe50;
      bVar3 = FUN_05ef2278(plVar9,0);
    }
    else {
      lVar4 = plVar9[7];
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar7 = FUN_05ef59b8(lVar4,0,0);
      if ((uVar7 & 1) == 0) {
        bVar3 = 0;
      }
      else {
        if (plVar9[7] == 0) goto LAB_05e3feb8;
        bVar3 = FUN_05dc8cc4(plVar9[7],*(undefined8 *)(unaff_x19 + 0x88),0);
      }
    }
    bVar3 = bVar3 & 1;
  }
  *(byte *)(unaff_x19 + 0xd2) = bVar3;
  FUN_05e3e028();
  return;
}


