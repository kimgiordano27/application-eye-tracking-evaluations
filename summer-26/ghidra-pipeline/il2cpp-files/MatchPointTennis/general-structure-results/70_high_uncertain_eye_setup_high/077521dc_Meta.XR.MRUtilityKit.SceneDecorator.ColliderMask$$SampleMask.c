/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.ColliderMask$$SampleMask
ENTRY_POINT: 077521dc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_ColliderMask__SampleMask
               (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 in_w8;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  ulong uVar11;
  long unaff_x23;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  int in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  int iStack0000000000000044;
  undefined8 uStack0000000000000048;
  
  *(undefined1 *)(unaff_x23 + 0x267) = in_w8;
  uStack0000000000000048 = 0;
  iStack0000000000000044 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000038 = 0;
  auVar15 = ZEXT816(0);
  if (unaff_x20 == 0) goto LAB_07752448;
  iVar7 = *(int *)(unaff_x20 + 0x118);
  if (iVar7 != unaff_w22) {
    if (iVar7 == 0) {
      auVar15 = ZEXT816(0);
      if (*(long *)(unaff_x20 + 0x120) == 0) goto LAB_07752448;
      if (*(long *)(*(long *)(unaff_x20 + 0x120) + 0x18) != 0) {
        *(int *)(unaff_x20 + 0x118) = unaff_w22;
        goto LAB_077522b4;
      }
    }
    in_stack_00000018 = *(undefined8 *)PTR_DAT_09f31420;
    in_stack_00000020 = 0xffffffffffffffff;
    in_stack_00000028 = iVar7;
    uVar8 = FUN_07a742b0(&stack0x00000018,0);
    uVar9 = FUN_07a742b0();
    uVar8 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f31dc0,uVar8,*(undefined8 *)PTR_DAT_09f31dc8,uVar9
                         ,0);
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
    }
    FUN_094c6b48(uVar8,0);
    unaff_w22 = *(int *)(unaff_x20 + 0x118);
  }
LAB_077522b4:
  *(int *)(unaff_x19 + 8) = unaff_w22;
  auVar15 = FUN_094f8088(*(undefined8 *)(unaff_x20 + 0x1c0),0);
  *(undefined1 (*) [16])(unaff_x19 + 0x20) = auVar15;
  *(undefined1 *)(unaff_x19 + 0x18) = 1;
  uVar8 = FUN_094fcf78((undefined1 (*) [16])(unaff_x19 + 0x20),0,0);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar8;
  puVar4 = PTR_DAT_09f327f8;
  puVar3 = PTR_DAT_09f327e8;
  puVar2 = PTR_DAT_09f1e5f0;
  if (*(int *)(unaff_x19 + 4) < 4) {
LAB_07752470:
    uVar6 = *(undefined4 *)(unaff_x19 + 8);
    if (*(int *)(*(long *)PTR_DAT_09f31aa0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_0774d768(uVar6,unaff_w21,(undefined1 *)((long)register0x00000008 + 0x4c),&stack0x00000048);
    FUN_0774deec();
    puVar4 = PTR_DAT_09f327e0;
    puVar3 = PTR_DAT_09f30f78;
    puVar2 = PTR_DAT_09f290f8;
    if (*(char *)(unaff_x20 + 0x1b8) != '\0') {
      lVar10 = unaff_x19 + 0x50;
      uVar6 = FUN_060f7824(lVar10,*(undefined8 *)PTR_DAT_09f30f78);
      in_stack_00000018 = 0;
      in_stack_00000020 = 0;
      FUN_05fef0c4(&stack0x00000018,uVar6,2,1,*(undefined8 *)puVar2);
      *(undefined8 *)(unaff_x19 + 0x48) = in_stack_00000020;
      *(undefined8 *)(unaff_x19 + 0x40) = in_stack_00000018;
      uVar8 = *(undefined8 *)(unaff_x20 + 0x1ac);
      fVar14 = *(float *)(unaff_x20 + 0x1b4);
      iVar7 = FUN_060f7824(lVar10,*(undefined8 *)puVar3);
      puVar2 = PTR_DAT_09f30f68;
      if (0 < iVar7) {
        lVar12 = 0;
        uVar11 = 0;
        do {
          fVar13 = (float)FUN_060f7584(lVar10,uVar11 & 0xffffffff,*(undefined8 *)puVar2);
          param_3 = fVar14 + param_3;
          puVar1 = (undefined8 *)(*(long *)(unaff_x19 + 0x40) + lVar12);
          *puVar1 = CONCAT44((float)((ulong)uVar8 >> 0x20) + param_2,(float)uVar8 + fVar13);
          *(float *)(puVar1 + 1) = param_3;
          uVar11 = uVar11 + 1;
          iVar7 = FUN_060f7824(lVar10,*(undefined8 *)puVar3);
          lVar12 = lVar12 + 0xc;
        } while ((long)uVar11 < (long)iVar7);
      }
      auVar15 = FUN_04e53e5c(*(undefined8 *)(unaff_x19 + 0x40),*(undefined8 *)(unaff_x19 + 0x48),
                             *(undefined8 *)puVar4);
      *(undefined1 (*) [16])(unaff_x19 + 0x50) = auVar15;
    }
    *(undefined8 *)(unaff_x19 + 0x130) = *(undefined8 *)(unaff_x20 + 0x188);
    thunk_FUN_044bb4b4(unaff_x19 + 0x130);
    *(undefined1 *)(unaff_x19 + 1) = 1;
    return;
  }
  iStack0000000000000044 = 0;
  uVar8 = *(undefined8 *)PTR_DAT_09f327f0;
  lVar10 = *(long *)(unaff_x20 + 0x1c0);
  iVar7 = iStack0000000000000044;
  while (iStack0000000000000044 = iVar7, auVar15 = _uStack0000000000000030, lVar10 != 0) {
    iVar5 = thunk_FUN_094f0230(lVar10,0);
    if (iVar5 <= iVar7) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c652c(uVar8,0);
      goto LAB_07752470;
    }
    auVar15 = _uStack0000000000000030;
    if (*(long *)(unaff_x20 + 0x1c0) == 0) break;
    auVar16 = FUN_094f02e4(*(long *)(unaff_x20 + 0x1c0),iStack0000000000000044,0);
    lVar10 = FUN_04447c90(*(undefined8 *)puVar2,5);
    auVar15 = _uStack0000000000000030;
    if (lVar10 == 0) break;
    if (*(int *)(lVar10 + 0x18) == 0) {
LAB_077525cc:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(undefined8 *)(lVar10 + 0x20) = uVar8;
    thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x20),uVar8);
    if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_077525cc;
    *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)puVar3;
    thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x28));
    uVar8 = FUN_07a3b850(&stack0x00000044,0);
    if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_077525cc;
    *(undefined8 *)(lVar10 + 0x30) = uVar8;
    thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x30),uVar8);
    if (*(uint *)(lVar10 + 0x18) < 4) goto LAB_077525cc;
    *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)puVar4;
    thunk_FUN_044bb4b4((undefined8 *)(lVar10 + 0x38));
    _uStack0000000000000030 = auVar16;
    uVar8 = FUN_0954caec(&stack0x00000030,0);
    if (*(uint *)(lVar10 + 0x18) < 5) goto LAB_077525cc;
    *(undefined8 *)(lVar10 + 0x40) = uVar8;
    thunk_FUN_044bb4b4();
    uVar8 = FUN_078b57fc(lVar10,0);
    iVar7 = iStack0000000000000044 + 1;
    lVar10 = *(long *)(unaff_x20 + 0x1c0);
  }
LAB_07752448:
  _uStack0000000000000030 = auVar15;
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


