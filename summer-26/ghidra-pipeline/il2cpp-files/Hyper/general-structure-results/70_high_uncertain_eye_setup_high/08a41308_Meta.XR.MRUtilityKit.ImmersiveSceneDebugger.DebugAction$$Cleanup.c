/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger.DebugAction$$Cleanup
ENTRY_POINT: 08a41308
PROGRAM: Hyper-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x08a41a30) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_DebugAction__Cleanup(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 extraout_x1;
  ulong uVar11;
  int *piVar12;
  long unaff_x20;
  int iVar13;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long in_stack_00000018;
  int *in_stack_00000020;
  long *in_stack_00000028;
  undefined4 uStack0000000000000034;
  int in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined4 *in_stack_00000068;
  
  uVar3 = thunk_FUN_04983b98(*(undefined8 *)(unaff_x20 + 0x48));
  uStack0000000000000034 = FUN_08d59948(&stack0x00000058,0);
  uVar4 = thunk_FUN_04983b98(*(undefined8 *)(unaff_x20 + 0x48),&stack0x00000034);
  _in_stack_00000018 = FUN_08d718cc(0);
  uVar5 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac12ed0,&stack0x00000018);
  uVar3 = FUN_08bda66c(*(undefined8 *)PTR_DAT_0ac53300,uVar3,uVar4,uVar5,0);
  *(undefined8 *)(in_stack_00000068 + 10) = uVar3;
  thunk_FUN_049ee3d8();
  if (in_stack_00000060._4_4_ == 0) {
LAB_08a416a4:
    in_stack_00000018 = 0;
    in_stack_00000028 = (long *)&stack0x00000068;
    in_stack_00000020 = (int *)((long)&stack0x00000060 + 4);
LAB_08a416b0:
    in_stack_00000060._4_4_ = -1;
    in_stack_00000050 = *(undefined8 *)(in_stack_00000068 + 0x10);
    *(undefined8 *)(in_stack_00000068 + 0x10) = 0;
    *in_stack_00000068 = 0xffffffff;
  }
  else {
    uVar3 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac11768);
    FUN_04b2e690(uVar3,*(undefined8 *)PTR_DAT_0ac53318,*(undefined8 *)PTR_DAT_0ac532e8,0);
    lVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac17360);
    FUN_04c03384(lVar6,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_04b33b9c(lVar6,*(undefined8 *)PTR_DAT_0ac532f8,0);
    puVar1 = PTR_DAT_0ac09c40;
    *(undefined1 *)(lVar6 + 0x160) = 1;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar4 = FUN_08d92e68(0x404e000000000000,0);
    in_stack_00000018 = 0;
    in_stack_00000020 = (int *)0x0;
    FUN_06fcb1d8(&stack0x00000018,uVar4,*(undefined8 *)PTR_DAT_0ac12550);
    FUN_04b34864(lVar6,in_stack_00000018,in_stack_00000020,0);
    uVar4 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac17370);
    FUN_04c036a0(uVar4,uVar3,lVar6,0);
    *(undefined8 *)(in_stack_00000068 + 0xc) = uVar4;
    thunk_FUN_049ee3d8(in_stack_00000068 + 0xc,uVar4);
    in_stack_00000020 = (int *)((long)&stack0x00000060 + 4);
    in_stack_00000018 = 0;
    in_stack_00000028 = (long *)&stack0x00000068;
    if (in_stack_00000060._4_4_ == 0) goto LAB_08a416a4;
    uVar3 = *(undefined8 *)(in_stack_00000068 + 0xc);
    lVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac17568);
    FUN_04c2b974(lVar6,uVar3,0);
    plVar7 = (long *)FUN_08bf7044(0);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar3 = (**(code **)(*plVar7 + 0x268))
                      (plVar7,*(undefined8 *)(in_stack_00000068 + 8),
                       *(undefined8 *)(*plVar7 + 0x270));
    uVar4 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac107c8);
    FUN_08d21c14(uVar4,uVar3,0);
    *(undefined8 *)(in_stack_00000068 + 0xe) = uVar4;
    thunk_FUN_049ee3d8(in_stack_00000068 + 0xe,uVar4);
    if (in_stack_00000060._4_4_ == 0) goto LAB_08a416b0;
    lVar8 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac17570);
    FUN_04c2c1d8(lVar8,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    *(undefined8 *)(lVar8 + 0xe8) = *(undefined8 *)(in_stack_00000068 + 0xe);
    thunk_FUN_049ee3d8();
    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)PTR_DAT_0ac53308;
    thunk_FUN_049ee3d8();
    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(in_stack_00000068 + 10);
    thunk_FUN_049ee3d8();
    puVar1 = PTR_DAT_0ac175b8;
    lVar9 = *(long *)PTR_DAT_0ac175b8;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar9 = *(long *)puVar1;
    }
    *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x10);
    thunk_FUN_049ee3d8();
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (*(char *)(unaff_x25 + 0xcf7) == '\0') {
      FUN_04947ee4(PTR_DAT_0ac46eb8);
      *(undefined1 *)(unaff_x25 + 0xcf7) = 1;
    }
    lVar9 = *unaff_x24;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar9 = *unaff_x24;
    }
    plVar7 = (long *)**(undefined8 **)(lVar9 + 0xb8);
    uVar3 = FUN_08bd9aa0(*(undefined8 *)PTR_DAT_0ac53310,*(undefined8 *)(in_stack_00000068 + 10),
                         *(undefined8 *)PTR_DAT_0ac12460,0);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar9 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x23) {
          puVar10 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_08a4197c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)FUN_04980e68(plVar7,*unaff_x23,0);
LAB_08a4197c:
    (*(code *)*puVar10)(plVar7,uVar3,puVar10[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar6 = FUN_04c2d840(lVar6,lVar8,0,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000050 = FUN_08df2f04(lVar6,0);
    uVar11 = FUN_08c80df8(&stack0x00000050,0);
    if ((uVar11 & 1) == 0) {
      in_stack_00000060._4_4_ = 0;
      *in_stack_00000068 = 0;
      *(undefined8 *)(in_stack_00000068 + 0x10) = in_stack_00000050;
      thunk_FUN_049ee3d8(in_stack_00000068 + 0x10,0);
      puVar2 = in_stack_00000068;
      if (*(int *)(*(long *)PTR_DAT_0ac10910 + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)PTR_DAT_0ac10910,extraout_x1,in_stack_00000068);
      }
      FUN_05853d84(puVar2 + 2,&stack0x00000050,in_stack_00000068,*(undefined8 *)PTR_DAT_0ac532d8);
      uVar3 = 0;
      iVar13 = 7;
      goto LAB_08a417c4;
    }
  }
  FUN_08c80ec0(&stack0x00000050,0);
  uVar3 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac532f0,*(undefined8 *)(in_stack_00000068 + 10),0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (*(char *)(unaff_x25 + 0xcf7) == '\0') {
    FUN_04947ee4(PTR_DAT_0ac46eb8);
    *(undefined1 *)(unaff_x25 + 0xcf7) = 1;
  }
  lVar6 = *unaff_x24;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar6 = *unaff_x24;
  }
  plVar7 = (long *)**(undefined8 **)(lVar6 + 0xb8);
  uVar4 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac532e0,uVar3,0);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar6 = *plVar7;
  uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *unaff_x23) {
        puVar10 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_08a417ac;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar10 = (undefined8 *)FUN_04980e68(plVar7,*unaff_x23,0);
LAB_08a417ac:
  (*(code *)*puVar10)(plVar7,uVar4,puVar10[1]);
  iVar13 = 8;
LAB_08a417c4:
  if ((in_stack_00000060._4_4_ < 0) &&
     (plVar7 = *(long **)(in_stack_00000068 + 0xe), plVar7 != (long *)0x0)) {
    lVar6 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0ac09b90) {
          puVar10 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_08a41834;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)FUN_04980e68(plVar7,*(long *)PTR_DAT_0ac09b90,0);
LAB_08a41834:
    (*(code *)*puVar10)(plVar7,puVar10[1]);
  }
  if ((*in_stack_00000020 < 0) &&
     (plVar7 = *(long **)(*in_stack_00000028 + 0x30), plVar7 != (long *)0x0)) {
    lVar6 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0ac09b90) {
          puVar10 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_08a418b4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)FUN_04980e68(plVar7,*(long *)PTR_DAT_0ac09b90,0);
LAB_08a418b4:
    (*(code *)*puVar10)(plVar7,puVar10[1]);
  }
  if (in_stack_00000018 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948184();
  }
  if (iVar13 == 8) {
    *in_stack_00000068 = 0xfffffffe;
    *(undefined8 *)(in_stack_00000068 + 10) = 0;
    thunk_FUN_049ee3d8(in_stack_00000068 + 10,0);
    puVar2 = in_stack_00000068;
    if (*(int *)(*(long *)PTR_DAT_0ac10910 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_07b6c5d8(puVar2 + 2,uVar3,*(undefined8 *)PTR_DAT_0ac10a50);
  }
  else if (iVar13 == 0) {
    iVar13 = in_stack_00000048 + -1;
    plVar7 = *(long **)(&stack0x00000038 + (long)iVar13 * 8);
    lVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac46eb8);
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    lVar6 = FUN_08795a9c(0);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,(int)plVar7[0x14]);
    uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac0fdd0);
    uVar3 = thunk_FUN_04983b98(uVar3,&stack0x00000018);
    lVar8 = plVar7[0x12];
    uVar4 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
    uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac53320);
    uVar3 = FUN_08bda66c(uVar5,uVar3,lVar8,uVar4,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar4 = thunk_FUN_049ae08c(PTR_DAT_0ac46ed8);
    FUN_0433cdb4(0,uVar4,lVar6,uVar3);
    thunk_FUN_049ae08c(PTR_DAT_0ac53328);
    uVar3 = thunk_FUN_04983f60();
    uVar4 = thunk_FUN_049ae08c(PTR_DAT_0ac53330);
    FUN_08a40f14(uVar3,uVar4,plVar7);
    in_stack_00000048 = iVar13;
    uVar4 = thunk_FUN_049ae08c(PTR_DAT_0ac53338);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar3,uVar4);
  }
  return;
}


