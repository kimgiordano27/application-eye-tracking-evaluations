/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARRaycastHit$$Equals
ENTRY_POINT: 05da36e4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05da4214) */
/* WARNING: Removing unreachable block (ram,0x05da4228) */
/* WARNING: Removing unreachable block (ram,0x05da3f7c) */
/* WARNING: Removing unreachable block (ram,0x05da40b0) */

void UnityEngine_XR_ARFoundation_ARRaycastHit__Equals
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               float param_5,uint param_6)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  double dVar11;
  long lVar12;
  undefined **in_x9;
  int iVar13;
  ulong uVar14;
  int *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  undefined8 uVar15;
  long unaff_x22;
  undefined4 *puVar16;
  ulong unaff_x23;
  long lVar17;
  undefined4 unaff_w25;
  long lVar18;
  long unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  undefined8 uVar19;
  int *piVar20;
  int unaff_w29;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  ulong uVar25;
  undefined8 unaff_d8;
  float unaff_s9;
  long in_stack_00000038;
  undefined4 *in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  ulong in_stack_00000060;
  ulong in_stack_00000068;
  long in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined8 in_stack_000000f8;
  undefined1 *in_stack_00000100;
  ulong in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  long in_stack_00000120;
  undefined1 *in_stack_00000128;
  undefined4 uStack00000000000001c0;
  undefined4 uStack00000000000001c4;
  float in_stack_000002a0;
  float in_stack_000002a4;
  float in_stack_000002a8;
  float in_stack_000002ac;
  float in_stack_000002b0;
  float in_stack_000002b4;
  undefined4 in_stack_000002d0;
  undefined4 in_stack_000002d4;
  undefined4 in_stack_000002d8;
  int in_stack_0000035c;
  undefined4 in_stack_000003a4;
  undefined4 in_stack_000003a8;
  undefined4 in_stack_000003ac;
  undefined4 in_stack_000003b0;
  int in_stack_000003dc;
  int in_stack_00000440;
  float in_stack_000004a4;
  float in_stack_000004a8;
  float in_stack_000004ac;
  float in_stack_000004b0;
  long in_stack_000006d8;
  
code_r0x05da36e4:
  FUN_0484ef1c(param_1,unaff_w25,in_stack_00000078,*(undefined8 *)in_x9[0x2c]);
  puVar16 = in_stack_00000040;
  for (; unaff_x23 != 0; unaff_x23 = unaff_x23 - 1) {
    in_stack_000002a0 = 0.0;
    in_stack_000002a4 = 0.0;
    TMPro_TMP_Settings__get_isTextObjectScaleStatic(&stack0x000002a0,*puVar16,puVar16[-7],0);
    FUN_05d7376c(unaff_x19 + 8,0,0);
    puVar16 = puVar16 + 1;
  }
  lVar12 = 0;
  in_stack_00000048._4_4_ = param_6 ^ 1 | in_stack_00000048._4_4_;
  do {
    *(undefined4 *)(unaff_x22 + lVar12) = 0xffffffff;
    lVar12 = lVar12 + 4;
  } while (lVar12 != 0x1c);
LAB_05da368c:
  do {
    unaff_x28 = unaff_x28 + 1;
    if (unaff_x28 == unaff_x26) {
      iVar7 = *unaff_x19;
      iVar3 = unaff_x19[1];
      if (CONCAT11(iVar3 < unaff_w29,iVar7 < unaff_w21) != 0) {
        uVar1 = unaff_w29 - 1U | (int)(unaff_w29 - 1U) >> 1;
        uVar14 = CONCAT44(uVar1,(int)(unaff_w21 - 1U) >> 1) | (ulong)(unaff_w21 - 1U);
        uVar14 = CONCAT44((int)uVar1 >> 2,(int)uVar14 >> 2) | uVar14;
        uVar14 = CONCAT44((int)((long)uVar14 >> 0x24),(int)uVar14 >> 4) | uVar14;
        uVar14 = CONCAT44((int)((long)uVar14 >> 0x28),(int)uVar14 >> 8) | uVar14;
        uVar14 = CONCAT44((int)((long)uVar14 >> 0x30),(int)uVar14 >> 0x10) | uVar14;
        iVar5 = (int)uVar14;
        if (iVar7 <= iVar5 + 1) {
          iVar7 = iVar5 + 1;
        }
        iVar5 = (int)(uVar14 + 0x100000000 >> 0x20);
        if (iVar3 <= iVar5) {
          iVar3 = iVar5;
        }
        if (*(long *)(unaff_x19 + 2) == 0) goto LAB_05da4108;
        FUN_060d597c(&stack0x000002a0,*(long *)(unaff_x19 + 2),0);
        plVar8 = *(long **)(unaff_x19 + 4);
        if (plVar8 == (long *)0x0) goto LAB_05da4108;
        (**(code **)(*plVar8 + 0x198))(plVar8,iVar7,*(undefined8 *)(*plVar8 + 0x1a0));
        plVar8 = *(long **)(unaff_x19 + 4);
        if (plVar8 == (long *)0x0) goto LAB_05da4108;
        (**(code **)(*plVar8 + 0x1b8))(plVar8,iVar3,*(undefined8 *)(*plVar8 + 0x1c0));
        if (*(long *)(unaff_x19 + 4) == 0) goto LAB_05da4108;
        FUN_060d4cf4(*(long *)(unaff_x19 + 4),0);
        plVar8 = *(long **)(unaff_x19 + 2);
        if (plVar8 == (long *)0x0) goto LAB_05da4108;
        iVar5 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
        if (iVar5 != 1) {
          iVar5 = FUN_060fb2e0(0);
          uVar19 = *(undefined8 *)(unaff_x19 + 2);
          if (iVar5 == 0) {
            uVar15 = *(undefined8 *)(unaff_x19 + 4);
            auVar22 = ZEXT416((uint)((float)unaff_x19[1] / (float)iVar3));
            uVar6 = FUN_05bdbd7c((float)*unaff_x19 / (float)iVar7,auVar22,(float)iVar3,0);
            if (DAT_06bb435f == '\0') {
              FUN_02f08768(PTR_DAT_067c9848);
              DAT_06bb435f = '\x01';
            }
            param_4 = **(float **)(*(long *)PTR_DAT_067c9848 + 0xb8);
            param_5 = (*(float **)(*(long *)PTR_DAT_067c9848 + 0xb8))[1];
            if (*(int *)(*(long *)PTR_DAT_067cb238 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            FUN_060b5358(uVar6,auVar22._0_4_,param_4,param_5,uVar19,uVar15,0);
          }
          else {
            uVar15 = *(undefined8 *)(unaff_x19 + 4);
            iVar5 = *unaff_x19;
            iVar13 = unaff_x19[1];
            if (*(int *)(*(long *)PTR_DAT_067cb238 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            FUN_060b4640(uVar19,0,0,0,0,iVar5,iVar13,uVar15);
          }
        }
        if (*(long *)(unaff_x19 + 2) == 0) goto LAB_05da4108;
        FUN_060d4da8(*(long *)(unaff_x19 + 2),0);
        *unaff_x19 = iVar7;
        unaff_x19[1] = iVar3;
        auVar22 = NEON_ext(*(undefined1 (*) [16])(unaff_x19 + 2),
                           *(undefined1 (*) [16])(unaff_x19 + 2),8,1);
        *(long *)(unaff_x19 + 4) = auVar22._8_8_;
        *(long *)(unaff_x19 + 2) = auVar22._0_8_;
      }
      if ((int)unaff_x26 < 1) goto LAB_05da3cc4;
      iVar7 = 0;
      lVar12 = 0;
      iVar3 = 0;
      goto LAB_05da39ec;
    }
    memmove(&stack0x000001cc,(void *)(in_stack_00000070 + unaff_x28 * 0x88),0x88);
    plVar8 = (long *)UnityEngine_UIElements_InlineStyleAccessPropertyBag_FlexGrowProperty__get_Name
                               (&stack0x000001cc,0);
    lVar12 = FUN_0612c674(&stack0x000001cc,0);
    if (lVar12 == 0) goto LAB_05da4108;
    unaff_w25 = FUN_060f5e80(lVar12,0);
    if (*(long *)(unaff_x19 + 0x12) == 0) goto LAB_05da4108;
    uVar14 = FUN_04895bfc(*(long *)(unaff_x19 + 0x12),unaff_w25,&stack0x00000440,
                          *(undefined8 *)
                           Method_System_Reflection_Emit_PropertyBuilder_get_PropertyType__);
    if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f20);
    }
    uVar10 = FUN_060f60a4(plVar8,0);
  } while ((uVar10 & 1) == 0);
  if ((uVar14 & 1) == 0) {
    if (plVar8 == (long *)0x0) goto LAB_05da4108;
    iVar3 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
    dVar11 = (double)((ulong)(iVar3 * 4 - 1) | 0x4330000000000000);
    param_3._8_8_ = 0;
    param_3._0_8_ = (ulong)dVar11;
    iVar7 = FUN_05d733c0(unaff_x19 + 8,0);
    iVar5 = (int)((long)(dVar11 + -4503599627370496.0) >> 0x34);
    iVar3 = iVar5;
    if (0x403 < iVar5) {
      iVar3 = 0x404;
    }
    if (iVar5 < 0x3fe) {
      unaff_x23 = 0;
LAB_05da34f8:
      uVar14 = unaff_x23 << 2;
      lVar12 = unaff_x23 - 7;
      do {
        uVar10 = uVar14 & 0xfffffffc;
        bVar2 = lVar12 != -1;
        lVar12 = lVar12 + 1;
        uVar14 = uVar14 + 4;
        *(undefined4 *)(uVar10 + unaff_x22) = 0xffffffff;
      } while (bVar2);
    }
    else {
      uVar14 = 0;
      puVar16 = in_stack_00000040;
      do {
        iVar4 = FUN_05d733c0(unaff_x19 + 8,0);
        iVar13 = (iVar7 - iVar5) + 0x3ff + (int)uVar14;
        if (iVar4 + -1 <= iVar13) {
          iVar13 = iVar4 + -1;
        }
        uVar10 = FUN_05d73560(unaff_x19 + 8,iVar13,&stack0x000001c0,0);
        if ((uVar10 & 1) == 0) break;
        *puVar16 = uStack00000000000001c0;
        puVar16[-7] = uStack00000000000001c4;
        fVar21 = (float)FUN_05da4510();
        uVar14 = uVar14 + 1;
        puVar16 = puVar16 + 1;
        fVar23 = param_5 * (float)unaff_x19[1];
        fVar24 = param_3._0_4_ * (float)unaff_x19[1];
        param_4 = param_4 * (float)*unaff_x19;
        fVar21 = fVar21 * (float)*unaff_x19;
        uVar10 = (long)(int)fVar23 << 0x20;
        uVar25 = (long)(int)fVar24 << 0x20;
        param_5 = INFINITY;
        param_3._0_8_ =
             (uVar10 ^ (uVar10 ^ in_stack_00000060) & (long)(int)-(uint)(fVar23 == (float)unaff_d8))
             + (uVar25 ^ (uVar25 ^ in_stack_00000068) &
                         (long)(int)-(uint)(fVar24 == (float)((ulong)unaff_d8 >> 0x20)));
        param_3._8_8_ = 0;
        iVar13 = -0x80000000;
        if (param_4 != INFINITY) {
          iVar13 = (int)param_4;
        }
        iVar4 = -0x80000000;
        if (fVar21 != INFINITY) {
          iVar4 = (int)fVar21;
        }
        if (unaff_w21 <= iVar4 + iVar13) {
          unaff_w21 = iVar4 + iVar13;
        }
        iVar13 = (int)(param_3._0_8_ >> 0x20);
        if (unaff_w29 <= iVar13) {
          unaff_w29 = iVar13;
        }
      } while ((long)uVar14 < (long)(iVar3 + -0x3fd));
      unaff_x27 = (undefined8 *)PTR_DAT_067caac8;
      unaff_x23 = uVar14 & 0xffffffff;
      if ((int)uVar14 < iVar3 + -0x3fd) goto code_r0x05da36bc;
      unaff_x26 = in_stack_00000050;
      if (unaff_x23 < 7) goto LAB_05da34f8;
    }
    bVar2 = true;
  }
  else {
    if (plVar8 == (long *)0x0) goto LAB_05da4108;
    iVar3 = FUN_060cc658(plVar8,0);
    bVar2 = in_stack_00000440 != iVar3;
  }
  fVar21 = (float)FUN_0612c730(&stack0x000001cc,0);
  fVar23 = in_stack_000004a8 - param_3._0_4_;
  in_stack_000004ac = in_stack_000004ac - param_4;
  in_stack_000004b0 = in_stack_000004b0 - param_5;
  param_3 = ZEXT416((uint)(in_stack_000004b0 * in_stack_000004b0));
  if (unaff_s9 <=
      in_stack_000004b0 * in_stack_000004b0 +
      in_stack_000004ac * in_stack_000004ac +
      (in_stack_000004a4 - fVar21) * (in_stack_000004a4 - fVar21) + fVar23 * fVar23) {
    bVar2 = true;
  }
  if (bVar2) {
    if (plVar8 == (long *)0x0) goto LAB_05da4108;
    in_stack_00000440 = FUN_060cc658(plVar8,0);
    lVar12 = *(long *)(unaff_x19 + 0x16);
    if (lVar12 == 0) goto LAB_05da4108;
    lVar9 = *(long *)(lVar12 + 0x10);
    lVar18 = *(long *)PTR_DAT_067cc9f8;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_05da4108;
    uVar1 = *(uint *)(lVar12 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = unaff_w25;
    }
    else {
      FUN_03a6c18c(lVar12,unaff_w25,
                   *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar12 = FUN_0612c674(&stack0x000001cc,0);
  if (lVar12 == 0) goto LAB_05da4108;
  iVar3 = FUN_060a8364(lVar12,0);
  if (iVar3 == 1) {
    lVar12 = FUN_0612c674(&stack0x000001cc,0);
    if (lVar12 == 0) goto LAB_05da4108;
    FUN_060a852c(lVar12,0);
  }
  in_stack_000004a4 = (float)FUN_0612c730(&stack0x000001cc,0);
  lVar12 = *(long *)(unaff_x19 + 0x12);
  in_stack_000004a8 = param_3._0_4_;
  if (lVar12 == 0) goto LAB_05da4108;
  param_4 = in_stack_000004ac;
  param_5 = in_stack_000004b0;
  memcpy(&stack0x000002a0,&stack0x00000440,0x78);
  FUN_04893cec(lVar12,unaff_w25,&stack0x000002a0,
               *(undefined8 *)
                Method_System_Linq_Expressions_Interpreter_PropertyByRefUpdater_Update__);
  goto LAB_05da368c;
code_r0x05da36bc:
  if (*(long *)(unaff_x19 + 0x14) == 0) goto LAB_05da4108;
  param_6 = FUN_0484f11c(*(long *)(unaff_x19 + 0x14),unaff_w25,
                         *(undefined8 *)Method_System_Reflection_Emit_PropertyBuilder_SetValue__);
  param_1 = *(long *)(unaff_x19 + 0x14);
  if (param_1 == 0) goto LAB_05da4108;
  in_x9 = &OVRPlugin_UnityOpenXR_TypeInfo;
  unaff_x26 = in_stack_00000050;
  goto code_r0x05da36e4;
LAB_05da39ec:
  do {
    memmove(&stack0x00000138,(void *)(in_stack_00000070 + lVar12 * 0x88),0x88);
    lVar9 = FUN_0612c674(&stack0x00000138,0);
    if (lVar9 == 0) goto LAB_05da4108;
    uVar6 = FUN_060f5e80(lVar9,0);
    if (*(long *)(unaff_x19 + 0x12) == 0) goto LAB_05da4108;
    uVar14 = FUN_04895bfc(*(long *)(unaff_x19 + 0x12),uVar6,&stack0x000003c0,
                          *(undefined8 *)
                           Method_System_Reflection_Emit_PropertyBuilder_get_PropertyType__);
    if ((uVar14 & 1) == 0) {
LAB_05da3c98:
      iVar3 = iVar3 + 1;
    }
    else {
      uVar19 = UnityEngine_UIElements_InlineStyleAccessPropertyBag_FlexGrowProperty__get_Name
                         (&stack0x00000138,0);
      if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f20);
      }
      uVar14 = FUN_060f60a4(uVar19,0);
      if ((uVar14 & 1) == 0) goto LAB_05da3c98;
      lVar9 = *(long *)(unaff_x19 + 0x1a);
      FUN_0612c700(&stack0x000002a0,&stack0x00000138,0);
      FUN_0612c700(&stack0x000002a0,&stack0x00000138,0);
      FUN_0612c700(&stack0x000002a0,&stack0x00000138,0);
      uVar6 = FUN_0612c73c(&stack0x00000138,0);
      if (lVar9 == 0) goto LAB_05da4108;
      uVar1 = (int)lVar12 - iVar3;
      if (*(uint *)(lVar9 + 0x18) <= uVar1) {
LAB_05da4120:
        if (*(long *)(in_stack_00000038 + 0x28) == in_stack_000006d8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        goto LAB_05da4508;
      }
      lVar18 = (long)(int)uVar1;
      lVar9 = lVar9 + lVar18 * 0x10;
      *(float *)(lVar9 + 0x20) = in_stack_000002a0 + in_stack_000002ac;
      *(float *)(lVar9 + 0x24) = in_stack_000002a4 + in_stack_000002b0;
      *(float *)(lVar9 + 0x28) = in_stack_000002a8 + in_stack_000002b4;
      *(undefined4 *)(lVar9 + 0x2c) = uVar6;
      lVar9 = *(long *)(unaff_x19 + 0x1c);
      FUN_0612c700(&stack0x000002a0,&stack0x00000138,0);
      FUN_0612c700(&stack0x000002a0,&stack0x00000138,0);
      FUN_0612c700(&stack0x000002a0,&stack0x00000138,0);
      iVar5 = FUN_0612c744(&stack0x00000138,0);
      if (lVar9 == 0) goto LAB_05da4108;
      if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_05da4120;
      auVar22 = ZEXT416((uint)(in_stack_000002a4 - in_stack_000002b0));
      lVar9 = lVar9 + lVar18 * 0x10;
      param_4 = in_stack_000002a8 - in_stack_000002b4;
      param_5 = (float)iVar5;
      *(float *)(lVar9 + 0x20) = in_stack_000002a0 - in_stack_000002ac;
      *(float *)(lVar9 + 0x24) = in_stack_000002a4 - in_stack_000002b0;
      *(float *)(lVar9 + 0x28) = param_4;
      *(float *)(lVar9 + 0x2c) = param_5;
      lVar9 = *(long *)(unaff_x19 + 0x1e);
      FUN_0612c714(&stack0x000002a0,&stack0x00000138,0);
      FUN_0612c714(&stack0x000002a0,&stack0x00000138,0);
      FUN_0612c714(&stack0x000002a0,&stack0x00000138,0);
      uVar14 = FUN_0612c74c(&stack0x00000138,0);
      iVar5 = -in_stack_000003dc;
      if ((uVar14 & 1) != 0) {
        iVar5 = in_stack_000003dc;
      }
      if (lVar9 == 0) goto LAB_05da4108;
      if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_05da4120;
      lVar9 = lVar9 + lVar18 * 0x10;
      *(undefined4 *)(lVar9 + 0x20) = in_stack_000002d0;
      *(undefined4 *)(lVar9 + 0x24) = in_stack_000002d4;
      *(undefined4 *)(lVar9 + 0x28) = in_stack_000002d8;
      *(float *)(lVar9 + 0x2c) = (float)iVar5;
      unaff_x26 = in_stack_00000050;
      if (0 < in_stack_000003dc) {
        lVar9 = 0;
        uVar14 = (ulong)(uint)(iVar7 + iVar3 * -7);
        lVar18 = uVar14 << 0x20;
        do {
          lVar17 = *(long *)(unaff_x19 + 0x20);
          FUN_05da4510();
          uVar6 = FUN_05bebc28(0);
          if (lVar17 == 0) goto LAB_05da4108;
          if ((ulong)*(uint *)(lVar17 + 0x18) <= uVar14 + lVar9) goto LAB_05da4120;
          lVar17 = lVar17 + (lVar18 >> 0x1c);
          lVar9 = lVar9 + 1;
          lVar18 = lVar18 + 0x100000000;
          *(undefined4 *)(lVar17 + 0x20) = uVar6;
          *(int *)(lVar17 + 0x24) = auVar22._0_4_;
          *(float *)(lVar17 + 0x28) = param_4;
          *(float *)(lVar17 + 0x2c) = param_5;
          unaff_x27 = (undefined8 *)PTR_DAT_067caac8;
        } while (lVar9 < in_stack_000003dc);
      }
    }
    lVar12 = lVar12 + 1;
    iVar7 = iVar7 + 7;
  } while (lVar12 != unaff_x26);
LAB_05da3cc4:
  if ((in_stack_00000048._4_4_ & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_060a6338(*(undefined8 *)
                  Method_System_ComponentModel_PropertyDescriptorCollection_System_Collections_IDictionary_set_Item__
                 ,0);
  }
  FUN_034dac00(9,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
  FUN_05c5cb48(&stack0x00000134);
  uVar19 = *(undefined8 *)(unaff_x19 + 2);
  in_stack_00000120 = 0;
  in_stack_00000128 = &stack0x00000134;
  if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_0610d1c0(&stack0x000000f8,uVar19,0);
  if (unaff_x20 == 0) {
    if (*(long *)(in_stack_00000038 + 0x28) == in_stack_000006d8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else {
    auVar22._8_8_ = in_stack_00000110;
    auVar22._0_8_ = in_stack_00000108;
    FUN_06118de4();
    if (*(long *)(unaff_x19 + 0x16) == 0) {
      if (*(long *)(in_stack_00000038 + 0x28) == in_stack_000006d8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    }
    else {
      FUN_03a6cc08(&stack0x000000f8,*(long *)(unaff_x19 + 0x16),*(undefined8 *)PTR_DAT_067caad8);
      uVar14 = in_stack_00000108;
      in_stack_00000100 = &stack0x00000280;
      in_stack_000000f8 = 0;
      while (uVar10 = FUN_04aed724(&stack0x00000280,*unaff_x27), (uVar10 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x12) == 0) {
          if (*(long *)(in_stack_00000038 + 0x28) == in_stack_000006d8) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          goto LAB_05da4508;
        }
        FUN_04893c30(&stack0x000002a0,*(long *)(unaff_x19 + 0x12),uVar14 & 0xffffffff,
                     *(undefined8 *)
                      Method_System_Reflection_Emit_PropertyBuilder_get_ReflectedType__);
        memcpy(&stack0x00000340,&stack0x000002a0,0x78);
        if (0 < in_stack_0000035c) {
          lVar12 = 0;
          piVar20 = (int *)&stack0x0000037c;
          do {
            iVar3 = *piVar20;
            FUN_060fb088(0);
            uVar6 = FUN_05da4510();
            iVar7 = FUN_05d733c0(unaff_x19 + 8,0);
            auVar22 = ZEXT416(auVar22._0_4_);
            param_4 = (float)FUN_05bebc28(uVar6,auVar22,param_4,param_5,0);
            param_5 = auVar22._0_4_;
            FUN_03e2501c(in_stack_000003a4,in_stack_000003a8,in_stack_000003ac,in_stack_000003b0,
                         &stack0x000002a0,
                         *(undefined8 *)
                          Method_System_ComponentModel_PropertyDescriptorCollection_RemoveAt__);
            if (*(int *)(*(long *)
                          Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                        + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            auVar22 = ZEXT416((uint)(float)((1 << (ulong)((iVar7 - iVar3) + 1U & 0x1f)) + -2));
            FUN_05cab958();
            lVar12 = lVar12 + 1;
            piVar20 = piVar20 + 1;
          } while (lVar12 < in_stack_0000035c);
        }
      }
      FUN_04aed720(&stack0x00000280,*(undefined8 *)PTR_DAT_067caac0);
      if (*(int *)(*(long *)
                    Method_System_ComponentModel_PropertyDescriptorCollection_System_Collections_IDictionary_Add__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_06117720();
      FUN_06117720();
      FUN_06117720();
      FUN_06117720();
      FUN_06115f28();
      uVar19 = *(undefined8 *)(unaff_x19 + 2);
      if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_0610d1c0(&stack0x000002a0,uVar19,0);
      FUN_0611f628();
      lVar12 = in_stack_00000120;
      FUN_05c5cb50(in_stack_00000128,0);
      if (lVar12 == 0) {
        lVar12 = *(long *)(unaff_x19 + 0x16);
        if (lVar12 == 0) {
LAB_05da4108:
          if (*(long *)(in_stack_00000038 + 0x28) == in_stack_000006d8) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
        }
        else {
          *(undefined4 *)(lVar12 + 0x18) = 0;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (*(long *)(in_stack_00000038 + 0x28) == in_stack_000006d8) {
            return;
          }
        }
      }
      else if (*(long *)(in_stack_00000038 + 0x28) == in_stack_000006d8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c0(lVar12);
      }
    }
  }
LAB_05da4508:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


