/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor$$get_isHoverActive
ENTRY_POINT: 05cbf8e8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Type propagation algorithm not settling */

void UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__get_isHoverActive(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
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
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 uVar22;
  char cVar23;
  long *plVar24;
  long lVar25;
  undefined8 *puVar26;
  code *pcVar27;
  long lVar28;
  float *pfVar29;
  long lVar30;
  long lVar31;
  float *pfVar32;
  uint uVar33;
  long *plVar34;
  long lVar35;
  long *unaff_x19;
  uint uVar36;
  uint unaff_w21;
  int iVar37;
  uint unaff_w23;
  undefined8 *unaff_x24;
  int *piVar38;
  undefined8 *unaff_x25;
  ulong uVar39;
  uint unaff_w26;
  uint uVar40;
  ulong uVar41;
  long *plVar42;
  long *plVar43;
  long *unaff_x29;
  ushort uVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined8 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  float in_s3;
  float fVar56;
  undefined4 uVar57;
  float fVar58;
  undefined4 uVar59;
  float fVar60;
  float fVar61;
  undefined8 uVar62;
  float fVar63;
  undefined8 uVar64;
  float fVar65;
  float unaff_s11;
  float fVar66;
  float fVar67;
  float fVar68;
  float unaff_s13;
  undefined8 in_stack_00000018;
  int iStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float in_stack_00000030;
  undefined8 in_stack_00000040;
  float fStack0000000000000048;
  float fStack0000000000000050;
  uint uStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  int iStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  undefined4 uStack000000000000006c;
  float fStack0000000000000070;
  undefined8 in_stack_00000078;
  undefined4 uStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  ulong in_stack_000000a0;
  undefined1 (*in_stack_000000a8) [16];
  float in_stack_000000b0;
  float fStack00000000000000b8;
  float in_stack_000000c0;
  undefined8 in_stack_000000d0;
  float fStack00000000000000d8;
  undefined8 in_stack_000000e0;
  float fStack00000000000000e8;
  uint uStack00000000000000ec;
  float in_stack_000000f0;
  float fStack0000000000000100;
  float in_stack_00000108;
  undefined8 in_stack_00000110;
  float in_stack_00000118;
  float in_stack_00000120;
  float fStack0000000000000124;
  undefined8 in_stack_00000138;
  float fStack0000000000000140;
  float fStack0000000000000144;
  float fStack0000000000000148;
  float fStack000000000000014c;
  float in_stack_00000150;
  float fStack0000000000000158;
  float fStack000000000000015c;
  float in_stack_00000160;
  float in_stack_00000170;
  undefined8 in_stack_00000178;
  float in_stack_00000180;
  float fStack0000000000000184;
  float fStack0000000000000190;
  undefined8 *in_stack_000001a8;
  float in_stack_000001b0;
  undefined8 in_stack_000001c8;
  float fStack00000000000001d0;
  float fStack00000000000001d4;
  float in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  float in_stack_000001f0;
  float in_stack_0000114c;
  float in_stack_00001158;
  float in_stack_00001164;
  float in_stack_00001170;
  float in_stack_0000117c;
  float in_stack_00001188;
  uint in_stack_0000126c;
  uint in_stack_00001308;
  undefined4 in_stack_00001310;
  float in_stack_00001314;
  float in_stack_00001318;
  float in_stack_0000131c;
  float in_stack_00001320;
  ulong in_stack_00001328;
  char in_stack_00001334;
  float in_stack_00001338;
  uint in_stack_0000133c;
  undefined8 in_stack_00001340;
  undefined8 in_stack_00001348;
  undefined4 in_stack_00001350;
  undefined4 in_stack_00001354;
  undefined8 in_stack_00001358;
  undefined8 in_stack_00001360;
  undefined8 in_stack_00001368;
  undefined8 in_stack_00001370;
  undefined8 in_stack_00001378;
  
  uVar39 = _fStack0000000000000068;
code_r0x05cbf8e8:
  if (unaff_x19[0x20] != 0) {
    lVar25 = unaff_x19[0xc1];
    fVar46 = (float)FUN_05f84b5c(unaff_x19[0x20] + 0x28,0);
    if (unaff_x19[0x20] != 0) {
      fVar47 = (float)FUN_05f84b7c(unaff_x19[0x20] + 0x28,0);
      if (unaff_x19[0x20] != 0) {
        fVar65 = *(float *)((long)unaff_x19 + 0x43c);
        fVar67 = *(float *)((long)unaff_x19 + 0x634);
        fVar60 = (float)(int)lVar25 * fStack0000000000000058;
        fVar48 = (float)FUN_05f84b2c(unaff_x19[0x20] + 0x28,0);
        fVar48 = fVar48 * fVar65 * (fVar46 - (fVar47 + fVar67)) * 0.5;
        fVar46 = (float)FUN_05f84e28(&stack0x00001280,0);
        fVar47 = fVar60 * in_stack_00000170 * ((in_stack_00000150 + unaff_s13 + fVar46) - fVar48);
        fVar46 = (float)FUN_05f84e28(&stack0x00001280,0);
        fVar65 = (float)FUN_05f84e18(&stack0x00001280,0);
        fVar67 = in_s3 + fVar47;
        in_stack_00000180 = in_stack_00000180 + 0.0;
        in_stack_00000160 = in_stack_00000160 + 0.0;
        fVar47 = unaff_s11 + fVar47;
        fVar60 = fVar60 * in_stack_00000170 *
                          ((((fVar46 - fVar65) - fStack0000000000000158) - in_stack_00000150) -
                          fVar48);
        unaff_s11 = unaff_s11 + fVar60;
        fVar48 = in_s3 + fVar60;
        fVar46 = in_stack_00000118;
        fVar65 = in_stack_00000170;
LAB_05cbec74:
        in_stack_00000118 = fVar65;
        uVar64 = *unaff_x24;
        uVar62 = unaff_x24[1];
        if (DAT_06a492ea == '\0') {
          FUN_02d4dc40(PTR_DAT_066463a8);
          DAT_06a492ea = '\x01';
        }
        uVar49 = **(undefined8 **)(*(long *)PTR_DAT_066463a8 + 0xb8);
        uVar52 = (*(undefined8 **)(*(long *)PTR_DAT_066463a8 + 0xb8))[1];
        if (DAT_012752bc <
            (float)((ulong)uVar62 >> 0x20) * (float)((ulong)uVar52 >> 0x20) +
            (float)uVar62 * (float)uVar52 +
            (float)uVar64 * (float)uVar49 +
            (float)((ulong)uVar64 >> 0x20) * (float)((ulong)uVar49 >> 0x20)) {
          fVar65 = 0.0;
          auVar50._4_12_ = SUB1612(ZEXT816(0),4);
          auVar50._0_4_ = in_stack_00000160;
          uVar64 = auVar50._0_8_;
          uVar21 = (ulong)(uint)in_stack_00000180;
          uVar62 = uVar64;
        }
        else {
          FUN_05ece478(&stack0x00001340,*(undefined4 *)((long)unaff_x19 + 0x46c),
                       (int)unaff_x19[0x8e],*(undefined4 *)((long)unaff_x19 + 0x474),
                       (int)unaff_x19[0x8f],0);
          fVar48 = (fVar67 + unaff_s11) * 0.5;
          fVar55 = (in_stack_00000160 + in_stack_00000180) * 0.5;
          unaff_x25[0x16b] = in_stack_00001358;
          unaff_x25[0x16a] = CONCAT44(in_stack_00001354,in_stack_00001350);
          unaff_x25[0x169] = in_stack_00001348;
          unaff_x25[0x168] = in_stack_00001340;
          unaff_x25[0x16d] = in_stack_00001368;
          unaff_x25[0x16c] = in_stack_00001360;
          fVar65 = 0.0;
          unaff_x25[0x16f] = in_stack_00001378;
          unaff_x25[0x16e] = in_stack_00001370;
          auVar50 = ZEXT416((uint)(in_stack_00000180 - fVar55));
          fVar47 = (float)FUN_05ece378(&stack0x00001100,0);
          fVar47 = fVar48 + fVar47;
          fVar67 = 0.0;
          uVar21 = CONCAT44(fVar65 + 0.0,fVar55 + auVar50._0_4_);
          auVar50 = ZEXT416((uint)(in_stack_00000160 - fVar55));
          fVar65 = (float)FUN_05ece378(&stack0x00001100,0);
          unaff_s11 = fVar48 + fVar65;
          fVar65 = 0.0;
          uVar64 = CONCAT44(fVar67 + 0.0,fVar55 + auVar50._0_4_);
          auVar50 = ZEXT416((uint)(in_stack_00000180 - fVar55));
          fVar67 = (float)FUN_05ece378(&stack0x00001100,0);
          fVar67 = fVar48 + fVar67;
          fVar61 = 0.0;
          in_stack_00000180 = fVar55 + auVar50._0_4_;
          fVar65 = fVar65 + 0.0;
          auVar50 = ZEXT416((uint)(in_stack_00000160 - fVar55));
          fVar60 = (float)FUN_05ece378(&stack0x00001100,0);
          fVar48 = fVar48 + fVar60;
          uVar62 = CONCAT44(fVar61 + 0.0,fVar55 + auVar50._0_4_);
        }
        if ((unaff_x19[0x74] == 0) || (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0))
        goto LAB_05cc446c;
        if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x24 + 7)) goto LAB_05cc45e8;
        lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x24 + 7) * (long)(int)unaff_w23;
        *(float *)(lVar25 + 0x114) = unaff_s11;
        *(undefined8 *)(lVar25 + 0x118) = uVar64;
        if ((unaff_x19[0x74] == 0) || (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0))
        goto LAB_05cc446c;
        if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x24 + 7)) goto LAB_05cc45e8;
        lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x24 + 7) * (long)(int)unaff_w23;
        *(float *)(lVar25 + 0x108) = fVar47;
        *(ulong *)(lVar25 + 0x10c) = uVar21;
        if ((unaff_x19[0x74] == 0) || (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0))
        goto LAB_05cc446c;
        if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x24 + 7)) goto LAB_05cc45e8;
        lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x24 + 7) * (long)(int)unaff_w23;
        *(float *)(lVar25 + 0x120) = fVar67;
        *(ulong *)(lVar25 + 0x124) = CONCAT44(fVar65,in_stack_00000180);
        if ((unaff_x19[0x74] == 0) || (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0))
        goto LAB_05cc446c;
        if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x24 + 7)) goto LAB_05cc45e8;
        lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x24 + 7) * (long)(int)unaff_w23;
        *(float *)(lVar25 + 300) = fVar48;
        *(undefined8 *)(lVar25 + 0x130) = uVar62;
        if ((unaff_x19[0x74] == 0) || (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0))
        goto LAB_05cc446c;
        uVar13 = *(uint *)((long)unaff_x19 + 0x4a4);
        fVar48 = *(float *)(unaff_x19 + 0xcb);
        fVar47 = (float)FUN_05f89348(&stack0x00001270,0);
        if (*(uint *)(lVar25 + 0x18) <= uVar13) goto LAB_05cc45e8;
        *(float *)(lVar25 + (long)(int)uVar13 * (long)(int)unaff_w23 + 0x138) =
             fVar48 + in_stack_00000118 * fVar47;
        if ((unaff_x19[0x74] == 0) || (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0))
        goto LAB_05cc446c;
        uVar13 = *(uint *)((long)unaff_x19 + 0x4a4);
        fVar48 = *(float *)((long)unaff_x19 + 0x4ec);
        fVar65 = *(float *)((long)unaff_x19 + 0x634);
        fVar47 = (float)FUN_05f89358(&stack0x00001270,0);
        if (*(uint *)(lVar25 + 0x18) <= uVar13) goto LAB_05cc45e8;
        *(float *)(lVar25 + (long)(int)uVar13 * (long)(int)unaff_w23 + 0x144) =
             (in_stack_00000178._4_4_ - fVar48) + fVar65 + in_stack_00000118 * fVar47;
        if ((unaff_x19[0x74] == 0) || (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0))
        goto LAB_05cc446c;
        uVar13 = *(uint *)(unaff_x24 + 7);
        if (*(uint *)(lVar25 + 0x18) <= uVar13) goto LAB_05cc45e8;
        lVar25 = lVar25 + 0x20;
        *(float *)(lVar25 + (long)(int)uVar13 * (long)(int)unaff_w23 + 0x138) =
             (fVar67 - unaff_s11) / ((float)uVar21 - (float)uVar64);
        fVar47 = in_stack_00000118 * (fStack0000000000000148 + fStack0000000000000140);
        if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
          fVar47 = fVar47 / fStack000000000000015c;
          fVar48 = (in_stack_00000118 * (fStack0000000000000144 + in_stack_00000138._4_4_)) /
                   fStack000000000000015c;
        }
        else {
          fVar48 = in_stack_00000118 * (fStack0000000000000144 + in_stack_00000138._4_4_);
        }
        fVar65 = *(float *)((long)unaff_x19 + 0x634);
        uVar14 = *(uint *)(unaff_x19 + 0x95);
        if ((unaff_w26 == 0) || (uVar13 == uVar14)) {
          fVar47 = fVar47 + fVar65;
          fVar48 = fVar48 + fVar65;
          fVar67 = fVar47;
          fVar60 = fVar48;
          if (fVar65 != 0.0) {
            fVar67 = (fVar47 - fVar65) / *(float *)((long)unaff_x19 + 0x43c);
            fVar60 = (fVar48 - fVar65) / *(float *)((long)unaff_x19 + 0x43c);
            if (fVar67 <= fVar47) {
              fVar67 = fVar47;
            }
            if (fVar48 <= fVar60) {
              fVar60 = fVar48;
            }
          }
          lVar25 = lVar25 + (long)(int)uVar13 * (long)(int)unaff_w23;
          fVar65 = fVar67;
          if (fVar67 <= *(float *)((long)unaff_x19 + 0x4dc)) {
            fVar65 = *(float *)((long)unaff_x19 + 0x4dc);
          }
          fVar55 = fVar60;
          if (*(float *)(unaff_x19 + 0x9c) <= fVar60) {
            fVar55 = *(float *)(unaff_x19 + 0x9c);
          }
          *(float *)((long)unaff_x19 + 0x4dc) = fVar65;
          *(float *)(unaff_x19 + 0x9c) = fVar55;
          *(float *)(lVar25 + 300) = fVar67;
          *(float *)(lVar25 + 0x130) = fVar60;
          fVar67 = *(float *)((long)unaff_x19 + 0x4ec);
          *(float *)(lVar25 + 0x120) = fVar47 - fVar67;
          *(float *)((long)unaff_x19 + 0x4d4) = fVar47 - fVar67;
          *(float *)(lVar25 + 0x128) = fVar48 - fVar67;
          *(float *)(unaff_x19 + 0x9b) = fVar48 - fVar67;
          if (((int)unaff_x19[0x97] == 0) || (*(char *)((long)unaff_x19 + 0x374) != '\0')) {
            *(float *)((long)unaff_x19 + 0x4cc) = fVar65;
            if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
            fVar48 = *(float *)(unaff_x19 + 0x9a);
            fVar65 = (float)FUN_05f84b5c(unaff_x19[0x20] + 0x28,0);
            fStack000000000000015c = (in_stack_00000118 * fVar65) / fStack000000000000015c;
            if (fVar48 <= fStack000000000000015c) {
              fVar48 = fStack000000000000015c;
            }
            fVar67 = *(float *)((long)unaff_x19 + 0x4ec);
            *(float *)(unaff_x19 + 0x9a) = fVar48;
          }
          if (fVar67 == 0.0) {
            fVar48 = *(float *)(unaff_x19 + 0x99);
            if (*(float *)(unaff_x19 + 0x99) <= fVar47) {
              fVar48 = fVar47;
            }
            *(float *)(unaff_x19 + 0x99) = fVar48;
          }
        }
        else {
          lVar25 = lVar25 + (long)(int)uVar13 * (long)(int)unaff_w23;
          uVar62 = unaff_x24[0xe];
          *(undefined8 *)(lVar25 + 300) = uVar62;
          fVar67 = *(float *)((long)unaff_x19 + 0x4ec);
          fVar47 = (float)uVar62 - fVar67;
          fVar48 = (float)((ulong)uVar62 >> 0x20) - fVar67;
          *(float *)(lVar25 + 0x120) = fVar47;
          *(float *)(lVar25 + 0x128) = fVar48;
          unaff_x24[0xd] = CONCAT44(fVar48,fVar47);
        }
        lVar25 = unaff_x19[0x74];
        if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x38), lVar28 == 0)) goto LAB_05cc446c;
        uVar36 = *(uint *)(unaff_x24 + 7);
        if (*(uint *)(lVar28 + 0x18) <= uVar36) goto LAB_05cc45e8;
        lVar28 = lVar28 + (long)(int)uVar36 * (long)(int)unaff_w23;
        *(undefined1 *)(lVar28 + 400) = 0;
        uVar16 = *(uint *)(unaff_x19 + 0x54);
        if ((((in_stack_0000133c == 9) ||
             ((in_stack_0000133c == 0x200b || unaff_w26 != 0 &&
              ((*(uint *)((long)unaff_x19 + 0x304) & 0xfffffffe) == 2)))) ||
            ((unaff_w26 == 0 &&
             (((in_stack_0000133c != 3 && (in_stack_0000133c != 0x200b)) &&
              (in_stack_0000133c != 0xad)))))) ||
           ((in_stack_0000133c == 0xad && ((uint)fStack000000000000005c & 1) == 0 ||
            (*(int *)((long)unaff_x19 + 0x65c) == 1)))) {
          *(undefined1 *)(lVar28 + 400) = 1;
          pfVar29 = _fStack0000000000000098;
          pfVar32 = _fStack00000000000000b8;
          if (fStack0000000000000190 == (float)unaff_w21) {
            lVar25 = *(long *)(lVar25 + 0x50);
            if (lVar25 == 0) goto LAB_05cc446c;
            if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_05cc45e8;
            lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
            pfVar32 = (float *)(lVar25 + 100);
            pfVar29 = (float *)(lVar25 + 0x68);
          }
          fVar65 = *pfVar32;
          fVar67 = *pfVar29;
          fVar47 = *(float *)(unaff_x19 + 0x73);
          fVar48 = 0.0;
          fVar60 = *(float *)(unaff_x19 + 0xcb);
          fStack000000000000014c = (in_stack_000000b0 - fVar65) - fVar67;
          bVar10 = true;
          if ((fVar47 <= fStack000000000000014c) && (bVar10 = false, !NAN(fVar47))) {
            bVar10 = fVar47 == -1.0;
          }
          if (!bVar10) {
            fStack000000000000014c = fVar47;
          }
          fVar47 = 0.0;
          if ((char)unaff_x19[0x1e] == '\0') {
            fVar47 = (float)FUN_05f84e30(&stack0x00001280,0);
          }
          fVar61 = *(float *)((long)unaff_x19 + 0x4ec);
          fVar55 = *(float *)(unaff_x19 + 0x60);
          if (in_stack_0000133c != 0xad) {
            fVar46 = in_stack_00000118;
          }
          if ((0.0 < fVar61) && ((char)unaff_x19[0x5e] == '\0')) {
            fVar48 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
          }
          iVar15 = *(int *)(unaff_x24 + 7);
          auVar53 = ZEXT416((uint)in_stack_00000150);
          fVar48 = (*(float *)((long)unaff_x19 + 0x4cc) - (*(float *)(unaff_x19 + 0x9c) - fVar61)) +
                   fVar48;
          if (in_stack_000000e0._4_4_ < fVar48) {
            if (*(int *)((long)unaff_x19 + 0x314) == -1) {
              *(int *)((long)unaff_x19 + 0x314) = iVar15;
            }
            plVar43 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
            fVar63 = DAT_012751b0;
            if ((char)unaff_x19[0x4c] != '\0') {
              if (0.0 < fVar61) {
                fVar61 = *(float *)((long)unaff_x19 + 0x2f4);
                if ((fVar61 < *(float *)(unaff_x19 + 0x5d)) &&
                   (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
                  fVar46 = *(float *)(unaff_x19 + 0x5d) +
                           ((in_stack_00000018._4_4_ - fVar48) / (float)(int)unaff_x19[0x97]) /
                           fStack0000000000000050;
                  if (fVar46 <= fVar61) {
                    fVar46 = fVar61;
                  }
                  goto LAB_05cc4498;
                }
              }
              fVar48 = *(float *)((long)unaff_x19 + 0x20c);
              fVar61 = *(float *)(unaff_x19 + 0x4f);
              if ((fVar61 < fVar48) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
                *(float *)((long)unaff_x19 + 0x264) = fVar48;
                fVar46 = (fVar48 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
                if (fVar46 <= fVar63) {
                  fVar46 = fVar63;
                }
                fVar47 = (fVar48 - fVar46) * 20.0 + 0.5;
                fVar46 = DAT_01275250;
                if (fVar47 != INFINITY) {
                  fVar46 = (float)(int)fVar47 / 20.0;
                }
                if (fVar46 <= fVar61) {
                  fVar46 = fVar61;
                }
                *(float *)((long)unaff_x19 + 0x20c) = fVar46;
                return;
              }
            }
            iVar18 = (int)unaff_x19[0x62];
            if (iVar18 < 5) {
              if (iVar18 != 1) {
                if (iVar18 != 3) goto LAB_05cbf5cc;
                if (*(int *)(*(long *)
                              Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__ + 0xe4
                            ) == 0) {
                  thunk_FUN_02dabd98();
                }
LAB_05cbf878:
                in_stack_00001308 = FUN_05d11230();
LAB_05cbf88c:
                in_stack_00001328 = CONCAT44(3,iVar15);
                plVar43 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
                goto LAB_05cbdbd4;
              }
              lVar25 = *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
              if (*(int *)(lVar25 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                lVar25 = *plVar43;
              }
              lVar28 = *(long *)(lVar25 + 0xb8);
              if (*(int *)(lVar28 + 0x1708) != 0) {
                if (*(int *)(lVar25 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                  lVar28 = *(long *)(*plVar43 + 0xb8);
                }
                FUN_03cc2b0c(&stack0x00001340,lVar28 + 0x1338,
                             *(undefined8 *)
                              Method_PlayFab_PlayFabMultiplayerInstanceAPI_RemoveMember__);
                memcpy(&stack0x00000d48,&stack0x00001340,0x3b8);
LAB_05cbfc0c:
                iVar15 = FUN_05d11230();
                in_stack_00001308 = iVar15 - 1;
                in_stack_000001b0 = (float)((int)in_stack_000001b0 + 1);
                uVar36 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
                *(uint *)((long)unaff_x19 + 0x4a4) = uVar36;
                uVar45 = 0x2026;
                goto LAB_05cbfc38;
              }
LAB_05cbfc40:
              unaff_x24[7] = 0;
              in_stack_00001308 = 0xffffffff;
              in_stack_00001328 = DAT_01274108;
            }
            else {
              if (iVar18 != 5) {
                if (iVar18 != 6) goto LAB_05cbf5cc;
                if (*(int *)(*(long *)
                              Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__ + 0xe4
                            ) == 0) {
                  thunk_FUN_02dabd98();
                }
                in_stack_00001308 = FUN_05d11230();
                lVar25 = unaff_x19[99];
                if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                uVar21 = FUN_05ee1474(lVar25,0,0);
                if ((uVar21 & 1) == 0) goto LAB_05cbf88c;
                plVar43 = (long *)unaff_x19[99];
                uVar62 = (**(code **)(*unaff_x19 + 0x548))();
                if (plVar43 == (long *)0x0) goto LAB_05cc446c;
                (**(code **)(*plVar43 + 0x558))(plVar43,uVar62,*(undefined8 *)(*plVar43 + 0x560));
                lVar25 = unaff_x19[99];
                if (lVar25 == 0) goto LAB_05cc446c;
                *(int *)(lVar25 + 0x438) = (int)unaff_x19[0x87];
                FUN_05d04ac0(lVar25,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
                plVar43 = (long *)unaff_x19[99];
                if (plVar43 == (long *)0x0) goto LAB_05cc446c;
                (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
                *(undefined1 *)(unaff_x19 + 0x65) = 1;
                goto LAB_05cbf88c;
              }
              if (((int)in_stack_00001308 < 0) || (iVar15 == 0)) {
                *(undefined4 *)(unaff_x24 + 7) = 0;
                plVar43 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
                in_stack_00001308 = 0xffffffff;
                in_stack_00001328 = DAT_01274108;
              }
              else {
                auVar53 = ZEXT416((uint)in_stack_000000e0._4_4_);
                if (in_stack_000000e0._4_4_ <
                    *(float *)(unaff_x24 + 0xe) - *(float *)(unaff_x19 + 0x9c)) {
                  if (*(int *)(*(long *)
                                Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__ +
                              0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  goto LAB_05cbf878;
                }
                if (*(int *)(*(long *)
                              Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__ + 0xe4
                            ) == 0) {
                  thunk_FUN_02dabd98();
                }
                plVar43 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
                in_stack_00001308 = FUN_05d11230();
                *(undefined4 *)(unaff_x19 + 0x95) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
                lVar25 = *plVar43;
                *(undefined1 *)((long)unaff_x19 + 0x374) = 1;
                uVar62 = *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 0x1730);
                *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
                *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
                *(float *)(unaff_x19 + 0xcb) = *(float *)((long)unaff_x19 + 0x444) + 0.0;
                uVar62 = NEON_rev64(uVar62,4);
                auVar53 = ZEXT816(0);
                *(int *)(unaff_x19 + 0x97) = (int)unaff_x19[0x97] + 1;
                iVar15 = *(int *)((long)unaff_x19 + 0x4c4);
                unaff_x24[0xe] = uVar62;
                unaff_x19[0x99] = 0;
                *(int *)((long)unaff_x19 + 0x4c4) = iVar15 + 1;
              }
            }
            goto LAB_05cbdbd4;
          }
LAB_05cbf5cc:
          plVar43 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
          if ((uStack00000000000000ec & 1) != 0) {
            fVar48 = 1.0;
            if ((uVar16 & 0x18) != 0) {
              fVar48 = DAT_01275388;
            }
            fVar47 = ABS(fVar60) + fVar47 * (1.0 - fVar55) * fVar46;
            if (fVar47 <= fVar48 * fStack000000000000014c) goto joined_r0x05cc18b4;
            if (((*(int *)((long)unaff_x19 + 0x304) == 0) ||
                (*(int *)((long)unaff_x19 + 0x304) == 3)) || (iVar15 == (int)unaff_x19[0x95])) {
              if (((char)unaff_x19[0x4c] != '\0') &&
                 (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
                fVar46 = 100.0;
                fVar60 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
                if (fVar55 < fVar60) {
                  fVar46 = fVar47;
                  if (0.0 < fVar55) {
                    fVar46 = fVar47 / (1.0 - fVar55);
                  }
                  fVar55 = fVar55 + (fVar47 - fVar48 * (fStack000000000000014c + DAT_012751f8)) /
                                    fVar46;
                  goto LAB_05cc459c;
                }
                fVar60 = *(float *)((long)unaff_x19 + 0x20c);
                fVar55 = *(float *)(unaff_x19 + 0x4f);
                auVar53 = ZEXT416((uint)fVar55);
                if (fVar55 < fVar60) goto LAB_05cc4504;
              }
              iVar18 = (int)unaff_x19[0x62];
              if (iVar18 == 1) {
                lVar25 = *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
                if (*(int *)(lVar25 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                  lVar25 = *plVar43;
                }
                lVar28 = *(long *)(lVar25 + 0xb8);
                if (*(int *)(lVar28 + 0x1708) == 0) goto LAB_05cbfc40;
                if (*(int *)(lVar25 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                  lVar28 = *(long *)(*plVar43 + 0xb8);
                }
                FUN_03cc2b0c(&stack0x00001340,lVar28 + 0x1338,
                             *(undefined8 *)
                              Method_PlayFab_PlayFabMultiplayerInstanceAPI_RemoveMember__);
                memcpy(&stack0x000005d8,&stack0x00001340,0x3b8);
                goto LAB_05cbfc0c;
              }
              if (iVar18 != 6) {
                if (iVar18 == 3) {
                  if (*(int *)(*(long *)
                                Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__ +
                              0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  goto LAB_05cbf878;
                }
                goto joined_r0x05cc18b4;
              }
              if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__
                          + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              in_stack_00001308 = FUN_05d11230();
              lVar25 = unaff_x19[99];
              if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              uVar21 = FUN_05ee1474(lVar25,0,0);
              if ((uVar21 & 1) != 0) {
                plVar42 = (long *)unaff_x19[99];
                uVar62 = (**(code **)(*unaff_x19 + 0x548))();
                if (plVar42 == (long *)0x0) goto LAB_05cc446c;
                (**(code **)(*plVar42 + 0x558))(plVar42,uVar62,*(undefined8 *)(*plVar42 + 0x560));
                lVar25 = unaff_x19[99];
                if (lVar25 == 0) goto LAB_05cc446c;
                *(int *)(lVar25 + 0x438) = (int)unaff_x19[0x87];
                FUN_05d04ac0(lVar25,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
                plVar42 = (long *)unaff_x19[99];
                if (plVar42 == (long *)0x0) goto LAB_05cc446c;
                (**(code **)(*plVar42 + 0x7d8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7e0));
                *(undefined1 *)(unaff_x19 + 0x65) = 1;
              }
              uVar36 = *(uint *)(unaff_x24 + 7);
              goto LAB_05cbfb88;
            }
            if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__ +
                        0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            in_stack_00001308 = FUN_05d11230();
            if (*(float *)((long)unaff_x19 + 0x2ec) == DAT_01274f94) {
              lVar25 = unaff_x19[0x74];
              if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x38), lVar28 == 0))
              goto LAB_05cc446c;
              if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x24 + 7)) goto LAB_05cc45e8;
              fVar60 = *(float *)((long)unaff_x19 + 0x4ec);
              fVar46 = 0.0;
              if ((0.0 < fVar60) && ((char)unaff_x19[0x5e] == '\0')) {
                fVar46 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
              }
              fVar55 = in_stack_00000108 * *(float *)((long)unaff_x19 + 0x2e4) +
                       *(float *)(lVar28 + (long)(int)*(uint *)(unaff_x24 + 7) *
                                           (long)(int)unaff_w23 + 0x14c) +
                       (fVar46 - *(float *)(unaff_x19 + 0x9c)) +
                       fStack0000000000000050 *
                       (fStack0000000000000048 + *(float *)(unaff_x19 + 0x5d));
            }
            else {
              lVar25 = unaff_x19[0x74];
              *(undefined1 *)(unaff_x19 + 0x5e) = 1;
              if (lVar25 == 0) goto LAB_05cc446c;
              fVar55 = *(float *)((long)unaff_x19 + 0x2ec) +
                       in_stack_00000108 * *(float *)((long)unaff_x19 + 0x2e4);
              fVar60 = *(float *)((long)unaff_x19 + 0x4ec);
            }
            puVar9 = Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
            lVar25 = *(long *)(lVar25 + 0x38);
            if (lVar25 == 0) goto LAB_05cc446c;
            uVar36 = *(uint *)((long)unaff_x19 + 0x4a4);
            if ((*(uint *)(lVar25 + 0x18) <= uVar36) ||
               (uVar33 = uVar36 - 1, *(uint *)(lVar25 + 0x18) <= uVar33)) goto LAB_05cc45e8;
            fVar46 = *(float *)((long)unaff_x19 + 0x4cc);
            lVar25 = lVar25 + 0x20;
            fVar61 = *(float *)(lVar25 + (long)(int)uVar36 * (long)(int)unaff_w23 + 0x130);
            auVar53 = ZEXT416((uint)fVar61);
            fVar61 = (fVar55 + fVar46 + fVar60) - fVar61;
            if ((*(short *)(lVar25 + (long)(int)uVar33 * (long)(int)unaff_w23 + 4) == 0xad &&
                 ((uint)fStack000000000000005c & 1) == 0) &&
               (((int)unaff_x19[0x62] == 0 || (fVar61 < in_stack_000000e0._4_4_)))) {
              fStack000000000000005c = 0.0;
              in_stack_00001328 = CONCAT44(0x2d,uVar33);
              *(uint *)(unaff_x24 + 7) = uVar33;
              plVar43 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
              in_stack_00001308 = in_stack_00001308 - 1;
              goto LAB_05cbdbd4;
            }
            if (*(short *)(lVar25 + (long)(int)uVar36 * (long)(int)unaff_w23 + 4) == 0xad) {
              fStack000000000000005c = 1.4013e-45;
              plVar43 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
              goto LAB_05cbdbd4;
            }
            if ((char)unaff_x19[0x4c] != '\0' &&
                (((uint)in_stack_00000078._4_4_ ^ 0xffffffff) & 1) == 0) {
              fVar60 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
              fVar55 = *(float *)(unaff_x19 + 0x60);
              if ((fVar60 <= fVar55) || ((int)unaff_x19[0x4e] <= *(int *)((long)unaff_x19 + 0x26c)))
              {
                fVar60 = *(float *)((long)unaff_x19 + 0x20c);
                fVar55 = *(float *)(unaff_x19 + 0x4f);
                auVar53 = ZEXT416((uint)fVar55);
                if ((fVar55 < fVar60) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
                goto LAB_05cc4504;
                goto LAB_05cc1214;
              }
LAB_05cc45ac:
              fVar46 = fVar47;
              if (0.0 < fVar55) {
                fVar46 = fVar47 / (1.0 - fVar55);
              }
              fVar55 = fVar55 + (fVar47 - fVar48 * (fStack000000000000014c + DAT_012751f8)) / fVar46
              ;
LAB_05cc459c:
              if (fVar60 <= fVar55) {
                fVar55 = fVar60;
              }
              *(float *)(unaff_x19 + 0x60) = fVar55;
              return;
            }
LAB_05cc1214:
            lVar25 = *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
            if (*(int *)(lVar25 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar25 = *(long *)puVar9;
            }
            if (((((uint)in_stack_00000078._4_4_ & 1) != 0) &&
                (iVar18 = *(int *)(*(long *)(lVar25 + 0xb8) + 0xf80), iVar18 != -1)) &&
               (iVar18 != iStack0000000000000020)) {
              if (*(int *)(lVar25 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              in_stack_00001308 = FUN_05d11230();
              if ((unaff_x19[0x74] == 0) ||
                 (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0)) goto LAB_05cc446c;
              uVar36 = *(int *)(unaff_x24 + 7) - 1;
              if (*(uint *)(lVar25 + 0x18) <= uVar36) goto LAB_05cc45e8;
              iStack0000000000000020 = iVar18;
              if (*(short *)(lVar25 + (long)(int)uVar36 * (long)(int)unaff_w23 + 0x24) == 0xad) {
                fStack000000000000005c = 0.0;
                in_stack_00001328 = CONCAT44(0x2d,uVar36);
                *(uint *)(unaff_x24 + 7) = uVar36;
                plVar43 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
                in_stack_00001308 = in_stack_00001308 - 1;
                goto LAB_05cbdbd4;
              }
            }
            if (fVar61 <= in_stack_000000e0._4_4_) {
              auVar53 = ZEXT416((uint)in_stack_00000118);
              fVar46 = in_stack_00000108;
              FUN_05d11cfc();
LAB_05cc1568:
              in_stack_00000078._4_4_ = 1.4013e-45;
              fStack000000000000005c = 0.0;
              fStack0000000000000068 = 1.4013e-45;
              plVar43 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
              goto LAB_05cbdbd4;
            }
            if (*(int *)((long)unaff_x19 + 0x314) == -1) {
              *(undefined4 *)((long)unaff_x19 + 0x314) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
            }
            plVar43 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
            if ((char)unaff_x19[0x4c] != '\0') {
              fVar60 = *(float *)((long)unaff_x19 + 0x2f4);
              if ((fVar60 < *(float *)(unaff_x19 + 0x5d)) &&
                 (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
                fVar46 = *(float *)(unaff_x19 + 0x5d) +
                         ((in_stack_00000018._4_4_ - fVar61) / (float)((int)unaff_x19[0x97] + 1)) /
                         fStack0000000000000050;
                if (fVar46 <= fVar60) {
                  fVar46 = fVar60;
                }
LAB_05cc4498:
                *(float *)(unaff_x19 + 0x5d) = fVar46;
                return;
              }
              fVar60 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
              fVar55 = *(float *)(unaff_x19 + 0x60);
              if ((fVar55 < fVar60) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
              goto LAB_05cc45ac;
              fVar60 = *(float *)((long)unaff_x19 + 0x20c);
              fVar55 = *(float *)(unaff_x19 + 0x4f);
              auVar53 = ZEXT416((uint)fVar55);
              if ((fVar55 < fVar60) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
LAB_05cc4504:
                fVar46 = DAT_012751b0;
                *(float *)((long)unaff_x19 + 0x264) = fVar60;
                fVar47 = (fVar60 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
                if (fVar47 <= fVar46) {
                  fVar47 = fVar46;
                }
                fVar47 = (fVar60 - fVar47) * 20.0 + 0.5;
                fVar46 = DAT_01275250;
                if (fVar47 != INFINITY) {
                  fVar46 = (float)(int)fVar47 / 20.0;
                }
                if (fVar46 <= fVar55) {
                  fVar46 = fVar55;
                }
LAB_05cc1978:
                *(float *)((long)unaff_x19 + 0x20c) = fVar46;
                return;
              }
            }
            iVar18 = (int)unaff_x19[0x62];
            fStack000000000000005c = 0.0;
            if (iVar18 < 3) {
              if (iVar18 != 0) {
                if (iVar18 == 1) {
                  lVar25 = *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
                  if (*(int *)(lVar25 + 0xe4) == 0) {
                    thunk_FUN_02dabd98();
                    lVar25 = *(long *)
                              Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
                  }
                  in_stack_00001328 = DAT_01274108;
                  lVar28 = *(long *)(lVar25 + 0xb8);
                  if (*(int *)(lVar28 + 0x1708) == 0) {
                    in_stack_00001308 = 0xffffffff;
                    in_stack_000001a8[7] = 0;
                  }
                  else {
                    if (*(int *)(lVar25 + 0xe4) == 0) {
                      thunk_FUN_02dabd98();
                      lVar28 = *(long *)(*(long *)
                                          Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__
                                        + 0xb8);
                    }
                    FUN_03cc2b0c(&stack0x00001340,lVar28 + 0x1338,
                                 *(undefined8 *)
                                  Method_PlayFab_PlayFabMultiplayerInstanceAPI_RemoveMember__);
                    memcpy(&stack0x00000990,&stack0x00001340,0x3b8);
                    iVar15 = FUN_05d11230();
                    in_stack_00001308 = iVar15 - 1;
                    iVar15 = *(int *)((long)unaff_x19 + 0x4a4) + -1;
                    *(int *)((long)unaff_x19 + 0x4a4) = iVar15;
                    in_stack_000001b0 = (float)((int)in_stack_000001b0 + 1);
                    in_stack_00001328 = CONCAT44(0x2026,iVar15);
                  }
                  goto LAB_05cc1884;
                }
                if (iVar18 != 2) goto joined_r0x05cc18b4;
              }
LAB_05cc159c:
              auVar53 = ZEXT416((uint)in_stack_00000118);
              fVar46 = in_stack_00000108;
              FUN_05d11cfc();
              fStack000000000000005c = 0.0;
              goto 
              UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__set_onSelectExited;
            }
            if (iVar18 < 5) {
              if (iVar18 == 3) {
                if (*(int *)(*(long *)
                              Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__ + 0xe4
                            ) == 0) {
                  thunk_FUN_02dabd98();
                }
                in_stack_00001308 = FUN_05d11230();
                in_stack_00001328 = CONCAT44(3,iVar15);
LAB_05cc1884:
                fStack000000000000005c = 0.0;
                unaff_x25 = (undefined8 *)&stack0x000005c0;
                unaff_x24 = in_stack_000001a8;
                plVar43 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
                goto LAB_05cbdbd4;
              }
              if (iVar18 == 4) goto LAB_05cc159c;
              goto joined_r0x05cc18b4;
            }
            if (iVar18 == 5) {
              auVar53 = ZEXT416((uint)in_stack_00000118);
              *(undefined1 *)((long)unaff_x19 + 0x374) = 1;
              fVar46 = in_stack_00000108;
              FUN_05d11cfc();
              *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
              *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
              *(int *)((long)unaff_x19 + 0x4c4) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
              unaff_x19[0x99] = 0;
              goto LAB_05cc1568;
            }
            unaff_x24 = in_stack_000001a8;
            if (iVar18 == 6) {
              lVar25 = unaff_x19[99];
              if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              uVar21 = FUN_05ee1474(lVar25,0,0);
              if ((uVar21 & 1) != 0) {
                plVar43 = (long *)unaff_x19[99];
                uVar62 = (**(code **)(*unaff_x19 + 0x548))();
                if (plVar43 == (long *)0x0) goto LAB_05cc446c;
                (**(code **)(*plVar43 + 0x558))(plVar43,uVar62,*(undefined8 *)(*plVar43 + 0x560));
                lVar25 = unaff_x19[99];
                if (lVar25 == 0) goto LAB_05cc446c;
                *(int *)(lVar25 + 0x438) = (int)unaff_x19[0x87];
                FUN_05d04ac0(lVar25,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
                plVar43 = (long *)unaff_x19[99];
                if (plVar43 == (long *)0x0) goto LAB_05cc446c;
                (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
                *(undefined1 *)(unaff_x19 + 0x65) = 1;
              }
              in_stack_00001328 = CONCAT44(3,*(undefined4 *)(in_stack_000001a8 + 7));
              goto LAB_05cc1884;
            }
          }
joined_r0x05cc18b4:
          Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__ = (undefined *)plVar43;
          if (unaff_w26 == 0) {
            if (in_stack_0000133c == 0xad) {
              if ((unaff_x19[0x74] != 0) &&
                 (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 != 0)) {
                if (*(uint *)(unaff_x24 + 7) < *(uint *)(lVar25 + 0x18)) {
                  *(undefined1 *)
                   (lVar25 + (long)(int)*(uint *)(unaff_x24 + 7) * (long)(int)unaff_w23 + 400) = 0;
                  goto LAB_05cbfe80;
                }
                goto LAB_05cc45e8;
              }
              goto LAB_05cc446c;
            }
            if (*(int *)((long)unaff_x19 + 0x65c) == 1) {
              (**(code **)(*unaff_x19 + 0x8c8))();
            }
            else if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
              (**(code **)(*unaff_x19 + 0x8b8))();
            }
            if (((uint)fStack0000000000000068 & 1) != 0) {
              *(undefined4 *)(unaff_x24 + 8) = *(undefined4 *)(unaff_x24 + 7);
            }
            *(undefined4 *)((long)unaff_x19 + 0x4b4) = *(undefined4 *)(unaff_x24 + 7);
            *(int *)((long)unaff_x19 + 0x4bc) = *(int *)((long)unaff_x19 + 0x4bc) + 1;
            if ((unaff_x19[0x74] == 0) || (lVar25 = *(long *)(unaff_x19[0x74] + 0x50), lVar25 == 0))
            goto LAB_05cc446c;
            if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_05cc45e8;
            fStack0000000000000068 = 0.0;
            lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
            *(float *)(lVar25 + 100) = fVar65;
            *(float *)(lVar25 + 0x68) = fVar67;
          }
          else {
            lVar25 = unaff_x19[0x74];
            if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x38), lVar28 == 0))
            goto LAB_05cc446c;
            uVar36 = *(uint *)(unaff_x24 + 7);
            if (*(uint *)(lVar28 + 0x18) <= uVar36) goto LAB_05cc45e8;
            *(undefined1 *)(lVar28 + (long)(int)uVar36 * (long)(int)unaff_w23 + 400) = 0;
            *(uint *)((long)unaff_x19 + 0x4b4) = uVar36;
            lVar28 = *(long *)(lVar25 + 0x50);
            if (lVar28 == 0) goto LAB_05cc446c;
            uVar36 = *(uint *)(lVar28 + 0x18);
            if (uVar36 <= *(uint *)(unaff_x19 + 0x97)) goto LAB_05cc45e8;
            lVar28 = lVar28 + 0x20;
            lVar30 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
            iVar15 = *(int *)(lVar30 + 0xc) + 1;
            *(int *)(lVar30 + 0xc) = iVar15;
            uVar33 = *(uint *)(unaff_x19 + 0x97);
            *(int *)(unaff_x19 + 0x98) = iVar15;
            if (uVar36 <= uVar33) goto LAB_05cc45e8;
            lVar30 = lVar28 + (long)(int)uVar33 * 0x60;
            *(float *)(lVar30 + 0x44) = fVar65;
            *(float *)(lVar30 + 0x48) = fVar67;
            *(int *)(lVar25 + 0x20) = *(int *)(lVar25 + 0x20) + 1;
            if (in_stack_0000133c == 0xa0) {
              *(int *)(lVar28 + (long)(int)uVar33 * 0x60) =
                   *(int *)(lVar28 + (long)(int)uVar33 * 0x60) + 1;
            }
          }
        }
        else {
          if (((in_stack_0000133c & 0xfffffffe) == 10) && ((int)unaff_x19[0x62] == 6)) {
            fVar47 = 0.0;
            if ((0.0 < fVar67) && ((char)unaff_x19[0x5e] == '\0')) {
              fVar47 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
            }
            fVar46 = *(float *)((long)unaff_x19 + 0x4cc);
            auVar53 = ZEXT416((uint)in_stack_000000e0._4_4_);
            if (in_stack_000000e0._4_4_ <
                (fVar46 - (*(float *)(unaff_x19 + 0x9c) - fVar67)) + fVar47) {
              if (*(int *)((long)unaff_x19 + 0x314) == -1) {
                *(uint *)((long)unaff_x19 + 0x314) = uVar36;
              }
              plVar43 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
              if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__
                          + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              in_stack_00001308 = FUN_05d11230();
              lVar25 = unaff_x19[99];
              if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              uVar21 = FUN_05ee1474(lVar25,0,0);
              if ((uVar21 & 1) != 0) {
                plVar42 = (long *)unaff_x19[99];
                uVar62 = (**(code **)(*unaff_x19 + 0x548))();
                if (plVar42 == (long *)0x0) goto LAB_05cc446c;
                (**(code **)(*plVar42 + 0x558))(plVar42,uVar62,*(undefined8 *)(*plVar42 + 0x560));
                lVar25 = unaff_x19[99];
                if (lVar25 == 0) goto LAB_05cc446c;
                *(int *)(lVar25 + 0x438) = (int)unaff_x19[0x87];
                FUN_05d04ac0(lVar25,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
                plVar42 = (long *)unaff_x19[99];
                if (plVar42 == (long *)0x0) goto LAB_05cc446c;
                (**(code **)(*plVar42 + 0x7d8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7e0));
                *(undefined1 *)(unaff_x19 + 0x65) = 1;
              }
LAB_05cbfb88:
              uVar45 = 3;
LAB_05cbfc38:
              in_stack_00001328 = CONCAT44(uVar45,uVar36);
              goto LAB_05cbdbd4;
            }
          }
          if ((((in_stack_0000133c - 0x2007 < 0x23) &&
               ((1L << ((ulong)(in_stack_0000133c - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
              (in_stack_0000133c - 10 < 2)) || (in_stack_0000133c == 0xa0)) {
            plVar43 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
            if (in_stack_0000133c != 0xad) goto LAB_05cbfdd4;
          }
          else {
            if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar21 = FUN_04f758f0(in_stack_0000133c,0);
            if (((uVar21 & 1) != 0) && (in_stack_0000133c != 0xad)) {
LAB_05cbfdd4:
              plVar43 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
              if ((in_stack_0000133c == 0x200b) || (in_stack_0000133c == 0x2060)) goto LAB_05cbfe80;
              lVar25 = unaff_x19[0x74];
              if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x50), lVar28 == 0))
              goto LAB_05cc446c;
              if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_05cc45e8;
              lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
              *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
              *(int *)(lVar25 + 0x20) = *(int *)(lVar25 + 0x20) + 1;
            }
            plVar43 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
            if (in_stack_0000133c == 0xa0) {
              if ((unaff_x19[0x74] == 0) ||
                 (lVar25 = *(long *)(unaff_x19[0x74] + 0x50), lVar25 == 0)) goto LAB_05cc446c;
              if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_05cc45e8;
              lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
              *(int *)(lVar25 + 0x20) = *(int *)(lVar25 + 0x20) + 1;
            }
          }
        }
LAB_05cbfe80:
        if (((int)unaff_x19[0x62] == 1) &&
           ((fStack0000000000000190 != (float)unaff_w21 || (in_stack_0000133c == 0x2d)))) {
          if (unaff_x19[0xce] == 0) goto LAB_05cc446c;
          fVar47 = *(float *)(unaff_x19 + 0x42);
          fVar46 = (float)FUN_05f84b24(unaff_x19[0xce] + 0x28,0);
          if (unaff_x19[0xce] == 0) goto LAB_05cc446c;
          fVar48 = (float)FUN_05f84b2c(unaff_x19[0xce] + 0x28,0);
          lVar25 = unaff_x19[0xcd];
          if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_05cc446c;
          fVar67 = *(float *)((long)unaff_x19 + 0x43c);
          fVar60 = *(float *)(lVar25 + 0x2c);
          fVar65 = (float)FUN_05f85024(*(long *)(lVar25 + 0x20),0);
          uVar62 = *(undefined8 *)_fStack00000000000000b8;
          fVar65 = fVar67 * in_stack_00000120 * (fVar47 / fVar46) * fVar48 * fVar60 * fVar65;
          if ((in_stack_0000133c == 10) &&
             (*(int *)((long)unaff_x19 + 0x4a4) != (int)unaff_x19[0x95])) {
            if ((unaff_x19[0x74] == 0) || (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0))
            goto LAB_05cc446c;
            uVar36 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
            if (*(uint *)(lVar25 + 0x18) <= uVar36) goto LAB_05cc45e8;
            if (unaff_x19[0xce] == 0) goto LAB_05cc446c;
            fVar47 = *(float *)(lVar25 + (long)(int)uVar36 * (long)(int)unaff_w23 + 0x58);
            fVar46 = (float)FUN_05f84b24(unaff_x19[0xce] + 0x28,0);
            if (unaff_x19[0xce] == 0) goto LAB_05cc446c;
            fVar48 = (float)FUN_05f84b2c(unaff_x19[0xce] + 0x28,0);
            lVar25 = unaff_x19[0xcd];
            if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_05cc446c;
            fVar67 = *(float *)((long)unaff_x19 + 0x43c);
            fVar60 = *(float *)(lVar25 + 0x2c);
            fVar65 = (float)FUN_05f85024(*(long *)(lVar25 + 0x20),0);
            if ((unaff_x19[0x74] == 0) || (lVar25 = *(long *)(unaff_x19[0x74] + 0x50), lVar25 == 0))
            goto LAB_05cc446c;
            if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_05cc45e8;
            uVar62 = *(undefined8 *)(lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60 + 100);
            fVar65 = fVar67 * in_stack_00000120 * (fVar47 / fVar46) * fVar48 * fVar60 * fVar65;
          }
          fVar47 = *(float *)((long)unaff_x19 + 0x4ec);
          fVar46 = 0.0;
          fVar48 = 0.0;
          if ((0.0 < fVar47) && ((char)unaff_x19[0x5e] == '\0')) {
            fVar48 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
          }
          fVar67 = *(float *)((long)unaff_x19 + 0x4cc);
          fVar60 = *(float *)(unaff_x19 + 0x9c);
          fVar55 = *(float *)(unaff_x19 + 0xcb);
          in_stack_00000180 = (float)uVar62;
          fStack0000000000000184 = (float)((ulong)uVar62 >> 0x20);
          if ((char)unaff_x19[0x1e] == '\0') {
            if ((unaff_x19[0xcd] == 0) || (lVar25 = *(long *)(unaff_x19[0xcd] + 0x20), lVar25 == 0))
            goto LAB_05cc446c;
            FUN_05f84fe8(&stack0x00001340,lVar25,0);
            fVar46 = (float)FUN_05f84e30(&stack0x000011e0,0);
          }
          fVar61 = *(float *)(unaff_x19 + 0x73);
          fStack0000000000000184 = (in_stack_000000b0 - in_stack_00000180) - fStack0000000000000184;
          bVar10 = true;
          if ((fVar61 <= fStack0000000000000184) && (bVar10 = false, !NAN(fVar61))) {
            bVar10 = fVar61 == -1.0;
          }
          if (!bVar10) {
            fStack0000000000000184 = fVar61;
          }
          fVar61 = 1.0;
          if ((uVar16 & 0x18) != 0) {
            fVar61 = DAT_01275388;
          }
          if ((ABS(fVar55) + fVar65 * fVar46 * (1.0 - *(float *)(unaff_x19 + 0x60)) <
               fVar61 * fStack0000000000000184) &&
             ((fVar67 - (fVar60 - fVar47)) + fVar48 < in_stack_000000e0._4_4_)) {
            if (*(int *)(*plVar43 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            FUN_05d115d4();
            lVar25 = *(long *)(*plVar43 + 0xb8);
            memcpy(&stack0x00001340,(void *)(lVar25 + 0x810),0x3b8);
            FUN_03cc2a20(lVar25 + 0x1338,&stack0x00001340,
                         *(undefined8 *)
                          Method_PlayFab_PlayFabMultiplayerInstanceAPI_RequestMultiplayerServer__);
          }
        }
        lVar25 = unaff_x19[0x74];
        if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x38), lVar28 == 0)) goto LAB_05cc446c;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_05cc45e8;
        lVar28 = lVar28 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * (long)(int)unaff_w23;
        uVar36 = *(uint *)(unaff_x19 + 0x97);
        *(uint *)(lVar28 + 0x5c) = uVar36;
        *(undefined4 *)(lVar28 + 0x60) = *(undefined4 *)((long)unaff_x19 + 0x4c4);
        if ((fStack0000000000000190 == (float)unaff_w21) ||
           ((in_stack_0000133c < 0xe && ((1 << (ulong)(in_stack_0000133c & 0x1f) & 0x2c00U) != 0))))
        {
          lVar25 = *(long *)(lVar25 + 0x50);
          if (lVar25 == 0) goto LAB_05cc446c;
          if (*(uint *)(lVar25 + 0x18) <= uVar36) goto LAB_05cc45e8;
          if (*(int *)(lVar25 + (long)(int)uVar36 * 0x60 + 0x24) == 1) goto LAB_05cc0220;
        }
        else {
          lVar25 = *(long *)(lVar25 + 0x50);
          if (lVar25 == 0) goto LAB_05cc446c;
LAB_05cc0220:
          if (*(uint *)(lVar25 + 0x18) <= uVar36) goto LAB_05cc45e8;
          *(int *)(lVar25 + (long)(int)uVar36 * 0x60 + 0x6c) = (int)unaff_x19[0x54];
        }
        if (in_stack_0000133c == 9) {
          if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
          fVar46 = (float)FUN_05f84bcc(unaff_x19[0x20] + 0x28,0);
          if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
          fVar47 = (float)NEON_ucvtf((uint)*(byte *)(unaff_x19[0x20] + 0x1b1));
          fVar65 = *(float *)(unaff_x19 + 0xcb);
          auVar53 = ZEXT416((uint)fVar65);
          fVar48 = in_stack_00000118 * fVar46 * fVar47;
          if ((char)unaff_x19[0x1e] == '\0') {
            fVar46 = fVar48 * (float)(int)(fVar65 / fVar48);
            fVar47 = fVar46;
            if (fVar46 <= fVar65) {
              fVar47 = fVar48 + fVar65;
            }
          }
          else {
            fVar46 = fVar48 * (float)(int)(fVar65 / fVar48);
            fVar47 = fVar46;
            if (fVar65 <= fVar46) {
              fVar47 = fVar65 - fVar48;
            }
          }
LAB_05cc0464:
          *(float *)(unaff_x19 + 0xcb) = fVar47;
        }
        else {
          fVar47 = *(float *)(unaff_x19 + 0x5b);
          if (fVar47 == 0.0) {
            fVar47 = *(float *)(unaff_x19 + 0xcb);
            if ((char)unaff_x19[0x1e] == '\0') {
              fVar65 = (float)FUN_05f84e30(&stack0x00001280,0);
              fVar60 = *(float *)(unaff_x24 + 2);
              fVar67 = (float)FUN_05f89368(&stack0x00001270,0);
              if (unaff_x19[0x20] != 0) {
                fVar46 = *(float *)(unaff_x19 + 0x60);
                fVar48 = 1.0 - fVar46;
                fVar47 = fVar47 + fVar48 * (*(float *)((long)unaff_x19 + 0x2d4) +
                                           in_stack_00000118 * (fVar65 * fVar60 + fVar67) +
                                           in_stack_00000108 *
                                           (in_stack_000000f0 +
                                           in_stack_000000c0 + *(float *)(unaff_x19[0x20] + 0x1a4)))
                ;
                *(float *)(unaff_x19 + 0xcb) = fVar47;
                goto joined_r0x05cc03a4;
              }
              goto LAB_05cc446c;
            }
            fVar48 = (float)FUN_05f89368(&stack0x00001270,0);
            if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
            fVar46 = *(float *)(unaff_x19 + 0x60);
            auVar53 = ZEXT416((uint)(1.0 - fVar46));
            fVar47 = fVar47 - (1.0 - fVar46) *
                              (*(float *)((long)unaff_x19 + 0x2d4) +
                              in_stack_00000118 * fVar48 +
                              in_stack_00000108 *
                              (in_stack_000000f0 +
                              in_stack_000000c0 + *(float *)(unaff_x19[0x20] + 0x1a4)));
            *(float *)(unaff_x19 + 0xcb) = fVar47;
            if ((unaff_w26 != 0) || (in_stack_0000133c == 0x200b)) {
              auVar53 = ZEXT416((uint)(in_stack_00000108 * *(float *)(unaff_x19 + 0x5c)));
              fVar46 = in_stack_00000108;
              fVar47 = fVar47 - in_stack_00000108 * *(float *)(unaff_x19 + 0x5c);
              goto LAB_05cc0464;
            }
          }
          else {
            if (((*(char *)((long)unaff_x19 + 0x2dc) != '\0') && (in_stack_0000133c < 0x3b)) &&
               ((1L << ((ulong)in_stack_0000133c & 0x3f) & 0x400500000000000U) != 0)) {
              fVar47 = fVar47 * 0.5;
            }
            if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
            fVar46 = *(float *)(unaff_x19 + 0x60);
            fVar48 = *(float *)(unaff_x19 + 0xcb);
            fVar47 = fVar48 + (1.0 - fVar46) *
                              (*(float *)((long)unaff_x19 + 0x2d4) +
                              (fVar47 - fStack0000000000000094) +
                              in_stack_00000108 *
                              (in_stack_000000c0 + *(float *)(unaff_x19[0x20] + 0x1a4)));
            *(float *)(unaff_x19 + 0xcb) = fVar47;
joined_r0x05cc03a4:
            if ((unaff_w26 != 0) || (auVar53 = ZEXT416((uint)fVar48), in_stack_0000133c == 0x200b))
            {
              auVar53 = ZEXT416((uint)(in_stack_00000108 * *(float *)(unaff_x19 + 0x5c)));
              fVar46 = in_stack_00000108;
              fVar47 = fVar47 + in_stack_00000108 * *(float *)(unaff_x19 + 0x5c);
              goto LAB_05cc0464;
            }
          }
        }
        lVar25 = unaff_x19[0x74];
        if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x38), lVar28 == 0)) goto LAB_05cc446c;
        uVar36 = *(uint *)(unaff_x24 + 7);
        if (*(uint *)(lVar28 + 0x18) <= uVar36) goto LAB_05cc45e8;
        *(float *)(lVar28 + (long)(int)uVar36 * (long)(int)unaff_w23 + 0x13c) = fVar47;
        if (in_stack_0000133c == 0xd) {
          auVar53 = ZEXT816(0);
          *(float *)(unaff_x19 + 0xcb) = *(float *)((long)unaff_x19 + 0x444) + 0.0;
        }
        if (((int)unaff_x19[0x62] == 5) &&
           (((0xd < in_stack_0000133c || ((1 << (ulong)(in_stack_0000133c & 0x1f) & 0x2c00U) == 0))
            && (1 < in_stack_0000133c - 0x2028)))) {
          lVar28 = *(long *)(lVar25 + 0x58);
          if (lVar28 == 0) goto LAB_05cc446c;
          iVar15 = *(int *)((long)unaff_x19 + 0x4c4) + 1;
          if (*(int *)(lVar28 + 0x18) < iVar15) {
            if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListSecretSummaries__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            FUN_0338e148((long *)(lVar25 + 0x58),iVar15,1,
                         *(undefined8 *)
                          Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListMultiplayerServers__);
            lVar25 = unaff_x19[0x74];
            if (lVar25 == 0) goto LAB_05cc446c;
          }
          plVar43 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
          lVar28 = *(long *)(lVar25 + 0x58);
          if (lVar28 == 0) goto LAB_05cc446c;
          uVar16 = *(uint *)((long)unaff_x19 + 0x4c4);
          if (*(uint *)(lVar28 + 0x18) <= uVar16) goto LAB_05cc45e8;
          lVar28 = lVar28 + 0x20;
          lVar30 = lVar28 + (long)(int)uVar16 * 0x14;
          *(int *)(lVar30 + 8) = (int)unaff_x19[0x99];
          fVar48 = *(float *)(lVar30 + 0x10);
          auVar53 = ZEXT416((uint)fVar48);
          fVar47 = *(float *)(unaff_x19 + 0x9b);
          if (fVar48 <= *(float *)(unaff_x19 + 0x9b)) {
            fVar47 = fVar48;
          }
          *(float *)(lVar30 + 0x10) = fVar47;
          if (*(char *)((long)unaff_x19 + 0x374) != '\0') {
            *(undefined1 *)((long)unaff_x19 + 0x374) = 0;
            *(undefined4 *)(lVar28 + (long)(int)uVar16 * 0x14) =
                 *(undefined4 *)((long)unaff_x19 + 0x4a4);
          }
          uVar36 = *(uint *)(unaff_x24 + 7);
          *(uint *)(lVar28 + (long)(int)uVar16 * 0x14 + 4) = uVar36;
        }
        uVar16 = in_stack_0000133c;
        if (((in_stack_0000133c < 0xc) && ((1 << (ulong)(in_stack_0000133c & 0x1f) & 0xc08U) != 0))
           || ((in_stack_0000133c - 0x2028 < 2 ||
               ((in_stack_0000133c == 0x2d && fStack0000000000000190 == (float)unaff_w21 ||
                (uVar36 == uStack0000000000000054)))))) {
          if (0.0 < *(float *)((long)unaff_x19 + 0x4ec)) {
            fVar46 = *(float *)((long)unaff_x19 + 0x4dc);
            fVar47 = *(float *)((long)unaff_x19 + 0x4e4);
            if (*(int *)(*(long *)PTR_DAT_06646780 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            fVar46 = fVar46 - fVar47;
            if (((fStack0000000000000058 < ABS(fVar46)) && ((char)unaff_x19[0x5e] == '\0')) &&
               (*(char *)((long)unaff_x19 + 0x374) == '\0')) {
              FUN_05d11990();
              lVar25 = *plVar43;
              *(float *)(unaff_x19 + 0x9b) = *(float *)(unaff_x19 + 0x9b) - fVar46;
              *(float *)((long)unaff_x19 + 0x4ec) = fVar46 + *(float *)((long)unaff_x19 + 0x4ec);
              if (*(int *)(lVar25 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                lVar25 = *plVar43;
              }
              lVar28 = *(long *)(lVar25 + 0xb8);
              if (*(int *)(lVar28 + 0x838) == (int)unaff_x19[0x97]) {
                if (*(int *)(lVar25 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                  lVar28 = *(long *)(*plVar43 + 0xb8);
                }
                FUN_03cc2b0c(&stack0x00000200,lVar28 + 0x1338,
                             *(undefined8 *)
                              Method_PlayFab_PlayFabMultiplayerInstanceAPI_RemoveMember__);
                lVar25 = *plVar43;
                memcpy((void *)(*(long *)(lVar25 + 0xb8) + 0x810),&stack0x00000200,0x3b8);
                thunk_FUN_02dc1ef0(*(long *)(lVar25 + 0xb8) + 0x8a8,0);
                lVar25 = *(long *)(*plVar43 + 0xb8);
                *(float *)(lVar25 + 0x848) = fVar46 + *(float *)(lVar25 + 0x848);
                *(float *)(lVar25 + 0x894) = fVar46 + *(float *)(lVar25 + 0x894);
                memcpy(&stack0x00001340,(void *)(lVar25 + 0x810),0x3b8);
                FUN_03cc2a20(lVar25 + 0x1338,&stack0x00001340,
                             *(undefined8 *)
                              Method_PlayFab_PlayFabMultiplayerInstanceAPI_RequestMultiplayerServer__
                            );
              }
            }
          }
          fVar48 = *(float *)((long)unaff_x19 + 0x4ec);
          *(undefined1 *)((long)unaff_x19 + 0x374) = 0;
          fVar47 = *(float *)(unaff_x19 + 0x9c) - fVar48;
          fVar46 = *(float *)(unaff_x19 + 0x9b);
          if (fVar47 <= *(float *)(unaff_x19 + 0x9b)) {
            fVar46 = fVar47;
          }
          fVar65 = *(float *)((long)unaff_x19 + 0x4dc);
          *(float *)(unaff_x19 + 0x9b) = fVar46;
          if (in_stack_00001334 == '\0') {
            in_stack_00001338 = fVar46;
          }
          if ((*(char *)((long)unaff_x19 + 0x36c) != '\0') &&
             (((int)unaff_x19[0x6c] <= *(int *)((long)unaff_x19 + 0x4a4) ||
              ((int)unaff_x19[0x6d] <= (int)unaff_x19[0x97])))) {
            in_stack_00001334 = '\x01';
          }
          lVar25 = unaff_x19[0x74];
          if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x50), lVar28 == 0)) goto LAB_05cc446c;
          if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_05cc45e8;
          lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
          iVar18 = (int)unaff_x19[0x95];
          *(int *)(lVar28 + 0x38) = iVar18;
          iVar15 = iVar18;
          if (iVar18 <= *(int *)((long)unaff_x19 + 0x4ac)) {
            iVar15 = *(int *)((long)unaff_x19 + 0x4ac);
          }
          *(int *)((long)unaff_x19 + 0x4ac) = iVar15;
          *(int *)(lVar28 + 0x3c) = iVar15;
          iVar37 = *(int *)((long)unaff_x19 + 0x4a4);
          *(int *)(unaff_x19 + 0x96) = iVar37;
          *(int *)(lVar28 + 0x40) = iVar37;
          iVar17 = *(int *)((long)unaff_x19 + 0x4ac);
          if (iVar15 <= *(int *)((long)unaff_x19 + 0x4b4)) {
            iVar17 = *(int *)((long)unaff_x19 + 0x4b4);
          }
          *(int *)((long)unaff_x19 + 0x4b4) = iVar17;
          *(int *)(lVar28 + 0x44) = iVar17;
          *(int *)(lVar28 + 0x24) = (iVar37 - iVar18) + 1;
          iVar15 = *(int *)((long)unaff_x19 + 0x4bc);
          *(int *)(lVar28 + 0x28) = iVar15;
          *(int *)(lVar28 + 0x30) = (iVar17 - (iVar18 + iVar15)) + 1;
          lVar25 = *(long *)(lVar25 + 0x38);
          if (lVar25 == 0) goto LAB_05cc446c;
          if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x24 + 8)) goto LAB_05cc45e8;
          *(undefined4 *)(lVar28 + 0x70) =
               *(undefined4 *)
                (lVar25 + (long)(int)*(uint *)(unaff_x24 + 8) * (long)(int)unaff_w23 + 0x114);
          *(float *)(lVar28 + 0x74) = fVar47;
          lVar25 = unaff_x19[0x74];
          if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x50), lVar28 == 0)) goto LAB_05cc446c;
          if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_05cc45e8;
          lVar25 = *(long *)(lVar25 + 0x38);
          if (lVar25 == 0) goto LAB_05cc446c;
          if (*(uint *)(lVar25 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4b4)) goto LAB_05cc45e8;
          fVar65 = fVar65 - fVar48;
          auVar53 = ZEXT416((uint)fVar65);
          lVar28 = lVar28 + 0x20 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
          *(undefined4 *)(lVar28 + 0x58) =
               *(undefined4 *)
                (lVar25 + (long)(int)*(uint *)((long)unaff_x19 + 0x4b4) * (long)(int)unaff_w23 +
                0x120);
          *(float *)(lVar28 + 0x5c) = fVar65;
          lVar25 = unaff_x19[0x74];
          if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x50), lVar28 == 0)) goto LAB_05cc446c;
          uVar36 = *(uint *)(unaff_x19 + 0x97);
          if (*(uint *)(lVar28 + 0x18) <= uVar36) goto LAB_05cc45e8;
          lVar28 = lVar28 + 0x20;
          lVar30 = lVar28 + (long)(int)uVar36 * 0x60;
          *(float *)(lVar30 + 0x28) =
               *(float *)(lVar30 + 0x58) - in_stack_00000118 * fStack0000000000000158;
          *(float *)(lVar30 + 0x40) = fStack000000000000014c;
          if (*(int *)(lVar30 + 4) == 1) {
            *(int *)(lVar28 + (long)(int)uVar36 * 0x60 + 0x4c) = (int)unaff_x19[0x54];
          }
          if ((unaff_x19[0x20] == 0) || (lVar30 = *(long *)(lVar25 + 0x38), lVar30 == 0))
          goto LAB_05cc446c;
          uVar33 = *(uint *)((long)unaff_x19 + 0x4b4);
          if (*(uint *)(lVar30 + 0x18) <= uVar33) goto LAB_05cc45e8;
          if ((*(char *)(lVar30 + 0x20 + (long)(int)uVar33 * (long)(int)unaff_w23 + 0x170) == '\0')
             && (uVar33 = *(uint *)(unaff_x19 + 0x96), *(uint *)(lVar30 + 0x18) <= uVar33))
          goto LAB_05cc45e8;
          fVar48 = (1.0 - *(float *)(unaff_x19 + 0x60)) *
                   (*(float *)((long)unaff_x19 + 0x2d4) +
                   in_stack_00000108 *
                   (in_stack_000000f0 + in_stack_000000c0 + *(float *)(unaff_x19[0x20] + 0x1a4)));
          fVar46 = -fVar48;
          if ((char)unaff_x19[0x1e] != '\0') {
            fVar46 = fVar48;
          }
          lVar28 = lVar28 + (long)(int)uVar36 * 0x60;
          *(float *)(lVar28 + 0x3c) =
               *(float *)(lVar30 + 0x20 + (long)(int)uVar33 * (long)(int)unaff_w23 + 0x11c) + fVar46
          ;
          fVar46 = 0.0 - *(float *)((long)unaff_x19 + 0x4ec);
          *(float *)(lVar28 + 0x34) = fVar46;
          *(float *)(lVar28 + 0x38) = fVar47;
          *(float *)(lVar28 + 0x2c) = fStack0000000000000064 + (fVar65 - fVar47);
          *(float *)(lVar28 + 0x30) = fVar65;
          if ((((in_stack_0000133c & 0xfffffffe) == 10) ||
              (fStack0000000000000190 == (float)unaff_w21 && in_stack_0000133c == 0x2d)) ||
             (in_stack_0000133c - 0x2028 < 2)) {
            if (*(int *)(*plVar43 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            unaff_x25 = (undefined8 *)&stack0x000005c0;
            FUN_05d115d4();
            lVar25 = unaff_x19[0x97];
            iVar18 = *(int *)((long)unaff_x19 + 0x4a4);
            unaff_x24[10] = 0;
            iVar15 = (int)lVar25 + 1;
            lVar25 = unaff_x19[0x74];
            *(int *)(unaff_x19 + 0x97) = iVar15;
            *(int *)(unaff_x19 + 0x95) = iVar18 + 1;
            if ((lVar25 != 0) && (*(long *)(lVar25 + 0x50) != 0)) {
              if (*(int *)(*(long *)(lVar25 + 0x50) + 0x18) <= iVar15) {
                FUN_05d11b4c();
                lVar25 = unaff_x19[0x74];
                if (lVar25 == 0) goto LAB_05cc446c;
              }
              lVar25 = *(long *)(lVar25 + 0x38);
              if (lVar25 != 0) {
                if (*(uint *)(unaff_x24 + 7) < *(uint *)(lVar25 + 0x18)) {
                  fVar46 = *(float *)(lVar25 + (long)(int)*(uint *)(unaff_x24 + 7) *
                                               (long)(int)unaff_w23 + 0x14c);
                  if (*(float *)((long)unaff_x19 + 0x2ec) == DAT_01274f94) {
                    if ((in_stack_0000133c == 0x2029) || (fVar47 = 0.0, in_stack_0000133c == 10)) {
                      fVar47 = *(float *)(unaff_x19 + 0x5f);
                    }
                    uVar22 = 0;
                    fVar47 = fVar46 + (0.0 - *(float *)(unaff_x19 + 0x9c)) +
                             fStack0000000000000050 *
                             (fStack0000000000000048 + *(float *)(unaff_x19 + 0x5d)) +
                             in_stack_00000108 * (*(float *)((long)unaff_x19 + 0x2e4) + fVar47) +
                             *(float *)((long)unaff_x19 + 0x4ec);
                  }
                  else {
                    if ((in_stack_0000133c == 0x2029) || (fVar47 = 0.0, in_stack_0000133c == 10)) {
                      fVar47 = *(float *)(unaff_x19 + 0x5f);
                    }
                    uVar22 = 1;
                    fVar47 = *(float *)((long)unaff_x19 + 0x4ec) +
                             *(float *)((long)unaff_x19 + 0x2ec) +
                             in_stack_00000108 * (*(float *)((long)unaff_x19 + 0x2e4) + fVar47);
                  }
                  lVar25 = *plVar43;
                  *(float *)((long)unaff_x19 + 0x4ec) = fVar47;
                  *(undefined1 *)(unaff_x19 + 0x5e) = uVar22;
                  if (*(int *)(lVar25 + 0xe4) == 0) {
                    thunk_FUN_02dabd98();
                    lVar25 = *plVar43;
                  }
                  fVar47 = *(float *)(unaff_x19 + 0x88);
                  uVar62 = *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 0x1730);
                  *(float *)((long)unaff_x19 + 0x4e4) = fVar46;
                  fVar46 = *(float *)((long)unaff_x19 + 0x444);
                  auVar53._0_8_ = NEON_rev64(uVar62,4);
                  auVar53._8_8_ = 0;
                  unaff_x24[0xe] = auVar53._0_8_;
                  *(float *)(unaff_x19 + 0xcb) = fVar47 + 0.0 + fVar46;
                  FUN_05d115d4();
                  FUN_05d115d4();
                  *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__set_onSelectExited:
                  in_stack_00000078._4_4_ = 1.4013e-45;
                  fStack0000000000000068 = 1.4013e-45;
                  goto LAB_05cbdbd4;
                }
                goto LAB_05cc45e8;
              }
            }
            goto LAB_05cc446c;
          }
          if (in_stack_0000133c == 3) {
            if (unaff_x19[0x91] == 0) goto LAB_05cc446c;
            in_stack_00001308 = (uint)*(undefined8 *)(unaff_x19[0x91] + 0x18);
            uVar16 = 3;
          }
        }
        lVar25 = *(long *)(lVar25 + 0x38);
        if (lVar25 == 0) goto LAB_05cc446c;
        uVar33 = *(uint *)(unaff_x24 + 7);
        uVar36 = *(uint *)(lVar25 + 0x18);
        if (uVar36 <= uVar33) goto LAB_05cc45e8;
        lVar25 = lVar25 + 0x20;
        if (*(char *)(lVar25 + (long)(int)uVar33 * (long)(int)unaff_w23 + 0x170) != '\0') {
          lVar28 = lVar25 + (long)(int)uVar33 * (long)(int)unaff_w23;
          auVar50 = *(undefined1 (*) [16])(unaff_x19 + 0x9e);
          auVar54 = NEON_ext(auVar50,auVar50,8,1);
          uVar62 = *(undefined8 *)(lVar28 + 0xf4);
          fVar46 = (float)uVar62;
          uVar64 = *(undefined8 *)(lVar28 + 0x100);
          fVar47 = (float)uVar64;
          fVar48 = (float)((ulong)uVar64 >> 0x20);
          auVar53._0_4_ = (float)-(uint)(auVar50._0_4_ < fVar46);
          auVar53._4_4_ = (float)-(uint)(auVar50._4_4_ < (float)((ulong)uVar62 >> 0x20));
          auVar53._8_4_ = -(uint)(fVar47 < auVar54._0_4_);
          auVar53._12_4_ = -(uint)(fVar48 < auVar54._4_4_);
          auVar54._8_4_ = fVar47;
          auVar54._0_8_ = uVar62;
          auVar54._12_4_ = fVar48;
          auVar50 = auVar50 ^ (auVar50 ^ auVar54) & ~auVar53;
          unaff_x19[0x9f] = auVar50._8_8_;
          unaff_x19[0x9e] = auVar50._0_8_;
        }
        if (((*(int *)((long)unaff_x19 + 0x304) != 3) && (*(int *)((long)unaff_x19 + 0x304) != 0))
           || ((*(uint *)(unaff_x19 + 0x62) < 7 &&
               ((1 << (ulong)(*(uint *)(unaff_x19 + 0x62) & 0x1f) & 0x4aU) != 0)))) {
          if ((((unaff_w26 == 0) && (uVar16 != 0x2d)) && (uVar16 != 0x200b)) && (uVar16 != 0xad)) {
            if (*(char *)((long)unaff_x19 + 0x309) == '\0') goto LAB_05cc0e60;
LAB_05cc0cf4:
            if (((uint)in_stack_00000078._4_4_ & 1) == 0) {
              in_stack_00000078._4_4_ = 0.0;
            }
            else {
              uVar36 = (uint)(unaff_w26 == 0 || in_stack_0000133c == 0xa0) &
                       ((uint)(in_stack_0000133c != 0xad) | (uint)fStack000000000000005c) ^ 1;
LAB_05cc0d28:
              in_stack_00000078._4_4_ = 1.4013e-45;
UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__OnHoverExiting:
              if (*(int *)(*plVar43 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              FUN_05d115d4();
              if (uVar36 != 0) goto LAB_05cc0d64;
            }
          }
          else {
            if (*(char *)((long)unaff_x19 + 0x309) != '\0') goto LAB_05cc0cf4;
            if ((int)uVar16 < 0x2007) {
              if (uVar16 == 0x2d) {
                if (0 < (int)uVar33) {
                  if (uVar36 <= uVar33 - 1) goto LAB_05cc45e8;
                  uVar4 = *(undefined2 *)(lVar25 + (ulong)(uVar33 - 1) * (ulong)unaff_w23 + 4);
                  if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  uVar21 = FUN_04f72380(uVar4,0);
                  if ((uVar21 & 1) != 0) {
                    if ((unaff_x19[0x74] == 0) ||
                       (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0)) goto LAB_05cc446c;
                    if (*(uint *)(lVar25 + 0x18) <= *(int *)(unaff_x24 + 7) - 1U) goto LAB_05cc45e8;
                    if (*(int *)(lVar25 + (long)(int)(*(int *)(unaff_x24 + 7) - 1U) *
                                          (long)(int)unaff_w23 + 0x5c) == (int)unaff_x19[0x97])
                    goto LAB_05cc0dc4;
                  }
                }
              }
              else if (uVar16 == 0xa0) goto LAB_05cc0e60;
LAB_05cc13e0:
              lVar25 = *plVar43;
              if (*(int *)(lVar25 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                lVar25 = *plVar43;
              }
              in_stack_00000078._4_4_ = 0.0;
              uVar36 = 0;
              *(undefined4 *)(*(long *)(lVar25 + 0xb8) + 0xf80) = 0xffffffff;
              goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__OnHoverExiting;
            }
            if (((0x28 < uVar16 - 0x2007) ||
                ((1L << ((ulong)(uVar16 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
               (uVar16 != 0x2060)) goto LAB_05cc13e0;
LAB_05cc0e60:
            if (*(int *)(*(long *)
                          Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListServerBackfillTicketsForPlayer__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar21 = FUN_05d36aac(uVar16,0);
            if ((uVar21 & 1) == 0) {
LAB_05cc0eac:
              if (*(int *)(*(long *)
                            Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListServerBackfillTicketsForPlayer__
                          + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              uVar21 = FUN_05d36b08(in_stack_0000133c,0);
              if ((uVar21 & 1) != 0) goto LAB_05cc0ed8;
              if ((*(char *)((long)unaff_x19 + 0x309) != '\0') ||
                 (uVar13 = *(int *)(unaff_x24 + 7) + 1, iStack0000000000000060 <= (int)uVar13))
              goto LAB_05cc0cf4;
              if ((unaff_x19[0x74] == 0) ||
                 (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0)) goto LAB_05cc446c;
              if (*(uint *)(lVar25 + 0x18) <= uVar13) goto LAB_05cc45e8;
              uVar4 = *(undefined2 *)(lVar25 + (long)(int)uVar13 * (long)(int)unaff_w23 + 0x24);
              if (*(int *)(*(long *)
                            Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListServerBackfillTicketsForPlayer__
                          + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              uVar21 = FUN_05d36b08(uVar4,0);
              if ((uVar21 & 1) == 0) goto LAB_05cc0cf4;
              if ((unaff_x19[0x74] == 0) ||
                 (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0)) goto LAB_05cc446c;
              if (*(int *)(unaff_x24 + 7) + 1U < *(uint *)(lVar25 + 0x18)) {
                uVar4 = *(undefined2 *)
                         (lVar25 + (long)(int)(*(int *)(unaff_x24 + 7) + 1U) * (long)(int)unaff_w23
                         + 0x24);
                if (*(int *)(*(long *)
                              Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                            0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                lVar25 = FUN_05d2cd04(0);
                if ((lVar25 != 0) && (*(long *)(lVar25 + 0x10) != 0)) {
                  uVar13 = FUN_04cb59e0(*(long *)(lVar25 + 0x10),in_stack_0000133c,
                                        *(undefined8 *)
                                         Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListBuildAliases__
                                       );
                  lVar25 = FUN_05d2cd04(0);
                  if ((lVar25 != 0) && (*(long *)(lVar25 + 0x18) != 0)) {
                    uVar14 = FUN_04cb59e0(*(long *)(lVar25 + 0x18),uVar4,
                                          *(undefined8 *)
                                           Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListBuildAliases__
                                         );
                    plVar43 = (long *)
                              Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
                    if (((uVar13 | uVar14) & 1) != 0) goto LAB_05cc0dc4;
                    uVar36 = 0;
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__OnHoverExiting;
                  }
                }
                goto LAB_05cc446c;
              }
              goto LAB_05cc45e8;
            }
            if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar21 = FUN_05d2cf18(0);
            if ((uVar21 & 1) != 0) goto LAB_05cc0eac;
LAB_05cc0ed8:
            if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            lVar25 = FUN_05d2cd04(0);
            if ((lVar25 == 0) || (*(long *)(lVar25 + 0x10) == 0)) goto LAB_05cc446c;
            uVar21 = FUN_04cb59e0(*(long *)(lVar25 + 0x10),in_stack_0000133c,
                                  *(undefined8 *)
                                   Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListBuildAliases__);
            if ((int)uStack0000000000000054 <= *(int *)(unaff_x24 + 7)) {
              if ((uVar21 & 1) != 0) goto LAB_05cc10e0;
              in_stack_00000078._4_4_ = 0.0;
              uVar36 = 0;
              goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__OnHoverExiting;
            }
            if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            lVar25 = FUN_05d2cd04(0);
            if (((lVar25 == 0) || (unaff_x19[0x74] == 0)) ||
               (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0)) goto LAB_05cc446c;
            if (*(uint *)(lVar28 + 0x18) <= *(int *)(unaff_x24 + 7) + 1U) goto LAB_05cc45e8;
            if (*(long *)(lVar25 + 0x18) == 0) goto LAB_05cc446c;
            uVar16 = FUN_04cb59e0(*(long *)(lVar25 + 0x18),
                                  *(undefined2 *)
                                   (lVar28 + (long)(int)(*(int *)(unaff_x24 + 7) + 1U) *
                                             (long)(int)unaff_w23 + 0x24),
                                  *(undefined8 *)
                                   Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListBuildAliases__);
            if ((uVar21 & 1) != 0) {
LAB_05cc10e0:
              uVar36 = (uint)(unaff_w26 != 0);
              if (((uint)in_stack_00000078._4_4_ & (uint)(uVar13 == uVar14)) == 0)
              goto LAB_05cc0dc4;
              goto LAB_05cc0d28;
            }
            in_stack_00000078._4_4_ = (float)(uVar16 & (uint)in_stack_00000078._4_4_);
            uVar36 = (uint)in_stack_00000078._4_4_ & (uint)(unaff_w26 != 0);
            if ((((uint)in_stack_00000078._4_4_ & 1) != 0) || (((uVar16 ^ 1) & 1) != 0))
            goto UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor__OnHoverExiting;
            in_stack_00000078._4_4_ = 0.0;
            if (uVar36 == 0) goto LAB_05cc0dc4;
LAB_05cc0d64:
            if (*(int *)(*plVar43 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            FUN_05d115d4();
          }
        }
LAB_05cc0dc4:
        if (*(int *)(*plVar43 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        unaff_x25 = (undefined8 *)&stack0x000005c0;
        FUN_05d115d4();
        *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
LAB_05cbdbd4:
        do {
          do {
            lVar25 = unaff_x19[0x91];
            in_stack_00001308 = in_stack_00001308 + 1;
            if (lVar25 == 0) goto LAB_05cc446c;
            if ((int)*(uint *)(lVar25 + 0x18) <= (int)in_stack_00001308) {
LAB_05cc18bc:
              if ((char)unaff_x19[0x4c] == '\0') {
LAB_05cc1980:
                iVar15 = *(int *)((long)unaff_x19 + 0x26c);
                iVar18 = (int)unaff_x19[0x4e];
              }
              else {
                fVar46 = *(float *)((long)unaff_x19 + 0x264);
                auVar53 = ZEXT416((uint)DAT_01275268);
                if (fVar46 - *(float *)(unaff_x19 + 0x4d) <= DAT_01275268) goto LAB_05cc1980;
                fVar47 = *(float *)((long)unaff_x19 + 0x20c);
                fVar48 = *(float *)((long)unaff_x19 + 0x27c);
                auVar53 = ZEXT416((uint)fVar48);
                iVar15 = *(int *)((long)unaff_x19 + 0x26c);
                iVar18 = (int)unaff_x19[0x4e];
                if ((fVar47 < fVar48) && (iVar15 < iVar18)) {
                  if (*(float *)(unaff_x19 + 0x60) < *(float *)((long)unaff_x19 + 0x2fc) / 100.0) {
                    *(undefined4 *)(unaff_x19 + 0x60) = 0;
                  }
                  fVar65 = DAT_012751b0;
                  *(float *)(unaff_x19 + 0x4d) = fVar47;
                  fVar46 = (fVar46 - fVar47) * 0.5;
                  if (fVar46 <= fVar65) {
                    fVar46 = fVar65;
                  }
                  fVar47 = (fVar47 + fVar46) * 20.0 + 0.5;
                  fVar46 = DAT_01275250;
                  if (fVar47 != INFINITY) {
                    fVar46 = (float)(int)fVar47 / 20.0;
                  }
                  if (fVar48 <= fVar46) {
                    fVar46 = fVar48;
                  }
                  goto LAB_05cc1978;
                }
              }
              *(undefined1 *)((long)unaff_x19 + 0x274) = 1;
              if (iVar18 <= iVar15) {
                uVar62 = FUN_05000654((long)unaff_x19 + 0x26c,0);
                uVar64 = FUN_05015a18((long)unaff_x19 + 0x20c,0);
                uVar62 = FUN_04e80bdc(*(undefined8 *)
                                       Method_PlayFab_PlayFabMultiplayerInstanceAPI_UploadCertificate__
                                      ,uVar62,*(undefined8 *)
                                               Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildRegions__
                                      ,uVar64,0);
                if (*(int *)(*unaff_x29 + 0xe4) == 0) {
                  thunk_FUN_02dabd98(*unaff_x29);
                }
                FUN_05ea2238(uVar62,0);
              }
              if ((*(int *)(unaff_x24 + 7) == 0) ||
                 ((*(int *)(unaff_x24 + 7) == 1 && (in_stack_0000133c == 3)))) {
                (**(code **)(*unaff_x19 + 0x958))();
                goto LAB_05cc1a38;
              }
              lVar25 = *plVar43;
              if (*(int *)(lVar25 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                lVar25 = *plVar43;
              }
              plVar42 = (long *)PTR_DAT_06649d28;
              lVar25 = **(long **)(lVar25 + 0xb8);
              if (lVar25 == 0) goto LAB_05cc446c;
              if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_05cc45e8;
              iVar15 = *(int *)(lVar25 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x38 + 0x54) << 2;
              if ((unaff_x19[0x74] == 0) ||
                 (lVar25 = *(long *)(unaff_x19[0x74] + 0x60), lVar25 == 0)) goto LAB_05cc446c;
              if (*(int *)(*(long *)PTR_DAT_06649d28 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              if (*(int *)(lVar25 + 0x18) == 0) goto LAB_05cc45e8;
              FUN_05d29d88(lVar25 + 0x20,0,0);
              in_stack_000000c0 = (float)FUN_02e694a0(0);
              iVar18 = (int)unaff_x19[0x53];
              lVar25 = unaff_x19[0xee];
              fStack00000000000000b8 = fVar46;
              if (iVar18 < 0x401) {
                if (iVar18 == 0x100) {
                  if ((int)unaff_x19[0x62] == 5) {
                    if (lVar25 == 0) goto LAB_05cc446c;
                    if ((*(uint *)(lVar25 + 0x18) & 0xfffffffe) == 0) goto LAB_05cc45e8;
                    if ((unaff_x19[0x74] == 0) ||
                       (lVar28 = *(long *)(unaff_x19[0x74] + 0x58), lVar28 == 0)) goto LAB_05cc446c;
                    if (*(uint *)(lVar28 + 0x18) <= in_stack_00000040._4_4_) goto LAB_05cc45e8;
                    fVar46 = *(float *)(lVar28 + (long)(int)in_stack_00000040._4_4_ * 0x14 + 0x28);
                  }
                  else {
                    if (lVar25 == 0) goto LAB_05cc446c;
                    if ((*(uint *)(lVar25 + 0x18) & 0xfffffffe) == 0) goto LAB_05cc45e8;
                    fVar46 = *(float *)((long)unaff_x19 + 0x4cc);
                  }
                  fStack00000000000000b8 = *(float *)(lVar25 + 0x34);
                  fStack000000000000002c = (0.0 - fVar46) - fStack0000000000000028;
                  fVar46 = *(float *)(lVar25 + 0x2c);
                  fVar47 = *(float *)(lVar25 + 0x30);
LAB_05cc1e30:
                  fVar46 = in_stack_00000030 + 0.0 + fVar46;
                  fVar47 = fVar47 + fStack000000000000002c;
                }
                else {
                  if (iVar18 != 0x200) {
                    if (iVar18 != 0x400) goto LAB_05cc1e44;
                    if ((int)unaff_x19[0x62] == 5) {
                      if (lVar25 == 0) goto LAB_05cc446c;
                      if (*(int *)(lVar25 + 0x18) == 0) goto LAB_05cc45e8;
                      if ((unaff_x19[0x74] == 0) ||
                         (lVar28 = *(long *)(unaff_x19[0x74] + 0x58), lVar28 == 0))
                      goto LAB_05cc446c;
                      if (*(uint *)(lVar28 + 0x18) <= in_stack_00000040._4_4_) goto LAB_05cc45e8;
                      in_stack_00001338 =
                           *(float *)(lVar28 + (long)(int)in_stack_00000040._4_4_ * 0x14 + 0x30);
                    }
                    else {
                      if (lVar25 == 0) goto LAB_05cc446c;
                      if (*(int *)(lVar25 + 0x18) == 0) goto LAB_05cc45e8;
                    }
                    fStack00000000000000b8 = *(float *)(lVar25 + 0x28);
                    fStack000000000000002c = fStack000000000000002c + (0.0 - in_stack_00001338);
                    fVar46 = *(float *)(lVar25 + 0x20);
                    fVar47 = *(float *)(lVar25 + 0x24);
                    goto LAB_05cc1e30;
                  }
                  if ((int)unaff_x19[0x62] != 5) {
                    if (lVar25 == 0) goto LAB_05cc446c;
                    if ((*(int *)(lVar25 + 0x18) != 1) && (*(int *)(lVar25 + 0x18) != 0)) {
                      fVar46 = *(float *)((long)unaff_x19 + 0x4cc);
                      goto LAB_05cc1d64;
                    }
                    goto LAB_05cc45e8;
                  }
                  if (lVar25 == 0) goto LAB_05cc446c;
                  if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0))
                  goto LAB_05cc45e8;
                  if ((unaff_x19[0x74] == 0) ||
                     (lVar28 = *(long *)(unaff_x19[0x74] + 0x58), lVar28 == 0)) goto LAB_05cc446c;
                  if (*(uint *)(lVar28 + 0x18) <= in_stack_00000040._4_4_) goto LAB_05cc45e8;
                  lVar28 = lVar28 + (long)(int)in_stack_00000040._4_4_ * 0x14;
                  fStack00000000000000b8 =
                       (*(float *)(lVar25 + 0x28) + *(float *)(lVar25 + 0x34)) * 0.5;
                  fVar46 = in_stack_00000030 + 0.0 +
                           ((float)*(undefined8 *)(lVar25 + 0x20) +
                           (float)*(undefined8 *)(lVar25 + 0x2c)) * 0.5;
                  fVar47 = (0.0 - ((fStack0000000000000028 + *(float *)(lVar28 + 0x28) +
                                   *(float *)(lVar28 + 0x30)) - fStack000000000000002c) * 0.5) +
                           ((float)((ulong)*(undefined8 *)(lVar25 + 0x20) >> 0x20) +
                           (float)((ulong)*(undefined8 *)(lVar25 + 0x2c) >> 0x20)) * 0.5;
                }
                fStack00000000000000b8 = fStack00000000000000b8 + 0.0;
                auVar53 = ZEXT416((uint)fVar47);
                in_stack_000000c0 = fVar46;
              }
              else if (iVar18 == 0x800) {
                if (lVar25 == 0) goto LAB_05cc446c;
                if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0))
                goto LAB_05cc45e8;
                fVar46 = (*(float *)(lVar25 + 0x28) + *(float *)(lVar25 + 0x34)) * 0.5;
                fStack00000000000000b8 = fVar46 + 0.0;
                auVar53 = ZEXT416((uint)(((float)((ulong)*(undefined8 *)(lVar25 + 0x20) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(lVar25 + 0x2c) >> 0x20)) *
                                         0.5 + 0.0));
                in_stack_000000c0 =
                     ((float)*(undefined8 *)(lVar25 + 0x20) + (float)*(undefined8 *)(lVar25 + 0x2c))
                     * 0.5 + in_stack_00000030 + 0.0;
              }
              else {
                if (iVar18 == 0x1000) {
                  if (lVar25 == 0) goto LAB_05cc446c;
                  if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0))
                  goto LAB_05cc45e8;
                  fVar46 = *(float *)((long)unaff_x19 + 0x4fc);
                  in_stack_00001338 = *(float *)((long)unaff_x19 + 0x4f4);
LAB_05cc1d64:
                  fStack0000000000000028 = fStack0000000000000028 + fVar46 + in_stack_00001338;
                }
                else {
                  if (iVar18 != 0x2000) goto LAB_05cc1e44;
                  if (lVar25 == 0) goto LAB_05cc446c;
                  if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0))
                  goto LAB_05cc45e8;
                  fStack0000000000000028 = *(float *)(unaff_x19 + 0x9a) - fStack0000000000000028;
                }
                fVar46 = in_stack_00000030 + 0.0;
                auVar53._0_4_ =
                     ((float)*(undefined8 *)(lVar25 + 0x24) + (float)*(undefined8 *)(lVar25 + 0x30))
                     * 0.5 + (0.0 - (fStack0000000000000028 - fStack000000000000002c) * 0.5);
                auVar53._4_4_ =
                     ((float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20)) * 0.5 + 0.0;
                auVar53._8_8_ = 0;
                fStack00000000000000b8 = auVar53._4_4_;
                in_stack_000000c0 =
                     fVar46 + (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
              }
LAB_05cc1e44:
              auVar50 = auVar53;
              in_stack_00000120 = (float)FUN_02e694a0(0);
              auVar54 = auVar50;
              FUN_02e694a0(0);
              lVar25 = FUN_05ccedf0();
              if (lVar25 == 0) goto LAB_05cc446c;
              FUN_05ef2218(lVar25,0);
              *(float *)((long)unaff_x19 + 0x6fc) = auVar54._0_4_;
              uVar45 = FUN_02efa70c(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0)
              ;
              FUN_02efa70c(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
              if (*(int *)(*(long *)
                            Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImageTags__ +
                          0xe4) == 0) {
                thunk_FUN_02dabd98(*(long *)
                                    Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImageTags__
                                  );
              }
              FUN_05cc4624(0);
              FUN_05ce0118(&stack0x00001310,0x4000ffff,0);
              if (*(int *)(*plVar43 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              lVar25 = unaff_x19[0x74];
              if (lVar25 == 0) goto LAB_05cc446c;
              iVar18 = *(int *)(unaff_x24 + 7);
              if (iVar18 < 1) {
                uStack00000000000000ec = 0;
                iVar17 = 0;
                goto LAB_05cc4038;
              }
              lVar25 = *(long *)(lVar25 + 0x38);
              if (lVar25 == 0) goto LAB_05cc446c;
              fStack0000000000000190 = auVar50._0_4_;
              fVar48 = 0.0;
              bVar6 = false;
              uVar14 = 0;
              uVar13 = 0;
              lVar28 = lVar25 + 0x20;
              fStack0000000000000140 = *(float *)(*(long *)(*plVar43 + 0xb8) + 0x1730);
              bVar8 = false;
              bVar7 = false;
              bVar10 = false;
              uStack00000000000000ec = 0;
              fStack0000000000000124 = fStack0000000000000190;
              in_stack_000001b0 = auVar53._0_4_;
              fStack0000000000000050 = 0.0;
              fStack0000000000000064 = 0.0;
              in_stack_000000e0._4_4_ = in_stack_00000110._4_4_;
              fStack0000000000000068 = in_stack_00000110._4_4_;
              in_stack_00000138._4_4_ = 0.0;
              in_stack_00000078._4_4_ = 0.0;
              fVar47 = 0.0;
              fStack000000000000005c = 0.0;
              in_stack_000000a0._4_4_ = 0.0;
              fStack00000000000000d8 = fStack00000000000000e8;
              uStack000000000000006c = in_stack_000000d0._4_4_;
              fStack0000000000000070 = fStack00000000000000e8;
              fStack0000000000000094 = fStack00000000000000e8;
              fStack0000000000000098 = in_stack_00000110._4_4_;
              uStack0000000000000090 = in_stack_000000d0._4_4_;
              fStack0000000000000100 = fVar46;
              uVar36 = 0;
              goto LAB_05cc1fd0;
            }
            if (*(uint *)(lVar25 + 0x18) <= in_stack_00001308) goto LAB_05cc45e8;
            uVar13 = *(uint *)(lVar25 + (long)(int)in_stack_00001308 * 0x10 + 0x24);
            if (uVar13 == 0) goto LAB_05cc18bc;
            if (5 < (int)in_stack_000001b0) {
              uVar62 = FUN_0501f6b0(&stack0x0000133c,0);
              uVar64 = FUN_05000654(&stack0x00001308,0);
              uVar62 = FUN_04e80bdc(*(undefined8 *)
                                     Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildRegion__
                                    ,uVar62,*(undefined8 *)
                                             Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateLobby__
                                    ,uVar64,0);
              if (*(int *)(*unaff_x29 + 0xe4) == 0) {
                thunk_FUN_02dabd98(*unaff_x29);
              }
              FUN_05ea29a0(uVar62,0);
              in_stack_00001328 = CONCAT44(3,*(undefined4 *)(unaff_x24 + 7));
            }
            in_stack_0000133c = uVar13;
          } while (uVar13 == 0x1a);
          if ((uVar13 == 0x3c) && (*(char *)((long)unaff_x19 + 0x33a) != '\0')) {
            *(undefined1 *)((long)unaff_x19 + 0x469) = 1;
            *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
            uVar21 = FUN_05d0be34();
            if (((uVar21 & 1) != 0) &&
               (in_stack_00001308 = in_stack_0000126c, *(int *)((long)unaff_x19 + 0x65c) == 0))
            goto LAB_05cbdbd4;
          }
          else {
            if ((unaff_x19[0x74] == 0) || (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0))
            goto LAB_05cc446c;
            if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x24 + 7)) goto LAB_05cc45e8;
            lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x24 + 7) * (long)(int)unaff_w23;
            *(undefined4 *)((long)unaff_x19 + 0x65c) = *(undefined4 *)(lVar25 + 0x20);
            *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar25 + 0x50);
            unaff_x19[0x20] = *(long *)(lVar25 + 0x40);
            thunk_FUN_02dc1ef0(unaff_x19 + 0x20);
          }
          if ((unaff_x19[0x74] == 0) || (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0))
          goto LAB_05cc446c;
          unaff_w21 = *(uint *)(in_stack_000001a8 + 7);
          if (*(uint *)(lVar25 + 0x18) <= unaff_w21) goto LAB_05cc45e8;
          lVar28 = lVar25 + 0x20;
          uVar36 = (uint)in_stack_00001328;
          lVar30 = unaff_x19[0x24];
          _fStack0000000000000190 = in_stack_00001328 & 0xffffffff;
          cVar23 = *(char *)(lVar28 + (long)(int)unaff_w21 * (long)(int)unaff_w23 + 0x34);
          *(undefined1 *)((long)unaff_x19 + 0x469) = 0;
          uVar14 = unaff_w21;
          if (uVar36 == unaff_w21) {
            uVar13 = (uint)(in_stack_00001328 >> 0x20);
            *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
            if (uVar13 == 0x2026) {
              *(long *)(lVar28 + (long)(int)unaff_w21 * (long)(int)unaff_w23 + 0x10) =
                   unaff_x19[0xcd];
              thunk_FUN_02dc1ef0();
              if ((unaff_x19[0x74] == 0) ||
                 (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0)) goto LAB_05cc446c;
              if (*(uint *)(lVar25 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
              lVar25 = lVar25 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
              *(long *)(lVar25 + 0x40) = unaff_x19[0xce];
              *(undefined4 *)(lVar25 + 0x20) = 0;
              thunk_FUN_02dc1ef0();
              if ((unaff_x19[0x74] == 0) ||
                 (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0)) goto LAB_05cc446c;
              if (*(uint *)(lVar25 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
              *(long *)(lVar25 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23
                       + 0x48) = unaff_x19[0xcf];
              thunk_FUN_02dc1ef0();
              if ((unaff_x19[0x74] == 0) ||
                 (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0)) goto LAB_05cc446c;
              if (*(uint *)(lVar25 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
              *(int *)(lVar25 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 +
                      0x50) = (int)unaff_x19[0xd0];
              lVar25 = *plVar43;
              if (*(int *)(lVar25 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                lVar25 = *plVar43;
              }
              lVar25 = **(long **)(lVar25 + 0xb8);
              if (lVar25 == 0) goto LAB_05cc446c;
              if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_05cc45e8;
              lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x38;
              *(int *)(lVar25 + 0x54) = *(int *)(lVar25 + 0x54) + 1;
              *(undefined1 *)(unaff_x19 + 0x65) = 1;
              in_stack_00001328 = CONCAT44(3,*(uint *)((long)unaff_x19 + 0x4a4) + 1);
              uVar14 = *(uint *)((long)unaff_x19 + 0x4a4);
            }
            else if (uVar13 == 3) {
              if ((unaff_x19[0x20] == 0) || (lVar19 = FUN_05ce825c(unaff_x19[0x20],0), lVar19 == 0))
              goto LAB_05cc446c;
              uVar62 = FUN_048bdb30(lVar19,3,*(undefined8 *)
                                              Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListAssetSummaries__
                                   );
              if (*(uint *)(lVar25 + 0x18) <= unaff_w21) goto LAB_05cc45e8;
              *(undefined8 *)(lVar28 + (long)(int)unaff_w21 * (long)(int)unaff_w23 + 0x10) = uVar62;
              thunk_FUN_02dc1ef0();
              *(undefined1 *)(unaff_x19 + 0x65) = 1;
              uVar14 = *(uint *)((long)unaff_x19 + 0x4a4);
            }
          }
          in_stack_0000133c = uVar13;
          if (((int)uVar14 < *(int *)((long)unaff_x19 + 0x35c)) && (uVar13 != 3)) {
            if ((unaff_x19[0x74] == 0) || (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0))
            goto LAB_05cc446c;
            if (*(uint *)(lVar25 + 0x18) <= uVar14) goto LAB_05cc45e8;
            lVar25 = lVar25 + (long)(int)uVar14 * (long)(int)unaff_w23;
            *(undefined1 *)(lVar25 + 400) = 0;
            *(undefined2 *)(lVar25 + 0x24) = 0x200b;
            *(undefined4 *)(lVar25 + 0x5c) = 0;
            *(uint *)(in_stack_000001a8 + 7) = uVar14 + 1;
            unaff_x24 = in_stack_000001a8;
            goto LAB_05cbdbd4;
          }
          fStack000000000000015c = 1.0;
          fVar47 = fStack000000000000015c;
          fStack000000000000015c = 1.0;
          if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
            uVar14 = *(uint *)((long)unaff_x19 + 0x284);
            if ((uVar14 >> 4 & 1) == 0) {
              if ((uVar14 >> 3 & 1) == 0) {
                if ((uVar14 >> 5 & 1) != 0) {
                  if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  uVar21 = FUN_04f749ec(uVar13,0);
                  if ((uVar21 & 1) != 0) {
                    if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
                      thunk_FUN_02dabd98();
                    }
                    uVar13 = FUN_04f74c74(uVar13,0);
                    fStack000000000000015c = fStack0000000000000024;
                    goto LAB_05cbd82c;
                  }
                }
              }
              else {
                if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                uVar21 = FUN_04f7494c(uVar13,0);
                if ((uVar21 & 1) != 0) {
                  if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  uVar13 = FUN_04f74dec(uVar13,0);
                  fStack000000000000015c = fVar47;
                  goto LAB_05cbd82c;
                }
              }
            }
            else {
              if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              uVar21 = FUN_04f749ec(uVar13,0);
              if ((uVar21 & 1) != 0) {
                if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                uVar13 = FUN_04f74c74(uVar13,0);
                fStack000000000000015c = fVar47;
LAB_05cbd82c:
                in_stack_0000133c = uVar13 & 0xffff;
              }
            }
          }
          if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
          memmove(&stack0x000012a0,(void *)(unaff_x19[0x20] + 0x28),0x60);
          if (*(int *)((long)unaff_x19 + 0x65c) == 1) {
            lVar25 = FUN_05d04cb4();
            if ((lVar25 == 0) || (lVar25 = *(long *)(lVar25 + 0x38), lVar25 == 0))
            goto LAB_05cc446c;
            if (*(uint *)(lVar25 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
            plVar42 = *(long **)(lVar25 + (long)(int)*(uint *)(in_stack_000001a8 + 7) *
                                          (long)(int)unaff_w23 + 0x30);
            unaff_x24 = in_stack_000001a8;
            if (plVar42 != (long *)0x0) {
              bVar11 = *(byte *)(*(long *)
                                  Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListMatchmakingTicketsForPlayer__
                                + 0x130);
              if ((*(byte *)(*plVar42 + 0x130) < bVar11) ||
                 (*(long *)(*(long *)(*plVar42 + 200) + (ulong)bVar11 * 8 + -8) !=
                  *(long *)
                   Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListMatchmakingTicketsForPlayer__))
              {
                    /* WARNING: Subroutine does not return */
                FUN_02d4e268(plVar42);
              }
              plVar24 = (long *)plVar42[3];
              if (plVar24 == (long *)0x0) {
                plVar24 = (long *)0x0;
                *_fStack00000000000000d8 = 0;
              }
              else {
                lVar25 = *(long *)
                          Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListMatchmakingQueues__;
                bVar11 = *(byte *)(lVar25 + 0x130);
                if (*(byte *)(*plVar24 + 0x130) < bVar11) {
                  plVar34 = (long *)0x0;
                }
                else {
                  plVar34 = plVar24;
                  if (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar11 * 8 + -8) != lVar25) {
                    plVar34 = (long *)0x0;
                  }
                }
                *_fStack00000000000000d8 = (long)plVar34;
                if (*(byte *)(*plVar24 + 0x130) < bVar11) {
                  plVar24 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar11 * 8 + -8) != lVar25) {
                  plVar24 = (long *)0x0;
                }
              }
              thunk_FUN_02dc1ef0(_fStack00000000000000d8,plVar24);
              lVar25 = plVar42[5];
              *(int *)((long)unaff_x19 + 0x6bc) = (int)lVar25;
              if (in_stack_0000133c == 0x3c) {
                in_stack_0000133c = (int)lVar25 + 0xe000;
              }
              else {
                lVar25 = *plVar43;
                if (*(int *)(lVar25 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                  lVar25 = *plVar43;
                }
                *(undefined4 *)((long)unaff_x19 + 0x1d4) =
                     *(undefined4 *)(*(long *)(lVar25 + 0xb8) + 0x68);
              }
              fVar48 = *_fStack0000000000000070;
              fVar46 = (float)FUN_05f84b24(&stack0x000012a0,0);
              fVar47 = (float)FUN_05f84b2c(&stack0x000012a0,0);
              if (*_fStack00000000000000d8 == 0) goto LAB_05cc446c;
              fVar47 = in_stack_00000120 * (fVar48 / fVar46) * fVar47;
              memmove(&stack0x00001200,(void *)(*_fStack00000000000000d8 + 0x28),0x60);
              fVar46 = (float)FUN_05f84b24(&stack0x00001200,0);
              fVar48 = *_fStack0000000000000070;
              if (fVar46 <= 0.0) {
                fVar46 = (float)FUN_05f84b24(&stack0x000012a0,0);
                fVar65 = (float)FUN_05f84b2c(&stack0x000012a0,0);
                fVar67 = (float)FUN_05f84b54(&stack0x000012a0,0);
                if (plVar42[4] == 0) goto LAB_05cc446c;
                FUN_05f84fe8(&stack0x00001340,plVar42[4],0);
                fVar60 = (float)FUN_05f84e18(&stack0x000011e0,0);
                if (plVar42[4] == 0) goto LAB_05cc446c;
                fVar55 = *(float *)((long)plVar42 + 0x2c);
                fVar48 = in_stack_00000120 * (fVar48 / fVar46) * fVar65;
                fVar46 = (float)FUN_05f85024(plVar42[4],0);
                in_stack_00000118 = fVar48 * (fVar67 / fVar60) * fVar55 * fVar46;
                fStack0000000000000144 = 0.0;
                if (in_stack_00000118 != 0.0) {
                  fStack0000000000000144 = fVar48 / in_stack_00000118;
                }
                fStack0000000000000148 = (float)FUN_05f84b54(&stack0x000012a0,0);
                fStack0000000000000148 = fStack0000000000000148 * fStack0000000000000144;
                fVar46 = (float)FUN_05f84b7c(&stack0x000012a0,0);
                fVar48 = *(float *)((long)unaff_x19 + 0x43c);
                in_stack_00000178._4_4_ = (float)FUN_05f84b2c(&stack0x000012a0,0);
                in_stack_00000178._4_4_ = fVar47 * fVar46 * fVar48 * in_stack_00000178._4_4_;
                fVar46 = (float)FUN_05f84b84(&stack0x000012a0,0);
                fStack0000000000000144 = fStack0000000000000144 * fVar46;
              }
              else {
                fVar46 = (float)FUN_05f84b24(&stack0x00001200,0);
                fVar65 = (float)FUN_05f84b2c(&stack0x00001200,0);
                if (plVar42[4] == 0) goto LAB_05cc446c;
                fVar60 = *(float *)((long)plVar42 + 0x2c);
                fVar67 = (float)FUN_05f85024(plVar42[4],0);
                in_stack_00000118 = in_stack_00000120 * (fVar48 / fVar46) * fVar65 * fVar60 * fVar67
                ;
                fStack0000000000000148 = (float)FUN_05f84b54(&stack0x00001200,0);
                fVar46 = (float)FUN_05f84b7c(&stack0x00001200,0);
                fVar48 = *(float *)((long)unaff_x19 + 0x43c);
                in_stack_00000178._4_4_ = (float)FUN_05f84b2c(&stack0x00001200,0);
                in_stack_00000178._4_4_ = fVar47 * fVar46 * fVar48 * in_stack_00000178._4_4_;
                fStack0000000000000144 = (float)FUN_05f84b84(&stack0x00001200,0);
              }
              unaff_x19[0xcc] = (long)plVar42;
              thunk_FUN_02dc1ef0(_fStack0000000000000100,plVar42);
              if ((unaff_x19[0x74] == 0) ||
                 (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0)) goto LAB_05cc446c;
              if (*(uint *)(lVar25 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
              lVar25 = lVar25 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
              *(long *)(lVar25 + 0x40) = unaff_x19[0x20];
              *(undefined4 *)(lVar25 + 0x20) = 1;
              *(float *)(lVar25 + 0x15c) = in_stack_00000118;
              thunk_FUN_02dc1ef0();
              lVar25 = unaff_x19[0x74];
              if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x38), lVar28 == 0))
              goto LAB_05cc446c;
              if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
              fStack0000000000000158 = 0.0;
              *(int *)(lVar28 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 +
                      0x50) = (int)unaff_x19[0x24];
              *(int *)(unaff_x19 + 0x24) = (int)lVar30;
              goto LAB_05cbdf70;
            }
            goto LAB_05cbdbd4;
          }
          lVar25 = unaff_x19[0x74];
          if (*(int *)((long)unaff_x19 + 0x65c) != 0) {
            in_stack_00000170 = 0.0;
            if (in_stack_0000133c != 3 && in_stack_0000133c != 0xad) {
              in_stack_00000170 = in_stack_00000118;
            }
            in_stack_00000178._4_4_ = 0.0;
            fStack0000000000000148 = 0.0;
            fStack0000000000000144 = 0.0;
            if (lVar25 == 0) goto LAB_05cc446c;
            goto LAB_05cbdf88;
          }
          if ((lVar25 == 0) || (lVar25 = *(long *)(lVar25 + 0x38), lVar25 == 0)) goto LAB_05cc446c;
          if (*(uint *)(lVar25 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
          *_fStack0000000000000100 =
               *(long *)(lVar25 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23
                        + 0x30);
          thunk_FUN_02dc1ef0(_fStack0000000000000100);
          unaff_x24 = in_stack_000001a8;
        } while (*_fStack0000000000000100 == 0);
        if ((unaff_x19[0x74] == 0) || (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0))
        goto LAB_05cc446c;
        if (*(uint *)(lVar25 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
        unaff_x19[0x20] =
             *(long *)(lVar25 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 +
                      0x40);
        thunk_FUN_02dc1ef0(unaff_x19 + 0x20);
        if ((unaff_x19[0x74] == 0) || (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0))
        goto LAB_05cc446c;
        if (*(uint *)(lVar25 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
        unaff_x19[0x23] =
             *(long *)(lVar25 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 +
                      0x48);
        thunk_FUN_02dc1ef0(unaff_x19 + 0x23);
        if ((unaff_x19[0x74] == 0) || (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0))
        goto LAB_05cc446c;
        uVar14 = *(uint *)(in_stack_000001a8 + 7);
        uVar13 = *(uint *)(lVar25 + 0x18);
        if (uVar13 <= uVar14) goto LAB_05cc45e8;
        *(undefined4 *)(unaff_x19 + 0x24) =
             *(undefined4 *)(lVar25 + 0x20 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x30);
        pfVar32 = _fStack0000000000000070;
        if (uVar36 == unaff_w21) {
          lVar28 = unaff_x19[0x91];
          if (lVar28 == 0) goto LAB_05cc446c;
          if (*(uint *)(lVar28 + 0x18) <= in_stack_00001308) goto LAB_05cc45e8;
          if ((*(int *)(lVar28 + (long)(int)in_stack_00001308 * 0x10 + 0x24) == 10) &&
             (uVar14 != *(uint *)(unaff_x19 + 0x95))) {
            if (uVar13 <= uVar14 - 1) goto LAB_05cc45e8;
            pfVar32 = (float *)(lVar25 + 0x20 + (long)(int)(uVar14 - 1) * (long)(int)unaff_w23 +
                               0x38);
          }
        }
        fVar48 = *pfVar32;
        fVar46 = (float)FUN_05f84b24(&stack0x000012a0,0);
        fVar47 = (float)FUN_05f84b2c(&stack0x000012a0,0);
        if (uVar36 == unaff_w21) {
          fStack0000000000000144 = 0.0;
          fStack0000000000000148 = 0.0;
          if (in_stack_0000133c != 0x2026) goto LAB_05cbdabc;
        }
        else {
LAB_05cbdabc:
          fStack0000000000000148 = (float)FUN_05f84b54(&stack0x000012a0,0);
          fStack0000000000000144 = (float)FUN_05f84b84(&stack0x000012a0,0);
        }
        lVar25 = unaff_x19[0xcc];
        if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_05cc446c;
        fVar67 = *(float *)((long)unaff_x19 + 0x43c);
        fVar60 = *(float *)(lVar25 + 0x2c);
        in_stack_00000118 = (float)FUN_05f85024(*(long *)(lVar25 + 0x20),0);
        fVar65 = (float)FUN_05f84b7c(&stack0x000012a0,0);
        fVar55 = *(float *)((long)unaff_x19 + 0x43c);
        in_stack_00000178._4_4_ = (float)FUN_05f84b2c(&stack0x000012a0,0);
        lVar25 = unaff_x19[0x74];
        if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x38), lVar28 == 0)) goto LAB_05cc446c;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
        lVar28 = lVar28 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
        *(undefined4 *)(lVar28 + 0x20) = 0;
        fVar46 = in_stack_00000120 * ((fStack000000000000015c * fVar48) / fVar46) * fVar47;
        in_stack_00000118 = fVar46 * fVar67 * fVar60 * in_stack_00000118;
        in_stack_00000178._4_4_ = fVar46 * fVar65 * fVar55 * in_stack_00000178._4_4_;
        *(float *)(lVar28 + 0x15c) = in_stack_00000118;
        uVar13 = *(uint *)(unaff_x19 + 0x24);
        if (uVar13 == 0) {
          fStack0000000000000158 = *(float *)(unaff_x19 + 0xc6);
        }
        else {
          lVar28 = unaff_x19[0xe4];
          if (lVar28 == 0) goto LAB_05cc446c;
          if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_05cc45e8;
          lVar28 = *(long *)(lVar28 + (long)(int)uVar13 * 8 + 0x20);
          if (lVar28 == 0) goto LAB_05cc446c;
          fStack0000000000000158 = *(float *)(lVar28 + 0x54);
        }
LAB_05cbdf70:
        in_stack_00000170 = 0.0;
        if (in_stack_0000133c != 3 && in_stack_0000133c != 0xad) {
          in_stack_00000170 = in_stack_00000118;
        }
LAB_05cbdf88:
        lVar25 = *(long *)(lVar25 + 0x38);
        if (lVar25 == 0) goto LAB_05cc446c;
        if (*(uint *)(lVar25 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
        lVar25 = lVar25 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
        *(short *)(lVar25 + 0x24) = (short)in_stack_0000133c;
        *(int *)(lVar25 + 0x58) = (int)unaff_x19[0x42];
        *(int *)(lVar25 + 0x160) = (int)unaff_x19[0xa0];
        if ((unaff_x19[0x74] == 0) || (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0))
        goto LAB_05cc446c;
        if (*(uint *)(lVar25 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
        *(int *)(lVar25 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 + 0x164
                ) = (int)unaff_x19[0x2b];
        if ((unaff_x19[0x74] == 0) || (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0))
        goto LAB_05cc446c;
        if (*(uint *)(lVar25 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
        *(undefined4 *)
         (lVar25 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 + 0x16c) =
             *(undefined4 *)((long)unaff_x19 + 0x15c);
        if ((unaff_x19[0x74] == 0) || (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0))
        goto LAB_05cc446c;
        if (*(uint *)(lVar25 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
        lVar25 = lVar25 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
        auVar50 = *in_stack_000000a8;
        *(undefined4 *)(lVar25 + 0x188) = *(undefined4 *)in_stack_000000a8[1];
        *(long *)(lVar25 + 0x180) = auVar50._8_8_;
        *(long *)(lVar25 + 0x178) = auVar50._0_8_;
        if ((unaff_x19[0x74] == 0) || (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0))
        goto LAB_05cc446c;
        if (*(uint *)(lVar25 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_05cc45e8;
        lVar25 = lVar25 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
        lVar28 = *(long *)(lVar25 + 0x38);
        *(undefined4 *)(lVar25 + 0x18c) = *(undefined4 *)((long)unaff_x19 + 0x284);
        if (lVar28 == 0) {
          if ((*_fStack0000000000000100 == 0) ||
             (lVar25 = *(long *)(*_fStack0000000000000100 + 0x20), lVar25 == 0)) goto LAB_05cc446c;
          FUN_05f84fe8(&stack0x00001340,lVar25,0);
          unaff_x25[1] = in_stack_00001348;
          *unaff_x25 = in_stack_00001340;
        }
        else {
          FUN_05f84fe8(&stack0x000005c0,lVar28,0);
        }
        if (in_stack_0000133c >> 0x10 == 0) {
          if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar13 = FUN_04f72380(in_stack_0000133c,0);
          unaff_w26 = uVar13 & 1;
        }
        else {
          unaff_w26 = 0;
        }
        in_stack_000000c0 = *(float *)(unaff_x19 + 0x5a);
        if (((in_stack_000000a0 & 0x100000000) != 0) && (*(int *)((long)unaff_x19 + 0x65c) == 0)) {
          if (*_fStack0000000000000100 == 0) goto LAB_05cc446c;
          iVar15 = *(int *)(in_stack_000001a8 + 7);
          uVar13 = *(uint *)(*_fStack0000000000000100 + 0x28);
          if (iVar15 < (int)uStack0000000000000054) {
            if ((unaff_x19[0x74] == 0) || (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0))
            goto LAB_05cc446c;
            uVar14 = iVar15 + 1;
            if (*(uint *)(lVar25 + 0x18) <= uVar14) goto LAB_05cc45e8;
            if (*(int *)(lVar25 + 0x20 + (long)(int)uVar14 * (long)(int)unaff_w23) == 0) {
              lVar25 = *(long *)(lVar25 + 0x20 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x10);
              if ((((lVar25 == 0) || (unaff_x19[0x20] == 0)) ||
                  (lVar28 = *(long *)(unaff_x19[0x20] + 0x178), lVar28 == 0)) ||
                 (lVar28 = *(long *)(lVar28 + 0x40), lVar28 == 0)) goto LAB_05cc446c;
              uVar21 = FUN_048a9f18(lVar28,uVar13 | *(int *)(lVar25 + 0x28) << 0x10,&stack0x000011b0
                                    ,*(undefined8 *)
                                      Method_PlayFab_PlayFabMultiplayerInstanceAPI_LeaveLobby__);
              if ((uVar21 & 1) != 0) {
                FUN_05f896d8(&stack0x00001340,&stack0x000011b0,0);
                unaff_x25[0x17b] = in_stack_00001348;
                unaff_x25[0x17a] = in_stack_00001340;
                FUN_05f8952c(&stack0x00001190,0);
                uVar21 = FUN_05f89714(&stack0x000011b0,0);
                if ((uVar21 & 0x100) != 0) {
                  in_stack_000000c0 = 0.0;
                }
              }
            }
            iVar15 = *(int *)(in_stack_000001a8 + 7);
          }
          if (0 < iVar15) {
            if ((unaff_x19[0x74] == 0) || (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0))
            goto LAB_05cc446c;
            if (*(uint *)(lVar25 + 0x18) <= iVar15 - 1U) goto LAB_05cc45e8;
            lVar25 = *(long *)(lVar25 + (ulong)(iVar15 - 1U) * (ulong)unaff_w23 + 0x30);
            if (lVar25 == 0) goto LAB_05cc446c;
            uVar14 = *(uint *)(lVar25 + 0x28);
            lVar25 = FUN_05d04cb4();
            if ((lVar25 == 0) || (lVar25 = *(long *)(lVar25 + 0x38), lVar25 == 0))
            goto LAB_05cc446c;
            if (*(uint *)(lVar25 + 0x18) <= *(int *)(in_stack_000001a8 + 7) - 1U) goto LAB_05cc45e8;
            if (*(int *)(lVar25 + (long)(int)(*(int *)(in_stack_000001a8 + 7) - 1U) *
                                  (long)(int)unaff_w23 + 0x20) == 0) {
              if (((unaff_x19[0x20] == 0) ||
                  (lVar25 = *(long *)(unaff_x19[0x20] + 0x178), lVar25 == 0)) ||
                 (lVar25 = *(long *)(lVar25 + 0x40), lVar25 == 0)) goto LAB_05cc446c;
              uVar21 = FUN_048a9f18(lVar25,uVar14 | uVar13 << 0x10,&stack0x000011b0,
                                    *(undefined8 *)
                                     Method_PlayFab_PlayFabMultiplayerInstanceAPI_LeaveLobby__);
              if ((uVar21 & 1) != 0) {
                FUN_05f89700(&stack0x00001340,&stack0x000011b0,0);
                unaff_x25[0x17b] = in_stack_00001348;
                unaff_x25[0x17a] = in_stack_00001340;
                FUN_05f8952c(&stack0x00001190,0);
                FUN_05f8938c(0);
                uVar21 = FUN_05f89714(&stack0x000011b0,0);
                if ((uVar21 & 0x100) != 0) {
                  in_stack_000000c0 = 0.0;
                }
              }
            }
          }
        }
        if ((unaff_x19[0x74] == 0) || (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0))
        goto LAB_05cc446c;
        uVar13 = *(uint *)(in_stack_000001a8 + 7);
        uVar45 = FUN_05f89368(&stack0x00001270,0);
        if (*(uint *)(lVar25 + 0x18) <= uVar13) goto LAB_05cc45e8;
        *(undefined4 *)(lVar25 + (long)(int)uVar13 * (long)(int)unaff_w23 + 0x154) = uVar45;
        if (*(int *)(*(long *)
                      Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListServerBackfillTicketsForPlayer__
                    + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uStack00000000000000ec = FUN_05d36848(in_stack_0000133c,0);
        uVar13 = *(uint *)(in_stack_000001a8 + 7);
        uVar21 = (ulong)uVar13;
        if ((uStack00000000000000ec & 1) == 0) {
          if (0 < (int)uVar13) {
            if ((((uVar39 & 0x100000000) == 0) ||
                (uVar14 = *(uint *)((long)unaff_x19 + 0x32c), uVar14 == 0x80000000)) ||
               (uVar14 != uVar13 - 1)) {
              if ((_fStack0000000000000048 & 0x100000000) == 0) {
                bVar10 = false;
              }
              else {
                lVar25 = uVar21 * unaff_w23 + 0x144;
                uVar41 = uVar21;
                do {
                  uVar41 = uVar41 - 1;
                  iVar15 = (int)uVar21;
                  uVar13 = iVar15 - 1;
                  uVar21 = (ulong)uVar13;
                  if ((iVar15 < 1) || (uVar41 == *(uint *)((long)unaff_x19 + 0x32c))) {
                    bVar10 = false;
                    goto LAB_05cbe690;
                  }
                  if ((unaff_x19[0x74] == 0) ||
                     (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0)) goto LAB_05cc446c;
                  if (*(uint *)(lVar28 + 0x18) <= uVar41) goto LAB_05cc45e8;
                  lVar28 = *(long *)(lVar28 + lVar25 + -0x28c);
                  if ((lVar28 == 0) || (lVar28 = *(long *)(lVar28 + 0x20), lVar28 == 0))
                  goto LAB_05cc446c;
                  uVar14 = FUN_05f84fd8(lVar28,0);
                  if ((*_fStack0000000000000100 == 0) ||
                     (((unaff_x19[0x20] == 0 ||
                       (lVar28 = *(long *)(unaff_x19[0x20] + 0x178), lVar28 == 0)) ||
                      (lVar28 = *(long *)(lVar28 + 0x50), lVar28 == 0)))) goto LAB_05cc446c;
                  uVar20 = FUN_048b84e0(lVar28,uVar14 | *(int *)(*_fStack0000000000000100 + 0x28) <<
                                                        0x10,&stack0x00001160,
                                        *(undefined8 *)
                                         Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListArchivedMultiplayerServers__
                                       );
                  lVar25 = lVar25 + -0x178;
                } while ((uVar20 & 1) == 0);
                if ((unaff_x19[0x74] == 0) ||
                   (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0)) goto LAB_05cc446c;
                if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_05cc45e8;
                FUN_05f89350(((*(float *)(lVar28 + lVar25 + -0xc) - *(float *)(unaff_x19 + 0xcb)) /
                              in_stack_00000170 + in_stack_00001164) - in_stack_00001170,
                             in_stack_00001164,in_stack_00001170,&stack0x00001270,0);
                FUN_05f89360(&stack0x00001270,0);
                in_stack_000000c0 = 0.0;
                bVar10 = true;
              }
LAB_05cbe690:
              if ((uVar39 & 0x100000000) != 0) {
                uVar13 = *(uint *)((long)unaff_x19 + 0x32c);
                if (uVar13 == 0x80000000) {
                  bVar10 = true;
                }
                if (!bVar10) {
                  if ((unaff_x19[0x74] == 0) ||
                     (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0)) goto LAB_05cc446c;
                  if (*(uint *)(lVar25 + 0x18) <= uVar13) goto LAB_05cc45e8;
                  lVar25 = *(long *)(lVar25 + (long)(int)uVar13 * (long)(int)unaff_w23 + 0x30);
                  if ((lVar25 == 0) || (lVar25 = *(long *)(lVar25 + 0x20), lVar25 == 0))
                  goto LAB_05cc446c;
                  uVar13 = FUN_05f84fd8(lVar25,0);
                  if ((*_fStack0000000000000100 == 0) ||
                     (((unaff_x19[0x20] == 0 ||
                       (lVar25 = *(long *)(unaff_x19[0x20] + 0x178), lVar25 == 0)) ||
                      (lVar25 = *(long *)(lVar25 + 0x48), lVar25 == 0)))) goto LAB_05cc446c;
                  uVar21 = FUN_048b1190(lVar25,uVar13 | *(int *)(*_fStack0000000000000100 + 0x28) <<
                                                        0x10,&stack0x00001148,
                                        *(undefined8 *)
                                         Method_PlayFab_PlayFabMultiplayerInstanceAPI_LeaveLobbyAsServer__
                                       );
                  if ((uVar21 & 1) != 0) {
                    if ((unaff_x19[0x74] != 0) &&
                       (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 != 0)) {
                      if (*(uint *)((long)unaff_x19 + 0x32c) < *(uint *)(lVar25 + 0x18)) {
                        FUN_05f89350((in_stack_0000114c +
                                     (*(float *)(lVar25 + (long)(int)*(uint *)((long)unaff_x19 +
                                                                              0x32c) *
                                                          (long)(int)unaff_w23 + 0x138) -
                                     *(float *)(unaff_x19 + 0xcb)) / in_stack_00000170) -
                                     in_stack_00001158,in_stack_0000114c,in_stack_00001158,
                                     &stack0x00001270,0);
                        goto LAB_05cbe788;
                      }
                      goto LAB_05cc45e8;
                    }
                    goto LAB_05cc446c;
                  }
                }
              }
            }
            else {
              if ((unaff_x19[0x74] == 0) ||
                 (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0)) goto LAB_05cc446c;
              if (*(uint *)(lVar25 + 0x18) <= uVar14) goto LAB_05cc45e8;
              lVar25 = *(long *)(lVar25 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x30);
              if ((lVar25 == 0) || (lVar25 = *(long *)(lVar25 + 0x20), lVar25 == 0))
              goto LAB_05cc446c;
              uVar13 = FUN_05f84fd8(lVar25,0);
              if ((*_fStack0000000000000100 == 0) ||
                 (((unaff_x19[0x20] == 0 ||
                   (lVar25 = *(long *)(unaff_x19[0x20] + 0x178), lVar25 == 0)) ||
                  (lVar25 = *(long *)(lVar25 + 0x48), lVar25 == 0)))) goto LAB_05cc446c;
              uVar21 = FUN_048b1190(lVar25,uVar13 | *(int *)(*_fStack0000000000000100 + 0x28) <<
                                                    0x10,&stack0x00001178,
                                    *(undefined8 *)
                                     Method_PlayFab_PlayFabMultiplayerInstanceAPI_LeaveLobbyAsServer__
                                   );
              if ((uVar21 & 1) != 0) {
                if ((unaff_x19[0x74] == 0) ||
                   (lVar25 = *(long *)(unaff_x19[0x74] + 0x38), lVar25 == 0)) goto LAB_05cc446c;
                if (*(uint *)(lVar25 + 0x18) <= *(uint *)((long)unaff_x19 + 0x32c))
                goto LAB_05cc45e8;
                FUN_05f89350((in_stack_0000117c +
                             (*(float *)(lVar25 + (long)(int)*(uint *)((long)unaff_x19 + 0x32c) *
                                                  (long)(int)unaff_w23 + 0x138) -
                             *(float *)(unaff_x19 + 0xcb)) / in_stack_00000170) - in_stack_00001188,
                             in_stack_0000117c,in_stack_00001188,&stack0x00001270,0);
LAB_05cbe788:
                FUN_05f89360(&stack0x00001270,0);
                in_stack_000000c0 = 0.0;
              }
            }
          }
        }
        else {
          *(uint *)((long)unaff_x19 + 0x32c) = uVar13;
        }
        fStack0000000000000140 = (float)FUN_05f89358(&stack0x00001270,0);
        in_stack_00000138._4_4_ = (float)FUN_05f89358(&stack0x00001270,0);
        if ((char)unaff_x19[0x1e] != '\0') {
          fVar47 = *(float *)(unaff_x19 + 0xcb);
          fVar46 = (float)FUN_05f84e30(&stack0x00001280,0);
          fVar47 = fVar47 - in_stack_00000170 * fVar46 * (1.0 - *(float *)(unaff_x19 + 0x60));
          *(float *)(unaff_x19 + 0xcb) = fVar47;
          if ((unaff_w26 != 0) || (in_stack_0000133c == 0x200b)) {
            *(float *)(unaff_x19 + 0xcb) = fVar47 - in_stack_00000108 * *(float *)(unaff_x19 + 0x5c)
            ;
          }
        }
        fVar46 = *(float *)(unaff_x19 + 0x5b);
        fStack0000000000000094 = 0.0;
        if (fVar46 != 0.0) {
          if (((*(char *)((long)unaff_x19 + 0x2dc) == '\0') || (0x3a < in_stack_0000133c)) ||
             (fVar47 = 0.25, (1L << ((ulong)in_stack_0000133c & 0x3f) & 0x400500000000000U) == 0)) {
            fVar47 = 0.5;
          }
          fVar48 = (float)FUN_05f84e10(&stack0x00001280,0);
          fVar65 = (float)FUN_05f84e20(&stack0x00001280,0);
          fStack0000000000000094 =
               (1.0 - *(float *)(unaff_x19 + 0x60)) *
               (fVar46 * fVar47 - in_stack_00000170 * (fVar48 * 0.5 + fVar65));
          *(float *)(unaff_x19 + 0xcb) = fStack0000000000000094 + *(float *)(unaff_x19 + 0xcb);
        }
        if (((cVar23 == '\0') && (*(int *)((long)unaff_x19 + 0x65c) == 0)) &&
           ((*(byte *)((long)unaff_x19 + 0x284) & 1) != 0)) {
          lVar25 = unaff_x19[0x23];
          if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar21 = FUN_05ee1474(lVar25,0,0);
          in_stack_00000150 = 0.0;
          if ((uVar21 & 1) != 0) {
            lVar25 = unaff_x19[0x23];
            if (*(int *)(*(long *)PTR_DAT_06649ad0 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            plVar43 = (long *)PTR_DAT_06649ad0;
            if (lVar25 == 0) goto LAB_05cc446c;
            uVar21 = FUN_05eb4d10(lVar25,*(undefined4 *)
                                          (*(long *)(*(long *)PTR_DAT_06649ad0 + 0xb8) + 0x6c),0);
            if ((uVar21 & 1) != 0) {
              lVar25 = unaff_x19[0x23];
              if (*(int *)(*plVar43 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                plVar43 = (long *)PTR_DAT_06649ad0;
              }
              if (lVar25 == 0) goto LAB_05cc446c;
              fVar46 = (float)thunk_FUN_05eb6d50(lVar25,*(undefined4 *)
                                                         (*(long *)(*plVar43 + 0xb8) + 0x6c),0);
              if ((unaff_x19[0x20] == 0) || (unaff_x19[0x23] == 0)) goto LAB_05cc446c;
              fVar47 = *(float *)(unaff_x19[0x20] + 0x1a8);
              in_stack_00000150 =
                   (float)thunk_FUN_05eb6d50(unaff_x19[0x23],
                                             *(undefined4 *)
                                              (*(long *)(*(long *)PTR_DAT_06649ad0 + 0xb8) + 0xe4),0
                                            );
              in_stack_00000150 = in_stack_00000150 * fVar46 * fVar47 * 0.25;
              if (fVar46 < fStack0000000000000158 + in_stack_00000150) {
                fStack0000000000000158 = fVar46 - in_stack_00000150;
              }
            }
          }
          if (unaff_x19[0x20] == 0) goto LAB_05cc446c;
          in_stack_000000f0 = *(float *)(unaff_x19[0x20] + 0x1ac);
        }
        else {
          lVar25 = unaff_x19[0x23];
          if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar21 = FUN_05ee1474(lVar25,0,0);
          in_stack_000000f0 = 0.0;
          if ((uVar21 & 1) != 0) {
            lVar25 = unaff_x19[0x23];
            if (*(int *)(*(long *)PTR_DAT_06649ad0 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            plVar43 = (long *)PTR_DAT_06649ad0;
            if (lVar25 == 0) goto LAB_05cc446c;
            uVar21 = FUN_05eb4d10(lVar25,*(undefined4 *)
                                          (*(long *)(*(long *)PTR_DAT_06649ad0 + 0xb8) + 0x6c),0);
            if ((uVar21 & 1) != 0) {
              lVar25 = unaff_x19[0x23];
              if (*(int *)(*plVar43 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                plVar43 = (long *)PTR_DAT_06649ad0;
              }
              if (lVar25 == 0) goto LAB_05cc446c;
              uVar21 = FUN_05eb4d10(lVar25,*(undefined4 *)(*(long *)(*plVar43 + 0xb8) + 0xe4),0);
              if ((uVar21 & 1) != 0) {
                lVar25 = unaff_x19[0x23];
                if (*(int *)(*plVar43 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                  plVar43 = (long *)PTR_DAT_06649ad0;
                }
                if (lVar25 != 0) {
                  fVar46 = (float)thunk_FUN_05eb6d50(lVar25,*(undefined4 *)
                                                             (*(long *)(*plVar43 + 0xb8) + 0x6c),0);
                  if ((unaff_x19[0x20] != 0) && (unaff_x19[0x23] != 0)) {
                    fVar47 = *(float *)(unaff_x19[0x20] + 0x1a0);
                    in_stack_00000150 =
                         (float)thunk_FUN_05eb6d50(unaff_x19[0x23],
                                                   *(undefined4 *)
                                                    (*(long *)(*(long *)PTR_DAT_06649ad0 + 0xb8) +
                                                    0xe4),0);
                    in_stack_00000150 = in_stack_00000150 * fVar46 * fVar47 * 0.25;
                    if (fVar46 < fStack0000000000000158 + in_stack_00000150) {
                      fStack0000000000000158 = fVar46 - in_stack_00000150;
                    }
                    goto LAB_05cbeb4c;
                  }
                }
                goto LAB_05cc446c;
              }
            }
          }
          in_stack_00000150 = 0.0;
        }
LAB_05cbeb4c:
        fVar48 = *(float *)(unaff_x19 + 0xcb);
        fVar46 = (float)FUN_05f84e20(&stack0x00001280,0);
        fVar65 = *(float *)((long)unaff_x19 + 0x47c);
        fVar47 = (float)FUN_05f89348(&stack0x00001270,0);
        unaff_s11 = fVar48 + (1.0 - *(float *)(unaff_x19 + 0x60)) *
                             in_stack_00000170 *
                             (fVar47 + ((fVar46 * fVar65 - fStack0000000000000158) -
                                       in_stack_00000150));
        fVar46 = (float)FUN_05f84e28(&stack0x00001280,0);
        fVar47 = (float)FUN_05f89358(&stack0x00001270,0);
        in_stack_00000180 =
             *(float *)((long)unaff_x19 + 0x634) +
             ((in_stack_00000178._4_4_ +
              in_stack_00000170 * (fStack0000000000000158 + fVar46 + fVar47)) -
             *(float *)((long)unaff_x19 + 0x4ec));
        fVar46 = (float)FUN_05f84e18(&stack0x00001280,0);
        in_stack_00000160 =
             in_stack_00000180 -
             in_stack_00000170 * (fStack0000000000000158 + fStack0000000000000158 + fVar46);
        fVar46 = (float)FUN_05f84e10(&stack0x00001280,0);
        fVar67 = unaff_s11 +
                 (1.0 - *(float *)(unaff_x19 + 0x60)) *
                 in_stack_00000170 *
                 (in_stack_00000150 + in_stack_00000150 +
                 fStack0000000000000158 + fStack0000000000000158 +
                 fVar46 * *(float *)((long)unaff_x19 + 0x47c));
        unaff_x24 = in_stack_000001a8;
        fVar47 = unaff_s11;
        fVar48 = fVar67;
        fVar46 = in_stack_00000118;
        fVar65 = in_stack_00000170;
        if (((*(int *)((long)unaff_x19 + 0x65c) != 0) ||
            (fVar65 = in_stack_00000170, cVar23 != '\0')) ||
           (unaff_s13 = fStack0000000000000158, in_s3 = fVar67, fVar65 = in_stack_00000170,
           (*(byte *)((long)unaff_x19 + 0x284) >> 1 & 1) == 0)) goto LAB_05cbec74;
        goto code_r0x05cbf8e8;
      }
    }
  }
LAB_05cc446c:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
LAB_05cc1fd0:
  if (*(uint *)(lVar25 + 0x18) <= uVar13) goto LAB_05cc45e8;
  uVar39 = (ulong)uVar13;
  piVar38 = (int *)(lVar28 + uVar39 * 0x178);
  lVar30 = *(long *)(piVar38 + 8);
  uVar44 = *(ushort *)(piVar38 + 1);
  if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar16 = (uint)uVar44;
  bVar11 = FUN_04f72380(uVar44,0);
  if (*(uint *)(lVar25 + 0x18) <= uVar13) goto LAB_05cc45e8;
  if ((unaff_x19[0x74] == 0) || (lVar19 = *(long *)(unaff_x19[0x74] + 0x50), lVar19 == 0))
  goto LAB_05cc446c;
  uVar33 = *(uint *)(lVar28 + uVar39 * 0x178 + 0x3c);
  if (*(uint *)(lVar19 + 0x18) <= uVar33) goto LAB_05cc45e8;
  lVar19 = lVar19 + (long)(int)uVar33 * 0x60;
  uVar2 = *(uint *)(lVar19 + 0x40);
  uVar3 = *(uint *)(lVar19 + 0x44);
  fVar55 = *(float *)(lVar19 + 0x58);
  fVar46 = *(float *)(lVar19 + 0x5c);
  uVar40 = *(uint *)(lVar19 + 0x6c);
  fVar61 = *(float *)(lVar19 + 0x60);
  fVar68 = *(float *)(lVar19 + 100);
  iVar18 = *(int *)(lVar19 + 0x20);
  fVar66 = *(float *)(lVar19 + 0x70);
  fVar63 = *(float *)(lVar19 + 0x74);
  iVar17 = *(int *)(lVar19 + 0x28);
  fVar67 = *(float *)(lVar19 + 0x78);
  fVar65 = *(float *)(lVar19 + 0x7c);
  iVar37 = *(int *)(lVar19 + 0x30);
  fVar60 = *(float *)(lVar19 + 0x50);
  if ((int)uVar40 < 9) {
    if ((int)uVar40 < 3) {
      if (uVar40 == 1) {
        if ((char)unaff_x19[0x1e] == '\0') {
          in_stack_00000120 = fVar68 + 0.0;
        }
        else {
          in_stack_00000120 = 0.0 - fVar46;
        }
        fStack0000000000000100 = 0.0;
        fStack0000000000000124 = 0.0;
      }
      else if (uVar40 == 2) {
        in_stack_00000120 = (fVar68 + fVar61 * 0.5) - fVar46 * 0.5;
LAB_05cc22cc:
        fStack0000000000000124 = 0.0;
        fStack0000000000000100 = 0.0;
      }
      else {
LAB_05cc219c:
        uVar44 = NEON_umaxv(CONCAT26(-(ushort)(uVar44 == (ushort)((ulong)DAT_01274c08 >> 0x30)),
                                     CONCAT24(-(ushort)(uVar44 ==
                                                       (ushort)((ulong)DAT_01274c08 >> 0x20)),
                                              CONCAT22(-(ushort)(uVar44 ==
                                                                (ushort)((ulong)DAT_01274c08 >> 0x10
                                                                        )),
                                                       -(ushort)(uVar44 == (ushort)DAT_01274c08)))),
                            2);
        if (((((uVar44 & 1) == 0) && (uVar16 != 3)) && (uVar40 == 8)) && ((int)uVar13 <= (int)uVar3)
           ) goto LAB_05cc21dc;
      }
    }
    else if (uVar40 != 3) {
      if (uVar40 != 4) goto LAB_05cc219c;
      fStack0000000000000100 = 0.0;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar46 = 0.0;
      }
      in_stack_00000120 = (fVar61 + fVar68) - fVar46;
      fStack0000000000000124 = 0.0;
    }
  }
  else if (uVar40 == 0x10) {
    if ((int)uVar13 <= (int)uVar3) {
      if (uVar16 < 0xad) {
        if ((uVar16 != 3) && (uVar16 != 10)) {
LAB_05cc21dc:
          if (*(uint *)(lVar25 + 0x18) <= uVar2) goto LAB_05cc45e8;
          uVar4 = *(undefined2 *)(lVar28 + (long)(int)uVar2 * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar21 = FUN_04f7562c(uVar4,0);
          plVar43 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
          if ((uVar21 & 1) == 0) {
            bVar1 = (int)uVar33 < (int)unaff_x19[0x97];
          }
          else {
            bVar1 = false;
          }
          if ((!bVar1 && (uVar40 >> 4 & 1) == 0) && (fVar46 <= fVar61)) {
            in_stack_00000120 = -0.0;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_00000120 = fVar61;
            }
            in_stack_00000120 = fVar68 + in_stack_00000120;
            goto LAB_05cc22cc;
          }
          if (((uVar13 == 0) || (uVar33 != uVar36)) ||
             (uVar13 == *(uint *)((long)unaff_x19 + 0x35c))) {
            in_stack_00000120 = -0.0;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_00000120 = fVar61;
            }
            if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            in_stack_00000120 = fVar68 + in_stack_00000120;
            fStack0000000000000050 = (float)FUN_04f758f0(uVar16,0);
            fStack0000000000000124 = 0.0;
            fStack0000000000000100 = 0.0;
          }
          else {
            cVar23 = (char)unaff_x19[0x1e];
            iVar37 = (iVar37 - iVar18) - ((uint)fStack0000000000000050 & 1);
            fVar68 = -fVar46;
            if (cVar23 != '\0') {
              fVar68 = fVar46;
            }
            if (iVar37 < 1) {
              fVar46 = 1.0;
              iVar37 = 1;
            }
            else {
              fVar46 = *(float *)((long)unaff_x19 + 0x30c);
            }
            if (uVar16 == 9) {
LAB_05cc3f64:
              fVar46 = ((fVar61 + fVar68) * (1.0 - fVar46)) / (float)iVar37;
              if (cVar23 == '\0') {
                in_stack_00000120 = in_stack_00000120 + fVar46;
                fStack0000000000000124 = fStack0000000000000124 + 0.0;
                fStack0000000000000100 = fStack0000000000000100 + 0.0;
              }
              else {
                in_stack_00000120 = in_stack_00000120 - fVar46;
              }
            }
            else {
              if (uVar16 != 0xa0) {
                if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                uVar21 = FUN_04f758f0(uVar16,0);
                cVar23 = (char)unaff_x19[0x1e];
                if ((uVar21 & 1) != 0) goto LAB_05cc3f64;
              }
              fVar46 = ((fVar61 + fVar68) * fVar46) /
                       (float)(int)((iVar18 - (((uint)fStack0000000000000050 ^ 0xffffffff) & 1)) +
                                   iVar17);
              if (cVar23 == '\0') {
                in_stack_00000120 = in_stack_00000120 + fVar46;
                fStack0000000000000124 = fStack0000000000000124 + 0.0;
                fStack0000000000000100 = fStack0000000000000100 + 0.0;
              }
              else {
                in_stack_00000120 = in_stack_00000120 - fVar46;
              }
            }
          }
        }
      }
      else if (((uVar16 != 0xad) && (uVar16 != 0x200b)) && (uVar16 != 0x2060)) goto LAB_05cc21dc;
    }
  }
  else if (uVar40 == 0x20) {
    in_stack_00000120 = (fVar68 + fVar61 * 0.5) - (fVar66 + fVar67) * 0.5;
    fStack0000000000000100 = 0.0;
    fStack0000000000000124 = 0.0;
  }
  uVar40 = (uint)*(undefined8 *)(lVar25 + 0x18);
  if (uVar40 <= uVar13) goto LAB_05cc45e8;
  lVar19 = lVar28 + uVar39 * 0x178;
  fVar46 = in_stack_000000c0 + in_stack_00000120;
  fVar61 = in_stack_000001b0 + fStack0000000000000124;
  fVar68 = fStack00000000000000b8 + fStack0000000000000100;
  if (*(char *)(lVar19 + 0x170) == '\0') goto LAB_05cc2aec;
  iVar18 = *piVar38;
  if (iVar18 == 0) {
    fVar48 = fmodf(*(float *)((long)unaff_x19 + 0x34c) * (float)(int)uVar33,1.0);
    iVar17 = *(int *)((long)unaff_x19 + 0x344);
    if (iVar17 < 2) {
      if (iVar17 == 0) {
        lVar31 = lVar28 + uVar39 * 0x178;
        *(undefined4 *)(lVar31 + 100) = 0;
        *(undefined4 *)(lVar31 + 0x8c) = 0;
        *(undefined4 *)(lVar31 + 0xb4) = 0x3f800000;
        *(undefined4 *)(lVar31 + 0xdc) = 0x3f800000;
      }
      else if (iVar17 == 1) {
        lVar31 = lVar28 + uVar39 * 0x178;
        fVar65 = *(float *)(lVar31 + 0x48);
        pfVar32 = (float *)(lVar31 + 100);
        if (*(int *)((long)unaff_x19 + 0x29c) == 0x208) {
          lVar31 = lVar28 + uVar39 * 0x178;
          fVar67 = *(float *)(lVar31 + 0x70);
          *pfVar32 = fVar48 + ((in_stack_00000120 + fVar65) - *(float *)(unaff_x19 + 0x9e)) /
                              (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar31 + 0x8c) =
               fVar48 + ((in_stack_00000120 + fVar67) - *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar31 + 0xb4) =
               fVar48 + ((in_stack_00000120 + *(float *)(lVar31 + 0x98)) -
                        *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar31 + 0xdc) =
               fVar48 + ((in_stack_00000120 + *(float *)(lVar31 + 0xc0)) -
                        *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
        }
        else {
          lVar31 = lVar28 + uVar39 * 0x178;
          fVar67 = fVar67 - fVar66;
          fVar63 = *(float *)(lVar31 + 0x70);
          fVar56 = *(float *)(lVar31 + 0x98);
          fVar58 = *(float *)(lVar31 + 0xc0);
          *pfVar32 = fVar48 + (fVar65 - fVar66) / fVar67;
          *(float *)(lVar31 + 0x8c) = fVar48 + (fVar63 - fVar66) / fVar67;
          *(float *)(lVar31 + 0xb4) = fVar48 + (fVar56 - fVar66) / fVar67;
          *(float *)(lVar31 + 0xdc) = fVar48 + (fVar58 - fVar66) / fVar67;
        }
      }
    }
    else if (iVar17 == 2) {
      lVar31 = lVar28 + uVar39 * 0x178;
      *(float *)(lVar31 + 100) =
           fVar48 + ((in_stack_00000120 + *(float *)(lVar31 + 0x48)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar31 + 0x8c) =
           fVar48 + ((in_stack_00000120 + *(float *)(lVar31 + 0x70)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar31 + 0xb4) =
           fVar48 + ((in_stack_00000120 + *(float *)(lVar31 + 0x98)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar31 + 0xdc) =
           fVar48 + ((in_stack_00000120 + *(float *)(lVar31 + 0xc0)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
    }
    else if (iVar17 == 3) {
      iVar17 = (int)unaff_x19[0x69];
      if (iVar17 < 2) {
        if (iVar17 == 0) {
          lVar31 = lVar28 + uVar39 * 0x178;
          *(undefined4 *)(lVar31 + 0x68) = 0;
          *(undefined4 *)(lVar31 + 0x90) = 0x3f800000;
          *(undefined4 *)(lVar31 + 0xb8) = 0;
          *(undefined4 *)(lVar31 + 0xe0) = 0x3f800000;
        }
        else if (iVar17 == 1) {
          lVar31 = lVar28 + uVar39 * 0x178;
          fVar65 = fVar65 - fVar63;
          fVar67 = (*(float *)(lVar31 + 0x74) - fVar63) / fVar65;
          fVar65 = fVar48 + (*(float *)(lVar31 + 0x4c) - fVar63) / fVar65;
          *(float *)(lVar31 + 0x68) = fVar65;
          *(float *)(lVar31 + 0xb8) = fVar65;
          goto LAB_05cc26ec;
        }
      }
      else if (iVar17 == 2) {
        lVar31 = lVar28 + uVar39 * 0x178;
        fVar65 = fVar48 + (*(float *)(lVar31 + 0x4c) - *(float *)((long)unaff_x19 + 0x4f4)) /
                          (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4)
                          );
        *(float *)(lVar31 + 0x68) = fVar65;
        fVar67 = *(float *)((long)unaff_x19 + 0x4f4);
        fVar63 = *(float *)((long)unaff_x19 + 0x4fc);
        *(float *)(lVar31 + 0xb8) = fVar65;
        fVar67 = (*(float *)(lVar31 + 0x74) - fVar67) / (fVar63 - fVar67);
LAB_05cc26ec:
        *(float *)(lVar31 + 0x90) = fVar48 + fVar67;
        *(float *)(lVar31 + 0xe0) = fVar48 + fVar67;
      }
      else if (iVar17 == 3) {
        if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_05ea2238(*(undefined8 *)
                      Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateLobbyAsServer__,0);
        uVar40 = (uint)*(undefined8 *)(lVar25 + 0x18);
      }
      if (uVar40 <= uVar13) goto LAB_05cc45e8;
      lVar31 = lVar28 + uVar39 * 0x178;
      fVar63 = *(float *)(lVar31 + 0x138);
      fVar67 = (1.0 - (*(float *)(lVar31 + 0x68) + *(float *)(lVar31 + 0x90)) * fVar63) * 0.5;
      fVar65 = fVar48 + *(float *)(lVar31 + 0x68) * fVar63 + fVar67;
      fVar48 = fVar48 + fVar67 + *(float *)(lVar31 + 0x90) * fVar63;
      *(float *)(lVar31 + 100) = fVar65;
      *(float *)(lVar31 + 0x8c) = fVar65;
      *(float *)(lVar31 + 0xb4) = fVar48;
      *(float *)(lVar31 + 0xdc) = fVar48;
    }
    iVar17 = (int)unaff_x19[0x69];
    if (iVar17 < 2) {
      if (iVar17 == 0) {
        if (uVar40 <= uVar13) goto LAB_05cc45e8;
        lVar31 = lVar28 + uVar39 * 0x178;
        *(undefined4 *)(lVar31 + 0x68) = 0;
        *(undefined4 *)(lVar31 + 0x90) = 0x3f800000;
        *(undefined4 *)(lVar31 + 0xb8) = 0x3f800000;
        *(undefined4 *)(lVar31 + 0xe0) = 0;
      }
      else if (iVar17 == 1) {
        if (uVar13 < uVar40) {
          lVar31 = lVar28 + uVar39 * 0x178;
          fVar60 = fVar60 - fVar55;
          fVar48 = (*(float *)(lVar31 + 0x4c) - fVar55) / fVar60;
          fVar60 = (*(float *)(lVar31 + 0x74) - fVar55) / fVar60;
          *(float *)(lVar31 + 0x68) = fVar48;
          goto LAB_05cc2864;
        }
        goto LAB_05cc45e8;
      }
    }
    else if (iVar17 == 2) {
      if (uVar40 <= uVar13) goto LAB_05cc45e8;
      lVar31 = lVar28 + uVar39 * 0x178;
      fVar48 = (*(float *)(lVar31 + 0x4c) - *(float *)((long)unaff_x19 + 0x4f4)) /
               (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
      *(float *)(lVar31 + 0x68) = fVar48;
      fVar60 = (*(float *)(lVar31 + 0x74) - *(float *)((long)unaff_x19 + 0x4f4)) /
               (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
LAB_05cc2864:
      *(float *)(lVar31 + 0x90) = fVar60;
      *(float *)(lVar31 + 0xb8) = fVar60;
      *(float *)(lVar31 + 0xe0) = fVar48;
    }
    else if (iVar17 == 3) {
      if (uVar40 <= uVar13) goto LAB_05cc45e8;
      lVar31 = lVar28 + uVar39 * 0x178;
      fVar67 = *(float *)(lVar31 + 0x138);
      fVar65 = (1.0 - (*(float *)(lVar31 + 100) + *(float *)(lVar31 + 0xb4)) / fVar67) * 0.5;
      fVar48 = *(float *)(lVar31 + 100) / fVar67 + fVar65;
      fVar65 = fVar65 + *(float *)(lVar31 + 0xb4) / fVar67;
      *(float *)(lVar31 + 0x68) = fVar48;
      *(float *)(lVar31 + 0xe0) = fVar48;
      *(float *)(lVar31 + 0x90) = fVar65;
      *(float *)(lVar31 + 0xb8) = fVar65;
    }
    if (uVar40 <= uVar13) goto LAB_05cc45e8;
    lVar31 = lVar28 + uVar39 * 0x178;
    fVar48 = ABS(auVar54._0_4_) * *(float *)(lVar31 + 0x13c) * (1.0 - *(float *)(unaff_x19 + 0x60));
    if ((*(char *)(lVar31 + 0x34) == '\0') &&
       ((*(byte *)(lVar28 + uVar39 * 0x178 + 0x16c) & 1) != 0)) {
      fVar48 = -fVar48;
    }
    lVar31 = lVar28 + uVar39 * 0x178;
    *(float *)(lVar31 + 0x60) = fVar48;
    *(float *)(lVar31 + 0x88) = fVar48;
    *(float *)(lVar31 + 0xb0) = fVar48;
    *(float *)(lVar31 + 0xd8) = fVar48;
  }
  if (((int)uVar13 < (int)unaff_x19[0x6c]) &&
     ((int)uStack00000000000000ec < *(int *)((long)unaff_x19 + 0x364))) {
    if (((int)unaff_x19[0x6d] <= (int)uVar33) || ((int)unaff_x19[0x62] == 5)) {
      if (((int)uVar33 < (int)unaff_x19[0x6d]) && ((int)unaff_x19[0x62] == 5)) {
        if (uVar13 < uVar40) {
          if (*(uint *)(lVar28 + uVar39 * 0x178 + 0x40) == in_stack_00000040._4_4_) {
            lVar19 = lVar28 + uVar39 * 0x178;
            *(ulong *)(lVar19 + 0x48) =
                 CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar19 + 0x48) >> 0x20),
                          fVar46 + (float)*(undefined8 *)(lVar19 + 0x48));
            *(float *)(lVar19 + 0x50) = fVar68 + *(float *)(lVar19 + 0x50);
            *(ulong *)(lVar19 + 0x70) =
                 CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar19 + 0x70) >> 0x20),
                          fVar46 + (float)*(undefined8 *)(lVar19 + 0x70));
            *(float *)(lVar19 + 0x78) = fVar68 + *(float *)(lVar19 + 0x78);
            *(ulong *)(lVar19 + 0x98) =
                 CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar19 + 0x98) >> 0x20),
                          fVar46 + (float)*(undefined8 *)(lVar19 + 0x98));
            *(float *)(lVar19 + 0xa0) = fVar68 + *(float *)(lVar19 + 0xa0);
            *(ulong *)(lVar19 + 0xc0) =
                 CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar19 + 0xc0) >> 0x20),
                          fVar46 + (float)*(undefined8 *)(lVar19 + 0xc0));
            *(float *)(lVar19 + 200) = fVar68 + *(float *)(lVar19 + 200);
            goto LAB_05cc2a70;
          }
          goto 
          UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_<UpdateCollidersAfterOnTriggerStay>d__36__System_Collections_IEnumerator_get_Current
          ;
        }
        goto LAB_05cc45e8;
      }
      goto 
      UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_<UpdateCollidersAfterOnTriggerStay>d__36__System_Collections_IEnumerator_get_Current
      ;
    }
    if (uVar40 <= uVar13) goto LAB_05cc45e8;
    lVar19 = lVar28 + uVar39 * 0x178;
    *(ulong *)(lVar19 + 0x48) =
         CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar19 + 0x48) >> 0x20),
                  fVar46 + (float)*(undefined8 *)(lVar19 + 0x48));
    *(float *)(lVar19 + 0x50) = fVar68 + *(float *)(lVar19 + 0x50);
    *(ulong *)(lVar19 + 0x70) =
         CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar19 + 0x70) >> 0x20),
                  fVar46 + (float)*(undefined8 *)(lVar19 + 0x70));
    *(float *)(lVar19 + 0x78) = fVar68 + *(float *)(lVar19 + 0x78);
    *(ulong *)(lVar19 + 0x98) =
         CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar19 + 0x98) >> 0x20),
                  fVar46 + (float)*(undefined8 *)(lVar19 + 0x98));
    *(float *)(lVar19 + 0xa0) = fVar68 + *(float *)(lVar19 + 0xa0);
    *(ulong *)(lVar19 + 0xc0) =
         CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar19 + 0xc0) >> 0x20),
                  fVar46 + (float)*(undefined8 *)(lVar19 + 0xc0));
    *(float *)(lVar19 + 200) = fVar68 + *(float *)(lVar19 + 200);
  }
  else {

    UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_<UpdateCollidersAfterOnTriggerStay>d__36__System_Collections_IEnumerator_get_Current
    :
    if (uVar40 <= uVar13) goto LAB_05cc45e8;
    if (DAT_06a492ef == '\0') {
      FUN_02d4dc40(PTR_DAT_066463e8);
      uVar40 = *(uint *)(lVar25 + 0x18);
      DAT_06a492ef = '\x01';
    }
    puVar9 = PTR_DAT_066463e8;
    uVar57 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_066463e8 + 0xb8) + 1);
    *(undefined8 *)(lVar28 + uVar39 * 0x178 + 0x48) =
         **(undefined8 **)(*(long *)PTR_DAT_066463e8 + 0xb8);
    *(undefined4 *)(lVar28 + uVar39 * 0x178 + 0x50) = uVar57;
    if (uVar40 <= uVar13) goto LAB_05cc45e8;
    lVar31 = lVar28 + uVar39 * 0x178;
    uVar57 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
    *(undefined8 *)(lVar31 + 0x70) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
    *(undefined4 *)(lVar31 + 0x78) = uVar57;
    uVar57 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
    *(undefined8 *)(lVar31 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
    *(undefined4 *)(lVar31 + 0xa0) = uVar57;
    uVar62 = **(undefined8 **)(*(long *)puVar9 + 0xb8);
    uVar57 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
    *(undefined1 *)(lVar19 + 0x170) = 0;
    *(undefined8 *)(lVar31 + 0xc0) = uVar62;
    *(undefined4 *)(lVar31 + 200) = uVar57;
  }
LAB_05cc2a70:
  iVar17 = FUN_05eae77c(0);
  *(bool *)((long)unaff_x19 + 0x174) = iVar17 == 1;
  plVar43 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
  if (iVar18 == 0) {
    puVar26 = (undefined8 *)(*unaff_x19 + 0x8d8);
  }
  else {
    if (iVar18 != 1) goto LAB_05cc2aec;
    puVar26 = (undefined8 *)(*unaff_x19 + 0x8f8);
  }
  (*(code *)*puVar26)();
LAB_05cc2aec:
  if ((unaff_x19[0x74] == 0) || (lVar19 = *(long *)(unaff_x19[0x74] + 0x38), lVar19 == 0))
  goto LAB_05cc446c;
  if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_05cc45e8;
  lVar19 = lVar19 + uVar39 * 0x178;
  uVar62 = *(undefined8 *)(lVar19 + 0x114);
  *(float *)(lVar19 + 0x11c) = fVar68 + *(float *)(lVar19 + 0x11c);
  *(undefined8 *)(lVar19 + 0x114) =
       CONCAT44(fVar61 + (float)((ulong)uVar62 >> 0x20),fVar46 + (float)uVar62);
  if ((unaff_x19[0x74] == 0) || (lVar19 = *(long *)(unaff_x19[0x74] + 0x38), lVar19 == 0))
  goto LAB_05cc446c;
  if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_05cc45e8;
  lVar19 = lVar19 + uVar39 * 0x178;
  *(ulong *)(lVar19 + 0x108) =
       CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar19 + 0x108) >> 0x20),
                fVar46 + (float)*(undefined8 *)(lVar19 + 0x108));
  *(float *)(lVar19 + 0x110) = fVar68 + *(float *)(lVar19 + 0x110);
  if ((unaff_x19[0x74] == 0) || (lVar19 = *(long *)(unaff_x19[0x74] + 0x38), lVar19 == 0))
  goto LAB_05cc446c;
  if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_05cc45e8;
  lVar19 = lVar19 + uVar39 * 0x178;
  *(ulong *)(lVar19 + 0x120) =
       CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar19 + 0x120) >> 0x20),
                fVar46 + (float)*(undefined8 *)(lVar19 + 0x120));
  *(float *)(lVar19 + 0x128) = fVar68 + *(float *)(lVar19 + 0x128);
  if ((unaff_x19[0x74] == 0) || (lVar19 = *(long *)(unaff_x19[0x74] + 0x38), lVar19 == 0))
  goto LAB_05cc446c;
  if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_05cc45e8;
  lVar19 = lVar19 + uVar39 * 0x178;
  uVar62 = *(undefined8 *)(lVar19 + 300);
  *(float *)(lVar19 + 0x134) = fVar68 + *(float *)(lVar19 + 0x134);
  *(undefined8 *)(lVar19 + 300) =
       CONCAT44(fVar61 + (float)((ulong)uVar62 >> 0x20),fVar46 + (float)uVar62);
  lVar19 = unaff_x19[0x74];
  if ((lVar19 == 0) || (lVar31 = *(long *)(lVar19 + 0x38), lVar31 == 0)) goto LAB_05cc446c;
  uVar40 = *(uint *)(lVar31 + 0x18);
  if (uVar40 <= uVar13) goto LAB_05cc45e8;
  lVar35 = lVar31 + 0x20 + uVar39 * 0x178;
  uVar62 = *(undefined8 *)(lVar35 + 0x118);
  auVar51._0_8_ = CONCAT44(fVar46 + (float)((ulong)uVar62 >> 0x20),fVar46 + (float)uVar62);
  auVar51._8_4_ = fVar61 + (float)*(undefined8 *)(lVar35 + 0x120);
  auVar51._12_4_ = fVar61 + (float)((ulong)*(undefined8 *)(lVar35 + 0x120) >> 0x20);
  *(float *)(lVar35 + 0x128) = fVar61 + *(float *)(lVar35 + 0x128);
  *(long *)(lVar35 + 0x120) = auVar51._8_8_;
  *(undefined8 *)(lVar35 + 0x118) = auVar51._0_8_;
  if (uVar33 == uVar36) {
    uVar36 = *(int *)(in_stack_000001a8 + 7) - 1;
    if (uVar13 == uVar36) goto LAB_05cc2cfc;
  }
  else {
    lVar19 = *(long *)(lVar19 + 0x50);
    if (lVar19 == 0) goto LAB_05cc446c;
    if (*(uint *)(lVar19 + 0x18) <= uVar36) goto LAB_05cc45e8;
    lVar35 = lVar19 + 0x20 + (long)(int)uVar36 * 0x60;
    fVar65 = fVar61 + *(float *)(lVar35 + 0x38);
    *(ulong *)(lVar35 + 0x30) =
         CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar35 + 0x30) >> 0x20),
                  fVar61 + (float)*(undefined8 *)(lVar35 + 0x30));
    *(float *)(lVar35 + 0x38) = fVar65;
    *(float *)(lVar35 + 0x3c) = fVar46 + *(float *)(lVar35 + 0x3c);
    if (uVar40 <= *(uint *)(lVar35 + 0x18)) goto LAB_05cc45e8;
    lVar19 = lVar19 + 0x20 + (long)(int)uVar36 * 0x60;
    uVar57 = *(undefined4 *)(lVar31 + 0x20 + (long)(int)*(uint *)(lVar35 + 0x18) * 0x178 + 0xf4);
    *(float *)(lVar19 + 0x54) = fVar65;
    *(undefined4 *)(lVar19 + 0x50) = uVar57;
    lVar19 = unaff_x19[0x74];
    if ((lVar19 == 0) || (lVar31 = *(long *)(lVar19 + 0x50), lVar31 == 0)) goto LAB_05cc446c;
    if (*(uint *)(lVar31 + 0x18) <= uVar36) goto LAB_05cc45e8;
    lVar19 = *(long *)(lVar19 + 0x38);
    if (lVar19 == 0) goto LAB_05cc446c;
    uVar40 = *(uint *)(lVar31 + 0x20 + (long)(int)uVar36 * 0x60 + 0x24);
    if (*(uint *)(lVar19 + 0x18) <= uVar40) goto LAB_05cc45e8;
    lVar31 = lVar31 + 0x20 + (long)(int)uVar36 * 0x60;
    *(undefined4 *)(lVar31 + 0x58) = *(undefined4 *)(lVar19 + (long)(int)uVar40 * 0x178 + 0x120);
    *(undefined4 *)(lVar31 + 0x5c) = *(undefined4 *)(lVar31 + 0x30);
    uVar36 = *(int *)(in_stack_000001a8 + 7) - 1;
LAB_05cc2cfc:
    if (uVar13 == uVar36) {
      lVar19 = unaff_x19[0x74];
      if ((lVar19 == 0) || (lVar31 = *(long *)(lVar19 + 0x50), lVar31 == 0)) goto LAB_05cc446c;
      if (*(uint *)(lVar31 + 0x18) <= uVar33) goto LAB_05cc45e8;
      lVar35 = lVar31 + 0x20 + (long)(int)uVar33 * 0x60;
      fVar65 = fVar61 + *(float *)(lVar35 + 0x38);
      *(ulong *)(lVar35 + 0x30) =
           CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar35 + 0x30) >> 0x20),
                    fVar61 + (float)*(undefined8 *)(lVar35 + 0x30));
      *(float *)(lVar35 + 0x38) = fVar65;
      *(float *)(lVar35 + 0x3c) = fVar46 + *(float *)(lVar35 + 0x3c);
      lVar19 = *(long *)(lVar19 + 0x38);
      if (lVar19 == 0) goto LAB_05cc446c;
      uVar36 = *(uint *)(lVar31 + 0x20 + (long)(int)uVar33 * 0x60 + 0x18);
      if (*(uint *)(lVar19 + 0x18) <= uVar36) goto LAB_05cc45e8;
      *(undefined4 *)(lVar35 + 0x50) = *(undefined4 *)(lVar19 + (long)(int)uVar36 * 0x178 + 0x114);
      *(float *)(lVar35 + 0x54) = fVar65;
      lVar19 = unaff_x19[0x74];
      if ((lVar19 == 0) || (lVar31 = *(long *)(lVar19 + 0x50), lVar31 == 0)) goto LAB_05cc446c;
      if (*(uint *)(lVar31 + 0x18) <= uVar33) goto LAB_05cc45e8;
      lVar19 = *(long *)(lVar19 + 0x38);
      if (lVar19 == 0) goto LAB_05cc446c;
      uVar36 = *(uint *)(lVar31 + 0x20 + (long)(int)uVar33 * 0x60 + 0x24);
      if (*(uint *)(lVar19 + 0x18) <= uVar36) goto LAB_05cc45e8;
      lVar31 = lVar31 + 0x20 + (long)(int)uVar33 * 0x60;
      *(undefined4 *)(lVar31 + 0x58) = *(undefined4 *)(lVar19 + (long)(int)uVar36 * 0x178 + 0x120);
      *(undefined4 *)(lVar31 + 0x5c) = *(undefined4 *)(lVar31 + 0x30);
    }
  }
  if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar21 = FUN_04f74b44(uVar16,0);
  if (((((uVar21 & 1) == 0) && (1 < uVar16 - 0x2010)) && (uVar16 != 0xad)) && (uVar16 != 0x2d)) {
    if (bVar7) {
      if (((uVar13 != 0) && ((int)uVar13 < (int)(*(uint *)(lVar25 + 0x18) - 1))) &&
         (((int)uVar13 < *(int *)(in_stack_000001a8 + 7) && ((uVar16 == 0x2019 || (uVar16 == 0x27)))
          ))) {
        if (*(uint *)(lVar25 + 0x18) <= uVar13 - 1) goto LAB_05cc45e8;
        uVar4 = *(undefined2 *)(lVar28 + (ulong)(uVar13 - 1) * 0x178 + 4);
        if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar21 = FUN_04f74b44(uVar4,0);
        if ((uVar21 & 1) != 0) {
          if (*(uint *)(lVar25 + 0x18) <= uVar13 + 1) goto LAB_05cc45e8;
          uVar4 = *(undefined2 *)(lVar28 + (ulong)(uVar13 + 1) * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar21 = FUN_04f74b44(uVar4,0);
          plVar43 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
          if ((uVar21 & 1) != 0) goto LAB_05cc2ffc;
        }
      }
LAB_05cc3d38:
      if (uVar13 == *(int *)(in_stack_000001a8 + 7) - 1U) {
        if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar21 = FUN_04f74b44(uVar16,0);
        uVar36 = uVar13;
        if ((uVar21 & 1) == 0) goto LAB_05cc3d74;
      }
      else {
LAB_05cc3d74:
        uVar36 = uVar13 - 1;
      }
      lVar19 = unaff_x19[0x74];
      if (lVar19 != 0) {
        lVar31 = *(long *)(lVar19 + 0x40);
        if (lVar31 != 0) {
          uVar40 = *(uint *)(lVar19 + 0x24);
          iVar18 = *(int *)(lVar31 + 0x18);
          if (iVar18 < (int)(uVar40 + 1)) {
            if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListSecretSummaries__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            FUN_0338de80((long *)(lVar19 + 0x40),iVar18 + 1,
                         *(undefined8 *)
                          Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListQosServersForTitle__);
            lVar19 = unaff_x19[0x74];
            if (lVar19 == 0) goto LAB_05cc446c;
          }
          plVar43 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
          lVar19 = *(long *)(lVar19 + 0x40);
          if (lVar19 != 0) {
            if (uVar40 < *(uint *)(lVar19 + 0x18)) {
              lVar19 = lVar19 + (long)(int)uVar40 * 0x18;
              *(long **)(lVar19 + 0x20) = unaff_x19;
              *(uint *)(lVar19 + 0x28) = uVar14;
              *(uint *)(lVar19 + 0x2c) = uVar36;
              *(uint *)(lVar19 + 0x30) = (uVar36 - uVar14) + 1;
              thunk_FUN_02dc1ef0();
              lVar19 = unaff_x19[0x74];
              if (lVar19 != 0) {
                lVar31 = *(long *)(lVar19 + 0x50);
                *(int *)(lVar19 + 0x24) = *(int *)(lVar19 + 0x24) + 1;
                if (lVar31 != 0) {
                  if (uVar33 < *(uint *)(lVar31 + 0x18)) {
                    bVar7 = false;
                    goto LAB_05cc2f18;
                  }
                  goto LAB_05cc45e8;
                }
              }
              goto LAB_05cc446c;
            }
            goto LAB_05cc45e8;
          }
        }
      }
      goto LAB_05cc446c;
    }
    if (uVar13 == 0) {
      if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      bVar12 = FUN_04f74a9c(uVar16,0);
      if ((((uVar16 == 0x200b | bVar12 ^ 0xff | bVar11) & 1) != 0) ||
         (*(int *)(in_stack_000001a8 + 7) == 1)) goto LAB_05cc3d38;
    }
    bVar7 = false;
  }
  else {
    if (!bVar7) {
      uVar14 = uVar13;
    }
    if (uVar13 != *(int *)(in_stack_000001a8 + 7) - 1U) {
LAB_05cc2ffc:
      bVar7 = true;
      goto LAB_05cc3004;
    }
    lVar19 = unaff_x19[0x74];
    if (lVar19 == 0) goto LAB_05cc446c;
    lVar31 = *(long *)(lVar19 + 0x40);
    if (lVar31 == 0) goto LAB_05cc446c;
    uVar36 = *(uint *)(lVar19 + 0x24);
    iVar18 = *(int *)(lVar31 + 0x18);
    if (iVar18 < (int)(uVar36 + 1)) {
      if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListSecretSummaries__ +
                  0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_0338de80((long *)(lVar19 + 0x40),iVar18 + 1,
                   *(undefined8 *)
                    Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListQosServersForTitle__);
      lVar19 = unaff_x19[0x74];
      if (lVar19 == 0) goto LAB_05cc446c;
    }
    plVar43 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
    lVar19 = *(long *)(lVar19 + 0x40);
    if (lVar19 == 0) goto LAB_05cc446c;
    if (*(uint *)(lVar19 + 0x18) <= uVar36) goto LAB_05cc45e8;
    lVar19 = lVar19 + (long)(int)uVar36 * 0x18;
    *(long **)(lVar19 + 0x20) = unaff_x19;
    *(uint *)(lVar19 + 0x28) = uVar14;
    *(uint *)(lVar19 + 0x2c) = uVar13;
    *(uint *)(lVar19 + 0x30) = (uVar13 - uVar14) + 1;
    thunk_FUN_02dc1ef0();
    lVar19 = unaff_x19[0x74];
    if (lVar19 == 0) goto LAB_05cc446c;
    lVar31 = *(long *)(lVar19 + 0x50);
    *(int *)(lVar19 + 0x24) = *(int *)(lVar19 + 0x24) + 1;
    if (lVar31 == 0) goto LAB_05cc446c;
    if (*(uint *)(lVar31 + 0x18) <= uVar33) goto LAB_05cc45e8;
    bVar7 = true;
LAB_05cc2f18:
    lVar31 = lVar31 + (long)(int)uVar33 * 0x60;
    uStack00000000000000ec = uStack00000000000000ec + 1;
    *(int *)(lVar31 + 0x34) = *(int *)(lVar31 + 0x34) + 1;
  }
LAB_05cc3004:
  lVar19 = unaff_x19[0x74];
  if ((lVar19 == 0) || (lVar31 = *(long *)(lVar19 + 0x38), lVar31 == 0)) goto LAB_05cc446c;
  if (*(uint *)(lVar31 + 0x18) <= uVar13) goto LAB_05cc45e8;
  lVar35 = lVar31 + 0x20;
  if ((*(byte *)(lVar35 + uVar39 * 0x178 + 0x16c) >> 2 & 1) == 0) {
    if (bVar8) {
      if (*(uint *)(lVar31 + 0x18) <= (uint)((long)(int)uVar13 + -1)) goto LAB_05cc45e8;
      lVar35 = lVar35 + ((long)(int)uVar13 + -1) * 0x178;
      lVar31 = *unaff_x19;
      uVar57 = *(undefined4 *)(lVar35 + 0x100);
      uVar59 = *(undefined4 *)(lVar35 + 0x13c);
LAB_05cc32b0:
      pcVar27 = *(code **)(lVar31 + 0x908);
LAB_05cc32b8:
      (*pcVar27)(fStack0000000000000070,fStack0000000000000068,uStack000000000000006c,uVar57,
                 fStack0000000000000140,0,in_stack_00000078._4_4_,uVar59);
LAB_05cc32f4:
      lVar19 = *plVar43;
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar19 = *plVar43;
      }
      fVar47 = 0.0;
      in_stack_00000138._4_4_ = 0.0;
      fStack0000000000000140 = *(float *)(*(long *)(lVar19 + 0xb8) + 0x1730);
    }
    bVar8 = false;
  }
  else {
    lVar31 = lVar35 + uVar39 * 0x178;
    *(int *)(lVar31 + 0x148) = iVar15;
    iVar18 = *(int *)(lVar31 + 0x40);
    if ((((int)unaff_x19[0x6c] < (int)uVar13) || ((int)unaff_x19[0x6d] < (int)uVar33)) ||
       (((int)unaff_x19[0x62] == 5 && (iVar18 + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar11 & 1) == 0 && uVar16 != 0x200b) {
      fVar46 = *(float *)(lVar35 + uVar39 * 0x178 + 0x13c);
      if (fVar47 <= fVar46) {
        fVar47 = fVar46;
      }
      if (in_stack_00000138._4_4_ <= ABS(fVar48)) {
        in_stack_00000138._4_4_ = ABS(fVar48);
      }
      if ((float)iVar18 != fStack0000000000000064) {
        if (*(int *)(*plVar43 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar19 = unaff_x19[0x74];
          if (lVar19 == 0) goto LAB_05cc446c;
          lVar31 = *(long *)(*plVar43 + 0xb8);
        }
        else {
          lVar31 = *(long *)(*plVar43 + 0xb8);
        }
        fStack0000000000000140 = *(float *)(lVar31 + 0x1730);
      }
      lVar19 = *(long *)(lVar19 + 0x38);
      if (lVar19 == 0) goto LAB_05cc446c;
      if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_05cc45e8;
      if (unaff_x19[0x1f] == 0) goto LAB_05cc446c;
      fVar65 = *(float *)(lVar19 + uVar39 * 0x178 + 0x144);
      fVar46 = (float)FUN_05f84bac(unaff_x19[0x1f] + 0x28,0);
      fVar65 = fVar65 + fVar47 * fVar46;
      fStack0000000000000064 = (float)iVar18;
      if (fVar65 <= fStack0000000000000140) {
        fStack0000000000000140 = fVar65;
      }
    }
    fVar46 = fVar47;
    if (!bVar8) {
      bVar8 = false;
      if ((bVar1) && ((int)uVar13 <= (int)uVar3)) {
        if ((uVar16 & 0xfffe) == 10) goto LAB_05cc3324;
        if (uVar16 != 0xd) {
          if (uVar13 == uVar3) {
            if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar21 = FUN_04f758f0(uVar16,0);
            if ((uVar21 & 1) != 0) goto LAB_05cc3208;
          }
          if ((unaff_x19[0x74] != 0) && (lVar19 = *(long *)(unaff_x19[0x74] + 0x38), lVar19 != 0)) {
            if (uVar13 < *(uint *)(lVar19 + 0x18)) {
              lVar19 = lVar19 + uVar39 * 0x178;
              in_stack_00000078._4_4_ = *(float *)(lVar19 + 0x15c);
              fVar65 = fVar48;
              fVar46 = in_stack_00000078._4_4_;
              if (fVar47 != 0.0) {
                fVar65 = in_stack_00000138._4_4_;
                fVar46 = fVar47;
              }
              uStack000000000000006c = 0;
              fStack0000000000000070 = *(float *)(lVar19 + 0x114);
              uVar45 = *(undefined4 *)(lVar19 + 0x164);
              fStack0000000000000068 = fStack0000000000000140;
              in_stack_00000138._4_4_ = fVar65;
              goto LAB_05cc3274;
            }
            goto LAB_05cc45e8;
          }
          goto LAB_05cc446c;
        }
      }
LAB_05cc3208:
      bVar8 = false;
      goto LAB_05cc3324;
    }
LAB_05cc3274:
    if (*(int *)(in_stack_000001a8 + 7) == 1) {
      if ((unaff_x19[0x74] != 0) && (lVar19 = *(long *)(unaff_x19[0x74] + 0x38), lVar19 != 0)) {
        if (uVar13 < *(uint *)(lVar19 + 0x18)) {
          lVar19 = lVar19 + uVar39 * 0x178;
LAB_05cc32a4:
          lVar31 = *unaff_x19;
          uVar57 = *(undefined4 *)(lVar19 + 0x120);
          uVar59 = *(undefined4 *)(lVar19 + 0x15c);
          goto LAB_05cc32b0;
        }
        goto LAB_05cc45e8;
      }
      goto LAB_05cc446c;
    }
    if ((uVar13 == uVar2) || ((int)uVar3 <= (int)uVar13)) {
      lVar19 = unaff_x19[0x74];
      if ((bVar11 & 1) == 0 && uVar16 != 0x200b) {
        if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x38), lVar19 == 0)) goto LAB_05cc446c;
        if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_05cc45e8;
        lVar19 = lVar19 + uVar39 * 0x178;
      }
      else {
        if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x38), lVar19 == 0)) goto LAB_05cc446c;
        if (*(uint *)(lVar19 + 0x18) <= uVar3) goto LAB_05cc45e8;
        lVar19 = lVar19 + (long)(int)uVar3 * 0x178;
      }
      uVar57 = *(undefined4 *)(lVar19 + 0x120);
      uVar59 = *(undefined4 *)(lVar19 + 0x15c);
      pcVar27 = *(code **)(*unaff_x19 + 0x908);
      goto LAB_05cc32b8;
    }
    if (!bVar1) {
      if ((unaff_x19[0x74] != 0) && (lVar19 = *(long *)(unaff_x19[0x74] + 0x38), lVar19 != 0)) {
        if ((uint)((long)(int)uVar13 + -1) < *(uint *)(lVar19 + 0x18)) {
          lVar19 = lVar19 + ((long)(int)uVar13 + -1) * 0x178;
          goto LAB_05cc32a4;
        }
        goto LAB_05cc45e8;
      }
      goto LAB_05cc446c;
    }
    fVar47 = fVar46;
    if ((int)uVar13 < *(int *)(in_stack_000001a8 + 7) + -1) {
      if ((unaff_x19[0x74] == 0) || (lVar19 = *(long *)(unaff_x19[0x74] + 0x38), lVar19 == 0))
      goto LAB_05cc446c;
      if (*(uint *)(lVar19 + 0x18) <= uVar13 + 1) goto LAB_05cc45e8;
      uVar21 = FUN_05cdeba0(uVar45,*(undefined4 *)(lVar19 + (ulong)(uVar13 + 1) * 0x178 + 0x164),0);
      if ((uVar21 & 1) == 0) {
        if ((unaff_x19[0x74] != 0) && (lVar19 = *(long *)(unaff_x19[0x74] + 0x38), lVar19 != 0)) {
          if (uVar13 < *(uint *)(lVar19 + 0x18)) {
            lVar19 = lVar19 + uVar39 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000070,fStack0000000000000068,uStack000000000000006c,
                       *(undefined4 *)(lVar19 + 0x120),fStack0000000000000140,0,
                       in_stack_00000078._4_4_,*(undefined4 *)(lVar19 + 0x15c));
            plVar43 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
            goto LAB_05cc32f4;
          }
          goto LAB_05cc45e8;
        }
        goto LAB_05cc446c;
      }
      bVar8 = true;
      plVar43 = (long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
    }
    else {
      bVar8 = true;
    }
  }
LAB_05cc3324:
  if ((unaff_x19[0x74] == 0) || (lVar19 = *(long *)(unaff_x19[0x74] + 0x38), lVar19 == 0))
  goto LAB_05cc446c;
  if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_05cc45e8;
  if (lVar30 == 0) goto LAB_05cc446c;
  uVar36 = *(uint *)(lVar19 + uVar39 * 0x178 + 0x18c);
  fVar46 = (float)FUN_05f84bbc(lVar30 + 0x28,0);
  if ((uVar36 >> 6 & 1) == 0) {
    if (bVar10) {
      if ((unaff_x19[0x74] != 0) && (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 != 0)) {
        if ((uint)((long)(int)uVar13 + -1) < *(uint *)(lVar30 + 0x18)) {
          lVar30 = lVar30 + ((long)(int)uVar13 + -1) * 0x178;
          goto LAB_05cc35d8;
        }
        goto LAB_05cc45e8;
      }
      goto LAB_05cc446c;
    }
LAB_05cc346c:
    bVar10 = false;
  }
  else {
    lVar19 = unaff_x19[0x74];
    if ((lVar19 == 0) || (lVar31 = *(long *)(lVar19 + 0x38), lVar31 == 0)) goto LAB_05cc446c;
    if (*(uint *)(lVar31 + 0x18) <= uVar13) goto LAB_05cc45e8;
    *(int *)(lVar31 + 0x20 + uVar39 * 0x178 + 0x150) = iVar15;
    if ((((int)unaff_x19[0x6c] < (int)uVar13) || ((int)unaff_x19[0x6d] < (int)uVar33)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar31 + 0x20 + uVar39 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((((bool)(bVar10 | bVar1 ^ 1U)) || ((int)uVar3 < (int)uVar13)) || ((uVar16 & 0xfffe) == 10))
       || (uVar16 == 0xd)) {
LAB_05cc3464:
      if (!bVar10) goto LAB_05cc346c;
    }
    else {
      if (uVar13 == uVar3) {
        if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar21 = FUN_04f758f0(uVar16,0);
        if ((uVar21 & 1) != 0) goto LAB_05cc3464;
        lVar19 = unaff_x19[0x74];
        if (lVar19 == 0) goto LAB_05cc446c;
      }
      lVar19 = *(long *)(lVar19 + 0x38);
      if (lVar19 == 0) goto LAB_05cc446c;
      if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_05cc45e8;
      lVar19 = lVar19 + uVar39 * 0x178;
      in_stack_000000a0._4_4_ = *(float *)(lVar19 + 0x15c);
      fStack0000000000000098 = fVar46 * in_stack_000000a0._4_4_ + *(float *)(lVar19 + 0x144);
      uStack0000000000000090 = 0;
      fStack000000000000005c = *(float *)(lVar19 + 0x58);
      fStack0000000000000094 = *(float *)(lVar19 + 0x114);
    }
    iVar18 = *(int *)(in_stack_000001a8 + 7);
    if (iVar18 == 1) {
LAB_05cc35ac:
      if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0))
      goto LAB_05cc446c;
      if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_05cc45e8;
      lVar30 = lVar30 + uVar39 * 0x178;
LAB_05cc35d8:
      fVar65 = *(float *)(lVar30 + 0x144);
      lVar19 = *unaff_x19;
      uVar57 = *(undefined4 *)(lVar30 + 0x120);
    }
    else {
      if (uVar13 != uVar2) {
        if (iVar18 <= (int)uVar13) {
LAB_05cc36b0:
          if ((int)uVar13 < iVar18) {
            iVar18 = FUN_05ee6bc0(lVar30,0);
            if (*(uint *)(lVar25 + 0x18) <= uVar13 + 1) goto LAB_05cc45e8;
            lVar30 = *(long *)(lVar28 + (ulong)(uVar13 + 1) * 0x178 + 0x20);
            if (lVar30 == 0) goto LAB_05cc446c;
            iVar17 = FUN_05ee6bc0(lVar30,0);
            if (iVar18 != iVar17) goto LAB_05cc35ac;
          }
          if (bVar1) {
            bVar10 = true;
            goto LAB_05cc3888;
          }
          if ((unaff_x19[0x74] != 0) && (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 != 0)) {
            if ((uint)((long)(int)uVar13 + -1) < *(uint *)(lVar30 + 0x18)) {
              lVar30 = lVar30 + ((long)(int)uVar13 + -1) * 0x178;
              goto LAB_05cc35d8;
            }
            goto LAB_05cc45e8;
          }
          goto LAB_05cc446c;
        }
        if ((unaff_x19[0x74] == 0) || (lVar19 = *(long *)(unaff_x19[0x74] + 0x38), lVar19 == 0))
        goto LAB_05cc446c;
        if (uVar13 + 1 < *(uint *)(lVar19 + 0x18)) {
          if (*(float *)(lVar19 + (ulong)(uVar13 + 1) * 0x178 + 0x58) == fStack000000000000005c) {
            if (*(int *)(*(long *)
                          Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListCertificateSummaries__ +
                        0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar21 = FUN_05cdf0a4(0);
            if ((uVar21 & 1) != 0) {
              iVar18 = *(int *)(in_stack_000001a8 + 7);
              goto LAB_05cc36b0;
            }
          }
          lVar30 = unaff_x19[0x74];
          if ((int)uVar3 < (int)uVar13) goto LAB_05cc3614;
          goto LAB_05cc3810;
        }
        goto LAB_05cc45e8;
      }
      lVar30 = unaff_x19[0x74];
      if ((uVar16 != 0x200b & (bVar11 ^ 0xff)) == 0) {
LAB_05cc3614:
        if ((lVar30 == 0) || (lVar30 = *(long *)(lVar30 + 0x38), lVar30 == 0)) goto LAB_05cc446c;
        if (*(uint *)(lVar30 + 0x18) <= uVar3) goto LAB_05cc45e8;
        lVar30 = lVar30 + (long)(int)uVar3 * 0x178;
      }
      else {
LAB_05cc3810:
        if ((lVar30 == 0) || (lVar30 = *(long *)(lVar30 + 0x38), lVar30 == 0)) goto LAB_05cc446c;
        if (*(uint *)(lVar30 + 0x18) <= uVar13) goto LAB_05cc45e8;
        lVar30 = lVar30 + uVar39 * 0x178;
      }
      fVar65 = *(float *)(lVar30 + 0x144);
      lVar19 = *unaff_x19;
      uVar57 = *(undefined4 *)(lVar30 + 0x120);
    }
    (**(code **)(lVar19 + 0x908))
              (fStack0000000000000094,fStack0000000000000098,uStack0000000000000090,uVar57,
               in_stack_000000a0._4_4_ * fVar46 + fVar65,0,in_stack_000000a0._4_4_,
               in_stack_000000a0._4_4_);
    bVar10 = false;
  }
LAB_05cc3888:
  if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0))
  goto LAB_05cc446c;
  uVar36 = (uint)*(undefined8 *)(lVar30 + 0x18);
  if (uVar36 <= uVar13) goto LAB_05cc45e8;
  if ((*(byte *)(lVar30 + 0x20 + uVar39 * 0x178 + 0x16d) >> 1 & 1) == 0) {
    if (bVar6) {
      (**(code **)(*unaff_x19 + 0x918))();
    }
    bVar6 = false;
  }
  else {
    if ((((int)unaff_x19[0x6c] < (int)uVar13) || ((int)unaff_x19[0x6d] < (int)uVar33)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar30 + 0x20 + uVar39 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar6) {
LAB_05cc3a0c:
      if (uVar36 <= uVar13) goto LAB_05cc45e8;
      lVar30 = lVar30 + uVar39 * 0x178;
      in_stack_000001e0 = CONCAT44(in_stack_00001314,in_stack_00001310);
      auVar5._8_4_ = in_stack_00001318;
      auVar5._0_8_ = in_stack_000001e0;
      auVar5._12_4_ = in_stack_0000131c;
      lVar19 = 0x118;
      if ((bVar11 & 1) == 0) {
        lVar19 = 0xf4;
      }
      fVar55 = *(float *)(lVar30 + 0x180);
      fVar61 = *(float *)(lVar30 + 0x184);
      fVar63 = *(float *)(lVar30 + 0x188);
      uVar62 = *(undefined8 *)(lVar30 + 0x178);
      fVar66 = *(float *)(lVar30 + 0x120);
      fVar46 = *(float *)(lVar30 + 0x13c);
      fVar60 = *(float *)(lVar30 + 0x140);
      fVar67 = *(float *)(lVar30 + 0x148);
      fVar65 = *(float *)(lVar30 + lVar19 + 0x20);
      in_stack_000001e8 = auVar5._8_8_;
      in_stack_000001c8 = uVar62;
      fStack00000000000001d0 = fVar55;
      fStack00000000000001d4 = fVar61;
      in_stack_000001d8 = fVar63;
      in_stack_000001f0 = in_stack_00001320;
      uVar39 = FUN_05ce01c8(&stack0x000001e0,&stack0x000001c8,0);
      if ((uVar39 & 1) == 0) {
        if ((bVar11 & 1) == 0) {
          fVar46 = fVar66;
        }
        if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImageTags__
                    + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        fVar65 = fVar65 - in_stack_00001314;
        if (fVar65 <= fStack00000000000000e8) {
          fStack00000000000000e8 = fVar65;
        }
        if (fStack00000000000000d8 <= fVar46 + in_stack_00001318) {
          fStack00000000000000d8 = fVar46 + in_stack_00001318;
        }
        if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImageTags__
                    + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        fVar67 = fVar67 - in_stack_00001320;
        fVar60 = fVar60 + in_stack_0000131c;
        if (fVar67 <= in_stack_00000110._4_4_) {
          in_stack_00000110._4_4_ = fVar67;
        }
        if (in_stack_000000e0._4_4_ <= fVar60) {
          in_stack_000000e0._4_4_ = fVar60;
        }
      }
      else {
        if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImageTags__
                    + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        fStack00000000000000e8 = (fVar65 + (fStack00000000000000d8 - in_stack_00001318)) * 0.5;
        (**(code **)(*unaff_x19 + 0x918))();
        if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImageTags__
                    + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        if ((bVar11 & 1) == 0) {
          fVar46 = fVar66;
        }
        if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImageTags__
                    + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        in_stack_00000110._4_4_ = fVar67 - fVar63;
        fStack00000000000000d8 = fVar55 + fVar46;
        in_stack_00001310 = (undefined4)uVar62;
        in_stack_00001314 = (float)((ulong)uVar62 >> 0x20);
        in_stack_000000e0._4_4_ = fVar60 + fVar61;
        in_stack_00001318 = fVar55;
        in_stack_0000131c = fVar61;
        in_stack_00001320 = fVar63;
      }
      if (((*(int *)(in_stack_000001a8 + 7) != 1) && (uVar13 != uVar2)) &&
         (((int)uVar13 < (int)uVar3 && (bVar1)))) {
        bVar6 = true;
        goto LAB_05cc3c48;
      }
      (**(code **)(*unaff_x19 + 0x918))();
    }
    else {
      bVar6 = false;
      if ((((!bVar1) || ((int)uVar3 < (int)uVar13)) || ((uVar16 & 0xfffe) == 10)) || (uVar16 == 0xd)
         ) goto LAB_05cc3c48;
      if (uVar13 != uVar3) {
LAB_05cc398c:
        lVar19 = *plVar43;
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar19 = *plVar43;
        }
        if ((unaff_x19[0x74] != 0) && (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 != 0)) {
          uVar36 = (uint)*(undefined8 *)(lVar30 + 0x18);
          if (uVar13 < uVar36) {
            lVar31 = *(long *)(lVar19 + 0xb8);
            lVar19 = lVar30 + uVar39 * 0x178;
            fStack00000000000000d8 = *(float *)(lVar31 + 0x1728);
            in_stack_00001320 = *(float *)(lVar19 + 0x188);
            fStack00000000000000e8 = *(float *)(lVar31 + 0x1720);
            in_stack_000000e0._4_4_ = *(float *)(lVar31 + 0x172c);
            in_stack_00000110._4_4_ = *(float *)(lVar31 + 0x1724);
            in_stack_00001318 = (float)*(undefined8 *)(lVar19 + 0x180);
            in_stack_0000131c = (float)((ulong)*(undefined8 *)(lVar19 + 0x180) >> 0x20);
            in_stack_00001310 = (undefined4)*(undefined8 *)(lVar19 + 0x178);
            in_stack_00001314 = (float)((ulong)*(undefined8 *)(lVar19 + 0x178) >> 0x20);
            goto LAB_05cc3a0c;
          }
          goto LAB_05cc45e8;
        }
        goto LAB_05cc446c;
      }
      if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar21 = FUN_04f758f0(uVar16,0);
      if ((uVar21 & 1) == 0) goto LAB_05cc398c;
    }
    bVar6 = false;
  }
LAB_05cc3c48:
  iVar18 = *(int *)(in_stack_000001a8 + 7);
  uVar13 = uVar13 + 1;
  uVar36 = uVar33;
  if (iVar18 <= (int)uVar13) goto LAB_05cc4014;
  goto LAB_05cc1fd0;
LAB_05cc4014:
  lVar25 = unaff_x19[0x74];
  if (lVar25 != 0) {
    iVar17 = uVar33 + 1;
    plVar42 = (long *)PTR_DAT_06649d28;
LAB_05cc4038:
    lVar28 = *(long *)(lVar25 + 0x60);
    if (lVar28 != 0) {
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) {
LAB_05cc45e8:
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
      *(int *)(lVar28 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x50 + 0x28) = iVar15;
      *(int *)(lVar25 + 0x18) = iVar18;
      lVar28 = unaff_x19[0xd7];
      *(int *)(lVar25 + 0x2c) = iVar17;
      if (iVar18 < 1 || uStack00000000000000ec == 0) {
        uStack00000000000000ec = 1;
      }
      *(int *)(lVar25 + 0x1c) = (int)lVar28;
      *(uint *)(lVar25 + 0x24) = uStack00000000000000ec;
      *(int *)(lVar25 + 0x30) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
      if (((int)unaff_x19[0x6a] != 0xff) ||
         (uVar39 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar39 & 1) == 0)) {
LAB_05cc1a38:
        if (*(int *)(*(long *)PTR_DAT_06649b28 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_05cde0f8();
        return;
      }
      lVar25 = unaff_x19[0xde];
      if (lVar25 != 0) {
        (**(code **)(lVar25 + 0x18))
                  (*(undefined8 *)(lVar25 + 0x40),unaff_x19[0x74],*(undefined8 *)(lVar25 + 0x28));
      }
      if (*(int *)((long)unaff_x19 + 0x354) != 0) {
        if ((unaff_x19[0x74] == 0) || (lVar25 = *(long *)(unaff_x19[0x74] + 0x60), lVar25 == 0))
        goto LAB_05cc446c;
        if (*(int *)(*plVar42 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        if (*(int *)(lVar25 + 0x18) == 0) goto LAB_05cc45e8;
        FUN_05d29fd4(lVar25 + 0x20,1,0);
      }
      if (unaff_x19[0x7b] != 0) {
        FUN_05ebda30(unaff_x19[0x7b],0);
        if ((unaff_x19[0x74] != 0) && (lVar25 = *(long *)(unaff_x19[0x74] + 0x60), lVar25 != 0)) {
          if (*(int *)(lVar25 + 0x18) == 0) goto LAB_05cc45e8;
          if (unaff_x19[0x7b] != 0) {
            UnityEngine_TextCore_Text_TextGenerator_SpecialCharacter___ctor
                      (unaff_x19[0x7b],*(undefined8 *)(lVar25 + 0x30),0);
            if ((unaff_x19[0x74] != 0) && (lVar25 = *(long *)(unaff_x19[0x74] + 0x60), lVar25 != 0))
            {
              if (*(int *)(lVar25 + 0x18) == 0) goto LAB_05cc45e8;
              if (unaff_x19[0x7b] != 0) {
                FUN_05ebc96c(unaff_x19[0x7b],0,*(undefined8 *)(lVar25 + 0x48),0);
                if ((unaff_x19[0x74] != 0) &&
                   (lVar25 = *(long *)(unaff_x19[0x74] + 0x60), lVar25 != 0)) {
                  if (*(int *)(lVar25 + 0x18) == 0) goto LAB_05cc45e8;
                  if (unaff_x19[0x7b] != 0) {
                    FUN_05ebc06c(unaff_x19[0x7b],*(undefined8 *)(lVar25 + 0x50),0);
                    if ((unaff_x19[0x74] != 0) &&
                       (lVar25 = *(long *)(unaff_x19[0x74] + 0x60), lVar25 != 0)) {
                      if (*(int *)(lVar25 + 0x18) == 0) goto LAB_05cc45e8;
                      if (unaff_x19[0x7b] != 0) {
                        FUN_05ebc120(unaff_x19[0x7b],*(undefined8 *)(lVar25 + 0x58),0);
                        if (unaff_x19[0x7b] != 0) {
                          FUN_05ebd970(unaff_x19[0x7b],0);
                          lVar25 = unaff_x19[0x74];
                          if (lVar25 != 0) {
                            lVar30 = 0;
                            lVar28 = 0;
                            do {
                              uVar39 = lVar28 + 1;
                              if ((long)*(int *)(lVar25 + 0x34) <= (long)uVar39) goto LAB_05cc1a38;
                              lVar25 = *(long *)(lVar25 + 0x60);
                              if (lVar25 == 0) break;
                              if (*(int *)(*plVar42 + 0xe4) == 0) {
                                thunk_FUN_02dabd98();
                              }
                              if (*(uint *)(lVar25 + 0x18) <= uVar39) goto LAB_05cc45e8;
                              FUN_05d29eb0(lVar25 + lVar30 + 0x70,0);
                              lVar25 = unaff_x19[0xe4];
                              if (lVar25 == 0) break;
                              if (*(uint *)(lVar25 + 0x18) <= uVar39) goto LAB_05cc45e8;
                              uVar62 = *(undefined8 *)(lVar25 + lVar28 * 8 + 0x28);
                              if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
                                thunk_FUN_02dabd98();
                              }
                              uVar21 = FUN_05ee2f7c(uVar62,0,0);
                              if ((uVar21 & 1) == 0) {
                                if (*(int *)((long)unaff_x19 + 0x354) != 0) {
                                  if ((unaff_x19[0x74] == 0) ||
                                     (lVar25 = *(long *)(unaff_x19[0x74] + 0x60), lVar25 == 0))
                                  break;
                                  if (*(int *)(*plVar42 + 0xe4) == 0) {
                                    thunk_FUN_02dabd98();
                                  }
                                  if (*(uint *)(lVar25 + 0x18) <= uVar39) goto LAB_05cc45e8;
                                  FUN_05d29fd4(lVar25 + lVar30 + 0x70,1,0);
                                }
                                lVar25 = unaff_x19[0xe4];
                                if (lVar25 == 0) break;
                                if (*(uint *)(lVar25 + 0x18) <= uVar39) goto LAB_05cc45e8;
                                lVar25 = *(long *)(lVar25 + lVar28 * 8 + 0x28);
                                if (lVar25 == 0) break;
                                lVar25 = FUN_05d3308c(lVar25,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar19 = *(long *)(unaff_x19[0x74] + 0x60), lVar19 == 0)) break;
                                if (*(uint *)(lVar19 + 0x18) <= uVar39) goto LAB_05cc45e8;
                                if (lVar25 == 0) break;
                                UnityEngine_TextCore_Text_TextGenerator_SpecialCharacter___ctor
                                          (lVar25,*(undefined8 *)(lVar19 + lVar30 + 0x80),0);
                                lVar25 = unaff_x19[0xe4];
                                if (lVar25 == 0) break;
                                if (*(uint *)(lVar25 + 0x18) <= uVar39) goto LAB_05cc45e8;
                                lVar25 = *(long *)(lVar25 + lVar28 * 8 + 0x28);
                                if (lVar25 == 0) break;
                                lVar25 = FUN_05d3308c(lVar25,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar19 = *(long *)(unaff_x19[0x74] + 0x60), lVar19 == 0)) break;
                                if (*(uint *)(lVar19 + 0x18) <= uVar39) goto LAB_05cc45e8;
                                if (lVar25 == 0) break;
                                FUN_05ebc96c(lVar25,0,*(undefined8 *)(lVar19 + lVar30 + 0x98),0);
                                lVar25 = unaff_x19[0xe4];
                                if (lVar25 == 0) break;
                                if (*(uint *)(lVar25 + 0x18) <= uVar39) goto LAB_05cc45e8;
                                lVar25 = *(long *)(lVar25 + lVar28 * 8 + 0x28);
                                if (lVar25 == 0) break;
                                lVar25 = FUN_05d3308c(lVar25,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar19 = *(long *)(unaff_x19[0x74] + 0x60), lVar19 == 0)) break;
                                if (*(uint *)(lVar19 + 0x18) <= uVar39) goto LAB_05cc45e8;
                                if (lVar25 == 0) break;
                                FUN_05ebc06c(lVar25,*(undefined8 *)(lVar19 + lVar30 + 0xa0),0);
                                lVar25 = unaff_x19[0xe4];
                                if (lVar25 == 0) break;
                                if (*(uint *)(lVar25 + 0x18) <= uVar39) goto LAB_05cc45e8;
                                lVar25 = *(long *)(lVar25 + lVar28 * 8 + 0x28);
                                if (lVar25 == 0) break;
                                lVar25 = FUN_05d3308c(lVar25,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar19 = *(long *)(unaff_x19[0x74] + 0x60), lVar19 == 0)) break;
                                if (*(uint *)(lVar19 + 0x18) <= uVar39) goto LAB_05cc45e8;
                                if (lVar25 == 0) break;
                                FUN_05ebc120(lVar25,*(undefined8 *)(lVar19 + lVar30 + 0xa8),0);
                                lVar25 = unaff_x19[0xe4];
                                if (lVar25 == 0) break;
                                if (*(uint *)(lVar25 + 0x18) <= uVar39) goto LAB_05cc45e8;
                                lVar25 = *(long *)(lVar25 + lVar28 * 8 + 0x28);
                                if ((lVar25 == 0) || (lVar25 = FUN_05d3308c(lVar25,0), lVar25 == 0))
                                break;
                                FUN_05ebd970(lVar25,0);
                              }
                              lVar25 = unaff_x19[0x74];
                              lVar28 = lVar28 + 1;
                              lVar30 = lVar30 + 0x50;
                            } while (lVar25 != 0);
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
  goto LAB_05cc446c;
}


