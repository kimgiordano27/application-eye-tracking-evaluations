/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$<Start>b__13_0
ENTRY_POINT: 04c7784c
PROGRAM: hellodot-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04c78188) */

void Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__<Start>b__13_0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  int *unaff_x19;
  long unaff_x20;
  long *plVar14;
  long *plVar15;
  int iVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7e50);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7b68);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e80d0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e80d8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e80e0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c86c0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd980);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c86d8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7e10);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7260);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e4308);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e53a8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8a48);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e3dd8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e3de0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d08);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dabf8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca9b0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cbbe0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7e18);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7718);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e80e8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7e20);
  *(undefined1 *)(unaff_x20 + 0xab9) = 1;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000008 = 0;
  iVar16 = *unaff_x19;
  plVar14 = *(long **)(unaff_x19 + 0xe);
  if (iVar16 == 0) {
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
    iVar16 = -1;
    unaff_x19[0x16] = 0;
    unaff_x19[0x17] = 0;
    unaff_x19[0x18] = 0;
    unaff_x19[0x19] = 0;
    *unaff_x19 = -1;
Mono_Security_ASN1__CompareArray:
    plVar15 = (long *)FUN_044a9014(&stack0x00000010,*(undefined8 *)PTR_DAT_065e80d8);
    if (iVar16 == 1) goto LAB_04c77a68;
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar6 = (**(code **)(*plVar15 + 0x338))(plVar15,*(undefined8 *)(*plVar15 + 0x340));
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065c86d8);
      FUN_04678954(lVar6,*(undefined8 *)PTR_DAT_065c86c0);
    }
    *(long *)(unaff_x19 + 0x1a) = lVar6;
    uVar8 = *(undefined8 *)(unaff_x19 + 10);
    if (*(int *)(*(long *)PTR_DAT_065e7718 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    plVar9 = (long *)FUN_04c6fe34(uVar8,lVar6);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar6 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065e4308) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_04c77fd8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065e4308,0);
LAB_04c77fd8:
    iVar5 = (*(code *)*puVar7)(plVar9,puVar7[1]);
    if (iVar5 == 0) goto Locale__GetText;
    lVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e7e18);
    FUN_04f7383c(lVar6,0);
    auVar18 = (**(code **)(*plVar15 + 0x3d8))(plVar15,*(undefined8 *)(*plVar15 + 0x3e0));
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    *(undefined1 (*) [16])(lVar6 + 0x10) = auVar18;
    plVar10 = (long *)thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e7b68);
    FUN_04c5aa60(plVar10,0);
    uVar8 = (**(code **)(*plVar15 + 0x3f8))(plVar15,*(undefined8 *)(*plVar15 + 0x400));
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(uVar8,uVar8);
    }
    (**(code **)(*plVar10 + 0x408))(plVar10,uVar8,*(undefined8 *)(*plVar10 + 0x410));
    (**(code **)(*plVar10 + 0x348))(plVar10,plVar9,*(undefined8 *)(*plVar10 + 0x350));
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar6 = (**(code **)(*plVar14 + 0x568))
                      (plVar14,plVar10,lVar6,*(undefined8 *)(unaff_x19 + 0x10),
                       *(undefined8 *)(*plVar14 + 0x570));
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar18 = FUN_0404bcb8(lVar6,0,*(undefined8 *)PTR_DAT_065e80e8);
    _in_stack_00000010 = auVar18;
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
  else {
    if (iVar16 != 1) {
      uVar8 = *(undefined8 *)(unaff_x19 + 8);
      if (*(int *)(*(long *)PTR_DAT_065e7718 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_04c6722c(uVar8);
      FUN_03428244(*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)PTR_DAT_065e7e20,
                   *(undefined8 *)PTR_DAT_065e7e10);
      uVar12 = 0;
      if (*(long *)(unaff_x19 + 0xc) != 0) {
        uVar12 = *(ulong *)(*(long *)(unaff_x19 + 0xc) + 0x20);
      }
      iVar5 = 3;
      if ((uVar12 & 0xff) != 0) {
        iVar5 = (int)(uVar12 >> 0x20);
      }
      unaff_x19[0x12] = iVar5;
      lVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e7260);
      FUN_04f7383c(lVar6,0);
      lVar11 = *(long *)(unaff_x19 + 0xc);
      if (lVar11 == 0) {
        uVar8 = 0;
        uVar17 = uVar8;
      }
      else {
        uVar17 = *(undefined8 *)(lVar11 + 0x18);
        uVar8 = *(undefined8 *)(lVar11 + 0x10);
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      *(undefined8 *)(lVar6 + 0x18) = uVar17;
      *(undefined8 *)(lVar6 + 0x10) = uVar8;
      *(long *)(unaff_x19 + 0x14) = lVar6;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar6 = (**(code **)(*plVar14 + 0x2e8))
                        (plVar14,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0x14),
                         *(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(*plVar14 + 0x2f0));
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
      goto Mono_Security_ASN1__CompareArray;
    }
LAB_04c77a68:
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x16);
    iVar16 = -1;
    unaff_x19[0x16] = 0;
    unaff_x19[0x17] = 0;
    unaff_x19[0x18] = 0;
    unaff_x19[0x19] = 0;
    *unaff_x19 = -1;
  }
  FUN_044a9014(&stack0x00000010,*(undefined8 *)PTR_DAT_065e80d8);
Locale__GetText:
  lVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065c86d8);
  FUN_04678954(lVar6,*(undefined8 *)PTR_DAT_065c86c0);
  plVar14 = *(long **)(unaff_x19 + 10);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar11 = *plVar14;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065e3dd8) {
        puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_04c77b10;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar7 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)PTR_DAT_065e3dd8,0);
LAB_04c77b10:
  plVar14 = (long *)(*(code *)*puVar7)(plVar14,puVar7[1]);
  puVar4 = PTR_DAT_065e53a8;
  puVar3 = PTR_DAT_065e3de0;
  puVar2 = PTR_DAT_065dd980;
  puVar1 = PTR_DAT_065c8d08;
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  do {
    lVar11 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_04c77b90;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)puVar1,0);
LAB_04c77b90:
    uVar12 = (*(code *)*puVar7)(plVar14,puVar7[1]);
    if ((uVar12 & 1) == 0) {
      if ((-1 < iVar16) || (plVar14 == (long *)0x0)) goto LAB_04c77dac;
      lVar11 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 == 0) goto LAB_04c77d2c;
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_04c77bec;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)puVar3,0);
LAB_04c77bec:
    uVar8 = (*(code *)*puVar7)(plVar14,puVar7[1]);
    plVar15 = *(long **)(unaff_x19 + 0x1a);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar11 = *plVar15;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 7) * 0x10 + 0x138);
          goto LAB_04c77c54;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_02ce0a7c(plVar15,*(long *)puVar4,7);
LAB_04c77c54:
    (*(code *)*puVar7)(plVar15,uVar8,&stack0x00000008,puVar7[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_04679278(lVar6,uVar8,in_stack_00000008,*(undefined8 *)puVar2);
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_04c77da0;
    }
  }
LAB_04c77d2c:
  puVar7 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)PTR_DAT_065c8a48,0);
LAB_04c77da0:
  (*(code *)*puVar7)(plVar14,puVar7[1]);
LAB_04c77dac:
  *unaff_x19 = -2;
  unaff_x19[0x14] = 0;
  puVar1 = PTR_DAT_065e80c8;
  unaff_x19[0x15] = 0;
  if (*(int *)(*(long *)PTR_DAT_065e7e50 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04266690(unaff_x19 + 2,lVar6,*(undefined8 *)puVar1);
  return;
}


