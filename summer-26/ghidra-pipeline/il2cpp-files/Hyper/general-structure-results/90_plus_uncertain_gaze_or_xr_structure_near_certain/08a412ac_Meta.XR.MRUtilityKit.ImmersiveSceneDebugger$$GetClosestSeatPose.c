/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$GetClosestSeatPose
ENTRY_POINT: 08a412ac
PROGRAM: Hyper-libil2cpp.so
SCORE: 166
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08a41a30) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__GetClosestSeatPose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 extraout_x1;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  int *unaff_x19;
  int iVar15;
  long unaff_x24;
  long *plVar16;
  long in_stack_00000018;
  int *in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  int iStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  int iStack0000000000000064;
  undefined4 *in_stack_00000068;
  
  puVar2 = PTR_DAT_0ac46ed8;
  plVar16 = *(long **)(unaff_x24 + 0xeb8);
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  iStack0000000000000064 = *unaff_x19;
  iStack0000000000000048 = 0;
  if (iStack0000000000000064 == 0) {
LAB_08a416a4:
    in_stack_00000018 = 0;
    in_stack_00000028 = (long *)&stack0x00000068;
    in_stack_00000020 = &stack0x00000064;
LAB_08a416b0:
    iStack0000000000000064 = -1;
    uStack0000000000000050 = *(undefined8 *)(in_stack_00000068 + 0x10);
    *(undefined8 *)(in_stack_00000068 + 0x10) = 0;
    *in_stack_00000068 = 0xffffffff;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_0ac09b88 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uStack0000000000000058 = FUN_08d59ac8(0);
    FUN_08d55ef4(&stack0x00000058,0);
    puVar1 = PTR_DAT_0ac09758;
    uVar4 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x48));
    in_stack_00000030._4_4_ = FUN_08d59948(&stack0x00000058,0);
    uVar5 = thunk_FUN_04983b98(*(undefined8 *)(puVar1 + 0x48),(long)&stack0x00000030 + 4);
    _in_stack_00000018 = FUN_08d718cc(0);
    uVar6 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac12ed0,&stack0x00000018);
    uVar4 = FUN_08bda66c(*(undefined8 *)PTR_DAT_0ac53300,uVar4,uVar5,uVar6,0);
    *(undefined8 *)(in_stack_00000068 + 10) = uVar4;
    thunk_FUN_049ee3d8();
    if (iStack0000000000000064 == 0) goto LAB_08a416a4;
    uVar4 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac11768);
    FUN_04b2e690(uVar4,*(undefined8 *)PTR_DAT_0ac53318,*(undefined8 *)PTR_DAT_0ac532e8,0);
    lVar7 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac17360);
    FUN_04c03384(lVar7,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_04b33b9c(lVar7,*(undefined8 *)PTR_DAT_0ac532f8,0);
    puVar1 = PTR_DAT_0ac09c40;
    *(undefined1 *)(lVar7 + 0x160) = 1;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar5 = FUN_08d92e68(0x404e000000000000,0);
    in_stack_00000018 = 0;
    in_stack_00000020 = (int *)0x0;
    FUN_06fcb1d8(&stack0x00000018,uVar5,*(undefined8 *)PTR_DAT_0ac12550);
    FUN_04b34864(lVar7,in_stack_00000018,in_stack_00000020,0);
    uVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac17370);
    FUN_04c036a0(uVar5,uVar4,lVar7,0);
    *(undefined8 *)(in_stack_00000068 + 0xc) = uVar5;
    thunk_FUN_049ee3d8(in_stack_00000068 + 0xc,uVar5);
    in_stack_00000020 = &stack0x00000064;
    in_stack_00000018 = 0;
    in_stack_00000028 = (long *)&stack0x00000068;
    if (iStack0000000000000064 == 0) goto LAB_08a416a4;
    uVar4 = *(undefined8 *)(in_stack_00000068 + 0xc);
    lVar7 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac17568);
    FUN_04c2b974(lVar7,uVar4,0);
    plVar8 = (long *)FUN_08bf7044(0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar4 = (**(code **)(*plVar8 + 0x268))
                      (plVar8,*(undefined8 *)(in_stack_00000068 + 8),
                       *(undefined8 *)(*plVar8 + 0x270));
    uVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac107c8);
    FUN_08d21c14(uVar5,uVar4,0);
    *(undefined8 *)(in_stack_00000068 + 0xe) = uVar5;
    thunk_FUN_049ee3d8(in_stack_00000068 + 0xe,uVar5);
    if (iStack0000000000000064 == 0) goto LAB_08a416b0;
    lVar9 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac17570);
    FUN_04c2c1d8(lVar9,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    *(undefined8 *)(lVar9 + 0xe8) = *(undefined8 *)(in_stack_00000068 + 0xe);
    thunk_FUN_049ee3d8();
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)PTR_DAT_0ac53308;
    thunk_FUN_049ee3d8();
    *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(in_stack_00000068 + 10);
    thunk_FUN_049ee3d8();
    puVar1 = PTR_DAT_0ac175b8;
    lVar10 = *(long *)PTR_DAT_0ac175b8;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar10 = *(long *)puVar1;
    }
    *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10);
    thunk_FUN_049ee3d8();
    if (*(int *)(*plVar16 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (DAT_0b32acf7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac46eb8);
      DAT_0b32acf7 = '\x01';
    }
    lVar10 = *plVar16;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar10 = *plVar16;
    }
    plVar8 = (long *)**(undefined8 **)(lVar10 + 0xb8);
    uVar4 = FUN_08bd9aa0(*(undefined8 *)PTR_DAT_0ac53310,*(undefined8 *)(in_stack_00000068 + 10),
                         *(undefined8 *)PTR_DAT_0ac12460,0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar12 = *plVar8;
    lVar10 = *(long *)puVar2;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar10) {
          puVar11 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_08a4197c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar11 = (undefined8 *)FUN_04980e68(plVar8,lVar10,0);
LAB_08a4197c:
    (*(code *)*puVar11)(plVar8,uVar4,puVar11[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar7 = FUN_04c2d840(lVar7,lVar9,0,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uStack0000000000000050 = FUN_08df2f04(lVar7,0);
    uVar13 = FUN_08c80df8(&stack0x00000050,0);
    if ((uVar13 & 1) == 0) {
      iStack0000000000000064 = 0;
      *in_stack_00000068 = 0;
      *(undefined8 *)(in_stack_00000068 + 0x10) = uStack0000000000000050;
      thunk_FUN_049ee3d8(in_stack_00000068 + 0x10,0);
      puVar3 = in_stack_00000068;
      if (*(int *)(*(long *)PTR_DAT_0ac10910 + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)PTR_DAT_0ac10910,extraout_x1,in_stack_00000068);
      }
      FUN_05853d84(puVar3 + 2,&stack0x00000050,in_stack_00000068,*(undefined8 *)PTR_DAT_0ac532d8);
      uVar4 = 0;
      iVar15 = 7;
      goto LAB_08a417c4;
    }
  }
  FUN_08c80ec0(&stack0x00000050,0);
  uVar4 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac532f0,*(undefined8 *)(in_stack_00000068 + 10),0);
  if (*(int *)(*plVar16 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (DAT_0b32acf7 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac46eb8);
    DAT_0b32acf7 = '\x01';
  }
  lVar7 = *plVar16;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar7 = *plVar16;
  }
  plVar16 = (long *)**(undefined8 **)(lVar7 + 0xb8);
  uVar5 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac532e0,uVar4,0);
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar9 = *plVar16;
  lVar7 = *(long *)puVar2;
  uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == lVar7) {
        puVar11 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_08a417ac;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar11 = (undefined8 *)FUN_04980e68(plVar16,lVar7,0);
LAB_08a417ac:
  (*(code *)*puVar11)(plVar16,uVar5,puVar11[1]);
  iVar15 = 8;
LAB_08a417c4:
  if ((iStack0000000000000064 < 0) &&
     (plVar16 = *(long **)(in_stack_00000068 + 0xe), plVar16 != (long *)0x0)) {
    lVar7 = *plVar16;
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0ac09b90) {
          puVar11 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_08a41834;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar11 = (undefined8 *)FUN_04980e68(plVar16,*(long *)PTR_DAT_0ac09b90,0);
LAB_08a41834:
    (*(code *)*puVar11)(plVar16,puVar11[1]);
  }
  if ((*in_stack_00000020 < 0) &&
     (plVar16 = *(long **)(*in_stack_00000028 + 0x30), plVar16 != (long *)0x0)) {
    lVar7 = *plVar16;
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0ac09b90) {
          puVar11 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_08a418b4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar11 = (undefined8 *)FUN_04980e68(plVar16,*(long *)PTR_DAT_0ac09b90,0);
LAB_08a418b4:
    (*(code *)*puVar11)(plVar16,puVar11[1]);
  }
  if (in_stack_00000018 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948184();
  }
  if (iVar15 == 8) {
    *in_stack_00000068 = 0xfffffffe;
    *(undefined8 *)(in_stack_00000068 + 10) = 0;
    thunk_FUN_049ee3d8(in_stack_00000068 + 10,0);
    puVar3 = in_stack_00000068;
    if (*(int *)(*(long *)PTR_DAT_0ac10910 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_07b6c5d8(puVar3 + 2,uVar4,*(undefined8 *)PTR_DAT_0ac10a50);
  }
  else if (iVar15 == 0) {
    iVar15 = iStack0000000000000048 + -1;
    plVar16 = *(long **)(&stack0x00000038 + (long)iVar15 * 8);
    lVar7 = thunk_FUN_049ae08c(PTR_DAT_0ac46eb8);
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    lVar7 = FUN_08795a9c(0);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,(int)plVar16[0x14]);
    uVar4 = thunk_FUN_049ae08c(PTR_DAT_0ac0fdd0);
    uVar4 = thunk_FUN_04983b98(uVar4,&stack0x00000018);
    lVar9 = plVar16[0x12];
    uVar5 = (**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
    uVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac53320);
    uVar4 = FUN_08bda66c(uVar6,uVar4,lVar9,uVar5,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac46ed8);
    FUN_0433cdb4(0,uVar5,lVar7,uVar4);
    thunk_FUN_049ae08c(PTR_DAT_0ac53328);
    uVar4 = thunk_FUN_04983f60();
    uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac53330);
    FUN_08a40f14(uVar4,uVar5,plVar16);
    iStack0000000000000048 = iVar15;
    uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac53338);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar4,uVar5);
  }
  return;
}


