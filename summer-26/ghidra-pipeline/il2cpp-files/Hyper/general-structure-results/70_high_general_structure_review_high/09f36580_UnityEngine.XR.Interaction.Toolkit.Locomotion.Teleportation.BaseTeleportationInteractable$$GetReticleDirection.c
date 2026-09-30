/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.BaseTeleportationInteractable$$GetReticleDirection
ENTRY_POINT: 09f36580
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4
*/


void UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable__GetReticleDirection
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  undefined1 uVar23;
  char cVar24;
  uint in_w8;
  long *plVar25;
  long lVar26;
  undefined8 *puVar27;
  code *pcVar28;
  uint uVar29;
  long lVar30;
  float *pfVar31;
  long lVar32;
  float *pfVar33;
  long *plVar34;
  long lVar35;
  long lVar36;
  long *unaff_x19;
  uint unaff_w20;
  ulong uVar37;
  int iVar38;
  uint unaff_w23;
  undefined8 *unaff_x24;
  int *piVar39;
  uint uVar40;
  ulong uVar41;
  uint uVar42;
  long *plVar43;
  long *plVar44;
  undefined2 uVar45;
  uint uVar46;
  long *unaff_x29;
  ushort uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined4 uVar52;
  float fVar53;
  float fVar54;
  undefined8 uVar55;
  float fVar57;
  undefined1 auVar56 [16];
  undefined8 uVar58;
  undefined1 auVar59 [16];
  float fVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float unaff_s12;
  float unaff_s13;
  float unaff_s15;
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
  float fStack0000000000000060;
  uint uStack0000000000000064;
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
  float fStack00000000000000c0;
  undefined8 in_stack_000000d0;
  float fStack00000000000000d8;
  undefined8 in_stack_000000e0;
  float in_stack_000000e8;
  int iStack00000000000000ec;
  float fStack0000000000000100;
  float in_stack_00000108;
  undefined8 in_stack_00000110;
  float in_stack_00000120;
  float fStack0000000000000124;
  float fStack000000000000013c;
  float fStack0000000000000140;
  float fStack0000000000000144;
  float fStack0000000000000148;
  float fStack000000000000014c;
  float fStack000000000000015c;
  float fStack000000000000017c;
  float fStack0000000000000180;
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
  undefined8 in_stack_00001328;
  char in_stack_00001334;
  float in_stack_00001338;
  uint in_stack_0000133c;
  
code_r0x09f36580:
  plVar44 = (long *)PTR_DAT_0ac7e998;
  if ((in_w8 & 1) != 0) goto LAB_09f36310;
  in_stack_00000078._4_4_ = 0.0;
joined_r0x09f36588:
  if (unaff_w20 != 0) {
    if (*(int *)(*(long *)PTR_DAT_0ac7e998 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_09f86a00();
  }
LAB_09f363ac:
  plVar44 = (long *)PTR_DAT_0ac7e998;
  if (*(int *)(*(long *)PTR_DAT_0ac7e998 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_09f86a00();
  *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
  fVar48 = unaff_s12;
LAB_09f33184:
  do {
    lVar26 = unaff_x19[0x91];
    in_stack_00001308 = in_stack_00001308 + 1;
    if (lVar26 == 0) goto LAB_09f39990;
    if ((int)*(uint *)(lVar26 + 0x18) <= (int)in_stack_00001308) {
LAB_09f36de0:
      if ((char)unaff_x19[0x4c] == '\0') {
LAB_09f36ea4:
        iVar14 = *(int *)((long)unaff_x19 + 0x26c);
        iVar17 = (int)unaff_x19[0x4e];
      }
      else {
        param_3 = *(float *)((long)unaff_x19 + 0x264);
        param_2 = ZEXT416((uint)DAT_01df4de8);
        if (param_3 - *(float *)(unaff_x19 + 0x4d) <= DAT_01df4de8) goto LAB_09f36ea4;
        fVar48 = *(float *)((long)unaff_x19 + 0x20c);
        fVar49 = *(float *)((long)unaff_x19 + 0x27c);
        param_2 = ZEXT416((uint)fVar49);
        iVar14 = *(int *)((long)unaff_x19 + 0x26c);
        iVar17 = (int)unaff_x19[0x4e];
        if ((fVar48 < fVar49) && (iVar14 < iVar17)) {
          if (*(float *)(unaff_x19 + 0x60) < *(float *)((long)unaff_x19 + 0x2fc) / 100.0) {
            *(undefined4 *)(unaff_x19 + 0x60) = 0;
          }
          fVar66 = DAT_01df4b78;
          *(float *)(unaff_x19 + 0x4d) = fVar48;
          fVar50 = (param_3 - fVar48) * 0.5;
          if (fVar50 <= fVar66) {
            fVar50 = fVar66;
          }
          fVar66 = (fVar48 + fVar50) * 20.0 + 0.5;
          fVar48 = DAT_01df4d78;
          if (fVar66 != INFINITY) {
            fVar48 = (float)(int)fVar66 / 20.0;
          }
          if (fVar49 <= fVar48) {
            fVar48 = fVar49;
          }
          goto LAB_09f36e9c;
        }
      }
      *(undefined1 *)((long)unaff_x19 + 0x274) = 1;
      if (iVar17 <= iVar14) {
        uVar18 = FUN_08d770a4((long)unaff_x19 + 0x26c,0);
        uVar19 = FUN_08d8d64c((long)unaff_x19 + 0x20c,0);
        uVar18 = FUN_08bda228(*(undefined8 *)PTR_DAT_0acd40a0,uVar18,*(undefined8 *)PTR_DAT_0acd4088
                              ,uVar19,0);
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_049a583c(*unaff_x29);
        }
        FUN_0a1374b0(uVar18,0);
      }
      if ((*(int *)(unaff_x24 + 7) == 0) ||
         ((*(int *)(unaff_x24 + 7) == 1 && (in_stack_0000133c == 3)))) {
        (**(code **)(*unaff_x19 + 0x958))();
        goto LAB_09f36f5c;
      }
      lVar26 = *plVar44;
      if (*(int *)(lVar26 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar26 = *plVar44;
      }
      plVar43 = (long *)PTR_DAT_0acd3fc0;
      lVar26 = **(long **)(lVar26 + 0xb8);
      if (lVar26 == 0) goto LAB_09f39990;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_09f39b0c;
      iVar14 = *(int *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x38 + 0x54) << 2;
      if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x60), lVar26 == 0))
      goto LAB_09f39990;
      if (*(int *)(*(long *)PTR_DAT_0acd3fc0 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      if (*(int *)(lVar26 + 0x18) == 0) goto LAB_09f39b0c;
      FUN_09f9f130(lVar26 + 0x20,0,0);
      fStack00000000000000c0 = (float)FUN_09032890(0);
      iVar17 = (int)unaff_x19[0x53];
      lVar26 = unaff_x19[0xee];
      fStack00000000000000b8 = param_3;
      if (iVar17 < 0x401) {
        if (iVar17 == 0x100) {
          if ((int)unaff_x19[0x62] == 5) {
            if (lVar26 == 0) goto LAB_09f39990;
            if ((*(uint *)(lVar26 + 0x18) & 0xfffffffe) == 0) goto LAB_09f39b0c;
            if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x58), lVar30 == 0))
            goto LAB_09f39990;
            if (*(uint *)(lVar30 + 0x18) <= in_stack_00000040._4_4_) goto LAB_09f39b0c;
            fVar48 = *(float *)(lVar30 + (long)(int)in_stack_00000040._4_4_ * 0x14 + 0x28);
          }
          else {
            if (lVar26 == 0) goto LAB_09f39990;
            if ((*(uint *)(lVar26 + 0x18) & 0xfffffffe) == 0) goto LAB_09f39b0c;
            fVar48 = *(float *)((long)unaff_x19 + 0x4cc);
          }
          fStack00000000000000b8 = *(float *)(lVar26 + 0x34);
          fStack000000000000002c = (0.0 - fVar48) - fStack0000000000000028;
          param_3 = *(float *)(lVar26 + 0x2c);
          fVar48 = *(float *)(lVar26 + 0x30);
LAB_09f37354:
          param_3 = in_stack_00000030 + 0.0 + param_3;
          fVar48 = fVar48 + fStack000000000000002c;
        }
        else {
          if (iVar17 != 0x200) {
            if (iVar17 != 0x400) goto LAB_09f37368;
            if ((int)unaff_x19[0x62] == 5) {
              if (lVar26 == 0) goto LAB_09f39990;
              if (*(int *)(lVar26 + 0x18) == 0) goto LAB_09f39b0c;
              if ((unaff_x19[0x74] == 0) ||
                 (lVar30 = *(long *)(unaff_x19[0x74] + 0x58), lVar30 == 0)) goto LAB_09f39990;
              if (*(uint *)(lVar30 + 0x18) <= in_stack_00000040._4_4_) goto LAB_09f39b0c;
              in_stack_00001338 =
                   *(float *)(lVar30 + (long)(int)in_stack_00000040._4_4_ * 0x14 + 0x30);
            }
            else {
              if (lVar26 == 0) goto LAB_09f39990;
              if (*(int *)(lVar26 + 0x18) == 0) goto LAB_09f39b0c;
            }
            fStack00000000000000b8 = *(float *)(lVar26 + 0x28);
            fStack000000000000002c = fStack000000000000002c + (0.0 - in_stack_00001338);
            param_3 = *(float *)(lVar26 + 0x20);
            fVar48 = *(float *)(lVar26 + 0x24);
            goto LAB_09f37354;
          }
          if ((int)unaff_x19[0x62] != 5) {
            if (lVar26 == 0) goto LAB_09f39990;
            if ((*(int *)(lVar26 + 0x18) != 1) && (*(int *)(lVar26 + 0x18) != 0)) {
              fVar48 = *(float *)((long)unaff_x19 + 0x4cc);
              goto LAB_09f37288;
            }
            goto LAB_09f39b0c;
          }
          if (lVar26 == 0) goto LAB_09f39990;
          if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0)) goto LAB_09f39b0c;
          if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x58), lVar30 == 0))
          goto LAB_09f39990;
          if (*(uint *)(lVar30 + 0x18) <= in_stack_00000040._4_4_) goto LAB_09f39b0c;
          lVar30 = lVar30 + (long)(int)in_stack_00000040._4_4_ * 0x14;
          fStack00000000000000b8 = (*(float *)(lVar26 + 0x28) + *(float *)(lVar26 + 0x34)) * 0.5;
          param_3 = in_stack_00000030 + 0.0 +
                    ((float)*(undefined8 *)(lVar26 + 0x20) + (float)*(undefined8 *)(lVar26 + 0x2c))
                    * 0.5;
          fVar48 = (0.0 - ((fStack0000000000000028 + *(float *)(lVar30 + 0x28) +
                           *(float *)(lVar30 + 0x30)) - fStack000000000000002c) * 0.5) +
                   ((float)((ulong)*(undefined8 *)(lVar26 + 0x20) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(lVar26 + 0x2c) >> 0x20)) * 0.5;
        }
        fStack00000000000000b8 = fStack00000000000000b8 + 0.0;
        param_2 = ZEXT416((uint)fVar48);
        fStack00000000000000c0 = param_3;
      }
      else if (iVar17 == 0x800) {
        if (lVar26 == 0) goto LAB_09f39990;
        if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0)) goto LAB_09f39b0c;
        param_3 = (*(float *)(lVar26 + 0x28) + *(float *)(lVar26 + 0x34)) * 0.5;
        fStack00000000000000c0 =
             ((float)*(undefined8 *)(lVar26 + 0x20) + (float)*(undefined8 *)(lVar26 + 0x2c)) * 0.5 +
             in_stack_00000030 + 0.0;
        fStack00000000000000b8 = param_3 + 0.0;
        param_2 = ZEXT416((uint)(((float)((ulong)*(undefined8 *)(lVar26 + 0x20) >> 0x20) +
                                 (float)((ulong)*(undefined8 *)(lVar26 + 0x2c) >> 0x20)) * 0.5 + 0.0
                                ));
      }
      else {
        if (iVar17 == 0x1000) {
          if (lVar26 == 0) goto LAB_09f39990;
          if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0)) goto LAB_09f39b0c;
          fVar48 = *(float *)((long)unaff_x19 + 0x4fc);
          in_stack_00001338 = *(float *)((long)unaff_x19 + 0x4f4);
LAB_09f37288:
          fStack0000000000000028 = fStack0000000000000028 + fVar48 + in_stack_00001338;
        }
        else {
          if (iVar17 != 0x2000) goto LAB_09f37368;
          if (lVar26 == 0) goto LAB_09f39990;
          if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0)) goto LAB_09f39b0c;
          fStack0000000000000028 = *(float *)(unaff_x19 + 0x9a) - fStack0000000000000028;
        }
        param_3 = in_stack_00000030 + 0.0;
        param_2._0_4_ =
             ((float)*(undefined8 *)(lVar26 + 0x24) + (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5 +
             (0.0 - (fStack0000000000000028 - fStack000000000000002c) * 0.5);
        param_2._4_4_ =
             ((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20) +
             (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)) * 0.5 + 0.0;
        param_2._8_8_ = 0;
        fStack00000000000000c0 =
             param_3 + (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
        fStack00000000000000b8 = param_2._4_4_;
      }
LAB_09f37368:
      auVar56 = param_2;
      in_stack_00000120 = (float)FUN_09032890(0);
      auVar59 = auVar56;
      FUN_09032890(0);
      lVar26 = FUN_09f44258();
      if (lVar26 == 0) goto LAB_09f39990;
      FUN_0a18c388(lVar26,0);
      *(float *)((long)unaff_x19 + 0x6fc) = auVar59._0_4_;
      uVar52 = FUN_04adfbbc(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
      FUN_04adfbbc(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
      if (*(int *)(*(long *)PTR_DAT_0acd3fc8 + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)PTR_DAT_0acd3fc8);
      }
      FUN_09f39b48(0);
      FUN_09f55580(&stack0x00001310,0x4000ffff,0);
      if (*(int *)(*plVar44 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      lVar26 = unaff_x19[0x74];
      if (lVar26 == 0) goto LAB_09f39990;
      iVar17 = *(int *)(unaff_x24 + 7);
      if (iVar17 < 1) {
        iStack00000000000000ec = 0;
        iVar16 = 0;
        goto LAB_09f3955c;
      }
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_09f39990;
      fStack0000000000000190 = auVar56._0_4_;
      fVar49 = 0.0;
      bVar4 = false;
      uVar15 = 0;
      uVar11 = 0;
      lVar30 = lVar26 + 0x20;
      fStack0000000000000140 = *(float *)(*(long *)(*plVar44 + 0xb8) + 0x1730);
      bVar6 = false;
      bVar5 = false;
      bVar8 = false;
      iStack00000000000000ec = 0;
      fStack0000000000000124 = fStack0000000000000190;
      in_stack_000001b0 = param_2._0_4_;
      fStack0000000000000050 = 0.0;
      uStack0000000000000064 = 0;
      in_stack_000000e0._4_4_ = in_stack_00000110._4_4_;
      fStack0000000000000068 = in_stack_00000110._4_4_;
      fStack000000000000013c = 0.0;
      in_stack_00000078._4_4_ = 0.0;
      fVar48 = 0.0;
      fStack000000000000005c = 0.0;
      in_stack_000000a0._4_4_ = 0.0;
      fStack00000000000000d8 = in_stack_000000e8;
      uStack000000000000006c = in_stack_000000d0._4_4_;
      fStack0000000000000070 = in_stack_000000e8;
      fStack0000000000000094 = in_stack_000000e8;
      fStack0000000000000098 = in_stack_00000110._4_4_;
      uStack0000000000000090 = in_stack_000000d0._4_4_;
      fStack0000000000000100 = param_3;
      uVar12 = 0;
      goto LAB_09f374f4;
    }
    if (*(uint *)(lVar26 + 0x18) <= in_stack_00001308) goto LAB_09f39b0c;
    uVar11 = *(uint *)(lVar26 + (long)(int)in_stack_00001308 * 0x10 + 0x24);
    if (uVar11 == 0) goto LAB_09f36de0;
    if (5 < (int)in_stack_000001b0) {
      uVar18 = FUN_08d9879c(&stack0x0000133c,0);
      uVar19 = FUN_08d770a4(&stack0x00001308,0);
      uVar18 = FUN_08bda228(*(undefined8 *)PTR_DAT_0acd4080,uVar18,*(undefined8 *)PTR_DAT_0acd4090,
                            uVar19,0);
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_049a583c(*unaff_x29);
      }
      FUN_0a137afc(uVar18,0);
      in_stack_00001328 = CONCAT44(3,*(undefined4 *)(unaff_x24 + 7));
    }
    in_stack_0000133c = uVar11;
  } while (uVar11 == 0x1a);
  if ((uVar11 == 0x3c) && (*(char *)((long)unaff_x19 + 0x33a) != '\0')) {
    *(undefined1 *)((long)unaff_x19 + 0x469) = 1;
    *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
    uVar20 = FUN_09f81260();
    if (((uVar20 & 1) != 0) &&
       (in_stack_00001308 = in_stack_0000126c, *(int *)((long)unaff_x19 + 0x65c) == 0))
    goto LAB_09f33184;
  }
  else {
    if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
    goto LAB_09f39990;
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x24 + 7)) goto LAB_09f39b0c;
    lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x24 + 7) * (long)(int)unaff_w23;
    *(undefined4 *)((long)unaff_x19 + 0x65c) = *(undefined4 *)(lVar26 + 0x20);
    *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar26 + 0x50);
    unaff_x19[0x20] = *(long *)(lVar26 + 0x40);
    thunk_FUN_049ee3d8(unaff_x19 + 0x20);
  }
  if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
  goto LAB_09f39990;
  uVar15 = *(uint *)(in_stack_000001a8 + 7);
  if (*(uint *)(lVar26 + 0x18) <= uVar15) goto LAB_09f39b0c;
  lVar30 = lVar26 + 0x20;
  uVar46 = (uint)in_stack_00001328;
  lVar35 = unaff_x19[0x24];
  cVar24 = *(char *)(lVar30 + (long)(int)uVar15 * (long)(int)unaff_w23 + 0x34);
  *(undefined1 *)((long)unaff_x19 + 0x469) = 0;
  uVar12 = uVar15;
  if (uVar46 == uVar15) {
    uVar11 = (uint)((ulong)in_stack_00001328 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
    if (uVar11 == 0x2026) {
      *(long *)(lVar30 + (long)(int)uVar15 * (long)(int)unaff_w23 + 0x10) = unaff_x19[0xcd];
      thunk_FUN_049ee3d8();
      if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
      goto LAB_09f39990;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_09f39b0c;
      lVar26 = lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
      *(long *)(lVar26 + 0x40) = unaff_x19[0xce];
      *(undefined4 *)(lVar26 + 0x20) = 0;
      thunk_FUN_049ee3d8();
      if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
      goto LAB_09f39990;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_09f39b0c;
      *(long *)(lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 + 0x48)
           = unaff_x19[0xcf];
      thunk_FUN_049ee3d8();
      if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
      goto LAB_09f39990;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_09f39b0c;
      *(int *)(lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 + 0x50) =
           (int)unaff_x19[0xd0];
      lVar26 = *plVar44;
      if (*(int *)(lVar26 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar26 = *plVar44;
      }
      lVar26 = **(long **)(lVar26 + 0xb8);
      if (lVar26 == 0) goto LAB_09f39990;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_09f39b0c;
      lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x38;
      *(int *)(lVar26 + 0x54) = *(int *)(lVar26 + 0x54) + 1;
      *(undefined1 *)(unaff_x19 + 0x65) = 1;
      in_stack_00001328 = CONCAT44(3,*(uint *)((long)unaff_x19 + 0x4a4) + 1);
      uVar12 = *(uint *)((long)unaff_x19 + 0x4a4);
    }
    else if (uVar11 == 3) {
      if ((unaff_x19[0x20] == 0) || (lVar21 = FUN_09f5d6c4(unaff_x19[0x20],0), lVar21 == 0))
      goto LAB_09f39990;
      uVar18 = FUN_087b75ec(lVar21,3,*(undefined8 *)PTR_DAT_0acd3f98);
      if (*(uint *)(lVar26 + 0x18) <= uVar15) goto LAB_09f39b0c;
      *(undefined8 *)(lVar30 + (long)(int)uVar15 * (long)(int)unaff_w23 + 0x10) = uVar18;
      thunk_FUN_049ee3d8();
      *(undefined1 *)(unaff_x19 + 0x65) = 1;
      uVar12 = *(uint *)((long)unaff_x19 + 0x4a4);
    }
  }
  unaff_x24 = in_stack_000001a8;
  in_stack_0000133c = uVar11;
  if (((int)uVar12 < *(int *)((long)unaff_x19 + 0x35c)) && (uVar11 != 3)) {
    if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
    goto LAB_09f39990;
    if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_09f39b0c;
    lVar26 = lVar26 + (long)(int)uVar12 * (long)(int)unaff_w23;
    *(undefined1 *)(lVar26 + 400) = 0;
    *(undefined2 *)(lVar26 + 0x24) = 0x200b;
    *(undefined4 *)(lVar26 + 0x5c) = 0;
    *(uint *)(in_stack_000001a8 + 7) = uVar12 + 1;
    goto LAB_09f33184;
  }
  fStack000000000000015c = 1.0;
  fVar49 = fStack000000000000015c;
  fStack000000000000015c = 1.0;
  if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
    uVar12 = *(uint *)((long)unaff_x19 + 0x284);
    if ((uVar12 >> 4 & 1) == 0) {
      if ((uVar12 >> 3 & 1) == 0) {
        if ((uVar12 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0x88) + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar20 = FUN_08cc9f9c(uVar11,0);
          if ((uVar20 & 1) != 0) {
            if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0x88) + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            uVar11 = FUN_08cca224(uVar11,0);
            fStack000000000000015c = fStack0000000000000024;
            goto LAB_09f32ddc;
          }
        }
      }
      else {
        if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0x88) + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar20 = FUN_08cc9efc(uVar11,0);
        if ((uVar20 & 1) != 0) {
          if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0x88) + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar11 = FUN_08cca39c(uVar11,0);
          fStack000000000000015c = fVar49;
          goto LAB_09f32ddc;
        }
      }
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0x88) + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar20 = FUN_08cc9f9c(uVar11,0);
      if ((uVar20 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0x88) + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar11 = FUN_08cca224(uVar11,0);
        fStack000000000000015c = fVar49;
LAB_09f32ddc:
        in_stack_0000133c = uVar11 & 0xffff;
      }
    }
  }
  if (unaff_x19[0x20] == 0) goto LAB_09f39990;
  memmove(&stack0x000012a0,(void *)(unaff_x19[0x20] + 0x28),0x60);
  if (*(int *)((long)unaff_x19 + 0x65c) == 1) {
    lVar26 = FUN_09f7a11c();
    if ((lVar26 == 0) || (lVar26 = *(long *)(lVar26 + 0x38), lVar26 == 0)) goto LAB_09f39990;
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_09f39b0c;
    plVar43 = *(long **)(lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23
                        + 0x30);
    if (plVar43 == (long *)0x0) goto LAB_09f33184;
    bVar9 = *(byte *)(*(long *)PTR_DAT_0acd3fe0 + 0x130);
    if ((*(byte *)(*plVar43 + 0x130) < bVar9) ||
       (*(long *)(*(long *)(*plVar43 + 200) + (ulong)bVar9 * 8 + -8) != *(long *)PTR_DAT_0acd3fe0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_0494850c(plVar43);
    }
    plVar25 = (long *)plVar43[3];
    if (plVar25 == (long *)0x0) {
      plVar25 = (long *)0x0;
      *_fStack00000000000000d8 = 0;
    }
    else {
      lVar26 = *(long *)PTR_DAT_0acd3fd8;
      bVar9 = *(byte *)(lVar26 + 0x130);
      if (*(byte *)(*plVar25 + 0x130) < bVar9) {
        plVar34 = (long *)0x0;
      }
      else {
        plVar34 = plVar25;
        if (*(long *)(*(long *)(*plVar25 + 200) + (ulong)bVar9 * 8 + -8) != lVar26) {
          plVar34 = (long *)0x0;
        }
      }
      *_fStack00000000000000d8 = (long)plVar34;
      if (*(byte *)(*plVar25 + 0x130) < bVar9) {
        plVar25 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar25 + 200) + (ulong)bVar9 * 8 + -8) != lVar26) {
        plVar25 = (long *)0x0;
      }
    }
    thunk_FUN_049ee3d8(_fStack00000000000000d8,plVar25);
    lVar26 = plVar43[5];
    *(int *)((long)unaff_x19 + 0x6bc) = (int)lVar26;
    if (in_stack_0000133c == 0x3c) {
      in_stack_0000133c = (int)lVar26 + 0xe000;
    }
    else {
      lVar26 = *plVar44;
      if (*(int *)(lVar26 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar26 = *plVar44;
      }
      *(undefined4 *)((long)unaff_x19 + 0x1d4) = *(undefined4 *)(*(long *)(lVar26 + 0xb8) + 0x68);
    }
    fVar66 = *_fStack0000000000000070;
    fVar48 = (float)FUN_0a218f88(&stack0x000012a0,0);
    fVar49 = (float)FUN_0a218f90(&stack0x000012a0,0);
    if (*_fStack00000000000000d8 == 0) goto LAB_09f39990;
    fVar49 = in_stack_00000120 * (fVar66 / fVar48) * fVar49;
    memmove(&stack0x00001200,(void *)(*_fStack00000000000000d8 + 0x28),0x60);
    fVar48 = (float)FUN_0a218f88(&stack0x00001200,0);
    fVar66 = *_fStack0000000000000070;
    if (fVar48 <= 0.0) {
      fVar48 = (float)FUN_0a218f88(&stack0x000012a0,0);
      fVar50 = (float)FUN_0a218f90(&stack0x000012a0,0);
      fVar51 = (float)FUN_0a218fb8(&stack0x000012a0,0);
      if (plVar43[4] == 0) goto LAB_09f39990;
      FUN_0a21944c(&stack0x00001340,plVar43[4],0);
      fVar67 = (float)UnityEngine_UIElements_UxmlIntAttributeDescription_<>c___ctor
                                (&stack0x000011e0,0);
      if (plVar43[4] == 0) goto LAB_09f39990;
      fVar53 = *(float *)((long)plVar43 + 0x2c);
      fVar66 = in_stack_00000120 * (fVar66 / fVar48) * fVar50;
      fVar48 = (float)FUN_0a219488(plVar43[4],0);
      fVar48 = fVar66 * (fVar51 / fVar67) * fVar53 * fVar48;
      fStack0000000000000144 = 0.0;
      if (fVar48 != 0.0) {
        fStack0000000000000144 = fVar66 / fVar48;
      }
      fStack0000000000000148 = (float)FUN_0a218fb8(&stack0x000012a0,0);
      fStack0000000000000148 = fStack0000000000000148 * fStack0000000000000144;
      fVar66 = (float)FUN_0a218fe0(&stack0x000012a0,0);
      fVar50 = *(float *)((long)unaff_x19 + 0x43c);
      fStack000000000000017c = (float)FUN_0a218f90(&stack0x000012a0,0);
      fStack000000000000017c = fVar49 * fVar66 * fVar50 * fStack000000000000017c;
      fVar49 = (float)FUN_0a218fe8(&stack0x000012a0,0);
      fStack0000000000000144 = fStack0000000000000144 * fVar49;
    }
    else {
      fVar48 = (float)FUN_0a218f88(&stack0x00001200,0);
      fVar50 = (float)FUN_0a218f90(&stack0x00001200,0);
      if (plVar43[4] == 0) goto LAB_09f39990;
      fVar67 = *(float *)((long)plVar43 + 0x2c);
      fVar51 = (float)FUN_0a219488(plVar43[4],0);
      fVar48 = in_stack_00000120 * (fVar66 / fVar48) * fVar50 * fVar67 * fVar51;
      fStack0000000000000148 = (float)FUN_0a218fb8(&stack0x00001200,0);
      fVar66 = (float)FUN_0a218fe0(&stack0x00001200,0);
      fVar50 = *(float *)((long)unaff_x19 + 0x43c);
      fStack000000000000017c = (float)FUN_0a218f90(&stack0x00001200,0);
      fStack000000000000017c = fVar49 * fVar66 * fVar50 * fStack000000000000017c;
      fStack0000000000000144 = (float)FUN_0a218fe8(&stack0x00001200,0);
    }
    unaff_x19[0xcc] = (long)plVar43;
    thunk_FUN_049ee3d8(_fStack0000000000000100,plVar43);
    if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
    goto LAB_09f39990;
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_09f39b0c;
    lVar26 = lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
    *(long *)(lVar26 + 0x40) = unaff_x19[0x20];
    *(undefined4 *)(lVar26 + 0x20) = 1;
    *(float *)(lVar26 + 0x15c) = fVar48;
    thunk_FUN_049ee3d8();
    lVar26 = unaff_x19[0x74];
    if ((lVar26 == 0) || (lVar30 = *(long *)(lVar26 + 0x38), lVar30 == 0)) goto LAB_09f39990;
    if (*(uint *)(lVar30 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_09f39b0c;
    unaff_s13 = 0.0;
    *(int *)(lVar30 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 + 0x50) =
         (int)unaff_x19[0x24];
    *(int *)(unaff_x19 + 0x24) = (int)lVar35;
LAB_09f33520:
    unaff_s12 = 0.0;
    if (in_stack_0000133c != 3 && in_stack_0000133c != 0xad) {
      unaff_s12 = fVar48;
    }
  }
  else {
    lVar26 = unaff_x19[0x74];
    if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
      if ((lVar26 == 0) || (lVar26 = *(long *)(lVar26 + 0x38), lVar26 == 0)) goto LAB_09f39990;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_09f39b0c;
      *_fStack0000000000000100 =
           *(long *)(lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 +
                    0x30);
      thunk_FUN_049ee3d8(_fStack0000000000000100);
      if (*_fStack0000000000000100 == 0) goto LAB_09f33184;
      if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
      goto LAB_09f39990;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_09f39b0c;
      unaff_x19[0x20] =
           *(long *)(lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 +
                    0x40);
      thunk_FUN_049ee3d8(unaff_x19 + 0x20);
      if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
      goto LAB_09f39990;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_09f39b0c;
      unaff_x19[0x23] =
           *(long *)(lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 +
                    0x48);
      thunk_FUN_049ee3d8(unaff_x19 + 0x23);
      if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
      goto LAB_09f39990;
      uVar12 = *(uint *)(in_stack_000001a8 + 7);
      uVar11 = *(uint *)(lVar26 + 0x18);
      if (uVar11 <= uVar12) goto LAB_09f39b0c;
      *(undefined4 *)(unaff_x19 + 0x24) =
           *(undefined4 *)(lVar26 + 0x20 + (long)(int)uVar12 * (long)(int)unaff_w23 + 0x30);
      pfVar33 = _fStack0000000000000070;
      if (uVar46 == uVar15) {
        lVar30 = unaff_x19[0x91];
        if (lVar30 == 0) goto LAB_09f39990;
        if (*(uint *)(lVar30 + 0x18) <= in_stack_00001308) goto LAB_09f39b0c;
        if ((*(int *)(lVar30 + (long)(int)in_stack_00001308 * 0x10 + 0x24) == 10) &&
           (uVar12 != *(uint *)(unaff_x19 + 0x95))) {
          if (uVar11 <= uVar12 - 1) goto LAB_09f39b0c;
          pfVar33 = (float *)(lVar26 + 0x20 + (long)(int)(uVar12 - 1) * (long)(int)unaff_w23 + 0x38)
          ;
        }
      }
      fVar50 = *pfVar33;
      fVar49 = (float)FUN_0a218f88(&stack0x000012a0,0);
      fVar66 = (float)FUN_0a218f90(&stack0x000012a0,0);
      if (uVar46 == uVar15) {
        fStack0000000000000144 = 0.0;
        fStack0000000000000148 = 0.0;
        if (in_stack_0000133c != 0x2026) goto LAB_09f3306c;
      }
      else {
LAB_09f3306c:
        fStack0000000000000148 = (float)FUN_0a218fb8(&stack0x000012a0,0);
        fStack0000000000000144 = (float)FUN_0a218fe8(&stack0x000012a0,0);
      }
      lVar26 = unaff_x19[0xcc];
      if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_09f39990;
      fVar67 = *(float *)((long)unaff_x19 + 0x43c);
      fVar53 = *(float *)(lVar26 + 0x2c);
      fVar48 = (float)FUN_0a219488(*(long *)(lVar26 + 0x20),0);
      fVar51 = (float)FUN_0a218fe0(&stack0x000012a0,0);
      fVar54 = *(float *)((long)unaff_x19 + 0x43c);
      fStack000000000000017c = (float)FUN_0a218f90(&stack0x000012a0,0);
      lVar26 = unaff_x19[0x74];
      if ((lVar26 == 0) || (lVar30 = *(long *)(lVar26 + 0x38), lVar30 == 0)) goto LAB_09f39990;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_09f39b0c;
      lVar30 = lVar30 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
      *(undefined4 *)(lVar30 + 0x20) = 0;
      fVar49 = in_stack_00000120 * ((fStack000000000000015c * fVar50) / fVar49) * fVar66;
      fVar48 = fVar49 * fVar67 * fVar53 * fVar48;
      fStack000000000000017c = fVar49 * fVar51 * fVar54 * fStack000000000000017c;
      *(float *)(lVar30 + 0x15c) = fVar48;
      uVar11 = *(uint *)(unaff_x19 + 0x24);
      if (uVar11 != 0) {
        unaff_s15 = 1.0;
        lVar30 = unaff_x19[0xe4];
        if (lVar30 != 0) {
          if (uVar11 < *(uint *)(lVar30 + 0x18)) {
            lVar30 = *(long *)(lVar30 + (long)(int)uVar11 * 8 + 0x20);
            if (lVar30 != 0) {
              unaff_s13 = *(float *)(lVar30 + 0x54);
              goto LAB_09f33520;
            }
            goto LAB_09f39990;
          }
          goto LAB_09f39b0c;
        }
        goto LAB_09f39990;
      }
      unaff_s15 = 1.0;
      unaff_s13 = *(float *)(unaff_x19 + 0xc6);
      goto LAB_09f33520;
    }
    unaff_s12 = 0.0;
    if (in_stack_0000133c != 3 && in_stack_0000133c != 0xad) {
      unaff_s12 = fVar48;
    }
    fStack000000000000017c = 0.0;
    fStack0000000000000148 = 0.0;
    fStack0000000000000144 = 0.0;
    if (lVar26 == 0) goto LAB_09f39990;
  }
  lVar26 = *(long *)(lVar26 + 0x38);
  if (lVar26 == 0) goto LAB_09f39990;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_09f39b0c;
  lVar26 = lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
  *(short *)(lVar26 + 0x24) = (short)in_stack_0000133c;
  *(int *)(lVar26 + 0x58) = (int)unaff_x19[0x42];
  *(int *)(lVar26 + 0x160) = (int)unaff_x19[0xa0];
  if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
  goto LAB_09f39990;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_09f39b0c;
  *(int *)(lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 + 0x164) =
       (int)unaff_x19[0x2b];
  if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
  goto LAB_09f39990;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_09f39b0c;
  *(undefined4 *)
   (lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 + 0x16c) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
  goto LAB_09f39990;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_09f39b0c;
  lVar26 = lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
  auVar56 = *in_stack_000000a8;
  *(undefined4 *)(lVar26 + 0x188) = *(undefined4 *)in_stack_000000a8[1];
  *(long *)(lVar26 + 0x180) = auVar56._8_8_;
  *(long *)(lVar26 + 0x178) = auVar56._0_8_;
  if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
  goto LAB_09f39990;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_09f39b0c;
  lVar26 = lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
  lVar30 = *(long *)(lVar26 + 0x38);
  *(undefined4 *)(lVar26 + 0x18c) = *(undefined4 *)((long)unaff_x19 + 0x284);
  if (lVar30 == 0) {
    if ((*_fStack0000000000000100 == 0) ||
       (lVar26 = *(long *)(*_fStack0000000000000100 + 0x20), lVar26 == 0)) goto LAB_09f39990;
    FUN_0a21944c(&stack0x00001340,lVar26,0);
  }
  else {
    FUN_0a21944c(&stack0x000005c0,lVar30,0);
  }
  if (in_stack_0000133c >> 0x10 == 0) {
    if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0x88) + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar11 = FUN_08cc7930(in_stack_0000133c,0);
    uVar11 = uVar11 & 1;
  }
  else {
    uVar11 = 0;
  }
  fVar49 = *(float *)(unaff_x19 + 0x5a);
  if (((in_stack_000000a0 & 0x100000000) != 0) && (*(int *)((long)unaff_x19 + 0x65c) == 0)) {
    if (*_fStack0000000000000100 == 0) goto LAB_09f39990;
    iVar14 = *(int *)(in_stack_000001a8 + 7);
    uVar12 = *(uint *)(*_fStack0000000000000100 + 0x28);
    if (iVar14 < (int)uStack0000000000000054) {
      if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
      goto LAB_09f39990;
      uVar13 = iVar14 + 1;
      if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_09f39b0c;
      if (*(int *)(lVar26 + 0x20 + (long)(int)uVar13 * (long)(int)unaff_w23) == 0) {
        lVar26 = *(long *)(lVar26 + 0x20 + (long)(int)uVar13 * (long)(int)unaff_w23 + 0x10);
        if ((((lVar26 == 0) || (unaff_x19[0x20] == 0)) ||
            (lVar30 = *(long *)(unaff_x19[0x20] + 0x178), lVar30 == 0)) ||
           (lVar30 = *(long *)(lVar30 + 0x40), lVar30 == 0)) goto LAB_09f39990;
        uVar20 = FUN_087a51d4(lVar30,uVar12 | *(int *)(lVar26 + 0x28) << 0x10,&stack0x000011b0,
                              *(undefined8 *)PTR_DAT_0acd3f80);
        if ((uVar20 & 1) != 0) {
          FUN_0a21db3c(&stack0x00001340,&stack0x000011b0,0);
          FUN_0a21d990(&stack0x00001190,0);
          uVar20 = FUN_0a21db78(&stack0x000011b0,0);
          if ((uVar20 & 0x100) != 0) {
            fVar49 = 0.0;
          }
        }
      }
      iVar14 = *(int *)(in_stack_000001a8 + 7);
    }
    if (0 < iVar14) {
      if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
      goto LAB_09f39990;
      if (*(uint *)(lVar26 + 0x18) <= iVar14 - 1U) goto LAB_09f39b0c;
      lVar26 = *(long *)(lVar26 + (ulong)(iVar14 - 1U) * (ulong)unaff_w23 + 0x30);
      if (lVar26 == 0) goto LAB_09f39990;
      uVar13 = *(uint *)(lVar26 + 0x28);
      lVar26 = FUN_09f7a11c();
      if ((lVar26 == 0) || (lVar26 = *(long *)(lVar26 + 0x38), lVar26 == 0)) goto LAB_09f39990;
      if (*(uint *)(lVar26 + 0x18) <= *(int *)(in_stack_000001a8 + 7) - 1U) goto LAB_09f39b0c;
      if (*(int *)(lVar26 + (long)(int)(*(int *)(in_stack_000001a8 + 7) - 1U) * (long)(int)unaff_w23
                  + 0x20) == 0) {
        if (((unaff_x19[0x20] == 0) || (lVar26 = *(long *)(unaff_x19[0x20] + 0x178), lVar26 == 0))
           || (lVar26 = *(long *)(lVar26 + 0x40), lVar26 == 0)) goto LAB_09f39990;
        uVar20 = FUN_087a51d4(lVar26,uVar13 | uVar12 << 0x10,&stack0x000011b0,
                              *(undefined8 *)PTR_DAT_0acd3f80);
        if ((uVar20 & 1) != 0) {
          FUN_0a21db64(&stack0x00001340,&stack0x000011b0,0);
          FUN_0a21d990(&stack0x00001190,0);
          FUN_0a21d7f0(0);
          uVar20 = FUN_0a21db78(&stack0x000011b0,0);
          if ((uVar20 & 0x100) != 0) {
            fVar49 = 0.0;
          }
        }
      }
    }
  }
  if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
  goto LAB_09f39990;
  uVar12 = *(uint *)(in_stack_000001a8 + 7);
  uVar52 = FUN_0a21d7cc(&stack0x00001270,0);
  if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_09f39b0c;
  *(undefined4 *)(lVar26 + (long)(int)uVar12 * (long)(int)unaff_w23 + 0x154) = uVar52;
  if (*(int *)(*(long *)PTR_DAT_0acd4000 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar20 = FUN_09fabbf0(in_stack_0000133c,0);
  uVar12 = *(uint *)(in_stack_000001a8 + 7);
  uVar37 = (ulong)uVar12;
  if ((uVar20 & 1) == 0) {
    if (0 < (int)uVar12) {
      if ((((_fStack0000000000000068 & 0x100000000) == 0) ||
          (uVar13 = *(uint *)((long)unaff_x19 + 0x32c), uVar13 == 0x80000000)) ||
         (uVar13 != uVar12 - 1)) {
        if ((_fStack0000000000000048 & 0x100000000) == 0) {
          bVar8 = false;
        }
        else {
          lVar26 = uVar37 * unaff_w23 + 0x144;
          uVar41 = uVar37;
          do {
            uVar41 = uVar41 - 1;
            iVar14 = (int)uVar37;
            uVar12 = iVar14 - 1;
            uVar37 = (ulong)uVar12;
            if ((iVar14 < 1) || (uVar41 == *(uint *)((long)unaff_x19 + 0x32c))) {
              bVar8 = false;
              goto LAB_09f33c40;
            }
            if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0))
            goto LAB_09f39990;
            if (*(uint *)(lVar30 + 0x18) <= uVar41) goto LAB_09f39b0c;
            lVar30 = *(long *)(lVar30 + lVar26 + -0x28c);
            if ((lVar30 == 0) || (lVar30 = *(long *)(lVar30 + 0x20), lVar30 == 0))
            goto LAB_09f39990;
            uVar13 = FUN_0a21943c(lVar30,0);
            if ((*_fStack0000000000000100 == 0) ||
               (((unaff_x19[0x20] == 0 || (lVar30 = *(long *)(unaff_x19[0x20] + 0x178), lVar30 == 0)
                 ) || (lVar30 = *(long *)(lVar30 + 0x50), lVar30 == 0)))) goto LAB_09f39990;
            uVar22 = FUN_087b2794(lVar30,uVar13 | *(int *)(*_fStack0000000000000100 + 0x28) << 0x10,
                                  &stack0x00001160,*(undefined8 *)PTR_DAT_0acd3f90);
            lVar26 = lVar26 + -0x178;
          } while ((uVar22 & 1) == 0);
          if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0))
          goto LAB_09f39990;
          if (*(uint *)(lVar30 + 0x18) <= uVar12) goto LAB_09f39b0c;
          FUN_0a21d7b4(((*(float *)(lVar30 + lVar26 + -0xc) - *(float *)(unaff_x19 + 0xcb)) /
                        unaff_s12 + in_stack_00001164) - in_stack_00001170,in_stack_00001164,
                       in_stack_00001170,&stack0x00001270,0);
          FUN_0a21d7c4(&stack0x00001270,0);
          fVar49 = 0.0;
          bVar8 = true;
        }
LAB_09f33c40:
        if ((_fStack0000000000000068 & 0x100000000) != 0) {
          uVar12 = *(uint *)((long)unaff_x19 + 0x32c);
          if (uVar12 == 0x80000000) {
            bVar8 = true;
          }
          if (!bVar8) {
            if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
            goto LAB_09f39990;
            if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_09f39b0c;
            lVar26 = *(long *)(lVar26 + (long)(int)uVar12 * (long)(int)unaff_w23 + 0x30);
            if ((lVar26 == 0) || (lVar26 = *(long *)(lVar26 + 0x20), lVar26 == 0))
            goto LAB_09f39990;
            uVar12 = FUN_0a21943c(lVar26,0);
            if ((*_fStack0000000000000100 == 0) ||
               (((unaff_x19[0x20] == 0 || (lVar26 = *(long *)(unaff_x19[0x20] + 0x178), lVar26 == 0)
                 ) || (lVar26 = *(long *)(lVar26 + 0x48), lVar26 == 0)))) goto LAB_09f39990;
            uVar37 = System_Array_EmptyInternalEnumerator<MetadataBuilder_ClassLayoutRow>__Dispose
                               (lVar26,uVar12 | *(int *)(*_fStack0000000000000100 + 0x28) << 0x10,
                                &stack0x00001148,*(undefined8 *)PTR_DAT_0acd3f88);
            if ((uVar37 & 1) != 0) {
              if ((unaff_x19[0x74] != 0) &&
                 (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 != 0)) {
                if (*(uint *)((long)unaff_x19 + 0x32c) < *(uint *)(lVar26 + 0x18)) {
                  FUN_0a21d7b4((in_stack_0000114c +
                               (*(float *)(lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x32c) *
                                                    (long)(int)unaff_w23 + 0x138) -
                               *(float *)(unaff_x19 + 0xcb)) / unaff_s12) - in_stack_00001158,
                               in_stack_0000114c,in_stack_00001158,&stack0x00001270,0);
                  goto LAB_09f33d38;
                }
                goto LAB_09f39b0c;
              }
              goto LAB_09f39990;
            }
          }
        }
      }
      else {
        if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
        goto LAB_09f39990;
        if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_09f39b0c;
        lVar26 = *(long *)(lVar26 + (long)(int)uVar13 * (long)(int)unaff_w23 + 0x30);
        if ((lVar26 == 0) || (lVar26 = *(long *)(lVar26 + 0x20), lVar26 == 0)) goto LAB_09f39990;
        uVar12 = FUN_0a21943c(lVar26,0);
        if ((*_fStack0000000000000100 == 0) ||
           (((unaff_x19[0x20] == 0 || (lVar26 = *(long *)(unaff_x19[0x20] + 0x178), lVar26 == 0)) ||
            (lVar26 = *(long *)(lVar26 + 0x48), lVar26 == 0)))) goto LAB_09f39990;
        uVar37 = System_Array_EmptyInternalEnumerator<MetadataBuilder_ClassLayoutRow>__Dispose
                           (lVar26,uVar12 | *(int *)(*_fStack0000000000000100 + 0x28) << 0x10,
                            &stack0x00001178,*(undefined8 *)PTR_DAT_0acd3f88);
        if ((uVar37 & 1) != 0) {
          if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
          goto LAB_09f39990;
          if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x32c)) goto LAB_09f39b0c;
          FUN_0a21d7b4((in_stack_0000117c +
                       (*(float *)(lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x32c) *
                                            (long)(int)unaff_w23 + 0x138) -
                       *(float *)(unaff_x19 + 0xcb)) / unaff_s12) - in_stack_00001188,
                       in_stack_0000117c,in_stack_00001188,&stack0x00001270,0);
LAB_09f33d38:
          FUN_0a21d7c4(&stack0x00001270,0);
          fVar49 = 0.0;
        }
      }
    }
  }
  else {
    *(uint *)((long)unaff_x19 + 0x32c) = uVar12;
  }
  fVar66 = (float)FUN_0a21d7bc(&stack0x00001270,0);
  fVar50 = (float)FUN_0a21d7bc(&stack0x00001270,0);
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar67 = *(float *)(unaff_x19 + 0xcb);
    fVar51 = (float)FUN_0a219294(&stack0x00001280,0);
    fVar67 = fVar67 - unaff_s12 * fVar51 * (unaff_s15 - *(float *)(unaff_x19 + 0x60));
    *(float *)(unaff_x19 + 0xcb) = fVar67;
    if ((uVar11 != 0) || (in_stack_0000133c == 0x200b)) {
      *(float *)(unaff_x19 + 0xcb) = fVar67 - in_stack_00000108 * *(float *)(unaff_x19 + 0x5c);
    }
  }
  fVar67 = *(float *)(unaff_x19 + 0x5b);
  fVar51 = 0.0;
  if (fVar67 != 0.0) {
    if (((*(char *)((long)unaff_x19 + 0x2dc) == '\0') || (0x3a < in_stack_0000133c)) ||
       (fVar51 = 0.25, (1L << ((ulong)in_stack_0000133c & 0x3f) & 0x400500000000000U) == 0)) {
      fVar51 = 0.5;
    }
    fVar53 = (float)FUN_0a219274(&stack0x00001280,0);
    fVar54 = (float)UnityEngine_UIElements_UxmlIntAttributeDescription_<>c__<GetValueFromBag>b__3_0
                              (&stack0x00001280,0);
    fVar51 = (unaff_s15 - *(float *)(unaff_x19 + 0x60)) *
             (fVar67 * fVar51 - unaff_s12 * (fVar53 * 0.5 + fVar54));
    *(float *)(unaff_x19 + 0xcb) = fVar51 + *(float *)(unaff_x19 + 0xcb);
  }
  if (((cVar24 == '\0') && (*(int *)((long)unaff_x19 + 0x65c) == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x284) & 1) != 0)) {
    lVar26 = unaff_x19[0x23];
    if (*(int *)(*(long *)PTR_DAT_0ac09788 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar37 = FUN_0a17b398(lVar26,0,0);
    fVar54 = 0.0;
    if ((uVar37 & 1) != 0) {
      lVar26 = unaff_x19[0x23];
      if (*(int *)(*(long *)PTR_DAT_0acd3fb0 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      plVar44 = (long *)PTR_DAT_0acd3fb0;
      if (lVar26 == 0) goto LAB_09f39990;
      uVar37 = FUN_0a14a8fc(lVar26,*(undefined4 *)
                                    (*(long *)(*(long *)PTR_DAT_0acd3fb0 + 0xb8) + 0x6c),0);
      if ((uVar37 & 1) != 0) {
        lVar26 = unaff_x19[0x23];
        if (*(int *)(*plVar44 + 0xe4) == 0) {
          thunk_FUN_049a583c();
          plVar44 = (long *)PTR_DAT_0acd3fb0;
        }
        if (lVar26 == 0) goto LAB_09f39990;
        fVar67 = (float)thunk_FUN_0a14c958(lVar26,*(undefined4 *)(*(long *)(*plVar44 + 0xb8) + 0x6c)
                                           ,0);
        if ((unaff_x19[0x20] == 0) || (unaff_x19[0x23] == 0)) goto LAB_09f39990;
        fVar53 = *(float *)(unaff_x19[0x20] + 0x1a8);
        fVar54 = (float)thunk_FUN_0a14c958(unaff_x19[0x23],
                                           *(undefined4 *)
                                            (*(long *)(*(long *)PTR_DAT_0acd3fb0 + 0xb8) + 0xe4),0);
        fVar54 = fVar54 * fVar67 * fVar53 * 0.25;
        if (fVar67 < unaff_s13 + fVar54) {
          unaff_s13 = fVar67 - fVar54;
        }
      }
    }
    if (unaff_x19[0x20] == 0) goto LAB_09f39990;
    fVar67 = *(float *)(unaff_x19[0x20] + 0x1ac);
  }
  else {
    lVar26 = unaff_x19[0x23];
    if (*(int *)(*(long *)PTR_DAT_0ac09788 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar37 = FUN_0a17b398(lVar26,0,0);
    fVar67 = 0.0;
    if ((uVar37 & 1) != 0) {
      lVar26 = unaff_x19[0x23];
      if (*(int *)(*(long *)PTR_DAT_0acd3fb0 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      plVar44 = (long *)PTR_DAT_0acd3fb0;
      if (lVar26 == 0) goto LAB_09f39990;
      uVar37 = FUN_0a14a8fc(lVar26,*(undefined4 *)
                                    (*(long *)(*(long *)PTR_DAT_0acd3fb0 + 0xb8) + 0x6c),0);
      if ((uVar37 & 1) != 0) {
        lVar26 = unaff_x19[0x23];
        if (*(int *)(*plVar44 + 0xe4) == 0) {
          thunk_FUN_049a583c();
          plVar44 = (long *)PTR_DAT_0acd3fb0;
        }
        if (lVar26 == 0) goto LAB_09f39990;
        uVar37 = FUN_0a14a8fc(lVar26,*(undefined4 *)(*(long *)(*plVar44 + 0xb8) + 0xe4),0);
        if ((uVar37 & 1) != 0) {
          lVar26 = unaff_x19[0x23];
          if (*(int *)(*plVar44 + 0xe4) == 0) {
            thunk_FUN_049a583c();
            plVar44 = (long *)PTR_DAT_0acd3fb0;
          }
          if (lVar26 != 0) {
            fVar53 = (float)thunk_FUN_0a14c958(lVar26,*(undefined4 *)
                                                       (*(long *)(*plVar44 + 0xb8) + 0x6c),0);
            if ((unaff_x19[0x20] != 0) && (unaff_x19[0x23] != 0)) {
              fVar63 = *(float *)(unaff_x19[0x20] + 0x1a0);
              fVar54 = (float)thunk_FUN_0a14c958(unaff_x19[0x23],
                                                 *(undefined4 *)
                                                  (*(long *)(*(long *)PTR_DAT_0acd3fb0 + 0xb8) +
                                                  0xe4),0);
              fVar54 = fVar54 * fVar53 * fVar63 * 0.25;
              if (fVar53 < unaff_s13 + fVar54) {
                unaff_s13 = fVar53 - fVar54;
              }
              goto LAB_09f340fc;
            }
          }
          goto LAB_09f39990;
        }
      }
    }
    fVar54 = 0.0;
  }
LAB_09f340fc:
  fVar64 = *(float *)(unaff_x19 + 0xcb);
  fVar53 = (float)UnityEngine_UIElements_UxmlIntAttributeDescription_<>c__<GetValueFromBag>b__3_0
                            (&stack0x00001280,0);
  fVar68 = *(float *)((long)unaff_x19 + 0x47c);
  fVar63 = (float)FUN_0a21d7ac(&stack0x00001270,0);
  fVar64 = fVar64 + (unaff_s15 - *(float *)(unaff_x19 + 0x60)) *
                    unaff_s12 * (fVar63 + ((fVar53 * fVar68 - unaff_s13) - fVar54));
  fVar53 = (float)FUN_0a21928c(&stack0x00001280,0);
  fVar63 = (float)FUN_0a21d7bc(&stack0x00001270,0);
  fStack0000000000000180 =
       *(float *)((long)unaff_x19 + 0x634) +
       ((fStack000000000000017c + unaff_s12 * (unaff_s13 + fVar53 + fVar63)) -
       *(float *)((long)unaff_x19 + 0x4ec));
  fVar53 = (float)UnityEngine_UIElements_UxmlIntAttributeDescription_<>c___ctor(&stack0x00001280,0);
  fVar53 = fStack0000000000000180 - unaff_s12 * (unaff_s13 + unaff_s13 + fVar53);
  fVar63 = (float)FUN_0a219274(&stack0x00001280,0);
  fVar63 = fVar64 + (unaff_s15 - *(float *)(unaff_x19 + 0x60)) *
                    unaff_s12 *
                    (fVar54 + fVar54 +
                    unaff_s13 + unaff_s13 + fVar63 * *(float *)((long)unaff_x19 + 0x47c));
  fVar68 = fVar64;
  fVar65 = fVar63;
  if (((*(int *)((long)unaff_x19 + 0x65c) == 0) && (cVar24 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x284) >> 1 & 1) != 0)) {
    if (unaff_x19[0x20] == 0) goto LAB_09f39990;
    lVar26 = unaff_x19[0xc1];
    fVar68 = (float)FUN_0a218fc0(unaff_x19[0x20] + 0x28,0);
    if (unaff_x19[0x20] == 0) goto LAB_09f39990;
    fVar57 = (float)FUN_0a218fe0(unaff_x19[0x20] + 0x28,0);
    if (unaff_x19[0x20] == 0) goto LAB_09f39990;
    fVar69 = *(float *)((long)unaff_x19 + 0x43c);
    fVar70 = *(float *)((long)unaff_x19 + 0x634);
    fVar65 = (float)(int)lVar26 * fStack0000000000000058;
    fVar60 = (float)FUN_0a218f90(unaff_x19[0x20] + 0x28,0);
    fVar60 = fVar60 * fVar69 * (fVar68 - (fVar57 + fVar70)) * 0.5;
    fVar68 = (float)FUN_0a21928c(&stack0x00001280,0);
    fVar70 = fVar65 * unaff_s12 * ((fVar54 + unaff_s13 + fVar68) - fVar60);
    fVar57 = (float)FUN_0a21928c(&stack0x00001280,0);
    fVar69 = (float)UnityEngine_UIElements_UxmlIntAttributeDescription_<>c___ctor
                              (&stack0x00001280,0);
    fStack0000000000000180 = fStack0000000000000180 + 0.0;
    unaff_s15 = 1.0;
    fVar53 = fVar53 + 0.0;
    fVar68 = fVar64 + fVar70;
    fVar65 = fVar65 * unaff_s12 * ((((fVar57 - fVar69) - unaff_s13) - fVar54) - fVar60);
    fVar64 = fVar64 + fVar65;
    fVar65 = fVar63 + fVar65;
    fVar63 = fVar63 + fVar70;
  }
  uVar19 = *in_stack_000001a8;
  uVar18 = in_stack_000001a8[1];
  if (DAT_0b31f57b == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0f100);
    DAT_0b31f57b = '\x01';
  }
  uVar55 = **(undefined8 **)(*(long *)PTR_DAT_0ac0f100 + 0xb8);
  uVar58 = (*(undefined8 **)(*(long *)PTR_DAT_0ac0f100 + 0xb8))[1];
  if (DAT_01df4eec <
      (float)((ulong)uVar18 >> 0x20) * (float)((ulong)uVar58 >> 0x20) +
      (float)uVar18 * (float)uVar58 +
      (float)uVar19 * (float)uVar55 +
      (float)((ulong)uVar19 >> 0x20) * (float)((ulong)uVar55 >> 0x20)) {
    fVar57 = 0.0;
    auVar59._4_12_ = SUB1612(ZEXT816(0),4);
    auVar59._0_4_ = fVar53;
    uVar19 = auVar59._0_8_;
    uVar37 = (ulong)(uint)fStack0000000000000180;
    uVar18 = uVar19;
  }
  else {
    FUN_0a1685dc(&stack0x00001340,*(undefined4 *)((long)unaff_x19 + 0x46c),(int)unaff_x19[0x8e],
                 *(undefined4 *)((long)unaff_x19 + 0x474),(int)unaff_x19[0x8f],0);
    fVar65 = (fVar63 + fVar64) * 0.5;
    fVar60 = (fVar53 + fStack0000000000000180) * 0.5;
    fVar63 = 0.0;
    auVar56 = ZEXT416((uint)(fStack0000000000000180 - fVar60));
    fVar68 = (float)FUN_0a1684dc(&stack0x00001100,0);
    fVar68 = fVar65 + fVar68;
    fVar69 = 0.0;
    uVar37 = CONCAT44(fVar63 + 0.0,fVar60 + auVar56._0_4_);
    auVar56 = ZEXT416((uint)(fVar53 - fVar60));
    fVar64 = (float)FUN_0a1684dc(&stack0x00001100,0);
    fVar64 = fVar65 + fVar64;
    fVar57 = 0.0;
    uVar19 = CONCAT44(fVar69 + 0.0,fVar60 + auVar56._0_4_);
    auVar56 = ZEXT416((uint)(fStack0000000000000180 - fVar60));
    fVar63 = (float)FUN_0a1684dc(&stack0x00001100,0);
    fVar63 = fVar65 + fVar63;
    fVar69 = 0.0;
    fStack0000000000000180 = fVar60 + auVar56._0_4_;
    fVar57 = fVar57 + 0.0;
    auVar56 = ZEXT416((uint)(fVar53 - fVar60));
    unaff_s15 = 1.0;
    fVar53 = (float)FUN_0a1684dc(&stack0x00001100,0);
    fVar65 = fVar65 + fVar53;
    uVar18 = CONCAT44(fVar69 + 0.0,fVar60 + auVar56._0_4_);
  }
  if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
  goto LAB_09f39990;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_09f39b0c;
  lVar26 = lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
  *(float *)(lVar26 + 0x114) = fVar64;
  *(undefined8 *)(lVar26 + 0x118) = uVar19;
  if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
  goto LAB_09f39990;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_09f39b0c;
  lVar26 = lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
  *(float *)(lVar26 + 0x108) = fVar68;
  *(ulong *)(lVar26 + 0x10c) = uVar37;
  if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
  goto LAB_09f39990;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_09f39b0c;
  lVar26 = lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
  *(float *)(lVar26 + 0x120) = fVar63;
  *(ulong *)(lVar26 + 0x124) = CONCAT44(fVar57,fStack0000000000000180);
  if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
  goto LAB_09f39990;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_09f39b0c;
  lVar26 = lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23;
  *(float *)(lVar26 + 300) = fVar65;
  *(undefined8 *)(lVar26 + 0x130) = uVar18;
  if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
  goto LAB_09f39990;
  uVar12 = *(uint *)((long)unaff_x19 + 0x4a4);
  fVar68 = *(float *)(unaff_x19 + 0xcb);
  fVar53 = (float)FUN_0a21d7ac(&stack0x00001270,0);
  if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_09f39b0c;
  *(float *)(lVar26 + (long)(int)uVar12 * (long)(int)unaff_w23 + 0x138) =
       fVar68 + unaff_s12 * fVar53;
  if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
  goto LAB_09f39990;
  uVar12 = *(uint *)((long)unaff_x19 + 0x4a4);
  fVar68 = *(float *)((long)unaff_x19 + 0x4ec);
  fVar65 = *(float *)((long)unaff_x19 + 0x634);
  fVar53 = (float)FUN_0a21d7bc(&stack0x00001270,0);
  if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_09f39b0c;
  *(float *)(lVar26 + (long)(int)uVar12 * (long)(int)unaff_w23 + 0x144) =
       (fStack000000000000017c - fVar68) + fVar65 + unaff_s12 * fVar53;
  if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
  goto LAB_09f39990;
  uVar12 = *(uint *)(in_stack_000001a8 + 7);
  if (*(uint *)(lVar26 + 0x18) <= uVar12) goto LAB_09f39b0c;
  lVar26 = lVar26 + 0x20;
  *(float *)(lVar26 + (long)(int)uVar12 * (long)(int)unaff_w23 + 0x138) =
       (fVar63 - fVar64) / ((float)uVar37 - (float)uVar19);
  fVar66 = unaff_s12 * (fStack0000000000000148 + fVar66);
  if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
    fVar66 = fVar66 / fStack000000000000015c;
    fVar50 = (unaff_s12 * (fStack0000000000000144 + fVar50)) / fStack000000000000015c;
  }
  else {
    fVar50 = unaff_s12 * (fStack0000000000000144 + fVar50);
  }
  fVar53 = *(float *)((long)unaff_x19 + 0x634);
  uVar13 = *(uint *)(unaff_x19 + 0x95);
  if ((uVar11 == 0) || (uVar12 == uVar13)) {
    fVar66 = fVar66 + fVar53;
    fVar50 = fVar50 + fVar53;
    fVar63 = fVar66;
    fVar68 = fVar50;
    if (fVar53 != 0.0) {
      fVar63 = (fVar66 - fVar53) / *(float *)((long)unaff_x19 + 0x43c);
      fVar68 = (fVar50 - fVar53) / *(float *)((long)unaff_x19 + 0x43c);
      if (fVar63 <= fVar66) {
        fVar63 = fVar66;
      }
      if (fVar50 <= fVar68) {
        fVar68 = fVar50;
      }
    }
    lVar26 = lVar26 + (long)(int)uVar12 * (long)(int)unaff_w23;
    fVar53 = fVar63;
    if (fVar63 <= *(float *)((long)unaff_x19 + 0x4dc)) {
      fVar53 = *(float *)((long)unaff_x19 + 0x4dc);
    }
    fVar65 = fVar68;
    if (*(float *)(unaff_x19 + 0x9c) <= fVar68) {
      fVar65 = *(float *)(unaff_x19 + 0x9c);
    }
    *(float *)((long)unaff_x19 + 0x4dc) = fVar53;
    *(float *)(unaff_x19 + 0x9c) = fVar65;
    *(float *)(lVar26 + 300) = fVar63;
    *(float *)(lVar26 + 0x130) = fVar68;
    fVar63 = *(float *)((long)unaff_x19 + 0x4ec);
    *(float *)(lVar26 + 0x120) = fVar66 - fVar63;
    *(float *)((long)unaff_x19 + 0x4d4) = fVar66 - fVar63;
    *(float *)(lVar26 + 0x128) = fVar50 - fVar63;
    *(float *)(unaff_x19 + 0x9b) = fVar50 - fVar63;
    if (((int)unaff_x19[0x97] == 0) || (*(char *)((long)unaff_x19 + 0x374) != '\0')) {
      *(float *)((long)unaff_x19 + 0x4cc) = fVar53;
      if (unaff_x19[0x20] == 0) goto LAB_09f39990;
      fVar50 = *(float *)(unaff_x19 + 0x9a);
      fVar53 = (float)FUN_0a218fc0(unaff_x19[0x20] + 0x28,0);
      fStack000000000000015c = (unaff_s12 * fVar53) / fStack000000000000015c;
      if (fVar50 <= fStack000000000000015c) {
        fVar50 = fStack000000000000015c;
      }
      fVar63 = *(float *)((long)unaff_x19 + 0x4ec);
      *(float *)(unaff_x19 + 0x9a) = fVar50;
    }
    if (fVar63 == 0.0) {
      fVar50 = *(float *)(unaff_x19 + 0x99);
      if (*(float *)(unaff_x19 + 0x99) <= fVar66) {
        fVar50 = fVar66;
      }
      *(float *)(unaff_x19 + 0x99) = fVar50;
    }
  }
  else {
    lVar26 = lVar26 + (long)(int)uVar12 * (long)(int)unaff_w23;
    uVar18 = in_stack_000001a8[0xe];
    *(undefined8 *)(lVar26 + 300) = uVar18;
    fVar63 = *(float *)((long)unaff_x19 + 0x4ec);
    fVar66 = (float)uVar18 - fVar63;
    fVar50 = (float)((ulong)uVar18 >> 0x20) - fVar63;
    *(float *)(lVar26 + 0x120) = fVar66;
    *(float *)(lVar26 + 0x128) = fVar50;
    in_stack_000001a8[0xd] = CONCAT44(fVar50,fVar66);
  }
  lVar26 = unaff_x19[0x74];
  if ((lVar26 == 0) || (lVar30 = *(long *)(lVar26 + 0x38), lVar30 == 0)) goto LAB_09f39990;
  uVar29 = *(uint *)(in_stack_000001a8 + 7);
  if (*(uint *)(lVar30 + 0x18) <= uVar29) goto LAB_09f39b0c;
  lVar30 = lVar30 + (long)(int)uVar29 * (long)(int)unaff_w23;
  *(undefined1 *)(lVar30 + 400) = 0;
  uVar42 = *(uint *)(unaff_x19 + 0x54);
  if ((((in_stack_0000133c == 9) ||
       ((in_stack_0000133c == 0x200b || uVar11 != 0 &&
        ((*(uint *)((long)unaff_x19 + 0x304) & 0xfffffffe) == 2)))) ||
      ((uVar11 == 0 &&
       (((in_stack_0000133c != 3 && (in_stack_0000133c != 0x200b)) && (in_stack_0000133c != 0xad))))
      )) || ((in_stack_0000133c == 0xad && ((uint)fStack000000000000005c & 1) == 0 ||
             (*(int *)((long)unaff_x19 + 0x65c) == 1)))) {
    *(undefined1 *)(lVar30 + 400) = 1;
    pfVar31 = _fStack0000000000000098;
    pfVar33 = _fStack00000000000000b8;
    if (uVar46 == uVar15) {
      lVar26 = *(long *)(lVar26 + 0x50);
      if (lVar26 == 0) goto LAB_09f39990;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_09f39b0c;
      lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
      pfVar33 = (float *)(lVar26 + 100);
      pfVar31 = (float *)(lVar26 + 0x68);
    }
    fVar53 = *pfVar33;
    fVar63 = *pfVar31;
    fVar66 = *(float *)(unaff_x19 + 0x73);
    fVar50 = 0.0;
    fVar68 = *(float *)(unaff_x19 + 0xcb);
    fStack000000000000014c = (in_stack_000000b0 - fVar53) - fVar63;
    bVar8 = true;
    if ((fVar66 <= fStack000000000000014c) && (bVar8 = false, !NAN(fVar66))) {
      bVar8 = fVar66 == -1.0;
    }
    if (!bVar8) {
      fStack000000000000014c = fVar66;
    }
    fVar66 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar66 = (float)FUN_0a219294(&stack0x00001280,0);
    }
    fVar64 = *(float *)((long)unaff_x19 + 0x4ec);
    fVar65 = *(float *)(unaff_x19 + 0x60);
    param_3 = fVar48;
    if (in_stack_0000133c != 0xad) {
      param_3 = unaff_s12;
    }
    if ((0.0 < fVar64) && ((char)unaff_x19[0x5e] == '\0')) {
      fVar50 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
    }
    iVar14 = *(int *)(in_stack_000001a8 + 7);
    param_2 = ZEXT416((uint)fVar54);
    fVar50 = (*(float *)((long)unaff_x19 + 0x4cc) - (*(float *)(unaff_x19 + 0x9c) - fVar64)) +
             fVar50;
    if (in_stack_000000e0._4_4_ < fVar50) {
      if (*(int *)((long)unaff_x19 + 0x314) == -1) {
        *(int *)((long)unaff_x19 + 0x314) = iVar14;
      }
      plVar44 = (long *)PTR_DAT_0ac7e998;
      fVar48 = DAT_01df4b78;
      if ((char)unaff_x19[0x4c] != '\0') {
        if (0.0 < fVar64) {
          fVar54 = *(float *)((long)unaff_x19 + 0x2f4);
          if ((fVar54 < *(float *)(unaff_x19 + 0x5d)) &&
             (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
            fVar48 = *(float *)(unaff_x19 + 0x5d) +
                     ((in_stack_00000018._4_4_ - fVar50) / (float)(int)unaff_x19[0x97]) /
                     fStack0000000000000050;
            if (fVar48 <= fVar54) {
              fVar48 = fVar54;
            }
            goto 
            UnityEngine_XR_Interaction_Toolkit_Locomotion_Movement_ContinuousMoveProvider__set_moveSpeed
            ;
          }
        }
        fVar50 = *(float *)((long)unaff_x19 + 0x20c);
        fVar54 = *(float *)(unaff_x19 + 0x4f);
        if ((fVar54 < fVar50) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
          *(float *)((long)unaff_x19 + 0x264) = fVar50;
          fVar49 = (fVar50 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
          if (fVar49 <= fVar48) {
            fVar49 = fVar48;
          }
          fVar49 = (fVar50 - fVar49) * 20.0 + 0.5;
          fVar48 = DAT_01df4d78;
          if (fVar49 != INFINITY) {
            fVar48 = (float)(int)fVar49 / 20.0;
          }
          if (fVar48 <= fVar54) {
            fVar48 = fVar54;
          }
          *(float *)((long)unaff_x19 + 0x20c) = fVar48;
          return;
        }
      }
      iVar17 = (int)unaff_x19[0x62];
      if (iVar17 < 5) {
        if (iVar17 == 1) {
          lVar26 = *(long *)PTR_DAT_0ac7e998;
          if (*(int *)(lVar26 + 0xe4) == 0) {
            thunk_FUN_049a583c();
            lVar26 = *plVar44;
          }
          lVar30 = *(long *)(lVar26 + 0xb8);
          if (*(int *)(lVar30 + 0x1708) != 0) {
            if (*(int *)(lVar26 + 0xe4) == 0) {
              thunk_FUN_049a583c();
              lVar30 = *(long *)(*plVar44 + 0xb8);
            }
            FUN_076742e0(&stack0x00001340,lVar30 + 0x1338,*(undefined8 *)PTR_DAT_0acd4020);
            memcpy(&stack0x00000d48,&stack0x00001340,0x3b8);
LAB_09f351bc:
            iVar14 = FUN_09f8665c();
            in_stack_00001308 = iVar14 - 1;
            in_stack_000001b0 = (float)((int)in_stack_000001b0 + 1);
            uVar29 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
            *(uint *)((long)unaff_x19 + 0x4a4) = uVar29;
            uVar52 = 0x2026;
            goto LAB_09f351e8;
          }
LAB_09f351f0:
          in_stack_000001a8[7] = 0;
          fVar48 = unaff_s12;
          in_stack_00001308 = 0xffffffff;
          in_stack_00001328 = DAT_01da5248;
          goto LAB_09f33184;
        }
        if (iVar17 != 3) goto LAB_09f34b7c;
        if (*(int *)(*(long *)PTR_DAT_0ac7e998 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
LAB_09f34e28:
        in_stack_00001308 = FUN_09f8665c();
      }
      else {
        if (iVar17 == 5) {
          if (((int)in_stack_00001308 < 0) || (iVar14 == 0)) {
            *(undefined4 *)(in_stack_000001a8 + 7) = 0;
            in_stack_00001308 = 0xffffffff;
            plVar44 = (long *)PTR_DAT_0ac7e998;
            fVar48 = unaff_s12;
            in_stack_00001328 = DAT_01da5248;
          }
          else {
            param_2 = ZEXT416((uint)in_stack_000000e0._4_4_);
            if (in_stack_000000e0._4_4_ <
                *(float *)(in_stack_000001a8 + 0xe) - *(float *)(unaff_x19 + 0x9c)) {
              if (*(int *)(*(long *)PTR_DAT_0ac7e998 + 0xe4) == 0) {
                thunk_FUN_049a583c();
              }
              goto LAB_09f34e28;
            }
            if (*(int *)(*(long *)PTR_DAT_0ac7e998 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            plVar44 = (long *)PTR_DAT_0ac7e998;
            in_stack_00001308 = FUN_09f8665c();
            *(undefined4 *)(unaff_x19 + 0x95) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
            lVar26 = *plVar44;
            *(undefined1 *)((long)unaff_x19 + 0x374) = 1;
            uVar18 = *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x1730);
            *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
            *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
            *(float *)(unaff_x19 + 0xcb) = *(float *)((long)unaff_x19 + 0x444) + 0.0;
            uVar18 = NEON_rev64(uVar18,4);
            param_2 = ZEXT816(0);
            *(int *)(unaff_x19 + 0x97) = (int)unaff_x19[0x97] + 1;
            iVar14 = *(int *)((long)unaff_x19 + 0x4c4);
            in_stack_000001a8[0xe] = uVar18;
            unaff_x19[0x99] = 0;
            *(int *)((long)unaff_x19 + 0x4c4) = iVar14 + 1;
            fVar48 = unaff_s12;
          }
          goto LAB_09f33184;
        }
        if (iVar17 != 6) goto LAB_09f34b7c;
        if (*(int *)(*(long *)PTR_DAT_0ac7e998 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        in_stack_00001308 = FUN_09f8665c();
        lVar26 = unaff_x19[99];
        if (*(int *)(*(long *)PTR_DAT_0ac09788 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar20 = FUN_0a17b398(lVar26,0,0);
        if ((uVar20 & 1) != 0) {
          plVar44 = (long *)unaff_x19[99];
          uVar18 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar44 == (long *)0x0) goto LAB_09f39990;
          (**(code **)(*plVar44 + 0x558))(plVar44,uVar18,*(undefined8 *)(*plVar44 + 0x560));
          lVar26 = unaff_x19[99];
          if (lVar26 == 0) goto LAB_09f39990;
          *(int *)(lVar26 + 0x438) = (int)unaff_x19[0x87];
          FUN_09f79f28(lVar26,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
          plVar44 = (long *)unaff_x19[99];
          if (plVar44 == (long *)0x0) goto LAB_09f39990;
          (**(code **)(*plVar44 + 0x7d8))(plVar44,0,0,*(undefined8 *)(*plVar44 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x65) = 1;
        }
      }
      plVar44 = (long *)PTR_DAT_0ac7e998;
      fVar48 = unaff_s12;
      in_stack_00001328 = CONCAT44(3,iVar14);
      goto LAB_09f33184;
    }
LAB_09f34b7c:
    plVar44 = (long *)PTR_DAT_0ac7e998;
    if ((uVar20 & 1) != 0) {
      fVar48 = unaff_s15;
      if ((uVar42 & 0x18) != 0) {
        fVar48 = DAT_01df51e8;
      }
      fVar66 = ABS(fVar68) + fVar66 * (unaff_s15 - fVar65) * param_3;
      if (fVar66 <= fVar48 * fStack000000000000014c) goto joined_r0x09f34c68;
      if (((*(int *)((long)unaff_x19 + 0x304) == 0) || (*(int *)((long)unaff_x19 + 0x304) == 3)) ||
         (iVar14 == (int)unaff_x19[0x95])) {
        if (((char)unaff_x19[0x4c] != '\0') &&
           (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
          param_3 = 100.0;
          fVar50 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
          if (fVar65 < fVar50) {
            fVar49 = fVar66;
            if (0.0 < fVar65) {
              fVar49 = fVar66 / (1.0 - fVar65);
            }
            fVar65 = fVar65 + (fVar66 - fVar48 * (fStack000000000000014c + DAT_01df4be8)) / fVar49;
            goto LAB_09f39ac0;
          }
          fVar50 = *(float *)((long)unaff_x19 + 0x20c);
          fVar54 = *(float *)(unaff_x19 + 0x4f);
          param_2 = ZEXT416((uint)fVar54);
          if (fVar50 <= fVar54) goto LAB_09f34c14;
LAB_09f39a28:
          fVar48 = DAT_01df4b78;
          *(float *)((long)unaff_x19 + 0x264) = fVar50;
          fVar49 = (fVar50 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
          if (fVar49 <= fVar48) {
            fVar49 = fVar48;
          }
          fVar49 = (fVar50 - fVar49) * 20.0 + 0.5;
          fVar48 = DAT_01df4d78;
          if (fVar49 != INFINITY) {
            fVar48 = (float)(int)fVar49 / 20.0;
          }
          if (fVar48 <= fVar54) {
            fVar48 = fVar54;
          }
LAB_09f36e9c:
          *(float *)((long)unaff_x19 + 0x20c) = fVar48;
          return;
        }
LAB_09f34c14:
        iVar17 = (int)unaff_x19[0x62];
        if (iVar17 == 1) {
          lVar26 = *(long *)PTR_DAT_0ac7e998;
          if (*(int *)(lVar26 + 0xe4) == 0) {
            thunk_FUN_049a583c();
            lVar26 = *plVar44;
          }
          lVar30 = *(long *)(lVar26 + 0xb8);
          if (*(int *)(lVar30 + 0x1708) == 0) goto LAB_09f351f0;
          if (*(int *)(lVar26 + 0xe4) == 0) {
            thunk_FUN_049a583c();
            lVar30 = *(long *)(*plVar44 + 0xb8);
          }
          FUN_076742e0(&stack0x00001340,lVar30 + 0x1338,*(undefined8 *)PTR_DAT_0acd4020);
          memcpy(&stack0x000005d8,&stack0x00001340,0x3b8);
          goto LAB_09f351bc;
        }
        if (iVar17 != 6) {
          if (iVar17 == 3) {
            if (*(int *)(*(long *)PTR_DAT_0ac7e998 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            goto LAB_09f34e28;
          }
          goto joined_r0x09f34c68;
        }
        if (*(int *)(*(long *)PTR_DAT_0ac7e998 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        in_stack_00001308 = FUN_09f8665c();
        lVar26 = unaff_x19[99];
        if (*(int *)(*(long *)PTR_DAT_0ac09788 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar20 = FUN_0a17b398(lVar26,0,0);
        if ((uVar20 & 1) != 0) {
          plVar43 = (long *)unaff_x19[99];
          uVar18 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar43 == (long *)0x0) goto LAB_09f39990;
          (**(code **)(*plVar43 + 0x558))(plVar43,uVar18,*(undefined8 *)(*plVar43 + 0x560));
          lVar26 = unaff_x19[99];
          if (lVar26 == 0) goto LAB_09f39990;
          *(int *)(lVar26 + 0x438) = (int)unaff_x19[0x87];
          FUN_09f79f28(lVar26,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
          plVar43 = (long *)unaff_x19[99];
          if (plVar43 == (long *)0x0) goto LAB_09f39990;
          (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x65) = 1;
        }
        uVar29 = *(uint *)(in_stack_000001a8 + 7);
        goto LAB_09f35138;
      }
      if (*(int *)(*(long *)PTR_DAT_0ac7e998 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      in_stack_00001308 = FUN_09f8665c();
      if (*(float *)((long)unaff_x19 + 0x2ec) == DAT_01df4540) {
        lVar26 = unaff_x19[0x74];
        if ((lVar26 == 0) || (lVar30 = *(long *)(lVar26 + 0x38), lVar30 == 0)) goto LAB_09f39990;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_09f39b0c;
        fVar50 = *(float *)((long)unaff_x19 + 0x4ec);
        fVar54 = 0.0;
        if ((0.0 < fVar50) && ((char)unaff_x19[0x5e] == '\0')) {
          fVar54 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
        }
        fVar54 = in_stack_00000108 * *(float *)((long)unaff_x19 + 0x2e4) +
                 *(float *)(lVar30 + (long)(int)*(uint *)(in_stack_000001a8 + 7) *
                                     (long)(int)unaff_w23 + 0x14c) +
                 (fVar54 - *(float *)(unaff_x19 + 0x9c)) +
                 fStack0000000000000050 * (fStack0000000000000048 + *(float *)(unaff_x19 + 0x5d));
      }
      else {
        lVar26 = unaff_x19[0x74];
        *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        if (lVar26 == 0) goto LAB_09f39990;
        fVar54 = *(float *)((long)unaff_x19 + 0x2ec) +
                 in_stack_00000108 * *(float *)((long)unaff_x19 + 0x2e4);
        fVar50 = *(float *)((long)unaff_x19 + 0x4ec);
      }
      puVar7 = PTR_DAT_0ac7e998;
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_09f39990;
      uVar29 = *(uint *)((long)unaff_x19 + 0x4a4);
      if ((*(uint *)(lVar26 + 0x18) <= uVar29) ||
         (uVar40 = uVar29 - 1, *(uint *)(lVar26 + 0x18) <= uVar40)) goto LAB_09f39b0c;
      param_3 = *(float *)((long)unaff_x19 + 0x4cc);
      lVar26 = lVar26 + 0x20;
      fVar68 = *(float *)(lVar26 + (long)(int)uVar29 * (long)(int)unaff_w23 + 0x130);
      param_2 = ZEXT416((uint)fVar68);
      fVar68 = (fVar54 + param_3 + fVar50) - fVar68;
      if ((*(short *)(lVar26 + (long)(int)uVar40 * (long)(int)unaff_w23 + 4) == 0xad &&
           ((uint)fStack000000000000005c & 1) == 0) &&
         (((int)unaff_x19[0x62] == 0 || (fVar68 < in_stack_000000e0._4_4_)))) {
        fStack000000000000005c = 0.0;
        in_stack_00001308 = in_stack_00001308 - 1;
        in_stack_00001328 = CONCAT44(0x2d,uVar40);
        *(uint *)(in_stack_000001a8 + 7) = uVar40;
        plVar44 = (long *)PTR_DAT_0ac7e998;
        fVar48 = unaff_s12;
        goto LAB_09f33184;
      }
      if (*(short *)(lVar26 + (long)(int)uVar29 * (long)(int)unaff_w23 + 4) == 0xad) {
        fStack000000000000005c = 1.4013e-45;
        plVar44 = (long *)PTR_DAT_0ac7e998;
        fVar48 = unaff_s12;
        goto LAB_09f33184;
      }
      if ((char)unaff_x19[0x4c] != '\0' && (((uint)in_stack_00000078._4_4_ ^ 0xffffffff) & 1) == 0)
      {
        fVar50 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
        fVar65 = *(float *)(unaff_x19 + 0x60);
        if ((fVar50 <= fVar65) || ((int)unaff_x19[0x4e] <= *(int *)((long)unaff_x19 + 0x26c))) {
          fVar50 = *(float *)((long)unaff_x19 + 0x20c);
          fVar54 = *(float *)(unaff_x19 + 0x4f);
          param_2 = ZEXT416((uint)fVar54);
          if ((fVar54 < fVar50) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
          goto LAB_09f39a28;
          goto LAB_09f36740;
        }
LAB_09f39ad0:
        fVar49 = fVar66;
        if (0.0 < fVar65) {
          fVar49 = fVar66 / (1.0 - fVar65);
        }
        fVar65 = fVar65 + (fVar66 - fVar48 * (fStack000000000000014c + DAT_01df4be8)) / fVar49;
LAB_09f39ac0:
        if (fVar50 <= fVar65) {
          fVar65 = fVar50;
        }
        *(float *)(unaff_x19 + 0x60) = fVar65;
        return;
      }
LAB_09f36740:
      lVar26 = *(long *)PTR_DAT_0ac7e998;
      if (*(int *)(lVar26 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar26 = *(long *)puVar7;
      }
      if (((((uint)in_stack_00000078._4_4_ & 1) != 0) &&
          (iVar17 = *(int *)(*(long *)(lVar26 + 0xb8) + 0xf80), iVar17 != -1)) &&
         (iVar17 != iStack0000000000000020)) {
        if (*(int *)(lVar26 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        in_stack_00001308 = FUN_09f8665c();
        if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
        goto LAB_09f39990;
        uVar29 = *(int *)(in_stack_000001a8 + 7) - 1;
        if (*(uint *)(lVar26 + 0x18) <= uVar29) goto LAB_09f39b0c;
        iStack0000000000000020 = iVar17;
        if (*(short *)(lVar26 + (long)(int)uVar29 * (long)(int)unaff_w23 + 0x24) == 0xad) {
          fStack000000000000005c = 0.0;
          in_stack_00001308 = in_stack_00001308 - 1;
          in_stack_00001328 = CONCAT44(0x2d,uVar29);
          *(uint *)(in_stack_000001a8 + 7) = uVar29;
          plVar44 = (long *)PTR_DAT_0ac7e998;
          fVar48 = unaff_s12;
          goto LAB_09f33184;
        }
      }
      if (fVar68 <= in_stack_000000e0._4_4_) {
        param_2 = ZEXT416((uint)unaff_s12);
        param_3 = in_stack_00000108;
        FUN_09f87128();
LAB_09f36a9c:
        in_stack_00000078._4_4_ = 1.4013e-45;
        fStack000000000000005c = 0.0;
        uStack0000000000000064 = 1;
        plVar44 = (long *)PTR_DAT_0ac7e998;
        fVar48 = unaff_s12;
        goto LAB_09f33184;
      }
      if (*(int *)((long)unaff_x19 + 0x314) == -1) {
        *(undefined4 *)((long)unaff_x19 + 0x314) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
      }
      plVar44 = (long *)PTR_DAT_0ac7e998;
      if ((char)unaff_x19[0x4c] != '\0') {
        fVar50 = *(float *)((long)unaff_x19 + 0x2f4);
        if ((fVar50 < *(float *)(unaff_x19 + 0x5d)) &&
           (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
          fVar48 = *(float *)(unaff_x19 + 0x5d) +
                   ((in_stack_00000018._4_4_ - fVar68) / (float)((int)unaff_x19[0x97] + 1)) /
                   fStack0000000000000050;
          if (fVar48 <= fVar50) {
            fVar48 = fVar50;
          }
UnityEngine_XR_Interaction_Toolkit_Locomotion_Movement_ContinuousMoveProvider__set_moveSpeed:
          *(float *)(unaff_x19 + 0x5d) = fVar48;
          return;
        }
        fVar50 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
        fVar65 = *(float *)(unaff_x19 + 0x60);
        if ((fVar65 < fVar50) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
        goto LAB_09f39ad0;
        fVar50 = *(float *)((long)unaff_x19 + 0x20c);
        fVar54 = *(float *)(unaff_x19 + 0x4f);
        param_2 = ZEXT416((uint)fVar54);
        if ((fVar54 < fVar50) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
        goto LAB_09f39a28;
      }
      iVar17 = (int)unaff_x19[0x62];
      fStack000000000000005c = 0.0;
      if (iVar17 < 3) {
        if (iVar17 != 0) {
          if (iVar17 == 1) {
            lVar26 = *(long *)PTR_DAT_0ac7e998;
            if (*(int *)(lVar26 + 0xe4) == 0) {
              thunk_FUN_049a583c();
              lVar26 = *(long *)PTR_DAT_0ac7e998;
            }
            in_stack_00001328 = DAT_01da5248;
            lVar30 = *(long *)(lVar26 + 0xb8);
            if (*(int *)(lVar30 + 0x1708) == 0) {
              in_stack_00001308 = 0xffffffff;
              in_stack_000001a8[7] = 0;
            }
            else {
              if (*(int *)(lVar26 + 0xe4) == 0) {
                thunk_FUN_049a583c();
                lVar30 = *(long *)(*(long *)PTR_DAT_0ac7e998 + 0xb8);
              }
              FUN_076742e0(&stack0x00001340,lVar30 + 0x1338,*(undefined8 *)PTR_DAT_0acd4020);
              memcpy(&stack0x00000990,&stack0x00001340,0x3b8);
              iVar14 = FUN_09f8665c();
              in_stack_00001308 = iVar14 - 1;
              iVar14 = *(int *)((long)unaff_x19 + 0x4a4) + -1;
              *(int *)((long)unaff_x19 + 0x4a4) = iVar14;
              in_stack_000001b0 = (float)((int)in_stack_000001b0 + 1);
              in_stack_00001328 = CONCAT44(0x2026,iVar14);
            }
            goto LAB_09f36da8;
          }
          if (iVar17 != 2) goto joined_r0x09f34c68;
        }
LAB_09f36ad0:
        param_2 = ZEXT416((uint)unaff_s12);
        param_3 = in_stack_00000108;
        FUN_09f87128();
        fStack000000000000005c = 0.0;
        goto LAB_09f361c4;
      }
      if (iVar17 < 5) {
        if (iVar17 != 3) {
          if (iVar17 == 4) goto LAB_09f36ad0;
          goto joined_r0x09f34c68;
        }
        if (*(int *)(*(long *)PTR_DAT_0ac7e998 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        in_stack_00001308 = FUN_09f8665c();
        in_stack_00001328 = CONCAT44(3,iVar14);
LAB_09f36da8:
        fStack000000000000005c = 0.0;
        unaff_s15 = 1.0;
        plVar44 = (long *)PTR_DAT_0ac7e998;
        fVar48 = unaff_s12;
        goto LAB_09f33184;
      }
      if (iVar17 == 5) {
        param_2 = ZEXT416((uint)unaff_s12);
        *(undefined1 *)((long)unaff_x19 + 0x374) = 1;
        param_3 = in_stack_00000108;
        FUN_09f87128();
        *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
        *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
        *(int *)((long)unaff_x19 + 0x4c4) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
        unaff_x19[0x99] = 0;
        goto LAB_09f36a9c;
      }
      if (iVar17 == 6) {
        lVar26 = unaff_x19[99];
        if (*(int *)(*(long *)PTR_DAT_0ac09788 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar20 = FUN_0a17b398(lVar26,0,0);
        if ((uVar20 & 1) != 0) {
          plVar44 = (long *)unaff_x19[99];
          uVar18 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar44 == (long *)0x0) goto LAB_09f39990;
          (**(code **)(*plVar44 + 0x558))(plVar44,uVar18,*(undefined8 *)(*plVar44 + 0x560));
          lVar26 = unaff_x19[99];
          if (lVar26 == 0) goto LAB_09f39990;
          *(int *)(lVar26 + 0x438) = (int)unaff_x19[0x87];
          FUN_09f79f28(lVar26,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
          plVar44 = (long *)unaff_x19[99];
          if (plVar44 == (long *)0x0) goto LAB_09f39990;
          (**(code **)(*plVar44 + 0x7d8))(plVar44,0,0,*(undefined8 *)(*plVar44 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x65) = 1;
        }
        in_stack_00001328 = CONCAT44(3,*(undefined4 *)(in_stack_000001a8 + 7));
        goto LAB_09f36da8;
      }
      unaff_s15 = 1.0;
    }
joined_r0x09f34c68:
    PTR_DAT_0ac7e998 = (undefined *)plVar44;
    if (uVar11 == 0) {
      if (in_stack_0000133c == 0xad) {
        if ((unaff_x19[0x74] != 0) && (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 != 0)) {
          if (*(uint *)(in_stack_000001a8 + 7) < *(uint *)(lVar26 + 0x18)) {
            *(undefined1 *)
             (lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 + 400) = 0
            ;
            goto LAB_09f35430;
          }
          goto LAB_09f39b0c;
        }
        goto LAB_09f39990;
      }
      if (*(int *)((long)unaff_x19 + 0x65c) == 1) {
        (**(code **)(*unaff_x19 + 0x8c8))();
      }
      else if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
        (**(code **)(*unaff_x19 + 0x8b8))();
      }
      if ((uStack0000000000000064 & 1) != 0) {
        *(undefined4 *)(in_stack_000001a8 + 8) = *(undefined4 *)(in_stack_000001a8 + 7);
      }
      *(undefined4 *)((long)unaff_x19 + 0x4b4) = *(undefined4 *)(in_stack_000001a8 + 7);
      *(int *)((long)unaff_x19 + 0x4bc) = *(int *)((long)unaff_x19 + 0x4bc) + 1;
      if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x50), lVar26 == 0))
      goto LAB_09f39990;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_09f39b0c;
      uStack0000000000000064 = 0;
      lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
      *(float *)(lVar26 + 100) = fVar53;
      *(float *)(lVar26 + 0x68) = fVar63;
    }
    else {
      lVar26 = unaff_x19[0x74];
      if ((lVar26 == 0) || (lVar30 = *(long *)(lVar26 + 0x38), lVar30 == 0)) goto LAB_09f39990;
      uVar29 = *(uint *)(in_stack_000001a8 + 7);
      if (*(uint *)(lVar30 + 0x18) <= uVar29) goto LAB_09f39b0c;
      *(undefined1 *)(lVar30 + (long)(int)uVar29 * (long)(int)unaff_w23 + 400) = 0;
      *(uint *)((long)unaff_x19 + 0x4b4) = uVar29;
      lVar30 = *(long *)(lVar26 + 0x50);
      if (lVar30 == 0) goto LAB_09f39990;
      uVar29 = *(uint *)(lVar30 + 0x18);
      if (uVar29 <= *(uint *)(unaff_x19 + 0x97)) goto LAB_09f39b0c;
      lVar30 = lVar30 + 0x20;
      lVar35 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
      iVar14 = *(int *)(lVar35 + 0xc) + 1;
      *(int *)(lVar35 + 0xc) = iVar14;
      uVar40 = *(uint *)(unaff_x19 + 0x97);
      *(int *)(unaff_x19 + 0x98) = iVar14;
      if (uVar29 <= uVar40) goto LAB_09f39b0c;
      lVar35 = lVar30 + (long)(int)uVar40 * 0x60;
      *(float *)(lVar35 + 0x44) = fVar53;
      *(float *)(lVar35 + 0x48) = fVar63;
      *(int *)(lVar26 + 0x20) = *(int *)(lVar26 + 0x20) + 1;
      if (in_stack_0000133c == 0xa0) {
        *(int *)(lVar30 + (long)(int)uVar40 * 0x60) =
             *(int *)(lVar30 + (long)(int)uVar40 * 0x60) + 1;
      }
    }
  }
  else {
    if (((in_stack_0000133c & 0xfffffffe) == 10) && ((int)unaff_x19[0x62] == 6)) {
      fVar48 = 0.0;
      if ((0.0 < fVar63) && ((char)unaff_x19[0x5e] == '\0')) {
        fVar48 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
      }
      param_3 = *(float *)((long)unaff_x19 + 0x4cc);
      param_2 = ZEXT416((uint)in_stack_000000e0._4_4_);
      if (in_stack_000000e0._4_4_ < (param_3 - (*(float *)(unaff_x19 + 0x9c) - fVar63)) + fVar48) {
        if (*(int *)((long)unaff_x19 + 0x314) == -1) {
          *(uint *)((long)unaff_x19 + 0x314) = uVar29;
        }
        plVar44 = (long *)PTR_DAT_0ac7e998;
        if (*(int *)(*(long *)PTR_DAT_0ac7e998 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        in_stack_00001308 = FUN_09f8665c();
        lVar26 = unaff_x19[99];
        if (*(int *)(*(long *)PTR_DAT_0ac09788 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar20 = FUN_0a17b398(lVar26,0,0);
        if ((uVar20 & 1) != 0) {
          plVar43 = (long *)unaff_x19[99];
          uVar18 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar43 == (long *)0x0) goto LAB_09f39990;
          (**(code **)(*plVar43 + 0x558))(plVar43,uVar18,*(undefined8 *)(*plVar43 + 0x560));
          lVar26 = unaff_x19[99];
          if (lVar26 == 0) goto LAB_09f39990;
          *(int *)(lVar26 + 0x438) = (int)unaff_x19[0x87];
          FUN_09f79f28(lVar26,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
          plVar43 = (long *)unaff_x19[99];
          if (plVar43 == (long *)0x0) goto LAB_09f39990;
          (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x65) = 1;
        }
LAB_09f35138:
        uVar52 = 3;
LAB_09f351e8:
        fVar48 = unaff_s12;
        in_stack_00001328 = CONCAT44(uVar52,uVar29);
        goto LAB_09f33184;
      }
    }
    if ((((in_stack_0000133c - 0x2007 < 0x23) &&
         ((1L << ((ulong)(in_stack_0000133c - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
        (in_stack_0000133c - 10 < 2)) || (in_stack_0000133c == 0xa0)) {
      plVar44 = (long *)PTR_DAT_0ac7e998;
      if (in_stack_0000133c != 0xad) goto LAB_09f35384;
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0x88) + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar20 = FUN_08ccaff8(in_stack_0000133c,0);
      if (((uVar20 & 1) != 0) && (in_stack_0000133c != 0xad)) {
LAB_09f35384:
        plVar44 = (long *)PTR_DAT_0ac7e998;
        if ((in_stack_0000133c == 0x200b) || (in_stack_0000133c == 0x2060)) goto LAB_09f35430;
        lVar26 = unaff_x19[0x74];
        if ((lVar26 == 0) || (lVar30 = *(long *)(lVar26 + 0x50), lVar30 == 0)) goto LAB_09f39990;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_09f39b0c;
        lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
        *(int *)(lVar30 + 0x2c) = *(int *)(lVar30 + 0x2c) + 1;
        *(int *)(lVar26 + 0x20) = *(int *)(lVar26 + 0x20) + 1;
      }
      plVar44 = (long *)PTR_DAT_0ac7e998;
      if (in_stack_0000133c == 0xa0) {
        if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x50), lVar26 == 0))
        goto LAB_09f39990;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_09f39b0c;
        lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
        *(int *)(lVar26 + 0x20) = *(int *)(lVar26 + 0x20) + 1;
      }
    }
  }
LAB_09f35430:
  if (((int)unaff_x19[0x62] == 1) && ((uVar46 != uVar15 || (in_stack_0000133c == 0x2d)))) {
    if (unaff_x19[0xce] == 0) goto LAB_09f39990;
    fVar66 = *(float *)(unaff_x19 + 0x42);
    fVar48 = (float)FUN_0a218f88(unaff_x19[0xce] + 0x28,0);
    if (unaff_x19[0xce] == 0) goto LAB_09f39990;
    fVar50 = (float)FUN_0a218f90(unaff_x19[0xce] + 0x28,0);
    lVar26 = unaff_x19[0xcd];
    if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_09f39990;
    fVar54 = *(float *)((long)unaff_x19 + 0x43c);
    fVar63 = *(float *)(lVar26 + 0x2c);
    fVar53 = (float)FUN_0a219488(*(long *)(lVar26 + 0x20),0);
    uVar18 = *(undefined8 *)_fStack00000000000000b8;
    fVar53 = fVar54 * in_stack_00000120 * (fVar66 / fVar48) * fVar50 * fVar63 * fVar53;
    if ((in_stack_0000133c == 10) && (*(int *)((long)unaff_x19 + 0x4a4) != (int)unaff_x19[0x95])) {
      if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
      goto LAB_09f39990;
      uVar29 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
      if (*(uint *)(lVar26 + 0x18) <= uVar29) goto LAB_09f39b0c;
      if (unaff_x19[0xce] == 0) goto LAB_09f39990;
      fVar66 = *(float *)(lVar26 + (long)(int)uVar29 * (long)(int)unaff_w23 + 0x58);
      fVar48 = (float)FUN_0a218f88(unaff_x19[0xce] + 0x28,0);
      if (unaff_x19[0xce] == 0) goto LAB_09f39990;
      fVar50 = (float)FUN_0a218f90(unaff_x19[0xce] + 0x28,0);
      lVar26 = unaff_x19[0xcd];
      if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_09f39990;
      fVar54 = *(float *)((long)unaff_x19 + 0x43c);
      fVar63 = *(float *)(lVar26 + 0x2c);
      fVar53 = (float)FUN_0a219488(*(long *)(lVar26 + 0x20),0);
      if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x50), lVar26 == 0))
      goto LAB_09f39990;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_09f39b0c;
      uVar18 = *(undefined8 *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60 + 100);
      fVar53 = fVar54 * in_stack_00000120 * (fVar66 / fVar48) * fVar50 * fVar63 * fVar53;
    }
    fVar66 = *(float *)((long)unaff_x19 + 0x4ec);
    fVar48 = 0.0;
    fVar50 = 0.0;
    if ((0.0 < fVar66) && ((char)unaff_x19[0x5e] == '\0')) {
      fVar50 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
    }
    fVar54 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar63 = *(float *)(unaff_x19 + 0x9c);
    fVar68 = *(float *)(unaff_x19 + 0xcb);
    fStack0000000000000180 = (float)uVar18;
    fStack0000000000000184 = (float)((ulong)uVar18 >> 0x20);
    if ((char)unaff_x19[0x1e] == '\0') {
      if ((unaff_x19[0xcd] == 0) || (lVar26 = *(long *)(unaff_x19[0xcd] + 0x20), lVar26 == 0))
      goto LAB_09f39990;
      FUN_0a21944c(&stack0x00001340,lVar26,0);
      fVar48 = (float)FUN_0a219294(&stack0x000011e0,0);
    }
    fVar65 = *(float *)(unaff_x19 + 0x73);
    fStack0000000000000184 = (in_stack_000000b0 - fStack0000000000000180) - fStack0000000000000184;
    bVar8 = true;
    if ((fVar65 <= fStack0000000000000184) && (bVar8 = false, !NAN(fVar65))) {
      bVar8 = fVar65 == -1.0;
    }
    if (!bVar8) {
      fStack0000000000000184 = fVar65;
    }
    fVar65 = unaff_s15;
    if ((uVar42 & 0x18) != 0) {
      fVar65 = DAT_01df51e8;
    }
    if ((ABS(fVar68) + fVar53 * fVar48 * (unaff_s15 - *(float *)(unaff_x19 + 0x60)) <
         fVar65 * fStack0000000000000184) &&
       ((fVar54 - (fVar63 - fVar66)) + fVar50 < in_stack_000000e0._4_4_)) {
      if (*(int *)(*plVar44 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_09f86a00();
      lVar26 = *(long *)(*plVar44 + 0xb8);
      memcpy(&stack0x00001340,(void *)(lVar26 + 0x810),0x3b8);
      FUN_076741f4(lVar26 + 0x1338,&stack0x00001340,*(undefined8 *)PTR_DAT_0acd4028);
    }
  }
  lVar26 = unaff_x19[0x74];
  if ((lVar26 == 0) || (lVar30 = *(long *)(lVar26 + 0x38), lVar30 == 0)) goto LAB_09f39990;
  if (*(uint *)(lVar30 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_09f39b0c;
  lVar30 = lVar30 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * (long)(int)unaff_w23;
  uVar29 = *(uint *)(unaff_x19 + 0x97);
  *(uint *)(lVar30 + 0x5c) = uVar29;
  *(undefined4 *)(lVar30 + 0x60) = *(undefined4 *)((long)unaff_x19 + 0x4c4);
  if ((uVar46 == uVar15) ||
     ((in_stack_0000133c < 0xe && ((1 << (ulong)(in_stack_0000133c & 0x1f) & 0x2c00U) != 0)))) {
    lVar26 = *(long *)(lVar26 + 0x50);
    if (lVar26 == 0) goto LAB_09f39990;
    if (*(uint *)(lVar26 + 0x18) <= uVar29) goto LAB_09f39b0c;
    if (*(int *)(lVar26 + (long)(int)uVar29 * 0x60 + 0x24) == 1) goto LAB_09f357d0;
  }
  else {
    lVar26 = *(long *)(lVar26 + 0x50);
    if (lVar26 == 0) goto LAB_09f39990;
LAB_09f357d0:
    if (*(uint *)(lVar26 + 0x18) <= uVar29) goto LAB_09f39b0c;
    *(int *)(lVar26 + (long)(int)uVar29 * 0x60 + 0x6c) = (int)unaff_x19[0x54];
  }
  if (in_stack_0000133c == 9) {
    if (unaff_x19[0x20] == 0) goto LAB_09f39990;
    fVar48 = (float)FUN_0a219030(unaff_x19[0x20] + 0x28,0);
    if (unaff_x19[0x20] == 0) goto LAB_09f39990;
    fVar66 = (float)NEON_ucvtf((uint)*(byte *)(unaff_x19[0x20] + 0x1b1));
    fVar50 = *(float *)(unaff_x19 + 0xcb);
    param_2 = ZEXT416((uint)fVar50);
    fVar66 = unaff_s12 * fVar48 * fVar66;
    if ((char)unaff_x19[0x1e] == '\0') {
      param_3 = fVar66 * (float)(int)(fVar50 / fVar66);
      fVar48 = param_3;
      if (param_3 <= fVar50) {
        fVar48 = fVar66 + fVar50;
      }
    }
    else {
      param_3 = fVar66 * (float)(int)(fVar50 / fVar66);
      fVar48 = param_3;
      if (fVar50 <= param_3) {
        fVar48 = fVar50 - fVar66;
      }
    }
LAB_09f35a14:
    *(float *)(unaff_x19 + 0xcb) = fVar48;
  }
  else {
    fVar48 = *(float *)(unaff_x19 + 0x5b);
    if (fVar48 == 0.0) {
      fVar48 = *(float *)(unaff_x19 + 0xcb);
      if ((char)unaff_x19[0x1e] == '\0') {
        fVar50 = (float)FUN_0a219294(&stack0x00001280,0);
        fVar53 = *(float *)(in_stack_000001a8 + 2);
        fVar51 = (float)FUN_0a21d7cc(&stack0x00001270,0);
        if (unaff_x19[0x20] != 0) {
          param_3 = *(float *)(unaff_x19 + 0x60);
          fVar66 = unaff_s15 - param_3;
          fVar48 = fVar48 + fVar66 * (*(float *)((long)unaff_x19 + 0x2d4) +
                                     unaff_s12 * (fVar50 * fVar53 + fVar51) +
                                     in_stack_00000108 *
                                     (fVar67 + fVar49 + *(float *)(unaff_x19[0x20] + 0x1a4)));
          *(float *)(unaff_x19 + 0xcb) = fVar48;
          goto joined_r0x09f35954;
        }
        goto LAB_09f39990;
      }
      fVar66 = (float)FUN_0a21d7cc(&stack0x00001270,0);
      if (unaff_x19[0x20] == 0) goto LAB_09f39990;
      param_3 = *(float *)(unaff_x19 + 0x60);
      param_2 = ZEXT416((uint)(unaff_s15 - param_3));
      fVar48 = fVar48 - (unaff_s15 - param_3) *
                        (*(float *)((long)unaff_x19 + 0x2d4) +
                        unaff_s12 * fVar66 +
                        in_stack_00000108 * (fVar67 + fVar49 + *(float *)(unaff_x19[0x20] + 0x1a4)))
      ;
      *(float *)(unaff_x19 + 0xcb) = fVar48;
      if ((uVar11 != 0) || (in_stack_0000133c == 0x200b)) {
        param_2 = ZEXT416((uint)(in_stack_00000108 * *(float *)(unaff_x19 + 0x5c)));
        param_3 = in_stack_00000108;
        fVar48 = fVar48 - in_stack_00000108 * *(float *)(unaff_x19 + 0x5c);
        goto LAB_09f35a14;
      }
    }
    else {
      if (((*(char *)((long)unaff_x19 + 0x2dc) != '\0') && (in_stack_0000133c < 0x3b)) &&
         ((1L << ((ulong)in_stack_0000133c & 0x3f) & 0x400500000000000U) != 0)) {
        fVar48 = fVar48 * 0.5;
      }
      if (unaff_x19[0x20] == 0) goto LAB_09f39990;
      param_3 = *(float *)(unaff_x19 + 0x60);
      fVar66 = *(float *)(unaff_x19 + 0xcb);
      fVar48 = fVar66 + (unaff_s15 - param_3) *
                        (*(float *)((long)unaff_x19 + 0x2d4) +
                        (fVar48 - fVar51) +
                        in_stack_00000108 * (fVar49 + *(float *)(unaff_x19[0x20] + 0x1a4)));
      *(float *)(unaff_x19 + 0xcb) = fVar48;
joined_r0x09f35954:
      if ((uVar11 != 0) || (param_2 = ZEXT416((uint)fVar66), in_stack_0000133c == 0x200b)) {
        param_2 = ZEXT416((uint)(in_stack_00000108 * *(float *)(unaff_x19 + 0x5c)));
        param_3 = in_stack_00000108;
        fVar48 = fVar48 + in_stack_00000108 * *(float *)(unaff_x19 + 0x5c);
        goto LAB_09f35a14;
      }
    }
  }
  lVar26 = unaff_x19[0x74];
  if ((lVar26 == 0) || (lVar30 = *(long *)(lVar26 + 0x38), lVar30 == 0)) goto LAB_09f39990;
  uVar29 = *(uint *)(in_stack_000001a8 + 7);
  if (*(uint *)(lVar30 + 0x18) <= uVar29) goto LAB_09f39b0c;
  *(float *)(lVar30 + (long)(int)uVar29 * (long)(int)unaff_w23 + 0x13c) = fVar48;
  if (in_stack_0000133c == 0xd) {
    param_2 = ZEXT816(0);
    *(float *)(unaff_x19 + 0xcb) = *(float *)((long)unaff_x19 + 0x444) + 0.0;
  }
  if (((int)unaff_x19[0x62] == 5) &&
     (((0xd < in_stack_0000133c || ((1 << (ulong)(in_stack_0000133c & 0x1f) & 0x2c00U) == 0)) &&
      (1 < in_stack_0000133c - 0x2028)))) {
    lVar30 = *(long *)(lVar26 + 0x58);
    if (lVar30 == 0) goto LAB_09f39990;
    iVar14 = *(int *)((long)unaff_x19 + 0x4c4) + 1;
    if (*(int *)(lVar30 + 0x18) < iVar14) {
      if (*(int *)(*(long *)PTR_DAT_0acd3ff8 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_05e4d2b4((long *)(lVar26 + 0x58),iVar14,1,*(undefined8 *)PTR_DAT_0acd3fe8);
      lVar26 = unaff_x19[0x74];
      if (lVar26 == 0) goto LAB_09f39990;
    }
    plVar44 = (long *)PTR_DAT_0ac7e998;
    lVar30 = *(long *)(lVar26 + 0x58);
    if (lVar30 == 0) goto LAB_09f39990;
    uVar42 = *(uint *)((long)unaff_x19 + 0x4c4);
    if (*(uint *)(lVar30 + 0x18) <= uVar42) goto LAB_09f39b0c;
    lVar30 = lVar30 + 0x20;
    lVar35 = lVar30 + (long)(int)uVar42 * 0x14;
    *(int *)(lVar35 + 8) = (int)unaff_x19[0x99];
    fVar66 = *(float *)(lVar35 + 0x10);
    param_2 = ZEXT416((uint)fVar66);
    fVar48 = *(float *)(unaff_x19 + 0x9b);
    if (fVar66 <= *(float *)(unaff_x19 + 0x9b)) {
      fVar48 = fVar66;
    }
    *(float *)(lVar35 + 0x10) = fVar48;
    if (*(char *)((long)unaff_x19 + 0x374) != '\0') {
      *(undefined1 *)((long)unaff_x19 + 0x374) = 0;
      *(undefined4 *)(lVar30 + (long)(int)uVar42 * 0x14) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
    }
    uVar29 = *(uint *)(in_stack_000001a8 + 7);
    *(uint *)(lVar30 + (long)(int)uVar42 * 0x14 + 4) = uVar29;
  }
  uVar42 = in_stack_0000133c;
  if (((0xb < in_stack_0000133c) || ((1 << (ulong)(in_stack_0000133c & 0x1f) & 0xc08U) == 0)) &&
     ((1 < in_stack_0000133c - 0x2028 &&
      ((in_stack_0000133c != 0x2d || uVar46 != uVar15 && (uVar29 != uStack0000000000000054))))))
  goto LAB_09f3620c;
  if (0.0 < *(float *)((long)unaff_x19 + 0x4ec)) {
    fVar48 = *(float *)((long)unaff_x19 + 0x4dc);
    fVar66 = *(float *)((long)unaff_x19 + 0x4e4);
    if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    fVar48 = fVar48 - fVar66;
    if (((fStack0000000000000058 < ABS(fVar48)) && ((char)unaff_x19[0x5e] == '\0')) &&
       (*(char *)((long)unaff_x19 + 0x374) == '\0')) {
      FUN_09f86dbc();
      lVar26 = *plVar44;
      *(float *)(unaff_x19 + 0x9b) = *(float *)(unaff_x19 + 0x9b) - fVar48;
      *(float *)((long)unaff_x19 + 0x4ec) = fVar48 + *(float *)((long)unaff_x19 + 0x4ec);
      if (*(int *)(lVar26 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar26 = *plVar44;
      }
      lVar30 = *(long *)(lVar26 + 0xb8);
      if (*(int *)(lVar30 + 0x838) == (int)unaff_x19[0x97]) {
        if (*(int *)(lVar26 + 0xe4) == 0) {
          thunk_FUN_049a583c();
          lVar30 = *(long *)(*plVar44 + 0xb8);
        }
        FUN_076742e0(&stack0x00000200,lVar30 + 0x1338,*(undefined8 *)PTR_DAT_0acd4020);
        lVar26 = *plVar44;
        memcpy((void *)(*(long *)(lVar26 + 0xb8) + 0x810),&stack0x00000200,0x3b8);
        thunk_FUN_049ee3d8(*(long *)(lVar26 + 0xb8) + 0x8a8,0);
        lVar26 = *(long *)(*plVar44 + 0xb8);
        *(float *)(lVar26 + 0x848) = fVar48 + *(float *)(lVar26 + 0x848);
        *(float *)(lVar26 + 0x894) = fVar48 + *(float *)(lVar26 + 0x894);
        memcpy(&stack0x00001340,(void *)(lVar26 + 0x810),0x3b8);
        FUN_076741f4(lVar26 + 0x1338,&stack0x00001340,*(undefined8 *)PTR_DAT_0acd4028);
      }
    }
  }
  fVar50 = *(float *)((long)unaff_x19 + 0x4ec);
  *(undefined1 *)((long)unaff_x19 + 0x374) = 0;
  fVar66 = *(float *)(unaff_x19 + 0x9c) - fVar50;
  fVar48 = *(float *)(unaff_x19 + 0x9b);
  if (fVar66 <= *(float *)(unaff_x19 + 0x9b)) {
    fVar48 = fVar66;
  }
  fVar51 = *(float *)((long)unaff_x19 + 0x4dc);
  *(float *)(unaff_x19 + 0x9b) = fVar48;
  if (in_stack_00001334 == '\0') {
    in_stack_00001338 = fVar48;
  }
  if ((*(char *)((long)unaff_x19 + 0x36c) != '\0') &&
     (((int)unaff_x19[0x6c] <= *(int *)((long)unaff_x19 + 0x4a4) ||
      ((int)unaff_x19[0x6d] <= (int)unaff_x19[0x97])))) {
    in_stack_00001334 = '\x01';
  }
  lVar26 = unaff_x19[0x74];
  if ((lVar26 == 0) || (lVar30 = *(long *)(lVar26 + 0x50), lVar30 == 0)) goto LAB_09f39990;
  if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_09f39b0c;
  lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
  iVar17 = (int)unaff_x19[0x95];
  *(int *)(lVar30 + 0x38) = iVar17;
  iVar14 = iVar17;
  if (iVar17 <= *(int *)((long)unaff_x19 + 0x4ac)) {
    iVar14 = *(int *)((long)unaff_x19 + 0x4ac);
  }
  *(int *)((long)unaff_x19 + 0x4ac) = iVar14;
  *(int *)(lVar30 + 0x3c) = iVar14;
  iVar38 = *(int *)((long)unaff_x19 + 0x4a4);
  *(int *)(unaff_x19 + 0x96) = iVar38;
  *(int *)(lVar30 + 0x40) = iVar38;
  iVar16 = *(int *)((long)unaff_x19 + 0x4ac);
  if (iVar14 <= *(int *)((long)unaff_x19 + 0x4b4)) {
    iVar16 = *(int *)((long)unaff_x19 + 0x4b4);
  }
  *(int *)((long)unaff_x19 + 0x4b4) = iVar16;
  *(int *)(lVar30 + 0x44) = iVar16;
  *(int *)(lVar30 + 0x24) = (iVar38 - iVar17) + 1;
  iVar14 = *(int *)((long)unaff_x19 + 0x4bc);
  *(int *)(lVar30 + 0x28) = iVar14;
  *(int *)(lVar30 + 0x30) = (iVar16 - (iVar17 + iVar14)) + 1;
  lVar26 = *(long *)(lVar26 + 0x38);
  if (lVar26 == 0) goto LAB_09f39990;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 8)) goto LAB_09f39b0c;
  *(undefined4 *)(lVar30 + 0x70) =
       *(undefined4 *)
        (lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 8) * (long)(int)unaff_w23 + 0x114);
  *(float *)(lVar30 + 0x74) = fVar66;
  lVar26 = unaff_x19[0x74];
  if ((lVar26 == 0) || (lVar30 = *(long *)(lVar26 + 0x50), lVar30 == 0)) goto LAB_09f39990;
  if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_09f39b0c;
  lVar26 = *(long *)(lVar26 + 0x38);
  if (lVar26 == 0) goto LAB_09f39990;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4b4)) goto LAB_09f39b0c;
  fVar51 = fVar51 - fVar50;
  param_2 = ZEXT416((uint)fVar51);
  lVar30 = lVar30 + 0x20 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
  *(undefined4 *)(lVar30 + 0x58) =
       *(undefined4 *)
        (lVar26 + (long)(int)*(uint *)((long)unaff_x19 + 0x4b4) * (long)(int)unaff_w23 + 0x120);
  *(float *)(lVar30 + 0x5c) = fVar51;
  lVar26 = unaff_x19[0x74];
  if ((lVar26 == 0) || (lVar30 = *(long *)(lVar26 + 0x50), lVar30 == 0)) goto LAB_09f39990;
  uVar29 = *(uint *)(unaff_x19 + 0x97);
  if (*(uint *)(lVar30 + 0x18) <= uVar29) goto LAB_09f39b0c;
  lVar30 = lVar30 + 0x20;
  lVar35 = lVar30 + (long)(int)uVar29 * 0x60;
  *(float *)(lVar35 + 0x28) = *(float *)(lVar35 + 0x58) - unaff_s12 * unaff_s13;
  *(float *)(lVar35 + 0x40) = fStack000000000000014c;
  if (*(int *)(lVar35 + 4) == 1) {
    *(int *)(lVar30 + (long)(int)uVar29 * 0x60 + 0x4c) = (int)unaff_x19[0x54];
  }
  if ((unaff_x19[0x20] == 0) || (lVar35 = *(long *)(lVar26 + 0x38), lVar35 == 0)) goto LAB_09f39990;
  uVar40 = *(uint *)((long)unaff_x19 + 0x4b4);
  if (*(uint *)(lVar35 + 0x18) <= uVar40) goto LAB_09f39b0c;
  if ((*(char *)(lVar35 + 0x20 + (long)(int)uVar40 * (long)(int)unaff_w23 + 0x170) == '\0') &&
     (uVar40 = *(uint *)(unaff_x19 + 0x96), *(uint *)(lVar35 + 0x18) <= uVar40)) goto LAB_09f39b0c;
  fVar49 = (unaff_s15 - *(float *)(unaff_x19 + 0x60)) *
           (*(float *)((long)unaff_x19 + 0x2d4) +
           in_stack_00000108 * (fVar67 + fVar49 + *(float *)(unaff_x19[0x20] + 0x1a4)));
  fVar48 = -fVar49;
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar48 = fVar49;
  }
  lVar30 = lVar30 + (long)(int)uVar29 * 0x60;
  *(float *)(lVar30 + 0x3c) =
       *(float *)(lVar35 + 0x20 + (long)(int)uVar40 * (long)(int)unaff_w23 + 0x11c) + fVar48;
  param_3 = 0.0 - *(float *)((long)unaff_x19 + 0x4ec);
  *(float *)(lVar30 + 0x34) = param_3;
  *(float *)(lVar30 + 0x38) = fVar66;
  *(float *)(lVar30 + 0x2c) = fStack0000000000000060 + (fVar51 - fVar66);
  *(float *)(lVar30 + 0x30) = fVar51;
  if ((((in_stack_0000133c & 0xfffffffe) != 10) && (uVar46 != uVar15 || in_stack_0000133c != 0x2d))
     && (1 < in_stack_0000133c - 0x2028)) goto LAB_09f361d0;
  if (*(int *)(*plVar44 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_09f86a00();
  lVar26 = unaff_x19[0x97];
  iVar17 = *(int *)((long)unaff_x19 + 0x4a4);
  in_stack_000001a8[10] = 0;
  iVar14 = (int)lVar26 + 1;
  lVar26 = unaff_x19[0x74];
  *(int *)(unaff_x19 + 0x97) = iVar14;
  *(int *)(unaff_x19 + 0x95) = iVar17 + 1;
  if ((lVar26 == 0) || (*(long *)(lVar26 + 0x50) == 0)) goto LAB_09f39990;
  if (*(int *)(*(long *)(lVar26 + 0x50) + 0x18) <= iVar14) {
    FUN_09f86f78();
    lVar26 = unaff_x19[0x74];
    if (lVar26 == 0) goto LAB_09f39990;
  }
  lVar26 = *(long *)(lVar26 + 0x38);
  if (lVar26 == 0) goto LAB_09f39990;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)(in_stack_000001a8 + 7)) goto LAB_09f39b0c;
  fVar48 = *(float *)(lVar26 + (long)(int)*(uint *)(in_stack_000001a8 + 7) * (long)(int)unaff_w23 +
                     0x14c);
  if (*(float *)((long)unaff_x19 + 0x2ec) == DAT_01df4540) {
    if ((in_stack_0000133c == 0x2029) || (fVar49 = 0.0, in_stack_0000133c == 10)) {
      fVar49 = *(float *)(unaff_x19 + 0x5f);
    }
    uVar23 = 0;
    fVar49 = fVar48 + (0.0 - *(float *)(unaff_x19 + 0x9c)) +
             fStack0000000000000050 * (fStack0000000000000048 + *(float *)(unaff_x19 + 0x5d)) +
             in_stack_00000108 * (*(float *)((long)unaff_x19 + 0x2e4) + fVar49) +
             *(float *)((long)unaff_x19 + 0x4ec);
  }
  else {
    if ((in_stack_0000133c == 0x2029) || (fVar49 = 0.0, in_stack_0000133c == 10)) {
      fVar49 = *(float *)(unaff_x19 + 0x5f);
    }
    uVar23 = 1;
    fVar49 = *(float *)((long)unaff_x19 + 0x4ec) +
             *(float *)((long)unaff_x19 + 0x2ec) +
             in_stack_00000108 * (*(float *)((long)unaff_x19 + 0x2e4) + fVar49);
  }
  lVar26 = *plVar44;
  *(float *)((long)unaff_x19 + 0x4ec) = fVar49;
  *(undefined1 *)(unaff_x19 + 0x5e) = uVar23;
  if (*(int *)(lVar26 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar26 = *plVar44;
  }
  fVar49 = *(float *)(unaff_x19 + 0x88);
  uVar18 = *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x1730);
  *(float *)((long)unaff_x19 + 0x4e4) = fVar48;
  param_3 = *(float *)((long)unaff_x19 + 0x444);
  param_2._0_8_ = NEON_rev64(uVar18,4);
  param_2._8_8_ = 0;
  in_stack_000001a8[0xe] = param_2._0_8_;
  *(float *)(unaff_x19 + 0xcb) = fVar49 + 0.0 + param_3;
  FUN_09f86a00();
  FUN_09f86a00();
  *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
LAB_09f361c4:
  in_stack_00000078._4_4_ = 1.4013e-45;
  uStack0000000000000064 = 1;
  fVar48 = unaff_s12;
  goto LAB_09f33184;
LAB_09f374f4:
  if (*(uint *)(lVar26 + 0x18) <= uVar11) goto LAB_09f39b0c;
  uVar20 = (ulong)uVar11;
  piVar39 = (int *)(lVar30 + uVar20 * 0x178);
  lVar35 = *(long *)(piVar39 + 8);
  uVar47 = *(ushort *)(piVar39 + 1);
  if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0x88) + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar46 = (uint)uVar47;
  bVar9 = FUN_08cc7930(uVar47,0);
  if (*(uint *)(lVar26 + 0x18) <= uVar11) goto LAB_09f39b0c;
  if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x50), lVar21 == 0))
  goto LAB_09f39990;
  uVar13 = *(uint *)(lVar30 + uVar20 * 0x178 + 0x3c);
  if (*(uint *)(lVar21 + 0x18) <= uVar13) goto LAB_09f39b0c;
  lVar21 = lVar21 + (long)(int)uVar13 * 0x60;
  uVar29 = *(uint *)(lVar21 + 0x40);
  uVar42 = *(uint *)(lVar21 + 0x44);
  fVar53 = *(float *)(lVar21 + 0x58);
  fVar66 = *(float *)(lVar21 + 0x5c);
  uVar40 = *(uint *)(lVar21 + 0x6c);
  fVar54 = *(float *)(lVar21 + 0x60);
  fVar65 = *(float *)(lVar21 + 100);
  iVar17 = *(int *)(lVar21 + 0x20);
  fVar68 = *(float *)(lVar21 + 0x70);
  fVar63 = *(float *)(lVar21 + 0x74);
  iVar16 = *(int *)(lVar21 + 0x28);
  fVar51 = *(float *)(lVar21 + 0x78);
  fVar50 = *(float *)(lVar21 + 0x7c);
  iVar38 = *(int *)(lVar21 + 0x30);
  fVar67 = *(float *)(lVar21 + 0x50);
  if ((int)uVar40 < 9) {
    if ((int)uVar40 < 3) {
      if (uVar40 == 1) {
        if ((char)unaff_x19[0x1e] == '\0') {
          in_stack_00000120 = fVar65 + 0.0;
        }
        else {
          in_stack_00000120 = 0.0 - fVar66;
        }
        fStack0000000000000100 = 0.0;
        fStack0000000000000124 = 0.0;
      }
      else if (uVar40 == 2) {
        in_stack_00000120 = (fVar65 + fVar54 * 0.5) - fVar66 * 0.5;
LAB_09f377f0:
        fStack0000000000000124 = 0.0;
        fStack0000000000000100 = 0.0;
      }
      else {
LAB_09f376c0:
        uVar47 = NEON_umaxv(CONCAT26(-(ushort)(uVar47 == (ushort)((ulong)DAT_01da6288 >> 0x30)),
                                     CONCAT24(-(ushort)(uVar47 ==
                                                       (ushort)((ulong)DAT_01da6288 >> 0x20)),
                                              CONCAT22(-(ushort)(uVar47 ==
                                                                (ushort)((ulong)DAT_01da6288 >> 0x10
                                                                        )),
                                                       -(ushort)(uVar47 == (ushort)DAT_01da6288)))),
                            2);
        if (((((uVar47 & 1) == 0) && (uVar46 != 3)) && (uVar40 == 8)) &&
           ((int)uVar11 <= (int)uVar42)) goto LAB_09f37700;
      }
    }
    else if (uVar40 != 3) {
      if (uVar40 != 4) goto LAB_09f376c0;
      fStack0000000000000100 = 0.0;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar66 = 0.0;
      }
      in_stack_00000120 = (fVar54 + fVar65) - fVar66;
      fStack0000000000000124 = 0.0;
    }
  }
  else if (uVar40 == 0x10) {
    if ((int)uVar11 <= (int)uVar42) {
      if (uVar46 < 0xad) {
        if ((uVar46 != 3) && (uVar46 != 10)) {
LAB_09f37700:
          if (*(uint *)(lVar26 + 0x18) <= uVar29) goto LAB_09f39b0c;
          uVar45 = *(undefined2 *)(lVar30 + (long)(int)uVar29 * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0x88) + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar37 = FUN_08ccabdc(uVar45,0);
          plVar44 = (long *)PTR_DAT_0ac7e998;
          if ((uVar37 & 1) == 0) {
            bVar1 = (int)uVar13 < (int)unaff_x19[0x97];
          }
          else {
            bVar1 = false;
          }
          if ((!bVar1 && (uVar40 >> 4 & 1) == 0) && (fVar66 <= fVar54)) {
            in_stack_00000120 = -0.0;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_00000120 = fVar54;
            }
            in_stack_00000120 = fVar65 + in_stack_00000120;
            goto LAB_09f377f0;
          }
          if (((uVar11 == 0) || (uVar13 != uVar12)) ||
             (uVar11 == *(uint *)((long)unaff_x19 + 0x35c))) {
            in_stack_00000120 = -0.0;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_00000120 = fVar54;
            }
            if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0x88) + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            in_stack_00000120 = fVar65 + in_stack_00000120;
            fStack0000000000000050 = (float)FUN_08ccaff8(uVar46,0);
            fStack0000000000000124 = 0.0;
            fStack0000000000000100 = 0.0;
          }
          else {
            cVar24 = (char)unaff_x19[0x1e];
            iVar38 = (iVar38 - iVar17) - ((uint)fStack0000000000000050 & 1);
            fVar65 = -fVar66;
            if (cVar24 != '\0') {
              fVar65 = fVar66;
            }
            if (iVar38 < 1) {
              fVar66 = 1.0;
              iVar38 = 1;
            }
            else {
              fVar66 = *(float *)((long)unaff_x19 + 0x30c);
            }
            if (uVar46 == 9) {
LAB_09f39488:
              fVar66 = ((fVar54 + fVar65) * (1.0 - fVar66)) / (float)iVar38;
              if (cVar24 == '\0') {
                in_stack_00000120 = in_stack_00000120 + fVar66;
                fStack0000000000000124 = fStack0000000000000124 + 0.0;
                fStack0000000000000100 = fStack0000000000000100 + 0.0;
              }
              else {
                in_stack_00000120 = in_stack_00000120 - fVar66;
              }
            }
            else {
              if (uVar46 != 0xa0) {
                if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_049a583c();
                }
                uVar37 = FUN_08ccaff8(uVar46,0);
                cVar24 = (char)unaff_x19[0x1e];
                if ((uVar37 & 1) != 0) goto LAB_09f39488;
              }
              fVar66 = ((fVar54 + fVar65) * fVar66) /
                       (float)(int)((iVar17 - (((uint)fStack0000000000000050 ^ 0xffffffff) & 1)) +
                                   iVar16);
              if (cVar24 == '\0') {
                in_stack_00000120 = in_stack_00000120 + fVar66;
                fStack0000000000000124 = fStack0000000000000124 + 0.0;
                fStack0000000000000100 = fStack0000000000000100 + 0.0;
              }
              else {
                in_stack_00000120 = in_stack_00000120 - fVar66;
              }
            }
          }
        }
      }
      else if (((uVar46 != 0xad) && (uVar46 != 0x200b)) && (uVar46 != 0x2060)) goto LAB_09f37700;
    }
  }
  else if (uVar40 == 0x20) {
    in_stack_00000120 = (fVar65 + fVar54 * 0.5) - (fVar68 + fVar51) * 0.5;
    fStack0000000000000100 = 0.0;
    fStack0000000000000124 = 0.0;
  }
  uVar40 = (uint)*(undefined8 *)(lVar26 + 0x18);
  if (uVar40 <= uVar11) goto LAB_09f39b0c;
  lVar21 = lVar30 + uVar20 * 0x178;
  fVar66 = fStack00000000000000c0 + in_stack_00000120;
  fVar54 = in_stack_000001b0 + fStack0000000000000124;
  fVar65 = fStack00000000000000b8 + fStack0000000000000100;
  if (*(char *)(lVar21 + 0x170) == '\0') goto LAB_09f38010;
  iVar17 = *piVar39;
  if (iVar17 == 0) {
    fVar49 = fmodf(*(float *)((long)unaff_x19 + 0x34c) * (float)(int)uVar13,1.0);
    iVar16 = *(int *)((long)unaff_x19 + 0x344);
    if (iVar16 < 2) {
      if (iVar16 == 0) {
        lVar32 = lVar30 + uVar20 * 0x178;
        *(undefined4 *)(lVar32 + 100) = 0;
        *(undefined4 *)(lVar32 + 0x8c) = 0;
        *(undefined4 *)(lVar32 + 0xb4) = 0x3f800000;
        *(undefined4 *)(lVar32 + 0xdc) = 0x3f800000;
      }
      else if (iVar16 == 1) {
        lVar32 = lVar30 + uVar20 * 0x178;
        fVar50 = *(float *)(lVar32 + 0x48);
        pfVar33 = (float *)(lVar32 + 100);
        if (*(int *)((long)unaff_x19 + 0x29c) == 0x208) {
          lVar32 = lVar30 + uVar20 * 0x178;
          fVar51 = *(float *)(lVar32 + 0x70);
          *pfVar33 = fVar49 + ((in_stack_00000120 + fVar50) - *(float *)(unaff_x19 + 0x9e)) /
                              (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar32 + 0x8c) =
               fVar49 + ((in_stack_00000120 + fVar51) - *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar32 + 0xb4) =
               fVar49 + ((in_stack_00000120 + *(float *)(lVar32 + 0x98)) -
                        *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar32 + 0xdc) =
               fVar49 + ((in_stack_00000120 + *(float *)(lVar32 + 0xc0)) -
                        *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
        }
        else {
          lVar32 = lVar30 + uVar20 * 0x178;
          fVar51 = fVar51 - fVar68;
          fVar63 = *(float *)(lVar32 + 0x70);
          fVar64 = *(float *)(lVar32 + 0x98);
          fVar57 = *(float *)(lVar32 + 0xc0);
          *pfVar33 = fVar49 + (fVar50 - fVar68) / fVar51;
          *(float *)(lVar32 + 0x8c) = fVar49 + (fVar63 - fVar68) / fVar51;
          *(float *)(lVar32 + 0xb4) = fVar49 + (fVar64 - fVar68) / fVar51;
          *(float *)(lVar32 + 0xdc) = fVar49 + (fVar57 - fVar68) / fVar51;
        }
      }
    }
    else if (iVar16 == 2) {
      lVar32 = lVar30 + uVar20 * 0x178;
      *(float *)(lVar32 + 100) =
           fVar49 + ((in_stack_00000120 + *(float *)(lVar32 + 0x48)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar32 + 0x8c) =
           fVar49 + ((in_stack_00000120 + *(float *)(lVar32 + 0x70)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar32 + 0xb4) =
           fVar49 + ((in_stack_00000120 + *(float *)(lVar32 + 0x98)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar32 + 0xdc) =
           fVar49 + ((in_stack_00000120 + *(float *)(lVar32 + 0xc0)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
    }
    else if (iVar16 == 3) {
      iVar16 = (int)unaff_x19[0x69];
      if (iVar16 < 2) {
        if (iVar16 == 0) {
          lVar32 = lVar30 + uVar20 * 0x178;
          *(undefined4 *)(lVar32 + 0x68) = 0;
          *(undefined4 *)(lVar32 + 0x90) = 0x3f800000;
          *(undefined4 *)(lVar32 + 0xb8) = 0;
          *(undefined4 *)(lVar32 + 0xe0) = 0x3f800000;
        }
        else if (iVar16 == 1) {
          lVar32 = lVar30 + uVar20 * 0x178;
          fVar50 = fVar50 - fVar63;
          fVar51 = (*(float *)(lVar32 + 0x74) - fVar63) / fVar50;
          fVar50 = fVar49 + (*(float *)(lVar32 + 0x4c) - fVar63) / fVar50;
          *(float *)(lVar32 + 0x68) = fVar50;
          *(float *)(lVar32 + 0xb8) = fVar50;
          goto LAB_09f37c10;
        }
      }
      else if (iVar16 == 2) {
        lVar32 = lVar30 + uVar20 * 0x178;
        fVar50 = fVar49 + (*(float *)(lVar32 + 0x4c) - *(float *)((long)unaff_x19 + 0x4f4)) /
                          (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4)
                          );
        *(float *)(lVar32 + 0x68) = fVar50;
        fVar51 = *(float *)((long)unaff_x19 + 0x4f4);
        fVar63 = *(float *)((long)unaff_x19 + 0x4fc);
        *(float *)(lVar32 + 0xb8) = fVar50;
        fVar51 = (*(float *)(lVar32 + 0x74) - fVar51) / (fVar63 - fVar51);
LAB_09f37c10:
        *(float *)(lVar32 + 0x90) = fVar49 + fVar51;
        *(float *)(lVar32 + 0xe0) = fVar49 + fVar51;
      }
      else if (iVar16 == 3) {
        if (*(int *)(*(long *)PTR_DAT_0ac0a4a0 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        FUN_0a1374b0(*(undefined8 *)PTR_DAT_0acd4098,0);
        uVar40 = (uint)*(undefined8 *)(lVar26 + 0x18);
      }
      if (uVar40 <= uVar11) goto LAB_09f39b0c;
      lVar32 = lVar30 + uVar20 * 0x178;
      fVar63 = *(float *)(lVar32 + 0x138);
      fVar51 = (1.0 - (*(float *)(lVar32 + 0x68) + *(float *)(lVar32 + 0x90)) * fVar63) * 0.5;
      fVar50 = fVar49 + *(float *)(lVar32 + 0x68) * fVar63 + fVar51;
      fVar49 = fVar49 + fVar51 + *(float *)(lVar32 + 0x90) * fVar63;
      *(float *)(lVar32 + 100) = fVar50;
      *(float *)(lVar32 + 0x8c) = fVar50;
      *(float *)(lVar32 + 0xb4) = fVar49;
      *(float *)(lVar32 + 0xdc) = fVar49;
    }
    iVar16 = (int)unaff_x19[0x69];
    if (iVar16 < 2) {
      if (iVar16 == 0) {
        if (uVar40 <= uVar11) goto LAB_09f39b0c;
        lVar32 = lVar30 + uVar20 * 0x178;
        *(undefined4 *)(lVar32 + 0x68) = 0;
        *(undefined4 *)(lVar32 + 0x90) = 0x3f800000;
        *(undefined4 *)(lVar32 + 0xb8) = 0x3f800000;
        *(undefined4 *)(lVar32 + 0xe0) = 0;
      }
      else if (iVar16 == 1) {
        if (uVar11 < uVar40) {
          lVar32 = lVar30 + uVar20 * 0x178;
          fVar67 = fVar67 - fVar53;
          fVar49 = (*(float *)(lVar32 + 0x4c) - fVar53) / fVar67;
          fVar67 = (*(float *)(lVar32 + 0x74) - fVar53) / fVar67;
          *(float *)(lVar32 + 0x68) = fVar49;
          goto LAB_09f37d88;
        }
        goto LAB_09f39b0c;
      }
    }
    else if (iVar16 == 2) {
      if (uVar40 <= uVar11) goto LAB_09f39b0c;
      lVar32 = lVar30 + uVar20 * 0x178;
      fVar49 = (*(float *)(lVar32 + 0x4c) - *(float *)((long)unaff_x19 + 0x4f4)) /
               (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
      *(float *)(lVar32 + 0x68) = fVar49;
      fVar67 = (*(float *)(lVar32 + 0x74) - *(float *)((long)unaff_x19 + 0x4f4)) /
               (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
LAB_09f37d88:
      *(float *)(lVar32 + 0x90) = fVar67;
      *(float *)(lVar32 + 0xb8) = fVar67;
      *(float *)(lVar32 + 0xe0) = fVar49;
    }
    else if (iVar16 == 3) {
      if (uVar40 <= uVar11) goto LAB_09f39b0c;
      lVar32 = lVar30 + uVar20 * 0x178;
      fVar51 = *(float *)(lVar32 + 0x138);
      fVar50 = (1.0 - (*(float *)(lVar32 + 100) + *(float *)(lVar32 + 0xb4)) / fVar51) * 0.5;
      fVar49 = *(float *)(lVar32 + 100) / fVar51 + fVar50;
      fVar50 = fVar50 + *(float *)(lVar32 + 0xb4) / fVar51;
      *(float *)(lVar32 + 0x68) = fVar49;
      *(float *)(lVar32 + 0xe0) = fVar49;
      *(float *)(lVar32 + 0x90) = fVar50;
      *(float *)(lVar32 + 0xb8) = fVar50;
    }
    if (uVar40 <= uVar11) goto LAB_09f39b0c;
    lVar32 = lVar30 + uVar20 * 0x178;
    fVar49 = ABS(auVar59._0_4_) * *(float *)(lVar32 + 0x13c) * (1.0 - *(float *)(unaff_x19 + 0x60));
    if ((*(char *)(lVar32 + 0x34) == '\0') &&
       ((*(byte *)(lVar30 + uVar20 * 0x178 + 0x16c) & 1) != 0)) {
      fVar49 = -fVar49;
    }
    lVar32 = lVar30 + uVar20 * 0x178;
    *(float *)(lVar32 + 0x60) = fVar49;
    *(float *)(lVar32 + 0x88) = fVar49;
    *(float *)(lVar32 + 0xb0) = fVar49;
    *(float *)(lVar32 + 0xd8) = fVar49;
  }
  if (((int)uVar11 < (int)unaff_x19[0x6c]) &&
     (iStack00000000000000ec < *(int *)((long)unaff_x19 + 0x364))) {
    if (((int)unaff_x19[0x6d] <= (int)uVar13) || ((int)unaff_x19[0x62] == 5)) {
      if (((int)uVar13 < (int)unaff_x19[0x6d]) && ((int)unaff_x19[0x62] == 5)) {
        if (uVar11 < uVar40) {
          if (*(uint *)(lVar30 + uVar20 * 0x178 + 0x40) == in_stack_00000040._4_4_) {
            lVar21 = lVar30 + uVar20 * 0x178;
            *(ulong *)(lVar21 + 0x48) =
                 CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar21 + 0x48) >> 0x20),
                          fVar66 + (float)*(undefined8 *)(lVar21 + 0x48));
            *(float *)(lVar21 + 0x50) = fVar65 + *(float *)(lVar21 + 0x50);
            *(ulong *)(lVar21 + 0x70) =
                 CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar21 + 0x70) >> 0x20),
                          fVar66 + (float)*(undefined8 *)(lVar21 + 0x70));
            *(float *)(lVar21 + 0x78) = fVar65 + *(float *)(lVar21 + 0x78);
            *(ulong *)(lVar21 + 0x98) =
                 CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar21 + 0x98) >> 0x20),
                          fVar66 + (float)*(undefined8 *)(lVar21 + 0x98));
            *(float *)(lVar21 + 0xa0) = fVar65 + *(float *)(lVar21 + 0xa0);
            *(ulong *)(lVar21 + 0xc0) =
                 CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar21 + 0xc0) >> 0x20),
                          fVar66 + (float)*(undefined8 *)(lVar21 + 0xc0));
            *(float *)(lVar21 + 200) = fVar65 + *(float *)(lVar21 + 200);
            goto LAB_09f37f94;
          }
          goto LAB_09f37ed0;
        }
        goto LAB_09f39b0c;
      }
      goto LAB_09f37ed0;
    }
    if (uVar40 <= uVar11) goto LAB_09f39b0c;
    lVar21 = lVar30 + uVar20 * 0x178;
    *(ulong *)(lVar21 + 0x48) =
         CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar21 + 0x48) >> 0x20),
                  fVar66 + (float)*(undefined8 *)(lVar21 + 0x48));
    *(float *)(lVar21 + 0x50) = fVar65 + *(float *)(lVar21 + 0x50);
    *(ulong *)(lVar21 + 0x70) =
         CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar21 + 0x70) >> 0x20),
                  fVar66 + (float)*(undefined8 *)(lVar21 + 0x70));
    *(float *)(lVar21 + 0x78) = fVar65 + *(float *)(lVar21 + 0x78);
    *(ulong *)(lVar21 + 0x98) =
         CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar21 + 0x98) >> 0x20),
                  fVar66 + (float)*(undefined8 *)(lVar21 + 0x98));
    *(float *)(lVar21 + 0xa0) = fVar65 + *(float *)(lVar21 + 0xa0);
    *(ulong *)(lVar21 + 0xc0) =
         CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar21 + 0xc0) >> 0x20),
                  fVar66 + (float)*(undefined8 *)(lVar21 + 0xc0));
    *(float *)(lVar21 + 200) = fVar65 + *(float *)(lVar21 + 200);
  }
  else {
LAB_09f37ed0:
    if (uVar40 <= uVar11) goto LAB_09f39b0c;
    if (DAT_0b31f3e7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      uVar40 = *(uint *)(lVar26 + 0x18);
      DAT_0b31f3e7 = '\x01';
    }
    puVar7 = PTR_DAT_0ac0def8;
    uVar61 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_0ac0def8 + 0xb8) + 1);
    *(undefined8 *)(lVar30 + uVar20 * 0x178 + 0x48) =
         **(undefined8 **)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
    *(undefined4 *)(lVar30 + uVar20 * 0x178 + 0x50) = uVar61;
    if (uVar40 <= uVar11) goto LAB_09f39b0c;
    lVar32 = lVar30 + uVar20 * 0x178;
    uVar61 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
    *(undefined8 *)(lVar32 + 0x70) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
    *(undefined4 *)(lVar32 + 0x78) = uVar61;
    uVar61 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
    *(undefined8 *)(lVar32 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
    *(undefined4 *)(lVar32 + 0xa0) = uVar61;
    uVar18 = **(undefined8 **)(*(long *)puVar7 + 0xb8);
    uVar61 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
    *(undefined1 *)(lVar21 + 0x170) = 0;
    *(undefined8 *)(lVar32 + 0xc0) = uVar18;
    *(undefined4 *)(lVar32 + 200) = uVar61;
  }
LAB_09f37f94:
  iVar16 = FUN_0a14441c(0);
  *(bool *)((long)unaff_x19 + 0x174) = iVar16 == 1;
  plVar44 = (long *)PTR_DAT_0ac7e998;
  if (iVar17 == 0) {
    puVar27 = (undefined8 *)(*unaff_x19 + 0x8d8);
  }
  else {
    if (iVar17 != 1) goto LAB_09f38010;
    puVar27 = (undefined8 *)(*unaff_x19 + 0x8f8);
  }
  (*(code *)*puVar27)();
LAB_09f38010:
  if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
  goto LAB_09f39990;
  if (*(uint *)(lVar21 + 0x18) <= uVar11) goto LAB_09f39b0c;
  lVar21 = lVar21 + uVar20 * 0x178;
  uVar18 = *(undefined8 *)(lVar21 + 0x114);
  *(float *)(lVar21 + 0x11c) = fVar65 + *(float *)(lVar21 + 0x11c);
  *(undefined8 *)(lVar21 + 0x114) =
       CONCAT44(fVar54 + (float)((ulong)uVar18 >> 0x20),fVar66 + (float)uVar18);
  if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
  goto LAB_09f39990;
  if (*(uint *)(lVar21 + 0x18) <= uVar11) goto LAB_09f39b0c;
  lVar21 = lVar21 + uVar20 * 0x178;
  *(ulong *)(lVar21 + 0x108) =
       CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar21 + 0x108) >> 0x20),
                fVar66 + (float)*(undefined8 *)(lVar21 + 0x108));
  *(float *)(lVar21 + 0x110) = fVar65 + *(float *)(lVar21 + 0x110);
  if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
  goto LAB_09f39990;
  if (*(uint *)(lVar21 + 0x18) <= uVar11) goto LAB_09f39b0c;
  lVar21 = lVar21 + uVar20 * 0x178;
  *(ulong *)(lVar21 + 0x120) =
       CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar21 + 0x120) >> 0x20),
                fVar66 + (float)*(undefined8 *)(lVar21 + 0x120));
  *(float *)(lVar21 + 0x128) = fVar65 + *(float *)(lVar21 + 0x128);
  if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
  goto LAB_09f39990;
  if (*(uint *)(lVar21 + 0x18) <= uVar11) goto LAB_09f39b0c;
  lVar21 = lVar21 + uVar20 * 0x178;
  uVar18 = *(undefined8 *)(lVar21 + 300);
  *(float *)(lVar21 + 0x134) = fVar65 + *(float *)(lVar21 + 0x134);
  *(undefined8 *)(lVar21 + 300) =
       CONCAT44(fVar54 + (float)((ulong)uVar18 >> 0x20),fVar66 + (float)uVar18);
  lVar21 = unaff_x19[0x74];
  if ((lVar21 == 0) || (lVar32 = *(long *)(lVar21 + 0x38), lVar32 == 0)) goto LAB_09f39990;
  uVar40 = *(uint *)(lVar32 + 0x18);
  if (uVar40 <= uVar11) goto LAB_09f39b0c;
  lVar36 = lVar32 + 0x20 + uVar20 * 0x178;
  uVar18 = *(undefined8 *)(lVar36 + 0x118);
  auVar56._0_8_ = CONCAT44(fVar66 + (float)((ulong)uVar18 >> 0x20),fVar66 + (float)uVar18);
  auVar56._8_4_ = fVar54 + (float)*(undefined8 *)(lVar36 + 0x120);
  auVar56._12_4_ = fVar54 + (float)((ulong)*(undefined8 *)(lVar36 + 0x120) >> 0x20);
  *(float *)(lVar36 + 0x128) = fVar54 + *(float *)(lVar36 + 0x128);
  *(long *)(lVar36 + 0x120) = auVar56._8_8_;
  *(undefined8 *)(lVar36 + 0x118) = auVar56._0_8_;
  if (uVar13 == uVar12) {
    uVar12 = *(int *)(in_stack_000001a8 + 7) - 1;
    if (uVar11 == uVar12) goto LAB_09f38220;
  }
  else {
    lVar21 = *(long *)(lVar21 + 0x50);
    if (lVar21 == 0) goto LAB_09f39990;
    if (*(uint *)(lVar21 + 0x18) <= uVar12) goto LAB_09f39b0c;
    lVar36 = lVar21 + 0x20 + (long)(int)uVar12 * 0x60;
    fVar50 = fVar54 + *(float *)(lVar36 + 0x38);
    *(ulong *)(lVar36 + 0x30) =
         CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar36 + 0x30) >> 0x20),
                  fVar54 + (float)*(undefined8 *)(lVar36 + 0x30));
    *(float *)(lVar36 + 0x38) = fVar50;
    *(float *)(lVar36 + 0x3c) = fVar66 + *(float *)(lVar36 + 0x3c);
    if (uVar40 <= *(uint *)(lVar36 + 0x18)) goto LAB_09f39b0c;
    lVar21 = lVar21 + 0x20 + (long)(int)uVar12 * 0x60;
    uVar61 = *(undefined4 *)(lVar32 + 0x20 + (long)(int)*(uint *)(lVar36 + 0x18) * 0x178 + 0xf4);
    *(float *)(lVar21 + 0x54) = fVar50;
    *(undefined4 *)(lVar21 + 0x50) = uVar61;
    lVar21 = unaff_x19[0x74];
    if ((lVar21 == 0) || (lVar32 = *(long *)(lVar21 + 0x50), lVar32 == 0)) goto LAB_09f39990;
    if (*(uint *)(lVar32 + 0x18) <= uVar12) goto LAB_09f39b0c;
    lVar21 = *(long *)(lVar21 + 0x38);
    if (lVar21 == 0) goto LAB_09f39990;
    uVar40 = *(uint *)(lVar32 + 0x20 + (long)(int)uVar12 * 0x60 + 0x24);
    if (*(uint *)(lVar21 + 0x18) <= uVar40) goto LAB_09f39b0c;
    lVar32 = lVar32 + 0x20 + (long)(int)uVar12 * 0x60;
    *(undefined4 *)(lVar32 + 0x58) = *(undefined4 *)(lVar21 + (long)(int)uVar40 * 0x178 + 0x120);
    *(undefined4 *)(lVar32 + 0x5c) = *(undefined4 *)(lVar32 + 0x30);
    uVar12 = *(int *)(in_stack_000001a8 + 7) - 1;
LAB_09f38220:
    if (uVar11 == uVar12) {
      lVar21 = unaff_x19[0x74];
      if ((lVar21 == 0) || (lVar32 = *(long *)(lVar21 + 0x50), lVar32 == 0)) goto LAB_09f39990;
      if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_09f39b0c;
      lVar36 = lVar32 + 0x20 + (long)(int)uVar13 * 0x60;
      fVar50 = fVar54 + *(float *)(lVar36 + 0x38);
      *(ulong *)(lVar36 + 0x30) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar36 + 0x30) >> 0x20),
                    fVar54 + (float)*(undefined8 *)(lVar36 + 0x30));
      *(float *)(lVar36 + 0x38) = fVar50;
      *(float *)(lVar36 + 0x3c) = fVar66 + *(float *)(lVar36 + 0x3c);
      lVar21 = *(long *)(lVar21 + 0x38);
      if (lVar21 == 0) goto LAB_09f39990;
      uVar12 = *(uint *)(lVar32 + 0x20 + (long)(int)uVar13 * 0x60 + 0x18);
      if (*(uint *)(lVar21 + 0x18) <= uVar12) goto LAB_09f39b0c;
      *(undefined4 *)(lVar36 + 0x50) = *(undefined4 *)(lVar21 + (long)(int)uVar12 * 0x178 + 0x114);
      *(float *)(lVar36 + 0x54) = fVar50;
      lVar21 = unaff_x19[0x74];
      if ((lVar21 == 0) || (lVar32 = *(long *)(lVar21 + 0x50), lVar32 == 0)) goto LAB_09f39990;
      if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_09f39b0c;
      lVar21 = *(long *)(lVar21 + 0x38);
      if (lVar21 == 0) goto LAB_09f39990;
      uVar12 = *(uint *)(lVar32 + 0x20 + (long)(int)uVar13 * 0x60 + 0x24);
      if (*(uint *)(lVar21 + 0x18) <= uVar12) goto LAB_09f39b0c;
      lVar32 = lVar32 + 0x20 + (long)(int)uVar13 * 0x60;
      *(undefined4 *)(lVar32 + 0x58) = *(undefined4 *)(lVar21 + (long)(int)uVar12 * 0x178 + 0x120);
      *(undefined4 *)(lVar32 + 0x5c) = *(undefined4 *)(lVar32 + 0x30);
    }
  }
  if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0x88) + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar37 = FUN_08cca0f4(uVar46,0);
  if (((((uVar37 & 1) == 0) && (1 < uVar46 - 0x2010)) && (uVar46 != 0xad)) && (uVar46 != 0x2d)) {
    if (bVar5) {
      if (((uVar11 != 0) && ((int)uVar11 < (int)(*(uint *)(lVar26 + 0x18) - 1))) &&
         (((int)uVar11 < *(int *)(in_stack_000001a8 + 7) && ((uVar46 == 0x2019 || (uVar46 == 0x27)))
          ))) {
        if (*(uint *)(lVar26 + 0x18) <= uVar11 - 1) goto LAB_09f39b0c;
        uVar45 = *(undefined2 *)(lVar30 + (ulong)(uVar11 - 1) * 0x178 + 4);
        if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0x88) + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar37 = FUN_08cca0f4(uVar45,0);
        if ((uVar37 & 1) != 0) {
          if (*(uint *)(lVar26 + 0x18) <= uVar11 + 1) goto LAB_09f39b0c;
          uVar45 = *(undefined2 *)(lVar30 + (ulong)(uVar11 + 1) * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0x88) + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar37 = FUN_08cca0f4(uVar45,0);
          plVar44 = (long *)PTR_DAT_0ac7e998;
          if ((uVar37 & 1) != 0) goto LAB_09f38520;
        }
      }
LAB_09f3925c:
      if (uVar11 == *(int *)(in_stack_000001a8 + 7) - 1U) {
        if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0x88) + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar37 = FUN_08cca0f4(uVar46,0);
        uVar12 = uVar11;
        if ((uVar37 & 1) == 0) goto LAB_09f39298;
      }
      else {
LAB_09f39298:
        uVar12 = uVar11 - 1;
      }
      lVar21 = unaff_x19[0x74];
      if (lVar21 != 0) {
        lVar32 = *(long *)(lVar21 + 0x40);
        if (lVar32 != 0) {
          uVar40 = *(uint *)(lVar21 + 0x24);
          iVar17 = *(int *)(lVar32 + 0x18);
          if (iVar17 < (int)(uVar40 + 1)) {
            if (*(int *)(*(long *)PTR_DAT_0acd3ff8 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            FUN_05e4cfec((long *)(lVar21 + 0x40),iVar17 + 1,*(undefined8 *)PTR_DAT_0acd3ff0);
            lVar21 = unaff_x19[0x74];
            if (lVar21 == 0) goto LAB_09f39990;
          }
          plVar44 = (long *)PTR_DAT_0ac7e998;
          lVar21 = *(long *)(lVar21 + 0x40);
          if (lVar21 != 0) {
            if (uVar40 < *(uint *)(lVar21 + 0x18)) {
              lVar21 = lVar21 + (long)(int)uVar40 * 0x18;
              *(long **)(lVar21 + 0x20) = unaff_x19;
              *(uint *)(lVar21 + 0x28) = uVar15;
              *(uint *)(lVar21 + 0x2c) = uVar12;
              *(uint *)(lVar21 + 0x30) = (uVar12 - uVar15) + 1;
              thunk_FUN_049ee3d8();
              lVar21 = unaff_x19[0x74];
              if (lVar21 != 0) {
                lVar32 = *(long *)(lVar21 + 0x50);
                *(int *)(lVar21 + 0x24) = *(int *)(lVar21 + 0x24) + 1;
                if (lVar32 != 0) {
                  if (uVar13 < *(uint *)(lVar32 + 0x18)) {
                    bVar5 = false;
                    goto LAB_09f3843c;
                  }
                  goto LAB_09f39b0c;
                }
              }
              goto LAB_09f39990;
            }
            goto LAB_09f39b0c;
          }
        }
      }
      goto LAB_09f39990;
    }
    if (uVar11 == 0) {
      if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0x88) + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      bVar10 = FUN_08cca04c(uVar46,0);
      if ((((uVar46 == 0x200b | bVar10 ^ 0xff | bVar9) & 1) != 0) ||
         (*(int *)(in_stack_000001a8 + 7) == 1)) goto LAB_09f3925c;
    }
    bVar5 = false;
  }
  else {
    if (!bVar5) {
      uVar15 = uVar11;
    }
    if (uVar11 != *(int *)(in_stack_000001a8 + 7) - 1U) {
LAB_09f38520:
      bVar5 = true;
      goto FUN_09f38528;
    }
    lVar21 = unaff_x19[0x74];
    if (lVar21 == 0) goto LAB_09f39990;
    lVar32 = *(long *)(lVar21 + 0x40);
    if (lVar32 == 0) goto LAB_09f39990;
    uVar12 = *(uint *)(lVar21 + 0x24);
    iVar17 = *(int *)(lVar32 + 0x18);
    if (iVar17 < (int)(uVar12 + 1)) {
      if (*(int *)(*(long *)PTR_DAT_0acd3ff8 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_05e4cfec((long *)(lVar21 + 0x40),iVar17 + 1,*(undefined8 *)PTR_DAT_0acd3ff0);
      lVar21 = unaff_x19[0x74];
      if (lVar21 == 0) goto LAB_09f39990;
    }
    plVar44 = (long *)PTR_DAT_0ac7e998;
    lVar21 = *(long *)(lVar21 + 0x40);
    if (lVar21 == 0) goto LAB_09f39990;
    if (*(uint *)(lVar21 + 0x18) <= uVar12) goto LAB_09f39b0c;
    lVar21 = lVar21 + (long)(int)uVar12 * 0x18;
    *(long **)(lVar21 + 0x20) = unaff_x19;
    *(uint *)(lVar21 + 0x28) = uVar15;
    *(uint *)(lVar21 + 0x2c) = uVar11;
    *(uint *)(lVar21 + 0x30) = (uVar11 - uVar15) + 1;
    thunk_FUN_049ee3d8();
    lVar21 = unaff_x19[0x74];
    if (lVar21 == 0) goto LAB_09f39990;
    lVar32 = *(long *)(lVar21 + 0x50);
    *(int *)(lVar21 + 0x24) = *(int *)(lVar21 + 0x24) + 1;
    if (lVar32 == 0) goto LAB_09f39990;
    if (*(uint *)(lVar32 + 0x18) <= uVar13) goto LAB_09f39b0c;
    bVar5 = true;
LAB_09f3843c:
    lVar32 = lVar32 + (long)(int)uVar13 * 0x60;
    iStack00000000000000ec = iStack00000000000000ec + 1;
    *(int *)(lVar32 + 0x34) = *(int *)(lVar32 + 0x34) + 1;
  }
FUN_09f38528:
  lVar21 = unaff_x19[0x74];
  if ((lVar21 == 0) || (lVar32 = *(long *)(lVar21 + 0x38), lVar32 == 0)) goto LAB_09f39990;
  if (*(uint *)(lVar32 + 0x18) <= uVar11) goto LAB_09f39b0c;
  lVar36 = lVar32 + 0x20;
  if ((*(byte *)(lVar36 + uVar20 * 0x178 + 0x16c) >> 2 & 1) == 0) {
    if (bVar6) {
      if (*(uint *)(lVar32 + 0x18) <= (uint)((long)(int)uVar11 + -1)) goto LAB_09f39b0c;
      lVar36 = lVar36 + ((long)(int)uVar11 + -1) * 0x178;
      lVar32 = *unaff_x19;
      uVar61 = *(undefined4 *)(lVar36 + 0x100);
      uVar62 = *(undefined4 *)(lVar36 + 0x13c);
LAB_09f387d4:
      pcVar28 = *(code **)(lVar32 + 0x908);
LAB_09f387dc:
      (*pcVar28)(fStack0000000000000070,fStack0000000000000068,uStack000000000000006c,uVar61,
                 fStack0000000000000140,0,in_stack_00000078._4_4_,uVar62);
LAB_09f38818:
      lVar21 = *plVar44;
      if (*(int *)(lVar21 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar21 = *plVar44;
      }
      fVar48 = 0.0;
      fStack000000000000013c = 0.0;
      fStack0000000000000140 = *(float *)(*(long *)(lVar21 + 0xb8) + 0x1730);
    }
    bVar6 = false;
  }
  else {
    lVar32 = lVar36 + uVar20 * 0x178;
    *(int *)(lVar32 + 0x148) = iVar14;
    iVar17 = *(int *)(lVar32 + 0x40);
    if ((((int)unaff_x19[0x6c] < (int)uVar11) || ((int)unaff_x19[0x6d] < (int)uVar13)) ||
       (((int)unaff_x19[0x62] == 5 && (iVar17 + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar9 & 1) == 0 && uVar46 != 0x200b) {
      fVar66 = *(float *)(lVar36 + uVar20 * 0x178 + 0x13c);
      if (fVar48 <= fVar66) {
        fVar48 = fVar66;
      }
      if (fStack000000000000013c <= ABS(fVar49)) {
        fStack000000000000013c = ABS(fVar49);
      }
      if (iVar17 != uStack0000000000000064) {
        if (*(int *)(*plVar44 + 0xe4) == 0) {
          thunk_FUN_049a583c();
          lVar21 = unaff_x19[0x74];
          if (lVar21 == 0) goto LAB_09f39990;
          lVar32 = *(long *)(*plVar44 + 0xb8);
        }
        else {
          lVar32 = *(long *)(*plVar44 + 0xb8);
        }
        fStack0000000000000140 = *(float *)(lVar32 + 0x1730);
      }
      lVar21 = *(long *)(lVar21 + 0x38);
      if (lVar21 == 0) goto LAB_09f39990;
      if (*(uint *)(lVar21 + 0x18) <= uVar11) goto LAB_09f39b0c;
      if (unaff_x19[0x1f] == 0) goto LAB_09f39990;
      fVar50 = *(float *)(lVar21 + uVar20 * 0x178 + 0x144);
      fVar66 = (float)UnityEngine_UIElements_UxmlIntAttributeDescription__TryGetValueFromBag
                                (unaff_x19[0x1f] + 0x28,0);
      fVar50 = fVar50 + fVar48 * fVar66;
      uStack0000000000000064 = iVar17;
      if (fVar50 <= fStack0000000000000140) {
        fStack0000000000000140 = fVar50;
      }
    }
    fVar66 = fVar48;
    if (!bVar6) {
      bVar6 = false;
      if ((bVar1) && ((int)uVar11 <= (int)uVar42)) {
        if ((uVar46 & 0xfffe) == 10) goto LAB_09f38848;
        if (uVar46 != 0xd) {
          if (uVar11 == uVar42) {
            if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0x88) + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            uVar37 = FUN_08ccaff8(uVar46,0);
            if ((uVar37 & 1) != 0) goto LAB_09f3872c;
          }
          if ((unaff_x19[0x74] != 0) && (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 != 0)) {
            if (uVar11 < *(uint *)(lVar21 + 0x18)) {
              lVar21 = lVar21 + uVar20 * 0x178;
              in_stack_00000078._4_4_ = *(float *)(lVar21 + 0x15c);
              fVar50 = fVar49;
              fVar66 = in_stack_00000078._4_4_;
              if (fVar48 != 0.0) {
                fVar50 = fStack000000000000013c;
                fVar66 = fVar48;
              }
              uStack000000000000006c = 0;
              fStack0000000000000070 = *(float *)(lVar21 + 0x114);
              uVar52 = *(undefined4 *)(lVar21 + 0x164);
              fStack0000000000000068 = fStack0000000000000140;
              fStack000000000000013c = fVar50;
              goto LAB_09f38798;
            }
            goto LAB_09f39b0c;
          }
          goto LAB_09f39990;
        }
      }
LAB_09f3872c:
      bVar6 = false;
      goto LAB_09f38848;
    }
LAB_09f38798:
    if (*(int *)(in_stack_000001a8 + 7) == 1) {
      if ((unaff_x19[0x74] != 0) && (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 != 0)) {
        if (uVar11 < *(uint *)(lVar21 + 0x18)) {
          lVar21 = lVar21 + uVar20 * 0x178;
LAB_09f387c8:
          lVar32 = *unaff_x19;
          uVar61 = *(undefined4 *)(lVar21 + 0x120);
          uVar62 = *(undefined4 *)(lVar21 + 0x15c);
          goto LAB_09f387d4;
        }
        goto LAB_09f39b0c;
      }
      goto LAB_09f39990;
    }
    if ((uVar11 == uVar29) || ((int)uVar42 <= (int)uVar11)) {
      lVar21 = unaff_x19[0x74];
      if ((bVar9 & 1) == 0 && uVar46 != 0x200b) {
        if ((lVar21 == 0) || (lVar21 = *(long *)(lVar21 + 0x38), lVar21 == 0)) goto LAB_09f39990;
        if (*(uint *)(lVar21 + 0x18) <= uVar11) goto LAB_09f39b0c;
        lVar21 = lVar21 + uVar20 * 0x178;
      }
      else {
        if ((lVar21 == 0) || (lVar21 = *(long *)(lVar21 + 0x38), lVar21 == 0)) goto LAB_09f39990;
        if (*(uint *)(lVar21 + 0x18) <= uVar42) goto LAB_09f39b0c;
        lVar21 = lVar21 + (long)(int)uVar42 * 0x178;
      }
      uVar61 = *(undefined4 *)(lVar21 + 0x120);
      uVar62 = *(undefined4 *)(lVar21 + 0x15c);
      pcVar28 = *(code **)(*unaff_x19 + 0x908);
      goto LAB_09f387dc;
    }
    if (!bVar1) {
      if ((unaff_x19[0x74] != 0) && (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 != 0)) {
        if ((uint)((long)(int)uVar11 + -1) < *(uint *)(lVar21 + 0x18)) {
          lVar21 = lVar21 + ((long)(int)uVar11 + -1) * 0x178;
          goto LAB_09f387c8;
        }
        goto LAB_09f39b0c;
      }
      goto LAB_09f39990;
    }
    fVar48 = fVar66;
    if ((int)uVar11 < *(int *)(in_stack_000001a8 + 7) + -1) {
      if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
      goto LAB_09f39990;
      if (*(uint *)(lVar21 + 0x18) <= uVar11 + 1) goto LAB_09f39b0c;
      uVar37 = FUN_09f54008(uVar52,*(undefined4 *)(lVar21 + (ulong)(uVar11 + 1) * 0x178 + 0x164),0);
      if ((uVar37 & 1) == 0) {
        if ((unaff_x19[0x74] != 0) && (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 != 0)) {
          if (uVar11 < *(uint *)(lVar21 + 0x18)) {
            lVar21 = lVar21 + uVar20 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000070,fStack0000000000000068,uStack000000000000006c,
                       *(undefined4 *)(lVar21 + 0x120),fStack0000000000000140,0,
                       in_stack_00000078._4_4_,*(undefined4 *)(lVar21 + 0x15c));
            plVar44 = (long *)PTR_DAT_0ac7e998;
            goto LAB_09f38818;
          }
          goto LAB_09f39b0c;
        }
        goto LAB_09f39990;
      }
      bVar6 = true;
      plVar44 = (long *)PTR_DAT_0ac7e998;
    }
    else {
      bVar6 = true;
    }
  }
LAB_09f38848:
  if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
  goto LAB_09f39990;
  if (*(uint *)(lVar21 + 0x18) <= uVar11) goto LAB_09f39b0c;
  if (lVar35 == 0) goto LAB_09f39990;
  uVar12 = *(uint *)(lVar21 + uVar20 * 0x178 + 0x18c);
  fVar66 = (float)FUN_0a219020(lVar35 + 0x28,0);
  if ((uVar12 >> 6 & 1) == 0) {
    if (bVar8) {
      if ((unaff_x19[0x74] != 0) && (lVar35 = *(long *)(unaff_x19[0x74] + 0x38), lVar35 != 0)) {
        if ((uint)((long)(int)uVar11 + -1) < *(uint *)(lVar35 + 0x18)) {
          lVar35 = lVar35 + ((long)(int)uVar11 + -1) * 0x178;
          goto LAB_09f38afc;
        }
        goto LAB_09f39b0c;
      }
      goto LAB_09f39990;
    }
UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportVolumeDestinationSettings___ctor
    :
    bVar8 = false;
  }
  else {
    lVar21 = unaff_x19[0x74];
    if ((lVar21 == 0) || (lVar32 = *(long *)(lVar21 + 0x38), lVar32 == 0)) goto LAB_09f39990;
    if (*(uint *)(lVar32 + 0x18) <= uVar11) goto LAB_09f39b0c;
    *(int *)(lVar32 + 0x20 + uVar20 * 0x178 + 0x150) = iVar14;
    if ((((int)unaff_x19[0x6c] < (int)uVar11) || ((int)unaff_x19[0x6d] < (int)uVar13)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar32 + 0x20 + uVar20 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((((bool)(bVar8 | bVar1 ^ 1U)) || ((int)uVar42 < (int)uVar11)) || ((uVar46 & 0xfffe) == 10))
       || (uVar46 == 0xd)) {
LAB_09f38988:
      if (!bVar8)
      goto 
      UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportVolumeDestinationSettings___ctor
      ;
    }
    else {
      if (uVar11 == uVar42) {
        if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0x88) + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar37 = FUN_08ccaff8(uVar46,0);
        if ((uVar37 & 1) != 0) goto LAB_09f38988;
        lVar21 = unaff_x19[0x74];
        if (lVar21 == 0) goto LAB_09f39990;
      }
      lVar21 = *(long *)(lVar21 + 0x38);
      if (lVar21 == 0) goto LAB_09f39990;
      if (*(uint *)(lVar21 + 0x18) <= uVar11) goto LAB_09f39b0c;
      lVar21 = lVar21 + uVar20 * 0x178;
      in_stack_000000a0._4_4_ = *(float *)(lVar21 + 0x15c);
      fStack0000000000000098 = fVar66 * in_stack_000000a0._4_4_ + *(float *)(lVar21 + 0x144);
      uStack0000000000000090 = 0;
      fStack000000000000005c = *(float *)(lVar21 + 0x58);
      fStack0000000000000094 = *(float *)(lVar21 + 0x114);
    }
    iVar17 = *(int *)(in_stack_000001a8 + 7);
    if (iVar17 == 1) {
LAB_09f38ad0:
      if ((unaff_x19[0x74] == 0) || (lVar35 = *(long *)(unaff_x19[0x74] + 0x38), lVar35 == 0))
      goto LAB_09f39990;
      if (*(uint *)(lVar35 + 0x18) <= uVar11) goto LAB_09f39b0c;
      lVar35 = lVar35 + uVar20 * 0x178;
LAB_09f38afc:
      fVar50 = *(float *)(lVar35 + 0x144);
      lVar21 = *unaff_x19;
      uVar61 = *(undefined4 *)(lVar35 + 0x120);
    }
    else {
      if (uVar11 != uVar29) {
        if (iVar17 <= (int)uVar11) {
LAB_09f38bd4:
          if ((int)uVar11 < iVar17) {
            iVar17 = FUN_0a180770(lVar35,0);
            if (*(uint *)(lVar26 + 0x18) <= uVar11 + 1) goto LAB_09f39b0c;
            lVar35 = *(long *)(lVar30 + (ulong)(uVar11 + 1) * 0x178 + 0x20);
            if (lVar35 == 0) goto LAB_09f39990;
            iVar16 = FUN_0a180770(lVar35,0);
            if (iVar17 != iVar16) goto LAB_09f38ad0;
          }
          if (bVar1) {
            bVar8 = true;
            goto LAB_09f38dac;
          }
          if ((unaff_x19[0x74] != 0) && (lVar35 = *(long *)(unaff_x19[0x74] + 0x38), lVar35 != 0)) {
            if ((uint)((long)(int)uVar11 + -1) < *(uint *)(lVar35 + 0x18)) {
              lVar35 = lVar35 + ((long)(int)uVar11 + -1) * 0x178;
              goto LAB_09f38afc;
            }
            goto LAB_09f39b0c;
          }
          goto LAB_09f39990;
        }
        if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
        goto LAB_09f39990;
        if (uVar11 + 1 < *(uint *)(lVar21 + 0x18)) {
          if (*(float *)(lVar21 + (ulong)(uVar11 + 1) * 0x178 + 0x58) == fStack000000000000005c) {
            if (*(int *)(*(long *)PTR_DAT_0acd3fb8 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            uVar37 = FUN_09f5450c(0);
            if ((uVar37 & 1) != 0) {
              iVar17 = *(int *)(in_stack_000001a8 + 7);
              goto LAB_09f38bd4;
            }
          }
          lVar35 = unaff_x19[0x74];
          if ((int)uVar42 < (int)uVar11) goto LAB_09f38b38;
          goto LAB_09f38d34;
        }
        goto LAB_09f39b0c;
      }
      lVar35 = unaff_x19[0x74];
      if ((uVar46 != 0x200b & (bVar9 ^ 0xff)) == 0) {
LAB_09f38b38:
        if ((lVar35 == 0) || (lVar35 = *(long *)(lVar35 + 0x38), lVar35 == 0)) goto LAB_09f39990;
        if (*(uint *)(lVar35 + 0x18) <= uVar42) goto LAB_09f39b0c;
        lVar35 = lVar35 + (long)(int)uVar42 * 0x178;
      }
      else {
LAB_09f38d34:
        if ((lVar35 == 0) || (lVar35 = *(long *)(lVar35 + 0x38), lVar35 == 0)) goto LAB_09f39990;
        if (*(uint *)(lVar35 + 0x18) <= uVar11) goto LAB_09f39b0c;
        lVar35 = lVar35 + uVar20 * 0x178;
      }
      fVar50 = *(float *)(lVar35 + 0x144);
      lVar21 = *unaff_x19;
      uVar61 = *(undefined4 *)(lVar35 + 0x120);
    }
    (**(code **)(lVar21 + 0x908))
              (fStack0000000000000094,fStack0000000000000098,uStack0000000000000090,uVar61,
               in_stack_000000a0._4_4_ * fVar66 + fVar50,0,in_stack_000000a0._4_4_,
               in_stack_000000a0._4_4_);
    bVar8 = false;
  }
LAB_09f38dac:
  if ((unaff_x19[0x74] == 0) || (lVar35 = *(long *)(unaff_x19[0x74] + 0x38), lVar35 == 0))
  goto LAB_09f39990;
  uVar12 = (uint)*(undefined8 *)(lVar35 + 0x18);
  if (uVar12 <= uVar11) goto LAB_09f39b0c;
  if ((*(byte *)(lVar35 + 0x20 + uVar20 * 0x178 + 0x16d) >> 1 & 1) == 0) {
    if (bVar4) {
      (**(code **)(*unaff_x19 + 0x918))();
    }
    bVar4 = false;
  }
  else {
    if ((((int)unaff_x19[0x6c] < (int)uVar11) || ((int)unaff_x19[0x6d] < (int)uVar13)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar35 + 0x20 + uVar20 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar4) {
LAB_09f38f30:
      if (uVar12 <= uVar11) goto LAB_09f39b0c;
      lVar35 = lVar35 + uVar20 * 0x178;
      in_stack_000001e0 = CONCAT44(in_stack_00001314,in_stack_00001310);
      auVar3._8_4_ = in_stack_00001318;
      auVar3._0_8_ = in_stack_000001e0;
      auVar3._12_4_ = in_stack_0000131c;
      lVar21 = 0x118;
      if ((bVar9 & 1) == 0) {
        lVar21 = 0xf4;
      }
      fVar53 = *(float *)(lVar35 + 0x180);
      fVar54 = *(float *)(lVar35 + 0x184);
      fVar63 = *(float *)(lVar35 + 0x188);
      uVar18 = *(undefined8 *)(lVar35 + 0x178);
      fVar68 = *(float *)(lVar35 + 0x120);
      fVar66 = *(float *)(lVar35 + 0x13c);
      fVar67 = *(float *)(lVar35 + 0x140);
      fVar51 = *(float *)(lVar35 + 0x148);
      fVar50 = *(float *)(lVar35 + lVar21 + 0x20);
      in_stack_000001e8 = auVar3._8_8_;
      in_stack_000001c8 = uVar18;
      fStack00000000000001d0 = fVar53;
      fStack00000000000001d4 = fVar54;
      in_stack_000001d8 = fVar63;
      in_stack_000001f0 = in_stack_00001320;
      uVar20 = FUN_09f55630(&stack0x000001e0,&stack0x000001c8,0);
      if ((uVar20 & 1) == 0) {
        if ((bVar9 & 1) == 0) {
          fVar66 = fVar68;
        }
        if (*(int *)(*(long *)PTR_DAT_0acd3fc8 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        fVar50 = fVar50 - in_stack_00001314;
        if (fVar50 <= in_stack_000000e8) {
          in_stack_000000e8 = fVar50;
        }
        if (fStack00000000000000d8 <= fVar66 + in_stack_00001318) {
          fStack00000000000000d8 = fVar66 + in_stack_00001318;
        }
        if (*(int *)(*(long *)PTR_DAT_0acd3fc8 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        fVar51 = fVar51 - in_stack_00001320;
        fVar67 = fVar67 + in_stack_0000131c;
        if (fVar51 <= in_stack_00000110._4_4_) {
          in_stack_00000110._4_4_ = fVar51;
        }
        if (in_stack_000000e0._4_4_ <= fVar67) {
          in_stack_000000e0._4_4_ = fVar67;
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0acd3fc8 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        in_stack_000000e8 = (fVar50 + (fStack00000000000000d8 - in_stack_00001318)) * 0.5;
        (**(code **)(*unaff_x19 + 0x918))();
        if (*(int *)(*(long *)PTR_DAT_0acd3fc8 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        if ((bVar9 & 1) == 0) {
          fVar66 = fVar68;
        }
        if (*(int *)(*(long *)PTR_DAT_0acd3fc8 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        in_stack_00000110._4_4_ = fVar51 - fVar63;
        fStack00000000000000d8 = fVar53 + fVar66;
        in_stack_00001310 = (undefined4)uVar18;
        in_stack_00001314 = (float)((ulong)uVar18 >> 0x20);
        in_stack_000000e0._4_4_ = fVar67 + fVar54;
        in_stack_00001318 = fVar53;
        in_stack_0000131c = fVar54;
        in_stack_00001320 = fVar63;
      }
      if (((*(int *)(in_stack_000001a8 + 7) != 1) && (uVar11 != uVar29)) &&
         (((int)uVar11 < (int)uVar42 && (bVar1)))) {
        bVar4 = true;
        goto LAB_09f3916c;
      }
      (**(code **)(*unaff_x19 + 0x918))();
    }
    else {
      bVar4 = false;
      if ((((!bVar1) || ((int)uVar42 < (int)uVar11)) || ((uVar46 & 0xfffe) == 10)) ||
         (uVar46 == 0xd)) goto LAB_09f3916c;
      if (uVar11 != uVar42) {
LAB_09f38eb0:
        lVar21 = *plVar44;
        if (*(int *)(lVar21 + 0xe4) == 0) {
          thunk_FUN_049a583c();
          lVar21 = *plVar44;
        }
        if ((unaff_x19[0x74] != 0) && (lVar35 = *(long *)(unaff_x19[0x74] + 0x38), lVar35 != 0)) {
          uVar12 = (uint)*(undefined8 *)(lVar35 + 0x18);
          if (uVar11 < uVar12) {
            lVar32 = *(long *)(lVar21 + 0xb8);
            lVar21 = lVar35 + uVar20 * 0x178;
            fStack00000000000000d8 = *(float *)(lVar32 + 0x1728);
            in_stack_00001320 = *(float *)(lVar21 + 0x188);
            in_stack_000000e8 = *(float *)(lVar32 + 0x1720);
            in_stack_000000e0._4_4_ = *(float *)(lVar32 + 0x172c);
            in_stack_00000110._4_4_ = *(float *)(lVar32 + 0x1724);
            in_stack_00001318 = (float)*(undefined8 *)(lVar21 + 0x180);
            in_stack_0000131c = (float)((ulong)*(undefined8 *)(lVar21 + 0x180) >> 0x20);
            in_stack_00001310 = (undefined4)*(undefined8 *)(lVar21 + 0x178);
            in_stack_00001314 = (float)((ulong)*(undefined8 *)(lVar21 + 0x178) >> 0x20);
            goto LAB_09f38f30;
          }
          goto LAB_09f39b0c;
        }
        goto LAB_09f39990;
      }
      if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0x88) + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar37 = FUN_08ccaff8(uVar46,0);
      if ((uVar37 & 1) == 0) goto LAB_09f38eb0;
    }
    bVar4 = false;
  }
LAB_09f3916c:
  iVar17 = *(int *)(in_stack_000001a8 + 7);
  uVar11 = uVar11 + 1;
  uVar12 = uVar13;
  if (iVar17 <= (int)uVar11) goto LAB_09f39538;
  goto LAB_09f374f4;
LAB_09f361d0:
  if (in_stack_0000133c == 3) {
    if (unaff_x19[0x91] == 0) goto LAB_09f39990;
    in_stack_00001308 = (uint)*(undefined8 *)(unaff_x19[0x91] + 0x18);
    uVar42 = 3;
  }
LAB_09f3620c:
  lVar26 = *(long *)(lVar26 + 0x38);
  if (lVar26 == 0) goto LAB_09f39990;
  uVar46 = *(uint *)(in_stack_000001a8 + 7);
  uVar15 = *(uint *)(lVar26 + 0x18);
  if (uVar15 <= uVar46) goto LAB_09f39b0c;
  lVar26 = lVar26 + 0x20;
  if (*(char *)(lVar26 + (long)(int)uVar46 * (long)(int)unaff_w23 + 0x170) != '\0') {
    lVar30 = lVar26 + (long)(int)uVar46 * (long)(int)unaff_w23;
    auVar56 = *(undefined1 (*) [16])(unaff_x19 + 0x9e);
    auVar59 = NEON_ext(auVar56,auVar56,8,1);
    uVar18 = *(undefined8 *)(lVar30 + 0xf4);
    param_3 = (float)uVar18;
    uVar19 = *(undefined8 *)(lVar30 + 0x100);
    fVar48 = (float)uVar19;
    fVar49 = (float)((ulong)uVar19 >> 0x20);
    param_2._0_4_ = (float)-(uint)(auVar56._0_4_ < param_3);
    param_2._4_4_ = (float)-(uint)(auVar56._4_4_ < (float)((ulong)uVar18 >> 0x20));
    param_2._8_4_ = -(uint)(fVar48 < auVar59._0_4_);
    param_2._12_4_ = -(uint)(fVar49 < auVar59._4_4_);
    auVar2._8_4_ = fVar48;
    auVar2._0_8_ = uVar18;
    auVar2._12_4_ = fVar49;
    auVar56 = auVar56 ^ (auVar56 ^ auVar2) & ~param_2;
    unaff_x19[0x9f] = auVar56._8_8_;
    unaff_x19[0x9e] = auVar56._0_8_;
  }
  if (((*(int *)((long)unaff_x19 + 0x304) == 3) || (*(int *)((long)unaff_x19 + 0x304) == 0)) &&
     ((6 < *(uint *)(unaff_x19 + 0x62) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x62) & 0x1f) & 0x4aU) == 0)))) goto LAB_09f363ac;
  uVar29 = uVar46 + 1;
  if ((int)uVar29 < (int)fStack0000000000000068) {
    if (uVar15 <= uVar29) goto LAB_09f39b0c;
    uVar45 = *(undefined2 *)(lVar26 + (long)(int)uVar29 * (long)(int)unaff_w23 + 4);
  }
  else {
    uVar45 = 0;
  }
  if (((uVar11 == 0) && (uVar42 != 0x2d)) && ((uVar42 != 0x200b && (uVar42 != 0xad)))) {
    if (*(char *)((long)unaff_x19 + 0x309) == '\0') {
LAB_09f36450:
      if (*(int *)(*(long *)PTR_DAT_0acd4000 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar20 = FUN_09fabe54(uVar42,0);
      if ((uVar20 & 1) == 0) {
LAB_09f3649c:
        if (*(int *)(*(long *)PTR_DAT_0acd4000 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar20 = FUN_09fabeb0(in_stack_0000133c,0);
        if ((uVar20 & 1) == 0) {
          if (*(char *)((long)unaff_x19 + 0x309) == '\0') {
            if (*(int *)(*(long *)PTR_DAT_0acd4000 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            uVar20 = FUN_09fabeb0(uVar45,0);
            if ((uVar20 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_0acd3fd0 + 0xe4) == 0) {
                thunk_FUN_049a583c();
              }
              lVar26 = FUN_09fa20ac(0);
              if ((lVar26 == 0) || (*(long *)(lVar26 + 0x18) == 0)) goto LAB_09f39990;
              uVar20 = FUN_06521a10(*(long *)(lVar26 + 0x18),uVar45,*(undefined8 *)PTR_DAT_0acd3fa0)
              ;
              if ((uVar20 & 1) == 0) goto LAB_09f36974;
            }
          }
          goto 
          UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable__OnSelectExited
          ;
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_0acd3fd0 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar20 = FUN_09fa22c0(0);
        if ((uVar20 & 1) != 0) goto LAB_09f3649c;
      }
      if (*(int *)(*(long *)PTR_DAT_0acd3fd0 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      lVar26 = FUN_09fa20ac(0);
      if ((lVar26 == 0) || (*(long *)(lVar26 + 0x10) == 0)) goto LAB_09f39990;
      uVar20 = FUN_06521a10(*(long *)(lVar26 + 0x10),in_stack_0000133c,
                            *(undefined8 *)PTR_DAT_0acd3fa0);
      if (*(int *)(in_stack_000001a8 + 7) < (int)uStack0000000000000054) {
        if (*(int *)(*(long *)PTR_DAT_0acd3fd0 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        lVar26 = FUN_09fa20ac(0);
        if ((lVar26 == 0) || (*(long *)(lVar26 + 0x18) == 0)) goto LAB_09f39990;
        uVar15 = FUN_06521a10(*(long *)(lVar26 + 0x18),uVar45,*(undefined8 *)PTR_DAT_0acd3fa0);
        if ((uVar20 & 1) == 0) {
          in_stack_00000078._4_4_ = (float)(uVar15 & (uint)in_stack_00000078._4_4_);
          unaff_w20 = (uint)in_stack_00000078._4_4_ & (uint)(uVar11 != 0);
          plVar44 = (long *)PTR_DAT_0ac7e998;
          if (((uint)in_stack_00000078._4_4_ & 1) != 0) goto LAB_09f36310;
          in_w8 = uVar15 ^ 1;
          goto code_r0x09f36580;
        }
      }
      else if ((uVar20 & 1) == 0) {
        in_stack_00000078._4_4_ = 0.0;
LAB_09f36974:
        unaff_w20 = 0;
        plVar44 = (long *)PTR_DAT_0ac7e998;
        goto LAB_09f36310;
      }
      unaff_w20 = (uint)(uVar11 != 0);
      if (uVar12 != uVar13 || (((uint)in_stack_00000078._4_4_ ^ 0xffffffff) & 1) != 0)
      goto LAB_09f363ac;
      goto LAB_09f36300;
    }
  }
  else if (*(char *)((long)unaff_x19 + 0x309) == '\0') {
    if ((int)uVar42 < 0x2007) {
      if (uVar42 == 0x2d) {
        if ((int)uVar46 < 1) goto LAB_09f3690c;
        if (uVar15 <= uVar46 - 1) goto LAB_09f39b0c;
        uVar45 = *(undefined2 *)(lVar26 + (ulong)(uVar46 - 1) * (ulong)unaff_w23 + 4);
        if (*(int *)(*(long *)(PTR_DAT_0ac09758 + 0x88) + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar20 = FUN_08cc7930(uVar45,0);
        if ((uVar20 & 1) == 0) goto LAB_09f3690c;
        if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x38), lVar26 == 0))
        goto LAB_09f39990;
        if (*(uint *)(lVar26 + 0x18) <= *(int *)(in_stack_000001a8 + 7) - 1U) goto LAB_09f39b0c;
        if (*(int *)(lVar26 + (long)(int)(*(int *)(in_stack_000001a8 + 7) - 1U) *
                              (long)(int)unaff_w23 + 0x5c) != (int)unaff_x19[0x97])
        goto LAB_09f3690c;
        goto LAB_09f363ac;
      }
      if (uVar42 != 0xa0) goto LAB_09f3690c;
    }
    else if (((0x28 < uVar42 - 0x2007) ||
             ((1L << ((ulong)(uVar42 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
            (uVar42 != 0x2060)) goto LAB_09f3690c;
    goto LAB_09f36450;
  }

  UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable__OnSelectExited
  :
  if (((uint)in_stack_00000078._4_4_ & 1) == 0) {
    in_stack_00000078._4_4_ = 0.0;
    goto LAB_09f363ac;
  }
  unaff_w20 = (uint)(uVar11 == 0 || in_stack_0000133c == 0xa0) &
              ((uint)(in_stack_0000133c != 0xad) | (uint)fStack000000000000005c) ^ 1;
LAB_09f36300:
  in_stack_00000078._4_4_ = 1.4013e-45;
  plVar44 = (long *)PTR_DAT_0ac7e998;
  goto LAB_09f36310;
LAB_09f3690c:
  plVar44 = (long *)PTR_DAT_0ac7e998;
  lVar26 = *(long *)PTR_DAT_0ac7e998;
  if (*(int *)(lVar26 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar26 = *plVar44;
  }
  in_stack_00000078._4_4_ = 0.0;
  unaff_w20 = 0;
  *(undefined4 *)(*(long *)(lVar26 + 0xb8) + 0xf80) = 0xffffffff;
LAB_09f36310:
  if (*(int *)(*plVar44 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_09f86a00();
  unaff_w20 = unaff_w20 & 1;
  goto joined_r0x09f36588;
LAB_09f39538:
  lVar26 = unaff_x19[0x74];
  if (lVar26 != 0) {
    iVar16 = uVar13 + 1;
    plVar43 = (long *)PTR_DAT_0acd3fc0;
LAB_09f3955c:
    lVar30 = *(long *)(lVar26 + 0x60);
    if (lVar30 != 0) {
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) {
LAB_09f39b0c:
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      *(int *)(lVar30 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x50 + 0x28) = iVar14;
      *(int *)(lVar26 + 0x18) = iVar17;
      lVar30 = unaff_x19[0xd7];
      *(int *)(lVar26 + 0x2c) = iVar16;
      if (iVar17 < 1 || iStack00000000000000ec == 0) {
        iStack00000000000000ec = 1;
      }
      *(int *)(lVar26 + 0x1c) = (int)lVar30;
      *(int *)(lVar26 + 0x24) = iStack00000000000000ec;
      *(int *)(lVar26 + 0x30) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
      if (((int)unaff_x19[0x6a] != 0xff) ||
         (uVar20 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar20 & 1) == 0)) {
LAB_09f36f5c:
        if (*(int *)(*(long *)PTR_DAT_0ac7e968 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        FUN_09f53560();
        return;
      }
      lVar26 = unaff_x19[0xde];
      if (lVar26 != 0) {
        (**(code **)(lVar26 + 0x18))
                  (*(undefined8 *)(lVar26 + 0x40),unaff_x19[0x74],*(undefined8 *)(lVar26 + 0x28));
      }
      if (*(int *)((long)unaff_x19 + 0x354) != 0) {
        if ((unaff_x19[0x74] == 0) || (lVar26 = *(long *)(unaff_x19[0x74] + 0x60), lVar26 == 0))
        goto LAB_09f39990;
        if (*(int *)(*plVar43 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        if (*(int *)(lVar26 + 0x18) == 0) goto LAB_09f39b0c;
        FUN_09f9f37c(lVar26 + 0x20,1,0);
      }
      if (unaff_x19[0x7b] != 0) {
        FUN_0a155cb4(unaff_x19[0x7b],0);
        if ((unaff_x19[0x74] != 0) && (lVar26 = *(long *)(unaff_x19[0x74] + 0x60), lVar26 != 0)) {
          if (*(int *)(lVar26 + 0x18) == 0) goto LAB_09f39b0c;
          if (unaff_x19[0x7b] != 0) {
            FUN_0a152de0(unaff_x19[0x7b],*(undefined8 *)(lVar26 + 0x30),0);
            if ((unaff_x19[0x74] != 0) && (lVar26 = *(long *)(unaff_x19[0x74] + 0x60), lVar26 != 0))
            {
              if (*(int *)(lVar26 + 0x18) == 0) goto LAB_09f39b0c;
              if (unaff_x19[0x7b] != 0) {
                FUN_0a1540d0(unaff_x19[0x7b],0,*(undefined8 *)(lVar26 + 0x48),0);
                if ((unaff_x19[0x74] != 0) &&
                   (lVar26 = *(long *)(unaff_x19[0x74] + 0x60), lVar26 != 0)) {
                  if (*(int *)(lVar26 + 0x18) == 0) goto LAB_09f39b0c;
                  if (unaff_x19[0x7b] != 0) {
                    FUN_0a152ff8(unaff_x19[0x7b],*(undefined8 *)(lVar26 + 0x50),0);
                    if ((unaff_x19[0x74] != 0) &&
                       (lVar26 = *(long *)(unaff_x19[0x74] + 0x60), lVar26 != 0)) {
                      if (*(int *)(lVar26 + 0x18) == 0) goto LAB_09f39b0c;
                      if (unaff_x19[0x7b] != 0) {
                        FUN_0a15334c(unaff_x19[0x7b],*(undefined8 *)(lVar26 + 0x58),0);
                        if (unaff_x19[0x7b] != 0) {
                          FUN_0a155a74(unaff_x19[0x7b],0);
                          lVar26 = unaff_x19[0x74];
                          if (lVar26 != 0) {
                            lVar35 = 0;
                            lVar30 = 0;
                            do {
                              uVar20 = lVar30 + 1;
                              if ((long)*(int *)(lVar26 + 0x34) <= (long)uVar20) goto LAB_09f36f5c;
                              lVar26 = *(long *)(lVar26 + 0x60);
                              if (lVar26 == 0) break;
                              if (*(int *)(*plVar43 + 0xe4) == 0) {
                                thunk_FUN_049a583c();
                              }
                              if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_09f39b0c;
                              FUN_09f9f258(lVar26 + lVar35 + 0x70,0);
                              lVar26 = unaff_x19[0xe4];
                              if (lVar26 == 0) break;
                              if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_09f39b0c;
                              uVar18 = *(undefined8 *)(lVar26 + lVar30 * 8 + 0x28);
                              if (*(int *)(*(long *)PTR_DAT_0ac09788 + 0xe4) == 0) {
                                thunk_FUN_049a583c();
                              }
                              uVar37 = FUN_0a17cd28(uVar18,0,0);
                              if ((uVar37 & 1) == 0) {
                                if (*(int *)((long)unaff_x19 + 0x354) != 0) {
                                  if ((unaff_x19[0x74] == 0) ||
                                     (lVar26 = *(long *)(unaff_x19[0x74] + 0x60), lVar26 == 0))
                                  break;
                                  if (*(int *)(*plVar43 + 0xe4) == 0) {
                                    thunk_FUN_049a583c();
                                  }
                                  if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_09f39b0c;
                                  FUN_09f9f37c(lVar26 + lVar35 + 0x70,1,0);
                                }
                                lVar26 = unaff_x19[0xe4];
                                if (lVar26 == 0) break;
                                if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_09f39b0c;
                                lVar26 = *(long *)(lVar26 + lVar30 * 8 + 0x28);
                                if (lVar26 == 0) break;
                                lVar26 = FUN_09fa8434(lVar26,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar21 = *(long *)(unaff_x19[0x74] + 0x60), lVar21 == 0)) break;
                                if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_09f39b0c;
                                if (lVar26 == 0) break;
                                FUN_0a152de0(lVar26,*(undefined8 *)(lVar21 + lVar35 + 0x80),0);
                                lVar26 = unaff_x19[0xe4];
                                if (lVar26 == 0) break;
                                if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_09f39b0c;
                                lVar26 = *(long *)(lVar26 + lVar30 * 8 + 0x28);
                                if (lVar26 == 0) break;
                                lVar26 = FUN_09fa8434(lVar26,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar21 = *(long *)(unaff_x19[0x74] + 0x60), lVar21 == 0)) break;
                                if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_09f39b0c;
                                if (lVar26 == 0) break;
                                FUN_0a1540d0(lVar26,0,*(undefined8 *)(lVar21 + lVar35 + 0x98),0);
                                lVar26 = unaff_x19[0xe4];
                                if (lVar26 == 0) break;
                                if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_09f39b0c;
                                lVar26 = *(long *)(lVar26 + lVar30 * 8 + 0x28);
                                if (lVar26 == 0) break;
                                lVar26 = FUN_09fa8434(lVar26,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar21 = *(long *)(unaff_x19[0x74] + 0x60), lVar21 == 0)) break;
                                if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_09f39b0c;
                                if (lVar26 == 0) break;
                                FUN_0a152ff8(lVar26,*(undefined8 *)(lVar21 + lVar35 + 0xa0),0);
                                lVar26 = unaff_x19[0xe4];
                                if (lVar26 == 0) break;
                                if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_09f39b0c;
                                lVar26 = *(long *)(lVar26 + lVar30 * 8 + 0x28);
                                if (lVar26 == 0) break;
                                lVar26 = FUN_09fa8434(lVar26,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar21 = *(long *)(unaff_x19[0x74] + 0x60), lVar21 == 0)) break;
                                if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_09f39b0c;
                                if (lVar26 == 0) break;
                                FUN_0a15334c(lVar26,*(undefined8 *)(lVar21 + lVar35 + 0xa8),0);
                                lVar26 = unaff_x19[0xe4];
                                if (lVar26 == 0) break;
                                if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_09f39b0c;
                                lVar26 = *(long *)(lVar26 + lVar30 * 8 + 0x28);
                                if ((lVar26 == 0) || (lVar26 = FUN_09fa8434(lVar26,0), lVar26 == 0))
                                break;
                                FUN_0a155a74(lVar26,0);
                              }
                              lVar26 = unaff_x19[0x74];
                              lVar30 = lVar30 + 1;
                              lVar35 = lVar35 + 0x50;
                            } while (lVar26 != 0);
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
LAB_09f39990:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


