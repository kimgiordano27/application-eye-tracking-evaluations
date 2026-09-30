/*
FUNCTION_NAME: FUN_03543524
ENTRY_POINT: 03543524
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void FUN_03543524(undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined *puVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  undefined1 uVar26;
  char cVar27;
  long *plVar28;
  long lVar29;
  undefined8 *puVar30;
  code *pcVar31;
  uint uVar32;
  long lVar33;
  float *pfVar34;
  long lVar35;
  float *pfVar36;
  uint uVar37;
  long *plVar38;
  long lVar39;
  long lVar40;
  long *unaff_x19;
  ulong uVar41;
  undefined8 *unaff_x20;
  int *piVar42;
  uint unaff_w23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  ulong uVar43;
  uint uVar44;
  long *plVar45;
  ulong uVar46;
  long *unaff_x28;
  int unaff_w29;
  ushort uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined4 uVar53;
  float fVar54;
  undefined8 uVar55;
  undefined1 auVar56 [16];
  undefined8 uVar57;
  undefined1 auVar58 [16];
  float fVar59;
  undefined4 uVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined8 uVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float unaff_s12;
  float fVar68;
  float unaff_s13;
  float fVar69;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000018;
  int iStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float in_stack_00000030;
  undefined8 in_stack_00000040;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  int iStack0000000000000058;
  uint uStack000000000000005c;
  int iStack0000000000000060;
  undefined8 in_stack_00000068;
  uint uStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  uint uStack000000000000007c;
  float fStack0000000000000094;
  float fStack0000000000000098;
  float fStack000000000000009c;
  float *in_stack_000000a0;
  ulong in_stack_000000a8;
  float fStack00000000000000b0;
  undefined4 uStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  float in_stack_000000e0;
  float fStack00000000000000f0;
  float fStack00000000000000f4;
  float in_stack_00000100;
  float fStack0000000000000104;
  float fStack000000000000011c;
  float fStack0000000000000120;
  float fStack0000000000000124;
  undefined8 in_stack_00000130;
  float fStack0000000000000138;
  float fStack000000000000013c;
  long *in_stack_00000160;
  float fStack000000000000016c;
  float fStack0000000000000170;
  float fStack0000000000000174;
  float fStack0000000000000190;
  undefined8 *in_stack_000001a0;
  undefined8 in_stack_000001a8;
  float fStack00000000000001b0;
  float fStack00000000000001b4;
  float in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  float in_stack_000001d0;
  float in_stack_0000112c;
  float in_stack_00001138;
  float in_stack_00001144;
  float in_stack_00001150;
  float in_stack_0000115c;
  float in_stack_00001168;
  uint in_stack_0000124c;
  undefined4 in_stack_00001280;
  float in_stack_00001284;
  float in_stack_00001288;
  float in_stack_0000128c;
  float in_stack_00001290;
  uint uVar70;
  char in_stack_000012a4;
  float in_stack_000012a8;
  uint in_stack_000012ac;
  undefined8 in_stack_000012b0;
  undefined8 in_stack_000012b8;
  undefined4 in_stack_000012c0;
  undefined4 in_stack_000012c4;
  undefined8 in_stack_000012c8;
  undefined8 in_stack_000012d0;
  undefined8 in_stack_000012d8;
  undefined8 in_stack_000012e0;
  undefined8 in_stack_000012e8;
  
  uVar43 = _uStack0000000000000070;
code_r0x03543524:
  iVar17 = FUN_03594d0c();
  uVar16 = iVar17 - 1;
  unaff_w29 = unaff_w29 + 1;
  iVar17 = *(int *)((long)unaff_x19 + 0x4a4) + -1;
  *(int *)((long)unaff_x19 + 0x4a4) = iVar17;
  uVar53 = 0x2026;
  fVar50 = unaff_s14;
LAB_03543550:
  uVar21 = CONCAT44(uVar53,iVar17);
FUN_03544d6c:
  do {
    lVar29 = unaff_x19[0x91];
    uVar16 = uVar16 + 1;
    if (lVar29 == 0) goto LAB_03547e54;
    if ((int)*(uint *)(lVar29 + 0x18) <= (int)uVar16) {
LAB_0354526c:
      if ((char)unaff_x19[0x4c] == '\0') {
LAB_03545334:
        iVar17 = *(int *)((long)unaff_x19 + 0x26c);
        iVar20 = (int)unaff_x19[0x4e];
      }
      else {
        param_3 = *(float *)((long)unaff_x19 + 0x264);
        param_2 = ZEXT416((uint)DAT_00b46040);
        if (param_3 - *(float *)(unaff_x19 + 0x4d) <= DAT_00b46040) goto LAB_03545334;
        fVar50 = *(float *)((long)unaff_x19 + 0x20c);
        fVar48 = *(float *)((long)unaff_x19 + 0x27c);
        param_2 = ZEXT416((uint)fVar48);
        iVar17 = *(int *)((long)unaff_x19 + 0x26c);
        iVar20 = (int)unaff_x19[0x4e];
        if ((fVar50 < fVar48) && (iVar17 < iVar20)) {
          if (*(float *)(unaff_x19 + 0x60) < *(float *)((long)unaff_x19 + 0x2fc) / 100.0) {
            *(undefined4 *)(unaff_x19 + 0x60) = 0;
          }
          fVar63 = DAT_00b45f9c;
          *(float *)(unaff_x19 + 0x4d) = fVar50;
          fVar66 = (param_3 - fVar50) * 0.5;
          if (fVar66 <= fVar63) {
            fVar66 = fVar63;
          }
          fVar63 = (fVar50 + fVar66) * 20.0 + 0.5;
          fVar50 = DAT_00b4601c;
          if (fVar63 != INFINITY) {
            fVar50 = (float)(int)fVar63 / 20.0;
          }
          if (fVar48 <= fVar50) {
            fVar50 = fVar48;
          }
          goto LAB_0354532c;
        }
      }
      *(undefined1 *)((long)unaff_x19 + 0x274) = 1;
      if (iVar20 <= iVar17) {
        uVar21 = FUN_0306bb4c((long)unaff_x19 + 0x26c,0);
        uVar22 = FUN_0307fce0((long)unaff_x19 + 0x20c,0);
        uVar21 = FUN_02f7b9a8(*(undefined8 *)PTR_DAT_03cde840,uVar21,*(undefined8 *)PTR_DAT_03cde828
                              ,uVar22,0);
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c(*unaff_x28);
        }
        FUN_03735a64(uVar21,0);
      }
      if ((*(int *)(unaff_x20 + 7) == 0) ||
         ((*(int *)(unaff_x20 + 7) == 1 && (in_stack_000012ac == 3)))) {
        (**(code **)(*unaff_x19 + 0x958))();
        goto LAB_035453f0;
      }
      lVar29 = *unaff_x24;
      if (*(int *)(lVar29 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        lVar29 = *unaff_x24;
      }
      lVar29 = **(long **)(lVar29 + 0xb8);
      if (lVar29 == 0) goto LAB_03547e54;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_03547f94;
      iVar17 = *(int *)(lVar29 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x38 + 0x54) << 2;
      if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x60), lVar29 == 0))
      goto LAB_03547e54;
      if (*(int *)(*(long *)PTR_DAT_03cde750 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      if (*(int *)(lVar29 + 0x18) == 0) goto LAB_03547f94;
      FUN_035ad898(lVar29 + 0x20,0,0);
      fStack00000000000000b0 = (float)FUN_03547fd0(0);
      iVar20 = (int)unaff_x19[0x53];
      lVar29 = unaff_x19[0xee];
      in_stack_000000a8._4_4_ = param_3;
      if (iVar20 < 0x401) {
        if (iVar20 == 0x100) {
          if ((int)unaff_x19[0x62] == 5) {
            if (lVar29 == 0) goto LAB_03547e54;
            if ((*(uint *)(lVar29 + 0x18) & 0xfffffffe) == 0) goto LAB_03547f94;
            if ((unaff_x19[0x74] == 0) || (lVar33 = *(long *)(unaff_x19[0x74] + 0x58), lVar33 == 0))
            goto LAB_03547e54;
            if (*(uint *)(lVar33 + 0x18) <= uStack000000000000005c) goto LAB_03547f94;
            fVar50 = *(float *)(lVar33 + (long)(int)uStack000000000000005c * 0x14 + 0x28);
          }
          else {
            if (lVar29 == 0) goto LAB_03547e54;
            if ((*(uint *)(lVar29 + 0x18) & 0xfffffffe) == 0) goto LAB_03547f94;
            fVar50 = *(float *)((long)unaff_x19 + 0x4cc);
          }
          in_stack_000000a8._4_4_ = *(float *)(lVar29 + 0x34);
          fStack000000000000002c = (0.0 - fVar50) - fStack0000000000000028;
          param_3 = *(float *)(lVar29 + 0x2c);
          fVar50 = *(float *)(lVar29 + 0x30);
LAB_035457ec:
          param_3 = in_stack_00000030 + 0.0 + param_3;
          fVar50 = fVar50 + fStack000000000000002c;
        }
        else {
          if (iVar20 != 0x200) {
            if (iVar20 != 0x400) goto LAB_03545800;
            if ((int)unaff_x19[0x62] == 5) {
              if (lVar29 == 0) goto LAB_03547e54;
              if (*(int *)(lVar29 + 0x18) == 0) goto LAB_03547f94;
              if ((unaff_x19[0x74] == 0) ||
                 (lVar33 = *(long *)(unaff_x19[0x74] + 0x58), lVar33 == 0)) goto LAB_03547e54;
              if (*(uint *)(lVar33 + 0x18) <= uStack000000000000005c) goto LAB_03547f94;
              in_stack_000012a8 =
                   *(float *)(lVar33 + (long)(int)uStack000000000000005c * 0x14 + 0x30);
            }
            else {
              if (lVar29 == 0) goto LAB_03547e54;
              if (*(int *)(lVar29 + 0x18) == 0) goto LAB_03547f94;
            }
            in_stack_000000a8._4_4_ = *(float *)(lVar29 + 0x28);
            fStack000000000000002c = fStack000000000000002c + (0.0 - in_stack_000012a8);
            param_3 = *(float *)(lVar29 + 0x20);
            fVar50 = *(float *)(lVar29 + 0x24);
            goto LAB_035457ec;
          }
          if ((int)unaff_x19[0x62] != 5) {
            if (lVar29 == 0) goto LAB_03547e54;
            if ((*(int *)(lVar29 + 0x18) != 1) && (*(int *)(lVar29 + 0x18) != 0)) {
              fVar50 = *(float *)((long)unaff_x19 + 0x4cc);
              goto LAB_03545720;
            }
            goto LAB_03547f94;
          }
          if (lVar29 == 0) goto LAB_03547e54;
          if ((*(int *)(lVar29 + 0x18) == 1) || (*(int *)(lVar29 + 0x18) == 0)) goto LAB_03547f94;
          if ((unaff_x19[0x74] == 0) || (lVar33 = *(long *)(unaff_x19[0x74] + 0x58), lVar33 == 0))
          goto LAB_03547e54;
          if (*(uint *)(lVar33 + 0x18) <= uStack000000000000005c) goto LAB_03547f94;
          lVar33 = lVar33 + (long)(int)uStack000000000000005c * 0x14;
          in_stack_000000a8._4_4_ = (*(float *)(lVar29 + 0x28) + *(float *)(lVar29 + 0x34)) * 0.5;
          param_3 = in_stack_00000030 + 0.0 +
                    ((float)*(undefined8 *)(lVar29 + 0x20) + (float)*(undefined8 *)(lVar29 + 0x2c))
                    * 0.5;
          fVar50 = (0.0 - ((fStack0000000000000028 + *(float *)(lVar33 + 0x28) +
                           *(float *)(lVar33 + 0x30)) - fStack000000000000002c) * 0.5) +
                   ((float)((ulong)*(undefined8 *)(lVar29 + 0x20) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(lVar29 + 0x2c) >> 0x20)) * 0.5;
        }
        in_stack_000000a8._4_4_ = in_stack_000000a8._4_4_ + 0.0;
        param_2 = ZEXT416((uint)fVar50);
        fStack00000000000000b0 = param_3;
      }
      else if (iVar20 == 0x800) {
        if (lVar29 == 0) goto LAB_03547e54;
        if ((*(int *)(lVar29 + 0x18) == 1) || (*(int *)(lVar29 + 0x18) == 0)) goto LAB_03547f94;
        param_3 = (*(float *)(lVar29 + 0x28) + *(float *)(lVar29 + 0x34)) * 0.5;
        fStack00000000000000b0 =
             ((float)*(undefined8 *)(lVar29 + 0x20) + (float)*(undefined8 *)(lVar29 + 0x2c)) * 0.5 +
             in_stack_00000030 + 0.0;
        in_stack_000000a8._4_4_ = param_3 + 0.0;
        param_2 = ZEXT416((uint)(((float)((ulong)*(undefined8 *)(lVar29 + 0x20) >> 0x20) +
                                 (float)((ulong)*(undefined8 *)(lVar29 + 0x2c) >> 0x20)) * 0.5 + 0.0
                                ));
      }
      else {
        if (iVar20 == 0x1000) {
          if (lVar29 == 0) goto LAB_03547e54;
          if ((*(int *)(lVar29 + 0x18) == 1) || (*(int *)(lVar29 + 0x18) == 0)) goto LAB_03547f94;
          fVar50 = *(float *)((long)unaff_x19 + 0x4fc);
          in_stack_000012a8 = *(float *)((long)unaff_x19 + 0x4f4);
LAB_03545720:
          fStack0000000000000028 = fStack0000000000000028 + fVar50 + in_stack_000012a8;
        }
        else {
          if (iVar20 != 0x2000) goto LAB_03545800;
          if (lVar29 == 0) goto LAB_03547e54;
          if ((*(int *)(lVar29 + 0x18) == 1) || (*(int *)(lVar29 + 0x18) == 0)) goto LAB_03547f94;
          fStack0000000000000028 = *(float *)(unaff_x19 + 0x9a) - fStack0000000000000028;
        }
        param_3 = in_stack_00000030 + 0.0;
        param_2._0_4_ =
             ((float)*(undefined8 *)(lVar29 + 0x24) + (float)*(undefined8 *)(lVar29 + 0x30)) * 0.5 +
             (0.0 - (fStack0000000000000028 - fStack000000000000002c) * 0.5);
        param_2._4_4_ =
             ((float)((ulong)*(undefined8 *)(lVar29 + 0x24) >> 0x20) +
             (float)((ulong)*(undefined8 *)(lVar29 + 0x30) >> 0x20)) * 0.5 + 0.0;
        param_2._8_8_ = 0;
        fStack00000000000000b0 =
             param_3 + (*(float *)(lVar29 + 0x20) + *(float *)(lVar29 + 0x2c)) * 0.5;
        in_stack_000000a8._4_4_ = param_2._4_4_;
      }
LAB_03545800:
      auVar56 = param_2;
      in_stack_00000100 = (float)FUN_03547fd0(0);
      auVar58 = auVar56;
      FUN_03547fd0(0);
      lVar29 = UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_000008E8_PostfixBurstDelegate__Invoke
                         ();
      if (lVar29 == 0) goto LAB_03547e54;
      FUN_03780b0c(lVar29,0);
      *(float *)((long)unaff_x19 + 0x6fc) = auVar58._0_4_;
      uStack000000000000007c =
           FUN_03548014(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
      FUN_03548014(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
      if (*(int *)(*(long *)PTR_DAT_03cde758 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c(*(long *)PTR_DAT_03cde758);
      }
      FUN_03548304(0);
      FUN_03563d1c(&stack0x00001280,0x4000ffff,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      lVar29 = unaff_x19[0x74];
      if (lVar29 == 0) goto LAB_03547e54;
      iVar20 = *(int *)(in_stack_000001a0 + 7);
      if (iVar20 < 1) {
        fStack00000000000000dc = 0.0;
        iVar19 = 0;
        goto LAB_03547a18;
      }
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_03547e54;
      fStack0000000000000190 = param_2._0_4_;
      fVar50 = 0.0;
      bVar8 = false;
      uVar13 = 0;
      uVar16 = 0;
      lVar33 = lVar29 + 0x20;
      fStack0000000000000120 = *(float *)(*(long *)(*unaff_x24 + 0xb8) + 0x1730);
      bVar6 = false;
      bVar7 = false;
      fStack00000000000000dc = 0.0;
      fStack0000000000000104 = auVar56._0_4_;
      uStack0000000000000048 = 0;
      bVar10 = false;
      iStack0000000000000060 = 0;
      fStack0000000000000054 = 0.0;
      fStack000000000000011c = 0.0;
      fStack000000000000013c = 0.0;
      fStack000000000000009c = 0.0;
      fStack0000000000000074 = fStack00000000000000d8;
      fStack0000000000000078 = 0.0;
      fStack00000000000000cc = fStack00000000000000d8;
      fStack00000000000000d0 = fStack00000000000000f4;
      in_stack_00000068._4_4_ = fStack00000000000000f4;
      uStack0000000000000070 = uStack00000000000000c8;
      fStack0000000000000094 = fStack00000000000000d8;
      fStack0000000000000098 = fStack00000000000000f4;
      uVar18 = 0;
      fStack00000000000000f0 = param_3;
      goto LAB_03545984;
    }
    if (*(uint *)(lVar29 + 0x18) <= uVar16) goto LAB_03547f94;
    uVar13 = *(uint *)(lVar29 + (long)(int)uVar16 * 0x10 + 0x24);
    if (uVar13 == 0) goto LAB_0354526c;
    if (5 < unaff_w29) {
      uVar21 = FUN_03088cbc(&stack0x000012ac,0);
      uVar22 = FUN_0306bb4c(&stack0x00001278,0);
      uVar21 = FUN_02f7b9a8(*(undefined8 *)PTR_DAT_03cde820,uVar21,*(undefined8 *)PTR_DAT_03cde830,
                            uVar22,0);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c(*unaff_x28);
      }
      FUN_03735f98(uVar21,0);
      uVar21 = CONCAT44(3,*(undefined4 *)(unaff_x20 + 7));
    }
    in_stack_000012ac = uVar13;
  } while (uVar13 == 0x1a);
  if ((uVar13 == 0x3c) && (*(char *)((long)unaff_x19 + 0x33a) != '\0')) {
    *(undefined1 *)((long)unaff_x19 + 0x469) = 1;
    *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
    uVar23 = FUN_0358fa60();
    if (((uVar23 & 1) != 0) && (uVar16 = in_stack_0000124c, *(int *)((long)unaff_x19 + 0x65c) == 0))
    goto FUN_03544d6c;
  }
  else {
    if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
    goto LAB_03547e54;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x20 + 7)) goto LAB_03547f94;
    lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x20 + 7) * (long)(int)unaff_w23;
    *(undefined4 *)((long)unaff_x19 + 0x65c) = *(undefined4 *)(lVar29 + 0x20);
    *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar29 + 0x50);
    unaff_x19[0x20] = *(long *)(lVar29 + 0x40);
    thunk_FUN_01cc8040(unaff_x19 + 0x20);
  }
  if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
  goto LAB_03547e54;
  uVar18 = *(uint *)(unaff_x20 + 7);
  if (*(uint *)(lVar29 + 0x18) <= uVar18) goto LAB_03547f94;
  lVar33 = lVar29 + 0x20;
  uVar70 = (uint)uVar21;
  lVar39 = unaff_x19[0x24];
  cVar27 = *(char *)(lVar33 + (long)(int)uVar18 * (long)(int)unaff_w23 + 0x34);
  *(undefined1 *)((long)unaff_x19 + 0x469) = 0;
  uVar14 = uVar18;
  if (uVar70 == uVar18) {
    uVar13 = (uint)((ulong)uVar21 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
    if (uVar13 == 0x2026) {
      *(long *)(lVar33 + (long)(int)uVar18 * (long)(int)unaff_w23 + 0x10) = unaff_x19[0xcd];
      thunk_FUN_01cc8040();
      if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
      goto LAB_03547e54;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
      lVar29 = lVar29 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
      *(long *)(lVar29 + 0x40) = unaff_x19[0xce];
      *(undefined4 *)(lVar29 + 0x20) = 0;
      thunk_FUN_01cc8040();
      if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
      goto LAB_03547e54;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
      *(long *)(lVar29 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23 + 0x48)
           = unaff_x19[0xcf];
      thunk_FUN_01cc8040();
      if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
      goto LAB_03547e54;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
      *(int *)(lVar29 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23 + 0x50) =
           (int)unaff_x19[0xd0];
      puVar9 = PTR_DAT_03cde808;
      lVar29 = *(long *)PTR_DAT_03cde808;
      if (*(int *)(lVar29 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        lVar29 = *(long *)puVar9;
      }
      lVar29 = **(long **)(lVar29 + 0xb8);
      if (lVar29 == 0) goto LAB_03547e54;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_03547f94;
      lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x38;
      *(int *)(lVar29 + 0x54) = *(int *)(lVar29 + 0x54) + 1;
      *(undefined1 *)(unaff_x19 + 0x65) = 1;
      uVar21 = CONCAT44(3,*(uint *)((long)unaff_x19 + 0x4a4) + 1);
      uVar14 = *(uint *)((long)unaff_x19 + 0x4a4);
    }
    else if (uVar13 == 3) {
      if ((unaff_x19[0x20] == 0) || (lVar24 = FUN_0356be60(unaff_x19[0x20],0), lVar24 == 0))
      goto LAB_03547e54;
      uVar22 = FUN_026d18d0(lVar24,3,*(undefined8 *)PTR_DAT_03cde728);
      if (*(uint *)(lVar29 + 0x18) <= uVar18) goto LAB_03547f94;
      *(undefined8 *)(lVar33 + (long)(int)uVar18 * (long)(int)unaff_w23 + 0x10) = uVar22;
      thunk_FUN_01cc8040();
      *(undefined1 *)(unaff_x19 + 0x65) = 1;
      uVar14 = *(uint *)((long)unaff_x19 + 0x4a4);
    }
  }
  unaff_x24 = (long *)PTR_DAT_03cde808;
  unaff_x20 = in_stack_000001a0;
  in_stack_000012ac = uVar13;
  if (((int)uVar14 < *(int *)((long)unaff_x19 + 0x35c)) && (uVar13 != 3)) {
    if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
    goto LAB_03547e54;
    if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_03547f94;
    lVar29 = lVar29 + (long)(int)uVar14 * (long)(int)unaff_w23;
    *(undefined1 *)(lVar29 + 400) = 0;
    *(undefined2 *)(lVar29 + 0x24) = 0x200b;
    *(undefined4 *)(lVar29 + 0x5c) = 0;
    *(uint *)(in_stack_000001a0 + 7) = uVar14 + 1;
    goto FUN_03544d6c;
  }
  iVar17 = *(int *)((long)unaff_x19 + 0x65c);
  if (iVar17 == 0) {
    uVar14 = *(uint *)((long)unaff_x19 + 0x284);
    if ((uVar14 >> 4 & 1) == 0) {
      if ((uVar14 >> 3 & 1) == 0) {
        fStack0000000000000138 = 1.0;
        if ((uVar14 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
          }
          uVar23 = FUN_02f93b6c(uVar13,0);
          if ((uVar23 & 1) != 0) {
            if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            uVar13 = FUN_02f93d74(uVar13,0);
            fStack0000000000000138 = fStack0000000000000024;
            goto LAB_035416e0;
          }
        }
      }
      else {
        if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        uVar23 = FUN_02f93acc(uVar13,0);
        fStack0000000000000138 = 1.0;
        if ((uVar23 & 1) != 0) {
          if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
          }
          uVar13 = FUN_02f93eec(uVar13,0);
          goto LAB_035416e0;
        }
      }
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      uVar23 = FUN_02f93b6c(uVar13,0);
      fStack0000000000000138 = 1.0;
      if ((uVar23 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        uVar13 = FUN_02f93d74(uVar13,0);
LAB_035416e0:
        uVar13 = uVar13 & 0xffff;
      }
    }
    iVar17 = *(int *)((long)unaff_x19 + 0x65c);
    in_stack_000012ac = uVar13;
    if (iVar17 != 0) goto LAB_035410b4;
LAB_035416f0:
    if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
    goto LAB_03547e54;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
    *in_stack_00000160 =
         *(long *)(lVar29 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23 +
                  0x30);
    thunk_FUN_01cc8040(in_stack_00000160);
    unaff_x24 = (long *)PTR_DAT_03cde808;
    if (*in_stack_00000160 == 0) goto FUN_03544d6c;
    if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
    goto LAB_03547e54;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
    unaff_x19[0x20] =
         *(long *)(lVar29 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23 +
                  0x40);
    thunk_FUN_01cc8040(unaff_x19 + 0x20);
    if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
    goto LAB_03547e54;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
    unaff_x19[0x23] =
         *(long *)(lVar29 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23 +
                  0x48);
    thunk_FUN_01cc8040(unaff_x19 + 0x23);
    if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
    goto LAB_03547e54;
    uVar14 = *(uint *)(in_stack_000001a0 + 7);
    uVar13 = *(uint *)(lVar29 + 0x18);
    if (uVar13 <= uVar14) goto LAB_03547f94;
    *(undefined4 *)(unaff_x19 + 0x24) =
         *(undefined4 *)(lVar29 + 0x20 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x30);
    if (uVar70 == uVar18) {
      lVar33 = unaff_x19[0x91];
      if (lVar33 == 0) goto LAB_03547e54;
      if (*(uint *)(lVar33 + 0x18) <= uVar16) goto LAB_03547f94;
      if ((*(int *)(lVar33 + (long)(int)uVar16 * 0x10 + 0x24) != 10) ||
         (uVar14 == *(uint *)(unaff_x19 + 0x95))) goto LAB_03541808;
      if (uVar13 <= uVar14 - 1) goto LAB_03547f94;
      lVar33 = unaff_x19[0x20];
      if (lVar33 == 0) goto LAB_03547e54;
      fVar48 = *(float *)(lVar29 + 0x20 + (long)(int)(uVar14 - 1) * (long)(int)unaff_w23 + 0x38);
    }
    else {
LAB_03541808:
      lVar33 = unaff_x19[0x20];
      if (lVar33 == 0) goto LAB_03547e54;
      fVar48 = *(float *)(unaff_x19 + 0x42);
    }
    fVar63 = (float)FUN_03805444(lVar33 + 0x28,0);
    if (unaff_x19[0x20] == 0) goto LAB_03547e54;
    fVar49 = (float)FUN_0380544c(unaff_x19[0x20] + 0x28,0);
    fVar66 = in_stack_000000e0;
    if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
      fVar66 = fVar50;
    }
    if (uVar70 == uVar18) {
      fStack0000000000000124 = 0.0;
      fVar51 = 0.0;
      if (in_stack_000012ac != 0x2026) goto LAB_03541870;
    }
    else {
LAB_03541870:
      if (unaff_x19[0x20] == 0) goto LAB_03547e54;
      fVar51 = (float)FUN_03805474(unaff_x19[0x20] + 0x28,0);
      if (unaff_x19[0x20] == 0) goto LAB_03547e54;
      fStack0000000000000124 = (float)FUN_038054a4(unaff_x19[0x20] + 0x28,0);
    }
    lVar29 = unaff_x19[0xcc];
    if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto LAB_03547e54;
    fVar61 = *(float *)((long)unaff_x19 + 0x43c);
    fVar50 = *(float *)(lVar29 + 0x2c);
    param_3 = (float)FUN_03805944(*(long *)(lVar29 + 0x20),0);
    if (unaff_x19[0x20] == 0) goto LAB_03547e54;
    fVar68 = (float)FUN_0380549c(unaff_x19[0x20] + 0x28,0);
    if (unaff_x19[0x20] == 0) goto LAB_03547e54;
    fVar52 = *(float *)((long)unaff_x19 + 0x43c);
    fStack000000000000016c = (float)FUN_0380544c(unaff_x19[0x20] + 0x28,0);
    lVar29 = unaff_x19[0x74];
    if ((lVar29 == 0) || (lVar33 = *(long *)(lVar29 + 0x38), lVar33 == 0)) goto LAB_03547e54;
    if (*(uint *)(lVar33 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
    lVar33 = lVar33 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
    *(undefined4 *)(lVar33 + 0x20) = 0;
    fVar66 = ((fStack0000000000000138 * fVar48) / fVar63) * fVar49 * fVar66;
    param_3 = fVar66 * fVar61 * fVar50 * param_3;
    fStack000000000000016c = fVar66 * fVar68 * fVar52 * fStack000000000000016c;
    *(float *)(lVar33 + 0x15c) = param_3;
    uVar13 = *(uint *)(unaff_x19 + 0x24);
    if (uVar13 == 0) {
      unaff_s13 = *(float *)(unaff_x19 + 0xc6);
    }
    else {
      lVar33 = unaff_x19[0xe4];
      if (lVar33 == 0) goto LAB_03547e54;
      if (*(uint *)(lVar33 + 0x18) <= uVar13) goto LAB_03547f94;
      lVar33 = *(long *)(lVar33 + (long)(int)uVar13 * 8 + 0x20);
      if (lVar33 == 0) goto LAB_03547e54;
      unaff_s13 = *(float *)(lVar33 + 0x54);
    }
LAB_035419a4:
    fVar50 = 1.0;
    unaff_s15 = 0.0;
    unaff_s12 = 0.0;
    if (in_stack_000012ac != 3 && in_stack_000012ac != 0xad) {
      unaff_s12 = param_3;
    }
  }
  else {
    fStack0000000000000138 = 1.0;
    if (iVar17 == 0) goto LAB_035416f0;
LAB_035410b4:
    if (iVar17 == 1) {
      lVar29 = FUN_0358888c();
      if ((lVar29 != 0) && (lVar29 = *(long *)(lVar29 + 0x38), lVar29 != 0)) {
        if (*(uint *)(in_stack_000001a0 + 7) < *(uint *)(lVar29 + 0x18)) {
          plVar45 = *(long **)(lVar29 + (long)(int)*(uint *)(in_stack_000001a0 + 7) *
                                        (long)(int)unaff_w23 + 0x30);
          if (plVar45 != (long *)0x0) {
            bVar11 = *(byte *)(*(long *)PTR_DAT_03cde770 + 0x130);
            if ((*(byte *)(*plVar45 + 0x130) < bVar11) ||
               (*(long *)(*(long *)(*plVar45 + 200) + (ulong)bVar11 * 8 + -8) !=
                *(long *)PTR_DAT_03cde770)) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5cf54(plVar45);
            }
            plVar28 = (long *)plVar45[3];
            if (plVar28 == (long *)0x0) {
              plVar28 = (long *)0x0;
              *_iStack0000000000000060 = 0;
            }
            else {
              lVar29 = *(long *)PTR_DAT_03cde768;
              bVar11 = *(byte *)(lVar29 + 0x130);
              if (*(byte *)(*plVar28 + 0x130) < bVar11) {
                plVar38 = (long *)0x0;
              }
              else {
                plVar38 = plVar28;
                if (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar11 * 8 + -8) != lVar29) {
                  plVar38 = (long *)0x0;
                }
              }
              *_iStack0000000000000060 = (long)plVar38;
              if (*(byte *)(*plVar28 + 0x130) < bVar11) {
                plVar28 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar11 * 8 + -8) != lVar29) {
                plVar28 = (long *)0x0;
              }
            }
            thunk_FUN_01cc8040(_iStack0000000000000060,plVar28);
            lVar29 = plVar45[5];
            *(int *)((long)unaff_x19 + 0x6bc) = (int)lVar29;
            puVar9 = PTR_DAT_03cde808;
            if (in_stack_000012ac == 0x3c) {
              in_stack_000012ac = (int)lVar29 + 0xe000;
            }
            else {
              lVar29 = *(long *)PTR_DAT_03cde808;
              if (*(int *)(lVar29 + 0xe4) == 0) {
                thunk_FUN_01cb0d4c();
                lVar29 = *(long *)puVar9;
              }
              *(undefined4 *)((long)unaff_x19 + 0x1d4) =
                   *(undefined4 *)(*(long *)(lVar29 + 0xb8) + 0x68);
            }
            if (unaff_x19[0x20] != 0) {
              fVar63 = *(float *)(unaff_x19 + 0x42);
              memmove(&stack0x000011e0,(void *)(unaff_x19[0x20] + 0x28),0x60);
              fVar48 = (float)FUN_03805444(&stack0x000011e0,0);
              if (unaff_x19[0x20] != 0) {
                memmove(&stack0x000011e0,(void *)(unaff_x19[0x20] + 0x28),0x60);
                fVar49 = (float)FUN_0380544c(&stack0x000011e0,0);
                fVar66 = in_stack_000000e0;
                if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
                  fVar66 = fVar50;
                }
                if (unaff_x19[0xd6] == 0) goto LAB_03547e54;
                fVar66 = (fVar63 / fVar48) * fVar49 * fVar66;
                fVar48 = (float)FUN_03805444(unaff_x19[0xd6] + 0x28,0);
                fVar63 = *(float *)(unaff_x19 + 0x42);
                if (fVar48 <= 0.0) {
                  if (unaff_x19[0x20] == 0) goto LAB_03547e54;
                  fVar48 = (float)FUN_03805444(unaff_x19[0x20] + 0x28,0);
                  if (unaff_x19[0x20] == 0) goto LAB_03547e54;
                  fVar49 = (float)FUN_0380544c(unaff_x19[0x20] + 0x28,0);
                  fStack0000000000000124 = in_stack_000000e0;
                  if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
                    fStack0000000000000124 = fVar50;
                  }
                  if (unaff_x19[0x20] == 0) goto LAB_03547e54;
                  fVar50 = (float)FUN_03805474(unaff_x19[0x20] + 0x28,0);
                  if (plVar45[4] == 0) goto LAB_03547e54;
                  FUN_03805908(&stack0x000012b0,plVar45[4],0);
                  fVar61 = (float)FUN_03805738(&stack0x000011c0,0);
                  if (plVar45[4] == 0) goto LAB_03547e54;
                  fVar52 = *(float *)((long)plVar45 + 0x2c);
                  fVar68 = (float)FUN_03805944(plVar45[4],0);
                  if (unaff_x19[0x20] == 0) goto LAB_03547e54;
                  fVar51 = (float)FUN_03805474(unaff_x19[0x20] + 0x28,0);
                  if (unaff_x19[0x20] == 0) goto LAB_03547e54;
                  fVar69 = (float)FUN_0380549c(unaff_x19[0x20] + 0x28,0);
                  if (unaff_x19[0x20] == 0) goto LAB_03547e54;
                  fVar62 = *(float *)((long)unaff_x19 + 0x43c);
                  fStack000000000000016c = (float)FUN_0380544c(unaff_x19[0x20] + 0x28,0);
                  if (unaff_x19[0x20] == 0) goto LAB_03547e54;
                  fStack0000000000000124 = (fVar63 / fVar48) * fVar49 * fStack0000000000000124;
                  param_3 = fStack0000000000000124 * (fVar50 / fVar61) * fVar52 * fVar68;
                  fStack0000000000000124 = fStack0000000000000124 / param_3;
                  fStack000000000000016c = fVar66 * fVar69 * fVar62 * fStack000000000000016c;
                  fVar51 = fStack0000000000000124 * fVar51;
                  fVar50 = (float)FUN_038054a4(unaff_x19[0x20] + 0x28,0);
                  fStack0000000000000124 = fStack0000000000000124 * fVar50;
                }
                else {
                  if (*_iStack0000000000000060 == 0) goto LAB_03547e54;
                  fVar48 = (float)FUN_03805444(*_iStack0000000000000060 + 0x28,0);
                  if (*_iStack0000000000000060 == 0) goto LAB_03547e54;
                  fVar49 = (float)FUN_0380544c(*_iStack0000000000000060 + 0x28,0);
                  if (plVar45[4] == 0) goto LAB_03547e54;
                  fVar68 = *(float *)((long)plVar45 + 0x2c);
                  fVar61 = in_stack_000000e0;
                  if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
                    fVar61 = fVar50;
                  }
                  fVar50 = (float)FUN_03805944(plVar45[4],0);
                  if (unaff_x19[0xd6] == 0) goto LAB_03547e54;
                  fVar51 = (float)FUN_03805474(unaff_x19[0xd6] + 0x28,0);
                  if (*_iStack0000000000000060 == 0) goto LAB_03547e54;
                  fVar52 = (float)FUN_0380549c(*_iStack0000000000000060 + 0x28,0);
                  if (*_iStack0000000000000060 == 0) goto LAB_03547e54;
                  fVar69 = *(float *)((long)unaff_x19 + 0x43c);
                  fStack000000000000016c = (float)FUN_0380544c(*_iStack0000000000000060 + 0x28,0);
                  if (unaff_x19[0xd6] == 0) goto LAB_03547e54;
                  fStack000000000000016c = fVar66 * fVar52 * fVar69 * fStack000000000000016c;
                  param_3 = (fVar63 / fVar48) * fVar49 * fVar61 * fVar68 * fVar50;
                  fStack0000000000000124 = (float)FUN_038054a4(unaff_x19[0xd6] + 0x28,0);
                }
                unaff_x19[0xcc] = (long)plVar45;
                thunk_FUN_01cc8040(in_stack_00000160,plVar45);
                if ((unaff_x19[0x74] != 0) &&
                   (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 != 0)) {
                  if (*(uint *)(in_stack_000001a0 + 7) < *(uint *)(lVar29 + 0x18)) {
                    lVar29 = lVar29 + (long)(int)*(uint *)(in_stack_000001a0 + 7) *
                                      (long)(int)unaff_w23;
                    *(long *)(lVar29 + 0x40) = unaff_x19[0x20];
                    *(undefined4 *)(lVar29 + 0x20) = 1;
                    *(float *)(lVar29 + 0x15c) = param_3;
                    thunk_FUN_01cc8040();
                    lVar29 = unaff_x19[0x74];
                    if ((lVar29 != 0) && (lVar33 = *(long *)(lVar29 + 0x38), lVar33 != 0)) {
                      if (*(uint *)(in_stack_000001a0 + 7) < *(uint *)(lVar33 + 0x18)) {
                        unaff_s13 = 0.0;
                        *(int *)(lVar33 + (long)(int)*(uint *)(in_stack_000001a0 + 7) *
                                          (long)(int)unaff_w23 + 0x50) = (int)unaff_x19[0x24];
                        *(int *)(unaff_x19 + 0x24) = (int)lVar39;
                        goto LAB_035419a4;
                      }
                      goto LAB_03547f94;
                    }
                    goto LAB_03547e54;
                  }
                  goto LAB_03547f94;
                }
              }
            }
          }
          goto LAB_03547e54;
        }
        goto LAB_03547f94;
      }
      goto LAB_03547e54;
    }
    lVar29 = unaff_x19[0x74];
    fVar48 = 0.0;
    if (in_stack_000012ac != 3 && in_stack_000012ac != 0xad) {
      fVar48 = unaff_s12;
    }
    fStack000000000000016c = 0.0;
    if (lVar29 == 0) goto LAB_03547e54;
    fVar51 = 0.0;
    fStack0000000000000124 = 0.0;
    param_3 = unaff_s12;
    unaff_s12 = fVar48;
  }
  lVar29 = *(long *)(lVar29 + 0x38);
  if (lVar29 == 0) goto LAB_03547e54;
  if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
  lVar29 = lVar29 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
  *(short *)(lVar29 + 0x24) = (short)in_stack_000012ac;
  *(int *)(lVar29 + 0x58) = (int)unaff_x19[0x42];
  *(int *)(lVar29 + 0x160) = (int)unaff_x19[0xa0];
  if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
  goto LAB_03547e54;
  if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
  *(int *)(lVar29 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23 + 0x164) =
       (int)unaff_x19[0x2b];
  if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
  goto LAB_03547e54;
  if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
  *(undefined4 *)
   (lVar29 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23 + 0x16c) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
  goto LAB_03547e54;
  if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
  lVar29 = lVar29 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
  auVar56 = *_fStack00000000000000b0;
  *(undefined4 *)(lVar29 + 0x188) = *(undefined4 *)_fStack00000000000000b0[1];
  *(long *)(lVar29 + 0x180) = auVar56._8_8_;
  *(long *)(lVar29 + 0x178) = auVar56._0_8_;
  if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
  goto LAB_03547e54;
  if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
  lVar29 = lVar29 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
  lVar33 = *(long *)(lVar29 + 0x38);
  *(undefined4 *)(lVar29 + 0x18c) = *(undefined4 *)((long)unaff_x19 + 0x284);
  if (lVar33 == 0) {
    if ((*in_stack_00000160 == 0) || (lVar29 = *(long *)(*in_stack_00000160 + 0x20), lVar29 == 0))
    goto LAB_03547e54;
    FUN_03805908(&stack0x000012b0,lVar29,0);
    unaff_x25[1] = in_stack_000012b8;
    *unaff_x25 = in_stack_000012b0;
  }
  else {
    FUN_03805908(&stack0x000005a0,lVar33,0);
  }
  if (in_stack_000012ac >> 0x10 == 0) {
    if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    uVar13 = FUN_02f915ec(in_stack_000012ac,0);
    uVar13 = uVar13 & 1;
  }
  else {
    uVar13 = 0;
  }
  fVar48 = *(float *)(unaff_x19 + 0x5a);
  if (((in_stack_000000a8 & 0x100000000) != 0) && (*(int *)((long)unaff_x19 + 0x65c) == 0)) {
    if (*in_stack_00000160 == 0) goto LAB_03547e54;
    iVar17 = *(int *)(in_stack_000001a0 + 7);
    uVar14 = *(uint *)(*in_stack_00000160 + 0x28);
    if (iVar17 < (int)uStack000000000000004c) {
      if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
      goto LAB_03547e54;
      uVar15 = iVar17 + 1;
      if (*(uint *)(lVar29 + 0x18) <= uVar15) goto LAB_03547f94;
      if (*(int *)(lVar29 + 0x20 + (long)(int)uVar15 * (long)(int)unaff_w23) == 0) {
        lVar29 = *(long *)(lVar29 + 0x20 + (long)(int)uVar15 * (long)(int)unaff_w23 + 0x10);
        if ((((lVar29 == 0) || (unaff_x19[0x20] == 0)) ||
            (lVar33 = *(long *)(unaff_x19[0x20] + 0x178), lVar33 == 0)) ||
           (lVar33 = *(long *)(lVar33 + 0x40), lVar33 == 0)) goto LAB_03547e54;
        uVar23 = FUN_026c20e4(lVar33,uVar14 | *(int *)(lVar29 + 0x28) << 0x10,&stack0x00001190,
                              *(undefined8 *)PTR_DAT_03cde710);
        if ((uVar23 & 1) != 0) {
          FUN_03809ff8(&stack0x000012b0,&stack0x00001190,0);
          unaff_x25[0x17b] = in_stack_000012b8;
          unaff_x25[0x17a] = in_stack_000012b0;
          FUN_03809e4c(&stack0x00001170,0);
          uVar23 = FUN_0380a034(&stack0x00001190,0);
          if ((uVar23 & 0x100) != 0) {
            fVar48 = unaff_s15;
          }
        }
      }
      iVar17 = *(int *)(in_stack_000001a0 + 7);
    }
    if (0 < iVar17) {
      if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
      goto LAB_03547e54;
      if (*(uint *)(lVar29 + 0x18) <= iVar17 - 1U) goto LAB_03547f94;
      lVar29 = *(long *)(lVar29 + (ulong)(iVar17 - 1U) * (ulong)unaff_w23 + 0x30);
      if (lVar29 == 0) goto LAB_03547e54;
      uVar15 = *(uint *)(lVar29 + 0x28);
      lVar29 = FUN_0358888c();
      if ((lVar29 == 0) || (lVar29 = *(long *)(lVar29 + 0x38), lVar29 == 0)) goto LAB_03547e54;
      if (*(uint *)(lVar29 + 0x18) <= *(int *)(in_stack_000001a0 + 7) - 1U) goto LAB_03547f94;
      if (*(int *)(lVar29 + (long)(int)(*(int *)(in_stack_000001a0 + 7) - 1U) * (long)(int)unaff_w23
                  + 0x20) == 0) {
        if (((unaff_x19[0x20] == 0) || (lVar29 = *(long *)(unaff_x19[0x20] + 0x178), lVar29 == 0))
           || (lVar29 = *(long *)(lVar29 + 0x40), lVar29 == 0)) goto LAB_03547e54;
        uVar23 = FUN_026c20e4(lVar29,uVar15 | uVar14 << 0x10,&stack0x00001190,
                              *(undefined8 *)PTR_DAT_03cde710);
        if ((uVar23 & 1) != 0) {
          FUN_0380a020(&stack0x000012b0,&stack0x00001190,0);
          unaff_x25[0x17b] = in_stack_000012b8;
          unaff_x25[0x17a] = in_stack_000012b0;
          FUN_03809e4c(&stack0x00001170,0);
          fVar50 = 1.0;
          FUN_03809cac(0);
          uVar23 = FUN_0380a034(&stack0x00001190,0);
          if ((uVar23 & 0x100) != 0) {
            fVar48 = unaff_s15;
          }
        }
      }
    }
  }
  if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
  goto LAB_03547e54;
  uVar14 = *(uint *)(in_stack_000001a0 + 7);
  uVar53 = FUN_03809c88(&stack0x00001250,0);
  if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_03547f94;
  *(undefined4 *)(lVar29 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x154) = uVar53;
  if (*(int *)(*(long *)PTR_DAT_03cde790 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  uVar23 = FUN_035ba358(in_stack_000012ac,0);
  plVar45 = (long *)PTR_DAT_03cde740;
  uVar14 = *(uint *)(in_stack_000001a0 + 7);
  uVar41 = (ulong)uVar14;
  if ((uVar23 & 1) == 0) {
    if (0 < (int)uVar14) {
      if ((((uVar43 & 0x100000000) == 0) ||
          (uVar15 = *(uint *)((long)unaff_x19 + 0x32c), uVar15 == 0x80000000)) ||
         (uVar15 != uVar14 - 1)) {
        if ((_uStack0000000000000048 & 1) == 0) {
          bVar10 = false;
        }
        else {
          lVar29 = uVar41 * unaff_w23 + 0x144;
          uVar46 = uVar41;
          do {
            uVar46 = uVar46 - 1;
            iVar17 = (int)uVar41;
            uVar14 = iVar17 - 1;
            uVar41 = (ulong)uVar14;
            if ((iVar17 < 1) || (uVar46 == *(uint *)((long)unaff_x19 + 0x32c))) {
              bVar10 = false;
              goto LAB_03542448;
            }
            if ((unaff_x19[0x74] == 0) || (lVar33 = *(long *)(unaff_x19[0x74] + 0x38), lVar33 == 0))
            goto LAB_03547e54;
            if (*(uint *)(lVar33 + 0x18) <= uVar46) goto LAB_03547f94;
            lVar33 = *(long *)(lVar33 + lVar29 + -0x28c);
            if ((lVar33 == 0) || (lVar33 = *(long *)(lVar33 + 0x20), lVar33 == 0))
            goto LAB_03547e54;
            uVar15 = FUN_038058f8(lVar33,0);
            if ((*in_stack_00000160 == 0) ||
               (((unaff_x19[0x20] == 0 || (lVar33 = *(long *)(unaff_x19[0x20] + 0x178), lVar33 == 0)
                 ) || (lVar33 = *(long *)(lVar33 + 0x50), lVar33 == 0)))) goto LAB_03547e54;
            uVar25 = FUN_026cd7b4(lVar33,uVar15 | *(int *)(*in_stack_00000160 + 0x28) << 0x10,
                                  &stack0x00001140,*(undefined8 *)PTR_DAT_03cde720);
            lVar29 = lVar29 + -0x178;
          } while ((uVar25 & 1) == 0);
          if ((unaff_x19[0x74] == 0) || (lVar33 = *(long *)(unaff_x19[0x74] + 0x38), lVar33 == 0))
          goto LAB_03547e54;
          if (*(uint *)(lVar33 + 0x18) <= uVar14) goto LAB_03547f94;
          FUN_03809c70(((*(float *)(lVar33 + lVar29 + -0xc) - *(float *)(unaff_x19 + 0xcb)) /
                        unaff_s12 + in_stack_00001144) - in_stack_00001150,in_stack_00001144,
                       in_stack_00001150,&stack0x00001250,0);
          FUN_03809c80(&stack0x00001250,0);
          bVar10 = true;
          fVar48 = 0.0;
        }
LAB_03542448:
        plVar45 = (long *)PTR_DAT_03cde740;
        if ((uVar43 & 0x100000000) != 0) {
          uVar14 = *(uint *)((long)unaff_x19 + 0x32c);
          if (uVar14 == 0x80000000) {
            bVar10 = true;
          }
          if (!bVar10) {
            if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
            goto LAB_03547e54;
            if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_03547f94;
            lVar29 = *(long *)(lVar29 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x30);
            if ((lVar29 == 0) || (lVar29 = *(long *)(lVar29 + 0x20), lVar29 == 0))
            goto LAB_03547e54;
            uVar14 = FUN_038058f8(lVar29,0);
            if ((*in_stack_00000160 == 0) ||
               (((unaff_x19[0x20] == 0 || (lVar29 = *(long *)(unaff_x19[0x20] + 0x178), lVar29 == 0)
                 ) || (lVar29 = *(long *)(lVar29 + 0x48), lVar29 == 0)))) goto LAB_03547e54;
            uVar41 = FUN_026c7aa4(lVar29,uVar14 | *(int *)(*in_stack_00000160 + 0x28) << 0x10,
                                  &stack0x00001128,*(undefined8 *)PTR_DAT_03cde718);
            if ((uVar41 & 1) != 0) {
              if ((unaff_x19[0x74] != 0) &&
                 (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 != 0)) {
                if (*(uint *)((long)unaff_x19 + 0x32c) < *(uint *)(lVar29 + 0x18)) {
                  FUN_03809c70((in_stack_0000112c +
                               (*(float *)(lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x32c) *
                                                    (long)(int)unaff_w23 + 0x138) -
                               *(float *)(unaff_x19 + 0xcb)) / unaff_s12) - in_stack_00001138,
                               in_stack_0000112c,in_stack_00001138,&stack0x00001250,0);
                  goto LAB_03542544;
                }
                goto LAB_03547f94;
              }
              goto LAB_03547e54;
            }
          }
        }
      }
      else {
        if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
        goto LAB_03547e54;
        if (*(uint *)(lVar29 + 0x18) <= uVar15) goto LAB_03547f94;
        lVar29 = *(long *)(lVar29 + (long)(int)uVar15 * (long)(int)unaff_w23 + 0x30);
        if ((lVar29 == 0) || (lVar29 = *(long *)(lVar29 + 0x20), lVar29 == 0)) goto LAB_03547e54;
        uVar14 = FUN_038058f8(lVar29,0);
        if ((*in_stack_00000160 == 0) ||
           (((unaff_x19[0x20] == 0 || (lVar29 = *(long *)(unaff_x19[0x20] + 0x178), lVar29 == 0)) ||
            (lVar29 = *(long *)(lVar29 + 0x48), lVar29 == 0)))) goto LAB_03547e54;
        uVar41 = FUN_026c7aa4(lVar29,uVar14 | *(int *)(*in_stack_00000160 + 0x28) << 0x10,
                              &stack0x00001158,*(undefined8 *)PTR_DAT_03cde718);
        if ((uVar41 & 1) != 0) {
          if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
          goto LAB_03547e54;
          if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x32c)) goto LAB_03547f94;
          FUN_03809c70((in_stack_0000115c +
                       (*(float *)(lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x32c) *
                                            (long)(int)unaff_w23 + 0x138) -
                       *(float *)(unaff_x19 + 0xcb)) / unaff_s12) - in_stack_00001168,
                       in_stack_0000115c,in_stack_00001168,&stack0x00001250,0);
LAB_03542544:
          FUN_03809c80(&stack0x00001250,0);
          fVar48 = 0.0;
        }
      }
    }
  }
  else {
    *(uint *)((long)unaff_x19 + 0x32c) = uVar14;
  }
  fVar63 = (float)FUN_03809c78(&stack0x00001250,0);
  fVar66 = (float)FUN_03809c78(&stack0x00001250,0);
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar61 = *(float *)(unaff_x19 + 0xcb);
    fVar49 = (float)FUN_03805750(&stack0x00001260,0);
    fVar61 = fVar61 - unaff_s12 * fVar49 * (fVar50 - *(float *)(unaff_x19 + 0x60));
    *(float *)(unaff_x19 + 0xcb) = fVar61;
    if ((uVar13 != 0) || (in_stack_000012ac == 0x200b)) {
      *(float *)(unaff_x19 + 0xcb) = fVar61 - in_stack_00000100 * *(float *)(unaff_x19 + 0x5c);
    }
  }
  fVar61 = *(float *)(unaff_x19 + 0x5b);
  fVar49 = 0.0;
  if (fVar61 != 0.0) {
    if (((*(char *)((long)unaff_x19 + 0x2dc) == '\0') || (0x3a < in_stack_000012ac)) ||
       (fVar49 = 0.25, (1L << ((ulong)in_stack_000012ac & 0x3f) & 0x400500000000000U) == 0)) {
      fVar49 = 0.5;
    }
    fVar68 = (float)FUN_03805730(&stack0x00001260,0);
    fVar52 = (float)FUN_03805740(&stack0x00001260,0);
    fVar49 = (fVar50 - *(float *)(unaff_x19 + 0x60)) *
             (fVar61 * fVar49 - unaff_s12 * (fVar68 * 0.5 + fVar52));
    *(float *)(unaff_x19 + 0xcb) = fVar49 + *(float *)(unaff_x19 + 0xcb);
  }
  if (((cVar27 == '\0') && (*(int *)((long)unaff_x19 + 0x65c) == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x284) & 1) != 0)) {
    lVar29 = unaff_x19[0x23];
    if (*(int *)(*(long *)PTR_DAT_03cb5a80 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    uVar41 = FUN_037707bc(lVar29,0,0);
    fVar68 = 0.0;
    if ((uVar41 & 1) != 0) {
      lVar29 = unaff_x19[0x23];
      if (*(int *)(*plVar45 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      if (lVar29 == 0) goto LAB_03547e54;
      uVar41 = FUN_03747cec(lVar29,*(undefined4 *)(*(long *)(*plVar45 + 0xb8) + 0x6c),0);
      if ((uVar41 & 1) != 0) {
        lVar29 = unaff_x19[0x23];
        if (*(int *)(*plVar45 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        if (lVar29 == 0) goto LAB_03547e54;
        fVar61 = (float)thunk_FUN_03749d2c(lVar29,*(undefined4 *)(*(long *)(*plVar45 + 0xb8) + 0x6c)
                                           ,0);
        if ((unaff_x19[0x20] == 0) || (unaff_x19[0x23] == 0)) goto LAB_03547e54;
        fVar52 = *(float *)(unaff_x19[0x20] + 0x1a8);
        fVar68 = (float)thunk_FUN_03749d2c(unaff_x19[0x23],
                                           *(undefined4 *)(*(long *)(*plVar45 + 0xb8) + 0xe4),0);
        fVar68 = fVar68 * fVar61 * fVar52 * 0.25;
        if (fVar61 < unaff_s13 + fVar68) {
          unaff_s13 = fVar61 - fVar68;
        }
      }
    }
    if (unaff_x19[0x20] == 0) goto LAB_03547e54;
    fStack00000000000000f0 = *(float *)(unaff_x19[0x20] + 0x1ac);
  }
  else {
    lVar29 = unaff_x19[0x23];
    if (*(int *)(*(long *)PTR_DAT_03cb5a80 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    uVar41 = FUN_037707bc(lVar29,0,0);
    fStack00000000000000f0 = 0.0;
    if ((uVar41 & 1) != 0) {
      lVar29 = unaff_x19[0x23];
      if (*(int *)(*plVar45 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      if (lVar29 == 0) goto LAB_03547e54;
      uVar41 = FUN_03747cec(lVar29,*(undefined4 *)(*(long *)(*plVar45 + 0xb8) + 0x6c),0);
      if ((uVar41 & 1) != 0) {
        lVar29 = unaff_x19[0x23];
        if (*(int *)(*plVar45 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        if (lVar29 == 0) goto LAB_03547e54;
        uVar41 = FUN_03747cec(lVar29,*(undefined4 *)(*(long *)(*plVar45 + 0xb8) + 0xe4),0);
        if ((uVar41 & 1) != 0) {
          lVar29 = unaff_x19[0x23];
          if (*(int *)(*plVar45 + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
          }
          if (lVar29 != 0) {
            fVar61 = (float)thunk_FUN_03749d2c(lVar29,*(undefined4 *)
                                                       (*(long *)(*plVar45 + 0xb8) + 0x6c),0);
            if ((unaff_x19[0x20] != 0) && (unaff_x19[0x23] != 0)) {
              fVar52 = *(float *)(unaff_x19[0x20] + 0x1a0);
              fVar68 = (float)thunk_FUN_03749d2c(unaff_x19[0x23],
                                                 *(undefined4 *)(*(long *)(*plVar45 + 0xb8) + 0xe4),
                                                 0);
              fVar68 = fVar68 * fVar61 * fVar52 * 0.25;
              if (fVar61 < unaff_s13 + fVar68) {
                unaff_s13 = fVar61 - fVar68;
              }
              goto LAB_03542578;
            }
          }
          goto LAB_03547e54;
        }
      }
    }
    fVar68 = 0.0;
  }
LAB_03542578:
  fVar62 = *(float *)(unaff_x19 + 0xcb);
  fVar61 = (float)FUN_03805740(&stack0x00001260,0);
  fVar69 = *(float *)((long)unaff_x19 + 0x47c);
  fVar52 = (float)FUN_03809c68(&stack0x00001250,0);
  fVar62 = fVar62 + (fVar50 - *(float *)(unaff_x19 + 0x60)) *
                    unaff_s12 * (fVar52 + ((fVar61 * fVar69 - unaff_s13) - fVar68));
  fVar61 = (float)FUN_03805748(&stack0x00001260,0);
  fVar52 = (float)FUN_03809c78(&stack0x00001250,0);
  fStack0000000000000170 =
       *(float *)((long)unaff_x19 + 0x634) +
       ((fStack000000000000016c + unaff_s12 * (unaff_s13 + fVar61 + fVar52)) -
       *(float *)((long)unaff_x19 + 0x4ec));
  fVar61 = (float)FUN_03805738(&stack0x00001260,0);
  fVar61 = fStack0000000000000170 - unaff_s12 * (unaff_s13 + unaff_s13 + fVar61);
  fVar52 = (float)FUN_03805730(&stack0x00001260,0);
  fVar50 = fVar62 + (fVar50 - *(float *)(unaff_x19 + 0x60)) *
                    unaff_s12 *
                    (fVar68 + fVar68 +
                    unaff_s13 + unaff_s13 + fVar52 * *(float *)((long)unaff_x19 + 0x47c));
  fVar52 = fVar62;
  fVar69 = fVar50;
  if (((*(int *)((long)unaff_x19 + 0x65c) == 0) && (cVar27 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x284) >> 1 & 1) != 0)) {
    if (unaff_x19[0x20] == 0) goto LAB_03547e54;
    lVar29 = unaff_x19[0xc1];
    fVar52 = (float)FUN_0380547c(unaff_x19[0x20] + 0x28,0);
    if (unaff_x19[0x20] == 0) goto LAB_03547e54;
    fVar59 = (float)FUN_0380549c(unaff_x19[0x20] + 0x28,0);
    if (unaff_x19[0x20] == 0) goto LAB_03547e54;
    fVar65 = *(float *)((long)unaff_x19 + 0x43c);
    fVar67 = *(float *)((long)unaff_x19 + 0x634);
    fVar69 = (float)(int)lVar29 * fStack0000000000000050;
    fVar54 = (float)FUN_0380544c(unaff_x19[0x20] + 0x28,0);
    fVar54 = fVar54 * fVar65 * (fVar52 - (fVar59 + fVar67)) * 0.5;
    fVar52 = (float)FUN_03805748(&stack0x00001260,0);
    fVar67 = fVar69 * unaff_s12 * ((fVar68 + unaff_s13 + fVar52) - fVar54);
    fVar59 = (float)FUN_03805748(&stack0x00001260,0);
    fVar65 = (float)FUN_03805738(&stack0x00001260,0);
    fStack0000000000000170 = fStack0000000000000170 + 0.0;
    fVar61 = fVar61 + 0.0;
    fVar52 = fVar62 + fVar67;
    fVar69 = fVar69 * unaff_s12 * ((((fVar59 - fVar65) - unaff_s13) - fVar68) - fVar54);
    fVar62 = fVar62 + fVar69;
    fVar69 = fVar50 + fVar69;
    fVar50 = fVar50 + fVar67;
  }
  uVar64 = *in_stack_000001a0;
  uVar22 = in_stack_000001a0[1];
  if (DAT_03ef1416 == '\0') {
    FUN_01c5c92c(PTR_DAT_03cb5ab8);
    DAT_03ef1416 = '\x01';
  }
  uVar55 = **(undefined8 **)(*(long *)PTR_DAT_03cb5ab8 + 0xb8);
  uVar57 = (*(undefined8 **)(*(long *)PTR_DAT_03cb5ab8 + 0xb8))[1];
  if (DAT_00b46098 <
      (float)((ulong)uVar22 >> 0x20) * (float)((ulong)uVar57 >> 0x20) +
      (float)uVar22 * (float)uVar57 +
      (float)uVar64 * (float)uVar55 +
      (float)((ulong)uVar64 >> 0x20) * (float)((ulong)uVar55 >> 0x20)) {
    fVar68 = 0.0;
    auVar58._4_12_ = SUB1612(ZEXT816(0),4);
    auVar58._0_4_ = fVar61;
    uVar64 = auVar58._0_8_;
    uVar41 = (ulong)(uint)fStack0000000000000170;
    uVar22 = uVar64;
  }
  else {
    FUN_0375fdfc(&stack0x000012b0,*(undefined4 *)((long)unaff_x19 + 0x46c),(int)unaff_x19[0x8e],
                 *(undefined4 *)((long)unaff_x19 + 0x474),(int)unaff_x19[0x8f],0);
    fVar69 = (fVar50 + fVar62) * 0.5;
    fVar59 = (fVar61 + fStack0000000000000170) * 0.5;
    unaff_x25[0x16b] = in_stack_000012c8;
    unaff_x25[0x16a] = CONCAT44(in_stack_000012c4,in_stack_000012c0);
    unaff_x25[0x169] = in_stack_000012b8;
    unaff_x25[0x168] = in_stack_000012b0;
    unaff_x25[0x16d] = in_stack_000012d8;
    unaff_x25[0x16c] = in_stack_000012d0;
    fVar50 = 0.0;
    unaff_x25[0x16f] = in_stack_000012e8;
    unaff_x25[0x16e] = in_stack_000012e0;
    auVar56 = ZEXT416((uint)(fStack0000000000000170 - fVar59));
    fVar52 = (float)FUN_0375fcfc(&stack0x000010e0,0);
    fVar52 = fVar69 + fVar52;
    fVar54 = 0.0;
    uVar41 = CONCAT44(fVar50 + 0.0,fVar59 + auVar56._0_4_);
    auVar56 = ZEXT416((uint)(fVar61 - fVar59));
    fVar62 = (float)FUN_0375fcfc(&stack0x000010e0,0);
    fVar62 = fVar69 + fVar62;
    fVar68 = 0.0;
    uVar64 = CONCAT44(fVar54 + 0.0,fVar59 + auVar56._0_4_);
    auVar56 = ZEXT416((uint)(fStack0000000000000170 - fVar59));
    fVar50 = (float)FUN_0375fcfc(&stack0x000010e0,0);
    fVar50 = fVar69 + fVar50;
    fVar54 = 0.0;
    fStack0000000000000170 = fVar59 + auVar56._0_4_;
    fVar68 = fVar68 + 0.0;
    auVar56 = ZEXT416((uint)(fVar61 - fVar59));
    fVar61 = (float)FUN_0375fcfc(&stack0x000010e0,0);
    fVar69 = fVar69 + fVar61;
    uVar22 = CONCAT44(fVar54 + 0.0,fVar59 + auVar56._0_4_);
  }
  unaff_s15 = 0.0;
  if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
  goto LAB_03547e54;
  if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
  lVar29 = lVar29 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
  *(float *)(lVar29 + 0x114) = fVar62;
  *(undefined8 *)(lVar29 + 0x118) = uVar64;
  if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
  goto LAB_03547e54;
  if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
  lVar29 = lVar29 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
  *(float *)(lVar29 + 0x108) = fVar52;
  *(ulong *)(lVar29 + 0x10c) = uVar41;
  if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
  goto LAB_03547e54;
  if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
  lVar29 = lVar29 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
  *(float *)(lVar29 + 0x120) = fVar50;
  *(ulong *)(lVar29 + 0x124) = CONCAT44(fVar68,fStack0000000000000170);
  if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
  goto LAB_03547e54;
  if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
  lVar29 = lVar29 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
  *(float *)(lVar29 + 300) = fVar69;
  *(undefined8 *)(lVar29 + 0x130) = uVar22;
  if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
  goto LAB_03547e54;
  uVar14 = *(uint *)((long)unaff_x19 + 0x4a4);
  fVar68 = *(float *)(unaff_x19 + 0xcb);
  fVar61 = (float)FUN_03809c68(&stack0x00001250,0);
  if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_03547f94;
  *(float *)(lVar29 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x138) =
       fVar68 + unaff_s12 * fVar61;
  if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
  goto LAB_03547e54;
  uVar14 = *(uint *)((long)unaff_x19 + 0x4a4);
  fVar68 = *(float *)((long)unaff_x19 + 0x4ec);
  fVar52 = *(float *)((long)unaff_x19 + 0x634);
  fVar61 = (float)FUN_03809c78(&stack0x00001250,0);
  if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_03547f94;
  *(float *)(lVar29 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x144) =
       (fStack000000000000016c - fVar68) + fVar52 + unaff_s12 * fVar61;
  if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
  goto LAB_03547e54;
  uVar14 = *(uint *)(in_stack_000001a0 + 7);
  if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_03547f94;
  lVar29 = lVar29 + 0x20;
  *(float *)(lVar29 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x138) =
       (fVar50 - fVar62) / ((float)uVar41 - (float)uVar64);
  fVar63 = unaff_s12 * (fVar51 + fVar63);
  if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
    fVar63 = fVar63 / fStack0000000000000138;
    fVar66 = (unaff_s12 * (fStack0000000000000124 + fVar66)) / fStack0000000000000138;
  }
  else {
    fVar66 = unaff_s12 * (fStack0000000000000124 + fVar66);
  }
  fVar50 = 1.0;
  unaff_s14 = 1.0;
  fVar61 = *(float *)((long)unaff_x19 + 0x634);
  uVar15 = *(uint *)(unaff_x19 + 0x95);
  if ((uVar13 == 0) || (uVar14 == uVar15)) {
    fVar63 = fVar63 + fVar61;
    fVar66 = fVar66 + fVar61;
    fVar68 = fVar63;
    fVar52 = fVar66;
    if (fVar61 != 0.0) {
      fVar68 = (fVar63 - fVar61) / *(float *)((long)unaff_x19 + 0x43c);
      fVar52 = (fVar66 - fVar61) / *(float *)((long)unaff_x19 + 0x43c);
      if (fVar68 <= fVar63) {
        fVar68 = fVar63;
      }
      if (fVar66 <= fVar52) {
        fVar52 = fVar66;
      }
    }
    lVar29 = lVar29 + (long)(int)uVar14 * (long)(int)unaff_w23;
    fVar61 = fVar68;
    if (fVar68 <= *(float *)((long)unaff_x19 + 0x4dc)) {
      fVar61 = *(float *)((long)unaff_x19 + 0x4dc);
    }
    fVar51 = fVar52;
    if (*(float *)(unaff_x19 + 0x9c) <= fVar52) {
      fVar51 = *(float *)(unaff_x19 + 0x9c);
    }
    *(float *)((long)unaff_x19 + 0x4dc) = fVar61;
    *(float *)(unaff_x19 + 0x9c) = fVar51;
    *(float *)(lVar29 + 300) = fVar68;
    *(float *)(lVar29 + 0x130) = fVar52;
    fVar68 = *(float *)((long)unaff_x19 + 0x4ec);
    *(float *)(lVar29 + 0x120) = fVar63 - fVar68;
    *(float *)((long)unaff_x19 + 0x4d4) = fVar63 - fVar68;
    *(float *)(lVar29 + 0x128) = fVar66 - fVar68;
    *(float *)(unaff_x19 + 0x9b) = fVar66 - fVar68;
    if (((int)unaff_x19[0x97] == 0) || (*(char *)((long)unaff_x19 + 0x374) != '\0')) {
      *(float *)((long)unaff_x19 + 0x4cc) = fVar61;
      if (unaff_x19[0x20] == 0) goto LAB_03547e54;
      fVar66 = *(float *)(unaff_x19 + 0x9a);
      fVar61 = (float)FUN_0380547c(unaff_x19[0x20] + 0x28,0);
      fStack0000000000000138 = (unaff_s12 * fVar61) / fStack0000000000000138;
      if (fVar66 <= fStack0000000000000138) {
        fVar66 = fStack0000000000000138;
      }
      fVar68 = *(float *)((long)unaff_x19 + 0x4ec);
      *(float *)(unaff_x19 + 0x9a) = fVar66;
    }
    if (fVar68 == 0.0) {
      fVar66 = *(float *)(unaff_x19 + 0x99);
      if (*(float *)(unaff_x19 + 0x99) <= fVar63) {
        fVar66 = fVar63;
      }
      *(float *)(unaff_x19 + 0x99) = fVar66;
    }
  }
  else {
    lVar29 = lVar29 + (long)(int)uVar14 * (long)(int)unaff_w23;
    uVar22 = in_stack_000001a0[0xe];
    *(undefined8 *)(lVar29 + 300) = uVar22;
    fVar68 = *(float *)((long)unaff_x19 + 0x4ec);
    fVar63 = (float)uVar22 - fVar68;
    fVar66 = (float)((ulong)uVar22 >> 0x20) - fVar68;
    *(float *)(lVar29 + 0x120) = fVar63;
    *(float *)(lVar29 + 0x128) = fVar66;
    in_stack_000001a0[0xd] = CONCAT44(fVar66,fVar63);
  }
  lVar29 = unaff_x19[0x74];
  if ((lVar29 == 0) || (lVar33 = *(long *)(lVar29 + 0x38), lVar33 == 0)) goto LAB_03547e54;
  uVar32 = *(uint *)(in_stack_000001a0 + 7);
  if (*(uint *)(lVar33 + 0x18) <= uVar32) goto LAB_03547f94;
  lVar33 = lVar33 + (long)(int)uVar32 * (long)(int)unaff_w23;
  *(undefined1 *)(lVar33 + 400) = 0;
  uVar44 = *(uint *)(unaff_x19 + 0x54);
  if ((((in_stack_000012ac == 9) ||
       ((in_stack_000012ac == 0x200b || uVar13 != 0 &&
        ((*(uint *)((long)unaff_x19 + 0x304) & 0xfffffffe) == 2)))) ||
      ((uVar13 == 0 &&
       (((in_stack_000012ac != 3 && (in_stack_000012ac != 0x200b)) && (in_stack_000012ac != 0xad))))
      )) || ((in_stack_000012ac == 0xad && ((uint)fStack0000000000000054 & 1) == 0 ||
             (*(int *)((long)unaff_x19 + 0x65c) == 1)))) {
    *(undefined1 *)(lVar33 + 400) = 1;
    pfVar34 = in_stack_000000a0;
    pfVar36 = _fStack00000000000000d0;
    if (uVar70 == uVar18) {
      lVar29 = *(long *)(lVar29 + 0x50);
      if (lVar29 == 0) goto LAB_03547e54;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_03547f94;
      lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
      pfVar36 = (float *)(lVar29 + 100);
      pfVar34 = (float *)(lVar29 + 0x68);
    }
    fVar61 = *pfVar36;
    fVar68 = *pfVar34;
    fVar63 = *(float *)(unaff_x19 + 0x73);
    fVar66 = 0.0;
    fVar52 = *(float *)(unaff_x19 + 0xcb);
    in_stack_00000130._4_4_ = (fStack00000000000000cc - fVar61) - fVar68;
    bVar10 = true;
    if ((fVar63 <= in_stack_00000130._4_4_) && (bVar10 = false, !NAN(fVar63))) {
      bVar10 = fVar63 == -1.0;
    }
    if (!bVar10) {
      in_stack_00000130._4_4_ = fVar63;
    }
    fVar63 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar63 = (float)FUN_03805750(&stack0x00001260,0);
    }
    fVar51 = *(float *)((long)unaff_x19 + 0x4ec);
    if (in_stack_000012ac != 0xad) {
      param_3 = unaff_s12;
    }
    fVar69 = *(float *)(unaff_x19 + 0x60);
    param_2 = ZEXT416((uint)fVar69);
    if ((0.0 < fVar51) && ((char)unaff_x19[0x5e] == '\0')) {
      fVar66 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
    }
    iVar17 = *(int *)(in_stack_000001a0 + 7);
    fVar66 = (*(float *)((long)unaff_x19 + 0x4cc) - (*(float *)(unaff_x19 + 0x9c) - fVar51)) +
             fVar66;
    if (fStack00000000000000dc < fVar66) {
      if (*(int *)((long)unaff_x19 + 0x314) == -1) {
        *(int *)((long)unaff_x19 + 0x314) = iVar17;
      }
      unaff_x24 = (long *)PTR_DAT_03cde808;
      fVar62 = DAT_00b45f9c;
      if ((char)unaff_x19[0x4c] != '\0') {
        if (0.0 < fVar51) {
          fVar51 = *(float *)((long)unaff_x19 + 0x2f4);
          if ((fVar51 < *(float *)(unaff_x19 + 0x5d)) &&
             (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
            fVar50 = *(float *)(unaff_x19 + 0x5d) +
                     ((in_stack_00000018._4_4_ - fVar66) / (float)(int)unaff_x19[0x97]) /
                     fStack0000000000000078;
            if (fVar50 <= fVar51) {
              fVar50 = fVar51;
            }
            goto LAB_03547e80;
          }
        }
        fVar66 = *(float *)((long)unaff_x19 + 0x20c);
        fVar51 = *(float *)(unaff_x19 + 0x4f);
        if ((fVar51 < fVar66) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
          *(float *)((long)unaff_x19 + 0x264) = fVar66;
          fVar50 = (fVar66 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
          if (fVar50 <= fVar62) {
            fVar50 = fVar62;
          }
          fVar48 = (fVar66 - fVar50) * 20.0 + 0.5;
          fVar50 = DAT_00b4601c;
          if (fVar48 != INFINITY) {
            fVar50 = (float)(int)fVar48 / 20.0;
          }
          if (fVar50 <= fVar51) {
            fVar50 = fVar51;
          }
          *(float *)((long)unaff_x19 + 0x20c) = fVar50;
          return;
        }
      }
      iVar20 = (int)unaff_x19[0x62];
      if (iVar20 < 5) {
        if (iVar20 == 1) {
          lVar29 = *(long *)PTR_DAT_03cde808;
          if (*(int *)(lVar29 + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
            lVar29 = *unaff_x24;
          }
          unaff_x28 = (long *)PTR_DAT_03cb5ae0;
          lVar33 = *(long *)(lVar29 + 0xb8);
          if (*(int *)(lVar33 + 0x1708) != 0) {
            if (*(int *)(lVar29 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
              lVar33 = *(long *)(*unaff_x24 + 0xb8);
            }
            Unity_Collections_LowLevel_Unsafe_UnsafeList<DebugOccluderStats>__Dispose
                      (&stack0x000012b0,lVar33 + 0x1338,*(undefined8 *)PTR_DAT_03cde7b0);
            memcpy(&stack0x00000d28,&stack0x000012b0,0x3b8);
            goto code_r0x03543524;
          }
LAB_03543558:
          unaff_x28 = (long *)PTR_DAT_03cb5ae0;
          in_stack_000001a0[7] = 0;
          fVar50 = unaff_s14;
          uVar16 = 0xffffffff;
          uVar21 = DAT_00b463f8;
          goto FUN_03544d6c;
        }
        if (iVar20 != 3) goto LAB_0354301c;
        if (*(int *)(*(long *)PTR_DAT_03cde808 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
LAB_035431bc:
        uVar16 = FUN_03594d0c();
      }
      else {
        if (iVar20 == 5) {
          if (((int)uVar16 < 0) || (iVar17 == 0)) {
            *(undefined4 *)(in_stack_000001a0 + 7) = 0;
            uVar16 = 0xffffffff;
            unaff_x24 = (long *)PTR_DAT_03cde808;
            unaff_x28 = (long *)PTR_DAT_03cb5ae0;
            fVar50 = unaff_s14;
            uVar21 = DAT_00b463f8;
          }
          else {
            param_2 = ZEXT416((uint)fStack00000000000000dc);
            if (fStack00000000000000dc <
                *(float *)(in_stack_000001a0 + 0xe) - *(float *)(unaff_x19 + 0x9c)) {
              if (*(int *)(*(long *)PTR_DAT_03cde808 + 0xe4) == 0) {
                thunk_FUN_01cb0d4c();
              }
              goto LAB_035431bc;
            }
            if (*(int *)(*(long *)PTR_DAT_03cde808 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            unaff_x28 = (long *)PTR_DAT_03cb5ae0;
            uVar16 = FUN_03594d0c();
            *(undefined1 *)((long)unaff_x19 + 0x374) = 1;
            *(undefined4 *)(unaff_x19 + 0x95) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
            uVar22 = *(undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 0x1730);
            *(float *)(unaff_x19 + 0xcb) = *(float *)((long)unaff_x19 + 0x444) + 0.0;
            *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
            uVar22 = NEON_rev64(uVar22,4);
            param_2 = ZEXT816(0);
            *(int *)(unaff_x19 + 0x97) = (int)unaff_x19[0x97] + 1;
            iVar17 = *(int *)((long)unaff_x19 + 0x4c4);
            *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
            unaff_x19[0x99] = 0;
            in_stack_000001a0[0xe] = uVar22;
            *(int *)((long)unaff_x19 + 0x4c4) = iVar17 + 1;
            fVar50 = unaff_s14;
          }
          goto FUN_03544d6c;
        }
        if (iVar20 != 6) goto LAB_0354301c;
        if (*(int *)(*(long *)PTR_DAT_03cde808 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        uVar16 = FUN_03594d0c();
        lVar29 = unaff_x19[99];
        if (*(int *)(*(long *)PTR_DAT_03cb5a80 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        uVar23 = FUN_037707bc(lVar29,0,0);
        if ((uVar23 & 1) != 0) {
          plVar45 = (long *)unaff_x19[99];
          uVar21 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar45 == (long *)0x0) goto LAB_03547e54;
          (**(code **)(*plVar45 + 0x558))(plVar45,uVar21,*(undefined8 *)(*plVar45 + 0x560));
          lVar29 = unaff_x19[99];
          if (lVar29 == 0) goto LAB_03547e54;
          *(int *)(lVar29 + 0x438) = (int)unaff_x19[0x87];
          FUN_03588698(lVar29,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
          plVar45 = (long *)unaff_x19[99];
          if (plVar45 == (long *)0x0) goto LAB_03547e54;
          (**(code **)(*plVar45 + 0x7d8))(plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x65) = 1;
        }
      }
      unaff_x28 = (long *)PTR_DAT_03cb5ae0;
      fVar50 = unaff_s14;
      uVar21 = CONCAT44(3,iVar17);
      goto FUN_03544d6c;
    }
LAB_0354301c:
    unaff_x24 = (long *)PTR_DAT_03cde808;
    unaff_x28 = (long *)PTR_DAT_03cb5ae0;
    if ((uVar23 & 1) != 0) {
      fVar66 = fVar50;
      if ((uVar44 & 0x18) != 0) {
        fVar66 = DAT_00b46148;
      }
      fVar63 = ABS(fVar52) + fVar63 * (1.0 - fVar69) * param_3;
      if (fVar66 * in_stack_00000130._4_4_ < fVar63) {
        if (((*(int *)((long)unaff_x19 + 0x304) == 0) || (*(int *)((long)unaff_x19 + 0x304) == 3))
           || (iVar17 == (int)unaff_x19[0x95])) {
          if (((char)unaff_x19[0x4c] != '\0') &&
             (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
            param_3 = 100.0;
            fVar52 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
            if (fVar69 < fVar52) goto LAB_03547eec;
            fVar52 = *(float *)((long)unaff_x19 + 0x20c);
            fVar51 = *(float *)(unaff_x19 + 0x4f);
            param_2 = ZEXT416((uint)fVar51);
            if (fVar51 < fVar52) goto LAB_03547f34;
          }
          iVar20 = (int)unaff_x19[0x62];
          if (iVar20 == 1) {
            lVar29 = *(long *)PTR_DAT_03cde808;
            if (*(int *)(lVar29 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
              lVar29 = *unaff_x24;
            }
            unaff_x28 = (long *)PTR_DAT_03cb5ae0;
            lVar33 = *(long *)(lVar29 + 0xb8);
            if (*(int *)(lVar33 + 0x1708) == 0) goto LAB_03543558;
            if (*(int *)(lVar29 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
              lVar33 = *(long *)(*unaff_x24 + 0xb8);
            }
            Unity_Collections_LowLevel_Unsafe_UnsafeList<DebugOccluderStats>__Dispose
                      (&stack0x000012b0,lVar33 + 0x1338,*(undefined8 *)PTR_DAT_03cde7b0);
            memcpy(&stack0x000005b8,&stack0x000012b0,0x3b8);
            unaff_s14 = fVar50;
            goto code_r0x03543524;
          }
          if (iVar20 == 6) goto LAB_035433ac;
          if (iVar20 == 3) {
            if (*(int *)(*(long *)PTR_DAT_03cde808 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            goto LAB_035431bc;
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cde808 + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
          }
          uVar16 = FUN_03594d0c();
          if (*(float *)((long)unaff_x19 + 0x2ec) == DAT_00b45db4) {
            lVar29 = unaff_x19[0x74];
            if ((lVar29 == 0) || (lVar33 = *(long *)(lVar29 + 0x38), lVar33 == 0))
            goto LAB_03547e54;
            if (*(uint *)(lVar33 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
            fVar52 = *(float *)((long)unaff_x19 + 0x4ec);
            fVar51 = 0.0;
            if ((0.0 < fVar52) && ((char)unaff_x19[0x5e] == '\0')) {
              fVar51 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
            }
            fVar51 = in_stack_00000100 * *(float *)((long)unaff_x19 + 0x2e4) +
                     *(float *)(lVar33 + (long)(int)*(uint *)(in_stack_000001a0 + 7) *
                                         (long)(int)unaff_w23 + 0x14c) +
                     (fVar51 - *(float *)(unaff_x19 + 0x9c)) +
                     fStack0000000000000078 *
                     (in_stack_00000040._4_4_ + *(float *)(unaff_x19 + 0x5d));
          }
          else {
            lVar29 = unaff_x19[0x74];
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
            if (lVar29 == 0) goto LAB_03547e54;
            fVar51 = *(float *)((long)unaff_x19 + 0x2ec) +
                     in_stack_00000100 * *(float *)((long)unaff_x19 + 0x2e4);
            fVar52 = *(float *)((long)unaff_x19 + 0x4ec);
          }
          puVar9 = PTR_DAT_03cde808;
          lVar29 = *(long *)(lVar29 + 0x38);
          if (lVar29 == 0) goto LAB_03547e54;
          uVar32 = *(uint *)((long)unaff_x19 + 0x4a4);
          if ((*(uint *)(lVar29 + 0x18) <= uVar32) ||
             (uVar37 = uVar32 - 1, *(uint *)(lVar29 + 0x18) <= uVar37)) goto LAB_03547f94;
          param_3 = *(float *)((long)unaff_x19 + 0x4cc);
          lVar29 = lVar29 + 0x20;
          fVar62 = *(float *)(lVar29 + (long)(int)uVar32 * (long)(int)unaff_w23 + 0x130);
          param_2 = ZEXT416((uint)fVar62);
          fVar62 = (fVar51 + param_3 + fVar52) - fVar62;
          if ((*(short *)(lVar29 + (long)(int)uVar37 * (long)(int)unaff_w23 + 4) == 0xad &&
               ((uint)fStack0000000000000054 & 1) == 0) &&
             (((int)unaff_x19[0x62] == 0 || (fVar62 < fStack00000000000000dc)))) {
            fStack0000000000000054 = 0.0;
            uVar16 = uVar16 - 1;
            *(uint *)(in_stack_000001a0 + 7) = uVar37;
            unaff_x24 = (long *)PTR_DAT_03cde808;
            unaff_x28 = (long *)PTR_DAT_03cb5ae0;
            fVar50 = unaff_s14;
            uVar21 = CONCAT44(0x2d,uVar37);
            goto FUN_03544d6c;
          }
          if (*(short *)(lVar29 + (long)(int)uVar32 * (long)(int)unaff_w23 + 4) == 0xad) {
            fStack0000000000000054 = 1.4013e-45;
            unaff_x24 = (long *)PTR_DAT_03cde808;
            unaff_x28 = (long *)PTR_DAT_03cb5ae0;
            fVar50 = unaff_s14;
            goto FUN_03544d6c;
          }
          if ((char)unaff_x19[0x4c] != '\0' && ((uStack000000000000007c ^ 0xffffffff) & 1) == 0) {
            fVar52 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
            fVar69 = *(float *)(unaff_x19 + 0x60);
            if ((fVar69 < fVar52) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
            goto LAB_03547eec;
            fVar52 = *(float *)((long)unaff_x19 + 0x20c);
            fVar51 = *(float *)(unaff_x19 + 0x4f);
            param_2 = ZEXT416((uint)fVar51);
            if ((fVar51 < fVar52) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
            goto LAB_03547f34;
          }
          lVar29 = *(long *)PTR_DAT_03cde808;
          if (*(int *)(lVar29 + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
            lVar29 = *(long *)puVar9;
          }
          if ((((uStack000000000000007c & 1) != 0) &&
              (iVar20 = *(int *)(*(long *)(lVar29 + 0xb8) + 0xf80), iVar20 != -1)) &&
             (iVar20 != iStack0000000000000020)) {
            if (*(int *)(lVar29 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            uVar16 = FUN_03594d0c();
            if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
            goto LAB_03547e54;
            uVar32 = *(int *)(in_stack_000001a0 + 7) - 1;
            if (*(uint *)(lVar29 + 0x18) <= uVar32) goto LAB_03547f94;
            iStack0000000000000020 = iVar20;
            if (*(short *)(lVar29 + (long)(int)uVar32 * (long)(int)unaff_w23 + 0x24) == 0xad) {
              uVar16 = uVar16 - 1;
              fStack0000000000000054 = 0.0;
              *(uint *)(in_stack_000001a0 + 7) = uVar32;
              unaff_x24 = (long *)PTR_DAT_03cde808;
              unaff_x28 = (long *)PTR_DAT_03cb5ae0;
              fVar50 = unaff_s14;
              uVar21 = CONCAT44(0x2d,uVar32);
              goto FUN_03544d6c;
            }
          }
          if (fVar62 <= fStack00000000000000dc) {
            param_2 = ZEXT416((uint)unaff_s12);
            param_3 = in_stack_00000100;
            FUN_035957d8();
            fStack0000000000000054 = 0.0;
            uStack000000000000007c = 1;
            uStack0000000000000070 = 1;
            unaff_x24 = (long *)PTR_DAT_03cde808;
            unaff_x28 = (long *)PTR_DAT_03cb5ae0;
            goto FUN_03544d6c;
          }
          if (*(int *)((long)unaff_x19 + 0x314) == -1) {
            *(undefined4 *)((long)unaff_x19 + 0x314) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
          }
          unaff_x28 = (long *)PTR_DAT_03cb5ae0;
          if ((char)unaff_x19[0x4c] != '\0') {
            fVar52 = *(float *)((long)unaff_x19 + 0x2f4);
            if ((fVar52 < *(float *)(unaff_x19 + 0x5d)) &&
               (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
              fVar50 = *(float *)(unaff_x19 + 0x5d) +
                       ((in_stack_00000018._4_4_ - fVar62) / (float)((int)unaff_x19[0x97] + 1)) /
                       fStack0000000000000078;
              if (fVar50 <= fVar52) {
                fVar50 = fVar52;
              }
LAB_03547e80:
              *(float *)(unaff_x19 + 0x5d) = fVar50;
              return;
            }
            fVar52 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
            fVar69 = *(float *)(unaff_x19 + 0x60);
            if ((fVar69 < fVar52) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
LAB_03547eec:
              fVar50 = fVar63;
              if (0.0 < fVar69) {
                fVar50 = fVar63 / (1.0 - fVar69);
              }
              fVar69 = fVar69 + (fVar63 - fVar66 * (in_stack_00000130._4_4_ + DAT_00b45fd4)) /
                                fVar50;
              if (fVar52 <= fVar69) {
                fVar69 = fVar52;
              }
              *(float *)(unaff_x19 + 0x60) = fVar69;
              return;
            }
            fVar52 = *(float *)((long)unaff_x19 + 0x20c);
            fVar51 = *(float *)(unaff_x19 + 0x4f);
            param_2 = ZEXT416((uint)fVar51);
            if ((fVar51 < fVar52) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
LAB_03547f34:
              fVar50 = DAT_00b45f9c;
              *(float *)((long)unaff_x19 + 0x264) = fVar52;
              fVar48 = (fVar52 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
              if (fVar48 <= fVar50) {
                fVar48 = fVar50;
              }
              fVar48 = (fVar52 - fVar48) * 20.0 + 0.5;
              fVar50 = DAT_00b4601c;
              if (fVar48 != INFINITY) {
                fVar50 = (float)(int)fVar48 / 20.0;
              }
              if (fVar50 <= fVar51) {
                fVar50 = fVar51;
              }
LAB_0354532c:
              *(float *)((long)unaff_x19 + 0x20c) = fVar50;
              return;
            }
          }
          iVar20 = (int)unaff_x19[0x62];
          fStack0000000000000054 = 0.0;
          if (iVar20 < 3) {
            if (iVar20 != 0) {
              if (iVar20 == 1) {
                lVar29 = *(long *)PTR_DAT_03cde808;
                if (*(int *)(lVar29 + 0xe4) == 0) {
                  thunk_FUN_01cb0d4c();
                  lVar29 = *(long *)PTR_DAT_03cde808;
                }
                uVar21 = DAT_00b463f8;
                lVar33 = *(long *)(lVar29 + 0xb8);
                if (*(int *)(lVar33 + 0x1708) == 0) {
                  uVar16 = 0xffffffff;
                  in_stack_000001a0[7] = 0;
                  goto LAB_03545258;
                }
                if (*(int *)(lVar29 + 0xe4) == 0) {
                  thunk_FUN_01cb0d4c();
                  lVar33 = *(long *)(*(long *)PTR_DAT_03cde808 + 0xb8);
                }
                Unity_Collections_LowLevel_Unsafe_UnsafeList<DebugOccluderStats>__Dispose
                          (&stack0x000012b0,lVar33 + 0x1338,*(undefined8 *)PTR_DAT_03cde7b0);
                memcpy(&stack0x00000970,&stack0x000012b0,0x3b8);
                iVar17 = FUN_03594d0c();
                uVar16 = iVar17 - 1;
                unaff_w29 = unaff_w29 + 1;
                iVar17 = *(int *)((long)unaff_x19 + 0x4a4) + -1;
                *(int *)((long)unaff_x19 + 0x4a4) = iVar17;
                uVar53 = 0x2026;
                goto LAB_0354520c;
              }
              if (iVar20 != 2) goto LAB_03543c44;
            }
LAB_03543b1c:
            param_2 = ZEXT416((uint)unaff_s12);
            param_3 = in_stack_00000100;
            FUN_035957d8();
            fStack0000000000000054 = 0.0;
            uStack000000000000007c = 1;
            uStack0000000000000070 = 1;
            unaff_x24 = (long *)PTR_DAT_03cde808;
            goto FUN_03544d6c;
          }
          if (iVar20 < 5) {
            if (iVar20 == 3) {
              if (*(int *)(*(long *)PTR_DAT_03cde808 + 0xe4) == 0) {
                thunk_FUN_01cb0d4c();
              }
              uVar16 = FUN_03594d0c();
              uVar53 = 3;
LAB_0354520c:
              uVar21 = CONCAT44(uVar53,iVar17);
LAB_03545258:
              fStack0000000000000054 = 0.0;
              unaff_s15 = 0.0;
              unaff_x24 = (long *)PTR_DAT_03cde808;
              unaff_x28 = (long *)PTR_DAT_03cb5ae0;
              fVar50 = 1.0;
              goto FUN_03544d6c;
            }
            if (iVar20 == 4) goto LAB_03543b1c;
          }
          else {
            if (iVar20 == 5) {
              param_2 = ZEXT416((uint)unaff_s12);
              uStack000000000000007c = 1;
              *(undefined1 *)((long)unaff_x19 + 0x374) = 1;
              param_3 = in_stack_00000100;
              FUN_035957d8();
              fStack0000000000000054 = 0.0;
              *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
              *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
              *(int *)((long)unaff_x19 + 0x4c4) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
              unaff_x19[0x99] = 0;
              uStack0000000000000070 = 1;
              unaff_x24 = (long *)PTR_DAT_03cde808;
              unaff_x28 = (long *)PTR_DAT_03cb5ae0;
              fVar50 = unaff_s14;
              goto FUN_03544d6c;
            }
            if (iVar20 == 6) {
              lVar29 = unaff_x19[99];
              if (*(int *)(*(long *)PTR_DAT_03cb5a80 + 0xe4) == 0) {
                thunk_FUN_01cb0d4c();
              }
              uVar23 = FUN_037707bc(lVar29,0,0);
              if ((uVar23 & 1) != 0) {
                plVar45 = (long *)unaff_x19[99];
                uVar21 = (**(code **)(*unaff_x19 + 0x548))();
                if (plVar45 == (long *)0x0) goto LAB_03547e54;
                (**(code **)(*plVar45 + 0x558))(plVar45,uVar21,*(undefined8 *)(*plVar45 + 0x560));
                lVar29 = unaff_x19[99];
                if (lVar29 == 0) goto LAB_03547e54;
                *(int *)(lVar29 + 0x438) = (int)unaff_x19[0x87];
                FUN_03588698(lVar29,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
                plVar45 = (long *)unaff_x19[99];
                if (plVar45 == (long *)0x0) goto LAB_03547e54;
                (**(code **)(*plVar45 + 0x7d8))(plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7e0));
                *(undefined1 *)(unaff_x19 + 0x65) = 1;
              }
              uVar21 = CONCAT44(3,*(undefined4 *)(in_stack_000001a0 + 7));
              goto LAB_03545258;
            }
          }
        }
      }
    }
LAB_03543c44:
    unaff_x28 = (long *)PTR_DAT_03cb5ae0;
    if (uVar13 == 0) {
      if (in_stack_000012ac == 0xad) {
        if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
        goto LAB_03547e54;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
        *(undefined1 *)
         (lVar29 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23 + 400) = 0;
      }
      else {
        if (*(int *)((long)unaff_x19 + 0x65c) == 1) {
          (**(code **)(*unaff_x19 + 0x8c8))();
        }
        else if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
          (**(code **)(*unaff_x19 + 0x8b8))();
        }
        if ((uStack0000000000000070 & 1) != 0) {
          *(undefined4 *)(in_stack_000001a0 + 8) = *(undefined4 *)(in_stack_000001a0 + 7);
        }
        *(undefined4 *)((long)unaff_x19 + 0x4b4) = *(undefined4 *)(in_stack_000001a0 + 7);
        *(int *)((long)unaff_x19 + 0x4bc) = *(int *)((long)unaff_x19 + 0x4bc) + 1;
        if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x50), lVar29 == 0))
        goto LAB_03547e54;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_03547f94;
        uStack0000000000000070 = 0;
        lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
        *(float *)(lVar29 + 100) = fVar61;
        *(float *)(lVar29 + 0x68) = fVar68;
      }
    }
    else {
      lVar29 = unaff_x19[0x74];
      if ((lVar29 == 0) || (lVar33 = *(long *)(lVar29 + 0x38), lVar33 == 0)) goto LAB_03547e54;
      uVar32 = *(uint *)(in_stack_000001a0 + 7);
      if (*(uint *)(lVar33 + 0x18) <= uVar32) goto LAB_03547f94;
      *(undefined1 *)(lVar33 + (long)(int)uVar32 * (long)(int)unaff_w23 + 400) = 0;
      *(uint *)((long)unaff_x19 + 0x4b4) = uVar32;
      lVar33 = *(long *)(lVar29 + 0x50);
      if (lVar33 == 0) goto LAB_03547e54;
      uVar32 = *(uint *)(lVar33 + 0x18);
      if (uVar32 <= *(uint *)(unaff_x19 + 0x97)) goto LAB_03547f94;
      lVar33 = lVar33 + 0x20;
      lVar39 = lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
      iVar17 = *(int *)(lVar39 + 0xc) + 1;
      *(int *)(lVar39 + 0xc) = iVar17;
      uVar37 = *(uint *)(unaff_x19 + 0x97);
      *(int *)(unaff_x19 + 0x98) = iVar17;
      if (uVar32 <= uVar37) goto LAB_03547f94;
      lVar39 = lVar33 + (long)(int)uVar37 * 0x60;
      *(float *)(lVar39 + 0x44) = fVar61;
      *(float *)(lVar39 + 0x48) = fVar68;
      *(int *)(lVar29 + 0x20) = *(int *)(lVar29 + 0x20) + 1;
      if (in_stack_000012ac == 0xa0) {
        *(int *)(lVar33 + (long)(int)uVar37 * 0x60) =
             *(int *)(lVar33 + (long)(int)uVar37 * 0x60) + 1;
      }
    }
  }
  else {
    if (((in_stack_000012ac & 0xfffffffe) == 10) && ((int)unaff_x19[0x62] == 6)) {
      fVar63 = 0.0;
      if ((0.0 < fVar68) && ((char)unaff_x19[0x5e] == '\0')) {
        fVar63 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
      }
      param_3 = *(float *)((long)unaff_x19 + 0x4cc);
      param_2 = ZEXT416((uint)fStack00000000000000dc);
      if (fStack00000000000000dc < (param_3 - (*(float *)(unaff_x19 + 0x9c) - fVar68)) + fVar63) {
        if (*(int *)((long)unaff_x19 + 0x314) == -1) {
          *(uint *)((long)unaff_x19 + 0x314) = uVar32;
        }
        unaff_x24 = (long *)PTR_DAT_03cde808;
        unaff_x28 = (long *)PTR_DAT_03cb5ae0;
        if (*(int *)(*(long *)PTR_DAT_03cde808 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        uVar16 = FUN_03594d0c();
        lVar29 = unaff_x19[99];
        if (*(int *)(*(long *)PTR_DAT_03cb5a80 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        uVar23 = FUN_037707bc(lVar29,0,0);
        if ((uVar23 & 1) != 0) {
          plVar45 = (long *)unaff_x19[99];
          uVar21 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar45 == (long *)0x0) goto LAB_03547e54;
          (**(code **)(*plVar45 + 0x558))(plVar45,uVar21,*(undefined8 *)(*plVar45 + 0x560));
          lVar29 = unaff_x19[99];
          if (lVar29 == 0) goto LAB_03547e54;
          *(int *)(lVar29 + 0x438) = (int)unaff_x19[0x87];
          FUN_03588698(lVar29,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
          plVar45 = (long *)unaff_x19[99];
          if (plVar45 == (long *)0x0) goto LAB_03547e54;
          (**(code **)(*plVar45 + 0x7d8))(plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x65) = 1;
        }
        uVar21 = CONCAT44(3,uVar32);
        goto FUN_03544d6c;
      }
    }
    if ((((in_stack_000012ac - 0x2007 < 0x23) &&
         ((1L << ((ulong)(in_stack_000012ac - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
        (in_stack_000012ac - 10 < 2)) || (in_stack_000012ac == 0xa0)) {
      unaff_x28 = (long *)PTR_DAT_03cb5ae0;
      if (in_stack_000012ac == 0xad) goto LAB_03543ddc;
LAB_035436f4:
      unaff_x28 = (long *)PTR_DAT_03cb5ae0;
      if ((in_stack_000012ac == 0x200b) || (in_stack_000012ac == 0x2060)) goto LAB_03543ddc;
      lVar29 = unaff_x19[0x74];
      if ((lVar29 == 0) || (lVar33 = *(long *)(lVar29 + 0x50), lVar33 == 0)) goto LAB_03547e54;
      if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_03547f94;
      lVar33 = lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
      *(int *)(lVar33 + 0x2c) = *(int *)(lVar33 + 0x2c) + 1;
      *(int *)(lVar29 + 0x20) = *(int *)(lVar29 + 0x20) + 1;
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      uVar23 = FUN_02f9488c(in_stack_000012ac,0);
      if (((uVar23 & 1) != 0) && (in_stack_000012ac != 0xad)) goto LAB_035436f4;
    }
    unaff_x28 = (long *)PTR_DAT_03cb5ae0;
    if (in_stack_000012ac == 0xa0) {
      if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x50), lVar29 == 0))
      goto LAB_03547e54;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_03547f94;
      lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
      *(int *)(lVar29 + 0x20) = *(int *)(lVar29 + 0x20) + 1;
    }
  }
LAB_03543ddc:
  if (((int)unaff_x19[0x62] == 1) && ((uVar70 != uVar18 || (in_stack_000012ac == 0x2d)))) {
    if (unaff_x19[0xce] == 0) goto LAB_03547e54;
    fVar66 = *(float *)(unaff_x19 + 0x42);
    fVar63 = (float)FUN_03805444(unaff_x19[0xce] + 0x28,0);
    if (unaff_x19[0xce] == 0) goto LAB_03547e54;
    fVar68 = (float)FUN_0380544c(unaff_x19[0xce] + 0x28,0);
    lVar29 = unaff_x19[0xcd];
    fVar61 = in_stack_000000e0;
    if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
      fVar61 = 1.0;
    }
    if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto LAB_03547e54;
    fVar51 = *(float *)((long)unaff_x19 + 0x43c);
    fVar69 = *(float *)(lVar29 + 0x2c);
    fVar52 = (float)FUN_03805944(*(long *)(lVar29 + 0x20),0);
    uVar22 = *(undefined8 *)_fStack00000000000000d0;
    fVar52 = (fVar66 / fVar63) * fVar68 * fVar61 * fVar51 * fVar69 * fVar52;
    if ((in_stack_000012ac == 10) && (*(int *)((long)unaff_x19 + 0x4a4) != (int)unaff_x19[0x95])) {
      if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0))
      goto LAB_03547e54;
      uVar32 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
      if (*(uint *)(lVar29 + 0x18) <= uVar32) goto LAB_03547f94;
      if (unaff_x19[0xce] == 0) goto LAB_03547e54;
      fVar66 = *(float *)(lVar29 + (long)(int)uVar32 * (long)(int)unaff_w23 + 0x58);
      fVar63 = (float)FUN_03805444(unaff_x19[0xce] + 0x28,0);
      if (unaff_x19[0xce] == 0) goto LAB_03547e54;
      fVar68 = (float)FUN_0380544c(unaff_x19[0xce] + 0x28,0);
      lVar29 = unaff_x19[0xcd];
      fVar61 = in_stack_000000e0;
      if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
        fVar61 = 1.0;
      }
      if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto LAB_03547e54;
      fVar51 = *(float *)((long)unaff_x19 + 0x43c);
      fVar69 = *(float *)(lVar29 + 0x2c);
      fVar52 = (float)FUN_03805944(*(long *)(lVar29 + 0x20),0);
      if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x50), lVar29 == 0))
      goto LAB_03547e54;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_03547f94;
      uVar22 = *(undefined8 *)(lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60 + 100);
      fVar52 = (fVar66 / fVar63) * fVar68 * fVar61 * fVar51 * fVar69 * fVar52;
    }
    fVar66 = *(float *)((long)unaff_x19 + 0x4ec);
    fVar63 = 0.0;
    fVar61 = 0.0;
    if ((0.0 < fVar66) && ((char)unaff_x19[0x5e] == '\0')) {
      fVar61 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
    }
    fVar68 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar51 = *(float *)(unaff_x19 + 0x9c);
    fVar69 = *(float *)(unaff_x19 + 0xcb);
    fStack0000000000000170 = (float)uVar22;
    fStack0000000000000174 = (float)((ulong)uVar22 >> 0x20);
    if ((char)unaff_x19[0x1e] == '\0') {
      if ((unaff_x19[0xcd] == 0) || (lVar29 = *(long *)(unaff_x19[0xcd] + 0x20), lVar29 == 0))
      goto LAB_03547e54;
      FUN_03805908(&stack0x000012b0,lVar29,0);
      fVar63 = (float)FUN_03805750(&stack0x000011c0,0);
    }
    puVar9 = PTR_DAT_03cde808;
    fVar62 = *(float *)(unaff_x19 + 0x73);
    fStack0000000000000174 =
         (fStack00000000000000cc - fStack0000000000000170) - fStack0000000000000174;
    bVar10 = true;
    if ((fVar62 <= fStack0000000000000174) && (bVar10 = false, !NAN(fVar62))) {
      bVar10 = fVar62 == -1.0;
    }
    if (!bVar10) {
      fStack0000000000000174 = fVar62;
    }
    fVar62 = unaff_s14;
    if ((uVar44 & 0x18) != 0) {
      fVar62 = DAT_00b46148;
    }
    if ((ABS(fVar69) + fVar52 * fVar63 * (1.0 - *(float *)(unaff_x19 + 0x60)) <
         fVar62 * fStack0000000000000174) &&
       ((fVar68 - (fVar51 - fVar66)) + fVar61 < fStack00000000000000dc)) {
      if (*(int *)(*(long *)PTR_DAT_03cde808 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      UnityEngine_XR_Interaction_Toolkit_Filtering_PokeStateData__set_axisAlignedPokeInteractionPoint
                ();
      lVar29 = *(long *)(*(long *)puVar9 + 0xb8);
      memcpy(&stack0x000012b0,(void *)(lVar29 + 0x810),0x3b8);
      FUN_022f8780(lVar29 + 0x1338,&stack0x000012b0,*(undefined8 *)PTR_DAT_03cde7b8);
    }
  }
  lVar29 = unaff_x19[0x74];
  if ((lVar29 == 0) || (lVar33 = *(long *)(lVar29 + 0x38), lVar33 == 0)) goto LAB_03547e54;
  if (*(uint *)(lVar33 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
  lVar33 = lVar33 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
  uVar32 = *(uint *)(unaff_x19 + 0x97);
  *(uint *)(lVar33 + 0x5c) = uVar32;
  *(undefined4 *)(lVar33 + 0x60) = *(undefined4 *)((long)unaff_x19 + 0x4c4);
  if ((uVar70 == uVar18) ||
     ((in_stack_000012ac < 0xe && ((1 << (ulong)(in_stack_000012ac & 0x1f) & 0x2c00U) != 0)))) {
    lVar33 = *(long *)(lVar29 + 0x50);
    if (lVar33 == 0) goto LAB_03547e54;
    if (*(uint *)(lVar33 + 0x18) <= uVar32) goto LAB_03547f94;
    if (*(int *)(lVar33 + (long)(int)uVar32 * 0x60 + 0x24) == 1) goto LAB_03544170;
  }
  else {
LAB_03544170:
    lVar29 = *(long *)(lVar29 + 0x50);
    if (lVar29 == 0) goto LAB_03547e54;
    if (*(uint *)(lVar29 + 0x18) <= uVar32) goto LAB_03547f94;
    *(int *)(lVar29 + (long)(int)uVar32 * 0x60 + 0x6c) = (int)unaff_x19[0x54];
  }
  if (in_stack_000012ac == 9) {
    if (unaff_x19[0x20] == 0) goto LAB_03547e54;
    fVar63 = (float)FUN_038054ec(unaff_x19[0x20] + 0x28,0);
    if (unaff_x19[0x20] == 0) goto LAB_03547e54;
    fVar66 = (float)NEON_ucvtf((uint)*(byte *)(unaff_x19[0x20] + 0x1b1));
    fVar49 = *(float *)(unaff_x19 + 0xcb);
    param_2 = ZEXT416((uint)fVar49);
    fVar66 = unaff_s12 * fVar63 * fVar66;
    if ((char)unaff_x19[0x1e] == '\0') {
      param_3 = fVar66 * (float)(int)(fVar49 / fVar66);
      fVar63 = param_3;
      if (param_3 <= fVar49) {
        fVar63 = fVar66 + fVar49;
      }
    }
    else {
      param_3 = fVar66 * (float)(int)(fVar49 / fVar66);
      fVar63 = param_3;
      if (fVar49 <= param_3) {
        fVar63 = fVar49 - fVar66;
      }
    }
LAB_035443c4:
    *(float *)(unaff_x19 + 0xcb) = fVar63;
  }
  else {
    fVar63 = *(float *)(unaff_x19 + 0x5b);
    if (fVar63 == 0.0) {
      fVar63 = *(float *)(unaff_x19 + 0xcb);
      if ((char)unaff_x19[0x1e] == '\0') {
        fVar49 = (float)FUN_03805750(&stack0x00001260,0);
        fVar68 = *(float *)(in_stack_000001a0 + 2);
        fVar61 = (float)FUN_03809c88(&stack0x00001250,0);
        if (unaff_x19[0x20] != 0) {
          param_3 = *(float *)(unaff_x19 + 0x60);
          fVar66 = 1.0 - param_3;
          fVar63 = fVar63 + fVar66 * (*(float *)((long)unaff_x19 + 0x2d4) +
                                     unaff_s12 * (fVar49 * fVar68 + fVar61) +
                                     in_stack_00000100 *
                                     (fStack00000000000000f0 +
                                     fVar48 + *(float *)(unaff_x19[0x20] + 0x1a4)));
          *(float *)(unaff_x19 + 0xcb) = fVar63;
          goto joined_r0x03544300;
        }
        goto LAB_03547e54;
      }
      fVar66 = (float)FUN_03809c88(&stack0x00001250,0);
      if (unaff_x19[0x20] == 0) goto LAB_03547e54;
      param_3 = *(float *)(unaff_x19 + 0x60);
      param_2 = ZEXT416((uint)(1.0 - param_3));
      fVar63 = fVar63 - (1.0 - param_3) *
                        (*(float *)((long)unaff_x19 + 0x2d4) +
                        unaff_s12 * fVar66 +
                        in_stack_00000100 *
                        (fStack00000000000000f0 + fVar48 + *(float *)(unaff_x19[0x20] + 0x1a4)));
      *(float *)(unaff_x19 + 0xcb) = fVar63;
      if ((uVar13 != 0) || (in_stack_000012ac == 0x200b)) {
        param_2 = ZEXT416((uint)(in_stack_00000100 * *(float *)(unaff_x19 + 0x5c)));
        param_3 = in_stack_00000100;
        fVar63 = fVar63 - in_stack_00000100 * *(float *)(unaff_x19 + 0x5c);
        goto LAB_035443c4;
      }
    }
    else {
      if (((*(char *)((long)unaff_x19 + 0x2dc) != '\0') && (in_stack_000012ac < 0x3b)) &&
         ((1L << ((ulong)in_stack_000012ac & 0x3f) & 0x400500000000000U) != 0)) {
        fVar63 = fVar63 * 0.5;
      }
      if (unaff_x19[0x20] == 0) goto LAB_03547e54;
      param_3 = *(float *)(unaff_x19 + 0x60);
      fVar66 = *(float *)(unaff_x19 + 0xcb);
      fVar63 = fVar66 + (1.0 - param_3) *
                        (*(float *)((long)unaff_x19 + 0x2d4) +
                        (fVar63 - fVar49) +
                        in_stack_00000100 * (fVar48 + *(float *)(unaff_x19[0x20] + 0x1a4)));
      *(float *)(unaff_x19 + 0xcb) = fVar63;
joined_r0x03544300:
      if ((uVar13 != 0) || (param_2 = ZEXT416((uint)fVar66), in_stack_000012ac == 0x200b)) {
        param_2 = ZEXT416((uint)(in_stack_00000100 * *(float *)(unaff_x19 + 0x5c)));
        param_3 = in_stack_00000100;
        fVar63 = fVar63 + in_stack_00000100 * *(float *)(unaff_x19 + 0x5c);
        goto LAB_035443c4;
      }
    }
  }
  lVar29 = unaff_x19[0x74];
  if ((lVar29 == 0) || (lVar33 = *(long *)(lVar29 + 0x38), lVar33 == 0)) goto LAB_03547e54;
  uVar32 = *(uint *)(in_stack_000001a0 + 7);
  if (*(uint *)(lVar33 + 0x18) <= uVar32) goto LAB_03547f94;
  *(float *)(lVar33 + (long)(int)uVar32 * (long)(int)unaff_w23 + 0x13c) = fVar63;
  if (in_stack_000012ac == 0xd) {
    *(float *)(unaff_x19 + 0xcb) = *(float *)((long)unaff_x19 + 0x444) + 0.0;
  }
  if (((int)unaff_x19[0x62] == 5) &&
     (((0xd < in_stack_000012ac || ((1 << (ulong)(in_stack_000012ac & 0x1f) & 0x2c00U) == 0)) &&
      (1 < in_stack_000012ac - 0x2028)))) {
    lVar33 = *(long *)(lVar29 + 0x58);
    if (lVar33 == 0) goto LAB_03547e54;
    iVar17 = *(int *)((long)unaff_x19 + 0x4c4) + 1;
    if (*(int *)(lVar33 + 0x18) < iVar17) {
      if (*(int *)(*(long *)PTR_DAT_03cde788 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      FUN_020731e4((long *)(lVar29 + 0x58),iVar17,1,*(undefined8 *)PTR_DAT_03cde778);
      lVar29 = unaff_x19[0x74];
      if (lVar29 == 0) goto LAB_03547e54;
    }
    unaff_x28 = (long *)PTR_DAT_03cb5ae0;
    lVar33 = *(long *)(lVar29 + 0x58);
    if (lVar33 == 0) goto LAB_03547e54;
    uVar44 = *(uint *)((long)unaff_x19 + 0x4c4);
    if (*(uint *)(lVar33 + 0x18) <= uVar44) goto LAB_03547f94;
    lVar33 = lVar33 + 0x20;
    lVar39 = lVar33 + (long)(int)uVar44 * 0x14;
    *(int *)(lVar39 + 8) = (int)unaff_x19[0x99];
    fVar66 = *(float *)(lVar39 + 0x10);
    param_2 = ZEXT416((uint)fVar66);
    fVar63 = *(float *)(unaff_x19 + 0x9b);
    if (fVar66 <= *(float *)(unaff_x19 + 0x9b)) {
      fVar63 = fVar66;
    }
    *(float *)(lVar39 + 0x10) = fVar63;
    if (*(char *)((long)unaff_x19 + 0x374) != '\0') {
      *(undefined1 *)((long)unaff_x19 + 0x374) = 0;
      *(undefined4 *)(lVar33 + (long)(int)uVar44 * 0x14) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
    }
    uVar32 = *(uint *)(in_stack_000001a0 + 7);
    *(uint *)(lVar33 + (long)(int)uVar44 * 0x14 + 4) = uVar32;
  }
  uVar44 = in_stack_000012ac;
  if (((in_stack_000012ac < 0xc) && ((1 << (ulong)(in_stack_000012ac & 0x1f) & 0xc08U) != 0)) ||
     ((in_stack_000012ac - 0x2028 < 2 ||
      ((in_stack_000012ac == 0x2d && uVar70 == uVar18 || (uVar32 == uStack000000000000004c)))))) {
    if (0.0 < *(float *)((long)unaff_x19 + 0x4ec)) {
      fVar63 = *(float *)((long)unaff_x19 + 0x4dc);
      fVar66 = *(float *)((long)unaff_x19 + 0x4e4);
      if (*(int *)(*(long *)PTR_DAT_03cb5ea0 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      fVar63 = fVar63 - fVar66;
      if (((fStack0000000000000050 < ABS(fVar63)) && ((char)unaff_x19[0x5e] == '\0')) &&
         (*(char *)((long)unaff_x19 + 0x374) == '\0')) {
        FUN_0359546c();
        puVar9 = PTR_DAT_03cde808;
        lVar29 = *(long *)PTR_DAT_03cde808;
        *(float *)(unaff_x19 + 0x9b) = *(float *)(unaff_x19 + 0x9b) - fVar63;
        *(float *)((long)unaff_x19 + 0x4ec) = fVar63 + *(float *)((long)unaff_x19 + 0x4ec);
        if (*(int *)(lVar29 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
          lVar29 = *(long *)puVar9;
        }
        lVar33 = *(long *)(lVar29 + 0xb8);
        if (*(int *)(lVar33 + 0x838) == (int)unaff_x19[0x97]) {
          if (*(int *)(lVar29 + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
            lVar33 = *(long *)(*(long *)PTR_DAT_03cde808 + 0xb8);
          }
          Unity_Collections_LowLevel_Unsafe_UnsafeList<DebugOccluderStats>__Dispose
                    (&stack0x000001e0,lVar33 + 0x1338,*(undefined8 *)PTR_DAT_03cde7b0);
          puVar9 = PTR_DAT_03cde808;
          lVar29 = *(long *)PTR_DAT_03cde808;
          memcpy((void *)(*(long *)(lVar29 + 0xb8) + 0x810),&stack0x000001e0,0x3b8);
          thunk_FUN_01cc8040(*(long *)(lVar29 + 0xb8) + 0x8a8,0);
          lVar29 = *(long *)(*(long *)puVar9 + 0xb8);
          *(float *)(lVar29 + 0x848) = fVar63 + *(float *)(lVar29 + 0x848);
          *(float *)(lVar29 + 0x894) = fVar63 + *(float *)(lVar29 + 0x894);
          memcpy(&stack0x000012b0,(void *)(lVar29 + 0x810),0x3b8);
          FUN_022f8780(lVar29 + 0x1338,&stack0x000012b0,*(undefined8 *)PTR_DAT_03cde7b8);
        }
      }
    }
    fVar49 = *(float *)((long)unaff_x19 + 0x4ec);
    *(undefined1 *)((long)unaff_x19 + 0x374) = 0;
    fVar66 = *(float *)(unaff_x19 + 0x9c) - fVar49;
    fVar63 = *(float *)(unaff_x19 + 0x9b);
    if (fVar66 <= *(float *)(unaff_x19 + 0x9b)) {
      fVar63 = fVar66;
    }
    fVar61 = *(float *)((long)unaff_x19 + 0x4dc);
    *(float *)(unaff_x19 + 0x9b) = fVar63;
    if (in_stack_000012a4 == '\0') {
      in_stack_000012a8 = fVar63;
    }
    if ((*(char *)((long)unaff_x19 + 0x36c) != '\0') &&
       (((int)unaff_x19[0x6c] <= *(int *)((long)unaff_x19 + 0x4a4) ||
        ((int)unaff_x19[0x6d] <= (int)unaff_x19[0x97])))) {
      in_stack_000012a4 = '\x01';
    }
    lVar29 = unaff_x19[0x74];
    if ((lVar29 == 0) || (lVar33 = *(long *)(lVar29 + 0x50), lVar33 == 0)) goto LAB_03547e54;
    if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_03547f94;
    lVar33 = lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
    iVar20 = (int)unaff_x19[0x95];
    *(int *)(lVar33 + 0x38) = iVar20;
    iVar17 = iVar20;
    if (iVar20 <= *(int *)((long)unaff_x19 + 0x4ac)) {
      iVar17 = *(int *)((long)unaff_x19 + 0x4ac);
    }
    *(int *)((long)unaff_x19 + 0x4ac) = iVar17;
    *(int *)(lVar33 + 0x3c) = iVar17;
    iVar2 = *(int *)((long)unaff_x19 + 0x4a4);
    *(int *)(unaff_x19 + 0x96) = iVar2;
    *(int *)(lVar33 + 0x40) = iVar2;
    iVar19 = *(int *)((long)unaff_x19 + 0x4ac);
    if (iVar17 <= *(int *)((long)unaff_x19 + 0x4b4)) {
      iVar19 = *(int *)((long)unaff_x19 + 0x4b4);
    }
    *(int *)((long)unaff_x19 + 0x4b4) = iVar19;
    *(int *)(lVar33 + 0x44) = iVar19;
    *(int *)(lVar33 + 0x24) = (iVar2 - iVar20) + 1;
    iVar17 = *(int *)((long)unaff_x19 + 0x4bc);
    *(int *)(lVar33 + 0x28) = iVar17;
    *(int *)(lVar33 + 0x30) = (iVar19 - (iVar20 + iVar17)) + 1;
    lVar29 = *(long *)(lVar29 + 0x38);
    if (lVar29 == 0) goto LAB_03547e54;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a0 + 8)) goto LAB_03547f94;
    *(undefined4 *)(lVar33 + 0x70) =
         *(undefined4 *)
          (lVar29 + (long)(int)*(uint *)(in_stack_000001a0 + 8) * (long)(int)unaff_w23 + 0x114);
    *(float *)(lVar33 + 0x74) = fVar66;
    lVar29 = unaff_x19[0x74];
    if ((lVar29 == 0) || (lVar33 = *(long *)(lVar29 + 0x50), lVar33 == 0)) goto LAB_03547e54;
    if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_03547f94;
    lVar29 = *(long *)(lVar29 + 0x38);
    if (lVar29 == 0) goto LAB_03547e54;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4b4)) goto LAB_03547f94;
    fVar61 = fVar61 - fVar49;
    param_2 = ZEXT416((uint)fVar61);
    lVar33 = lVar33 + 0x20 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
    uVar53 = *(undefined4 *)
              (lVar29 + (long)(int)*(uint *)((long)unaff_x19 + 0x4b4) * (long)(int)unaff_w23 + 0x120
              );
    *(float *)(lVar33 + 0x5c) = fVar61;
    *(undefined4 *)(lVar33 + 0x58) = uVar53;
    lVar29 = unaff_x19[0x74];
    if ((lVar29 == 0) || (lVar33 = *(long *)(lVar29 + 0x50), lVar33 == 0)) goto LAB_03547e54;
    uVar32 = *(uint *)(unaff_x19 + 0x97);
    if (*(uint *)(lVar33 + 0x18) <= uVar32) goto LAB_03547f94;
    lVar33 = lVar33 + 0x20;
    lVar39 = lVar33 + (long)(int)uVar32 * 0x60;
    *(float *)(lVar39 + 0x28) = *(float *)(lVar39 + 0x58) - unaff_s12 * unaff_s13;
    *(float *)(lVar39 + 0x40) = in_stack_00000130._4_4_;
    if (*(int *)(lVar39 + 4) == 1) {
      *(int *)(lVar33 + (long)(int)uVar32 * 0x60 + 0x4c) = (int)unaff_x19[0x54];
    }
    if ((unaff_x19[0x20] == 0) || (lVar39 = *(long *)(lVar29 + 0x38), lVar39 == 0))
    goto LAB_03547e54;
    uVar37 = *(uint *)((long)unaff_x19 + 0x4b4);
    if (*(uint *)(lVar39 + 0x18) <= uVar37) goto LAB_03547f94;
    if ((*(char *)(lVar39 + 0x20 + (long)(int)uVar37 * (long)(int)unaff_w23 + 0x170) == '\0') &&
       (uVar37 = *(uint *)(unaff_x19 + 0x96), *(uint *)(lVar39 + 0x18) <= uVar37))
    goto LAB_03547f94;
    lVar33 = lVar33 + (long)(int)uVar32 * 0x60;
    fVar63 = (1.0 - *(float *)(unaff_x19 + 0x60)) *
             (*(float *)((long)unaff_x19 + 0x2d4) +
             in_stack_00000100 *
             (fStack00000000000000f0 + fVar48 + *(float *)(unaff_x19[0x20] + 0x1a4)));
    fVar48 = -fVar63;
    if ((char)unaff_x19[0x1e] != '\0') {
      fVar48 = fVar63;
    }
    *(float *)(lVar33 + 0x3c) =
         *(float *)(lVar39 + 0x20 + (long)(int)uVar37 * (long)(int)unaff_w23 + 0x11c) + fVar48;
    param_3 = 0.0 - *(float *)((long)unaff_x19 + 0x4ec);
    *(float *)(lVar33 + 0x2c) = in_stack_00000068._4_4_ + (fVar61 - fVar66);
    *(float *)(lVar33 + 0x30) = fVar61;
    *(float *)(lVar33 + 0x34) = param_3;
    *(float *)(lVar33 + 0x38) = fVar66;
    unaff_x24 = (long *)PTR_DAT_03cde808;
    if ((((in_stack_000012ac & 0xfffffffe) == 10) || (uVar70 == uVar18 && in_stack_000012ac == 0x2d)
        ) || (in_stack_000012ac - 0x2028 < 2)) {
      if (*(int *)(*(long *)PTR_DAT_03cde808 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      UnityEngine_XR_Interaction_Toolkit_Filtering_PokeStateData__set_axisAlignedPokeInteractionPoint
                ();
      lVar29 = unaff_x19[0x97];
      iVar20 = *(int *)((long)unaff_x19 + 0x4a4);
      in_stack_000001a0[10] = 0;
      iVar17 = (int)lVar29 + 1;
      lVar29 = unaff_x19[0x74];
      *(int *)(unaff_x19 + 0x97) = iVar17;
      *(int *)(unaff_x19 + 0x95) = iVar20 + 1;
      if ((lVar29 == 0) || (*(long *)(lVar29 + 0x50) == 0)) goto LAB_03547e54;
      if (*(int *)(*(long *)(lVar29 + 0x50) + 0x18) <= iVar17) {
        FUN_03595628();
        lVar29 = unaff_x19[0x74];
        if (lVar29 == 0) goto LAB_03547e54;
      }
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_03547e54;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
      fVar50 = *(float *)(lVar29 + (long)(int)*(uint *)(in_stack_000001a0 + 7) *
                                   (long)(int)unaff_w23 + 0x14c);
      if (*(float *)((long)unaff_x19 + 0x2ec) == DAT_00b45db4) {
        if ((in_stack_000012ac == 0x2029) || (fVar48 = 0.0, in_stack_000012ac == 10)) {
          fVar48 = *(float *)(unaff_x19 + 0x5f);
        }
        uVar26 = 0;
        fVar48 = fVar50 + (0.0 - *(float *)(unaff_x19 + 0x9c)) +
                 fStack0000000000000078 * (in_stack_00000040._4_4_ + *(float *)(unaff_x19 + 0x5d)) +
                 in_stack_00000100 * (*(float *)((long)unaff_x19 + 0x2e4) + fVar48) +
                 *(float *)((long)unaff_x19 + 0x4ec);
      }
      else {
        if ((in_stack_000012ac == 0x2029) || (fVar48 = 0.0, in_stack_000012ac == 10)) {
          fVar48 = *(float *)(unaff_x19 + 0x5f);
        }
        uVar26 = 1;
        fVar48 = *(float *)((long)unaff_x19 + 0x4ec) +
                 *(float *)((long)unaff_x19 + 0x2ec) +
                 in_stack_00000100 * (*(float *)((long)unaff_x19 + 0x2e4) + fVar48);
      }
      lVar29 = *unaff_x24;
      *(float *)((long)unaff_x19 + 0x4ec) = fVar48;
      *(undefined1 *)(unaff_x19 + 0x5e) = uVar26;
      if (*(int *)(lVar29 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        lVar29 = *unaff_x24;
      }
      fVar48 = *(float *)(unaff_x19 + 0x88);
      param_3 = *(float *)((long)unaff_x19 + 0x444);
      uVar22 = *(undefined8 *)(*(long *)(lVar29 + 0xb8) + 0x1730);
      *(float *)((long)unaff_x19 + 0x4e4) = fVar50;
      param_2._0_8_ = NEON_rev64(uVar22,4);
      param_2._8_8_ = 0;
      in_stack_000001a0[0xe] = param_2._0_8_;
      *(float *)(unaff_x19 + 0xcb) = fVar48 + 0.0 + param_3;
      UnityEngine_XR_Interaction_Toolkit_Filtering_PokeStateData__set_axisAlignedPokeInteractionPoint
                ();
      UnityEngine_XR_Interaction_Toolkit_Filtering_PokeStateData__set_axisAlignedPokeInteractionPoint
                ();
      *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
      uStack000000000000007c = 1;
      uStack0000000000000070 = 1;
      fVar50 = unaff_s14;
      goto FUN_03544d6c;
    }
    if (in_stack_000012ac == 3) {
      if (unaff_x19[0x91] == 0) goto LAB_03547e54;
      uVar16 = (uint)*(undefined8 *)(unaff_x19[0x91] + 0x18);
      uVar44 = 3;
    }
  }
  unaff_x24 = (long *)PTR_DAT_03cde808;
  lVar29 = *(long *)(lVar29 + 0x38);
  if (lVar29 == 0) goto LAB_03547e54;
  uVar70 = *(uint *)(in_stack_000001a0 + 7);
  uVar18 = *(uint *)(lVar29 + 0x18);
  if (uVar18 <= uVar70) goto LAB_03547f94;
  lVar29 = lVar29 + 0x20;
  if (*(char *)(lVar29 + (long)(int)uVar70 * (long)(int)unaff_w23 + 0x170) != '\0') {
    lVar33 = lVar29 + (long)(int)uVar70 * (long)(int)unaff_w23;
    auVar56 = *(undefined1 (*) [16])(unaff_x19 + 0x9e);
    auVar58 = NEON_ext(auVar56,auVar56,8,1);
    uVar22 = *(undefined8 *)(lVar33 + 0xf4);
    param_3 = (float)uVar22;
    uVar64 = *(undefined8 *)(lVar33 + 0x100);
    fVar48 = (float)uVar64;
    fVar63 = (float)((ulong)uVar64 >> 0x20);
    param_2._0_4_ = (float)-(uint)(auVar56._0_4_ < param_3);
    param_2._4_4_ = (float)-(uint)(auVar56._4_4_ < (float)((ulong)uVar22 >> 0x20));
    param_2._8_4_ = -(uint)(fVar48 < auVar58._0_4_);
    param_2._12_4_ = -(uint)(fVar63 < auVar58._4_4_);
    auVar4._8_4_ = fVar48;
    auVar4._0_8_ = uVar22;
    auVar4._12_4_ = fVar63;
    auVar56 = auVar56 ^ (auVar56 ^ auVar4) & ~param_2;
    unaff_x19[0x9f] = auVar56._8_8_;
    unaff_x19[0x9e] = auVar56._0_8_;
  }
  if (((*(int *)((long)unaff_x19 + 0x304) != 3) && (*(int *)((long)unaff_x19 + 0x304) != 0)) ||
     ((*(uint *)(unaff_x19 + 0x62) < 7 &&
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x62) & 0x1f) & 0x4aU) != 0)))) {
    if ((((uVar13 == 0) && (uVar44 != 0x2d)) && (uVar44 != 0x200b)) && (uVar44 != 0xad)) {
      if (*(char *)((long)unaff_x19 + 0x309) == '\0') goto LAB_03544dd8;
LAB_03544c58:
      if ((uStack000000000000007c & 1) == 0) {
        uStack000000000000007c = 0;
        goto LAB_03544d2c;
      }
      uVar13 = (uint)(uVar13 == 0 || in_stack_000012ac == 0xa0) &
               ((uint)(in_stack_000012ac != 0xad) | (uint)fStack0000000000000054) ^ 1;
LAB_03544c90:
      uStack000000000000007c = 1;
LAB_03544c98:
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      UnityEngine_XR_Interaction_Toolkit_Filtering_PokeStateData__set_axisAlignedPokeInteractionPoint
                ();
    }
    else {
      if (*(char *)((long)unaff_x19 + 0x309) != '\0') goto LAB_03544c58;
      if ((int)uVar44 < 0x2007) {
        if (uVar44 == 0x2d) {
          if (0 < (int)uVar70) {
            if (uVar18 <= uVar70 - 1) goto LAB_03547f94;
            uVar3 = *(undefined2 *)(lVar29 + (ulong)(uVar70 - 1) * (ulong)unaff_w23 + 4);
            if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            uVar23 = FUN_02f915ec(uVar3,0);
            if ((uVar23 & 1) != 0) {
              if ((unaff_x19[0x74] == 0) ||
                 (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 == 0)) goto LAB_03547e54;
              if (*(uint *)(lVar29 + 0x18) <= *(int *)(in_stack_000001a0 + 7) - 1U)
              goto LAB_03547f94;
              if (*(int *)(lVar29 + (long)(int)(*(int *)(in_stack_000001a0 + 7) - 1U) *
                                    (long)(int)unaff_w23 + 0x5c) == (int)unaff_x19[0x97])
              goto LAB_03544d2c;
            }
          }
        }
        else if (uVar44 == 0xa0) goto LAB_03544dd8;
LAB_03545060:
        lVar29 = *unaff_x24;
        if (*(int *)(lVar29 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
          lVar29 = *unaff_x24;
        }
        uStack000000000000007c = 0;
        uVar13 = 0;
        *(undefined4 *)(*(long *)(lVar29 + 0xb8) + 0xf80) = 0xffffffff;
        goto LAB_03544c98;
      }
      if (((0x28 < uVar44 - 0x2007) ||
          ((1L << ((ulong)(uVar44 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) && (uVar44 != 0x2060))
      goto LAB_03545060;
LAB_03544dd8:
      if (*(int *)(*(long *)PTR_DAT_03cde790 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      uVar23 = FUN_035ba588(uVar44,0);
      if ((uVar23 & 1) == 0) {
LAB_03544e24:
        if (*(int *)(*(long *)PTR_DAT_03cde790 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        uVar23 = FUN_035ba5e4(in_stack_000012ac,0);
        if ((uVar23 & 1) != 0) goto LAB_03544e50;
        if ((*(char *)((long)unaff_x19 + 0x309) != '\0') ||
           (uVar18 = *(int *)(in_stack_000001a0 + 7) + 1, iStack0000000000000058 <= (int)uVar18))
        goto LAB_03544c58;
        if ((unaff_x19[0x74] != 0) && (lVar29 = *(long *)(unaff_x19[0x74] + 0x38), lVar29 != 0)) {
          if (uVar18 < *(uint *)(lVar29 + 0x18)) {
            uVar3 = *(undefined2 *)(lVar29 + (long)(int)uVar18 * (long)(int)unaff_w23 + 0x24);
            if (*(int *)(*(long *)PTR_DAT_03cde790 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            uVar23 = FUN_035ba5e4(uVar3,0);
            if ((uVar23 & 1) == 0) goto LAB_03544c58;
LAB_03545090:
            uVar13 = 0;
            goto LAB_03544c98;
          }
          goto LAB_03547f94;
        }
        goto LAB_03547e54;
      }
      if (*(int *)(*(long *)PTR_DAT_03cde760 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      uVar23 = FUN_035b0a28(0);
      if ((uVar23 & 1) != 0) goto LAB_03544e24;
LAB_03544e50:
      if (*(int *)(*(long *)PTR_DAT_03cde760 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      lVar29 = UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator__get_negateMode
                         (0);
      if ((lVar29 == 0) || (*(long *)(lVar29 + 0x10) == 0)) goto LAB_03547e54;
      uVar23 = FUN_029c9304(*(long *)(lVar29 + 0x10),in_stack_000012ac,
                            *(undefined8 *)PTR_DAT_03cde730);
      if ((int)uStack000000000000004c <= *(int *)(in_stack_000001a0 + 7)) {
        if ((uVar23 & 1) == 0) {
          uStack000000000000007c = 0;
          goto LAB_03545090;
        }
LAB_03544fbc:
        uVar13 = (uint)(uVar13 != 0);
        if (uVar14 != uVar15 || ((uStack000000000000007c ^ 0xffffffff) & 1) != 0) goto LAB_03544d2c;
        goto LAB_03544c90;
      }
      if (*(int *)(*(long *)PTR_DAT_03cde760 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      lVar29 = UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator__get_negateMode
                         (0);
      if (((lVar29 == 0) || (unaff_x19[0x74] == 0)) ||
         (lVar33 = *(long *)(unaff_x19[0x74] + 0x38), lVar33 == 0)) goto LAB_03547e54;
      if (*(uint *)(lVar33 + 0x18) <= *(int *)(in_stack_000001a0 + 7) + 1U) goto LAB_03547f94;
      if (*(long *)(lVar29 + 0x18) == 0) goto LAB_03547e54;
      uVar18 = FUN_029c9304(*(long *)(lVar29 + 0x18),
                            *(undefined2 *)
                             (lVar33 + (long)(int)(*(int *)(in_stack_000001a0 + 7) + 1U) *
                                       (long)(int)unaff_w23 + 0x24),*(undefined8 *)PTR_DAT_03cde730)
      ;
      if ((uVar23 & 1) != 0) goto LAB_03544fbc;
      uStack000000000000007c = uVar18 & uStack000000000000007c;
      uVar13 = uStack000000000000007c & uVar13 != 0;
      if (((uStack000000000000007c & 1) != 0) || (((uVar18 ^ 1) & 1) != 0)) goto LAB_03544c98;
      uStack000000000000007c = 0;
    }
    if (uVar13 != 0) {
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      UnityEngine_XR_Interaction_Toolkit_Filtering_PokeStateData__set_axisAlignedPokeInteractionPoint
                ();
    }
  }
LAB_03544d2c:
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  UnityEngine_XR_Interaction_Toolkit_Filtering_PokeStateData__set_axisAlignedPokeInteractionPoint();
  *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
  goto FUN_03544d6c;
LAB_03545984:
  if (*(uint *)(lVar29 + 0x18) <= uVar16) goto LAB_03547f94;
  uVar43 = (ulong)uVar16;
  piVar42 = (int *)(lVar33 + uVar43 * 0x178);
  lVar39 = *(long *)(piVar42 + 8);
  uVar47 = *(ushort *)(piVar42 + 1);
  if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  uVar14 = (uint)uVar47;
  bVar11 = FUN_02f915ec(uVar47,0);
  if (*(uint *)(lVar29 + 0x18) <= uVar16) goto LAB_03547f94;
  if ((unaff_x19[0x74] == 0) || (lVar24 = *(long *)(unaff_x19[0x74] + 0x50), lVar24 == 0))
  goto LAB_03547e54;
  uVar70 = *(uint *)(lVar33 + uVar43 * 0x178 + 0x3c);
  if (*(uint *)(lVar24 + 0x18) <= uVar70) goto LAB_03547f94;
  lVar24 = lVar24 + (long)(int)uVar70 * 0x60;
  iVar20 = *(int *)(lVar24 + 0x28);
  iVar19 = *(int *)(lVar24 + 0x2c);
  uVar15 = *(uint *)(lVar24 + 0x40);
  uVar32 = *(uint *)(lVar24 + 0x44);
  fVar61 = *(float *)(lVar24 + 0x58);
  fVar48 = *(float *)(lVar24 + 0x5c);
  uVar44 = *(uint *)(lVar24 + 0x6c);
  fVar68 = *(float *)(lVar24 + 0x60);
  fVar69 = *(float *)(lVar24 + 100);
  iVar2 = *(int *)(lVar24 + 0x20);
  fVar51 = *(float *)(lVar24 + 0x70);
  fVar52 = *(float *)(lVar24 + 0x74);
  fVar49 = *(float *)(lVar24 + 0x50);
  fVar66 = *(float *)(lVar24 + 0x78);
  fVar63 = *(float *)(lVar24 + 0x7c);
  if ((int)uVar44 < 9) {
    if ((int)uVar44 < 3) {
      if (uVar44 == 1) {
        if ((char)unaff_x19[0x1e] == '\0') {
          in_stack_00000100 = fVar69 + 0.0;
        }
        else {
          in_stack_00000100 = 0.0 - fVar48;
        }
        fStack00000000000000f0 = 0.0;
        fStack0000000000000104 = 0.0;
      }
      else if (uVar44 == 2) {
        in_stack_00000100 = (fVar69 + fVar68 * 0.5) - fVar48 * 0.5;
LAB_03545c80:
        fStack0000000000000104 = 0.0;
        fStack00000000000000f0 = 0.0;
      }
      else {
LAB_03545b50:
        uVar47 = NEON_umaxv(CONCAT26(-(ushort)(uVar47 == (ushort)((ulong)DAT_00b46c18 >> 0x30)),
                                     CONCAT24(-(ushort)(uVar47 ==
                                                       (ushort)((ulong)DAT_00b46c18 >> 0x20)),
                                              CONCAT22(-(ushort)(uVar47 ==
                                                                (ushort)((ulong)DAT_00b46c18 >> 0x10
                                                                        )),
                                                       -(ushort)(uVar47 == (ushort)DAT_00b46c18)))),
                            2);
        if (((((uVar47 & 1) == 0) && (uVar14 != 3)) && (uVar44 == 8)) &&
           ((int)uVar16 <= (int)uVar32)) goto LAB_03545b90;
      }
    }
    else if (uVar44 != 3) {
      if (uVar44 != 4) goto LAB_03545b50;
      fStack00000000000000f0 = 0.0;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar48 = 0.0;
      }
      in_stack_00000100 = (fVar68 + fVar69) - fVar48;
      fStack0000000000000104 = 0.0;
    }
  }
  else if (uVar44 == 0x10) {
    if ((int)uVar16 <= (int)uVar32) {
      if (uVar14 < 0xad) {
        if ((uVar14 != 3) && (uVar14 != 10)) goto LAB_03545b90;
      }
      else if ((uVar14 != 0xad) && ((uVar14 != 0x200b && (uVar14 != 0x2060)))) {
LAB_03545b90:
        if (*(uint *)(lVar29 + 0x18) <= uVar15) goto LAB_03547f94;
        uVar3 = *(undefined2 *)(lVar33 + (long)(int)uVar15 * 0x178 + 4);
        if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        uVar23 = FUN_02f9472c(uVar3,0);
        if ((uVar23 & 1) == 0) {
          bVar1 = (int)uVar70 < (int)unaff_x19[0x97];
        }
        else {
          bVar1 = false;
        }
        if ((!bVar1 && (uVar44 >> 4 & 1) == 0) && (fVar48 <= fVar68)) {
          in_stack_00000100 = -0.0;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_00000100 = fVar68;
          }
          in_stack_00000100 = fVar69 + in_stack_00000100;
          goto LAB_03545c80;
        }
        if (((uVar16 == 0) || (uVar70 != uVar18)) || (uVar16 == *(uint *)((long)unaff_x19 + 0x35c)))
        {
          in_stack_00000100 = -0.0;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_00000100 = fVar68;
          }
          if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
          }
          in_stack_00000100 = fVar69 + in_stack_00000100;
          uStack0000000000000048 = FUN_02f9488c(uVar14,0);
          fStack0000000000000104 = 0.0;
          fStack00000000000000f0 = 0.0;
        }
        else {
          cVar27 = (char)unaff_x19[0x1e];
          iVar19 = (iVar19 - iVar2) - (uStack0000000000000048 & 1);
          fVar69 = -fVar48;
          if (cVar27 != '\0') {
            fVar69 = fVar48;
          }
          if (iVar19 < 1) {
            fVar48 = 1.0;
            iVar19 = 1;
          }
          else {
            fVar48 = *(float *)((long)unaff_x19 + 0x30c);
          }
          if (uVar14 == 9) {
LAB_03547944:
            fVar48 = ((fVar68 + fVar69) * (1.0 - fVar48)) / (float)iVar19;
            if (cVar27 == '\0') {
              in_stack_00000100 = in_stack_00000100 + fVar48;
              fStack0000000000000104 = fStack0000000000000104 + 0.0;
              fStack00000000000000f0 = fStack00000000000000f0 + 0.0;
            }
            else {
              in_stack_00000100 = in_stack_00000100 - fVar48;
            }
          }
          else {
            if (uVar14 != 0xa0) {
              if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
                thunk_FUN_01cb0d4c();
              }
              uVar23 = FUN_02f9488c(uVar14,0);
              cVar27 = (char)unaff_x19[0x1e];
              if ((uVar23 & 1) != 0) goto LAB_03547944;
            }
            fVar48 = ((fVar68 + fVar69) * fVar48) /
                     (float)(int)((iVar2 - ((uStack0000000000000048 ^ 0xffffffff) & 1)) + iVar20);
            if (cVar27 == '\0') {
              in_stack_00000100 = in_stack_00000100 + fVar48;
              fStack0000000000000104 = fStack0000000000000104 + 0.0;
              fStack00000000000000f0 = fStack00000000000000f0 + 0.0;
            }
            else {
              in_stack_00000100 = in_stack_00000100 - fVar48;
            }
          }
        }
      }
    }
  }
  else if (uVar44 == 0x20) {
    in_stack_00000100 = (fVar69 + fVar68 * 0.5) - (fVar51 + fVar66) * 0.5;
    fStack00000000000000f0 = 0.0;
    fStack0000000000000104 = 0.0;
  }
  uVar44 = (uint)*(undefined8 *)(lVar29 + 0x18);
  if (uVar44 <= uVar16) goto LAB_03547f94;
  lVar24 = lVar33 + uVar43 * 0x178;
  fVar48 = fStack00000000000000b0 + in_stack_00000100;
  fVar68 = fStack0000000000000190 + fStack0000000000000104;
  fVar69 = in_stack_000000a8._4_4_ + fStack00000000000000f0;
  plVar45 = (long *)PTR_DAT_03cde808;
  if (*(char *)(lVar24 + 0x170) == '\0') goto LAB_035464b8;
  iVar20 = *piVar42;
  if (iVar20 == 0) {
    fVar50 = fmodf(*(float *)((long)unaff_x19 + 0x34c) * (float)(int)uVar70,1.0);
    iVar19 = *(int *)((long)unaff_x19 + 0x344);
    if (iVar19 < 2) {
      if (iVar19 == 0) {
        lVar35 = lVar33 + uVar43 * 0x178;
        *(undefined4 *)(lVar35 + 100) = 0;
        *(undefined4 *)(lVar35 + 0x8c) = 0;
        *(undefined4 *)(lVar35 + 0xb4) = 0x3f800000;
        *(undefined4 *)(lVar35 + 0xdc) = 0x3f800000;
      }
      else if (iVar19 == 1) {
        lVar35 = lVar33 + uVar43 * 0x178;
        fVar63 = *(float *)(lVar35 + 0x48);
        pfVar36 = (float *)(lVar35 + 100);
        if (*(int *)((long)unaff_x19 + 0x29c) == 0x208) {
          lVar35 = lVar33 + uVar43 * 0x178;
          fVar66 = *(float *)(lVar35 + 0x70);
          *pfVar36 = fVar50 + ((in_stack_00000100 + fVar63) - *(float *)(unaff_x19 + 0x9e)) /
                              (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar35 + 0x8c) =
               fVar50 + ((in_stack_00000100 + fVar66) - *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar35 + 0xb4) =
               fVar50 + ((in_stack_00000100 + *(float *)(lVar35 + 0x98)) -
                        *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar35 + 0xdc) =
               fVar50 + ((in_stack_00000100 + *(float *)(lVar35 + 0xc0)) -
                        *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
        }
        else {
          lVar35 = lVar33 + uVar43 * 0x178;
          fVar66 = fVar66 - fVar51;
          fVar52 = *(float *)(lVar35 + 0x70);
          fVar62 = *(float *)(lVar35 + 0x98);
          fVar59 = *(float *)(lVar35 + 0xc0);
          *pfVar36 = fVar50 + (fVar63 - fVar51) / fVar66;
          *(float *)(lVar35 + 0x8c) = fVar50 + (fVar52 - fVar51) / fVar66;
          *(float *)(lVar35 + 0xb4) = fVar50 + (fVar62 - fVar51) / fVar66;
          *(float *)(lVar35 + 0xdc) = fVar50 + (fVar59 - fVar51) / fVar66;
        }
      }
    }
    else if (iVar19 == 2) {
      lVar35 = lVar33 + uVar43 * 0x178;
      *(float *)(lVar35 + 100) =
           fVar50 + ((in_stack_00000100 + *(float *)(lVar35 + 0x48)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar35 + 0x8c) =
           fVar50 + ((in_stack_00000100 + *(float *)(lVar35 + 0x70)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar35 + 0xb4) =
           fVar50 + ((in_stack_00000100 + *(float *)(lVar35 + 0x98)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar35 + 0xdc) =
           fVar50 + ((in_stack_00000100 + *(float *)(lVar35 + 0xc0)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
    }
    else if (iVar19 == 3) {
      iVar19 = (int)unaff_x19[0x69];
      if (iVar19 < 2) {
        if (iVar19 == 0) {
          lVar35 = lVar33 + uVar43 * 0x178;
          *(undefined4 *)(lVar35 + 0x68) = 0;
          *(undefined4 *)(lVar35 + 0x90) = 0x3f800000;
          *(undefined4 *)(lVar35 + 0xb8) = 0;
          *(undefined4 *)(lVar35 + 0xe0) = 0x3f800000;
        }
        else if (iVar19 == 1) {
          lVar35 = lVar33 + uVar43 * 0x178;
          fVar63 = fVar63 - fVar52;
          fVar66 = (*(float *)(lVar35 + 0x74) - fVar52) / fVar63;
          fVar63 = fVar50 + (*(float *)(lVar35 + 0x4c) - fVar52) / fVar63;
          *(float *)(lVar35 + 0x68) = fVar63;
          *(float *)(lVar35 + 0xb8) = fVar63;
          goto LAB_035460b4;
        }
      }
      else if (iVar19 == 2) {
        lVar35 = lVar33 + uVar43 * 0x178;
        fVar63 = fVar50 + (*(float *)(lVar35 + 0x4c) - *(float *)((long)unaff_x19 + 0x4f4)) /
                          (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4)
                          );
        *(float *)(lVar35 + 0x68) = fVar63;
        fVar66 = *(float *)((long)unaff_x19 + 0x4f4);
        fVar52 = *(float *)((long)unaff_x19 + 0x4fc);
        *(float *)(lVar35 + 0xb8) = fVar63;
        fVar66 = (*(float *)(lVar35 + 0x74) - fVar66) / (fVar52 - fVar66);
LAB_035460b4:
        *(float *)(lVar35 + 0x90) = fVar50 + fVar66;
        *(float *)(lVar35 + 0xe0) = fVar50 + fVar66;
      }
      else if (iVar19 == 3) {
        if (*(int *)(*(long *)PTR_DAT_03cb5ae0 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        FUN_03735a64(*(undefined8 *)PTR_DAT_03cde838,0);
        uVar44 = (uint)*(undefined8 *)(lVar29 + 0x18);
      }
      if (uVar44 <= uVar16) goto LAB_03547f94;
      lVar35 = lVar33 + uVar43 * 0x178;
      fVar52 = *(float *)(lVar35 + 0x138);
      fVar66 = (1.0 - (*(float *)(lVar35 + 0x68) + *(float *)(lVar35 + 0x90)) * fVar52) * 0.5;
      fVar63 = fVar50 + *(float *)(lVar35 + 0x68) * fVar52 + fVar66;
      fVar50 = fVar50 + fVar66 + *(float *)(lVar35 + 0x90) * fVar52;
      *(float *)(lVar35 + 100) = fVar63;
      *(float *)(lVar35 + 0x8c) = fVar63;
      *(float *)(lVar35 + 0xb4) = fVar50;
      *(float *)(lVar35 + 0xdc) = fVar50;
    }
    iVar19 = (int)unaff_x19[0x69];
    if (iVar19 < 2) {
      if (iVar19 == 0) {
        if (uVar44 <= uVar16) goto LAB_03547f94;
        lVar35 = lVar33 + uVar43 * 0x178;
        *(undefined4 *)(lVar35 + 0x68) = 0;
        *(undefined4 *)(lVar35 + 0x90) = 0x3f800000;
        *(undefined4 *)(lVar35 + 0xb8) = 0x3f800000;
        *(undefined4 *)(lVar35 + 0xe0) = 0;
      }
      else if (iVar19 == 1) {
        if (uVar16 < uVar44) {
          lVar35 = lVar33 + uVar43 * 0x178;
          fVar49 = fVar49 - fVar61;
          fVar50 = (*(float *)(lVar35 + 0x4c) - fVar61) / fVar49;
          fVar49 = (*(float *)(lVar35 + 0x74) - fVar61) / fVar49;
          *(float *)(lVar35 + 0x68) = fVar50;
          goto LAB_0354622c;
        }
        goto LAB_03547f94;
      }
    }
    else if (iVar19 == 2) {
      if (uVar44 <= uVar16) goto LAB_03547f94;
      lVar35 = lVar33 + uVar43 * 0x178;
      fVar50 = (*(float *)(lVar35 + 0x4c) - *(float *)((long)unaff_x19 + 0x4f4)) /
               (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
      *(float *)(lVar35 + 0x68) = fVar50;
      fVar49 = (*(float *)(lVar35 + 0x74) - *(float *)((long)unaff_x19 + 0x4f4)) /
               (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
LAB_0354622c:
      *(float *)(lVar35 + 0x90) = fVar49;
      *(float *)(lVar35 + 0xb8) = fVar49;
      *(float *)(lVar35 + 0xe0) = fVar50;
    }
    else if (iVar19 == 3) {
      if (uVar44 <= uVar16) goto LAB_03547f94;
      lVar35 = lVar33 + uVar43 * 0x178;
      fVar66 = *(float *)(lVar35 + 0x138);
      fVar63 = (1.0 - (*(float *)(lVar35 + 100) + *(float *)(lVar35 + 0xb4)) / fVar66) * 0.5;
      fVar50 = *(float *)(lVar35 + 100) / fVar66 + fVar63;
      fVar63 = fVar63 + *(float *)(lVar35 + 0xb4) / fVar66;
      *(float *)(lVar35 + 0x68) = fVar50;
      *(float *)(lVar35 + 0xe0) = fVar50;
      *(float *)(lVar35 + 0x90) = fVar63;
      *(float *)(lVar35 + 0xb8) = fVar63;
    }
    if (uVar44 <= uVar16) goto LAB_03547f94;
    lVar35 = lVar33 + uVar43 * 0x178;
    fVar50 = ABS(auVar58._0_4_) * *(float *)(lVar35 + 0x13c) * (1.0 - *(float *)(unaff_x19 + 0x60));
    if ((*(char *)(lVar35 + 0x34) == '\0') &&
       ((*(byte *)(lVar33 + uVar43 * 0x178 + 0x16c) & 1) != 0)) {
      fVar50 = -fVar50;
    }
    lVar35 = lVar33 + uVar43 * 0x178;
    *(float *)(lVar35 + 0x60) = fVar50;
    *(float *)(lVar35 + 0x88) = fVar50;
    *(float *)(lVar35 + 0xb0) = fVar50;
    *(float *)(lVar35 + 0xd8) = fVar50;
  }
  plVar45 = (long *)PTR_DAT_03cde808;
  if (((int)uVar16 < (int)unaff_x19[0x6c]) &&
     ((int)fStack00000000000000dc < *(int *)((long)unaff_x19 + 0x364))) {
    if (((int)unaff_x19[0x6d] <= (int)uVar70) || ((int)unaff_x19[0x62] == 5)) {
      if (((int)uVar70 < (int)unaff_x19[0x6d]) && ((int)unaff_x19[0x62] == 5)) {
        if (uVar16 < uVar44) {
          if (*(uint *)(lVar33 + uVar43 * 0x178 + 0x40) == uStack000000000000005c) {
            lVar24 = lVar33 + uVar43 * 0x178;
            *(ulong *)(lVar24 + 0x48) =
                 CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar24 + 0x48) >> 0x20),
                          fVar48 + (float)*(undefined8 *)(lVar24 + 0x48));
            *(float *)(lVar24 + 0x50) = fVar69 + *(float *)(lVar24 + 0x50);
            *(ulong *)(lVar24 + 0x70) =
                 CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar24 + 0x70) >> 0x20),
                          fVar48 + (float)*(undefined8 *)(lVar24 + 0x70));
            *(float *)(lVar24 + 0x78) = fVar69 + *(float *)(lVar24 + 0x78);
            *(ulong *)(lVar24 + 0x98) =
                 CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar24 + 0x98) >> 0x20),
                          fVar48 + (float)*(undefined8 *)(lVar24 + 0x98));
            *(float *)(lVar24 + 0xa0) = fVar69 + *(float *)(lVar24 + 0xa0);
            *(ulong *)(lVar24 + 0xc0) =
                 CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar24 + 0xc0) >> 0x20),
                          fVar48 + (float)*(undefined8 *)(lVar24 + 0xc0));
            *(float *)(lVar24 + 200) = fVar69 + *(float *)(lVar24 + 200);
            plVar45 = (long *)PTR_DAT_03cde808;
            goto LAB_03546450;
          }
          goto LAB_03546380;
        }
        goto LAB_03547f94;
      }
      goto LAB_03546380;
    }
    if (uVar44 <= uVar16) goto LAB_03547f94;
    lVar24 = lVar33 + uVar43 * 0x178;
    *(ulong *)(lVar24 + 0x48) =
         CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar24 + 0x48) >> 0x20),
                  fVar48 + (float)*(undefined8 *)(lVar24 + 0x48));
    *(float *)(lVar24 + 0x50) = fVar69 + *(float *)(lVar24 + 0x50);
    *(ulong *)(lVar24 + 0x70) =
         CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar24 + 0x70) >> 0x20),
                  fVar48 + (float)*(undefined8 *)(lVar24 + 0x70));
    *(float *)(lVar24 + 0x78) = fVar69 + *(float *)(lVar24 + 0x78);
    *(ulong *)(lVar24 + 0x98) =
         CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar24 + 0x98) >> 0x20),
                  fVar48 + (float)*(undefined8 *)(lVar24 + 0x98));
    *(float *)(lVar24 + 0xa0) = fVar69 + *(float *)(lVar24 + 0xa0);
    *(ulong *)(lVar24 + 0xc0) =
         CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar24 + 0xc0) >> 0x20),
                  fVar48 + (float)*(undefined8 *)(lVar24 + 0xc0));
    *(float *)(lVar24 + 200) = fVar69 + *(float *)(lVar24 + 200);
  }
  else {
LAB_03546380:
    if (uVar44 <= uVar16) goto LAB_03547f94;
    if (DAT_03ef1415 == '\0') {
      FUN_01c5c92c(PTR_DAT_03cb5ab0);
      uVar44 = *(uint *)(lVar29 + 0x18);
      DAT_03ef1415 = '\x01';
    }
    puVar9 = PTR_DAT_03cb5ab0;
    uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cb5ab0 + 0xb8) + 1);
    *(undefined8 *)(lVar33 + uVar43 * 0x178 + 0x48) =
         **(undefined8 **)(*(long *)PTR_DAT_03cb5ab0 + 0xb8);
    *(undefined4 *)(lVar33 + uVar43 * 0x178 + 0x50) = uVar53;
    if (uVar44 <= uVar16) goto LAB_03547f94;
    lVar35 = lVar33 + uVar43 * 0x178;
    uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
    *(undefined8 *)(lVar35 + 0x70) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
    *(undefined4 *)(lVar35 + 0x78) = uVar53;
    uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
    *(undefined8 *)(lVar35 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
    *(undefined4 *)(lVar35 + 0xa0) = uVar53;
    uVar21 = **(undefined8 **)(*(long *)puVar9 + 0xb8);
    uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
    *(undefined1 *)(lVar24 + 0x170) = 0;
    *(undefined8 *)(lVar35 + 0xc0) = uVar21;
    *(undefined4 *)(lVar35 + 200) = uVar53;
    plVar45 = (long *)PTR_DAT_03cde808;
  }
LAB_03546450:
  iVar19 = FUN_037415b4(0);
  *(bool *)((long)unaff_x19 + 0x174) = iVar19 == 1;
  if (iVar20 == 0) {
    puVar30 = (undefined8 *)(*unaff_x19 + 0x8d8);
  }
  else {
    if (iVar20 != 1) goto LAB_035464b8;
    puVar30 = (undefined8 *)(*unaff_x19 + 0x8f8);
  }
  (*(code *)*puVar30)();
LAB_035464b8:
  if ((unaff_x19[0x74] == 0) || (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 == 0))
  goto LAB_03547e54;
  if (*(uint *)(lVar24 + 0x18) <= uVar16) goto LAB_03547f94;
  lVar24 = lVar24 + uVar43 * 0x178;
  uVar21 = *(undefined8 *)(lVar24 + 0x114);
  *(float *)(lVar24 + 0x11c) = fVar69 + *(float *)(lVar24 + 0x11c);
  *(undefined8 *)(lVar24 + 0x114) =
       CONCAT44(fVar68 + (float)((ulong)uVar21 >> 0x20),fVar48 + (float)uVar21);
  if ((unaff_x19[0x74] == 0) || (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 == 0))
  goto LAB_03547e54;
  if (*(uint *)(lVar24 + 0x18) <= uVar16) goto LAB_03547f94;
  lVar24 = lVar24 + uVar43 * 0x178;
  *(ulong *)(lVar24 + 0x108) =
       CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar24 + 0x108) >> 0x20),
                fVar48 + (float)*(undefined8 *)(lVar24 + 0x108));
  *(float *)(lVar24 + 0x110) = fVar69 + *(float *)(lVar24 + 0x110);
  if ((unaff_x19[0x74] == 0) || (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 == 0))
  goto LAB_03547e54;
  if (*(uint *)(lVar24 + 0x18) <= uVar16) goto LAB_03547f94;
  lVar24 = lVar24 + uVar43 * 0x178;
  *(ulong *)(lVar24 + 0x120) =
       CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar24 + 0x120) >> 0x20),
                fVar48 + (float)*(undefined8 *)(lVar24 + 0x120));
  *(float *)(lVar24 + 0x128) = fVar69 + *(float *)(lVar24 + 0x128);
  if ((unaff_x19[0x74] == 0) || (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 == 0))
  goto LAB_03547e54;
  if (*(uint *)(lVar24 + 0x18) <= uVar16) goto LAB_03547f94;
  lVar24 = lVar24 + uVar43 * 0x178;
  uVar21 = *(undefined8 *)(lVar24 + 300);
  *(float *)(lVar24 + 0x134) = fVar69 + *(float *)(lVar24 + 0x134);
  *(undefined8 *)(lVar24 + 300) =
       CONCAT44(fVar68 + (float)((ulong)uVar21 >> 0x20),fVar48 + (float)uVar21);
  lVar24 = unaff_x19[0x74];
  if ((lVar24 == 0) || (lVar35 = *(long *)(lVar24 + 0x38), lVar35 == 0)) goto LAB_03547e54;
  uVar44 = *(uint *)(lVar35 + 0x18);
  if (uVar44 <= uVar16) goto LAB_03547f94;
  lVar40 = lVar35 + 0x20 + uVar43 * 0x178;
  uVar21 = *(undefined8 *)(lVar40 + 0x118);
  auVar56._0_8_ = CONCAT44(fVar48 + (float)((ulong)uVar21 >> 0x20),fVar48 + (float)uVar21);
  auVar56._8_4_ = fVar68 + (float)*(undefined8 *)(lVar40 + 0x120);
  auVar56._12_4_ = fVar68 + (float)((ulong)*(undefined8 *)(lVar40 + 0x120) >> 0x20);
  *(float *)(lVar40 + 0x128) = fVar68 + *(float *)(lVar40 + 0x128);
  *(long *)(lVar40 + 0x120) = auVar56._8_8_;
  *(undefined8 *)(lVar40 + 0x118) = auVar56._0_8_;
  if (uVar70 == uVar18) {
    uVar18 = *(int *)(in_stack_000001a0 + 7) - 1;
    if (uVar16 == uVar18) goto LAB_035466c4;
  }
  else {
    lVar24 = *(long *)(lVar24 + 0x50);
    if (lVar24 == 0) goto LAB_03547e54;
    if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_03547f94;
    lVar40 = lVar24 + 0x20 + (long)(int)uVar18 * 0x60;
    fVar63 = fVar68 + *(float *)(lVar40 + 0x38);
    *(ulong *)(lVar40 + 0x30) =
         CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar40 + 0x30) >> 0x20),
                  fVar68 + (float)*(undefined8 *)(lVar40 + 0x30));
    *(float *)(lVar40 + 0x38) = fVar63;
    *(float *)(lVar40 + 0x3c) = fVar48 + *(float *)(lVar40 + 0x3c);
    if (uVar44 <= *(uint *)(lVar40 + 0x18)) goto LAB_03547f94;
    lVar24 = lVar24 + 0x20 + (long)(int)uVar18 * 0x60;
    uVar53 = *(undefined4 *)(lVar35 + 0x20 + (long)(int)*(uint *)(lVar40 + 0x18) * 0x178 + 0xf4);
    *(float *)(lVar24 + 0x54) = fVar63;
    *(undefined4 *)(lVar24 + 0x50) = uVar53;
    lVar24 = unaff_x19[0x74];
    if ((lVar24 == 0) || (lVar35 = *(long *)(lVar24 + 0x50), lVar35 == 0)) goto LAB_03547e54;
    if (*(uint *)(lVar35 + 0x18) <= uVar18) goto LAB_03547f94;
    lVar24 = *(long *)(lVar24 + 0x38);
    if (lVar24 == 0) goto LAB_03547e54;
    uVar44 = *(uint *)(lVar35 + 0x20 + (long)(int)uVar18 * 0x60 + 0x24);
    if (*(uint *)(lVar24 + 0x18) <= uVar44) goto LAB_03547f94;
    lVar35 = lVar35 + 0x20 + (long)(int)uVar18 * 0x60;
    *(undefined4 *)(lVar35 + 0x58) = *(undefined4 *)(lVar24 + (long)(int)uVar44 * 0x178 + 0x120);
    *(undefined4 *)(lVar35 + 0x5c) = *(undefined4 *)(lVar35 + 0x30);
    uVar18 = *(int *)(in_stack_000001a0 + 7) - 1;
LAB_035466c4:
    if (uVar16 == uVar18) {
      lVar24 = unaff_x19[0x74];
      if ((lVar24 == 0) || (lVar35 = *(long *)(lVar24 + 0x50), lVar35 == 0)) goto LAB_03547e54;
      if (*(uint *)(lVar35 + 0x18) <= uVar70) goto LAB_03547f94;
      lVar40 = lVar35 + 0x20 + (long)(int)uVar70 * 0x60;
      fVar63 = fVar68 + *(float *)(lVar40 + 0x38);
      *(ulong *)(lVar40 + 0x30) =
           CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar40 + 0x30) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar40 + 0x30));
      *(float *)(lVar40 + 0x38) = fVar63;
      *(float *)(lVar40 + 0x3c) = fVar48 + *(float *)(lVar40 + 0x3c);
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_03547e54;
      uVar18 = *(uint *)(lVar35 + 0x20 + (long)(int)uVar70 * 0x60 + 0x18);
      if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_03547f94;
      *(undefined4 *)(lVar40 + 0x50) = *(undefined4 *)(lVar24 + (long)(int)uVar18 * 0x178 + 0x114);
      *(float *)(lVar40 + 0x54) = fVar63;
      lVar24 = unaff_x19[0x74];
      if ((lVar24 == 0) || (lVar35 = *(long *)(lVar24 + 0x50), lVar35 == 0)) goto LAB_03547e54;
      if (*(uint *)(lVar35 + 0x18) <= uVar70) goto LAB_03547f94;
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_03547e54;
      uVar18 = *(uint *)(lVar35 + 0x20 + (long)(int)uVar70 * 0x60 + 0x24);
      if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_03547f94;
      lVar35 = lVar35 + 0x20 + (long)(int)uVar70 * 0x60;
      *(undefined4 *)(lVar35 + 0x58) = *(undefined4 *)(lVar24 + (long)(int)uVar18 * 0x178 + 0x120);
      *(undefined4 *)(lVar35 + 0x5c) = *(undefined4 *)(lVar35 + 0x30);
    }
  }
  if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  uVar23 = FUN_02f93cc4(uVar14,0);
  if (((((uVar23 & 1) == 0) && (1 < uVar14 - 0x2010)) && (uVar14 != 0xad)) && (uVar14 != 0x2d)) {
    if (bVar10) {
      if (((uVar16 != 0) && ((int)uVar16 < (int)(*(uint *)(lVar29 + 0x18) - 1))) &&
         (((int)uVar16 < *(int *)(in_stack_000001a0 + 7) && ((uVar14 == 0x2019 || (uVar14 == 0x27)))
          ))) {
        if (*(uint *)(lVar29 + 0x18) <= uVar16 - 1) goto LAB_03547f94;
        uVar3 = *(undefined2 *)(lVar33 + (ulong)(uVar16 - 1) * 0x178 + 4);
        if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        uVar23 = FUN_02f93cc4(uVar3,0);
        if ((uVar23 & 1) != 0) {
          if (*(uint *)(lVar29 + 0x18) <= uVar16 + 1) goto LAB_03547f94;
          uVar3 = *(undefined2 *)(lVar33 + (ulong)(uVar16 + 1) * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
          }
          uVar23 = FUN_02f93cc4(uVar3,0);
          if ((uVar23 & 1) != 0) goto LAB_035469b8;
        }
      }
LAB_03547730:
      if (uVar16 == *(int *)(in_stack_000001a0 + 7) - 1U) {
        if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        uVar23 = FUN_02f93cc4(uVar14,0);
        uVar18 = uVar16;
        if ((uVar23 & 1) == 0) goto LAB_0354776c;
      }
      else {
LAB_0354776c:
        uVar18 = uVar16 - 1;
      }
      lVar24 = unaff_x19[0x74];
      if (lVar24 != 0) {
        lVar35 = *(long *)(lVar24 + 0x40);
        if (lVar35 != 0) {
          uVar44 = *(uint *)(lVar24 + 0x24);
          iVar20 = *(int *)(lVar35 + 0x18);
          if (iVar20 < (int)(uVar44 + 1)) {
            if (*(int *)(*(long *)PTR_DAT_03cde788 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            FUN_02072f1c((long *)(lVar24 + 0x40),iVar20 + 1,*(undefined8 *)PTR_DAT_03cde780);
            lVar24 = unaff_x19[0x74];
            if (lVar24 == 0) goto LAB_03547e54;
          }
          lVar24 = *(long *)(lVar24 + 0x40);
          if (lVar24 != 0) {
            if (uVar44 < *(uint *)(lVar24 + 0x18)) {
              lVar24 = lVar24 + (long)(int)uVar44 * 0x18;
              *(long **)(lVar24 + 0x20) = unaff_x19;
              *(uint *)(lVar24 + 0x28) = uVar13;
              *(uint *)(lVar24 + 0x2c) = uVar18;
              *(uint *)(lVar24 + 0x30) = (uVar18 - uVar13) + 1;
              thunk_FUN_01cc8040();
              lVar24 = unaff_x19[0x74];
              if (lVar24 != 0) {
                lVar35 = *(long *)(lVar24 + 0x50);
                *(int *)(lVar24 + 0x24) = *(int *)(lVar24 + 0x24) + 1;
                if (lVar35 != 0) {
                  if (uVar70 < *(uint *)(lVar35 + 0x18)) {
                    bVar10 = false;
                    goto LAB_035468cc;
                  }
                  goto LAB_03547f94;
                }
              }
              goto LAB_03547e54;
            }
            goto LAB_03547f94;
          }
        }
      }
      goto LAB_03547e54;
    }
    if (uVar16 == 0) {
      if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      bVar12 = FUN_02f93c1c(uVar14,0);
      if ((((uVar14 == 0x200b | bVar12 ^ 0xff | bVar11) & 1) != 0) ||
         (*(int *)(in_stack_000001a0 + 7) == 1)) goto LAB_03547730;
    }
    bVar10 = false;
  }
  else {
    if (!bVar10) {
      uVar13 = uVar16;
    }
    if (uVar16 != *(int *)(in_stack_000001a0 + 7) - 1U) {
LAB_035469b8:
      bVar10 = true;
      goto LAB_035469c0;
    }
    lVar24 = unaff_x19[0x74];
    if (lVar24 == 0) goto LAB_03547e54;
    lVar35 = *(long *)(lVar24 + 0x40);
    if (lVar35 == 0) goto LAB_03547e54;
    uVar18 = *(uint *)(lVar24 + 0x24);
    iVar20 = *(int *)(lVar35 + 0x18);
    if (iVar20 < (int)(uVar18 + 1)) {
      if (*(int *)(*(long *)PTR_DAT_03cde788 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      FUN_02072f1c((long *)(lVar24 + 0x40),iVar20 + 1,*(undefined8 *)PTR_DAT_03cde780);
      lVar24 = unaff_x19[0x74];
      if (lVar24 == 0) goto LAB_03547e54;
    }
    lVar24 = *(long *)(lVar24 + 0x40);
    if (lVar24 == 0) goto LAB_03547e54;
    if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_03547f94;
    lVar24 = lVar24 + (long)(int)uVar18 * 0x18;
    *(long **)(lVar24 + 0x20) = unaff_x19;
    *(uint *)(lVar24 + 0x28) = uVar13;
    *(uint *)(lVar24 + 0x2c) = uVar16;
    *(uint *)(lVar24 + 0x30) = (uVar16 - uVar13) + 1;
    thunk_FUN_01cc8040();
    lVar24 = unaff_x19[0x74];
    if (lVar24 == 0) goto LAB_03547e54;
    lVar35 = *(long *)(lVar24 + 0x50);
    *(int *)(lVar24 + 0x24) = *(int *)(lVar24 + 0x24) + 1;
    if (lVar35 == 0) goto LAB_03547e54;
    if (*(uint *)(lVar35 + 0x18) <= uVar70) goto LAB_03547f94;
    bVar10 = true;
LAB_035468cc:
    lVar35 = lVar35 + (long)(int)uVar70 * 0x60;
    fStack00000000000000dc = (float)((int)fStack00000000000000dc + 1);
    *(int *)(lVar35 + 0x34) = *(int *)(lVar35 + 0x34) + 1;
  }
LAB_035469c0:
  lVar24 = unaff_x19[0x74];
  if ((lVar24 == 0) || (lVar35 = *(long *)(lVar24 + 0x38), lVar35 == 0)) goto LAB_03547e54;
  if (*(uint *)(lVar35 + 0x18) <= uVar16) goto LAB_03547f94;
  lVar40 = lVar35 + 0x20;
  if ((*(byte *)(lVar40 + uVar43 * 0x178 + 0x16c) >> 2 & 1) == 0) {
    if (bVar6) {
      if (*(uint *)(lVar35 + 0x18) <= (uint)((long)(int)uVar16 + -1)) goto LAB_03547f94;
      lVar40 = lVar40 + ((long)(int)uVar16 + -1) * 0x178;
      lVar35 = *unaff_x19;
      uVar53 = *(undefined4 *)(lVar40 + 0x100);
      uVar60 = *(undefined4 *)(lVar40 + 0x13c);
LAB_03546c6c:
      pcVar31 = *(code **)(lVar35 + 0x908);
LAB_03546ca4:
      (*pcVar31)(fStack0000000000000074,in_stack_00000068._4_4_,uStack0000000000000070,uVar53,
                 fStack0000000000000120,0,fStack0000000000000078,uVar60);
      lVar24 = *plVar45;
      if (*(int *)(lVar24 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        lVar24 = *plVar45;
      }
      fStack000000000000013c = 0.0;
      fStack000000000000011c = 0.0;
      fStack0000000000000120 = *(float *)(*(long *)(lVar24 + 0xb8) + 0x1730);
    }
    bVar6 = false;
  }
  else {
    lVar35 = lVar40 + uVar43 * 0x178;
    *(int *)(lVar35 + 0x148) = iVar17;
    iVar20 = *(int *)(lVar35 + 0x40);
    if ((((int)unaff_x19[0x6c] < (int)uVar16) || ((int)unaff_x19[0x6d] < (int)uVar70)) ||
       (((int)unaff_x19[0x62] == 5 && (iVar20 + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar11 & 1) == 0 && uVar14 != 0x200b) {
      fVar48 = *(float *)(lVar40 + uVar43 * 0x178 + 0x13c);
      if (fStack000000000000013c <= fVar48) {
        fStack000000000000013c = fVar48;
      }
      if (fStack000000000000011c <= ABS(fVar50)) {
        fStack000000000000011c = ABS(fVar50);
      }
      if (iVar20 != iStack0000000000000060) {
        if (*(int *)(*plVar45 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
          lVar24 = unaff_x19[0x74];
          if (lVar24 == 0) goto LAB_03547e54;
          lVar35 = *(long *)(*plVar45 + 0xb8);
        }
        else {
          lVar35 = *(long *)(*plVar45 + 0xb8);
        }
        fStack0000000000000120 = *(float *)(lVar35 + 0x1730);
      }
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_03547e54;
      if (*(uint *)(lVar24 + 0x18) <= uVar16) goto LAB_03547f94;
      if (unaff_x19[0x1f] == 0) goto LAB_03547e54;
      fVar63 = *(float *)(lVar24 + uVar43 * 0x178 + 0x144);
      fVar48 = (float)FUN_038054cc(unaff_x19[0x1f] + 0x28,0);
      fVar63 = fVar63 + fStack000000000000013c * fVar48;
      iStack0000000000000060 = iVar20;
      if (fVar63 <= fStack0000000000000120) {
        fStack0000000000000120 = fVar63;
      }
    }
    if (!bVar6) {
      bVar6 = false;
      if ((bVar1) && ((int)uVar16 <= (int)uVar32)) {
        if ((uVar14 & 0xfffe) == 10) goto LAB_03546ce0;
        if (uVar14 != 0xd) {
          if (uVar16 == uVar32) {
            if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            uVar23 = FUN_02f9488c(uVar14,0);
            if ((uVar23 & 1) != 0) goto LAB_03546bc0;
          }
          if ((unaff_x19[0x74] != 0) && (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 != 0)) {
            if (uVar16 < *(uint *)(lVar24 + 0x18)) {
              lVar24 = lVar24 + uVar43 * 0x178;
              fStack0000000000000078 = *(float *)(lVar24 + 0x15c);
              fVar48 = fVar50;
              fVar63 = fStack0000000000000078;
              if (fStack000000000000013c != 0.0) {
                fVar48 = fStack000000000000011c;
                fVar63 = fStack000000000000013c;
              }
              fStack000000000000013c = fVar63;
              uStack0000000000000070 = 0;
              fStack0000000000000074 = *(float *)(lVar24 + 0x114);
              uStack000000000000007c = *(undefined4 *)(lVar24 + 0x164);
              in_stack_00000068._4_4_ = fStack0000000000000120;
              fStack000000000000011c = fVar48;
              goto LAB_03546c2c;
            }
            goto LAB_03547f94;
          }
          goto LAB_03547e54;
        }
      }
LAB_03546bc0:
      bVar6 = false;
      goto LAB_03546ce0;
    }
LAB_03546c2c:
    if (*(int *)(in_stack_000001a0 + 7) == 1) {
      if ((unaff_x19[0x74] != 0) && (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 != 0)) {
        if (uVar16 < *(uint *)(lVar24 + 0x18)) {
          lVar24 = lVar24 + uVar43 * 0x178;
LAB_03546c60:
          lVar35 = *unaff_x19;
          uVar53 = *(undefined4 *)(lVar24 + 0x120);
          uVar60 = *(undefined4 *)(lVar24 + 0x15c);
          goto LAB_03546c6c;
        }
        goto LAB_03547f94;
      }
      goto LAB_03547e54;
    }
    if ((uVar16 == uVar15) || ((int)uVar32 <= (int)uVar16)) {
      lVar24 = unaff_x19[0x74];
      if ((bVar11 & 1) == 0 && uVar14 != 0x200b) {
        if ((lVar24 == 0) || (lVar24 = *(long *)(lVar24 + 0x38), lVar24 == 0)) goto LAB_03547e54;
        if (*(uint *)(lVar24 + 0x18) <= uVar16) goto LAB_03547f94;
        lVar24 = lVar24 + uVar43 * 0x178;
      }
      else {
        if ((lVar24 == 0) || (lVar24 = *(long *)(lVar24 + 0x38), lVar24 == 0)) goto LAB_03547e54;
        if (*(uint *)(lVar24 + 0x18) <= uVar32) goto LAB_03547f94;
        lVar24 = lVar24 + (long)(int)uVar32 * 0x178;
      }
      uVar53 = *(undefined4 *)(lVar24 + 0x120);
      uVar60 = *(undefined4 *)(lVar24 + 0x15c);
      pcVar31 = *(code **)(*unaff_x19 + 0x908);
      goto LAB_03546ca4;
    }
    if (!bVar1) {
      if ((unaff_x19[0x74] != 0) && (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 != 0)) {
        if ((uint)((long)(int)uVar16 + -1) < *(uint *)(lVar24 + 0x18)) {
          lVar24 = lVar24 + ((long)(int)uVar16 + -1) * 0x178;
          goto LAB_03546c60;
        }
        goto LAB_03547f94;
      }
      goto LAB_03547e54;
    }
    if ((int)uVar16 < *(int *)(in_stack_000001a0 + 7) + -1) {
      if ((unaff_x19[0x74] == 0) || (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 == 0))
      goto LAB_03547e54;
      if (*(uint *)(lVar24 + 0x18) <= uVar16 + 1) goto LAB_03547f94;
      uVar23 = FUN_035627a4(uStack000000000000007c,
                            *(undefined4 *)(lVar24 + (ulong)(uVar16 + 1) * 0x178 + 0x164),0);
      if ((uVar23 & 1) == 0) {
        if ((unaff_x19[0x74] != 0) && (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 != 0)) {
          if (uVar16 < *(uint *)(lVar24 + 0x18)) {
            lVar24 = lVar24 + uVar43 * 0x178;
            uVar53 = *(undefined4 *)(lVar24 + 0x120);
            uVar60 = *(undefined4 *)(lVar24 + 0x15c);
            pcVar31 = *(code **)(*unaff_x19 + 0x908);
            goto LAB_03546ca4;
          }
          goto LAB_03547f94;
        }
        goto LAB_03547e54;
      }
      bVar6 = true;
    }
    else {
      bVar6 = true;
    }
  }
LAB_03546ce0:
  if ((unaff_x19[0x74] == 0) || (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 == 0))
  goto LAB_03547e54;
  if (*(uint *)(lVar24 + 0x18) <= uVar16) goto LAB_03547f94;
  if (lVar39 == 0) goto LAB_03547e54;
  uVar18 = *(uint *)(lVar24 + uVar43 * 0x178 + 0x18c);
  fVar48 = (float)FUN_038054dc(lVar39 + 0x28,0);
  if ((uVar18 >> 6 & 1) == 0) {
    if (bVar7) {
      if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
      goto LAB_03547e54;
      if (*(uint *)(lVar39 + 0x18) <= (uint)((long)(int)uVar16 + -1)) goto LAB_03547f94;
      lVar39 = lVar39 + ((long)(int)uVar16 + -1) * 0x178;
LAB_03546f8c:
      fVar63 = *(float *)(lVar39 + 0x144);
      lVar24 = *unaff_x19;
      uVar53 = *(undefined4 *)(lVar39 + 0x120);
LAB_0354720c:
      (**(code **)(lVar24 + 0x908))
                (fStack0000000000000094,fStack0000000000000098,uStack00000000000000c8,uVar53,
                 fStack000000000000009c * fVar48 + fVar63,0,fStack000000000000009c,
                 fStack000000000000009c);
    }
LAB_03547248:
    bVar7 = false;
  }
  else {
    lVar24 = unaff_x19[0x74];
    if ((lVar24 == 0) || (lVar35 = *(long *)(lVar24 + 0x38), lVar35 == 0)) goto LAB_03547e54;
    if (*(uint *)(lVar35 + 0x18) <= uVar16) goto LAB_03547f94;
    *(int *)(lVar35 + 0x20 + uVar43 * 0x178 + 0x150) = iVar17;
    if ((((int)unaff_x19[0x6c] < (int)uVar16) || ((int)unaff_x19[0x6d] < (int)uVar70)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar35 + 0x20 + uVar43 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((((bool)(bVar7 | bVar1 ^ 1U)) || ((int)uVar32 < (int)uVar16)) || ((uVar14 & 0xfffe) == 10))
       || (uVar14 == 0xd)) {
LAB_03546e1c:
      if (!bVar7) goto LAB_03547248;
    }
    else {
      if (uVar16 == uVar32) {
        if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        uVar23 = FUN_02f9488c(uVar14,0);
        if ((uVar23 & 1) != 0) goto LAB_03546e1c;
        lVar24 = unaff_x19[0x74];
        if (lVar24 == 0) goto LAB_03547e54;
      }
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_03547e54;
      if (*(uint *)(lVar24 + 0x18) <= uVar16) goto LAB_03547f94;
      lVar24 = lVar24 + uVar43 * 0x178;
      fStack000000000000009c = *(float *)(lVar24 + 0x15c);
      fStack0000000000000098 = fVar48 * fStack000000000000009c + *(float *)(lVar24 + 0x144);
      uStack00000000000000c8 = 0;
      fStack0000000000000054 = *(float *)(lVar24 + 0x58);
      fStack0000000000000094 = *(float *)(lVar24 + 0x114);
    }
    iVar20 = *(int *)(in_stack_000001a0 + 7);
    if (iVar20 == 1) {
LAB_03546f60:
      if ((unaff_x19[0x74] != 0) && (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 != 0)) {
        if (uVar16 < *(uint *)(lVar39 + 0x18)) {
          lVar39 = lVar39 + uVar43 * 0x178;
          goto LAB_03546f8c;
        }
        goto LAB_03547f94;
      }
      goto LAB_03547e54;
    }
    if (uVar16 == uVar15) {
      lVar39 = unaff_x19[0x74];
      if ((uVar14 != 0x200b & (bVar11 ^ 0xff)) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_GravityProvider__IsGravityBlocked;
LAB_035471d0:
      if ((lVar39 != 0) && (lVar39 = *(long *)(lVar39 + 0x38), lVar39 != 0)) {
        if (uVar16 < *(uint *)(lVar39 + 0x18)) {
          lVar39 = lVar39 + uVar43 * 0x178;
LAB_035471f0:
          fVar63 = *(float *)(lVar39 + 0x144);
          lVar24 = *unaff_x19;
          uVar53 = *(undefined4 *)(lVar39 + 0x120);
          goto LAB_0354720c;
        }
        goto LAB_03547f94;
      }
      goto LAB_03547e54;
    }
    if ((int)uVar16 < iVar20) {
      if ((unaff_x19[0x74] != 0) && (lVar24 = *(long *)(unaff_x19[0x74] + 0x38), lVar24 != 0)) {
        if (uVar16 + 1 < *(uint *)(lVar24 + 0x18)) {
          if (*(float *)(lVar24 + (ulong)(uVar16 + 1) * 0x178 + 0x58) == fStack0000000000000054) {
            if (*(int *)(*(long *)PTR_DAT_03cde748 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            uVar23 = FUN_03562ca8(0);
            if ((uVar23 & 1) != 0) {
              iVar20 = *(int *)(in_stack_000001a0 + 7);
              goto LAB_03547068;
            }
          }
          lVar39 = unaff_x19[0x74];
          if ((int)uVar16 <= (int)uVar32) goto LAB_035471d0;
UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_GravityProvider__IsGravityBlocked:
          if ((lVar39 != 0) && (lVar39 = *(long *)(lVar39 + 0x38), lVar39 != 0)) {
            if (uVar32 < *(uint *)(lVar39 + 0x18)) {
              lVar39 = lVar39 + (long)(int)uVar32 * 0x178;
              goto LAB_035471f0;
            }
            goto LAB_03547f94;
          }
          goto LAB_03547e54;
        }
        goto LAB_03547f94;
      }
      goto LAB_03547e54;
    }
LAB_03547068:
    if ((int)uVar16 < iVar20) {
      iVar20 = FUN_037759d4(lVar39,0);
      if (*(uint *)(lVar29 + 0x18) <= uVar16 + 1) goto LAB_03547f94;
      lVar39 = *(long *)(lVar33 + (ulong)(uVar16 + 1) * 0x178 + 0x20);
      if (lVar39 == 0) goto LAB_03547e54;
      iVar19 = FUN_037759d4(lVar39,0);
      if (iVar20 != iVar19) goto LAB_03546f60;
    }
    if (!bVar1) {
      if ((unaff_x19[0x74] != 0) && (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 != 0)) {
        if ((uint)((long)(int)uVar16 + -1) < *(uint *)(lVar39 + 0x18)) {
          lVar39 = lVar39 + ((long)(int)uVar16 + -1) * 0x178;
          goto LAB_03546f8c;
        }
        goto LAB_03547f94;
      }
      goto LAB_03547e54;
    }
    bVar7 = true;
  }
  if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
  goto LAB_03547e54;
  uVar18 = (uint)*(undefined8 *)(lVar39 + 0x18);
  if (uVar18 <= uVar16) goto LAB_03547f94;
  if ((*(byte *)(lVar39 + 0x20 + uVar43 * 0x178 + 0x16d) >> 1 & 1) == 0) {
    if (bVar8) {
      (**(code **)(*unaff_x19 + 0x918))();
    }
LAB_0354735c:
    bVar8 = false;
  }
  else {
    if ((((int)unaff_x19[0x6c] < (int)uVar16) || ((int)unaff_x19[0x6d] < (int)uVar70)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar39 + 0x20 + uVar43 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar8) {
      if ((((!bVar1) || ((int)uVar32 < (int)uVar16)) || ((uVar14 & 0xfffe) == 10)) ||
         (uVar14 == 0xd)) goto LAB_0354735c;
      if (uVar16 == uVar32) {
        if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        uVar23 = FUN_02f9488c(uVar14,0);
        if ((uVar23 & 1) != 0) goto LAB_0354735c;
      }
      lVar24 = *plVar45;
      if (*(int *)(lVar24 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        lVar24 = *plVar45;
      }
      if ((unaff_x19[0x74] == 0) || (lVar39 = *(long *)(unaff_x19[0x74] + 0x38), lVar39 == 0))
      goto LAB_03547e54;
      uVar18 = (uint)*(undefined8 *)(lVar39 + 0x18);
      if (uVar18 <= uVar16) goto LAB_03547f94;
      lVar35 = *(long *)(lVar24 + 0xb8);
      lVar24 = lVar39 + uVar43 * 0x178;
      fStack00000000000000cc = *(float *)(lVar35 + 0x1728);
      fStack00000000000000d0 = *(float *)(lVar35 + 0x172c);
      in_stack_00001290 = *(float *)(lVar24 + 0x188);
      fStack00000000000000d8 = *(float *)(lVar35 + 0x1720);
      fStack00000000000000f4 = *(float *)(lVar35 + 0x1724);
      auVar56 = *(undefined1 (*) [16])(lVar24 + 0x178);
      in_stack_00001288 = auVar56._8_4_;
      in_stack_0000128c = auVar56._12_4_;
      in_stack_00001280 = auVar56._0_4_;
      in_stack_00001284 = auVar56._4_4_;
    }
    if (uVar18 <= uVar16) goto LAB_03547f94;
    lVar39 = lVar39 + uVar43 * 0x178;
    in_stack_000001c0 = CONCAT44(in_stack_00001284,in_stack_00001280);
    auVar5._8_4_ = in_stack_00001288;
    auVar5._0_8_ = in_stack_000001c0;
    auVar5._12_4_ = in_stack_0000128c;
    lVar24 = 0x118;
    if ((bVar11 & 1) == 0) {
      lVar24 = 0xf4;
    }
    fVar61 = *(float *)(lVar39 + 0x180);
    fVar68 = *(float *)(lVar39 + 0x184);
    fVar52 = *(float *)(lVar39 + 0x188);
    uVar21 = *(undefined8 *)(lVar39 + 0x178);
    fVar51 = *(float *)(lVar39 + 0x120);
    fVar48 = *(float *)(lVar39 + 0x13c);
    fVar49 = *(float *)(lVar39 + 0x140);
    fVar66 = *(float *)(lVar39 + 0x148);
    fVar63 = *(float *)(lVar39 + lVar24 + 0x20);
    in_stack_000001c8 = auVar5._8_8_;
    in_stack_000001a8 = uVar21;
    fStack00000000000001b0 = fVar61;
    fStack00000000000001b4 = fVar68;
    in_stack_000001b8 = fVar52;
    in_stack_000001d0 = in_stack_00001290;
    uVar43 = FUN_03563dcc(&stack0x000001c0,&stack0x000001a8,0);
    if ((uVar43 & 1) == 0) {
      if ((bVar11 & 1) == 0) {
        fVar48 = fVar51;
      }
      if (*(int *)(*(long *)PTR_DAT_03cde758 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      fVar63 = fVar63 - in_stack_00001284;
      if (fVar63 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar63;
      }
      if (fStack00000000000000cc <= fVar48 + in_stack_00001288) {
        fStack00000000000000cc = fVar48 + in_stack_00001288;
      }
      if (*(int *)(*(long *)PTR_DAT_03cde758 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      fVar66 = fVar66 - in_stack_00001290;
      fVar49 = fVar49 + in_stack_0000128c;
      if (fVar66 <= fStack00000000000000f4) {
        fStack00000000000000f4 = fVar66;
      }
      if (fStack00000000000000d0 <= fVar49) {
        fStack00000000000000d0 = fVar49;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cde758 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      fStack00000000000000d8 = (fVar63 + (fStack00000000000000cc - in_stack_00001288)) * 0.5;
      (**(code **)(*unaff_x19 + 0x918))();
      if (*(int *)(*(long *)PTR_DAT_03cde758 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      if ((bVar11 & 1) == 0) {
        fVar48 = fVar51;
      }
      if (*(int *)(*(long *)PTR_DAT_03cde758 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      fStack00000000000000f4 = fVar66 - fVar52;
      in_stack_00001280 = (undefined4)uVar21;
      in_stack_00001284 = (float)((ulong)uVar21 >> 0x20);
      fStack00000000000000cc = fVar61 + fVar48;
      fStack00000000000000d0 = fVar49 + fVar68;
      in_stack_00001288 = fVar61;
      in_stack_0000128c = fVar68;
      in_stack_00001290 = fVar52;
    }
    if (((*(int *)(in_stack_000001a0 + 7) == 1) || (uVar16 == uVar15)) ||
       (((int)uVar32 <= (int)uVar16 || (!bVar1)))) {
      (**(code **)(*unaff_x19 + 0x918))();
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
  }
  iVar20 = *(int *)(in_stack_000001a0 + 7);
  uVar16 = uVar16 + 1;
  uVar18 = uVar70;
  if (iVar20 <= (int)uVar16) goto LAB_03547a00;
  goto LAB_03545984;
LAB_035433ac:
  if (*(int *)(*(long *)PTR_DAT_03cde808 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  uVar16 = FUN_03594d0c();
  lVar29 = unaff_x19[99];
  if (*(int *)(*(long *)PTR_DAT_03cb5a80 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  uVar23 = FUN_037707bc(lVar29,0,0);
  if ((uVar23 & 1) != 0) {
    plVar45 = (long *)unaff_x19[99];
    uVar21 = (**(code **)(*unaff_x19 + 0x548))();
    if (plVar45 == (long *)0x0) goto LAB_03547e54;
    (**(code **)(*plVar45 + 0x558))(plVar45,uVar21,*(undefined8 *)(*plVar45 + 0x560));
    lVar29 = unaff_x19[99];
    if (lVar29 == 0) goto LAB_03547e54;
    *(int *)(lVar29 + 0x438) = (int)unaff_x19[0x87];
    FUN_03588698(lVar29,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
    plVar45 = (long *)unaff_x19[99];
    if (plVar45 == (long *)0x0) goto LAB_03547e54;
    (**(code **)(*plVar45 + 0x7d8))(plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7e0));
    *(undefined1 *)(unaff_x19 + 0x65) = 1;
  }
  iVar17 = *(int *)(in_stack_000001a0 + 7);
  uVar53 = 3;
  goto LAB_03543550;
LAB_03547a00:
  lVar29 = unaff_x19[0x74];
  if (lVar29 != 0) {
    iVar19 = uVar70 + 1;
LAB_03547a18:
    puVar9 = PTR_DAT_03cde750;
    lVar33 = *(long *)(lVar29 + 0x60);
    if (lVar33 != 0) {
      if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) {
LAB_03547f94:
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbdc();
      }
      *(int *)(lVar33 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x50 + 0x28) = iVar17;
      *(int *)(lVar29 + 0x18) = iVar20;
      lVar33 = unaff_x19[0xd7];
      *(int *)(lVar29 + 0x2c) = iVar19;
      if (iVar20 < 1 || fStack00000000000000dc == 0.0) {
        fStack00000000000000dc = 1.4013e-45;
      }
      *(int *)(lVar29 + 0x1c) = (int)lVar33;
      *(float *)(lVar29 + 0x24) = fStack00000000000000dc;
      *(int *)(lVar29 + 0x30) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
      if (((int)unaff_x19[0x6a] != 0xff) ||
         (uVar43 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar43 & 1) == 0)) {
LAB_035453f0:
        if (*(int *)(*(long *)PTR_DAT_03cde810 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        FUN_03561cfc();
        return;
      }
      lVar29 = unaff_x19[0xde];
      if (lVar29 != 0) {
        (**(code **)(lVar29 + 0x18))
                  (*(undefined8 *)(lVar29 + 0x40),unaff_x19[0x74],*(undefined8 *)(lVar29 + 0x28));
      }
      if (*(int *)((long)unaff_x19 + 0x354) != 0) {
        if ((unaff_x19[0x74] == 0) || (lVar29 = *(long *)(unaff_x19[0x74] + 0x60), lVar29 == 0))
        goto LAB_03547e54;
        if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        if (*(int *)(lVar29 + 0x18) == 0) goto LAB_03547f94;
        FUN_035adae4(lVar29 + 0x20,1,0);
      }
      if (unaff_x19[0x7b] != 0) {
        FUN_0374ff44(unaff_x19[0x7b],0);
        if ((unaff_x19[0x74] != 0) && (lVar29 = *(long *)(unaff_x19[0x74] + 0x60), lVar29 != 0)) {
          if (*(int *)(lVar29 + 0x18) == 0) goto LAB_03547f94;
          if (unaff_x19[0x7b] != 0) {
            FUN_0374e6ec(unaff_x19[0x7b],*(undefined8 *)(lVar29 + 0x30),0);
            if ((unaff_x19[0x74] != 0) && (lVar29 = *(long *)(unaff_x19[0x74] + 0x60), lVar29 != 0))
            {
              if (*(int *)(lVar29 + 0x18) == 0) goto LAB_03547f94;
              if (unaff_x19[0x7b] != 0) {
                FUN_0374f200(unaff_x19[0x7b],0,*(undefined8 *)(lVar29 + 0x48),0);
                if ((unaff_x19[0x74] != 0) &&
                   (lVar29 = *(long *)(unaff_x19[0x74] + 0x60), lVar29 != 0)) {
                  if (*(int *)(lVar29 + 0x18) == 0) goto LAB_03547f94;
                  if (unaff_x19[0x7b] != 0) {
                    FUN_0374e904(unaff_x19[0x7b],*(undefined8 *)(lVar29 + 0x50),0);
                    if ((unaff_x19[0x74] != 0) &&
                       (lVar29 = *(long *)(unaff_x19[0x74] + 0x60), lVar29 != 0)) {
                      if (*(int *)(lVar29 + 0x18) == 0) goto LAB_03547f94;
                      if (unaff_x19[0x7b] != 0) {
                        FUN_0374e9b8(unaff_x19[0x7b],*(undefined8 *)(lVar29 + 0x58),0);
                        if (unaff_x19[0x7b] != 0) {
                          FUN_0374fe84(unaff_x19[0x7b],0);
                          lVar29 = unaff_x19[0x74];
                          if (lVar29 != 0) {
                            lVar39 = 0;
                            lVar33 = 0;
                            do {
                              uVar43 = lVar33 + 1;
                              if ((long)*(int *)(lVar29 + 0x34) <= (long)uVar43) goto LAB_035453f0;
                              lVar29 = *(long *)(lVar29 + 0x60);
                              if (lVar29 == 0) break;
                              if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                                thunk_FUN_01cb0d4c();
                              }
                              if (*(uint *)(lVar29 + 0x18) <= uVar43) goto LAB_03547f94;
                              FUN_035ad9c0(lVar29 + lVar39 + 0x70,0);
                              lVar29 = unaff_x19[0xe4];
                              if (lVar29 == 0) break;
                              if (*(uint *)(lVar29 + 0x18) <= uVar43) goto LAB_03547f94;
                              uVar21 = *(undefined8 *)(lVar29 + lVar33 * 8 + 0x28);
                              if (*(int *)(*(long *)PTR_DAT_03cb5a80 + 0xe4) == 0) {
                                thunk_FUN_01cb0d4c();
                              }
                              uVar23 = FUN_0377201c(uVar21,0,0);
                              if ((uVar23 & 1) == 0) {
                                if (*(int *)((long)unaff_x19 + 0x354) != 0) {
                                  if ((unaff_x19[0x74] == 0) ||
                                     (lVar29 = *(long *)(unaff_x19[0x74] + 0x60), lVar29 == 0))
                                  break;
                                  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                                    thunk_FUN_01cb0d4c();
                                  }
                                  if (*(uint *)(lVar29 + 0x18) <= uVar43) goto LAB_03547f94;
                                  FUN_035adae4(lVar29 + lVar39 + 0x70,1,0);
                                }
                                lVar29 = unaff_x19[0xe4];
                                if (lVar29 == 0) break;
                                if (*(uint *)(lVar29 + 0x18) <= uVar43) goto LAB_03547f94;
                                lVar29 = *(long *)(lVar29 + lVar33 * 8 + 0x28);
                                if (lVar29 == 0) break;
                                lVar29 = FUN_035b6b9c(lVar29,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar24 = *(long *)(unaff_x19[0x74] + 0x60), lVar24 == 0)) break;
                                if (*(uint *)(lVar24 + 0x18) <= uVar43) goto LAB_03547f94;
                                if (lVar29 == 0) break;
                                FUN_0374e6ec(lVar29,*(undefined8 *)(lVar24 + lVar39 + 0x80),0);
                                lVar29 = unaff_x19[0xe4];
                                if (lVar29 == 0) break;
                                if (*(uint *)(lVar29 + 0x18) <= uVar43) goto LAB_03547f94;
                                lVar29 = *(long *)(lVar29 + lVar33 * 8 + 0x28);
                                if (lVar29 == 0) break;
                                lVar29 = FUN_035b6b9c(lVar29,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar24 = *(long *)(unaff_x19[0x74] + 0x60), lVar24 == 0)) break;
                                if (*(uint *)(lVar24 + 0x18) <= uVar43) goto LAB_03547f94;
                                if (lVar29 == 0) break;
                                FUN_0374f200(lVar29,0,*(undefined8 *)(lVar24 + lVar39 + 0x98),0);
                                lVar29 = unaff_x19[0xe4];
                                if (lVar29 == 0) break;
                                if (*(uint *)(lVar29 + 0x18) <= uVar43) goto LAB_03547f94;
                                lVar29 = *(long *)(lVar29 + lVar33 * 8 + 0x28);
                                if (lVar29 == 0) break;
                                lVar29 = FUN_035b6b9c(lVar29,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar24 = *(long *)(unaff_x19[0x74] + 0x60), lVar24 == 0)) break;
                                if (*(uint *)(lVar24 + 0x18) <= uVar43) goto LAB_03547f94;
                                if (lVar29 == 0) break;
                                FUN_0374e904(lVar29,*(undefined8 *)(lVar24 + lVar39 + 0xa0),0);
                                lVar29 = unaff_x19[0xe4];
                                if (lVar29 == 0) break;
                                if (*(uint *)(lVar29 + 0x18) <= uVar43) goto LAB_03547f94;
                                lVar29 = *(long *)(lVar29 + lVar33 * 8 + 0x28);
                                if (lVar29 == 0) break;
                                lVar29 = FUN_035b6b9c(lVar29,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar24 = *(long *)(unaff_x19[0x74] + 0x60), lVar24 == 0)) break;
                                if (*(uint *)(lVar24 + 0x18) <= uVar43) goto LAB_03547f94;
                                if (lVar29 == 0) break;
                                FUN_0374e9b8(lVar29,*(undefined8 *)(lVar24 + lVar39 + 0xa8),0);
                                lVar29 = unaff_x19[0xe4];
                                if (lVar29 == 0) break;
                                if (*(uint *)(lVar29 + 0x18) <= uVar43) goto LAB_03547f94;
                                lVar29 = *(long *)(lVar29 + lVar33 * 8 + 0x28);
                                if ((lVar29 == 0) || (lVar29 = FUN_035b6b9c(lVar29,0), lVar29 == 0))
                                break;
                                FUN_0374fe84(lVar29,0);
                              }
                              lVar29 = unaff_x19[0x74];
                              lVar33 = lVar33 + 1;
                              lVar39 = lVar39 + 0x50;
                            } while (lVar29 != 0);
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
LAB_03547e54:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


