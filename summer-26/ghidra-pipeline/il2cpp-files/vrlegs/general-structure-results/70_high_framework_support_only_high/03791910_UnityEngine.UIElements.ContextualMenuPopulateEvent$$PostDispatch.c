/*
FUNCTION_NAME: UnityEngine.UIElements.ContextualMenuPopulateEvent$$PostDispatch
ENTRY_POINT: 03791910
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_UIElements_ContextualMenuPopulateEvent__PostDispatch
               (undefined8 param_1,float param_2,undefined4 param_3,float param_4,float param_5)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  char cVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  uint in_w9;
  uint uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  float *pfVar25;
  long in_x11;
  long lVar26;
  long unaff_x19;
  char cVar27;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  uint unaff_w24;
  uint uVar28;
  long lVar29;
  long unaff_x27;
  long unaff_x29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float unaff_s11;
  float fVar40;
  float fVar41;
  float fVar42;
  float unaff_s15;
  undefined8 in_stack_00000058;
  uint uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 in_stack_000000a0;
  float in_stack_000000a8;
  float fStack00000000000000ac;
  undefined8 in_stack_000000b8;
  int iStack00000000000000c0;
  float fStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  float fStack00000000000000d0;
  float in_stack_000000d8;
  undefined4 uStack00000000000000dc;
  float fStack00000000000000e0;
  undefined8 in_stack_000000e8;
  float in_stack_000000f0;
  long *in_stack_000000f8;
  undefined4 in_stack_00000100;
  long in_stack_00000110;
  undefined8 in_stack_00000118;
  float fStack0000000000000120;
  undefined4 uStack0000000000000124;
  float in_stack_00000128;
  float fStack000000000000012c;
  float fStack0000000000000130;
  int iStack0000000000000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  float in_stack_00000158;
  float fStack000000000000015c;
  uint uStack0000000000000168;
  undefined4 uStack000000000000016c;
  uint uStack0000000000000170;
  float fStack0000000000000174;
  int iStack0000000000000178;
  byte bStack0000000000000180;
  uint uStack0000000000000184;
  long lStack00000000000001a8;
  uint uStack00000000000001bc;
  long in_stack_000001c0;
  int *in_stack_000001d0;
  long in_stack_000001e0;
  long *in_stack_000001e8;
  long in_stack_00001a38;
  
  iStack0000000000000138 = 0;
  uStack0000000000000090 = 0;
  _uStack0000000000000168 = 0;
  iStack00000000000000c0 = 0;
  iStack0000000000000178 = 0;
                    /* catch() { ... } // from try @ 03791950 with catch @ 03791940
                       catch() { ... } // from try @ 03791980 with catch @ 03791940
                       catch() { ... } // from try @ 037919bc with catch @ 03791940 */
  uStack0000000000000098 = param_1;
  fStack00000000000000ac = param_5;
  fStack00000000000000c8 = param_2;
  uStack00000000000000cc = param_3;
  fStack00000000000000d0 = param_4;
  uStack00000000000000dc = param_3;
  fStack00000000000000e0 = param_2;
  fStack000000000000012c = param_4;
  fStack0000000000000130 = param_2;
  fStack000000000000015c = param_5;
  lStack00000000000001a8 = in_x11;
  do {
                    /* try { // try from 0379194c to 0389194f has its CatchHandler @ 03791964 */
                    /* try { // try from 03791950 to 0389197b has its CatchHandler @ 03791940 */
    uVar7 = in_w9 - 1;
    uStack00000000000001bc = in_w9;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto thunk_FUN_01ab6c44;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0379194c with catch @ 03791964
                        */
    lVar29 = (long)(int)uVar7;
    lVar18 = unaff_x21 + lVar29 * unaff_x29;
    lVar21 = *(long *)(lVar18 + 0x40);
                    /* try { // try from 0379197c to 0389197f has its CatchHandler @ 037919ac */
    uVar3 = *(ushort *)(lVar18 + 0x20);
                    /* try { // try from 03791980 to 038919af has its CatchHandler @ 03791940 */
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    bVar11 = FUN_026b63d8(uVar3,0);
    if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto thunk_FUN_01ab6c44;
    lVar18 = *(long *)(unaff_x27 + 0x48);
    uVar28 = (uint)uVar3;
    if (lVar18 == 0) goto LAB_03793c9c;
    uVar1 = *(uint *)(unaff_x21 + lVar29 * unaff_x29 + 0x6c);
    if (*(uint *)(lVar18 + 0x18) <= uVar1) goto thunk_FUN_01ab6c44;
    lVar22 = (long)(int)uVar1;
    lVar18 = lVar18 + lVar22 * unaff_x20;
    uVar5 = *(uint *)(lVar18 + 0x40);
    uVar20 = *(uint *)(lVar18 + 0x6c);
    iVar2 = *(int *)(lVar18 + 0x20);
    iVar13 = *(int *)(lVar18 + 0x28);
    iVar14 = *(int *)(lVar18 + 0x2c);
    uVar6 = *(uint *)(lVar18 + 0x44);
    lVar23 = (long)(int)uVar6;
    fVar32 = *(float *)(lVar18 + 0x50);
    fVar34 = *(float *)(lVar18 + 0x58);
    fVar41 = *(float *)(lVar18 + 0x5c);
    fVar37 = *(float *)(lVar18 + 0x60);
    fVar39 = *(float *)(lVar18 + 100);
    fVar38 = *(float *)(lVar18 + 0x70);
    fVar40 = *(float *)(lVar18 + 0x74);
    fVar42 = *(float *)(lVar18 + 0x78);
    fVar35 = *(float *)(lVar18 + 0x7c);
    if ((int)uVar20 < 0x421) {
      if ((int)uVar20 < 0x209) {
        if ((int)uVar20 < 0x111) {
          switch(uVar20) {
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
            if (uVar20 == 0x110) goto switchD_03791aa4_caseD_1008;
          }
        }
        else {
          switch(uVar20) {
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
            if (uVar20 == 0x120) goto LAB_03791c08;
          }
        }
      }
      else if ((int)uVar20 < 0x405) {
        if ((int)uVar20 < 0x401) {
          if (uVar20 == 0x210) goto switchD_03791aa4_caseD_1008;
          if (uVar20 == 0x220) goto LAB_03791c08;
        }
        else {
          if (uVar20 == 0x401) goto switchD_03791aa4_caseD_1001;
          if (uVar20 == 0x402) goto switchD_03791aa4_caseD_1002;
          if (uVar20 == 0x404) goto switchD_03791aa4_caseD_1004;
        }
      }
      else {
        if ((uVar20 == 0x408) || (uVar20 == 0x410)) goto switchD_03791aa4_caseD_1008;
        if (uVar20 == 0x420) goto LAB_03791c08;
      }
      goto switchD_03791aa4_caseD_1003;
    }
    if (0x1008 < (int)uVar20) {
      if ((int)uVar20 < 0x2005) {
        if (0x2000 < (int)uVar20) {
          if (uVar20 == 0x2001) goto switchD_03791aa4_caseD_1001;
          if (uVar20 == 0x2002) goto switchD_03791aa4_caseD_1002;
          if (uVar20 == 0x2004) goto switchD_03791aa4_caseD_1004;
          goto switchD_03791aa4_caseD_1003;
        }
        if (uVar20 != 0x1010) {
          uVar17 = 0x1020;
          goto LAB_03791bc8;
        }
      }
      else if ((uVar20 != 0x2008) && (uVar20 != 0x2010)) {
        uVar17 = 0x2020;
LAB_03791bc8:
        if (uVar20 != uVar17) goto switchD_03791aa4_caseD_1003;
LAB_03791c08:
        fVar41 = fVar38 + fVar42;
        goto LAB_03791c1c;
      }
      goto switchD_03791aa4_caseD_1008;
    }
    if ((int)uVar20 < 0x811) {
      switch(uVar20) {
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
        if ((int)uVar7 <= (int)uVar6) {
          if (uVar28 < 0xad) {
            if ((uVar28 != 3) && (uVar28 != 10)) goto FUN_03791eb4;
          }
          else if ((uVar28 != 0xad) && ((uVar28 != 0x200b && (uVar28 != 0x2060)))) {
FUN_03791eb4:
            if (*(uint *)(unaff_x21 + 0x18) <= uVar5) goto thunk_FUN_01ab6c44;
            uVar4 = *(undefined2 *)(unaff_x21 + (int)uVar5 * unaff_x29 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              unaff_x23 = (long *)PTR_DAT_03cbded8;
            }
            uVar15 = FUN_026b8cc4(uVar4,0);
            if ((uVar15 & 1) == 0) {
              bVar9 = (int)uVar1 < *(int *)(unaff_x19 + 0x340);
            }
            else {
              bVar9 = false;
            }
            if ((fVar41 <= fVar37) && (!bVar9 && (uVar20 >> 4 & 1) == 0)) {
              in_stack_00000158 = fVar39;
              if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
                in_stack_00000158 = fVar37 + fVar39;
              }
              goto LAB_03791c20;
            }
            if ((uStack00000000000001bc == 1) || (uVar1 != unaff_w24)) {
              cVar16 = *(char *)(in_stack_000001e0 + 0xb6);
            }
            else {
              cVar16 = *(char *)(in_stack_000001e0 + 0xb6);
              if (uVar7 != *(uint *)(in_stack_000001e0 + 0xe4)) {
                iVar14 = (iVar14 - iVar2) - (uStack0000000000000090 & 1);
                fVar39 = -fVar41;
                if (cVar16 != '\0') {
                  fVar39 = fVar41;
                }
                if (iVar14 < 1) {
                  fVar41 = 1.0;
                }
                else {
                  fVar41 = *(float *)(in_stack_000001e0 + 0x7c);
                }
                if (iVar14 < 2) {
                  iVar14 = 1;
                }
                fVar37 = fVar37 + fVar39;
                if (uVar28 == 9) {
LAB_037939d0:
                  if (cVar16 != '\0') {
                    fVar37 = fVar37 * (1.0 - fVar41);
                    fVar39 = (float)iVar14;
LAB_03793a0c:
                    in_stack_00000158 = in_stack_00000158 - fVar37 / fVar39;
                    break;
                  }
                  fVar39 = (float)iVar14;
                  fVar37 = fVar37 * (1.0 - fVar41);
                }
                else {
                  uVar20 = ~uStack0000000000000090;
                  if (uVar28 != 0xa0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar15 = FUN_026b97f8(uVar28,0);
                    cVar16 = *(char *)(in_stack_000001e0 + 0xb6);
                    if ((uVar15 & 1) != 0) goto LAB_037939d0;
                  }
                  fVar37 = fVar37 * fVar41;
                  fVar39 = (float)(int)((iVar2 - (uVar20 & 1)) + iVar13);
                  if (cVar16 != '\0') goto LAB_03793a0c;
                }
                in_stack_00000158 = in_stack_00000158 + fVar37 / fVar39;
                in_stack_00000148 =
                     CONCAT44((float)((ulong)in_stack_00000148 >> 0x20) + 0.0,
                              (float)in_stack_00000148 + 0.0);
                break;
              }
            }
            in_stack_00000158 = fVar39;
            if (cVar16 != '\0') {
              in_stack_00000158 = fVar37 + fVar39;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000090 = FUN_026b97f8(uVar28,0);
            in_stack_00000148 = 0;
          }
        }
        break;
      default:
        if (uVar20 == 0x810) goto switchD_03791aa4_caseD_1008;
      }
    }
    else {
      switch(uVar20) {
      case 0x1001:
switchD_03791aa4_caseD_1001:
        if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
          in_stack_00000158 = fVar39 + 0.0;
        }
        else {
          in_stack_00000158 = 0.0 - fVar41;
        }
        break;
      case 0x1002:
switchD_03791aa4_caseD_1002:
LAB_03791c1c:
        in_stack_00000158 = (fVar39 + fVar37 * 0.5) - fVar41 * 0.5;
        break;
      case 0x1003:
      case 0x1005:
      case 0x1006:
      case 0x1007:
        goto switchD_03791aa4_caseD_1003;
      case 0x1004:
switchD_03791aa4_caseD_1004:
        in_stack_00000158 = (fVar37 + fVar39) - fVar41;
        if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
          in_stack_00000158 = fVar37 + fVar39;
        }
        break;
      case 0x1008:
        goto switchD_03791aa4_caseD_1008;
      default:
        if (uVar20 == 0x820) goto LAB_03791c08;
        goto switchD_03791aa4_caseD_1003;
      }
LAB_03791c20:
      in_stack_00000148 = 0;
    }
switchD_03791aa4_caseD_1003:
    uVar20 = (uint)*(undefined8 *)(unaff_x21 + 0x18);
    if (uVar20 <= uVar7) goto thunk_FUN_01ab6c44;
    lVar18 = unaff_x21 + lVar29 * unaff_x29;
    fVar39 = fStack0000000000000120 + in_stack_00000158;
    fVar41 = (float)in_stack_00000118 + (float)in_stack_00000148;
    fVar37 = (float)((ulong)in_stack_00000118 >> 0x20) + (float)((ulong)in_stack_00000148 >> 0x20);
    if (*(char *)(lVar18 + 0x1a0) == '\0') goto LAB_037924bc;
    cVar16 = *(char *)(unaff_x21 + lVar29 * unaff_x29 + 0x28);
    if (cVar16 != '\x01') goto LAB_0379225c;
    fVar30 = fmodf(*(float *)(in_stack_000001e0 + 0xfc) * (float)(int)uVar1,1.0);
    unaff_x23 = (long *)PTR_DAT_03cbded8;
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf4)) {
    case 0:
      fVar30 = 1.0;
      lVar19 = unaff_x21 + lVar29 * unaff_x29;
      *(undefined4 *)(lVar19 + 0xbc) = 0;
      *(undefined4 *)(lVar19 + 0x94) = 0;
      *(undefined4 *)(lVar19 + 0xe4) = 0x3f800000;
      break;
    case 1:
      fVar35 = *(float *)(unaff_x21 + lVar29 * unaff_x29 + 0xa0);
      if (*(int *)(in_stack_000001e0 + 0x70) == 0x208) {
        lVar19 = unaff_x21 + lVar29 * unaff_x29;
        fVar42 = (in_stack_00000158 + fVar35) - *(float *)(unaff_x19 + 0x360);
        fVar35 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
        goto LAB_03791dcc;
      }
      lVar19 = unaff_x21 + lVar29 * unaff_x29;
      fVar42 = fVar42 - fVar38;
      *(float *)(lVar19 + 0xbc) = fVar30 + (fVar35 - fVar38) / fVar42;
      *(float *)(lVar19 + 0x94) = fVar30 + (*(float *)(lVar19 + 0x78) - fVar38) / fVar42;
      *(float *)(lVar19 + 0xe4) = fVar30 + (*(float *)(lVar19 + 200) - fVar38) / fVar42;
      fVar30 = fVar30 + (*(float *)(lVar19 + 0xf0) - fVar38) / fVar42;
      break;
    case 2:
      lVar19 = unaff_x21 + lVar29 * unaff_x29;
      fVar35 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
      fVar42 = (in_stack_00000158 + *(float *)(lVar19 + 0xa0)) - *(float *)(unaff_x19 + 0x360);
LAB_03791dcc:
      *(float *)(lVar19 + 0xbc) = fVar30 + fVar42 / fVar35;
      *(float *)(lVar19 + 0x94) =
           fVar30 + ((in_stack_00000158 + *(float *)(lVar19 + 0x78)) - *(float *)(unaff_x19 + 0x360)
                    ) / (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      *(float *)(lVar19 + 0xe4) =
           fVar30 + ((in_stack_00000158 + *(float *)(lVar19 + 200)) - *(float *)(unaff_x19 + 0x360))
                    / (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      fVar30 = fVar30 + ((in_stack_00000158 + *(float *)(lVar19 + 0xf0)) -
                        *(float *)(unaff_x19 + 0x360)) /
                        (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      break;
    case 3:
      switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
      case 0:
        lVar19 = unaff_x21 + lVar29 * unaff_x29;
        *(undefined4 *)(lVar19 + 0xc0) = 0;
        *(undefined4 *)(lVar19 + 0x98) = 0x3f800000;
        *(undefined4 *)(lVar19 + 0xe8) = 0;
        *(undefined4 *)(lVar19 + 0x110) = 0x3f800000;
        break;
      case 1:
        fVar35 = fVar35 - fVar40;
        lVar19 = unaff_x21 + lVar29 * unaff_x29;
        fVar42 = fVar30 + (*(float *)(lVar19 + 0xa4) - fVar40) / fVar35;
        fVar35 = fVar30 + (*(float *)(lVar19 + 0x7c) - fVar40) / fVar35;
        *(float *)(lVar19 + 0xc0) = fVar42;
        *(float *)(lVar19 + 0x98) = fVar35;
        *(float *)(lVar19 + 0xe8) = fVar42;
        *(float *)(lVar19 + 0x110) = fVar35;
        break;
      case 2:
        lVar19 = unaff_x21 + lVar29 * unaff_x29;
        fVar42 = fVar30 + (*(float *)(lVar19 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
                          (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
        *(float *)(lVar19 + 0xc0) = fVar42;
        fVar35 = *(float *)(unaff_x19 + 0x364);
        fVar38 = *(float *)(unaff_x19 + 0x36c);
        *(float *)(lVar19 + 0xe8) = fVar42;
        fVar42 = fVar30 + (*(float *)(lVar19 + 0x7c) - fVar35) / (fVar38 - fVar35);
        *(float *)(lVar19 + 0x98) = fVar42;
        *(float *)(lVar19 + 0x110) = fVar42;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar20 = (uint)*(undefined8 *)(unaff_x21 + 0x18);
      }
      if (uVar20 <= uVar7) goto thunk_FUN_01ab6c44;
      lVar19 = unaff_x21 + lVar29 * unaff_x29;
      fVar42 = *(float *)(lVar19 + 0x168);
      fVar35 = (1.0 - (*(float *)(lVar19 + 0xc0) + *(float *)(lVar19 + 0x98)) * fVar42) * 0.5;
      fVar38 = fVar30 + *(float *)(lVar19 + 0xc0) * fVar42 + fVar35;
      fVar30 = fVar30 + *(float *)(lVar19 + 0x98) * fVar42 + fVar35;
      *(float *)(lVar19 + 0xbc) = fVar38;
      *(float *)(lVar19 + 0x94) = fVar38;
      *(float *)(lVar19 + 0xe4) = fVar30;
      break;
    default:
      goto switchD_03791d04_default;
    }
    *(float *)(unaff_x21 + lVar29 * unaff_x29 + 0x10c) = fVar30;
switchD_03791d04_default:
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
    case 0:
      if (uVar20 <= uVar7) goto thunk_FUN_01ab6c44;
      lVar19 = unaff_x21 + lVar29 * unaff_x29;
      *(undefined4 *)(lVar19 + 0xc0) = 0;
      *(undefined4 *)(lVar19 + 0x98) = 0x3f800000;
      *(undefined4 *)(lVar19 + 0xe8) = 0x3f800000;
      *(undefined4 *)(lVar19 + 0x110) = 0;
      break;
    case 1:
      if (uVar7 < uVar20) {
        fVar32 = fVar32 - fVar34;
        lVar19 = unaff_x21 + lVar29 * unaff_x29;
        fVar42 = (*(float *)(lVar19 + 0xa4) - fVar34) / fVar32;
        fVar32 = (*(float *)(lVar19 + 0x7c) - fVar34) / fVar32;
        *(float *)(lVar19 + 0xc0) = fVar42;
        goto LAB_0379217c;
      }
      goto thunk_FUN_01ab6c44;
    case 2:
      if (uVar20 <= uVar7) goto thunk_FUN_01ab6c44;
      lVar19 = unaff_x21 + lVar29 * unaff_x29;
      fVar42 = (*(float *)(lVar19 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
      *(float *)(lVar19 + 0xc0) = fVar42;
      fVar32 = (*(float *)(lVar19 + 0x7c) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
LAB_0379217c:
      *(float *)(lVar19 + 0x98) = fVar32;
      *(float *)(lVar19 + 0xe8) = fVar32;
      *(float *)(lVar19 + 0x110) = fVar42;
      break;
    case 3:
      if (uVar20 <= uVar7) goto thunk_FUN_01ab6c44;
      lVar19 = unaff_x21 + lVar29 * unaff_x29;
      fVar35 = *(float *)(lVar19 + 0x168);
      fVar32 = (1.0 - (*(float *)(lVar19 + 0xbc) + *(float *)(lVar19 + 0xe4)) / fVar35) * 0.5;
      fVar42 = *(float *)(lVar19 + 0xbc) / fVar35 + fVar32;
      fVar32 = *(float *)(lVar19 + 0xe4) / fVar35 + fVar32;
      *(float *)(lVar19 + 0xc0) = fVar42;
      *(float *)(lVar19 + 0x98) = fVar32;
      *(float *)(lVar19 + 0x110) = fVar42;
      *(float *)(lVar19 + 0xe8) = fVar32;
    }
    if (uVar20 <= uVar7) goto thunk_FUN_01ab6c44;
    lVar19 = unaff_x21 + lVar29 * unaff_x29;
    unaff_s11 = *(float *)(lVar19 + 0x16c) * (1.0 - *(float *)(unaff_x19 + 0x1594));
    if ((*(char *)(lVar19 + 100) == '\0') &&
       ((*(byte *)(unaff_x21 + lVar29 * unaff_x29 + 0x19c) & 1) != 0)) {
      unaff_s11 = -unaff_s11;
    }
    lVar19 = unaff_x21 + lVar29 * unaff_x29;
    *(float *)(lVar19 + 0xb8) = unaff_s11;
    *(float *)(lVar19 + 0x90) = unaff_s11;
    *(float *)(lVar19 + 0xe0) = unaff_s11;
    *(float *)(lVar19 + 0x108) = unaff_s11;
    *(undefined4 *)(lVar19 + 0xbc) = 0x3f800000;
    *(float *)(lVar19 + 0xc0) = unaff_s11;
    *(undefined4 *)(lVar19 + 0x94) = 0x3f800000;
    *(float *)(lVar19 + 0x98) = unaff_s11;
    *(undefined4 *)(lVar19 + 0xe4) = 0x3f800000;
    *(float *)(lVar19 + 0xe8) = unaff_s11;
    *(undefined4 *)(lVar19 + 0x10c) = 0x3f800000;
    *(float *)(lVar19 + 0x110) = unaff_s11;
LAB_0379225c:
    if (((int)uVar7 < *(int *)(in_stack_000001e0 + 0xd8)) &&
       (iStack0000000000000138 < *(int *)(in_stack_000001e0 + 0xdc))) {
      if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar1) ||
         (*(int *)(in_stack_000001e0 + 0x74) == 5)) {
        if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar1) ||
           (*(int *)(in_stack_000001e0 + 0x74) != 5)) goto LAB_037922d4;
        if (uVar7 < uVar20) {
          bVar9 = *(int *)(unaff_x21 + lVar29 * unaff_x29 + 0x70) == in_stack_00000058._4_4_;
          goto LAB_037922d8;
        }
        goto thunk_FUN_01ab6c44;
      }
      if (uVar20 <= uVar7) goto thunk_FUN_01ab6c44;
LAB_037922e4:
      lVar18 = unaff_x21 + lVar29 * unaff_x29;
      *(ulong *)(lVar18 + 0xa0) =
           CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar18 + 0xa0) >> 0x20),
                    fVar39 + (float)*(undefined8 *)(lVar18 + 0xa0));
      *(float *)(lVar18 + 0xa8) = fVar37 + *(float *)(lVar18 + 0xa8);
      *(ulong *)(lVar18 + 0x78) =
           CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar18 + 0x78) >> 0x20),
                    fVar39 + (float)*(undefined8 *)(lVar18 + 0x78));
      *(float *)(lVar18 + 0x80) = fVar37 + *(float *)(lVar18 + 0x80);
      *(ulong *)(lVar18 + 200) =
           CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar18 + 200) >> 0x20),
                    fVar39 + (float)*(undefined8 *)(lVar18 + 200));
      *(float *)(lVar18 + 0xd0) = fVar37 + *(float *)(lVar18 + 0xd0);
      *(ulong *)(lVar18 + 0xf0) =
           CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar18 + 0xf0) >> 0x20),
                    fVar39 + (float)*(undefined8 *)(lVar18 + 0xf0));
      *(float *)(lVar18 + 0xf8) = fVar37 + *(float *)(lVar18 + 0xf8);
    }
    else {
LAB_037922d4:
      bVar9 = false;
LAB_037922d8:
      if (uVar20 <= uVar7) goto thunk_FUN_01ab6c44;
      if (bVar9) goto LAB_037922e4;
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(unaff_x23);
        DAT_0411f172 = '\x01';
        uVar20 = *(uint *)(unaff_x21 + 0x18);
      }
      uVar33 = *(undefined4 *)(*(undefined8 **)(*unaff_x23 + 0xb8) + 1);
      lVar19 = unaff_x21 + lVar29 * unaff_x29;
      *(undefined8 *)(lVar19 + 0xa0) = **(undefined8 **)(*unaff_x23 + 0xb8);
      *(undefined4 *)(lVar19 + 0xa8) = uVar33;
      if (uVar20 <= uVar7) goto thunk_FUN_01ab6c44;
      uVar33 = *(undefined4 *)(*(undefined8 **)(*unaff_x23 + 0xb8) + 1);
      lVar19 = unaff_x21 + lVar29 * unaff_x29;
      *(undefined8 *)(lVar19 + 0x78) = **(undefined8 **)(*unaff_x23 + 0xb8);
      *(undefined4 *)(lVar19 + 0x80) = uVar33;
      uVar33 = *(undefined4 *)(*(undefined8 **)(*unaff_x23 + 0xb8) + 1);
      *(undefined8 *)(lVar19 + 200) = **(undefined8 **)(*unaff_x23 + 0xb8);
      *(undefined4 *)(lVar19 + 0xd0) = uVar33;
      uVar33 = *(undefined4 *)(*(undefined8 **)(*unaff_x23 + 0xb8) + 1);
      *(undefined8 *)(lVar19 + 0xf0) = **(undefined8 **)(*unaff_x23 + 0xb8);
      *(undefined4 *)(lVar19 + 0xf8) = uVar33;
      *(undefined1 *)(lVar18 + 0x1a0) = 0;
    }
    iVar13 = FUN_0368e42c(0);
    if (iVar13 == 1) {
      cVar27 = *(char *)(in_stack_000001e0 + 0xa2);
    }
    else {
      cVar27 = '\0';
    }
    if (cVar16 == '\x01') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a429c(uVar7,cVar27 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
    else if (cVar16 == '\x02') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a4cd4(uVar7,cVar27 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
LAB_037924bc:
    lVar18 = *in_stack_000001e8;
    if (lVar18 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar18 + 0x18) <= uVar7) goto thunk_FUN_01ab6c44;
    lVar18 = lVar18 + lVar29 * unaff_x29;
    uVar31 = *(undefined8 *)(lVar18 + 0x124);
    *(undefined8 *)(lVar18 + 0x124) =
         CONCAT44(fVar41 + (float)((ulong)uVar31 >> 0x20),fVar39 + (float)uVar31);
    *(float *)(lVar18 + 300) = fVar37 + *(float *)(lVar18 + 300);
    lVar18 = *in_stack_000001e8;
    if (lVar18 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar18 + 0x18) <= uVar7) goto thunk_FUN_01ab6c44;
    lVar18 = lVar18 + lVar29 * unaff_x29;
    *(ulong *)(lVar18 + 0x118) =
         CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar18 + 0x118) >> 0x20),
                  fVar39 + (float)*(undefined8 *)(lVar18 + 0x118));
    *(float *)(lVar18 + 0x120) = fVar37 + *(float *)(lVar18 + 0x120);
    lVar18 = *in_stack_000001e8;
    if (lVar18 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar18 + 0x18) <= uVar7) goto thunk_FUN_01ab6c44;
    lVar18 = lVar18 + lVar29 * unaff_x29;
    *(ulong *)(lVar18 + 0x130) =
         CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar18 + 0x130) >> 0x20),
                  fVar39 + (float)*(undefined8 *)(lVar18 + 0x130));
    *(float *)(lVar18 + 0x138) = fVar37 + *(float *)(lVar18 + 0x138);
    lVar18 = *in_stack_000001e8;
    if (lVar18 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar18 + 0x18) <= uVar7) goto thunk_FUN_01ab6c44;
    lVar18 = lVar18 + lVar29 * unaff_x29;
    *(float *)(lVar18 + 0x13c) = fVar39 + *(float *)(lVar18 + 0x13c);
    *(ulong *)(lVar18 + 0x140) =
         CONCAT44(fVar37 + (float)((ulong)*(undefined8 *)(lVar18 + 0x140) >> 0x20),
                  fVar41 + (float)*(undefined8 *)(lVar18 + 0x140));
    lVar18 = *in_stack_000001e8;
    if (lVar18 == 0) goto LAB_03793c9c;
    uVar20 = *(uint *)(lVar18 + 0x18);
    if (uVar20 <= uVar7) goto thunk_FUN_01ab6c44;
    lVar19 = lVar18 + lVar29 * unaff_x29;
    *(float *)(lVar19 + 0x148) = fVar39 + *(float *)(lVar19 + 0x148);
    *(float *)(lVar19 + 0x164) = fVar39 + *(float *)(lVar19 + 0x164);
    *(float *)(lVar19 + 0x154) = fVar41 + *(float *)(lVar19 + 0x154);
    uVar31 = *(undefined8 *)(lVar19 + 0x14c);
    *(undefined8 *)(lVar19 + 0x14c) =
         CONCAT44(fVar41 + (float)((ulong)uVar31 >> 0x20),fVar41 + (float)uVar31);
    uVar17 = uStack0000000000000168;
    if (uVar1 == unaff_w24) {
      uVar20 = *in_stack_000001d0 - 1;
      if (uVar7 == uVar20) goto LAB_037926b4;
    }
    else {
      lVar19 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar19 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar19 + 0x18) <= unaff_w24) goto thunk_FUN_01ab6c44;
      lVar24 = (long)(int)unaff_w24;
      lVar26 = lVar19 + lVar24 * 0x60;
      fVar37 = fVar41 + *(float *)(lVar26 + 0x58);
      *(ulong *)(lVar26 + 0x50) =
           CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar26 + 0x50) >> 0x20),
                    fVar41 + (float)*(undefined8 *)(lVar26 + 0x50));
      *(float *)(lVar26 + 0x58) = fVar37;
      *(float *)(lVar26 + 0x5c) = fVar39 + *(float *)(lVar26 + 0x5c);
      if (uVar20 <= *(uint *)(lVar26 + 0x38)) goto thunk_FUN_01ab6c44;
      uVar33 = *(undefined4 *)(lVar18 + (int)*(uint *)(lVar26 + 0x38) * unaff_x29 + 0x124);
      lVar19 = lVar19 + lVar24 * 0x60;
      *(float *)(lVar19 + 0x74) = fVar37;
      *(undefined4 *)(lVar19 + 0x70) = uVar33;
      lVar18 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar18 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar18 + 0x18) <= unaff_w24) goto thunk_FUN_01ab6c44;
      lVar19 = *in_stack_000001e8;
      if (lVar19 == 0) goto LAB_03793c9c;
      uVar20 = *(uint *)(lVar18 + lVar24 * 0x60 + 0x44);
      if (*(uint *)(lVar19 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
      lVar18 = lVar18 + lVar24 * 0x60;
      *(undefined4 *)(lVar18 + 0x78) = *(undefined4 *)(lVar19 + (int)uVar20 * unaff_x29 + 0x130);
      *(undefined4 *)(lVar18 + 0x7c) = *(undefined4 *)(lVar18 + 0x50);
      uVar20 = *in_stack_000001d0 - 1;
LAB_037926b4:
      if (uVar7 == uVar20) {
        lVar18 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar18 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar18 + 0x18) <= uVar1) goto thunk_FUN_01ab6c44;
        lVar19 = lVar18 + lVar22 * 0x60;
        fVar37 = fVar41 + *(float *)(lVar19 + 0x58);
        *(ulong *)(lVar19 + 0x50) =
             CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar19 + 0x50) >> 0x20),
                      fVar41 + (float)*(undefined8 *)(lVar19 + 0x50));
        *(float *)(lVar19 + 0x58) = fVar37;
        *(float *)(lVar19 + 0x5c) = fVar39 + *(float *)(lVar19 + 0x5c);
        lVar24 = *in_stack_000001e8;
        if (lVar24 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar24 + 0x18) <= *(uint *)(lVar19 + 0x38)) goto thunk_FUN_01ab6c44;
        uVar33 = *(undefined4 *)(lVar24 + (int)*(uint *)(lVar19 + 0x38) * unaff_x29 + 0x124);
        lVar18 = lVar18 + lVar22 * 0x60;
        *(float *)(lVar18 + 0x74) = fVar37;
        *(undefined4 *)(lVar18 + 0x70) = uVar33;
        lVar18 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar18 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar18 + 0x18) <= uVar1) goto thunk_FUN_01ab6c44;
        lVar19 = *in_stack_000001e8;
        if (lVar19 == 0) goto LAB_03793c9c;
        uVar20 = *(uint *)(lVar18 + lVar22 * 0x60 + 0x44);
        if (*(uint *)(lVar19 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
        lVar18 = lVar18 + lVar22 * 0x60;
        *(undefined4 *)(lVar18 + 0x78) = *(undefined4 *)(lVar19 + (int)uVar20 * unaff_x29 + 0x130);
        *(undefined4 *)(lVar18 + 0x7c) = *(undefined4 *)(lVar18 + 0x50);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar15 = FUN_026b82c4(uVar28,0);
    if (((((uVar15 & 1) == 0) && (1 < uVar28 - 0x2010)) && (uVar28 != 0xad)) && (uVar28 != 0x2d)) {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        if (uStack00000000000001bc == 1) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          bVar12 = FUN_026b81f8(uVar28,0);
          if (((uVar28 == 0x200b) || (((bVar11 | bVar12 ^ 1) & 1) != 0)) ||
             (*in_stack_000001d0 == 1)) goto LAB_037930d8;
        }
        _uStack0000000000000168 = _uStack0000000000000168 & 0xffffffff;
      }
      else {
        if (((uStack00000000000001bc != 1) && ((int)uVar7 < (int)(*(uint *)(unaff_x21 + 0x18) - 1)))
           && (((int)uVar7 < *in_stack_000001d0 && ((uVar28 == 0x2019 || (uVar28 == 0x27)))))) {
          if (*(uint *)(unaff_x21 + 0x18) <= uStack00000000000001bc - 2) goto thunk_FUN_01ab6c44;
          uVar4 = *(undefined2 *)(unaff_x21 + lStack00000000000001a8 + -0x464);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar15 = FUN_026b82c4(uVar4,0);
          if ((uVar15 & 1) != 0) {
            if (*(uint *)(unaff_x21 + 0x18) <= uStack00000000000001bc) goto thunk_FUN_01ab6c44;
            uVar4 = *(undefined2 *)(unaff_x21 + lStack00000000000001a8 + -0x154);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar15 = FUN_026b82c4(uVar4,0);
            if ((uVar15 & 1) != 0) goto LAB_0379289c;
          }
        }
LAB_037930d8:
        if (uVar7 == *in_stack_000001d0 - 1U) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar15 = FUN_026b82c4(uVar28,0);
          uStack0000000000000170 = uVar7;
          if ((uVar15 & 1) == 0) goto LAB_03793114;
        }
        else {
LAB_03793114:
          uStack0000000000000170 = iStack0000000000000178 - 1;
        }
        lVar18 = *in_stack_000000f8;
        if (lVar18 == 0) goto LAB_03793c9c;
        uVar20 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar13 = *(int *)(lVar18 + 0x18);
        if (iVar13 < (int)(uVar20 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff37b8(in_stack_000000f8,iVar13 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar18 = *in_stack_000000f8;
          if (lVar18 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar18 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
        lVar18 = lVar18 + (long)(int)uVar20 * 0xc;
        *(uint *)(lVar18 + 0x20) = uVar17;
        *(uint *)(lVar18 + 0x24) = uStack0000000000000170;
        *(uint *)(lVar18 + 0x28) = (uStack0000000000000170 - uVar17) + 1;
        lVar18 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar18 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar18 + 0x18) <= uVar1) goto thunk_FUN_01ab6c44;
        lVar18 = lVar18 + lVar22 * 0x60;
        _uStack0000000000000168 = _uStack0000000000000168 & 0xffffffff;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar18 + 0x34) = *(int *)(lVar18 + 0x34) + 1;
      }
    }
    else {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        uVar17 = uVar7;
      }
      if (uVar7 == *in_stack_000001d0 - 1U) {
        lVar18 = *in_stack_000000f8;
        if (lVar18 == 0) goto LAB_03793c9c;
        uVar20 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar13 = *(int *)(lVar18 + 0x18);
        if (iVar13 < (int)(uVar20 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff37b8(in_stack_000000f8,iVar13 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar18 = *in_stack_000000f8;
          if (lVar18 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar18 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
        lVar18 = lVar18 + (long)(int)uVar20 * 0xc;
        *(uint *)(lVar18 + 0x20) = uVar17;
        *(uint *)(lVar18 + 0x24) = uVar7;
        *(uint *)(lVar18 + 0x28) = uStack00000000000001bc - uVar17;
        lVar18 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar18 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar18 + 0x18) <= uVar1) goto thunk_FUN_01ab6c44;
        lVar18 = lVar18 + lVar22 * 0x60;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar18 + 0x34) = *(int *)(lVar18 + 0x34) + 1;
      }
LAB_0379289c:
      _uStack0000000000000168 = CONCAT44(1,uStack0000000000000168);
    }
    lVar18 = *in_stack_000001e8;
    if (lVar18 == 0) goto LAB_03793c9c;
    uVar20 = *(uint *)(lVar18 + 0x18);
    if (uVar20 <= uVar7) goto thunk_FUN_01ab6c44;
    if ((*(byte *)(lVar18 + lVar29 * unaff_x29 + 0x19c) >> 2 & 1) == 0) {
      if ((uStack0000000000000184 & 1) != 0) {
LAB_037928d0:
        if (uStack00000000000001bc - 2 < uVar20) {
          uVar33 = *(undefined4 *)(lVar18 + lStack00000000000001a8 + -0x354);
          uVar36 = *(undefined4 *)(lVar18 + lStack00000000000001a8 + -0x318);
          goto LAB_03792b34;
        }
        goto thunk_FUN_01ab6c44;
      }
LAB_03792a8c:
      uStack0000000000000184 = 0;
    }
    else {
      lVar22 = *(long *)(unaff_x19 + 0x15b8);
      if (lVar22 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) goto thunk_FUN_01ab6c44;
      iVar13 = *(int *)(lVar18 + lVar29 * unaff_x29 + 0x70);
      *(int *)(lVar18 + lVar29 * unaff_x29 + 0x178) =
           *(int *)(lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar7) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar1)) {
        bVar9 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar9 = iVar13 + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar9 = false;
      }
      if (uVar28 != 0x200b && (bVar11 & 1) == 0) {
        fVar37 = *(float *)(lVar18 + lVar29 * unaff_x29 + 0x16c);
        if (unaff_s15 <= fVar37) {
          unaff_s15 = fVar37;
        }
        fVar37 = fStack000000000000015c;
        if (iVar13 != iStack00000000000000c0) {
          fVar37 = fStack00000000000000ac;
        }
        if (lVar21 == 0) goto LAB_03793c9c;
        fVar42 = *(float *)(lVar18 + lVar29 * unaff_x29 + 0x150);
        if (fStack0000000000000174 <= ABS(unaff_s11)) {
          fStack0000000000000174 = ABS(unaff_s11);
        }
        FUN_03779650(&stack0x000016a0,lVar21,0);
        memcpy(&stack0x00001610,&stack0x000016a0,0x60);
        fVar32 = (float)FUN_03776a10(&stack0x00001610,0);
        fVar42 = fVar42 + unaff_s15 * fVar32;
        iStack00000000000000c0 = iVar13;
        fStack000000000000015c = fVar37;
        if (fVar42 <= fVar37) {
          fStack000000000000015c = fVar42;
        }
      }
      if ((((uVar28 == 0xd) || ((uVar28 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar7)) ||
         ((uStack0000000000000184 & 1) != 0 || bVar9)) {
LAB_03792a80:
        if ((uStack0000000000000184 & 1) == 0) goto LAB_03792a8c;
      }
      else {
        if (uVar7 == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar15 = FUN_026b97f8(uVar28,0);
          if ((uVar15 & 1) != 0) goto LAB_03792a80;
        }
        lVar18 = *in_stack_000001e8;
        if (lVar18 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar18 + 0x18) <= uVar7) goto thunk_FUN_01ab6c44;
        lVar18 = lVar18 + lVar29 * unaff_x29;
        in_stack_000000d8 = *(float *)(lVar18 + 0x16c);
        fStack00000000000000d0 = *(float *)(lVar18 + 0x124);
        bVar10 = unaff_s15 != 0.0;
        fVar37 = in_stack_000000d8;
        if (bVar10) {
          fVar37 = unaff_s15;
        }
        unaff_s15 = fVar37;
        in_stack_00000100 = *(undefined4 *)(lVar18 + 0x174);
        uStack00000000000000cc = 0;
        fVar37 = unaff_s11;
        if (bVar10) {
          fVar37 = fStack0000000000000174;
        }
        fStack00000000000000c8 = fStack000000000000015c;
        fStack0000000000000174 = fVar37;
      }
      if (*in_stack_000001d0 == 1) {
        lVar18 = *in_stack_000001e8;
        if (lVar18 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar18 + 0x18) <= uVar7) goto thunk_FUN_01ab6c44;
        lVar18 = lVar18 + lVar29 * unaff_x29;
        uVar33 = *(undefined4 *)(lVar18 + 0x130);
        uVar36 = *(undefined4 *)(lVar18 + 0x16c);
LAB_03792b34:
        FUN_0379d0d0(fStack00000000000000d0,fStack00000000000000c8,uStack00000000000000cc,uVar33,
                     fStack000000000000015c,0,in_stack_000000d8,uVar36);
      }
      else {
        if ((uVar7 == uVar5) || ((int)uVar6 <= (int)uVar7)) {
          lVar18 = *in_stack_000001e8;
          if (lVar18 != 0) {
            lVar22 = lVar29;
            uVar20 = uVar7;
            if (uVar28 == 0x200b || (bVar11 & 1) != 0) {
              lVar22 = lVar23;
              uVar20 = uVar6;
            }
            if (uVar20 < *(uint *)(lVar18 + 0x18)) {
              lVar18 = lVar18 + lVar22 * unaff_x29;
              uVar33 = *(undefined4 *)(lVar18 + 0x130);
              uVar36 = *(undefined4 *)(lVar18 + 0x16c);
              goto LAB_03792b34;
            }
            goto thunk_FUN_01ab6c44;
          }
          goto LAB_03793c9c;
        }
        if (bVar9) {
          lVar18 = *in_stack_000001e8;
          if (lVar18 != 0) {
            uVar20 = *(uint *)(lVar18 + 0x18);
            goto LAB_037928d0;
          }
          goto LAB_03793c9c;
        }
        if (*in_stack_000001d0 + -1 <= (int)uVar7) {
LAB_03793294:
          uStack0000000000000184 = 1;
          goto LAB_03792b70;
        }
        lVar18 = *in_stack_000001e8;
        if (lVar18 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar18 + 0x18) <= uStack00000000000001bc) goto thunk_FUN_01ab6c44;
        uVar15 = FUN_03779528(in_stack_00000100,*(undefined4 *)(lVar18 + lStack00000000000001a8),0);
        if ((uVar15 & 1) != 0) goto LAB_03793294;
        lVar18 = *in_stack_000001e8;
        if (lVar18 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar18 + 0x18) <= uVar7) goto thunk_FUN_01ab6c44;
        lVar18 = lVar18 + lVar29 * unaff_x29;
        FUN_0379d0d0(fStack00000000000000d0,fStack00000000000000c8,uStack00000000000000cc,
                     *(undefined4 *)(lVar18 + 0x130),fStack000000000000015c,0,in_stack_000000d8,
                     *(undefined4 *)(lVar18 + 0x16c));
      }
      unaff_s15 = 0.0;
      uStack0000000000000184 = 0;
      fStack000000000000015c = DAT_00d38d70;
      fStack0000000000000174 = 0.0;
    }
LAB_03792b70:
    lVar18 = *in_stack_000001e8;
    if (lVar18 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar18 + 0x18) <= uVar7) goto thunk_FUN_01ab6c44;
    if (lVar21 == 0) goto LAB_03793c9c;
    uVar20 = *(uint *)(lVar18 + lVar29 * unaff_x29 + 0x19c);
    FUN_03779650(&stack0x000016a0,lVar21,0);
    memcpy(&stack0x00001610,&stack0x000016a0,0x60);
    fVar37 = (float)FUN_03776a30(&stack0x00001610,0);
    if ((uVar20 >> 6 & 1) == 0) {
      if ((bStack0000000000000180 & 1) != 0) {
        lVar18 = *in_stack_000001e8;
        if (lVar18 != 0) {
          if (uStack00000000000001bc - 2 < *(uint *)(lVar18 + 0x18)) {
            fVar41 = *(float *)(lVar18 + lStack00000000000001a8 + -0x334);
            uVar33 = *(undefined4 *)(lVar18 + lStack00000000000001a8 + -0x354);
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
      lVar18 = *in_stack_000001e8;
      if ((lVar18 == 0) || (lVar22 = *(long *)(unaff_x19 + 0x15b8), lVar22 == 0)) goto LAB_03793c9c;
      if ((*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) ||
         (*(uint *)(lVar18 + 0x18) <= uVar7)) goto thunk_FUN_01ab6c44;
      *(int *)(lVar18 + lVar29 * unaff_x29 + 0x180) =
           *(int *)(lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar7) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar1)) {
        bVar9 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar9 = *(int *)(lVar18 + lVar29 * unaff_x29 + 0x70) + 1 !=
                *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar9 = false;
      }
      if ((((uVar28 == 0xd) || ((uVar28 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar7)) ||
         ((~bStack0000000000000180 & (bVar9 ^ 0xffU) & 1) == 0)) {
LAB_03792cf0:
        if ((bStack0000000000000180 & 1) == 0) goto LAB_03792cf8;
      }
      else {
        if (uVar7 == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar15 = FUN_026b97f8(uVar28,0);
          if ((uVar15 & 1) != 0) goto LAB_03792cf0;
          lVar18 = *in_stack_000001e8;
          if (lVar18 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar18 + 0x18) <= uVar7) goto thunk_FUN_01ab6c44;
        lVar18 = lVar18 + lVar29 * unaff_x29;
        in_stack_000000f0 = *(float *)(lVar18 + 0x16c);
        in_stack_000000e8._4_4_ = *(undefined4 *)(lVar18 + 0x124);
        in_stack_000000a8 = *(float *)(lVar18 + 0x68);
        in_stack_000000a0._4_4_ = *(float *)(lVar18 + 0x150);
        fStack00000000000000e0 = fVar37 * in_stack_000000f0 + in_stack_000000a0._4_4_;
        uStack00000000000000dc = 0;
      }
      iVar13 = *in_stack_000001d0;
      if (iVar13 == 1) {
LAB_03792ef4:
        lVar22 = *in_stack_000001e8;
        if (lVar22 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar22 + 0x18) <= uVar7) goto thunk_FUN_01ab6c44;
        lVar22 = lVar22 + lVar29 * unaff_x29;
      }
      else {
        lVar18 = lVar29;
        if (uVar7 == uVar5) {
          lVar22 = *in_stack_000001e8;
          if (lVar22 == 0) goto LAB_03793c9c;
          uVar20 = uVar7;
          if ((uVar28 != 0x200b & (bVar11 ^ 1)) == 0) {
            lVar18 = lVar23;
            uVar20 = uVar6;
          }
          if (*(uint *)(lVar22 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
        }
        else {
          if (iVar13 <= (int)uVar7) {
LAB_03792fdc:
            if ((int)uVar7 < iVar13) {
              iVar13 = FUN_036d3364(lVar21,0);
              if (*(uint *)(unaff_x21 + 0x18) <= uStack00000000000001bc) goto thunk_FUN_01ab6c44;
              lVar18 = *(long *)(unaff_x21 + lStack00000000000001a8 + -0x134);
              if (lVar18 == 0) goto LAB_03793c9c;
              iVar14 = FUN_036d3364(lVar18,0);
              if (iVar13 != iVar14) goto LAB_03792ef4;
            }
            if (bVar9 == false) {
              bStack0000000000000180 = 1;
              goto LAB_03793338;
            }
            lVar18 = *in_stack_000001e8;
            if (lVar18 != 0) {
              if (uStack00000000000001bc - 2 < *(uint *)(lVar18 + 0x18)) {
                fVar41 = *(float *)(lVar18 + lStack00000000000001a8 + -0x334);
                uVar33 = *(undefined4 *)(lVar18 + lStack00000000000001a8 + -0x354);
                goto LAB_037932fc;
              }
              goto thunk_FUN_01ab6c44;
            }
            goto LAB_03793c9c;
          }
          lVar22 = *in_stack_000001e8;
          if (lVar22 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar22 + 0x18) <= uStack00000000000001bc) goto thunk_FUN_01ab6c44;
          if (*(float *)(lVar22 + lStack00000000000001a8 + -0x10c) == in_stack_000000a8) {
            fVar42 = *(float *)(lVar22 + lStack00000000000001a8 + -0x24);
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0
                        ) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar15 = FUN_037a2200(fVar41 + fVar42,in_stack_000000a0._4_4_,0);
            if ((uVar15 & 1) != 0) {
              iVar13 = *in_stack_000001d0;
              goto LAB_03792fdc;
            }
            lVar22 = *in_stack_000001e8;
            if (lVar22 == 0) goto LAB_03793c9c;
          }
          uVar20 = uVar7;
          if ((int)uVar6 < (int)uVar7) {
            lVar18 = lVar23;
            uVar20 = uVar6;
          }
          if (*(uint *)(lVar22 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
        }
        lVar22 = lVar22 + lVar18 * unaff_x29;
      }
      fVar41 = *(float *)(lVar22 + 0x150);
      uVar33 = *(undefined4 *)(lVar22 + 0x130);
LAB_037932fc:
      FUN_0379d0d0(in_stack_000000e8._4_4_,fStack00000000000000e0,uStack00000000000000dc,uVar33,
                   in_stack_000000f0 * fVar37 + fVar41,0,in_stack_000000f0,in_stack_000000f0);
      bStack0000000000000180 = 0;
    }
LAB_03793338:
    lVar18 = *in_stack_000001e8;
    if (lVar18 == 0) goto LAB_03793c9c;
    uVar20 = (uint)*(undefined8 *)(lVar18 + 0x18);
    if (uVar20 <= uVar7) goto thunk_FUN_01ab6c44;
    _uStack0000000000000168 = CONCAT44(uStack000000000000016c,uVar17);
    if ((*(byte *)(lVar18 + lVar29 * unaff_x29 + 0x19d) >> 1 & 1) == 0) {
      if ((unaff_w22 & 1) != 0) {
        FUN_0379dd0c(in_stack_00000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
      }
LAB_03793428:
      unaff_w22 = 0;
      uVar28 = uStack00000000000001bc;
    }
    else {
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar7) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar1)) {
        bVar9 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar9 = *(int *)(lVar18 + lVar29 * unaff_x29 + 0x70) + 1 !=
                *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar9 = false;
      }
      if ((unaff_w22 & 1) == 0) {
        if (((uVar28 == 0xd) || ((uVar28 & 0xfffe) == 10)) || (((int)uVar6 < (int)uVar7 || (bVar9)))
           ) goto LAB_03793428;
        if (uVar7 == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar15 = FUN_026b97f8(uVar28,0);
          if ((uVar15 & 1) != 0) goto LAB_03793428;
        }
        puVar8 = Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        lVar21 = *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar21 = *(long *)puVar8;
        }
        lVar18 = *in_stack_000001e8;
        if (lVar18 == 0) goto LAB_03793c9c;
        uVar20 = (uint)*(undefined8 *)(lVar18 + 0x18);
        if (uVar20 <= uVar7) goto thunk_FUN_01ab6c44;
        pfVar25 = *(float **)(lVar21 + 0xb8);
        in_stack_00000128 = *pfVar25;
        in_stack_00000140._4_4_ = pfVar25[1];
        fStack000000000000012c = pfVar25[2];
        fStack0000000000000130 = pfVar25[3];
        uStack0000000000000124 = 0;
      }
      if (uVar20 <= uVar7) goto thunk_FUN_01ab6c44;
      lVar18 = lVar18 + lVar29 * unaff_x29;
      fVar42 = *(float *)(lVar18 + 0x130);
      fVar34 = *(float *)(lVar18 + 0x124);
      fVar41 = *(float *)(lVar18 + 0x148);
      fVar32 = *(float *)(lVar18 + 0x14c);
      fVar35 = *(float *)(lVar18 + 0x154);
      fVar37 = *(float *)(lVar18 + 0x164);
      uVar15 = FUN_037a20cc(&stack0x00000210,&stack0x000001f0,0);
      uVar28 = uStack00000000000001bc;
      lVar18 = *(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
      if ((uVar15 & 1) == 0) {
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar18);
        }
        fVar38 = (float)FUN_037a1dd8(in_stack_000000b8,0);
        bVar10 = (bVar11 & 1) == 0;
        if (bVar10) {
          fVar41 = fVar34;
        }
        if (bVar10) {
          fVar37 = fVar42;
        }
        if (fVar41 - fVar38 <= in_stack_00000128) {
          in_stack_00000128 = fVar41 - fVar38;
        }
        fVar41 = (float)FUN_037a1de0(in_stack_000000b8,0);
        if (fStack000000000000012c <= fVar37 + fVar41) {
          fStack000000000000012c = fVar37 + fVar41;
        }
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar41 = (float)FUN_037a1df0(in_stack_000000b8,0);
        if (fVar35 - fVar41 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar35 - fVar41;
        }
        fVar41 = (float)FUN_037a1de8(in_stack_000000b8,0);
        if (fStack0000000000000130 <= fVar32 + fVar41) {
          fStack0000000000000130 = fVar32 + fVar41;
        }
      }
      else {
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar18);
        }
        fVar38 = (float)FUN_037a1de0(in_stack_000000b8,0);
        if ((bVar11 & 1) == 0) {
          fVar41 = fVar34;
        }
        if (fVar35 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar35;
        }
        fVar34 = (fVar41 + (fStack000000000000012c - fVar38)) * 0.5;
        fVar41 = fStack0000000000000130;
        if (fStack0000000000000130 <= fVar32) {
          fVar41 = fVar32;
        }
        FUN_0379dd0c(in_stack_00000128,in_stack_00000140._4_4_,uStack0000000000000124,fVar34,fVar41,
                     uStack0000000000000124);
        puVar8 = Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar31 = uStack0000000000000098;
        in_stack_00000140._4_4_ = (float)FUN_037a1df0(uStack0000000000000098,0);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000140._4_4_ = fVar35 - in_stack_00000140._4_4_;
        fVar41 = (float)FUN_037a1de0(uVar31,0);
        fVar35 = (float)FUN_037a1de8(uVar31,0);
        if ((bVar11 & 1) == 0) {
          fVar37 = fVar42;
        }
        fStack000000000000012c = fVar37 + fVar41;
        uStack0000000000000124 = 0;
        in_stack_00000128 = fVar34;
        fStack0000000000000130 = fVar32 + fVar35;
      }
      if ((((*in_stack_000001d0 == 1) || (uVar7 == uVar5)) || ((int)uVar6 <= (int)uVar7)) || (bVar9)
         ) {
        FUN_0379dd0c(in_stack_00000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
        unaff_w22 = 0;
      }
      else {
        unaff_w22 = 1;
      }
    }
    puVar8 = Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
    unaff_x20 = 0x60;
    iVar13 = *in_stack_000001d0;
    iStack0000000000000178 = iStack0000000000000178 + 1;
    in_w9 = uVar28 + 1;
    lStack00000000000001a8 = lStack00000000000001a8 + 0x188;
    unaff_x27 = in_stack_000001c0;
    unaff_w24 = uVar1;
  } while ((int)uVar28 < iVar13);
  *(int *)(in_stack_000001c0 + 0x10) = iVar13;
  uVar33 = *(undefined4 *)(unaff_x19 + 0x15c0);
  *(uint *)(in_stack_000001c0 + 0x24) = uVar1 + 1;
  iVar14 = iStack0000000000000138;
  if (iVar13 < 1 || iStack0000000000000138 == 0) {
    iVar14 = 1;
  }
  *(int *)(in_stack_000001c0 + 0x1c) = iVar14;
  *(undefined4 *)(in_stack_000001c0 + 0x14) = uVar33;
  *(int *)(in_stack_000001c0 + 0x28) = *(int *)(unaff_x19 + 0x350) + 1;
  if (1 < *(int *)(in_stack_000001c0 + 0x2c)) {
    uVar15 = 1;
    lVar18 = 0x70;
    do {
      lVar21 = *(long *)(in_stack_000001c0 + 0x58);
      if (lVar21 == 0) {
LAB_03793c9c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(uint *)(lVar21 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
      FUN_03785ba0(lVar21 + lVar18,0);
      if (*(int *)(in_stack_000001e0 + 0x100) != 0) {
        lVar21 = *(long *)(in_stack_000001c0 + 0x58);
        if (lVar21 == 0) goto LAB_03793c9c;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar21 + 0x18) <= uVar15) {
thunk_FUN_01ab6c44:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03785bdc(lVar21 + lVar18,1,0);
      }
      uVar15 = uVar15 + 1;
      lVar18 = lVar18 + 0x50;
    } while ((long)uVar15 < (long)*(int *)(in_stack_000001c0 + 0x2c));
  }
  if (*(long *)(in_stack_00000110 + 0x28) == in_stack_00001a38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


