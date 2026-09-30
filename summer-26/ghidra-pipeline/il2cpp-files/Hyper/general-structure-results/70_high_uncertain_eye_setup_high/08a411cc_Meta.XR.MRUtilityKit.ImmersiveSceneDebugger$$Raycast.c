/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$Raycast
ENTRY_POINT: 08a411cc
PROGRAM: Hyper-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x08a41a30) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__Raycast(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 extraout_x1;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  int *unaff_x19;
  long unaff_x20;
  int iVar16;
  long in_stack_00000018;
  int *in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  int in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  int iStack0000000000000064;
  undefined4 *in_stack_00000068;
  
  FUN_04947ee4();
                    /* try { // try from 08a411d8 to 08b411ff has its CatchHandler @ 08a416d0 */
  FUN_04947ee4(PTR_DAT_0ac46eb8);
  FUN_04947ee4(PTR_DAT_0ac107c8);
  FUN_04947ee4(PTR_DAT_0ac12550);
  FUN_04947ee4(PTR_DAT_0ac175b8);
  FUN_04947ee4(PTR_DAT_0ac09c40);
  FUN_04947ee4(PTR_DAT_0ac17570);
  FUN_04947ee4(PTR_DAT_0ac17568);
  FUN_04947ee4(PTR_DAT_0ac532e0);
  FUN_04947ee4(PTR_DAT_0ac532e8);
  FUN_04947ee4(PTR_DAT_0ac532f0);
  FUN_04947ee4(PTR_DAT_0ac532f8);
  FUN_04947ee4(PTR_DAT_0ac53300);
  FUN_04947ee4(PTR_DAT_0ac53308);
  FUN_04947ee4(PTR_DAT_0ac53310);
  FUN_04947ee4(PTR_DAT_0ac12460);
  FUN_04947ee4(PTR_DAT_0ac53318);
  FUN_04947ee4(PTR_DAT_0ac46ed8);
  *(undefined1 *)(unaff_x20 + 0x434) = 1;
  puVar3 = PTR_DAT_0ac46ed8;
  puVar2 = PTR_DAT_0ac46eb8;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  iStack0000000000000064 = *unaff_x19;
  in_stack_00000048 = 0;
  if (iStack0000000000000064 == 0) {
LAB_08a416a4:
    in_stack_00000018 = 0;
    in_stack_00000028 = (long *)&stack0x00000068;
    in_stack_00000020 = &stack0x00000064;
LAB_08a416b0:
    iStack0000000000000064 = -1;
    in_stack_00000050 = *(undefined8 *)(in_stack_00000068 + 0x10);
    *(undefined8 *)(in_stack_00000068 + 0x10) = 0;
    *in_stack_00000068 = 0xffffffff;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_0ac09b88 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    in_stack_00000058 = FUN_08d59ac8(0);
    FUN_08d55ef4(&stack0x00000058,0);
    puVar1 = PTR_DAT_0ac09758;
    uVar5 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x48));
    in_stack_00000030._4_4_ = FUN_08d59948(&stack0x00000058,0);
    uVar6 = thunk_FUN_04983b98(*(undefined8 *)(puVar1 + 0x48),(long)&stack0x00000030 + 4);
    _in_stack_00000018 = FUN_08d718cc(0);
    uVar7 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac12ed0,&stack0x00000018);
    uVar5 = FUN_08bda66c(*(undefined8 *)PTR_DAT_0ac53300,uVar5,uVar6,uVar7,0);
    *(undefined8 *)(in_stack_00000068 + 10) = uVar5;
    thunk_FUN_049ee3d8();
    if (iStack0000000000000064 == 0) goto LAB_08a416a4;
    uVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac11768);
    FUN_04b2e690(uVar5,*(undefined8 *)PTR_DAT_0ac53318,*(undefined8 *)PTR_DAT_0ac532e8,0);
    lVar8 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac17360);
    FUN_04c03384(lVar8,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_04b33b9c(lVar8,*(undefined8 *)PTR_DAT_0ac532f8,0);
    puVar1 = PTR_DAT_0ac09c40;
    *(undefined1 *)(lVar8 + 0x160) = 1;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar6 = FUN_08d92e68(0x404e000000000000,0);
    in_stack_00000018 = 0;
    in_stack_00000020 = (int *)0x0;
    FUN_06fcb1d8(&stack0x00000018,uVar6,*(undefined8 *)PTR_DAT_0ac12550);
    FUN_04b34864(lVar8,in_stack_00000018,in_stack_00000020,0);
    uVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac17370);
    FUN_04c036a0(uVar6,uVar5,lVar8,0);
    *(undefined8 *)(in_stack_00000068 + 0xc) = uVar6;
    thunk_FUN_049ee3d8(in_stack_00000068 + 0xc,uVar6);
    in_stack_00000020 = &stack0x00000064;
    in_stack_00000018 = 0;
    in_stack_00000028 = (long *)&stack0x00000068;
    if (iStack0000000000000064 == 0) goto LAB_08a416a4;
    uVar5 = *(undefined8 *)(in_stack_00000068 + 0xc);
    lVar8 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac17568);
    FUN_04c2b974(lVar8,uVar5,0);
    plVar9 = (long *)FUN_08bf7044(0);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar5 = (**(code **)(*plVar9 + 0x268))
                      (plVar9,*(undefined8 *)(in_stack_00000068 + 8),
                       *(undefined8 *)(*plVar9 + 0x270));
    uVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac107c8);
    FUN_08d21c14(uVar6,uVar5,0);
    *(undefined8 *)(in_stack_00000068 + 0xe) = uVar6;
    thunk_FUN_049ee3d8(in_stack_00000068 + 0xe,uVar6);
    if (iStack0000000000000064 == 0) goto LAB_08a416b0;
    lVar10 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac17570);
    FUN_04c2c1d8(lVar10,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    *(undefined8 *)(lVar10 + 0xe8) = *(undefined8 *)(in_stack_00000068 + 0xe);
    thunk_FUN_049ee3d8();
    *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)PTR_DAT_0ac53308;
    thunk_FUN_049ee3d8();
    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(in_stack_00000068 + 10);
    thunk_FUN_049ee3d8();
    puVar1 = PTR_DAT_0ac175b8;
    lVar11 = *(long *)PTR_DAT_0ac175b8;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar11 = *(long *)puVar1;
    }
    *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x10);
    thunk_FUN_049ee3d8();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (DAT_0b32acf7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac46eb8);
      DAT_0b32acf7 = '\x01';
    }
    lVar11 = *(long *)puVar2;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar11 = *(long *)puVar2;
    }
    plVar9 = (long *)**(undefined8 **)(lVar11 + 0xb8);
    uVar5 = FUN_08bd9aa0(*(undefined8 *)PTR_DAT_0ac53310,*(undefined8 *)(in_stack_00000068 + 10),
                         *(undefined8 *)PTR_DAT_0ac12460,0);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar13 = *plVar9;
    lVar11 = *(long *)puVar3;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar11) {
          puVar12 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_08a4197c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar12 = (undefined8 *)FUN_04980e68(plVar9,lVar11,0);
LAB_08a4197c:
    (*(code *)*puVar12)(plVar9,uVar5,puVar12[1]);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar8 = FUN_04c2d840(lVar8,lVar10,0,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000050 = FUN_08df2f04(lVar8,0);
    uVar14 = FUN_08c80df8(&stack0x00000050,0);
    if ((uVar14 & 1) == 0) {
      iStack0000000000000064 = 0;
      *in_stack_00000068 = 0;
      *(undefined8 *)(in_stack_00000068 + 0x10) = in_stack_00000050;
      thunk_FUN_049ee3d8(in_stack_00000068 + 0x10,0);
      puVar4 = in_stack_00000068;
      if (*(int *)(*(long *)PTR_DAT_0ac10910 + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)PTR_DAT_0ac10910,extraout_x1,in_stack_00000068);
      }
      FUN_05853d84(puVar4 + 2,&stack0x00000050,in_stack_00000068,*(undefined8 *)PTR_DAT_0ac532d8);
      uVar5 = 0;
      iVar16 = 7;
      goto LAB_08a417c4;
    }
  }
  FUN_08c80ec0(&stack0x00000050,0);
  uVar5 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac532f0,*(undefined8 *)(in_stack_00000068 + 10),0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (DAT_0b32acf7 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac46eb8);
    DAT_0b32acf7 = '\x01';
  }
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar8 = *(long *)puVar2;
  }
  plVar9 = (long *)**(undefined8 **)(lVar8 + 0xb8);
  uVar6 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac532e0,uVar5,0);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar10 = *plVar9;
  lVar8 = *(long *)puVar3;
  uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == lVar8) {
        puVar12 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_08a417ac;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar12 = (undefined8 *)FUN_04980e68(plVar9,lVar8,0);
LAB_08a417ac:
  (*(code *)*puVar12)(plVar9,uVar6,puVar12[1]);
  iVar16 = 8;
LAB_08a417c4:
  if ((iStack0000000000000064 < 0) &&
     (plVar9 = *(long **)(in_stack_00000068 + 0xe), plVar9 != (long *)0x0)) {
    lVar8 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac09b90) {
          puVar12 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_08a41834;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar12 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac09b90,0);
LAB_08a41834:
    (*(code *)*puVar12)(plVar9,puVar12[1]);
  }
  if ((*in_stack_00000020 < 0) &&
     (plVar9 = *(long **)(*in_stack_00000028 + 0x30), plVar9 != (long *)0x0)) {
    lVar8 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0ac09b90) {
          puVar12 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_08a418b4;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar12 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac09b90,0);
LAB_08a418b4:
    (*(code *)*puVar12)(plVar9,puVar12[1]);
  }
  if (in_stack_00000018 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948184();
  }
  if (iVar16 == 8) {
    *in_stack_00000068 = 0xfffffffe;
    *(undefined8 *)(in_stack_00000068 + 10) = 0;
    thunk_FUN_049ee3d8(in_stack_00000068 + 10,0);
    puVar4 = in_stack_00000068;
    if (*(int *)(*(long *)PTR_DAT_0ac10910 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_07b6c5d8(puVar4 + 2,uVar5,*(undefined8 *)PTR_DAT_0ac10a50);
  }
  else if (iVar16 == 0) {
    iVar16 = in_stack_00000048 + -1;
    plVar9 = *(long **)(&stack0x00000038 + (long)iVar16 * 8);
    lVar8 = thunk_FUN_049ae08c(PTR_DAT_0ac46eb8);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    lVar8 = FUN_08795a9c(0);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,(int)plVar9[0x14]);
    uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac0fdd0);
    uVar5 = thunk_FUN_04983b98(uVar5,&stack0x00000018);
    lVar10 = plVar9[0x12];
    uVar6 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
    uVar7 = thunk_FUN_049ae08c(PTR_DAT_0ac53320);
    uVar5 = FUN_08bda66c(uVar7,uVar5,lVar10,uVar6,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac46ed8);
    FUN_0433cdb4(0,uVar6,lVar8,uVar5);
    thunk_FUN_049ae08c(PTR_DAT_0ac53328);
    uVar5 = thunk_FUN_04983f60();
    uVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac53330);
    FUN_08a40f14(uVar5,uVar6,plVar9);
    in_stack_00000048 = iVar16;
    uVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac53338);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar5,uVar6);
  }
  return;
}


