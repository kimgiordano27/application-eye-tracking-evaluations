/*
FUNCTION_NAME: Unity.Collections.NativeArray<FullBodyDeformationJob.BoneDeformationAdjustmentData>$$Copy
ENTRY_POINT: 036cfa28
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x036d0218) */
/* WARNING: Removing unreachable block (ram,0x036d01e0) */
/* WARNING: Removing unreachable block (ram,0x036d0204) */
/* WARNING: Removing unreachable block (ram,0x036d0210) */
/* WARNING: Removing unreachable block (ram,0x036d02c4) */

void Unity_Collections_NativeArray<FullBodyDeformationJob_BoneDeformationAdjustmentData>__Copy
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  undefined4 uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  int *piVar18;
  long unaff_x19;
  long unaff_x21;
  long *plVar19;
  long in_stack_00000008;
  
  thunk_FUN_0159f088(*(undefined8 *)(param_1 + 0xd68));
  thunk_FUN_0159f088(PTR_DAT_06e227e8);
  thunk_FUN_0159f088(PTR_DAT_06dda028);
  *(undefined1 *)(unaff_x21 + 0x91d) = 1;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar11 = FUN_03fc53ec();
  if (lVar11 != 0) {
    return;
  }
  if (*(char *)(unaff_x19 + 0x30) != '\0') {
    FUN_01fbafc0();
    return;
  }
  plVar19 = *(long **)(unaff_x19 + 0x98);
  *(undefined1 *)(unaff_x19 + 0x30) = 1;
  puVar1 = PTR_DAT_06dd0a58;
  if (plVar19 == (long *)0x0) {
    if (*(int *)(*(long *)PTR_DAT_06dd0a58 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    if (DAT_0722c1cb == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06dd0a58);
      DAT_0722c1cb = '\x01';
    }
    lVar11 = *(long *)puVar1;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar11 = *(long *)puVar1;
    }
    *(undefined8 *)(unaff_x19 + 0x60) = **(undefined8 **)(lVar11 + 0xb8);
    thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x60));
    if (DAT_0722c1cb == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06dd0a58);
      DAT_0722c1cb = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_036f2c70(in_stack_00000008,0);
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_036d6848();
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    *(undefined4 *)(in_stack_00000008 + 0x5c) = 4;
    uVar14 = Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetHashCode();
    *(undefined8 *)(in_stack_00000008 + 0xb8) = uVar14;
    uVar14 = thunk_FUN_01656ef8((undefined8 *)(in_stack_00000008 + 0xb8));
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar10 = FUN_036d7f44(uVar14,in_stack_00000008,0,*(undefined8 *)(in_stack_00000008 + 0xb8));
    *(undefined4 *)(in_stack_00000008 + 0x90) = uVar10;
  }
  else {
    lVar11 = *plVar19;
    bVar9 = *(byte *)(*(long *)PTR_DAT_06decd68 + 300);
    if ((*(byte *)(lVar11 + 300) < bVar9) ||
       (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar9 * 8 + -8) != *(long *)PTR_DAT_06decd68)) {
      bVar9 = *(byte *)(*(long *)PTR_DAT_06e20258 + 300);
      if ((*(byte *)(lVar11 + 300) < bVar9) ||
         (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar9 * 8 + -8) != *(long *)PTR_DAT_06e20258))
      {
                    /* WARNING: Subroutine does not return */
        FUN_0160f170(plVar19);
      }
      plVar12 = (long *)(**(code **)(lVar11 + 0x218))(plVar19,*(undefined8 *)(lVar11 + 0x220));
      puVar1 = PTR_DAT_06e14e30;
      if (plVar12 != (long *)0x0) {
        bVar9 = *(byte *)(*(long *)PTR_DAT_06e14e30 + 300);
        if ((bVar9 <= *(byte *)(*plVar12 + 300)) &&
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar9 * 8 + -8) ==
            *(long *)PTR_DAT_06e14e30)) {
          plVar19 = (long *)(**(code **)(*plVar19 + 0x218))
                                      (plVar19,*(undefined8 *)(*plVar19 + 0x220));
          if (plVar19 != (long *)0x0) {
            bVar9 = *(byte *)(*(long *)puVar1 + 300);
            if ((*(byte *)(*plVar19 + 300) < bVar9) ||
               (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar9 * 8 + -8) != *(long *)puVar1)) {
                    /* WARNING: Subroutine does not return */
              FUN_0160f170(plVar19);
            }
          }
          FUN_036d61e0();
          goto LAB_036cfe10;
        }
      }
      plVar19 = (long *)(**(code **)(*plVar19 + 0x218))(plVar19,*(undefined8 *)(*plVar19 + 0x220));
      if (plVar19 != (long *)0x0) {
        bVar9 = *(byte *)(*(long *)PTR_DAT_06df7550 + 300);
        if ((*(byte *)(*plVar19 + 300) < bVar9) ||
           (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar9 * 8 + -8) !=
            *(long *)PTR_DAT_06df7550)) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170(plVar19);
        }
      }
      FUN_036d6580();
    }
    else {
      *(undefined4 *)(unaff_x19 + 0x90) = 0;
      plVar12 = (long *)(**(code **)(*plVar19 + 0x218))(plVar19,*(undefined8 *)(*plVar19 + 0x220));
      puVar1 = PTR_DAT_06dc5130;
      if (plVar12 != (long *)0x0) {
        bVar9 = *(byte *)(*(long *)PTR_DAT_06dc5130 + 300);
        if ((bVar9 <= *(byte *)(*plVar12 + 300)) &&
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar9 * 8 + -8) ==
            *(long *)PTR_DAT_06dc5130)) {
          plVar19 = (long *)(**(code **)(*plVar19 + 0x218))
                                      (plVar19,*(undefined8 *)(*plVar19 + 0x220));
          if (plVar19 != (long *)0x0) {
            bVar9 = *(byte *)(*(long *)puVar1 + 300);
            if ((*(byte *)(*plVar19 + 300) < bVar9) ||
               (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar9 * 8 + -8) != *(long *)puVar1)) {
                    /* WARNING: Subroutine does not return */
              FUN_0160f170(plVar19);
            }
          }
          FUN_036d5b3c();
          goto LAB_036cfe10;
        }
      }
      plVar19 = (long *)(**(code **)(*plVar19 + 0x218))(plVar19,*(undefined8 *)(*plVar19 + 0x220));
      if (plVar19 != (long *)0x0) {
        bVar9 = *(byte *)(*(long *)PTR_DAT_06e20188 + 300);
        if ((*(byte *)(*plVar19 + 300) < bVar9) ||
           (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar9 * 8 + -8) !=
            *(long *)PTR_DAT_06e20188)) {
                    /* WARNING: Subroutine does not return */
          FUN_0160f170(plVar19);
        }
      }
      FUN_036d5d94();
    }
  }
LAB_036cfe10:
  if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  uVar13 = FUN_036f2e44(in_stack_00000008,1,0);
  if ((uVar13 & 1) != 0) {
    FUN_01fbafc0();
  }
  lVar11 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06d9e178);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  FUN_036c1e78(lVar11);
  uVar14 = FUN_036d7fb4();
  *(undefined8 *)(lVar11 + 0x80) = uVar14;
  thunk_FUN_01656ef8();
  *(long *)(lVar11 + 0x28) = in_stack_00000008;
  thunk_FUN_01656ef8();
  if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  bVar9 = FUN_036f2bf0(in_stack_00000008,0);
  *(byte *)(lVar11 + 0x72) = bVar9 & 1;
  if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)(in_stack_00000008 + 0x68);
  thunk_FUN_01656ef8();
  if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  *(undefined4 *)(lVar11 + 0x90) = *(undefined4 *)(in_stack_00000008 + 0xc0);
  *(undefined8 *)(lVar11 + 0x88) = *(undefined8 *)(in_stack_00000008 + 0xd8);
  thunk_FUN_01656ef8();
  if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar15 = FUN_036f2d10(in_stack_00000008,0);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  plVar19 = (long *)FUN_03fbacb0(lVar15,0);
  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar15 = *plVar19;
  uVar13 = (ulong)*(ushort *)(lVar15 + 0x12a);
  if (uVar13 != 0) {
    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_06e1d6c8) {
        puVar16 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_036cff58;
      }
      uVar13 = uVar13 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar13 != 0);
  }
  puVar16 = (undefined8 *)FUN_015c2a80(plVar19,*(long *)PTR_DAT_06e1d6c8,0);
LAB_036cff58:
  plVar19 = (long *)(*(code *)*puVar16)(plVar19,puVar16[1]);
  puVar7 = PTR_DAT_06e4b088;
  puVar6 = PTR_DAT_06e34bf8;
  puVar5 = PTR_DAT_06e2c7d8;
  puVar4 = PTR_DAT_06dfc738;
  puVar3 = PTR_DAT_06dfa258;
  puVar2 = PTR_DAT_06ddc938;
  puVar1 = PTR_DAT_06dd7060;
  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  do {
    lVar17 = *plVar19;
    lVar15 = *(long *)puVar2;
    uVar13 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar13 != 0) {
      piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar15) {
          puVar16 = (undefined8 *)(lVar17 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_036cfff0;
        }
        uVar13 = uVar13 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar13 != 0);
    }
    puVar16 = (undefined8 *)FUN_015c2a80(plVar19,lVar15,0);
LAB_036cfff0:
    uVar13 = (*(code *)*puVar16)(plVar19,puVar16[1]);
    puVar8 = PTR_DAT_06e636c0;
    if ((uVar13 & 1) == 0) {
      plVar19 = (long *)thunk_FUN_015d0480(plVar19,*(undefined8 *)PTR_DAT_06e636c0);
      if (plVar19 == (long *)0x0) goto LAB_036d01d4;
      lVar15 = *plVar19;
      uVar13 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar13 == 0) goto LAB_036d01ac;
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      break;
    }
    lVar17 = *plVar19;
    lVar15 = *(long *)puVar2;
    uVar13 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar13 != 0) {
      piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar15) {
          puVar16 = (undefined8 *)(lVar17 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_036d0050;
        }
        uVar13 = uVar13 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar13 != 0);
    }
    puVar16 = (undefined8 *)FUN_015c2a80(plVar19,lVar15,1);
LAB_036d0050:
    plVar12 = (long *)(*(code *)*puVar16)(plVar19,puVar16[1]);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    bVar9 = *(byte *)(*(long *)puVar5 + 300);
    if ((*(byte *)(*plVar12 + 300) < bVar9) ||
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar9 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_0160f170(plVar12);
    }
    if (*(int *)((long)plVar12 + 0x6c) == 2) {
      if (*(long *)(lVar11 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar13 = FUN_02783488(*(long *)(lVar11 + 0x78),plVar12[0x10],*(undefined8 *)puVar3);
      if ((uVar13 & 1) == 0) {
        if (*(long *)(lVar11 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        FUN_02783288(*(long *)(lVar11 + 0x78),plVar12[0x10],plVar12[0x10],*(undefined8 *)puVar7);
      }
    }
    else {
      if (*(long *)(lVar11 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar13 = FUN_02783488(*(long *)(lVar11 + 0x60),plVar12[0x10],*(undefined8 *)puVar4);
      if (((uVar13 & 1) == 0) && (plVar12[0x13] != 0)) {
        lVar15 = *(long *)puVar6;
        uVar14 = *(undefined8 *)(plVar12[0x13] + 0x10);
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar15 = *(long *)puVar6;
        }
        uVar13 = FUN_04756278(uVar14,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8),0);
        if ((uVar13 & 1) != 0) {
          lVar15 = *(long *)puVar1;
          lVar17 = plVar12[0x13];
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar15 = *(long *)puVar1;
          }
          if (lVar17 != **(long **)(lVar15 + 0xb8)) {
            FUN_036c2428(lVar11,plVar12[0x13]);
          }
        }
      }
    }
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar18 = piVar18 + 4;
    if (uVar13 == 0) break;
    if (*(long *)(piVar18 + -2) == *(long *)puVar8) {
      puVar16 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_036d01c8;
    }
  }
LAB_036d01ac:
  puVar16 = (undefined8 *)FUN_015c2a80(plVar19,*(long *)puVar8,0);
LAB_036d01c8:
  (*(code *)*puVar16)(plVar19,puVar16[1]);
LAB_036d01d4:
  if (in_stack_00000008 != 0) {
    FUN_03fc5404(in_stack_00000008,lVar11,0);
    *(undefined1 *)(in_stack_00000008 + 0x30) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


