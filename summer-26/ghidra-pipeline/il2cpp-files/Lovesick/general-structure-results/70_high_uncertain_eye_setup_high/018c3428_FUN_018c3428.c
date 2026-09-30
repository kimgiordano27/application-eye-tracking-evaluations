/*
FUNCTION_NAME: FUN_018c3428
ENTRY_POINT: 018c3428
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 FUN_018c3428(undefined8 *param_1)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  uVar5 = (*(code *)*param_1)();
  *(undefined8 *)(in_stack_00000018 + 0x50) = uVar5;
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffd;
  puVar8 = (undefined8 *)StringLiteral_9631;
  plVar9 = (long *)Method_System_Globalization_RegionInfo__ctor__;
  plVar2 = (long *)Newtonsoft_Json_Utilities_DynamicUtils_BinderWrapper_TypeInfo;
  plVar3 = (long *)PTR_DAT_033f1958;
LAB_018c3468:
  plVar16 = *(long **)(in_stack_00000018 + 0x50);
  do {
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar13 = *plVar16;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_018c34bc;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(plVar16,*unaff_x24,0);
LAB_018c34bc:
    uVar14 = (*(code *)*puVar6)(plVar16,puVar6[1]);
    if ((uVar14 & 1) == 0) {
      FUN_018c3c4c();
      *(undefined8 *)(in_stack_00000018 + 0x50) = 0;
      return 0;
    }
    plVar16 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar13 = *plVar16;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *unaff_x21) {
          puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_018c3528;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(plVar16,*unaff_x21,0);
LAB_018c3528:
    plVar16 = (long *)(*(code *)*puVar6)(plVar16,puVar6[1]);
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    in_stack_00000010 = *(undefined8 *)(unaff_x23 + 0x10);
    lVar13 = *(long *)(*plVar3 + 0x20);
    if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
      lVar13 = FUN_00d5941c();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
    if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
      lVar13 = FUN_00d5941c();
    }
    pcVar7 = (char *)thunk_FUN_00d32ed4(&stack0x00000010,*(undefined8 *)(lVar13 + 0x80));
    if (*pcVar7 == '\0') break;
    in_stack_00000010 = *(undefined8 *)(unaff_x23 + 0x10);
    uVar5 = *(undefined8 *)(in_stack_00000018 + 0x40);
    uVar4 = FUN_00adbe98(&stack0x00000010,*puVar8);
    lVar13 = FUN_018c38d0(plVar16,uVar5,uVar4);
    if (lVar13 != 0) {
      *(long *)(in_stack_00000018 + 0x18) = lVar13;
      *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
      return 1;
    }
    plVar16 = *(long **)(in_stack_00000018 + 0x50);
  } while( true );
  if (plVar16 == (long *)0x0) {
LAB_018c3614:
    lVar13 = *(long *)(in_stack_00000018 + 0x40);
    cVar12 = '\0';
    if (lVar13 != 0) {
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      cVar12 = *(char *)(lVar13 + 0x20);
    }
    if (cVar12 != '\0') {
      lVar13 = thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar5 = FUN_01731954(0);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar9 = (long *)thunk_FUN_00d93c64(plVar16,0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar10 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
      uVar11 = thunk_FUN_00d48444(Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_5__);
      uVar5 = FUN_018651d4(uVar11,uVar5,uVar10,0);
      thunk_FUN_00d48444(StringLiteral_1457);
      lVar13 = thunk_FUN_00d62348();
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01802838(lVar13,uVar5,0);
      uVar5 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_23__);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(lVar13,uVar5);
    }
    goto LAB_018c3468;
  }
  lVar13 = *plVar16;
  bVar1 = *(byte *)(*plVar2 + 300);
  if ((*(byte *)(lVar13 + 300) < bVar1) ||
     (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar1 * 8 + -8) != *plVar2)) {
    bVar1 = *(byte *)(*plVar9 + 300);
    if ((*(byte *)(lVar13 + 300) < bVar1) ||
       (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar1 * 8 + -8) != *plVar9)) goto LAB_018c3614;
  }
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *unaff_x22) {
        puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_018c3740;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar8 = (undefined8 *)FUN_00d59724(plVar16,*unaff_x22,0);
LAB_018c3740:
  plVar9 = (long *)(*(code *)*puVar8)(plVar16,puVar8[1]);
  *(long **)(in_stack_00000018 + 0x58) = plVar9;
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar13 = *plVar9;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
  if (uVar14 != 0) {
                    /* try { // try from 018c33b8 to 019c33cf has its CatchHandler @ 018c3408 */
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *unaff_x24) {
        puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_018c33f4;
      }
      uVar14 = uVar14 - 1;
                    /* try { // try from 018c33d0 to 019c33f7 has its CatchHandler @ 018c30b4 */
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar8 = (undefined8 *)FUN_00d59724(plVar9,*unaff_x24,0);
LAB_018c33f4:
                    /* try { // try from 018c33f8 to 019c3407 has its CatchHandler @ 018c3408 */
  uVar14 = (*(code *)*puVar8)(plVar9,puVar8[1]);
                    /* catch() { ... } // from try @ 018c33b8 with catch @ 018c3408
                       catch() { ... } // from try @ 018c33f8 with catch @ 018c3408 */
  if ((uVar14 & 1) != 0) {
    plVar9 = *(long **)(in_stack_00000018 + 0x58);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar13 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 == 0) goto LAB_018c36b8;
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    goto LAB_018c36a0;
  }
                    /* try { // try from 018c340c to 019c340f has its CatchHandler @ 018c3418 */
  FUN_018c3b9c();
                    /* try { // try from 018c3410 to 019c341b has its CatchHandler @ 018c30b4 */
  *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
  puVar8 = (undefined8 *)StringLiteral_9631;
  plVar9 = (long *)Method_System_Globalization_RegionInfo__ctor__;
  plVar2 = (long *)Newtonsoft_Json_Utilities_DynamicUtils_BinderWrapper_TypeInfo;
  plVar3 = (long *)PTR_DAT_033f1958;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 018c340c with catch @ 018c3418
                        */
  goto LAB_018c3468;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_018c36a0:
    if (*(long *)(piVar15 + -2) == *unaff_x21) {
      puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_018c36d4;
    }
  }
LAB_018c36b8:
  puVar8 = (undefined8 *)FUN_00d59724(plVar9,*unaff_x21,0);
LAB_018c36d4:
  uVar5 = (*(code *)*puVar8)(plVar9,puVar8[1]);
  *(undefined8 *)(in_stack_00000018 + 0x18) = uVar5;
  *(undefined4 *)(in_stack_00000018 + 0x10) = 2;
  return 1;
}


