/*
FUNCTION_NAME: UnityEngine.AndroidReflection$$NewProxyInstance
ENTRY_POINT: 0354efac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_18;weak_xr_or_state_hits_18;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_18
*/


void UnityEngine_AndroidReflection__NewProxyInstance(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  char cVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  code *pcVar18;
  long in_x9;
  long lVar19;
  long *unaff_x19;
  int *unaff_x20;
  undefined8 uVar20;
  uint uVar21;
  uint unaff_w21;
  long lVar22;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uVar23;
  long lVar24;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  int unaff_w28;
  long unaff_x29;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float unaff_s11;
  float fVar34;
  float fVar35;
  float unaff_s14;
  float unaff_s15;
  uint uStack0000000000000030;
  int iStack0000000000000034;
  float in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  float fStack0000000000000058;
  int iStack000000000000005c;
  float fStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  int *in_stack_00000090;
  undefined4 uStack0000000000000098;
  float fStack000000000000009c;
  undefined4 in_stack_000000a0;
  float in_stack_000000a8;
  undefined8 in_stack_000000b8;
  undefined4 uStack00000000000000c0;
  float fStack00000000000000c4;
  long in_stack_000000c8;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  int in_stack_000000d8;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  long in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  long in_stack_00000110;
  uint uStack0000000000000118;
  uint uStack000000000000011c;
  long in_stack_00000128;
  undefined8 in_stack_00000130;
  float in_stack_00000150;
  undefined8 in_stack_00000168;
  uint in_stack_00000170;
  uint in_stack_00000178;
  uint in_stack_00000180;
  undefined8 in_stack_00000188;
  float fStack0000000000000190;
  float fStack0000000000000194;
  float in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  float in_stack_000001b0;
  undefined8 in_stack_000017c0;
  undefined8 in_stack_000017c8;
  float in_stack_000017d0;
  undefined4 in_stack_000017d4;
  
code_r0x0354efac:
  if (in_x9 != 0) {
    if (*(uint *)(in_x9 + 0x18) <= in_stack_00000170)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    if (*(float *)(in_x9 + unaff_x26 + -0x108) == in_stack_00000048._4_4_) {
      fVar31 = *(float *)(in_x9 + unaff_x26 + -0x1c);
      if (*(int *)(*(long *)OVRPlugin_LayerLayout_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar11 = FUN_03567bac(in_stack_00000150 + fVar31,in_stack_00000040,0);
      if ((uVar11 & 1) != 0) {
        iVar9 = *unaff_x20;
        uVar17 = in_stack_00000170;
        goto LAB_0354f010;
      }
      param_1 = *unaff_x22;
      if (param_1 == 0) goto LAB_0354fbf4;
    }
    lVar12 = *(long *)(param_1 + 0x38);
    if (lVar12 != 0) {
      if ((int)(uint)unaff_x27 < (int)unaff_w24) {
        bVar8 = *(uint *)(lVar12 + 0x18) <= (uint)unaff_x27;
        lVar24 = unaff_x27;
        goto LAB_0354f1e0;
      }
      bVar8 = *(uint *)(lVar12 + 0x18) <= unaff_w24;
      lVar24 = unaff_x29;
LAB_0354f1f0:
      unaff_x29 = lVar24;
      if (!bVar8) {
        do {
          lVar12 = lVar12 + lVar24 * unaff_x23;
          fVar31 = *(float *)(lVar12 + 0x14c);
          uVar25 = *(undefined4 *)(lVar12 + 0x128);
          pcVar18 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0354f214:
          fVar30 = unaff_s11 * in_stack_000000a8;
LAB_0354f21c:
          (*pcVar18)(in_stack_000000a0,fStack000000000000009c,uStack0000000000000098,uVar25,
                     fVar30 + fVar31,0,in_stack_000000a8,in_stack_000000a8);
          uVar17 = in_stack_00000170;
LAB_0354f250:
          in_stack_00000170 = uVar17;
          bVar8 = false;
          uVar15 = in_stack_00000180;
LAB_0354f254:
          if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 == 0))
          goto LAB_0354fbf4;
          uVar17 = (uint)*(undefined8 *)(lVar12 + 0x18);
          if (uVar17 <= unaff_w24) break;
          if ((*(byte *)(lVar12 + unaff_x29 * unaff_x23 + 0x191) >> 1 & 1) == 0) {
            if ((uStack0000000000000118 & 1) != 0) {
              (**(code **)(*unaff_x19 + 0x8e8))
                        (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                         fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
            }
LAB_0354f604:
            uStack0000000000000118 = 0;
          }
          else {
            if ((((int)unaff_x19[0x65] < (int)unaff_w24) || ((int)unaff_x19[0x66] < (int)uVar15)) ||
               (((int)unaff_x19[0x5c] == 5 &&
                (*(int *)(lVar12 + unaff_x29 * unaff_x23 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((uStack0000000000000118 & 1) == 0) {
              if ((((in_stack_00000178 != 0xd) && ((in_stack_00000178 & 0xfffe) != 10)) &&
                  ((int)unaff_w24 <= (int)(uint)unaff_x27)) && (bVar1)) {
                if (unaff_w24 == (uint)unaff_x27) {
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar11 = FUN_026b97f8(in_stack_00000178,0);
                  if ((uVar11 & 1) != 0) goto LAB_0354f374;
                }
                puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                lVar24 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                if (*(int *)(lVar24 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar24 = *(long *)puVar6;
                }
                unaff_x23 = 0x178;
                if ((*unaff_x22 != 0) && (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 != 0)) {
                  uVar17 = (uint)*(undefined8 *)(lVar12 + 0x18);
                  if (unaff_w24 < uVar17) {
                    lVar24 = *(long *)(lVar24 + 0xb8);
                    lVar22 = lVar12 + unaff_x29 * 0x178;
                    in_stack_000017c8 = *(undefined8 *)(lVar22 + 0x184);
                    in_stack_000017c0 = *(undefined8 *)(lVar22 + 0x17c);
                    fStack00000000000000e0 = *(float *)(lVar24 + 0x1598);
                    fStack00000000000000e4 = *(float *)(lVar24 + 0x159c);
                    in_stack_000017d0 = *(float *)(lVar22 + 0x18c);
                    fStack00000000000000d0 = *(float *)(lVar24 + 0x15a0);
                    fStack00000000000000d4 = *(float *)(lVar24 + 0x15a4);
                    uStack00000000000000c0 = 0;
                    goto LAB_0354f400;
                  }
                  break;
                }
                goto LAB_0354fbf4;
              }
LAB_0354f374:
              uStack0000000000000118 = 0;
            }
            else {
LAB_0354f400:
              if (uVar17 <= unaff_w24) break;
              lVar12 = lVar12 + unaff_x29 * unaff_x23;
              fVar30 = *(float *)(lVar12 + 0x128);
              fVar26 = *(float *)(lVar12 + 0x188);
              uVar23 = *(undefined8 *)(lVar12 + 0x17c);
              fVar33 = *(float *)(lVar12 + 0x184);
              uVar20 = *(undefined8 *)(lVar12 + 0x184);
              fVar32 = *(float *)(lVar12 + 0x18c);
              fVar31 = *(float *)(lVar12 + 0x11c);
              fVar27 = *(float *)(lVar12 + 0x148);
              fVar28 = *(float *)(lVar12 + 0x150);
              in_stack_00000188 = uVar23;
              fStack0000000000000190 = fVar33;
              fStack0000000000000194 = fVar26;
              in_stack_00000198 = fVar32;
              in_stack_000001a0 = in_stack_000017c0;
              in_stack_000001a8 = in_stack_000017c8;
              in_stack_000001b0 = in_stack_000017d0;
              uVar11 = FUN_03568490(&stack0x000001a0,&stack0x00000188,0);
              lVar12 = *(long *)OVRPlugin_Mesh_TypeInfo;
              if ((uVar11 & 1) == 0) {
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(lVar12);
                }
                fVar30 = fVar30 + (float)in_stack_000017c8;
                fVar31 = fVar31 - (float)((ulong)in_stack_000017c0 >> 0x20);
                fVar27 = fVar27 + (float)((ulong)in_stack_000017c8 >> 0x20);
                if (fVar31 <= fStack00000000000000e0) {
                  fStack00000000000000e0 = fVar31;
                }
                if (fVar28 - in_stack_000017d0 <= fStack00000000000000e4) {
                  fStack00000000000000e4 = fVar28 - in_stack_000017d0;
                }
                if (fStack00000000000000d0 <= fVar30) {
                  fStack00000000000000d0 = fVar30;
                }
                if (fStack00000000000000d4 <= fVar27) {
                  fStack00000000000000d4 = fVar27;
                }
              }
              else {
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_01a58e78(lVar12);
                }
                fVar31 = (fVar31 + (fStack00000000000000d0 - (float)in_stack_000017c8)) * 0.5;
                if (fVar28 <= fStack00000000000000e4) {
                  fStack00000000000000e4 = fVar28;
                }
                if (fStack00000000000000d4 <= fVar27) {
                  fStack00000000000000d4 = fVar27;
                }
                (**(code **)(*unaff_x19 + 0x8e8))
                          (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                           fVar31,fStack00000000000000d4,uStack00000000000000c0);
                fStack00000000000000e4 = fVar28 - fVar32;
                fStack00000000000000d0 = fVar30 + fVar33;
                uStack00000000000000c0 = 0;
                fStack00000000000000d4 = fVar27 + fVar26;
                fStack00000000000000e0 = fVar31;
                in_stack_000017c0 = uVar23;
                in_stack_000017c8 = uVar20;
                in_stack_000017d0 = fVar32;
              }
              unaff_x23 = 0x178;
              if (((*unaff_x20 == 1) || (unaff_w24 == (uint)in_stack_000000e8)) ||
                 (((int)in_stack_00000128 <= (int)unaff_w24 || (!bVar1)))) {
                (**(code **)(*unaff_x19 + 0x8e8))
                          (fStack00000000000000e0,fStack00000000000000e4,uStack00000000000000c0,
                           fStack00000000000000d0,fStack00000000000000d4,uStack00000000000000c0);
                goto LAB_0354f604;
              }
              uStack0000000000000118 = 1;
            }
          }
          puVar6 = OVRPlugin_Media_TypeInfo;
          iVar9 = *unaff_x20;
          unaff_w28 = unaff_w28 + 1;
          uVar17 = in_stack_00000170 + 1;
          unaff_x26 = unaff_x26 + 0x178;
          if (iVar9 <= (int)in_stack_00000170) {
            lVar12 = *unaff_x22;
            if (lVar12 == 0) goto LAB_0354fbf4;
            *(int *)(lVar12 + 0x18) = iVar9;
            lVar24 = unaff_x19[0xd4];
            *(uint *)(lVar12 + 0x2c) = uVar15 + 1;
            if (iVar9 < 1 || in_stack_000000d8 == 0) {
              in_stack_000000d8 = 1;
            }
            *(int *)(lVar12 + 0x1c) = (int)lVar24;
            *(int *)(lVar12 + 0x24) = in_stack_000000d8;
            *(int *)(lVar12 + 0x30) = (int)unaff_x19[0x96] + 1;
            if (((int)unaff_x19[99] != 0xff) ||
               (uVar11 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar11 & 1) == 0)) goto LAB_0354d0cc;
            lVar12 = unaff_x19[0xdb];
            if (lVar12 != 0) {
              (**(code **)(lVar12 + 0x18))
                        (*(undefined8 *)(lVar12 + 0x40),*unaff_x22,*(undefined8 *)(lVar12 + 0x28));
            }
            if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
              if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x60), lVar12 == 0))
              goto LAB_0354fbf4;
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              if (*(int *)(lVar12 + 0x18) == 0) break;
              FUN_03596b20(lVar12 + 0x20,1,0);
            }
            if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
            FUN_036aa790(unaff_x19[0x74],0);
            if ((unaff_x19[0x6d] == 0) || (lVar12 = *(long *)(unaff_x19[0x6d] + 0x60), lVar12 == 0))
            goto LAB_0354fbf4;
            if (*(int *)(lVar12 + 0x18) == 0) break;
            if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
            FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar12 + 0x30),0);
            if ((unaff_x19[0x6d] == 0) || (lVar12 = *(long *)(unaff_x19[0x6d] + 0x60), lVar12 == 0))
            goto LAB_0354fbf4;
            if (*(int *)(lVar12 + 0x18) == 0) break;
            if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
            FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar12 + 0x48),0);
            if ((unaff_x19[0x6d] == 0) || (lVar12 = *(long *)(unaff_x19[0x6d] + 0x60), lVar12 == 0))
            goto LAB_0354fbf4;
            if (*(int *)(lVar12 + 0x18) == 0) break;
            if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
            FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar12 + 0x50),0);
            if ((unaff_x19[0x6d] == 0) || (lVar12 = *(long *)(unaff_x19[0x6d] + 0x60), lVar12 == 0))
            goto LAB_0354fbf4;
            if (*(int *)(lVar12 + 0x18) == 0) break;
            if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
            FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar12 + 0x58),0);
            if (unaff_x19[0x74] == 0) goto LAB_0354fbf4;
            FUN_036aa280(unaff_x19[0x74],0);
            lVar12 = *unaff_x22;
            if (lVar12 == 0) goto LAB_0354fbf4;
            lVar22 = 0;
            lVar24 = 0;
            goto LAB_0354f97c;
          }
          if (*(uint *)(unaff_x25 + 0x18) <= in_stack_00000170) break;
          if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x50), lVar12 == 0))
          goto LAB_0354fbf4;
          unaff_x29 = (long)(int)in_stack_00000170;
          lVar24 = unaff_x25 + unaff_x29 * unaff_x23;
          in_stack_00000180 = *(uint *)(lVar24 + 100);
          if (*(uint *)(lVar12 + 0x18) <= in_stack_00000180) break;
          in_stack_00000110 = *(long *)(lVar24 + 0x38);
          lVar22 = (long)(int)in_stack_00000180;
          lVar12 = lVar12 + lVar22 * 0x5c;
          uVar21 = *(uint *)(lVar12 + 0x68);
          in_stack_00000178 = (uint)*(ushort *)(lVar24 + 0x20);
          uVar4 = *(uint *)(lVar12 + 0x3c);
          in_stack_000000e8 = (long)(int)uVar4;
          iVar2 = *(int *)(lVar12 + 0x20);
          iVar9 = *(int *)(lVar12 + 0x28);
          iVar10 = *(int *)(lVar12 + 0x2c);
          fVar27 = *(float *)(lVar12 + 0x4c);
          uVar5 = *(uint *)(lVar12 + 0x40);
          unaff_x27 = (long)(int)uVar5;
          fVar26 = *(float *)(lVar12 + 0x54);
          fVar31 = *(float *)(lVar12 + 0x58);
          fVar33 = *(float *)(lVar12 + 0x5c);
          fVar34 = *(float *)(lVar12 + 0x60);
          fVar32 = *(float *)(lVar12 + 0x6c);
          fVar35 = *(float *)(lVar12 + 0x70);
          fVar30 = *(float *)(lVar12 + 0x74);
          fVar28 = *(float *)(lVar12 + 0x78);
          if ((int)uVar21 < 9) {
            switch(uVar21) {
            case 1:
              if ((char)unaff_x19[0x1e] == '\0') {
                in_stack_000000f8._4_4_ = fVar34 + 0.0;
              }
              else {
                in_stack_000000f8._4_4_ = 0.0 - fVar31;
              }
              break;
            case 2:
LAB_0354d968:
              in_stack_000000f8._4_4_ = (fVar34 + fVar33 * 0.5) - fVar31 * 0.5;
              break;
            default:
              goto switchD_0354d8a4_caseD_3;
            case 4:
              in_stack_000000f8._4_4_ = (fVar33 + fVar34) - fVar31;
              if ((char)unaff_x19[0x1e] != '\0') {
                in_stack_000000f8._4_4_ = fVar33 + fVar34;
              }
              break;
            case 8:
              goto switchD_0354d8a4_caseD_8;
            }
LAB_0354d9d8:
            in_stack_000000f0 = 0;
          }
          else if (uVar21 == 0x10) {
switchD_0354d8a4_caseD_8:
            if (in_stack_00000178 < 0xad) {
              if ((in_stack_00000178 != 3) && (in_stack_00000178 != 10)) {
FUN_0354d8fc:
                if (*(uint *)(unaff_x25 + 0x18) <= uVar4) break;
                uVar3 = *(undefined2 *)(in_stack_000000c8 + in_stack_000000e8 * 0x178 + 0x20);
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar11 = FUN_026b8cc4(uVar3,0);
                if ((uVar11 & 1) == 0) {
                  bVar1 = (int)in_stack_00000180 < (int)unaff_x19[0x95];
                }
                else {
                  bVar1 = false;
                }
                if ((fVar31 <= fVar33) && (!bVar1 && uVar21 >> 4 == 0)) {
                  in_stack_000000f8._4_4_ = fVar34;
                  if ((char)unaff_x19[0x1e] != '\0') {
                    in_stack_000000f8._4_4_ = fVar33 + fVar34;
                  }
                  goto LAB_0354d9d8;
                }
                if (((uVar17 == 1) || (in_stack_00000180 != uVar15)) ||
                   (in_stack_00000170 == *(uint *)((long)unaff_x19 + 0x324))) {
                  in_stack_000000f8._4_4_ = fVar34;
                  if ((char)unaff_x19[0x1e] != '\0') {
                    in_stack_000000f8._4_4_ = fVar33 + fVar34;
                  }
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uStack0000000000000030 = FUN_026b97f8(in_stack_00000178,0);
                  in_stack_000000f0 = 0;
                }
                else {
                  cVar14 = (char)unaff_x19[0x1e];
                  fVar34 = -fVar31;
                  if (cVar14 != '\0') {
                    fVar34 = fVar31;
                  }
                  if (*(uint *)(in_stack_000000c8 + 0x18) <= uVar4) break;
                  iVar10 = (int)*(char *)(in_stack_000000c8 + in_stack_000000e8 * 0x178 + 0x194) +
                           (-iVar2 - (uStack0000000000000030 & 1)) + iVar10 + -1;
                  if (iVar10 < 1) {
                    fVar31 = 1.0;
                    iVar10 = 1;
                  }
                  else {
                    fVar31 = *(float *)((long)unaff_x19 + 0x2dc);
                  }
                  if (in_stack_00000178 == 9) {
LAB_0354f76c:
                    fVar31 = 1.0 - fVar31;
                  }
                  else {
                    if (in_stack_00000178 != 0xa0) {
                      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar11 = FUN_026b97f8(in_stack_00000178,0);
                      cVar14 = (char)unaff_x19[0x1e];
                      if ((uVar11 & 1) != 0) goto LAB_0354f76c;
                    }
                    iVar10 = (iVar2 - (~uStack0000000000000030 & 1)) + iVar9;
                  }
                  fVar31 = ((fVar33 + fVar34) * fVar31) / (float)iVar10;
                  if (cVar14 == '\0') {
                    in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ + fVar31;
                    in_stack_000000f0 =
                         CONCAT44((float)((ulong)in_stack_000000f0 >> 0x20) + 0.0,
                                  (float)in_stack_000000f0 + 0.0);
                  }
                  else {
                    in_stack_000000f8._4_4_ = in_stack_000000f8._4_4_ - fVar31;
                  }
                }
              }
            }
            else if (((in_stack_00000178 != 0xad) && (in_stack_00000178 != 0x200b)) &&
                    (in_stack_00000178 != 0x2060)) goto FUN_0354d8fc;
          }
          else if (uVar21 == 0x20) {
            fVar31 = fVar32 + fVar30;
            goto LAB_0354d968;
          }
switchD_0354d8a4_caseD_3:
          uVar21 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
          if (uVar21 <= in_stack_00000170) break;
          lVar12 = in_stack_000000c8 + unaff_x29 * 0x178;
          fVar33 = fStack00000000000000c4 + in_stack_000000f8._4_4_;
          in_stack_00000150 = (float)in_stack_000000b8 + (float)in_stack_000000f0;
          fVar31 = (float)((ulong)in_stack_000000b8 >> 0x20) +
                   (float)((ulong)in_stack_000000f0 >> 0x20);
          if (*(char *)(lVar12 + 0x194) == '\0') goto LAB_0354e1d0;
          iVar9 = *(int *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x2c);
          if (iVar9 != 0) goto LAB_0354e05c;
          fVar34 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)in_stack_00000180,1.0);
          switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
          case 0:
            lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
            *(undefined4 *)(lVar24 + 0x84) = 0;
            *(undefined4 *)(lVar24 + 0xac) = 0;
            *(undefined4 *)(lVar24 + 0xd4) = 0x3f800000;
            fVar34 = 1.0;
            break;
          case 1:
            fVar28 = *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x70);
            if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
              lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
              fVar30 = (in_stack_000000f8._4_4_ + fVar28) - *(float *)(in_stack_00000078 + 0x230);
              fVar28 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230)
              ;
              goto LAB_0354db24;
            }
            lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
            fVar30 = fVar30 - fVar32;
            *(float *)(lVar24 + 0x84) = fVar34 + (fVar28 - fVar32) / fVar30;
            *(float *)(lVar24 + 0xac) = fVar34 + (*(float *)(lVar24 + 0x98) - fVar32) / fVar30;
            *(float *)(lVar24 + 0xd4) = fVar34 + (*(float *)(lVar24 + 0xc0) - fVar32) / fVar30;
            fVar34 = fVar34 + (*(float *)(lVar24 + 0xe8) - fVar32) / fVar30;
            break;
          case 2:
            lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
            fVar28 = *(float *)(in_stack_00000078 + 0x238) - *(float *)(in_stack_00000078 + 0x230);
            fVar30 = (in_stack_000000f8._4_4_ + *(float *)(lVar24 + 0x70)) -
                     *(float *)(in_stack_00000078 + 0x230);
LAB_0354db24:
            *(float *)(lVar24 + 0x84) = fVar34 + fVar30 / fVar28;
            *(float *)(lVar24 + 0xac) =
                 fVar34 + ((in_stack_000000f8._4_4_ + *(float *)(lVar24 + 0x98)) -
                          *(float *)(in_stack_00000078 + 0x230)) /
                          (*(float *)(in_stack_00000078 + 0x238) -
                          *(float *)(in_stack_00000078 + 0x230));
            *(float *)(lVar24 + 0xd4) =
                 fVar34 + ((in_stack_000000f8._4_4_ + *(float *)(lVar24 + 0xc0)) -
                          *(float *)(in_stack_00000078 + 0x230)) /
                          (*(float *)(in_stack_00000078 + 0x238) -
                          *(float *)(in_stack_00000078 + 0x230));
            fVar34 = fVar34 + ((in_stack_000000f8._4_4_ + *(float *)(lVar24 + 0xe8)) -
                              *(float *)(in_stack_00000078 + 0x230)) /
                              (*(float *)(in_stack_00000078 + 0x238) -
                              *(float *)(in_stack_00000078 + 0x230));
            break;
          case 3:
            switch((int)unaff_x19[0x62]) {
            case 0:
              lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
              *(undefined4 *)(lVar24 + 0x88) = 0;
              *(undefined4 *)(lVar24 + 0xb0) = 0x3f800000;
              *(undefined4 *)(lVar24 + 0xd8) = 0;
              *(undefined4 *)(lVar24 + 0x100) = 0x3f800000;
              break;
            case 1:
              lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
              fVar28 = fVar28 - fVar35;
              fVar30 = fVar34 + (*(float *)(lVar24 + 0x74) - fVar35) / fVar28;
              fVar28 = fVar34 + (*(float *)(lVar24 + 0x9c) - fVar35) / fVar28;
              *(float *)(lVar24 + 0x88) = fVar30;
              *(float *)(lVar24 + 0xb0) = fVar28;
              *(float *)(lVar24 + 0xd8) = fVar30;
              *(float *)(lVar24 + 0x100) = fVar28;
              break;
            case 2:
              lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
              fVar30 = fVar34 + (*(float *)(lVar24 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                                (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
              *(float *)(lVar24 + 0x88) = fVar30;
              fVar28 = *(float *)(unaff_x19 + 0x9c);
              fVar32 = *(float *)(unaff_x19 + 0x9d);
              *(float *)(lVar24 + 0xd8) = fVar30;
              fVar30 = fVar34 + (*(float *)(lVar24 + 0x9c) - fVar28) / (fVar32 - fVar28);
              *(float *)(lVar24 + 0xb0) = fVar30;
              *(float *)(lVar24 + 0x100) = fVar30;
              break;
            case 3:
              if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
              uVar21 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
            }
            if (uVar21 <= in_stack_00000170)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
            fVar30 = *(float *)(lVar24 + 0x15c);
            fVar28 = (1.0 - (*(float *)(lVar24 + 0x88) + *(float *)(lVar24 + 0xb0)) * fVar30) * 0.5;
            fVar32 = fVar34 + *(float *)(lVar24 + 0x88) * fVar30 + fVar28;
            fVar34 = fVar34 + fVar28 + *(float *)(lVar24 + 0xb0) * fVar30;
            *(float *)(lVar24 + 0x84) = fVar32;
            *(float *)(lVar24 + 0xac) = fVar32;
            *(float *)(lVar24 + 0xd4) = fVar34;
            break;
          default:
            goto switchD_0354da88_default;
          }
          *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xfc) = fVar34;
switchD_0354da88_default:
          switch((int)unaff_x19[0x62]) {
          case 0:
            if (uVar21 <= in_stack_00000170)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
            *(undefined4 *)(lVar24 + 0x88) = 0;
            *(undefined4 *)(lVar24 + 0xb0) = 0x3f800000;
            *(undefined4 *)(lVar24 + 0xd8) = 0x3f800000;
            *(undefined4 *)(lVar24 + 0x100) = 0;
            break;
          case 1:
            if (in_stack_00000170 < uVar21) {
              lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
              fVar27 = fVar27 - fVar26;
              fVar30 = (*(float *)(lVar24 + 0x74) - fVar26) / fVar27;
              fVar27 = (*(float *)(lVar24 + 0x9c) - fVar26) / fVar27;
              *(float *)(lVar24 + 0x88) = fVar30;
              goto LAB_0354de84;
            }
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
          case 2:
            if (uVar21 <= in_stack_00000170)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
            fVar30 = (*(float *)(lVar24 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                     (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
            *(float *)(lVar24 + 0x88) = fVar30;
            fVar27 = (*(float *)(lVar24 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
                     (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_0354de84:
            *(float *)(lVar24 + 0xb0) = fVar27;
            *(float *)(lVar24 + 0xd8) = fVar27;
            *(float *)(lVar24 + 0x100) = fVar30;
            break;
          case 3:
            if (uVar21 <= in_stack_00000170)
            goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
            lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
            fVar28 = *(float *)(lVar24 + 0x15c);
            fVar27 = (1.0 - (*(float *)(lVar24 + 0x84) + *(float *)(lVar24 + 0xd4)) / fVar28) * 0.5;
            fVar30 = *(float *)(lVar24 + 0x84) / fVar28 + fVar27;
            fVar27 = fVar27 + *(float *)(lVar24 + 0xd4) / fVar28;
            *(float *)(lVar24 + 0x88) = fVar30;
            *(float *)(lVar24 + 0xb0) = fVar27;
            *(float *)(lVar24 + 0x100) = fVar30;
            *(float *)(lVar24 + 0xd8) = fVar27;
          }
          if (uVar21 <= in_stack_00000170) break;
          lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
          unaff_s14 = fStack0000000000000058 * *(float *)(lVar24 + 0x160) *
                      (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
          if ((*(char *)(lVar24 + 0x5c) == '\0') &&
             ((*(byte *)(in_stack_000000c8 + unaff_x29 * 0x178 + 400) & 1) != 0)) {
            unaff_s14 = -unaff_s14;
          }
          lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
          fVar27 = *(float *)(lVar24 + 0x88);
          fVar28 = *(float *)(lVar24 + 0x84);
          fVar30 = -2.1474836e+09;
          if (fVar28 != INFINITY) {
            fVar30 = (float)(int)fVar28;
          }
          fVar32 = *(float *)(lVar24 + 0xd4);
          fVar34 = *(float *)(lVar24 + 0xd8);
          fVar26 = -2.1474836e+09;
          if (fVar27 != INFINITY) {
            fVar26 = (float)(int)fVar27;
          }
          uVar25 = FUN_03591d3c(fVar28 - fVar30,fVar27 - fVar26);
          *(undefined4 *)(lVar24 + 0x84) = uVar25;
          if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170) break;
          fVar34 = fVar34 - fVar26;
          *(float *)(lVar24 + 0x88) = unaff_s14;
          uVar25 = FUN_03591d3c(fVar28 - fVar30,fVar34);
          *(undefined4 *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xac) = uVar25;
          if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170) break;
          fVar32 = fVar32 - fVar30;
          *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xb0) = unaff_s14;
          fVar30 = (float)FUN_03591d3c(fVar32,fVar34);
          *(float *)(lVar24 + 0xd4) = fVar30;
          if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170) break;
          *(float *)(lVar24 + 0xd8) = unaff_s14;
          uVar25 = FUN_03591d3c(fVar32,fVar27 - fVar26);
          *(undefined4 *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0xfc) = uVar25;
          uVar21 = (uint)*(undefined8 *)(in_stack_000000c8 + 0x18);
          if (uVar21 <= in_stack_00000170) break;
          *(float *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x100) = unaff_s14;
          unaff_x22 = in_stack_00000050;
LAB_0354e05c:
          if (((int)in_stack_00000170 < (int)unaff_x19[0x65]) &&
             (in_stack_000000d8 < *(int *)((long)unaff_x19 + 0x32c))) {
            if (((int)unaff_x19[0x66] <= (int)in_stack_00000180) || ((int)unaff_x19[0x5c] == 5)) {
              if (((int)in_stack_00000180 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
                if (in_stack_00000170 < uVar21) {
                  if (*(int *)(in_stack_000000c8 + unaff_x29 * 0x178 + 0x68) ==
                      iStack0000000000000034) goto LAB_0354f0d4;
                  goto LAB_0354e0cc;
                }
                break;
              }
              goto LAB_0354e0cc;
            }
            if (uVar21 <= in_stack_00000170) break;
LAB_0354f0d4:
            lVar12 = in_stack_000000c8 + unaff_x29 * 0x178;
            *(ulong *)(lVar12 + 0x70) =
                 CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar12 + 0x70) >> 0x20)
                          ,fVar33 + (float)*(undefined8 *)(lVar12 + 0x70));
            *(float *)(lVar12 + 0x78) = fVar31 + *(float *)(lVar12 + 0x78);
            *(ulong *)(lVar12 + 0x98) =
                 CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar12 + 0x98) >> 0x20)
                          ,fVar33 + (float)*(undefined8 *)(lVar12 + 0x98));
            *(float *)(lVar12 + 0xa0) = fVar31 + *(float *)(lVar12 + 0xa0);
            *(ulong *)(lVar12 + 0xc0) =
                 CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar12 + 0xc0) >> 0x20)
                          ,fVar33 + (float)*(undefined8 *)(lVar12 + 0xc0));
            *(float *)(lVar12 + 200) = fVar31 + *(float *)(lVar12 + 200);
            *(ulong *)(lVar12 + 0xe8) =
                 CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar12 + 0xe8) >> 0x20)
                          ,fVar33 + (float)*(undefined8 *)(lVar12 + 0xe8));
            *(float *)(lVar12 + 0xf0) = fVar31 + *(float *)(lVar12 + 0xf0);
          }
          else {
LAB_0354e0cc:
            if (uVar21 <= in_stack_00000170) break;
            if (DAT_0411f172 == '\0') {
              FUN_01ab69ac();
              DAT_0411f172 = '\x01';
              uVar21 = *(uint *)(in_stack_000000c8 + 0x18);
            }
            puVar6 = PTR_DAT_03cbded8;
            uVar25 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
            lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
            *(undefined8 *)(lVar24 + 0x70) = **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
            *(undefined4 *)(lVar24 + 0x78) = uVar25;
            if (uVar21 <= in_stack_00000170) break;
            uVar25 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
            lVar24 = in_stack_000000c8 + unaff_x29 * 0x178;
            *(undefined8 *)(lVar24 + 0x98) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
            *(undefined4 *)(lVar24 + 0xa0) = uVar25;
            uVar25 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
            *(undefined8 *)(lVar24 + 0xc0) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
            *(undefined4 *)(lVar24 + 200) = uVar25;
            uVar25 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
            *(undefined8 *)(lVar24 + 0xe8) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
            *(undefined4 *)(lVar24 + 0xf0) = uVar25;
            *(undefined1 *)(lVar12 + 0x194) = 0;
          }
          if (iVar9 == 0) {
            pcVar18 = *(code **)(*unaff_x19 + 0x8a8);
LAB_0354e1b4:
            (*pcVar18)();
          }
          else if (iVar9 == 1) {
            pcVar18 = *(code **)(*unaff_x19 + 0x8c8);
            goto LAB_0354e1b4;
          }
LAB_0354e1d0:
          if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 == 0))
          goto LAB_0354fbf4;
          if (*(uint *)(lVar12 + 0x18) <= in_stack_00000170) break;
          lVar12 = lVar12 + unaff_x29 * 0x178;
          uVar20 = *(undefined8 *)(lVar12 + 0x11c);
          *(undefined8 *)(lVar12 + 0x11c) =
               CONCAT44(in_stack_00000150 + (float)((ulong)uVar20 >> 0x20),fVar33 + (float)uVar20);
          *(float *)(lVar12 + 0x124) = fVar31 + *(float *)(lVar12 + 0x124);
          if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 == 0))
          goto LAB_0354fbf4;
          if (*(uint *)(lVar12 + 0x18) <= in_stack_00000170) break;
          lVar12 = lVar12 + unaff_x29 * 0x178;
          *(ulong *)(lVar12 + 0x110) =
               CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar12 + 0x110) >> 0x20),
                        fVar33 + (float)*(undefined8 *)(lVar12 + 0x110));
          *(float *)(lVar12 + 0x118) = fVar31 + *(float *)(lVar12 + 0x118);
          if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 == 0))
          goto LAB_0354fbf4;
          if (*(uint *)(lVar12 + 0x18) <= in_stack_00000170) break;
          lVar12 = lVar12 + unaff_x29 * 0x178;
          *(ulong *)(lVar12 + 0x128) =
               CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar12 + 0x128) >> 0x20),
                        fVar33 + (float)*(undefined8 *)(lVar12 + 0x128));
          *(float *)(lVar12 + 0x130) = fVar31 + *(float *)(lVar12 + 0x130);
          if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 == 0))
          goto LAB_0354fbf4;
          if (*(uint *)(lVar12 + 0x18) <= in_stack_00000170) break;
          lVar12 = lVar12 + unaff_x29 * 0x178;
          *(float *)(lVar12 + 0x134) = fVar33 + *(float *)(lVar12 + 0x134);
          *(ulong *)(lVar12 + 0x138) =
               CONCAT44(fVar31 + (float)((ulong)*(undefined8 *)(lVar12 + 0x138) >> 0x20),
                        in_stack_00000150 + (float)*(undefined8 *)(lVar12 + 0x138));
          lVar12 = *unaff_x22;
          if ((lVar12 == 0) || (lVar24 = *(long *)(lVar12 + 0x38), lVar24 == 0)) goto LAB_0354fbf4;
          uVar21 = *(uint *)(lVar24 + 0x18);
          if (uVar21 <= in_stack_00000170) break;
          lVar16 = lVar24 + unaff_x29 * 0x178;
          *(float *)(lVar16 + 0x150) = in_stack_00000150 + *(float *)(lVar16 + 0x150);
          *(ulong *)(lVar16 + 0x140) =
               CONCAT44(fVar33 + (float)((ulong)*(undefined8 *)(lVar16 + 0x140) >> 0x20),
                        fVar33 + (float)*(undefined8 *)(lVar16 + 0x140));
          *(ulong *)(lVar16 + 0x148) =
               CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar16 + 0x148) >> 0x20),
                        in_stack_00000150 + (float)*(undefined8 *)(lVar16 + 0x148));
          if (in_stack_00000180 == uVar15) {
            uVar15 = *in_stack_00000090 - 1;
            if (in_stack_00000170 == uVar15) goto LAB_0354e3ec;
          }
          else {
            lVar12 = *(long *)(lVar12 + 0x50);
            if (lVar12 == 0) goto LAB_0354fbf4;
            if (*(uint *)(lVar12 + 0x18) <= uVar15) break;
            lVar16 = (long)(int)uVar15;
            lVar19 = lVar12 + lVar16 * 0x5c;
            fVar31 = in_stack_00000150 + *(float *)(lVar19 + 0x54);
            *(ulong *)(lVar19 + 0x4c) =
                 CONCAT44(in_stack_00000150 + (float)((ulong)*(undefined8 *)(lVar19 + 0x4c) >> 0x20)
                          ,in_stack_00000150 + (float)*(undefined8 *)(lVar19 + 0x4c));
            *(float *)(lVar19 + 0x54) = fVar31;
            *(float *)(lVar19 + 0x58) = fVar33 + *(float *)(lVar19 + 0x58);
            if (uVar21 <= *(uint *)(lVar19 + 0x34)) break;
            uVar25 = *(undefined4 *)(lVar24 + (long)(int)*(uint *)(lVar19 + 0x34) * 0x178 + 0x11c);
            lVar12 = lVar12 + lVar16 * 0x5c;
            *(float *)(lVar12 + 0x70) = fVar31;
            *(undefined4 *)(lVar12 + 0x6c) = uVar25;
            lVar12 = *unaff_x22;
            if ((lVar12 == 0) || (lVar24 = *(long *)(lVar12 + 0x50), lVar24 == 0))
            goto LAB_0354fbf4;
            if (*(uint *)(lVar24 + 0x18) <= uVar15) break;
            lVar12 = *(long *)(lVar12 + 0x38);
            if (lVar12 == 0) goto LAB_0354fbf4;
            uVar15 = *(uint *)(lVar24 + lVar16 * 0x5c + 0x40);
            if (*(uint *)(lVar12 + 0x18) <= uVar15) break;
            lVar24 = lVar24 + lVar16 * 0x5c;
            *(undefined4 *)(lVar24 + 0x74) =
                 *(undefined4 *)(lVar12 + (long)(int)uVar15 * 0x178 + 0x128);
            *(undefined4 *)(lVar24 + 0x78) = *(undefined4 *)(lVar24 + 0x4c);
            uVar15 = *in_stack_00000090 - 1;
LAB_0354e3ec:
            if (in_stack_00000170 == uVar15) {
              lVar12 = *unaff_x22;
              if ((lVar12 == 0) || (lVar24 = *(long *)(lVar12 + 0x50), lVar24 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar24 + 0x18) <= in_stack_00000180) break;
              lVar16 = lVar24 + lVar22 * 0x5c;
              fVar31 = in_stack_00000150 + *(float *)(lVar16 + 0x54);
              *(ulong *)(lVar16 + 0x4c) =
                   CONCAT44(in_stack_00000150 +
                            (float)((ulong)*(undefined8 *)(lVar16 + 0x4c) >> 0x20),
                            in_stack_00000150 + (float)*(undefined8 *)(lVar16 + 0x4c));
              *(float *)(lVar16 + 0x54) = fVar31;
              *(float *)(lVar16 + 0x58) = fVar33 + *(float *)(lVar16 + 0x58);
              lVar12 = *(long *)(lVar12 + 0x38);
              if (lVar12 == 0) goto LAB_0354fbf4;
              if (*(uint *)(lVar12 + 0x18) <= *(uint *)(lVar16 + 0x34)) break;
              uVar25 = *(undefined4 *)(lVar12 + (long)(int)*(uint *)(lVar16 + 0x34) * 0x178 + 0x11c)
              ;
              lVar24 = lVar24 + lVar22 * 0x5c;
              *(float *)(lVar24 + 0x70) = fVar31;
              *(undefined4 *)(lVar24 + 0x6c) = uVar25;
              lVar12 = *unaff_x22;
              if ((lVar12 == 0) || (lVar24 = *(long *)(lVar12 + 0x50), lVar24 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar24 + 0x18) <= in_stack_00000180) break;
              lVar12 = *(long *)(lVar12 + 0x38);
              if (lVar12 == 0) goto LAB_0354fbf4;
              uVar15 = *(uint *)(lVar24 + lVar22 * 0x5c + 0x40);
              if (*(uint *)(lVar12 + 0x18) <= uVar15) break;
              lVar24 = lVar24 + lVar22 * 0x5c;
              *(undefined4 *)(lVar24 + 0x74) =
                   *(undefined4 *)(lVar12 + (long)(int)uVar15 * 0x178 + 0x128);
              *(undefined4 *)(lVar24 + 0x78) = *(undefined4 *)(lVar24 + 0x4c);
            }
          }
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_026b82c4(in_stack_00000178,0);
          if (((((uVar11 & 1) == 0) && (1 < in_stack_00000178 - 0x2010)) &&
              (in_stack_00000178 != 0xad)) && (in_stack_00000178 != 0x2d)) {
            if ((uStack000000000000011c & 1) == 0) {
              if (uVar17 != 1) {
LAB_0354f144:
                uStack000000000000011c = 0;
                goto LAB_0354e618;
              }
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar11 = FUN_026b81f8(in_stack_00000178,0);
              if ((uVar11 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar11 = FUN_026b63d8(in_stack_00000178,0);
                if (((in_stack_00000178 != 0x200b) && ((uVar11 & 1) == 0)) &&
                   (*in_stack_00000090 != 1)) goto LAB_0354f144;
              }
            }
            else if (((uVar17 != 1) &&
                     ((int)in_stack_00000170 < (int)(*(uint *)(in_stack_000000c8 + 0x18) - 1))) &&
                    (((int)in_stack_00000170 < *in_stack_00000090 &&
                     ((in_stack_00000178 == 0x2019 || (in_stack_00000178 == 0x27)))))) {
              if (*(uint *)(in_stack_000000c8 + 0x18) <= in_stack_00000170 - 1) break;
              uVar3 = *(undefined2 *)(in_stack_000000c8 + unaff_x26 + -0x438);
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar11 = FUN_026b82c4(uVar3,0);
              if ((uVar11 & 1) != 0) {
                if (*(uint *)(in_stack_000000c8 + 0x18) <= uVar17) break;
                uVar3 = *(undefined2 *)(in_stack_000000c8 + unaff_x26 + -0x148);
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar11 = FUN_026b82c4(uVar3,0);
                if ((uVar11 & 1) != 0) goto LAB_0354e610;
              }
            }
            if (in_stack_00000170 == *in_stack_00000090 - 1U) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar11 = FUN_026b82c4(in_stack_00000178,0);
              iVar9 = unaff_w28;
              if ((uVar11 & 1) == 0) goto LAB_0354e93c;
            }
            else {
LAB_0354e93c:
              iVar9 = in_stack_00000170 - 1;
            }
            lVar12 = *unaff_x22;
            if (lVar12 == 0) goto LAB_0354fbf4;
            lVar24 = *(long *)(lVar12 + 0x40);
            if (lVar24 == 0) goto LAB_0354fbf4;
            uVar15 = *(uint *)(lVar12 + 0x24);
            iVar10 = *(int *)(lVar24 + 0x18);
            if (iVar10 < (int)(uVar15 + 1)) {
              if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_01ff025c((long *)(lVar12 + 0x40),iVar10 + 1,
                           *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
              lVar12 = *unaff_x22;
              if (lVar12 == 0) goto LAB_0354fbf4;
            }
            lVar12 = *(long *)(lVar12 + 0x40);
            if (lVar12 == 0) goto LAB_0354fbf4;
            if (*(uint *)(lVar12 + 0x18) <= uVar15) break;
            lVar12 = lVar12 + (long)(int)uVar15 * 0x18;
            *(long **)(lVar12 + 0x20) = unaff_x19;
            *(uint *)(lVar12 + 0x28) = in_stack_00000168._4_4_;
            *(int *)(lVar12 + 0x2c) = iVar9;
            *(uint *)(lVar12 + 0x30) = (iVar9 - in_stack_00000168._4_4_) + 1;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            lVar12 = unaff_x19[0x6d];
            if (lVar12 == 0) goto LAB_0354fbf4;
            lVar24 = *(long *)(lVar12 + 0x50);
            *(int *)(lVar12 + 0x24) = *(int *)(lVar12 + 0x24) + 1;
            if (lVar24 == 0) goto LAB_0354fbf4;
            if (*(uint *)(lVar24 + 0x18) <= in_stack_00000180) break;
            lVar24 = lVar24 + lVar22 * 0x5c;
            uStack000000000000011c = 0;
            in_stack_000000d8 = in_stack_000000d8 + 1;
            *(int *)(lVar24 + 0x30) = *(int *)(lVar24 + 0x30) + 1;
          }
          else {
            if ((uStack000000000000011c & 1) == 0) {
              in_stack_00000168._4_4_ = in_stack_00000170;
            }
            if (in_stack_00000170 == *in_stack_00000090 - 1U) {
              lVar12 = *unaff_x22;
              if (lVar12 == 0) goto LAB_0354fbf4;
              lVar24 = *(long *)(lVar12 + 0x40);
              if (lVar24 == 0) goto LAB_0354fbf4;
              uVar15 = *(uint *)(lVar12 + 0x24);
              iVar9 = *(int *)(lVar24 + 0x18);
              if (iVar9 < (int)(uVar15 + 1)) {
                if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_01ff025c((long *)(lVar12 + 0x40),iVar9 + 1,
                             *(undefined8 *)OVRPlugin_OVRP_0_1_0_TypeInfo);
                lVar12 = *unaff_x22;
                if (lVar12 == 0) goto LAB_0354fbf4;
              }
              lVar12 = *(long *)(lVar12 + 0x40);
              if (lVar12 == 0) goto LAB_0354fbf4;
              if (*(uint *)(lVar12 + 0x18) <= uVar15) break;
              lVar12 = lVar12 + (long)(int)uVar15 * 0x18;
              *(long **)(lVar12 + 0x20) = unaff_x19;
              *(uint *)(lVar12 + 0x28) = in_stack_00000168._4_4_;
              *(uint *)(lVar12 + 0x2c) = in_stack_00000170;
              *(uint *)(lVar12 + 0x30) = uVar17 - in_stack_00000168._4_4_;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar12 = unaff_x19[0x6d];
              if (lVar12 == 0) goto LAB_0354fbf4;
              lVar24 = *(long *)(lVar12 + 0x50);
              *(int *)(lVar12 + 0x24) = *(int *)(lVar12 + 0x24) + 1;
              if (lVar24 == 0) goto LAB_0354fbf4;
              if (*(uint *)(lVar24 + 0x18) <= in_stack_00000180) break;
              lVar24 = lVar24 + lVar22 * 0x5c;
              in_stack_000000d8 = in_stack_000000d8 + 1;
              *(int *)(lVar24 + 0x30) = *(int *)(lVar24 + 0x30) + 1;
            }
LAB_0354e610:
            uStack000000000000011c = 1;
          }
LAB_0354e618:
          if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 == 0))
          goto LAB_0354fbf4;
          uVar15 = *(uint *)(lVar12 + 0x18);
          if (uVar15 <= in_stack_00000170) break;
          if ((*(byte *)(lVar12 + unaff_x29 * 0x178 + 400) >> 2 & 1) == 0) {
            if ((in_stack_00000130._4_4_ & 1) == 0) {
LAB_0354eb28:
              in_stack_00000130._4_4_ = 0;
            }
            else {
LAB_0354e660:
              if (uVar15 <= in_stack_00000170 - 1) break;
              lVar24 = *unaff_x19;
              uVar25 = *(undefined4 *)(lVar12 + unaff_x26 + -0x330);
              uVar29 = *(undefined4 *)(lVar12 + unaff_x26 + -0x2f8);
LAB_0354ebc0:
              pcVar18 = *(code **)(lVar24 + 0x8d8);
LAB_0354ebc8:
              (*pcVar18)(in_stack_00000070,fStack0000000000000068,uStack000000000000006c,uVar25,
                         fStack0000000000000104,0,in_stack_00000080._4_4_,uVar29);
              puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
              lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar12 = *(long *)puVar6;
              }
LAB_0354ec1c:
              unaff_s15 = 0.0;
              in_stack_00000130._4_4_ = 0;
              fStack0000000000000104 = *(float *)(*(long *)(lVar12 + 0xb8) + 0x15a8);
              fStack0000000000000100 = 0.0;
            }
          }
          else {
            lVar12 = lVar12 + unaff_x29 * 0x178;
            iVar9 = *(int *)(lVar12 + 0x68);
            *(undefined4 *)(lVar12 + 0x16c) = in_stack_000017d4;
            if ((((int)unaff_x19[0x65] < (int)in_stack_00000170) ||
                ((int)unaff_x19[0x66] < (int)in_stack_00000180)) ||
               (((int)unaff_x19[0x5c] == 5 && (iVar9 + 1 != (int)unaff_x19[0x67])))) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar11 = FUN_026b63d8(in_stack_00000178,0);
            if ((in_stack_00000178 != 0x200b) && ((uVar11 & 1) == 0)) {
              lVar12 = *unaff_x22;
              if ((lVar12 == 0) || (lVar24 = *(long *)(lVar12 + 0x38), lVar24 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar24 + 0x18) <= in_stack_00000170) break;
              fVar31 = *(float *)(lVar24 + unaff_x29 * 0x178 + 0x160);
              if (unaff_s15 <= fVar31) {
                unaff_s15 = fVar31;
              }
              if (fStack0000000000000100 <= ABS(unaff_s14)) {
                fStack0000000000000100 = ABS(unaff_s14);
              }
              if (iVar9 != iStack000000000000005c) {
                if (*(int *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar12 = *unaff_x22;
                  if (lVar12 == 0) goto LAB_0354fbf4;
                  lVar24 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                }
                else {
                  lVar24 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
                }
                fStack0000000000000104 = *(float *)(lVar24 + 0x15a8);
              }
              lVar12 = *(long *)(lVar12 + 0x38);
              if (lVar12 == 0) goto LAB_0354fbf4;
              if (*(uint *)(lVar12 + 0x18) <= in_stack_00000170) break;
              if (unaff_x19[0x1f] == 0) goto LAB_0354fbf4;
              fVar30 = *(float *)(lVar12 + unaff_x29 * 0x178 + 0x14c);
              fVar31 = (float)FUN_03776a10(unaff_x19[0x1f] + 0x50,0);
              fVar30 = fVar30 + unaff_s15 * fVar31;
              iStack000000000000005c = iVar9;
              if (fVar30 <= fStack0000000000000104) {
                fStack0000000000000104 = fVar30;
              }
            }
            if ((in_stack_00000130._4_4_ & 1) == 0) {
              in_stack_00000130._4_4_ = 0;
              if ((((in_stack_00000178 == 0xd) || ((in_stack_00000178 & 0xfffe) == 10)) ||
                  ((int)uVar5 < (int)in_stack_00000170)) || ((bool)(bVar1 ^ 1))) goto LAB_0354ec38;
              if (in_stack_00000170 == uVar5) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar11 = FUN_026b97f8(in_stack_00000178,0);
                if ((uVar11 & 1) != 0) goto LAB_0354eb28;
              }
              if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar12 + 0x18) <= in_stack_00000170) break;
              lVar12 = lVar12 + unaff_x29 * 0x178;
              in_stack_00000080._4_4_ = *(float *)(lVar12 + 0x160);
              in_stack_00000070 = *(undefined4 *)(lVar12 + 0x11c);
              bVar7 = unaff_s15 != 0.0;
              fVar31 = in_stack_00000080._4_4_;
              if (bVar7) {
                fVar31 = unaff_s15;
              }
              unaff_s15 = fVar31;
              in_stack_00000088 = *(undefined4 *)(lVar12 + 0x168);
              uStack000000000000006c = 0;
              fVar31 = unaff_s14;
              if (bVar7) {
                fVar31 = fStack0000000000000100;
              }
              fStack0000000000000068 = fStack0000000000000104;
              fStack0000000000000100 = fVar31;
            }
            if (*in_stack_00000090 == 1) {
              if ((*unaff_x22 != 0) && (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 != 0)) {
                if (in_stack_00000170 < *(uint *)(lVar12 + 0x18)) {
                  lVar12 = lVar12 + unaff_x29 * 0x178;
                  lVar24 = *unaff_x19;
                  uVar25 = *(undefined4 *)(lVar12 + 0x128);
                  uVar29 = *(undefined4 *)(lVar12 + 0x160);
                  goto LAB_0354ebc0;
                }
                break;
              }
              goto LAB_0354fbf4;
            }
            if ((in_stack_00000170 == uVar4) || ((int)uVar5 <= (int)in_stack_00000170)) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar11 = FUN_026b63d8(in_stack_00000178,0);
              if ((*unaff_x22 != 0) && (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 != 0)) {
                lVar24 = unaff_x29;
                uVar15 = in_stack_00000170;
                if (in_stack_00000178 == 0x200b || (uVar11 & 1) != 0) {
                  lVar24 = unaff_x27;
                  uVar15 = uVar5;
                }
                if (uVar15 < *(uint *)(lVar12 + 0x18)) {
                  lVar12 = lVar12 + lVar24 * 0x178;
                  uVar25 = *(undefined4 *)(lVar12 + 0x128);
                  uVar29 = *(undefined4 *)(lVar12 + 0x160);
                  pcVar18 = *(code **)(*unaff_x19 + 0x8d8);
                  goto LAB_0354ebc8;
                }
                break;
              }
              goto LAB_0354fbf4;
            }
            if (!bVar1) {
              if ((*unaff_x22 != 0) && (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 != 0)) {
                uVar15 = *(uint *)(lVar12 + 0x18);
                goto LAB_0354e660;
              }
              goto LAB_0354fbf4;
            }
            if ((int)in_stack_00000170 < *in_stack_00000090 + -1) {
              if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar12 + 0x18) <= uVar17) break;
              uVar11 = FUN_03567ad8(in_stack_00000088,*(undefined4 *)(lVar12 + unaff_x26),0);
              if ((uVar11 & 1) == 0) {
                if ((*unaff_x22 != 0) && (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 != 0)) {
                  if (in_stack_00000170 < *(uint *)(lVar12 + 0x18)) {
                    lVar12 = lVar12 + unaff_x29 * 0x178;
                    (**(code **)(*unaff_x19 + 0x8d8))
                              (in_stack_00000070,fStack0000000000000068,uStack000000000000006c,
                               *(undefined4 *)(lVar12 + 0x128),fStack0000000000000104,0,
                               in_stack_00000080._4_4_,*(undefined4 *)(lVar12 + 0x160));
                    puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                    lVar12 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
                    if (*(int *)(lVar12 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar12 = *(long *)puVar6;
                    }
                    goto LAB_0354ec1c;
                  }
                  break;
                }
                goto LAB_0354fbf4;
              }
            }
            in_stack_00000130._4_4_ = 1;
          }
LAB_0354ec38:
          unaff_x23 = 0x178;
          if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 == 0))
          goto LAB_0354fbf4;
          if (*(uint *)(lVar12 + 0x18) <= in_stack_00000170) break;
          if (in_stack_00000110 == 0) goto LAB_0354fbf4;
          uVar15 = *(uint *)(lVar12 + unaff_x29 * 0x178 + 400);
          unaff_s11 = (float)FUN_03776a30(in_stack_00000110 + 0x50,0);
          unaff_x25 = in_stack_000000c8;
          unaff_w24 = in_stack_00000170;
          in_stack_00000128 = unaff_x27;
          if ((uVar15 >> 6 & 1) == 0) {
            unaff_x20 = in_stack_00000090;
            if (bVar8) {
              if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 == 0))
              goto LAB_0354fbf4;
              if (*(uint *)(lVar12 + 0x18) <= in_stack_00000170 - 1) break;
              uVar25 = *(undefined4 *)(lVar12 + unaff_x26 + -0x330);
              fVar31 = *(float *)(lVar12 + unaff_x26 + -0x30c);
              pcVar18 = *(code **)(*unaff_x19 + 0x8d8);
              fVar30 = in_stack_000000a8 * unaff_s11;
              in_stack_00000170 = uVar17;
              goto LAB_0354f21c;
            }
            goto LAB_0354f250;
          }
          lVar12 = *unaff_x22;
          if ((lVar12 == 0) || (lVar24 = *(long *)(lVar12 + 0x38), lVar24 == 0)) goto LAB_0354fbf4;
          if (*(uint *)(lVar24 + 0x18) <= in_stack_00000170) break;
          *(undefined4 *)(lVar24 + unaff_x29 * 0x178 + 0x174) = in_stack_000017d4;
          if ((((int)unaff_x19[0x65] < (int)in_stack_00000170) ||
              ((int)unaff_x19[0x66] < (int)in_stack_00000180)) ||
             (((int)unaff_x19[0x5c] == 5 &&
              (*(int *)(lVar24 + unaff_x29 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
            unaff_w21 = 0;
          }
          else {
            unaff_w21 = 1;
          }
          if ((((in_stack_00000178 == 0xd) || ((in_stack_00000178 & 0xfffe) == 10)) ||
              ((int)uVar5 < (int)in_stack_00000170)) || (bVar8 || unaff_w21 != 1)) {
LAB_0354ed84:
            unaff_x20 = in_stack_00000090;
            if (!bVar8) goto LAB_0354f250;
          }
          else {
            if (in_stack_00000170 == uVar5) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar11 = FUN_026b97f8(in_stack_00000178,0);
              if ((uVar11 & 1) != 0) goto LAB_0354ed84;
              lVar12 = *unaff_x22;
              if (lVar12 == 0) goto LAB_0354fbf4;
            }
            lVar12 = *(long *)(lVar12 + 0x38);
            if (lVar12 == 0) goto LAB_0354fbf4;
            if (*(uint *)(lVar12 + 0x18) <= in_stack_00000170) break;
            lVar12 = lVar12 + unaff_x29 * 0x178;
            in_stack_00000048._4_4_ = *(float *)(lVar12 + 0x60);
            in_stack_00000040 = *(float *)(lVar12 + 0x14c);
            in_stack_000000a0 = *(undefined4 *)(lVar12 + 0x11c);
            in_stack_000000a8 = *(float *)(lVar12 + 0x160);
            fStack000000000000009c = unaff_s11 * in_stack_000000a8 + in_stack_00000040;
            uStack0000000000000098 = 0;
          }
          iVar9 = *in_stack_00000090;
          if (iVar9 == 1) {
            if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 == 0))
            goto LAB_0354fbf4;
            uVar15 = *(uint *)(lVar12 + 0x18);
            in_stack_00000170 = uVar17;
LAB_0354ef0c:
            if (uVar15 <= unaff_w24) break;
            lVar12 = lVar12 + unaff_x29 * unaff_x23;
            lVar24 = *unaff_x19;
            uVar25 = *(undefined4 *)(lVar12 + 0x128);
            fVar31 = *(float *)(lVar12 + 0x14c);
LAB_0354ef24:
            pcVar18 = *(code **)(lVar24 + 0x8d8);
            unaff_x20 = in_stack_00000090;
            goto LAB_0354f214;
          }
          if (in_stack_00000170 != uVar4) {
            if ((int)in_stack_00000170 < iVar9) {
              param_1 = *unaff_x22;
              if (param_1 == 0) goto LAB_0354fbf4;
              in_x9 = *(long *)(param_1 + 0x38);
              unaff_x20 = in_stack_00000090;
              in_stack_00000170 = uVar17;
              goto code_r0x0354efac;
            }
LAB_0354f010:
            in_stack_00000170 = uVar17;
            if ((int)unaff_w24 < iVar9) {
              iVar9 = FUN_036d3364(in_stack_00000110,0);
              if (*(uint *)(unaff_x25 + 0x18) <= in_stack_00000170) break;
              lVar12 = *(long *)(unaff_x25 + unaff_x26 + -0x130);
              if (lVar12 == 0) goto LAB_0354fbf4;
              iVar10 = FUN_036d3364(lVar12,0);
              if (iVar9 != iVar10) {
                if ((*unaff_x22 != 0) && (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 != 0)) {
                  uVar15 = *(uint *)(lVar12 + 0x18);
                  goto LAB_0354ef0c;
                }
                goto LAB_0354fbf4;
              }
            }
            if ((unaff_w21 & 1) == 0) {
              if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 == 0))
              goto LAB_0354fbf4;
              if (in_stack_00000170 - 2 < *(uint *)(lVar12 + 0x18)) {
                lVar24 = *unaff_x19;
                uVar25 = *(undefined4 *)(lVar12 + unaff_x26 + -0x330);
                fVar31 = *(float *)(lVar12 + unaff_x26 + -0x30c);
                goto LAB_0354ef24;
              }
              break;
            }
            bVar8 = true;
            unaff_x20 = in_stack_00000090;
            uVar15 = in_stack_00000180;
            goto LAB_0354f254;
          }
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_026b63d8(in_stack_00000178,0);
          if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x38), lVar12 == 0))
          goto LAB_0354fbf4;
          if (in_stack_00000178 != 0x200b && (uVar11 & 1) == 0) {
            bVar8 = *(uint *)(lVar12 + 0x18) <= in_stack_00000170;
            unaff_x20 = in_stack_00000090;
            lVar24 = unaff_x29;
            in_stack_00000170 = uVar17;
            goto LAB_0354f1f0;
          }
          bVar8 = *(uint *)(lVar12 + 0x18) <= uVar5;
          unaff_x20 = in_stack_00000090;
          lVar24 = unaff_x27;
          in_stack_00000170 = uVar17;
LAB_0354f1e0:
          unaff_x27 = lVar24;
          if (bVar8) break;
        } while( true );
      }
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    }
  }
  goto LAB_0354fbf4;
  while( true ) {
    lVar12 = *unaff_x22;
    lVar24 = lVar24 + 1;
    lVar22 = lVar22 + 0x50;
    if (lVar12 == 0) break;
LAB_0354f97c:
    uVar11 = lVar24 + 1;
    if ((long)*(int *)(lVar12 + 0x34) <= (long)uVar11) {
LAB_0354d0cc:
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03567630();
      return;
    }
    lVar12 = *(long *)(lVar12 + 0x60);
    if (lVar12 == 0) break;
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar12 + 0x18) <= uVar11)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    FUN_03596a20(lVar12 + lVar22 + 0x70,0);
    lVar12 = unaff_x19[0xe1];
    if (lVar12 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar11)
    goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
    uVar20 = *(undefined8 *)(lVar12 + lVar24 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar13 = FUN_036d35a8(uVar20,0,0);
    if ((uVar13 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
        if ((*unaff_x22 == 0) || (lVar12 = *(long *)(*unaff_x22 + 0x60), lVar12 == 0)) break;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar12 + 0x18) <= uVar11) {
UnityEngine_Android_AndroidApp__AcquireContextAndActivity:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03596b20(lVar12 + lVar22 + 0x70,1,0);
      }
      lVar12 = unaff_x19[0xe1];
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar12 = *(long *)(lVar12 + lVar24 * 8 + 0x28);
      if (lVar12 == 0) break;
      lVar12 = FUN_0359d5ac(lVar12,0);
      if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x60), lVar16 == 0)) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar12 == 0) break;
      FUN_036a460c(lVar12,*(undefined8 *)(lVar16 + lVar22 + 0x80),0);
      lVar12 = unaff_x19[0xe1];
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar12 = *(long *)(lVar12 + lVar24 * 8 + 0x28);
      if (lVar12 == 0) break;
      lVar12 = FUN_0359d5ac(lVar12,0);
      if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x60), lVar16 == 0)) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar12 == 0) break;
      FUN_036a4810(lVar12,*(undefined8 *)(lVar16 + lVar22 + 0x98),0);
      lVar12 = unaff_x19[0xe1];
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar12 = *(long *)(lVar12 + lVar24 * 8 + 0x28);
      if (lVar12 == 0) break;
      lVar12 = FUN_0359d5ac(lVar12,0);
      if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x60), lVar16 == 0)) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar12 == 0) break;
      FUN_036a48bc(lVar12,*(undefined8 *)(lVar16 + lVar22 + 0xa0),0);
      lVar12 = unaff_x19[0xe1];
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar12 = *(long *)(lVar12 + lVar24 * 8 + 0x28);
      if (lVar12 == 0) break;
      lVar12 = FUN_0359d5ac(lVar12,0);
      if ((*unaff_x22 == 0) || (lVar16 = *(long *)(*unaff_x22 + 0x60), lVar16 == 0)) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      if (lVar12 == 0) break;
      FUN_036a4e24(lVar12,*(undefined8 *)(lVar16 + lVar22 + 0xa8),0);
      lVar12 = unaff_x19[0xe1];
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar11)
      goto UnityEngine_Android_AndroidApp__AcquireContextAndActivity;
      lVar12 = *(long *)(lVar12 + lVar24 * 8 + 0x28);
      if ((lVar12 == 0) || (lVar12 = FUN_0359d5ac(lVar12,0), lVar12 == 0)) break;
      FUN_036aa280(lVar12,0);
    }
  }
LAB_0354fbf4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


