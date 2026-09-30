/*
FUNCTION_NAME: UnityEngine.UIElements.FocusChangeDirection$$op_Implicit
ENTRY_POINT: 0398385c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_12;telemetry_or_network_hits_4;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_4
*/


void UnityEngine_UIElements_FocusChangeDirection__op_Implicit
               (undefined1 param_1 [16],float param_2,float param_3)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  undefined1 *puVar25;
  ulong uVar26;
  undefined1 uVar27;
  char cVar28;
  uint uVar29;
  long lVar30;
  float *pfVar31;
  long lVar32;
  uint uVar33;
  long *plVar34;
  long in_x10;
  long lVar35;
  long lVar36;
  long lVar37;
  float *pfVar38;
  uint uVar39;
  long in_x12;
  long lVar40;
  long unaff_x19;
  char cVar41;
  long unaff_x20;
  uint unaff_w21;
  uint uVar42;
  long *plVar43;
  long *unaff_x22;
  uint unaff_w23;
  char *unaff_x24;
  uint unaff_w25;
  uint uVar44;
  uint unaff_w26;
  long lVar45;
  long lVar46;
  ulong unaff_x27;
  long *unaff_x28;
  uint *unaff_x29;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined4 uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined8 uVar58;
  float fVar59;
  undefined8 uVar60;
  undefined4 uVar61;
  float fVar62;
  float unaff_s8;
  float fVar63;
  float unaff_s9;
  float fVar64;
  float unaff_s11;
  float fVar65;
  float unaff_s12;
  float fVar66;
  float unaff_s13;
  float fVar67;
  float fVar68;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  int iStack0000000000000030;
  float fStack0000000000000034;
  int *in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  long *in_stack_00000058;
  float fStack0000000000000060;
  uint uStack0000000000000064;
  long in_stack_00000068;
  void *in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  float fStack0000000000000090;
  uint uStack0000000000000094;
  undefined8 in_stack_00000098;
  float fStack00000000000000a0;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  ulong in_stack_000000b0;
  undefined8 in_stack_000000c0;
  float fStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000d8;
  byte bStack00000000000000e0;
  float fStack00000000000000e4;
  float fStack00000000000000e8;
  undefined8 in_stack_000000f0;
  undefined8 *in_stack_000000f8;
  undefined8 *in_stack_00000100;
  undefined8 *in_stack_00000108;
  long in_stack_00000110;
  float in_stack_00000118;
  float fStack0000000000000120;
  undefined4 uStack0000000000000124;
  float fStack0000000000000128;
  float fStack000000000000012c;
  float fStack0000000000000130;
  int iStack0000000000000138;
  undefined8 in_stack_00000140;
  float in_stack_00000148;
  float in_stack_00000150;
  float in_stack_00000158;
  float fStack000000000000015c;
  long *in_stack_00000160;
  uint uStack0000000000000168;
  undefined4 uStack000000000000016c;
  float fStack0000000000000170;
  float fStack0000000000000174;
  float in_stack_00000178;
  float fStack000000000000017c;
  float in_stack_00000188;
  long *in_stack_00000190;
  float in_stack_000001a8;
  long *in_stack_000001b0;
  undefined8 in_stack_000001b8;
  long in_stack_000001c0;
  long *in_stack_000001c8;
  uint *in_stack_000001d0;
  undefined8 in_stack_000001d8;
  long in_stack_000001e0;
  long *in_stack_000001e8;
  uint in_stack_000011dc;
  uint in_stack_0000120c;
  undefined8 in_stack_00001288;
  char in_stack_00001294;
  float in_stack_00001298;
  uint in_stack_0000129c;
  long in_stack_00001638;
  
code_r0x0398385c:
  fVar57 = *(float *)(in_x10 + 0x108) / 100.0;
  if (param_3 < fVar57) {
    fVar59 = unaff_s11 / param_2;
    if (param_3 <= 0.0) {
      fVar59 = unaff_s11;
    }
    param_3 = param_3 + (unaff_s11 - unaff_s13 * (fStack0000000000000174 + DAT_00b5556c)) / fVar59;
LAB_039881fc:
    if (fVar57 <= param_3) {
      param_3 = fVar57;
    }
    *(float *)(unaff_x19 + 0x1594) = param_3;
  }
  else {
    fVar57 = *(float *)(in_x10 + 0xac);
    fVar59 = *_fStack00000000000000d8;
    if (fVar59 <= fVar57) {
LAB_03983888:
      uVar14 = (uint)unaff_x20;
      iVar15 = *(int *)(in_x10 + 0x74);
      iVar18 = (int)unaff_x27;
      if (iVar15 == 1) {
        iVar15 = FUN_021c2ce4(in_stack_00000080,*(undefined8 *)PTR_DAT_03dad388);
        uVar19 = DAT_00b92750;
        fVar57 = unaff_s12;
        if (iVar15 == 0) {
          unaff_x29[0] = 0;
          unaff_x29[1] = 0;
          in_stack_0000120c = 0xffffffff;
          goto LAB_0398183c;
        }
        FUN_021c3180(&stack0x000012a0,in_stack_00000080,*(undefined8 *)PTR_DAT_03dad338);
        memcpy(&stack0x00000608,&stack0x000012a0,0x398);
        iVar17 = FUN_0398b72c();
        iVar15 = *(int *)(unaff_x19 + 0x324) + -1;
        *(int *)(unaff_x19 + 0x324) = iVar15;
        in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
        in_stack_0000120c = iVar17 - 1;
        uVar19 = CONCAT44(0x2026,iVar15);
        goto LAB_0398183c;
      }
      if (iVar15 == 6) {
        in_stack_0000120c = FUN_0398b72c();
        unaff_w21 = *(uint *)(unaff_x19 + 0x324);
      }
      else {
        if (iVar15 != 3) goto LAB_03983778;
        in_stack_0000120c = FUN_0398b72c();
      }
LAB_03984f74:
      uVar19 = CONCAT44(3,unaff_w21);
      fVar57 = unaff_s12;
LAB_0398183c:
      in_stack_0000120c = in_stack_0000120c + 1;
      lVar30 = *(long *)(unaff_x19 + 0x20);
      if (lVar30 == 0) goto thunk_FUN_01b48178;
      if ((int)*(uint *)(lVar30 + 0x18) <= (int)in_stack_0000120c) {
LAB_03985590:
        if ((((*(char *)(in_stack_000001e0 + 0xa8) != '\0') &&
             (DAT_00b552b8 < *(float *)(unaff_x19 + 0x1598) - *(float *)(unaff_x19 + 0x159c))) &&
            (fVar57 = *_fStack00000000000000d8, fVar57 < *(float *)(in_stack_000001e0 + 0xb0))) &&
           (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
          fVar59 = *(float *)(in_stack_000001e0 + 0x108);
          if (*(float *)(unaff_x19 + 0x1594) < fVar59 / 100.0) {
            *(undefined4 *)(unaff_x19 + 0x1594) = 0;
          }
          fVar47 = (*(float *)(unaff_x19 + 0x1598) - fVar57) * 0.5;
          if (fVar47 <= DAT_00b55428) {
            fVar47 = DAT_00b55428;
          }
          *(float *)(unaff_x19 + 0x159c) = fVar57;
          fVar57 = (fVar57 + fVar47) * 20.0 + 0.5;
          fVar47 = DAT_00b556b4;
          if (fVar57 != INFINITY) {
            fVar47 = (float)(int)fVar57 / 20.0;
          }
          if (fVar59 <= fVar47) {
            fVar47 = fVar59;
          }
          goto LAB_03985650;
        }
        unaff_x24[0x30] = '\x01';
        if (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)) {
          uVar19 = FUN_0303de64(in_stack_00000078,0);
          uVar20 = FUN_03052638(_fStack00000000000000d8,0);
          uVar19 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c950,uVar19,
                                *(undefined8 *)PTR_DAT_03d9c938,uVar20,0);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*unaff_x28);
          }
          FUN_038f2acc(uVar19,0);
          unaff_x22 = in_stack_000001e8;
        }
        plVar23 = (long *)PTR_DAT_03dace98;
        plVar43 = (long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__;
        if ((*unaff_x29 == 0) || ((*unaff_x29 == 1 && (in_stack_0000129c == 3)))) {
          FUN_03992ac4(1,in_stack_000001c0,0);
          goto LAB_03980e58;
        }
        lVar30 = *(long *)(in_stack_000001c0 + 0x58);
        if (lVar30 == 0) goto thunk_FUN_01b48178;
        uVar14 = *(uint *)(unaff_x19 + 0x78);
        if (*(int *)(*(long *)PTR_DAT_03dace98 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_03988250;
        FUN_0397a378(lVar30 + (long)(int)uVar14 * 0x58 + 0x20,0,0);
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        iVar15 = *(int *)(in_stack_000001e0 + 0x70);
        in_stack_00000158 = **(float **)(*plVar43 + 0xb8);
        _in_stack_00000148 = *(undefined8 *)(*(float **)(*plVar43 + 0xb8) + 1);
        lVar30 = *(long *)(unaff_x19 + 0x50);
        _in_stack_00000118 = _in_stack_00000148;
        fStack0000000000000120 = in_stack_00000158;
        if (iVar15 < 0x421) {
          if (iVar15 < 0x205) {
            if (iVar15 < 0x109) {
              if ((iVar15 - 0x101U < 8) && ((1 << (ulong)(iVar15 - 0x101U & 0x1f) & 0x8bU) != 0)) {
LAB_039859f0:
                if (lVar30 == 0) goto thunk_FUN_01b48178;
                if (*(uint *)(lVar30 + 0x18) < 2) goto LAB_03988250;
                uVar19 = *(undefined8 *)(lVar30 + 0x30);
                if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
                  lVar45 = *in_stack_00000058;
                  if (lVar45 == 0) goto thunk_FUN_01b48178;
                  if (*(uint *)(lVar45 + 0x18) <= uStack0000000000000064) goto LAB_03988250;
                  fVar57 = *(float *)(lVar45 + (long)(int)uStack0000000000000064 * 0x14 + 0x28);
                }
                else {
                  fVar57 = *(float *)(unaff_x19 + 0x374);
                }
                fStack0000000000000120 = fStack0000000000000060 + 0.0 + *(float *)(lVar30 + 0x2c);
                fStack0000000000000040 = (0.0 - fVar57) - fStack0000000000000044;
                goto LAB_03985d90;
              }
            }
            else if (iVar15 < 0x121) {
              if ((iVar15 == 0x110) || (iVar15 == 0x120)) goto LAB_039859f0;
            }
            else if ((iVar15 - 0x201U < 4) && (iVar15 - 0x201U != 2)) goto LAB_03985c80;
          }
          else {
            if (iVar15 < 0x403) {
              if (iVar15 < 0x211) {
                if ((iVar15 == 0x208) || (iVar15 == 0x210)) goto LAB_03985c80;
                goto LAB_03985da0;
              }
              if (iVar15 != 0x220) {
                if (iVar15 - 0x401U < 2) goto LAB_03985b2c;
                goto LAB_03985da0;
              }
LAB_03985c80:
              if (lVar30 == 0) goto thunk_FUN_01b48178;
              if ((*(int *)(lVar30 + 0x18) == 1) || (*(int *)(lVar30 + 0x18) == 0))
              goto LAB_03988250;
              fStack0000000000000120 = (*(float *)(lVar30 + 0x20) + *(float *)(lVar30 + 0x2c)) * 0.5
              ;
              uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar30 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar30 + 0x30) >> 0x20)) * 0.5,
                                ((float)*(undefined8 *)(lVar30 + 0x24) +
                                (float)*(undefined8 *)(lVar30 + 0x30)) * 0.5);
              if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
                lVar30 = *in_stack_00000058;
                if (lVar30 == 0) goto thunk_FUN_01b48178;
                if (uStack0000000000000064 < *(uint *)(lVar30 + 0x18)) {
                  lVar30 = lVar30 + (long)(int)uStack0000000000000064 * 0x14;
                  fStack0000000000000120 = fStack0000000000000060 + 0.0 + fStack0000000000000120;
                  fStack0000000000000040 =
                       ((fStack0000000000000044 + *(float *)(lVar30 + 0x28) +
                        *(float *)(lVar30 + 0x30)) - fStack0000000000000040) * -0.5 + 0.0;
                  goto LAB_03985d90;
                }
                goto LAB_03988250;
              }
              fStack0000000000000120 = fStack0000000000000060 + 0.0 + fStack0000000000000120;
              fStack0000000000000040 =
                   ((fStack0000000000000044 + *(float *)(unaff_x19 + 0x374) + in_stack_00001298) -
                   fStack0000000000000040) * -0.5 + 0.0;
            }
            else {
              if (iVar15 < 0x409) {
                if (iVar15 != 0x404) {
                  bVar9 = iVar15 == 0x408;
                  goto LAB_03985b18;
                }
              }
              else if (iVar15 != 0x410) {
                bVar9 = iVar15 == 0x420;
LAB_03985b18:
                if (!bVar9) goto LAB_03985da0;
              }
LAB_03985b2c:
              if (lVar30 == 0) goto thunk_FUN_01b48178;
              if (*(int *)(lVar30 + 0x18) == 0) goto LAB_03988250;
              uVar19 = *(undefined8 *)(lVar30 + 0x24);
              if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
                lVar45 = *in_stack_00000058;
                if (lVar45 == 0) goto thunk_FUN_01b48178;
                if (*(uint *)(lVar45 + 0x18) <= uStack0000000000000064) goto LAB_03988250;
                in_stack_00001298 =
                     *(float *)(lVar45 + (long)(int)uStack0000000000000064 * 0x14 + 0x30);
              }
              fStack0000000000000120 = fStack0000000000000060 + 0.0 + *(float *)(lVar30 + 0x20);
              fStack0000000000000040 = fStack0000000000000040 + (0.0 - in_stack_00001298);
            }
LAB_03985d90:
            _in_stack_00000118 =
                 CONCAT44((float)((ulong)uVar19 >> 0x20) + 0.0,
                          (float)uVar19 + fStack0000000000000040);
          }
        }
        else if (iVar15 < 0x1005) {
          if (iVar15 < 0x809) {
            if ((iVar15 - 0x801U < 8) && ((1 << (ulong)(iVar15 - 0x801U & 0x1f) & 0x8bU) != 0)) {
LAB_03985954:
              if (lVar30 == 0) goto thunk_FUN_01b48178;
              if ((*(int *)(lVar30 + 0x18) != 1) && (*(int *)(lVar30 + 0x18) != 0)) {
                _in_stack_00000118 =
                     CONCAT44(((float)((ulong)*(undefined8 *)(lVar30 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar30 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar30 + 0x24) +
                              (float)*(undefined8 *)(lVar30 + 0x30)) * 0.5 + 0.0);
                fStack0000000000000120 =
                     fStack0000000000000060 + 0.0 +
                     (*(float *)(lVar30 + 0x20) + *(float *)(lVar30 + 0x2c)) * 0.5;
                goto LAB_03985da0;
              }
              goto LAB_03988250;
            }
          }
          else if (iVar15 < 0x821) {
            if ((iVar15 == 0x810) || (iVar15 == 0x820)) goto LAB_03985954;
          }
          else if ((iVar15 - 0x1001U < 4) && (iVar15 - 0x1001U != 2)) goto LAB_03985be8;
        }
        else if (iVar15 < 0x2003) {
          if (iVar15 < 0x1011) {
            if ((iVar15 == 0x1008) || (iVar15 == 0x1010)) goto LAB_03985be8;
          }
          else {
            if (iVar15 == 0x1020) {
LAB_03985be8:
              if (lVar30 == 0) goto thunk_FUN_01b48178;
              if ((*(int *)(lVar30 + 0x18) != 1) && (*(int *)(lVar30 + 0x18) != 0)) {
                uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar30 + 0x24) >> 0x20) +
                                  (float)((ulong)*(undefined8 *)(lVar30 + 0x30) >> 0x20)) * 0.5,
                                  ((float)*(undefined8 *)(lVar30 + 0x24) +
                                  (float)*(undefined8 *)(lVar30 + 0x30)) * 0.5);
                fStack0000000000000120 =
                     fStack0000000000000060 + 0.0 +
                     (*(float *)(lVar30 + 0x20) + *(float *)(lVar30 + 0x2c)) * 0.5;
                fStack0000000000000040 =
                     0.0 - ((fStack0000000000000044 + *(float *)(unaff_x19 + 0x36c) +
                            *(float *)(unaff_x19 + 0x364)) - fStack0000000000000040) * 0.5;
                goto LAB_03985d90;
              }
              goto LAB_03988250;
            }
            if (iVar15 - 0x2001U < 2) goto LAB_03985a90;
          }
        }
        else {
          if (iVar15 < 0x2009) {
            if (iVar15 != 0x2004) {
              iVar18 = 0x2008;
              goto LAB_03985a78;
            }
          }
          else if (iVar15 != 0x2010) {
            iVar18 = 0x2020;
LAB_03985a78:
            if (iVar15 != iVar18) goto LAB_03985da0;
          }
LAB_03985a90:
          if (lVar30 == 0) goto thunk_FUN_01b48178;
          if ((*(int *)(lVar30 + 0x18) == 1) || (*(int *)(lVar30 + 0x18) == 0)) goto LAB_03988250;
          _in_stack_00000118 =
               CONCAT44(((float)((ulong)*(undefined8 *)(lVar30 + 0x24) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar30 + 0x30) >> 0x20)) * 0.5 + 0.0,
                        ((float)*(undefined8 *)(lVar30 + 0x24) +
                        (float)*(undefined8 *)(lVar30 + 0x30)) * 0.5 +
                        (0.0 - ((*(float *)(unaff_x19 + 0x370) - fStack0000000000000044) -
                               fStack0000000000000040) * 0.5));
          fStack0000000000000120 =
               fStack0000000000000060 + 0.0 +
               (*(float *)(lVar30 + 0x20) + *(float *)(lVar30 + 0x2c)) * 0.5;
        }
LAB_03985da0:
        uVar52 = FUN_01bd7168(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
        FUN_01bd7168(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
        if (*(int *)(*(long *)PTR_DAT_03dad2e8 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)PTR_DAT_03dad2e8);
        }
        FUN_0399652c(0);
        FUN_039966fc(&stack0x00001270,0x4000ffff,0);
        fVar57 = DAT_00b555ec;
        uVar14 = *unaff_x29;
        if ((int)uVar14 < 1) {
          iVar15 = 0;
          iStack0000000000000138 = 0;
          goto LAB_0398800c;
        }
        lVar30 = *unaff_x22;
        if (lVar30 == 0) goto thunk_FUN_01b48178;
        fStack0000000000000174 = 0.0;
        fStack00000000000000d8 = 0.0;
        fStack00000000000000a8 = 0.0;
        plVar23 = (long *)(in_stack_000001c0 + 0x38);
        in_stack_000000f0._4_4_ = 0.0;
        fStack00000000000000a0 = 0.0;
        uVar24 = (ulong)&stack0x00001270 | 4;
        bVar9 = false;
        fVar47 = 0.0;
        fVar59 = 0.0;
        uVar21 = (ulong)&stack0x000005f0 | 4;
        bVar8 = false;
        bVar10 = false;
        iStack0000000000000138 = 0;
        uStack0000000000000094 = 0;
        _uStack0000000000000168 = 0;
        in_stack_000000c0._4_4_ = 0;
        in_stack_00000178 = 0.0;
        _in_stack_000001a8 = 0x2fc;
        fStack000000000000012c = fStack0000000000000128;
        fStack0000000000000130 = in_stack_00000140._4_4_;
        fStack00000000000000cc = in_stack_00000140._4_4_;
        uStack00000000000000d0 = uStack0000000000000124;
        fStack00000000000000d4 = fStack0000000000000128;
        fStack00000000000000e4 = in_stack_00000140._4_4_;
        fStack00000000000000e8 = fStack0000000000000128;
        _bStack00000000000000e0 = uStack0000000000000124;
        fStack000000000000015c = DAT_00b555ec;
        uVar33 = 0;
        uVar39 = 1;
        goto LAB_03985ef4;
      }
      if (*(uint *)(lVar30 + 0x18) <= in_stack_0000120c) goto LAB_03988250;
      uVar14 = *(uint *)(lVar30 + (long)(int)in_stack_0000120c * 0x10 + 0x24);
      if (uVar14 == 0) goto LAB_03985590;
      in_stack_00001288 = uVar19;
      if (5 < in_stack_000001d8._4_4_) {
        uVar19 = FUN_0305c51c(&stack0x0000129c,0);
        uVar20 = FUN_0303de64(&stack0x0000120c,0);
        uVar19 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c930,uVar19,*(undefined8 *)PTR_DAT_03d9c940
                              ,uVar20,0);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*unaff_x28);
        }
        FUN_038f2e04(uVar19,0);
        in_stack_00001288 = CONCAT44(3,*unaff_x29);
        unaff_x22 = in_stack_000001e8;
      }
      uVar19 = in_stack_00001288;
      in_stack_0000129c = uVar14;
      if (uVar14 == 0x1a) goto LAB_0398183c;
      if ((uVar14 == 0x3c) && (*(char *)(in_stack_000001e0 + 0xb5) != '\0')) {
        unaff_x24[0] = '\x01';
        unaff_x24[1] = '\x01';
        uVar21 = FUN_0398ba98();
        if (((uVar21 & 1) != 0) && (in_stack_0000120c = in_stack_000011dc, *unaff_x24 == '\x01'))
        goto LAB_0398183c;
      }
      else {
        lVar30 = *unaff_x22;
        if (lVar30 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar30 + 0x18) <= *unaff_x29) goto LAB_03988250;
        lVar30 = lVar30 + (long)(int)*unaff_x29 * unaff_x27;
        *unaff_x24 = *(char *)(lVar30 + 0x28);
        *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar30 + 0x60);
        *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(lVar30 + 0x40);
        thunk_FUN_01b4f09c(in_stack_000001c8);
      }
      lVar30 = *unaff_x22;
      if (lVar30 == 0) goto thunk_FUN_01b48178;
      uVar14 = *(uint *)(unaff_x19 + 0x324);
      if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_03988250;
      lVar45 = (long)(int)uVar14;
      uVar52 = *(undefined4 *)(unaff_x19 + 0x78);
      cVar28 = *(char *)(lVar30 + lVar45 * unaff_x27 + 100);
      unaff_x24[1] = '\0';
      if ((uint)in_stack_00001288 == uVar14) {
        in_stack_0000129c = (uint)((ulong)in_stack_00001288 >> 0x20);
        unaff_w23 = 1;
        *unaff_x24 = '\x01';
        if (in_stack_0000129c == 0x2026) {
          *(undefined8 *)(lVar30 + lVar45 * unaff_x27 + 0x30) = *(undefined8 *)(unaff_x19 + 0x1a00);
          thunk_FUN_01b4f09c();
          lVar30 = *in_stack_000001e8;
          if (lVar30 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_03988250;
          lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
          *(undefined1 *)(lVar30 + 0x28) = 1;
          *(undefined8 *)(lVar30 + 0x40) = *(undefined8 *)(unaff_x19 + 0x1a08);
          thunk_FUN_01b4f09c();
          lVar30 = *in_stack_000001e8;
          if (lVar30 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_03988250;
          *(undefined8 *)(lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x58) =
               *(undefined8 *)(unaff_x19 + 0x1a10);
          thunk_FUN_01b4f09c();
          lVar30 = *in_stack_000001e8;
          if (lVar30 == 0) goto thunk_FUN_01b48178;
          uVar14 = *unaff_x29;
          if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_03988250;
          unaff_w23 = 1;
          *(undefined4 *)(lVar30 + (long)(int)uVar14 * unaff_x27 + 0x60) =
               *(undefined4 *)(unaff_x19 + 0x1a18);
          *(undefined1 *)(*(long *)(*(long *)PTR_DAT_03dad300 + 0xb8) + 8) = 1;
          in_stack_00001288 = CONCAT44(3,uVar14 + 1);
        }
        else if (in_stack_0000129c == 3) {
          if ((*in_stack_000001c8 == 0) ||
             (lVar22 = FUN_0396dd7c(*in_stack_000001c8,0), lVar22 == 0)) goto thunk_FUN_01b48178;
          uVar19 = FUN_0262f3a4(lVar22,3,*(undefined8 *)PTR_DAT_03daca20);
          if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_03988250;
          *(undefined8 *)(lVar30 + lVar45 * unaff_x27 + 0x30) = uVar19;
          thunk_FUN_01b4f09c();
          unaff_w23 = 1;
          *(undefined1 *)(*(long *)(*(long *)PTR_DAT_03dad300 + 0xb8) + 8) = 1;
          uVar14 = *unaff_x29;
        }
      }
      else {
        unaff_w23 = 0;
      }
      uVar19 = in_stack_00001288;
      if (((int)uVar14 < *(int *)(in_stack_000001e0 + 0xe4)) && (in_stack_0000129c != 3)) {
        lVar30 = *in_stack_000001e8;
        if (lVar30 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_03988250;
        lVar30 = lVar30 + (long)(int)uVar14 * (long)iVar18;
        *(undefined1 *)(lVar30 + 0x1a0) = 0;
        *(undefined2 *)(lVar30 + 0x20) = 0x200b;
        *(undefined4 *)(lVar30 + 0x6c) = 0;
        *unaff_x29 = uVar14 + 1;
        unaff_x22 = in_stack_000001e8;
        goto LAB_0398183c;
      }
      cVar41 = *unaff_x24;
      if (cVar41 == '\x01') {
        uVar14 = *(uint *)(unaff_x19 + 0x124);
        if ((uVar14 >> 4 & 1) == 0) {
          if ((uVar14 >> 3 & 1) == 0) {
            fStack000000000000017c = 1.0;
            if ((uVar14 >> 5 & 1) != 0) {
              if (*(int *)(*(long *)
                            Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar21 = FUN_02fdd9e8(in_stack_0000129c,0);
              if ((uVar21 & 1) != 0) {
                if (*(int *)(*(long *)
                              Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar14 = FUN_02fddc48(in_stack_0000129c,0);
                in_stack_0000129c = uVar14 & 0xffff;
                fStack000000000000017c = fStack0000000000000034;
              }
            }
          }
          else {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar21 = FUN_02fdd92c(in_stack_0000129c,0);
            fStack000000000000017c = 1.0;
            if ((uVar21 & 1) != 0) {
              if (*(int *)(*(long *)
                            Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar14 = FUN_02fdddc0(in_stack_0000129c,0);
              goto LAB_039819ac;
            }
          }
        }
        else {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar21 = FUN_02fdd9e8(in_stack_0000129c,0);
          fStack000000000000017c = 1.0;
          if ((uVar21 & 1) != 0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar14 = FUN_02fddc48(in_stack_0000129c,0);
LAB_039819ac:
            fStack000000000000017c = 1.0;
            in_stack_0000129c = uVar14 & 0xffff;
          }
        }
        cVar41 = *unaff_x24;
      }
      else {
        fStack000000000000017c = 1.0;
      }
      if (cVar41 == '\x01') {
        lVar30 = *in_stack_000001e8;
        if (lVar30 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar30 + 0x18) <= *unaff_x29) goto LAB_03988250;
        *in_stack_000001b0 = *(long *)(lVar30 + (long)(int)*unaff_x29 * unaff_x27 + 0x30);
        thunk_FUN_01b4f09c(in_stack_000001b0);
        unaff_x22 = in_stack_000001e8;
        if (*in_stack_000001b0 == 0) goto LAB_0398183c;
        lVar30 = *in_stack_000001e8;
        if (lVar30 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar30 + 0x18) <= *unaff_x29) goto LAB_03988250;
        *in_stack_000001c8 = *(long *)(lVar30 + (long)(int)*unaff_x29 * unaff_x27 + 0x40);
        thunk_FUN_01b4f09c(in_stack_000001c8);
        lVar30 = *in_stack_000001e8;
        if (lVar30 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar30 + 0x18) <= *unaff_x29) goto LAB_03988250;
        *in_stack_00000190 = *(long *)(lVar30 + (long)(int)*unaff_x29 * unaff_x27 + 0x58);
        thunk_FUN_01b4f09c();
        lVar30 = *in_stack_000001e8;
        if (lVar30 == 0) goto thunk_FUN_01b48178;
        uVar33 = *unaff_x29;
        uVar14 = *(uint *)(lVar30 + 0x18);
        if (uVar14 <= uVar33) goto LAB_03988250;
        *(undefined4 *)(unaff_x19 + 0x78) =
             *(undefined4 *)(lVar30 + (long)(int)uVar33 * unaff_x27 + 0x60);
        if (unaff_w23 == 0) {
LAB_03981b4c:
          if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
          fVar59 = *(float *)(unaff_x19 + 0xf4);
          iVar15 = FUN_0396ac24(*in_stack_000001c8 + 0xb0,0);
          lVar30 = *(long *)(unaff_x19 + 0x68);
        }
        else {
          lVar45 = *(long *)(unaff_x19 + 0x20);
          if (lVar45 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar45 + 0x18) <= in_stack_0000120c) goto LAB_03988250;
          if ((*(int *)(lVar45 + (long)(int)in_stack_0000120c * 0x10 + 0x24) != 10) ||
             (uVar33 == *(uint *)(unaff_x19 + 0x328))) goto LAB_03981b4c;
          if (uVar14 <= uVar33 - 1) goto LAB_03988250;
          if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
          fVar59 = *(float *)(lVar30 + (long)(int)(uVar33 - 1) * (long)iVar18 + 0x68);
          iVar15 = FUN_0396ac24(*in_stack_000001c8 + 0xb0,0);
          lVar30 = *in_stack_000001c8;
        }
        if (lVar30 == 0) goto thunk_FUN_01b48178;
        fVar53 = (float)FUN_0396ac34(lVar30 + 0xb0,0);
        fVar47 = in_stack_00000150;
        if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
          fVar47 = 1.0;
        }
        fStack0000000000000170 = 0.0;
        fVar49 = 0.0;
        if ((unaff_w23 & in_stack_0000129c == 0x2026) == 0) {
          if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
          fVar49 = (float)FUN_0396ac54(*in_stack_000001c8 + 0xb0,0);
          if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
          fStack0000000000000170 = (float)FUN_0396ac94(*in_stack_000001c8 + 0xb0,0);
        }
        lVar30 = *(long *)(unaff_x19 + 0x1588);
        if ((lVar30 == 0) || (*(long *)(lVar30 + 0x20) == 0)) goto thunk_FUN_01b48178;
        fVar65 = *(float *)(unaff_x19 + 0xf0);
        fVar48 = *(float *)(lVar30 + 0x2c);
        fVar57 = (float)FUN_0396b17c(*(long *)(lVar30 + 0x20),0);
        if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
        fVar50 = (float)FUN_0396ac84(*in_stack_000001c8 + 0xb0,0);
        if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
        fVar66 = *(float *)(unaff_x19 + 0xf0);
        fVar51 = (float)FUN_0396ac34(*in_stack_000001c8 + 0xb0,0);
        lVar30 = *in_stack_000001e8;
        if (lVar30 == 0) goto thunk_FUN_01b48178;
        uVar14 = *(uint *)(unaff_x19 + 0x324);
        if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_03988250;
        lVar45 = lVar30 + (long)(int)uVar14 * unaff_x27;
        fVar47 = ((fStack000000000000017c * fVar59) / (float)iVar15) * fVar53 * fVar47;
        fVar57 = fVar47 * fVar65 * fVar48 * fVar57;
        *(undefined1 *)(lVar45 + 0x28) = 1;
        *(float *)(lVar45 + 0x16c) = fVar57;
        in_stack_000001a8 = *(float *)(unaff_x19 + 0xd8);
        fVar51 = fVar47 * fVar50 * fVar66 * fVar51;
LAB_0398217c:
        unaff_s12 = fVar57;
        if (in_stack_0000129c == 3 || in_stack_0000129c == 0xad) {
          unaff_s12 = 0.0;
        }
      }
      else {
        if (cVar41 == '\x02') {
          lVar30 = *in_stack_000001e8;
          if (lVar30 != 0) {
            if (*unaff_x29 < *(uint *)(lVar30 + 0x18)) {
              plVar43 = *(long **)(lVar30 + (long)(int)*unaff_x29 * unaff_x27 + 0x30);
              if (plVar43 != (long *)0x0) {
                bVar12 = *(byte *)(*(long *)PTR_DAT_03dad2f0 + 0x130);
                if ((*(byte *)(*plVar43 + 0x130) < bVar12) ||
                   (*(long *)(*(long *)(*plVar43 + 200) + (ulong)bVar12 * 8 + -8) !=
                    *(long *)PTR_DAT_03dad2f0)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b4841c(plVar43);
                }
                plVar23 = (long *)FUN_039778ec(plVar43,0);
                if (plVar23 == (long *)0x0) {
                  plVar23 = (long *)0x0;
                  *in_stack_00000160 = 0;
                }
                else {
                  lVar30 = *(long *)PTR_DAT_03dacf18;
                  bVar12 = *(byte *)(lVar30 + 0x130);
                  if (*(byte *)(*plVar23 + 0x130) < bVar12) {
                    plVar34 = (long *)0x0;
                  }
                  else {
                    plVar34 = plVar23;
                    if (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar12 * 8 + -8) != lVar30) {
                      plVar34 = (long *)0x0;
                    }
                  }
                  *in_stack_00000160 = (long)plVar34;
                  if (*(byte *)(*plVar23 + 0x130) < bVar12) {
                    plVar23 = (long *)0x0;
                  }
                  else if (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar12 * 8 + -8) != lVar30)
                  {
                    plVar23 = (long *)0x0;
                  }
                }
                thunk_FUN_01b4f09c(in_stack_00000160,plVar23);
                iVar15 = FUN_0396ef70(plVar43,0);
                *(int *)(unaff_x19 + 0x157c) = iVar15;
                if (in_stack_0000129c == 0x3c) {
                  in_stack_0000129c = iVar15 + 0xe000;
                }
                else {
                  uVar16 = FUN_01bd7168(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                  *(undefined4 *)(unaff_x19 + 0x1580) = uVar16;
                }
                if (*(long *)(unaff_x19 + 0x68) != 0) {
                  fVar57 = *(float *)(unaff_x19 + 0xf4);
                  FUN_0396d8d8(&stack0x000012a0,*(long *)(unaff_x19 + 0x68),0);
                  memcpy(&stack0x00001210,&stack0x000012a0,0x60);
                  iVar15 = FUN_0396ac24(&stack0x00001210,0);
                  if (*in_stack_000001c8 != 0) {
                    FUN_0396d8d8(&stack0x000012a0,*in_stack_000001c8,0);
                    memcpy(&stack0x00001210,&stack0x000012a0,0x60);
                    fVar47 = (float)FUN_0396ac34(&stack0x00001210,0);
                    fVar59 = in_stack_00000150;
                    if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                      fVar59 = 1.0;
                    }
                    if (*in_stack_00000160 == 0) goto thunk_FUN_01b48178;
                    fVar59 = (fVar57 / (float)iVar15) * fVar47 * fVar59;
                    iVar15 = FUN_0396ac24(*in_stack_00000160 + 0x48,0);
                    fVar57 = *(float *)(unaff_x19 + 0xf4);
                    if (iVar15 < 1) {
                      if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
                      iVar15 = FUN_0396ac24(*in_stack_000001c8 + 0xb0,0);
                      if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
                      fVar47 = (float)FUN_0396ac34(*in_stack_000001c8 + 0xb0,0);
                      fStack0000000000000170 = in_stack_00000150;
                      if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                        fStack0000000000000170 = 1.0;
                      }
                      if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
                      fVar53 = (float)FUN_0396ac54(*in_stack_000001c8 + 0xb0,0);
                      if (plVar43[4] == 0) goto thunk_FUN_01b48178;
                      FUN_0396b140(&stack0x000012a0,plVar43[4],0);
                      fVar65 = (float)FUN_0396af70(&stack0x000011c0,0);
                      if (plVar43[4] == 0) goto thunk_FUN_01b48178;
                      fVar48 = *(float *)((long)plVar43 + 0x2c);
                      fVar50 = (float)FUN_0396b17c(plVar43[4],0);
                      if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
                      fVar49 = (float)FUN_0396ac54(*in_stack_000001c8 + 0xb0,0);
                      if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
                      fVar66 = (float)FUN_0396ac84(*in_stack_000001c8 + 0xb0,0);
                      if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
                      fVar56 = *(float *)(unaff_x19 + 0xf0);
                      fVar51 = (float)FUN_0396ac34(*in_stack_000001c8 + 0xb0,0);
                      if (*(long *)(unaff_x19 + 0x68) == 0) goto thunk_FUN_01b48178;
                      fVar51 = fVar59 * fVar66 * fVar56 * fVar51;
                      fStack0000000000000170 =
                           (fVar57 / (float)iVar15) * fVar47 * fStack0000000000000170;
                      fVar57 = fStack0000000000000170 * (fVar53 / fVar65) * fVar48 * fVar50;
                      fStack0000000000000170 = fStack0000000000000170 / fVar57;
                      fVar49 = fStack0000000000000170 * fVar49;
                      fVar59 = (float)FUN_0396ac94(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
                      fStack0000000000000170 = fStack0000000000000170 * fVar59;
                    }
                    else {
                      if (*in_stack_00000160 == 0) goto thunk_FUN_01b48178;
                      iVar15 = FUN_0396ac24(*in_stack_00000160 + 0x48,0);
                      if (*in_stack_00000160 == 0) goto thunk_FUN_01b48178;
                      fVar47 = (float)FUN_0396ac34(*in_stack_00000160 + 0x48,0);
                      if (plVar43[4] == 0) goto thunk_FUN_01b48178;
                      fVar65 = *(float *)((long)plVar43 + 0x2c);
                      fVar53 = in_stack_00000150;
                      if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                        fVar53 = 1.0;
                      }
                      fVar48 = (float)FUN_0396b17c(plVar43[4],0);
                      if (*in_stack_00000160 == 0) goto thunk_FUN_01b48178;
                      fVar49 = (float)FUN_0396ac54(*in_stack_00000160 + 0x48,0);
                      if (*in_stack_00000160 == 0) goto thunk_FUN_01b48178;
                      fVar50 = (float)FUN_0396ac84(*in_stack_00000160 + 0x48,0);
                      if (*in_stack_00000160 == 0) goto thunk_FUN_01b48178;
                      fVar66 = *(float *)(unaff_x19 + 0xf0);
                      fVar51 = (float)FUN_0396ac34(*in_stack_00000160 + 0x48,0);
                      if (*(long *)(unaff_x19 + 0xe0) == 0) goto thunk_FUN_01b48178;
                      fVar51 = fVar59 * fVar50 * fVar66 * fVar51;
                      fVar57 = (fVar57 / (float)iVar15) * fVar47 * fVar53 * fVar65 * fVar48;
                      fStack0000000000000170 =
                           (float)FUN_0396ac94(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
                    }
                    *in_stack_000001b0 = (long)plVar43;
                    thunk_FUN_01b4f09c(in_stack_000001b0,plVar43);
                    lVar30 = *in_stack_000001e8;
                    if (lVar30 != 0) {
                      if (*in_stack_000001d0 < *(uint *)(lVar30 + 0x18)) {
                        lVar30 = lVar30 + (long)(int)*in_stack_000001d0 * unaff_x27;
                        *(undefined1 *)(lVar30 + 0x28) = 2;
                        *(float *)(lVar30 + 0x16c) = fVar57;
                        *(long *)(lVar30 + 0x48) = *in_stack_00000160;
                        thunk_FUN_01b4f09c();
                        lVar30 = *in_stack_000001e8;
                        if (lVar30 != 0) {
                          if (*in_stack_000001d0 < *(uint *)(lVar30 + 0x18)) {
                            *(long *)(lVar30 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x40) =
                                 *in_stack_000001c8;
                            thunk_FUN_01b4f09c();
                            lVar30 = *in_stack_000001e8;
                            if (lVar30 != 0) {
                              uVar14 = *in_stack_000001d0;
                              if (uVar14 < *(uint *)(lVar30 + 0x18)) {
                                *(undefined4 *)(lVar30 + (long)(int)uVar14 * unaff_x27 + 0x60) =
                                     *(undefined4 *)(unaff_x19 + 0x78);
                                *(undefined4 *)(unaff_x19 + 0x78) = uVar52;
                                in_stack_000001a8 = 0.0;
                                unaff_x29 = in_stack_000001d0;
                                goto LAB_0398217c;
                              }
                              goto LAB_03988250;
                            }
                            goto thunk_FUN_01b48178;
                          }
                          goto LAB_03988250;
                        }
                        goto thunk_FUN_01b48178;
                      }
                      goto LAB_03988250;
                    }
                  }
                }
              }
              goto thunk_FUN_01b48178;
            }
            goto LAB_03988250;
          }
          goto thunk_FUN_01b48178;
        }
        lVar30 = *in_stack_000001e8;
        unaff_s12 = fVar57;
        if (in_stack_0000129c == 3 || in_stack_0000129c == 0xad) {
          unaff_s12 = 0.0;
        }
        fVar51 = 0.0;
        if (lVar30 == 0) goto thunk_FUN_01b48178;
        uVar14 = *unaff_x29;
        fVar49 = 0.0;
        fStack0000000000000170 = 0.0;
      }
      if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_03988250;
      lVar30 = lVar30 + (long)(int)uVar14 * (long)iVar18;
      *(short *)(lVar30 + 0x20) = (short)in_stack_0000129c;
      *(undefined4 *)(lVar30 + 0x68) = *(undefined4 *)(unaff_x19 + 0xf4);
      *(undefined4 *)(lVar30 + 0x170) = *(undefined4 *)(unaff_x19 + 0x1ac);
      lVar30 = *in_stack_000001e8;
      if (lVar30 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_03988250;
      *(undefined4 *)(lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x174) =
           *(undefined4 *)(unaff_x19 + 0x1b0);
      lVar30 = *in_stack_000001e8;
      if (lVar30 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_03988250;
      *(undefined4 *)(lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x17c) =
           *(undefined4 *)(unaff_x19 + 0x1b4);
      lVar30 = *in_stack_000001e8;
      if (lVar30 == 0) goto thunk_FUN_01b48178;
      uVar20 = in_stack_00000108[1];
      uVar19 = *in_stack_00000108;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_03988250;
      lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
      *(undefined4 *)(lVar30 + 0x198) = *(undefined4 *)(in_stack_00000108 + 2);
      *(undefined8 *)(lVar30 + 400) = uVar20;
      *(undefined8 *)(lVar30 + 0x188) = uVar19;
      lVar30 = *in_stack_000001e8;
      if (lVar30 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar30 + 0x18) <= *unaff_x29) goto LAB_03988250;
      lVar30 = lVar30 + (long)(int)*unaff_x29 * unaff_x27;
      lVar45 = *(long *)(lVar30 + 0x38);
      *(undefined4 *)(lVar30 + 0x19c) = *(undefined4 *)(unaff_x19 + 0x124);
      if ((lVar45 == 0) &&
         ((*in_stack_000001b0 == 0 || (lVar45 = *(long *)(*in_stack_000001b0 + 0x20), lVar45 == 0)))
         ) goto thunk_FUN_01b48178;
      FUN_0396b140(&stack0x000012a0,lVar45,0);
      if (in_stack_0000129c >> 0x10 == 0) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar14 = FUN_02fdb080(in_stack_0000129c,0);
        unaff_w26 = uVar14 & 1;
      }
      else {
        unaff_w26 = 0;
      }
      uVar52 = 0;
      in_stack_00000188 = *(float *)(in_stack_000001e0 + 0xc0);
      if (*(char *)(in_stack_000001e0 + 0xb4) != '\0') {
        if (*in_stack_000001b0 == 0) goto thunk_FUN_01b48178;
        uVar14 = *unaff_x29;
        uVar33 = *(uint *)(*in_stack_000001b0 + 0x28);
        if ((int)uVar14 < (int)fStack00000000000000e4) {
          lVar30 = *in_stack_000001e8;
          if (lVar30 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar30 + 0x18) <= uVar14 + 1) goto LAB_03988250;
          lVar30 = *(long *)(lVar30 + (long)(int)(uVar14 + 1) * (long)iVar18 + 0x30);
          if ((((lVar30 == 0) || (*in_stack_000001c8 == 0)) ||
              (lVar45 = *(long *)(*in_stack_000001c8 + 0x170), lVar45 == 0)) ||
             (lVar45 = *(long *)(lVar45 + 0x40), lVar45 == 0)) goto thunk_FUN_01b48178;
          uVar21 = FUN_02624ae4(lVar45,uVar33 | *(int *)(lVar30 + 0x28) << 0x10,&stack0x00001190,
                                *(undefined8 *)PTR_DAT_03dad2d0);
          if ((uVar21 & 1) != 0) {
            FUN_0396d450(&stack0x000012a0,&stack0x00001190,0);
            uVar52 = FUN_0396d2b4(&stack0x00001170,0);
            uVar21 = FUN_0396d478(&stack0x00001190,0);
            if ((uVar21 & 0x100) != 0) {
              in_stack_00000188 = 0.0;
            }
          }
          uVar14 = *unaff_x29;
        }
        if (0 < (int)uVar14) {
          lVar30 = *in_stack_000001e8;
          if (lVar30 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar30 + 0x18) <= uVar14 - 1) goto LAB_03988250;
          lVar30 = *(long *)(lVar30 + (ulong)(uVar14 - 1) * (unaff_x27 & 0xffffffff) + 0x30);
          if (((lVar30 == 0) || (*in_stack_000001c8 == 0)) ||
             ((lVar45 = *(long *)(*in_stack_000001c8 + 0x170), lVar45 == 0 ||
              (lVar45 = *(long *)(lVar45 + 0x40), lVar45 == 0)))) goto thunk_FUN_01b48178;
          uVar21 = FUN_02624ae4(lVar45,*(uint *)(lVar30 + 0x28) | uVar33 << 0x10,&stack0x00001190,
                                *(undefined8 *)PTR_DAT_03dad2d0);
          if ((uVar21 & 1) != 0) {
            FUN_0396d464(&stack0x000012a0,&stack0x00001190,0);
            FUN_0396d2b4(&stack0x00001170,0);
            FUN_0396d114(uVar52,0);
            uVar21 = FUN_0396d478(&stack0x00001190,0);
            if ((uVar21 & 0x100) != 0) {
              in_stack_00000188 = 0.0;
            }
          }
        }
      }
      lVar30 = *in_stack_000001e8;
      if (lVar30 == 0) goto thunk_FUN_01b48178;
      uVar14 = *unaff_x29;
      uVar52 = FUN_0396d104(&stack0x000011e0,0);
      if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_03988250;
      *(undefined4 *)(lVar30 + (long)(int)uVar14 * unaff_x27 + 0x160) = uVar52;
      if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar21 = FUN_0399a2ec(in_stack_0000129c,0);
      uVar14 = *unaff_x29;
      if ((uVar21 & 1) == 0) {
        if ((uVar21 & 1) == 0 && 0 < (int)uVar14) {
          uVar33 = *(uint *)(unaff_x19 + 0x19c4);
          if ((uVar33 == 0x80000000) || (uVar33 != uVar14 - 1)) {
            do {
              uVar33 = uVar14 - 1;
              if (((int)uVar14 < 1) || (uVar33 == *(uint *)(unaff_x19 + 0x19c4))) {
                uVar14 = *(uint *)(unaff_x19 + 0x19c4);
                if (uVar14 == 0x80000000) goto LAB_0398259c;
                lVar30 = *in_stack_000001e8;
                if (lVar30 == 0) goto thunk_FUN_01b48178;
                if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_03988250;
                lVar30 = *(long *)(lVar30 + (long)(int)uVar14 * unaff_x27 + 0x30);
                if ((lVar30 == 0) || (lVar30 = FUN_0397c204(lVar30,0), lVar30 == 0))
                goto thunk_FUN_01b48178;
                uVar14 = FUN_0396b130(lVar30,0);
                if (*in_stack_000001b0 == 0) goto thunk_FUN_01b48178;
                iVar15 = FUN_0396ef70(*in_stack_000001b0,0);
                if (((*in_stack_000001c8 == 0) ||
                    (lVar30 = FUN_0396def4(*in_stack_000001c8,0), lVar30 == 0)) ||
                   (*(long *)(lVar30 + 0x48) == 0)) goto thunk_FUN_01b48178;
                uVar24 = FUN_0262abc4(*(long *)(lVar30 + 0x48),uVar14 | iVar15 << 0x10,
                                      &stack0x00001118,*(undefined8 *)PTR_DAT_03dad2e0);
                unaff_x29 = in_stack_000001d0;
                if ((uVar24 & 1) == 0) goto LAB_0398259c;
                lVar30 = *in_stack_000001e8;
                if (lVar30 == 0) goto thunk_FUN_01b48178;
                if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto LAB_03988250;
                fVar59 = *(float *)(lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * unaff_x27 +
                                   0x148);
                fVar65 = *(float *)(unaff_x19 + 0x2f4);
                FUN_0396d638(&stack0x00001118,0);
                fVar47 = (float)FUN_0396d610(&stack0x00001150,0);
                FUN_0396d648(&stack0x00001118,0);
                fVar53 = (float)FUN_0396d620(&stack0x00001148,0);
                FUN_0396d0ec(((fVar59 - fVar65) / unaff_s12 + fVar47) - fVar53,&stack0x000011e0,0);
                FUN_0396d638(&stack0x00001118,0);
                fVar59 = (float)FUN_0396d618(&stack0x00001150,0);
                puVar25 = &stack0x00001118;
                goto LAB_03983b34;
              }
              lVar30 = *in_stack_000001e8;
              if (lVar30 == 0) goto thunk_FUN_01b48178;
              if (*(uint *)(lVar30 + 0x18) <= uVar33) goto LAB_03988250;
              lVar30 = *(long *)(lVar30 + (ulong)uVar33 * (unaff_x27 & 0xffffffff) + 0x30);
              if ((lVar30 == 0) || (lVar30 = FUN_0397c204(lVar30,0), lVar30 == 0))
              goto thunk_FUN_01b48178;
              uVar14 = FUN_0396b130(lVar30,0);
              if (*in_stack_000001b0 == 0) goto thunk_FUN_01b48178;
              iVar15 = FUN_0396ef70(*in_stack_000001b0,0);
              if (((*in_stack_000001c8 == 0) ||
                  (lVar30 = FUN_0396def4(*in_stack_000001c8,0), lVar30 == 0)) ||
                 (*(long *)(lVar30 + 0x50) == 0)) goto thunk_FUN_01b48178;
              uVar24 = FUN_0262dcc8(*(long *)(lVar30 + 0x50),uVar14 | iVar15 << 0x10,
                                    &stack0x00001130,*(undefined8 *)PTR_DAT_03dad2d8);
              unaff_x29 = in_stack_000001d0;
              uVar14 = uVar33;
            } while ((uVar24 & 1) == 0);
            lVar30 = *in_stack_000001e8;
            if (lVar30 == 0) goto thunk_FUN_01b48178;
            if (*(uint *)(lVar30 + 0x18) <= uVar33) goto LAB_03988250;
            fVar65 = *(float *)(unaff_x19 + 0x2e0);
            fVar48 = *(float *)(unaff_x19 + 0x180);
            lVar30 = lVar30 + uVar33 * unaff_x27;
            fVar59 = *(float *)(unaff_x19 + 0x2f4);
            fVar50 = *(float *)(lVar30 + 0x148);
            fVar66 = *(float *)(lVar30 + 0x150);
            FUN_0396d658(&stack0x00001130,0);
            fVar47 = (float)FUN_0396d610(&stack0x00001150,0);
            FUN_0396d668(&stack0x00001130,0);
            fVar53 = (float)FUN_0396d620(&stack0x00001148,0);
            FUN_0396d0ec(((fVar50 - fVar59) / unaff_s12 + fVar47) - fVar53,&stack0x000011e0,0);
            FUN_0396d658(&stack0x00001130,0);
            fVar59 = (float)FUN_0396d618(&stack0x00001150,0);
            FUN_0396d668(&stack0x00001130,0);
            fVar47 = (float)FUN_0396d628(&stack0x00001148,0);
            FUN_0396d0fc(((fVar66 - ((fVar51 - fVar65) + fVar48)) / unaff_s12 + fVar59) - fVar47,
                         &stack0x000011e0,0);
            in_stack_00000188 = 0.0;
          }
          else {
            lVar30 = *in_stack_000001e8;
            if (lVar30 == 0) goto thunk_FUN_01b48178;
            if (*(uint *)(lVar30 + 0x18) <= uVar33) goto LAB_03988250;
            lVar30 = *(long *)(lVar30 + (long)(int)uVar33 * unaff_x27 + 0x30);
            if ((lVar30 == 0) || (lVar30 = FUN_0397c204(lVar30,0), lVar30 == 0))
            goto thunk_FUN_01b48178;
            uVar14 = FUN_0396b130(lVar30,0);
            if (*in_stack_000001b0 == 0) goto thunk_FUN_01b48178;
            iVar15 = FUN_0396ef70(*in_stack_000001b0,0);
            if (((*in_stack_000001c8 == 0) ||
                (lVar30 = FUN_0396def4(*in_stack_000001c8,0), lVar30 == 0)) ||
               (*(long *)(lVar30 + 0x48) == 0)) goto thunk_FUN_01b48178;
            uVar24 = FUN_0262abc4(*(long *)(lVar30 + 0x48),uVar14 | iVar15 << 0x10,&stack0x00001158,
                                  *(undefined8 *)PTR_DAT_03dad2e0);
            unaff_x29 = in_stack_000001d0;
            if ((uVar24 & 1) != 0) {
              lVar30 = *in_stack_000001e8;
              if (lVar30 == 0) goto thunk_FUN_01b48178;
              if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto LAB_03988250;
              fVar59 = *(float *)(lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * unaff_x27 +
                                 0x148);
              fVar65 = *(float *)(unaff_x19 + 0x2f4);
              FUN_0396d638(&stack0x00001158,0);
              fVar47 = (float)FUN_0396d610(&stack0x00001150,0);
              FUN_0396d648(&stack0x00001158,0);
              fVar53 = (float)FUN_0396d620(&stack0x00001148,0);
              FUN_0396d0ec(((fVar59 - fVar65) / unaff_s12 + fVar47) - fVar53,&stack0x000011e0,0);
              FUN_0396d638(&stack0x00001158,0);
              fVar59 = (float)FUN_0396d618(&stack0x00001150,0);
              puVar25 = &stack0x00001158;
LAB_03983b34:
              FUN_0396d648(puVar25,0);
              fVar47 = (float)FUN_0396d628(&stack0x00001148,0);
              FUN_0396d0fc(fVar59 - fVar47,&stack0x000011e0,0);
              in_stack_00000188 = 0.0;
              unaff_x29 = in_stack_000001d0;
            }
          }
        }
      }
      else {
        *(uint *)(unaff_x19 + 0x19c4) = uVar14;
      }
LAB_0398259c:
      fVar59 = (float)FUN_0396d0f4(&stack0x000011e0,0);
      fVar47 = (float)FUN_0396d0f4(&stack0x000011e0,0);
      if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
        fVar65 = *(float *)(unaff_x19 + 0x2f4);
        fVar53 = (float)FUN_0396af88(&stack0x000011f0,0);
        fVar65 = fVar65 - unaff_s12 * fVar53 * (1.0 - *(float *)(unaff_x19 + 0x1594));
        *(float *)(unaff_x19 + 0x2f4) = fVar65;
        if ((unaff_w26 != 0) || (in_stack_0000129c == 0x200b)) {
          *(float *)(unaff_x19 + 0x2f4) =
               fVar65 - in_stack_00000158 * *(float *)(in_stack_000001e0 + 0xc4);
        }
      }
      fVar53 = *(float *)(unaff_x19 + 0x2f0);
      if (fVar53 == 0.0) {
        in_stack_000000f0._4_4_ = 0.0;
      }
      else {
        fVar65 = (float)FUN_0396af68(&stack0x000011f0,0);
        fVar48 = (float)FUN_0396af78(&stack0x000011f0,0);
        in_stack_000000f0._4_4_ =
             (1.0 - *(float *)(unaff_x19 + 0x1594)) *
             (fVar53 * 0.5 - unaff_s12 * (fVar65 * 0.5 + fVar48));
        *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2f4) + in_stack_000000f0._4_4_;
      }
      uVar14 = 0;
      if ((cVar28 == '\0') && (*unaff_x24 == '\x01')) {
        uVar14 = *(uint *)(unaff_x19 + 0x124) & 1;
      }
      lVar30 = *in_stack_00000190;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar24 = FUN_0391f968(lVar30,0,0);
      puVar7 = PTR_DAT_03daca38;
      if (uVar14 == 0) {
        in_stack_00000148 = 0.0;
        if ((uVar24 & 1) != 0) {
          lVar30 = *in_stack_00000190;
          if (*(int *)(*(long *)PTR_DAT_03daca38 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (lVar30 == 0) goto thunk_FUN_01b48178;
          uVar24 = FUN_038ffa04(lVar30,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x6c),0);
          if ((uVar24 & 1) != 0) {
            lVar30 = *in_stack_00000190;
            if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            if (lVar30 == 0) goto thunk_FUN_01b48178;
            uVar24 = FUN_038ffa04(lVar30,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xe4),0
                                 );
            if ((uVar24 & 1) != 0) {
              lVar30 = *in_stack_00000190;
              if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              if (lVar30 != 0) {
                fVar53 = (float)FUN_03900954(lVar30,*(undefined4 *)
                                                     (*(long *)(*(long *)puVar7 + 0xb8) + 0x6c),0);
                unaff_x28 = (long *)
                            Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                ;
                if ((*in_stack_000001c8 != 0) && (*in_stack_00000190 != 0)) {
                  fVar65 = *(float *)(*in_stack_000001c8 + 0x188);
                  in_stack_00000178 =
                       (float)FUN_03900954(*in_stack_00000190,
                                           *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xe4)
                                           ,0);
                  in_stack_00000178 = in_stack_00000178 * fVar53 * fVar65 * 0.25;
                  if (fVar53 < in_stack_000001a8 + in_stack_00000178) {
                    in_stack_000001a8 = fVar53 - in_stack_00000178;
                  }
                  goto LAB_0398291c;
                }
              }
              goto thunk_FUN_01b48178;
            }
          }
        }
        in_stack_00000178 = 0.0;
        unaff_x28 = (long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__;
      }
      else {
        in_stack_00000178 = 0.0;
        unaff_x28 = (long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__;
        if ((uVar24 & 1) != 0) {
          lVar30 = *in_stack_00000190;
          if (*(int *)(*(long *)PTR_DAT_03daca38 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (lVar30 == 0) goto thunk_FUN_01b48178;
          uVar24 = FUN_038ffa04(lVar30,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x6c),0);
          unaff_x28 = (long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
          ;
          if ((uVar24 & 1) != 0) {
            lVar30 = *in_stack_00000190;
            if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            if (lVar30 == 0) goto thunk_FUN_01b48178;
            fVar53 = (float)FUN_03900954(lVar30,*(undefined4 *)
                                                 (*(long *)(*(long *)puVar7 + 0xb8) + 0x6c),0);
            if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
            fVar65 = (float)FUN_0396df5c(*in_stack_000001c8,0);
            unaff_x28 = (long *)
                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
            ;
            if (*in_stack_00000190 == 0) goto thunk_FUN_01b48178;
            in_stack_00000178 =
                 (float)FUN_03900954(*in_stack_00000190,
                                     *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xe4),0);
            in_stack_00000178 = fVar53 * fVar65 * 0.25 * in_stack_00000178;
            if (fVar53 < in_stack_000001a8 + in_stack_00000178) {
              in_stack_000001a8 = fVar53 - in_stack_00000178;
            }
          }
        }
        if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
        in_stack_00000148 = (float)FUN_0396df6c(*in_stack_000001c8,0);
      }
LAB_0398291c:
      fVar65 = *(float *)(unaff_x19 + 0x2f4);
      fVar53 = (float)FUN_0396af78(&stack0x000011f0,0);
      fVar50 = *(float *)(unaff_x19 + 0x19a8);
      fVar48 = (float)FUN_0396d0e4(&stack0x000011e0,0);
      fVar65 = fVar65 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                        unaff_s12 *
                        (fVar48 + ((fVar53 * fVar50 - in_stack_000001a8) - in_stack_00000178));
      fVar53 = (float)FUN_0396af80(&stack0x000011f0,0);
      fVar48 = (float)FUN_0396d0f4(&stack0x000011e0,0);
      fVar66 = *(float *)(unaff_x19 + 0x180) +
               ((fVar51 + unaff_s12 * (in_stack_000001a8 + fVar53 + fVar48)) -
               *(float *)(unaff_x19 + 0x2e0));
      fVar53 = (float)FUN_0396af70(&stack0x000011f0,0);
      fVar53 = fVar66 - unaff_s12 * (in_stack_000001a8 + in_stack_000001a8 + fVar53);
      fVar48 = (float)FUN_0396af68(&stack0x000011f0,0);
      fVar48 = fVar65 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                        unaff_s12 *
                        (in_stack_00000178 + in_stack_00000178 +
                        in_stack_000001a8 + in_stack_000001a8 +
                        fVar48 * *(float *)(unaff_x19 + 0x19a8));
      in_stack_000001b8._4_4_ = fVar65;
      fVar50 = fVar48;
      if (((cVar28 == '\0') && (*unaff_x24 == '\x01')) &&
         ((*(byte *)(unaff_x19 + 0x124) >> 1 & 1) != 0)) {
        if (*(long *)(unaff_x19 + 0x68) == 0) goto thunk_FUN_01b48178;
        iVar15 = *(int *)(unaff_x19 + 0x19a4);
        fVar56 = (float)FUN_0396ac64(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
        if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
        fVar54 = (float)FUN_0396ac84(*in_stack_000001c8 + 0xb0,0);
        if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
        fVar55 = *(float *)(unaff_x19 + 0xf0);
        fVar63 = *(float *)(unaff_x19 + 0x180);
        fVar50 = (float)iVar15 * fStack00000000000000ac;
        fVar68 = (float)FUN_0396ac34(*in_stack_000001c8 + 0xb0,0);
        fVar68 = fVar68 * fVar55 * (fVar56 - (fVar54 + fVar63)) * 0.5;
        fVar56 = (float)FUN_0396af80(&stack0x000011f0,0);
        fVar55 = fVar50 * unaff_s12 * ((in_stack_00000178 + in_stack_000001a8 + fVar56) - fVar68);
        fVar56 = (float)FUN_0396af80(&stack0x000011f0,0);
        fVar54 = (float)FUN_0396af70(&stack0x000011f0,0);
        fVar66 = fVar66 + 0.0;
        fVar53 = fVar53 + 0.0;
        fVar50 = fVar50 * unaff_s12 *
                          ((((fVar56 - fVar54) - in_stack_000001a8) - in_stack_00000178) - fVar68);
        in_stack_000001b8._4_4_ = fVar65 + fVar50;
        fVar50 = fVar48 + fVar50;
        fVar65 = fVar65 + fVar55;
        fVar48 = fVar48 + fVar55;
      }
      uVar19 = *in_stack_00000100;
      uVar20 = *in_stack_000000f8;
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
        DAT_03fed256 = '\x01';
      }
      uVar58 = **(undefined8 **)
                 (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                 0xb8);
      uVar60 = (*(undefined8 **)
                 (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                 0xb8))[1];
      fVar56 = 0.0;
      if (DAT_00b553b8 <
          (float)((ulong)uVar20 >> 0x20) * (float)((ulong)uVar60 >> 0x20) +
          (float)uVar20 * (float)uVar60 +
          (float)uVar19 * (float)uVar58 +
          (float)((ulong)uVar19 >> 0x20) * (float)((ulong)uVar58 >> 0x20)) {
        fVar62 = 0.0;
        fVar63 = 0.0;
        fVar55 = 0.0;
        fVar54 = fVar66;
        fVar68 = fVar53;
      }
      else {
        FUN_03912088(&stack0x000012a0,*(undefined4 *)(unaff_x19 + 0x19b4),
                     *(undefined4 *)(unaff_x19 + 0x19b8),*(undefined4 *)(unaff_x19 + 0x19bc),
                     *(undefined4 *)(unaff_x19 + 0x19c0),0);
        fVar64 = (fVar48 + in_stack_000001b8._4_4_) * 0.5;
        fVar67 = (fVar53 + fVar66) * 0.5;
        fVar66 = fVar66 - fVar67;
        fVar55 = 0.0;
        fVar54 = fVar66;
        fVar65 = (float)FUN_03911ddc(fVar65 - fVar64,&stack0x000010d0,0);
        fVar65 = fVar64 + fVar65;
        fVar55 = fVar55 + 0.0;
        fVar68 = fVar53 - fVar67;
        fVar63 = 0.0;
        fVar53 = fVar68;
        in_stack_000001b8._4_4_ =
             (float)FUN_03911ddc(in_stack_000001b8._4_4_ - fVar64,&stack0x000010d0,0);
        in_stack_000001b8._4_4_ = fVar64 + in_stack_000001b8._4_4_;
        fVar53 = fVar67 + fVar53;
        fVar63 = fVar63 + 0.0;
        fVar62 = 0.0;
        fVar48 = (float)FUN_03911ddc(fVar48 - fVar64,&stack0x000010d0,0);
        fVar48 = fVar64 + fVar48;
        fVar66 = fVar67 + fVar66;
        fVar62 = fVar62 + 0.0;
        fVar56 = 0.0;
        fVar50 = (float)FUN_03911ddc(fVar50 - fVar64,&stack0x000010d0,0);
        fVar50 = fVar64 + fVar50;
        fVar56 = fVar56 + 0.0;
        fVar54 = fVar67 + fVar54;
        fVar68 = fVar67 + fVar68;
      }
      lVar30 = *in_stack_000001e8;
      if (lVar30 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar30 + 0x18) <= *unaff_x29) goto LAB_03988250;
      lVar30 = lVar30 + (long)(int)*unaff_x29 * unaff_x27;
      *(float *)(lVar30 + 0x128) = fVar53;
      *(float *)(lVar30 + 300) = fVar63;
      *(float *)(lVar30 + 0x124) = in_stack_000001b8._4_4_;
      lVar30 = *in_stack_000001e8;
      if (lVar30 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar30 + 0x18) <= *unaff_x29) goto LAB_03988250;
      lVar30 = lVar30 + (long)(int)*unaff_x29 * unaff_x27;
      *(float *)(lVar30 + 0x118) = fVar65;
      *(float *)(lVar30 + 0x11c) = fVar54;
      *(float *)(lVar30 + 0x120) = fVar55;
      lVar30 = *in_stack_000001e8;
      if (lVar30 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar30 + 0x18) <= *unaff_x29) goto LAB_03988250;
      lVar30 = lVar30 + (long)(int)*unaff_x29 * unaff_x27;
      *(float *)(lVar30 + 0x130) = fVar48;
      *(float *)(lVar30 + 0x134) = fVar66;
      *(float *)(lVar30 + 0x138) = fVar62;
      lVar30 = *in_stack_000001e8;
      if (lVar30 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar30 + 0x18) <= *unaff_x29) goto LAB_03988250;
      lVar30 = lVar30 + (long)(int)*unaff_x29 * unaff_x27;
      *(float *)(lVar30 + 0x13c) = fVar50;
      *(float *)(lVar30 + 0x140) = fVar68;
      *(float *)(lVar30 + 0x144) = fVar56;
      lVar30 = *in_stack_000001e8;
      if (lVar30 == 0) goto thunk_FUN_01b48178;
      uVar14 = *unaff_x29;
      fVar50 = *(float *)(unaff_x19 + 0x2f4);
      fVar65 = (float)FUN_0396d0e4(&stack0x000011e0,0);
      if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_03988250;
      *(float *)(lVar30 + (long)(int)uVar14 * unaff_x27 + 0x148) = fVar50 + unaff_s12 * fVar65;
      lVar30 = *in_stack_000001e8;
      if (lVar30 == 0) goto thunk_FUN_01b48178;
      uVar14 = *unaff_x29;
      fVar66 = *(float *)(unaff_x19 + 0x2e0);
      fVar50 = *(float *)(unaff_x19 + 0x180);
      fVar65 = (float)FUN_0396d0f4(&stack0x000011e0,0);
      if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_03988250;
      *(float *)(lVar30 + (long)(int)uVar14 * unaff_x27 + 0x150) =
           (fVar51 - fVar66) + fVar50 + unaff_s12 * fVar65;
      lVar30 = *in_stack_000001e8;
      if (lVar30 == 0) goto thunk_FUN_01b48178;
      uVar14 = *unaff_x29;
      unaff_x20 = (long)(int)uVar14;
      if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_03988250;
      *(float *)(lVar30 + unaff_x20 * unaff_x27 + 0x168) =
           (fVar48 - in_stack_000001b8._4_4_) / (fVar54 - fVar53);
      fVar59 = unaff_s12 * (fVar49 + fVar59);
      if (*unaff_x24 == '\x01') {
        fVar59 = fVar59 / fStack000000000000017c;
        fVar47 = (unaff_s12 * (fStack0000000000000170 + fVar47)) / fStack000000000000017c;
      }
      else {
        fVar47 = unaff_s12 * (fStack0000000000000170 + fVar47);
      }
      in_stack_000001b8._4_4_ = *(float *)(unaff_x19 + 0x328);
      fVar53 = *(float *)(unaff_x19 + 0x180);
      bVar9 = (float)uVar14 == in_stack_000001b8._4_4_;
      bVar10 = unaff_w26 == 0;
      fVar59 = fVar53 + fVar59;
      if (bVar10 || bVar9) {
        fVar47 = fVar53 + fVar47;
        fVar49 = fVar59;
        fVar65 = fVar47;
        if (fVar53 != 0.0) {
          fVar49 = (fVar59 - fVar53) / *(float *)(unaff_x19 + 0xf0);
          fVar65 = (fVar47 - fVar53) / *(float *)(unaff_x19 + 0xf0);
          if (fVar49 <= fVar59) {
            fVar49 = fVar59;
          }
          if (fVar47 <= fVar65) {
            fVar65 = fVar47;
          }
        }
        lVar45 = lVar30 + unaff_x20 * unaff_x27;
        fVar53 = fVar49;
        if (fVar49 <= *(float *)(unaff_x19 + 0x338)) {
          fVar53 = *(float *)(unaff_x19 + 0x338);
        }
        fVar48 = fVar65;
        if (*(float *)(unaff_x19 + 0x33c) <= fVar65) {
          fVar48 = *(float *)(unaff_x19 + 0x33c);
        }
        *(float *)(unaff_x19 + 0x338) = fVar53;
        *(float *)(unaff_x19 + 0x33c) = fVar48;
        *(float *)(lVar45 + 0x158) = fVar49;
        *(float *)(lVar45 + 0x15c) = fVar65;
        fVar49 = *(float *)(unaff_x19 + 0x2e0);
        fVar65 = fVar59 - fVar49;
      }
      else {
        fVar53 = *(float *)(unaff_x19 + 0x338);
        lVar45 = lVar30 + unaff_x20 * unaff_x27;
        *(float *)(lVar45 + 0x158) = fVar53;
        fVar47 = *(float *)(unaff_x19 + 0x33c);
        *(float *)(lVar45 + 0x15c) = fVar47;
        fVar49 = *(float *)(unaff_x19 + 0x2e0);
        fVar65 = fVar53 - fVar49;
      }
      *(float *)(lVar45 + 0x14c) = fVar65;
      *(float *)(lVar30 + unaff_x20 * unaff_x27 + 0x154) = fVar47 - fVar49;
      *(float *)(unaff_x19 + 0x378) = fVar47 - fVar49;
      if ((*(int *)(unaff_x19 + 0x340) == 0) || (*(char *)(unaff_x19 + 0x37c) != '\0')) {
        if (bVar10 || bVar9) {
          *(float *)(unaff_x19 + 0x374) = fVar53;
          if (*(long *)(unaff_x19 + 0x68) == 0) goto thunk_FUN_01b48178;
          fVar47 = *(float *)(unaff_x19 + 0x370);
          fVar53 = (float)FUN_0396ac64(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
          fVar49 = *(float *)(unaff_x19 + 0x2e0);
          fStack000000000000017c = (unaff_s12 * fVar53) / fStack000000000000017c;
          if (fVar47 <= fStack000000000000017c) {
            fVar47 = fStack000000000000017c;
          }
          *(float *)(unaff_x19 + 0x370) = fVar47;
          if (fVar49 == 0.0) goto LAB_039833ac;
        }
      }
      else if ((bVar10 || bVar9) && fVar49 == 0.0) {
LAB_039833ac:
        fVar47 = *(float *)(unaff_x19 + 0x19c8);
        if (*(float *)(unaff_x19 + 0x19c8) <= fVar59) {
          fVar47 = fVar59;
        }
        *(float *)(unaff_x19 + 0x19c8) = fVar47;
      }
      lVar30 = *in_stack_000001e8;
      if (lVar30 == 0) goto thunk_FUN_01b48178;
      unaff_w21 = *unaff_x29;
      if (*(uint *)(lVar30 + 0x18) <= unaff_w21) goto LAB_03988250;
      lVar30 = lVar30 + (long)(int)unaff_w21 * unaff_x27;
      *(undefined1 *)(lVar30 + 0x1a0) = 0;
      unaff_w25 = *(uint *)(unaff_x19 + 0x158) & 0x18;
      if ((in_stack_0000129c == 9) ||
         ((((unaff_w26 == 0 && (in_stack_0000129c != 3)) &&
           ((in_stack_0000129c != 0x200b && (in_stack_0000129c != 0xad)))) ||
          (((in_stack_0000129c == 0xad & (in_stack_000000c0._4_1_ ^ 0xff)) != 0 ||
           (*unaff_x24 == '\x02')))))) {
        *(undefined1 *)(lVar30 + 0x1a0) = 1;
        pfVar31 = _fStack0000000000000130;
        pfVar38 = _iStack0000000000000138;
        if (unaff_w23 != 0) {
          lVar30 = *(long *)(in_stack_000001c0 + 0x48);
          if (lVar30 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03988250;
          lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
          pfVar38 = (float *)(lVar30 + 100);
          pfVar31 = (float *)(lVar30 + 0x68);
        }
        unaff_s9 = *pfVar38;
        unaff_s8 = *pfVar31;
        fVar59 = *(float *)(unaff_x19 + 0x35c);
        fVar47 = *(float *)(unaff_x19 + 0x2f4);
        fStack0000000000000174 = (fStack000000000000012c - unaff_s9) - unaff_s8;
        bVar9 = true;
        if ((fVar59 <= fStack0000000000000174) && (bVar9 = false, !NAN(fVar59))) {
          bVar9 = fVar59 == -1.0;
        }
        if (!bVar9) {
          fStack0000000000000174 = fVar59;
        }
        fVar59 = 0.0;
        fVar53 = 0.0;
        if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
          fVar53 = (float)FUN_0396af88(&stack0x000011f0,0);
          fVar49 = *(float *)(unaff_x19 + 0x2e0);
        }
        in_x12 = 0x60;
        param_3 = *(float *)(unaff_x19 + 0x1594);
        fVar65 = *(float *)(unaff_x19 + 0x33c);
        if (in_stack_0000129c != 0xad) {
          fVar57 = unaff_s12;
        }
        if ((0.0 < fVar49) && (fVar59 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
          fVar59 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
        }
        unaff_w21 = *in_stack_000001d0;
        fVar59 = (*(float *)(unaff_x19 + 0x374) - (fVar65 - fVar49)) + fVar59;
        if (in_stack_00000118 < fVar59) {
          if (*(int *)(unaff_x19 + 0x34c) == -1) {
            *(uint *)(unaff_x19 + 0x34c) = unaff_w21;
          }
          uVar19 = DAT_00b92750;
          if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
            fVar48 = *(float *)(in_stack_000001e0 + 0xd0);
            if (((fVar48 < *(float *)(unaff_x19 + 0x15b0)) && (0.0 < fVar49)) &&
               (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
              fVar57 = *(float *)(unaff_x19 + 0x15b0) +
                       ((in_stack_00000020._4_4_ - fVar59) / (float)*(int *)(unaff_x19 + 0x340)) /
                       fStack0000000000000090;
              if (fVar57 <= fVar48) {
                fVar57 = fVar48;
              }
LAB_03988100:
              *(float *)(unaff_x19 + 0x15b0) = fVar57;
              goto LAB_03980e58;
            }
            fVar49 = *_fStack00000000000000d8;
            fVar59 = *(float *)(in_stack_000001e0 + 0xac);
            if ((fVar49 <= fVar59) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))
               ) goto LAB_03983658;
            fVar57 = (fVar49 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
            if (fVar57 <= DAT_00b55428) {
              fVar57 = DAT_00b55428;
            }
            fVar57 = (fVar49 - fVar57) * 20.0 + 0.5;
            fVar47 = DAT_00b556b4;
            if (fVar57 != INFINITY) {
              fVar47 = (float)(int)fVar57 / 20.0;
            }
            if (fVar47 <= fVar59) {
              fVar47 = fVar59;
            }
            *(float *)(unaff_x19 + 0x1598) = fVar49;
            goto LAB_03985650;
          }
LAB_03983658:
          switch(*(undefined4 *)(in_stack_000001e0 + 0x74)) {
          case 1:
            if (*(int *)(unaff_x19 + 0x340) < 1) break;
            iVar15 = FUN_021c2ce4(in_stack_00000080,*(undefined8 *)PTR_DAT_03dad388);
            uVar19 = DAT_00b92750;
            if (iVar15 == 0) {
              in_stack_0000120c = 0xffffffff;
              in_stack_000001d0[0] = 0;
              in_stack_000001d0[1] = 0;
              unaff_x22 = in_stack_000001e8;
              unaff_x29 = in_stack_000001d0;
              fVar57 = unaff_s12;
            }
            else {
              FUN_021c3180(&stack0x000012a0,in_stack_00000080,*(undefined8 *)PTR_DAT_03dad338);
              memcpy(&stack0x00000d38,&stack0x000012a0,0x398);
              iVar15 = FUN_0398b72c();
              in_stack_0000120c = iVar15 - 1;
              iVar15 = *(int *)(unaff_x19 + 0x324) + -1;
              *(int *)(unaff_x19 + 0x324) = iVar15;
              uVar19 = CONCAT44(0x2026,iVar15);
              in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
              unaff_x22 = in_stack_000001e8;
              unaff_x29 = in_stack_000001d0;
              fVar57 = unaff_s12;
            }
            goto LAB_0398183c;
          case 3:
            in_stack_0000120c = FUN_0398b72c();
            uVar19 = CONCAT44((int)((ulong)in_stack_00001288 >> 0x20),unaff_w21);
            unaff_x22 = in_stack_000001e8;
            unaff_x29 = in_stack_000001d0;
            fVar57 = unaff_s12;
            goto LAB_0398183c;
          case 5:
            if (unaff_w21 == 0 || (int)in_stack_0000120c < 0) {
              in_stack_0000120c = 0xffffffff;
              *in_stack_000001d0 = 0;
              unaff_x22 = in_stack_000001e8;
              unaff_x29 = in_stack_000001d0;
              fVar57 = unaff_s12;
            }
            else {
              fVar57 = *(float *)(unaff_x19 + 0x338);
              in_stack_0000120c = FUN_0398b72c();
              if (in_stack_00000118 < fVar57 - fVar65) goto LAB_03983d74;
              *(undefined4 *)(unaff_x19 + 0x328) = *(undefined4 *)(unaff_x19 + 0x324);
              *(undefined8 *)(unaff_x19 + 0x338) = in_stack_00000098;
              *(int *)(unaff_x19 + 0x340) = *(int *)(unaff_x19 + 0x340) + 1;
              *(undefined1 *)(unaff_x19 + 0x37c) = 1;
              *(undefined4 *)(unaff_x19 + 0x15ac) = 0;
              *(undefined4 *)(unaff_x19 + 0x2e0) = 0;
              *(undefined4 *)(unaff_x19 + 0x374) = 0;
              *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
              *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
              *(int *)(unaff_x19 + 0x350) = *(int *)(unaff_x19 + 0x350) + 1;
              unaff_x22 = in_stack_000001e8;
              unaff_x29 = in_stack_000001d0;
              uVar19 = in_stack_00001288;
              fVar57 = unaff_s12;
            }
            goto LAB_0398183c;
          case 6:
            in_stack_0000120c = FUN_0398b72c();
            uVar19 = CONCAT44(3,unaff_w21);
            unaff_x22 = in_stack_000001e8;
            unaff_x29 = in_stack_000001d0;
            fVar57 = unaff_s12;
            goto LAB_0398183c;
          }
        }
        unaff_x22 = in_stack_000001e8;
        unaff_x29 = in_stack_000001d0;
        if ((uVar21 & 1) != 0) {
          unaff_s13 = 1.0;
          param_2 = 1.0 - param_3;
          unaff_s11 = ABS(fVar47) + fVar53 * param_2 * fVar57;
          if (unaff_w25 != 0) {
            unaff_s13 = DAT_00b55374;
          }
          if (unaff_s11 <= unaff_s13 * fStack0000000000000174) {
LAB_03983764:
            in_x12 = 0x60;
            goto LAB_03983778;
          }
          if ((uStack0000000000000094 == 0) || (unaff_w21 == *(uint *)(unaff_x19 + 0x328))) {
            in_x10 = in_stack_000001e0;
            if ((*(char *)(in_stack_000001e0 + 0xa8) == '\0') ||
               (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) goto LAB_03983888;
            goto code_r0x0398385c;
          }
          in_stack_0000120c = FUN_0398b72c();
          if (*(float *)(unaff_x19 + 0x2e4) == DAT_00b55468) {
            lVar30 = *in_stack_000001e8;
            if (lVar30 == 0) goto thunk_FUN_01b48178;
            uVar33 = *in_stack_000001d0;
            if (*(uint *)(lVar30 + 0x18) <= uVar33) goto LAB_03988250;
            fVar59 = *(float *)(unaff_x19 + 0x2e0);
            fVar57 = 0.0;
            if ((0.0 < fVar59) && (fVar57 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
              fVar57 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
            }
            fVar57 = in_stack_00000158 * *(float *)(in_stack_000001e0 + 200) +
                     *(float *)(lVar30 + (long)(int)uVar33 * unaff_x27 + 0x158) +
                     (fVar57 - *(float *)(unaff_x19 + 0x33c)) +
                     fStack0000000000000090 *
                     (in_stack_00000088._4_4_ + *(float *)(unaff_x19 + 0x15b0));
          }
          else {
            fVar57 = *(float *)(in_stack_000001e0 + 200);
            *(undefined1 *)(unaff_x19 + 0x2e8) = 1;
            lVar30 = *in_stack_000001e8;
            if (lVar30 == 0) goto thunk_FUN_01b48178;
            fVar59 = *(float *)(unaff_x19 + 0x2e0);
            uVar33 = *(uint *)(unaff_x19 + 0x324);
            fVar57 = *(float *)(unaff_x19 + 0x2e4) + in_stack_00000158 * fVar57;
          }
          if ((*(uint *)(lVar30 + 0x18) <= uVar33) ||
             (uVar39 = uVar33 - 1, *(uint *)(lVar30 + 0x18) <= uVar39)) goto LAB_03988250;
          fVar47 = (fVar57 + *(float *)(unaff_x19 + 0x374) + fVar59) -
                   *(float *)(lVar30 + (long)(int)uVar33 * (long)iVar18 + 0x15c);
          if (((in_stack_000000c0._4_1_ & 1) == 0 &&
               *(short *)(lVar30 + (long)(int)uVar39 * (long)iVar18 + 0x20) == 0xad) &&
             ((fVar47 < in_stack_00000118 || (*(int *)(in_stack_000001e0 + 0x74) == 0)))) {
            in_stack_0000120c = in_stack_0000120c - 1;
            in_stack_000000c0._4_1_ = 0;
            *in_stack_000001d0 = uVar39;
            uVar19 = CONCAT44(0x2d,uVar39);
            fVar57 = unaff_s12;
            goto LAB_0398183c;
          }
          if (*(short *)(lVar30 + (long)(int)uVar33 * unaff_x27 + 0x20) == 0xad) {
            in_stack_000000c0._4_1_ = 1;
            uVar19 = in_stack_00001288;
            fVar57 = unaff_s12;
            goto LAB_0398183c;
          }
          if ((bStack00000000000000e0 & *(byte *)(in_stack_000001e0 + 0xa8) & 1) != 0) {
            param_3 = *(float *)(unaff_x19 + 0x1594);
            fVar57 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
            if ((fVar57 <= param_3) ||
               (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
              fVar59 = *_fStack00000000000000d8;
              fVar57 = *(float *)(in_stack_000001e0 + 0xac);
              if ((fVar59 <= fVar57) ||
                 (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) goto LAB_03985120;
              goto LAB_0398816c;
            }
LAB_03988210:
            fVar59 = unaff_s11;
            if (0.0 < param_3) {
              fVar59 = unaff_s11 / (1.0 - param_3);
            }
            param_3 = param_3 + (unaff_s11 - unaff_s13 * (fStack0000000000000174 + DAT_00b5556c)) /
                                fVar59;
            goto LAB_039881fc;
          }
LAB_03985120:
          iVar15 = *in_stack_00000038;
          if ((iVar15 != iStack0000000000000030) && ((bStack00000000000000e0 & iVar15 != -1) != 0))
          {
            in_stack_0000120c = FUN_0398b72c();
            unaff_x28 = (long *)
                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
            ;
            lVar30 = *(long *)(in_stack_000001c0 + 0x30);
            if (lVar30 == 0) goto thunk_FUN_01b48178;
            uVar33 = *in_stack_000001d0;
            uVar39 = uVar33 - 1;
            if (*(uint *)(lVar30 + 0x18) <= uVar39) goto LAB_03988250;
            iStack0000000000000030 = iVar15;
            if (*(short *)(lVar30 + (long)(int)uVar39 * (long)iVar18 + 0x20) == 0xad) {
              in_stack_0000120c = in_stack_0000120c - 1;
              in_stack_000000c0._4_1_ = 0;
              *in_stack_000001d0 = uVar39;
              uVar19 = CONCAT44(0x2d,uVar39);
              fVar57 = unaff_s12;
              goto LAB_0398183c;
            }
          }
          if (fVar47 <= in_stack_00000118) {
            FUN_03995c64(fStack0000000000000090,unaff_s12,in_stack_00000158,in_stack_00000148,
                         in_stack_00000188,fStack0000000000000174,in_stack_00000088._4_4_);
            bStack00000000000000e0 = 1;
            in_stack_000000c0._4_1_ = 0;
            in_stack_000000b0 = 1;
            uVar19 = in_stack_00001288;
            fVar57 = unaff_s12;
            goto LAB_0398183c;
          }
          if (*(int *)(unaff_x19 + 0x34c) == -1) {
            *(uint *)(unaff_x19 + 0x34c) = uVar33;
          }
          if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
            fVar59 = *(float *)(in_stack_000001e0 + 0xd0);
            if ((fVar59 < *(float *)(unaff_x19 + 0x15b0)) &&
               (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
              fVar57 = *(float *)(unaff_x19 + 0x15b0) +
                       ((in_stack_00000020._4_4_ - fVar47) /
                       (float)(*(int *)(unaff_x19 + 0x340) + 1)) / fStack0000000000000090;
              if (fVar57 <= fVar59) {
                fVar57 = fVar59;
              }
              goto LAB_03988100;
            }
            param_3 = *(float *)(unaff_x19 + 0x1594);
            fVar57 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
            if ((param_3 < fVar57) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
            goto LAB_03988210;
            fVar59 = *_fStack00000000000000d8;
            fVar57 = *(float *)(in_stack_000001e0 + 0xac);
            if ((fVar57 < fVar59) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
            goto LAB_0398816c;
          }
          switch(*(undefined4 *)(in_stack_000001e0 + 0x74)) {
          case 0:
          case 2:
          case 4:
            FUN_03995c64(fStack0000000000000090,unaff_s12,in_stack_00000158,in_stack_00000148,
                         in_stack_00000188,fStack0000000000000174,in_stack_00000088._4_4_);
            break;
          case 1:
            iVar15 = FUN_021c2ce4(in_stack_00000080,*(undefined8 *)PTR_DAT_03dad388);
            uVar19 = DAT_00b92750;
            if (iVar15 == 0) {
              in_stack_000000c0._4_1_ = 0;
              in_stack_000001d0[0] = 0;
              in_stack_000001d0[1] = 0;
              in_stack_0000120c = 0xffffffff;
              fVar57 = unaff_s12;
            }
            else {
              FUN_021c3180(&stack0x000012a0,in_stack_00000080,*(undefined8 *)PTR_DAT_03dad338);
              memcpy(&stack0x000009a0,&stack0x000012a0,0x398);
              iVar17 = FUN_0398b72c();
              in_stack_000000c0._4_1_ = 0;
              iVar15 = *(int *)(unaff_x19 + 0x324) + -1;
              *(int *)(unaff_x19 + 0x324) = iVar15;
              in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
              in_stack_0000120c = iVar17 - 1;
              uVar19 = CONCAT44(0x2026,iVar15);
              fVar57 = unaff_s12;
            }
            goto LAB_0398183c;
          case 3:
            goto switchD_0398536c_caseD_3;
          case 5:
            *(undefined1 *)(unaff_x19 + 0x37c) = 1;
            FUN_03995c64(fStack0000000000000090,unaff_s12,in_stack_00000158,in_stack_00000148,
                         in_stack_00000188,fStack0000000000000174,in_stack_00000088._4_4_);
            *(undefined4 *)(unaff_x19 + 0x15ac) = 0;
            *(undefined4 *)(unaff_x19 + 0x2e0) = 0;
            *(undefined4 *)(unaff_x19 + 0x374) = 0;
            *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
            *(int *)(unaff_x19 + 0x350) = *(int *)(unaff_x19 + 0x350) + 1;
            break;
          case 6:
            in_stack_000000c0._4_1_ = 0;
            unaff_w21 = uVar33;
            goto LAB_03984f74;
          default:
            in_stack_000000c0._4_1_ = 0;
            unaff_w21 = uVar33;
            goto LAB_03983764;
          }
          in_stack_000000c0._4_1_ = 0;
LAB_03984af8:
          bStack00000000000000e0 = 1;
          in_stack_000000b0 = 1;
          unaff_x22 = in_stack_000001e8;
          uVar19 = in_stack_00001288;
          fVar57 = unaff_s12;
          goto LAB_0398183c;
        }
LAB_03983778:
        if (unaff_w26 == 0) {
          if (in_stack_0000129c == 0xad) {
            lVar30 = *unaff_x22;
            if (lVar30 != 0) {
              if (unaff_w21 < *(uint *)(lVar30 + 0x18)) {
                *(undefined1 *)(lVar30 + (long)(int)unaff_w21 * (long)iVar18 + 0x1a0) = 0;
                goto UnityEngine_UIElements_FocusController__GetRetargetedFocusedElement;
              }
              goto LAB_03988250;
            }
            goto thunk_FUN_01b48178;
          }
          if (*unaff_x24 == '\x02') {
            FUN_03990ec0();
LAB_03983dc4:
            in_x12 = 0x60;
          }
          else if (*unaff_x24 == '\x01') {
            FUN_03990354(in_stack_000001a8,in_stack_00000178);
            goto LAB_03983dc4;
          }
          uVar33 = *unaff_x29;
          if ((in_stack_000000b0 & 1) != 0) {
            *(uint *)(unaff_x19 + 0x330) = uVar33;
          }
          *(uint *)(unaff_x19 + 0x334) = uVar33;
          *(int *)(unaff_x19 + 0x344) = *(int *)(unaff_x19 + 0x344) + 1;
          lVar30 = *(long *)(in_stack_000001c0 + 0x48);
          if (lVar30 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03988250;
          lVar30 = lVar30 + (int)*(uint *)(unaff_x19 + 0x340) * in_x12;
          in_stack_000000b0 = 0;
          *(float *)(lVar30 + 100) = unaff_s9;
          *(float *)(lVar30 + 0x68) = unaff_s8;
        }
        else {
          lVar30 = *unaff_x22;
          if (lVar30 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar30 + 0x18) <= unaff_w21) goto LAB_03988250;
          *(undefined1 *)(lVar30 + (long)(int)unaff_w21 * (long)iVar18 + 0x1a0) = 0;
          *(uint *)(unaff_x19 + 0x334) = unaff_w21;
          lVar30 = *(long *)(in_stack_000001c0 + 0x48);
          if (lVar30 == 0) goto thunk_FUN_01b48178;
          uVar33 = *(uint *)(lVar30 + 0x18);
          if (uVar33 <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03988250;
          lVar45 = lVar30 + (int)*(uint *)(unaff_x19 + 0x340) * in_x12;
          iVar15 = *(int *)(lVar45 + 0x2c) + 1;
          *(int *)(lVar45 + 0x2c) = iVar15;
          *(int *)(unaff_x19 + 0x348) = iVar15;
          if (uVar33 <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03988250;
          lVar30 = lVar30 + (int)*(uint *)(unaff_x19 + 0x340) * in_x12;
          *(float *)(lVar30 + 100) = unaff_s9;
          *(float *)(lVar30 + 0x68) = unaff_s8;
          *(int *)(in_stack_000001c0 + 0x18) = *(int *)(in_stack_000001c0 + 0x18) + 1;
        }
      }
      else {
        if (((in_stack_0000129c & 0xfffffffe) == 10) && (*(int *)(in_stack_000001e0 + 0x74) == 6)) {
          fVar57 = 0.0;
          if ((0.0 < fVar49) && (fVar57 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
            fVar57 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
          }
          if (in_stack_00000118 <
              (*(float *)(unaff_x19 + 0x374) - (*(float *)(unaff_x19 + 0x33c) - fVar49)) + fVar57) {
            if (*(int *)(unaff_x19 + 0x34c) == -1) {
              *(uint *)(unaff_x19 + 0x34c) = unaff_w21;
            }
            in_stack_0000120c = FUN_0398b72c();
LAB_03983d74:
            unaff_x22 = in_stack_000001e8;
            unaff_x29 = in_stack_000001d0;
            uVar19 = CONCAT44(3,unaff_w21);
            fVar57 = unaff_s12;
            goto LAB_0398183c;
          }
        }
        if ((((in_stack_0000129c - 0x2007 < 0x23) &&
             ((1L << ((ulong)(in_stack_0000129c - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
            (in_stack_0000129c - 10 < 2)) || (in_stack_0000129c == 0xa0)) {
LAB_03983c8c:
          in_x12 = 0x60;
          unaff_x22 = in_stack_000001e8;
          unaff_x29 = in_stack_000001d0;
          if ((in_stack_0000129c == 0xad) || (in_stack_0000129c == 0x200b))
          goto UnityEngine_UIElements_FocusController__GetRetargetedFocusedElement;
          if (in_stack_0000129c != 0x2060) {
            lVar30 = *(long *)(in_stack_000001c0 + 0x48);
            if (lVar30 != 0) {
              if (*(uint *)(unaff_x19 + 0x340) < *(uint *)(lVar30 + 0x18)) {
                lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                *(int *)(lVar30 + 0x2c) = *(int *)(lVar30 + 0x2c) + 1;
                *(int *)(in_stack_000001c0 + 0x18) = *(int *)(in_stack_000001c0 + 0x18) + 1;
                goto LAB_03983cec;
              }
              goto LAB_03988250;
            }
            goto thunk_FUN_01b48178;
          }
        }
        else {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar21 = FUN_02fdea78(in_stack_0000129c,0);
          if ((uVar21 & 1) != 0) goto LAB_03983c8c;
        }
LAB_03983cec:
        in_x12 = 0x60;
        unaff_x22 = in_stack_000001e8;
        unaff_x29 = in_stack_000001d0;
        if (in_stack_0000129c == 0xa0) {
          lVar30 = *(long *)(in_stack_000001c0 + 0x48);
          if (lVar30 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03988250;
          lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
          *(int *)(lVar30 + 0x20) = *(int *)(lVar30 + 0x20) + 1;
        }
      }
UnityEngine_UIElements_FocusController__GetRetargetedFocusedElement:
      bVar9 = *(int *)(in_stack_000001e0 + 0x74) == 1;
      if (bVar9 && unaff_w23 == 1) {
        bVar9 = in_stack_0000129c == 0x2d;
      }
      if (bVar9) {
        if (*(long *)(unaff_x19 + 0x1a08) == 0) goto thunk_FUN_01b48178;
        fVar57 = *(float *)(unaff_x19 + 0xf4);
        iVar15 = FUN_0396ac24(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
        if (*(long *)(unaff_x19 + 0x1a08) == 0) goto thunk_FUN_01b48178;
        fVar47 = (float)FUN_0396ac34(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
        lVar30 = *(long *)(unaff_x19 + 0x1a00);
        fVar59 = in_stack_00000150;
        if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
          fVar59 = 1.0;
        }
        if ((lVar30 == 0) || (*(long *)(lVar30 + 0x20) == 0)) goto thunk_FUN_01b48178;
        fVar49 = *(float *)(unaff_x19 + 0xf0);
        fVar48 = *(float *)(lVar30 + 0x2c);
        fVar53 = (float)FUN_0396b17c(*(long *)(lVar30 + 0x20),0);
        fVar65 = *_iStack0000000000000138;
        fVar53 = fVar49 * (fVar57 / (float)iVar15) * fVar47 * fVar59 * fVar48 * fVar53;
        fVar57 = *_fStack0000000000000130;
        if ((in_stack_0000129c == 10) &&
           (*(int *)(unaff_x19 + 0x324) != *(int *)(unaff_x19 + 0x328))) {
          lVar30 = *in_stack_000001e8;
          if (lVar30 == 0) goto thunk_FUN_01b48178;
          uVar33 = *(int *)(unaff_x19 + 0x324) - 1;
          if (*(uint *)(lVar30 + 0x18) <= uVar33) goto LAB_03988250;
          if (*(long *)(unaff_x19 + 0x1a08) == 0) goto thunk_FUN_01b48178;
          fVar59 = *(float *)(lVar30 + (long)(int)uVar33 * (long)iVar18 + 0x68);
          iVar15 = FUN_0396ac24(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
          if (*(long *)(unaff_x19 + 0x1a08) == 0) goto thunk_FUN_01b48178;
          fVar49 = (float)FUN_0396ac34(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
          lVar30 = *(long *)(unaff_x19 + 0x1a00);
          fVar47 = in_stack_00000150;
          if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
            fVar47 = 1.0;
          }
          if ((lVar30 == 0) || (*(long *)(lVar30 + 0x20) == 0)) goto thunk_FUN_01b48178;
          fVar48 = *(float *)(unaff_x19 + 0xf0);
          fVar50 = *(float *)(lVar30 + 0x2c);
          fVar53 = (float)FUN_0396b17c(*(long *)(lVar30 + 0x20),0);
          lVar30 = *(long *)(in_stack_000001c0 + 0x48);
          if (lVar30 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03988250;
          lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
          fVar65 = *(float *)(lVar30 + 100);
          fVar57 = *(float *)(lVar30 + 0x68);
          fVar53 = fVar48 * (fVar59 / (float)iVar15) * fVar49 * fVar47 * fVar50 * fVar53;
        }
        fVar47 = *(float *)(unaff_x19 + 0x2f4);
        fVar59 = 0.0;
        if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
          if ((*(long *)(unaff_x19 + 0x1a00) == 0) ||
             (lVar30 = *(long *)(*(long *)(unaff_x19 + 0x1a00) + 0x20), lVar30 == 0))
          goto thunk_FUN_01b48178;
          FUN_0396b140(&stack0x000012a0,lVar30,0);
          fVar59 = (float)FUN_0396af88(&stack0x000011c0,0);
        }
        in_x12 = 0x60;
        fVar49 = *(float *)(unaff_x19 + 0x35c);
        fVar57 = (fStack000000000000012c - fVar65) - fVar57;
        bVar9 = true;
        if ((fVar49 <= fVar57) && (bVar9 = false, !NAN(fVar49))) {
          bVar9 = fVar49 == -1.0;
        }
        if (!bVar9) {
          fVar57 = fVar49;
        }
        fVar49 = 1.0;
        if (unaff_w25 != 0) {
          fVar49 = DAT_00b55374;
        }
        unaff_x22 = in_stack_000001e8;
        if (ABS(fVar47) + fVar53 * fVar59 * (1.0 - *(float *)(unaff_x19 + 0x1594)) < fVar49 * fVar57
           ) {
          FUN_0398b3d0();
          uVar19 = *(undefined8 *)PTR_DAT_03dad340;
          memcpy(&stack0x000012a0,in_stack_00000070,0x398);
          FUN_021c3068(in_stack_00000080,&stack0x000012a0,uVar19);
          in_x12 = 0x60;
        }
      }
      lVar30 = *unaff_x22;
      if (lVar30 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar30 + 0x18) <= *unaff_x29) goto LAB_03988250;
      uVar33 = *(uint *)(unaff_x19 + 0x340);
      lVar30 = lVar30 + (long)(int)*unaff_x29 * unaff_x27;
      *(uint *)(lVar30 + 0x6c) = uVar33;
      *(undefined4 *)(lVar30 + 0x70) = *(undefined4 *)(unaff_x19 + 0x350);
      if (((unaff_w23 & 1) == 0) &&
         ((0xd < in_stack_0000129c || ((1 << (ulong)(in_stack_0000129c & 0x1f) & 0x2c00U) == 0)))) {
        lVar30 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar30 == 0) goto thunk_FUN_01b48178;
LAB_03984168:
        if (*(uint *)(lVar30 + 0x18) <= uVar33) goto LAB_03988250;
        *(undefined4 *)(lVar30 + (int)uVar33 * in_x12 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x158);
      }
      else {
        lVar30 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar30 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar30 + 0x18) <= uVar33) goto LAB_03988250;
        if (*(int *)(lVar30 + (int)uVar33 * in_x12 + 0x24) == 1) goto LAB_03984168;
      }
      if (in_stack_0000129c != 0x200b) {
        if (in_stack_0000129c == 9) {
          if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
          fVar57 = (float)FUN_0396ad1c(*in_stack_000001c8 + 0xb0,0);
          if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
          bVar12 = FUN_0396df8c(*in_stack_000001c8,0);
          fVar59 = *(float *)(unaff_x19 + 0x2f4);
          fVar47 = unaff_s12 * fVar57 * (float)bVar12;
          fVar57 = fVar47 * (float)(int)(fVar59 / fVar47);
          if (fVar57 <= fVar59) {
            fVar57 = fVar59 + fVar47;
          }
          *(float *)(unaff_x19 + 0x2f4) = fVar57;
          in_x12 = 0x60;
        }
        else {
          fVar57 = *(float *)(unaff_x19 + 0x2f0);
          if (fVar57 == 0.0) {
            fVar59 = *(float *)(unaff_x19 + 0x2f4);
            if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
              fVar57 = (float)FUN_0396af88(&stack0x000011f0,0);
              fVar53 = *(float *)(unaff_x19 + 0x19a8);
              fVar47 = (float)FUN_0396d104(&stack0x000011e0,0);
              if (*(long *)(unaff_x19 + 0x68) != 0) {
                fVar49 = (float)FUN_0396df4c(*(long *)(unaff_x19 + 0x68),0);
                fVar59 = fVar59 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                  (*(float *)(unaff_x19 + 0x2ec) +
                                  unaff_s12 * (fVar57 * fVar53 + fVar47) +
                                  in_stack_00000158 *
                                  (in_stack_00000148 + in_stack_00000188 + fVar49));
                goto LAB_03984260;
              }
              goto thunk_FUN_01b48178;
            }
            fVar57 = (float)FUN_0396d104(&stack0x000011e0,0);
            if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
            fVar47 = (float)FUN_0396df4c(*in_stack_000001c8,0);
            in_x12 = 0x60;
            fVar59 = fVar59 - (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                              (*(float *)(unaff_x19 + 0x2ec) +
                              unaff_s12 * fVar57 +
                              in_stack_00000158 * (in_stack_00000148 + in_stack_00000188 + fVar47));
            *(float *)(unaff_x19 + 0x2f4) = fVar59;
            if ((unaff_w26 == 0) && (in_stack_0000129c != 0x200b)) goto LAB_03984330;
            fVar59 = fVar59 - in_stack_00000158 * *(float *)(in_stack_000001e0 + 0xc4);
          }
          else {
            if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
            fVar59 = *(float *)(unaff_x19 + 0x2f4);
            fVar47 = (float)FUN_0396df4c(*in_stack_000001c8,0);
            fVar59 = fVar59 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                              (*(float *)(unaff_x19 + 0x2ec) +
                              (fVar57 - in_stack_000000f0._4_4_) +
                              in_stack_00000158 * (in_stack_00000188 + fVar47));
LAB_03984260:
            in_x12 = 0x60;
            *(float *)(unaff_x19 + 0x2f4) = fVar59;
            if ((unaff_w26 == 0) && (in_stack_0000129c != 0x200b)) goto LAB_03984330;
            fVar59 = fVar59 + in_stack_00000158 * *(float *)(in_stack_000001e0 + 0xc4);
          }
          in_x12 = 0x60;
          *(float *)(unaff_x19 + 0x2f4) = fVar59;
        }
      }
LAB_03984330:
      lVar30 = *unaff_x22;
      if (lVar30 == 0) goto thunk_FUN_01b48178;
      uVar33 = *unaff_x29;
      if (*(uint *)(lVar30 + 0x18) <= uVar33) goto LAB_03988250;
      *(undefined4 *)(lVar30 + (long)(int)uVar33 * unaff_x27 + 0x164) =
           *(undefined4 *)(unaff_x19 + 0x2f4);
      if (in_stack_0000129c == 0xd) {
        *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
      }
      if ((*(int *)(in_stack_000001e0 + 0x74) == 5) &&
         (((0xd < in_stack_0000129c || ((1 << (ulong)(in_stack_0000129c & 0x1f) & 0x2c00U) == 0)) &&
          (1 < in_stack_0000129c - 0x2028)))) {
        lVar30 = *in_stack_00000058;
        if (lVar30 == 0) goto thunk_FUN_01b48178;
        uVar39 = *(uint *)(unaff_x19 + 0x350);
        if (*(int *)(lVar30 + 0x18) < (int)(uVar39 + 1)) {
          if (*(int *)(*(long *)PTR_DAT_03dad318 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_01f55658(in_stack_00000058,uVar39 + 1,1,*(undefined8 *)PTR_DAT_03dad308);
          lVar30 = *in_stack_00000058;
          if (lVar30 == 0) goto thunk_FUN_01b48178;
          uVar39 = *(uint *)(unaff_x19 + 0x350);
          in_x12 = 0x60;
        }
        if (*(uint *)(lVar30 + 0x18) <= uVar39) goto LAB_03988250;
        lVar45 = lVar30 + (long)(int)uVar39 * 0x14;
        *(undefined4 *)(lVar45 + 0x28) = *(undefined4 *)(unaff_x19 + 0x19c8);
        fVar57 = *(float *)(unaff_x19 + 0x378);
        if (*(float *)(lVar45 + 0x30) <= *(float *)(unaff_x19 + 0x378)) {
          fVar57 = *(float *)(lVar45 + 0x30);
        }
        *(float *)(lVar45 + 0x30) = fVar57;
        if (*(char *)(unaff_x19 + 0x37c) != '\0') {
          *(undefined1 *)(unaff_x19 + 0x37c) = 0;
          *(undefined4 *)(lVar30 + (long)(int)uVar39 * 0x14 + 0x20) =
               *(undefined4 *)(unaff_x19 + 0x324);
        }
        uVar33 = *unaff_x29;
        *(uint *)(lVar30 + (long)(int)uVar39 * 0x14 + 0x24) = uVar33;
      }
      if (((in_stack_0000129c < 0xc) && ((1 << (ulong)(in_stack_0000129c & 0x1f) & 0xc08U) != 0)) ||
         ((in_stack_0000129c - 0x2028 < 2 ||
          (((unaff_w23 & in_stack_0000129c == 0x2d) != 0 ||
           ((float)uVar33 == fStack00000000000000e4)))))) {
        if (0.0 < *(float *)(unaff_x19 + 0x2e0)) {
          fVar57 = *(float *)(unaff_x19 + 0x338);
          fVar59 = *(float *)(unaff_x19 + 0x15ac);
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
            in_x12 = 0x60;
          }
          fVar57 = fVar57 - fVar59;
          if (((fStack00000000000000ac < ABS(fVar57)) && (*(char *)(unaff_x19 + 0x2e8) == '\0')) &&
             (*(char *)(unaff_x19 + 0x37c) != '\x01')) {
            uVar52 = *(undefined4 *)(unaff_x19 + 0x328);
            uVar16 = *(undefined4 *)(unaff_x19 + 0x324);
            if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_03999c5c(fVar57,uVar52,uVar16,in_stack_000001c0,0);
            *(float *)(unaff_x19 + 0x378) = *(float *)(unaff_x19 + 0x378) - fVar57;
            *(float *)(unaff_x19 + 0x2e0) = fVar57 + *(float *)(unaff_x19 + 0x2e0);
            unaff_x28 = (long *)
                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
            ;
            in_x12 = 0x60;
            if (*(int *)(unaff_x19 + 0xad8) == *(int *)(unaff_x19 + 0x340)) {
              FUN_021c3180(&stack0x000012a0,in_stack_00000080,*(undefined8 *)PTR_DAT_03dad338);
              memcpy(&stack0x00000230,&stack0x000012a0,0x398);
              memcpy(in_stack_00000070,&stack0x00000230,0x398);
              thunk_FUN_01b4f09c(in_stack_00000028,0);
              *(float *)(unaff_x19 + 0xaf0) = fVar57 + *(float *)(unaff_x19 + 0xaf0);
              *(float *)(unaff_x19 + 0xb24) = fVar57 + *(float *)(unaff_x19 + 0xb24);
              uVar19 = *(undefined8 *)PTR_DAT_03dad340;
              memcpy(&stack0x000012a0,in_stack_00000070,0x398);
              FUN_021c3068(in_stack_00000080,&stack0x000012a0,uVar19);
              in_x12 = 0x60;
            }
          }
        }
        fVar59 = *(float *)(unaff_x19 + 0x2e0);
        *(undefined1 *)(unaff_x19 + 0x37c) = 0;
        fVar47 = *(float *)(unaff_x19 + 0x33c) - fVar59;
        fVar57 = *(float *)(unaff_x19 + 0x378);
        if (fVar47 <= *(float *)(unaff_x19 + 0x378)) {
          fVar57 = fVar47;
        }
        *(float *)(unaff_x19 + 0x378) = fVar57;
        fVar53 = *(float *)(unaff_x19 + 0x338);
        if (in_stack_00001294 == '\0') {
          in_stack_00001298 = fVar57;
        }
        if ((*(char *)(in_stack_000001e0 + 0xe8) != '\0') &&
           ((*(int *)(in_stack_000001e0 + 0xd8) <= (int)*unaff_x29 ||
            (*(int *)(in_stack_000001e0 + 0xe0) <= *(int *)(unaff_x19 + 0x340))))) {
          in_stack_00001294 = '\x01';
        }
        lVar30 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar30 == 0) goto thunk_FUN_01b48178;
        uVar33 = *(uint *)(unaff_x19 + 0x340);
        if (*(uint *)(lVar30 + 0x18) <= uVar33) goto LAB_03988250;
        iVar15 = *(int *)(unaff_x19 + 0x328);
        lVar45 = lVar30 + (int)uVar33 * in_x12;
        *(int *)(lVar45 + 0x38) = iVar15;
        uVar39 = *(uint *)(unaff_x19 + 0x328);
        if (iVar15 <= (int)*(uint *)(unaff_x19 + 0x330)) {
          uVar39 = *(uint *)(unaff_x19 + 0x330);
        }
        *(uint *)(unaff_x19 + 0x330) = uVar39;
        *(uint *)(lVar45 + 0x3c) = uVar39;
        iVar1 = *(int *)(unaff_x19 + 0x324);
        *(int *)(unaff_x19 + 0x32c) = iVar1;
        *(int *)(lVar45 + 0x40) = iVar1;
        iVar17 = *(int *)(unaff_x19 + 0x330);
        if ((int)uVar39 <= *(int *)(unaff_x19 + 0x334)) {
          iVar17 = *(int *)(unaff_x19 + 0x334);
        }
        *(int *)(unaff_x19 + 0x334) = iVar17;
        *(int *)(lVar45 + 0x44) = iVar17;
        *(int *)(lVar45 + 0x24) = (iVar1 - iVar15) + 1;
        *(undefined4 *)(lVar45 + 0x28) = *(undefined4 *)(unaff_x19 + 0x344);
        *(undefined4 *)(lVar45 + 0x30) = *(undefined4 *)(unaff_x19 + 0x348);
        lVar45 = *in_stack_000001e8;
        if (lVar45 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar45 + 0x18) <= uVar39) goto LAB_03988250;
        uVar52 = *(undefined4 *)(lVar45 + (long)(int)uVar39 * (long)iVar18 + 0x124);
        lVar30 = lVar30 + (long)(int)uVar33 * 0x60;
        *(float *)(lVar30 + 0x74) = fVar47;
        *(undefined4 *)(lVar30 + 0x70) = uVar52;
        lVar30 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar30 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03988250;
        lVar45 = *in_stack_000001e8;
        if (lVar45 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar45 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto LAB_03988250;
        uVar52 = *(undefined4 *)
                  (lVar45 + (long)(int)*(uint *)(unaff_x19 + 0x334) * unaff_x27 + 0x130);
        fVar53 = fVar53 - fVar59;
        lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
        *(float *)(lVar30 + 0x7c) = fVar53;
        *(undefined4 *)(lVar30 + 0x78) = uVar52;
        lVar30 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar30 == 0) goto thunk_FUN_01b48178;
        uVar33 = *(uint *)(unaff_x19 + 0x340);
        if (*(uint *)(lVar30 + 0x18) <= uVar33) goto LAB_03988250;
        lVar45 = lVar30 + (long)(int)uVar33 * 0x60;
        *(float *)(lVar45 + 0x48) = *(float *)(lVar45 + 0x78) - unaff_s12 * in_stack_000001a8;
        *(float *)(lVar45 + 0x60) = fStack0000000000000174;
        if (*(int *)(lVar45 + 0x24) == 1) {
          *(undefined4 *)(lVar30 + (long)(int)uVar33 * 0x60 + 0x6c) =
               *(undefined4 *)(unaff_x19 + 0x158);
        }
        if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
        fVar57 = (float)FUN_0396df4c(*in_stack_000001c8,0);
        lVar30 = *in_stack_000001e8;
        if (lVar30 == 0) goto thunk_FUN_01b48178;
        lVar45 = (long)(int)*(uint *)(unaff_x19 + 0x334);
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto LAB_03988250;
        lVar22 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar22 == 0) goto thunk_FUN_01b48178;
        uVar33 = *(uint *)(unaff_x19 + 0x340);
        if (((*(char *)(lVar30 + lVar45 * unaff_x27 + 0x1a0) == '\0') &&
            (lVar45 = (long)(int)*(uint *)(unaff_x19 + 0x32c),
            *(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x32c))) ||
           (uVar39 = (uint)*(undefined8 *)(lVar22 + 0x18), uVar39 <= uVar33)) goto LAB_03988250;
        fVar59 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                 (*(float *)(unaff_x19 + 0x2ec) +
                 in_stack_00000158 * (in_stack_00000148 + in_stack_00000188 + fVar57));
        fVar57 = -fVar59;
        if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
          fVar57 = fVar59;
        }
        *(float *)(lVar22 + (long)(int)uVar33 * 0x60 + 0x5c) =
             *(float *)(lVar30 + lVar45 * unaff_x27 + 0x164) + fVar57;
        if (uVar39 <= uVar33) goto LAB_03988250;
        lVar22 = lVar22 + (long)(int)uVar33 * 0x60;
        *(float *)(lVar22 + 0x54) = 0.0 - *(float *)(unaff_x19 + 0x2e0);
        *(float *)(lVar22 + 0x58) = fVar47;
        *(float *)(lVar22 + 0x4c) = fStack00000000000000a8 + (fVar53 - fVar47);
        *(float *)(lVar22 + 0x50) = fVar53;
        if ((int)in_stack_0000129c < 0x2d) {
          if (in_stack_0000129c - 10 < 2) {
LAB_0398491c:
            FUN_0398b3d0();
            uVar14 = *(uint *)(unaff_x19 + 0x324);
            iVar15 = *(int *)(unaff_x19 + 0x340) + 1;
            *(int *)(unaff_x19 + 0x340) = iVar15;
            *(uint *)(unaff_x19 + 0x328) = uVar14 + 1;
            unaff_x29[8] = 0;
            unaff_x29[9] = 0;
            if (*(long *)(in_stack_000001c0 + 0x48) != 0) {
              if (*(int *)(*(long *)(in_stack_000001c0 + 0x48) + 0x18) <= iVar15) {
                if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                FUN_03999ddc(iVar15,in_stack_000001c0,0);
                uVar14 = *unaff_x29;
              }
              lVar30 = *in_stack_000001e8;
              if (lVar30 != 0) {
                if (uVar14 < *(uint *)(lVar30 + 0x18)) {
                  fVar57 = *(float *)(lVar30 + (long)(int)uVar14 * (long)iVar18 + 0x158);
                  if (*(float *)(unaff_x19 + 0x2e4) == DAT_00b55468) {
                    if ((in_stack_0000129c == 0x2029) || (fVar59 = 0.0, in_stack_0000129c == 10)) {
                      fVar59 = *(float *)(in_stack_000001e0 + 0xcc);
                    }
                    uVar27 = 0;
                    fVar59 = fVar57 + (0.0 - *(float *)(unaff_x19 + 0x33c)) +
                             fStack0000000000000090 *
                             (in_stack_00000088._4_4_ + *(float *)(unaff_x19 + 0x15b0)) +
                             in_stack_00000158 * (*(float *)(in_stack_000001e0 + 200) + fVar59) +
                             *(float *)(unaff_x19 + 0x2e0);
                  }
                  else {
                    if ((in_stack_0000129c == 0x2029) || (fVar59 = 0.0, in_stack_0000129c == 10)) {
                      fVar59 = *(float *)(in_stack_000001e0 + 0xcc);
                    }
                    uVar27 = 1;
                    fVar59 = *(float *)(unaff_x19 + 0x2e0) +
                             *(float *)(unaff_x19 + 0x2e4) +
                             in_stack_00000158 * (*(float *)(in_stack_000001e0 + 200) + fVar59);
                  }
                  *(float *)(unaff_x19 + 0x2e0) = fVar59;
                  *(float *)(unaff_x19 + 0x15ac) = fVar57;
                  *(undefined1 *)(unaff_x19 + 0x2e8) = uVar27;
                  *(undefined8 *)(unaff_x19 + 0x338) = in_stack_00000098;
                  *(float *)(unaff_x19 + 0x2f4) =
                       *(float *)(unaff_x19 + 0x2f8) + 0.0 + *(float *)(unaff_x19 + 0x2fc);
                  FUN_0398b3d0();
                  FUN_0398b3d0();
                  *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
                  goto LAB_03984af8;
                }
                goto LAB_03988250;
              }
            }
            goto thunk_FUN_01b48178;
          }
          if (in_stack_0000129c == 3) {
            if (*(long *)(unaff_x19 + 0x20) == 0) goto thunk_FUN_01b48178;
            in_stack_0000120c = (uint)*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x18);
          }
        }
        else if ((in_stack_0000129c - 0x2028 < 2) || (in_stack_0000129c == 0x2d)) goto LAB_0398491c;
      }
      else {
        lVar30 = *in_stack_000001e8;
        if (lVar30 == 0) goto thunk_FUN_01b48178;
      }
      uVar33 = *unaff_x29;
      if (*(uint *)(lVar30 + 0x18) <= uVar33) goto LAB_03988250;
      if (*(char *)(lVar30 + (long)(int)uVar33 * unaff_x27 + 0x1a0) != '\0') {
        lVar30 = lVar30 + (long)(int)uVar33 * unaff_x27;
        uVar21 = *(ulong *)(unaff_x19 + 0x360);
        uVar24 = *(ulong *)(lVar30 + 0x124);
        *(ulong *)(unaff_x19 + 0x360) =
             uVar21 ^ (uVar21 ^ uVar24) &
                      ~CONCAT44(-(uint)((float)(uVar21 >> 0x20) < (float)(uVar24 >> 0x20)),
                                -(uint)((float)uVar21 < (float)uVar24));
        uVar21 = *(ulong *)(unaff_x19 + 0x368);
        uVar24 = *(ulong *)(lVar30 + 0x130);
        *(ulong *)(unaff_x19 + 0x368) =
             uVar21 ^ (uVar21 ^ uVar24) &
                      ~CONCAT44(-(uint)((float)(uVar24 >> 0x20) < (float)(uVar21 >> 0x20)),
                                -(uint)((float)uVar24 < (float)uVar21));
      }
      if ((uStack0000000000000094 != 0) ||
         ((*(uint *)(in_stack_000001e0 + 0x74) < 7 &&
          ((1 << (ulong)(*(uint *)(in_stack_000001e0 + 0x74) & 0x1f) & 0x4aU) != 0)))) {
        if ((unaff_w26 == 0) &&
           (((in_stack_0000129c != 0x2d && (in_stack_0000129c != 0x200b)) &&
            (in_stack_0000129c != 0xad)))) {
          if (*(char *)(unaff_x19 + 0x37d) == '\0') {
LAB_03984c40:
            if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar21 = FUN_0399a608(in_stack_0000129c,0);
            if ((uVar21 & 1) == 0) {
LAB_03984c88:
              if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar21 = FUN_0399a678(in_stack_0000129c,0);
              if ((uVar21 & 1) == 0) goto LAB_03984d70;
              if (in_stack_00000068 == 0) goto thunk_FUN_01b48178;
            }
            else {
              if ((in_stack_00000068 == 0) ||
                 (lVar30 = FUN_0399d0fc(in_stack_00000068,0), lVar30 == 0)) goto thunk_FUN_01b48178;
              if (*(char *)(lVar30 + 0x28) != '\0') goto LAB_03984c88;
            }
            lVar30 = FUN_0399d0fc(in_stack_00000068,0);
            if ((lVar30 == 0) || (lVar30 = FUN_0399f504(lVar30,0), lVar30 == 0))
            goto thunk_FUN_01b48178;
            uVar21 = System_Array_InternalEnumerator<al>__System_Collections_IEnumerator_get_Current
                               (lVar30,in_stack_0000129c,*(undefined8 *)PTR_DAT_03d9d288);
            if ((int)*unaff_x29 < (int)fStack00000000000000e4) {
              lVar30 = FUN_0399d0fc(in_stack_00000068,0);
              if (lVar30 == 0) goto thunk_FUN_01b48178;
              lVar30 = FUN_0399f804(lVar30,0);
              lVar45 = *in_stack_000001e8;
              if (lVar45 == 0) goto thunk_FUN_01b48178;
              if (*(uint *)(lVar45 + 0x18) <= *unaff_x29 + 1) goto LAB_03988250;
              if (lVar30 == 0) goto thunk_FUN_01b48178;
              uVar24 = System_Array_InternalEnumerator<al>__System_Collections_IEnumerator_get_Current
                                 (lVar30,*(undefined2 *)
                                          (lVar45 + (long)(int)(*unaff_x29 + 1) * (long)iVar18 +
                                          0x20),*(undefined8 *)PTR_DAT_03d9d288);
              if ((uVar21 & 1) != 0) goto LAB_03984f8c;
              if ((uVar24 & 1) == 0) goto LAB_03985278;
              if ((bStack00000000000000e0 & 1) == 0) goto LAB_03984df8;
            }
            else {
              if ((uVar21 & 1) == 0) {
LAB_03985278:
                FUN_0398b3d0();
                bStack00000000000000e0 = 0;
                goto LAB_03984e08;
              }
LAB_03984f8c:
              if ((float)uVar14 != in_stack_000001b8._4_4_ ||
                  ((bStack00000000000000e0 ^ 0xff) & 1) != 0) goto LAB_03984e08;
            }
            if (unaff_w26 != 0) {
              FUN_0398b3d0();
            }
          }
          else {
LAB_03984d70:
            if ((bStack00000000000000e0 & 1) == 0) {
LAB_03984df8:
              bStack00000000000000e0 = 0;
              goto LAB_03984e08;
            }
            if ((unaff_w26 != 0 && in_stack_0000129c != 0xa0) ||
               ((in_stack_000000c0._4_1_ & 1) == 0 && in_stack_0000129c == 0xad)) {
              FUN_0398b3d0();
            }
          }
          FUN_0398b3d0();
          bStack00000000000000e0 = 1;
        }
        else {
          if (*(char *)(unaff_x19 + 0x37d) == '\x01') goto LAB_03984d70;
          if (((in_stack_0000129c - 0x2007 < 0x29) &&
              ((1L << ((ulong)(in_stack_0000129c - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
             ((in_stack_0000129c == 0xa0 || (in_stack_0000129c == 0x2060)))) goto LAB_03984c40;
          FUN_0398b3d0();
          bStack00000000000000e0 = 0;
          *(undefined4 *)(unaff_x19 + 0x11e0) = 0xffffffff;
        }
      }
LAB_03984e08:
      FUN_0398b3d0();
      *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
      unaff_x22 = in_stack_000001e8;
      uVar19 = in_stack_00001288;
      fVar57 = unaff_s12;
      goto LAB_0398183c;
    }
LAB_0398816c:
    fVar47 = (fVar59 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
    if (fVar47 <= DAT_00b55428) {
      fVar47 = DAT_00b55428;
    }
    *(float *)(unaff_x19 + 0x1598) = fVar59;
    fVar59 = (fVar59 - fVar47) * 20.0 + 0.5;
    fVar47 = DAT_00b556b4;
    if (fVar59 != INFINITY) {
      fVar47 = (float)(int)fVar59 / 20.0;
    }
    if (fVar47 <= fVar57) {
      fVar47 = fVar57;
    }
LAB_03985650:
    *(float *)(unaff_x19 + 0xec) = fVar47;
  }
  goto LAB_03980e58;
switchD_0398536c_caseD_3:
  in_stack_0000120c = FUN_0398b72c();
  in_stack_000000c0._4_1_ = 0;
  goto LAB_03984f74;
LAB_03985ef4:
  do {
    uVar14 = uVar39 - 1;
    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_03988250;
    lVar46 = (long)(int)uVar14;
    lVar45 = lVar30 + lVar46 * 0x188;
    lVar22 = *(long *)(lVar45 + 0x40);
    uVar3 = *(ushort *)(lVar45 + 0x20);
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    bVar12 = FUN_02fdb080(uVar3,0);
    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_03988250;
    lVar45 = *(long *)(in_stack_000001c0 + 0x48);
    uVar44 = (uint)uVar3;
    if (lVar45 == 0) goto thunk_FUN_01b48178;
    uVar2 = *(uint *)(lVar30 + lVar46 * 0x188 + 0x6c);
    if (*(uint *)(lVar45 + 0x18) <= uVar2) goto LAB_03988250;
    lVar35 = (long)(int)uVar2;
    lVar45 = lVar45 + lVar35 * 0x60;
    uVar5 = *(uint *)(lVar45 + 0x40);
    uVar42 = *(uint *)(lVar45 + 0x6c);
    iVar17 = *(int *)(lVar45 + 0x20);
    iVar15 = *(int *)(lVar45 + 0x28);
    iVar18 = *(int *)(lVar45 + 0x2c);
    uVar6 = *(uint *)(lVar45 + 0x44);
    lVar36 = (long)(int)uVar6;
    fVar48 = *(float *)(lVar45 + 0x50);
    fVar51 = *(float *)(lVar45 + 0x58);
    fVar53 = *(float *)(lVar45 + 0x5c);
    fVar49 = *(float *)(lVar45 + 0x60);
    fVar56 = *(float *)(lVar45 + 100);
    fVar66 = *(float *)(lVar45 + 0x70);
    fVar54 = *(float *)(lVar45 + 0x74);
    fVar65 = *(float *)(lVar45 + 0x78);
    fVar50 = *(float *)(lVar45 + 0x7c);
    if ((int)uVar42 < 0x421) {
      if ((int)uVar42 < 0x209) {
        if ((int)uVar42 < 0x111) {
          switch(uVar42) {
          case 0x101:
            goto switchD_0398604c_caseD_1001;
          case 0x102:
            goto switchD_0398604c_caseD_1002;
          case 0x103:
          case 0x105:
          case 0x106:
          case 0x107:
            break;
          case 0x104:
            goto switchD_0398604c_caseD_1004;
          case 0x108:
            goto switchD_0398604c_caseD_1008;
          default:
            if (uVar42 == 0x110) goto switchD_0398604c_caseD_1008;
          }
        }
        else {
          switch(uVar42) {
          case 0x201:
            goto switchD_0398604c_caseD_1001;
          case 0x202:
            goto switchD_0398604c_caseD_1002;
          case 0x203:
          case 0x205:
          case 0x206:
          case 0x207:
            break;
          case 0x204:
            goto switchD_0398604c_caseD_1004;
          case 0x208:
            goto switchD_0398604c_caseD_1008;
          default:
            if (uVar42 == 0x120) goto LAB_039861b0;
          }
        }
      }
      else if ((int)uVar42 < 0x405) {
        if ((int)uVar42 < 0x401) {
          if (uVar42 == 0x210) goto switchD_0398604c_caseD_1008;
          if (uVar42 == 0x220) goto LAB_039861b0;
        }
        else {
          if (uVar42 == 0x401) goto switchD_0398604c_caseD_1001;
          if (uVar42 == 0x402) goto switchD_0398604c_caseD_1002;
          if (uVar42 == 0x404) goto switchD_0398604c_caseD_1004;
        }
      }
      else {
        if ((uVar42 == 0x408) || (uVar42 == 0x410)) goto switchD_0398604c_caseD_1008;
        if (uVar42 == 0x420) goto LAB_039861b0;
      }
      goto switchD_0398604c_caseD_1003;
    }
    if (0x1008 < (int)uVar42) {
      if ((int)uVar42 < 0x2005) {
        if (0x2000 < (int)uVar42) {
          if (uVar42 == 0x2001) goto switchD_0398604c_caseD_1001;
          if (uVar42 == 0x2002) goto switchD_0398604c_caseD_1002;
          if (uVar42 == 0x2004) goto switchD_0398604c_caseD_1004;
          goto switchD_0398604c_caseD_1003;
        }
        if (uVar42 != 0x1010) {
          uVar29 = 0x1020;
          goto LAB_03986170;
        }
      }
      else if ((uVar42 != 0x2008) && (uVar42 != 0x2010)) {
        uVar29 = 0x2020;
LAB_03986170:
        if (uVar42 != uVar29) goto switchD_0398604c_caseD_1003;
LAB_039861b0:
        fVar53 = fVar66 + fVar65;
        goto LAB_039861c4;
      }
      goto switchD_0398604c_caseD_1008;
    }
    if ((int)uVar42 < 0x811) {
      switch(uVar42) {
      case 0x801:
        goto switchD_0398604c_caseD_1001;
      case 0x802:
        goto switchD_0398604c_caseD_1002;
      case 0x803:
      case 0x805:
      case 0x806:
      case 0x807:
        break;
      case 0x804:
        goto switchD_0398604c_caseD_1004;
      case 0x808:
switchD_0398604c_caseD_1008:
        if ((int)uVar14 <= (int)uVar6) {
          if (uVar44 < 0xad) {
            if ((uVar44 != 3) && (uVar44 != 10))
            goto UnityEngine_UIElements_NavigateFocusRing_FocusableHierarchyTraversal__StrictOrder;
          }
          else if ((uVar44 != 0xad) && ((uVar44 != 0x200b && (uVar44 != 0x2060)))) {
UnityEngine_UIElements_NavigateFocusRing_FocusableHierarchyTraversal__StrictOrder:
            if (*(uint *)(lVar30 + 0x18) <= uVar5) goto LAB_03988250;
            uVar4 = *(undefined2 *)(lVar30 + (long)(int)uVar5 * 0x188 + 0x20);
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              plVar43 = (long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__;
            }
            uVar26 = FUN_02fde5f4(uVar4,0);
            if ((uVar26 & 1) == 0) {
              bVar11 = (int)uVar2 < *(int *)(unaff_x19 + 0x340);
            }
            else {
              bVar11 = false;
            }
            if ((fVar53 <= fVar49) && (!bVar11 && (uVar42 >> 4 & 1) == 0)) {
              in_stack_00000158 = fVar56;
              if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
                in_stack_00000158 = fVar49 + fVar56;
              }
              goto LAB_039861c8;
            }
            if ((uVar39 == 1) || (uVar2 != uVar33)) {
              cVar28 = *(char *)(in_stack_000001e0 + 0xb6);
            }
            else {
              cVar28 = *(char *)(in_stack_000001e0 + 0xb6);
              if (uVar14 != *(uint *)(in_stack_000001e0 + 0xe4)) {
                iVar18 = (iVar18 - iVar17) - (uStack0000000000000094 & 1);
                fVar56 = -fVar53;
                if (cVar28 != '\0') {
                  fVar56 = fVar53;
                }
                if (iVar18 < 1) {
                  fVar53 = 1.0;
                }
                else {
                  fVar53 = *(float *)(in_stack_000001e0 + 0x7c);
                }
                if (iVar18 < 2) {
                  iVar18 = 1;
                }
                fVar49 = fVar49 + fVar56;
                if (uVar44 == 9) {
LAB_03987f80:
                  if (cVar28 != '\0') {
                    fVar49 = fVar49 * (1.0 - fVar53);
                    fVar56 = (float)iVar18;
LAB_03987fbc:
                    in_stack_00000158 = in_stack_00000158 - fVar49 / fVar56;
                    break;
                  }
                  fVar56 = (float)iVar18;
                  fVar49 = fVar49 * (1.0 - fVar53);
                }
                else {
                  if (uVar44 != 0xa0) {
                    if (*(int *)(*(long *)
                                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar26 = FUN_02fdea78(uVar44,0);
                    cVar28 = *(char *)(in_stack_000001e0 + 0xb6);
                    if ((uVar26 & 1) != 0) goto LAB_03987f80;
                  }
                  fVar49 = fVar49 * fVar53;
                  fVar56 = (float)(int)((iVar17 - (~uStack0000000000000094 & 1)) + iVar15);
                  if (cVar28 != '\0') goto LAB_03987fbc;
                }
                in_stack_00000158 = in_stack_00000158 + fVar49 / fVar56;
                _in_stack_00000148 =
                     CONCAT44((float)((ulong)_in_stack_00000148 >> 0x20) + 0.0,
                              (float)_in_stack_00000148 + 0.0);
                break;
              }
            }
            in_stack_00000158 = fVar56;
            if (cVar28 != '\0') {
              in_stack_00000158 = fVar49 + fVar56;
            }
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uStack0000000000000094 = FUN_02fdea78(uVar44,0);
            _in_stack_00000148 = 0;
          }
        }
        break;
      default:
        if (uVar42 == 0x810) goto switchD_0398604c_caseD_1008;
      }
    }
    else {
      switch(uVar42) {
      case 0x1001:
switchD_0398604c_caseD_1001:
        if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
          in_stack_00000158 = fVar56 + 0.0;
        }
        else {
          in_stack_00000158 = 0.0 - fVar53;
        }
        break;
      case 0x1002:
switchD_0398604c_caseD_1002:
LAB_039861c4:
        in_stack_00000158 = (fVar56 + fVar49 * 0.5) - fVar53 * 0.5;
        break;
      case 0x1003:
      case 0x1005:
      case 0x1006:
      case 0x1007:
        goto switchD_0398604c_caseD_1003;
      case 0x1004:
switchD_0398604c_caseD_1004:
        in_stack_00000158 = (fVar49 + fVar56) - fVar53;
        if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
          in_stack_00000158 = fVar49 + fVar56;
        }
        break;
      case 0x1008:
        goto switchD_0398604c_caseD_1008;
      default:
        if (uVar42 == 0x820) goto LAB_039861b0;
        goto switchD_0398604c_caseD_1003;
      }
LAB_039861c8:
      _in_stack_00000148 = 0;
    }
switchD_0398604c_caseD_1003:
    uVar42 = (uint)*(undefined8 *)(lVar30 + 0x18);
    if (uVar42 <= uVar14) goto LAB_03988250;
    lVar45 = lVar30 + lVar46 * 0x188;
    fVar56 = fStack0000000000000120 + in_stack_00000158;
    fVar53 = (float)_in_stack_00000118 + (float)_in_stack_00000148;
    fVar49 = (float)((ulong)_in_stack_00000118 >> 0x20) + (float)((ulong)_in_stack_00000148 >> 0x20)
    ;
    if (*(char *)(lVar45 + 0x1a0) == '\0') goto LAB_03986a64;
    cVar28 = *(char *)(lVar30 + lVar46 * 0x188 + 0x28);
    if (cVar28 != '\x01') goto UnityEngine_UIElements_PanelSettings__get_clearColor;
    fVar47 = fmodf(*(float *)(in_stack_000001e0 + 0xfc) * (float)(int)uVar2,1.0);
    plVar43 = (long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf4)) {
    case 0:
      fVar47 = 1.0;
      lVar32 = lVar30 + lVar46 * 0x188;
      *(undefined4 *)(lVar32 + 0xbc) = 0;
      *(undefined4 *)(lVar32 + 0x94) = 0;
      *(undefined4 *)(lVar32 + 0xe4) = 0x3f800000;
      break;
    case 1:
      fVar50 = *(float *)(lVar30 + lVar46 * 0x188 + 0xa0);
      if (*(int *)(in_stack_000001e0 + 0x70) == 0x208) {
        lVar32 = lVar30 + lVar46 * 0x188;
        fVar65 = (in_stack_00000158 + fVar50) - *(float *)(unaff_x19 + 0x360);
        fVar50 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
        goto LAB_03986374;
      }
      lVar32 = lVar30 + lVar46 * 0x188;
      fVar65 = fVar65 - fVar66;
      *(float *)(lVar32 + 0xbc) = fVar47 + (fVar50 - fVar66) / fVar65;
      *(float *)(lVar32 + 0x94) = fVar47 + (*(float *)(lVar32 + 0x78) - fVar66) / fVar65;
      *(float *)(lVar32 + 0xe4) = fVar47 + (*(float *)(lVar32 + 200) - fVar66) / fVar65;
      fVar47 = fVar47 + (*(float *)(lVar32 + 0xf0) - fVar66) / fVar65;
      break;
    case 2:
      lVar32 = lVar30 + lVar46 * 0x188;
      fVar50 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
      fVar65 = (in_stack_00000158 + *(float *)(lVar32 + 0xa0)) - *(float *)(unaff_x19 + 0x360);
LAB_03986374:
      *(float *)(lVar32 + 0xbc) = fVar47 + fVar65 / fVar50;
      *(float *)(lVar32 + 0x94) =
           fVar47 + ((in_stack_00000158 + *(float *)(lVar32 + 0x78)) - *(float *)(unaff_x19 + 0x360)
                    ) / (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      *(float *)(lVar32 + 0xe4) =
           fVar47 + ((in_stack_00000158 + *(float *)(lVar32 + 200)) - *(float *)(unaff_x19 + 0x360))
                    / (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      fVar47 = fVar47 + ((in_stack_00000158 + *(float *)(lVar32 + 0xf0)) -
                        *(float *)(unaff_x19 + 0x360)) /
                        (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      break;
    case 3:
      switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
      case 0:
        lVar32 = lVar30 + lVar46 * 0x188;
        *(undefined4 *)(lVar32 + 0xc0) = 0;
        *(undefined4 *)(lVar32 + 0x98) = 0x3f800000;
        *(undefined4 *)(lVar32 + 0xe8) = 0;
        *(undefined4 *)(lVar32 + 0x110) = 0x3f800000;
        break;
      case 1:
        fVar50 = fVar50 - fVar54;
        lVar32 = lVar30 + lVar46 * 0x188;
        fVar65 = fVar47 + (*(float *)(lVar32 + 0xa4) - fVar54) / fVar50;
        fVar50 = fVar47 + (*(float *)(lVar32 + 0x7c) - fVar54) / fVar50;
        *(float *)(lVar32 + 0xc0) = fVar65;
        *(float *)(lVar32 + 0x98) = fVar50;
        *(float *)(lVar32 + 0xe8) = fVar65;
        *(float *)(lVar32 + 0x110) = fVar50;
        break;
      case 2:
        lVar32 = lVar30 + lVar46 * 0x188;
        fVar65 = fVar47 + (*(float *)(lVar32 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
                          (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
        *(float *)(lVar32 + 0xc0) = fVar65;
        fVar50 = *(float *)(unaff_x19 + 0x364);
        fVar66 = *(float *)(unaff_x19 + 0x36c);
        *(float *)(lVar32 + 0xe8) = fVar65;
        fVar65 = fVar47 + (*(float *)(lVar32 + 0x7c) - fVar50) / (fVar66 - fVar50);
        *(float *)(lVar32 + 0x98) = fVar65;
        *(float *)(lVar32 + 0x110) = fVar65;
        break;
      case 3:
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_038f2acc(*(undefined8 *)PTR_DAT_03d9c948,0);
        uVar42 = (uint)*(undefined8 *)(lVar30 + 0x18);
      }
      if (uVar42 <= uVar14) goto LAB_03988250;
      lVar32 = lVar30 + lVar46 * 0x188;
      fVar65 = *(float *)(lVar32 + 0x168);
      fVar50 = (1.0 - (*(float *)(lVar32 + 0xc0) + *(float *)(lVar32 + 0x98)) * fVar65) * 0.5;
      fVar66 = fVar47 + *(float *)(lVar32 + 0xc0) * fVar65 + fVar50;
      fVar47 = fVar47 + *(float *)(lVar32 + 0x98) * fVar65 + fVar50;
      *(float *)(lVar32 + 0xbc) = fVar66;
      *(float *)(lVar32 + 0x94) = fVar66;
      *(float *)(lVar32 + 0xe4) = fVar47;
      break;
    default:
      goto switchD_039862ac_default;
    }
    *(float *)(lVar30 + lVar46 * 0x188 + 0x10c) = fVar47;
switchD_039862ac_default:
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
    case 0:
      if (uVar42 <= uVar14) goto LAB_03988250;
      lVar32 = lVar30 + lVar46 * 0x188;
      *(undefined4 *)(lVar32 + 0xc0) = 0;
      *(undefined4 *)(lVar32 + 0x98) = 0x3f800000;
      *(undefined4 *)(lVar32 + 0xe8) = 0x3f800000;
      *(undefined4 *)(lVar32 + 0x110) = 0;
      break;
    case 1:
      if (uVar14 < uVar42) {
        fVar48 = fVar48 - fVar51;
        lVar32 = lVar30 + lVar46 * 0x188;
        fVar47 = (*(float *)(lVar32 + 0xa4) - fVar51) / fVar48;
        fVar48 = (*(float *)(lVar32 + 0x7c) - fVar51) / fVar48;
        *(float *)(lVar32 + 0xc0) = fVar47;
        goto FUN_03986724;
      }
      goto LAB_03988250;
    case 2:
      if (uVar42 <= uVar14) goto LAB_03988250;
      lVar32 = lVar30 + lVar46 * 0x188;
      fVar47 = (*(float *)(lVar32 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
      *(float *)(lVar32 + 0xc0) = fVar47;
      fVar48 = (*(float *)(lVar32 + 0x7c) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
FUN_03986724:
      *(float *)(lVar32 + 0x98) = fVar48;
      *(float *)(lVar32 + 0xe8) = fVar48;
      *(float *)(lVar32 + 0x110) = fVar47;
      break;
    case 3:
      if (uVar42 <= uVar14) goto LAB_03988250;
      lVar32 = lVar30 + lVar46 * 0x188;
      fVar48 = *(float *)(lVar32 + 0x168);
      fVar65 = (1.0 - (*(float *)(lVar32 + 0xbc) + *(float *)(lVar32 + 0xe4)) / fVar48) * 0.5;
      fVar47 = *(float *)(lVar32 + 0xbc) / fVar48 + fVar65;
      fVar65 = *(float *)(lVar32 + 0xe4) / fVar48 + fVar65;
      *(float *)(lVar32 + 0xc0) = fVar47;
      *(float *)(lVar32 + 0x98) = fVar65;
      *(float *)(lVar32 + 0x110) = fVar47;
      *(float *)(lVar32 + 0xe8) = fVar65;
    }
    if (uVar42 <= uVar14) goto LAB_03988250;
    lVar32 = lVar30 + lVar46 * 0x188;
    fVar47 = *(float *)(lVar32 + 0x16c) * (1.0 - *(float *)(unaff_x19 + 0x1594));
    if ((*(char *)(lVar32 + 100) == '\0') && ((*(byte *)(lVar30 + lVar46 * 0x188 + 0x19c) & 1) != 0)
       ) {
      fVar47 = -fVar47;
    }
    lVar32 = lVar30 + lVar46 * 0x188;
    *(float *)(lVar32 + 0xb8) = fVar47;
    *(float *)(lVar32 + 0x90) = fVar47;
    *(float *)(lVar32 + 0xe0) = fVar47;
    *(float *)(lVar32 + 0x108) = fVar47;
    *(undefined4 *)(lVar32 + 0xbc) = 0x3f800000;
    *(float *)(lVar32 + 0xc0) = fVar47;
    *(undefined4 *)(lVar32 + 0x94) = 0x3f800000;
    *(float *)(lVar32 + 0x98) = fVar47;
    *(undefined4 *)(lVar32 + 0xe4) = 0x3f800000;
    *(float *)(lVar32 + 0xe8) = fVar47;
    *(undefined4 *)(lVar32 + 0x10c) = 0x3f800000;
    *(float *)(lVar32 + 0x110) = fVar47;
UnityEngine_UIElements_PanelSettings__get_clearColor:
    if (((int)uVar14 < *(int *)(in_stack_000001e0 + 0xd8)) &&
       (iStack0000000000000138 < *(int *)(in_stack_000001e0 + 0xdc))) {
      if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar2) ||
         (*(int *)(in_stack_000001e0 + 0x74) == 5)) {
        if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar2) ||
           (*(int *)(in_stack_000001e0 + 0x74) != 5))
        goto UnityEngine_UIElements_PanelSettings__get_dynamicAtlasSettings;
        if (uVar14 < uVar42) {
          bVar11 = *(uint *)(lVar30 + lVar46 * 0x188 + 0x70) == uStack0000000000000064;
          goto LAB_03986880;
        }
        goto LAB_03988250;
      }
      if (uVar42 <= uVar14) goto LAB_03988250;
UnityEngine_UIElements_PanelSettings___ctor:
      lVar45 = lVar30 + lVar46 * 0x188;
      *(ulong *)(lVar45 + 0xa0) =
           CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar45 + 0xa0) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar45 + 0xa0));
      *(float *)(lVar45 + 0xa8) = fVar49 + *(float *)(lVar45 + 0xa8);
      *(ulong *)(lVar45 + 0x78) =
           CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar45 + 0x78) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar45 + 0x78));
      *(float *)(lVar45 + 0x80) = fVar49 + *(float *)(lVar45 + 0x80);
      *(ulong *)(lVar45 + 200) =
           CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar45 + 200) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar45 + 200));
      *(float *)(lVar45 + 0xd0) = fVar49 + *(float *)(lVar45 + 0xd0);
      *(ulong *)(lVar45 + 0xf0) =
           CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar45 + 0xf0) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar45 + 0xf0));
      *(float *)(lVar45 + 0xf8) = fVar49 + *(float *)(lVar45 + 0xf8);
    }
    else {
UnityEngine_UIElements_PanelSettings__get_dynamicAtlasSettings:
      bVar11 = false;
LAB_03986880:
      if (uVar42 <= uVar14) goto LAB_03988250;
      if (bVar11) goto UnityEngine_UIElements_PanelSettings___ctor;
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(plVar43);
        DAT_03fed257 = '\x01';
        uVar42 = *(uint *)(lVar30 + 0x18);
      }
      uVar16 = *(undefined4 *)(*(undefined8 **)(*plVar43 + 0xb8) + 1);
      lVar32 = lVar30 + lVar46 * 0x188;
      *(undefined8 *)(lVar32 + 0xa0) = **(undefined8 **)(*plVar43 + 0xb8);
      *(undefined4 *)(lVar32 + 0xa8) = uVar16;
      if (uVar42 <= uVar14) goto LAB_03988250;
      uVar16 = *(undefined4 *)(*(undefined8 **)(*plVar43 + 0xb8) + 1);
      lVar32 = lVar30 + lVar46 * 0x188;
      *(undefined8 *)(lVar32 + 0x78) = **(undefined8 **)(*plVar43 + 0xb8);
      *(undefined4 *)(lVar32 + 0x80) = uVar16;
      uVar16 = *(undefined4 *)(*(undefined8 **)(*plVar43 + 0xb8) + 1);
      *(undefined8 *)(lVar32 + 200) = **(undefined8 **)(*plVar43 + 0xb8);
      *(undefined4 *)(lVar32 + 0xd0) = uVar16;
      uVar16 = *(undefined4 *)(*(undefined8 **)(*plVar43 + 0xb8) + 1);
      *(undefined8 *)(lVar32 + 0xf0) = **(undefined8 **)(*plVar43 + 0xb8);
      *(undefined4 *)(lVar32 + 0xf8) = uVar16;
      *(undefined1 *)(lVar45 + 0x1a0) = 0;
    }
    iVar15 = FUN_038fcab0(0);
    if (iVar15 == 1) {
      cVar41 = *(char *)(in_stack_000001e0 + 0xa2);
    }
    else {
      cVar41 = '\0';
    }
    if (cVar28 == '\x01') {
      if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_03998984(uVar14,cVar41 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
    else if (cVar28 == '\x02') {
      if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_039993bc(uVar14,cVar41 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
LAB_03986a64:
    lVar45 = *in_stack_000001e8;
    if (lVar45 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar45 + 0x18) <= uVar14) goto LAB_03988250;
    lVar45 = lVar45 + lVar46 * 0x188;
    uVar19 = *(undefined8 *)(lVar45 + 0x124);
    *(undefined8 *)(lVar45 + 0x124) =
         CONCAT44(fVar53 + (float)((ulong)uVar19 >> 0x20),fVar56 + (float)uVar19);
    *(float *)(lVar45 + 300) = fVar49 + *(float *)(lVar45 + 300);
    lVar45 = *in_stack_000001e8;
    if (lVar45 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar45 + 0x18) <= uVar14) goto LAB_03988250;
    lVar45 = lVar45 + lVar46 * 0x188;
    *(ulong *)(lVar45 + 0x118) =
         CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar45 + 0x118) >> 0x20),
                  fVar56 + (float)*(undefined8 *)(lVar45 + 0x118));
    *(float *)(lVar45 + 0x120) = fVar49 + *(float *)(lVar45 + 0x120);
    lVar45 = *in_stack_000001e8;
    if (lVar45 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar45 + 0x18) <= uVar14) goto LAB_03988250;
    lVar45 = lVar45 + lVar46 * 0x188;
    *(ulong *)(lVar45 + 0x130) =
         CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar45 + 0x130) >> 0x20),
                  fVar56 + (float)*(undefined8 *)(lVar45 + 0x130));
    *(float *)(lVar45 + 0x138) = fVar49 + *(float *)(lVar45 + 0x138);
    lVar45 = *in_stack_000001e8;
    if (lVar45 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar45 + 0x18) <= uVar14) goto LAB_03988250;
    lVar45 = lVar45 + lVar46 * 0x188;
    *(float *)(lVar45 + 0x13c) = fVar56 + *(float *)(lVar45 + 0x13c);
    *(ulong *)(lVar45 + 0x140) =
         CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar45 + 0x140) >> 0x20),
                  fVar53 + (float)*(undefined8 *)(lVar45 + 0x140));
    lVar45 = *in_stack_000001e8;
    if (lVar45 == 0) goto thunk_FUN_01b48178;
    uVar42 = *(uint *)(lVar45 + 0x18);
    if (uVar42 <= uVar14) goto LAB_03988250;
    lVar32 = lVar45 + lVar46 * 0x188;
    *(float *)(lVar32 + 0x148) = fVar56 + *(float *)(lVar32 + 0x148);
    *(float *)(lVar32 + 0x164) = fVar56 + *(float *)(lVar32 + 0x164);
    *(float *)(lVar32 + 0x154) = fVar53 + *(float *)(lVar32 + 0x154);
    uVar19 = *(undefined8 *)(lVar32 + 0x14c);
    *(undefined8 *)(lVar32 + 0x14c) =
         CONCAT44(fVar53 + (float)((ulong)uVar19 >> 0x20),fVar53 + (float)uVar19);
    if (uVar2 == uVar33) {
      uVar33 = *in_stack_000001d0 - 1;
      if (uVar14 == uVar33) goto LAB_03986c5c;
    }
    else {
      lVar32 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar32 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar32 + 0x18) <= uVar33) goto LAB_03988250;
      lVar37 = (long)(int)uVar33;
      lVar40 = lVar32 + lVar37 * 0x60;
      fVar49 = fVar53 + *(float *)(lVar40 + 0x58);
      *(ulong *)(lVar40 + 0x50) =
           CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar40 + 0x50) >> 0x20),
                    fVar53 + (float)*(undefined8 *)(lVar40 + 0x50));
      *(float *)(lVar40 + 0x58) = fVar49;
      *(float *)(lVar40 + 0x5c) = fVar56 + *(float *)(lVar40 + 0x5c);
      if (uVar42 <= *(uint *)(lVar40 + 0x38)) goto LAB_03988250;
      uVar16 = *(undefined4 *)(lVar45 + (long)(int)*(uint *)(lVar40 + 0x38) * 0x188 + 0x124);
      lVar32 = lVar32 + lVar37 * 0x60;
      *(float *)(lVar32 + 0x74) = fVar49;
      *(undefined4 *)(lVar32 + 0x70) = uVar16;
      lVar45 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar45 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar45 + 0x18) <= uVar33) goto LAB_03988250;
      lVar32 = *in_stack_000001e8;
      if (lVar32 == 0) goto thunk_FUN_01b48178;
      uVar33 = *(uint *)(lVar45 + lVar37 * 0x60 + 0x44);
      if (*(uint *)(lVar32 + 0x18) <= uVar33) goto LAB_03988250;
      lVar45 = lVar45 + lVar37 * 0x60;
      *(undefined4 *)(lVar45 + 0x78) = *(undefined4 *)(lVar32 + (long)(int)uVar33 * 0x188 + 0x130);
      *(undefined4 *)(lVar45 + 0x7c) = *(undefined4 *)(lVar45 + 0x50);
      uVar33 = *in_stack_000001d0 - 1;
LAB_03986c5c:
      if (uVar14 == uVar33) {
        lVar45 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar45 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar45 + 0x18) <= uVar2) goto LAB_03988250;
        lVar32 = lVar45 + lVar35 * 0x60;
        fVar49 = fVar53 + *(float *)(lVar32 + 0x58);
        *(ulong *)(lVar32 + 0x50) =
             CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar32 + 0x50) >> 0x20),
                      fVar53 + (float)*(undefined8 *)(lVar32 + 0x50));
        *(float *)(lVar32 + 0x58) = fVar49;
        *(float *)(lVar32 + 0x5c) = fVar56 + *(float *)(lVar32 + 0x5c);
        lVar37 = *in_stack_000001e8;
        if (lVar37 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar37 + 0x18) <= *(uint *)(lVar32 + 0x38)) goto LAB_03988250;
        uVar16 = *(undefined4 *)(lVar37 + (long)(int)*(uint *)(lVar32 + 0x38) * 0x188 + 0x124);
        lVar45 = lVar45 + lVar35 * 0x60;
        *(float *)(lVar45 + 0x74) = fVar49;
        *(undefined4 *)(lVar45 + 0x70) = uVar16;
        lVar45 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar45 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar45 + 0x18) <= uVar2) goto LAB_03988250;
        lVar32 = *in_stack_000001e8;
        if (lVar32 == 0) goto thunk_FUN_01b48178;
        uVar33 = *(uint *)(lVar45 + lVar35 * 0x60 + 0x44);
        if (*(uint *)(lVar32 + 0x18) <= uVar33) goto LAB_03988250;
        lVar45 = lVar45 + lVar35 * 0x60;
        *(undefined4 *)(lVar45 + 0x78) = *(undefined4 *)(lVar32 + (long)(int)uVar33 * 0x188 + 0x130)
        ;
        *(undefined4 *)(lVar45 + 0x7c) = *(undefined4 *)(lVar45 + 0x50);
      }
    }
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar26 = FUN_02fddb80(uVar44,0);
    if (((((uVar26 & 1) == 0) && (1 < uVar44 - 0x2010)) && (uVar44 != 0xad)) && (uVar44 != 0x2d)) {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        if (uVar39 == 1) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          bVar13 = FUN_02fddab4(uVar44,0);
          if (((uVar44 == 0x200b) || (((bVar12 | bVar13 ^ 1) & 1) != 0)) ||
             (*in_stack_000001d0 == 1)) goto LAB_03987688;
        }
        uStack000000000000016c = 0;
      }
      else {
        if (((uVar39 != 1) && ((int)uVar14 < (int)(*(uint *)(lVar30 + 0x18) - 1))) &&
           (((int)uVar14 < (int)*in_stack_000001d0 && ((uVar44 == 0x2019 || (uVar44 == 0x27)))))) {
          if (*(uint *)(lVar30 + 0x18) <= uVar39 - 2) goto LAB_03988250;
          uVar4 = *(undefined2 *)(lVar30 + _in_stack_000001a8 + -0x464);
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar26 = FUN_02fddb80(uVar4,0);
          if ((uVar26 & 1) != 0) {
            if (*(uint *)(lVar30 + 0x18) <= uVar39) goto LAB_03988250;
            uVar4 = *(undefined2 *)(lVar30 + _in_stack_000001a8 + -0x154);
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar26 = FUN_02fddb80(uVar4,0);
            if ((uVar26 & 1) != 0) goto LAB_03986e44;
          }
        }
LAB_03987688:
        if (uVar14 == *in_stack_000001d0 - 1) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar26 = FUN_02fddb80(uVar44,0);
          fStack0000000000000170 = (float)uVar14;
          if ((uVar26 & 1) == 0) goto LAB_039876c4;
        }
        else {
LAB_039876c4:
          fStack0000000000000170 = (float)((int)in_stack_00000178 - 1);
        }
        lVar45 = *plVar23;
        if (lVar45 == 0) goto thunk_FUN_01b48178;
        uVar33 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar15 = *(int *)(lVar45 + 0x18);
        if (iVar15 < (int)(uVar33 + 1)) {
          if (*(int *)(*(long *)PTR_DAT_03dad318 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_01f554fc(plVar23,iVar15 + 1,*(undefined8 *)PTR_DAT_03dad310);
          lVar45 = *plVar23;
          if (lVar45 == 0) goto thunk_FUN_01b48178;
        }
        if (*(uint *)(lVar45 + 0x18) <= uVar33) goto LAB_03988250;
        lVar45 = lVar45 + (long)(int)uVar33 * 0xc;
        *(uint *)(lVar45 + 0x20) = uStack0000000000000168;
        *(float *)(lVar45 + 0x24) = fStack0000000000000170;
        *(uint *)(lVar45 + 0x28) = ((int)fStack0000000000000170 - uStack0000000000000168) + 1;
        lVar45 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar45 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar45 + 0x18) <= uVar2) goto LAB_03988250;
        lVar45 = lVar45 + lVar35 * 0x60;
        uStack000000000000016c = 0;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar45 + 0x34) = *(int *)(lVar45 + 0x34) + 1;
      }
    }
    else {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        uStack0000000000000168 = uVar14;
      }
      if (uVar14 == *in_stack_000001d0 - 1) {
        lVar45 = *plVar23;
        if (lVar45 == 0) goto thunk_FUN_01b48178;
        uVar33 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar15 = *(int *)(lVar45 + 0x18);
        if (iVar15 < (int)(uVar33 + 1)) {
          if (*(int *)(*(long *)PTR_DAT_03dad318 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_01f554fc(plVar23,iVar15 + 1,*(undefined8 *)PTR_DAT_03dad310);
          lVar45 = *plVar23;
          if (lVar45 == 0) goto thunk_FUN_01b48178;
        }
        if (*(uint *)(lVar45 + 0x18) <= uVar33) goto LAB_03988250;
        lVar45 = lVar45 + (long)(int)uVar33 * 0xc;
        *(uint *)(lVar45 + 0x20) = uStack0000000000000168;
        *(uint *)(lVar45 + 0x24) = uVar14;
        *(uint *)(lVar45 + 0x28) = uVar39 - uStack0000000000000168;
        lVar45 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar45 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar45 + 0x18) <= uVar2) goto LAB_03988250;
        lVar45 = lVar45 + lVar35 * 0x60;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar45 + 0x34) = *(int *)(lVar45 + 0x34) + 1;
      }
LAB_03986e44:
      uStack000000000000016c = 1;
    }
    lVar45 = *in_stack_000001e8;
    if (lVar45 == 0) goto thunk_FUN_01b48178;
    uVar33 = *(uint *)(lVar45 + 0x18);
    if (uVar33 <= uVar14) goto LAB_03988250;
    if ((*(byte *)(lVar45 + lVar46 * 0x188 + 0x19c) >> 2 & 1) == 0) {
      if (bVar8) {
LAB_03986e78:
        if (uVar39 - 2 < uVar33) {
          uVar16 = *(undefined4 *)(lVar45 + _in_stack_000001a8 + -0x354);
          uVar61 = *(undefined4 *)(lVar45 + _in_stack_000001a8 + -0x318);
          goto LAB_039870dc;
        }
        goto LAB_03988250;
      }
LAB_03987034:
      bVar8 = false;
    }
    else {
      lVar35 = *(long *)(unaff_x19 + 0x15b8);
      if (lVar35 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar35 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) goto LAB_03988250;
      iVar15 = *(int *)(lVar45 + lVar46 * 0x188 + 0x70);
      *(int *)(lVar45 + lVar46 * 0x188 + 0x178) =
           *(int *)(lVar35 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar14) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar2)) {
        bVar11 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar11 = iVar15 + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar11 = false;
      }
      if (uVar44 != 0x200b && (bVar12 & 1) == 0) {
        fVar49 = *(float *)(lVar45 + lVar46 * 0x188 + 0x16c);
        if (fVar59 <= fVar49) {
          fVar59 = fVar49;
        }
        if (iVar15 != in_stack_000000c0._4_4_) {
          fStack000000000000015c = fVar57;
        }
        if (lVar22 == 0) goto thunk_FUN_01b48178;
        fVar49 = *(float *)(lVar45 + lVar46 * 0x188 + 0x150);
        if (fStack0000000000000174 <= ABS(fVar47)) {
          fStack0000000000000174 = ABS(fVar47);
        }
        FUN_0396d8d8(&stack0x000012a0,lVar22,0);
        memcpy(&stack0x00001210,&stack0x000012a0,0x60);
        fVar65 = (float)FUN_0396ace4(&stack0x00001210,0);
        fVar49 = fVar49 + fVar59 * fVar65;
        in_stack_000000c0._4_4_ = iVar15;
        if (fVar49 <= fStack000000000000015c) {
          fStack000000000000015c = fVar49;
        }
      }
      if ((((uVar44 == 0xd) || ((uVar44 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar14)) ||
         (bVar8 || bVar11)) {
LAB_03987028:
        if (!bVar8) goto LAB_03987034;
      }
      else {
        if (uVar14 == uVar6) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar26 = FUN_02fdea78(uVar44,0);
          if ((uVar26 & 1) != 0) goto LAB_03987028;
        }
        lVar45 = *in_stack_000001e8;
        if (lVar45 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar45 + 0x18) <= uVar14) goto LAB_03988250;
        lVar45 = lVar45 + lVar46 * 0x188;
        fStack00000000000000d8 = *(float *)(lVar45 + 0x16c);
        fStack00000000000000d4 = *(float *)(lVar45 + 0x124);
        bVar8 = fVar59 != 0.0;
        uVar52 = *(undefined4 *)(lVar45 + 0x174);
        fVar49 = fStack00000000000000d8;
        if (bVar8) {
          fVar49 = fVar59;
        }
        fVar59 = fVar49;
        uStack00000000000000d0 = 0;
        fVar49 = fVar47;
        if (bVar8) {
          fVar49 = fStack0000000000000174;
        }
        fStack00000000000000cc = fStack000000000000015c;
        fStack0000000000000174 = fVar49;
      }
      if (*in_stack_000001d0 == 1) {
        lVar45 = *in_stack_000001e8;
        if (lVar45 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar45 + 0x18) <= uVar14) goto LAB_03988250;
        lVar45 = lVar45 + lVar46 * 0x188;
        uVar16 = *(undefined4 *)(lVar45 + 0x130);
        uVar61 = *(undefined4 *)(lVar45 + 0x16c);
LAB_039870dc:
        FUN_039916e4(fStack00000000000000d4,fStack00000000000000cc,uStack00000000000000d0,uVar16,
                     fStack000000000000015c,0,fStack00000000000000d8,uVar61);
      }
      else {
        if ((uVar14 == uVar5) || ((int)uVar6 <= (int)uVar14)) {
          lVar45 = *in_stack_000001e8;
          if (lVar45 != 0) {
            lVar35 = lVar46;
            uVar33 = uVar14;
            if (uVar44 == 0x200b || (bVar12 & 1) != 0) {
              lVar35 = lVar36;
              uVar33 = uVar6;
            }
            if (uVar33 < *(uint *)(lVar45 + 0x18)) {
              lVar45 = lVar45 + lVar35 * 0x188;
              uVar16 = *(undefined4 *)(lVar45 + 0x130);
              uVar61 = *(undefined4 *)(lVar45 + 0x16c);
              goto LAB_039870dc;
            }
            goto LAB_03988250;
          }
          goto thunk_FUN_01b48178;
        }
        if (bVar11) {
          lVar45 = *in_stack_000001e8;
          if (lVar45 != 0) {
            uVar33 = *(uint *)(lVar45 + 0x18);
            goto LAB_03986e78;
          }
          goto thunk_FUN_01b48178;
        }
        if ((int)(*in_stack_000001d0 - 1) <= (int)uVar14) {
LAB_03987844:
          bVar8 = true;
          goto LAB_03987118;
        }
        lVar45 = *in_stack_000001e8;
        if (lVar45 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar45 + 0x18) <= uVar39) goto LAB_03988250;
        uVar26 = FUN_0396d7b0(uVar52,*(undefined4 *)(lVar45 + _in_stack_000001a8),0);
        if ((uVar26 & 1) != 0) goto LAB_03987844;
        lVar45 = *in_stack_000001e8;
        if (lVar45 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar45 + 0x18) <= uVar14) goto LAB_03988250;
        lVar45 = lVar45 + lVar46 * 0x188;
        FUN_039916e4(fStack00000000000000d4,fStack00000000000000cc,uStack00000000000000d0,
                     *(undefined4 *)(lVar45 + 0x130),fStack000000000000015c,0,fStack00000000000000d8
                     ,*(undefined4 *)(lVar45 + 0x16c));
      }
      fVar59 = 0.0;
      bVar8 = false;
      fStack000000000000015c = DAT_00b555ec;
      fStack0000000000000174 = 0.0;
    }
LAB_03987118:
    lVar45 = *in_stack_000001e8;
    if (lVar45 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar45 + 0x18) <= uVar14) goto LAB_03988250;
    if (lVar22 == 0) goto thunk_FUN_01b48178;
    uVar33 = *(uint *)(lVar45 + lVar46 * 0x188 + 0x19c);
    FUN_0396d8d8(&stack0x000012a0,lVar22,0);
    memcpy(&stack0x00001210,&stack0x000012a0,0x60);
    fVar49 = (float)FUN_0396ad04(&stack0x00001210,0);
    if ((uVar33 >> 6 & 1) == 0) {
      if (bVar10) {
        lVar45 = *in_stack_000001e8;
        if (lVar45 != 0) {
          if (uVar39 - 2 < *(uint *)(lVar45 + 0x18)) {
            fVar53 = *(float *)(lVar45 + _in_stack_000001a8 + -0x334);
            uVar16 = *(undefined4 *)(lVar45 + _in_stack_000001a8 + -0x354);
            goto LAB_039878ac;
          }
          goto LAB_03988250;
        }
        goto thunk_FUN_01b48178;
      }
LAB_039872a0:
      bVar10 = false;
    }
    else {
      lVar45 = *in_stack_000001e8;
      if ((lVar45 == 0) || (lVar35 = *(long *)(unaff_x19 + 0x15b8), lVar35 == 0))
      goto thunk_FUN_01b48178;
      if ((*(uint *)(lVar35 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) ||
         (*(uint *)(lVar45 + 0x18) <= uVar14)) goto LAB_03988250;
      *(int *)(lVar45 + lVar46 * 0x188 + 0x180) =
           *(int *)(lVar35 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar14) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar2)) {
        bVar11 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar11 = *(int *)(lVar45 + lVar46 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar11 = false;
      }
      if ((((uVar44 == 0xd) || ((uVar44 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar14)) ||
         (!(bool)(~bVar10 & (bVar11 ^ 1U)))) {
LAB_03987298:
        if (!bVar10) goto LAB_039872a0;
      }
      else {
        if (uVar14 == uVar6) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar26 = FUN_02fdea78(uVar44,0);
          if ((uVar26 & 1) != 0) goto LAB_03987298;
          lVar45 = *in_stack_000001e8;
          if (lVar45 == 0) goto thunk_FUN_01b48178;
        }
        if (*(uint *)(lVar45 + 0x18) <= uVar14) goto LAB_03988250;
        lVar45 = lVar45 + lVar46 * 0x188;
        fStack00000000000000a8 = *(float *)(lVar45 + 0x68);
        fStack00000000000000a0 = *(float *)(lVar45 + 0x150);
        fStack00000000000000e8 = *(float *)(lVar45 + 0x124);
        in_stack_000000f0._4_4_ = *(float *)(lVar45 + 0x16c);
        fStack00000000000000e4 = fVar49 * in_stack_000000f0._4_4_ + fStack00000000000000a0;
        _bStack00000000000000e0 = 0;
      }
      uVar33 = *in_stack_000001d0;
      if (uVar33 == 1) {
LAB_039874a4:
        lVar35 = *in_stack_000001e8;
        if (lVar35 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar35 + 0x18) <= uVar14) goto LAB_03988250;
        lVar35 = lVar35 + lVar46 * 0x188;
      }
      else {
        lVar45 = lVar46;
        if (uVar14 == uVar5) {
          lVar35 = *in_stack_000001e8;
          if (lVar35 == 0) goto thunk_FUN_01b48178;
          uVar33 = uVar14;
          if ((uVar44 != 0x200b & (bVar12 ^ 1)) == 0) {
            lVar45 = lVar36;
            uVar33 = uVar6;
          }
          if (*(uint *)(lVar35 + 0x18) <= uVar33) goto LAB_03988250;
        }
        else {
          if ((int)uVar33 <= (int)uVar14) {
LAB_0398758c:
            if ((int)uVar14 < (int)uVar33) {
              iVar15 = FUN_03922ce0(lVar22,0);
              if (*(uint *)(lVar30 + 0x18) <= uVar39) goto LAB_03988250;
              lVar45 = *(long *)(lVar30 + _in_stack_000001a8 + -0x134);
              if (lVar45 == 0) goto thunk_FUN_01b48178;
              iVar18 = FUN_03922ce0(lVar45,0);
              if (iVar15 != iVar18) goto LAB_039874a4;
            }
            if (!bVar11) {
              bVar10 = true;
              goto LAB_039878e8;
            }
            lVar45 = *in_stack_000001e8;
            if (lVar45 != 0) {
              if (uVar39 - 2 < *(uint *)(lVar45 + 0x18)) {
                fVar53 = *(float *)(lVar45 + _in_stack_000001a8 + -0x334);
                uVar16 = *(undefined4 *)(lVar45 + _in_stack_000001a8 + -0x354);
                goto LAB_039878ac;
              }
              goto LAB_03988250;
            }
            goto thunk_FUN_01b48178;
          }
          lVar35 = *in_stack_000001e8;
          if (lVar35 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar35 + 0x18) <= uVar39) goto LAB_03988250;
          if (*(float *)(lVar35 + _in_stack_000001a8 + -0x10c) == fStack00000000000000a8) {
            fVar65 = *(float *)(lVar35 + _in_stack_000001a8 + -0x24);
            if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar26 = FUN_03996934(fVar53 + fVar65,fStack00000000000000a0,0);
            if ((uVar26 & 1) != 0) {
              uVar33 = *in_stack_000001d0;
              goto LAB_0398758c;
            }
            lVar35 = *in_stack_000001e8;
            if (lVar35 == 0) goto thunk_FUN_01b48178;
          }
          uVar33 = uVar14;
          if ((int)uVar6 < (int)uVar14) {
            lVar45 = lVar36;
            uVar33 = uVar6;
          }
          if (*(uint *)(lVar35 + 0x18) <= uVar33) goto LAB_03988250;
        }
        lVar35 = lVar35 + lVar45 * 0x188;
      }
      fVar53 = *(float *)(lVar35 + 0x150);
      uVar16 = *(undefined4 *)(lVar35 + 0x130);
LAB_039878ac:
      FUN_039916e4(fStack00000000000000e8,fStack00000000000000e4,_bStack00000000000000e0,uVar16,
                   in_stack_000000f0._4_4_ * fVar49 + fVar53,0,in_stack_000000f0._4_4_,
                   in_stack_000000f0._4_4_);
      bVar10 = false;
    }
LAB_039878e8:
    lVar45 = *in_stack_000001e8;
    if (lVar45 == 0) goto thunk_FUN_01b48178;
    uVar33 = (uint)*(undefined8 *)(lVar45 + 0x18);
    if (uVar33 <= uVar14) goto LAB_03988250;
    if ((*(byte *)(lVar45 + lVar46 * 0x188 + 0x19d) >> 1 & 1) == 0) {
      if (bVar9) {
        FUN_03992548(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
      }
UnityEngine_UIElements_PanelSettings_RuntimePanelAccess__SetSortingPriority:
      bVar9 = false;
    }
    else {
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar14) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar2)) {
        bVar11 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar11 = *(int *)(lVar45 + lVar46 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar11 = false;
      }
      if (!bVar9) {
        if (((uVar44 == 0xd) || ((uVar44 & 0xfffe) == 10)) ||
           (((int)uVar6 < (int)uVar14 || (bVar11))))
        goto UnityEngine_UIElements_PanelSettings_RuntimePanelAccess__SetSortingPriority;
        if (uVar14 == uVar6) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar26 = FUN_02fdea78(uVar44,0);
          if ((uVar26 & 1) != 0)
          goto UnityEngine_UIElements_PanelSettings_RuntimePanelAccess__SetSortingPriority;
        }
        puVar7 = PTR_DAT_03dad2f8;
        lVar22 = *(long *)PTR_DAT_03dad2f8;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar22 = *(long *)puVar7;
        }
        lVar45 = *in_stack_000001e8;
        if (lVar45 == 0) goto thunk_FUN_01b48178;
        uVar33 = (uint)*(undefined8 *)(lVar45 + 0x18);
        if (uVar33 <= uVar14) goto LAB_03988250;
        pfVar38 = *(float **)(lVar22 + 0xb8);
        fStack0000000000000128 = *pfVar38;
        in_stack_00000140._4_4_ = pfVar38[1];
        fStack000000000000012c = pfVar38[2];
        fStack0000000000000130 = pfVar38[3];
        uStack0000000000000124 = 0;
      }
      if (uVar33 <= uVar14) goto LAB_03988250;
      lVar45 = lVar45 + lVar46 * 0x188;
      fVar65 = *(float *)(lVar45 + 0x130);
      fVar51 = *(float *)(lVar45 + 0x124);
      fVar53 = *(float *)(lVar45 + 0x148);
      fVar48 = *(float *)(lVar45 + 0x14c);
      fVar50 = *(float *)(lVar45 + 0x154);
      fVar49 = *(float *)(lVar45 + 0x164);
      uVar26 = FUN_03996800(&stack0x00000210,&stack0x000001f0,0);
      lVar45 = *(long *)PTR_DAT_03dad2e8;
      if ((uVar26 & 1) == 0) {
        if (*(int *)(lVar45 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar45);
        }
        fVar66 = (float)FUN_0399650c(uVar24,0);
        bVar9 = (bVar12 & 1) == 0;
        if (bVar9) {
          fVar53 = fVar51;
        }
        if (bVar9) {
          fVar49 = fVar65;
        }
        if (fVar53 - fVar66 <= fStack0000000000000128) {
          fStack0000000000000128 = fVar53 - fVar66;
        }
        fVar53 = (float)FUN_03996514(uVar24,0);
        if (fStack000000000000012c <= fVar49 + fVar53) {
          fStack000000000000012c = fVar49 + fVar53;
        }
        if (*(int *)(*(long *)PTR_DAT_03dad2e8 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        fVar53 = (float)FUN_03996524(uVar24,0);
        if (fVar50 - fVar53 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar50 - fVar53;
        }
        fVar53 = (float)FUN_0399651c(uVar24,0);
        if (fStack0000000000000130 <= fVar48 + fVar53) {
          fStack0000000000000130 = fVar48 + fVar53;
        }
      }
      else {
        if (*(int *)(lVar45 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar45);
        }
        fVar66 = (float)FUN_03996514(uVar24,0);
        if ((bVar12 & 1) == 0) {
          fVar53 = fVar51;
        }
        if (fVar50 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar50;
        }
        fVar53 = (fVar53 + (fStack000000000000012c - fVar66)) * 0.5;
        if (fStack0000000000000130 <= fVar48) {
          fStack0000000000000130 = fVar48;
        }
        FUN_03992548(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,fVar53,
                     fStack0000000000000130,uStack0000000000000124);
        puVar7 = PTR_DAT_03dad2e8;
        if (*(int *)(*(long *)PTR_DAT_03dad2e8 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        in_stack_00000140._4_4_ = (float)FUN_03996524(uVar21,0);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        in_stack_00000140._4_4_ = fVar50 - in_stack_00000140._4_4_;
        fStack000000000000012c = (float)FUN_03996514(uVar21,0);
        fVar50 = (float)FUN_0399651c(uVar21,0);
        if ((bVar12 & 1) == 0) {
          fVar49 = fVar65;
        }
        fStack000000000000012c = fVar49 + fStack000000000000012c;
        uStack0000000000000124 = 0;
        fStack0000000000000128 = fVar53;
        fStack0000000000000130 = fVar48 + fVar50;
      }
      if ((((*in_stack_000001d0 == 1) || (uVar14 == uVar5)) || ((int)uVar6 <= (int)uVar14)) ||
         (bVar11)) {
        FUN_03992548(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
    }
    uVar14 = *in_stack_000001d0;
    in_stack_00000178 = (float)((int)in_stack_00000178 + 1);
    _in_stack_000001a8 = _in_stack_000001a8 + 0x188;
    bVar11 = (int)uVar39 < (int)uVar14;
    uVar33 = uVar2;
    uVar39 = uVar39 + 1;
  } while (bVar11);
  iVar15 = uVar2 + 1;
  plVar23 = (long *)PTR_DAT_03dace98;
LAB_0398800c:
  *(uint *)(in_stack_000001c0 + 0x10) = uVar14;
  uVar52 = *(undefined4 *)(unaff_x19 + 0x15c0);
  *(int *)(in_stack_000001c0 + 0x24) = iVar15;
  if ((int)uVar14 < 1 || iStack0000000000000138 == 0) {
    iStack0000000000000138 = 1;
  }
  *(int *)(in_stack_000001c0 + 0x1c) = iStack0000000000000138;
  *(undefined4 *)(in_stack_000001c0 + 0x14) = uVar52;
  *(int *)(in_stack_000001c0 + 0x28) = *(int *)(unaff_x19 + 0x350) + 1;
  if (1 < *(int *)(in_stack_000001c0 + 0x2c)) {
    uVar21 = 1;
    lVar30 = 0x78;
    do {
      lVar45 = *(long *)(in_stack_000001c0 + 0x58);
      if (lVar45 == 0) {
thunk_FUN_01b48178:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(int *)(*plVar23 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (*(uint *)(lVar45 + 0x18) <= uVar21) goto LAB_03988250;
      FUN_0397a3a4(lVar45 + lVar30,0);
      if (*(int *)(in_stack_000001e0 + 0x100) != 0) {
        lVar45 = *(long *)(in_stack_000001c0 + 0x58);
        if (lVar45 == 0) goto thunk_FUN_01b48178;
        if (*(int *)(*plVar23 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (*(uint *)(lVar45 + 0x18) <= uVar21) {
LAB_03988250:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        FUN_0397a3e0(lVar45 + lVar30,1,0);
      }
      uVar21 = uVar21 + 1;
      lVar30 = lVar30 + 0x58;
    } while ((long)uVar21 < (long)*(int *)(in_stack_000001c0 + 0x2c));
  }
LAB_03980e58:
  if (*(long *)(in_stack_00000110 + 0x28) == in_stack_00001638) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


