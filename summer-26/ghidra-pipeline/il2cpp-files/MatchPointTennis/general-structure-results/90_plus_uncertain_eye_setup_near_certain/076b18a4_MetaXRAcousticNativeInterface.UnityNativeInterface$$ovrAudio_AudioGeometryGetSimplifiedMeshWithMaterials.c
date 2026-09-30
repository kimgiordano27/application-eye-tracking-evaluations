/*
FUNCTION_NAME: MetaXRAcousticNativeInterface.UnityNativeInterface$$ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials
ENTRY_POINT: 076b18a4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x076b2068) */
/* WARNING: Removing unreachable block (ram,0x076b1e1c) */

void MetaXRAcousticNativeInterface_UnityNativeInterface__ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials
               (void)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint in_w8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x19;
  long unaff_x20;
  long *plVar15;
  long unaff_x21;
  long *plVar16;
  uint uVar17;
  int unaff_w23;
  int iVar18;
  undefined1 auVar19 [16];
  int iStack000000000000002c;
  long in_stack_00000030;
  uint uStack0000000000000038;
  undefined4 *in_stack_00000040;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  char in_stack_000000c8;
  char in_stack_000000e0;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
code_r0x076b18a4:
  if (in_w8 <= (uint)unaff_x20) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
  unaff_x19[unaff_x20 + 4] = unaff_x21;
  thunk_FUN_044bb4b4(unaff_x19 + unaff_x20 + 4,unaff_x21);
switchD_076b1304_caseD_2:
  plVar16 = *(long **)(in_stack_00000030 + 0x20);
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar9 = *plVar16;
  uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f2ce28) {
        puVar7 = (undefined8 *)(lVar9 + (long)(*piVar14 + 2) * 0x10 + 0x138);
        goto LAB_076b1af0;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar7 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2ce28,2);
LAB_076b1af0:
  lVar9 = (*(code *)*puVar7)(plVar16,puVar7[1]);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  in_stack_00000198 = FUN_07ab3bc0(lVar9,0);
  uVar13 = FUN_0795ad28(&stack0x00000198,0);
  if ((uVar13 & 1) == 0) {
    *in_stack_00000040 = 1;
    *(undefined8 *)(in_stack_00000040 + 0x1e) = in_stack_00000198;
    thunk_FUN_044bb4b4(in_stack_00000040 + 0x1e,0);
    if (*(int *)(*(long *)PTR_DAT_09f2cdd8 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_04639174(in_stack_00000040 + 2,&stack0x00000198,in_stack_00000040,
                 *(undefined8 *)PTR_DAT_09f2d528);
    return;
  }
  FUN_0795adf4(&stack0x00000198,0);
  do {
    iVar18 = in_stack_00000040[0x20];
    in_stack_00000040[0x20] = iVar18 + 1;
    puVar5 = PTR_DAT_09f2d410;
    puVar4 = PTR_DAT_09f2d408;
    if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(long *)(in_stack_00000030 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(int *)(*(long *)(in_stack_00000030 + 0x68) + 0x18) <= iVar18 + 1) {
      if ((int)in_stack_00000040[0xc] < 1) goto LAB_076b1ee0;
      uStack0000000000000038 = 0;
      uVar17 = 0;
      iStack000000000000002c = unaff_w23;
      goto LAB_076b1b7c;
    }
    plVar16 = *(long **)(in_stack_00000040 + 8);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    plVar16 = (long *)(**(code **)(*plVar16 + 0x178))(plVar16,*(undefined8 *)(*plVar16 + 0x180));
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar9 = *plVar16;
    uVar1 = in_stack_00000040[0x20];
    uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f2d018) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_076b12bc;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2d018,0);
LAB_076b12bc:
    lVar9 = (*(code *)*puVar7)(plVar16,uVar1,puVar7[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
  } while (*(int *)(lVar9 + 0x18) < 0);
  uVar6 = Meta_XR_BuildingBlocks_RoomMeshController_<Start>d__4__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                    (lVar9,0);
  switch(uVar6) {
  case 1:
    lVar9 = *(long *)(in_stack_00000030 + 0x70);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(uint *)(lVar9 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    iVar18 = *(int *)(lVar9 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20);
    if (iVar18 < 0x200) {
      if ((iVar18 == 2) || (iVar18 == 4)) {
        lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d240);
        System_Action<OVRPlugin_Qpl_Annotation_Builder_Entry>__Invoke
                  (lVar9,*(undefined8 *)PTR_DAT_09f2d4f0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar10 = *(long *)(in_stack_00000030 + 0x70);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        uVar17 = in_stack_00000040[0x20];
        if (*(uint *)(lVar10 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        FUN_076a76c4(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),(long)(int)uVar17,
                     lVar9 + 0x10,&stack0x00000158,lVar9 + 0x18,
                     *(int *)(lVar10 + (long)(int)uVar17 * 4 + 0x20) == 4);
        lVar10 = *(long *)(in_stack_00000040 + 0x10);
        auVar19 = FUN_0613d160(&stack0x00000158,*(undefined8 *)PTR_DAT_09f2aca0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar12 = *(long *)(lVar10 + 0x10);
        lVar11 = *(long *)PTR_DAT_09f2d6c0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        uVar17 = *(uint *)(lVar10 + 0x18);
        if (uVar17 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar17 + 1;
          *(undefined1 (*) [16])(lVar12 + (long)(int)uVar17 * 0x10 + 0x20) = auVar19;
        }
        else {
          FUN_05b19770(lVar10,auVar19._0_8_,auVar19._8_8_,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        plVar16 = *(long **)(in_stack_00000030 + 0x68);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        uVar17 = in_stack_00000040[0x20];
        lVar10 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar16 + 0x40));
        if (lVar10 == 0) {
          uVar8 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
          FUN_04447d10(uVar8,0);
        }
        if (*(uint *)(plVar16 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        plVar16[(long)(int)uVar17 + 4] = lVar9;
        thunk_FUN_044bb4b4(plVar16 + (long)(int)uVar17 + 4,lVar9);
      }
    }
    else if ((iVar18 == 0x200) || (iVar18 == 0x2000)) {
      lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d518);
      FUN_07399b20(lVar9,*(undefined8 *)PTR_DAT_09f2d500);
      FUN_076a89e0(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),in_stack_00000040[0x20],
                   &stack0x000000e0,&stack0x000000c8);
      if (in_stack_000000e0 != '\0') {
        auVar19 = FUN_0612f58c(&stack0x000000e0,*(undefined8 *)PTR_DAT_09f2d328);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        *(undefined1 (*) [16])(lVar9 + 0x10) = auVar19;
      }
      if (in_stack_000000c8 != '\0') {
        lVar10 = *(long *)(in_stack_00000040 + 0x10);
        auVar19 = FUN_0613d160(&stack0x000000c8,*(undefined8 *)PTR_DAT_09f2aca0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar12 = *(long *)(lVar10 + 0x10);
        lVar11 = *(long *)PTR_DAT_09f2d6c0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        uVar17 = *(uint *)(lVar10 + 0x18);
        if (uVar17 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar17 + 1;
          *(undefined1 (*) [16])(lVar12 + (long)(int)uVar17 * 0x10 + 0x20) = auVar19;
        }
        else {
          FUN_05b19770(lVar10,auVar19._0_8_,auVar19._8_8_,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
      }
      plVar16 = *(long **)(in_stack_00000030 + 0x68);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar17 = in_stack_00000040[0x20];
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar16 + 0x40)), lVar10 == 0)) {
        uVar8 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar8,0);
      }
      if (*(uint *)(plVar16 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      plVar16[(long)(int)uVar17 + 4] = lVar9;
      thunk_FUN_044bb4b4(plVar16 + (long)(int)uVar17 + 4,lVar9);
    }
  default:
    goto switchD_076b1304_caseD_2;
  case 3:
    lVar9 = *(long *)(in_stack_00000030 + 0x70);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(uint *)(lVar9 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    uVar17 = *(uint *)(lVar9 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20);
    if ((uVar17 >> 10 & 1) == 0) {
      if ((uVar17 >> 0xc & 1) != 0) {
        lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d350);
        FUN_07399b40(lVar9,*(undefined8 *)PTR_DAT_09f2d4f8);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        FUN_076a80cc(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),
                     in_stack_00000040[0x20],lVar9 + 0x10,&stack0x000000f8,0);
        lVar10 = *(long *)(in_stack_00000040 + 0x10);
        auVar19 = FUN_0613d160(&stack0x000000f8,*(undefined8 *)PTR_DAT_09f2aca0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar12 = *(long *)(lVar10 + 0x10);
        lVar11 = *(long *)PTR_DAT_09f2d6c0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        uVar17 = *(uint *)(lVar10 + 0x18);
        if (uVar17 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar17 + 1;
          *(undefined1 (*) [16])(lVar12 + (long)(int)uVar17 * 0x10 + 0x20) = auVar19;
        }
        else {
          FUN_05b19770(lVar10,auVar19._0_8_,auVar19._8_8_,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        plVar16 = *(long **)(in_stack_00000030 + 0x68);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        uVar17 = in_stack_00000040[0x20];
        lVar10 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar16 + 0x40));
        if (lVar10 == 0) {
          uVar8 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
          FUN_04447d10(uVar8,0);
        }
        if (*(uint *)(plVar16 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        plVar16[(long)(int)uVar17 + 4] = lVar9;
        thunk_FUN_044bb4b4(plVar16 + (long)(int)uVar17 + 4,lVar9);
      }
    }
    else {
      lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d350);
      FUN_07399b40(lVar9,*(undefined8 *)PTR_DAT_09f2d4f8);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_076a80cc(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),in_stack_00000040[0x20],
                   lVar9 + 0x10,&stack0x00000128,1);
      lVar10 = *(long *)(in_stack_00000040 + 0x10);
      auVar19 = FUN_0613d160(&stack0x00000128,*(undefined8 *)PTR_DAT_09f2aca0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar12 = *(long *)(lVar10 + 0x10);
      lVar11 = *(long *)PTR_DAT_09f2d6c0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar17 = *(uint *)(lVar10 + 0x18);
      if (uVar17 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar17 + 1;
        *(undefined1 (*) [16])(lVar12 + (long)(int)uVar17 * 0x10 + 0x20) = auVar19;
      }
      else {
        FUN_05b19770(lVar10,auVar19._0_8_,auVar19._8_8_,
                     *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
      plVar16 = *(long **)(in_stack_00000030 + 0x68);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar17 = in_stack_00000040[0x20];
      lVar10 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar16 + 0x40));
      if (lVar10 == 0) {
        uVar8 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar8,0);
      }
      if (*(uint *)(plVar16 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      plVar16[(long)(int)uVar17 + 4] = lVar9;
      thunk_FUN_044bb4b4(plVar16 + (long)(int)uVar17 + 4,lVar9);
    }
    goto switchD_076b1304_caseD_2;
  case 4:
    goto switchD_076b1304_caseD_4;
  case 7:
    lVar9 = *(long *)(in_stack_00000030 + 0x70);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(uint *)(lVar9 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    if (*(int *)(lVar9 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20) == 0x100) {
      lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d398);
      FUN_07399ae0(lVar9,*(undefined8 *)PTR_DAT_09f2d508);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_076a7ce8(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),in_stack_00000040[0x20],
                   lVar9 + 0x10,&stack0x00000140);
      lVar10 = *(long *)(in_stack_00000040 + 0x10);
      auVar19 = FUN_0613d160(&stack0x00000140,*(undefined8 *)PTR_DAT_09f2aca0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar12 = *(long *)(lVar10 + 0x10);
      lVar11 = *(long *)PTR_DAT_09f2d6c0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar17 = *(uint *)(lVar10 + 0x18);
      if (uVar17 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar17 + 1;
        *(undefined1 (*) [16])(lVar12 + (long)(int)uVar17 * 0x10 + 0x20) = auVar19;
      }
      else {
        FUN_05b19770(lVar10,auVar19._0_8_,auVar19._8_8_,
                     *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
      plVar16 = *(long **)(in_stack_00000030 + 0x68);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar17 = in_stack_00000040[0x20];
      lVar10 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar16 + 0x40));
      if (lVar10 == 0) {
        uVar8 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar8,0);
      }
      if (*(uint *)(plVar16 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      plVar16[(long)(int)uVar17 + 4] = lVar9;
      thunk_FUN_044bb4b4(plVar16 + (long)(int)uVar17 + 4,lVar9);
    }
    goto switchD_076b1304_caseD_2;
  }
LAB_076b1b7c:
  plVar16 = *(long **)(in_stack_00000040 + 8);
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  plVar16 = (long *)(**(code **)(*plVar16 + 0x1f8))(plVar16,*(undefined8 *)(*plVar16 + 0x200));
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar9 = *plVar16;
  uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f2d160) {
        puVar7 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_076b1bec;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar7 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f2d160,0);
LAB_076b1bec:
  lVar9 = (*(code *)*puVar7)(plVar16,uStack0000000000000038,puVar7[1]);
  lVar10 = *(long *)(in_stack_00000030 + 0x98);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(uint *)(lVar10 + 0x18) <= uStack0000000000000038) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
  lVar10 = *(long *)(lVar10 + (long)(int)uStack0000000000000038 * 8 + 0x20);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar10 = FUN_074427bc(lVar10,*(undefined8 *)PTR_DAT_09f2d5a0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_06b56d04(&stack0x00000070,lVar10,*(undefined8 *)PTR_DAT_09f2d718);
  in_stack_000000b8 = in_stack_00000078;
  in_stack_000000b0 = in_stack_00000070;
  in_stack_000000c0 = in_stack_00000080;
  while (uVar13 = System_Collections_Generic_EqualityComparer<ConstraintSource>__System_Collections_IEqualityComparer_GetHashCode
                            (&stack0x000000b0,*(undefined8 *)PTR_DAT_09f2d600),
        lVar10 = in_stack_000000c0, (uVar13 & 1) != 0) {
    if (in_stack_000000c0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(int *)(in_stack_000000c0 + 0x18) < 1) {
      plVar16 = (long *)0x0;
    }
    else {
      iVar18 = 0;
      plVar16 = (long *)0x0;
      do {
        auVar19 = FUN_059f3e50(lVar10,iVar18,*(undefined8 *)puVar4);
        lVar12 = auVar19._8_8_;
        if (plVar16 == (long *)0x0) {
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar1 = *(undefined4 *)(lVar10 + 0x18);
          uVar8 = *(undefined8 *)(lVar9 + 0x10);
          plVar16 = (long *)thunk_FUN_0448520c(*(undefined8 *)puVar5);
          FUN_076c14ec(plVar16,uStack0000000000000038,uVar17,uVar1,uVar8,0);
        }
        else {
          lVar11 = *(long *)puVar5;
          bVar2 = *(byte *)(lVar11 + 0x130);
          if (*(byte *)(*plVar16 + 0x130) < bVar2) goto LAB_076b1e40;
          if (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) != lVar11) {
            plVar16 = (long *)0x0;
          }
        }
        if (plVar16 == (long *)0x0) {
LAB_076b1e40:
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        FUN_076c1680(plVar16,iVar18,auVar19._0_8_ & 0xffffffff,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(long *)(lVar12 + 0x28) != 0) {
          if (*(long *)(in_stack_00000040 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar11 = FUN_0744290c(*(long *)(in_stack_00000040 + 0xe),lVar12,
                                *(undefined8 *)PTR_DAT_09f2d590);
          plVar16[5] = lVar11;
          thunk_FUN_044bb4b4();
        }
        FUN_076c1fc8(plVar16,iVar18,*(undefined4 *)(lVar12 + 0x1c),0);
        iVar18 = iVar18 + 1;
      } while (iVar18 < *(int *)(lVar10 + 0x18));
    }
    plVar15 = *(long **)(in_stack_00000030 + 0x88);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if ((plVar16 != (long *)0x0) &&
       (lVar10 = thunk_FUN_04485110(plVar16,*(undefined8 *)(*plVar15 + 0x40)), lVar10 == 0)) {
      uVar8 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar8,0);
    }
    if (*(uint *)(plVar15 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    plVar15[(long)(int)uVar17 + 4] = (long)plVar16;
    thunk_FUN_044bb4b4(plVar15 + (long)(int)uVar17 + 4,plVar16);
    uVar17 = uVar17 + 1;
  }
  if (iStack000000000000002c < 0) {
    FUN_05260da0(&stack0x000000b0,*(undefined8 *)PTR_DAT_09f2d5f0);
  }
  uStack0000000000000038 = uStack0000000000000038 + 1;
  if ((int)in_stack_00000040[0xc] <= (int)uStack0000000000000038) {
LAB_076b1ee0:
    if (*(long *)(in_stack_00000040 + 0x10) != 0) {
      uVar8 = FUN_05b1b2ac(*(long *)(in_stack_00000040 + 0x10),*(undefined8 *)PTR_DAT_09f2d6c8);
      FUN_05f9dd28(&stack0x000001e0,uVar8,4,*(undefined8 *)PTR_DAT_09f2d700);
      auVar19 = FUN_094b28ac(in_stack_000001e0,in_stack_000001e8,0);
      *(undefined1 (*) [16])(in_stack_00000030 + 0x78) = auVar19;
      FUN_05f9df64(&stack0x000001e0,*(undefined8 *)PTR_DAT_09f2ac78);
      FUN_094b2800(0);
      cVar3 = *(char *)(in_stack_00000040 + 0x12);
      *in_stack_00000040 = 0xfffffffe;
      *(undefined8 *)(in_stack_00000040 + 0xe) = 0;
      thunk_FUN_044bb4b4(in_stack_00000040 + 0xe,0);
      *(undefined8 *)(in_stack_00000040 + 0x10) = 0;
      thunk_FUN_044bb4b4(in_stack_00000040 + 0x10,0);
      if (*(int *)(*(long *)PTR_DAT_09f2cdd8 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_066e2370(in_stack_00000040 + 2,cVar3 != '\0',*(undefined8 *)PTR_DAT_09f2ce18);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  goto LAB_076b1b7c;
switchD_076b1304_caseD_4:
  lVar9 = *(long *)(in_stack_00000030 + 0x70);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(uint *)(lVar9 + 0x18) <= (uint)in_stack_00000040[0x20]) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
  if ((*(uint *)(lVar9 + (long)(int)in_stack_00000040[0x20] * 4 + 0x20) >> 0xb & 1) != 0)
  goto code_r0x076b1450;
  goto switchD_076b1304_caseD_2;
code_r0x076b1450:
  unaff_x21 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d358);
  FUN_07399b00(unaff_x21,*(undefined8 *)PTR_DAT_09f2d510);
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_076a850c(in_stack_00000030,*(undefined8 *)(in_stack_00000040 + 8),in_stack_00000040[0x20],
               unaff_x21 + 0x10,&stack0x00000110);
  lVar9 = *(long *)(in_stack_00000040 + 0x10);
  auVar19 = FUN_0613d160(&stack0x00000110,*(undefined8 *)PTR_DAT_09f2aca0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar10 = *(long *)(lVar9 + 0x10);
  lVar12 = *(long *)PTR_DAT_09f2d6c0;
  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar17 = *(uint *)(lVar9 + 0x18);
  if (uVar17 < *(uint *)(lVar10 + 0x18)) {
    *(uint *)(lVar9 + 0x18) = uVar17 + 1;
    *(undefined1 (*) [16])(lVar10 + (long)(int)uVar17 * 0x10 + 0x20) = auVar19;
  }
  else {
    FUN_05b19770(lVar9,auVar19._0_8_,auVar19._8_8_,
                 *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
  }
  unaff_x19 = *(long **)(in_stack_00000030 + 0x68);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  unaff_x20 = (long)(int)in_stack_00000040[0x20];
  lVar9 = thunk_FUN_04485110(unaff_x21,*(undefined8 *)(*unaff_x19 + 0x40));
  if (lVar9 == 0) {
    uVar8 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar8,0);
  }
  in_w8 = *(uint *)(unaff_x19 + 3);
  goto code_r0x076b18a4;
}


