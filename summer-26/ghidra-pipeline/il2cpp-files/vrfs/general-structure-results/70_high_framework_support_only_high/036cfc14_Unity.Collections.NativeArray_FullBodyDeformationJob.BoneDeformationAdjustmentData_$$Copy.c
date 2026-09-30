/*
FUNCTION_NAME: Unity.Collections.NativeArray<FullBodyDeformationJob.BoneDeformationAdjustmentData>$$Copy
ENTRY_POINT: 036cfc14
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x036d0218) */
/* WARNING: Removing unreachable block (ram,0x036d01e0) */
/* WARNING: Removing unreachable block (ram,0x036d0204) */
/* WARNING: Removing unreachable block (ram,0x036d0294) */
/* WARNING: Removing unreachable block (ram,0x036d0210) */
/* WARNING: Removing unreachable block (ram,0x036d02c4) */

void Unity_Collections_NativeArray<FullBodyDeformationJob_BoneDeformationAdjustmentData>__Copy(void)

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
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  int *piVar19;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long in_stack_00000008;
  
  *(undefined1 *)(unaff_x22 + 0x1cb) = 1;
  lVar11 = *unaff_x21;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar11 = *unaff_x21;
  }
  *(undefined8 *)(unaff_x19 + 0x60) = **(undefined8 **)(lVar11 + 0xb8);
  thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x60));
  if (*(char *)(unaff_x22 + 0x1cb) == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06dd0a58);
    *(undefined1 *)(unaff_x22 + 0x1cb) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
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
  uVar12 = Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetHashCode();
  *(undefined8 *)(in_stack_00000008 + 0xb8) = uVar12;
  uVar12 = thunk_FUN_01656ef8((undefined8 *)(in_stack_00000008 + 0xb8));
  if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  uVar10 = FUN_036d7f44(uVar12,in_stack_00000008,0,*(undefined8 *)(in_stack_00000008 + 0xb8));
  *(undefined4 *)(in_stack_00000008 + 0x90) = uVar10;
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
  uVar12 = FUN_036d7fb4();
  *(undefined8 *)(lVar11 + 0x80) = uVar12;
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
  lVar14 = FUN_036f2d10(in_stack_00000008,0);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  plVar15 = (long *)FUN_03fbacb0(lVar14,0);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar14 = *plVar15;
  uVar13 = (ulong)*(ushort *)(lVar14 + 0x12a);
  if (uVar13 != 0) {
    piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_06e1d6c8) {
        puVar16 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_036cff58;
      }
      uVar13 = uVar13 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar13 != 0);
  }
  puVar16 = (undefined8 *)FUN_015c2a80(plVar15,*(long *)PTR_DAT_06e1d6c8,0);
LAB_036cff58:
  plVar15 = (long *)(*(code *)*puVar16)(plVar15,puVar16[1]);
  puVar7 = PTR_DAT_06e4b088;
  puVar6 = PTR_DAT_06e34bf8;
  puVar5 = PTR_DAT_06e2c7d8;
  puVar4 = PTR_DAT_06dfc738;
  puVar3 = PTR_DAT_06dfa258;
  puVar2 = PTR_DAT_06ddc938;
  puVar1 = PTR_DAT_06dd7060;
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  do {
    lVar18 = *plVar15;
    lVar14 = *(long *)puVar2;
    uVar13 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar13 != 0) {
      piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar14) {
          puVar16 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_036cfff0;
        }
        uVar13 = uVar13 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar13 != 0);
    }
    puVar16 = (undefined8 *)FUN_015c2a80(plVar15,lVar14,0);
LAB_036cfff0:
    uVar13 = (*(code *)*puVar16)(plVar15,puVar16[1]);
    puVar8 = PTR_DAT_06e636c0;
    if ((uVar13 & 1) == 0) {
      plVar15 = (long *)thunk_FUN_015d0480(plVar15,*(undefined8 *)PTR_DAT_06e636c0);
      if (plVar15 == (long *)0x0) goto LAB_036d01d4;
      lVar14 = *plVar15;
      uVar13 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar13 == 0) goto LAB_036d01ac;
      piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      break;
    }
    lVar18 = *plVar15;
    lVar14 = *(long *)puVar2;
    uVar13 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar13 != 0) {
      piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar14) {
          puVar16 = (undefined8 *)(lVar18 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto LAB_036d0050;
        }
        uVar13 = uVar13 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar13 != 0);
    }
    puVar16 = (undefined8 *)FUN_015c2a80(plVar15,lVar14,1);
LAB_036d0050:
    plVar17 = (long *)(*(code *)*puVar16)(plVar15,puVar16[1]);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    bVar9 = *(byte *)(*(long *)puVar5 + 300);
    if ((*(byte *)(*plVar17 + 300) < bVar9) ||
       (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar9 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_0160f170(plVar17);
    }
    if (*(int *)((long)plVar17 + 0x6c) == 2) {
      if (*(long *)(lVar11 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar13 = FUN_02783488(*(long *)(lVar11 + 0x78),plVar17[0x10],*(undefined8 *)puVar3);
      if ((uVar13 & 1) == 0) {
        if (*(long *)(lVar11 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        FUN_02783288(*(long *)(lVar11 + 0x78),plVar17[0x10],plVar17[0x10],*(undefined8 *)puVar7);
      }
    }
    else {
      if (*(long *)(lVar11 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar13 = FUN_02783488(*(long *)(lVar11 + 0x60),plVar17[0x10],*(undefined8 *)puVar4);
      if (((uVar13 & 1) == 0) && (plVar17[0x13] != 0)) {
        lVar14 = *(long *)puVar6;
        uVar12 = *(undefined8 *)(plVar17[0x13] + 0x10);
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar14 = *(long *)puVar6;
        }
        uVar13 = FUN_04756278(uVar12,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8),0);
        if ((uVar13 & 1) != 0) {
          lVar14 = *(long *)puVar1;
          lVar18 = plVar17[0x13];
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar14 = *(long *)puVar1;
          }
          if (lVar18 != **(long **)(lVar14 + 0xb8)) {
            FUN_036c2428(lVar11,plVar17[0x13]);
          }
        }
      }
    }
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar19 = piVar19 + 4;
    if (uVar13 == 0) break;
    if (*(long *)(piVar19 + -2) == *(long *)puVar8) {
      puVar16 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_036d01c8;
    }
  }
LAB_036d01ac:
  puVar16 = (undefined8 *)FUN_015c2a80(plVar15,*(long *)puVar8,0);
LAB_036d01c8:
  (*(code *)*puVar16)(plVar15,puVar16[1]);
LAB_036d01d4:
  if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  FUN_03fc5404(in_stack_00000008,lVar11,0);
  *(undefined1 *)(in_stack_00000008 + 0x30) = 0;
  return;
}


