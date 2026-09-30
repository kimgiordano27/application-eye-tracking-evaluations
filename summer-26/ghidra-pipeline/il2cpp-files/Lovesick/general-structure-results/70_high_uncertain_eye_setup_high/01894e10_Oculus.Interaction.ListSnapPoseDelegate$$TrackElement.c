/*
FUNCTION_NAME: Oculus.Interaction.ListSnapPoseDelegate$$TrackElement
ENTRY_POINT: 01894e10
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x018952c8) */
/* WARNING: Removing unreachable block (ram,0x01895124) */

undefined8 Oculus_Interaction_ListSnapPoseDelegate__TrackElement(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long unaff_x19;
  long *unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  thunk_FUN_00d48444();
  *(undefined1 *)(unaff_x19 + 0x7f4) = 1;
  puVar4 = 
  Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
  ;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar7 = (**(code **)(*unaff_x20 + 0x228))();
  puVar1 = System_Func<IActiveState,_bool>_TypeInfo;
  if (iVar7 == 8) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_018b5568();
    FUN_018969bc();
    in_stack_00000018 = 0;
    FUN_01347274(&stack0x00000018);
    return in_stack_00000018;
  }
  if (iVar7 != 2) {
    FUN_00ac2be8();
    FUN_018b0aa8();
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    FUN_00acb0a4();
    uVar13 = FUN_01731954(0);
    FUN_00ac2be8();
    (**(code **)(*unaff_x20 + 0x228))();
    thunk_FUN_00d48444(StringLiteral_2432);
    uVar14 = thunk_FUN_00d61fa0();
    uVar15 = thunk_FUN_00d48444(
                               Method_System_Numerics_Vector<__Il2CppFullySharedGenericStructType>__ctor__
                               );
    FUN_018651d4(uVar15,uVar13,uVar14,0);
    uVar13 = FUN_01802990();
    uVar14 = thunk_FUN_00d48444(StringLiteral_2687);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar13,uVar14);
  }
  FUN_01347274(&stack0x00000010);
  lVar17 = *unaff_x20;
  uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
  if (uVar18 != 0) {
    piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
        puVar9 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
        goto FUN_01894efc;
      }
      uVar18 = uVar18 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar18 != 0);
  }
  puVar9 = (undefined8 *)FUN_00d59724();
FUN_01894efc:
  puVar6 = StringLiteral_10310;
  plVar10 = (long *)(*(code *)*puVar9)();
  puVar5 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar3 = Method_System_Collections_Generic_Dictionary<int,_CodePageDataItem>_TryGetValue__;
  puVar2 = OVRPlugin_OVRP_1_52_0_TypeInfo;
  puVar1 = UnityEngine_InputSystem_Layouts_InputDeviceMatcher_<get_patterns>d__4_TypeInfo;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar17 = *plVar10;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
          puVar9 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_01894f84;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar5,0);
LAB_01894f84:
    uVar18 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    if ((uVar18 & 1) == 0) {
      if (plVar10 == (long *)0x0) {
        return in_stack_00000010;
      }
      lVar17 = *plVar10;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar18 == 0) goto LAB_018950f0;
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      break;
    }
    lVar17 = *plVar10;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
          puVar9 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_01894fe0;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar1,0);
LAB_01894fe0:
    plVar11 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar7 = (**(code **)(*plVar11 + 0x228))(plVar11,*(undefined8 *)(*plVar11 + 0x230));
    if (iVar7 != 8) {
      uVar13 = FUN_018b0aa8(plVar11,0);
      lVar17 = thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar14 = FUN_01731954(0);
      (**(code **)(*unaff_x20 + 0x228))();
      thunk_FUN_00d48444(StringLiteral_2432);
      uVar15 = thunk_FUN_00d61fa0();
      uVar16 = thunk_FUN_00d48444(
                                 Method_System_Collections_Generic_HashSet<IUIInteractor>_Contains__
                                 );
      uVar14 = FUN_018651d4(uVar16,uVar14,uVar15,0);
      uVar13 = FUN_01802990(plVar11,uVar13,uVar14,0);
      uVar14 = thunk_FUN_00d48444(StringLiteral_2687);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar13,uVar14);
    }
    in_stack_00000008 = in_stack_00000010;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_018b5568(plVar11,0);
    uVar8 = FUN_018969bc();
    lVar17 = *(long *)(*(long *)puVar2 + 0x20);
    if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
      lVar17 = FUN_00d5941c();
    }
    lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
    if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
      lVar17 = FUN_00d5941c();
    }
    pcVar12 = (char *)thunk_FUN_00d32ed4(&stack0x00000008,*(undefined8 *)(lVar17 + 0x80));
    if (*pcVar12 != '\0') {
      in_stack_00000028._4_4_ = FUN_00becc2c(&stack0x00000008,*(undefined8 *)puVar3);
      in_stack_00000028._4_4_ = in_stack_00000028._4_4_ | uVar8;
      FUN_01347274();
    }
    in_stack_00000010 = 0;
  } while( true );
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
    if (*(long *)(piVar19 + -2) == *(long *)puVar6) {
      puVar9 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_0189510c;
    }
  }
LAB_018950f0:
  puVar9 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar6,0);
LAB_0189510c:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
  return in_stack_00000010;
}


