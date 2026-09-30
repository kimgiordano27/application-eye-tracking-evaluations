/*
FUNCTION_NAME: FUN_018c326c
ENTRY_POINT: 018c326c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_5;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 FUN_018c326c(long param_1)

{
  int iVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  char cVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  undefined8 local_70;
  long local_68;
  
  local_68 = param_1;
  if ((DAT_037799c8 & 1) == 0) {
    thunk_FUN_00d48444(System_Func<IActiveState,_bool>_TypeInfo);
    thunk_FUN_00d48444(
                      UnityEngine_InputSystem_Layouts_InputDeviceMatcher_<get_patterns>d__4_TypeInfo
                      );
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Newtonsoft_Json_Utilities_DynamicUtils_BinderWrapper_TypeInfo);
    thunk_FUN_00d48444(Method_System_Globalization_RegionInfo__ctor__);
    thunk_FUN_00d48444(StringLiteral_9631);
    thunk_FUN_00d48444(PTR_DAT_033f1958);
    DAT_037799c8 = 1;
  }
  puVar7 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar6 = UnityEngine_InputSystem_Layouts_InputDeviceMatcher_<get_patterns>d__4_TypeInfo;
  puVar5 = System_Func<IActiveState,_bool>_TypeInfo;
  local_70 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  lVar22 = *(long *)(param_1 + 0x38);
  if (iVar1 == 2) {
    plVar20 = *(long **)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
    if (plVar20 != (long *)0x0) goto LAB_018c33a8;
LAB_018c3764:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    plVar20 = *(long **)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar17 = *plVar20;
    lVar15 = *(long *)puVar5;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar15) {
          puVar9 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto FUN_018c3428;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar20,lVar15,0);
FUN_018c3428:
    uVar10 = (*(code *)*puVar9)(plVar20,puVar9[1]);
    *(undefined8 *)(local_68 + 0x50) = uVar10;
    param_1 = local_68;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  puVar9 = (undefined8 *)StringLiteral_9631;
  plVar20 = (long *)Method_System_Globalization_RegionInfo__ctor__;
  plVar3 = (long *)Newtonsoft_Json_Utilities_DynamicUtils_BinderWrapper_TypeInfo;
  plVar4 = (long *)PTR_DAT_033f1958;
LAB_018c3468:
  plVar21 = *(long **)(param_1 + 0x50);
  do {
    if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar17 = *plVar21;
    lVar15 = *(long *)puVar7;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar15) {
          puVar11 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_018c34bc;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724(plVar21,lVar15,0);
LAB_018c34bc:
    uVar18 = (*(code *)*puVar11)(plVar21,puVar11[1]);
    if ((uVar18 & 1) == 0) {
      FUN_018c3c4c();
      *(undefined8 *)(local_68 + 0x50) = 0;
      return 0;
    }
    plVar21 = *(long **)(local_68 + 0x50);
    if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar17 = *plVar21;
    lVar15 = *(long *)puVar6;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar15) {
          puVar11 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_018c3528;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724(plVar21,lVar15,0);
LAB_018c3528:
    plVar21 = (long *)(*(code *)*puVar11)(plVar21,puVar11[1]);
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    local_70 = *(undefined8 *)(lVar22 + 0x10);
    lVar15 = *(long *)(*plVar4 + 0x20);
    if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
      lVar15 = FUN_00d5941c();
    }
    lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
    if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
      lVar15 = FUN_00d5941c();
    }
    pcVar12 = (char *)thunk_FUN_00d32ed4(&local_70,*(undefined8 *)(lVar15 + 0x80));
    if (*pcVar12 == '\0') break;
    local_70 = *(undefined8 *)(lVar22 + 0x10);
    uVar10 = *(undefined8 *)(local_68 + 0x40);
    uVar8 = FUN_00adbe98(&local_70,*puVar9);
    lVar15 = FUN_018c38d0(plVar21,uVar10,uVar8);
    if (lVar15 != 0) {
      *(long *)(local_68 + 0x18) = lVar15;
      *(undefined4 *)(local_68 + 0x10) = 1;
      return 1;
    }
    plVar21 = *(long **)(local_68 + 0x50);
  } while( true );
  if (plVar21 == (long *)0x0) {
LAB_018c3614:
    lVar15 = *(long *)(local_68 + 0x40);
    cVar16 = '\0';
    if (lVar15 != 0) {
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      cVar16 = *(char *)(lVar15 + 0x20);
    }
    param_1 = local_68;
    if (cVar16 != '\0') {
      lVar22 = thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_01731954(0);
      if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar20 = (long *)thunk_FUN_00d93c64(plVar21,0);
      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar13 = (**(code **)(*plVar20 + 0x1b8))(plVar20,*(undefined8 *)(*plVar20 + 0x1c0));
      uVar14 = thunk_FUN_00d48444(Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_5__);
      uVar10 = FUN_018651d4(uVar14,uVar10,uVar13,0);
      thunk_FUN_00d48444(StringLiteral_1457);
      lVar22 = thunk_FUN_00d62348();
      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01802838(lVar22,uVar10,0);
      uVar10 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_23__);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(lVar22,uVar10);
    }
    goto LAB_018c3468;
  }
  lVar15 = *plVar21;
  bVar2 = *(byte *)(*plVar3 + 300);
  if ((*(byte *)(lVar15 + 300) < bVar2) ||
     (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar2 * 8 + -8) != *plVar3)) {
    bVar2 = *(byte *)(*plVar20 + 300);
    if ((*(byte *)(lVar15 + 300) < bVar2) ||
       (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar2 * 8 + -8) != *plVar20)) goto LAB_018c3614;
  }
  uVar18 = (ulong)*(ushort *)(lVar15 + 0x12a);
  lVar17 = *(long *)puVar5;
  if (uVar18 != 0) {
    piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == lVar17) {
        puVar9 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_018c3740;
      }
      uVar18 = uVar18 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar18 != 0);
  }
  puVar9 = (undefined8 *)FUN_00d59724(plVar21,lVar17,0);
LAB_018c3740:
  plVar20 = (long *)(*(code *)*puVar9)(plVar21,puVar9[1]);
  *(long **)(local_68 + 0x58) = plVar20;
  *(undefined4 *)(local_68 + 0x10) = 0xfffffffc;
  if (plVar20 == (long *)0x0) goto LAB_018c3764;
LAB_018c33a8:
  lVar17 = *plVar20;
  lVar15 = *(long *)puVar7;
  uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
  if (uVar18 != 0) {
    piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == lVar15) {
        puVar9 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_018c33f4;
      }
      uVar18 = uVar18 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar18 != 0);
  }
  puVar9 = (undefined8 *)FUN_00d59724(plVar20,lVar15,0);
LAB_018c33f4:
  uVar18 = (*(code *)*puVar9)(plVar20,puVar9[1]);
  if ((uVar18 & 1) != 0) {
    plVar20 = *(long **)(local_68 + 0x58);
    if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar15 = *plVar20;
    lVar22 = *(long *)puVar6;
    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar18 == 0) goto LAB_018c36b8;
    piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    goto LAB_018c36a0;
  }
  FUN_018c3b9c();
  *(undefined8 *)(local_68 + 0x58) = 0;
  param_1 = local_68;
  puVar9 = (undefined8 *)StringLiteral_9631;
  plVar20 = (long *)Method_System_Globalization_RegionInfo__ctor__;
  plVar3 = (long *)Newtonsoft_Json_Utilities_DynamicUtils_BinderWrapper_TypeInfo;
  plVar4 = (long *)PTR_DAT_033f1958;
  goto LAB_018c3468;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_018c36a0:
    if (*(long *)(piVar19 + -2) == lVar22) {
      puVar9 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_018c36d4;
    }
  }
LAB_018c36b8:
  puVar9 = (undefined8 *)FUN_00d59724(plVar20,lVar22,0);
LAB_018c36d4:
  uVar10 = (*(code *)*puVar9)(plVar20,puVar9[1]);
  *(undefined8 *)(local_68 + 0x18) = uVar10;
  *(undefined4 *)(local_68 + 0x10) = 2;
  return 1;
}


