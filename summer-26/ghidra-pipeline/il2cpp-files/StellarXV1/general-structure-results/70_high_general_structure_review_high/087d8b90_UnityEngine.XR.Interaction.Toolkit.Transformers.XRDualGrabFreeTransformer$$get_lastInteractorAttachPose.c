/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Transformers.XRDualGrabFreeTransformer$$get_lastInteractorAttachPose
ENTRY_POINT: 087d8b90
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;data_collection;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Type propagation algorithm not settling */

void UnityEngine_XR_Interaction_Toolkit_Transformers_XRDualGrabFreeTransformer__get_lastInteractorAttachPose
               (long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined *puVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  ulong extraout_x1_06;
  ulong extraout_x1_07;
  ulong extraout_x1_08;
  ulong extraout_x1_09;
  ulong extraout_x1_10;
  ulong extraout_x1_11;
  ulong extraout_x1_12;
  ulong extraout_x1_13;
  undefined1 uVar24;
  char cVar25;
  long *plVar26;
  undefined8 *puVar27;
  uint uVar28;
  float *pfVar29;
  long in_x9;
  long lVar30;
  code *pcVar31;
  long lVar32;
  float *pfVar33;
  long lVar34;
  long *plVar35;
  long lVar36;
  long lVar37;
  uint in_w14;
  long *unaff_x19;
  uint unaff_w20;
  int iVar38;
  uint unaff_w21;
  ulong uVar39;
  undefined8 *unaff_x23;
  int *piVar40;
  long *unaff_x25;
  uint unaff_w26;
  ulong uVar41;
  uint uVar42;
  long *plVar43;
  long *unaff_x28;
  uint unaff_w29;
  uint uVar44;
  ushort uVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 uVar51;
  float fVar54;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar55;
  undefined8 uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  undefined8 uVar61;
  float fVar62;
  float fVar63;
  float unaff_s8;
  float unaff_s9;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float unaff_s13;
  float fVar69;
  float unaff_s15;
  undefined1 auVar70 [16];
  undefined8 in_stack_00000018;
  int iStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float in_stack_00000030;
  uint uStack0000000000000040;
  float fStack0000000000000044;
  ulong in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  uint uStack0000000000000058;
  int iStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  undefined4 uStack000000000000008c;
  float fStack0000000000000090;
  undefined8 in_stack_00000098;
  float fStack00000000000000a0;
  ulong in_stack_000000a8;
  undefined1 (*in_stack_000000b0) [16];
  undefined8 in_stack_000000b8;
  float fStack00000000000000c0;
  undefined8 in_stack_000000d8;
  float in_stack_000000e0;
  float fStack00000000000000e8;
  undefined8 in_stack_000000f0;
  float fStack00000000000000f8;
  float fStack00000000000000fc;
  float in_stack_00000100;
  float fStack000000000000011c;
  float in_stack_00000120;
  undefined8 in_stack_00000128;
  float fStack0000000000000130;
  float fStack0000000000000134;
  float fStack000000000000014c;
  float fStack0000000000000150;
  float fStack0000000000000154;
  float in_stack_00000158;
  float in_stack_00000160;
  float fStack000000000000016c;
  undefined8 in_stack_00000180;
  long *in_stack_00000188;
  float in_stack_000001a0;
  uint uStack00000000000001b0;
  int in_stack_000001c0;
  undefined8 *in_stack_000001d0;
  undefined8 in_stack_000001d8;
  float fStack00000000000001e0;
  float fStack00000000000001e4;
  float in_stack_000001e8;
  float in_stack_0000115c;
  float in_stack_00001168;
  float in_stack_00001174;
  float in_stack_00001180;
  float in_stack_0000118c;
  float in_stack_00001198;
  uint in_stack_0000127c;
  uint in_stack_00001318;
  float in_stack_00001324;
  float in_stack_00001328;
  float in_stack_0000132c;
  float in_stack_00001330;
  ulong in_stack_00001338;
  char in_stack_00001344;
  float in_stack_00001348;
  uint in_stack_0000134c;
  
  uVar23 = _fStack0000000000000068;
  while (in_x9 != 0) {
    uVar13 = *(uint *)(unaff_x23 + 7);
    if (*(uint *)(in_x9 + 0x18) <= uVar13) goto LAB_087ddd1c;
    *(undefined1 *)(in_x9 + (long)(int)uVar13 * (long)(int)unaff_w29 + 400) = 0;
    *(uint *)((long)unaff_x19 + 0x4b4) = uVar13;
    lVar30 = *(long *)(param_1 + 0x50);
    if (lVar30 == 0) break;
    uVar13 = *(uint *)(lVar30 + 0x18);
    if (uVar13 <= *(uint *)(unaff_x19 + 0x97)) goto LAB_087ddd1c;
    lVar30 = lVar30 + 0x20;
    lVar34 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
    iVar15 = *(int *)(lVar34 + 0xc) + 1;
    *(int *)(lVar34 + 0xc) = iVar15;
    uVar14 = *(uint *)(unaff_x19 + 0x97);
    *(int *)(unaff_x19 + 0x98) = iVar15;
    if (uVar13 <= uVar14) goto LAB_087ddd1c;
    lVar34 = lVar30 + (long)(int)uVar14 * 0x60;
    *(float *)(lVar34 + 0x44) = unaff_s8;
    *(float *)(lVar34 + 0x48) = unaff_s9;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    if (in_stack_0000134c == 0xa0) {
      *(int *)(lVar30 + (long)(int)uVar14 * 0x60) = *(int *)(lVar30 + (long)(int)uVar14 * 0x60) + 1;
    }
LAB_087d9374:
    if (((int)unaff_x19[0x62] == 1) &&
       ((uStack00000000000001b0 != unaff_w21 || (in_stack_0000134c == 0x2d)))) {
      if (unaff_x19[0xce] == 0) break;
      fVar65 = *(float *)(unaff_x19 + 0x42);
      fVar47 = (float)FUN_08a73b44(unaff_x19[0xce] + 0x28,0);
      if (unaff_x19[0xce] == 0) break;
      fVar48 = (float)FUN_08a73b4c(unaff_x19[0xce] + 0x28,0);
      lVar30 = unaff_x19[0xcd];
      if ((lVar30 == 0) || (*(long *)(lVar30 + 0x20) == 0)) break;
      fVar66 = *(float *)((long)unaff_x19 + 0x43c);
      fVar68 = *(float *)(lVar30 + 0x2c);
      fVar49 = (float)FUN_08a74044(*(long *)(lVar30 + 0x20),0);
      uVar61 = *(undefined8 *)_fStack00000000000000c0;
      fVar49 = fVar66 * in_stack_00000120 * (fVar65 / fVar47) * fVar48 * fVar68 * fVar49;
      param_3 = extraout_x1_05;
      if ((in_stack_0000134c == 10) && (*(int *)((long)unaff_x19 + 0x4a4) != (int)unaff_x19[0x95]))
      {
        if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0))
        break;
        uVar13 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
        if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_087ddd1c;
        if (unaff_x19[0xce] == 0) break;
        fVar65 = *(float *)(lVar30 + (long)(int)uVar13 * (long)(int)unaff_w29 + 0x58);
        fVar47 = (float)FUN_08a73b44(unaff_x19[0xce] + 0x28,0);
        if (unaff_x19[0xce] == 0) break;
        fVar48 = (float)FUN_08a73b4c(unaff_x19[0xce] + 0x28,0);
        lVar30 = unaff_x19[0xcd];
        if ((lVar30 == 0) || (*(long *)(lVar30 + 0x20) == 0)) break;
        fVar66 = *(float *)((long)unaff_x19 + 0x43c);
        fVar68 = *(float *)(lVar30 + 0x2c);
        fVar49 = (float)FUN_08a74044(*(long *)(lVar30 + 0x20),0);
        if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x50), lVar30 == 0))
        break;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_087ddd1c;
        uVar61 = *(undefined8 *)(lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60 + 100);
        fVar49 = fVar66 * in_stack_00000120 * (fVar65 / fVar47) * fVar48 * fVar68 * fVar49;
        param_3 = extraout_x1_06;
      }
      fVar65 = *(float *)((long)unaff_x19 + 0x4ec);
      fVar47 = 0.0;
      fVar48 = 0.0;
      if ((0.0 < fVar65) && ((char)unaff_x19[0x5e] == '\0')) {
        fVar48 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
      }
      fVar66 = *(float *)((long)unaff_x19 + 0x4cc);
      fVar68 = *(float *)(unaff_x19 + 0x9c);
      fVar69 = *(float *)(unaff_x19 + 0xcb);
      if ((char)unaff_x19[0x1e] == '\0') {
        if ((unaff_x19[0xcd] == 0) || (lVar30 = *(long *)(unaff_x19[0xcd] + 0x20), lVar30 == 0))
        break;
        FUN_08a74008(&stack0x00001350,lVar30,0);
        fVar47 = (float)FUN_08a73e50(&stack0x000011f0,0);
        param_3 = extraout_x1_07;
      }
      puVar9 = PTR_DAT_09337670;
      fVar60 = *(float *)(unaff_x19 + 0x73);
      fVar55 = (in_stack_000000b8._4_4_ - (float)uVar61) - (float)((ulong)uVar61 >> 0x20);
      bVar10 = true;
      if ((fVar60 <= fVar55) && (bVar10 = false, !NAN(fVar60))) {
        bVar10 = fVar60 == -1.0;
      }
      if (!bVar10) {
        fVar55 = fVar60;
      }
      fVar60 = unaff_s15;
      if (in_w14 != 0) {
        fVar60 = DAT_01aed150;
      }
      unaff_s13 = in_stack_00000160;
      if ((ABS(fVar69) + fVar49 * fVar47 * (unaff_s15 - *(float *)(unaff_x19 + 0x60)) <
           fVar60 * fVar55) && ((fVar66 - (fVar68 - fVar65)) + fVar48 < in_stack_000000f0._4_4_)) {
        if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_088229a4();
        lVar30 = *(long *)(*(long *)puVar9 + 0xb8);
        memcpy(&stack0x00001350,(void *)(lVar30 + 0x810),0x3b8);
        FUN_065eb410(lVar30 + 0x1338,&stack0x00001350,*(undefined8 *)PTR_DAT_09337620);
        param_3 = extraout_x1_08;
      }
    }
    lVar30 = unaff_x19[0x74];
    if ((lVar30 == 0) || (lVar34 = *(long *)(lVar30 + 0x38), lVar34 == 0)) break;
    if (*(uint *)(lVar34 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_087ddd1c;
    lVar34 = lVar34 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * (long)(int)unaff_w29;
    uVar13 = *(uint *)(unaff_x19 + 0x97);
    *(uint *)(lVar34 + 0x5c) = uVar13;
    *(undefined4 *)(lVar34 + 0x60) = *(undefined4 *)((long)unaff_x19 + 0x4c4);
    if ((uStack00000000000001b0 == unaff_w21) ||
       ((in_stack_0000134c < 0xe && ((1 << (ulong)(in_stack_0000134c & 0x1f) & 0x2c00U) != 0)))) {
      lVar30 = *(long *)(lVar30 + 0x50);
      if (lVar30 == 0) break;
      if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_087ddd1c;
      if (*(int *)(lVar30 + (long)(int)uVar13 * 0x60 + 0x24) == 1) goto LAB_087d971c;
    }
    else {
      lVar30 = *(long *)(lVar30 + 0x50);
      if (lVar30 == 0) break;
LAB_087d971c:
      if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_087ddd1c;
      *(int *)(lVar30 + (long)(int)uVar13 * 0x60 + 0x6c) = (int)unaff_x19[0x54];
    }
    if (in_stack_0000134c == 9) {
      if (unaff_x19[0x20] == 0) break;
      fVar47 = (float)FUN_08a73bec(unaff_x19[0x20] + 0x28,0);
      if (unaff_x19[0x20] == 0) break;
      fVar65 = (float)NEON_ucvtf((uint)*(byte *)(unaff_x19[0x20] + 0x1b1));
      fVar48 = *(float *)(unaff_x19 + 0xcb);
      auVar70 = ZEXT416((uint)fVar48);
      fVar65 = in_stack_00000180._4_4_ * fVar47 * fVar65;
      param_3 = extraout_x1_09;
      if ((char)unaff_x19[0x1e] == '\0') {
        fStack000000000000011c = fVar65 * (float)(int)(fVar48 / fVar65);
        fVar47 = fStack000000000000011c;
        if (fStack000000000000011c <= fVar48) {
          fVar47 = fVar65 + fVar48;
        }
      }
      else {
        fStack000000000000011c = fVar65 * (float)(int)(fVar48 / fVar65);
        fVar47 = fStack000000000000011c;
        if (fVar48 <= fStack000000000000011c) {
          fVar47 = fVar48 - fVar65;
        }
      }
LAB_087d9958:
      *(float *)(unaff_x19 + 0xcb) = fVar47;
    }
    else {
      fVar47 = *(float *)(unaff_x19 + 0x5b);
      if (fVar47 == 0.0) {
        fVar47 = *(float *)(unaff_x19 + 0xcb);
        if ((char)unaff_x19[0x1e] == '\0') {
          fVar48 = (float)FUN_08a73e50(&stack0x00001290,0);
          fVar66 = *(float *)(unaff_x23 + 2);
          fVar49 = (float)FUN_08a78388(&stack0x00001280,0);
          if (unaff_x19[0x20] != 0) {
            fStack000000000000011c = *(float *)(unaff_x19 + 0x60);
            fVar65 = unaff_s15 - fStack000000000000011c;
            fVar47 = fVar47 + fVar65 * (*(float *)((long)unaff_x19 + 0x2d4) +
                                       in_stack_00000180._4_4_ * (fVar48 * fVar66 + fVar49) +
                                       in_stack_00000100 *
                                       (fStack00000000000000fc +
                                       in_stack_000000e0 + *(float *)(unaff_x19[0x20] + 0x1a4)));
            *(float *)(unaff_x19 + 0xcb) = fVar47;
            param_3 = extraout_x1_11;
            goto joined_r0x087d989c;
          }
          break;
        }
        fVar65 = (float)FUN_08a78388(&stack0x00001280,0);
        if (unaff_x19[0x20] == 0) break;
        fStack000000000000011c = *(float *)(unaff_x19 + 0x60);
        auVar70 = ZEXT416((uint)(unaff_s15 - fStack000000000000011c));
        fVar47 = fVar47 - (unaff_s15 - fStack000000000000011c) *
                          (*(float *)((long)unaff_x19 + 0x2d4) +
                          in_stack_00000180._4_4_ * fVar65 +
                          in_stack_00000100 *
                          (fStack00000000000000fc +
                          in_stack_000000e0 + *(float *)(unaff_x19[0x20] + 0x1a4)));
        *(float *)(unaff_x19 + 0xcb) = fVar47;
        param_3 = extraout_x1_10;
        if ((unaff_w26 != 0) || (in_stack_0000134c == 0x200b)) {
          auVar70 = ZEXT416((uint)(in_stack_00000100 * *(float *)(unaff_x19 + 0x5c)));
          fStack000000000000011c = in_stack_00000100;
          fVar47 = fVar47 - in_stack_00000100 * *(float *)(unaff_x19 + 0x5c);
          goto LAB_087d9958;
        }
      }
      else {
        if (((*(char *)((long)unaff_x19 + 0x2dc) != '\0') && (in_stack_0000134c < 0x3b)) &&
           ((1L << ((ulong)in_stack_0000134c & 0x3f) & 0x400500000000000U) != 0)) {
          fVar47 = fVar47 * 0.5;
        }
        if (unaff_x19[0x20] == 0) break;
        fStack000000000000011c = *(float *)(unaff_x19 + 0x60);
        fVar65 = *(float *)(unaff_x19 + 0xcb);
        fVar47 = fVar65 + (unaff_s15 - fStack000000000000011c) *
                          (*(float *)((long)unaff_x19 + 0x2d4) +
                          (fVar47 - in_stack_00000098._4_4_) +
                          in_stack_00000100 *
                          (in_stack_000000e0 + *(float *)(unaff_x19[0x20] + 0x1a4)));
        *(float *)(unaff_x19 + 0xcb) = fVar47;
joined_r0x087d989c:
        if ((unaff_w26 != 0) || (auVar70 = ZEXT416((uint)fVar65), in_stack_0000134c == 0x200b)) {
          auVar70 = ZEXT416((uint)(in_stack_00000100 * *(float *)(unaff_x19 + 0x5c)));
          fStack000000000000011c = in_stack_00000100;
          fVar47 = fVar47 + in_stack_00000100 * *(float *)(unaff_x19 + 0x5c);
          goto LAB_087d9958;
        }
      }
    }
    lVar30 = unaff_x19[0x74];
    if ((lVar30 == 0) || (lVar34 = *(long *)(lVar30 + 0x38), lVar34 == 0)) break;
    uVar13 = *(uint *)(unaff_x23 + 7);
    if (*(uint *)(lVar34 + 0x18) <= uVar13) goto LAB_087ddd1c;
    *(float *)(lVar34 + (long)(int)uVar13 * (long)(int)unaff_w29 + 0x13c) = fVar47;
    if (in_stack_0000134c == 0xd) {
      auVar70 = ZEXT816(0);
      *(float *)(unaff_x19 + 0xcb) = *(float *)((long)unaff_x19 + 0x444) + 0.0;
    }
    if (((int)unaff_x19[0x62] == 5) &&
       (((0xd < in_stack_0000134c || ((1 << (ulong)(in_stack_0000134c & 0x1f) & 0x2c00U) == 0)) &&
        (1 < in_stack_0000134c - 0x2028)))) {
      lVar34 = *(long *)(lVar30 + 0x58);
      if (lVar34 == 0) break;
      iVar15 = *(int *)((long)unaff_x19 + 0x4c4) + 1;
      if (*(int *)(lVar34 + 0x18) < iVar15) {
        if (*(int *)(*(long *)PTR_DAT_093375f0 + 0xe4) == 0) {
          thunk_FUN_040d65a8(*(long *)PTR_DAT_093375f0,param_3);
        }
        FUN_05202560((long *)(lVar30 + 0x58),iVar15,1,*(undefined8 *)PTR_DAT_093375e0);
        lVar30 = unaff_x19[0x74];
        if (lVar30 == 0) break;
      }
      unaff_x28 = (long *)PTR_DAT_09285bb0;
      lVar34 = *(long *)(lVar30 + 0x58);
      if (lVar34 == 0) break;
      uVar14 = *(uint *)((long)unaff_x19 + 0x4c4);
      if (*(uint *)(lVar34 + 0x18) <= uVar14) goto LAB_087ddd1c;
      lVar34 = lVar34 + 0x20;
      lVar36 = lVar34 + (long)(int)uVar14 * 0x14;
      *(int *)(lVar36 + 8) = (int)unaff_x19[0x99];
      fVar65 = *(float *)(lVar36 + 0x10);
      auVar70 = ZEXT416((uint)fVar65);
      fVar47 = *(float *)(unaff_x19 + 0x9b);
      if (fVar65 <= *(float *)(unaff_x19 + 0x9b)) {
        fVar47 = fVar65;
      }
      *(float *)(lVar36 + 0x10) = fVar47;
      if (*(char *)((long)unaff_x19 + 0x374) != '\0') {
        *(undefined1 *)((long)unaff_x19 + 0x374) = 0;
        *(undefined4 *)(lVar34 + (long)(int)uVar14 * 0x14) =
             *(undefined4 *)((long)unaff_x19 + 0x4a4);
      }
      uVar13 = *(uint *)(unaff_x23 + 7);
      *(uint *)(lVar34 + (long)(int)uVar14 * 0x14 + 4) = uVar13;
    }
    uVar14 = in_stack_0000134c;
    if (((in_stack_0000134c < 0xc) && ((1 << (ulong)(in_stack_0000134c & 0x1f) & 0xc08U) != 0)) ||
       ((in_stack_0000134c - 0x2028 < 2 ||
        ((in_stack_0000134c == 0x2d && uStack00000000000001b0 == unaff_w21 ||
         ((float)uVar13 == fStack0000000000000050)))))) {
      if (0.0 < *(float *)((long)unaff_x19 + 0x4ec)) {
        fVar47 = *(float *)((long)unaff_x19 + 0x4dc);
        fVar65 = *(float *)((long)unaff_x19 + 0x4e4);
        if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        fVar47 = fVar47 - fVar65;
        if (((fStack0000000000000054 < ABS(fVar47)) && ((char)unaff_x19[0x5e] == '\0')) &&
           (*(char *)((long)unaff_x19 + 0x374) == '\0')) {
          FUN_08822d60();
          puVar9 = PTR_DAT_09337670;
          lVar30 = *(long *)PTR_DAT_09337670;
          *(float *)(unaff_x19 + 0x9b) = *(float *)(unaff_x19 + 0x9b) - fVar47;
          *(float *)((long)unaff_x19 + 0x4ec) = fVar47 + *(float *)((long)unaff_x19 + 0x4ec);
          if (*(int *)(lVar30 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar30 = *(long *)puVar9;
          }
          lVar34 = *(long *)(lVar30 + 0xb8);
          if (*(int *)(lVar34 + 0x838) == (int)unaff_x19[0x97]) {
            if (*(int *)(lVar30 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              lVar34 = *(long *)(*(long *)PTR_DAT_09337670 + 0xb8);
            }
            FUN_065eb4fc(&stack0x00000210,lVar34 + 0x1338,*(undefined8 *)PTR_DAT_09337618);
            puVar9 = PTR_DAT_09337670;
            lVar30 = *(long *)PTR_DAT_09337670;
            memcpy((void *)(*(long *)(lVar30 + 0xb8) + 0x810),&stack0x00000210,0x3b8);
            thunk_FUN_040ec700(*(long *)(lVar30 + 0xb8) + 0x8a8,0);
            lVar30 = *(long *)(*(long *)puVar9 + 0xb8);
            *(float *)(lVar30 + 0x848) = fVar47 + *(float *)(lVar30 + 0x848);
            *(float *)(lVar30 + 0x894) = fVar47 + *(float *)(lVar30 + 0x894);
            memcpy(&stack0x00001350,(void *)(lVar30 + 0x810),0x3b8);
            FUN_065eb410(lVar30 + 0x1338,&stack0x00001350,*(undefined8 *)PTR_DAT_09337620);
            unaff_x23 = in_stack_000001d0;
          }
        }
      }
      fVar48 = *(float *)((long)unaff_x19 + 0x4ec);
      *(undefined1 *)((long)unaff_x19 + 0x374) = 0;
      fVar65 = *(float *)(unaff_x19 + 0x9c) - fVar48;
      fVar47 = *(float *)(unaff_x19 + 0x9b);
      if (fVar65 <= *(float *)(unaff_x19 + 0x9b)) {
        fVar47 = fVar65;
      }
      fVar49 = *(float *)((long)unaff_x19 + 0x4dc);
      *(float *)(unaff_x19 + 0x9b) = fVar47;
      if (in_stack_00001344 == '\0') {
        in_stack_00001348 = fVar47;
      }
      if ((*(char *)((long)unaff_x19 + 0x36c) != '\0') &&
         (((int)unaff_x19[0x6c] <= *(int *)((long)unaff_x19 + 0x4a4) ||
          ((int)unaff_x19[0x6d] <= (int)unaff_x19[0x97])))) {
        in_stack_00001344 = '\x01';
      }
      lVar30 = unaff_x19[0x74];
      if ((lVar30 == 0) || (lVar34 = *(long *)(lVar30 + 0x50), lVar34 == 0)) break;
      if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_087ddd1c;
      lVar34 = lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
      iVar16 = (int)unaff_x19[0x95];
      *(int *)(lVar34 + 0x38) = iVar16;
      iVar15 = iVar16;
      if (iVar16 <= *(int *)((long)unaff_x19 + 0x4ac)) {
        iVar15 = *(int *)((long)unaff_x19 + 0x4ac);
      }
      *(int *)((long)unaff_x19 + 0x4ac) = iVar15;
      *(int *)(lVar34 + 0x3c) = iVar15;
      iVar18 = *(int *)((long)unaff_x19 + 0x4a4);
      *(int *)(unaff_x19 + 0x96) = iVar18;
      *(int *)(lVar34 + 0x40) = iVar18;
      iVar17 = *(int *)((long)unaff_x19 + 0x4ac);
      if (iVar15 <= *(int *)((long)unaff_x19 + 0x4b4)) {
        iVar17 = *(int *)((long)unaff_x19 + 0x4b4);
      }
      *(int *)((long)unaff_x19 + 0x4b4) = iVar17;
      *(int *)(lVar34 + 0x44) = iVar17;
      *(int *)(lVar34 + 0x24) = (iVar18 - iVar16) + 1;
      iVar15 = *(int *)((long)unaff_x19 + 0x4bc);
      *(int *)(lVar34 + 0x28) = iVar15;
      *(int *)(lVar34 + 0x30) = (iVar17 - (iVar16 + iVar15)) + 1;
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) break;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x23 + 8)) goto LAB_087ddd1c;
      *(undefined4 *)(lVar34 + 0x70) =
           *(undefined4 *)
            (lVar30 + (long)(int)*(uint *)(unaff_x23 + 8) * (long)(int)unaff_w29 + 0x114);
      *(float *)(lVar34 + 0x74) = fVar65;
      lVar30 = unaff_x19[0x74];
      if ((lVar30 == 0) || (lVar34 = *(long *)(lVar30 + 0x50), lVar34 == 0)) break;
      if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_087ddd1c;
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) break;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4b4)) goto LAB_087ddd1c;
      fVar49 = fVar49 - fVar48;
      auVar70 = ZEXT416((uint)fVar49);
      lVar34 = lVar34 + 0x20 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
      *(undefined4 *)(lVar34 + 0x58) =
           *(undefined4 *)
            (lVar30 + (long)(int)*(uint *)((long)unaff_x19 + 0x4b4) * (long)(int)unaff_w29 + 0x120);
      *(float *)(lVar34 + 0x5c) = fVar49;
      lVar30 = unaff_x19[0x74];
      if ((lVar30 == 0) || (lVar34 = *(long *)(lVar30 + 0x50), lVar34 == 0)) break;
      uVar13 = *(uint *)(unaff_x19 + 0x97);
      if (*(uint *)(lVar34 + 0x18) <= uVar13) goto LAB_087ddd1c;
      lVar34 = lVar34 + 0x20;
      lVar36 = lVar34 + (long)(int)uVar13 * 0x60;
      *(float *)(lVar36 + 0x28) = *(float *)(lVar36 + 0x58) - in_stack_00000180._4_4_ * unaff_s13;
      *(float *)(lVar36 + 0x40) = in_stack_00000158;
      if (*(int *)(lVar36 + 4) == 1) {
        *(int *)(lVar34 + (long)(int)uVar13 * 0x60 + 0x4c) = (int)unaff_x19[0x54];
      }
      if ((unaff_x19[0x20] == 0) || (lVar36 = *(long *)(lVar30 + 0x38), lVar36 == 0)) break;
      uVar28 = *(uint *)((long)unaff_x19 + 0x4b4);
      if (*(uint *)(lVar36 + 0x18) <= uVar28) goto LAB_087ddd1c;
      if ((*(char *)(lVar36 + 0x20 + (long)(int)uVar28 * (long)(int)unaff_w29 + 0x170) == '\0') &&
         (uVar28 = *(uint *)(unaff_x19 + 0x96), *(uint *)(lVar36 + 0x18) <= uVar28))
      goto LAB_087ddd1c;
      fVar48 = (unaff_s15 - *(float *)(unaff_x19 + 0x60)) *
               (*(float *)((long)unaff_x19 + 0x2d4) +
               in_stack_00000100 *
               (fStack00000000000000fc + in_stack_000000e0 + *(float *)(unaff_x19[0x20] + 0x1a4)));
      fVar47 = -fVar48;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar47 = fVar48;
      }
      lVar34 = lVar34 + (long)(int)uVar13 * 0x60;
      *(float *)(lVar34 + 0x3c) =
           *(float *)(lVar36 + 0x20 + (long)(int)uVar28 * (long)(int)unaff_w29 + 0x11c) + fVar47;
      fStack000000000000011c = 0.0 - *(float *)((long)unaff_x19 + 0x4ec);
      *(float *)(lVar34 + 0x34) = fStack000000000000011c;
      *(float *)(lVar34 + 0x38) = fVar65;
      *(float *)(lVar34 + 0x2c) = fStack0000000000000060 + (fVar49 - fVar65);
      *(float *)(lVar34 + 0x30) = fVar49;
      if ((((in_stack_0000134c & 0xfffffffe) == 10) ||
          (uStack00000000000001b0 == unaff_w21 && in_stack_0000134c == 0x2d)) ||
         (in_stack_0000134c - 0x2028 < 2)) {
        if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_088229a4();
        lVar30 = unaff_x19[0x97];
        iVar16 = *(int *)((long)unaff_x19 + 0x4a4);
        unaff_x23[10] = 0;
        iVar15 = (int)lVar30 + 1;
        lVar30 = unaff_x19[0x74];
        *(int *)(unaff_x19 + 0x97) = iVar15;
        *(int *)(unaff_x19 + 0x95) = iVar16 + 1;
        if ((lVar30 == 0) || (*(long *)(lVar30 + 0x50) == 0)) break;
        if (*(int *)(*(long *)(lVar30 + 0x50) + 0x18) <= iVar15) {
          FUN_08822f1c();
          lVar30 = unaff_x19[0x74];
          if (lVar30 == 0) break;
        }
        lVar30 = *(long *)(lVar30 + 0x38);
        if (lVar30 == 0) break;
        if (*(uint *)(unaff_x23 + 7) < *(uint *)(lVar30 + 0x18)) {
          fVar47 = *(float *)(lVar30 + (long)(int)*(uint *)(unaff_x23 + 7) * (long)(int)unaff_w29 +
                             0x14c);
          if (*(float *)((long)unaff_x19 + 0x2ec) == DAT_01aeb5f8) {
            if ((in_stack_0000134c == 0x2029) || (fVar65 = 0.0, in_stack_0000134c == 10)) {
              fVar65 = *(float *)(unaff_x19 + 0x5f);
            }
            uVar24 = 0;
            fVar65 = fVar47 + (0.0 - *(float *)(unaff_x19 + 0x9c)) +
                     in_stack_00000048._4_4_ *
                     (fStack0000000000000044 + *(float *)(unaff_x19 + 0x5d)) +
                     in_stack_00000100 * (*(float *)((long)unaff_x19 + 0x2e4) + fVar65) +
                     *(float *)((long)unaff_x19 + 0x4ec);
          }
          else {
            if ((in_stack_0000134c == 0x2029) || (fVar65 = 0.0, in_stack_0000134c == 10)) {
              fVar65 = *(float *)(unaff_x19 + 0x5f);
            }
            uVar24 = 1;
            fVar65 = *(float *)((long)unaff_x19 + 0x4ec) +
                     *(float *)((long)unaff_x19 + 0x2ec) +
                     in_stack_00000100 * (*(float *)((long)unaff_x19 + 0x2e4) + fVar65);
          }
          *(float *)((long)unaff_x19 + 0x4ec) = fVar65;
          puVar9 = PTR_DAT_09337670;
          *(undefined1 *)(unaff_x19 + 0x5e) = uVar24;
          lVar30 = *(long *)puVar9;
          if (*(int *)(lVar30 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar30 = *(long *)puVar9;
          }
          fVar65 = *(float *)(unaff_x19 + 0x88);
          uVar61 = *(undefined8 *)(*(long *)(lVar30 + 0xb8) + 0x1730);
          *(float *)((long)unaff_x19 + 0x4e4) = fVar47;
          fStack000000000000011c = *(float *)((long)unaff_x19 + 0x444);
          auVar70._0_8_ = NEON_rev64(uVar61,4);
          auVar70._8_8_ = 0;
          unaff_x23[0xe] = auVar70._0_8_;
          *(float *)(unaff_x19 + 0xcb) = fVar65 + 0.0 + fStack000000000000011c;
          FUN_088229a4();
          FUN_088229a4();
          *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
          goto LAB_087da124;
        }
        goto LAB_087ddd1c;
      }
      if (in_stack_0000134c == 3) {
        if (unaff_x19[0x91] == 0) break;
        in_stack_00001318 = (uint)*(undefined8 *)(unaff_x19[0x91] + 0x18);
        uVar14 = 3;
      }
    }
    lVar30 = *(long *)(lVar30 + 0x38);
    if (lVar30 == 0) break;
    uVar28 = *(uint *)(unaff_x23 + 7);
    uVar13 = *(uint *)(lVar30 + 0x18);
    if (uVar13 <= uVar28) goto LAB_087ddd1c;
    lVar30 = lVar30 + 0x20;
    if (*(char *)(lVar30 + (long)(int)uVar28 * (long)(int)unaff_w29 + 0x170) != '\0') {
      lVar34 = lVar30 + (long)(int)uVar28 * (long)(int)unaff_w29;
      auVar53 = *(undefined1 (*) [16])(unaff_x19 + 0x9e);
      auVar57 = NEON_ext(auVar53,auVar53,8,1);
      uVar61 = *(undefined8 *)(lVar34 + 0xf4);
      fStack000000000000011c = (float)uVar61;
      uVar19 = *(undefined8 *)(lVar34 + 0x100);
      fVar47 = (float)uVar19;
      fVar65 = (float)((ulong)uVar19 >> 0x20);
      auVar70._0_4_ = (float)-(uint)(auVar53._0_4_ < fStack000000000000011c);
      auVar70._4_4_ = (float)-(uint)(auVar53._4_4_ < (float)((ulong)uVar61 >> 0x20));
      auVar70._8_4_ = -(uint)(fVar47 < auVar57._0_4_);
      auVar70._12_4_ = -(uint)(fVar65 < auVar57._4_4_);
      auVar57._8_4_ = fVar47;
      auVar57._0_8_ = uVar61;
      auVar57._12_4_ = fVar65;
      auVar53 = auVar53 ^ (auVar53 ^ auVar57) & ~auVar70;
      unaff_x19[0x9f] = auVar53._8_8_;
      unaff_x19[0x9e] = auVar53._0_8_;
    }
    if (((*(int *)((long)unaff_x19 + 0x304) != 3) && (*(int *)((long)unaff_x19 + 0x304) != 0)) ||
       ((*(uint *)(unaff_x19 + 0x62) < 7 &&
        ((1 << (ulong)(*(uint *)(unaff_x19 + 0x62) & 0x1f) & 0x4aU) != 0)))) {
      if ((((unaff_w26 == 0) && (uVar14 != 0x2d)) && (uVar14 != 0x200b)) && (uVar14 != 0xad)) {
        if (*(char *)((long)unaff_x19 + 0x309) == '\0') goto LAB_087da390;
LAB_087da20c:
        if (((uint)fStack000000000000006c & 1) == 0) {
          fStack000000000000006c = 0.0;
        }
        else {
          uVar13 = (uint)(unaff_w26 == 0 || in_stack_0000134c == 0xa0) &
                   (in_stack_0000134c != 0xad | uStack0000000000000058) ^ 1;
LAB_087da240:
          fStack000000000000006c = 1.4013e-45;
LAB_087da248:
          if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          FUN_088229a4();
          if (uVar13 != 0) goto LAB_087da284;
        }
      }
      else {
        if (*(char *)((long)unaff_x19 + 0x309) != '\0') goto LAB_087da20c;
        if ((int)uVar14 < 0x2007) {
          if (uVar14 == 0x2d) {
            if (0 < (int)uVar28) {
              if (uVar13 <= uVar28 - 1) goto LAB_087ddd1c;
              uVar3 = *(undefined2 *)(lVar30 + (ulong)(uVar28 - 1) * (ulong)unaff_w29 + 4);
              if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              uVar20 = FUN_075d81a8(uVar3,0);
              if ((uVar20 & 1) != 0) {
                if ((unaff_x19[0x74] == 0) ||
                   (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0)) break;
                if (*(uint *)(lVar30 + 0x18) <= *(int *)(unaff_x23 + 7) - 1U) goto LAB_087ddd1c;
                if (*(int *)(lVar30 + (long)(int)(*(int *)(unaff_x23 + 7) - 1U) *
                                      (long)(int)unaff_w29 + 0x5c) == (int)unaff_x19[0x97])
                goto LAB_087da2ec;
              }
            }
          }
          else if (uVar14 == 0xa0) goto LAB_087da390;
LAB_087da920:
          puVar9 = PTR_DAT_09337670;
          lVar30 = *(long *)PTR_DAT_09337670;
          if (*(int *)(lVar30 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar30 = *(long *)puVar9;
          }
          fStack000000000000006c = 0.0;
          uVar13 = 0;
          *(undefined4 *)(*(long *)(lVar30 + 0xb8) + 0xf80) = 0xffffffff;
          goto LAB_087da248;
        }
        if (((0x28 < uVar14 - 0x2007) ||
            ((1L << ((ulong)(uVar14 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) && (uVar14 != 0x2060)
           ) goto LAB_087da920;
LAB_087da390:
        if (*(int *)(*(long *)PTR_DAT_093375f8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar20 = FUN_08847e38(uVar14,0);
        if ((uVar20 & 1) == 0) {
LAB_087da3dc:
          if (*(int *)(*(long *)PTR_DAT_093375f8 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar20 = FUN_08847e94(in_stack_0000134c,0);
          if ((uVar20 & 1) != 0) goto LAB_087da408;
          if ((*(char *)((long)unaff_x19 + 0x309) != '\0') ||
             (uVar13 = *(int *)(unaff_x23 + 7) + 1, iStack000000000000005c <= (int)uVar13))
          goto LAB_087da20c;
          if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0))
          break;
          if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_087ddd1c;
          uVar3 = *(undefined2 *)(lVar30 + (long)(int)uVar13 * (long)(int)unaff_w29 + 0x24);
          if (*(int *)(*(long *)PTR_DAT_093375f8 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar20 = FUN_08847e94(uVar3,0);
          if ((uVar20 & 1) == 0) goto LAB_087da20c;
          if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0))
          break;
          if (*(int *)(unaff_x23 + 7) + 1U < *(uint *)(lVar30 + 0x18)) {
            uVar3 = *(undefined2 *)
                     (lVar30 + (long)(int)(*(int *)(unaff_x23 + 7) + 1U) * (long)(int)unaff_w29 +
                     0x24);
            if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            lVar30 = FUN_0883e090(0);
            if ((lVar30 != 0) && (*(long *)(lVar30 + 0x10) != 0)) {
              uVar13 = FUN_057cfb98(*(long *)(lVar30 + 0x10),in_stack_0000134c,
                                    *(undefined8 *)PTR_DAT_09337598);
              lVar30 = FUN_0883e090(0);
              if ((lVar30 != 0) && (*(long *)(lVar30 + 0x18) != 0)) {
                uVar14 = FUN_057cfb98(*(long *)(lVar30 + 0x18),uVar3,*(undefined8 *)PTR_DAT_09337598
                                     );
                unaff_x28 = (long *)PTR_DAT_09285bb0;
                if (((uVar13 | uVar14) & 1) != 0) goto LAB_087da2ec;
                uVar13 = 0;
                goto LAB_087da248;
              }
            }
            break;
          }
          goto LAB_087ddd1c;
        }
        if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar20 = FUN_0883e2a4(0);
        if ((uVar20 & 1) != 0) goto LAB_087da3dc;
LAB_087da408:
        if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        lVar30 = FUN_0883e090(0);
        if ((lVar30 == 0) || (*(long *)(lVar30 + 0x10) == 0)) break;
        uVar20 = FUN_057cfb98(*(long *)(lVar30 + 0x10),in_stack_0000134c,
                              *(undefined8 *)PTR_DAT_09337598);
        if ((int)fStack0000000000000050 <= *(int *)(unaff_x23 + 7)) {
          if ((uVar20 & 1) != 0) goto LAB_087da610;
          fStack000000000000006c = 0.0;
          uVar13 = 0;
          goto LAB_087da248;
        }
        if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        lVar30 = FUN_0883e090(0);
        if (((lVar30 == 0) || (unaff_x19[0x74] == 0)) ||
           (lVar34 = *(long *)(unaff_x19[0x74] + 0x38), lVar34 == 0)) break;
        if (*(uint *)(lVar34 + 0x18) <= *(int *)(unaff_x23 + 7) + 1U) goto LAB_087ddd1c;
        if (*(long *)(lVar30 + 0x18) == 0) break;
        uVar14 = FUN_057cfb98(*(long *)(lVar30 + 0x18),
                              *(undefined2 *)
                               (lVar34 + (long)(int)(*(int *)(unaff_x23 + 7) + 1U) *
                                         (long)(int)unaff_w29 + 0x24),
                              *(undefined8 *)PTR_DAT_09337598);
        if ((uVar20 & 1) != 0) {
LAB_087da610:
          uVar13 = (uint)(unaff_w26 != 0);
          if (((uint)fStack000000000000006c & (uint)((float)unaff_w20 == in_stack_000001a0)) == 0)
          goto LAB_087da2ec;
          goto LAB_087da240;
        }
        fStack000000000000006c = (float)(uVar14 & (uint)fStack000000000000006c);
        uVar13 = (uint)fStack000000000000006c & (uint)(unaff_w26 != 0);
        if ((((uint)fStack000000000000006c & 1) != 0) || (((uVar14 ^ 1) & 1) != 0))
        goto LAB_087da248;
        fStack000000000000006c = 0.0;
        if (uVar13 == 0) goto LAB_087da2ec;
LAB_087da284:
        if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_088229a4();
      }
    }
LAB_087da2ec:
    if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_088229a4();
    *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
    fVar47 = in_stack_00000180._4_4_;
LAB_087d7090:
    do {
      lVar30 = unaff_x19[0x91];
      in_stack_00001318 = in_stack_00001318 + 1;
      if (lVar30 == 0) goto LAB_087ddb5c;
      if ((int)*(uint *)(lVar30 + 0x18) <= (int)in_stack_00001318) {
LAB_087dadf8:
        if ((char)unaff_x19[0x4c] == '\0') {
LAB_087daebc:
          iVar15 = *(int *)((long)unaff_x19 + 0x26c);
          iVar16 = (int)unaff_x19[0x4e];
        }
        else {
          fStack000000000000011c = *(float *)((long)unaff_x19 + 0x264);
          auVar70 = ZEXT416((uint)DAT_01aec8ec);
          if (fStack000000000000011c - *(float *)(unaff_x19 + 0x4d) <= DAT_01aec8ec)
          goto LAB_087daebc;
          fVar47 = *(float *)((long)unaff_x19 + 0x20c);
          fVar65 = *(float *)((long)unaff_x19 + 0x27c);
          auVar70 = ZEXT416((uint)fVar65);
          iVar15 = *(int *)((long)unaff_x19 + 0x26c);
          iVar16 = (int)unaff_x19[0x4e];
          if ((fVar47 < fVar65) && (iVar15 < iVar16)) {
            if (*(float *)(unaff_x19 + 0x60) < *(float *)((long)unaff_x19 + 0x2fc) / 100.0) {
              *(undefined4 *)(unaff_x19 + 0x60) = 0;
            }
            fVar48 = DAT_01aec3c4;
            *(float *)(unaff_x19 + 0x4d) = fVar47;
            fVar49 = (fStack000000000000011c - fVar47) * 0.5;
            if (fVar49 <= fVar48) {
              fVar49 = fVar48;
            }
            fVar48 = (fVar47 + fVar49) * 20.0 + 0.5;
            fVar47 = DAT_01aec808;
            if (fVar48 != INFINITY) {
              fVar47 = (float)(int)fVar48 / 20.0;
            }
            if (fVar65 <= fVar47) {
              fVar47 = fVar65;
            }
            goto LAB_087daeb4;
          }
        }
        *(undefined1 *)((long)unaff_x19 + 0x274) = 1;
        if (iVar16 <= iVar15) {
          uVar61 = FUN_07676bc4((long)unaff_x19 + 0x26c,0);
          uVar19 = FUN_0768c8ac((long)unaff_x19 + 0x20c,0);
          uVar61 = FUN_074e70a4(*(undefined8 *)PTR_DAT_093376a8,uVar61,
                                *(undefined8 *)PTR_DAT_09337690,uVar19,0);
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_040d65a8(*unaff_x25);
          }
          FUN_0897e2a8(uVar61,0);
        }
        puVar9 = PTR_DAT_09337670;
        if ((*(int *)(unaff_x23 + 7) == 0) ||
           ((*(int *)(unaff_x23 + 7) == 1 && (in_stack_0000134c == 3)))) {
          pcVar31 = *(code **)(*unaff_x19 + 0x948);
          goto LAB_087ddb74;
        }
        lVar30 = *(long *)PTR_DAT_09337670;
        if (*(int *)(lVar30 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar30 = *(long *)puVar9;
        }
        plVar43 = (long *)PTR_DAT_093375b8;
        lVar30 = **(long **)(lVar30 + 0xb8);
        if (lVar30 == 0) goto LAB_087ddb5c;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_087ddd1c;
        iVar15 = *(int *)(lVar30 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x38 + 0x54) << 2;
        if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x60), lVar30 == 0))
        goto LAB_087ddb5c;
        if (*(int *)(*(long *)PTR_DAT_093375b8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if (*(int *)(lVar30 + 0x18) == 0) goto LAB_087ddd1c;
        FUN_0883b114(lVar30 + 0x20,0,0);
        fStack00000000000000c0 = (float)FUN_041ee300(0);
        iVar16 = (int)unaff_x19[0x53];
        lVar30 = unaff_x19[0xe6];
        in_stack_000000b8._4_4_ = fStack000000000000011c;
        if (iVar16 < 0x401) {
          if (iVar16 == 0x100) {
            if ((int)unaff_x19[0x62] == 5) {
              if (lVar30 == 0) goto LAB_087ddb5c;
              if ((*(uint *)(lVar30 + 0x18) & 0xfffffffe) == 0) goto LAB_087ddd1c;
              if ((unaff_x19[0x74] == 0) ||
                 (lVar34 = *(long *)(unaff_x19[0x74] + 0x58), lVar34 == 0)) goto LAB_087ddb5c;
              if (*(uint *)(lVar34 + 0x18) <= uStack0000000000000040) goto LAB_087ddd1c;
              fVar47 = *(float *)(lVar34 + (long)(int)uStack0000000000000040 * 0x14 + 0x28);
            }
            else {
              if (lVar30 == 0) goto LAB_087ddb5c;
              if ((*(uint *)(lVar30 + 0x18) & 0xfffffffe) == 0) goto LAB_087ddd1c;
              fVar47 = *(float *)((long)unaff_x19 + 0x4cc);
            }
            in_stack_000000b8._4_4_ = *(float *)(lVar30 + 0x34);
            fStack000000000000002c = (0.0 - fVar47) - fStack0000000000000028;
            fStack000000000000011c = *(float *)(lVar30 + 0x2c);
            fVar47 = *(float *)(lVar30 + 0x30);
LAB_087db34c:
            fStack000000000000011c = in_stack_00000030 + 0.0 + fStack000000000000011c;
            fVar47 = fVar47 + fStack000000000000002c;
          }
          else {
            if (iVar16 != 0x200) {
              if (iVar16 != 0x400) goto LAB_087db360;
              if ((int)unaff_x19[0x62] == 5) {
                if (lVar30 == 0) goto LAB_087ddb5c;
                if (*(int *)(lVar30 + 0x18) == 0) goto LAB_087ddd1c;
                if ((unaff_x19[0x74] == 0) ||
                   (lVar34 = *(long *)(unaff_x19[0x74] + 0x58), lVar34 == 0)) goto LAB_087ddb5c;
                if (*(uint *)(lVar34 + 0x18) <= uStack0000000000000040) goto LAB_087ddd1c;
                in_stack_00001348 =
                     *(float *)(lVar34 + (long)(int)uStack0000000000000040 * 0x14 + 0x30);
              }
              else {
                if (lVar30 == 0) goto LAB_087ddb5c;
                if (*(int *)(lVar30 + 0x18) == 0) goto LAB_087ddd1c;
              }
              in_stack_000000b8._4_4_ = *(float *)(lVar30 + 0x28);
              fStack000000000000002c = fStack000000000000002c + (0.0 - in_stack_00001348);
              fStack000000000000011c = *(float *)(lVar30 + 0x20);
              fVar47 = *(float *)(lVar30 + 0x24);
              goto LAB_087db34c;
            }
            if ((int)unaff_x19[0x62] != 5) {
              if (lVar30 == 0) goto LAB_087ddb5c;
              if ((*(int *)(lVar30 + 0x18) != 1) && (*(int *)(lVar30 + 0x18) != 0)) {
                fVar47 = *(float *)((long)unaff_x19 + 0x4cc);
                goto LAB_087db280;
              }
              goto LAB_087ddd1c;
            }
            if (lVar30 == 0) goto LAB_087ddb5c;
            if ((*(int *)(lVar30 + 0x18) == 1) || (*(int *)(lVar30 + 0x18) == 0)) goto LAB_087ddd1c;
            if ((unaff_x19[0x74] == 0) || (lVar34 = *(long *)(unaff_x19[0x74] + 0x58), lVar34 == 0))
            goto LAB_087ddb5c;
            if (*(uint *)(lVar34 + 0x18) <= uStack0000000000000040) goto LAB_087ddd1c;
            lVar34 = lVar34 + (long)(int)uStack0000000000000040 * 0x14;
            in_stack_000000b8._4_4_ = (*(float *)(lVar30 + 0x28) + *(float *)(lVar30 + 0x34)) * 0.5;
            fStack000000000000011c =
                 in_stack_00000030 + 0.0 +
                 ((float)*(undefined8 *)(lVar30 + 0x20) + (float)*(undefined8 *)(lVar30 + 0x2c)) *
                 0.5;
            fVar47 = (0.0 - ((fStack0000000000000028 + *(float *)(lVar34 + 0x28) +
                             *(float *)(lVar34 + 0x30)) - fStack000000000000002c) * 0.5) +
                     ((float)((ulong)*(undefined8 *)(lVar30 + 0x20) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(lVar30 + 0x2c) >> 0x20)) * 0.5;
          }
          in_stack_000000b8._4_4_ = in_stack_000000b8._4_4_ + 0.0;
          auVar70 = ZEXT416((uint)fVar47);
          fStack00000000000000c0 = fStack000000000000011c;
        }
        else if (iVar16 == 0x800) {
          if (lVar30 == 0) goto LAB_087ddb5c;
          if ((*(int *)(lVar30 + 0x18) == 1) || (*(int *)(lVar30 + 0x18) == 0)) goto LAB_087ddd1c;
          fStack000000000000011c = (*(float *)(lVar30 + 0x28) + *(float *)(lVar30 + 0x34)) * 0.5;
          fStack00000000000000c0 =
               ((float)*(undefined8 *)(lVar30 + 0x20) + (float)*(undefined8 *)(lVar30 + 0x2c)) * 0.5
               + in_stack_00000030 + 0.0;
          in_stack_000000b8._4_4_ = fStack000000000000011c + 0.0;
          auVar70 = ZEXT416((uint)(((float)((ulong)*(undefined8 *)(lVar30 + 0x20) >> 0x20) +
                                   (float)((ulong)*(undefined8 *)(lVar30 + 0x2c) >> 0x20)) * 0.5 +
                                  0.0));
        }
        else {
          if (iVar16 == 0x1000) {
            if (lVar30 == 0) goto LAB_087ddb5c;
            if ((*(int *)(lVar30 + 0x18) == 1) || (*(int *)(lVar30 + 0x18) == 0)) goto LAB_087ddd1c;
            fVar47 = *(float *)((long)unaff_x19 + 0x4fc);
            in_stack_00001348 = *(float *)((long)unaff_x19 + 0x4f4);
LAB_087db280:
            fStack0000000000000028 = fStack0000000000000028 + fVar47 + in_stack_00001348;
          }
          else {
            if (iVar16 != 0x2000) goto LAB_087db360;
            if (lVar30 == 0) goto LAB_087ddb5c;
            if ((*(int *)(lVar30 + 0x18) == 1) || (*(int *)(lVar30 + 0x18) == 0)) goto LAB_087ddd1c;
            fStack0000000000000028 = *(float *)(unaff_x19 + 0x9a) - fStack0000000000000028;
          }
          fStack000000000000011c = in_stack_00000030 + 0.0;
          auVar70._0_4_ =
               ((float)*(undefined8 *)(lVar30 + 0x24) + (float)*(undefined8 *)(lVar30 + 0x30)) * 0.5
               + (0.0 - (fStack0000000000000028 - fStack000000000000002c) * 0.5);
          auVar70._4_4_ =
               ((float)((ulong)*(undefined8 *)(lVar30 + 0x24) >> 0x20) +
               (float)((ulong)*(undefined8 *)(lVar30 + 0x30) >> 0x20)) * 0.5 + 0.0;
          auVar70._8_8_ = 0;
          fStack00000000000000c0 =
               fStack000000000000011c +
               (*(float *)(lVar30 + 0x20) + *(float *)(lVar30 + 0x2c)) * 0.5;
          in_stack_000000b8._4_4_ = auVar70._4_4_;
        }
LAB_087db360:
        auVar57 = auVar70;
        fStack0000000000000130 = (float)FUN_041ee300(0);
        auVar53 = auVar57;
        FUN_041ee300(0);
        if (unaff_x19[0xe8] == 0) goto LAB_087ddb5c;
        uVar61 = FUN_08c8ed2c(unaff_x19[0xe8],0);
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_040d65a8(*unaff_x28);
        }
        uVar23 = FUN_089cc398(uVar61,0,0);
        lVar30 = FUN_08816288();
        if (lVar30 == 0) goto LAB_087ddb5c;
        FUN_089de258(lVar30,0);
        *(float *)(unaff_x19 + 0xe5) = auVar53._0_4_;
        if (unaff_x19[0xe8] == 0) goto LAB_087ddb5c;
        iVar16 = FUN_08c8d3a4(unaff_x19[0xe8],0);
        if (unaff_x19[0xe8] == 0) goto LAB_087ddb5c;
        fVar48 = (float)FUN_08c8d6a8(unaff_x19[0xe8],0);
        uStack000000000000008c =
             FUN_0421d10c(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
        auVar58 = ZEXT816(0x3f800000);
        fVar47 = 1.0;
        fVar65 = 1.0;
        FUN_0421d10c(ZEXT816(0x3f800000),auVar58,0x3f800000,0x3f800000,0);
        if (*(int *)(*(long *)PTR_DAT_093375c0 + 0xe4) == 0) {
          thunk_FUN_040d65a8(*(long *)PTR_DAT_093375c0);
        }
        FUN_087d5b70(0);
        FUN_087f1664(&stack0x00001320,0x4000ffff,0);
        if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        lVar30 = unaff_x19[0x74];
        if (lVar30 == 0) goto LAB_087ddb5c;
        iVar17 = *(int *)(unaff_x23 + 7);
        if (iVar17 < 1) {
          fStack00000000000000fc = 0.0;
          iVar16 = 0;
          goto LAB_087dd578;
        }
        fVar66 = ABS(auVar53._0_4_);
        lVar30 = *(long *)(lVar30 + 0x38);
        fVar49 = 1.0;
        if ((uVar23 & 1) == 0) {
          fVar49 = fVar66;
        }
        if (lVar30 == 0) goto LAB_087ddb5c;
        bVar10 = false;
        fVar69 = 0.0;
        bVar6 = false;
        bVar7 = false;
        fStack00000000000000fc = 0.0;
        uVar14 = 0;
        uVar13 = 0;
        fStack0000000000000044 = 0.0;
        lVar34 = lVar30 + 0x20;
        bVar8 = false;
        fStack0000000000000060 = 0.0;
        fStack0000000000000134 = auVar57._0_4_;
        fStack0000000000000150 = *(float *)(*(long *)(*(long *)PTR_DAT_09337670 + 0xb8) + 0x1730);
        fStack00000000000000e8 = fStack00000000000000f8;
        fStack000000000000014c = 0.0;
        in_stack_00000180._4_4_ = 0.0;
        fStack0000000000000054 = 0.0;
        in_stack_000000a8._4_4_ = 0.0;
        fStack0000000000000050 = 0.0;
        fStack000000000000006c = fStack00000000000000f8;
        fVar68 = 0.0;
        in_stack_000000f0._4_4_ = in_stack_00000128._4_4_;
        fStack0000000000000064 = in_stack_00000128._4_4_;
        fStack0000000000000068 = in_stack_000000d8._4_4_;
        in_stack_00000098._4_4_ = fStack00000000000000f8;
        fStack00000000000000a0 = in_stack_00000128._4_4_;
        fStack0000000000000090 = in_stack_000000d8._4_4_;
        uVar28 = 0;
        goto LAB_087db574;
      }
      if (*(uint *)(lVar30 + 0x18) <= in_stack_00001318) goto LAB_087ddd1c;
      uVar13 = *(uint *)(lVar30 + (long)(int)in_stack_00001318 * 0x10 + 0x24);
      if (uVar13 == 0) goto LAB_087dadf8;
      if (5 < in_stack_000001c0) {
        uVar61 = FUN_0769683c(&stack0x0000134c,0);
        uVar19 = FUN_07676bc4(&stack0x00001318,0);
        uVar61 = FUN_074e70a4(*(undefined8 *)PTR_DAT_09337688,uVar61,*(undefined8 *)PTR_DAT_09337698
                              ,uVar19,0);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_040d65a8(*unaff_x25);
        }
        FUN_0897e8f4(uVar61,0);
        in_stack_00001338 = CONCAT44(3,*(undefined4 *)(unaff_x23 + 7));
      }
      in_stack_0000134c = uVar13;
    } while (uVar13 == 0x1a);
    if ((uVar13 == 0x3c) && (*(char *)((long)unaff_x19 + 0x33a) != '\0')) {
      *(undefined1 *)((long)unaff_x19 + 0x469) = 1;
      *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
      uVar20 = FUN_0881d354();
      if (((uVar20 & 1) != 0) &&
         (in_stack_00001318 = in_stack_0000127c, *(int *)((long)unaff_x19 + 0x65c) == 0))
      goto LAB_087d7090;
    }
    else {
      if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0))
      break;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x23 + 7)) goto LAB_087ddd1c;
      lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x23 + 7) * (long)(int)unaff_w29;
      *(undefined4 *)((long)unaff_x19 + 0x65c) = *(undefined4 *)(lVar30 + 0x20);
      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar30 + 0x50);
      unaff_x19[0x20] = *(long *)(lVar30 + 0x40);
      thunk_FUN_040ec700(unaff_x19 + 0x20);
    }
    if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0)) break;
    unaff_w21 = *(uint *)(in_stack_000001d0 + 7);
    if (*(uint *)(lVar30 + 0x18) <= unaff_w21) goto LAB_087ddd1c;
    lVar34 = lVar30 + 0x20;
    uVar28 = (uint)in_stack_00001338;
    lVar36 = unaff_x19[0x24];
    _uStack00000000000001b0 = in_stack_00001338 & 0xffffffff;
    cVar25 = *(char *)(lVar34 + (long)(int)unaff_w21 * (long)(int)unaff_w29 + 0x34);
    *(undefined1 *)((long)unaff_x19 + 0x469) = 0;
    uVar14 = unaff_w21;
    if (uVar28 == unaff_w21) {
      uVar13 = (uint)(in_stack_00001338 >> 0x20);
      *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
      if (uVar13 == 0x2026) {
        *(long *)(lVar34 + (long)(int)unaff_w21 * (long)(int)unaff_w29 + 0x10) = unaff_x19[0xcd];
        thunk_FUN_040ec700();
        if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0))
        break;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
        lVar30 = lVar30 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29;
        *(long *)(lVar30 + 0x40) = unaff_x19[0xce];
        *(undefined4 *)(lVar30 + 0x20) = 0;
        thunk_FUN_040ec700();
        if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0))
        break;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
        *(long *)(lVar30 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29 + 0x48
                 ) = unaff_x19[0xcf];
        thunk_FUN_040ec700();
        if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0))
        break;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
        *(int *)(lVar30 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29 + 0x50)
             = (int)unaff_x19[0xd0];
        puVar9 = PTR_DAT_09337670;
        lVar30 = *(long *)PTR_DAT_09337670;
        if (*(int *)(lVar30 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar30 = *(long *)puVar9;
        }
        lVar30 = **(long **)(lVar30 + 0xb8);
        if (lVar30 == 0) break;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_087ddd1c;
        lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x38;
        *(int *)(lVar30 + 0x54) = *(int *)(lVar30 + 0x54) + 1;
        *(undefined1 *)(unaff_x19 + 0x65) = 1;
        in_stack_00001338 = CONCAT44(3,*(uint *)((long)unaff_x19 + 0x4a4) + 1);
        uVar14 = *(uint *)((long)unaff_x19 + 0x4a4);
      }
      else if (uVar13 == 3) {
        if ((unaff_x19[0x20] == 0) || (lVar21 = FUN_087f97a8(unaff_x19[0x20],0), lVar21 == 0))
        break;
        uVar61 = System_Array_EmptyInternalEnumerator<MeshGenerator_BackgroundRepeatInstance>__MoveNext
                           (lVar21,3,*(undefined8 *)PTR_DAT_09337590);
        if (*(uint *)(lVar30 + 0x18) <= unaff_w21) goto LAB_087ddd1c;
        *(undefined8 *)(lVar34 + (long)(int)unaff_w21 * (long)(int)unaff_w29 + 0x10) = uVar61;
        thunk_FUN_040ec700();
        *(undefined1 *)(unaff_x19 + 0x65) = 1;
        uVar14 = *(uint *)((long)unaff_x19 + 0x4a4);
      }
    }
    in_stack_0000134c = uVar13;
    if (((int)uVar14 < *(int *)((long)unaff_x19 + 0x35c)) && (uVar13 != 3)) {
      if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0))
      break;
      if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_087ddd1c;
      lVar30 = lVar30 + (long)(int)uVar14 * (long)(int)unaff_w29;
      *(undefined1 *)(lVar30 + 400) = 0;
      *(undefined2 *)(lVar30 + 0x24) = 0x200b;
      *(undefined4 *)(lVar30 + 0x5c) = 0;
      *(uint *)(in_stack_000001d0 + 7) = uVar14 + 1;
      unaff_x23 = in_stack_000001d0;
      goto LAB_087d7090;
    }
    fStack000000000000016c = 1.0;
    if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
      uVar14 = *(uint *)((long)unaff_x19 + 0x284);
      if ((uVar14 >> 4 & 1) == 0) {
        if ((uVar14 >> 3 & 1) == 0) {
          if ((uVar14 >> 5 & 1) != 0) {
            if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar20 = FUN_075da814(uVar13,0);
            if ((uVar20 & 1) != 0) {
              if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              uVar13 = FUN_075daa9c(uVar13,0);
              fStack000000000000016c = fStack0000000000000024;
              goto LAB_087d6cec;
            }
          }
        }
        else {
          if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar20 = FUN_075da774(uVar13,0);
          if ((uVar20 & 1) != 0) {
            if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar13 = FUN_075dac14(uVar13,0);
            goto LAB_087d6cec;
          }
        }
      }
      else {
        if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar20 = FUN_075da814(uVar13,0);
        if ((uVar20 & 1) != 0) {
          if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar13 = FUN_075daa9c(uVar13,0);
LAB_087d6cec:
          in_stack_0000134c = uVar13 & 0xffff;
        }
      }
    }
    if (unaff_x19[0x20] == 0) break;
    memmove(&stack0x000012b0,(void *)(unaff_x19[0x20] + 0x28),0x60);
    if (*(int *)((long)unaff_x19 + 0x65c) == 1) {
      lVar30 = FUN_088161d4();
      if ((lVar30 == 0) || (lVar30 = *(long *)(lVar30 + 0x38), lVar30 == 0)) break;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
      plVar43 = *(long **)(lVar30 + (long)(int)*(uint *)(in_stack_000001d0 + 7) *
                                    (long)(int)unaff_w29 + 0x30);
      unaff_x23 = in_stack_000001d0;
      if (plVar43 == (long *)0x0) goto LAB_087d7090;
      bVar11 = *(byte *)(*(long *)PTR_DAT_093375d8 + 0x130);
      if ((*(byte *)(*plVar43 + 0x130) < bVar11) ||
         (*(long *)(*(long *)(*plVar43 + 200) + (ulong)bVar11 * 8 + -8) != *(long *)PTR_DAT_093375d8
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0(plVar43);
      }
      plVar26 = (long *)plVar43[3];
      if (plVar26 == (long *)0x0) {
        plVar26 = (long *)0x0;
        *_fStack00000000000000e8 = 0;
      }
      else {
        lVar30 = *(long *)PTR_DAT_093375d0;
        bVar11 = *(byte *)(lVar30 + 0x130);
        if (*(byte *)(*plVar26 + 0x130) < bVar11) {
          plVar35 = (long *)0x0;
        }
        else {
          plVar35 = plVar26;
          if (*(long *)(*(long *)(*plVar26 + 200) + (ulong)bVar11 * 8 + -8) != lVar30) {
            plVar35 = (long *)0x0;
          }
        }
        *_fStack00000000000000e8 = (long)plVar35;
        if (*(byte *)(*plVar26 + 0x130) < bVar11) {
          plVar26 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar26 + 200) + (ulong)bVar11 * 8 + -8) != lVar30) {
          plVar26 = (long *)0x0;
        }
      }
      thunk_FUN_040ec700(_fStack00000000000000e8,plVar26);
      lVar30 = plVar43[5];
      *(int *)((long)unaff_x19 + 0x6bc) = (int)lVar30;
      puVar9 = PTR_DAT_09337670;
      if (in_stack_0000134c == 0x3c) {
        in_stack_0000134c = (int)lVar30 + 0xe000;
      }
      else {
        lVar30 = *(long *)PTR_DAT_09337670;
        if (*(int *)(lVar30 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar30 = *(long *)puVar9;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1d4) = *(undefined4 *)(*(long *)(lVar30 + 0xb8) + 0x68);
      }
      fVar48 = *_fStack0000000000000090;
      fVar47 = (float)FUN_08a73b44(&stack0x000012b0,0);
      fVar65 = (float)FUN_08a73b4c(&stack0x000012b0,0);
      if (*_fStack00000000000000e8 == 0) break;
      fVar65 = in_stack_00000120 * (fVar48 / fVar47) * fVar65;
      memmove(&stack0x00001210,(void *)(*_fStack00000000000000e8 + 0x28),0x60);
      fVar47 = (float)FUN_08a73b44(&stack0x00001210,0);
      fVar48 = *_fStack0000000000000090;
      if (fVar47 <= 0.0) {
        fVar47 = (float)FUN_08a73b44(&stack0x000012b0,0);
        fVar49 = (float)FUN_08a73b4c(&stack0x000012b0,0);
        fVar66 = (float)FUN_08a73b74(&stack0x000012b0,0);
        if (plVar43[4] == 0) break;
        FUN_08a74008(&stack0x00001350,plVar43[4],0);
        fVar68 = (float)FUN_08a73e38(&stack0x000011f0,0);
        if (plVar43[4] == 0) break;
        fVar69 = *(float *)((long)plVar43 + 0x2c);
        fVar48 = in_stack_00000120 * (fVar48 / fVar47) * fVar49;
        fVar47 = (float)FUN_08a74044(plVar43[4],0);
        fVar47 = fVar48 * (fVar66 / fVar68) * fVar69 * fVar47;
        fStack0000000000000150 = 0.0;
        if (fVar47 != 0.0) {
          fStack0000000000000150 = fVar48 / fVar47;
        }
        fStack0000000000000154 = (float)FUN_08a73b74(&stack0x000012b0,0);
        fStack0000000000000154 = fStack0000000000000154 * fStack0000000000000150;
        fVar48 = (float)FUN_08a73b9c(&stack0x000012b0,0);
        fVar49 = *(float *)((long)unaff_x19 + 0x43c);
        fVar66 = (float)FUN_08a73b4c(&stack0x000012b0,0);
        fVar66 = fVar65 * fVar48 * fVar49 * fVar66;
        fVar65 = (float)FUN_08a73ba4(&stack0x000012b0,0);
        fStack0000000000000150 = fStack0000000000000150 * fVar65;
      }
      else {
        fVar47 = (float)FUN_08a73b44(&stack0x00001210,0);
        fVar49 = (float)FUN_08a73b4c(&stack0x00001210,0);
        if (plVar43[4] == 0) break;
        fVar68 = *(float *)((long)plVar43 + 0x2c);
        fVar66 = (float)FUN_08a74044(plVar43[4],0);
        fVar47 = in_stack_00000120 * (fVar48 / fVar47) * fVar49 * fVar68 * fVar66;
        fStack0000000000000154 = (float)FUN_08a73b74(&stack0x00001210,0);
        fVar48 = (float)FUN_08a73b9c(&stack0x00001210,0);
        fVar49 = *(float *)((long)unaff_x19 + 0x43c);
        fVar66 = (float)FUN_08a73b4c(&stack0x00001210,0);
        fVar66 = fVar65 * fVar48 * fVar49 * fVar66;
        fStack0000000000000150 = (float)FUN_08a73ba4(&stack0x00001210,0);
      }
      unaff_x19[0xcc] = (long)plVar43;
      thunk_FUN_040ec700(in_stack_00000188,plVar43);
      if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0))
      break;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
      lVar30 = lVar30 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29;
      *(long *)(lVar30 + 0x40) = unaff_x19[0x20];
      *(undefined4 *)(lVar30 + 0x20) = 1;
      *(float *)(lVar30 + 0x15c) = fVar47;
      thunk_FUN_040ec700();
      lVar30 = unaff_x19[0x74];
      if ((lVar30 == 0) || (lVar34 = *(long *)(lVar30 + 0x38), lVar34 == 0)) break;
      if (*(uint *)(lVar34 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
      unaff_s13 = 0.0;
      *(int *)(lVar34 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29 + 0x50) =
           (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar36;
LAB_087d742c:
      in_stack_00000180._4_4_ = 0.0;
      if (in_stack_0000134c != 3 && in_stack_0000134c != 0xad) {
        in_stack_00000180._4_4_ = fVar47;
      }
    }
    else {
      lVar30 = unaff_x19[0x74];
      if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
        if ((lVar30 == 0) || (lVar30 = *(long *)(lVar30 + 0x38), lVar30 == 0)) break;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
        *in_stack_00000188 =
             *(long *)(lVar30 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29 +
                      0x30);
        thunk_FUN_040ec700(in_stack_00000188);
        unaff_x23 = in_stack_000001d0;
        if (*in_stack_00000188 == 0) goto LAB_087d7090;
        if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0))
        break;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
        unaff_x19[0x20] =
             *(long *)(lVar30 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29 +
                      0x40);
        thunk_FUN_040ec700(unaff_x19 + 0x20);
        if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0))
        break;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
        unaff_x19[0x23] =
             *(long *)(lVar30 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29 +
                      0x48);
        thunk_FUN_040ec700(unaff_x19 + 0x23);
        if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0))
        break;
        uVar14 = *(uint *)(in_stack_000001d0 + 7);
        uVar13 = *(uint *)(lVar30 + 0x18);
        if (uVar13 <= uVar14) goto LAB_087ddd1c;
        *(undefined4 *)(unaff_x19 + 0x24) =
             *(undefined4 *)(lVar30 + 0x20 + (long)(int)uVar14 * (long)(int)unaff_w29 + 0x30);
        pfVar33 = _fStack0000000000000090;
        if (uVar28 == unaff_w21) {
          lVar34 = unaff_x19[0x91];
          if (lVar34 == 0) break;
          if (*(uint *)(lVar34 + 0x18) <= in_stack_00001318) goto LAB_087ddd1c;
          if ((*(int *)(lVar34 + (long)(int)in_stack_00001318 * 0x10 + 0x24) == 10) &&
             (uVar14 != *(uint *)(unaff_x19 + 0x95))) {
            if (uVar13 <= uVar14 - 1) goto LAB_087ddd1c;
            pfVar33 = (float *)(lVar30 + 0x20 + (long)(int)(uVar14 - 1) * (long)(int)unaff_w29 +
                               0x38);
          }
        }
        fVar49 = *pfVar33;
        fVar65 = (float)FUN_08a73b44(&stack0x000012b0,0);
        fVar48 = (float)FUN_08a73b4c(&stack0x000012b0,0);
        if (uVar28 == unaff_w21) {
          fStack0000000000000150 = 0.0;
          fStack0000000000000154 = 0.0;
          if (in_stack_0000134c != 0x2026) goto LAB_087d6f78;
        }
        else {
LAB_087d6f78:
          fStack0000000000000154 = (float)FUN_08a73b74(&stack0x000012b0,0);
          fStack0000000000000150 = (float)FUN_08a73ba4(&stack0x000012b0,0);
        }
        lVar30 = unaff_x19[0xcc];
        if ((lVar30 == 0) || (*(long *)(lVar30 + 0x20) == 0)) break;
        fVar69 = *(float *)((long)unaff_x19 + 0x43c);
        fVar55 = *(float *)(lVar30 + 0x2c);
        fVar47 = (float)FUN_08a74044(*(long *)(lVar30 + 0x20),0);
        fVar68 = (float)FUN_08a73b9c(&stack0x000012b0,0);
        fVar60 = *(float *)((long)unaff_x19 + 0x43c);
        fVar66 = (float)FUN_08a73b4c(&stack0x000012b0,0);
        lVar30 = unaff_x19[0x74];
        if ((lVar30 == 0) || (lVar34 = *(long *)(lVar30 + 0x38), lVar34 == 0)) break;
        if (*(uint *)(lVar34 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
        lVar34 = lVar34 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29;
        *(undefined4 *)(lVar34 + 0x20) = 0;
        fVar65 = in_stack_00000120 * ((fStack000000000000016c * fVar49) / fVar65) * fVar48;
        fVar47 = fVar65 * fVar69 * fVar55 * fVar47;
        fVar66 = fVar65 * fVar68 * fVar60 * fVar66;
        *(float *)(lVar34 + 0x15c) = fVar47;
        uVar13 = *(uint *)(unaff_x19 + 0x24);
        if (uVar13 == 0) {
          unaff_s15 = 1.0;
          unaff_s13 = *(float *)(unaff_x19 + 0xc6);
          goto LAB_087d742c;
        }
        unaff_s15 = 1.0;
        lVar34 = unaff_x19[0xe4];
        if (lVar34 == 0) break;
        if (*(uint *)(lVar34 + 0x18) <= uVar13) goto LAB_087ddd1c;
        lVar34 = *(long *)(lVar34 + (long)(int)uVar13 * 8 + 0x20);
        if (lVar34 == 0) break;
        unaff_s13 = *(float *)(lVar34 + 0x10c);
        goto LAB_087d742c;
      }
      in_stack_00000180._4_4_ = 0.0;
      if (in_stack_0000134c != 3 && in_stack_0000134c != 0xad) {
        in_stack_00000180._4_4_ = fVar47;
      }
      fVar66 = 0.0;
      fStack0000000000000154 = 0.0;
      fStack0000000000000150 = 0.0;
      if (lVar30 == 0) break;
    }
    lVar30 = *(long *)(lVar30 + 0x38);
    if (lVar30 == 0) break;
    if (*(uint *)(lVar30 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
    lVar30 = lVar30 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29;
    *(short *)(lVar30 + 0x24) = (short)in_stack_0000134c;
    *(int *)(lVar30 + 0x58) = (int)unaff_x19[0x42];
    *(int *)(lVar30 + 0x160) = (int)unaff_x19[0xa0];
    if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0)) break;
    if (*(uint *)(lVar30 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
    *(int *)(lVar30 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29 + 0x164) =
         (int)unaff_x19[0x2b];
    if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0)) break;
    if (*(uint *)(lVar30 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
    *(undefined4 *)
     (lVar30 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29 + 0x16c) =
         *(undefined4 *)((long)unaff_x19 + 0x15c);
    if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0)) break;
    if (*(uint *)(lVar30 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
    lVar30 = lVar30 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29;
    auVar70 = *in_stack_000000b0;
    *(undefined4 *)(lVar30 + 0x188) = *(undefined4 *)in_stack_000000b0[1];
    *(long *)(lVar30 + 0x180) = auVar70._8_8_;
    *(long *)(lVar30 + 0x178) = auVar70._0_8_;
    if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0)) break;
    if (*(uint *)(lVar30 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
    lVar30 = lVar30 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29;
    lVar34 = *(long *)(lVar30 + 0x38);
    *(undefined4 *)(lVar30 + 0x18c) = *(undefined4 *)((long)unaff_x19 + 0x284);
    if (lVar34 == 0) {
      if ((*in_stack_00000188 == 0) || (lVar30 = *(long *)(*in_stack_00000188 + 0x20), lVar30 == 0))
      break;
      FUN_08a74008(&stack0x00001350,lVar30,0);
    }
    else {
      FUN_08a74008(&stack0x000005d0,lVar34,0);
    }
    if (in_stack_0000134c >> 0x10 == 0) {
      if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar13 = FUN_075d81a8(in_stack_0000134c,0);
      unaff_w26 = uVar13 & 1;
    }
    else {
      unaff_w26 = 0;
    }
    in_stack_000000e0 = *(float *)(unaff_x19 + 0x5a);
    if (((in_stack_000000a8 & 0x100000000) != 0) && (*(int *)((long)unaff_x19 + 0x65c) == 0)) {
      if (*in_stack_00000188 == 0) break;
      iVar15 = *(int *)(in_stack_000001d0 + 7);
      uVar13 = *(uint *)(*in_stack_00000188 + 0x28);
      if (iVar15 < (int)fStack0000000000000050) {
        if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0))
        break;
        uVar14 = iVar15 + 1;
        if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_087ddd1c;
        if (*(int *)(lVar30 + 0x20 + (long)(int)uVar14 * (long)(int)unaff_w29) == 0) {
          lVar30 = *(long *)(lVar30 + 0x20 + (long)(int)uVar14 * (long)(int)unaff_w29 + 0x10);
          if ((((lVar30 == 0) || (unaff_x19[0x20] == 0)) ||
              (lVar34 = *(long *)(unaff_x19[0x20] + 0x178), lVar34 == 0)) ||
             (lVar34 = *(long *)(lVar34 + 0x40), lVar34 == 0)) break;
          uVar20 = FUN_06fba39c(lVar34,uVar13 | *(int *)(lVar30 + 0x28) << 0x10,&stack0x000011c0,
                                *(undefined8 *)PTR_DAT_09337578);
          if ((uVar20 & 1) != 0) {
            FUN_08a786f8(&stack0x00001350,&stack0x000011c0,0);
            UnityEngine_UIElements_UIR_DetachedAllocator___ctor(&stack0x000011a0,0);
            uVar20 = FUN_08a78734(&stack0x000011c0,0);
            if ((uVar20 & 0x100) != 0) {
              in_stack_000000e0 = 0.0;
            }
          }
        }
        iVar15 = *(int *)(in_stack_000001d0 + 7);
      }
      if (0 < iVar15) {
        if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0))
        break;
        if (*(uint *)(lVar30 + 0x18) <= iVar15 - 1U) goto LAB_087ddd1c;
        lVar30 = *(long *)(lVar30 + (ulong)(iVar15 - 1U) * (ulong)unaff_w29 + 0x30);
        if (lVar30 == 0) break;
        uVar14 = *(uint *)(lVar30 + 0x28);
        lVar30 = FUN_088161d4();
        if ((lVar30 == 0) || (lVar30 = *(long *)(lVar30 + 0x38), lVar30 == 0)) break;
        if (*(uint *)(lVar30 + 0x18) <= *(int *)(in_stack_000001d0 + 7) - 1U) goto LAB_087ddd1c;
        if (*(int *)(lVar30 + (long)(int)(*(int *)(in_stack_000001d0 + 7) - 1U) *
                              (long)(int)unaff_w29 + 0x20) == 0) {
          if (((unaff_x19[0x20] == 0) || (lVar30 = *(long *)(unaff_x19[0x20] + 0x178), lVar30 == 0))
             || (lVar30 = *(long *)(lVar30 + 0x40), lVar30 == 0)) break;
          uVar20 = FUN_06fba39c(lVar30,uVar14 | uVar13 << 0x10,&stack0x000011c0,
                                *(undefined8 *)PTR_DAT_09337578);
          if ((uVar20 & 1) != 0) {
            FUN_08a78720(&stack0x00001350,&stack0x000011c0,0);
            UnityEngine_UIElements_UIR_DetachedAllocator___ctor(&stack0x000011a0,0);
            FUN_08a783ac(0);
            uVar20 = FUN_08a78734(&stack0x000011c0,0);
            if ((uVar20 & 0x100) != 0) {
              in_stack_000000e0 = 0.0;
            }
          }
        }
      }
    }
    if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0)) break;
    uVar13 = *(uint *)(in_stack_000001d0 + 7);
    uVar46 = FUN_08a78388(&stack0x00001280,0);
    if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_087ddd1c;
    *(undefined4 *)(lVar30 + (long)(int)uVar13 * (long)(int)unaff_w29 + 0x154) = uVar46;
    if (*(int *)(*(long *)PTR_DAT_093375f8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar20 = FUN_08847bd4(in_stack_0000134c,0);
    uVar13 = *(uint *)(in_stack_000001d0 + 7);
    uVar39 = (ulong)uVar13;
    if ((uVar20 & 1) == 0) {
      if (0 < (int)uVar13) {
        if ((((uVar23 & 1) == 0) ||
            (uVar14 = *(uint *)((long)unaff_x19 + 0x32c), uVar14 == 0x80000000)) ||
           (uVar14 != uVar13 - 1)) {
          if ((in_stack_00000048 & 1) == 0) {
            bVar10 = false;
          }
          else {
            lVar30 = uVar39 * unaff_w29 + 0x144;
            uVar41 = uVar39;
            do {
              uVar41 = uVar41 - 1;
              iVar15 = (int)uVar39;
              uVar13 = iVar15 - 1;
              uVar39 = (ulong)uVar13;
              if ((iVar15 < 1) || (uVar41 == *(uint *)((long)unaff_x19 + 0x32c))) {
                bVar10 = false;
                goto LAB_087d7b64;
              }
              if ((unaff_x19[0x74] == 0) ||
                 (lVar34 = *(long *)(unaff_x19[0x74] + 0x38), lVar34 == 0)) goto LAB_087ddb5c;
              if (*(uint *)(lVar34 + 0x18) <= uVar41) goto LAB_087ddd1c;
              lVar34 = *(long *)(lVar34 + lVar30 + -0x28c);
              if ((lVar34 == 0) || (lVar34 = *(long *)(lVar34 + 0x20), lVar34 == 0))
              goto LAB_087ddb5c;
              uVar14 = FUN_08a73ff8(lVar34,0);
              if ((*in_stack_00000188 == 0) ||
                 (((unaff_x19[0x20] == 0 ||
                   (lVar34 = *(long *)(unaff_x19[0x20] + 0x178), lVar34 == 0)) ||
                  (lVar34 = *(long *)(lVar34 + 0x50), lVar34 == 0)))) goto LAB_087ddb5c;
              uVar22 = FUN_06fcaab8(lVar34,uVar14 | *(int *)(*in_stack_00000188 + 0x28) << 0x10,
                                    &stack0x00001170,*(undefined8 *)PTR_DAT_09337588);
              lVar30 = lVar30 + -0x178;
            } while ((uVar22 & 1) == 0);
            if ((unaff_x19[0x74] == 0) || (lVar34 = *(long *)(unaff_x19[0x74] + 0x38), lVar34 == 0))
            break;
            if (*(uint *)(lVar34 + 0x18) <= uVar13) goto LAB_087ddd1c;
            FUN_08a78370(((*(float *)(lVar34 + lVar30 + -0xc) - *(float *)(unaff_x19 + 0xcb)) /
                          in_stack_00000180._4_4_ + in_stack_00001174) - in_stack_00001180,
                         in_stack_00001174,in_stack_00001180,&stack0x00001280,0);
            FUN_08a78380(&stack0x00001280,0);
            in_stack_000000e0 = 0.0;
            bVar10 = true;
          }
LAB_087d7b64:
          if ((uVar23 & 1) != 0) {
            uVar13 = *(uint *)((long)unaff_x19 + 0x32c);
            if (uVar13 == 0x80000000) {
              bVar10 = true;
            }
            if (!bVar10) {
              if ((unaff_x19[0x74] == 0) ||
                 (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0)) break;
              if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_087ddd1c;
              lVar30 = *(long *)(lVar30 + (long)(int)uVar13 * (long)(int)unaff_w29 + 0x30);
              if ((lVar30 == 0) || (lVar30 = *(long *)(lVar30 + 0x20), lVar30 == 0)) break;
              uVar13 = FUN_08a73ff8(lVar30,0);
              if ((*in_stack_00000188 == 0) ||
                 (((unaff_x19[0x20] == 0 ||
                   (lVar30 = *(long *)(unaff_x19[0x20] + 0x178), lVar30 == 0)) ||
                  (lVar30 = *(long *)(lVar30 + 0x48), lVar30 == 0)))) break;
              uVar39 = FUN_06fc3f48(lVar30,uVar13 | *(int *)(*in_stack_00000188 + 0x28) << 0x10,
                                    &stack0x00001158,*(undefined8 *)PTR_DAT_09337580);
              if ((uVar39 & 1) != 0) {
                if ((unaff_x19[0x74] != 0) &&
                   (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 != 0)) {
                  if (*(uint *)((long)unaff_x19 + 0x32c) < *(uint *)(lVar30 + 0x18)) {
                    FUN_08a78370((in_stack_0000115c +
                                 (*(float *)(lVar30 + (long)(int)*(uint *)((long)unaff_x19 + 0x32c)
                                                      * (long)(int)unaff_w29 + 0x138) -
                                 *(float *)(unaff_x19 + 0xcb)) / in_stack_00000180._4_4_) -
                                 in_stack_00001168,in_stack_0000115c,in_stack_00001168,
                                 &stack0x00001280,0);
                    goto LAB_087d7c60;
                  }
                  goto LAB_087ddd1c;
                }
                break;
              }
            }
          }
        }
        else {
          if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0))
          break;
          if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_087ddd1c;
          lVar30 = *(long *)(lVar30 + (long)(int)uVar14 * (long)(int)unaff_w29 + 0x30);
          if ((lVar30 == 0) || (lVar30 = *(long *)(lVar30 + 0x20), lVar30 == 0)) break;
          uVar13 = FUN_08a73ff8(lVar30,0);
          if ((*in_stack_00000188 == 0) ||
             (((unaff_x19[0x20] == 0 || (lVar30 = *(long *)(unaff_x19[0x20] + 0x178), lVar30 == 0))
              || (lVar30 = *(long *)(lVar30 + 0x48), lVar30 == 0)))) break;
          uVar39 = FUN_06fc3f48(lVar30,uVar13 | *(int *)(*in_stack_00000188 + 0x28) << 0x10,
                                &stack0x00001188,*(undefined8 *)PTR_DAT_09337580);
          if ((uVar39 & 1) != 0) {
            if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0))
            break;
            if (*(uint *)(lVar30 + 0x18) <= *(uint *)((long)unaff_x19 + 0x32c)) goto LAB_087ddd1c;
            FUN_08a78370((in_stack_0000118c +
                         (*(float *)(lVar30 + (long)(int)*(uint *)((long)unaff_x19 + 0x32c) *
                                              (long)(int)unaff_w29 + 0x138) -
                         *(float *)(unaff_x19 + 0xcb)) / in_stack_00000180._4_4_) -
                         in_stack_00001198,in_stack_0000118c,in_stack_00001198,&stack0x00001280,0);
LAB_087d7c60:
            FUN_08a78380(&stack0x00001280,0);
            in_stack_000000e0 = 0.0;
          }
        }
      }
    }
    else {
      *(uint *)((long)unaff_x19 + 0x32c) = uVar13;
    }
    fVar65 = (float)FUN_08a78378(&stack0x00001280,0);
    fVar48 = (float)FUN_08a78378(&stack0x00001280,0);
    if ((char)unaff_x19[0x1e] != '\0') {
      fVar68 = *(float *)(unaff_x19 + 0xcb);
      fVar49 = (float)FUN_08a73e50(&stack0x00001290,0);
      fVar68 = fVar68 - in_stack_00000180._4_4_ *
                        fVar49 * (unaff_s15 - *(float *)(unaff_x19 + 0x60));
      *(float *)(unaff_x19 + 0xcb) = fVar68;
      if ((unaff_w26 != 0) || (in_stack_0000134c == 0x200b)) {
        *(float *)(unaff_x19 + 0xcb) = fVar68 - in_stack_00000100 * *(float *)(unaff_x19 + 0x5c);
      }
    }
    fVar49 = *(float *)(unaff_x19 + 0x5b);
    in_stack_00000098._4_4_ = 0.0;
    if (fVar49 != 0.0) {
      if (((*(char *)((long)unaff_x19 + 0x2dc) == '\0') || (0x3a < in_stack_0000134c)) ||
         (fVar68 = 0.25, (1L << ((ulong)in_stack_0000134c & 0x3f) & 0x400500000000000U) == 0)) {
        fVar68 = 0.5;
      }
      fVar69 = (float)FUN_08a73e30(&stack0x00001290,0);
      fVar55 = (float)FUN_08a73e40(&stack0x00001290,0);
      in_stack_00000098._4_4_ =
           (unaff_s15 - *(float *)(unaff_x19 + 0x60)) *
           (fVar49 * fVar68 - in_stack_00000180._4_4_ * (fVar69 * 0.5 + fVar55));
      *(float *)(unaff_x19 + 0xcb) = in_stack_00000098._4_4_ + *(float *)(unaff_x19 + 0xcb);
    }
    if (((cVar25 == '\0') && (*(int *)((long)unaff_x19 + 0x65c) == 0)) &&
       ((*(byte *)((long)unaff_x19 + 0x284) & 1) != 0)) {
      lVar30 = unaff_x19[0x23];
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar39 = FUN_089ca704(lVar30,0,0);
      fVar68 = 0.0;
      if ((uVar39 & 1) != 0) {
        lVar30 = unaff_x19[0x23];
        if (*(int *)(*(long *)PTR_DAT_093375a8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        plVar43 = (long *)PTR_DAT_093375a8;
        if (lVar30 == 0) break;
        uVar39 = FUN_08995264(lVar30,*(undefined4 *)
                                      (*(long *)(*(long *)PTR_DAT_093375a8 + 0xb8) + 0x6c),0);
        if ((uVar39 & 1) != 0) {
          lVar30 = unaff_x19[0x23];
          if (*(int *)(*plVar43 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            plVar43 = (long *)PTR_DAT_093375a8;
          }
          if (lVar30 == 0) break;
          fVar49 = (float)thunk_FUN_08997afc(lVar30,*(undefined4 *)
                                                     (*(long *)(*plVar43 + 0xb8) + 0x6c),0);
          if ((unaff_x19[0x20] == 0) || (unaff_x19[0x23] == 0)) break;
          fVar69 = *(float *)(unaff_x19[0x20] + 0x1a8);
          fVar68 = (float)thunk_FUN_08997afc(unaff_x19[0x23],
                                             *(undefined4 *)
                                              (*(long *)(*(long *)PTR_DAT_093375a8 + 0xb8) + 0xe4),0
                                            );
          fVar68 = fVar68 * fVar49 * fVar69 * 0.25;
          if (fVar49 < unaff_s13 + fVar68) {
            unaff_s13 = fVar49 - fVar68;
          }
        }
      }
      if (unaff_x19[0x20] == 0) break;
      fStack00000000000000fc = *(float *)(unaff_x19[0x20] + 0x1ac);
    }
    else {
      lVar30 = unaff_x19[0x23];
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar39 = FUN_089ca704(lVar30,0,0);
      fStack00000000000000fc = 0.0;
      if ((uVar39 & 1) != 0) {
        lVar30 = unaff_x19[0x23];
        if (*(int *)(*(long *)PTR_DAT_093375a8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        plVar43 = (long *)PTR_DAT_093375a8;
        if (lVar30 == 0) break;
        uVar39 = FUN_08995264(lVar30,*(undefined4 *)
                                      (*(long *)(*(long *)PTR_DAT_093375a8 + 0xb8) + 0x6c),0);
        if ((uVar39 & 1) != 0) {
          lVar30 = unaff_x19[0x23];
          if (*(int *)(*plVar43 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            plVar43 = (long *)PTR_DAT_093375a8;
          }
          if (lVar30 == 0) break;
          uVar39 = FUN_08995264(lVar30,*(undefined4 *)(*(long *)(*plVar43 + 0xb8) + 0xe4),0);
          if ((uVar39 & 1) != 0) {
            lVar30 = unaff_x19[0x23];
            if (*(int *)(*plVar43 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              plVar43 = (long *)PTR_DAT_093375a8;
            }
            if (lVar30 != 0) {
              fVar49 = (float)thunk_FUN_08997afc(lVar30,*(undefined4 *)
                                                         (*(long *)(*plVar43 + 0xb8) + 0x6c),0);
              if ((unaff_x19[0x20] != 0) && (unaff_x19[0x23] != 0)) {
                fVar69 = *(float *)(unaff_x19[0x20] + 0x1a0);
                fVar68 = (float)thunk_FUN_08997afc(unaff_x19[0x23],
                                                   *(undefined4 *)
                                                    (*(long *)(*(long *)PTR_DAT_093375a8 + 0xb8) +
                                                    0xe4),0);
                fVar68 = fVar68 * fVar49 * fVar69 * 0.25;
                if (fVar49 < unaff_s13 + fVar68) {
                  unaff_s13 = fVar49 - fVar68;
                }
                goto LAB_087d8014;
              }
            }
            break;
          }
        }
      }
      fVar68 = 0.0;
    }
LAB_087d8014:
    fVar63 = *(float *)(unaff_x19 + 0xcb);
    fVar49 = (float)FUN_08a73e40(&stack0x00001290,0);
    fVar55 = *(float *)((long)unaff_x19 + 0x47c);
    fVar69 = (float)FUN_08a78368(&stack0x00001280,0);
    fVar63 = fVar63 + (unaff_s15 - *(float *)(unaff_x19 + 0x60)) *
                      in_stack_00000180._4_4_ * (fVar69 + ((fVar49 * fVar55 - unaff_s13) - fVar68));
    fVar49 = (float)FUN_08a73e48(&stack0x00001290,0);
    fVar69 = (float)FUN_08a78378(&stack0x00001280,0);
    in_stack_000001a0 =
         *(float *)((long)unaff_x19 + 0x634) +
         ((fVar66 + in_stack_00000180._4_4_ * (unaff_s13 + fVar49 + fVar69)) -
         *(float *)((long)unaff_x19 + 0x4ec));
    fVar49 = (float)FUN_08a73e38(&stack0x00001290,0);
    fVar49 = in_stack_000001a0 - in_stack_00000180._4_4_ * (unaff_s13 + unaff_s13 + fVar49);
    fVar69 = (float)FUN_08a73e30(&stack0x00001290,0);
    fVar69 = fVar63 + (unaff_s15 - *(float *)(unaff_x19 + 0x60)) *
                      in_stack_00000180._4_4_ *
                      (fVar68 + fVar68 +
                      unaff_s13 + unaff_s13 + fVar69 * *(float *)((long)unaff_x19 + 0x47c));
    fVar55 = fVar63;
    fVar60 = fVar69;
    if (((*(int *)((long)unaff_x19 + 0x65c) == 0) && (cVar25 == '\0')) &&
       ((*(byte *)((long)unaff_x19 + 0x284) >> 1 & 1) != 0)) {
      if (unaff_x19[0x20] == 0) break;
      lVar30 = unaff_x19[0xc1];
      fVar55 = (float)UnityEngine_UIElements_BaseVisualTreeUpdater__UnityEngine_UIElements_IVisualTreeUpdater_get_FrameCount
                                (unaff_x19[0x20] + 0x28,0);
      if (unaff_x19[0x20] == 0) break;
      fVar54 = (float)FUN_08a73b9c(unaff_x19[0x20] + 0x28,0);
      if (unaff_x19[0x20] == 0) break;
      fVar64 = *(float *)((long)unaff_x19 + 0x43c);
      fVar67 = *(float *)((long)unaff_x19 + 0x634);
      fVar60 = (float)(int)lVar30 * fStack0000000000000054;
      fVar59 = (float)FUN_08a73b4c(unaff_x19[0x20] + 0x28,0);
      fVar59 = fVar59 * fVar64 * (fVar55 - (fVar54 + fVar67)) * 0.5;
      fVar55 = (float)FUN_08a73e48(&stack0x00001290,0);
      fVar67 = fVar60 * in_stack_00000180._4_4_ * ((fVar68 + unaff_s13 + fVar55) - fVar59);
      fVar54 = (float)FUN_08a73e48(&stack0x00001290,0);
      fVar64 = (float)FUN_08a73e38(&stack0x00001290,0);
      in_stack_000001a0 = in_stack_000001a0 + 0.0;
      unaff_s15 = 1.0;
      fVar49 = fVar49 + 0.0;
      fVar55 = fVar63 + fVar67;
      fVar60 = fVar60 * in_stack_00000180._4_4_ *
                        ((((fVar54 - fVar64) - unaff_s13) - fVar68) - fVar59);
      fVar63 = fVar63 + fVar60;
      fVar60 = fVar69 + fVar60;
      fVar69 = fVar69 + fVar67;
    }
    uVar19 = *in_stack_000001d0;
    uVar61 = in_stack_000001d0[1];
    if (DAT_09885626 == '\0') {
      FUN_04077588(PTR_DAT_09286df8);
      DAT_09885626 = '\x01';
    }
    uVar51 = **(undefined8 **)(*(long *)PTR_DAT_09286df8 + 0xb8);
    uVar56 = (*(undefined8 **)(*(long *)PTR_DAT_09286df8 + 0xb8))[1];
    if (DAT_01aecb98 <
        (float)((ulong)uVar61 >> 0x20) * (float)((ulong)uVar56 >> 0x20) +
        (float)uVar61 * (float)uVar56 +
        (float)uVar19 * (float)uVar51 +
        (float)((ulong)uVar19 >> 0x20) * (float)((ulong)uVar51 >> 0x20)) {
      fVar54 = 0.0;
      auVar52._4_12_ = SUB1612(ZEXT816(0),4);
      auVar52._0_4_ = fVar49;
      uVar19 = auVar52._0_8_;
      uVar39 = (ulong)(uint)in_stack_000001a0;
      uVar61 = uVar19;
    }
    else {
      FUN_089b6dfc(&stack0x00001350,*(undefined4 *)((long)unaff_x19 + 0x46c),(int)unaff_x19[0x8e],
                   *(undefined4 *)((long)unaff_x19 + 0x474),(int)unaff_x19[0x8f],0);
      fVar60 = (fVar69 + fVar63) * 0.5;
      fVar59 = (fVar49 + in_stack_000001a0) * 0.5;
      fVar69 = 0.0;
      auVar70 = ZEXT416((uint)(in_stack_000001a0 - fVar59));
      fVar55 = (float)FUN_089b6cfc(&stack0x00001110,0);
      fVar55 = fVar60 + fVar55;
      fVar64 = 0.0;
      uVar39 = CONCAT44(fVar69 + 0.0,fVar59 + auVar70._0_4_);
      auVar70 = ZEXT416((uint)(fVar49 - fVar59));
      fVar63 = (float)FUN_089b6cfc(&stack0x00001110,0);
      fVar63 = fVar60 + fVar63;
      fVar54 = 0.0;
      uVar19 = CONCAT44(fVar64 + 0.0,fVar59 + auVar70._0_4_);
      auVar70 = ZEXT416((uint)(in_stack_000001a0 - fVar59));
      fVar69 = (float)FUN_089b6cfc(&stack0x00001110,0);
      fVar69 = fVar60 + fVar69;
      fVar64 = 0.0;
      in_stack_000001a0 = fVar59 + auVar70._0_4_;
      fVar54 = fVar54 + 0.0;
      auVar70 = ZEXT416((uint)(fVar49 - fVar59));
      unaff_s15 = 1.0;
      fVar49 = (float)FUN_089b6cfc(&stack0x00001110,0);
      fVar60 = fVar60 + fVar49;
      uVar61 = CONCAT44(fVar64 + 0.0,fVar59 + auVar70._0_4_);
    }
    if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0)) break;
    if (*(uint *)(lVar30 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
    lVar30 = lVar30 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29;
    *(float *)(lVar30 + 0x114) = fVar63;
    *(undefined8 *)(lVar30 + 0x118) = uVar19;
    if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0)) break;
    if (*(uint *)(lVar30 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
    lVar30 = lVar30 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29;
    *(float *)(lVar30 + 0x108) = fVar55;
    *(ulong *)(lVar30 + 0x10c) = uVar39;
    if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0)) break;
    if (*(uint *)(lVar30 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
    lVar30 = lVar30 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29;
    *(float *)(lVar30 + 0x120) = fVar69;
    *(ulong *)(lVar30 + 0x124) = CONCAT44(fVar54,in_stack_000001a0);
    if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0)) break;
    if (*(uint *)(lVar30 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
    lVar30 = lVar30 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29;
    *(float *)(lVar30 + 300) = fVar60;
    *(undefined8 *)(lVar30 + 0x130) = uVar61;
    if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0)) break;
    uVar13 = *(uint *)((long)unaff_x19 + 0x4a4);
    fVar55 = *(float *)(unaff_x19 + 0xcb);
    fVar49 = (float)FUN_08a78368(&stack0x00001280,0);
    if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_087ddd1c;
    *(float *)(lVar30 + (long)(int)uVar13 * (long)(int)unaff_w29 + 0x138) =
         fVar55 + in_stack_00000180._4_4_ * fVar49;
    if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0)) break;
    uVar13 = *(uint *)((long)unaff_x19 + 0x4a4);
    fVar55 = *(float *)((long)unaff_x19 + 0x4ec);
    fVar60 = *(float *)((long)unaff_x19 + 0x634);
    fVar49 = (float)FUN_08a78378(&stack0x00001280,0);
    if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_087ddd1c;
    *(float *)(lVar30 + (long)(int)uVar13 * (long)(int)unaff_w29 + 0x144) =
         (fVar66 - fVar55) + fVar60 + in_stack_00000180._4_4_ * fVar49;
    if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0)) break;
    unaff_w20 = *(uint *)(in_stack_000001d0 + 7);
    if (*(uint *)(lVar30 + 0x18) <= unaff_w20) goto LAB_087ddd1c;
    lVar30 = lVar30 + 0x20;
    *(float *)(lVar30 + (long)(int)unaff_w20 * (long)(int)unaff_w29 + 0x138) =
         (fVar69 - fVar63) / ((float)uVar39 - (float)uVar19);
    fVar65 = in_stack_00000180._4_4_ * (fStack0000000000000154 + fVar65);
    if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
      fVar65 = fVar65 / fStack000000000000016c;
      fVar48 = (in_stack_00000180._4_4_ * (fStack0000000000000150 + fVar48)) /
               fStack000000000000016c;
    }
    else {
      fVar48 = in_stack_00000180._4_4_ * (fStack0000000000000150 + fVar48);
    }
    fVar49 = *(float *)((long)unaff_x19 + 0x634);
    in_stack_000001a0 = *(float *)(unaff_x19 + 0x95);
    param_3 = extraout_x1;
    if ((unaff_w26 == 0) || ((float)unaff_w20 == in_stack_000001a0)) {
      fVar65 = fVar65 + fVar49;
      fVar48 = fVar48 + fVar49;
      fVar66 = fVar65;
      fVar69 = fVar48;
      if (fVar49 != 0.0) {
        fVar66 = (fVar65 - fVar49) / *(float *)((long)unaff_x19 + 0x43c);
        fVar69 = (fVar48 - fVar49) / *(float *)((long)unaff_x19 + 0x43c);
        if (fVar66 <= fVar65) {
          fVar66 = fVar65;
        }
        if (fVar48 <= fVar69) {
          fVar69 = fVar48;
        }
      }
      lVar30 = lVar30 + (long)(int)unaff_w20 * (long)(int)unaff_w29;
      fVar49 = fVar66;
      if (fVar66 <= *(float *)((long)unaff_x19 + 0x4dc)) {
        fVar49 = *(float *)((long)unaff_x19 + 0x4dc);
      }
      fVar55 = fVar69;
      if (*(float *)(unaff_x19 + 0x9c) <= fVar69) {
        fVar55 = *(float *)(unaff_x19 + 0x9c);
      }
      *(float *)((long)unaff_x19 + 0x4dc) = fVar49;
      *(float *)(unaff_x19 + 0x9c) = fVar55;
      *(float *)(lVar30 + 300) = fVar66;
      *(float *)(lVar30 + 0x130) = fVar69;
      fVar66 = *(float *)((long)unaff_x19 + 0x4ec);
      *(float *)(lVar30 + 0x120) = fVar65 - fVar66;
      *(float *)((long)unaff_x19 + 0x4d4) = fVar65 - fVar66;
      *(float *)(lVar30 + 0x128) = fVar48 - fVar66;
      *(float *)(unaff_x19 + 0x9b) = fVar48 - fVar66;
      if (((int)unaff_x19[0x97] == 0) || (*(char *)((long)unaff_x19 + 0x374) != '\0')) {
        *(float *)((long)unaff_x19 + 0x4cc) = fVar49;
        if (unaff_x19[0x20] == 0) break;
        fVar48 = *(float *)(unaff_x19 + 0x9a);
        fVar49 = (float)UnityEngine_UIElements_BaseVisualTreeUpdater__UnityEngine_UIElements_IVisualTreeUpdater_get_FrameCount
                                  (unaff_x19[0x20] + 0x28,0);
        fStack000000000000016c = (in_stack_00000180._4_4_ * fVar49) / fStack000000000000016c;
        if (fVar48 <= fStack000000000000016c) {
          fVar48 = fStack000000000000016c;
        }
        fVar66 = *(float *)((long)unaff_x19 + 0x4ec);
        *(float *)(unaff_x19 + 0x9a) = fVar48;
        param_3 = extraout_x1_00;
      }
      if (fVar66 == 0.0) {
        fVar48 = *(float *)(unaff_x19 + 0x99);
        if (*(float *)(unaff_x19 + 0x99) <= fVar65) {
          fVar48 = fVar65;
        }
        *(float *)(unaff_x19 + 0x99) = fVar48;
      }
    }
    else {
      lVar30 = lVar30 + (long)(int)unaff_w20 * (long)(int)unaff_w29;
      uVar61 = in_stack_000001d0[0xe];
      *(undefined8 *)(lVar30 + 300) = uVar61;
      fVar66 = *(float *)((long)unaff_x19 + 0x4ec);
      fVar65 = (float)uVar61 - fVar66;
      fVar48 = (float)((ulong)uVar61 >> 0x20) - fVar66;
      *(float *)(lVar30 + 0x120) = fVar65;
      *(float *)(lVar30 + 0x128) = fVar48;
      in_stack_000001d0[0xd] = CONCAT44(fVar48,fVar65);
    }
    lVar30 = unaff_x19[0x74];
    if ((lVar30 == 0) || (lVar34 = *(long *)(lVar30 + 0x38), lVar34 == 0)) break;
    uVar13 = *(uint *)(in_stack_000001d0 + 7);
    if (*(uint *)(lVar34 + 0x18) <= uVar13) goto LAB_087ddd1c;
    lVar34 = lVar34 + (long)(int)uVar13 * (long)(int)unaff_w29;
    *(undefined1 *)(lVar34 + 400) = 0;
    in_w14 = *(uint *)(unaff_x19 + 0x54) & 0x18;
    in_stack_00000160 = unaff_s13;
    if ((((in_stack_0000134c != 9) &&
         ((in_stack_0000134c != 0x200b && unaff_w26 == 0 ||
          ((*(uint *)((long)unaff_x19 + 0x304) & 0xfffffffe) != 2)))) &&
        ((unaff_w26 != 0 ||
         (((in_stack_0000134c == 3 || (in_stack_0000134c == 0x200b)) || (in_stack_0000134c == 0xad))
         )))) && ((in_stack_0000134c != 0xad || (uStack0000000000000058 & 1) != 0 &&
                  (*(int *)((long)unaff_x19 + 0x65c) != 1)))) {
      if (((in_stack_0000134c & 0xfffffffe) == 10) && ((int)unaff_x19[0x62] == 6)) {
        fVar47 = 0.0;
        if ((0.0 < fVar66) && ((char)unaff_x19[0x5e] == '\0')) {
          fVar47 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
        }
        fStack000000000000011c = *(float *)((long)unaff_x19 + 0x4cc);
        auVar70 = ZEXT416((uint)in_stack_000000f0._4_4_);
        if (in_stack_000000f0._4_4_ <
            (fStack000000000000011c - (*(float *)(unaff_x19 + 0x9c) - fVar66)) + fVar47) {
          if (*(int *)((long)unaff_x19 + 0x314) == -1) {
            *(uint *)((long)unaff_x19 + 0x314) = uVar13;
          }
          unaff_x28 = (long *)PTR_DAT_09285bb0;
          if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          in_stack_00001318 = FUN_08822600();
          lVar30 = unaff_x19[99];
          if (*(int *)(*unaff_x28 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar20 = FUN_089ca704(lVar30,0,0);
          if ((uVar20 & 1) != 0) {
            plVar43 = (long *)unaff_x19[99];
            uVar61 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar43 == (long *)0x0) break;
            (**(code **)(*plVar43 + 0x558))(plVar43,uVar61,*(undefined8 *)(*plVar43 + 0x560));
            lVar30 = unaff_x19[99];
            if (lVar30 == 0) break;
            *(int *)(lVar30 + 0x438) = (int)unaff_x19[0x87];
            FUN_08815fe0(lVar30,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
            plVar43 = (long *)unaff_x19[99];
            if (plVar43 == (long *)0x0) break;
            (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x65) = 1;
          }
LAB_087d9064:
          uVar46 = 3;
LAB_087d9124:
          unaff_x23 = in_stack_000001d0;
          fVar47 = in_stack_00000180._4_4_;
          in_stack_00001338 = CONCAT44(uVar46,uVar13);
          goto LAB_087d7090;
        }
      }
      if ((((in_stack_0000134c - 0x2007 < 0x23) &&
           ((1L << ((ulong)(in_stack_0000134c - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
          (in_stack_0000134c - 10 < 2)) || (in_stack_0000134c == 0xa0)) {
        unaff_x23 = in_stack_000001d0;
        unaff_x28 = (long *)PTR_DAT_09285bb0;
        if (in_stack_0000134c == 0xad) goto LAB_087d9374;
LAB_087d92c8:
        unaff_x23 = in_stack_000001d0;
        unaff_x28 = (long *)PTR_DAT_09285bb0;
        if ((in_stack_0000134c == 0x200b) || (in_stack_0000134c == 0x2060)) goto LAB_087d9374;
        lVar30 = unaff_x19[0x74];
        if ((lVar30 == 0) || (lVar34 = *(long *)(lVar30 + 0x50), lVar34 == 0)) break;
        if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_087ddd1c;
        lVar34 = lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
        *(int *)(lVar34 + 0x2c) = *(int *)(lVar34 + 0x2c) + 1;
        *(int *)(lVar30 + 0x20) = *(int *)(lVar30 + 0x20) + 1;
      }
      else {
        if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        auVar70 = FUN_075db9d4(in_stack_0000134c,0);
        param_3 = auVar70._8_8_;
        if (((auVar70._0_8_ & 1) != 0) && (in_stack_0000134c != 0xad)) goto LAB_087d92c8;
      }
      unaff_x28 = (long *)PTR_DAT_09285bb0;
      unaff_x23 = in_stack_000001d0;
      if (in_stack_0000134c != 0xa0) goto LAB_087d9374;
      if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x50), lVar30 == 0))
      break;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_087ddd1c;
      lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
      *(int *)(lVar30 + 0x20) = *(int *)(lVar30 + 0x20) + 1;
      goto LAB_087d9374;
    }
    *(undefined1 *)(lVar34 + 400) = 1;
    pfVar29 = _fStack00000000000000a0;
    pfVar33 = _fStack00000000000000c0;
    if (uVar28 == unaff_w21) {
      lVar30 = *(long *)(lVar30 + 0x50);
      if (lVar30 == 0) break;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_087ddd1c;
      lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
      pfVar33 = (float *)(lVar30 + 100);
      pfVar29 = (float *)(lVar30 + 0x68);
    }
    unaff_s8 = *pfVar33;
    unaff_s9 = *pfVar29;
    fVar65 = *(float *)(unaff_x19 + 0x73);
    fVar48 = 0.0;
    fVar49 = *(float *)(unaff_x19 + 0xcb);
    in_stack_00000158 = (in_stack_000000b8._4_4_ - unaff_s8) - unaff_s9;
    bVar10 = true;
    if ((fVar65 <= in_stack_00000158) && (bVar10 = false, !NAN(fVar65))) {
      bVar10 = fVar65 == -1.0;
    }
    if (!bVar10) {
      in_stack_00000158 = fVar65;
    }
    fVar65 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar65 = (float)FUN_08a73e50(&stack0x00001290,0);
      param_3 = extraout_x1_01;
    }
    fVar69 = *(float *)((long)unaff_x19 + 0x4ec);
    fVar66 = *(float *)(unaff_x19 + 0x60);
    fStack000000000000011c = fVar47;
    if (in_stack_0000134c != 0xad) {
      fStack000000000000011c = in_stack_00000180._4_4_;
    }
    if ((0.0 < fVar69) && ((char)unaff_x19[0x5e] == '\0')) {
      fVar48 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
    }
    iVar15 = *(int *)(in_stack_000001d0 + 7);
    auVar70 = ZEXT416((uint)fVar68);
    fVar48 = (*(float *)((long)unaff_x19 + 0x4cc) - (*(float *)(unaff_x19 + 0x9c) - fVar69)) +
             fVar48;
    if (in_stack_000000f0._4_4_ < fVar48) {
      if (*(int *)((long)unaff_x19 + 0x314) == -1) {
        *(int *)((long)unaff_x19 + 0x314) = iVar15;
      }
      puVar9 = PTR_DAT_09337670;
      fVar47 = DAT_01aec3c4;
      if ((char)unaff_x19[0x4c] != '\0') {
        if (0.0 < fVar69) {
          fVar68 = *(float *)((long)unaff_x19 + 0x2f4);
          if ((fVar68 < *(float *)(unaff_x19 + 0x5d)) &&
             (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
            fVar47 = *(float *)(unaff_x19 + 0x5d) +
                     ((in_stack_00000018._4_4_ - fVar48) / (float)(int)unaff_x19[0x97]) /
                     in_stack_00000048._4_4_;
            if (fVar47 <= fVar68) {
              fVar47 = fVar68;
            }
            goto LAB_087ddbcc;
          }
        }
        fVar48 = *(float *)((long)unaff_x19 + 0x20c);
        fVar68 = *(float *)(unaff_x19 + 0x4f);
        if ((fVar68 < fVar48) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
          *(float *)((long)unaff_x19 + 0x264) = fVar48;
          fVar65 = (fVar48 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
          if (fVar65 <= fVar47) {
            fVar65 = fVar47;
          }
          fVar65 = (fVar48 - fVar65) * 20.0 + 0.5;
          fVar47 = DAT_01aec808;
          if (fVar65 != INFINITY) {
            fVar47 = (float)(int)fVar65 / 20.0;
          }
          if (fVar47 <= fVar68) {
            fVar47 = fVar68;
          }
          *(float *)((long)unaff_x19 + 0x20c) = fVar47;
          return;
        }
      }
      iVar16 = (int)unaff_x19[0x62];
      if (iVar16 < 5) {
        if (iVar16 == 1) {
          lVar30 = *(long *)PTR_DAT_09337670;
          if (*(int *)(lVar30 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar30 = *(long *)puVar9;
          }
          unaff_x28 = (long *)PTR_DAT_09285bb0;
          lVar34 = *(long *)(lVar30 + 0xb8);
          if (*(int *)(lVar34 + 0x1708) != 0) {
            if (*(int *)(lVar30 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              lVar34 = *(long *)(*(long *)PTR_DAT_09337670 + 0xb8);
            }
            FUN_065eb4fc(&stack0x00001350,lVar34 + 0x1338,*(undefined8 *)PTR_DAT_09337618);
            memcpy(&stack0x00000d58,&stack0x00001350,0x3b8);
LAB_087d90f8:
            iVar15 = FUN_08822600();
            in_stack_00001318 = iVar15 - 1;
            in_stack_000001c0 = in_stack_000001c0 + 1;
            uVar13 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
            *(uint *)((long)unaff_x19 + 0x4a4) = uVar13;
            uVar46 = 0x2026;
            goto LAB_087d9124;
          }
LAB_087d912c:
          unaff_x28 = (long *)PTR_DAT_09285bb0;
          in_stack_000001d0[7] = 0;
          unaff_x23 = in_stack_000001d0;
          fVar47 = in_stack_00000180._4_4_;
          in_stack_00001318 = 0xffffffff;
          in_stack_00001338 = DAT_01aed6d8;
          goto LAB_087d7090;
        }
        if (iVar16 != 3) goto LAB_087d8a98;
        if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
LAB_087d8d50:
        in_stack_00001318 = FUN_08822600();
      }
      else {
        if (iVar16 == 5) {
          if (((int)in_stack_00001318 < 0) || (iVar15 == 0)) {
            *(undefined4 *)(in_stack_000001d0 + 7) = 0;
            in_stack_00001318 = 0xffffffff;
            unaff_x23 = in_stack_000001d0;
            unaff_x28 = (long *)PTR_DAT_09285bb0;
            fVar47 = in_stack_00000180._4_4_;
            in_stack_00001338 = DAT_01aed6d8;
          }
          else {
            auVar70 = ZEXT416((uint)in_stack_000000f0._4_4_);
            if (in_stack_000000f0._4_4_ <
                *(float *)(in_stack_000001d0 + 0xe) - *(float *)(unaff_x19 + 0x9c)) {
              if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              goto LAB_087d8d50;
            }
            if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            puVar9 = PTR_DAT_09337670;
            unaff_x28 = (long *)PTR_DAT_09285bb0;
            in_stack_00001318 = FUN_08822600();
            *(undefined4 *)(unaff_x19 + 0x95) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
            lVar30 = *(long *)puVar9;
            *(undefined1 *)((long)unaff_x19 + 0x374) = 1;
            uVar61 = *(undefined8 *)(*(long *)(lVar30 + 0xb8) + 0x1730);
            *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
            *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
            *(float *)(unaff_x19 + 0xcb) = *(float *)((long)unaff_x19 + 0x444) + 0.0;
            uVar61 = NEON_rev64(uVar61,4);
            auVar70 = ZEXT816(0);
            *(int *)(unaff_x19 + 0x97) = (int)unaff_x19[0x97] + 1;
            iVar15 = *(int *)((long)unaff_x19 + 0x4c4);
            in_stack_000001d0[0xe] = uVar61;
            unaff_x19[0x99] = 0;
            *(int *)((long)unaff_x19 + 0x4c4) = iVar15 + 1;
            unaff_x23 = in_stack_000001d0;
            fVar47 = in_stack_00000180._4_4_;
          }
          goto LAB_087d7090;
        }
        if (iVar16 != 6) goto LAB_087d8a98;
        if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        in_stack_00001318 = FUN_08822600();
        lVar30 = unaff_x19[99];
        if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar20 = FUN_089ca704(lVar30,0,0);
        if ((uVar20 & 1) != 0) {
          plVar43 = (long *)unaff_x19[99];
          uVar61 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar43 == (long *)0x0) break;
          (**(code **)(*plVar43 + 0x558))(plVar43,uVar61,*(undefined8 *)(*plVar43 + 0x560));
          lVar30 = unaff_x19[99];
          if (lVar30 == 0) break;
          *(int *)(lVar30 + 0x438) = (int)unaff_x19[0x87];
          FUN_08815fe0(lVar30,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
          plVar43 = (long *)unaff_x19[99];
          if (plVar43 == (long *)0x0) break;
          (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x65) = 1;
        }
      }
      unaff_x23 = in_stack_000001d0;
      unaff_x28 = (long *)PTR_DAT_09285bb0;
      fVar47 = in_stack_00000180._4_4_;
      in_stack_00001338 = CONCAT44(3,iVar15);
      goto LAB_087d7090;
    }
LAB_087d8a98:
    puVar9 = PTR_DAT_09337670;
    unaff_x28 = (long *)PTR_DAT_09285bb0;
    if ((uVar20 & 1) == 0) goto joined_r0x087d8c38;
    fVar47 = unaff_s15;
    if (in_w14 != 0) {
      fVar47 = DAT_01aed150;
    }
    fVar65 = ABS(fVar49) + fVar65 * (unaff_s15 - fVar66) * fStack000000000000011c;
    if (fVar65 <= fVar47 * in_stack_00000158) goto joined_r0x087d8c38;
    if (((*(int *)((long)unaff_x19 + 0x304) == 0) || (*(int *)((long)unaff_x19 + 0x304) == 3)) ||
       (iVar15 == (int)unaff_x19[0x95])) {
      if (((char)unaff_x19[0x4c] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
        fStack000000000000011c = 100.0;
        fVar48 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
        if (fVar66 < fVar48) {
          fVar49 = fVar65;
          if (0.0 < fVar66) {
            fVar49 = fVar65 / (1.0 - fVar66);
          }
          fVar66 = fVar66 + (fVar65 - fVar47 * (in_stack_00000158 + DAT_01aec4cc)) / fVar49;
          goto FUN_087ddcd0;
        }
        fVar48 = *(float *)((long)unaff_x19 + 0x20c);
        fVar49 = *(float *)(unaff_x19 + 0x4f);
        auVar70 = ZEXT416((uint)fVar49);
        if (fVar48 <= fVar49) goto LAB_087d8b2c;
LAB_087ddc38:
        fVar47 = DAT_01aec3c4;
        *(float *)((long)unaff_x19 + 0x264) = fVar48;
        fVar65 = (fVar48 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
        if (fVar65 <= fVar47) {
          fVar65 = fVar47;
        }
        fVar65 = (fVar48 - fVar65) * 20.0 + 0.5;
        fVar47 = DAT_01aec808;
        if (fVar65 != INFINITY) {
          fVar47 = (float)(int)fVar65 / 20.0;
        }
        if (fVar47 <= fVar49) {
          fVar47 = fVar49;
        }
LAB_087daeb4:
        *(float *)((long)unaff_x19 + 0x20c) = fVar47;
        return;
      }
LAB_087d8b2c:
      iVar16 = (int)unaff_x19[0x62];
      if (iVar16 == 1) {
        lVar30 = *(long *)PTR_DAT_09337670;
        if (*(int *)(lVar30 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar30 = *(long *)puVar9;
        }
        unaff_x28 = (long *)PTR_DAT_09285bb0;
        lVar34 = *(long *)(lVar30 + 0xb8);
        if (*(int *)(lVar34 + 0x1708) == 0) goto LAB_087d912c;
        if (*(int *)(lVar30 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar34 = *(long *)(*(long *)PTR_DAT_09337670 + 0xb8);
        }
        FUN_065eb4fc(&stack0x00001350,lVar34 + 0x1338,*(undefined8 *)PTR_DAT_09337618);
        memcpy(&stack0x000005e8,&stack0x00001350,0x3b8);
        goto LAB_087d90f8;
      }
      if (iVar16 == 6) {
        if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        unaff_x28 = (long *)PTR_DAT_09285bb0;
        in_stack_00001318 = FUN_08822600();
        lVar30 = unaff_x19[99];
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar20 = FUN_089ca704(lVar30,0,0);
        if ((uVar20 & 1) != 0) {
          plVar43 = (long *)unaff_x19[99];
          uVar61 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar43 == (long *)0x0) break;
          (**(code **)(*plVar43 + 0x558))(plVar43,uVar61,*(undefined8 *)(*plVar43 + 0x560));
          lVar30 = unaff_x19[99];
          if (lVar30 == 0) break;
          *(int *)(lVar30 + 0x438) = (int)unaff_x19[0x87];
          FUN_08815fe0(lVar30,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
          plVar43 = (long *)unaff_x19[99];
          if (plVar43 == (long *)0x0) break;
          (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x65) = 1;
        }
        uVar13 = *(uint *)(in_stack_000001d0 + 7);
        goto LAB_087d9064;
      }
      if (iVar16 == 3) {
        if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        goto LAB_087d8d50;
      }
      goto joined_r0x087d8c38;
    }
    if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    in_stack_00001318 = FUN_08822600();
    if (*(float *)((long)unaff_x19 + 0x2ec) == DAT_01aeb5f8) {
      lVar30 = unaff_x19[0x74];
      if ((lVar30 == 0) || (lVar34 = *(long *)(lVar30 + 0x38), lVar34 == 0)) break;
      if (*(uint *)(lVar34 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
      fVar48 = *(float *)((long)unaff_x19 + 0x4ec);
      fVar49 = 0.0;
      if ((0.0 < fVar48) && ((char)unaff_x19[0x5e] == '\0')) {
        fVar49 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
      }
      fVar49 = in_stack_00000100 * *(float *)((long)unaff_x19 + 0x2e4) +
               *(float *)(lVar34 + (long)(int)*(uint *)(in_stack_000001d0 + 7) *
                                   (long)(int)unaff_w29 + 0x14c) +
               (fVar49 - *(float *)(unaff_x19 + 0x9c)) +
               in_stack_00000048._4_4_ * (fStack0000000000000044 + *(float *)(unaff_x19 + 0x5d));
    }
    else {
      lVar30 = unaff_x19[0x74];
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      if (lVar30 == 0) break;
      fVar49 = *(float *)((long)unaff_x19 + 0x2ec) +
               in_stack_00000100 * *(float *)((long)unaff_x19 + 0x2e4);
      fVar48 = *(float *)((long)unaff_x19 + 0x4ec);
    }
    puVar9 = PTR_DAT_09337670;
    lVar30 = *(long *)(lVar30 + 0x38);
    if (lVar30 == 0) break;
    uVar13 = *(uint *)((long)unaff_x19 + 0x4a4);
    if ((*(uint *)(lVar30 + 0x18) <= uVar13) ||
       (uVar14 = uVar13 - 1, *(uint *)(lVar30 + 0x18) <= uVar14)) goto LAB_087ddd1c;
    fStack000000000000011c = *(float *)((long)unaff_x19 + 0x4cc);
    lVar30 = lVar30 + 0x20;
    fVar68 = *(float *)(lVar30 + (long)(int)uVar13 * (long)(int)unaff_w29 + 0x130);
    auVar70 = ZEXT416((uint)fVar68);
    fVar68 = (fVar49 + fStack000000000000011c + fVar48) - fVar68;
    if ((*(short *)(lVar30 + (long)(int)uVar14 * (long)(int)unaff_w29 + 4) == 0xad &&
         (uStack0000000000000058 & 1) == 0) &&
       (((int)unaff_x19[0x62] == 0 || (fVar68 < in_stack_000000f0._4_4_)))) {
      uStack0000000000000058 = 0;
      in_stack_00001318 = in_stack_00001318 - 1;
      in_stack_00001338 = CONCAT44(0x2d,uVar14);
      *(uint *)(in_stack_000001d0 + 7) = uVar14;
      unaff_x23 = in_stack_000001d0;
      unaff_x28 = (long *)PTR_DAT_09285bb0;
      fVar47 = in_stack_00000180._4_4_;
      goto LAB_087d7090;
    }
    if (*(short *)(lVar30 + (long)(int)uVar13 * (long)(int)unaff_w29 + 4) == 0xad) {
      uStack0000000000000058 = 1;
      unaff_x23 = in_stack_000001d0;
      unaff_x28 = (long *)PTR_DAT_09285bb0;
      fVar47 = in_stack_00000180._4_4_;
      goto LAB_087d7090;
    }
    if ((char)unaff_x19[0x4c] != '\0' && (((uint)fStack000000000000006c ^ 0xffffffff) & 1) == 0) {
      fVar48 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
      fVar66 = *(float *)(unaff_x19 + 0x60);
      if ((fVar48 <= fVar66) || ((int)unaff_x19[0x4e] <= *(int *)((long)unaff_x19 + 0x26c))) {
        fVar48 = *(float *)((long)unaff_x19 + 0x20c);
        fVar49 = *(float *)(unaff_x19 + 0x4f);
        auVar70 = ZEXT416((uint)fVar49);
        if ((fVar49 < fVar48) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
        goto LAB_087ddc38;
        goto LAB_087da748;
      }
LAB_087ddce0:
      fVar49 = fVar65;
      if (0.0 < fVar66) {
        fVar49 = fVar65 / (1.0 - fVar66);
      }
      fVar66 = fVar66 + (fVar65 - fVar47 * (in_stack_00000158 + DAT_01aec4cc)) / fVar49;
FUN_087ddcd0:
      if (fVar48 <= fVar66) {
        fVar66 = fVar48;
      }
      *(float *)(unaff_x19 + 0x60) = fVar66;
      return;
    }
LAB_087da748:
    lVar30 = *(long *)PTR_DAT_09337670;
    param_3 = extraout_x1_04;
    if (*(int *)(lVar30 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar30 = *(long *)puVar9;
      param_3 = extraout_x1_12;
    }
    if (((((uint)fStack000000000000006c & 1) != 0) &&
        (iVar16 = *(int *)(*(long *)(lVar30 + 0xb8) + 0xf80), iVar16 != -1)) &&
       (iVar16 != iStack0000000000000020)) {
      if (*(int *)(lVar30 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      in_stack_00001318 = FUN_08822600();
      if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0))
      break;
      uVar13 = *(int *)(in_stack_000001d0 + 7) - 1;
      if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_087ddd1c;
      param_3 = extraout_x1_13;
      iStack0000000000000020 = iVar16;
      if (*(short *)(lVar30 + (long)(int)uVar13 * (long)(int)unaff_w29 + 0x24) == 0xad) {
        uStack0000000000000058 = 0;
        in_stack_00001318 = in_stack_00001318 - 1;
        in_stack_00001338 = CONCAT44(0x2d,uVar13);
        *(uint *)(in_stack_000001d0 + 7) = uVar13;
        unaff_x23 = in_stack_000001d0;
        unaff_x28 = (long *)PTR_DAT_09285bb0;
        fVar47 = in_stack_00000180._4_4_;
        goto LAB_087d7090;
      }
    }
    if (fVar68 <= in_stack_000000f0._4_4_) {
      auVar70 = ZEXT416((uint)in_stack_00000180._4_4_);
      fStack000000000000011c = in_stack_00000100;
      FUN_088230cc();
LAB_087daaac:
      fStack000000000000006c = 1.4013e-45;
      uStack0000000000000058 = 0;
      fStack0000000000000064 = 1.4013e-45;
      unaff_x23 = in_stack_000001d0;
      unaff_x28 = (long *)PTR_DAT_09285bb0;
      fVar47 = in_stack_00000180._4_4_;
      goto LAB_087d7090;
    }
    if (*(int *)((long)unaff_x19 + 0x314) == -1) {
      *(undefined4 *)((long)unaff_x19 + 0x314) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
    }
    unaff_x28 = (long *)PTR_DAT_09285bb0;
    if ((char)unaff_x19[0x4c] != '\0') {
      fVar48 = *(float *)((long)unaff_x19 + 0x2f4);
      if ((fVar48 < *(float *)(unaff_x19 + 0x5d)) &&
         (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
        fVar47 = *(float *)(unaff_x19 + 0x5d) +
                 ((in_stack_00000018._4_4_ - fVar68) / (float)((int)unaff_x19[0x97] + 1)) /
                 in_stack_00000048._4_4_;
        if (fVar47 <= fVar48) {
          fVar47 = fVar48;
        }
LAB_087ddbcc:
        *(float *)(unaff_x19 + 0x5d) = fVar47;
        return;
      }
      fVar48 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
      fVar66 = *(float *)(unaff_x19 + 0x60);
      if ((fVar66 < fVar48) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
      goto LAB_087ddce0;
      fVar48 = *(float *)((long)unaff_x19 + 0x20c);
      fVar49 = *(float *)(unaff_x19 + 0x4f);
      auVar70 = ZEXT416((uint)fVar49);
      if ((fVar49 < fVar48) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
      goto LAB_087ddc38;
    }
    iVar16 = (int)unaff_x19[0x62];
    uStack0000000000000058 = 0;
    if (iVar16 < 3) {
      if (iVar16 != 0) {
        if (iVar16 == 1) {
          lVar30 = *(long *)PTR_DAT_09337670;
          if (*(int *)(lVar30 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar30 = *(long *)PTR_DAT_09337670;
          }
          in_stack_00001338 = DAT_01aed6d8;
          lVar34 = *(long *)(lVar30 + 0xb8);
          if (*(int *)(lVar34 + 0x1708) == 0) {
            in_stack_00001318 = 0xffffffff;
            in_stack_000001d0[7] = 0;
          }
          else {
            if (*(int *)(lVar30 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              lVar34 = *(long *)(*(long *)PTR_DAT_09337670 + 0xb8);
            }
            FUN_065eb4fc(&stack0x00001350,lVar34 + 0x1338,*(undefined8 *)PTR_DAT_09337618);
            memcpy(&stack0x000009a0,&stack0x00001350,0x3b8);
            iVar15 = FUN_08822600();
            in_stack_00001318 = iVar15 - 1;
            iVar15 = *(int *)((long)unaff_x19 + 0x4a4) + -1;
            *(int *)((long)unaff_x19 + 0x4a4) = iVar15;
            in_stack_000001c0 = in_stack_000001c0 + 1;
            in_stack_00001338 = CONCAT44(0x2026,iVar15);
          }
          goto LAB_087dadc0;
        }
        if (iVar16 != 2) goto joined_r0x087d8c38;
      }
LAB_087daae0:
      auVar70 = ZEXT416((uint)in_stack_00000180._4_4_);
      fStack000000000000011c = in_stack_00000100;
      FUN_088230cc();
      uStack0000000000000058 = 0;
      unaff_x23 = in_stack_000001d0;
LAB_087da124:
      fStack000000000000006c = 1.4013e-45;
      fStack0000000000000064 = 1.4013e-45;
      fVar47 = in_stack_00000180._4_4_;
      goto LAB_087d7090;
    }
    if (iVar16 < 5) {
      if (iVar16 != 3) {
        if (iVar16 == 4) goto LAB_087daae0;
        goto joined_r0x087d8c38;
      }
      if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      in_stack_00001318 = FUN_08822600();
      in_stack_00001338 = CONCAT44(3,iVar15);
LAB_087dadc0:
      uStack0000000000000058 = 0;
      unaff_s15 = 1.0;
      unaff_x23 = in_stack_000001d0;
      unaff_x28 = (long *)PTR_DAT_09285bb0;
      fVar47 = in_stack_00000180._4_4_;
      goto LAB_087d7090;
    }
    if (iVar16 == 5) {
      auVar70 = ZEXT416((uint)in_stack_00000180._4_4_);
      *(undefined1 *)((long)unaff_x19 + 0x374) = 1;
      fStack000000000000011c = in_stack_00000100;
      FUN_088230cc();
      *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
      *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
      *(int *)((long)unaff_x19 + 0x4c4) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
      unaff_x19[0x99] = 0;
      goto LAB_087daaac;
    }
    if (iVar16 == 6) {
      lVar30 = unaff_x19[99];
      if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar20 = FUN_089ca704(lVar30,0,0);
      if ((uVar20 & 1) != 0) {
        plVar43 = (long *)unaff_x19[99];
        uVar61 = (**(code **)(*unaff_x19 + 0x548))();
        if (plVar43 == (long *)0x0) break;
        (**(code **)(*plVar43 + 0x558))(plVar43,uVar61,*(undefined8 *)(*plVar43 + 0x560));
        lVar30 = unaff_x19[99];
        if (lVar30 == 0) break;
        *(int *)(lVar30 + 0x438) = (int)unaff_x19[0x87];
        FUN_08815fe0(lVar30,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
        plVar43 = (long *)unaff_x19[99];
        if (plVar43 == (long *)0x0) break;
        (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
        *(undefined1 *)(unaff_x19 + 0x65) = 1;
      }
      in_stack_00001338 = CONCAT44(3,*(undefined4 *)(in_stack_000001d0 + 7));
      goto LAB_087dadc0;
    }
    unaff_s15 = 1.0;
joined_r0x087d8c38:
    PTR_DAT_09285bb0 = (undefined *)unaff_x28;
    if (unaff_w26 == 0) {
      if (in_stack_0000134c == 0xad) {
        if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0))
        break;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(in_stack_000001d0 + 7)) goto LAB_087ddd1c;
        *(undefined1 *)
         (lVar30 + (long)(int)*(uint *)(in_stack_000001d0 + 7) * (long)(int)unaff_w29 + 400) = 0;
        unaff_x23 = in_stack_000001d0;
      }
      else {
        lVar30 = 0x500;
        if (*(char *)((long)unaff_x19 + 0x1ec) != '\0') {
          lVar30 = 0x144;
        }
        param_3 = (ulong)*(uint *)((long)unaff_x19 + lVar30);
        if (*(int *)((long)unaff_x19 + 0x65c) == 1) {
          (**(code **)(*unaff_x19 + 0x8c8))();
          param_3 = extraout_x1_03;
        }
        else if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
          (**(code **)(*unaff_x19 + 0x8b8))();
          param_3 = extraout_x1_02;
        }
        if (((uint)fStack0000000000000064 & 1) != 0) {
          *(undefined4 *)(in_stack_000001d0 + 8) = *(undefined4 *)(in_stack_000001d0 + 7);
        }
        *(undefined4 *)((long)unaff_x19 + 0x4b4) = *(undefined4 *)(in_stack_000001d0 + 7);
        *(int *)((long)unaff_x19 + 0x4bc) = *(int *)((long)unaff_x19 + 0x4bc) + 1;
        if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x50), lVar30 == 0))
        break;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_087ddd1c;
        fStack0000000000000064 = 0.0;
        lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
        *(float *)(lVar30 + 100) = unaff_s8;
        *(float *)(lVar30 + 0x68) = unaff_s9;
        unaff_x23 = in_stack_000001d0;
      }
      goto LAB_087d9374;
    }
    param_1 = unaff_x19[0x74];
    if (param_1 == 0) break;
    unaff_x23 = in_stack_000001d0;
    in_x9 = *(long *)(param_1 + 0x38);
  }
LAB_087ddb5c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
LAB_087db574:
  if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_087ddd1c;
  uVar23 = (ulong)uVar13;
  piVar40 = (int *)(lVar34 + uVar23 * 0x178);
  lVar36 = *(long *)(piVar40 + 8);
  uVar45 = *(ushort *)(piVar40 + 1);
  if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar44 = (uint)uVar45;
  bVar11 = FUN_075d81a8(uVar45,0);
  if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_087ddd1c;
  if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x50), lVar21 == 0))
  goto LAB_087ddb5c;
  uVar2 = *(uint *)(lVar34 + uVar23 * 0x178 + 0x3c);
  if (*(uint *)(lVar21 + 0x18) <= uVar2) goto LAB_087ddd1c;
  lVar21 = lVar21 + (long)(int)uVar2 * 0x60;
  uVar4 = *(uint *)(lVar21 + 0x40);
  fVar65 = *(float *)(lVar21 + 0x58);
  fVar47 = *(float *)(lVar21 + 0x5c);
  uVar42 = *(uint *)(lVar21 + 0x6c);
  fVar54 = *(float *)(lVar21 + 0x60);
  fVar67 = *(float *)(lVar21 + 100);
  fVar64 = *(float *)(lVar21 + 0x70);
  fVar59 = *(float *)(lVar21 + 0x74);
  iVar17 = *(int *)(lVar21 + 0x20);
  fVar60 = *(float *)(lVar21 + 0x78);
  fVar55 = *(float *)(lVar21 + 0x7c);
  iVar18 = *(int *)(lVar21 + 0x28);
  iVar38 = *(int *)(lVar21 + 0x30);
  uVar5 = *(uint *)(lVar21 + 0x44);
  fVar63 = *(float *)(lVar21 + 0x50);
  if ((int)uVar42 < 9) {
    if ((int)uVar42 < 3) {
      if (uVar42 == 1) {
        if ((char)unaff_x19[0x1e] == '\0') {
          fStack0000000000000130 = fVar67 + 0.0;
        }
        else {
          fStack0000000000000130 = 0.0 - fVar47;
        }
        fStack000000000000011c = 0.0;
        fStack0000000000000134 = 0.0;
      }
      else if (uVar42 == 2) {
        fStack0000000000000130 = (fVar67 + fVar54 * 0.5) - fVar47 * 0.5;
LAB_087db86c:
        fStack0000000000000134 = 0.0;
        fStack000000000000011c = 0.0;
      }
      else {
LAB_087db744:
        uVar45 = NEON_umaxv(CONCAT26(-(ushort)(uVar45 == (ushort)((ulong)DAT_01aee7a8 >> 0x30)),
                                     CONCAT24(-(ushort)(uVar45 ==
                                                       (ushort)((ulong)DAT_01aee7a8 >> 0x20)),
                                              CONCAT22(-(ushort)(uVar45 ==
                                                                (ushort)((ulong)DAT_01aee7a8 >> 0x10
                                                                        )),
                                                       -(ushort)(uVar45 == (ushort)DAT_01aee7a8)))),
                            2);
        if (((((uVar45 & 1) == 0) && (uVar44 != 3)) && (uVar42 == 8)) && ((int)uVar13 <= (int)uVar5)
           ) goto LAB_087db784;
      }
    }
    else if (uVar42 != 3) {
      if (uVar42 != 4) goto LAB_087db744;
      fStack000000000000011c = 0.0;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar47 = 0.0;
      }
      fStack0000000000000130 = (fVar54 + fVar67) - fVar47;
      fStack0000000000000134 = 0.0;
    }
  }
  else if (uVar42 == 0x10) {
    if ((int)uVar13 <= (int)uVar5) {
      if (uVar44 < 0xad) {
        if ((uVar44 != 3) && (uVar44 != 10)) {
LAB_087db784:
          if (*(uint *)(lVar30 + 0x18) <= uVar4) goto LAB_087ddd1c;
          uVar3 = *(undefined2 *)(lVar34 + (long)(int)uVar4 * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar20 = FUN_075db454(uVar3,0);
          if ((uVar20 & 1) == 0) {
            bVar1 = (int)uVar2 < (int)unaff_x19[0x97];
          }
          else {
            bVar1 = false;
          }
          if ((!bVar1 && (uVar42 >> 4 & 1) == 0) && (fVar47 <= fVar54)) {
            fStack0000000000000130 = -0.0;
            if ((char)unaff_x19[0x1e] != '\0') {
              fStack0000000000000130 = fVar54;
            }
            fStack0000000000000130 = fVar67 + fStack0000000000000130;
            goto LAB_087db86c;
          }
          if (((uVar13 == 0) || (uVar2 != uVar28)) || (uVar13 == *(uint *)((long)unaff_x19 + 0x35c))
             ) {
            fStack0000000000000130 = -0.0;
            if ((char)unaff_x19[0x1e] != '\0') {
              fStack0000000000000130 = fVar54;
            }
            if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            fStack0000000000000130 = fVar67 + fStack0000000000000130;
            fStack0000000000000044 = (float)FUN_075db9d4(uVar44,0);
            fStack0000000000000134 = 0.0;
            fStack000000000000011c = 0.0;
          }
          else {
            cVar25 = (char)unaff_x19[0x1e];
            iVar38 = (iVar38 - iVar17) - ((uint)fStack0000000000000044 & 1);
            fVar67 = -fVar47;
            if (cVar25 != '\0') {
              fVar67 = fVar47;
            }
            if (iVar38 < 1) {
              fVar47 = 1.0;
              iVar38 = 1;
            }
            else {
              fVar47 = *(float *)((long)unaff_x19 + 0x30c);
            }
            if (uVar44 == 9) {
LAB_087dd4b0:
              fVar47 = ((fVar54 + fVar67) * (1.0 - fVar47)) / (float)iVar38;
              if (cVar25 == '\0') {
                fStack0000000000000130 = fStack0000000000000130 + fVar47;
                fStack0000000000000134 = fStack0000000000000134 + 0.0;
                fStack000000000000011c = fStack000000000000011c + 0.0;
              }
              else {
                fStack0000000000000130 = fStack0000000000000130 - fVar47;
              }
            }
            else {
              if (uVar44 != 0xa0) {
                if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                uVar20 = FUN_075db9d4(uVar44,0);
                cVar25 = (char)unaff_x19[0x1e];
                if ((uVar20 & 1) != 0) goto LAB_087dd4b0;
              }
              fVar47 = ((fVar54 + fVar67) * fVar47) /
                       (float)(int)((iVar17 - (((uint)fStack0000000000000044 ^ 0xffffffff) & 1)) +
                                   iVar18);
              if (cVar25 == '\0') {
                fStack0000000000000130 = fStack0000000000000130 + fVar47;
                fStack0000000000000134 = fStack0000000000000134 + 0.0;
                fStack000000000000011c = fStack000000000000011c + 0.0;
              }
              else {
                fStack0000000000000130 = fStack0000000000000130 - fVar47;
              }
            }
          }
        }
      }
      else if (((uVar44 != 0xad) && (uVar44 != 0x200b)) && (uVar44 != 0x2060)) goto LAB_087db784;
    }
  }
  else if (uVar42 == 0x20) {
    fStack0000000000000130 = (fVar67 + fVar54 * 0.5) - (fVar64 + fVar60) * 0.5;
    fStack000000000000011c = 0.0;
    fStack0000000000000134 = 0.0;
  }
  uVar42 = (uint)*(undefined8 *)(lVar30 + 0x18);
  if (uVar42 <= uVar13) goto LAB_087ddd1c;
  lVar21 = lVar34 + uVar23 * 0x178;
  fVar67 = fStack00000000000000c0 + fStack0000000000000130;
  fVar54 = auVar70._0_4_ + fStack0000000000000134;
  fVar47 = in_stack_000000b8._4_4_ + fStack000000000000011c;
  if (*(char *)(lVar21 + 0x170) == '\0') goto LAB_087dc030;
  iVar17 = *piVar40;
  if (iVar17 == 0) {
    fVar69 = fVar65;
    fVar50 = fmodf(*(float *)((long)unaff_x19 + 0x34c) * (float)(int)uVar2,1.0);
    iVar18 = *(int *)((long)unaff_x19 + 0x344);
    if (iVar18 < 2) {
      if (iVar18 == 0) {
        lVar32 = lVar34 + uVar23 * 0x178;
        *(undefined4 *)(lVar32 + 100) = 0;
        *(undefined4 *)(lVar32 + 0x8c) = 0;
        *(undefined4 *)(lVar32 + 0xb4) = 0x3f800000;
        *(undefined4 *)(lVar32 + 0xdc) = 0x3f800000;
      }
      else if (iVar18 == 1) {
        lVar32 = lVar34 + uVar23 * 0x178;
        fVar69 = *(float *)(lVar32 + 0x48);
        pfVar33 = (float *)(lVar32 + 100);
        if (*(int *)((long)unaff_x19 + 0x29c) == 0x208) {
          lVar32 = lVar34 + uVar23 * 0x178;
          fVar55 = *(float *)(lVar32 + 0x70);
          *pfVar33 = fVar50 + ((fStack0000000000000130 + fVar69) - *(float *)(unaff_x19 + 0x9e)) /
                              (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar32 + 0x8c) =
               fVar50 + ((fStack0000000000000130 + fVar55) - *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar32 + 0xb4) =
               fVar50 + ((fStack0000000000000130 + *(float *)(lVar32 + 0x98)) -
                        *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar32 + 0xdc) =
               fVar50 + ((fStack0000000000000130 + *(float *)(lVar32 + 0xc0)) -
                        *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          fVar69 = fStack0000000000000130;
        }
        else {
          lVar32 = lVar34 + uVar23 * 0x178;
          fVar60 = fVar60 - fVar64;
          fVar55 = *(float *)(lVar32 + 0x70);
          fVar59 = *(float *)(lVar32 + 0x98);
          fVar62 = *(float *)(lVar32 + 0xc0);
          *pfVar33 = fVar50 + (fVar69 - fVar64) / fVar60;
          *(float *)(lVar32 + 0x8c) = fVar50 + (fVar55 - fVar64) / fVar60;
          fVar69 = fVar50 + (fVar59 - fVar64) / fVar60;
          *(float *)(lVar32 + 0xb4) = fVar69;
          *(float *)(lVar32 + 0xdc) = fVar50 + (fVar62 - fVar64) / fVar60;
        }
      }
    }
    else if (iVar18 == 2) {
      lVar32 = lVar34 + uVar23 * 0x178;
      *(float *)(lVar32 + 100) =
           fVar50 + ((fStack0000000000000130 + *(float *)(lVar32 + 0x48)) -
                    *(float *)(unaff_x19 + 0x9e)) /
                    (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar32 + 0x8c) =
           fVar50 + ((fStack0000000000000130 + *(float *)(lVar32 + 0x70)) -
                    *(float *)(unaff_x19 + 0x9e)) /
                    (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar32 + 0xb4) =
           fVar50 + ((fStack0000000000000130 + *(float *)(lVar32 + 0x98)) -
                    *(float *)(unaff_x19 + 0x9e)) /
                    (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar32 + 0xdc) =
           fVar50 + ((fStack0000000000000130 + *(float *)(lVar32 + 0xc0)) -
                    *(float *)(unaff_x19 + 0x9e)) /
                    (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      fVar69 = fStack0000000000000130;
    }
    else if (iVar18 == 3) {
      iVar18 = (int)unaff_x19[0x69];
      if (iVar18 < 2) {
        if (iVar18 == 0) {
          lVar32 = lVar34 + uVar23 * 0x178;
          *(undefined4 *)(lVar32 + 0x68) = 0;
          *(undefined4 *)(lVar32 + 0x90) = 0x3f800000;
          *(undefined4 *)(lVar32 + 0xb8) = 0;
          *(undefined4 *)(lVar32 + 0xe0) = 0x3f800000;
        }
        else if (iVar18 == 1) {
          lVar32 = lVar34 + uVar23 * 0x178;
          fVar55 = fVar55 - fVar59;
          fVar69 = (*(float *)(lVar32 + 0x74) - fVar59) / fVar55;
          fVar55 = fVar50 + (*(float *)(lVar32 + 0x4c) - fVar59) / fVar55;
          *(float *)(lVar32 + 0x68) = fVar55;
          *(float *)(lVar32 + 0xb8) = fVar55;
          goto LAB_087dbc90;
        }
      }
      else if (iVar18 == 2) {
        lVar32 = lVar34 + uVar23 * 0x178;
        fVar69 = fVar50 + (*(float *)(lVar32 + 0x4c) - *(float *)((long)unaff_x19 + 0x4f4)) /
                          (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4)
                          );
        *(float *)(lVar32 + 0x68) = fVar69;
        fVar55 = *(float *)((long)unaff_x19 + 0x4f4);
        fVar60 = *(float *)((long)unaff_x19 + 0x4fc);
        *(float *)(lVar32 + 0xb8) = fVar69;
        fVar69 = (*(float *)(lVar32 + 0x74) - fVar55) / (fVar60 - fVar55);
LAB_087dbc90:
        *(float *)(lVar32 + 0x90) = fVar50 + fVar69;
        *(float *)(lVar32 + 0xe0) = fVar50 + fVar69;
      }
      else if (iVar18 == 3) {
        if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_0897e2a8(*(undefined8 *)PTR_DAT_093376a0,0);
        uVar42 = (uint)*(undefined8 *)(lVar30 + 0x18);
      }
      if (uVar42 <= uVar13) goto LAB_087ddd1c;
      lVar32 = lVar34 + uVar23 * 0x178;
      fVar69 = *(float *)(lVar32 + 0x138);
      fVar60 = (1.0 - (*(float *)(lVar32 + 0x68) + *(float *)(lVar32 + 0x90)) * fVar69) * 0.5;
      fVar55 = fVar50 + *(float *)(lVar32 + 0x68) * fVar69 + fVar60;
      fVar50 = fVar50 + fVar60 + *(float *)(lVar32 + 0x90) * fVar69;
      *(float *)(lVar32 + 100) = fVar55;
      *(float *)(lVar32 + 0x8c) = fVar55;
      *(float *)(lVar32 + 0xb4) = fVar50;
      *(float *)(lVar32 + 0xdc) = fVar50;
    }
    iVar18 = (int)unaff_x19[0x69];
    if (iVar18 < 2) {
      if (iVar18 == 0) {
        if (uVar42 <= uVar13) goto LAB_087ddd1c;
        lVar32 = lVar34 + uVar23 * 0x178;
        *(undefined4 *)(lVar32 + 0x68) = 0;
        *(undefined4 *)(lVar32 + 0x90) = 0x3f800000;
        *(undefined4 *)(lVar32 + 0xb8) = 0x3f800000;
        *(undefined4 *)(lVar32 + 0xe0) = 0;
      }
      else if (iVar18 == 1) {
        if (uVar13 < uVar42) {
          lVar32 = lVar34 + uVar23 * 0x178;
          fVar63 = fVar63 - fVar65;
          fVar55 = (*(float *)(lVar32 + 0x4c) - fVar65) / fVar63;
          fVar63 = (*(float *)(lVar32 + 0x74) - fVar65) / fVar63;
          *(float *)(lVar32 + 0x68) = fVar55;
          goto LAB_087dbe08;
        }
        goto LAB_087ddd1c;
      }
    }
    else if (iVar18 == 2) {
      if (uVar42 <= uVar13) goto LAB_087ddd1c;
      lVar32 = lVar34 + uVar23 * 0x178;
      fVar55 = (*(float *)(lVar32 + 0x4c) - *(float *)((long)unaff_x19 + 0x4f4)) /
               (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
      *(float *)(lVar32 + 0x68) = fVar55;
      fVar69 = *(float *)((long)unaff_x19 + 0x4fc);
      fVar63 = (*(float *)(lVar32 + 0x74) - *(float *)((long)unaff_x19 + 0x4f4)) /
               (fVar69 - *(float *)((long)unaff_x19 + 0x4f4));
LAB_087dbe08:
      *(float *)(lVar32 + 0x90) = fVar63;
      *(float *)(lVar32 + 0xb8) = fVar63;
      *(float *)(lVar32 + 0xe0) = fVar55;
    }
    else if (iVar18 == 3) {
      if (uVar42 <= uVar13) goto LAB_087ddd1c;
      lVar32 = lVar34 + uVar23 * 0x178;
      fVar55 = *(float *)(lVar32 + 0x138);
      fVar69 = (1.0 - (*(float *)(lVar32 + 100) + *(float *)(lVar32 + 0xb4)) / fVar55) * 0.5;
      fVar65 = *(float *)(lVar32 + 100) / fVar55 + fVar69;
      fVar69 = fVar69 + *(float *)(lVar32 + 0xb4) / fVar55;
      *(float *)(lVar32 + 0x68) = fVar65;
      *(float *)(lVar32 + 0xe0) = fVar65;
      *(float *)(lVar32 + 0x90) = fVar69;
      *(float *)(lVar32 + 0xb8) = fVar69;
      fVar69 = 0.5;
    }
    fVar65 = fVar69;
    if (uVar42 <= uVar13) goto LAB_087ddd1c;
    lVar32 = lVar34 + uVar23 * 0x178;
    fVar69 = *(float *)(lVar32 + 0x13c) * (1.0 - *(float *)(unaff_x19 + 0x60));
    if ((*(char *)(lVar32 + 0x34) == '\0') &&
       ((*(byte *)(lVar34 + uVar23 * 0x178 + 0x16c) & 1) != 0)) {
      fVar69 = -fVar69;
    }
    fVar55 = fVar66;
    if (((iVar16 == 2) || (fVar55 = fVar49, iVar16 == 1)) || (fVar55 = fVar66 / fVar48, iVar16 == 0)
       ) {
      fVar69 = fVar55 * fVar69;
    }
    lVar32 = lVar34 + uVar23 * 0x178;
    *(float *)(lVar32 + 0x60) = fVar69;
    *(float *)(lVar32 + 0x88) = fVar69;
    *(float *)(lVar32 + 0xb0) = fVar69;
    *(float *)(lVar32 + 0xd8) = fVar69;
  }
  if (((int)uVar13 < (int)unaff_x19[0x6c]) &&
     ((int)fStack00000000000000fc < *(int *)((long)unaff_x19 + 0x364))) {
    if (((int)unaff_x19[0x6d] <= (int)uVar2) || ((int)unaff_x19[0x62] == 5)) {
      if (((int)uVar2 < (int)unaff_x19[0x6d]) && ((int)unaff_x19[0x62] == 5)) {
        if (uVar13 < uVar42) {
          if (*(uint *)(lVar34 + uVar23 * 0x178 + 0x40) == uStack0000000000000040)
          goto LAB_087dcd00;
          goto LAB_087dbf10;
        }
        goto LAB_087ddd1c;
      }
      goto LAB_087dbf10;
    }
    if (uVar42 <= uVar13) goto LAB_087ddd1c;
LAB_087dcd00:
    lVar21 = lVar34 + uVar23 * 0x178;
    fVar65 = fVar47 + *(float *)(lVar21 + 0x78);
    *(ulong *)(lVar21 + 0x48) =
         CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar21 + 0x48) >> 0x20),
                  fVar67 + (float)*(undefined8 *)(lVar21 + 0x48));
    *(float *)(lVar21 + 0x50) = fVar47 + *(float *)(lVar21 + 0x50);
    *(ulong *)(lVar21 + 0x70) =
         CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar21 + 0x70) >> 0x20),
                  fVar67 + (float)*(undefined8 *)(lVar21 + 0x70));
    *(float *)(lVar21 + 0x78) = fVar65;
    *(ulong *)(lVar21 + 0x98) =
         CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar21 + 0x98) >> 0x20),
                  fVar67 + (float)*(undefined8 *)(lVar21 + 0x98));
    *(float *)(lVar21 + 0xa0) = fVar47 + *(float *)(lVar21 + 0xa0);
    *(ulong *)(lVar21 + 0xc0) =
         CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar21 + 0xc0) >> 0x20),
                  fVar67 + (float)*(undefined8 *)(lVar21 + 0xc0));
    *(float *)(lVar21 + 200) = fVar47 + *(float *)(lVar21 + 200);
  }
  else {
LAB_087dbf10:
    if (uVar42 <= uVar13) goto LAB_087ddd1c;
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      uVar42 = *(uint *)(lVar30 + 0x18);
      DAT_098854f1 = '\x01';
    }
    puVar9 = PTR_DAT_09285d60;
    uVar46 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8) + 1);
    *(undefined8 *)(lVar34 + uVar23 * 0x178 + 0x48) =
         **(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8);
    *(undefined4 *)(lVar34 + uVar23 * 0x178 + 0x50) = uVar46;
    if (uVar42 <= uVar13) goto LAB_087ddd1c;
    lVar32 = lVar34 + uVar23 * 0x178;
    uVar46 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
    *(undefined8 *)(lVar32 + 0x70) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
    *(undefined4 *)(lVar32 + 0x78) = uVar46;
    uVar46 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
    *(undefined8 *)(lVar32 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
    *(undefined4 *)(lVar32 + 0xa0) = uVar46;
    uVar61 = **(undefined8 **)(*(long *)puVar9 + 0xb8);
    uVar46 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
    *(undefined1 *)(lVar21 + 0x170) = 0;
    *(undefined8 *)(lVar32 + 0xc0) = uVar61;
    *(undefined4 *)(lVar32 + 200) = uVar46;
  }
  if (iVar17 == 0) {
    puVar27 = (undefined8 *)(*unaff_x19 + 0x8d8);
  }
  else {
    if (iVar17 != 1) goto LAB_087dc030;
    puVar27 = (undefined8 *)(*unaff_x19 + 0x8f8);
  }
  (*(code *)*puVar27)();
LAB_087dc030:
  if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
  goto LAB_087ddb5c;
  if (*(uint *)(lVar21 + 0x18) <= uVar13) goto LAB_087ddd1c;
  lVar21 = lVar21 + uVar23 * 0x178;
  uVar61 = *(undefined8 *)(lVar21 + 0x114);
  *(float *)(lVar21 + 0x11c) = fVar47 + *(float *)(lVar21 + 0x11c);
  *(undefined8 *)(lVar21 + 0x114) =
       CONCAT44(fVar54 + (float)((ulong)uVar61 >> 0x20),fVar67 + (float)uVar61);
  if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
  goto LAB_087ddb5c;
  if (*(uint *)(lVar21 + 0x18) <= uVar13) goto LAB_087ddd1c;
  lVar21 = lVar21 + uVar23 * 0x178;
  *(ulong *)(lVar21 + 0x108) =
       CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar21 + 0x108) >> 0x20),
                fVar67 + (float)*(undefined8 *)(lVar21 + 0x108));
  *(float *)(lVar21 + 0x110) = fVar47 + *(float *)(lVar21 + 0x110);
  if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
  goto LAB_087ddb5c;
  if (*(uint *)(lVar21 + 0x18) <= uVar13) goto LAB_087ddd1c;
  lVar21 = lVar21 + uVar23 * 0x178;
  *(ulong *)(lVar21 + 0x120) =
       CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar21 + 0x120) >> 0x20),
                fVar67 + (float)*(undefined8 *)(lVar21 + 0x120));
  *(float *)(lVar21 + 0x128) = fVar47 + *(float *)(lVar21 + 0x128);
  if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
  goto LAB_087ddb5c;
  if (*(uint *)(lVar21 + 0x18) <= uVar13) goto LAB_087ddd1c;
  lVar21 = lVar21 + uVar23 * 0x178;
  uVar61 = *(undefined8 *)(lVar21 + 300);
  *(float *)(lVar21 + 0x134) = fVar47 + *(float *)(lVar21 + 0x134);
  *(undefined8 *)(lVar21 + 300) =
       CONCAT44(fVar54 + (float)((ulong)uVar61 >> 0x20),fVar67 + (float)uVar61);
  lVar21 = unaff_x19[0x74];
  if ((lVar21 == 0) || (lVar32 = *(long *)(lVar21 + 0x38), lVar32 == 0)) goto LAB_087ddb5c;
  uVar42 = *(uint *)(lVar32 + 0x18);
  if (uVar42 <= uVar13) goto LAB_087ddd1c;
  lVar37 = lVar32 + 0x20 + uVar23 * 0x178;
  uVar61 = *(undefined8 *)(lVar37 + 0x118);
  fVar47 = (float)uVar61;
  fVar55 = fVar54 + *(float *)(lVar37 + 0x128);
  auVar58 = ZEXT416((uint)fVar55);
  auVar53._0_8_ = CONCAT44(fVar67 + (float)((ulong)uVar61 >> 0x20),fVar67 + fVar47);
  auVar53._8_4_ = fVar54 + (float)*(undefined8 *)(lVar37 + 0x120);
  auVar53._12_4_ = fVar54 + (float)((ulong)*(undefined8 *)(lVar37 + 0x120) >> 0x20);
  *(float *)(lVar37 + 0x128) = fVar55;
  *(long *)(lVar37 + 0x120) = auVar53._8_8_;
  *(undefined8 *)(lVar37 + 0x118) = auVar53._0_8_;
  if (uVar2 == uVar28) {
    uVar28 = *(int *)(in_stack_000001d0 + 7) - 1;
    if (uVar13 == uVar28) goto LAB_087dc238;
  }
  else {
    lVar21 = *(long *)(lVar21 + 0x50);
    if (lVar21 == 0) goto LAB_087ddb5c;
    if (*(uint *)(lVar21 + 0x18) <= uVar28) goto LAB_087ddd1c;
    lVar37 = lVar21 + 0x20 + (long)(int)uVar28 * 0x60;
    fVar65 = *(float *)(lVar37 + 0x3c);
    auVar58._0_8_ =
         CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar37 + 0x30) >> 0x20),
                  fVar54 + (float)*(undefined8 *)(lVar37 + 0x30));
    auVar58._8_8_ = 0;
    fVar55 = fVar54 + *(float *)(lVar37 + 0x38);
    fVar47 = fVar67 + fVar65;
    *(ulong *)(lVar37 + 0x30) = auVar58._0_8_;
    *(float *)(lVar37 + 0x38) = fVar55;
    *(float *)(lVar37 + 0x3c) = fVar47;
    if (uVar42 <= *(uint *)(lVar37 + 0x18)) goto LAB_087ddd1c;
    lVar21 = lVar21 + 0x20 + (long)(int)uVar28 * 0x60;
    uVar46 = *(undefined4 *)(lVar32 + 0x20 + (long)(int)*(uint *)(lVar37 + 0x18) * 0x178 + 0xf4);
    *(float *)(lVar21 + 0x54) = fVar55;
    *(undefined4 *)(lVar21 + 0x50) = uVar46;
    lVar21 = unaff_x19[0x74];
    if ((lVar21 == 0) || (lVar32 = *(long *)(lVar21 + 0x50), lVar32 == 0)) goto LAB_087ddb5c;
    if (*(uint *)(lVar32 + 0x18) <= uVar28) goto LAB_087ddd1c;
    lVar21 = *(long *)(lVar21 + 0x38);
    if (lVar21 == 0) goto LAB_087ddb5c;
    uVar42 = *(uint *)(lVar32 + 0x20 + (long)(int)uVar28 * 0x60 + 0x24);
    if (*(uint *)(lVar21 + 0x18) <= uVar42) goto LAB_087ddd1c;
    lVar32 = lVar32 + 0x20 + (long)(int)uVar28 * 0x60;
    *(undefined4 *)(lVar32 + 0x58) = *(undefined4 *)(lVar21 + (long)(int)uVar42 * 0x178 + 0x120);
    *(undefined4 *)(lVar32 + 0x5c) = *(undefined4 *)(lVar32 + 0x30);
    uVar28 = *(int *)(in_stack_000001d0 + 7) - 1;
LAB_087dc238:
    if (uVar13 == uVar28) {
      lVar21 = unaff_x19[0x74];
      if ((lVar21 == 0) || (lVar32 = *(long *)(lVar21 + 0x50), lVar32 == 0)) goto LAB_087ddb5c;
      if (*(uint *)(lVar32 + 0x18) <= uVar2) goto LAB_087ddd1c;
      lVar37 = lVar32 + 0x20 + (long)(int)uVar2 * 0x60;
      fVar65 = *(float *)(lVar37 + 0x3c);
      auVar58._0_8_ =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar37 + 0x30) >> 0x20),
                    fVar54 + (float)*(undefined8 *)(lVar37 + 0x30));
      auVar58._8_8_ = 0;
      fVar54 = fVar54 + *(float *)(lVar37 + 0x38);
      fVar47 = fVar67 + fVar65;
      *(ulong *)(lVar37 + 0x30) = auVar58._0_8_;
      *(float *)(lVar37 + 0x38) = fVar54;
      *(float *)(lVar37 + 0x3c) = fVar47;
      lVar21 = *(long *)(lVar21 + 0x38);
      if (lVar21 == 0) goto LAB_087ddb5c;
      uVar28 = *(uint *)(lVar32 + 0x20 + (long)(int)uVar2 * 0x60 + 0x18);
      if (*(uint *)(lVar21 + 0x18) <= uVar28) goto LAB_087ddd1c;
      *(undefined4 *)(lVar37 + 0x50) = *(undefined4 *)(lVar21 + (long)(int)uVar28 * 0x178 + 0x114);
      *(float *)(lVar37 + 0x54) = fVar54;
      lVar21 = unaff_x19[0x74];
      if ((lVar21 == 0) || (lVar32 = *(long *)(lVar21 + 0x50), lVar32 == 0)) goto LAB_087ddb5c;
      if (*(uint *)(lVar32 + 0x18) <= uVar2) goto LAB_087ddd1c;
      lVar21 = *(long *)(lVar21 + 0x38);
      if (lVar21 == 0) goto LAB_087ddb5c;
      uVar28 = *(uint *)(lVar32 + 0x20 + (long)(int)uVar2 * 0x60 + 0x24);
      if (*(uint *)(lVar21 + 0x18) <= uVar28) goto LAB_087ddd1c;
      lVar32 = lVar32 + 0x20 + (long)(int)uVar2 * 0x60;
      *(undefined4 *)(lVar32 + 0x58) = *(undefined4 *)(lVar21 + (long)(int)uVar28 * 0x178 + 0x120);
      *(undefined4 *)(lVar32 + 0x5c) = *(undefined4 *)(lVar32 + 0x30);
    }
  }
  if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar20 = FUN_075da96c(uVar44,0);
  if (((((uVar20 & 1) == 0) && (1 < uVar44 - 0x2010)) && (uVar44 != 0xad)) && (uVar44 != 0x2d)) {
    if (bVar8) {
      if (((uVar13 != 0) && ((int)uVar13 < (int)(*(uint *)(lVar30 + 0x18) - 1))) &&
         (((int)uVar13 < *(int *)(in_stack_000001d0 + 7) && ((uVar44 == 0x2019 || (uVar44 == 0x27)))
          ))) {
        if (*(uint *)(lVar30 + 0x18) <= uVar13 - 1) goto LAB_087ddd1c;
        uVar3 = *(undefined2 *)(lVar34 + (ulong)(uVar13 - 1) * 0x178 + 4);
        if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar20 = FUN_075da96c(uVar3,0);
        if ((uVar20 & 1) != 0) {
          if (*(uint *)(lVar30 + 0x18) <= uVar13 + 1) goto LAB_087ddd1c;
          uVar3 = *(undefined2 *)(lVar34 + (ulong)(uVar13 + 1) * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar20 = FUN_075da96c(uVar3,0);
          if ((uVar20 & 1) != 0) goto LAB_087dc550;
        }
      }
LAB_087dd290:
      if (uVar13 == *(int *)(in_stack_000001d0 + 7) - 1U) {
        if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar20 = FUN_075da96c(uVar44,0);
        uVar28 = uVar13;
        if ((uVar20 & 1) == 0) goto LAB_087dd2d0;
      }
      else {
LAB_087dd2d0:
        uVar28 = uVar13 - 1;
      }
      lVar21 = unaff_x19[0x74];
      if (lVar21 != 0) {
        lVar32 = *(long *)(lVar21 + 0x40);
        if (lVar32 != 0) {
          uVar42 = *(uint *)(lVar21 + 0x24);
          iVar17 = *(int *)(lVar32 + 0x18);
          if (iVar17 < (int)(uVar42 + 1)) {
            if (*(int *)(*(long *)PTR_DAT_093375f0 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            FUN_05202298((long *)(lVar21 + 0x40),iVar17 + 1,*(undefined8 *)PTR_DAT_093375e8);
            lVar21 = unaff_x19[0x74];
            if (lVar21 == 0) goto LAB_087ddb5c;
          }
          lVar21 = *(long *)(lVar21 + 0x40);
          if (lVar21 != 0) {
            if (uVar42 < *(uint *)(lVar21 + 0x18)) {
              lVar21 = lVar21 + (long)(int)uVar42 * 0x18;
              *(long **)(lVar21 + 0x20) = unaff_x19;
              *(uint *)(lVar21 + 0x28) = uVar14;
              *(uint *)(lVar21 + 0x2c) = uVar28;
              *(uint *)(lVar21 + 0x30) = (uVar28 - uVar14) + 1;
              thunk_FUN_040ec700();
              lVar21 = unaff_x19[0x74];
              if (lVar21 != 0) {
                lVar32 = *(long *)(lVar21 + 0x50);
                *(int *)(lVar21 + 0x24) = *(int *)(lVar21 + 0x24) + 1;
                if (lVar32 != 0) {
                  if (uVar2 < *(uint *)(lVar32 + 0x18)) {
                    bVar8 = false;
                    goto LAB_087dc464;
                  }
                  goto LAB_087ddd1c;
                }
              }
              goto LAB_087ddb5c;
            }
            goto LAB_087ddd1c;
          }
        }
      }
      goto LAB_087ddb5c;
    }
    if (uVar13 == 0) {
      if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      bVar12 = FUN_075da8c4(uVar44,0);
      if ((((uVar44 == 0x200b | bVar12 ^ 0xff | bVar11) & 1) != 0) ||
         (*(int *)(in_stack_000001d0 + 7) == 1)) goto LAB_087dd290;
    }
    bVar8 = false;
  }
  else {
    if (!bVar8) {
      uVar14 = uVar13;
    }
    if (uVar13 != *(int *)(in_stack_000001d0 + 7) - 1U) {
LAB_087dc550:
      bVar8 = true;
      goto LAB_087dc558;
    }
    lVar21 = unaff_x19[0x74];
    if (lVar21 == 0) goto LAB_087ddb5c;
    lVar32 = *(long *)(lVar21 + 0x40);
    if (lVar32 == 0) goto LAB_087ddb5c;
    uVar28 = *(uint *)(lVar21 + 0x24);
    iVar17 = *(int *)(lVar32 + 0x18);
    if (iVar17 < (int)(uVar28 + 1)) {
      if (*(int *)(*(long *)PTR_DAT_093375f0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_05202298((long *)(lVar21 + 0x40),iVar17 + 1,*(undefined8 *)PTR_DAT_093375e8);
      lVar21 = unaff_x19[0x74];
      if (lVar21 == 0) goto LAB_087ddb5c;
    }
    lVar21 = *(long *)(lVar21 + 0x40);
    if (lVar21 == 0) goto LAB_087ddb5c;
    if (*(uint *)(lVar21 + 0x18) <= uVar28) goto LAB_087ddd1c;
    lVar21 = lVar21 + (long)(int)uVar28 * 0x18;
    *(long **)(lVar21 + 0x20) = unaff_x19;
    *(uint *)(lVar21 + 0x28) = uVar14;
    *(uint *)(lVar21 + 0x2c) = uVar13;
    *(uint *)(lVar21 + 0x30) = (uVar13 - uVar14) + 1;
    thunk_FUN_040ec700();
    lVar21 = unaff_x19[0x74];
    if (lVar21 == 0) goto LAB_087ddb5c;
    lVar32 = *(long *)(lVar21 + 0x50);
    *(int *)(lVar21 + 0x24) = *(int *)(lVar21 + 0x24) + 1;
    if (lVar32 == 0) goto LAB_087ddb5c;
    if (*(uint *)(lVar32 + 0x18) <= uVar2) goto LAB_087ddd1c;
    bVar8 = true;
LAB_087dc464:
    lVar32 = lVar32 + (long)(int)uVar2 * 0x60;
    fStack00000000000000fc = (float)((int)fStack00000000000000fc + 1);
    *(int *)(lVar32 + 0x34) = *(int *)(lVar32 + 0x34) + 1;
  }
LAB_087dc558:
  lVar21 = unaff_x19[0x74];
  if ((lVar21 == 0) || (lVar32 = *(long *)(lVar21 + 0x38), lVar32 == 0)) goto LAB_087ddb5c;
  if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_087ddd1c;
  lVar37 = lVar32 + 0x20;
  if ((*(byte *)(lVar37 + uVar23 * 0x178 + 0x16c) >> 2 & 1) == 0) {
    if (bVar10) {
      if (*(uint *)(lVar32 + 0x18) <= (uint)((long)(int)uVar13 + -1)) goto LAB_087ddd1c;
      lVar37 = lVar37 + ((long)(int)uVar13 + -1) * 0x178;
      lVar32 = *unaff_x19;
      fVar65 = *(float *)(lVar37 + 0x100);
      uVar46 = *(undefined4 *)(lVar37 + 0x13c);
LAB_087dc824:
      pcVar31 = *(code **)(lVar32 + 0x908);
LAB_087dc85c:
      auVar58 = ZEXT416((uint)fStack0000000000000064);
      fVar47 = fStack0000000000000068;
      (*pcVar31)(fStack000000000000006c,auVar58,fStack0000000000000068,fVar65,fStack0000000000000150
                 ,0,fVar68,uVar46);
      lVar21 = *(long *)PTR_DAT_09337670;
      if (*(int *)(lVar21 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar21 = *(long *)PTR_DAT_09337670;
      }
      in_stack_00000180._4_4_ = 0.0;
      fStack000000000000014c = 0.0;
      fStack0000000000000150 = *(float *)(*(long *)(lVar21 + 0xb8) + 0x1730);
    }
    bVar10 = false;
  }
  else {
    lVar32 = lVar37 + uVar23 * 0x178;
    *(int *)(lVar32 + 0x148) = iVar15;
    iVar17 = *(int *)(lVar32 + 0x40);
    if ((((int)unaff_x19[0x6c] < (int)uVar13) || ((int)unaff_x19[0x6d] < (int)uVar2)) ||
       (((int)unaff_x19[0x62] == 5 && (iVar17 + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar11 & 1) == 0 && uVar44 != 0x200b) {
      fVar47 = *(float *)(lVar37 + uVar23 * 0x178 + 0x13c);
      if (in_stack_00000180._4_4_ <= fVar47) {
        in_stack_00000180._4_4_ = fVar47;
      }
      if (fStack000000000000014c <= ABS(fVar69)) {
        fStack000000000000014c = ABS(fVar69);
      }
      fVar47 = in_stack_00000180._4_4_;
      if ((float)iVar17 != fStack0000000000000060) {
        if (*(int *)(*(long *)PTR_DAT_09337670 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar21 = unaff_x19[0x74];
          if (lVar21 == 0) goto LAB_087ddb5c;
          lVar32 = *(long *)(*(long *)PTR_DAT_09337670 + 0xb8);
        }
        else {
          lVar32 = *(long *)(*(long *)PTR_DAT_09337670 + 0xb8);
        }
        fStack0000000000000150 = *(float *)(lVar32 + 0x1730);
      }
      lVar21 = *(long *)(lVar21 + 0x38);
      if (lVar21 == 0) goto LAB_087ddb5c;
      if (*(uint *)(lVar21 + 0x18) <= uVar13) goto LAB_087ddd1c;
      if (unaff_x19[0x1f] == 0) goto LAB_087ddb5c;
      fVar60 = *(float *)(lVar21 + uVar23 * 0x178 + 0x144);
      fVar55 = (float)FUN_08a73bcc(unaff_x19[0x1f] + 0x28,0);
      fVar60 = fVar60 + in_stack_00000180._4_4_ * fVar55;
      if (fVar60 <= fStack0000000000000150) {
        fStack0000000000000150 = fVar60;
      }
      auVar58 = ZEXT416((uint)fStack0000000000000150);
      fStack0000000000000060 = (float)iVar17;
    }
    if (bVar10) {
LAB_087dc7e4:
      if (*(int *)(in_stack_000001d0 + 7) != 1) {
        if ((uVar13 != uVar4) && ((int)uVar13 < (int)uVar5)) {
          if (bVar1) {
            if ((int)uVar13 < *(int *)(in_stack_000001d0 + 7) + -1) {
              if ((unaff_x19[0x74] == 0) ||
                 (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0)) goto LAB_087ddb5c;
              if (*(uint *)(lVar21 + 0x18) <= uVar13 + 1) goto LAB_087ddd1c;
              uVar20 = UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator__get_restingHandAxis2DAction
                                 (uStack000000000000008c,
                                  *(undefined4 *)(lVar21 + (ulong)(uVar13 + 1) * 0x178 + 0x164),0);
              if ((uVar20 & 1) == 0) {
                if ((unaff_x19[0x74] != 0) &&
                   (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 != 0)) {
                  if (uVar13 < *(uint *)(lVar21 + 0x18)) {
                    lVar21 = lVar21 + uVar23 * 0x178;
                    fVar65 = *(float *)(lVar21 + 0x120);
                    uVar46 = *(undefined4 *)(lVar21 + 0x15c);
                    pcVar31 = *(code **)(*unaff_x19 + 0x908);
                    goto LAB_087dc85c;
                  }
                  goto LAB_087ddd1c;
                }
                goto LAB_087ddb5c;
              }
            }
            bVar10 = true;
            goto LAB_087dc8a8;
          }
          if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
          goto LAB_087ddb5c;
          if ((uint)((long)(int)uVar13 + -1) < *(uint *)(lVar21 + 0x18)) {
            lVar21 = lVar21 + ((long)(int)uVar13 + -1) * 0x178;
            goto LAB_087dc818;
          }
          goto LAB_087ddd1c;
        }
        lVar21 = unaff_x19[0x74];
        if ((bVar11 & 1) == 0 && uVar44 != 0x200b) {
          if ((lVar21 == 0) || (lVar21 = *(long *)(lVar21 + 0x38), lVar21 == 0)) goto LAB_087ddb5c;
          if (*(uint *)(lVar21 + 0x18) <= uVar13) goto LAB_087ddd1c;
          lVar21 = lVar21 + uVar23 * 0x178;
        }
        else {
          if ((lVar21 == 0) || (lVar21 = *(long *)(lVar21 + 0x38), lVar21 == 0)) goto LAB_087ddb5c;
          if (*(uint *)(lVar21 + 0x18) <= uVar5) goto LAB_087ddd1c;
          lVar21 = lVar21 + (long)(int)uVar5 * 0x178;
        }
        fVar65 = *(float *)(lVar21 + 0x120);
        uVar46 = *(undefined4 *)(lVar21 + 0x15c);
        pcVar31 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_087dc85c;
      }
      if ((unaff_x19[0x74] != 0) && (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 != 0)) {
        if (uVar13 < *(uint *)(lVar21 + 0x18)) {
          lVar21 = lVar21 + uVar23 * 0x178;
LAB_087dc818:
          lVar32 = *unaff_x19;
          fVar65 = *(float *)(lVar21 + 0x120);
          uVar46 = *(undefined4 *)(lVar21 + 0x15c);
          goto LAB_087dc824;
        }
        goto LAB_087ddd1c;
      }
      goto LAB_087ddb5c;
    }
    if ((((bVar1) && ((int)uVar13 <= (int)uVar5)) && ((uVar44 & 0xfffe) != 10)) && (uVar44 != 0xd))
    {
      if (uVar13 == uVar5) {
        if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar20 = FUN_075db9d4(uVar44,0);
        if ((uVar20 & 1) != 0) goto LAB_087dc774;
      }
      if ((unaff_x19[0x74] != 0) && (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 != 0)) {
        if (uVar13 < *(uint *)(lVar21 + 0x18)) {
          lVar21 = lVar21 + uVar23 * 0x178;
          fVar68 = *(float *)(lVar21 + 0x15c);
          fVar55 = fVar68;
          if (in_stack_00000180._4_4_ != 0.0) {
            fVar55 = in_stack_00000180._4_4_;
          }
          auVar58 = ZEXT416((uint)fVar55);
          fVar60 = fVar69;
          if (in_stack_00000180._4_4_ != 0.0) {
            fVar60 = fStack000000000000014c;
          }
          fStack0000000000000068 = 0.0;
          fStack000000000000006c = *(float *)(lVar21 + 0x114);
          uStack000000000000008c = *(undefined4 *)(lVar21 + 0x164);
          fStack0000000000000064 = fStack0000000000000150;
          fStack000000000000014c = fVar60;
          in_stack_00000180._4_4_ = fVar55;
          goto LAB_087dc7e4;
        }
        goto LAB_087ddd1c;
      }
      goto LAB_087ddb5c;
    }
LAB_087dc774:
    bVar10 = false;
  }
LAB_087dc8a8:
  if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
  goto LAB_087ddb5c;
  if (*(uint *)(lVar21 + 0x18) <= uVar13) goto LAB_087ddd1c;
  if (lVar36 == 0) goto LAB_087ddb5c;
  uVar28 = *(uint *)(lVar21 + uVar23 * 0x178 + 0x18c);
  fVar55 = (float)FUN_08a73bdc(lVar36 + 0x28,0);
  if ((uVar28 >> 6 & 1) == 0) {
    if (bVar6) {
      if ((unaff_x19[0x74] == 0) || (lVar36 = *(long *)(unaff_x19[0x74] + 0x38), lVar36 == 0))
      goto LAB_087ddb5c;
      if (*(uint *)(lVar36 + 0x18) <= (uint)((long)(int)uVar13 + -1)) goto LAB_087ddd1c;
      lVar36 = lVar36 + ((long)(int)uVar13 + -1) * 0x178;
LAB_087dcb5c:
      fVar60 = *(float *)(lVar36 + 0x144);
      lVar21 = *unaff_x19;
      fVar65 = *(float *)(lVar36 + 0x120);
LAB_087dcdb8:
      auVar58 = ZEXT416((uint)fStack00000000000000a0);
      fVar47 = fStack0000000000000090;
      (**(code **)(lVar21 + 0x908))
                (in_stack_00000098._4_4_,auVar58,fStack0000000000000090,fVar65,
                 in_stack_000000a8._4_4_ * fVar55 + fVar60,0,in_stack_000000a8._4_4_,
                 in_stack_000000a8._4_4_);
    }
LAB_087dcdf4:
    bVar6 = false;
  }
  else {
    lVar21 = unaff_x19[0x74];
    if ((lVar21 == 0) || (lVar32 = *(long *)(lVar21 + 0x38), lVar32 == 0)) goto LAB_087ddb5c;
    if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_087ddd1c;
    *(int *)(lVar32 + 0x20 + uVar23 * 0x178 + 0x150) = iVar15;
    if ((((int)unaff_x19[0x6c] < (int)uVar13) || ((int)unaff_x19[0x6d] < (int)uVar2)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar32 + 0x20 + uVar23 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((((bool)(bVar6 | bVar1 ^ 1U)) || ((int)uVar5 < (int)uVar13)) || ((uVar44 & 0xfffe) == 10))
       || (uVar44 == 0xd)) {
LAB_087dc9f4:
      if (!bVar6) goto LAB_087dcdf4;
    }
    else {
      if (uVar13 == uVar5) {
        if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar20 = FUN_075db9d4(uVar44,0);
        if ((uVar20 & 1) != 0) goto LAB_087dc9f4;
        lVar21 = unaff_x19[0x74];
        if (lVar21 == 0) goto LAB_087ddb5c;
      }
      lVar21 = *(long *)(lVar21 + 0x38);
      if (lVar21 == 0) goto LAB_087ddb5c;
      if (*(uint *)(lVar21 + 0x18) <= uVar13) goto LAB_087ddd1c;
      lVar21 = lVar21 + uVar23 * 0x178;
      in_stack_000000a8._4_4_ = *(float *)(lVar21 + 0x15c);
      fStack0000000000000050 = *(float *)(lVar21 + 0x144);
      auVar58 = ZEXT416((uint)fStack0000000000000050);
      fVar47 = fVar55 * in_stack_000000a8._4_4_ + fStack0000000000000050;
      fStack0000000000000090 = 0.0;
      fStack0000000000000054 = *(float *)(lVar21 + 0x58);
      in_stack_00000098._4_4_ = *(float *)(lVar21 + 0x114);
      fStack00000000000000a0 = fVar47;
    }
    iVar17 = *(int *)(in_stack_000001d0 + 7);
    if (iVar17 == 1) {
LAB_087dcb34:
      if ((unaff_x19[0x74] != 0) && (lVar36 = *(long *)(unaff_x19[0x74] + 0x38), lVar36 != 0)) {
        if (uVar13 < *(uint *)(lVar36 + 0x18)) {
          lVar36 = lVar36 + uVar23 * 0x178;
          goto LAB_087dcb5c;
        }
        goto LAB_087ddd1c;
      }
      goto LAB_087ddb5c;
    }
    if (uVar13 == uVar4) {
      lVar36 = unaff_x19[0x74];
      if ((uVar44 != 0x200b & (bVar11 ^ 0xff)) == 0) goto LAB_087dcb98;
LAB_087dcd80:
      if ((lVar36 != 0) && (lVar36 = *(long *)(lVar36 + 0x38), lVar36 != 0)) {
        if (uVar13 < *(uint *)(lVar36 + 0x18)) {
          lVar36 = lVar36 + uVar23 * 0x178;

          UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewOneHandedScale_00000C68_BurstDirectCall__Invoke
          :
          fVar60 = *(float *)(lVar36 + 0x144);
          lVar21 = *unaff_x19;
          fVar65 = *(float *)(lVar36 + 0x120);
          goto LAB_087dcdb8;
        }
        goto LAB_087ddd1c;
      }
      goto LAB_087ddb5c;
    }
    if ((int)uVar13 < iVar17) {
      if ((unaff_x19[0x74] != 0) && (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 != 0)) {
        if (uVar13 + 1 < *(uint *)(lVar21 + 0x18)) {
          if (*(float *)(lVar21 + (ulong)(uVar13 + 1) * 0x178 + 0x58) == fStack0000000000000054) {
            if (*(int *)(*(long *)PTR_DAT_093375b0 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            auVar58 = ZEXT416((uint)fStack0000000000000050);
            uVar20 = FUN_087f05f0(0);
            if ((uVar20 & 1) != 0) {
              iVar17 = *(int *)(in_stack_000001d0 + 7);
              goto LAB_087dcc34;
            }
          }
          lVar36 = unaff_x19[0x74];
          if ((int)uVar13 <= (int)uVar5) goto LAB_087dcd80;
LAB_087dcb98:
          if ((lVar36 != 0) && (lVar36 = *(long *)(lVar36 + 0x38), lVar36 != 0)) {
            if (uVar5 < *(uint *)(lVar36 + 0x18)) {
              lVar36 = lVar36 + (long)(int)uVar5 * 0x178;
              goto 
              UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewOneHandedScale_00000C68_BurstDirectCall__Invoke
              ;
            }
            goto LAB_087ddd1c;
          }
          goto LAB_087ddb5c;
        }
        goto LAB_087ddd1c;
      }
      goto LAB_087ddb5c;
    }
LAB_087dcc34:
    if ((int)uVar13 < iVar17) {
      iVar17 = FUN_089d0058(lVar36,0);
      if (*(uint *)(lVar30 + 0x18) <= uVar13 + 1) goto LAB_087ddd1c;
      lVar36 = *(long *)(lVar34 + (ulong)(uVar13 + 1) * 0x178 + 0x20);
      if (lVar36 == 0) goto LAB_087ddb5c;
      iVar18 = FUN_089d0058(lVar36,0);
      if (iVar17 != iVar18) goto LAB_087dcb34;
    }
    if (!bVar1) {
      if ((unaff_x19[0x74] != 0) && (lVar36 = *(long *)(unaff_x19[0x74] + 0x38), lVar36 != 0)) {
        if ((uint)((long)(int)uVar13 + -1) < *(uint *)(lVar36 + 0x18)) {
          lVar36 = lVar36 + ((long)(int)uVar13 + -1) * 0x178;
          goto LAB_087dcb5c;
        }
        goto LAB_087ddd1c;
      }
      goto LAB_087ddb5c;
    }
    bVar6 = true;
  }
  if ((unaff_x19[0x74] == 0) || (lVar36 = *(long *)(unaff_x19[0x74] + 0x38), lVar36 == 0))
  goto LAB_087ddb5c;
  uVar28 = (uint)*(undefined8 *)(lVar36 + 0x18);
  if (uVar28 <= uVar13) goto LAB_087ddd1c;
  if ((*(byte *)(lVar36 + 0x20 + uVar23 * 0x178 + 0x16d) >> 1 & 1) == 0) {
    if (bVar7) {
LAB_087dd170:
      auVar58 = ZEXT416((uint)in_stack_00000128._4_4_);
      fVar47 = in_stack_000000d8._4_4_;
      fVar65 = fStack00000000000000e8;
      (**(code **)(*unaff_x19 + 0x918))();
    }
LAB_087dd1a4:
    bVar7 = false;
  }
  else {
    if ((((int)unaff_x19[0x6c] < (int)uVar13) || ((int)unaff_x19[0x6d] < (int)uVar2)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar36 + 0x20 + uVar23 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar7) {
LAB_087dcf54:
      if (uVar28 <= uVar13) goto LAB_087ddd1c;
      lVar36 = lVar36 + uVar23 * 0x178;
      lVar21 = 0x118;
      if ((bVar11 & 1) == 0) {
        lVar21 = 0xf4;
      }
      fVar54 = *(float *)(lVar36 + 0x180);
      fVar59 = *(float *)(lVar36 + 0x184);
      fVar64 = *(float *)(lVar36 + 0x188);
      uVar61 = *(undefined8 *)(lVar36 + 0x178);
      fVar67 = *(float *)(lVar36 + 0x120);
      fVar55 = *(float *)(lVar36 + 0x13c);
      fVar60 = *(float *)(lVar36 + 0x140);
      fVar63 = *(float *)(lVar36 + 0x148);
      fVar47 = *(float *)(lVar36 + lVar21 + 0x20);
      in_stack_000001d8 = uVar61;
      fStack00000000000001e0 = fVar54;
      fStack00000000000001e4 = fVar59;
      in_stack_000001e8 = fVar64;
      uVar23 = FUN_087f1714(&stack0x000001f0,&stack0x000001d8,0);
      if ((uVar23 & 1) == 0) {
        if ((bVar11 & 1) == 0) {
          fVar55 = fVar67;
        }
        if (*(int *)(*(long *)PTR_DAT_093375c0 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        fVar47 = fVar47 - in_stack_00001324;
        if (fVar47 <= fStack00000000000000f8) {
          fStack00000000000000f8 = fVar47;
        }
        if (fStack00000000000000e8 <= fVar55 + in_stack_00001328) {
          fStack00000000000000e8 = fVar55 + in_stack_00001328;
        }
        if (*(int *)(*(long *)PTR_DAT_093375c0 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        fVar60 = fVar60 + in_stack_0000132c;
        auVar58 = ZEXT416((uint)fVar60);
        fVar47 = in_stack_00000128._4_4_;
        if (fVar63 - in_stack_00001330 <= in_stack_00000128._4_4_) {
          fVar47 = fVar63 - in_stack_00001330;
        }
        in_stack_00000128._4_4_ = fVar47;
        if (in_stack_000000f0._4_4_ <= fVar60) {
          in_stack_000000f0._4_4_ = fVar60;
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_093375c0 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if (fVar63 <= in_stack_00000128._4_4_) {
          in_stack_00000128._4_4_ = fVar63;
        }
        auVar58 = ZEXT416((uint)in_stack_00000128._4_4_);
        fStack00000000000000f8 = (fVar47 + (fStack00000000000000e8 - in_stack_00001328)) * 0.5;
        fVar65 = fStack00000000000000f8;
        (**(code **)(*unaff_x19 + 0x918))();
        puVar9 = PTR_DAT_093375c0;
        fVar47 = in_stack_000000d8._4_4_;
        if (*(int *)(*(long *)PTR_DAT_093375c0 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          fVar47 = in_stack_000000d8._4_4_;
        }
        if ((bVar11 & 1) == 0) {
          fVar55 = fVar67;
        }
        if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        in_stack_00001324 = (float)((ulong)uVar61 >> 0x20);
        fStack00000000000000e8 = fVar54 + fVar55;
        in_stack_000000d8._4_4_ = 0.0;
        in_stack_000000f0._4_4_ = fVar60 + fVar59;
        in_stack_00000128._4_4_ = fVar63 - fVar64;
        in_stack_00001328 = fVar54;
        in_stack_0000132c = fVar59;
        in_stack_00001330 = fVar64;
      }
      if (((*(int *)(in_stack_000001d0 + 7) == 1) || (uVar13 == uVar4)) ||
         (((int)uVar5 <= (int)uVar13 || (!bVar1)))) goto LAB_087dd170;
      bVar7 = true;
    }
    else {
      bVar7 = false;
      if ((((bVar1) && ((int)uVar13 <= (int)uVar5)) && ((uVar44 & 0xfffe) != 10)) && (uVar44 != 0xd)
         ) {
        if (uVar13 == uVar5) {
          if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar20 = FUN_075db9d4(uVar44,0);
          if ((uVar20 & 1) != 0) goto LAB_087dd1a4;
        }
        puVar9 = PTR_DAT_09337670;
        lVar21 = *(long *)PTR_DAT_09337670;
        if (*(int *)(lVar21 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar21 = *(long *)puVar9;
        }
        if ((unaff_x19[0x74] != 0) && (lVar36 = *(long *)(unaff_x19[0x74] + 0x38), lVar36 != 0)) {
          uVar28 = (uint)*(undefined8 *)(lVar36 + 0x18);
          if (uVar13 < uVar28) {
            lVar32 = *(long *)(lVar21 + 0xb8);
            lVar21 = lVar36 + uVar23 * 0x178;
            fStack00000000000000e8 = *(float *)(lVar32 + 0x1728);
            in_stack_00001330 = *(float *)(lVar21 + 0x188);
            in_stack_000000d8._4_4_ = 0.0;
            fStack00000000000000f8 = *(float *)(lVar32 + 0x1720);
            in_stack_000000f0._4_4_ = *(float *)(lVar32 + 0x172c);
            in_stack_00000128._4_4_ = *(float *)(lVar32 + 0x1724);
            in_stack_00001328 = (float)*(undefined8 *)(lVar21 + 0x180);
            in_stack_0000132c = (float)((ulong)*(undefined8 *)(lVar21 + 0x180) >> 0x20);
            in_stack_00001324 = (float)((ulong)*(undefined8 *)(lVar21 + 0x178) >> 0x20);
            goto LAB_087dcf54;
          }
          goto LAB_087ddd1c;
        }
        goto LAB_087ddb5c;
      }
    }
  }
  iVar17 = *(int *)(in_stack_000001d0 + 7);
  uVar13 = uVar13 + 1;
  uVar28 = uVar2;
  if (iVar17 <= (int)uVar13) goto LAB_087dd54c;
  goto LAB_087db574;
LAB_087dd54c:
  lVar30 = unaff_x19[0x74];
  if (lVar30 != 0) {
    iVar16 = uVar2 + 1;
    plVar43 = (long *)PTR_DAT_093375b8;
    unaff_x28 = (long *)PTR_DAT_09285bb0;
LAB_087dd578:
    lVar34 = *(long *)(lVar30 + 0x60);
    if (lVar34 != 0) {
      if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_087ddd1c;
      *(int *)(lVar34 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x50 + 0x28) = iVar15;
      *(int *)(lVar30 + 0x18) = iVar17;
      lVar34 = unaff_x19[0xd7];
      *(int *)(lVar30 + 0x2c) = iVar16;
      if (iVar17 < 1 || fStack00000000000000fc == 0.0) {
        fStack00000000000000fc = 1.4013e-45;
      }
      *(int *)(lVar30 + 0x1c) = (int)lVar34;
      *(float *)(lVar30 + 0x24) = fStack00000000000000fc;
      *(int *)(lVar30 + 0x30) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
      if (((int)unaff_x19[0x6a] != 0xff) ||
         (uVar23 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar23 & 1) == 0)) {
LAB_087ddb60:
        if ((char)unaff_x19[0xdf] != '\0') {
          pcVar31 = *(code **)(*unaff_x19 + 0x798);
LAB_087ddb74:
          (*pcVar31)();
        }
        if (*(int *)(*(long *)PTR_DAT_09337678 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_087ef644();
        return;
      }
      lVar30 = unaff_x19[0xe2];
      if (lVar30 != 0) {
        (**(code **)(lVar30 + 0x18))
                  (*(undefined8 *)(lVar30 + 0x40),unaff_x19[0x74],*(undefined8 *)(lVar30 + 0x28));
      }
      if (unaff_x19[0xe8] != 0) {
        iVar15 = FUN_08c8e4c4(unaff_x19[0xe8],0);
        if (iVar15 != 0x19) {
          lVar30 = unaff_x19[0xe8];
          if (lVar30 == 0) goto LAB_087ddb5c;
          uVar13 = FUN_08c8e4c4(lVar30,0);
          FUN_08c8e578(lVar30,uVar13 | 0x19,0);
        }
        if (*(int *)((long)unaff_x19 + 0x354) != 0) {
          if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x60), lVar30 == 0))
          goto LAB_087ddb5c;
          if (*(int *)(*plVar43 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          if (*(int *)(lVar30 + 0x18) == 0) goto LAB_087ddd1c;
          FUN_0883b360(lVar30 + 0x20,1,0);
        }
        if (unaff_x19[0x7b] != 0) {
          FUN_089a2d68(unaff_x19[0x7b],0);
          if ((unaff_x19[0x74] != 0) && (lVar30 = *(long *)(unaff_x19[0x74] + 0x60), lVar30 != 0)) {
            if (*(int *)(lVar30 + 0x18) == 0) {
LAB_087ddd1c:
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            if (unaff_x19[0x7b] != 0) {
              FUN_0899fffc(unaff_x19[0x7b],*(undefined8 *)(lVar30 + 0x30),0);
              if ((unaff_x19[0x74] != 0) &&
                 (lVar30 = *(long *)(unaff_x19[0x74] + 0x60), lVar30 != 0)) {
                if (*(int *)(lVar30 + 0x18) == 0) goto LAB_087ddd1c;
                if (unaff_x19[0x7b] != 0) {
                  FUN_089a13cc(unaff_x19[0x7b],0,*(undefined8 *)(lVar30 + 0x48),0);
                  if ((unaff_x19[0x74] != 0) &&
                     (lVar30 = *(long *)(unaff_x19[0x74] + 0x60), lVar30 != 0)) {
                    if (*(int *)(lVar30 + 0x18) == 0) goto LAB_087ddd1c;
                    if (unaff_x19[0x7b] != 0) {
                      FUN_089a02ac(unaff_x19[0x7b],*(undefined8 *)(lVar30 + 0x50),0);
                      if ((unaff_x19[0x74] != 0) &&
                         (lVar30 = *(long *)(unaff_x19[0x74] + 0x60), lVar30 != 0)) {
                        if (*(int *)(lVar30 + 0x18) == 0) goto LAB_087ddd1c;
                        if (unaff_x19[0x7b] != 0) {
                          FUN_089a064c(unaff_x19[0x7b],*(undefined8 *)(lVar30 + 0x58),0);
                          if (unaff_x19[0x7b] != 0) {
                            FUN_089a2b28(unaff_x19[0x7b],0);
                            if (unaff_x19[0xe7] != 0) {
                              FUN_08c8b77c(unaff_x19[0xe7],unaff_x19[0x7b],0);
                              if (unaff_x19[0xe7] != 0) {
                                uVar46 = FUN_08c8af5c(unaff_x19[0xe7],0);
                                if (unaff_x19[0xe7] != 0) {
                                  uVar13 = FUN_08c8ab98(unaff_x19[0xe7],0);
                                  lVar30 = unaff_x19[0x74];
                                  if (lVar30 != 0) {
                                    lVar36 = 0;
                                    lVar34 = 0;
                                    do {
                                      uVar23 = lVar34 + 1;
                                      if ((long)*(int *)(lVar30 + 0x34) <= (long)uVar23)
                                      goto LAB_087ddb60;
                                      lVar30 = *(long *)(lVar30 + 0x60);
                                      if (lVar30 == 0) break;
                                      if (*(int *)(*plVar43 + 0xe4) == 0) {
                                        thunk_FUN_040d65a8();
                                      }
                                      if (*(uint *)(lVar30 + 0x18) <= uVar23) goto LAB_087ddd1c;
                                      FUN_0883b23c(lVar30 + lVar36 + 0x70,0);
                                      lVar30 = unaff_x19[0xe4];
                                      if (lVar30 == 0) break;
                                      if (*(uint *)(lVar30 + 0x18) <= uVar23) goto LAB_087ddd1c;
                                      uVar61 = *(undefined8 *)(lVar30 + lVar34 * 8 + 0x28);
                                      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                                        thunk_FUN_040d65a8();
                                      }
                                      uVar20 = FUN_089cc398(uVar61,0,0);
                                      if ((uVar20 & 1) == 0) {
                                        if (*(int *)((long)unaff_x19 + 0x354) != 0) {
                                          if ((unaff_x19[0x74] == 0) ||
                                             (lVar30 = *(long *)(unaff_x19[0x74] + 0x60),
                                             lVar30 == 0)) break;
                                          if (*(int *)(*plVar43 + 0xe4) == 0) {
                                            thunk_FUN_040d65a8();
                                          }
                                          if (*(uint *)(lVar30 + 0x18) <= uVar23) goto LAB_087ddd1c;
                                          FUN_0883b360(lVar30 + lVar36 + 0x70,1,0);
                                        }
                                        lVar30 = unaff_x19[0xe4];
                                        if (lVar30 == 0) break;
                                        if (*(uint *)(lVar30 + 0x18) <= uVar23) goto LAB_087ddd1c;
                                        lVar30 = *(long *)(lVar30 + lVar34 * 8 + 0x28);
                                        if (lVar30 == 0) break;
                                        lVar30 = FUN_08845594(lVar30,0);
                                        if ((unaff_x19[0x74] == 0) ||
                                           (lVar21 = *(long *)(unaff_x19[0x74] + 0x60), lVar21 == 0)
                                           ) break;
                                        if (*(uint *)(lVar21 + 0x18) <= uVar23) goto LAB_087ddd1c;
                                        if (lVar30 == 0) break;
                                        FUN_0899fffc(lVar30,*(undefined8 *)(lVar21 + lVar36 + 0x80),
                                                     0);
                                        lVar30 = unaff_x19[0xe4];
                                        if (lVar30 == 0) break;
                                        if (*(uint *)(lVar30 + 0x18) <= uVar23) goto LAB_087ddd1c;
                                        lVar30 = *(long *)(lVar30 + lVar34 * 8 + 0x28);
                                        if (lVar30 == 0) break;
                                        lVar30 = FUN_08845594(lVar30,0);
                                        if ((unaff_x19[0x74] == 0) ||
                                           (lVar21 = *(long *)(unaff_x19[0x74] + 0x60), lVar21 == 0)
                                           ) break;
                                        if (*(uint *)(lVar21 + 0x18) <= uVar23) goto LAB_087ddd1c;
                                        if (lVar30 == 0) break;
                                        FUN_089a13cc(lVar30,0,*(undefined8 *)
                                                               (lVar21 + lVar36 + 0x98),0);
                                        lVar30 = unaff_x19[0xe4];
                                        if (lVar30 == 0) break;
                                        if (*(uint *)(lVar30 + 0x18) <= uVar23) goto LAB_087ddd1c;
                                        lVar30 = *(long *)(lVar30 + lVar34 * 8 + 0x28);
                                        if (lVar30 == 0) break;
                                        lVar30 = FUN_08845594(lVar30,0);
                                        if ((unaff_x19[0x74] == 0) ||
                                           (lVar21 = *(long *)(unaff_x19[0x74] + 0x60), lVar21 == 0)
                                           ) break;
                                        if (*(uint *)(lVar21 + 0x18) <= uVar23) goto LAB_087ddd1c;
                                        if (lVar30 == 0) break;
                                        FUN_089a02ac(lVar30,*(undefined8 *)(lVar21 + lVar36 + 0xa0),
                                                     0);
                                        lVar30 = unaff_x19[0xe4];
                                        if (lVar30 == 0) break;
                                        if (*(uint *)(lVar30 + 0x18) <= uVar23) goto LAB_087ddd1c;
                                        lVar30 = *(long *)(lVar30 + lVar34 * 8 + 0x28);
                                        if (lVar30 == 0) break;
                                        lVar30 = FUN_08845594(lVar30,0);
                                        if ((unaff_x19[0x74] == 0) ||
                                           (lVar21 = *(long *)(unaff_x19[0x74] + 0x60), lVar21 == 0)
                                           ) break;
                                        if (*(uint *)(lVar21 + 0x18) <= uVar23) goto LAB_087ddd1c;
                                        if (lVar30 == 0) break;
                                        FUN_089a064c(lVar30,*(undefined8 *)(lVar21 + lVar36 + 0xa8),
                                                     0);
                                        lVar30 = unaff_x19[0xe4];
                                        if (lVar30 == 0) break;
                                        if (*(uint *)(lVar30 + 0x18) <= uVar23) goto LAB_087ddd1c;
                                        lVar30 = *(long *)(lVar30 + lVar34 * 8 + 0x28);
                                        if ((lVar30 == 0) ||
                                           (lVar30 = FUN_08845594(lVar30,0), lVar30 == 0)) break;
                                        FUN_089a2b28(lVar30,0);
                                        lVar30 = unaff_x19[0xe4];
                                        if (lVar30 == 0) break;
                                        if (*(uint *)(lVar30 + 0x18) <= uVar23) goto LAB_087ddd1c;
                                        lVar30 = *(long *)(lVar30 + lVar34 * 8 + 0x28);
                                        if (lVar30 == 0) break;
                                        lVar30 = FUN_08ac6f84(lVar30,0);
                                        lVar21 = unaff_x19[0xe4];
                                        if (lVar21 == 0) break;
                                        if (*(uint *)(lVar21 + 0x18) <= uVar23) goto LAB_087ddd1c;
                                        lVar21 = *(long *)(lVar21 + lVar34 * 8 + 0x28);
                                        if ((lVar21 == 0) ||
                                           (uVar61 = FUN_08845594(lVar21,0), lVar30 == 0)) break;
                                        FUN_08c8b77c(lVar30,uVar61,0);
                                        lVar30 = unaff_x19[0xe4];
                                        if (lVar30 == 0) break;
                                        if (*(uint *)(lVar30 + 0x18) <= uVar23) goto LAB_087ddd1c;
                                        lVar30 = *(long *)(lVar30 + lVar34 * 8 + 0x28);
                                        if ((lVar30 == 0) ||
                                           (lVar30 = FUN_08ac6f84(lVar30,0), lVar30 == 0)) break;
                                        FUN_08c8ae88(uVar46,auVar58._0_4_,fVar47,fVar65,lVar30,0);
                                        lVar30 = unaff_x19[0xe4];
                                        if (lVar30 == 0) break;
                                        if (*(uint *)(lVar30 + 0x18) <= uVar23) goto LAB_087ddd1c;
                                        lVar30 = *(long *)(lVar30 + lVar34 * 8 + 0x28);
                                        if ((lVar30 == 0) ||
                                           (lVar30 = FUN_08ac6f84(lVar30,0), lVar30 == 0)) break;
                                        FUN_08c8ac4c(lVar30,uVar13 & 1,0);
                                        lVar30 = unaff_x19[0xe4];
                                        if (lVar30 == 0) break;
                                        if (*(uint *)(lVar30 + 0x18) <= uVar23) goto LAB_087ddd1c;
                                        plVar26 = *(long **)(lVar30 + lVar34 * 8 + 0x28);
                                        uVar14 = (**(code **)(*unaff_x19 + 0x2b8))();
                                        if (plVar26 == (long *)0x0) break;
                                        (**(code **)(*plVar26 + 0x2c8))
                                                  (plVar26,uVar14 & 1,
                                                   *(undefined8 *)(*plVar26 + 0x2d0));
                                      }
                                      lVar30 = unaff_x19[0x74];
                                      lVar34 = lVar34 + 1;
                                      lVar36 = lVar36 + 0x50;
                                    } while (lVar30 != 0);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_087ddb5c;
}


