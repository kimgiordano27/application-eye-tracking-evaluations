/*
FUNCTION_NAME: FUN_01894d88
ENTRY_POINT: 01894d88
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x018952c8) */
/* WARNING: Removing unreachable block (ram,0x01895124) */

ulong FUN_01894d88(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  char *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  uint local_54;
  
  if ((DAT_037797f4 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(System_Func<IActiveState,_bool>_TypeInfo);
    thunk_FUN_00d48444(
                      UnityEngine_InputSystem_Layouts_InputDeviceMatcher_<get_patterns>d__4_TypeInfo
                      );
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<int,_CodePageDataItem>_TryGetValue__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_List<MB3_MeshCombinerSingle_MBBlendShape>>_TryGetValue__
                      );
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_52_0_TypeInfo);
    DAT_037797f4 = 1;
  }
  puVar5 = 
  Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
  ;
  puVar4 = 
  Method_System_Collections_Generic_Dictionary<string,_List<MB3_MeshCombinerSingle_MBBlendShape>>_TryGetValue__
  ;
  local_78 = 0;
  local_70 = 0;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar8 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
  puVar1 = System_Func<IActiveState,_bool>_TypeInfo;
  if (iVar8 == 8) {
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_018b5568(param_2,0);
    uVar10 = FUN_018969bc();
    local_80 = CONCAT44(local_80._4_4_,uVar10);
    local_68 = 0;
    FUN_01347274(&local_68,&local_80,*(undefined8 *)puVar4);
    return local_68;
  }
  if (iVar8 != 2) {
    FUN_00ac2be8(param_2);
    uVar15 = FUN_018b0aa8(param_2,0);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    FUN_00acb0a4();
    uVar16 = FUN_01731954(0);
    FUN_00ac2be8(param_2);
    uVar10 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
    local_80 = CONCAT44(local_80._4_4_,uVar10);
    uVar17 = thunk_FUN_00d48444(StringLiteral_2432);
    uVar17 = thunk_FUN_00d61fa0(uVar17,&local_80);
    uVar18 = thunk_FUN_00d48444(
                               Method_System_Numerics_Vector<__Il2CppFullySharedGenericStructType>__ctor__
                               );
    uVar16 = FUN_018651d4(uVar18,uVar16,uVar17,0);
    uVar15 = FUN_01802990(param_2,uVar15,uVar16,0);
    uVar16 = thunk_FUN_00d48444(StringLiteral_2687);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar15,uVar16);
  }
  local_80 = local_80 & 0xffffffff00000000;
  FUN_01347274(&local_70,&local_80,*(undefined8 *)puVar4);
  lVar19 = *param_2;
  uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
  if (uVar20 != 0) {
    piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *(long *)puVar1) {
        puVar11 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
        goto FUN_01894efc;
      }
      uVar20 = uVar20 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar20 != 0);
  }
  puVar11 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar1,0);
FUN_01894efc:
  puVar7 = StringLiteral_10310;
  plVar12 = (long *)(*(code *)*puVar11)(param_2,puVar11[1]);
  puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar3 = Method_System_Collections_Generic_Dictionary<int,_CodePageDataItem>_TryGetValue__;
  puVar2 = OVRPlugin_OVRP_1_52_0_TypeInfo;
  puVar1 = UnityEngine_InputSystem_Layouts_InputDeviceMatcher_<get_patterns>d__4_TypeInfo;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar19 = *plVar12;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar6) {
          puVar11 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_01894f84;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar6,0);
LAB_01894f84:
    uVar20 = (*(code *)*puVar11)(plVar12,puVar11[1]);
    if ((uVar20 & 1) == 0) {
      if (plVar12 == (long *)0x0) {
        return local_70;
      }
      lVar19 = *plVar12;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
      if (uVar20 == 0) goto LAB_018950f0;
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      break;
    }
    lVar19 = *plVar12;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar1) {
          puVar11 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_01894fe0;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar1,0);
LAB_01894fe0:
    plVar13 = (long *)(*(code *)*puVar11)(plVar12,puVar11[1]);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar8 = (**(code **)(*plVar13 + 0x228))(plVar13,*(undefined8 *)(*plVar13 + 0x230));
    if (iVar8 != 8) {
      uVar15 = FUN_018b0aa8(plVar13,0);
      lVar19 = thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
      if (*(int *)(lVar19 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar16 = FUN_01731954(0);
      uVar10 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
      local_80 = CONCAT44(local_80._4_4_,uVar10);
      uVar17 = thunk_FUN_00d48444(StringLiteral_2432);
      uVar17 = thunk_FUN_00d61fa0(uVar17,&local_80);
      uVar18 = thunk_FUN_00d48444(
                                 Method_System_Collections_Generic_HashSet<IUIInteractor>_Contains__
                                 );
      uVar16 = FUN_018651d4(uVar18,uVar16,uVar17,0);
      uVar15 = FUN_01802990(plVar13,uVar15,uVar16,0);
      uVar16 = thunk_FUN_00d48444(StringLiteral_2687);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar15,uVar16);
    }
    local_78 = local_70;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_018b5568(plVar13,0);
    uVar9 = FUN_018969bc();
    lVar19 = *(long *)(*(long *)puVar2 + 0x20);
    if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
      lVar19 = FUN_00d5941c();
    }
    lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 8);
    if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
      lVar19 = FUN_00d5941c();
    }
    pcVar14 = (char *)thunk_FUN_00d32ed4(&local_78,*(undefined8 *)(lVar19 + 0x80));
    if (*pcVar14 == '\0') {
      local_70 = 0;
    }
    else {
      local_54 = FUN_00becc2c(&local_78,*(undefined8 *)puVar3);
      local_54 = local_54 | uVar9;
      local_80 = 0;
      FUN_01347274(&local_80,&local_54,*(undefined8 *)puVar4);
      local_70 = local_80;
    }
  } while( true );
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
    if (*(long *)(piVar21 + -2) == *(long *)puVar7) {
      puVar11 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_0189510c;
    }
  }
LAB_018950f0:
  puVar11 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar7,0);
LAB_0189510c:
  (*(code *)*puVar11)(plVar12,puVar11[1]);
  return local_70;
}


