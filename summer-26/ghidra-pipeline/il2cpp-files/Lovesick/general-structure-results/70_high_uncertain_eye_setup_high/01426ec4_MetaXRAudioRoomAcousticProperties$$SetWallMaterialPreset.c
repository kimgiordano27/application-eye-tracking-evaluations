/*
FUNCTION_NAME: MetaXRAudioRoomAcousticProperties$$SetWallMaterialPreset
ENTRY_POINT: 01426ec4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_17;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_1
*/


void MetaXRAudioRoomAcousticProperties__SetWallMaterialPreset(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined1 in_w8;
  uint uVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  ulong uVar12;
  long lVar13;
  long *unaff_x26;
  float fVar14;
  undefined1 auVar15 [16];
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  *(undefined8 *)(unaff_x22 + 8) = param_2;
  *(undefined1 *)(unaff_x22 + -8) = in_w8;
  uVar8 = FUN_0266f3a8();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar8;
  puVar4 = StringLiteral_207;
  puVar3 = System_Nullable<T>_var;
  puVar2 = PTR_DAT_033ea8a0;
  if (*(int *)(unaff_x22 + -0x1c) < 4) {
LAB_01427098:
    uVar6 = *(undefined4 *)(unaff_x20 + 8);
    if (*(int *)(*(long *)
                  Method_UnityEngine_TextCore_Text_TextProcessingStack<TextFontWeight>_SetDefault__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01422658(uVar6,unaff_w21,&stack0x0000004c,&stack0x00000048);
    FUN_01422ddc();
    puVar4 = float___var;
    puVar3 = PTR_DAT_033f5018;
    puVar2 = PTR_DAT_033ef798;
    if (*(char *)(unaff_x19 + 0x1b8) != '\0') {
      lVar11 = unaff_x20 + 0x50;
      uVar6 = FUN_01344a5c(lVar11,*(undefined8 *)PTR_DAT_033f5018);
      in_stack_00000018 = 0;
      _fStack0000000000000020 = 0;
      FUN_013421d4(&stack0x00000018,uVar6,2,1,*(undefined8 *)puVar2);
      *(undefined8 *)(unaff_x20 + 0x48) = _fStack0000000000000020;
      *(undefined8 *)(unaff_x20 + 0x40) = in_stack_00000018;
      uVar8 = *(undefined8 *)(unaff_x19 + 0x1ac);
      fVar14 = *(float *)(unaff_x19 + 0x1b4);
      iVar7 = FUN_01344a5c(lVar11,*(undefined8 *)puVar3);
      puVar2 = 
      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>__ctor__;
      if (0 < iVar7) {
        lVar13 = 0;
        uVar12 = 0;
        do {
          DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                    (lVar11,uVar12 & 0xffffffff,&stack0x00000018,*(undefined8 *)puVar2);
          puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x40) + lVar13);
          *puVar1 = CONCAT44((float)((ulong)uVar8 >> 0x20) +
                             (float)((ulong)in_stack_00000018 >> 0x20),
                             (float)uVar8 + (float)in_stack_00000018);
          *(float *)(puVar1 + 1) = fVar14 + fStack0000000000000020;
          uVar12 = uVar12 + 1;
          iVar7 = FUN_01344a5c(lVar11,*(undefined8 *)puVar3);
          lVar13 = lVar13 + 0xc;
        } while ((long)uVar12 < (long)iVar7);
      }
      auVar15 = FUN_01127a60(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                             *(undefined8 *)puVar4);
      *(undefined1 (*) [16])(unaff_x20 + 0x50) = auVar15;
    }
    uVar8 = *(undefined8 *)(unaff_x19 + 0x188);
    *(undefined1 *)(unaff_x20 + 1) = 1;
    *(undefined8 *)(unaff_x20 + 0x130) = uVar8;
    return;
  }
  in_stack_00000040._4_4_ = 0;
  lVar13 = *(long *)OVRPlugin_Vector2f___TypeInfo;
  lVar11 = *(long *)(unaff_x19 + 0x1c0);
  iVar7 = in_stack_00000040._4_4_;
  while (in_stack_00000040._4_4_ = iVar7, lVar11 != 0) {
    iVar5 = FUN_02664f30(lVar11,0);
    if (iVar5 <= iVar7) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(lVar13,0);
      goto LAB_01427098;
    }
    if (*(long *)(unaff_x19 + 0x1c0) == 0) break;
    auVar15 = FUN_02664f6c(*(long *)(unaff_x19 + 0x1c0),in_stack_00000040._4_4_,0);
    plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,5);
    if (plVar9 == (long *)0x0) break;
    if (lVar13 != 0) {
      lVar11 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar11 == 0) goto LAB_014271f8;
    }
    uVar10 = *(uint *)(plVar9 + 3);
    if (uVar10 == 0) {
LAB_014271f4:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar9[4] = lVar13;
    lVar11 = *(long *)puVar4;
    if (lVar11 != 0) {
      lVar11 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar11 == 0) goto LAB_014271f8;
      uVar10 = *(uint *)(plVar9 + 3);
    }
    if (uVar10 < 2) goto LAB_014271f4;
    plVar9[5] = *(long *)puVar4;
    lVar11 = FUN_0176eb1c((long)&stack0x00000040 + 4,0);
    if (lVar11 != 0) {
      lVar13 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar13 == 0) goto LAB_014271f8;
    }
    uVar10 = *(uint *)(plVar9 + 3);
    if (uVar10 < 3) goto LAB_014271f4;
    plVar9[6] = lVar11;
    lVar11 = *(long *)puVar3;
    if (lVar11 != 0) {
      lVar11 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar11 == 0) goto LAB_014271f8;
      uVar10 = *(uint *)(plVar9 + 3);
    }
    if (uVar10 < 4) goto LAB_014271f4;
    plVar9[7] = *(long *)puVar3;
    _in_stack_00000030 = auVar15;
    lVar11 = FUN_026ae974(&stack0x00000030,0);
    if (lVar11 != 0) {
      lVar13 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar13 == 0) {
LAB_014271f8:
        uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar8,0);
      }
    }
    if (*(uint *)(plVar9 + 3) < 5) goto LAB_014271f4;
    plVar9[8] = lVar11;
    lVar13 = FUN_01600844(plVar9,0);
    iVar7 = in_stack_00000040._4_4_ + 1;
    lVar11 = *(long *)(unaff_x19 + 0x1c0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


