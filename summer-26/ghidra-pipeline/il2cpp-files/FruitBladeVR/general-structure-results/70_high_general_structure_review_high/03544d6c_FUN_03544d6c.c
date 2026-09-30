/*
FUNCTION_NAME: FUN_03544d6c
ENTRY_POINT: 03544d6c
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


void FUN_03544d6c(undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

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
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  undefined1 uVar25;
  char cVar26;
  long *plVar27;
  long lVar28;
  undefined8 *puVar29;
  code *pcVar30;
  uint uVar31;
  long lVar32;
  float *pfVar33;
  long lVar34;
  float *pfVar35;
  long lVar36;
  long lVar37;
  long *unaff_x19;
  ulong uVar38;
  undefined8 *unaff_x20;
  int *piVar39;
  uint unaff_w23;
  uint uVar40;
  long *unaff_x24;
  undefined8 *unaff_x25;
  ulong uVar41;
  uint uVar42;
  uint uVar43;
  long *plVar44;
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
  uint in_stack_00001278;
  undefined4 in_stack_00001280;
  float in_stack_00001284;
  float in_stack_00001288;
  float in_stack_0000128c;
  float in_stack_00001290;
  undefined8 in_stack_00001298;
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
  
  uVar41 = _uStack0000000000000070;
  puVar29 = unaff_x20;
  plVar27 = unaff_x24;
  plVar44 = unaff_x28;
  uVar20 = in_stack_00001298;
code_r0x03544d6c:
  do {
    lVar28 = unaff_x19[0x91];
    in_stack_00001278 = in_stack_00001278 + 1;
    if (lVar28 == 0) goto LAB_03547e54;
    if ((int)*(uint *)(lVar28 + 0x18) <= (int)in_stack_00001278) {
LAB_0354526c:
      if ((char)unaff_x19[0x4c] == '\0') {
LAB_03545334:
        iVar16 = *(int *)((long)unaff_x19 + 0x26c);
        iVar19 = (int)unaff_x19[0x4e];
      }
      else {
        param_3 = *(float *)((long)unaff_x19 + 0x264);
        param_2 = ZEXT416((uint)DAT_00b46040);
        if (param_3 - *(float *)(unaff_x19 + 0x4d) <= DAT_00b46040) goto LAB_03545334;
        fVar48 = *(float *)((long)unaff_x19 + 0x20c);
        fVar63 = *(float *)((long)unaff_x19 + 0x27c);
        param_2 = ZEXT416((uint)fVar63);
        iVar16 = *(int *)((long)unaff_x19 + 0x26c);
        iVar19 = (int)unaff_x19[0x4e];
        if ((fVar48 < fVar63) && (iVar16 < iVar19)) {
          if (*(float *)(unaff_x19 + 0x60) < *(float *)((long)unaff_x19 + 0x2fc) / 100.0) {
            *(undefined4 *)(unaff_x19 + 0x60) = 0;
          }
          fVar66 = DAT_00b45f9c;
          *(float *)(unaff_x19 + 0x4d) = fVar48;
          fVar49 = (param_3 - fVar48) * 0.5;
          if (fVar49 <= fVar66) {
            fVar49 = fVar66;
          }
          fVar66 = (fVar48 + fVar49) * 20.0 + 0.5;
          fVar48 = DAT_00b4601c;
          if (fVar66 != INFINITY) {
            fVar48 = (float)(int)fVar66 / 20.0;
          }
          if (fVar63 <= fVar48) {
            fVar48 = fVar63;
          }
          goto LAB_0354532c;
        }
      }
      *(undefined1 *)((long)unaff_x19 + 0x274) = 1;
      if (iVar19 <= iVar16) {
        uVar20 = FUN_0306bb4c((long)unaff_x19 + 0x26c,0);
        uVar21 = FUN_0307fce0((long)unaff_x19 + 0x20c,0);
        uVar20 = FUN_02f7b9a8(*(undefined8 *)PTR_DAT_03cde840,uVar20,*(undefined8 *)PTR_DAT_03cde828
                              ,uVar21,0);
        if (*(int *)(*plVar44 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c(*plVar44);
        }
        FUN_03735a64(uVar20,0);
      }
      if ((*(int *)(puVar29 + 7) == 0) || ((*(int *)(puVar29 + 7) == 1 && (in_stack_000012ac == 3)))
         ) {
        (**(code **)(*unaff_x19 + 0x958))();
        goto LAB_035453f0;
      }
      lVar28 = *plVar27;
      if (*(int *)(lVar28 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        lVar28 = *plVar27;
      }
      lVar28 = **(long **)(lVar28 + 0xb8);
      if (lVar28 == 0) goto LAB_03547e54;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_03547f94;
      iVar16 = *(int *)(lVar28 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x38 + 0x54) << 2;
      if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x60), lVar28 == 0))
      goto LAB_03547e54;
      if (*(int *)(*(long *)PTR_DAT_03cde750 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      if (*(int *)(lVar28 + 0x18) == 0) goto LAB_03547f94;
      FUN_035ad898(lVar28 + 0x20,0,0);
      fStack00000000000000b0 = (float)FUN_03547fd0(0);
      iVar19 = (int)unaff_x19[0x53];
      lVar28 = unaff_x19[0xee];
      in_stack_000000a8._4_4_ = param_3;
      if (iVar19 < 0x401) {
        if (iVar19 == 0x100) {
          if ((int)unaff_x19[0x62] == 5) {
            if (lVar28 == 0) goto LAB_03547e54;
            if ((*(uint *)(lVar28 + 0x18) & 0xfffffffe) == 0) goto LAB_03547f94;
            if ((unaff_x19[0x74] == 0) || (lVar32 = *(long *)(unaff_x19[0x74] + 0x58), lVar32 == 0))
            goto LAB_03547e54;
            if (*(uint *)(lVar32 + 0x18) <= uStack000000000000005c) goto LAB_03547f94;
            fVar48 = *(float *)(lVar32 + (long)(int)uStack000000000000005c * 0x14 + 0x28);
          }
          else {
            if (lVar28 == 0) goto LAB_03547e54;
            if ((*(uint *)(lVar28 + 0x18) & 0xfffffffe) == 0) goto LAB_03547f94;
            fVar48 = *(float *)((long)unaff_x19 + 0x4cc);
          }
          in_stack_000000a8._4_4_ = *(float *)(lVar28 + 0x34);
          fStack000000000000002c = (0.0 - fVar48) - fStack0000000000000028;
          param_3 = *(float *)(lVar28 + 0x2c);
          fVar48 = *(float *)(lVar28 + 0x30);
LAB_035457ec:
          param_3 = in_stack_00000030 + 0.0 + param_3;
          fVar48 = fVar48 + fStack000000000000002c;
        }
        else {
          if (iVar19 != 0x200) {
            if (iVar19 != 0x400) goto LAB_03545800;
            if ((int)unaff_x19[0x62] == 5) {
              if (lVar28 == 0) goto LAB_03547e54;
              if (*(int *)(lVar28 + 0x18) == 0) goto LAB_03547f94;
              if ((unaff_x19[0x74] == 0) ||
                 (lVar32 = *(long *)(unaff_x19[0x74] + 0x58), lVar32 == 0)) goto LAB_03547e54;
              if (*(uint *)(lVar32 + 0x18) <= uStack000000000000005c) goto LAB_03547f94;
              in_stack_000012a8 =
                   *(float *)(lVar32 + (long)(int)uStack000000000000005c * 0x14 + 0x30);
            }
            else {
              if (lVar28 == 0) goto LAB_03547e54;
              if (*(int *)(lVar28 + 0x18) == 0) goto LAB_03547f94;
            }
            in_stack_000000a8._4_4_ = *(float *)(lVar28 + 0x28);
            fStack000000000000002c = fStack000000000000002c + (0.0 - in_stack_000012a8);
            param_3 = *(float *)(lVar28 + 0x20);
            fVar48 = *(float *)(lVar28 + 0x24);
            goto LAB_035457ec;
          }
          if ((int)unaff_x19[0x62] != 5) {
            if (lVar28 != 0) {
              if ((*(int *)(lVar28 + 0x18) != 1) && (*(int *)(lVar28 + 0x18) != 0)) {
                fVar48 = *(float *)((long)unaff_x19 + 0x4cc);
                goto LAB_03545720;
              }
              goto LAB_03547f94;
            }
            goto LAB_03547e54;
          }
          if (lVar28 == 0) goto LAB_03547e54;
          if ((*(int *)(lVar28 + 0x18) == 1) || (*(int *)(lVar28 + 0x18) == 0)) goto LAB_03547f94;
          if ((unaff_x19[0x74] == 0) || (lVar32 = *(long *)(unaff_x19[0x74] + 0x58), lVar32 == 0))
          goto LAB_03547e54;
          if (*(uint *)(lVar32 + 0x18) <= uStack000000000000005c) goto LAB_03547f94;
          lVar32 = lVar32 + (long)(int)uStack000000000000005c * 0x14;
          in_stack_000000a8._4_4_ = (*(float *)(lVar28 + 0x28) + *(float *)(lVar28 + 0x34)) * 0.5;
          param_3 = in_stack_00000030 + 0.0 +
                    ((float)*(undefined8 *)(lVar28 + 0x20) + (float)*(undefined8 *)(lVar28 + 0x2c))
                    * 0.5;
          fVar48 = (0.0 - ((fStack0000000000000028 + *(float *)(lVar32 + 0x28) +
                           *(float *)(lVar32 + 0x30)) - fStack000000000000002c) * 0.5) +
                   ((float)((ulong)*(undefined8 *)(lVar28 + 0x20) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(lVar28 + 0x2c) >> 0x20)) * 0.5;
        }
        in_stack_000000a8._4_4_ = in_stack_000000a8._4_4_ + 0.0;
        param_2 = ZEXT416((uint)fVar48);
        fStack00000000000000b0 = param_3;
      }
      else if (iVar19 == 0x800) {
        if (lVar28 == 0) goto LAB_03547e54;
        if ((*(int *)(lVar28 + 0x18) == 1) || (*(int *)(lVar28 + 0x18) == 0)) goto LAB_03547f94;
        param_3 = (*(float *)(lVar28 + 0x28) + *(float *)(lVar28 + 0x34)) * 0.5;
        fStack00000000000000b0 =
             ((float)*(undefined8 *)(lVar28 + 0x20) + (float)*(undefined8 *)(lVar28 + 0x2c)) * 0.5 +
             in_stack_00000030 + 0.0;
        in_stack_000000a8._4_4_ = param_3 + 0.0;
        param_2 = ZEXT416((uint)(((float)((ulong)*(undefined8 *)(lVar28 + 0x20) >> 0x20) +
                                 (float)((ulong)*(undefined8 *)(lVar28 + 0x2c) >> 0x20)) * 0.5 + 0.0
                                ));
      }
      else {
        if (iVar19 == 0x1000) {
          if (lVar28 == 0) goto LAB_03547e54;
          if ((*(int *)(lVar28 + 0x18) == 1) || (*(int *)(lVar28 + 0x18) == 0)) goto LAB_03547f94;
          fVar48 = *(float *)((long)unaff_x19 + 0x4fc);
          in_stack_000012a8 = *(float *)((long)unaff_x19 + 0x4f4);
LAB_03545720:
          fStack0000000000000028 = fStack0000000000000028 + fVar48 + in_stack_000012a8;
        }
        else {
          if (iVar19 != 0x2000) goto LAB_03545800;
          if (lVar28 == 0) goto LAB_03547e54;
          if ((*(int *)(lVar28 + 0x18) == 1) || (*(int *)(lVar28 + 0x18) == 0)) goto LAB_03547f94;
          fStack0000000000000028 = *(float *)(unaff_x19 + 0x9a) - fStack0000000000000028;
        }
        param_3 = in_stack_00000030 + 0.0;
        param_2._0_4_ =
             ((float)*(undefined8 *)(lVar28 + 0x24) + (float)*(undefined8 *)(lVar28 + 0x30)) * 0.5 +
             (0.0 - (fStack0000000000000028 - fStack000000000000002c) * 0.5);
        param_2._4_4_ =
             ((float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
             (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20)) * 0.5 + 0.0;
        param_2._8_8_ = 0;
        fStack00000000000000b0 =
             param_3 + (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
        in_stack_000000a8._4_4_ = param_2._4_4_;
      }
LAB_03545800:
      auVar56 = param_2;
      in_stack_00000100 = (float)FUN_03547fd0(0);
      auVar58 = auVar56;
      FUN_03547fd0(0);
      lVar28 = UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_000008E8_PostfixBurstDelegate__Invoke
                         ();
      if (lVar28 != 0) {
        FUN_03780b0c(lVar28,0);
        *(float *)((long)unaff_x19 + 0x6fc) = auVar58._0_4_;
        uStack000000000000007c =
             FUN_03548014(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
        FUN_03548014(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
        if (*(int *)(*(long *)PTR_DAT_03cde758 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c(*(long *)PTR_DAT_03cde758);
        }
        FUN_03548304(0);
        FUN_03563d1c(&stack0x00001280,0x4000ffff,0);
        if (*(int *)(*plVar27 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        lVar28 = unaff_x19[0x74];
        if (lVar28 != 0) {
          iVar19 = *(int *)(in_stack_000001a0 + 7);
          if (iVar19 < 1) {
            fStack00000000000000dc = 0.0;
            iVar18 = 0;
            goto LAB_03547a18;
          }
          lVar28 = *(long *)(lVar28 + 0x38);
          if (lVar28 != 0) {
            fStack0000000000000190 = param_2._0_4_;
            fVar48 = 0.0;
            bVar8 = false;
            uVar17 = 0;
            uVar13 = 0;
            lVar32 = lVar28 + 0x20;
            fStack0000000000000120 = *(float *)(*(long *)(*plVar27 + 0xb8) + 0x1730);
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
            uVar14 = 0;
            fStack00000000000000f0 = param_3;
            break;
          }
        }
      }
      goto LAB_03547e54;
    }
    if (*(uint *)(lVar28 + 0x18) <= in_stack_00001278) goto LAB_03547f94;
    uVar13 = *(uint *)(lVar28 + (long)(int)in_stack_00001278 * 0x10 + 0x24);
    if (uVar13 == 0) goto LAB_0354526c;
    if (5 < unaff_w29) {
      uVar20 = FUN_03088cbc(&stack0x000012ac,0);
      uVar21 = FUN_0306bb4c(&stack0x00001278,0);
      uVar20 = FUN_02f7b9a8(*(undefined8 *)PTR_DAT_03cde820,uVar20,*(undefined8 *)PTR_DAT_03cde830,
                            uVar21,0);
      if (*(int *)(*plVar44 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c(*plVar44);
      }
      FUN_03735f98(uVar20,0);
      uVar20 = CONCAT44(3,*(undefined4 *)(puVar29 + 7));
    }
    in_stack_000012ac = uVar13;
    if (uVar13 != 0x1a) {
      if ((uVar13 == 0x3c) && (*(char *)((long)unaff_x19 + 0x33a) != '\0')) {
        *(undefined1 *)((long)unaff_x19 + 0x469) = 1;
        *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
        uVar22 = FUN_0358fa60();
        if (((uVar22 & 1) != 0) &&
           (in_stack_00001278 = in_stack_0000124c, *(int *)((long)unaff_x19 + 0x65c) == 0))
        goto code_r0x03544d6c;
      }
      else {
        if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
        goto LAB_03547e54;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)(puVar29 + 7)) goto LAB_03547f94;
        lVar28 = lVar28 + (long)(int)*(uint *)(puVar29 + 7) * (long)(int)unaff_w23;
        *(undefined4 *)((long)unaff_x19 + 0x65c) = *(undefined4 *)(lVar28 + 0x20);
        *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar28 + 0x50);
        unaff_x19[0x20] = *(long *)(lVar28 + 0x40);
        thunk_FUN_01cc8040(unaff_x19 + 0x20);
      }
      if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
      goto LAB_03547e54;
      uVar17 = *(uint *)(puVar29 + 7);
      if (*(uint *)(lVar28 + 0x18) <= uVar17) goto LAB_03547f94;
      lVar32 = lVar28 + 0x20;
      uVar40 = (uint)uVar20;
      lVar36 = unaff_x19[0x24];
      cVar26 = *(char *)(lVar32 + (long)(int)uVar17 * (long)(int)unaff_w23 + 0x34);
      *(undefined1 *)((long)unaff_x19 + 0x469) = 0;
      uVar14 = uVar17;
      if (uVar40 == uVar17) {
        uVar13 = (uint)((ulong)uVar20 >> 0x20);
        *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
        if (uVar13 == 0x2026) {
          *(long *)(lVar32 + (long)(int)uVar17 * (long)(int)unaff_w23 + 0x10) = unaff_x19[0xcd];
          thunk_FUN_01cc8040();
          if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
          goto LAB_03547e54;
          if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
          lVar28 = lVar28 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
          *(long *)(lVar28 + 0x40) = unaff_x19[0xce];
          *(undefined4 *)(lVar28 + 0x20) = 0;
          thunk_FUN_01cc8040();
          if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
          goto LAB_03547e54;
          if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
          *(long *)(lVar28 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23 +
                   0x48) = unaff_x19[0xcf];
          thunk_FUN_01cc8040();
          if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
          goto LAB_03547e54;
          if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
          *(int *)(lVar28 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23 +
                  0x50) = (int)unaff_x19[0xd0];
          puVar9 = PTR_DAT_03cde808;
          lVar28 = *(long *)PTR_DAT_03cde808;
          if (*(int *)(lVar28 + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
            lVar28 = *(long *)puVar9;
          }
          lVar28 = **(long **)(lVar28 + 0xb8);
          if (lVar28 == 0) goto LAB_03547e54;
          if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_03547f94;
          lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x38;
          *(int *)(lVar28 + 0x54) = *(int *)(lVar28 + 0x54) + 1;
          *(undefined1 *)(unaff_x19 + 0x65) = 1;
          uVar20 = CONCAT44(3,*(uint *)((long)unaff_x19 + 0x4a4) + 1);
          uVar14 = *(uint *)((long)unaff_x19 + 0x4a4);
        }
        else if (uVar13 == 3) {
          if ((unaff_x19[0x20] == 0) || (lVar23 = FUN_0356be60(unaff_x19[0x20],0), lVar23 == 0))
          goto LAB_03547e54;
          uVar21 = FUN_026d18d0(lVar23,3,*(undefined8 *)PTR_DAT_03cde728);
          if (*(uint *)(lVar28 + 0x18) <= uVar17) goto LAB_03547f94;
          *(undefined8 *)(lVar32 + (long)(int)uVar17 * (long)(int)unaff_w23 + 0x10) = uVar21;
          thunk_FUN_01cc8040();
          *(undefined1 *)(unaff_x19 + 0x65) = 1;
          uVar14 = *(uint *)((long)unaff_x19 + 0x4a4);
        }
      }
      plVar27 = (long *)PTR_DAT_03cde808;
      puVar29 = in_stack_000001a0;
      in_stack_000012ac = uVar13;
      if ((*(int *)((long)unaff_x19 + 0x35c) <= (int)uVar14) || (uVar13 == 3)) {
        iVar16 = *(int *)((long)unaff_x19 + 0x65c);
        if (iVar16 == 0) {
          uVar14 = *(uint *)((long)unaff_x19 + 0x284);
          if ((uVar14 >> 4 & 1) == 0) {
            if ((uVar14 >> 3 & 1) == 0) {
              fStack0000000000000138 = 1.0;
              if ((uVar14 >> 5 & 1) != 0) {
                if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_01cb0d4c();
                }
                uVar22 = FUN_02f93b6c(uVar13,0);
                if ((uVar22 & 1) != 0) {
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
              uVar22 = FUN_02f93acc(uVar13,0);
              fStack0000000000000138 = 1.0;
              if ((uVar22 & 1) != 0) {
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
            uVar22 = FUN_02f93b6c(uVar13,0);
            fStack0000000000000138 = 1.0;
            if ((uVar22 & 1) != 0) {
              if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
                thunk_FUN_01cb0d4c();
              }
              uVar13 = FUN_02f93d74(uVar13,0);
LAB_035416e0:
              uVar13 = uVar13 & 0xffff;
            }
          }
          iVar16 = *(int *)((long)unaff_x19 + 0x65c);
          in_stack_000012ac = uVar13;
          if (iVar16 != 0) goto LAB_035410b4;
LAB_035416f0:
          if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
          goto LAB_03547e54;
          if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
          *in_stack_00000160 =
               *(long *)(lVar28 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23
                        + 0x30);
          thunk_FUN_01cc8040(in_stack_00000160);
          plVar27 = (long *)PTR_DAT_03cde808;
          if (*in_stack_00000160 == 0) goto code_r0x03544d6c;
          if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
          goto LAB_03547e54;
          if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
          unaff_x19[0x20] =
               *(long *)(lVar28 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23
                        + 0x40);
          thunk_FUN_01cc8040(unaff_x19 + 0x20);
          if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
          goto LAB_03547e54;
          if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
          unaff_x19[0x23] =
               *(long *)(lVar28 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23
                        + 0x48);
          thunk_FUN_01cc8040(unaff_x19 + 0x23);
          if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
          goto LAB_03547e54;
          uVar14 = *(uint *)(in_stack_000001a0 + 7);
          uVar13 = *(uint *)(lVar28 + 0x18);
          if (uVar13 <= uVar14) goto LAB_03547f94;
          *(undefined4 *)(unaff_x19 + 0x24) =
               *(undefined4 *)(lVar28 + 0x20 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x30);
          if (uVar40 == uVar17) {
            lVar32 = unaff_x19[0x91];
            if (lVar32 == 0) goto LAB_03547e54;
            if (*(uint *)(lVar32 + 0x18) <= in_stack_00001278) goto LAB_03547f94;
            if ((*(int *)(lVar32 + (long)(int)in_stack_00001278 * 0x10 + 0x24) != 10) ||
               (uVar14 == *(uint *)(unaff_x19 + 0x95))) goto LAB_03541808;
            if (uVar13 <= uVar14 - 1) goto LAB_03547f94;
            lVar32 = unaff_x19[0x20];
            if (lVar32 == 0) goto LAB_03547e54;
            fVar48 = *(float *)(lVar28 + 0x20 + (long)(int)(uVar14 - 1) * (long)(int)unaff_w23 +
                               0x38);
          }
          else {
LAB_03541808:
            lVar32 = unaff_x19[0x20];
            if (lVar32 == 0) goto LAB_03547e54;
            fVar48 = *(float *)(unaff_x19 + 0x42);
          }
          fVar63 = (float)FUN_03805444(lVar32 + 0x28,0);
          if (unaff_x19[0x20] == 0) goto LAB_03547e54;
          fVar49 = (float)FUN_0380544c(unaff_x19[0x20] + 0x28,0);
          fVar66 = in_stack_000000e0;
          if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
            fVar66 = unaff_s14;
          }
          if (uVar40 == uVar17) {
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
          lVar28 = unaff_x19[0xcc];
          if ((lVar28 == 0) || (*(long *)(lVar28 + 0x20) == 0)) goto LAB_03547e54;
          fVar68 = *(float *)((long)unaff_x19 + 0x43c);
          fVar61 = *(float *)(lVar28 + 0x2c);
          param_3 = (float)FUN_03805944(*(long *)(lVar28 + 0x20),0);
          if (unaff_x19[0x20] == 0) goto LAB_03547e54;
          fVar50 = (float)FUN_0380549c(unaff_x19[0x20] + 0x28,0);
          if (unaff_x19[0x20] == 0) goto LAB_03547e54;
          fVar52 = *(float *)((long)unaff_x19 + 0x43c);
          fStack000000000000016c = (float)FUN_0380544c(unaff_x19[0x20] + 0x28,0);
          lVar28 = unaff_x19[0x74];
          if ((lVar28 == 0) || (lVar32 = *(long *)(lVar28 + 0x38), lVar32 == 0)) goto LAB_03547e54;
          if (*(uint *)(lVar32 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
          lVar32 = lVar32 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
          *(undefined4 *)(lVar32 + 0x20) = 0;
          fVar66 = ((fStack0000000000000138 * fVar48) / fVar63) * fVar49 * fVar66;
          param_3 = fVar66 * fVar68 * fVar61 * param_3;
          fStack000000000000016c = fVar66 * fVar50 * fVar52 * fStack000000000000016c;
          *(float *)(lVar32 + 0x15c) = param_3;
          uVar13 = *(uint *)(unaff_x19 + 0x24);
          if (uVar13 == 0) {
            unaff_s13 = *(float *)(unaff_x19 + 0xc6);
          }
          else {
            lVar32 = unaff_x19[0xe4];
            if (lVar32 == 0) goto LAB_03547e54;
            if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_03547f94;
            lVar32 = *(long *)(lVar32 + (long)(int)uVar13 * 8 + 0x20);
            if (lVar32 == 0) goto LAB_03547e54;
            unaff_s13 = *(float *)(lVar32 + 0x54);
          }
LAB_035419a4:
          unaff_s14 = 1.0;
          unaff_s15 = 0.0;
          unaff_s12 = 0.0;
          if (in_stack_000012ac != 3 && in_stack_000012ac != 0xad) {
            unaff_s12 = param_3;
          }
        }
        else {
          fStack0000000000000138 = 1.0;
          if (iVar16 == 0) goto LAB_035416f0;
LAB_035410b4:
          if (iVar16 == 1) {
            lVar28 = FUN_0358888c();
            if ((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 0x38), lVar28 != 0)) {
              if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
              plVar44 = *(long **)(lVar28 + (long)(int)*(uint *)(in_stack_000001a0 + 7) *
                                            (long)(int)unaff_w23 + 0x30);
              if (plVar44 != (long *)0x0) {
                bVar11 = *(byte *)(*(long *)PTR_DAT_03cde770 + 0x130);
                if ((*(byte *)(*plVar44 + 0x130) < bVar11) ||
                   (*(long *)(*(long *)(*plVar44 + 200) + (ulong)bVar11 * 8 + -8) !=
                    *(long *)PTR_DAT_03cde770)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5cf54(plVar44);
                }
                plVar27 = (long *)plVar44[3];
                if (plVar27 == (long *)0x0) {
                  plVar27 = (long *)0x0;
                  *_iStack0000000000000060 = 0;
                }
                else {
                  lVar28 = *(long *)PTR_DAT_03cde768;
                  bVar11 = *(byte *)(lVar28 + 0x130);
                  if (*(byte *)(*plVar27 + 0x130) < bVar11) {
                    plVar45 = (long *)0x0;
                  }
                  else {
                    plVar45 = plVar27;
                    if (*(long *)(*(long *)(*plVar27 + 200) + (ulong)bVar11 * 8 + -8) != lVar28) {
                      plVar45 = (long *)0x0;
                    }
                  }
                  *_iStack0000000000000060 = (long)plVar45;
                  if (*(byte *)(*plVar27 + 0x130) < bVar11) {
                    plVar27 = (long *)0x0;
                  }
                  else if (*(long *)(*(long *)(*plVar27 + 200) + (ulong)bVar11 * 8 + -8) != lVar28)
                  {
                    plVar27 = (long *)0x0;
                  }
                }
                thunk_FUN_01cc8040(_iStack0000000000000060,plVar27);
                lVar28 = plVar44[5];
                *(int *)((long)unaff_x19 + 0x6bc) = (int)lVar28;
                puVar9 = PTR_DAT_03cde808;
                if (in_stack_000012ac == 0x3c) {
                  in_stack_000012ac = (int)lVar28 + 0xe000;
                }
                else {
                  lVar28 = *(long *)PTR_DAT_03cde808;
                  if (*(int *)(lVar28 + 0xe4) == 0) {
                    thunk_FUN_01cb0d4c();
                    lVar28 = *(long *)puVar9;
                  }
                  *(undefined4 *)((long)unaff_x19 + 0x1d4) =
                       *(undefined4 *)(*(long *)(lVar28 + 0xb8) + 0x68);
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
                      fVar66 = unaff_s14;
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
                        fStack0000000000000124 = unaff_s14;
                      }
                      if (unaff_x19[0x20] == 0) goto LAB_03547e54;
                      fVar61 = (float)FUN_03805474(unaff_x19[0x20] + 0x28,0);
                      if (plVar44[4] == 0) goto LAB_03547e54;
                      FUN_03805908(&stack0x000012b0,plVar44[4],0);
                      fVar68 = (float)FUN_03805738(&stack0x000011c0,0);
                      if (plVar44[4] == 0) goto LAB_03547e54;
                      fVar52 = *(float *)((long)plVar44 + 0x2c);
                      fVar50 = (float)FUN_03805944(plVar44[4],0);
                      if (unaff_x19[0x20] == 0) goto LAB_03547e54;
                      fVar51 = (float)FUN_03805474(unaff_x19[0x20] + 0x28,0);
                      if (unaff_x19[0x20] == 0) goto LAB_03547e54;
                      fVar69 = (float)FUN_0380549c(unaff_x19[0x20] + 0x28,0);
                      if (unaff_x19[0x20] == 0) goto LAB_03547e54;
                      fVar62 = *(float *)((long)unaff_x19 + 0x43c);
                      fStack000000000000016c = (float)FUN_0380544c(unaff_x19[0x20] + 0x28,0);
                      if (unaff_x19[0x20] == 0) goto LAB_03547e54;
                      fStack0000000000000124 = (fVar63 / fVar48) * fVar49 * fStack0000000000000124;
                      param_3 = fStack0000000000000124 * (fVar61 / fVar68) * fVar52 * fVar50;
                      fStack0000000000000124 = fStack0000000000000124 / param_3;
                      fStack000000000000016c = fVar66 * fVar69 * fVar62 * fStack000000000000016c;
                      fVar51 = fStack0000000000000124 * fVar51;
                      fVar48 = (float)FUN_038054a4(unaff_x19[0x20] + 0x28,0);
                      fStack0000000000000124 = fStack0000000000000124 * fVar48;
                    }
                    else {
                      if (*_iStack0000000000000060 == 0) goto LAB_03547e54;
                      fVar48 = (float)FUN_03805444(*_iStack0000000000000060 + 0x28,0);
                      if (*_iStack0000000000000060 == 0) goto LAB_03547e54;
                      fVar49 = (float)FUN_0380544c(*_iStack0000000000000060 + 0x28,0);
                      if (plVar44[4] == 0) goto LAB_03547e54;
                      fVar68 = *(float *)((long)plVar44 + 0x2c);
                      fVar61 = in_stack_000000e0;
                      if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
                        fVar61 = unaff_s14;
                      }
                      fVar50 = (float)FUN_03805944(plVar44[4],0);
                      if (unaff_x19[0xd6] == 0) goto LAB_03547e54;
                      fVar51 = (float)FUN_03805474(unaff_x19[0xd6] + 0x28,0);
                      if (*_iStack0000000000000060 == 0) goto LAB_03547e54;
                      fVar52 = (float)FUN_0380549c(*_iStack0000000000000060 + 0x28,0);
                      if (*_iStack0000000000000060 == 0) goto LAB_03547e54;
                      fVar69 = *(float *)((long)unaff_x19 + 0x43c);
                      fStack000000000000016c =
                           (float)FUN_0380544c(*_iStack0000000000000060 + 0x28,0);
                      if (unaff_x19[0xd6] == 0) goto LAB_03547e54;
                      fStack000000000000016c = fVar66 * fVar52 * fVar69 * fStack000000000000016c;
                      param_3 = (fVar63 / fVar48) * fVar49 * fVar61 * fVar68 * fVar50;
                      fStack0000000000000124 = (float)FUN_038054a4(unaff_x19[0xd6] + 0x28,0);
                    }
                    unaff_x19[0xcc] = (long)plVar44;
                    thunk_FUN_01cc8040(in_stack_00000160,plVar44);
                    if ((unaff_x19[0x74] != 0) &&
                       (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 != 0)) {
                      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001a0 + 7))
                      goto LAB_03547f94;
                      lVar28 = lVar28 + (long)(int)*(uint *)(in_stack_000001a0 + 7) *
                                        (long)(int)unaff_w23;
                      *(long *)(lVar28 + 0x40) = unaff_x19[0x20];
                      *(undefined4 *)(lVar28 + 0x20) = 1;
                      *(float *)(lVar28 + 0x15c) = param_3;
                      thunk_FUN_01cc8040();
                      lVar28 = unaff_x19[0x74];
                      if ((lVar28 != 0) && (lVar32 = *(long *)(lVar28 + 0x38), lVar32 != 0)) {
                        if (*(uint *)(in_stack_000001a0 + 7) < *(uint *)(lVar32 + 0x18)) {
                          unaff_s13 = 0.0;
                          *(int *)(lVar32 + (long)(int)*(uint *)(in_stack_000001a0 + 7) *
                                            (long)(int)unaff_w23 + 0x50) = (int)unaff_x19[0x24];
                          *(int *)(unaff_x19 + 0x24) = (int)lVar36;
                          goto LAB_035419a4;
                        }
                        goto LAB_03547f94;
                      }
                    }
                  }
                }
              }
            }
            goto LAB_03547e54;
          }
          lVar28 = unaff_x19[0x74];
          fVar48 = 0.0;
          if (in_stack_000012ac != 3 && in_stack_000012ac != 0xad) {
            fVar48 = unaff_s12;
          }
          fStack000000000000016c = 0.0;
          if (lVar28 == 0) goto LAB_03547e54;
          fVar51 = 0.0;
          fStack0000000000000124 = 0.0;
          param_3 = unaff_s12;
          unaff_s12 = fVar48;
        }
        lVar28 = *(long *)(lVar28 + 0x38);
        if (lVar28 == 0) goto LAB_03547e54;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
        lVar28 = lVar28 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
        *(short *)(lVar28 + 0x24) = (short)in_stack_000012ac;
        *(int *)(lVar28 + 0x58) = (int)unaff_x19[0x42];
        *(int *)(lVar28 + 0x160) = (int)unaff_x19[0xa0];
        if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
        goto LAB_03547e54;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
        *(int *)(lVar28 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23 + 0x164
                ) = (int)unaff_x19[0x2b];
        if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
        goto LAB_03547e54;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
        *(undefined4 *)
         (lVar28 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23 + 0x16c) =
             *(undefined4 *)((long)unaff_x19 + 0x15c);
        if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
        goto LAB_03547e54;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
        lVar28 = lVar28 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
        auVar56 = *_fStack00000000000000b0;
        *(undefined4 *)(lVar28 + 0x188) = *(undefined4 *)_fStack00000000000000b0[1];
        *(long *)(lVar28 + 0x180) = auVar56._8_8_;
        *(long *)(lVar28 + 0x178) = auVar56._0_8_;
        if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
        goto LAB_03547e54;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
        lVar28 = lVar28 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
        lVar32 = *(long *)(lVar28 + 0x38);
        *(undefined4 *)(lVar28 + 0x18c) = *(undefined4 *)((long)unaff_x19 + 0x284);
        if (lVar32 == 0) {
          if ((*in_stack_00000160 == 0) ||
             (lVar28 = *(long *)(*in_stack_00000160 + 0x20), lVar28 == 0)) goto LAB_03547e54;
          FUN_03805908(&stack0x000012b0,lVar28,0);
          unaff_x25[1] = in_stack_000012b8;
          *unaff_x25 = in_stack_000012b0;
        }
        else {
          FUN_03805908(&stack0x000005a0,lVar32,0);
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
          iVar16 = *(int *)(in_stack_000001a0 + 7);
          uVar14 = *(uint *)(*in_stack_00000160 + 0x28);
          if (iVar16 < (int)uStack000000000000004c) {
            if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
            goto LAB_03547e54;
            uVar15 = iVar16 + 1;
            if (*(uint *)(lVar28 + 0x18) <= uVar15) goto LAB_03547f94;
            if (*(int *)(lVar28 + 0x20 + (long)(int)uVar15 * (long)(int)unaff_w23) == 0) {
              lVar28 = *(long *)(lVar28 + 0x20 + (long)(int)uVar15 * (long)(int)unaff_w23 + 0x10);
              if ((((lVar28 == 0) || (unaff_x19[0x20] == 0)) ||
                  (lVar32 = *(long *)(unaff_x19[0x20] + 0x178), lVar32 == 0)) ||
                 (lVar32 = *(long *)(lVar32 + 0x40), lVar32 == 0)) goto LAB_03547e54;
              uVar22 = FUN_026c20e4(lVar32,uVar14 | *(int *)(lVar28 + 0x28) << 0x10,&stack0x00001190
                                    ,*(undefined8 *)PTR_DAT_03cde710);
              if ((uVar22 & 1) != 0) {
                FUN_03809ff8(&stack0x000012b0,&stack0x00001190,0);
                unaff_x25[0x17b] = in_stack_000012b8;
                unaff_x25[0x17a] = in_stack_000012b0;
                FUN_03809e4c(&stack0x00001170,0);
                uVar22 = FUN_0380a034(&stack0x00001190,0);
                if ((uVar22 & 0x100) != 0) {
                  fVar48 = unaff_s15;
                }
              }
            }
            iVar16 = *(int *)(in_stack_000001a0 + 7);
          }
          if (0 < iVar16) {
            if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
            goto LAB_03547e54;
            if (*(uint *)(lVar28 + 0x18) <= iVar16 - 1U) goto LAB_03547f94;
            lVar28 = *(long *)(lVar28 + (ulong)(iVar16 - 1U) * (ulong)unaff_w23 + 0x30);
            if (lVar28 == 0) goto LAB_03547e54;
            uVar15 = *(uint *)(lVar28 + 0x28);
            lVar28 = FUN_0358888c();
            if ((lVar28 == 0) || (lVar28 = *(long *)(lVar28 + 0x38), lVar28 == 0))
            goto LAB_03547e54;
            if (*(uint *)(lVar28 + 0x18) <= *(int *)(in_stack_000001a0 + 7) - 1U) goto LAB_03547f94;
            if (*(int *)(lVar28 + (long)(int)(*(int *)(in_stack_000001a0 + 7) - 1U) *
                                  (long)(int)unaff_w23 + 0x20) == 0) {
              if (((unaff_x19[0x20] == 0) ||
                  (lVar28 = *(long *)(unaff_x19[0x20] + 0x178), lVar28 == 0)) ||
                 (lVar28 = *(long *)(lVar28 + 0x40), lVar28 == 0)) goto LAB_03547e54;
              uVar22 = FUN_026c20e4(lVar28,uVar15 | uVar14 << 0x10,&stack0x00001190,
                                    *(undefined8 *)PTR_DAT_03cde710);
              if ((uVar22 & 1) != 0) {
                FUN_0380a020(&stack0x000012b0,&stack0x00001190,0);
                unaff_x25[0x17b] = in_stack_000012b8;
                unaff_x25[0x17a] = in_stack_000012b0;
                FUN_03809e4c(&stack0x00001170,0);
                unaff_s14 = 1.0;
                FUN_03809cac(0);
                uVar22 = FUN_0380a034(&stack0x00001190,0);
                if ((uVar22 & 0x100) != 0) {
                  fVar48 = unaff_s15;
                }
              }
            }
          }
        }
        if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
        goto LAB_03547e54;
        uVar14 = *(uint *)(in_stack_000001a0 + 7);
        uVar53 = FUN_03809c88(&stack0x00001250,0);
        if (*(uint *)(lVar28 + 0x18) <= uVar14) goto LAB_03547f94;
        *(undefined4 *)(lVar28 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x154) = uVar53;
        if (*(int *)(*(long *)PTR_DAT_03cde790 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        uVar22 = FUN_035ba358(in_stack_000012ac,0);
        plVar44 = (long *)PTR_DAT_03cde740;
        uVar14 = *(uint *)(in_stack_000001a0 + 7);
        uVar38 = (ulong)uVar14;
        if ((uVar22 & 1) == 0) {
          if (0 < (int)uVar14) {
            if ((((uVar41 & 0x100000000) == 0) ||
                (uVar15 = *(uint *)((long)unaff_x19 + 0x32c), uVar15 == 0x80000000)) ||
               (uVar15 != uVar14 - 1)) {
              if ((_uStack0000000000000048 & 1) == 0) {
                bVar10 = false;
              }
              else {
                lVar28 = uVar38 * unaff_w23 + 0x144;
                uVar46 = uVar38;
                do {
                  uVar46 = uVar46 - 1;
                  iVar16 = (int)uVar38;
                  uVar14 = iVar16 - 1;
                  uVar38 = (ulong)uVar14;
                  if ((iVar16 < 1) || (uVar46 == *(uint *)((long)unaff_x19 + 0x32c))) {
                    bVar10 = false;
                    goto LAB_03542448;
                  }
                  if ((unaff_x19[0x74] == 0) ||
                     (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0)) goto LAB_03547e54;
                  if (*(uint *)(lVar32 + 0x18) <= uVar46) goto LAB_03547f94;
                  lVar32 = *(long *)(lVar32 + lVar28 + -0x28c);
                  if ((lVar32 == 0) || (lVar32 = *(long *)(lVar32 + 0x20), lVar32 == 0))
                  goto LAB_03547e54;
                  uVar15 = FUN_038058f8(lVar32,0);
                  if ((*in_stack_00000160 == 0) ||
                     (((unaff_x19[0x20] == 0 ||
                       (lVar32 = *(long *)(unaff_x19[0x20] + 0x178), lVar32 == 0)) ||
                      (lVar32 = *(long *)(lVar32 + 0x50), lVar32 == 0)))) goto LAB_03547e54;
                  uVar24 = FUN_026cd7b4(lVar32,uVar15 | *(int *)(*in_stack_00000160 + 0x28) << 0x10,
                                        &stack0x00001140,*(undefined8 *)PTR_DAT_03cde720);
                  lVar28 = lVar28 + -0x178;
                } while ((uVar24 & 1) == 0);
                if ((unaff_x19[0x74] == 0) ||
                   (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0)) goto LAB_03547e54;
                if (*(uint *)(lVar32 + 0x18) <= uVar14) goto LAB_03547f94;
                FUN_03809c70(((*(float *)(lVar32 + lVar28 + -0xc) - *(float *)(unaff_x19 + 0xcb)) /
                              unaff_s12 + in_stack_00001144) - in_stack_00001150,in_stack_00001144,
                             in_stack_00001150,&stack0x00001250,0);
                FUN_03809c80(&stack0x00001250,0);
                bVar10 = true;
                fVar48 = 0.0;
              }
LAB_03542448:
              plVar44 = (long *)PTR_DAT_03cde740;
              if ((uVar41 & 0x100000000) != 0) {
                uVar14 = *(uint *)((long)unaff_x19 + 0x32c);
                if (uVar14 == 0x80000000) {
                  bVar10 = true;
                }
                if (!bVar10) {
                  if ((unaff_x19[0x74] == 0) ||
                     (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0)) goto LAB_03547e54;
                  if (*(uint *)(lVar28 + 0x18) <= uVar14) goto LAB_03547f94;
                  lVar28 = *(long *)(lVar28 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x30);
                  if ((lVar28 == 0) || (lVar28 = *(long *)(lVar28 + 0x20), lVar28 == 0))
                  goto LAB_03547e54;
                  uVar14 = FUN_038058f8(lVar28,0);
                  if ((*in_stack_00000160 == 0) ||
                     (((unaff_x19[0x20] == 0 ||
                       (lVar28 = *(long *)(unaff_x19[0x20] + 0x178), lVar28 == 0)) ||
                      (lVar28 = *(long *)(lVar28 + 0x48), lVar28 == 0)))) goto LAB_03547e54;
                  uVar38 = FUN_026c7aa4(lVar28,uVar14 | *(int *)(*in_stack_00000160 + 0x28) << 0x10,
                                        &stack0x00001128,*(undefined8 *)PTR_DAT_03cde718);
                  if ((uVar38 & 1) != 0) {
                    if ((unaff_x19[0x74] != 0) &&
                       (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 != 0)) {
                      if (*(uint *)((long)unaff_x19 + 0x32c) < *(uint *)(lVar28 + 0x18)) {
                        FUN_03809c70((in_stack_0000112c +
                                     (*(float *)(lVar28 + (long)(int)*(uint *)((long)unaff_x19 +
                                                                              0x32c) *
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
              if ((unaff_x19[0x74] == 0) ||
                 (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0)) goto LAB_03547e54;
              if (*(uint *)(lVar28 + 0x18) <= uVar15) goto LAB_03547f94;
              lVar28 = *(long *)(lVar28 + (long)(int)uVar15 * (long)(int)unaff_w23 + 0x30);
              if ((lVar28 == 0) || (lVar28 = *(long *)(lVar28 + 0x20), lVar28 == 0))
              goto LAB_03547e54;
              uVar14 = FUN_038058f8(lVar28,0);
              if ((*in_stack_00000160 == 0) ||
                 (((unaff_x19[0x20] == 0 ||
                   (lVar28 = *(long *)(unaff_x19[0x20] + 0x178), lVar28 == 0)) ||
                  (lVar28 = *(long *)(lVar28 + 0x48), lVar28 == 0)))) goto LAB_03547e54;
              uVar38 = FUN_026c7aa4(lVar28,uVar14 | *(int *)(*in_stack_00000160 + 0x28) << 0x10,
                                    &stack0x00001158,*(undefined8 *)PTR_DAT_03cde718);
              if ((uVar38 & 1) != 0) {
                if ((unaff_x19[0x74] == 0) ||
                   (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0)) goto LAB_03547e54;
                if (*(uint *)(lVar28 + 0x18) <= *(uint *)((long)unaff_x19 + 0x32c))
                goto LAB_03547f94;
                FUN_03809c70((in_stack_0000115c +
                             (*(float *)(lVar28 + (long)(int)*(uint *)((long)unaff_x19 + 0x32c) *
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
          fVar61 = fVar61 - unaff_s12 * fVar49 * (unaff_s14 - *(float *)(unaff_x19 + 0x60));
          *(float *)(unaff_x19 + 0xcb) = fVar61;
          if ((uVar13 != 0) || (in_stack_000012ac == 0x200b)) {
            *(float *)(unaff_x19 + 0xcb) = fVar61 - in_stack_00000100 * *(float *)(unaff_x19 + 0x5c)
            ;
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
          fVar50 = (float)FUN_03805740(&stack0x00001260,0);
          fVar49 = (unaff_s14 - *(float *)(unaff_x19 + 0x60)) *
                   (fVar61 * fVar49 - unaff_s12 * (fVar68 * 0.5 + fVar50));
          *(float *)(unaff_x19 + 0xcb) = fVar49 + *(float *)(unaff_x19 + 0xcb);
        }
        if (((cVar26 == '\0') && (*(int *)((long)unaff_x19 + 0x65c) == 0)) &&
           ((*(byte *)((long)unaff_x19 + 0x284) & 1) != 0)) {
          lVar28 = unaff_x19[0x23];
          if (*(int *)(*(long *)PTR_DAT_03cb5a80 + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
          }
          uVar38 = FUN_037707bc(lVar28,0,0);
          fVar68 = 0.0;
          if ((uVar38 & 1) != 0) {
            lVar28 = unaff_x19[0x23];
            if (*(int *)(*plVar44 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            if (lVar28 == 0) goto LAB_03547e54;
            uVar38 = FUN_03747cec(lVar28,*(undefined4 *)(*(long *)(*plVar44 + 0xb8) + 0x6c),0);
            if ((uVar38 & 1) != 0) {
              lVar28 = unaff_x19[0x23];
              if (*(int *)(*plVar44 + 0xe4) == 0) {
                thunk_FUN_01cb0d4c();
              }
              if (lVar28 == 0) goto LAB_03547e54;
              fVar61 = (float)thunk_FUN_03749d2c(lVar28,*(undefined4 *)
                                                         (*(long *)(*plVar44 + 0xb8) + 0x6c),0);
              if ((unaff_x19[0x20] == 0) || (unaff_x19[0x23] == 0)) goto LAB_03547e54;
              fVar50 = *(float *)(unaff_x19[0x20] + 0x1a8);
              fVar68 = (float)thunk_FUN_03749d2c(unaff_x19[0x23],
                                                 *(undefined4 *)(*(long *)(*plVar44 + 0xb8) + 0xe4),
                                                 0);
              fVar68 = fVar68 * fVar61 * fVar50 * 0.25;
              if (fVar61 < unaff_s13 + fVar68) {
                unaff_s13 = fVar61 - fVar68;
              }
            }
          }
          if (unaff_x19[0x20] == 0) goto LAB_03547e54;
          fStack00000000000000f0 = *(float *)(unaff_x19[0x20] + 0x1ac);
        }
        else {
          lVar28 = unaff_x19[0x23];
          if (*(int *)(*(long *)PTR_DAT_03cb5a80 + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
          }
          uVar38 = FUN_037707bc(lVar28,0,0);
          fStack00000000000000f0 = 0.0;
          if ((uVar38 & 1) != 0) {
            lVar28 = unaff_x19[0x23];
            if (*(int *)(*plVar44 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            if (lVar28 == 0) goto LAB_03547e54;
            uVar38 = FUN_03747cec(lVar28,*(undefined4 *)(*(long *)(*plVar44 + 0xb8) + 0x6c),0);
            if ((uVar38 & 1) != 0) {
              lVar28 = unaff_x19[0x23];
              if (*(int *)(*plVar44 + 0xe4) == 0) {
                thunk_FUN_01cb0d4c();
              }
              if (lVar28 == 0) goto LAB_03547e54;
              uVar38 = FUN_03747cec(lVar28,*(undefined4 *)(*(long *)(*plVar44 + 0xb8) + 0xe4),0);
              if ((uVar38 & 1) != 0) {
                lVar28 = unaff_x19[0x23];
                if (*(int *)(*plVar44 + 0xe4) == 0) {
                  thunk_FUN_01cb0d4c();
                }
                if (lVar28 != 0) {
                  fVar61 = (float)thunk_FUN_03749d2c(lVar28,*(undefined4 *)
                                                             (*(long *)(*plVar44 + 0xb8) + 0x6c),0);
                  if ((unaff_x19[0x20] != 0) && (unaff_x19[0x23] != 0)) {
                    fVar50 = *(float *)(unaff_x19[0x20] + 0x1a0);
                    fVar68 = (float)thunk_FUN_03749d2c(unaff_x19[0x23],
                                                       *(undefined4 *)
                                                        (*(long *)(*plVar44 + 0xb8) + 0xe4),0);
                    fVar68 = fVar68 * fVar61 * fVar50 * 0.25;
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
        fVar52 = *(float *)((long)unaff_x19 + 0x47c);
        fVar50 = (float)FUN_03809c68(&stack0x00001250,0);
        fVar62 = fVar62 + (unaff_s14 - *(float *)(unaff_x19 + 0x60)) *
                          unaff_s12 * (fVar50 + ((fVar61 * fVar52 - unaff_s13) - fVar68));
        fVar61 = (float)FUN_03805748(&stack0x00001260,0);
        fVar50 = (float)FUN_03809c78(&stack0x00001250,0);
        fStack0000000000000170 =
             *(float *)((long)unaff_x19 + 0x634) +
             ((fStack000000000000016c + unaff_s12 * (unaff_s13 + fVar61 + fVar50)) -
             *(float *)((long)unaff_x19 + 0x4ec));
        fVar61 = (float)FUN_03805738(&stack0x00001260,0);
        fVar61 = fStack0000000000000170 - unaff_s12 * (unaff_s13 + unaff_s13 + fVar61);
        fVar50 = (float)FUN_03805730(&stack0x00001260,0);
        fVar50 = fVar62 + (unaff_s14 - *(float *)(unaff_x19 + 0x60)) *
                          unaff_s12 *
                          (fVar68 + fVar68 +
                          unaff_s13 + unaff_s13 + fVar50 * *(float *)((long)unaff_x19 + 0x47c));
        fVar52 = fVar62;
        fVar69 = fVar50;
        if (((*(int *)((long)unaff_x19 + 0x65c) == 0) && (cVar26 == '\0')) &&
           ((*(byte *)((long)unaff_x19 + 0x284) >> 1 & 1) != 0)) {
          if (unaff_x19[0x20] == 0) goto LAB_03547e54;
          lVar28 = unaff_x19[0xc1];
          fVar52 = (float)FUN_0380547c(unaff_x19[0x20] + 0x28,0);
          if (unaff_x19[0x20] == 0) goto LAB_03547e54;
          fVar59 = (float)FUN_0380549c(unaff_x19[0x20] + 0x28,0);
          if (unaff_x19[0x20] == 0) goto LAB_03547e54;
          fVar65 = *(float *)((long)unaff_x19 + 0x43c);
          fVar67 = *(float *)((long)unaff_x19 + 0x634);
          fVar69 = (float)(int)lVar28 * fStack0000000000000050;
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
        uVar21 = in_stack_000001a0[1];
        if (DAT_03ef1416 == '\0') {
          FUN_01c5c92c(PTR_DAT_03cb5ab8);
          DAT_03ef1416 = '\x01';
        }
        uVar55 = **(undefined8 **)(*(long *)PTR_DAT_03cb5ab8 + 0xb8);
        uVar57 = (*(undefined8 **)(*(long *)PTR_DAT_03cb5ab8 + 0xb8))[1];
        if (DAT_00b46098 <
            (float)((ulong)uVar21 >> 0x20) * (float)((ulong)uVar57 >> 0x20) +
            (float)uVar21 * (float)uVar57 +
            (float)uVar64 * (float)uVar55 +
            (float)((ulong)uVar64 >> 0x20) * (float)((ulong)uVar55 >> 0x20)) {
          fVar68 = 0.0;
          auVar58._4_12_ = SUB1612(ZEXT816(0),4);
          auVar58._0_4_ = fVar61;
          uVar64 = auVar58._0_8_;
          uVar38 = (ulong)(uint)fStack0000000000000170;
          uVar21 = uVar64;
        }
        else {
          FUN_0375fdfc(&stack0x000012b0,*(undefined4 *)((long)unaff_x19 + 0x46c),
                       (int)unaff_x19[0x8e],*(undefined4 *)((long)unaff_x19 + 0x474),
                       (int)unaff_x19[0x8f],0);
          fVar69 = (fVar50 + fVar62) * 0.5;
          fVar59 = (fVar61 + fStack0000000000000170) * 0.5;
          unaff_x25[0x16b] = in_stack_000012c8;
          unaff_x25[0x16a] = CONCAT44(in_stack_000012c4,in_stack_000012c0);
          unaff_x25[0x169] = in_stack_000012b8;
          unaff_x25[0x168] = in_stack_000012b0;
          unaff_x25[0x16d] = in_stack_000012d8;
          unaff_x25[0x16c] = in_stack_000012d0;
          fVar68 = 0.0;
          unaff_x25[0x16f] = in_stack_000012e8;
          unaff_x25[0x16e] = in_stack_000012e0;
          auVar56 = ZEXT416((uint)(fStack0000000000000170 - fVar59));
          fVar52 = (float)FUN_0375fcfc(&stack0x000010e0,0);
          fVar52 = fVar69 + fVar52;
          fVar50 = 0.0;
          uVar38 = CONCAT44(fVar68 + 0.0,fVar59 + auVar56._0_4_);
          auVar56 = ZEXT416((uint)(fVar61 - fVar59));
          fVar62 = (float)FUN_0375fcfc(&stack0x000010e0,0);
          fVar62 = fVar69 + fVar62;
          fVar68 = 0.0;
          uVar64 = CONCAT44(fVar50 + 0.0,fVar59 + auVar56._0_4_);
          auVar56 = ZEXT416((uint)(fStack0000000000000170 - fVar59));
          fVar50 = (float)FUN_0375fcfc(&stack0x000010e0,0);
          fVar50 = fVar69 + fVar50;
          fVar54 = 0.0;
          fStack0000000000000170 = fVar59 + auVar56._0_4_;
          fVar68 = fVar68 + 0.0;
          auVar56 = ZEXT416((uint)(fVar61 - fVar59));
          fVar61 = (float)FUN_0375fcfc(&stack0x000010e0,0);
          fVar69 = fVar69 + fVar61;
          uVar21 = CONCAT44(fVar54 + 0.0,fVar59 + auVar56._0_4_);
        }
        unaff_s15 = 0.0;
        if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
        goto LAB_03547e54;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
        lVar28 = lVar28 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
        *(float *)(lVar28 + 0x114) = fVar62;
        *(undefined8 *)(lVar28 + 0x118) = uVar64;
        if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
        goto LAB_03547e54;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
        lVar28 = lVar28 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
        *(float *)(lVar28 + 0x108) = fVar52;
        *(ulong *)(lVar28 + 0x10c) = uVar38;
        if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
        goto LAB_03547e54;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
        lVar28 = lVar28 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
        *(float *)(lVar28 + 0x120) = fVar50;
        *(ulong *)(lVar28 + 0x124) = CONCAT44(fVar68,fStack0000000000000170);
        if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
        goto LAB_03547e54;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
        lVar28 = lVar28 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
        *(float *)(lVar28 + 300) = fVar69;
        *(undefined8 *)(lVar28 + 0x130) = uVar21;
        if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
        goto LAB_03547e54;
        uVar14 = *(uint *)((long)unaff_x19 + 0x4a4);
        fVar68 = *(float *)(unaff_x19 + 0xcb);
        fVar61 = (float)FUN_03809c68(&stack0x00001250,0);
        if (*(uint *)(lVar28 + 0x18) <= uVar14) goto LAB_03547f94;
        *(float *)(lVar28 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x138) =
             fVar68 + unaff_s12 * fVar61;
        if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
        goto LAB_03547e54;
        uVar14 = *(uint *)((long)unaff_x19 + 0x4a4);
        fVar68 = *(float *)((long)unaff_x19 + 0x4ec);
        fVar52 = *(float *)((long)unaff_x19 + 0x634);
        fVar61 = (float)FUN_03809c78(&stack0x00001250,0);
        if (*(uint *)(lVar28 + 0x18) <= uVar14) goto LAB_03547f94;
        *(float *)(lVar28 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x144) =
             (fStack000000000000016c - fVar68) + fVar52 + unaff_s12 * fVar61;
        if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
        goto LAB_03547e54;
        uVar14 = *(uint *)(in_stack_000001a0 + 7);
        if (*(uint *)(lVar28 + 0x18) <= uVar14) goto LAB_03547f94;
        lVar28 = lVar28 + 0x20;
        *(float *)(lVar28 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x138) =
             (fVar50 - fVar62) / ((float)uVar38 - (float)uVar64);
        fVar63 = unaff_s12 * (fVar51 + fVar63);
        if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
          fVar63 = fVar63 / fStack0000000000000138;
          fVar66 = (unaff_s12 * (fStack0000000000000124 + fVar66)) / fStack0000000000000138;
        }
        else {
          fVar66 = unaff_s12 * (fStack0000000000000124 + fVar66);
        }
        unaff_s14 = 1.0;
        fVar68 = 1.0;
        fVar61 = *(float *)((long)unaff_x19 + 0x634);
        uVar15 = *(uint *)(unaff_x19 + 0x95);
        if ((uVar13 == 0) || (uVar14 == uVar15)) {
          fVar63 = fVar63 + fVar61;
          fVar66 = fVar66 + fVar61;
          fVar50 = fVar63;
          fVar52 = fVar66;
          if (fVar61 != 0.0) {
            fVar50 = (fVar63 - fVar61) / *(float *)((long)unaff_x19 + 0x43c);
            fVar52 = (fVar66 - fVar61) / *(float *)((long)unaff_x19 + 0x43c);
            if (fVar50 <= fVar63) {
              fVar50 = fVar63;
            }
            if (fVar66 <= fVar52) {
              fVar52 = fVar66;
            }
          }
          lVar28 = lVar28 + (long)(int)uVar14 * (long)(int)unaff_w23;
          fVar61 = fVar50;
          if (fVar50 <= *(float *)((long)unaff_x19 + 0x4dc)) {
            fVar61 = *(float *)((long)unaff_x19 + 0x4dc);
          }
          fVar51 = fVar52;
          if (*(float *)(unaff_x19 + 0x9c) <= fVar52) {
            fVar51 = *(float *)(unaff_x19 + 0x9c);
          }
          *(float *)((long)unaff_x19 + 0x4dc) = fVar61;
          *(float *)(unaff_x19 + 0x9c) = fVar51;
          *(float *)(lVar28 + 300) = fVar50;
          *(float *)(lVar28 + 0x130) = fVar52;
          fVar50 = *(float *)((long)unaff_x19 + 0x4ec);
          *(float *)(lVar28 + 0x120) = fVar63 - fVar50;
          *(float *)((long)unaff_x19 + 0x4d4) = fVar63 - fVar50;
          *(float *)(lVar28 + 0x128) = fVar66 - fVar50;
          *(float *)(unaff_x19 + 0x9b) = fVar66 - fVar50;
          if (((int)unaff_x19[0x97] == 0) || (*(char *)((long)unaff_x19 + 0x374) != '\0')) {
            *(float *)((long)unaff_x19 + 0x4cc) = fVar61;
            if (unaff_x19[0x20] == 0) goto LAB_03547e54;
            fVar66 = *(float *)(unaff_x19 + 0x9a);
            fVar61 = (float)FUN_0380547c(unaff_x19[0x20] + 0x28,0);
            fStack0000000000000138 = (unaff_s12 * fVar61) / fStack0000000000000138;
            if (fVar66 <= fStack0000000000000138) {
              fVar66 = fStack0000000000000138;
            }
            fVar50 = *(float *)((long)unaff_x19 + 0x4ec);
            *(float *)(unaff_x19 + 0x9a) = fVar66;
          }
          if (fVar50 == 0.0) {
            fVar66 = *(float *)(unaff_x19 + 0x99);
            if (*(float *)(unaff_x19 + 0x99) <= fVar63) {
              fVar66 = fVar63;
            }
            *(float *)(unaff_x19 + 0x99) = fVar66;
          }
        }
        else {
          lVar28 = lVar28 + (long)(int)uVar14 * (long)(int)unaff_w23;
          uVar21 = in_stack_000001a0[0xe];
          *(undefined8 *)(lVar28 + 300) = uVar21;
          fVar50 = *(float *)((long)unaff_x19 + 0x4ec);
          fVar63 = (float)uVar21 - fVar50;
          fVar66 = (float)((ulong)uVar21 >> 0x20) - fVar50;
          *(float *)(lVar28 + 0x120) = fVar63;
          *(float *)(lVar28 + 0x128) = fVar66;
          in_stack_000001a0[0xd] = CONCAT44(fVar66,fVar63);
        }
        lVar28 = unaff_x19[0x74];
        if ((lVar28 == 0) || (lVar32 = *(long *)(lVar28 + 0x38), lVar32 == 0)) goto LAB_03547e54;
        uVar31 = *(uint *)(in_stack_000001a0 + 7);
        if (*(uint *)(lVar32 + 0x18) <= uVar31) goto LAB_03547f94;
        lVar32 = lVar32 + (long)(int)uVar31 * (long)(int)unaff_w23;
        *(undefined1 *)(lVar32 + 400) = 0;
        uVar43 = *(uint *)(unaff_x19 + 0x54);
        if ((((in_stack_000012ac == 9) ||
             ((in_stack_000012ac == 0x200b || uVar13 != 0 &&
              ((*(uint *)((long)unaff_x19 + 0x304) & 0xfffffffe) == 2)))) ||
            ((uVar13 == 0 &&
             (((in_stack_000012ac != 3 && (in_stack_000012ac != 0x200b)) &&
              (in_stack_000012ac != 0xad)))))) ||
           ((in_stack_000012ac == 0xad && ((uint)fStack0000000000000054 & 1) == 0 ||
            (*(int *)((long)unaff_x19 + 0x65c) == 1)))) {
          *(undefined1 *)(lVar32 + 400) = 1;
          pfVar33 = in_stack_000000a0;
          pfVar35 = _fStack00000000000000d0;
          if (uVar40 == uVar17) {
            lVar28 = *(long *)(lVar28 + 0x50);
            if (lVar28 == 0) goto LAB_03547e54;
            if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_03547f94;
            lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
            pfVar35 = (float *)(lVar28 + 100);
            pfVar33 = (float *)(lVar28 + 0x68);
          }
          fVar61 = *pfVar35;
          fVar50 = *pfVar33;
          fVar63 = *(float *)(unaff_x19 + 0x73);
          fVar66 = 0.0;
          fVar52 = *(float *)(unaff_x19 + 0xcb);
          in_stack_00000130._4_4_ = (fStack00000000000000cc - fVar61) - fVar50;
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
          iVar16 = *(int *)(in_stack_000001a0 + 7);
          fVar66 = (*(float *)((long)unaff_x19 + 0x4cc) - (*(float *)(unaff_x19 + 0x9c) - fVar51)) +
                   fVar66;
          if (fStack00000000000000dc < fVar66) {
            if (*(int *)((long)unaff_x19 + 0x314) == -1) {
              *(int *)((long)unaff_x19 + 0x314) = iVar16;
            }
            plVar27 = (long *)PTR_DAT_03cde808;
            fVar62 = DAT_00b45f9c;
            if ((char)unaff_x19[0x4c] != '\0') {
              if (0.0 < fVar51) {
                fVar51 = *(float *)((long)unaff_x19 + 0x2f4);
                if ((fVar51 < *(float *)(unaff_x19 + 0x5d)) &&
                   (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
                  fVar48 = *(float *)(unaff_x19 + 0x5d) +
                           ((in_stack_00000018._4_4_ - fVar66) / (float)(int)unaff_x19[0x97]) /
                           fStack0000000000000078;
                  if (fVar48 <= fVar51) {
                    fVar48 = fVar51;
                  }
                  goto LAB_03547e80;
                }
              }
              fVar66 = *(float *)((long)unaff_x19 + 0x20c);
              fVar51 = *(float *)(unaff_x19 + 0x4f);
              if ((fVar51 < fVar66) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
                *(float *)((long)unaff_x19 + 0x264) = fVar66;
                fVar48 = (fVar66 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
                if (fVar48 <= fVar62) {
                  fVar48 = fVar62;
                }
                fVar63 = (fVar66 - fVar48) * 20.0 + 0.5;
                fVar48 = DAT_00b4601c;
                if (fVar63 != INFINITY) {
                  fVar48 = (float)(int)fVar63 / 20.0;
                }
                if (fVar48 <= fVar51) {
                  fVar48 = fVar51;
                }
                *(float *)((long)unaff_x19 + 0x20c) = fVar48;
                return;
              }
            }
            iVar19 = (int)unaff_x19[0x62];
            if (iVar19 < 5) {
              if (iVar19 == 1) {
                lVar28 = *(long *)PTR_DAT_03cde808;
                if (*(int *)(lVar28 + 0xe4) == 0) {
                  thunk_FUN_01cb0d4c();
                  lVar28 = *plVar27;
                }
                plVar44 = (long *)PTR_DAT_03cb5ae0;
                lVar32 = *(long *)(lVar28 + 0xb8);
                if (*(int *)(lVar32 + 0x1708) == 0) {
LAB_03543558:
                  plVar44 = (long *)PTR_DAT_03cb5ae0;
                  in_stack_000001a0[7] = 0;
                  unaff_s14 = fVar68;
                  in_stack_00001278 = 0xffffffff;
                  uVar20 = DAT_00b463f8;
                }
                else {
                  if (*(int *)(lVar28 + 0xe4) == 0) {
                    thunk_FUN_01cb0d4c();
                    lVar32 = *(long *)(*plVar27 + 0xb8);
                  }
                  Unity_Collections_LowLevel_Unsafe_UnsafeList<DebugOccluderStats>__Dispose
                            (&stack0x000012b0,lVar32 + 0x1338,*(undefined8 *)PTR_DAT_03cde7b0);
                  memcpy(&stack0x00000d28,&stack0x000012b0,0x3b8);
FUN_03543524:
                  iVar16 = FUN_03594d0c();
                  in_stack_00001278 = iVar16 - 1;
                  unaff_w29 = unaff_w29 + 1;
                  iVar16 = *(int *)((long)unaff_x19 + 0x4a4) + -1;
                  *(int *)((long)unaff_x19 + 0x4a4) = iVar16;
                  uVar53 = 0x2026;
LAB_03543550:
                  unaff_s14 = fVar68;
                  uVar20 = CONCAT44(uVar53,iVar16);
                }
                goto code_r0x03544d6c;
              }
              if (iVar19 != 3) goto LAB_0354301c;
              if (*(int *)(*(long *)PTR_DAT_03cde808 + 0xe4) == 0) {
                thunk_FUN_01cb0d4c();
              }
LAB_035431bc:
              in_stack_00001278 = FUN_03594d0c();
            }
            else {
              if (iVar19 == 5) {
                if (((int)in_stack_00001278 < 0) || (iVar16 == 0)) {
                  *(undefined4 *)(in_stack_000001a0 + 7) = 0;
                  in_stack_00001278 = 0xffffffff;
                  plVar27 = (long *)PTR_DAT_03cde808;
                  plVar44 = (long *)PTR_DAT_03cb5ae0;
                  unaff_s14 = fVar68;
                  uVar20 = DAT_00b463f8;
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
                  plVar44 = (long *)PTR_DAT_03cb5ae0;
                  in_stack_00001278 = FUN_03594d0c();
                  *(undefined1 *)((long)unaff_x19 + 0x374) = 1;
                  *(undefined4 *)(unaff_x19 + 0x95) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
                  uVar21 = *(undefined8 *)(*(long *)(*plVar27 + 0xb8) + 0x1730);
                  *(float *)(unaff_x19 + 0xcb) = *(float *)((long)unaff_x19 + 0x444) + 0.0;
                  *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
                  uVar21 = NEON_rev64(uVar21,4);
                  param_2 = ZEXT816(0);
                  *(int *)(unaff_x19 + 0x97) = (int)unaff_x19[0x97] + 1;
                  iVar16 = *(int *)((long)unaff_x19 + 0x4c4);
                  *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
                  unaff_x19[0x99] = 0;
                  in_stack_000001a0[0xe] = uVar21;
                  *(int *)((long)unaff_x19 + 0x4c4) = iVar16 + 1;
                  unaff_s14 = fVar68;
                }
                goto code_r0x03544d6c;
              }
              if (iVar19 != 6) goto LAB_0354301c;
              if (*(int *)(*(long *)PTR_DAT_03cde808 + 0xe4) == 0) {
                thunk_FUN_01cb0d4c();
              }
              in_stack_00001278 = FUN_03594d0c();
              lVar28 = unaff_x19[99];
              if (*(int *)(*(long *)PTR_DAT_03cb5a80 + 0xe4) == 0) {
                thunk_FUN_01cb0d4c();
              }
              uVar22 = FUN_037707bc(lVar28,0,0);
              if ((uVar22 & 1) != 0) {
                plVar44 = (long *)unaff_x19[99];
                uVar20 = (**(code **)(*unaff_x19 + 0x548))();
                if (plVar44 == (long *)0x0) goto LAB_03547e54;
                (**(code **)(*plVar44 + 0x558))(plVar44,uVar20,*(undefined8 *)(*plVar44 + 0x560));
                lVar28 = unaff_x19[99];
                if (lVar28 == 0) goto LAB_03547e54;
                *(int *)(lVar28 + 0x438) = (int)unaff_x19[0x87];
                FUN_03588698(lVar28,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
                plVar44 = (long *)unaff_x19[99];
                if (plVar44 == (long *)0x0) goto LAB_03547e54;
                (**(code **)(*plVar44 + 0x7d8))(plVar44,0,0,*(undefined8 *)(*plVar44 + 0x7e0));
                *(undefined1 *)(unaff_x19 + 0x65) = 1;
              }
            }
            plVar44 = (long *)PTR_DAT_03cb5ae0;
            unaff_s14 = fVar68;
            uVar20 = CONCAT44(3,iVar16);
            goto code_r0x03544d6c;
          }
LAB_0354301c:
          plVar27 = (long *)PTR_DAT_03cde808;
          plVar44 = (long *)PTR_DAT_03cb5ae0;
          if ((uVar22 & 1) != 0) {
            fVar66 = unaff_s14;
            if ((uVar43 & 0x18) != 0) {
              fVar66 = DAT_00b46148;
            }
            fVar63 = ABS(fVar52) + fVar63 * (1.0 - fVar69) * param_3;
            if (fVar66 * in_stack_00000130._4_4_ < fVar63) {
              if (((*(int *)((long)unaff_x19 + 0x304) == 0) ||
                  (*(int *)((long)unaff_x19 + 0x304) == 3)) || (iVar16 == (int)unaff_x19[0x95])) {
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
                iVar19 = (int)unaff_x19[0x62];
                if (iVar19 == 1) {
                  lVar28 = *(long *)PTR_DAT_03cde808;
                  if (*(int *)(lVar28 + 0xe4) == 0) {
                    thunk_FUN_01cb0d4c();
                    lVar28 = *plVar27;
                  }
                  plVar44 = (long *)PTR_DAT_03cb5ae0;
                  lVar32 = *(long *)(lVar28 + 0xb8);
                  if (*(int *)(lVar32 + 0x1708) == 0) goto LAB_03543558;
                  if (*(int *)(lVar28 + 0xe4) == 0) {
                    thunk_FUN_01cb0d4c();
                    lVar32 = *(long *)(*plVar27 + 0xb8);
                  }
                  Unity_Collections_LowLevel_Unsafe_UnsafeList<DebugOccluderStats>__Dispose
                            (&stack0x000012b0,lVar32 + 0x1338,*(undefined8 *)PTR_DAT_03cde7b0);
                  memcpy(&stack0x000005b8,&stack0x000012b0,0x3b8);
                  goto FUN_03543524;
                }
                if (iVar19 == 6) {
                  if (*(int *)(*(long *)PTR_DAT_03cde808 + 0xe4) == 0) {
                    thunk_FUN_01cb0d4c();
                  }
                  in_stack_00001278 = FUN_03594d0c();
                  lVar28 = unaff_x19[99];
                  if (*(int *)(*(long *)PTR_DAT_03cb5a80 + 0xe4) == 0) {
                    thunk_FUN_01cb0d4c();
                  }
                  uVar22 = FUN_037707bc(lVar28,0,0);
                  if ((uVar22 & 1) != 0) {
                    plVar45 = (long *)unaff_x19[99];
                    uVar20 = (**(code **)(*unaff_x19 + 0x548))();
                    if (plVar45 == (long *)0x0) goto LAB_03547e54;
                    (**(code **)(*plVar45 + 0x558))
                              (plVar45,uVar20,*(undefined8 *)(*plVar45 + 0x560));
                    lVar28 = unaff_x19[99];
                    if (lVar28 == 0) goto LAB_03547e54;
                    *(int *)(lVar28 + 0x438) = (int)unaff_x19[0x87];
                    FUN_03588698(lVar28,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
                    plVar45 = (long *)unaff_x19[99];
                    if (plVar45 == (long *)0x0) goto LAB_03547e54;
                    (**(code **)(*plVar45 + 0x7d8))(plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7e0));
                    *(undefined1 *)(unaff_x19 + 0x65) = 1;
                  }
                  iVar16 = *(int *)(in_stack_000001a0 + 7);
                  uVar53 = 3;
                  goto LAB_03543550;
                }
                if (iVar19 == 3) {
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
                in_stack_00001278 = FUN_03594d0c();
                if (*(float *)((long)unaff_x19 + 0x2ec) == DAT_00b45db4) {
                  lVar28 = unaff_x19[0x74];
                  if ((lVar28 == 0) || (lVar32 = *(long *)(lVar28 + 0x38), lVar32 == 0))
                  goto LAB_03547e54;
                  if (*(uint *)(lVar32 + 0x18) <= *(uint *)(in_stack_000001a0 + 7))
                  goto LAB_03547f94;
                  fVar52 = *(float *)((long)unaff_x19 + 0x4ec);
                  fVar51 = 0.0;
                  if ((0.0 < fVar52) && ((char)unaff_x19[0x5e] == '\0')) {
                    fVar51 = *(float *)((long)unaff_x19 + 0x4dc) -
                             *(float *)((long)unaff_x19 + 0x4e4);
                  }
                  fVar51 = in_stack_00000100 * *(float *)((long)unaff_x19 + 0x2e4) +
                           *(float *)(lVar32 + (long)(int)*(uint *)(in_stack_000001a0 + 7) *
                                               (long)(int)unaff_w23 + 0x14c) +
                           (fVar51 - *(float *)(unaff_x19 + 0x9c)) +
                           fStack0000000000000078 *
                           (in_stack_00000040._4_4_ + *(float *)(unaff_x19 + 0x5d));
                }
                else {
                  lVar28 = unaff_x19[0x74];
                  *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                  if (lVar28 == 0) goto LAB_03547e54;
                  fVar51 = *(float *)((long)unaff_x19 + 0x2ec) +
                           in_stack_00000100 * *(float *)((long)unaff_x19 + 0x2e4);
                  fVar52 = *(float *)((long)unaff_x19 + 0x4ec);
                }
                puVar9 = PTR_DAT_03cde808;
                lVar28 = *(long *)(lVar28 + 0x38);
                if (lVar28 == 0) goto LAB_03547e54;
                uVar31 = *(uint *)((long)unaff_x19 + 0x4a4);
                if ((*(uint *)(lVar28 + 0x18) <= uVar31) ||
                   (uVar42 = uVar31 - 1, *(uint *)(lVar28 + 0x18) <= uVar42)) goto LAB_03547f94;
                param_3 = *(float *)((long)unaff_x19 + 0x4cc);
                lVar28 = lVar28 + 0x20;
                fVar62 = *(float *)(lVar28 + (long)(int)uVar31 * (long)(int)unaff_w23 + 0x130);
                param_2 = ZEXT416((uint)fVar62);
                fVar62 = (fVar51 + param_3 + fVar52) - fVar62;
                if ((*(short *)(lVar28 + (long)(int)uVar42 * (long)(int)unaff_w23 + 4) == 0xad &&
                     ((uint)fStack0000000000000054 & 1) == 0) &&
                   (((int)unaff_x19[0x62] == 0 || (fVar62 < fStack00000000000000dc)))) {
                  fStack0000000000000054 = 0.0;
                  in_stack_00001278 = in_stack_00001278 - 1;
                  *(uint *)(in_stack_000001a0 + 7) = uVar42;
                  plVar27 = (long *)PTR_DAT_03cde808;
                  plVar44 = (long *)PTR_DAT_03cb5ae0;
                  unaff_s14 = fVar68;
                  uVar20 = CONCAT44(0x2d,uVar42);
                  goto code_r0x03544d6c;
                }
                if (*(short *)(lVar28 + (long)(int)uVar31 * (long)(int)unaff_w23 + 4) == 0xad) {
                  fStack0000000000000054 = 1.4013e-45;
                  plVar27 = (long *)PTR_DAT_03cde808;
                  plVar44 = (long *)PTR_DAT_03cb5ae0;
                  unaff_s14 = fVar68;
                  goto code_r0x03544d6c;
                }
                if ((char)unaff_x19[0x4c] != '\0' &&
                    ((uStack000000000000007c ^ 0xffffffff) & 1) == 0) {
                  fVar52 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
                  fVar69 = *(float *)(unaff_x19 + 0x60);
                  if ((fVar69 < fVar52) &&
                     (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) goto LAB_03547eec;
                  fVar52 = *(float *)((long)unaff_x19 + 0x20c);
                  fVar51 = *(float *)(unaff_x19 + 0x4f);
                  param_2 = ZEXT416((uint)fVar51);
                  if ((fVar51 < fVar52) &&
                     (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) goto LAB_03547f34;
                }
                lVar28 = *(long *)PTR_DAT_03cde808;
                if (*(int *)(lVar28 + 0xe4) == 0) {
                  thunk_FUN_01cb0d4c();
                  lVar28 = *(long *)puVar9;
                }
                if ((((uStack000000000000007c & 1) != 0) &&
                    (iVar19 = *(int *)(*(long *)(lVar28 + 0xb8) + 0xf80), iVar19 != -1)) &&
                   (iVar19 != iStack0000000000000020)) {
                  if (*(int *)(lVar28 + 0xe4) == 0) {
                    thunk_FUN_01cb0d4c();
                  }
                  in_stack_00001278 = FUN_03594d0c();
                  if ((unaff_x19[0x74] == 0) ||
                     (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0)) goto LAB_03547e54;
                  uVar31 = *(int *)(in_stack_000001a0 + 7) - 1;
                  if (*(uint *)(lVar28 + 0x18) <= uVar31) goto LAB_03547f94;
                  iStack0000000000000020 = iVar19;
                  if (*(short *)(lVar28 + (long)(int)uVar31 * (long)(int)unaff_w23 + 0x24) == 0xad)
                  {
                    in_stack_00001278 = in_stack_00001278 - 1;
                    fStack0000000000000054 = 0.0;
                    *(uint *)(in_stack_000001a0 + 7) = uVar31;
                    plVar27 = (long *)PTR_DAT_03cde808;
                    plVar44 = (long *)PTR_DAT_03cb5ae0;
                    unaff_s14 = fVar68;
                    uVar20 = CONCAT44(0x2d,uVar31);
                    goto code_r0x03544d6c;
                  }
                }
                if (fVar62 <= fStack00000000000000dc) {
                  param_2 = ZEXT416((uint)unaff_s12);
                  param_3 = in_stack_00000100;
                  FUN_035957d8();
                  fStack0000000000000054 = 0.0;
                  uStack000000000000007c = 1;
                  uStack0000000000000070 = 1;
                  plVar27 = (long *)PTR_DAT_03cde808;
                  plVar44 = (long *)PTR_DAT_03cb5ae0;
                  goto code_r0x03544d6c;
                }
                if (*(int *)((long)unaff_x19 + 0x314) == -1) {
                  *(undefined4 *)((long)unaff_x19 + 0x314) =
                       *(undefined4 *)((long)unaff_x19 + 0x4a4);
                }
                plVar44 = (long *)PTR_DAT_03cb5ae0;
                if ((char)unaff_x19[0x4c] != '\0') {
                  fVar52 = *(float *)((long)unaff_x19 + 0x2f4);
                  if ((fVar52 < *(float *)(unaff_x19 + 0x5d)) &&
                     (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
                    fVar48 = *(float *)(unaff_x19 + 0x5d) +
                             ((in_stack_00000018._4_4_ - fVar62) / (float)((int)unaff_x19[0x97] + 1)
                             ) / fStack0000000000000078;
                    if (fVar48 <= fVar52) {
                      fVar48 = fVar52;
                    }
LAB_03547e80:
                    *(float *)(unaff_x19 + 0x5d) = fVar48;
                    return;
                  }
                  fVar52 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
                  fVar69 = *(float *)(unaff_x19 + 0x60);
                  if ((fVar69 < fVar52) &&
                     (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
LAB_03547eec:
                    fVar48 = fVar63;
                    if (0.0 < fVar69) {
                      fVar48 = fVar63 / (1.0 - fVar69);
                    }
                    fVar69 = fVar69 + (fVar63 - fVar66 * (in_stack_00000130._4_4_ + DAT_00b45fd4)) /
                                      fVar48;
                    if (fVar52 <= fVar69) {
                      fVar69 = fVar52;
                    }
                    *(float *)(unaff_x19 + 0x60) = fVar69;
                    return;
                  }
                  fVar52 = *(float *)((long)unaff_x19 + 0x20c);
                  fVar51 = *(float *)(unaff_x19 + 0x4f);
                  param_2 = ZEXT416((uint)fVar51);
                  if ((fVar51 < fVar52) &&
                     (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
LAB_03547f34:
                    fVar48 = DAT_00b45f9c;
                    *(float *)((long)unaff_x19 + 0x264) = fVar52;
                    fVar63 = (fVar52 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
                    if (fVar63 <= fVar48) {
                      fVar63 = fVar48;
                    }
                    fVar63 = (fVar52 - fVar63) * 20.0 + 0.5;
                    fVar48 = DAT_00b4601c;
                    if (fVar63 != INFINITY) {
                      fVar48 = (float)(int)fVar63 / 20.0;
                    }
                    if (fVar48 <= fVar51) {
                      fVar48 = fVar51;
                    }
LAB_0354532c:
                    *(float *)((long)unaff_x19 + 0x20c) = fVar48;
                    return;
                  }
                }
                iVar19 = (int)unaff_x19[0x62];
                fStack0000000000000054 = 0.0;
                if (iVar19 < 3) {
                  if (iVar19 != 0) {
                    if (iVar19 == 1) {
                      lVar28 = *(long *)PTR_DAT_03cde808;
                      if (*(int *)(lVar28 + 0xe4) == 0) {
                        thunk_FUN_01cb0d4c();
                        lVar28 = *(long *)PTR_DAT_03cde808;
                      }
                      uVar20 = DAT_00b463f8;
                      lVar32 = *(long *)(lVar28 + 0xb8);
                      if (*(int *)(lVar32 + 0x1708) == 0) {
                        in_stack_00001278 = 0xffffffff;
                        in_stack_000001a0[7] = 0;
                        goto LAB_03545258;
                      }
                      if (*(int *)(lVar28 + 0xe4) == 0) {
                        thunk_FUN_01cb0d4c();
                        lVar32 = *(long *)(*(long *)PTR_DAT_03cde808 + 0xb8);
                      }
                      Unity_Collections_LowLevel_Unsafe_UnsafeList<DebugOccluderStats>__Dispose
                                (&stack0x000012b0,lVar32 + 0x1338,*(undefined8 *)PTR_DAT_03cde7b0);
                      memcpy(&stack0x00000970,&stack0x000012b0,0x3b8);
                      iVar16 = FUN_03594d0c();
                      in_stack_00001278 = iVar16 - 1;
                      unaff_w29 = unaff_w29 + 1;
                      iVar16 = *(int *)((long)unaff_x19 + 0x4a4) + -1;
                      *(int *)((long)unaff_x19 + 0x4a4) = iVar16;
                      uVar53 = 0x2026;
                      goto LAB_0354520c;
                    }
                    if (iVar19 != 2) goto LAB_03543c44;
                  }
LAB_03543b1c:
                  param_2 = ZEXT416((uint)unaff_s12);
                  param_3 = in_stack_00000100;
                  FUN_035957d8();
                  fStack0000000000000054 = 0.0;
                  uStack000000000000007c = 1;
                  uStack0000000000000070 = 1;
                  plVar27 = (long *)PTR_DAT_03cde808;
                  goto code_r0x03544d6c;
                }
                if (iVar19 < 5) {
                  if (iVar19 == 3) {
                    if (*(int *)(*(long *)PTR_DAT_03cde808 + 0xe4) == 0) {
                      thunk_FUN_01cb0d4c();
                    }
                    in_stack_00001278 = FUN_03594d0c();
                    uVar53 = 3;
LAB_0354520c:
                    uVar20 = CONCAT44(uVar53,iVar16);
LAB_03545258:
                    fStack0000000000000054 = 0.0;
                    unaff_s15 = 0.0;
                    plVar27 = (long *)PTR_DAT_03cde808;
                    plVar44 = (long *)PTR_DAT_03cb5ae0;
                    unaff_s14 = 1.0;
                    goto code_r0x03544d6c;
                  }
                  if (iVar19 == 4) goto LAB_03543b1c;
                }
                else {
                  if (iVar19 == 5) {
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
                    plVar27 = (long *)PTR_DAT_03cde808;
                    plVar44 = (long *)PTR_DAT_03cb5ae0;
                    unaff_s14 = fVar68;
                    goto code_r0x03544d6c;
                  }
                  if (iVar19 == 6) {
                    lVar28 = unaff_x19[99];
                    if (*(int *)(*(long *)PTR_DAT_03cb5a80 + 0xe4) == 0) {
                      thunk_FUN_01cb0d4c();
                    }
                    uVar22 = FUN_037707bc(lVar28,0,0);
                    if ((uVar22 & 1) != 0) {
                      plVar44 = (long *)unaff_x19[99];
                      uVar20 = (**(code **)(*unaff_x19 + 0x548))();
                      if (plVar44 == (long *)0x0) goto LAB_03547e54;
                      (**(code **)(*plVar44 + 0x558))
                                (plVar44,uVar20,*(undefined8 *)(*plVar44 + 0x560));
                      lVar28 = unaff_x19[99];
                      if (lVar28 == 0) goto LAB_03547e54;
                      *(int *)(lVar28 + 0x438) = (int)unaff_x19[0x87];
                      FUN_03588698(lVar28,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
                      plVar44 = (long *)unaff_x19[99];
                      if (plVar44 == (long *)0x0) goto LAB_03547e54;
                      (**(code **)(*plVar44 + 0x7d8))(plVar44,0,0,*(undefined8 *)(*plVar44 + 0x7e0))
                      ;
                      *(undefined1 *)(unaff_x19 + 0x65) = 1;
                    }
                    uVar20 = CONCAT44(3,*(undefined4 *)(in_stack_000001a0 + 7));
                    goto LAB_03545258;
                  }
                }
              }
            }
          }
LAB_03543c44:
          plVar44 = (long *)PTR_DAT_03cb5ae0;
          if (uVar13 == 0) {
            if (in_stack_000012ac == 0xad) {
              if ((unaff_x19[0x74] == 0) ||
                 (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0)) goto LAB_03547e54;
              if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
              *(undefined1 *)
               (lVar28 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23 + 400) =
                   0;
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
              if ((unaff_x19[0x74] == 0) ||
                 (lVar28 = *(long *)(unaff_x19[0x74] + 0x50), lVar28 == 0)) goto LAB_03547e54;
              if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_03547f94;
              uStack0000000000000070 = 0;
              lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
              *(float *)(lVar28 + 100) = fVar61;
              *(float *)(lVar28 + 0x68) = fVar50;
            }
          }
          else {
            lVar28 = unaff_x19[0x74];
            if ((lVar28 == 0) || (lVar32 = *(long *)(lVar28 + 0x38), lVar32 == 0))
            goto LAB_03547e54;
            uVar31 = *(uint *)(in_stack_000001a0 + 7);
            if (*(uint *)(lVar32 + 0x18) <= uVar31) goto LAB_03547f94;
            *(undefined1 *)(lVar32 + (long)(int)uVar31 * (long)(int)unaff_w23 + 400) = 0;
            *(uint *)((long)unaff_x19 + 0x4b4) = uVar31;
            lVar32 = *(long *)(lVar28 + 0x50);
            if (lVar32 == 0) goto LAB_03547e54;
            uVar31 = *(uint *)(lVar32 + 0x18);
            if (uVar31 <= *(uint *)(unaff_x19 + 0x97)) goto LAB_03547f94;
            lVar32 = lVar32 + 0x20;
            lVar36 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
            iVar16 = *(int *)(lVar36 + 0xc) + 1;
            *(int *)(lVar36 + 0xc) = iVar16;
            uVar42 = *(uint *)(unaff_x19 + 0x97);
            *(int *)(unaff_x19 + 0x98) = iVar16;
            if (uVar31 <= uVar42) goto LAB_03547f94;
            lVar36 = lVar32 + (long)(int)uVar42 * 0x60;
            *(float *)(lVar36 + 0x44) = fVar61;
            *(float *)(lVar36 + 0x48) = fVar50;
            *(int *)(lVar28 + 0x20) = *(int *)(lVar28 + 0x20) + 1;
            if (in_stack_000012ac == 0xa0) {
              *(int *)(lVar32 + (long)(int)uVar42 * 0x60) =
                   *(int *)(lVar32 + (long)(int)uVar42 * 0x60) + 1;
            }
          }
        }
        else {
          if (((in_stack_000012ac & 0xfffffffe) == 10) && ((int)unaff_x19[0x62] == 6)) {
            fVar63 = 0.0;
            if ((0.0 < fVar50) && ((char)unaff_x19[0x5e] == '\0')) {
              fVar63 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
            }
            param_3 = *(float *)((long)unaff_x19 + 0x4cc);
            param_2 = ZEXT416((uint)fStack00000000000000dc);
            if (fStack00000000000000dc <
                (param_3 - (*(float *)(unaff_x19 + 0x9c) - fVar50)) + fVar63) {
              if (*(int *)((long)unaff_x19 + 0x314) == -1) {
                *(uint *)((long)unaff_x19 + 0x314) = uVar31;
              }
              plVar27 = (long *)PTR_DAT_03cde808;
              plVar44 = (long *)PTR_DAT_03cb5ae0;
              if (*(int *)(*(long *)PTR_DAT_03cde808 + 0xe4) == 0) {
                thunk_FUN_01cb0d4c();
              }
              in_stack_00001278 = FUN_03594d0c();
              lVar28 = unaff_x19[99];
              if (*(int *)(*(long *)PTR_DAT_03cb5a80 + 0xe4) == 0) {
                thunk_FUN_01cb0d4c();
              }
              uVar22 = FUN_037707bc(lVar28,0,0);
              if ((uVar22 & 1) != 0) {
                plVar45 = (long *)unaff_x19[99];
                uVar20 = (**(code **)(*unaff_x19 + 0x548))();
                if (plVar45 == (long *)0x0) goto LAB_03547e54;
                (**(code **)(*plVar45 + 0x558))(plVar45,uVar20,*(undefined8 *)(*plVar45 + 0x560));
                lVar28 = unaff_x19[99];
                if (lVar28 == 0) goto LAB_03547e54;
                *(int *)(lVar28 + 0x438) = (int)unaff_x19[0x87];
                FUN_03588698(lVar28,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
                plVar45 = (long *)unaff_x19[99];
                if (plVar45 == (long *)0x0) goto LAB_03547e54;
                (**(code **)(*plVar45 + 0x7d8))(plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7e0));
                *(undefined1 *)(unaff_x19 + 0x65) = 1;
              }
              uVar20 = CONCAT44(3,uVar31);
              goto code_r0x03544d6c;
            }
          }
          if ((((in_stack_000012ac - 0x2007 < 0x23) &&
               ((1L << ((ulong)(in_stack_000012ac - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
              (in_stack_000012ac - 10 < 2)) || (in_stack_000012ac == 0xa0)) {
            plVar44 = (long *)PTR_DAT_03cb5ae0;
            if (in_stack_000012ac == 0xad) goto LAB_03543ddc;
LAB_035436f4:
            plVar44 = (long *)PTR_DAT_03cb5ae0;
            if ((in_stack_000012ac == 0x200b) || (in_stack_000012ac == 0x2060)) goto LAB_03543ddc;
            lVar28 = unaff_x19[0x74];
            if ((lVar28 == 0) || (lVar32 = *(long *)(lVar28 + 0x50), lVar32 == 0))
            goto LAB_03547e54;
            if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_03547f94;
            lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
            *(int *)(lVar32 + 0x2c) = *(int *)(lVar32 + 0x2c) + 1;
            *(int *)(lVar28 + 0x20) = *(int *)(lVar28 + 0x20) + 1;
          }
          else {
            if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            uVar22 = FUN_02f9488c(in_stack_000012ac,0);
            if (((uVar22 & 1) != 0) && (in_stack_000012ac != 0xad)) goto LAB_035436f4;
          }
          plVar44 = (long *)PTR_DAT_03cb5ae0;
          if (in_stack_000012ac == 0xa0) {
            if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x50), lVar28 == 0))
            goto LAB_03547e54;
            if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_03547f94;
            lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
            *(int *)(lVar28 + 0x20) = *(int *)(lVar28 + 0x20) + 1;
          }
        }
LAB_03543ddc:
        if (((int)unaff_x19[0x62] == 1) && ((uVar40 != uVar17 || (in_stack_000012ac == 0x2d)))) {
          if (unaff_x19[0xce] == 0) goto LAB_03547e54;
          fVar66 = *(float *)(unaff_x19 + 0x42);
          fVar63 = (float)FUN_03805444(unaff_x19[0xce] + 0x28,0);
          if (unaff_x19[0xce] == 0) goto LAB_03547e54;
          fVar50 = (float)FUN_0380544c(unaff_x19[0xce] + 0x28,0);
          lVar28 = unaff_x19[0xcd];
          fVar61 = in_stack_000000e0;
          if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
            fVar61 = 1.0;
          }
          if ((lVar28 == 0) || (*(long *)(lVar28 + 0x20) == 0)) goto LAB_03547e54;
          fVar51 = *(float *)((long)unaff_x19 + 0x43c);
          fVar69 = *(float *)(lVar28 + 0x2c);
          fVar52 = (float)FUN_03805944(*(long *)(lVar28 + 0x20),0);
          uVar21 = *(undefined8 *)_fStack00000000000000d0;
          fVar52 = (fVar66 / fVar63) * fVar50 * fVar61 * fVar51 * fVar69 * fVar52;
          if ((in_stack_000012ac == 10) &&
             (*(int *)((long)unaff_x19 + 0x4a4) != (int)unaff_x19[0x95])) {
            if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
            goto LAB_03547e54;
            uVar31 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
            if (*(uint *)(lVar28 + 0x18) <= uVar31) goto LAB_03547f94;
            if (unaff_x19[0xce] == 0) goto LAB_03547e54;
            fVar66 = *(float *)(lVar28 + (long)(int)uVar31 * (long)(int)unaff_w23 + 0x58);
            fVar63 = (float)FUN_03805444(unaff_x19[0xce] + 0x28,0);
            if (unaff_x19[0xce] == 0) goto LAB_03547e54;
            fVar50 = (float)FUN_0380544c(unaff_x19[0xce] + 0x28,0);
            lVar28 = unaff_x19[0xcd];
            fVar61 = in_stack_000000e0;
            if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
              fVar61 = 1.0;
            }
            if ((lVar28 == 0) || (*(long *)(lVar28 + 0x20) == 0)) goto LAB_03547e54;
            fVar51 = *(float *)((long)unaff_x19 + 0x43c);
            fVar69 = *(float *)(lVar28 + 0x2c);
            fVar52 = (float)FUN_03805944(*(long *)(lVar28 + 0x20),0);
            if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x50), lVar28 == 0))
            goto LAB_03547e54;
            if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_03547f94;
            uVar21 = *(undefined8 *)(lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60 + 100);
            fVar52 = (fVar66 / fVar63) * fVar50 * fVar61 * fVar51 * fVar69 * fVar52;
          }
          fVar66 = *(float *)((long)unaff_x19 + 0x4ec);
          fVar63 = 0.0;
          fVar61 = 0.0;
          if ((0.0 < fVar66) && ((char)unaff_x19[0x5e] == '\0')) {
            fVar61 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
          }
          fVar50 = *(float *)((long)unaff_x19 + 0x4cc);
          fVar51 = *(float *)(unaff_x19 + 0x9c);
          fVar69 = *(float *)(unaff_x19 + 0xcb);
          fStack0000000000000170 = (float)uVar21;
          fStack0000000000000174 = (float)((ulong)uVar21 >> 0x20);
          if ((char)unaff_x19[0x1e] == '\0') {
            if ((unaff_x19[0xcd] == 0) || (lVar28 = *(long *)(unaff_x19[0xcd] + 0x20), lVar28 == 0))
            goto LAB_03547e54;
            FUN_03805908(&stack0x000012b0,lVar28,0);
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
          fVar62 = fVar68;
          if ((uVar43 & 0x18) != 0) {
            fVar62 = DAT_00b46148;
          }
          if ((ABS(fVar69) + fVar52 * fVar63 * (1.0 - *(float *)(unaff_x19 + 0x60)) <
               fVar62 * fStack0000000000000174) &&
             ((fVar50 - (fVar51 - fVar66)) + fVar61 < fStack00000000000000dc)) {
            if (*(int *)(*(long *)PTR_DAT_03cde808 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            UnityEngine_XR_Interaction_Toolkit_Filtering_PokeStateData__set_axisAlignedPokeInteractionPoint
                      ();
            lVar28 = *(long *)(*(long *)puVar9 + 0xb8);
            memcpy(&stack0x000012b0,(void *)(lVar28 + 0x810),0x3b8);
            FUN_022f8780(lVar28 + 0x1338,&stack0x000012b0,*(undefined8 *)PTR_DAT_03cde7b8);
          }
        }
        lVar28 = unaff_x19[0x74];
        if ((lVar28 == 0) || (lVar32 = *(long *)(lVar28 + 0x38), lVar32 == 0)) goto LAB_03547e54;
        if (*(uint *)(lVar32 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
        lVar32 = lVar32 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
        uVar31 = *(uint *)(unaff_x19 + 0x97);
        *(uint *)(lVar32 + 0x5c) = uVar31;
        *(undefined4 *)(lVar32 + 0x60) = *(undefined4 *)((long)unaff_x19 + 0x4c4);
        if ((uVar40 == uVar17) ||
           ((in_stack_000012ac < 0xe && ((1 << (ulong)(in_stack_000012ac & 0x1f) & 0x2c00U) != 0))))
        {
          lVar32 = *(long *)(lVar28 + 0x50);
          if (lVar32 == 0) goto LAB_03547e54;
          if (*(uint *)(lVar32 + 0x18) <= uVar31) goto LAB_03547f94;
          if (*(int *)(lVar32 + (long)(int)uVar31 * 0x60 + 0x24) == 1) goto LAB_03544170;
        }
        else {
LAB_03544170:
          lVar28 = *(long *)(lVar28 + 0x50);
          if (lVar28 == 0) goto LAB_03547e54;
          if (*(uint *)(lVar28 + 0x18) <= uVar31) goto LAB_03547f94;
          *(int *)(lVar28 + (long)(int)uVar31 * 0x60 + 0x6c) = (int)unaff_x19[0x54];
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
              fVar50 = *(float *)(in_stack_000001a0 + 2);
              fVar61 = (float)FUN_03809c88(&stack0x00001250,0);
              if (unaff_x19[0x20] != 0) {
                param_3 = *(float *)(unaff_x19 + 0x60);
                fVar66 = 1.0 - param_3;
                fVar63 = fVar63 + fVar66 * (*(float *)((long)unaff_x19 + 0x2d4) +
                                           unaff_s12 * (fVar49 * fVar50 + fVar61) +
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
                              (fStack00000000000000f0 + fVar48 + *(float *)(unaff_x19[0x20] + 0x1a4)
                              ));
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
        lVar28 = unaff_x19[0x74];
        if ((lVar28 == 0) || (lVar32 = *(long *)(lVar28 + 0x38), lVar32 == 0)) goto LAB_03547e54;
        uVar31 = *(uint *)(in_stack_000001a0 + 7);
        if (*(uint *)(lVar32 + 0x18) <= uVar31) goto LAB_03547f94;
        *(float *)(lVar32 + (long)(int)uVar31 * (long)(int)unaff_w23 + 0x13c) = fVar63;
        if (in_stack_000012ac == 0xd) {
          *(float *)(unaff_x19 + 0xcb) = *(float *)((long)unaff_x19 + 0x444) + 0.0;
        }
        if (((int)unaff_x19[0x62] == 5) &&
           (((0xd < in_stack_000012ac || ((1 << (ulong)(in_stack_000012ac & 0x1f) & 0x2c00U) == 0))
            && (1 < in_stack_000012ac - 0x2028)))) {
          lVar32 = *(long *)(lVar28 + 0x58);
          if (lVar32 == 0) goto LAB_03547e54;
          iVar16 = *(int *)((long)unaff_x19 + 0x4c4) + 1;
          if (*(int *)(lVar32 + 0x18) < iVar16) {
            if (*(int *)(*(long *)PTR_DAT_03cde788 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            FUN_020731e4((long *)(lVar28 + 0x58),iVar16,1,*(undefined8 *)PTR_DAT_03cde778);
            lVar28 = unaff_x19[0x74];
            if (lVar28 == 0) goto LAB_03547e54;
          }
          plVar44 = (long *)PTR_DAT_03cb5ae0;
          lVar32 = *(long *)(lVar28 + 0x58);
          if (lVar32 == 0) goto LAB_03547e54;
          uVar43 = *(uint *)((long)unaff_x19 + 0x4c4);
          if (*(uint *)(lVar32 + 0x18) <= uVar43) goto LAB_03547f94;
          lVar32 = lVar32 + 0x20;
          lVar36 = lVar32 + (long)(int)uVar43 * 0x14;
          *(int *)(lVar36 + 8) = (int)unaff_x19[0x99];
          fVar66 = *(float *)(lVar36 + 0x10);
          param_2 = ZEXT416((uint)fVar66);
          fVar63 = *(float *)(unaff_x19 + 0x9b);
          if (fVar66 <= *(float *)(unaff_x19 + 0x9b)) {
            fVar63 = fVar66;
          }
          *(float *)(lVar36 + 0x10) = fVar63;
          if (*(char *)((long)unaff_x19 + 0x374) != '\0') {
            *(undefined1 *)((long)unaff_x19 + 0x374) = 0;
            *(undefined4 *)(lVar32 + (long)(int)uVar43 * 0x14) =
                 *(undefined4 *)((long)unaff_x19 + 0x4a4);
          }
          uVar31 = *(uint *)(in_stack_000001a0 + 7);
          *(uint *)(lVar32 + (long)(int)uVar43 * 0x14 + 4) = uVar31;
        }
        uVar43 = in_stack_000012ac;
        if (((in_stack_000012ac < 0xc) && ((1 << (ulong)(in_stack_000012ac & 0x1f) & 0xc08U) != 0))
           || ((in_stack_000012ac - 0x2028 < 2 ||
               ((in_stack_000012ac == 0x2d && uVar40 == uVar17 || (uVar31 == uStack000000000000004c)
                ))))) {
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
              lVar28 = *(long *)PTR_DAT_03cde808;
              *(float *)(unaff_x19 + 0x9b) = *(float *)(unaff_x19 + 0x9b) - fVar63;
              *(float *)((long)unaff_x19 + 0x4ec) = fVar63 + *(float *)((long)unaff_x19 + 0x4ec);
              if (*(int *)(lVar28 + 0xe4) == 0) {
                thunk_FUN_01cb0d4c();
                lVar28 = *(long *)puVar9;
              }
              lVar32 = *(long *)(lVar28 + 0xb8);
              if (*(int *)(lVar32 + 0x838) == (int)unaff_x19[0x97]) {
                if (*(int *)(lVar28 + 0xe4) == 0) {
                  thunk_FUN_01cb0d4c();
                  lVar32 = *(long *)(*(long *)PTR_DAT_03cde808 + 0xb8);
                }
                Unity_Collections_LowLevel_Unsafe_UnsafeList<DebugOccluderStats>__Dispose
                          (&stack0x000001e0,lVar32 + 0x1338,*(undefined8 *)PTR_DAT_03cde7b0);
                puVar9 = PTR_DAT_03cde808;
                lVar28 = *(long *)PTR_DAT_03cde808;
                memcpy((void *)(*(long *)(lVar28 + 0xb8) + 0x810),&stack0x000001e0,0x3b8);
                thunk_FUN_01cc8040(*(long *)(lVar28 + 0xb8) + 0x8a8,0);
                lVar28 = *(long *)(*(long *)puVar9 + 0xb8);
                *(float *)(lVar28 + 0x848) = fVar63 + *(float *)(lVar28 + 0x848);
                *(float *)(lVar28 + 0x894) = fVar63 + *(float *)(lVar28 + 0x894);
                memcpy(&stack0x000012b0,(void *)(lVar28 + 0x810),0x3b8);
                FUN_022f8780(lVar28 + 0x1338,&stack0x000012b0,*(undefined8 *)PTR_DAT_03cde7b8);
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
          lVar28 = unaff_x19[0x74];
          if ((lVar28 == 0) || (lVar32 = *(long *)(lVar28 + 0x50), lVar32 == 0)) goto LAB_03547e54;
          if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_03547f94;
          lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
          iVar19 = (int)unaff_x19[0x95];
          *(int *)(lVar32 + 0x38) = iVar19;
          iVar16 = iVar19;
          if (iVar19 <= *(int *)((long)unaff_x19 + 0x4ac)) {
            iVar16 = *(int *)((long)unaff_x19 + 0x4ac);
          }
          *(int *)((long)unaff_x19 + 0x4ac) = iVar16;
          *(int *)(lVar32 + 0x3c) = iVar16;
          iVar2 = *(int *)((long)unaff_x19 + 0x4a4);
          *(int *)(unaff_x19 + 0x96) = iVar2;
          *(int *)(lVar32 + 0x40) = iVar2;
          iVar18 = *(int *)((long)unaff_x19 + 0x4ac);
          if (iVar16 <= *(int *)((long)unaff_x19 + 0x4b4)) {
            iVar18 = *(int *)((long)unaff_x19 + 0x4b4);
          }
          *(int *)((long)unaff_x19 + 0x4b4) = iVar18;
          *(int *)(lVar32 + 0x44) = iVar18;
          *(int *)(lVar32 + 0x24) = (iVar2 - iVar19) + 1;
          iVar16 = *(int *)((long)unaff_x19 + 0x4bc);
          *(int *)(lVar32 + 0x28) = iVar16;
          *(int *)(lVar32 + 0x30) = (iVar18 - (iVar19 + iVar16)) + 1;
          lVar28 = *(long *)(lVar28 + 0x38);
          if (lVar28 == 0) goto LAB_03547e54;
          if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001a0 + 8)) goto LAB_03547f94;
          *(undefined4 *)(lVar32 + 0x70) =
               *(undefined4 *)
                (lVar28 + (long)(int)*(uint *)(in_stack_000001a0 + 8) * (long)(int)unaff_w23 + 0x114
                );
          *(float *)(lVar32 + 0x74) = fVar66;
          lVar28 = unaff_x19[0x74];
          if ((lVar28 == 0) || (lVar32 = *(long *)(lVar28 + 0x50), lVar32 == 0)) goto LAB_03547e54;
          if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_03547f94;
          lVar28 = *(long *)(lVar28 + 0x38);
          if (lVar28 == 0) goto LAB_03547e54;
          if (*(uint *)(lVar28 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4b4)) goto LAB_03547f94;
          fVar61 = fVar61 - fVar49;
          param_2 = ZEXT416((uint)fVar61);
          lVar32 = lVar32 + 0x20 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
          uVar53 = *(undefined4 *)
                    (lVar28 + (long)(int)*(uint *)((long)unaff_x19 + 0x4b4) * (long)(int)unaff_w23 +
                    0x120);
          *(float *)(lVar32 + 0x5c) = fVar61;
          *(undefined4 *)(lVar32 + 0x58) = uVar53;
          lVar28 = unaff_x19[0x74];
          if ((lVar28 == 0) || (lVar32 = *(long *)(lVar28 + 0x50), lVar32 == 0)) goto LAB_03547e54;
          uVar31 = *(uint *)(unaff_x19 + 0x97);
          if (*(uint *)(lVar32 + 0x18) <= uVar31) goto LAB_03547f94;
          lVar32 = lVar32 + 0x20;
          lVar36 = lVar32 + (long)(int)uVar31 * 0x60;
          *(float *)(lVar36 + 0x28) = *(float *)(lVar36 + 0x58) - unaff_s12 * unaff_s13;
          *(float *)(lVar36 + 0x40) = in_stack_00000130._4_4_;
          if (*(int *)(lVar36 + 4) == 1) {
            *(int *)(lVar32 + (long)(int)uVar31 * 0x60 + 0x4c) = (int)unaff_x19[0x54];
          }
          if ((unaff_x19[0x20] == 0) || (lVar36 = *(long *)(lVar28 + 0x38), lVar36 == 0))
          goto LAB_03547e54;
          uVar42 = *(uint *)((long)unaff_x19 + 0x4b4);
          if (*(uint *)(lVar36 + 0x18) <= uVar42) goto LAB_03547f94;
          if ((*(char *)(lVar36 + 0x20 + (long)(int)uVar42 * (long)(int)unaff_w23 + 0x170) == '\0')
             && (uVar42 = *(uint *)(unaff_x19 + 0x96), *(uint *)(lVar36 + 0x18) <= uVar42))
          goto LAB_03547f94;
          lVar32 = lVar32 + (long)(int)uVar31 * 0x60;
          fVar63 = (1.0 - *(float *)(unaff_x19 + 0x60)) *
                   (*(float *)((long)unaff_x19 + 0x2d4) +
                   in_stack_00000100 *
                   (fStack00000000000000f0 + fVar48 + *(float *)(unaff_x19[0x20] + 0x1a4)));
          fVar48 = -fVar63;
          if ((char)unaff_x19[0x1e] != '\0') {
            fVar48 = fVar63;
          }
          *(float *)(lVar32 + 0x3c) =
               *(float *)(lVar36 + 0x20 + (long)(int)uVar42 * (long)(int)unaff_w23 + 0x11c) + fVar48
          ;
          param_3 = 0.0 - *(float *)((long)unaff_x19 + 0x4ec);
          *(float *)(lVar32 + 0x2c) = in_stack_00000068._4_4_ + (fVar61 - fVar66);
          *(float *)(lVar32 + 0x30) = fVar61;
          *(float *)(lVar32 + 0x34) = param_3;
          *(float *)(lVar32 + 0x38) = fVar66;
          plVar27 = (long *)PTR_DAT_03cde808;
          if ((((in_stack_000012ac & 0xfffffffe) == 10) ||
              (uVar40 == uVar17 && in_stack_000012ac == 0x2d)) || (in_stack_000012ac - 0x2028 < 2))
          {
            if (*(int *)(*(long *)PTR_DAT_03cde808 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            UnityEngine_XR_Interaction_Toolkit_Filtering_PokeStateData__set_axisAlignedPokeInteractionPoint
                      ();
            lVar28 = unaff_x19[0x97];
            iVar19 = *(int *)((long)unaff_x19 + 0x4a4);
            in_stack_000001a0[10] = 0;
            iVar16 = (int)lVar28 + 1;
            lVar28 = unaff_x19[0x74];
            *(int *)(unaff_x19 + 0x97) = iVar16;
            *(int *)(unaff_x19 + 0x95) = iVar19 + 1;
            if ((lVar28 == 0) || (*(long *)(lVar28 + 0x50) == 0)) goto LAB_03547e54;
            if (*(int *)(*(long *)(lVar28 + 0x50) + 0x18) <= iVar16) {
              FUN_03595628();
              lVar28 = unaff_x19[0x74];
              if (lVar28 == 0) goto LAB_03547e54;
            }
            lVar28 = *(long *)(lVar28 + 0x38);
            if (lVar28 == 0) goto LAB_03547e54;
            if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_03547f94;
            fVar48 = *(float *)(lVar28 + (long)(int)*(uint *)(in_stack_000001a0 + 7) *
                                         (long)(int)unaff_w23 + 0x14c);
            if (*(float *)((long)unaff_x19 + 0x2ec) == DAT_00b45db4) {
              if ((in_stack_000012ac == 0x2029) || (fVar63 = 0.0, in_stack_000012ac == 10)) {
                fVar63 = *(float *)(unaff_x19 + 0x5f);
              }
              uVar25 = 0;
              fVar63 = fVar48 + (0.0 - *(float *)(unaff_x19 + 0x9c)) +
                       fStack0000000000000078 *
                       (in_stack_00000040._4_4_ + *(float *)(unaff_x19 + 0x5d)) +
                       in_stack_00000100 * (*(float *)((long)unaff_x19 + 0x2e4) + fVar63) +
                       *(float *)((long)unaff_x19 + 0x4ec);
            }
            else {
              if ((in_stack_000012ac == 0x2029) || (fVar63 = 0.0, in_stack_000012ac == 10)) {
                fVar63 = *(float *)(unaff_x19 + 0x5f);
              }
              uVar25 = 1;
              fVar63 = *(float *)((long)unaff_x19 + 0x4ec) +
                       *(float *)((long)unaff_x19 + 0x2ec) +
                       in_stack_00000100 * (*(float *)((long)unaff_x19 + 0x2e4) + fVar63);
            }
            lVar28 = *plVar27;
            *(float *)((long)unaff_x19 + 0x4ec) = fVar63;
            *(undefined1 *)(unaff_x19 + 0x5e) = uVar25;
            if (*(int *)(lVar28 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
              lVar28 = *plVar27;
            }
            fVar63 = *(float *)(unaff_x19 + 0x88);
            param_3 = *(float *)((long)unaff_x19 + 0x444);
            uVar21 = *(undefined8 *)(*(long *)(lVar28 + 0xb8) + 0x1730);
            *(float *)((long)unaff_x19 + 0x4e4) = fVar48;
            param_2._0_8_ = NEON_rev64(uVar21,4);
            param_2._8_8_ = 0;
            in_stack_000001a0[0xe] = param_2._0_8_;
            *(float *)(unaff_x19 + 0xcb) = fVar63 + 0.0 + param_3;
            UnityEngine_XR_Interaction_Toolkit_Filtering_PokeStateData__set_axisAlignedPokeInteractionPoint
                      ();
            UnityEngine_XR_Interaction_Toolkit_Filtering_PokeStateData__set_axisAlignedPokeInteractionPoint
                      ();
            *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
            uStack000000000000007c = 1;
            uStack0000000000000070 = 1;
            unaff_s14 = fVar68;
            goto code_r0x03544d6c;
          }
          if (in_stack_000012ac == 3) {
            if (unaff_x19[0x91] == 0) goto LAB_03547e54;
            in_stack_00001278 = (uint)*(undefined8 *)(unaff_x19[0x91] + 0x18);
            uVar43 = 3;
          }
        }
        plVar27 = (long *)PTR_DAT_03cde808;
        lVar28 = *(long *)(lVar28 + 0x38);
        if (lVar28 == 0) goto LAB_03547e54;
        uVar40 = *(uint *)(in_stack_000001a0 + 7);
        uVar17 = *(uint *)(lVar28 + 0x18);
        if (uVar17 <= uVar40) goto LAB_03547f94;
        lVar28 = lVar28 + 0x20;
        if (*(char *)(lVar28 + (long)(int)uVar40 * (long)(int)unaff_w23 + 0x170) != '\0') {
          lVar32 = lVar28 + (long)(int)uVar40 * (long)(int)unaff_w23;
          auVar56 = *(undefined1 (*) [16])(unaff_x19 + 0x9e);
          auVar58 = NEON_ext(auVar56,auVar56,8,1);
          uVar21 = *(undefined8 *)(lVar32 + 0xf4);
          param_3 = (float)uVar21;
          uVar64 = *(undefined8 *)(lVar32 + 0x100);
          fVar48 = (float)uVar64;
          fVar63 = (float)((ulong)uVar64 >> 0x20);
          param_2._0_4_ = (float)-(uint)(auVar56._0_4_ < param_3);
          param_2._4_4_ = (float)-(uint)(auVar56._4_4_ < (float)((ulong)uVar21 >> 0x20));
          param_2._8_4_ = -(uint)(fVar48 < auVar58._0_4_);
          param_2._12_4_ = -(uint)(fVar63 < auVar58._4_4_);
          auVar4._8_4_ = fVar48;
          auVar4._0_8_ = uVar21;
          auVar4._12_4_ = fVar63;
          auVar56 = auVar56 ^ (auVar56 ^ auVar4) & ~param_2;
          unaff_x19[0x9f] = auVar56._8_8_;
          unaff_x19[0x9e] = auVar56._0_8_;
        }
        if (((*(int *)((long)unaff_x19 + 0x304) != 3) && (*(int *)((long)unaff_x19 + 0x304) != 0))
           || ((*(uint *)(unaff_x19 + 0x62) < 7 &&
               ((1 << (ulong)(*(uint *)(unaff_x19 + 0x62) & 0x1f) & 0x4aU) != 0)))) {
          if ((((uVar13 == 0) && (uVar43 != 0x2d)) && (uVar43 != 0x200b)) && (uVar43 != 0xad)) {
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
            if (*(int *)(*plVar27 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            UnityEngine_XR_Interaction_Toolkit_Filtering_PokeStateData__set_axisAlignedPokeInteractionPoint
                      ();
          }
          else {
            if (*(char *)((long)unaff_x19 + 0x309) != '\0') goto LAB_03544c58;
            if ((int)uVar43 < 0x2007) {
              if (uVar43 == 0x2d) {
                if (0 < (int)uVar40) {
                  if (uVar17 <= uVar40 - 1) goto LAB_03547f94;
                  uVar3 = *(undefined2 *)(lVar28 + (ulong)(uVar40 - 1) * (ulong)unaff_w23 + 4);
                  if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
                    thunk_FUN_01cb0d4c();
                  }
                  uVar22 = FUN_02f915ec(uVar3,0);
                  if ((uVar22 & 1) != 0) {
                    if ((unaff_x19[0x74] == 0) ||
                       (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0)) goto LAB_03547e54;
                    if (*(uint *)(lVar28 + 0x18) <= *(int *)(in_stack_000001a0 + 7) - 1U)
                    goto LAB_03547f94;
                    if (*(int *)(lVar28 + (long)(int)(*(int *)(in_stack_000001a0 + 7) - 1U) *
                                          (long)(int)unaff_w23 + 0x5c) == (int)unaff_x19[0x97])
                    goto LAB_03544d2c;
                  }
                }
              }
              else if (uVar43 == 0xa0) goto LAB_03544dd8;
LAB_03545060:
              lVar28 = *plVar27;
              if (*(int *)(lVar28 + 0xe4) == 0) {
                thunk_FUN_01cb0d4c();
                lVar28 = *plVar27;
              }
              uStack000000000000007c = 0;
              uVar13 = 0;
              *(undefined4 *)(*(long *)(lVar28 + 0xb8) + 0xf80) = 0xffffffff;
              goto LAB_03544c98;
            }
            if (((0x28 < uVar43 - 0x2007) ||
                ((1L << ((ulong)(uVar43 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
               (uVar43 != 0x2060)) goto LAB_03545060;
LAB_03544dd8:
            if (*(int *)(*(long *)PTR_DAT_03cde790 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            uVar22 = FUN_035ba588(uVar43,0);
            if ((uVar22 & 1) == 0) {
LAB_03544e24:
              if (*(int *)(*(long *)PTR_DAT_03cde790 + 0xe4) == 0) {
                thunk_FUN_01cb0d4c();
              }
              uVar22 = FUN_035ba5e4(in_stack_000012ac,0);
              if ((uVar22 & 1) != 0) goto LAB_03544e50;
              if ((*(char *)((long)unaff_x19 + 0x309) != '\0') ||
                 (uVar17 = *(int *)(in_stack_000001a0 + 7) + 1,
                 iStack0000000000000058 <= (int)uVar17)) goto LAB_03544c58;
              if ((unaff_x19[0x74] != 0) &&
                 (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 != 0)) {
                if (uVar17 < *(uint *)(lVar28 + 0x18)) {
                  uVar3 = *(undefined2 *)(lVar28 + (long)(int)uVar17 * (long)(int)unaff_w23 + 0x24);
                  if (*(int *)(*(long *)PTR_DAT_03cde790 + 0xe4) == 0) {
                    thunk_FUN_01cb0d4c();
                  }
                  uVar22 = FUN_035ba5e4(uVar3,0);
                  if ((uVar22 & 1) == 0) goto LAB_03544c58;
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
            uVar22 = FUN_035b0a28(0);
            if ((uVar22 & 1) != 0) goto LAB_03544e24;
LAB_03544e50:
            if (*(int *)(*(long *)PTR_DAT_03cde760 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            lVar28 = UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator__get_negateMode
                               (0);
            if ((lVar28 == 0) || (*(long *)(lVar28 + 0x10) == 0)) goto LAB_03547e54;
            uVar22 = FUN_029c9304(*(long *)(lVar28 + 0x10),in_stack_000012ac,
                                  *(undefined8 *)PTR_DAT_03cde730);
            if ((int)uStack000000000000004c <= *(int *)(in_stack_000001a0 + 7)) {
              if ((uVar22 & 1) == 0) {
                uStack000000000000007c = 0;
                goto LAB_03545090;
              }
LAB_03544fbc:
              uVar13 = (uint)(uVar13 != 0);
              if (uVar14 != uVar15 || ((uStack000000000000007c ^ 0xffffffff) & 1) != 0)
              goto LAB_03544d2c;
              goto LAB_03544c90;
            }
            if (*(int *)(*(long *)PTR_DAT_03cde760 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            lVar28 = UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator__get_negateMode
                               (0);
            if (((lVar28 == 0) || (unaff_x19[0x74] == 0)) ||
               (lVar32 = *(long *)(unaff_x19[0x74] + 0x38), lVar32 == 0)) goto LAB_03547e54;
            if (*(uint *)(lVar32 + 0x18) <= *(int *)(in_stack_000001a0 + 7) + 1U) goto LAB_03547f94;
            if (*(long *)(lVar28 + 0x18) == 0) goto LAB_03547e54;
            uVar17 = FUN_029c9304(*(long *)(lVar28 + 0x18),
                                  *(undefined2 *)
                                   (lVar32 + (long)(int)(*(int *)(in_stack_000001a0 + 7) + 1U) *
                                             (long)(int)unaff_w23 + 0x24),
                                  *(undefined8 *)PTR_DAT_03cde730);
            if ((uVar22 & 1) != 0) goto LAB_03544fbc;
            uStack000000000000007c = uVar17 & uStack000000000000007c;
            uVar13 = uStack000000000000007c & uVar13 != 0;
            if (((uStack000000000000007c & 1) != 0) || (((uVar17 ^ 1) & 1) != 0)) goto LAB_03544c98;
            uStack000000000000007c = 0;
          }
          if (uVar13 != 0) {
            if (*(int *)(*plVar27 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            UnityEngine_XR_Interaction_Toolkit_Filtering_PokeStateData__set_axisAlignedPokeInteractionPoint
                      ();
          }
        }
LAB_03544d2c:
        if (*(int *)(*plVar27 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        UnityEngine_XR_Interaction_Toolkit_Filtering_PokeStateData__set_axisAlignedPokeInteractionPoint
                  ();
        *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
        goto code_r0x03544d6c;
      }
      if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
      goto LAB_03547e54;
      if (*(uint *)(lVar28 + 0x18) <= uVar14) goto LAB_03547f94;
      lVar28 = lVar28 + (long)(int)uVar14 * (long)(int)unaff_w23;
      *(undefined1 *)(lVar28 + 400) = 0;
      *(undefined2 *)(lVar28 + 0x24) = 0x200b;
      *(undefined4 *)(lVar28 + 0x5c) = 0;
      *(uint *)(in_stack_000001a0 + 7) = uVar14 + 1;
    }
  } while( true );
LAB_03545984:
  if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_03547f94;
  uVar41 = (ulong)uVar13;
  piVar39 = (int *)(lVar32 + uVar41 * 0x178);
  lVar36 = *(long *)(piVar39 + 8);
  uVar47 = *(ushort *)(piVar39 + 1);
  if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  uVar40 = (uint)uVar47;
  bVar11 = FUN_02f915ec(uVar47,0);
  if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_03547f94;
  if ((unaff_x19[0x74] == 0) || (lVar23 = *(long *)(unaff_x19[0x74] + 0x50), lVar23 == 0))
  goto LAB_03547e54;
  uVar15 = *(uint *)(lVar32 + uVar41 * 0x178 + 0x3c);
  if (*(uint *)(lVar23 + 0x18) <= uVar15) goto LAB_03547f94;
  lVar23 = lVar23 + (long)(int)uVar15 * 0x60;
  iVar19 = *(int *)(lVar23 + 0x28);
  iVar18 = *(int *)(lVar23 + 0x2c);
  uVar31 = *(uint *)(lVar23 + 0x40);
  uVar43 = *(uint *)(lVar23 + 0x44);
  fVar68 = *(float *)(lVar23 + 0x58);
  fVar63 = *(float *)(lVar23 + 0x5c);
  uVar42 = *(uint *)(lVar23 + 0x6c);
  fVar50 = *(float *)(lVar23 + 0x60);
  fVar69 = *(float *)(lVar23 + 100);
  iVar2 = *(int *)(lVar23 + 0x20);
  fVar51 = *(float *)(lVar23 + 0x70);
  fVar52 = *(float *)(lVar23 + 0x74);
  fVar61 = *(float *)(lVar23 + 0x50);
  fVar49 = *(float *)(lVar23 + 0x78);
  fVar66 = *(float *)(lVar23 + 0x7c);
  if ((int)uVar42 < 9) {
    if ((int)uVar42 < 3) {
      if (uVar42 == 1) {
        if ((char)unaff_x19[0x1e] == '\0') {
          in_stack_00000100 = fVar69 + 0.0;
        }
        else {
          in_stack_00000100 = 0.0 - fVar63;
        }
        fStack00000000000000f0 = 0.0;
        fStack0000000000000104 = 0.0;
      }
      else if (uVar42 == 2) {
        in_stack_00000100 = (fVar69 + fVar50 * 0.5) - fVar63 * 0.5;
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
        if (((((uVar47 & 1) == 0) && (uVar40 != 3)) && (uVar42 == 8)) &&
           ((int)uVar13 <= (int)uVar43)) goto LAB_03545b90;
      }
    }
    else if (uVar42 != 3) {
      if (uVar42 != 4) goto LAB_03545b50;
      fStack00000000000000f0 = 0.0;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar63 = 0.0;
      }
      in_stack_00000100 = (fVar50 + fVar69) - fVar63;
      fStack0000000000000104 = 0.0;
    }
  }
  else if (uVar42 == 0x10) {
    if ((int)uVar13 <= (int)uVar43) {
      if (uVar40 < 0xad) {
        if ((uVar40 != 3) && (uVar40 != 10)) goto LAB_03545b90;
      }
      else if ((uVar40 != 0xad) && ((uVar40 != 0x200b && (uVar40 != 0x2060)))) {
LAB_03545b90:
        if (*(uint *)(lVar28 + 0x18) <= uVar31) goto LAB_03547f94;
        uVar3 = *(undefined2 *)(lVar32 + (long)(int)uVar31 * 0x178 + 4);
        if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        uVar22 = FUN_02f9472c(uVar3,0);
        if ((uVar22 & 1) == 0) {
          bVar1 = (int)uVar15 < (int)unaff_x19[0x97];
        }
        else {
          bVar1 = false;
        }
        if ((!bVar1 && (uVar42 >> 4 & 1) == 0) && (fVar63 <= fVar50)) {
          in_stack_00000100 = -0.0;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_00000100 = fVar50;
          }
          in_stack_00000100 = fVar69 + in_stack_00000100;
          goto LAB_03545c80;
        }
        if (((uVar13 == 0) || (uVar15 != uVar14)) || (uVar13 == *(uint *)((long)unaff_x19 + 0x35c)))
        {
          in_stack_00000100 = -0.0;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_00000100 = fVar50;
          }
          if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
          }
          in_stack_00000100 = fVar69 + in_stack_00000100;
          uStack0000000000000048 = FUN_02f9488c(uVar40,0);
          fStack0000000000000104 = 0.0;
          fStack00000000000000f0 = 0.0;
        }
        else {
          cVar26 = (char)unaff_x19[0x1e];
          iVar18 = (iVar18 - iVar2) - (uStack0000000000000048 & 1);
          fVar69 = -fVar63;
          if (cVar26 != '\0') {
            fVar69 = fVar63;
          }
          if (iVar18 < 1) {
            fVar63 = 1.0;
            iVar18 = 1;
          }
          else {
            fVar63 = *(float *)((long)unaff_x19 + 0x30c);
          }
          if (uVar40 == 9) {
LAB_03547944:
            fVar63 = ((fVar50 + fVar69) * (1.0 - fVar63)) / (float)iVar18;
            if (cVar26 == '\0') {
              in_stack_00000100 = in_stack_00000100 + fVar63;
              fStack0000000000000104 = fStack0000000000000104 + 0.0;
              fStack00000000000000f0 = fStack00000000000000f0 + 0.0;
            }
            else {
              in_stack_00000100 = in_stack_00000100 - fVar63;
            }
          }
          else {
            if (uVar40 != 0xa0) {
              if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
                thunk_FUN_01cb0d4c();
              }
              uVar22 = FUN_02f9488c(uVar40,0);
              cVar26 = (char)unaff_x19[0x1e];
              if ((uVar22 & 1) != 0) goto LAB_03547944;
            }
            fVar63 = ((fVar50 + fVar69) * fVar63) /
                     (float)(int)((iVar2 - ((uStack0000000000000048 ^ 0xffffffff) & 1)) + iVar19);
            if (cVar26 == '\0') {
              in_stack_00000100 = in_stack_00000100 + fVar63;
              fStack0000000000000104 = fStack0000000000000104 + 0.0;
              fStack00000000000000f0 = fStack00000000000000f0 + 0.0;
            }
            else {
              in_stack_00000100 = in_stack_00000100 - fVar63;
            }
          }
        }
      }
    }
  }
  else if (uVar42 == 0x20) {
    in_stack_00000100 = (fVar69 + fVar50 * 0.5) - (fVar51 + fVar49) * 0.5;
    fStack00000000000000f0 = 0.0;
    fStack0000000000000104 = 0.0;
  }
  uVar42 = (uint)*(undefined8 *)(lVar28 + 0x18);
  if (uVar42 <= uVar13) goto LAB_03547f94;
  lVar23 = lVar32 + uVar41 * 0x178;
  fVar63 = fStack00000000000000b0 + in_stack_00000100;
  fVar50 = fStack0000000000000190 + fStack0000000000000104;
  fVar69 = in_stack_000000a8._4_4_ + fStack00000000000000f0;
  plVar44 = (long *)PTR_DAT_03cde808;
  if (*(char *)(lVar23 + 0x170) == '\0') goto LAB_035464b8;
  iVar19 = *piVar39;
  if (iVar19 == 0) {
    fVar48 = fmodf(*(float *)((long)unaff_x19 + 0x34c) * (float)(int)uVar15,1.0);
    iVar18 = *(int *)((long)unaff_x19 + 0x344);
    if (iVar18 < 2) {
      if (iVar18 == 0) {
        lVar34 = lVar32 + uVar41 * 0x178;
        *(undefined4 *)(lVar34 + 100) = 0;
        *(undefined4 *)(lVar34 + 0x8c) = 0;
        *(undefined4 *)(lVar34 + 0xb4) = 0x3f800000;
        *(undefined4 *)(lVar34 + 0xdc) = 0x3f800000;
      }
      else if (iVar18 == 1) {
        lVar34 = lVar32 + uVar41 * 0x178;
        fVar66 = *(float *)(lVar34 + 0x48);
        pfVar35 = (float *)(lVar34 + 100);
        if (*(int *)((long)unaff_x19 + 0x29c) == 0x208) {
          lVar34 = lVar32 + uVar41 * 0x178;
          fVar49 = *(float *)(lVar34 + 0x70);
          *pfVar35 = fVar48 + ((in_stack_00000100 + fVar66) - *(float *)(unaff_x19 + 0x9e)) /
                              (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar34 + 0x8c) =
               fVar48 + ((in_stack_00000100 + fVar49) - *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar34 + 0xb4) =
               fVar48 + ((in_stack_00000100 + *(float *)(lVar34 + 0x98)) -
                        *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar34 + 0xdc) =
               fVar48 + ((in_stack_00000100 + *(float *)(lVar34 + 0xc0)) -
                        *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
        }
        else {
          lVar34 = lVar32 + uVar41 * 0x178;
          fVar49 = fVar49 - fVar51;
          fVar52 = *(float *)(lVar34 + 0x70);
          fVar62 = *(float *)(lVar34 + 0x98);
          fVar59 = *(float *)(lVar34 + 0xc0);
          *pfVar35 = fVar48 + (fVar66 - fVar51) / fVar49;
          *(float *)(lVar34 + 0x8c) = fVar48 + (fVar52 - fVar51) / fVar49;
          *(float *)(lVar34 + 0xb4) = fVar48 + (fVar62 - fVar51) / fVar49;
          *(float *)(lVar34 + 0xdc) = fVar48 + (fVar59 - fVar51) / fVar49;
        }
      }
    }
    else if (iVar18 == 2) {
      lVar34 = lVar32 + uVar41 * 0x178;
      *(float *)(lVar34 + 100) =
           fVar48 + ((in_stack_00000100 + *(float *)(lVar34 + 0x48)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar34 + 0x8c) =
           fVar48 + ((in_stack_00000100 + *(float *)(lVar34 + 0x70)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar34 + 0xb4) =
           fVar48 + ((in_stack_00000100 + *(float *)(lVar34 + 0x98)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar34 + 0xdc) =
           fVar48 + ((in_stack_00000100 + *(float *)(lVar34 + 0xc0)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
    }
    else if (iVar18 == 3) {
      iVar18 = (int)unaff_x19[0x69];
      if (iVar18 < 2) {
        if (iVar18 == 0) {
          lVar34 = lVar32 + uVar41 * 0x178;
          *(undefined4 *)(lVar34 + 0x68) = 0;
          *(undefined4 *)(lVar34 + 0x90) = 0x3f800000;
          *(undefined4 *)(lVar34 + 0xb8) = 0;
          *(undefined4 *)(lVar34 + 0xe0) = 0x3f800000;
        }
        else if (iVar18 == 1) {
          lVar34 = lVar32 + uVar41 * 0x178;
          fVar66 = fVar66 - fVar52;
          fVar49 = (*(float *)(lVar34 + 0x74) - fVar52) / fVar66;
          fVar66 = fVar48 + (*(float *)(lVar34 + 0x4c) - fVar52) / fVar66;
          *(float *)(lVar34 + 0x68) = fVar66;
          *(float *)(lVar34 + 0xb8) = fVar66;
          goto LAB_035460b4;
        }
      }
      else if (iVar18 == 2) {
        lVar34 = lVar32 + uVar41 * 0x178;
        fVar66 = fVar48 + (*(float *)(lVar34 + 0x4c) - *(float *)((long)unaff_x19 + 0x4f4)) /
                          (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4)
                          );
        *(float *)(lVar34 + 0x68) = fVar66;
        fVar49 = *(float *)((long)unaff_x19 + 0x4f4);
        fVar52 = *(float *)((long)unaff_x19 + 0x4fc);
        *(float *)(lVar34 + 0xb8) = fVar66;
        fVar49 = (*(float *)(lVar34 + 0x74) - fVar49) / (fVar52 - fVar49);
LAB_035460b4:
        *(float *)(lVar34 + 0x90) = fVar48 + fVar49;
        *(float *)(lVar34 + 0xe0) = fVar48 + fVar49;
      }
      else if (iVar18 == 3) {
        if (*(int *)(*(long *)PTR_DAT_03cb5ae0 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        FUN_03735a64(*(undefined8 *)PTR_DAT_03cde838,0);
        uVar42 = (uint)*(undefined8 *)(lVar28 + 0x18);
      }
      if (uVar42 <= uVar13) goto LAB_03547f94;
      lVar34 = lVar32 + uVar41 * 0x178;
      fVar52 = *(float *)(lVar34 + 0x138);
      fVar49 = (1.0 - (*(float *)(lVar34 + 0x68) + *(float *)(lVar34 + 0x90)) * fVar52) * 0.5;
      fVar66 = fVar48 + *(float *)(lVar34 + 0x68) * fVar52 + fVar49;
      fVar48 = fVar48 + fVar49 + *(float *)(lVar34 + 0x90) * fVar52;
      *(float *)(lVar34 + 100) = fVar66;
      *(float *)(lVar34 + 0x8c) = fVar66;
      *(float *)(lVar34 + 0xb4) = fVar48;
      *(float *)(lVar34 + 0xdc) = fVar48;
    }
    iVar18 = (int)unaff_x19[0x69];
    if (iVar18 < 2) {
      if (iVar18 == 0) {
        if (uVar42 <= uVar13) goto LAB_03547f94;
        lVar34 = lVar32 + uVar41 * 0x178;
        *(undefined4 *)(lVar34 + 0x68) = 0;
        *(undefined4 *)(lVar34 + 0x90) = 0x3f800000;
        *(undefined4 *)(lVar34 + 0xb8) = 0x3f800000;
        *(undefined4 *)(lVar34 + 0xe0) = 0;
      }
      else if (iVar18 == 1) {
        if (uVar13 < uVar42) {
          lVar34 = lVar32 + uVar41 * 0x178;
          fVar61 = fVar61 - fVar68;
          fVar48 = (*(float *)(lVar34 + 0x4c) - fVar68) / fVar61;
          fVar61 = (*(float *)(lVar34 + 0x74) - fVar68) / fVar61;
          *(float *)(lVar34 + 0x68) = fVar48;
          goto LAB_0354622c;
        }
        goto LAB_03547f94;
      }
    }
    else if (iVar18 == 2) {
      if (uVar42 <= uVar13) goto LAB_03547f94;
      lVar34 = lVar32 + uVar41 * 0x178;
      fVar48 = (*(float *)(lVar34 + 0x4c) - *(float *)((long)unaff_x19 + 0x4f4)) /
               (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
      *(float *)(lVar34 + 0x68) = fVar48;
      fVar61 = (*(float *)(lVar34 + 0x74) - *(float *)((long)unaff_x19 + 0x4f4)) /
               (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
LAB_0354622c:
      *(float *)(lVar34 + 0x90) = fVar61;
      *(float *)(lVar34 + 0xb8) = fVar61;
      *(float *)(lVar34 + 0xe0) = fVar48;
    }
    else if (iVar18 == 3) {
      if (uVar42 <= uVar13) goto LAB_03547f94;
      lVar34 = lVar32 + uVar41 * 0x178;
      fVar49 = *(float *)(lVar34 + 0x138);
      fVar66 = (1.0 - (*(float *)(lVar34 + 100) + *(float *)(lVar34 + 0xb4)) / fVar49) * 0.5;
      fVar48 = *(float *)(lVar34 + 100) / fVar49 + fVar66;
      fVar66 = fVar66 + *(float *)(lVar34 + 0xb4) / fVar49;
      *(float *)(lVar34 + 0x68) = fVar48;
      *(float *)(lVar34 + 0xe0) = fVar48;
      *(float *)(lVar34 + 0x90) = fVar66;
      *(float *)(lVar34 + 0xb8) = fVar66;
    }
    if (uVar42 <= uVar13) goto LAB_03547f94;
    lVar34 = lVar32 + uVar41 * 0x178;
    fVar48 = ABS(auVar58._0_4_) * *(float *)(lVar34 + 0x13c) * (1.0 - *(float *)(unaff_x19 + 0x60));
    if ((*(char *)(lVar34 + 0x34) == '\0') &&
       ((*(byte *)(lVar32 + uVar41 * 0x178 + 0x16c) & 1) != 0)) {
      fVar48 = -fVar48;
    }
    lVar34 = lVar32 + uVar41 * 0x178;
    *(float *)(lVar34 + 0x60) = fVar48;
    *(float *)(lVar34 + 0x88) = fVar48;
    *(float *)(lVar34 + 0xb0) = fVar48;
    *(float *)(lVar34 + 0xd8) = fVar48;
  }
  plVar44 = (long *)PTR_DAT_03cde808;
  if (((int)uVar13 < (int)unaff_x19[0x6c]) &&
     ((int)fStack00000000000000dc < *(int *)((long)unaff_x19 + 0x364))) {
    if (((int)unaff_x19[0x6d] <= (int)uVar15) || ((int)unaff_x19[0x62] == 5)) {
      if (((int)uVar15 < (int)unaff_x19[0x6d]) && ((int)unaff_x19[0x62] == 5)) {
        if (uVar13 < uVar42) {
          if (*(uint *)(lVar32 + uVar41 * 0x178 + 0x40) == uStack000000000000005c) {
            lVar23 = lVar32 + uVar41 * 0x178;
            *(ulong *)(lVar23 + 0x48) =
                 CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar23 + 0x48) >> 0x20),
                          fVar63 + (float)*(undefined8 *)(lVar23 + 0x48));
            *(float *)(lVar23 + 0x50) = fVar69 + *(float *)(lVar23 + 0x50);
            *(ulong *)(lVar23 + 0x70) =
                 CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar23 + 0x70) >> 0x20),
                          fVar63 + (float)*(undefined8 *)(lVar23 + 0x70));
            *(float *)(lVar23 + 0x78) = fVar69 + *(float *)(lVar23 + 0x78);
            *(ulong *)(lVar23 + 0x98) =
                 CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar23 + 0x98) >> 0x20),
                          fVar63 + (float)*(undefined8 *)(lVar23 + 0x98));
            *(float *)(lVar23 + 0xa0) = fVar69 + *(float *)(lVar23 + 0xa0);
            *(ulong *)(lVar23 + 0xc0) =
                 CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar23 + 0xc0) >> 0x20),
                          fVar63 + (float)*(undefined8 *)(lVar23 + 0xc0));
            *(float *)(lVar23 + 200) = fVar69 + *(float *)(lVar23 + 200);
            plVar44 = (long *)PTR_DAT_03cde808;
            goto LAB_03546450;
          }
          goto LAB_03546380;
        }
        goto LAB_03547f94;
      }
      goto LAB_03546380;
    }
    if (uVar42 <= uVar13) goto LAB_03547f94;
    lVar23 = lVar32 + uVar41 * 0x178;
    *(ulong *)(lVar23 + 0x48) =
         CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar23 + 0x48) >> 0x20),
                  fVar63 + (float)*(undefined8 *)(lVar23 + 0x48));
    *(float *)(lVar23 + 0x50) = fVar69 + *(float *)(lVar23 + 0x50);
    *(ulong *)(lVar23 + 0x70) =
         CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar23 + 0x70) >> 0x20),
                  fVar63 + (float)*(undefined8 *)(lVar23 + 0x70));
    *(float *)(lVar23 + 0x78) = fVar69 + *(float *)(lVar23 + 0x78);
    *(ulong *)(lVar23 + 0x98) =
         CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar23 + 0x98) >> 0x20),
                  fVar63 + (float)*(undefined8 *)(lVar23 + 0x98));
    *(float *)(lVar23 + 0xa0) = fVar69 + *(float *)(lVar23 + 0xa0);
    *(ulong *)(lVar23 + 0xc0) =
         CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar23 + 0xc0) >> 0x20),
                  fVar63 + (float)*(undefined8 *)(lVar23 + 0xc0));
    *(float *)(lVar23 + 200) = fVar69 + *(float *)(lVar23 + 200);
  }
  else {
LAB_03546380:
    if (uVar42 <= uVar13) goto LAB_03547f94;
    if (DAT_03ef1415 == '\0') {
      FUN_01c5c92c(PTR_DAT_03cb5ab0);
      uVar42 = *(uint *)(lVar28 + 0x18);
      DAT_03ef1415 = '\x01';
    }
    puVar9 = PTR_DAT_03cb5ab0;
    uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cb5ab0 + 0xb8) + 1);
    *(undefined8 *)(lVar32 + uVar41 * 0x178 + 0x48) =
         **(undefined8 **)(*(long *)PTR_DAT_03cb5ab0 + 0xb8);
    *(undefined4 *)(lVar32 + uVar41 * 0x178 + 0x50) = uVar53;
    if (uVar42 <= uVar13) goto LAB_03547f94;
    lVar34 = lVar32 + uVar41 * 0x178;
    uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
    *(undefined8 *)(lVar34 + 0x70) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
    *(undefined4 *)(lVar34 + 0x78) = uVar53;
    uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
    *(undefined8 *)(lVar34 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
    *(undefined4 *)(lVar34 + 0xa0) = uVar53;
    uVar20 = **(undefined8 **)(*(long *)puVar9 + 0xb8);
    uVar53 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
    *(undefined1 *)(lVar23 + 0x170) = 0;
    *(undefined8 *)(lVar34 + 0xc0) = uVar20;
    *(undefined4 *)(lVar34 + 200) = uVar53;
    plVar44 = (long *)PTR_DAT_03cde808;
  }
LAB_03546450:
  iVar18 = FUN_037415b4(0);
  *(bool *)((long)unaff_x19 + 0x174) = iVar18 == 1;
  if (iVar19 == 0) {
    puVar29 = (undefined8 *)(*unaff_x19 + 0x8d8);
  }
  else {
    if (iVar19 != 1) goto LAB_035464b8;
    puVar29 = (undefined8 *)(*unaff_x19 + 0x8f8);
  }
  (*(code *)*puVar29)();
LAB_035464b8:
  if ((unaff_x19[0x74] == 0) || (lVar23 = *(long *)(unaff_x19[0x74] + 0x38), lVar23 == 0))
  goto LAB_03547e54;
  if (*(uint *)(lVar23 + 0x18) <= uVar13) goto LAB_03547f94;
  lVar23 = lVar23 + uVar41 * 0x178;
  uVar20 = *(undefined8 *)(lVar23 + 0x114);
  *(float *)(lVar23 + 0x11c) = fVar69 + *(float *)(lVar23 + 0x11c);
  *(undefined8 *)(lVar23 + 0x114) =
       CONCAT44(fVar50 + (float)((ulong)uVar20 >> 0x20),fVar63 + (float)uVar20);
  if ((unaff_x19[0x74] == 0) || (lVar23 = *(long *)(unaff_x19[0x74] + 0x38), lVar23 == 0))
  goto LAB_03547e54;
  if (*(uint *)(lVar23 + 0x18) <= uVar13) goto LAB_03547f94;
  lVar23 = lVar23 + uVar41 * 0x178;
  *(ulong *)(lVar23 + 0x108) =
       CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar23 + 0x108) >> 0x20),
                fVar63 + (float)*(undefined8 *)(lVar23 + 0x108));
  *(float *)(lVar23 + 0x110) = fVar69 + *(float *)(lVar23 + 0x110);
  if ((unaff_x19[0x74] == 0) || (lVar23 = *(long *)(unaff_x19[0x74] + 0x38), lVar23 == 0))
  goto LAB_03547e54;
  if (*(uint *)(lVar23 + 0x18) <= uVar13) goto LAB_03547f94;
  lVar23 = lVar23 + uVar41 * 0x178;
  *(ulong *)(lVar23 + 0x120) =
       CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar23 + 0x120) >> 0x20),
                fVar63 + (float)*(undefined8 *)(lVar23 + 0x120));
  *(float *)(lVar23 + 0x128) = fVar69 + *(float *)(lVar23 + 0x128);
  if ((unaff_x19[0x74] == 0) || (lVar23 = *(long *)(unaff_x19[0x74] + 0x38), lVar23 == 0))
  goto LAB_03547e54;
  if (*(uint *)(lVar23 + 0x18) <= uVar13) goto LAB_03547f94;
  lVar23 = lVar23 + uVar41 * 0x178;
  uVar20 = *(undefined8 *)(lVar23 + 300);
  *(float *)(lVar23 + 0x134) = fVar69 + *(float *)(lVar23 + 0x134);
  *(undefined8 *)(lVar23 + 300) =
       CONCAT44(fVar50 + (float)((ulong)uVar20 >> 0x20),fVar63 + (float)uVar20);
  lVar23 = unaff_x19[0x74];
  if ((lVar23 == 0) || (lVar34 = *(long *)(lVar23 + 0x38), lVar34 == 0)) goto LAB_03547e54;
  uVar42 = *(uint *)(lVar34 + 0x18);
  if (uVar42 <= uVar13) goto LAB_03547f94;
  lVar37 = lVar34 + 0x20 + uVar41 * 0x178;
  uVar20 = *(undefined8 *)(lVar37 + 0x118);
  auVar56._0_8_ = CONCAT44(fVar63 + (float)((ulong)uVar20 >> 0x20),fVar63 + (float)uVar20);
  auVar56._8_4_ = fVar50 + (float)*(undefined8 *)(lVar37 + 0x120);
  auVar56._12_4_ = fVar50 + (float)((ulong)*(undefined8 *)(lVar37 + 0x120) >> 0x20);
  *(float *)(lVar37 + 0x128) = fVar50 + *(float *)(lVar37 + 0x128);
  *(long *)(lVar37 + 0x120) = auVar56._8_8_;
  *(undefined8 *)(lVar37 + 0x118) = auVar56._0_8_;
  if (uVar15 == uVar14) {
    uVar14 = *(int *)(in_stack_000001a0 + 7) - 1;
    if (uVar13 == uVar14) goto LAB_035466c4;
  }
  else {
    lVar23 = *(long *)(lVar23 + 0x50);
    if (lVar23 == 0) goto LAB_03547e54;
    if (*(uint *)(lVar23 + 0x18) <= uVar14) goto LAB_03547f94;
    lVar37 = lVar23 + 0x20 + (long)(int)uVar14 * 0x60;
    fVar66 = fVar50 + *(float *)(lVar37 + 0x38);
    *(ulong *)(lVar37 + 0x30) =
         CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar37 + 0x30) >> 0x20),
                  fVar50 + (float)*(undefined8 *)(lVar37 + 0x30));
    *(float *)(lVar37 + 0x38) = fVar66;
    *(float *)(lVar37 + 0x3c) = fVar63 + *(float *)(lVar37 + 0x3c);
    if (uVar42 <= *(uint *)(lVar37 + 0x18)) goto LAB_03547f94;
    lVar23 = lVar23 + 0x20 + (long)(int)uVar14 * 0x60;
    uVar53 = *(undefined4 *)(lVar34 + 0x20 + (long)(int)*(uint *)(lVar37 + 0x18) * 0x178 + 0xf4);
    *(float *)(lVar23 + 0x54) = fVar66;
    *(undefined4 *)(lVar23 + 0x50) = uVar53;
    lVar23 = unaff_x19[0x74];
    if ((lVar23 == 0) || (lVar34 = *(long *)(lVar23 + 0x50), lVar34 == 0)) goto LAB_03547e54;
    if (*(uint *)(lVar34 + 0x18) <= uVar14) goto LAB_03547f94;
    lVar23 = *(long *)(lVar23 + 0x38);
    if (lVar23 == 0) goto LAB_03547e54;
    uVar42 = *(uint *)(lVar34 + 0x20 + (long)(int)uVar14 * 0x60 + 0x24);
    if (*(uint *)(lVar23 + 0x18) <= uVar42) goto LAB_03547f94;
    lVar34 = lVar34 + 0x20 + (long)(int)uVar14 * 0x60;
    *(undefined4 *)(lVar34 + 0x58) = *(undefined4 *)(lVar23 + (long)(int)uVar42 * 0x178 + 0x120);
    *(undefined4 *)(lVar34 + 0x5c) = *(undefined4 *)(lVar34 + 0x30);
    uVar14 = *(int *)(in_stack_000001a0 + 7) - 1;
LAB_035466c4:
    if (uVar13 == uVar14) {
      lVar23 = unaff_x19[0x74];
      if ((lVar23 == 0) || (lVar34 = *(long *)(lVar23 + 0x50), lVar34 == 0)) goto LAB_03547e54;
      if (*(uint *)(lVar34 + 0x18) <= uVar15) goto LAB_03547f94;
      lVar37 = lVar34 + 0x20 + (long)(int)uVar15 * 0x60;
      fVar66 = fVar50 + *(float *)(lVar37 + 0x38);
      *(ulong *)(lVar37 + 0x30) =
           CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar37 + 0x30) >> 0x20),
                    fVar50 + (float)*(undefined8 *)(lVar37 + 0x30));
      *(float *)(lVar37 + 0x38) = fVar66;
      *(float *)(lVar37 + 0x3c) = fVar63 + *(float *)(lVar37 + 0x3c);
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_03547e54;
      uVar14 = *(uint *)(lVar34 + 0x20 + (long)(int)uVar15 * 0x60 + 0x18);
      if (*(uint *)(lVar23 + 0x18) <= uVar14) goto LAB_03547f94;
      *(undefined4 *)(lVar37 + 0x50) = *(undefined4 *)(lVar23 + (long)(int)uVar14 * 0x178 + 0x114);
      *(float *)(lVar37 + 0x54) = fVar66;
      lVar23 = unaff_x19[0x74];
      if ((lVar23 == 0) || (lVar34 = *(long *)(lVar23 + 0x50), lVar34 == 0)) goto LAB_03547e54;
      if (*(uint *)(lVar34 + 0x18) <= uVar15) goto LAB_03547f94;
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_03547e54;
      uVar14 = *(uint *)(lVar34 + 0x20 + (long)(int)uVar15 * 0x60 + 0x24);
      if (*(uint *)(lVar23 + 0x18) <= uVar14) goto LAB_03547f94;
      lVar34 = lVar34 + 0x20 + (long)(int)uVar15 * 0x60;
      *(undefined4 *)(lVar34 + 0x58) = *(undefined4 *)(lVar23 + (long)(int)uVar14 * 0x178 + 0x120);
      *(undefined4 *)(lVar34 + 0x5c) = *(undefined4 *)(lVar34 + 0x30);
    }
  }
  if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  uVar22 = FUN_02f93cc4(uVar40,0);
  if (((((uVar22 & 1) == 0) && (1 < uVar40 - 0x2010)) && (uVar40 != 0xad)) && (uVar40 != 0x2d)) {
    if (bVar10) {
      if (((uVar13 != 0) && ((int)uVar13 < (int)(*(uint *)(lVar28 + 0x18) - 1))) &&
         (((int)uVar13 < *(int *)(in_stack_000001a0 + 7) && ((uVar40 == 0x2019 || (uVar40 == 0x27)))
          ))) {
        if (*(uint *)(lVar28 + 0x18) <= uVar13 - 1) goto LAB_03547f94;
        uVar3 = *(undefined2 *)(lVar32 + (ulong)(uVar13 - 1) * 0x178 + 4);
        if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        uVar22 = FUN_02f93cc4(uVar3,0);
        if ((uVar22 & 1) != 0) {
          if (*(uint *)(lVar28 + 0x18) <= uVar13 + 1) goto LAB_03547f94;
          uVar3 = *(undefined2 *)(lVar32 + (ulong)(uVar13 + 1) * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
          }
          uVar22 = FUN_02f93cc4(uVar3,0);
          if ((uVar22 & 1) != 0) goto LAB_035469b8;
        }
      }
LAB_03547730:
      if (uVar13 == *(int *)(in_stack_000001a0 + 7) - 1U) {
        if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        uVar22 = FUN_02f93cc4(uVar40,0);
        uVar14 = uVar13;
        if ((uVar22 & 1) == 0) goto LAB_0354776c;
      }
      else {
LAB_0354776c:
        uVar14 = uVar13 - 1;
      }
      lVar23 = unaff_x19[0x74];
      if (lVar23 != 0) {
        lVar34 = *(long *)(lVar23 + 0x40);
        if (lVar34 != 0) {
          uVar42 = *(uint *)(lVar23 + 0x24);
          iVar19 = *(int *)(lVar34 + 0x18);
          if (iVar19 < (int)(uVar42 + 1)) {
            if (*(int *)(*(long *)PTR_DAT_03cde788 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            FUN_02072f1c((long *)(lVar23 + 0x40),iVar19 + 1,*(undefined8 *)PTR_DAT_03cde780);
            lVar23 = unaff_x19[0x74];
            if (lVar23 == 0) goto LAB_03547e54;
          }
          lVar23 = *(long *)(lVar23 + 0x40);
          if (lVar23 != 0) {
            if (uVar42 < *(uint *)(lVar23 + 0x18)) {
              lVar23 = lVar23 + (long)(int)uVar42 * 0x18;
              *(long **)(lVar23 + 0x20) = unaff_x19;
              *(uint *)(lVar23 + 0x28) = uVar17;
              *(uint *)(lVar23 + 0x2c) = uVar14;
              *(uint *)(lVar23 + 0x30) = (uVar14 - uVar17) + 1;
              thunk_FUN_01cc8040();
              lVar23 = unaff_x19[0x74];
              if (lVar23 != 0) {
                lVar34 = *(long *)(lVar23 + 0x50);
                *(int *)(lVar23 + 0x24) = *(int *)(lVar23 + 0x24) + 1;
                if (lVar34 != 0) {
                  if (uVar15 < *(uint *)(lVar34 + 0x18)) {
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
    if (uVar13 == 0) {
      if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      bVar12 = FUN_02f93c1c(uVar40,0);
      if ((((uVar40 == 0x200b | bVar12 ^ 0xff | bVar11) & 1) != 0) ||
         (*(int *)(in_stack_000001a0 + 7) == 1)) goto LAB_03547730;
    }
    bVar10 = false;
  }
  else {
    if (!bVar10) {
      uVar17 = uVar13;
    }
    if (uVar13 != *(int *)(in_stack_000001a0 + 7) - 1U) {
LAB_035469b8:
      bVar10 = true;
      goto LAB_035469c0;
    }
    lVar23 = unaff_x19[0x74];
    if (lVar23 == 0) goto LAB_03547e54;
    lVar34 = *(long *)(lVar23 + 0x40);
    if (lVar34 == 0) goto LAB_03547e54;
    uVar14 = *(uint *)(lVar23 + 0x24);
    iVar19 = *(int *)(lVar34 + 0x18);
    if (iVar19 < (int)(uVar14 + 1)) {
      if (*(int *)(*(long *)PTR_DAT_03cde788 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      FUN_02072f1c((long *)(lVar23 + 0x40),iVar19 + 1,*(undefined8 *)PTR_DAT_03cde780);
      lVar23 = unaff_x19[0x74];
      if (lVar23 == 0) goto LAB_03547e54;
    }
    lVar23 = *(long *)(lVar23 + 0x40);
    if (lVar23 == 0) goto LAB_03547e54;
    if (*(uint *)(lVar23 + 0x18) <= uVar14) goto LAB_03547f94;
    lVar23 = lVar23 + (long)(int)uVar14 * 0x18;
    *(long **)(lVar23 + 0x20) = unaff_x19;
    *(uint *)(lVar23 + 0x28) = uVar17;
    *(uint *)(lVar23 + 0x2c) = uVar13;
    *(uint *)(lVar23 + 0x30) = (uVar13 - uVar17) + 1;
    thunk_FUN_01cc8040();
    lVar23 = unaff_x19[0x74];
    if (lVar23 == 0) goto LAB_03547e54;
    lVar34 = *(long *)(lVar23 + 0x50);
    *(int *)(lVar23 + 0x24) = *(int *)(lVar23 + 0x24) + 1;
    if (lVar34 == 0) goto LAB_03547e54;
    if (*(uint *)(lVar34 + 0x18) <= uVar15) goto LAB_03547f94;
    bVar10 = true;
LAB_035468cc:
    lVar34 = lVar34 + (long)(int)uVar15 * 0x60;
    fStack00000000000000dc = (float)((int)fStack00000000000000dc + 1);
    *(int *)(lVar34 + 0x34) = *(int *)(lVar34 + 0x34) + 1;
  }
LAB_035469c0:
  lVar23 = unaff_x19[0x74];
  if ((lVar23 == 0) || (lVar34 = *(long *)(lVar23 + 0x38), lVar34 == 0)) goto LAB_03547e54;
  if (*(uint *)(lVar34 + 0x18) <= uVar13) goto LAB_03547f94;
  lVar37 = lVar34 + 0x20;
  if ((*(byte *)(lVar37 + uVar41 * 0x178 + 0x16c) >> 2 & 1) == 0) {
    if (bVar6) {
      if (*(uint *)(lVar34 + 0x18) <= (uint)((long)(int)uVar13 + -1)) goto LAB_03547f94;
      lVar37 = lVar37 + ((long)(int)uVar13 + -1) * 0x178;
      lVar34 = *unaff_x19;
      uVar53 = *(undefined4 *)(lVar37 + 0x100);
      uVar60 = *(undefined4 *)(lVar37 + 0x13c);
LAB_03546c6c:
      pcVar30 = *(code **)(lVar34 + 0x908);
LAB_03546ca4:
      (*pcVar30)(fStack0000000000000074,in_stack_00000068._4_4_,uStack0000000000000070,uVar53,
                 fStack0000000000000120,0,fStack0000000000000078,uVar60);
      lVar23 = *plVar44;
      if (*(int *)(lVar23 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        lVar23 = *plVar44;
      }
      fStack000000000000013c = 0.0;
      fStack000000000000011c = 0.0;
      fStack0000000000000120 = *(float *)(*(long *)(lVar23 + 0xb8) + 0x1730);
    }
    bVar6 = false;
  }
  else {
    lVar34 = lVar37 + uVar41 * 0x178;
    *(int *)(lVar34 + 0x148) = iVar16;
    iVar19 = *(int *)(lVar34 + 0x40);
    if ((((int)unaff_x19[0x6c] < (int)uVar13) || ((int)unaff_x19[0x6d] < (int)uVar15)) ||
       (((int)unaff_x19[0x62] == 5 && (iVar19 + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar11 & 1) == 0 && uVar40 != 0x200b) {
      fVar63 = *(float *)(lVar37 + uVar41 * 0x178 + 0x13c);
      if (fStack000000000000013c <= fVar63) {
        fStack000000000000013c = fVar63;
      }
      if (fStack000000000000011c <= ABS(fVar48)) {
        fStack000000000000011c = ABS(fVar48);
      }
      if (iVar19 != iStack0000000000000060) {
        if (*(int *)(*plVar44 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
          lVar23 = unaff_x19[0x74];
          if (lVar23 == 0) goto LAB_03547e54;
          lVar34 = *(long *)(*plVar44 + 0xb8);
        }
        else {
          lVar34 = *(long *)(*plVar44 + 0xb8);
        }
        fStack0000000000000120 = *(float *)(lVar34 + 0x1730);
      }
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_03547e54;
      if (*(uint *)(lVar23 + 0x18) <= uVar13) goto LAB_03547f94;
      if (unaff_x19[0x1f] == 0) goto LAB_03547e54;
      fVar66 = *(float *)(lVar23 + uVar41 * 0x178 + 0x144);
      fVar63 = (float)FUN_038054cc(unaff_x19[0x1f] + 0x28,0);
      fVar66 = fVar66 + fStack000000000000013c * fVar63;
      iStack0000000000000060 = iVar19;
      if (fVar66 <= fStack0000000000000120) {
        fStack0000000000000120 = fVar66;
      }
    }
    if (!bVar6) {
      bVar6 = false;
      if ((bVar1) && ((int)uVar13 <= (int)uVar43)) {
        if ((uVar40 & 0xfffe) == 10) goto LAB_03546ce0;
        if (uVar40 != 0xd) {
          if (uVar13 == uVar43) {
            if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            uVar22 = FUN_02f9488c(uVar40,0);
            if ((uVar22 & 1) != 0) goto LAB_03546bc0;
          }
          if ((unaff_x19[0x74] != 0) && (lVar23 = *(long *)(unaff_x19[0x74] + 0x38), lVar23 != 0)) {
            if (uVar13 < *(uint *)(lVar23 + 0x18)) {
              lVar23 = lVar23 + uVar41 * 0x178;
              fStack0000000000000078 = *(float *)(lVar23 + 0x15c);
              fVar63 = fVar48;
              fVar66 = fStack0000000000000078;
              if (fStack000000000000013c != 0.0) {
                fVar63 = fStack000000000000011c;
                fVar66 = fStack000000000000013c;
              }
              fStack000000000000013c = fVar66;
              uStack0000000000000070 = 0;
              fStack0000000000000074 = *(float *)(lVar23 + 0x114);
              uStack000000000000007c = *(undefined4 *)(lVar23 + 0x164);
              in_stack_00000068._4_4_ = fStack0000000000000120;
              fStack000000000000011c = fVar63;
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
      if ((unaff_x19[0x74] != 0) && (lVar23 = *(long *)(unaff_x19[0x74] + 0x38), lVar23 != 0)) {
        if (uVar13 < *(uint *)(lVar23 + 0x18)) {
          lVar23 = lVar23 + uVar41 * 0x178;
LAB_03546c60:
          lVar34 = *unaff_x19;
          uVar53 = *(undefined4 *)(lVar23 + 0x120);
          uVar60 = *(undefined4 *)(lVar23 + 0x15c);
          goto LAB_03546c6c;
        }
        goto LAB_03547f94;
      }
      goto LAB_03547e54;
    }
    if ((uVar13 == uVar31) || ((int)uVar43 <= (int)uVar13)) {
      lVar23 = unaff_x19[0x74];
      if ((bVar11 & 1) == 0 && uVar40 != 0x200b) {
        if ((lVar23 == 0) || (lVar23 = *(long *)(lVar23 + 0x38), lVar23 == 0)) goto LAB_03547e54;
        if (*(uint *)(lVar23 + 0x18) <= uVar13) goto LAB_03547f94;
        lVar23 = lVar23 + uVar41 * 0x178;
      }
      else {
        if ((lVar23 == 0) || (lVar23 = *(long *)(lVar23 + 0x38), lVar23 == 0)) goto LAB_03547e54;
        if (*(uint *)(lVar23 + 0x18) <= uVar43) goto LAB_03547f94;
        lVar23 = lVar23 + (long)(int)uVar43 * 0x178;
      }
      uVar53 = *(undefined4 *)(lVar23 + 0x120);
      uVar60 = *(undefined4 *)(lVar23 + 0x15c);
      pcVar30 = *(code **)(*unaff_x19 + 0x908);
      goto LAB_03546ca4;
    }
    if (!bVar1) {
      if ((unaff_x19[0x74] != 0) && (lVar23 = *(long *)(unaff_x19[0x74] + 0x38), lVar23 != 0)) {
        if ((uint)((long)(int)uVar13 + -1) < *(uint *)(lVar23 + 0x18)) {
          lVar23 = lVar23 + ((long)(int)uVar13 + -1) * 0x178;
          goto LAB_03546c60;
        }
        goto LAB_03547f94;
      }
      goto LAB_03547e54;
    }
    if ((int)uVar13 < *(int *)(in_stack_000001a0 + 7) + -1) {
      if ((unaff_x19[0x74] == 0) || (lVar23 = *(long *)(unaff_x19[0x74] + 0x38), lVar23 == 0))
      goto LAB_03547e54;
      if (*(uint *)(lVar23 + 0x18) <= uVar13 + 1) goto LAB_03547f94;
      uVar22 = FUN_035627a4(uStack000000000000007c,
                            *(undefined4 *)(lVar23 + (ulong)(uVar13 + 1) * 0x178 + 0x164),0);
      if ((uVar22 & 1) == 0) {
        if ((unaff_x19[0x74] != 0) && (lVar23 = *(long *)(unaff_x19[0x74] + 0x38), lVar23 != 0)) {
          if (uVar13 < *(uint *)(lVar23 + 0x18)) {
            lVar23 = lVar23 + uVar41 * 0x178;
            uVar53 = *(undefined4 *)(lVar23 + 0x120);
            uVar60 = *(undefined4 *)(lVar23 + 0x15c);
            pcVar30 = *(code **)(*unaff_x19 + 0x908);
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
  if ((unaff_x19[0x74] == 0) || (lVar23 = *(long *)(unaff_x19[0x74] + 0x38), lVar23 == 0))
  goto LAB_03547e54;
  if (*(uint *)(lVar23 + 0x18) <= uVar13) goto LAB_03547f94;
  if (lVar36 == 0) goto LAB_03547e54;
  uVar14 = *(uint *)(lVar23 + uVar41 * 0x178 + 0x18c);
  fVar63 = (float)FUN_038054dc(lVar36 + 0x28,0);
  if ((uVar14 >> 6 & 1) == 0) {
    if (bVar7) {
      if ((unaff_x19[0x74] == 0) || (lVar36 = *(long *)(unaff_x19[0x74] + 0x38), lVar36 == 0))
      goto LAB_03547e54;
      if (*(uint *)(lVar36 + 0x18) <= (uint)((long)(int)uVar13 + -1)) goto LAB_03547f94;
      lVar36 = lVar36 + ((long)(int)uVar13 + -1) * 0x178;
LAB_03546f8c:
      fVar66 = *(float *)(lVar36 + 0x144);
      lVar23 = *unaff_x19;
      uVar53 = *(undefined4 *)(lVar36 + 0x120);
LAB_0354720c:
      (**(code **)(lVar23 + 0x908))
                (fStack0000000000000094,fStack0000000000000098,uStack00000000000000c8,uVar53,
                 fStack000000000000009c * fVar63 + fVar66,0,fStack000000000000009c,
                 fStack000000000000009c);
    }
LAB_03547248:
    bVar7 = false;
  }
  else {
    lVar23 = unaff_x19[0x74];
    if ((lVar23 == 0) || (lVar34 = *(long *)(lVar23 + 0x38), lVar34 == 0)) goto LAB_03547e54;
    if (*(uint *)(lVar34 + 0x18) <= uVar13) goto LAB_03547f94;
    *(int *)(lVar34 + 0x20 + uVar41 * 0x178 + 0x150) = iVar16;
    if ((((int)unaff_x19[0x6c] < (int)uVar13) || ((int)unaff_x19[0x6d] < (int)uVar15)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar34 + 0x20 + uVar41 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((((bool)(bVar7 | bVar1 ^ 1U)) || ((int)uVar43 < (int)uVar13)) || ((uVar40 & 0xfffe) == 10))
       || (uVar40 == 0xd)) {
LAB_03546e1c:
      if (!bVar7) goto LAB_03547248;
    }
    else {
      if (uVar13 == uVar43) {
        if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        uVar22 = FUN_02f9488c(uVar40,0);
        if ((uVar22 & 1) != 0) goto LAB_03546e1c;
        lVar23 = unaff_x19[0x74];
        if (lVar23 == 0) goto LAB_03547e54;
      }
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_03547e54;
      if (*(uint *)(lVar23 + 0x18) <= uVar13) goto LAB_03547f94;
      lVar23 = lVar23 + uVar41 * 0x178;
      fStack000000000000009c = *(float *)(lVar23 + 0x15c);
      fStack0000000000000098 = fVar63 * fStack000000000000009c + *(float *)(lVar23 + 0x144);
      uStack00000000000000c8 = 0;
      fStack0000000000000054 = *(float *)(lVar23 + 0x58);
      fStack0000000000000094 = *(float *)(lVar23 + 0x114);
    }
    iVar19 = *(int *)(in_stack_000001a0 + 7);
    if (iVar19 == 1) {
LAB_03546f60:
      if ((unaff_x19[0x74] != 0) && (lVar36 = *(long *)(unaff_x19[0x74] + 0x38), lVar36 != 0)) {
        if (uVar13 < *(uint *)(lVar36 + 0x18)) {
          lVar36 = lVar36 + uVar41 * 0x178;
          goto LAB_03546f8c;
        }
        goto LAB_03547f94;
      }
      goto LAB_03547e54;
    }
    if (uVar13 == uVar31) {
      lVar36 = unaff_x19[0x74];
      if ((uVar40 != 0x200b & (bVar11 ^ 0xff)) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_GravityProvider__IsGravityBlocked;
LAB_035471d0:
      if ((lVar36 != 0) && (lVar36 = *(long *)(lVar36 + 0x38), lVar36 != 0)) {
        if (uVar13 < *(uint *)(lVar36 + 0x18)) {
          lVar36 = lVar36 + uVar41 * 0x178;
LAB_035471f0:
          fVar66 = *(float *)(lVar36 + 0x144);
          lVar23 = *unaff_x19;
          uVar53 = *(undefined4 *)(lVar36 + 0x120);
          goto LAB_0354720c;
        }
        goto LAB_03547f94;
      }
      goto LAB_03547e54;
    }
    if ((int)uVar13 < iVar19) {
      if ((unaff_x19[0x74] != 0) && (lVar23 = *(long *)(unaff_x19[0x74] + 0x38), lVar23 != 0)) {
        if (uVar13 + 1 < *(uint *)(lVar23 + 0x18)) {
          if (*(float *)(lVar23 + (ulong)(uVar13 + 1) * 0x178 + 0x58) == fStack0000000000000054) {
            if (*(int *)(*(long *)PTR_DAT_03cde748 + 0xe4) == 0) {
              thunk_FUN_01cb0d4c();
            }
            uVar22 = FUN_03562ca8(0);
            if ((uVar22 & 1) != 0) {
              iVar19 = *(int *)(in_stack_000001a0 + 7);
              goto LAB_03547068;
            }
          }
          lVar36 = unaff_x19[0x74];
          if ((int)uVar13 <= (int)uVar43) goto LAB_035471d0;
UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_GravityProvider__IsGravityBlocked:
          if ((lVar36 != 0) && (lVar36 = *(long *)(lVar36 + 0x38), lVar36 != 0)) {
            if (uVar43 < *(uint *)(lVar36 + 0x18)) {
              lVar36 = lVar36 + (long)(int)uVar43 * 0x178;
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
    if ((int)uVar13 < iVar19) {
      iVar19 = FUN_037759d4(lVar36,0);
      if (*(uint *)(lVar28 + 0x18) <= uVar13 + 1) goto LAB_03547f94;
      lVar36 = *(long *)(lVar32 + (ulong)(uVar13 + 1) * 0x178 + 0x20);
      if (lVar36 == 0) goto LAB_03547e54;
      iVar18 = FUN_037759d4(lVar36,0);
      if (iVar19 != iVar18) goto LAB_03546f60;
    }
    if (!bVar1) {
      if ((unaff_x19[0x74] != 0) && (lVar36 = *(long *)(unaff_x19[0x74] + 0x38), lVar36 != 0)) {
        if ((uint)((long)(int)uVar13 + -1) < *(uint *)(lVar36 + 0x18)) {
          lVar36 = lVar36 + ((long)(int)uVar13 + -1) * 0x178;
          goto LAB_03546f8c;
        }
        goto LAB_03547f94;
      }
      goto LAB_03547e54;
    }
    bVar7 = true;
  }
  if ((unaff_x19[0x74] == 0) || (lVar36 = *(long *)(unaff_x19[0x74] + 0x38), lVar36 == 0))
  goto LAB_03547e54;
  uVar14 = (uint)*(undefined8 *)(lVar36 + 0x18);
  if (uVar14 <= uVar13) goto LAB_03547f94;
  if ((*(byte *)(lVar36 + 0x20 + uVar41 * 0x178 + 0x16d) >> 1 & 1) == 0) {
    if (bVar8) {
      (**(code **)(*unaff_x19 + 0x918))();
    }
LAB_0354735c:
    bVar8 = false;
  }
  else {
    if ((((int)unaff_x19[0x6c] < (int)uVar13) || ((int)unaff_x19[0x6d] < (int)uVar15)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar36 + 0x20 + uVar41 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar8) {
      if ((((!bVar1) || ((int)uVar43 < (int)uVar13)) || ((uVar40 & 0xfffe) == 10)) ||
         (uVar40 == 0xd)) goto LAB_0354735c;
      if (uVar13 == uVar43) {
        if (*(int *)(*(long *)(PTR_DAT_03cb5cf0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        uVar22 = FUN_02f9488c(uVar40,0);
        if ((uVar22 & 1) != 0) goto LAB_0354735c;
      }
      lVar23 = *plVar44;
      if (*(int *)(lVar23 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        lVar23 = *plVar44;
      }
      if ((unaff_x19[0x74] == 0) || (lVar36 = *(long *)(unaff_x19[0x74] + 0x38), lVar36 == 0))
      goto LAB_03547e54;
      uVar14 = (uint)*(undefined8 *)(lVar36 + 0x18);
      if (uVar14 <= uVar13) goto LAB_03547f94;
      lVar34 = *(long *)(lVar23 + 0xb8);
      lVar23 = lVar36 + uVar41 * 0x178;
      fStack00000000000000cc = *(float *)(lVar34 + 0x1728);
      fStack00000000000000d0 = *(float *)(lVar34 + 0x172c);
      in_stack_00001290 = *(float *)(lVar23 + 0x188);
      fStack00000000000000d8 = *(float *)(lVar34 + 0x1720);
      fStack00000000000000f4 = *(float *)(lVar34 + 0x1724);
      auVar56 = *(undefined1 (*) [16])(lVar23 + 0x178);
      in_stack_00001288 = auVar56._8_4_;
      in_stack_0000128c = auVar56._12_4_;
      in_stack_00001280 = auVar56._0_4_;
      in_stack_00001284 = auVar56._4_4_;
    }
    if (uVar14 <= uVar13) goto LAB_03547f94;
    lVar36 = lVar36 + uVar41 * 0x178;
    in_stack_000001c0 = CONCAT44(in_stack_00001284,in_stack_00001280);
    auVar5._8_4_ = in_stack_00001288;
    auVar5._0_8_ = in_stack_000001c0;
    auVar5._12_4_ = in_stack_0000128c;
    lVar23 = 0x118;
    if ((bVar11 & 1) == 0) {
      lVar23 = 0xf4;
    }
    fVar68 = *(float *)(lVar36 + 0x180);
    fVar50 = *(float *)(lVar36 + 0x184);
    fVar52 = *(float *)(lVar36 + 0x188);
    uVar20 = *(undefined8 *)(lVar36 + 0x178);
    fVar51 = *(float *)(lVar36 + 0x120);
    fVar63 = *(float *)(lVar36 + 0x13c);
    fVar61 = *(float *)(lVar36 + 0x140);
    fVar49 = *(float *)(lVar36 + 0x148);
    fVar66 = *(float *)(lVar36 + lVar23 + 0x20);
    in_stack_000001c8 = auVar5._8_8_;
    in_stack_000001a8 = uVar20;
    fStack00000000000001b0 = fVar68;
    fStack00000000000001b4 = fVar50;
    in_stack_000001b8 = fVar52;
    in_stack_000001d0 = in_stack_00001290;
    uVar41 = FUN_03563dcc(&stack0x000001c0,&stack0x000001a8,0);
    if ((uVar41 & 1) == 0) {
      if ((bVar11 & 1) == 0) {
        fVar63 = fVar51;
      }
      if (*(int *)(*(long *)PTR_DAT_03cde758 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      fVar66 = fVar66 - in_stack_00001284;
      if (fVar66 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar66;
      }
      if (fStack00000000000000cc <= fVar63 + in_stack_00001288) {
        fStack00000000000000cc = fVar63 + in_stack_00001288;
      }
      if (*(int *)(*(long *)PTR_DAT_03cde758 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      fVar49 = fVar49 - in_stack_00001290;
      fVar61 = fVar61 + in_stack_0000128c;
      if (fVar49 <= fStack00000000000000f4) {
        fStack00000000000000f4 = fVar49;
      }
      if (fStack00000000000000d0 <= fVar61) {
        fStack00000000000000d0 = fVar61;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cde758 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      fStack00000000000000d8 = (fVar66 + (fStack00000000000000cc - in_stack_00001288)) * 0.5;
      (**(code **)(*unaff_x19 + 0x918))();
      if (*(int *)(*(long *)PTR_DAT_03cde758 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      if ((bVar11 & 1) == 0) {
        fVar63 = fVar51;
      }
      if (*(int *)(*(long *)PTR_DAT_03cde758 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      fStack00000000000000f4 = fVar49 - fVar52;
      in_stack_00001280 = (undefined4)uVar20;
      in_stack_00001284 = (float)((ulong)uVar20 >> 0x20);
      fStack00000000000000cc = fVar68 + fVar63;
      fStack00000000000000d0 = fVar61 + fVar50;
      in_stack_00001288 = fVar68;
      in_stack_0000128c = fVar50;
      in_stack_00001290 = fVar52;
    }
    if (((*(int *)(in_stack_000001a0 + 7) == 1) || (uVar13 == uVar31)) ||
       (((int)uVar43 <= (int)uVar13 || (!bVar1)))) {
      (**(code **)(*unaff_x19 + 0x918))();
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
  }
  iVar19 = *(int *)(in_stack_000001a0 + 7);
  uVar13 = uVar13 + 1;
  uVar14 = uVar15;
  if (iVar19 <= (int)uVar13) goto LAB_03547a00;
  goto LAB_03545984;
LAB_03547a00:
  lVar28 = unaff_x19[0x74];
  if (lVar28 != 0) {
    iVar18 = uVar15 + 1;
LAB_03547a18:
    puVar9 = PTR_DAT_03cde750;
    lVar32 = *(long *)(lVar28 + 0x60);
    if (lVar32 != 0) {
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) {
LAB_03547f94:
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbdc();
      }
      *(int *)(lVar32 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x50 + 0x28) = iVar16;
      *(int *)(lVar28 + 0x18) = iVar19;
      lVar32 = unaff_x19[0xd7];
      *(int *)(lVar28 + 0x2c) = iVar18;
      if (iVar19 < 1 || fStack00000000000000dc == 0.0) {
        fStack00000000000000dc = 1.4013e-45;
      }
      *(int *)(lVar28 + 0x1c) = (int)lVar32;
      *(float *)(lVar28 + 0x24) = fStack00000000000000dc;
      *(int *)(lVar28 + 0x30) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
      if (((int)unaff_x19[0x6a] != 0xff) ||
         (uVar41 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar41 & 1) == 0)) {
LAB_035453f0:
        if (*(int *)(*(long *)PTR_DAT_03cde810 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        FUN_03561cfc();
        return;
      }
      lVar28 = unaff_x19[0xde];
      if (lVar28 != 0) {
        (**(code **)(lVar28 + 0x18))
                  (*(undefined8 *)(lVar28 + 0x40),unaff_x19[0x74],*(undefined8 *)(lVar28 + 0x28));
      }
      if (*(int *)((long)unaff_x19 + 0x354) != 0) {
        if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x60), lVar28 == 0))
        goto LAB_03547e54;
        if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        if (*(int *)(lVar28 + 0x18) == 0) goto LAB_03547f94;
        FUN_035adae4(lVar28 + 0x20,1,0);
      }
      if (unaff_x19[0x7b] != 0) {
        FUN_0374ff44(unaff_x19[0x7b],0);
        if ((unaff_x19[0x74] != 0) && (lVar28 = *(long *)(unaff_x19[0x74] + 0x60), lVar28 != 0)) {
          if (*(int *)(lVar28 + 0x18) == 0) goto LAB_03547f94;
          if (unaff_x19[0x7b] != 0) {
            FUN_0374e6ec(unaff_x19[0x7b],*(undefined8 *)(lVar28 + 0x30),0);
            if ((unaff_x19[0x74] != 0) && (lVar28 = *(long *)(unaff_x19[0x74] + 0x60), lVar28 != 0))
            {
              if (*(int *)(lVar28 + 0x18) == 0) goto LAB_03547f94;
              if (unaff_x19[0x7b] != 0) {
                FUN_0374f200(unaff_x19[0x7b],0,*(undefined8 *)(lVar28 + 0x48),0);
                if ((unaff_x19[0x74] != 0) &&
                   (lVar28 = *(long *)(unaff_x19[0x74] + 0x60), lVar28 != 0)) {
                  if (*(int *)(lVar28 + 0x18) == 0) goto LAB_03547f94;
                  if (unaff_x19[0x7b] != 0) {
                    FUN_0374e904(unaff_x19[0x7b],*(undefined8 *)(lVar28 + 0x50),0);
                    if ((unaff_x19[0x74] != 0) &&
                       (lVar28 = *(long *)(unaff_x19[0x74] + 0x60), lVar28 != 0)) {
                      if (*(int *)(lVar28 + 0x18) == 0) goto LAB_03547f94;
                      if (unaff_x19[0x7b] != 0) {
                        FUN_0374e9b8(unaff_x19[0x7b],*(undefined8 *)(lVar28 + 0x58),0);
                        if (unaff_x19[0x7b] != 0) {
                          FUN_0374fe84(unaff_x19[0x7b],0);
                          lVar28 = unaff_x19[0x74];
                          if (lVar28 != 0) {
                            lVar36 = 0;
                            lVar32 = 0;
                            do {
                              uVar41 = lVar32 + 1;
                              if ((long)*(int *)(lVar28 + 0x34) <= (long)uVar41) goto LAB_035453f0;
                              lVar28 = *(long *)(lVar28 + 0x60);
                              if (lVar28 == 0) break;
                              if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                                thunk_FUN_01cb0d4c();
                              }
                              if (*(uint *)(lVar28 + 0x18) <= uVar41) goto LAB_03547f94;
                              FUN_035ad9c0(lVar28 + lVar36 + 0x70,0);
                              lVar28 = unaff_x19[0xe4];
                              if (lVar28 == 0) break;
                              if (*(uint *)(lVar28 + 0x18) <= uVar41) goto LAB_03547f94;
                              uVar20 = *(undefined8 *)(lVar28 + lVar32 * 8 + 0x28);
                              if (*(int *)(*(long *)PTR_DAT_03cb5a80 + 0xe4) == 0) {
                                thunk_FUN_01cb0d4c();
                              }
                              uVar22 = FUN_0377201c(uVar20,0,0);
                              if ((uVar22 & 1) == 0) {
                                if (*(int *)((long)unaff_x19 + 0x354) != 0) {
                                  if ((unaff_x19[0x74] == 0) ||
                                     (lVar28 = *(long *)(unaff_x19[0x74] + 0x60), lVar28 == 0))
                                  break;
                                  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                                    thunk_FUN_01cb0d4c();
                                  }
                                  if (*(uint *)(lVar28 + 0x18) <= uVar41) goto LAB_03547f94;
                                  FUN_035adae4(lVar28 + lVar36 + 0x70,1,0);
                                }
                                lVar28 = unaff_x19[0xe4];
                                if (lVar28 == 0) break;
                                if (*(uint *)(lVar28 + 0x18) <= uVar41) goto LAB_03547f94;
                                lVar28 = *(long *)(lVar28 + lVar32 * 8 + 0x28);
                                if (lVar28 == 0) break;
                                lVar28 = FUN_035b6b9c(lVar28,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar23 = *(long *)(unaff_x19[0x74] + 0x60), lVar23 == 0)) break;
                                if (*(uint *)(lVar23 + 0x18) <= uVar41) goto LAB_03547f94;
                                if (lVar28 == 0) break;
                                FUN_0374e6ec(lVar28,*(undefined8 *)(lVar23 + lVar36 + 0x80),0);
                                lVar28 = unaff_x19[0xe4];
                                if (lVar28 == 0) break;
                                if (*(uint *)(lVar28 + 0x18) <= uVar41) goto LAB_03547f94;
                                lVar28 = *(long *)(lVar28 + lVar32 * 8 + 0x28);
                                if (lVar28 == 0) break;
                                lVar28 = FUN_035b6b9c(lVar28,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar23 = *(long *)(unaff_x19[0x74] + 0x60), lVar23 == 0)) break;
                                if (*(uint *)(lVar23 + 0x18) <= uVar41) goto LAB_03547f94;
                                if (lVar28 == 0) break;
                                FUN_0374f200(lVar28,0,*(undefined8 *)(lVar23 + lVar36 + 0x98),0);
                                lVar28 = unaff_x19[0xe4];
                                if (lVar28 == 0) break;
                                if (*(uint *)(lVar28 + 0x18) <= uVar41) goto LAB_03547f94;
                                lVar28 = *(long *)(lVar28 + lVar32 * 8 + 0x28);
                                if (lVar28 == 0) break;
                                lVar28 = FUN_035b6b9c(lVar28,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar23 = *(long *)(unaff_x19[0x74] + 0x60), lVar23 == 0)) break;
                                if (*(uint *)(lVar23 + 0x18) <= uVar41) goto LAB_03547f94;
                                if (lVar28 == 0) break;
                                FUN_0374e904(lVar28,*(undefined8 *)(lVar23 + lVar36 + 0xa0),0);
                                lVar28 = unaff_x19[0xe4];
                                if (lVar28 == 0) break;
                                if (*(uint *)(lVar28 + 0x18) <= uVar41) goto LAB_03547f94;
                                lVar28 = *(long *)(lVar28 + lVar32 * 8 + 0x28);
                                if (lVar28 == 0) break;
                                lVar28 = FUN_035b6b9c(lVar28,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar23 = *(long *)(unaff_x19[0x74] + 0x60), lVar23 == 0)) break;
                                if (*(uint *)(lVar23 + 0x18) <= uVar41) goto LAB_03547f94;
                                if (lVar28 == 0) break;
                                FUN_0374e9b8(lVar28,*(undefined8 *)(lVar23 + lVar36 + 0xa8),0);
                                lVar28 = unaff_x19[0xe4];
                                if (lVar28 == 0) break;
                                if (*(uint *)(lVar28 + 0x18) <= uVar41) goto LAB_03547f94;
                                lVar28 = *(long *)(lVar28 + lVar32 * 8 + 0x28);
                                if ((lVar28 == 0) || (lVar28 = FUN_035b6b9c(lVar28,0), lVar28 == 0))
                                break;
                                FUN_0374fe84(lVar28,0);
                              }
                              lVar28 = unaff_x19[0x74];
                              lVar32 = lVar32 + 1;
                              lVar36 = lVar36 + 0x50;
                            } while (lVar28 != 0);
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


