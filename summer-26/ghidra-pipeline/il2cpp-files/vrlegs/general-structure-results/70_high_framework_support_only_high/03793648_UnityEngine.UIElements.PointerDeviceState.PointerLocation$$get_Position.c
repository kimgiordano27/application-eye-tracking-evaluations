/*
FUNCTION_NAME: UnityEngine.UIElements.PointerDeviceState.PointerLocation$$get_Position
ENTRY_POINT: 03793648
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_UIElements_PointerDeviceState_PointerLocation__get_Position(float param_1)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  char cVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  float *pfVar19;
  long lVar20;
  long unaff_x19;
  ulong uVar21;
  char cVar22;
  uint unaff_w20;
  long lVar23;
  long lVar24;
  uint uVar25;
  long *unaff_x23;
  uint uVar26;
  uint unaff_w25;
  uint unaff_w26;
  long lVar27;
  long unaff_x27;
  uint unaff_w28;
  long unaff_x29;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  float unaff_s8;
  float fVar36;
  float fVar37;
  float unaff_s10;
  float unaff_s11;
  float fVar38;
  float unaff_s12;
  float fVar39;
  float fVar40;
  float unaff_s15;
  undefined8 in_stack_00000058;
  uint in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  undefined8 in_stack_000000b8;
  int in_stack_000000c0;
  float fStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 in_stack_000000d0;
  float fStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  float in_stack_000000e0;
  undefined8 in_stack_000000e8;
  float in_stack_000000f0;
  long *in_stack_000000f8;
  undefined4 in_stack_00000100;
  long in_stack_00000110;
  undefined8 in_stack_00000118;
  float in_stack_00000120;
  undefined4 uStack0000000000000124;
  float in_stack_00000128;
  float fStack000000000000012c;
  float fStack0000000000000130;
  int in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  long in_stack_00000150;
  float fStack0000000000000158;
  float fStack000000000000015c;
  uint uStack0000000000000168;
  uint uStack000000000000016c;
  uint uStack0000000000000170;
  float fStack0000000000000174;
  uint uStack0000000000000178;
  uint uStack000000000000017c;
  byte bStack0000000000000180;
  uint uStack0000000000000184;
  long in_stack_000001a8;
  long in_stack_000001b0;
  long in_stack_000001c0;
  long in_stack_000001c8;
  int *in_stack_000001d0;
  undefined8 in_stack_000001d8;
  long in_stack_000001e0;
  long *in_stack_000001e8;
  long in_stack_00001a38;
  
code_r0x03793648:
  if ((uStack000000000000017c & 1) == 0) {
    unaff_s11 = in_stack_000001d8._4_4_;
  }
  fStack000000000000012c = unaff_s11 + unaff_s10;
  uStack0000000000000124 = 0;
  fStack0000000000000130 = unaff_s8 + param_1;
LAB_03793744:
  uVar13 = unaff_w25;
  if ((((*in_stack_000001d0 == 1) || (unaff_w28 == (uint)in_stack_00000150)) ||
      ((int)in_stack_000001b0 <= (int)unaff_w28)) || (unaff_w20 != 0)) {
    FUN_0379dd0c(in_stack_00000128,in_stack_00000140._4_4_,uStack0000000000000124,
                 fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
    bVar10 = false;
    unaff_w28 = unaff_w26;
  }
  else {
    bVar10 = true;
    unaff_w28 = unaff_w26;
  }
  do {
    puVar7 = Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
    iVar11 = *in_stack_000001d0;
    uVar1 = uStack0000000000000178 + 1;
    unaff_w26 = unaff_w28 + 1;
    in_stack_000001a8 = in_stack_000001a8 + 0x188;
    if (iVar11 <= (int)unaff_w28) {
      *(int *)(unaff_x27 + 0x10) = iVar11;
      uVar31 = *(undefined4 *)(unaff_x19 + 0x15c0);
      *(uint *)(unaff_x27 + 0x24) = uVar13 + 1;
      if (iVar11 < 1 || in_stack_00000138 == 0) {
        in_stack_00000138 = 1;
      }
      *(int *)(unaff_x27 + 0x1c) = in_stack_00000138;
      *(undefined4 *)(unaff_x27 + 0x14) = uVar31;
      *(int *)(unaff_x27 + 0x28) = *(int *)(unaff_x19 + 0x350) + 1;
      if (*(int *)(unaff_x27 + 0x2c) < 2) goto LAB_0378c81c;
      uVar21 = 1;
      lVar23 = 0x70;
      break;
    }
    if (*(uint *)(in_stack_000001c8 + 0x18) <= unaff_w28) goto thunk_FUN_01ab6c44;
    lVar27 = (long)(int)unaff_w28;
    lVar23 = in_stack_000001c8 + lVar27 * unaff_x29;
    lVar24 = *(long *)(lVar23 + 0x40);
    uVar3 = *(ushort *)(lVar23 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uStack000000000000017c = FUN_026b63d8(uVar3,0);
    if (*(uint *)(in_stack_000001c8 + 0x18) <= unaff_w28) goto thunk_FUN_01ab6c44;
    lVar23 = *(long *)(unaff_x27 + 0x48);
    uVar26 = (uint)uVar3;
    if (lVar23 == 0) goto LAB_03793c9c;
    unaff_w25 = *(uint *)(in_stack_000001c8 + lVar27 * unaff_x29 + 0x6c);
    if (*(uint *)(lVar23 + 0x18) <= unaff_w25) goto thunk_FUN_01ab6c44;
    lVar17 = (long)(int)unaff_w25;
    lVar23 = lVar23 + lVar17 * 0x60;
    uVar5 = *(uint *)(lVar23 + 0x40);
    in_stack_00000150 = (long)(int)uVar5;
    uVar25 = *(uint *)(lVar23 + 0x6c);
    iVar2 = *(int *)(lVar23 + 0x20);
    iVar11 = *(int *)(lVar23 + 0x28);
    iVar12 = *(int *)(lVar23 + 0x2c);
    uVar6 = *(uint *)(lVar23 + 0x44);
    in_stack_000001b0 = (long)(int)uVar6;
    fVar30 = *(float *)(lVar23 + 0x50);
    fVar32 = *(float *)(lVar23 + 0x58);
    fVar39 = *(float *)(lVar23 + 0x5c);
    fVar35 = *(float *)(lVar23 + 0x60);
    fVar37 = *(float *)(lVar23 + 100);
    fVar36 = *(float *)(lVar23 + 0x70);
    fVar38 = *(float *)(lVar23 + 0x74);
    fVar40 = *(float *)(lVar23 + 0x78);
    fVar33 = *(float *)(lVar23 + 0x7c);
    if ((int)uVar25 < 0x421) {
      if ((int)uVar25 < 0x209) {
        if ((int)uVar25 < 0x111) {
          switch(uVar25) {
          case 0x101:
            goto switchD_03791aa4_caseD_1001;
          case 0x102:
            goto switchD_03791aa4_caseD_1002;
          case 0x103:
          case 0x105:
          case 0x106:
          case 0x107:
            break;
          case 0x104:
            goto switchD_03791aa4_caseD_1004;
          case 0x108:
            goto switchD_03791aa4_caseD_1008;
          default:
            if (uVar25 == 0x110) goto switchD_03791aa4_caseD_1008;
          }
        }
        else {
          switch(uVar25) {
          case 0x201:
            goto switchD_03791aa4_caseD_1001;
          case 0x202:
            goto switchD_03791aa4_caseD_1002;
          case 0x203:
          case 0x205:
          case 0x206:
          case 0x207:
            break;
          case 0x204:
            goto switchD_03791aa4_caseD_1004;
          case 0x208:
            goto switchD_03791aa4_caseD_1008;
          default:
            if (uVar25 == 0x120) goto LAB_03791c08;
          }
        }
      }
      else if ((int)uVar25 < 0x405) {
        if ((int)uVar25 < 0x401) {
          if (uVar25 == 0x210) goto switchD_03791aa4_caseD_1008;
          if (uVar25 == 0x220) goto LAB_03791c08;
        }
        else {
          if (uVar25 == 0x401) goto switchD_03791aa4_caseD_1001;
          if (uVar25 == 0x402) goto switchD_03791aa4_caseD_1002;
          if (uVar25 == 0x404) goto switchD_03791aa4_caseD_1004;
        }
      }
      else {
        if ((uVar25 == 0x408) || (uVar25 == 0x410)) goto switchD_03791aa4_caseD_1008;
        if (uVar25 == 0x420) goto LAB_03791c08;
      }
      goto switchD_03791aa4_caseD_1003;
    }
    if (0x1008 < (int)uVar25) {
      if ((int)uVar25 < 0x2005) {
        if (0x2000 < (int)uVar25) {
          if (uVar25 == 0x2001) goto switchD_03791aa4_caseD_1001;
          if (uVar25 == 0x2002) goto switchD_03791aa4_caseD_1002;
          if (uVar25 == 0x2004) goto switchD_03791aa4_caseD_1004;
          goto switchD_03791aa4_caseD_1003;
        }
        if (uVar25 != 0x1010) {
          uVar15 = 0x1020;
          goto LAB_03791bc8;
        }
      }
      else if ((uVar25 != 0x2008) && (uVar25 != 0x2010)) {
        uVar15 = 0x2020;
LAB_03791bc8:
        if (uVar25 != uVar15) goto switchD_03791aa4_caseD_1003;
LAB_03791c08:
        fVar39 = fVar36 + fVar40;
        goto LAB_03791c1c;
      }
      goto switchD_03791aa4_caseD_1008;
    }
    if ((int)uVar25 < 0x811) {
      switch(uVar25) {
      case 0x801:
        goto switchD_03791aa4_caseD_1001;
      case 0x802:
        goto switchD_03791aa4_caseD_1002;
      case 0x803:
      case 0x805:
      case 0x806:
      case 0x807:
        break;
      case 0x804:
        goto switchD_03791aa4_caseD_1004;
      case 0x808:
switchD_03791aa4_caseD_1008:
        if ((int)unaff_w28 <= (int)uVar6) {
          if (uVar26 < 0xad) {
            if ((uVar26 != 3) && (uVar26 != 10)) goto FUN_03791eb4;
          }
          else if ((uVar26 != 0xad) && ((uVar26 != 0x200b && (uVar26 != 0x2060)))) {
FUN_03791eb4:
            if (*(uint *)(in_stack_000001c8 + 0x18) <= uVar5) goto thunk_FUN_01ab6c44;
            uVar4 = *(undefined2 *)(in_stack_000001c8 + in_stack_00000150 * unaff_x29 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              unaff_x23 = (long *)PTR_DAT_03cbded8;
            }
            uVar21 = FUN_026b8cc4(uVar4,0);
            if ((uVar21 & 1) == 0) {
              bVar9 = (int)unaff_w25 < *(int *)(unaff_x19 + 0x340);
            }
            else {
              bVar9 = false;
            }
            if ((fVar39 <= fVar35) && (!bVar9 && (uVar25 >> 4 & 1) == 0)) {
              fStack0000000000000158 = fVar37;
              if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
                fStack0000000000000158 = fVar35 + fVar37;
              }
              goto LAB_03791c20;
            }
            if ((unaff_w26 == 1) || (unaff_w25 != uVar13)) {
              cVar14 = *(char *)(in_stack_000001e0 + 0xb6);
            }
            else {
              cVar14 = *(char *)(in_stack_000001e0 + 0xb6);
              if (unaff_w28 != *(uint *)(in_stack_000001e0 + 0xe4)) {
                iVar12 = (iVar12 - iVar2) - (in_stack_00000090 & 1);
                fVar37 = -fVar39;
                if (cVar14 != '\0') {
                  fVar37 = fVar39;
                }
                if (iVar12 < 1) {
                  fVar39 = 1.0;
                }
                else {
                  fVar39 = *(float *)(in_stack_000001e0 + 0x7c);
                }
                if (iVar12 < 2) {
                  iVar12 = 1;
                }
                fVar35 = fVar35 + fVar37;
                if (uVar26 == 9) {
LAB_037939d0:
                  if (cVar14 != '\0') {
                    fVar35 = fVar35 * (1.0 - fVar39);
                    fVar37 = (float)iVar12;
LAB_03793a0c:
                    fStack0000000000000158 = fStack0000000000000158 - fVar35 / fVar37;
                    break;
                  }
                  fVar37 = (float)iVar12;
                  fVar35 = fVar35 * (1.0 - fVar39);
                }
                else {
                  if (uVar26 != 0xa0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar21 = FUN_026b97f8(uVar26,0);
                    cVar14 = *(char *)(in_stack_000001e0 + 0xb6);
                    if ((uVar21 & 1) != 0) goto LAB_037939d0;
                  }
                  fVar35 = fVar35 * fVar39;
                  fVar37 = (float)(int)((iVar2 - (~in_stack_00000090 & 1)) + iVar11);
                  if (cVar14 != '\0') goto LAB_03793a0c;
                }
                fStack0000000000000158 = fStack0000000000000158 + fVar35 / fVar37;
                in_stack_00000148 =
                     CONCAT44((float)((ulong)in_stack_00000148 >> 0x20) + 0.0,
                              (float)in_stack_00000148 + 0.0);
                break;
              }
            }
            fStack0000000000000158 = fVar37;
            if (cVar14 != '\0') {
              fStack0000000000000158 = fVar35 + fVar37;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            in_stack_00000090 = FUN_026b97f8(uVar26,0);
            in_stack_00000148 = 0;
          }
        }
        break;
      default:
        if (uVar25 == 0x810) goto switchD_03791aa4_caseD_1008;
      }
    }
    else {
      switch(uVar25) {
      case 0x1001:
switchD_03791aa4_caseD_1001:
        if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
          fStack0000000000000158 = fVar37 + 0.0;
        }
        else {
          fStack0000000000000158 = 0.0 - fVar39;
        }
        break;
      case 0x1002:
switchD_03791aa4_caseD_1002:
LAB_03791c1c:
        fStack0000000000000158 = (fVar37 + fVar35 * 0.5) - fVar39 * 0.5;
        break;
      case 0x1003:
      case 0x1005:
      case 0x1006:
      case 0x1007:
        goto switchD_03791aa4_caseD_1003;
      case 0x1004:
switchD_03791aa4_caseD_1004:
        fStack0000000000000158 = (fVar35 + fVar37) - fVar39;
        if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
          fStack0000000000000158 = fVar35 + fVar37;
        }
        break;
      case 0x1008:
        goto switchD_03791aa4_caseD_1008;
      default:
        if (uVar25 == 0x820) goto LAB_03791c08;
        goto switchD_03791aa4_caseD_1003;
      }
LAB_03791c20:
      in_stack_00000148 = 0;
    }
switchD_03791aa4_caseD_1003:
    uVar25 = (uint)*(undefined8 *)(in_stack_000001c8 + 0x18);
    if (uVar25 <= unaff_w28) goto thunk_FUN_01ab6c44;
    lVar23 = in_stack_000001c8 + lVar27 * unaff_x29;
    fVar37 = in_stack_00000120 + fStack0000000000000158;
    fVar39 = (float)in_stack_00000118 + (float)in_stack_00000148;
    fVar35 = (float)((ulong)in_stack_00000118 >> 0x20) + (float)((ulong)in_stack_00000148 >> 0x20);
    if (*(char *)(lVar23 + 0x1a0) == '\0') goto LAB_037924bc;
    cVar14 = *(char *)(in_stack_000001c8 + lVar27 * unaff_x29 + 0x28);
    if (cVar14 != '\x01') goto LAB_0379225c;
    fVar28 = fmodf(*(float *)(in_stack_000001e0 + 0xfc) * (float)(int)unaff_w25,1.0);
    unaff_x23 = (long *)PTR_DAT_03cbded8;
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf4)) {
    case 0:
      fVar28 = 1.0;
      lVar16 = in_stack_000001c8 + lVar27 * unaff_x29;
      *(undefined4 *)(lVar16 + 0xbc) = 0;
      *(undefined4 *)(lVar16 + 0x94) = 0;
      *(undefined4 *)(lVar16 + 0xe4) = 0x3f800000;
      break;
    case 1:
      fVar33 = *(float *)(in_stack_000001c8 + lVar27 * unaff_x29 + 0xa0);
      if (*(int *)(in_stack_000001e0 + 0x70) == 0x208) {
        lVar16 = in_stack_000001c8 + lVar27 * unaff_x29;
        fVar40 = (fStack0000000000000158 + fVar33) - *(float *)(unaff_x19 + 0x360);
        fVar33 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
        goto LAB_03791dcc;
      }
      lVar16 = in_stack_000001c8 + lVar27 * unaff_x29;
      fVar40 = fVar40 - fVar36;
      *(float *)(lVar16 + 0xbc) = fVar28 + (fVar33 - fVar36) / fVar40;
      *(float *)(lVar16 + 0x94) = fVar28 + (*(float *)(lVar16 + 0x78) - fVar36) / fVar40;
      *(float *)(lVar16 + 0xe4) = fVar28 + (*(float *)(lVar16 + 200) - fVar36) / fVar40;
      fVar28 = fVar28 + (*(float *)(lVar16 + 0xf0) - fVar36) / fVar40;
      break;
    case 2:
      lVar16 = in_stack_000001c8 + lVar27 * unaff_x29;
      fVar33 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
      fVar40 = (fStack0000000000000158 + *(float *)(lVar16 + 0xa0)) - *(float *)(unaff_x19 + 0x360);
LAB_03791dcc:
      *(float *)(lVar16 + 0xbc) = fVar28 + fVar40 / fVar33;
      *(float *)(lVar16 + 0x94) =
           fVar28 + ((fStack0000000000000158 + *(float *)(lVar16 + 0x78)) -
                    *(float *)(unaff_x19 + 0x360)) /
                    (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      *(float *)(lVar16 + 0xe4) =
           fVar28 + ((fStack0000000000000158 + *(float *)(lVar16 + 200)) -
                    *(float *)(unaff_x19 + 0x360)) /
                    (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      fVar28 = fVar28 + ((fStack0000000000000158 + *(float *)(lVar16 + 0xf0)) -
                        *(float *)(unaff_x19 + 0x360)) /
                        (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      break;
    case 3:
      switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
      case 0:
        lVar16 = in_stack_000001c8 + lVar27 * unaff_x29;
        *(undefined4 *)(lVar16 + 0xc0) = 0;
        *(undefined4 *)(lVar16 + 0x98) = 0x3f800000;
        *(undefined4 *)(lVar16 + 0xe8) = 0;
        *(undefined4 *)(lVar16 + 0x110) = 0x3f800000;
        break;
      case 1:
        fVar33 = fVar33 - fVar38;
        lVar16 = in_stack_000001c8 + lVar27 * unaff_x29;
        fVar40 = fVar28 + (*(float *)(lVar16 + 0xa4) - fVar38) / fVar33;
        fVar33 = fVar28 + (*(float *)(lVar16 + 0x7c) - fVar38) / fVar33;
        *(float *)(lVar16 + 0xc0) = fVar40;
        *(float *)(lVar16 + 0x98) = fVar33;
        *(float *)(lVar16 + 0xe8) = fVar40;
        *(float *)(lVar16 + 0x110) = fVar33;
        break;
      case 2:
        lVar16 = in_stack_000001c8 + lVar27 * unaff_x29;
        fVar40 = fVar28 + (*(float *)(lVar16 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
                          (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
        *(float *)(lVar16 + 0xc0) = fVar40;
        fVar33 = *(float *)(unaff_x19 + 0x364);
        fVar36 = *(float *)(unaff_x19 + 0x36c);
        *(float *)(lVar16 + 0xe8) = fVar40;
        fVar40 = fVar28 + (*(float *)(lVar16 + 0x7c) - fVar33) / (fVar36 - fVar33);
        *(float *)(lVar16 + 0x98) = fVar40;
        *(float *)(lVar16 + 0x110) = fVar40;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar25 = (uint)*(undefined8 *)(in_stack_000001c8 + 0x18);
      }
      if (uVar25 <= unaff_w28) goto thunk_FUN_01ab6c44;
      lVar16 = in_stack_000001c8 + lVar27 * unaff_x29;
      fVar40 = *(float *)(lVar16 + 0x168);
      fVar33 = (1.0 - (*(float *)(lVar16 + 0xc0) + *(float *)(lVar16 + 0x98)) * fVar40) * 0.5;
      fVar36 = fVar28 + *(float *)(lVar16 + 0xc0) * fVar40 + fVar33;
      fVar28 = fVar28 + *(float *)(lVar16 + 0x98) * fVar40 + fVar33;
      *(float *)(lVar16 + 0xbc) = fVar36;
      *(float *)(lVar16 + 0x94) = fVar36;
      *(float *)(lVar16 + 0xe4) = fVar28;
      break;
    default:
      goto switchD_03791d04_default;
    }
    *(float *)(in_stack_000001c8 + lVar27 * unaff_x29 + 0x10c) = fVar28;
switchD_03791d04_default:
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
    case 0:
      if (uVar25 <= unaff_w28) goto thunk_FUN_01ab6c44;
      lVar16 = in_stack_000001c8 + lVar27 * unaff_x29;
      *(undefined4 *)(lVar16 + 0xc0) = 0;
      *(undefined4 *)(lVar16 + 0x98) = 0x3f800000;
      *(undefined4 *)(lVar16 + 0xe8) = 0x3f800000;
      *(undefined4 *)(lVar16 + 0x110) = 0;
      break;
    case 1:
      if (unaff_w28 < uVar25) {
        fVar30 = fVar30 - fVar32;
        lVar16 = in_stack_000001c8 + lVar27 * unaff_x29;
        fVar40 = (*(float *)(lVar16 + 0xa4) - fVar32) / fVar30;
        fVar30 = (*(float *)(lVar16 + 0x7c) - fVar32) / fVar30;
        *(float *)(lVar16 + 0xc0) = fVar40;
        goto LAB_0379217c;
      }
      goto thunk_FUN_01ab6c44;
    case 2:
      if (uVar25 <= unaff_w28) goto thunk_FUN_01ab6c44;
      lVar16 = in_stack_000001c8 + lVar27 * unaff_x29;
      fVar40 = (*(float *)(lVar16 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
      *(float *)(lVar16 + 0xc0) = fVar40;
      fVar30 = (*(float *)(lVar16 + 0x7c) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
LAB_0379217c:
      *(float *)(lVar16 + 0x98) = fVar30;
      *(float *)(lVar16 + 0xe8) = fVar30;
      *(float *)(lVar16 + 0x110) = fVar40;
      break;
    case 3:
      if (uVar25 <= unaff_w28) goto thunk_FUN_01ab6c44;
      lVar16 = in_stack_000001c8 + lVar27 * unaff_x29;
      fVar33 = *(float *)(lVar16 + 0x168);
      fVar30 = (1.0 - (*(float *)(lVar16 + 0xbc) + *(float *)(lVar16 + 0xe4)) / fVar33) * 0.5;
      fVar40 = *(float *)(lVar16 + 0xbc) / fVar33 + fVar30;
      fVar30 = *(float *)(lVar16 + 0xe4) / fVar33 + fVar30;
      *(float *)(lVar16 + 0xc0) = fVar40;
      *(float *)(lVar16 + 0x98) = fVar30;
      *(float *)(lVar16 + 0x110) = fVar40;
      *(float *)(lVar16 + 0xe8) = fVar30;
    }
    if (uVar25 <= unaff_w28) goto thunk_FUN_01ab6c44;
    lVar16 = in_stack_000001c8 + lVar27 * unaff_x29;
    unaff_s12 = *(float *)(lVar16 + 0x16c) * (1.0 - *(float *)(unaff_x19 + 0x1594));
    if ((*(char *)(lVar16 + 100) == '\0') &&
       ((*(byte *)(in_stack_000001c8 + lVar27 * unaff_x29 + 0x19c) & 1) != 0)) {
      unaff_s12 = -unaff_s12;
    }
    lVar16 = in_stack_000001c8 + lVar27 * unaff_x29;
    *(float *)(lVar16 + 0xb8) = unaff_s12;
    *(float *)(lVar16 + 0x90) = unaff_s12;
    *(float *)(lVar16 + 0xe0) = unaff_s12;
    *(float *)(lVar16 + 0x108) = unaff_s12;
    *(undefined4 *)(lVar16 + 0xbc) = 0x3f800000;
    *(float *)(lVar16 + 0xc0) = unaff_s12;
    *(undefined4 *)(lVar16 + 0x94) = 0x3f800000;
    *(float *)(lVar16 + 0x98) = unaff_s12;
    *(undefined4 *)(lVar16 + 0xe4) = 0x3f800000;
    *(float *)(lVar16 + 0xe8) = unaff_s12;
    *(undefined4 *)(lVar16 + 0x10c) = 0x3f800000;
    *(float *)(lVar16 + 0x110) = unaff_s12;
LAB_0379225c:
    if (((int)unaff_w28 < *(int *)(in_stack_000001e0 + 0xd8)) &&
       (in_stack_00000138 < *(int *)(in_stack_000001e0 + 0xdc))) {
      if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)unaff_w25) ||
         (*(int *)(in_stack_000001e0 + 0x74) == 5)) {
        if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)unaff_w25) ||
           (*(int *)(in_stack_000001e0 + 0x74) != 5)) goto LAB_037922d4;
        if (unaff_w28 < uVar25) {
          bVar9 = *(int *)(in_stack_000001c8 + lVar27 * unaff_x29 + 0x70) == in_stack_00000058._4_4_
          ;
          goto LAB_037922d8;
        }
        goto thunk_FUN_01ab6c44;
      }
      if (uVar25 <= unaff_w28) goto thunk_FUN_01ab6c44;
LAB_037922e4:
      lVar23 = in_stack_000001c8 + lVar27 * unaff_x29;
      *(ulong *)(lVar23 + 0xa0) =
           CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar23 + 0xa0) >> 0x20),
                    fVar37 + (float)*(undefined8 *)(lVar23 + 0xa0));
      *(float *)(lVar23 + 0xa8) = fVar35 + *(float *)(lVar23 + 0xa8);
      *(ulong *)(lVar23 + 0x78) =
           CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar23 + 0x78) >> 0x20),
                    fVar37 + (float)*(undefined8 *)(lVar23 + 0x78));
      *(float *)(lVar23 + 0x80) = fVar35 + *(float *)(lVar23 + 0x80);
      *(ulong *)(lVar23 + 200) =
           CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar23 + 200) >> 0x20),
                    fVar37 + (float)*(undefined8 *)(lVar23 + 200));
      *(float *)(lVar23 + 0xd0) = fVar35 + *(float *)(lVar23 + 0xd0);
      *(ulong *)(lVar23 + 0xf0) =
           CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar23 + 0xf0) >> 0x20),
                    fVar37 + (float)*(undefined8 *)(lVar23 + 0xf0));
      *(float *)(lVar23 + 0xf8) = fVar35 + *(float *)(lVar23 + 0xf8);
    }
    else {
LAB_037922d4:
      bVar9 = false;
LAB_037922d8:
      if (uVar25 <= unaff_w28) goto thunk_FUN_01ab6c44;
      if (bVar9) goto LAB_037922e4;
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(unaff_x23);
        DAT_0411f172 = '\x01';
        uVar25 = *(uint *)(in_stack_000001c8 + 0x18);
      }
      uVar31 = *(undefined4 *)(*(undefined8 **)(*unaff_x23 + 0xb8) + 1);
      lVar16 = in_stack_000001c8 + lVar27 * unaff_x29;
      *(undefined8 *)(lVar16 + 0xa0) = **(undefined8 **)(*unaff_x23 + 0xb8);
      *(undefined4 *)(lVar16 + 0xa8) = uVar31;
      if (uVar25 <= unaff_w28) goto thunk_FUN_01ab6c44;
      uVar31 = *(undefined4 *)(*(undefined8 **)(*unaff_x23 + 0xb8) + 1);
      lVar16 = in_stack_000001c8 + lVar27 * unaff_x29;
      *(undefined8 *)(lVar16 + 0x78) = **(undefined8 **)(*unaff_x23 + 0xb8);
      *(undefined4 *)(lVar16 + 0x80) = uVar31;
      uVar31 = *(undefined4 *)(*(undefined8 **)(*unaff_x23 + 0xb8) + 1);
      *(undefined8 *)(lVar16 + 200) = **(undefined8 **)(*unaff_x23 + 0xb8);
      *(undefined4 *)(lVar16 + 0xd0) = uVar31;
      uVar31 = *(undefined4 *)(*(undefined8 **)(*unaff_x23 + 0xb8) + 1);
      *(undefined8 *)(lVar16 + 0xf0) = **(undefined8 **)(*unaff_x23 + 0xb8);
      *(undefined4 *)(lVar16 + 0xf8) = uVar31;
      *(undefined1 *)(lVar23 + 0x1a0) = 0;
    }
    iVar11 = FUN_0368e42c(0);
    if (iVar11 == 1) {
      cVar22 = *(char *)(in_stack_000001e0 + 0xa2);
    }
    else {
      cVar22 = '\0';
    }
    if (cVar14 == '\x01') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a429c(unaff_w28,cVar22 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
    else if (cVar14 == '\x02') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a4cd4(unaff_w28,cVar22 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
LAB_037924bc:
    lVar23 = *in_stack_000001e8;
    if (lVar23 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar23 + 0x18) <= unaff_w28) goto thunk_FUN_01ab6c44;
    lVar23 = lVar23 + lVar27 * unaff_x29;
    uVar29 = *(undefined8 *)(lVar23 + 0x124);
    *(undefined8 *)(lVar23 + 0x124) =
         CONCAT44(fVar39 + (float)((ulong)uVar29 >> 0x20),fVar37 + (float)uVar29);
    *(float *)(lVar23 + 300) = fVar35 + *(float *)(lVar23 + 300);
    lVar23 = *in_stack_000001e8;
    if (lVar23 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar23 + 0x18) <= unaff_w28) goto thunk_FUN_01ab6c44;
    lVar23 = lVar23 + lVar27 * unaff_x29;
    *(ulong *)(lVar23 + 0x118) =
         CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar23 + 0x118) >> 0x20),
                  fVar37 + (float)*(undefined8 *)(lVar23 + 0x118));
    *(float *)(lVar23 + 0x120) = fVar35 + *(float *)(lVar23 + 0x120);
    lVar23 = *in_stack_000001e8;
    if (lVar23 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar23 + 0x18) <= unaff_w28) goto thunk_FUN_01ab6c44;
    lVar23 = lVar23 + lVar27 * unaff_x29;
    *(ulong *)(lVar23 + 0x130) =
         CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar23 + 0x130) >> 0x20),
                  fVar37 + (float)*(undefined8 *)(lVar23 + 0x130));
    *(float *)(lVar23 + 0x138) = fVar35 + *(float *)(lVar23 + 0x138);
    lVar23 = *in_stack_000001e8;
    if (lVar23 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar23 + 0x18) <= unaff_w28) goto thunk_FUN_01ab6c44;
    lVar23 = lVar23 + lVar27 * unaff_x29;
    *(float *)(lVar23 + 0x13c) = fVar37 + *(float *)(lVar23 + 0x13c);
    *(ulong *)(lVar23 + 0x140) =
         CONCAT44(fVar35 + (float)((ulong)*(undefined8 *)(lVar23 + 0x140) >> 0x20),
                  fVar39 + (float)*(undefined8 *)(lVar23 + 0x140));
    lVar23 = *in_stack_000001e8;
    if (lVar23 == 0) goto LAB_03793c9c;
    uVar25 = *(uint *)(lVar23 + 0x18);
    if (uVar25 <= unaff_w28) goto thunk_FUN_01ab6c44;
    lVar16 = lVar23 + lVar27 * unaff_x29;
    *(float *)(lVar16 + 0x148) = fVar37 + *(float *)(lVar16 + 0x148);
    *(float *)(lVar16 + 0x164) = fVar37 + *(float *)(lVar16 + 0x164);
    *(float *)(lVar16 + 0x154) = fVar39 + *(float *)(lVar16 + 0x154);
    uVar29 = *(undefined8 *)(lVar16 + 0x14c);
    *(undefined8 *)(lVar16 + 0x14c) =
         CONCAT44(fVar39 + (float)((ulong)uVar29 >> 0x20),fVar39 + (float)uVar29);
    if (unaff_w25 == uVar13) {
      uVar13 = *in_stack_000001d0 - 1;
      if (unaff_w28 == uVar13) goto LAB_037926b4;
    }
    else {
      lVar16 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar16 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar16 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
      lVar18 = (long)(int)uVar13;
      lVar20 = lVar16 + lVar18 * 0x60;
      fVar35 = fVar39 + *(float *)(lVar20 + 0x58);
      *(ulong *)(lVar20 + 0x50) =
           CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar20 + 0x50) >> 0x20),
                    fVar39 + (float)*(undefined8 *)(lVar20 + 0x50));
      *(float *)(lVar20 + 0x58) = fVar35;
      *(float *)(lVar20 + 0x5c) = fVar37 + *(float *)(lVar20 + 0x5c);
      if (uVar25 <= *(uint *)(lVar20 + 0x38)) goto thunk_FUN_01ab6c44;
      uVar31 = *(undefined4 *)(lVar23 + (int)*(uint *)(lVar20 + 0x38) * unaff_x29 + 0x124);
      lVar16 = lVar16 + lVar18 * 0x60;
      *(float *)(lVar16 + 0x74) = fVar35;
      *(undefined4 *)(lVar16 + 0x70) = uVar31;
      lVar23 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar23 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar23 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
      lVar16 = *in_stack_000001e8;
      if (lVar16 == 0) goto LAB_03793c9c;
      uVar13 = *(uint *)(lVar23 + lVar18 * 0x60 + 0x44);
      if (*(uint *)(lVar16 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
      lVar23 = lVar23 + lVar18 * 0x60;
      *(undefined4 *)(lVar23 + 0x78) = *(undefined4 *)(lVar16 + (int)uVar13 * unaff_x29 + 0x130);
      *(undefined4 *)(lVar23 + 0x7c) = *(undefined4 *)(lVar23 + 0x50);
      uVar13 = *in_stack_000001d0 - 1;
LAB_037926b4:
      if (unaff_w28 == uVar13) {
        lVar23 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar23 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar23 + 0x18) <= unaff_w25) goto thunk_FUN_01ab6c44;
        lVar16 = lVar23 + lVar17 * 0x60;
        fVar35 = fVar39 + *(float *)(lVar16 + 0x58);
        *(ulong *)(lVar16 + 0x50) =
             CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar16 + 0x50) >> 0x20),
                      fVar39 + (float)*(undefined8 *)(lVar16 + 0x50));
        *(float *)(lVar16 + 0x58) = fVar35;
        *(float *)(lVar16 + 0x5c) = fVar37 + *(float *)(lVar16 + 0x5c);
        lVar18 = *in_stack_000001e8;
        if (lVar18 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar18 + 0x18) <= *(uint *)(lVar16 + 0x38)) goto thunk_FUN_01ab6c44;
        uVar31 = *(undefined4 *)(lVar18 + (int)*(uint *)(lVar16 + 0x38) * unaff_x29 + 0x124);
        lVar23 = lVar23 + lVar17 * 0x60;
        *(float *)(lVar23 + 0x74) = fVar35;
        *(undefined4 *)(lVar23 + 0x70) = uVar31;
        lVar23 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar23 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar23 + 0x18) <= unaff_w25) goto thunk_FUN_01ab6c44;
        lVar16 = *in_stack_000001e8;
        if (lVar16 == 0) goto LAB_03793c9c;
        uVar13 = *(uint *)(lVar23 + lVar17 * 0x60 + 0x44);
        if (*(uint *)(lVar16 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
        lVar23 = lVar23 + lVar17 * 0x60;
        *(undefined4 *)(lVar23 + 0x78) = *(undefined4 *)(lVar16 + (int)uVar13 * unaff_x29 + 0x130);
        *(undefined4 *)(lVar23 + 0x7c) = *(undefined4 *)(lVar23 + 0x50);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar21 = FUN_026b82c4(uVar26,0);
    if (((((uVar21 & 1) == 0) && (1 < uVar26 - 0x2010)) && (uVar26 != 0xad)) && (uVar26 != 0x2d)) {
      if ((uStack000000000000016c & 1) == 0) {
        if (unaff_w26 == 1) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar13 = FUN_026b81f8(uVar26,0);
          if (((uVar26 == 0x200b) || (((uStack000000000000017c | uVar13 ^ 1) & 1) != 0)) ||
             (*in_stack_000001d0 == 1)) goto LAB_037930d8;
        }
        uStack000000000000016c = 0;
      }
      else {
        if (((unaff_w26 != 1) && ((int)unaff_w28 < (int)(*(uint *)(in_stack_000001c8 + 0x18) - 1)))
           && (((int)unaff_w28 < *in_stack_000001d0 && ((uVar26 == 0x2019 || (uVar26 == 0x27)))))) {
          if (*(uint *)(in_stack_000001c8 + 0x18) <= unaff_w28 - 1) goto thunk_FUN_01ab6c44;
          uVar4 = *(undefined2 *)(in_stack_000001c8 + in_stack_000001a8 + -0x464);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar21 = FUN_026b82c4(uVar4,0);
          if ((uVar21 & 1) != 0) {
            if (*(uint *)(in_stack_000001c8 + 0x18) <= unaff_w26) goto thunk_FUN_01ab6c44;
            uVar4 = *(undefined2 *)(in_stack_000001c8 + in_stack_000001a8 + -0x154);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar21 = FUN_026b82c4(uVar4,0);
            if ((uVar21 & 1) != 0) goto LAB_0379289c;
          }
        }
LAB_037930d8:
        if (unaff_w28 == *in_stack_000001d0 - 1U) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar21 = FUN_026b82c4(uVar26,0);
          uStack0000000000000170 = unaff_w28;
          if ((uVar21 & 1) == 0) goto LAB_03793114;
        }
        else {
LAB_03793114:
          uStack0000000000000170 = uStack0000000000000178;
        }
        lVar23 = *in_stack_000000f8;
        if (lVar23 == 0) goto LAB_03793c9c;
        uVar13 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar11 = *(int *)(lVar23 + 0x18);
        if (iVar11 < (int)(uVar13 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff37b8(in_stack_000000f8,iVar11 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar23 = *in_stack_000000f8;
          if (lVar23 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar23 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
        lVar23 = lVar23 + (long)(int)uVar13 * 0xc;
        *(uint *)(lVar23 + 0x20) = uStack0000000000000168;
        *(uint *)(lVar23 + 0x24) = uStack0000000000000170;
        *(uint *)(lVar23 + 0x28) = (uStack0000000000000170 - uStack0000000000000168) + 1;
        lVar23 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar23 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar23 + 0x18) <= unaff_w25) goto thunk_FUN_01ab6c44;
        lVar23 = lVar23 + lVar17 * 0x60;
        uStack000000000000016c = 0;
        in_stack_00000138 = in_stack_00000138 + 1;
        *(int *)(lVar23 + 0x34) = *(int *)(lVar23 + 0x34) + 1;
      }
    }
    else {
      if ((uStack000000000000016c & 1) == 0) {
        uStack0000000000000168 = unaff_w28;
      }
      if (unaff_w28 == *in_stack_000001d0 - 1U) {
        lVar23 = *in_stack_000000f8;
        if (lVar23 == 0) goto LAB_03793c9c;
        uVar13 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar11 = *(int *)(lVar23 + 0x18);
        if (iVar11 < (int)(uVar13 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff37b8(in_stack_000000f8,iVar11 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar23 = *in_stack_000000f8;
          if (lVar23 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar23 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
        lVar23 = lVar23 + (long)(int)uVar13 * 0xc;
        *(uint *)(lVar23 + 0x20) = uStack0000000000000168;
        *(uint *)(lVar23 + 0x24) = unaff_w28;
        *(uint *)(lVar23 + 0x28) = unaff_w26 - uStack0000000000000168;
        lVar23 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar23 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar23 + 0x18) <= unaff_w25) goto thunk_FUN_01ab6c44;
        lVar23 = lVar23 + lVar17 * 0x60;
        in_stack_00000138 = in_stack_00000138 + 1;
        *(int *)(lVar23 + 0x34) = *(int *)(lVar23 + 0x34) + 1;
      }
LAB_0379289c:
      uStack000000000000016c = 1;
    }
    lVar23 = *in_stack_000001e8;
    if (lVar23 == 0) goto LAB_03793c9c;
    uVar13 = *(uint *)(lVar23 + 0x18);
    if (uVar13 <= unaff_w28) goto thunk_FUN_01ab6c44;
    if ((*(byte *)(lVar23 + lVar27 * unaff_x29 + 0x19c) >> 2 & 1) == 0) {
      if ((uStack0000000000000184 & 1) != 0) {
LAB_037928d0:
        if (unaff_w28 - 1 < uVar13) {
          uVar31 = *(undefined4 *)(lVar23 + in_stack_000001a8 + -0x354);
          uVar34 = *(undefined4 *)(lVar23 + in_stack_000001a8 + -0x318);
          goto LAB_03792b34;
        }
        goto thunk_FUN_01ab6c44;
      }
LAB_03792a8c:
      uStack0000000000000184 = 0;
    }
    else {
      lVar17 = *(long *)(unaff_x19 + 0x15b8);
      if (lVar17 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) goto thunk_FUN_01ab6c44;
      iVar11 = *(int *)(lVar23 + lVar27 * unaff_x29 + 0x70);
      *(int *)(lVar23 + lVar27 * unaff_x29 + 0x178) =
           *(int *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)unaff_w28) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)unaff_w25)) {
        bVar9 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar9 = iVar11 + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar9 = false;
      }
      if (uVar26 != 0x200b && (uStack000000000000017c & 1) == 0) {
        fVar35 = *(float *)(lVar23 + lVar27 * unaff_x29 + 0x16c);
        if (unaff_s15 <= fVar35) {
          unaff_s15 = fVar35;
        }
        if (iVar11 != in_stack_000000c0) {
          fStack000000000000015c = fStack00000000000000ac;
        }
        if (lVar24 == 0) goto LAB_03793c9c;
        fVar35 = *(float *)(lVar23 + lVar27 * unaff_x29 + 0x150);
        if (fStack0000000000000174 <= ABS(unaff_s12)) {
          fStack0000000000000174 = ABS(unaff_s12);
        }
        FUN_03779650(&stack0x000016a0,lVar24,0);
        memcpy(&stack0x00001610,&stack0x000016a0,0x60);
        fVar40 = (float)FUN_03776a10(&stack0x00001610,0);
        fVar35 = fVar35 + unaff_s15 * fVar40;
        in_stack_000000c0 = iVar11;
        if (fVar35 <= fStack000000000000015c) {
          fStack000000000000015c = fVar35;
        }
      }
      if ((((uVar26 == 0xd) || ((uVar26 & 0xfffe) == 10)) || ((int)uVar6 < (int)unaff_w28)) ||
         ((uStack0000000000000184 & 1) != 0 || bVar9)) {
LAB_03792a80:
        if ((uStack0000000000000184 & 1) == 0) goto LAB_03792a8c;
      }
      else {
        if (unaff_w28 == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar21 = FUN_026b97f8(uVar26,0);
          if ((uVar21 & 1) != 0) goto LAB_03792a80;
        }
        lVar23 = *in_stack_000001e8;
        if (lVar23 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar23 + 0x18) <= unaff_w28) goto thunk_FUN_01ab6c44;
        lVar23 = lVar23 + lVar27 * unaff_x29;
        fStack00000000000000d8 = *(float *)(lVar23 + 0x16c);
        in_stack_000000d0 = *(undefined4 *)(lVar23 + 0x124);
        bVar8 = unaff_s15 != 0.0;
        fVar35 = fStack00000000000000d8;
        if (bVar8) {
          fVar35 = unaff_s15;
        }
        unaff_s15 = fVar35;
        in_stack_00000100 = *(undefined4 *)(lVar23 + 0x174);
        uStack00000000000000cc = 0;
        fVar35 = unaff_s12;
        if (bVar8) {
          fVar35 = fStack0000000000000174;
        }
        fStack00000000000000c8 = fStack000000000000015c;
        fStack0000000000000174 = fVar35;
      }
      if (*in_stack_000001d0 == 1) {
        lVar23 = *in_stack_000001e8;
        if (lVar23 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar23 + 0x18) <= unaff_w28) goto thunk_FUN_01ab6c44;
        lVar23 = lVar23 + lVar27 * unaff_x29;
        uVar31 = *(undefined4 *)(lVar23 + 0x130);
        uVar34 = *(undefined4 *)(lVar23 + 0x16c);
LAB_03792b34:
        FUN_0379d0d0(in_stack_000000d0,fStack00000000000000c8,uStack00000000000000cc,uVar31,
                     fStack000000000000015c,0,fStack00000000000000d8,uVar34);
      }
      else {
        if ((unaff_w28 == uVar5) || ((int)uVar6 <= (int)unaff_w28)) {
          lVar23 = *in_stack_000001e8;
          if (lVar23 != 0) {
            lVar17 = lVar27;
            uVar13 = unaff_w28;
            if (uVar26 == 0x200b || (uStack000000000000017c & 1) != 0) {
              lVar17 = in_stack_000001b0;
              uVar13 = uVar6;
            }
            if (uVar13 < *(uint *)(lVar23 + 0x18)) {
              lVar23 = lVar23 + lVar17 * unaff_x29;
              uVar31 = *(undefined4 *)(lVar23 + 0x130);
              uVar34 = *(undefined4 *)(lVar23 + 0x16c);
              goto LAB_03792b34;
            }
            goto thunk_FUN_01ab6c44;
          }
          goto LAB_03793c9c;
        }
        if (bVar9) {
          lVar23 = *in_stack_000001e8;
          if (lVar23 != 0) {
            uVar13 = *(uint *)(lVar23 + 0x18);
            goto LAB_037928d0;
          }
          goto LAB_03793c9c;
        }
        if (*in_stack_000001d0 + -1 <= (int)unaff_w28) {
LAB_03793294:
          uStack0000000000000184 = 1;
          goto LAB_03792b70;
        }
        lVar23 = *in_stack_000001e8;
        if (lVar23 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar23 + 0x18) <= unaff_w26) goto thunk_FUN_01ab6c44;
        uVar21 = FUN_03779528(in_stack_00000100,*(undefined4 *)(lVar23 + in_stack_000001a8),0);
        if ((uVar21 & 1) != 0) goto LAB_03793294;
        lVar23 = *in_stack_000001e8;
        if (lVar23 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar23 + 0x18) <= unaff_w28) goto thunk_FUN_01ab6c44;
        lVar23 = lVar23 + lVar27 * unaff_x29;
        FUN_0379d0d0(in_stack_000000d0,fStack00000000000000c8,uStack00000000000000cc,
                     *(undefined4 *)(lVar23 + 0x130),fStack000000000000015c,0,fStack00000000000000d8
                     ,*(undefined4 *)(lVar23 + 0x16c));
      }
      unaff_s15 = 0.0;
      uStack0000000000000184 = 0;
      fStack000000000000015c = DAT_00d38d70;
      fStack0000000000000174 = 0.0;
    }
LAB_03792b70:
    lVar23 = *in_stack_000001e8;
    if (lVar23 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar23 + 0x18) <= unaff_w28) goto thunk_FUN_01ab6c44;
    if (lVar24 == 0) goto LAB_03793c9c;
    uVar13 = *(uint *)(lVar23 + lVar27 * unaff_x29 + 0x19c);
    FUN_03779650(&stack0x000016a0,lVar24,0);
    memcpy(&stack0x00001610,&stack0x000016a0,0x60);
    fVar35 = (float)FUN_03776a30(&stack0x00001610,0);
    if ((uVar13 >> 6 & 1) == 0) {
      if ((bStack0000000000000180 & 1) != 0) {
        lVar23 = *in_stack_000001e8;
        if (lVar23 != 0) {
          if (unaff_w28 - 1 < *(uint *)(lVar23 + 0x18)) {
            fVar39 = *(float *)(lVar23 + in_stack_000001a8 + -0x334);
            uVar31 = *(undefined4 *)(lVar23 + in_stack_000001a8 + -0x354);
            goto LAB_037932fc;
          }
          goto thunk_FUN_01ab6c44;
        }
        goto LAB_03793c9c;
      }
LAB_03792cf8:
      bStack0000000000000180 = 0;
    }
    else {
      lVar23 = *in_stack_000001e8;
      if ((lVar23 == 0) || (lVar17 = *(long *)(unaff_x19 + 0x15b8), lVar17 == 0)) goto LAB_03793c9c;
      if ((*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) ||
         (*(uint *)(lVar23 + 0x18) <= unaff_w28)) goto thunk_FUN_01ab6c44;
      *(int *)(lVar23 + lVar27 * unaff_x29 + 0x180) =
           *(int *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)unaff_w28) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)unaff_w25)) {
        bVar9 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar9 = *(int *)(lVar23 + lVar27 * unaff_x29 + 0x70) + 1 !=
                *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar9 = false;
      }
      if ((((uVar26 == 0xd) || ((uVar26 & 0xfffe) == 10)) || ((int)uVar6 < (int)unaff_w28)) ||
         ((~bStack0000000000000180 & (bVar9 ^ 0xffU) & 1) == 0)) {
LAB_03792cf0:
        if ((bStack0000000000000180 & 1) == 0) goto LAB_03792cf8;
      }
      else {
        if (unaff_w28 == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar21 = FUN_026b97f8(uVar26,0);
          if ((uVar21 & 1) != 0) goto LAB_03792cf0;
          lVar23 = *in_stack_000001e8;
          if (lVar23 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar23 + 0x18) <= unaff_w28) goto thunk_FUN_01ab6c44;
        lVar23 = lVar23 + lVar27 * unaff_x29;
        in_stack_000000f0 = *(float *)(lVar23 + 0x16c);
        in_stack_000000e8._4_4_ = *(undefined4 *)(lVar23 + 0x124);
        fStack00000000000000a8 = *(float *)(lVar23 + 0x68);
        in_stack_000000a0._4_4_ = *(float *)(lVar23 + 0x150);
        in_stack_000000e0 = fVar35 * in_stack_000000f0 + in_stack_000000a0._4_4_;
        uStack00000000000000dc = 0;
      }
      iVar11 = *in_stack_000001d0;
      if (iVar11 == 1) {
LAB_03792ef4:
        lVar17 = *in_stack_000001e8;
        if (lVar17 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar17 + 0x18) <= unaff_w28) goto thunk_FUN_01ab6c44;
        lVar17 = lVar17 + lVar27 * unaff_x29;
      }
      else {
        lVar23 = lVar27;
        if (unaff_w28 == uVar5) {
          lVar17 = *in_stack_000001e8;
          if (lVar17 == 0) goto LAB_03793c9c;
          uVar13 = unaff_w28;
          if (((uint)(uVar26 != 0x200b) & (uStack000000000000017c ^ 1)) == 0) {
            lVar23 = in_stack_000001b0;
            uVar13 = uVar6;
          }
          if (*(uint *)(lVar17 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
        }
        else {
          if (iVar11 <= (int)unaff_w28) {
LAB_03792fdc:
            if ((int)unaff_w28 < iVar11) {
              iVar11 = FUN_036d3364(lVar24,0);
              if (*(uint *)(in_stack_000001c8 + 0x18) <= unaff_w26) goto thunk_FUN_01ab6c44;
              lVar23 = *(long *)(in_stack_000001c8 + in_stack_000001a8 + -0x134);
              if (lVar23 == 0) goto LAB_03793c9c;
              iVar12 = FUN_036d3364(lVar23,0);
              if (iVar11 != iVar12) goto LAB_03792ef4;
            }
            if (bVar9 == false) {
              bStack0000000000000180 = 1;
              goto LAB_03793338;
            }
            lVar23 = *in_stack_000001e8;
            if (lVar23 != 0) {
              if (unaff_w28 - 1 < *(uint *)(lVar23 + 0x18)) {
                fVar39 = *(float *)(lVar23 + in_stack_000001a8 + -0x334);
                uVar31 = *(undefined4 *)(lVar23 + in_stack_000001a8 + -0x354);
                goto LAB_037932fc;
              }
              goto thunk_FUN_01ab6c44;
            }
            goto LAB_03793c9c;
          }
          lVar17 = *in_stack_000001e8;
          if (lVar17 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar17 + 0x18) <= unaff_w26) goto thunk_FUN_01ab6c44;
          if (*(float *)(lVar17 + in_stack_000001a8 + -0x10c) == fStack00000000000000a8) {
            fVar40 = *(float *)(lVar17 + in_stack_000001a8 + -0x24);
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0
                        ) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar21 = FUN_037a2200(fVar39 + fVar40,in_stack_000000a0._4_4_,0);
            if ((uVar21 & 1) != 0) {
              iVar11 = *in_stack_000001d0;
              goto LAB_03792fdc;
            }
            lVar17 = *in_stack_000001e8;
            if (lVar17 == 0) goto LAB_03793c9c;
          }
          uVar13 = unaff_w28;
          if ((int)uVar6 < (int)unaff_w28) {
            lVar23 = in_stack_000001b0;
            uVar13 = uVar6;
          }
          if (*(uint *)(lVar17 + 0x18) <= uVar13) goto thunk_FUN_01ab6c44;
        }
        lVar17 = lVar17 + lVar23 * unaff_x29;
      }
      fVar39 = *(float *)(lVar17 + 0x150);
      uVar31 = *(undefined4 *)(lVar17 + 0x130);
LAB_037932fc:
      FUN_0379d0d0(in_stack_000000e8._4_4_,in_stack_000000e0,uStack00000000000000dc,uVar31,
                   in_stack_000000f0 * fVar35 + fVar39,0,in_stack_000000f0,in_stack_000000f0);
      bStack0000000000000180 = 0;
    }
LAB_03793338:
    lVar23 = *in_stack_000001e8;
    if (lVar23 == 0) goto LAB_03793c9c;
    uVar13 = (uint)*(undefined8 *)(lVar23 + 0x18);
    if (uVar13 <= unaff_w28) goto thunk_FUN_01ab6c44;
    unaff_x27 = in_stack_000001c0;
    uStack0000000000000178 = uVar1;
    if ((*(byte *)(lVar23 + lVar27 * unaff_x29 + 0x19d) >> 1 & 1) == 0) {
      if (bVar10) {
        FUN_0379dd0c(in_stack_00000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
      }
    }
    else {
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)unaff_w28) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)unaff_w25)) {
        unaff_w20 = 1;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        unaff_w20 = (uint)(*(int *)(lVar23 + lVar27 * unaff_x29 + 0x70) + 1 !=
                          *(int *)(in_stack_000001e0 + 0xf0));
      }
      else {
        unaff_w20 = 0;
      }
      if (bVar10) goto LAB_037934cc;
      if (((uVar26 != 0xd) && ((uVar26 & 0xfffe) != 10)) &&
         (((int)unaff_w28 <= (int)uVar6 && (unaff_w20 == 0)))) {
        if (unaff_w28 != uVar6) goto LAB_03793458;
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar21 = FUN_026b97f8(uVar26,0);
        if ((uVar21 & 1) == 0) goto LAB_03793458;
      }
    }
    bVar10 = false;
    uVar13 = unaff_w25;
    unaff_w28 = unaff_w26;
  } while( true );
LAB_03793aa0:
  lVar24 = *(long *)(unaff_x27 + 0x58);
  if (lVar24 == 0) {
LAB_03793c9c:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (*(uint *)(lVar24 + 0x18) <= uVar21) goto thunk_FUN_01ab6c44;
  FUN_03785ba0(lVar24 + lVar23,0);
  if (*(int *)(in_stack_000001e0 + 0x100) != 0) {
    lVar24 = *(long *)(unaff_x27 + 0x58);
    if (lVar24 == 0) goto LAB_03793c9c;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar24 + 0x18) <= uVar21) {
thunk_FUN_01ab6c44:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    FUN_03785bdc(lVar24 + lVar23,1,0);
  }
  uVar21 = uVar21 + 1;
  lVar23 = lVar23 + 0x50;
  if ((long)*(int *)(unaff_x27 + 0x2c) <= (long)uVar21) {
LAB_0378c81c:
    if (*(long *)(in_stack_00000110 + 0x28) == in_stack_00001a38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_03793aa0;
LAB_03793458:
  puVar7 = Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
  lVar24 = *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
  if (*(int *)(lVar24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar24 = *(long *)puVar7;
  }
  lVar23 = *in_stack_000001e8;
  if (lVar23 == 0) goto LAB_03793c9c;
  uVar13 = (uint)*(undefined8 *)(lVar23 + 0x18);
  if (uVar13 <= unaff_w28) goto thunk_FUN_01ab6c44;
  pfVar19 = *(float **)(lVar24 + 0xb8);
  in_stack_00000128 = *pfVar19;
  in_stack_00000140._4_4_ = pfVar19[1];
  fStack000000000000012c = pfVar19[2];
  fStack0000000000000130 = pfVar19[3];
  uStack0000000000000124 = 0;
LAB_037934cc:
  if (uVar13 <= unaff_w28) goto thunk_FUN_01ab6c44;
  lVar23 = lVar23 + lVar27 * unaff_x29;
  in_stack_000001d8._4_4_ = *(float *)(lVar23 + 0x130);
  fVar40 = *(float *)(lVar23 + 0x124);
  fVar39 = *(float *)(lVar23 + 0x148);
  unaff_s8 = *(float *)(lVar23 + 0x14c);
  fVar35 = *(float *)(lVar23 + 0x154);
  unaff_s11 = *(float *)(lVar23 + 0x164);
  uVar21 = FUN_037a20cc(&stack0x00000210,&stack0x000001f0,0);
  lVar23 = *(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
  if ((uVar21 & 1) == 0) {
    if (*(int *)(lVar23 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar23);
    }
    fVar30 = (float)FUN_037a1dd8(in_stack_000000b8,0);
    bVar10 = (uStack000000000000017c & 1) == 0;
    if (bVar10) {
      fVar39 = fVar40;
    }
    if (bVar10) {
      unaff_s11 = in_stack_000001d8._4_4_;
    }
    if (fVar39 - fVar30 <= in_stack_00000128) {
      in_stack_00000128 = fVar39 - fVar30;
    }
    fVar39 = (float)FUN_037a1de0(in_stack_000000b8,0);
    if (fStack000000000000012c <= unaff_s11 + fVar39) {
      fStack000000000000012c = unaff_s11 + fVar39;
    }
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ + 0xe0)
        == 0) {
      thunk_FUN_01a58e78();
    }
    fVar39 = (float)FUN_037a1df0(in_stack_000000b8,0);
    if (fVar35 - fVar39 <= in_stack_00000140._4_4_) {
      in_stack_00000140._4_4_ = fVar35 - fVar39;
    }
    fVar39 = (float)FUN_037a1de8(in_stack_000000b8,0);
    if (fStack0000000000000130 <= unaff_s8 + fVar39) {
      fStack0000000000000130 = unaff_s8 + fVar39;
    }
    goto LAB_03793744;
  }
  if (*(int *)(lVar23 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar23);
  }
  fVar30 = (float)FUN_037a1de0(in_stack_000000b8,0);
  if ((uStack000000000000017c & 1) == 0) {
    fVar39 = fVar40;
  }
  if (fVar35 <= in_stack_00000140._4_4_) {
    in_stack_00000140._4_4_ = fVar35;
  }
  fVar40 = (fVar39 + (fStack000000000000012c - fVar30)) * 0.5;
  fVar39 = fStack0000000000000130;
  if (fStack0000000000000130 <= unaff_s8) {
    fVar39 = unaff_s8;
  }
  FUN_0379dd0c(in_stack_00000128,in_stack_00000140._4_4_,uStack0000000000000124,fVar40,fVar39,
               uStack0000000000000124);
  puVar7 = Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
  if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ + 0xe0)
      == 0) {
    thunk_FUN_01a58e78();
  }
  in_stack_00000140._4_4_ = (float)FUN_037a1df0(in_stack_00000098,0);
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  in_stack_00000140._4_4_ = fVar35 - in_stack_00000140._4_4_;
  unaff_s10 = (float)FUN_037a1de0(in_stack_00000098,0);
  param_1 = (float)FUN_037a1de8(in_stack_00000098,0);
  in_stack_00000128 = fVar40;
  goto code_r0x03793648;
}


