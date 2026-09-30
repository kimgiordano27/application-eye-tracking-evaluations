/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$GetControllerRay
ENTRY_POINT: 08a41370
PROGRAM: Hyper-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x08a41a30) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__GetControllerRay(long param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long in_stack_00000018;
  int *in_stack_00000020;
  long *in_stack_00000028;
  int in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined4 *in_stack_00000068;
  
                    /* try { // try from 08a41380 to 08b413a7 has its CatchHandler @ 08a416cc */
  uVar3 = FUN_08bda66c(**(undefined8 **)(param_1 + 0x300));
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
    lVar4 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac17360);
                    /* try { // try from 08a413e4 to 08b41413 has its CatchHandler @ 08a41708 */
    FUN_04c03384(lVar4,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_04b33b9c(lVar4,*(undefined8 *)PTR_DAT_0ac532f8,0);
    puVar1 = PTR_DAT_0ac09c40;
                    /* try { // try from 08a41414 to 08b41537 has its CatchHandler @ 08a4105c */
    *(undefined1 *)(lVar4 + 0x160) = 1;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar5 = FUN_08d92e68(0x404e000000000000,0);
    in_stack_00000018 = 0;
    in_stack_00000020 = (int *)0x0;
    FUN_06fcb1d8(&stack0x00000018,uVar5,*(undefined8 *)PTR_DAT_0ac12550);
    FUN_04b34864(lVar4,in_stack_00000018,in_stack_00000020,0);
    uVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac17370);
    FUN_04c036a0(uVar5,uVar3,lVar4,0);
    *(undefined8 *)(in_stack_00000068 + 0xc) = uVar5;
    thunk_FUN_049ee3d8(in_stack_00000068 + 0xc,uVar5);
    in_stack_00000020 = (int *)((long)&stack0x00000060 + 4);
    in_stack_00000018 = 0;
    in_stack_00000028 = (long *)&stack0x00000068;
    if (in_stack_00000060._4_4_ == 0) goto LAB_08a416a4;
    uVar3 = *(undefined8 *)(in_stack_00000068 + 0xc);
    lVar4 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac17568);
    FUN_04c2b974(lVar4,uVar3,0);
    plVar6 = (long *)FUN_08bf7044(0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar3 = (**(code **)(*plVar6 + 0x268))
                      (plVar6,*(undefined8 *)(in_stack_00000068 + 8),
                       *(undefined8 *)(*plVar6 + 0x270));
    uVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac107c8);
    FUN_08d21c14(uVar5,uVar3,0);
    *(undefined8 *)(in_stack_00000068 + 0xe) = uVar5;
    thunk_FUN_049ee3d8(in_stack_00000068 + 0xe,uVar5);
                    /* try { // try from 08a41538 to 08b4155f has its CatchHandler @ 08a416c8 */
    if (in_stack_00000060._4_4_ == 0) goto LAB_08a416b0;
    lVar7 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac17570);
    FUN_04c2c1d8(lVar7,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    *(undefined8 *)(lVar7 + 0xe8) = *(undefined8 *)(in_stack_00000068 + 0xe);
    thunk_FUN_049ee3d8();
    *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)PTR_DAT_0ac53308;
    thunk_FUN_049ee3d8();
                    /* try { // try from 08a4159c to 08b415cb has its CatchHandler @ 08a416d4 */
    *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(in_stack_00000068 + 10);
    thunk_FUN_049ee3d8();
    puVar1 = PTR_DAT_0ac175b8;
    lVar8 = *(long *)PTR_DAT_0ac175b8;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar8 = *(long *)puVar1;
    }
                    /* try { // try from 08a415cc to 08b41673 has its CatchHandler @ 08a4105c */
    *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10);
    thunk_FUN_049ee3d8();
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (*(char *)(unaff_x25 + 0xcf7) == '\0') {
      FUN_04947ee4(PTR_DAT_0ac46eb8);
      *(undefined1 *)(unaff_x25 + 0xcf7) = 1;
    }
    lVar8 = *unaff_x24;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar8 = *unaff_x24;
    }
    plVar6 = (long *)**(undefined8 **)(lVar8 + 0xb8);
    uVar3 = FUN_08bd9aa0(*(undefined8 *)PTR_DAT_0ac53310,*(undefined8 *)(in_stack_00000068 + 10),
                         *(undefined8 *)PTR_DAT_0ac12460,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar8 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x23) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_08a4197c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x23,0);
LAB_08a4197c:
    (*(code *)*puVar9)(plVar6,uVar3,puVar9[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar4 = FUN_04c2d840(lVar4,lVar7,0,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000050 = FUN_08df2f04(lVar4,0);
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
  lVar4 = *unaff_x24;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar4 = *unaff_x24;
  }
  plVar6 = (long *)**(undefined8 **)(lVar4 + 0xb8);
  uVar5 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac532e0,uVar3,0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar4 = *plVar6;
  uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *unaff_x23) {
        puVar9 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_08a417ac;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x23,0);
LAB_08a417ac:
  (*(code *)*puVar9)(plVar6,uVar5,puVar9[1]);
  iVar13 = 8;
LAB_08a417c4:
  if ((in_stack_00000060._4_4_ < 0) &&
     (plVar6 = *(long **)(in_stack_00000068 + 0xe), plVar6 != (long *)0x0)) {
    lVar4 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0ac09b90) {
          puVar9 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_08a41834;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac09b90,0);
LAB_08a41834:
    (*(code *)*puVar9)(plVar6,puVar9[1]);
  }
  if ((*in_stack_00000020 < 0) &&
     (plVar6 = *(long **)(*in_stack_00000028 + 0x30), plVar6 != (long *)0x0)) {
    lVar4 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0ac09b90) {
          puVar9 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_08a418b4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac09b90,0);
LAB_08a418b4:
    (*(code *)*puVar9)(plVar6,puVar9[1]);
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
    plVar6 = *(long **)(&stack0x00000038 + (long)iVar13 * 8);
    lVar4 = thunk_FUN_049ae08c(PTR_DAT_0ac46eb8);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    lVar4 = FUN_08795a9c(0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,(int)plVar6[0x14]);
    uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac0fdd0);
    uVar3 = thunk_FUN_04983b98(uVar3,&stack0x00000018);
    lVar7 = plVar6[0x12];
    uVar5 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
    uVar10 = thunk_FUN_049ae08c(PTR_DAT_0ac53320);
    uVar3 = FUN_08bda66c(uVar10,uVar3,lVar7,uVar5,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac46ed8);
    FUN_0433cdb4(0,uVar5,lVar4,uVar3);
    thunk_FUN_049ae08c(PTR_DAT_0ac53328);
    uVar3 = thunk_FUN_04983f60();
    uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac53330);
    FUN_08a40f14(uVar3,uVar5,plVar6);
    in_stack_00000048 = iVar13;
    uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac53338);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar3,uVar5);
  }
  return;
}


