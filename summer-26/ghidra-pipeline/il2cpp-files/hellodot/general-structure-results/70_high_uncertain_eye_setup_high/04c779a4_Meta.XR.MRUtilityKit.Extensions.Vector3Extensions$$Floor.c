/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.Extensions.Vector3Extensions$$Floor
ENTRY_POINT: 04c779a4
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04c78188) */

void Meta_XR_MRUtilityKit_Extensions_Vector3Extensions__Floor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  undefined4 *unaff_x19;
  long *unaff_x20;
  undefined8 uVar15;
  int unaff_w28;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  uVar15 = *(undefined8 *)(unaff_x19 + 8);
  if (*(int *)(*(long *)PTR_DAT_065e7718 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04c6722c(uVar15);
  FUN_03428244(*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)PTR_DAT_065e7e20,
               *(undefined8 *)PTR_DAT_065e7e10);
  uVar12 = 0;
  if (*(long *)(unaff_x19 + 0xc) != 0) {
    uVar12 = *(ulong *)(*(long *)(unaff_x19 + 0xc) + 0x20);
  }
  uVar11 = 3;
  if ((uVar12 & 0xff) != 0) {
    uVar11 = (undefined4)(uVar12 >> 0x20);
  }
  unaff_x19[0x12] = uVar11;
  lVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e7260);
  FUN_04f7383c(lVar6,0);
  lVar13 = *(long *)(unaff_x19 + 0xc);
  if (lVar13 == 0) {
    uVar15 = 0;
    uVar16 = uVar15;
  }
  else {
    uVar16 = *(undefined8 *)(lVar13 + 0x18);
    uVar15 = *(undefined8 *)(lVar13 + 0x10);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  *(undefined8 *)(lVar6 + 0x18) = uVar16;
  *(undefined8 *)(lVar6 + 0x10) = uVar15;
  *(long *)(unaff_x19 + 0x14) = lVar6;
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar6 = (**(code **)(*unaff_x20 + 0x2e8))();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  _in_stack_00000010 = FUN_0404bcb8(lVar6,0,*(undefined8 *)PTR_DAT_065e80e8);
  uVar12 = FUN_044a8fc8(&stack0x00000010,*(undefined8 *)PTR_DAT_065e80e0);
  if ((uVar12 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000010;
    if (*(int *)(*(long *)PTR_DAT_065e7e50 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_030b8b98(unaff_x19 + 2,&stack0x00000010);
    return;
  }
  plVar7 = (long *)FUN_044a9014(&stack0x00000010,*(undefined8 *)PTR_DAT_065e80d8);
  if (unaff_w28 == 1) {
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
    unaff_w28 = -1;
    *(undefined8 *)(unaff_x19 + 0x16) = 0;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *unaff_x19 = 0xffffffff;
  }
  else {
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar6 = (**(code **)(*plVar7 + 0x338))(plVar7,*(undefined8 *)(*plVar7 + 0x340));
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065c86d8);
      FUN_04678954(lVar6,*(undefined8 *)PTR_DAT_065c86c0);
    }
    *(long *)(unaff_x19 + 0x1a) = lVar6;
    uVar15 = *(undefined8 *)(unaff_x19 + 10);
    if (*(int *)(*(long *)PTR_DAT_065e7718 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    plVar8 = (long *)FUN_04c6fe34(uVar15,lVar6);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar6 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_065e4308) {
          puVar9 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04c77fd8;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)PTR_DAT_065e4308,0);
LAB_04c77fd8:
    iVar5 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if (iVar5 == 0) goto Locale__GetText;
    lVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e7e18);
    FUN_04f7383c(lVar6,0);
    auVar17 = (**(code **)(*plVar7 + 0x3d8))(plVar7,*(undefined8 *)(*plVar7 + 0x3e0));
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    *(undefined1 (*) [16])(lVar6 + 0x10) = auVar17;
    plVar10 = (long *)thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e7b68);
    FUN_04c5aa60(plVar10,0);
    uVar15 = (**(code **)(*plVar7 + 0x3f8))(plVar7,*(undefined8 *)(*plVar7 + 0x400));
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(uVar15,uVar15);
    }
    (**(code **)(*plVar10 + 0x408))(plVar10,uVar15,*(undefined8 *)(*plVar10 + 0x410));
    (**(code **)(*plVar10 + 0x348))(plVar10,plVar8,*(undefined8 *)(*plVar10 + 0x350));
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar6 = (**(code **)(*unaff_x20 + 0x568))();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar17 = FUN_0404bcb8(lVar6,0,*(undefined8 *)PTR_DAT_065e80e8);
    _in_stack_00000010 = auVar17;
    uVar12 = FUN_044a8fc8(&stack0x00000010,*(undefined8 *)PTR_DAT_065e80e0);
    if ((uVar12 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000010;
      if (*(int *)(*(long *)PTR_DAT_065e7e50 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030b8b98(unaff_x19 + 2,&stack0x00000010);
      return;
    }
  }
  FUN_044a9014(&stack0x00000010,*(undefined8 *)PTR_DAT_065e80d8);
Locale__GetText:
  lVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065c86d8);
  FUN_04678954(lVar6,*(undefined8 *)PTR_DAT_065c86c0);
  plVar7 = *(long **)(unaff_x19 + 10);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar13 = *plVar7;
  uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar12 != 0) {
    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_065e3dd8) {
        puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_04c77b10;
      }
      uVar12 = uVar12 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar12 != 0);
  }
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_065e3dd8,0);
LAB_04c77b10:
  plVar7 = (long *)(*(code *)*puVar9)(plVar7,puVar9[1]);
  puVar4 = PTR_DAT_065e53a8;
  puVar3 = PTR_DAT_065e3de0;
  puVar2 = PTR_DAT_065dd980;
  puVar1 = PTR_DAT_065c8d08;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  do {
    lVar13 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04c77b90;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar1,0);
LAB_04c77b90:
    uVar12 = (*(code *)*puVar9)(plVar7,puVar9[1]);
    if ((uVar12 & 1) == 0) {
      if ((-1 < unaff_w28) || (plVar7 == (long *)0x0)) goto LAB_04c77dac;
      lVar13 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar12 == 0) goto LAB_04c77d2c;
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    lVar13 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04c77bec;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar3,0);
LAB_04c77bec:
    uVar15 = (*(code *)*puVar9)(plVar7,puVar9[1]);
    plVar8 = *(long **)(unaff_x19 + 0x1a);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar13 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 7) * 0x10 + 0x138);
          goto LAB_04c77c54;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar4,7);
LAB_04c77c54:
    (*(code *)*puVar9)(plVar8,uVar15,&stack0x00000008,puVar9[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_04679278(lVar6,uVar15,in_stack_00000008,*(undefined8 *)puVar2);
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_04c77da0;
    }
  }
LAB_04c77d2c:
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)PTR_DAT_065c8a48,0);
LAB_04c77da0:
  (*(code *)*puVar9)(plVar7,puVar9[1]);
LAB_04c77dac:
  *unaff_x19 = 0xfffffffe;
  *(undefined8 *)(unaff_x19 + 0x14) = 0;
  puVar1 = PTR_DAT_065e80c8;
  if (*(int *)(*(long *)PTR_DAT_065e7e50 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04266690(unaff_x19 + 2,lVar6,*(undefined8 *)puVar1);
  return;
}


