/*
FUNCTION_NAME: Unity.VisualScripting.Member$$Invoke
ENTRY_POINT: 05bd9084
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_20;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void Unity_VisualScripting_Member__Invoke(void)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  bool bVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  char cVar14;
  int in_w8;
  long lVar15;
  code *pcVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long *unaff_x19;
  uint unaff_w20;
  undefined8 uVar22;
  uint unaff_w21;
  long lVar23;
  long unaff_x22;
  undefined8 uVar24;
  uint unaff_w23;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float unaff_s13;
  float fVar36;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  int iStack0000000000000064;
  float fStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  float fStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  float fStack0000000000000088;
  undefined4 uStack000000000000008c;
  float in_stack_00000090;
  undefined8 in_stack_000000a0;
  float in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  float fStack00000000000000b4;
  float in_stack_000000b8;
  undefined8 in_stack_000000c0;
  int in_stack_000000c8;
  undefined8 in_stack_000000d0;
  long in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  float fStack00000000000000f0;
  float fStack00000000000000f4;
  long in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  int iStack0000000000000110;
  float fStack0000000000000114;
  uint uStack0000000000000118;
  uint uStack000000000000011c;
  float in_stack_00000130;
  uint in_stack_00000148;
  uint in_stack_00000158;
  long in_stack_00000160;
  long in_stack_00000168;
  float in_stack_00000170;
  long *in_stack_00000178;
  int *in_stack_00000180;
  undefined8 in_stack_00000188;
  float fStack0000000000000190;
  float fStack0000000000000194;
  float in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  float in_stack_000001b0;
  undefined8 in_stack_00001260;
  undefined8 in_stack_00001268;
  float in_stack_00001270;
  undefined4 in_stack_00001274;
  
code_r0x05bd9084:
  if (in_w8 == 1) {
    if ((*unaff_x27 != 0) && (lVar15 = *(long *)(*unaff_x27 + 0x38), lVar15 != 0)) {
      if (unaff_w24 < *(uint *)(lVar15 + 0x18)) {
        lVar15 = lVar15 + unaff_x25 * unaff_x22;
        lVar20 = *unaff_x19;
        uVar28 = *(undefined4 *)(lVar15 + 0x120);
        uVar30 = *(undefined4 *)(lVar15 + 0x15c);
        do {
          (**(code **)(lVar20 + 0x908))
                    (uStack0000000000000070,fStack0000000000000068,uStack000000000000006c,uVar28,
                     fStack00000000000000f4,0,fStack0000000000000074,uVar30);
LAB_05bd90fc:
          lVar15 = *unaff_x28;
LAB_05bd9100:
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar15 = *unaff_x28;
          }
          bVar6 = false;
          fStack0000000000000114 = 0.0;
          fStack00000000000000f4 = *(float *)(*(long *)(lVar15 + 0xb8) + 0x1730);
          fStack00000000000000f0 = 0.0;
LAB_05bd912c:
          if ((*unaff_x27 == 0) || (lVar15 = *(long *)(*unaff_x27 + 0x38), lVar15 == 0))
          goto LAB_05bda144;
          if (*(uint *)(lVar15 + 0x18) <= unaff_w24) break;
          if (in_stack_000000f8 == 0) goto LAB_05bda144;
          uVar19 = *(uint *)(lVar15 + unaff_x25 * unaff_x22 + 0x18c);
          fVar25 = (float)FUN_06114698(in_stack_000000f8 + 0x28,0);
          uVar18 = (uint)in_stack_00000168;
          if ((uVar19 >> 6 & 1) == 0) {
            if ((uStack000000000000011c & 1) != 0) {
              if ((*unaff_x27 == 0) || (lVar15 = *(long *)(*unaff_x27 + 0x38), lVar15 == 0))
              goto LAB_05bda144;
              if (*(uint *)(lVar15 + 0x18) <= in_stack_00000158 - 2) break;
              uVar28 = *(undefined4 *)(lVar15 + in_stack_00000160 + -0x334);
              fVar26 = *(float *)(lVar15 + in_stack_00000160 + -0x310);
              pcVar16 = *(code **)(*unaff_x19 + 0x908);
LAB_05bd96d8:
              (*pcVar16)(uStack000000000000008c,fStack0000000000000088,in_stack_00000080._4_4_,
                         uVar28,in_stack_00000090 * fVar25 + fVar26,0,in_stack_00000090,
                         in_stack_00000090);
            }
LAB_05bd970c:
            uStack000000000000011c = 0;
          }
          else {
            lVar15 = *unaff_x27;
            if ((lVar15 == 0) || (lVar20 = *(long *)(lVar15 + 0x38), lVar20 == 0))
            goto LAB_05bda144;
            if (*(uint *)(lVar20 + 0x18) <= unaff_w24) break;
            *(undefined4 *)(lVar20 + unaff_x25 * unaff_x22 + 0x170) = in_stack_00001274;
            if ((((int)unaff_x19[0x6c] < (int)unaff_w24) || ((int)unaff_x19[0x6d] < (int)unaff_w21))
               || (((int)unaff_x19[0x62] == 5 &&
                   (*(int *)(lVar20 + unaff_x25 * unaff_x22 + 0x60) + 1 != (int)unaff_x19[0x6e]))))
            {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((((in_stack_00000170 == 1.82169e-44) || (((uint)in_stack_00000170 & 0xfffe) == 10))
                || ((int)uVar18 < (int)unaff_w24)) || ((uStack000000000000011c & 1) != 0 || !bVar1))
            {
LAB_05bd927c:
              if ((uStack000000000000011c & 1) == 0) goto LAB_05bd970c;
            }
            else {
              if (unaff_w24 == uVar18) {
                if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar12 = FUN_04f8481c(in_stack_00000170,0);
                if ((uVar12 & 1) != 0) goto LAB_05bd927c;
                lVar15 = *unaff_x27;
                if (lVar15 == 0) goto LAB_05bda144;
              }
              lVar15 = *(long *)(lVar15 + 0x38);
              if (lVar15 == 0) goto LAB_05bda144;
              if (*(uint *)(lVar15 + 0x18) <= unaff_w24) break;
              lVar15 = lVar15 + unaff_x25 * unaff_x22;
              in_stack_00000090 = *(float *)(lVar15 + 0x15c);
              uStack000000000000008c = *(undefined4 *)(lVar15 + 0x114);
              fStack000000000000005c = *(float *)(lVar15 + 0x58);
              fStack0000000000000058 = *(float *)(lVar15 + 0x144);
              fStack0000000000000088 = fVar25 * in_stack_00000090 + fStack0000000000000058;
              in_stack_00000080._4_4_ = 0;
            }
            iVar11 = *in_stack_00000180;
            if (iVar11 == 1) {
LAB_05bd93b4:
              if ((*unaff_x27 != 0) && (lVar15 = *(long *)(*unaff_x27 + 0x38), lVar15 != 0)) {
                if (unaff_w24 < *(uint *)(lVar15 + 0x18)) {
                  lVar15 = lVar15 + unaff_x25 * unaff_x22;
                  lVar20 = *unaff_x19;
                  uVar28 = *(undefined4 *)(lVar15 + 0x120);
                  fVar26 = *(float *)(lVar15 + 0x144);
LAB_05bd93e0:
                  pcVar16 = *(code **)(lVar20 + 0x908);
                  goto LAB_05bd96d8;
                }
                break;
              }
              goto LAB_05bda144;
            }
            if (unaff_w24 == (uint)in_stack_000000d8) {
              if ((*unaff_x27 != 0) && (lVar15 = *(long *)(*unaff_x27 + 0x38), lVar15 != 0)) {
                uVar19 = *(uint *)(lVar15 + 0x18);
                if (in_stack_00000170 == 1.14949e-41 || (uStack0000000000000118 & 1) != 0) {
                  if (uVar19 <= uVar18) break;
                }
                else {
LAB_05bd96ac:
                  in_stack_00000168 = unaff_x25;
                  if (uVar19 <= unaff_w24) break;
                }
LAB_05bd96b4:
                lVar15 = lVar15 + in_stack_00000168 * unaff_x22;
                fVar26 = *(float *)(lVar15 + 0x144);
                uVar28 = *(undefined4 *)(lVar15 + 0x120);
                pcVar16 = *(code **)(*unaff_x19 + 0x908);
                goto LAB_05bd96d8;
              }
              goto LAB_05bda144;
            }
            if ((int)unaff_w24 < iVar11) {
              lVar15 = *unaff_x27;
              if ((lVar15 != 0) && (lVar20 = *(long *)(lVar15 + 0x38), lVar20 != 0)) {
                if (in_stack_00000158 < *(uint *)(lVar20 + 0x18)) {
                  if (*(float *)(lVar20 + in_stack_00000160 + -0x10c) == fStack000000000000005c) {
                    fVar26 = *(float *)(lVar20 + in_stack_00000160 + -0x20);
                    if (*(int *)(*(long *)
                                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<Substring>_get_Item__
                                + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    uVar12 = FUN_05bf5098(in_stack_00000130 + fVar26,fStack0000000000000058,0);
                    if ((uVar12 & 1) != 0) {
                      iVar11 = *in_stack_00000180;
                      goto LAB_05bd94b4;
                    }
                    lVar15 = *unaff_x27;
                    if (lVar15 == 0) goto LAB_05bda144;
                  }
                  lVar15 = *(long *)(lVar15 + 0x38);
                  if (lVar15 != 0) {
                    uVar19 = *(uint *)(lVar15 + 0x18);
                    if ((int)unaff_w24 <= (int)uVar18) goto LAB_05bd96ac;
                    if (uVar18 < uVar19) goto LAB_05bd96b4;
                    break;
                  }
                  goto LAB_05bda144;
                }
                break;
              }
              goto LAB_05bda144;
            }
LAB_05bd94b4:
            if ((int)unaff_w24 < iVar11) {
              iVar11 = FUN_0606f30c(in_stack_000000f8,0);
              if (*(uint *)(unaff_x29 + 0x18) <= in_stack_00000158) break;
              lVar15 = *(long *)(unaff_x29 + in_stack_00000160 + -0x124);
              if (lVar15 == 0) goto LAB_05bda144;
              iVar9 = FUN_0606f30c(lVar15,0);
              unaff_x27 = in_stack_00000178;
              if (iVar11 != iVar9) goto LAB_05bd93b4;
            }
            if (!bVar1) {
              if ((*unaff_x27 != 0) && (lVar15 = *(long *)(*unaff_x27 + 0x38), lVar15 != 0)) {
                if (in_stack_00000158 - 2 < *(uint *)(lVar15 + 0x18)) {
                  lVar20 = *unaff_x19;
                  uVar28 = *(undefined4 *)(lVar15 + in_stack_00000160 + -0x334);
                  fVar26 = *(float *)(lVar15 + in_stack_00000160 + -0x310);
                  goto LAB_05bd93e0;
                }
                break;
              }
              goto LAB_05bda144;
            }
            uStack000000000000011c = 1;
          }
          if ((*unaff_x27 == 0) || (lVar15 = *(long *)(*unaff_x27 + 0x38), lVar15 == 0))
          goto LAB_05bda144;
          uVar19 = (uint)*(undefined8 *)(lVar15 + 0x18);
          if (uVar19 <= unaff_w24) break;
          if ((*(byte *)(lVar15 + unaff_x25 * unaff_x22 + 0x18d) >> 1 & 1) == 0) {
            if ((in_stack_00000100._4_4_ & 1) != 0) {
LAB_05bd9a90:
              (**(code **)(*unaff_x19 + 0x918))
                        (in_stack_000000c0._4_4_,in_stack_000000d0._4_4_,uStack00000000000000b0,
                         fStack00000000000000b4,in_stack_000000b8,uStack00000000000000b0);
            }
LAB_05bd9ac4:
            in_stack_00000100._4_4_ = 0;
          }
          else {
            if ((((int)unaff_x19[0x6c] < (int)unaff_w24) || ((int)unaff_x19[0x6d] < (int)unaff_w21))
               || (((int)unaff_x19[0x62] == 5 &&
                   (*(int *)(lVar15 + unaff_x25 * unaff_x22 + 0x60) + 1 != (int)unaff_x19[0x6e]))))
            {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((in_stack_00000100._4_4_ & 1) == 0) {
              if ((((in_stack_00000170 != 1.82169e-44) && (((uint)in_stack_00000170 & 0xfffe) != 10)
                   ) && ((int)unaff_w24 <= (int)uVar18)) && (bVar1)) {
                if (unaff_w24 == uVar18) {
                  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar12 = FUN_04f8481c(in_stack_00000170,0);
                  if ((uVar12 & 1) != 0) goto LAB_05bd9ac4;
                }
                lVar20 = *unaff_x28;
                if (*(int *)(lVar20 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                  lVar20 = *unaff_x28;
                }
                if ((*unaff_x27 != 0) && (lVar15 = *(long *)(*unaff_x27 + 0x38), lVar15 != 0)) {
                  uVar19 = (uint)*(undefined8 *)(lVar15 + 0x18);
                  if (unaff_w24 < uVar19) {
                    lVar20 = *(long *)(lVar20 + 0xb8);
                    lVar23 = lVar15 + unaff_x25 * unaff_x22;
                    in_stack_00001268 = *(undefined8 *)(lVar23 + 0x180);
                    in_stack_00001260 = *(undefined8 *)(lVar23 + 0x178);
                    in_stack_00000170 = *(float *)(lVar20 + 0x1720);
                    in_stack_00001270 = *(float *)(lVar23 + 0x188);
                    fStack00000000000000b4 = *(float *)(lVar20 + 0x1728);
                    in_stack_000000d0._4_4_ = *(float *)(lVar20 + 0x1724);
                    in_stack_000000b8 = *(float *)(lVar20 + 0x172c);
                    uStack00000000000000b0 = 0;
                    goto LAB_05bd9854;
                  }
                  break;
                }
                goto LAB_05bda144;
              }
              in_stack_00000100._4_4_ = 0;
            }
            else {
              in_stack_00000170 = in_stack_000000c0._4_4_;
LAB_05bd9854:
              if (uVar19 <= unaff_w24) break;
              lVar15 = lVar15 + unaff_x25 * unaff_x22;
              fVar31 = *(float *)(lVar15 + 0x120);
              fVar26 = *(float *)(lVar15 + 0x13c);
              fVar34 = *(float *)(lVar15 + 0x180);
              fVar35 = *(float *)(lVar15 + 0x188);
              uVar24 = *(undefined8 *)(lVar15 + 0x178);
              fVar36 = *(float *)(lVar15 + 0x184);
              uVar22 = *(undefined8 *)(lVar15 + 0x180);
              fVar33 = *(float *)(lVar15 + 0x114);
              fVar25 = *(float *)(lVar15 + 0x138);
              fVar29 = *(float *)(lVar15 + 0x140);
              fVar32 = *(float *)(lVar15 + 0x148);
              in_stack_00000188 = uVar24;
              fStack0000000000000190 = fVar34;
              fStack0000000000000194 = fVar36;
              in_stack_00000198 = fVar35;
              in_stack_000001a0 = in_stack_00001260;
              in_stack_000001a8 = in_stack_00001268;
              in_stack_000001b0 = in_stack_00001270;
              uVar12 = FUN_05bf61dc(&stack0x000001a0,&stack0x00000188,0);
              lVar15 = *(long *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_RemoveAtWithCapacity__
              ;
              if ((uVar12 & 1) == 0) {
                if (*(int *)(lVar15 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(lVar15);
                }
                bVar8 = (uStack0000000000000118 & 1) == 0;
                if (bVar8) {
                  fVar26 = fVar31;
                }
                fVar26 = fVar26 + (float)in_stack_00001268;
                if (bVar8) {
                  fVar25 = fVar33;
                }
                fVar25 = fVar25 - (float)((ulong)in_stack_00001260 >> 0x20);
                in_stack_000000c0._4_4_ = in_stack_00000170;
                if (fVar25 <= in_stack_00000170) {
                  in_stack_000000c0._4_4_ = fVar25;
                }
                if (fStack00000000000000b4 <= fVar26) {
                  fStack00000000000000b4 = fVar26;
                }
                if (*(int *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_RemoveAtWithCapacity__
                            + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                if (fVar32 - in_stack_00001270 <= in_stack_000000d0._4_4_) {
                  in_stack_000000d0._4_4_ = fVar32 - in_stack_00001270;
                }
                fVar29 = fVar29 + (float)((ulong)in_stack_00001268 >> 0x20);
                if (in_stack_000000b8 <= fVar29) {
                  in_stack_000000b8 = fVar29;
                }
              }
              else {
                if (*(int *)(lVar15 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(lVar15);
                }
                if ((uStack0000000000000118 & 1) == 0) {
                  fVar25 = fVar33;
                }
                in_stack_000000c0._4_4_ =
                     (fVar25 + (fStack00000000000000b4 - (float)in_stack_00001268)) * 0.5;
                if (fVar32 <= in_stack_000000d0._4_4_) {
                  in_stack_000000d0._4_4_ = fVar32;
                }
                if (in_stack_000000b8 <= fVar29) {
                  in_stack_000000b8 = fVar29;
                }
                (**(code **)(*unaff_x19 + 0x918))
                          (in_stack_00000170,in_stack_000000d0._4_4_,uStack00000000000000b0,
                           in_stack_000000c0._4_4_,in_stack_000000b8,uStack00000000000000b0);
                if ((*(int *)(*(long *)
                               Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_RemoveAtWithCapacity__
                             + 0xe4) == 0) &&
                   (thunk_FUN_02dbd7b4(),
                   *(int *)(*(long *)
                             Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_RemoveAtWithCapacity__
                           + 0xe4) == 0)) {
                  thunk_FUN_02dbd7b4();
                }
                in_stack_000000d0._4_4_ = fVar32 - fVar35;
                if ((uStack0000000000000118 & 1) == 0) {
                  fVar26 = fVar31;
                }
                fStack00000000000000b4 = fVar26 + fVar34;
                uStack00000000000000b0 = 0;
                in_stack_000000b8 = fVar29 + fVar36;
                in_stack_00001260 = uVar24;
                in_stack_00001268 = uVar22;
                in_stack_00001270 = fVar35;
              }
              unaff_x22 = 0x178;
              if ((((*in_stack_00000180 == 1) || (unaff_w24 == (uint)in_stack_000000d8)) ||
                  ((int)uVar18 <= (int)unaff_w24)) || (!bVar1)) goto LAB_05bd9a90;
              in_stack_00000100._4_4_ = 1;
            }
          }
          puVar7 = 
          Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__;
          iVar11 = *in_stack_00000180;
          iStack0000000000000110 = iStack0000000000000110 + 1;
          in_stack_00000160 = in_stack_00000160 + 0x178;
          uVar19 = in_stack_00000158 + 1;
          if (iVar11 <= (int)in_stack_00000158) {
            lVar15 = *unaff_x27;
            if (lVar15 == 0) goto LAB_05bda144;
            lVar20 = *(long *)(lVar15 + 0x60);
            if (lVar20 == 0) goto LAB_05bda144;
            if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) break;
            *(undefined4 *)(lVar20 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x50 + 0x28) =
                 in_stack_00001274;
            *(int *)(lVar15 + 0x18) = iVar11;
            lVar20 = unaff_x19[0xd7];
            *(uint *)(lVar15 + 0x2c) = unaff_w21 + 1;
            if (iVar11 < 1 || in_stack_000000c8 == 0) {
              in_stack_000000c8 = 1;
            }
            *(int *)(lVar15 + 0x1c) = (int)lVar20;
            *(int *)(lVar15 + 0x24) = in_stack_000000c8;
            *(int *)(lVar15 + 0x30) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
            if (((int)unaff_x19[0x6a] != 0xff) ||
               (uVar12 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar12 & 1) == 0)) goto LAB_05bd7728;
            lVar15 = unaff_x19[0xde];
            if (lVar15 != 0) {
              (**(code **)(lVar15 + 0x18))
                        (*(undefined8 *)(lVar15 + 0x40),*unaff_x27,*(undefined8 *)(lVar15 + 0x28));
            }
            if (*(int *)((long)unaff_x19 + 0x354) != 0) {
              if ((*unaff_x27 == 0) || (lVar15 = *(long *)(*unaff_x27 + 0x60), lVar15 == 0))
              goto LAB_05bda144;
              if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              if (*(int *)(lVar15 + 0x18) == 0) break;
              FUN_05c3fd34(lVar15 + 0x20,1,0);
            }
            if (unaff_x19[0x7b] == 0) goto LAB_05bda144;
            FUN_06042ef4(unaff_x19[0x7b],0);
            if ((unaff_x19[0x74] == 0) || (lVar15 = *(long *)(unaff_x19[0x74] + 0x60), lVar15 == 0))
            goto LAB_05bda144;
            if (*(int *)(lVar15 + 0x18) == 0) break;
            if (unaff_x19[0x7b] == 0) goto LAB_05bda144;
            FUN_06040930(unaff_x19[0x7b],*(undefined8 *)(lVar15 + 0x30),0);
            if ((unaff_x19[0x74] == 0) || (lVar15 = *(long *)(unaff_x19[0x74] + 0x60), lVar15 == 0))
            goto LAB_05bda144;
            if (*(int *)(lVar15 + 0x18) == 0) break;
            if (unaff_x19[0x7b] == 0) goto LAB_05bda144;
            FUN_06041994(unaff_x19[0x7b],0,*(undefined8 *)(lVar15 + 0x48),0);
            if ((unaff_x19[0x74] == 0) || (lVar15 = *(long *)(unaff_x19[0x74] + 0x60), lVar15 == 0))
            goto LAB_05bda144;
            if (*(int *)(lVar15 + 0x18) == 0) break;
            if (unaff_x19[0x7b] == 0) goto LAB_05bda144;
            FUN_06040b94(unaff_x19[0x7b],*(undefined8 *)(lVar15 + 0x50),0);
            if ((unaff_x19[0x74] == 0) || (lVar15 = *(long *)(unaff_x19[0x74] + 0x60), lVar15 == 0))
            goto LAB_05bda144;
            if (*(int *)(lVar15 + 0x18) == 0) break;
            if (unaff_x19[0x7b] == 0) goto LAB_05bda144;
            FUN_06040ca8(unaff_x19[0x7b],*(undefined8 *)(lVar15 + 0x58),0);
            if (unaff_x19[0x7b] == 0) goto LAB_05bda144;
            FUN_06042d74(unaff_x19[0x7b],0);
            lVar15 = *unaff_x27;
            if (lVar15 == 0) goto LAB_05bda144;
            lVar23 = 0;
            lVar20 = 0;
            goto LAB_05bd9ec8;
          }
          if (*(uint *)(unaff_x29 + 0x18) <= in_stack_00000158) break;
          unaff_x25 = (long)(int)in_stack_00000158;
          lVar15 = unaff_x29 + unaff_x25 * unaff_x22;
          in_stack_000000f8 = *(long *)(lVar15 + 0x40);
          uVar3 = *(ushort *)(lVar15 + 0x24);
          in_stack_00000170 = (float)(uint)uVar3;
          if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uStack0000000000000118 = FUN_04f80ed4(uVar3,0);
          if (*(uint *)(unaff_x29 + 0x18) <= in_stack_00000158) break;
          if ((*unaff_x27 == 0) || (lVar15 = *(long *)(*unaff_x27 + 0x50), lVar15 == 0))
          goto LAB_05bda144;
          uVar18 = *(uint *)(unaff_x29 + unaff_x25 * unaff_x22 + 0x5c);
          if (*(uint *)(lVar15 + 0x18) <= uVar18) break;
          lVar20 = (long)(int)uVar18;
          lVar15 = lVar15 + lVar20 * unaff_x26;
          in_stack_000000d8 = (long)(int)*(uint *)(lVar15 + 0x40);
          uVar10 = *(uint *)(lVar15 + 0x6c);
          iVar2 = *(int *)(lVar15 + 0x20);
          iVar11 = *(int *)(lVar15 + 0x28);
          iVar9 = *(int *)(lVar15 + 0x2c);
          uVar5 = *(uint *)(lVar15 + 0x44);
          in_stack_00000168 = (long)(int)uVar5;
          fVar26 = *(float *)(lVar15 + 0x50);
          fVar29 = *(float *)(lVar15 + 0x58);
          fVar33 = *(float *)(lVar15 + 0x5c);
          fVar34 = *(float *)(lVar15 + 0x60);
          fVar35 = *(float *)(lVar15 + 100);
          fVar32 = *(float *)(lVar15 + 0x70);
          fVar36 = *(float *)(lVar15 + 0x74);
          fVar25 = *(float *)(lVar15 + 0x78);
          fVar31 = *(float *)(lVar15 + 0x7c);
          if ((int)uVar10 < 9) {
            switch(uVar10) {
            case 1:
              if ((char)unaff_x19[0x1e] == '\0') {
                in_stack_000000e8._4_4_ = fVar35 + 0.0;
              }
              else {
                in_stack_000000e8._4_4_ = 0.0 - fVar33;
              }
              break;
            case 2:
              in_stack_000000e8._4_4_ = (fVar35 + fVar34 * 0.5) - fVar33 * 0.5;
              break;
            case 3:
              goto switchD_05bd7eb4_caseD_3;
            case 4:
              in_stack_000000e8._4_4_ = (fVar34 + fVar35) - fVar33;
              if ((char)unaff_x19[0x1e] != '\0') {
                in_stack_000000e8._4_4_ = fVar34 + fVar35;
              }
              break;
            default:
              if ((((in_stack_00000170 != 4.2039e-45) && (in_stack_00000170 != 1.1614e-41)) &&
                  (in_stack_00000170 != 1.14949e-41)) &&
                 (((in_stack_00000170 != 2.42425e-43 && (in_stack_00000170 != 1.4013e-44)) &&
                  (((int)in_stack_00000158 <= (int)uVar5 && (uVar10 == 8)))))) goto LAB_05bd7f50;
              goto switchD_05bd7eb4_caseD_3;
            }
            in_stack_000000e0 = 0;
          }
          else if (uVar10 == 0x10) {
            if ((int)uVar5 < (int)in_stack_00000158) goto switchD_05bd7eb4_caseD_3;
            if ((uint)in_stack_00000170 < 0xad) {
              if ((in_stack_00000170 != 4.2039e-45) && (in_stack_00000170 != 1.4013e-44))
              goto LAB_05bd7f50;
            }
            else if ((in_stack_00000170 != 2.42425e-43) &&
                    ((in_stack_00000170 != 1.14949e-41 && (in_stack_00000170 != 1.1614e-41)))) {
LAB_05bd7f50:
              if (*(uint *)(unaff_x29 + 0x18) <= *(uint *)(lVar15 + 0x40)) break;
              uVar4 = *(undefined2 *)(unaff_x29 + in_stack_000000d8 * 0x178 + 0x24);
              if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar12 = FUN_04f84410(uVar4,0);
              unaff_x28 = (long *)
                          Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
              if ((uVar12 & 1) == 0) {
                bVar1 = (int)uVar18 < (int)unaff_x19[0x97];
              }
              else {
                bVar1 = false;
              }
              if ((fVar34 < fVar33) || (bVar1 || uVar10 >> 4 != 0)) {
                if ((uVar19 == 1) ||
                   ((uVar18 != unaff_w21 ||
                    (in_stack_00000158 == *(uint *)((long)unaff_x19 + 0x35c))))) {
                  in_stack_000000e8._4_4_ = fVar35;
                  if ((char)unaff_x19[0x1e] != '\0') {
                    in_stack_000000e8._4_4_ = fVar34 + fVar35;
                  }
                  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  in_stack_00000050._4_4_ = FUN_04f8481c(in_stack_00000170,0);
                  in_stack_000000e0 = 0;
                }
                else {
                  cVar14 = (char)unaff_x19[0x1e];
                  iVar9 = (iVar9 - iVar2) - (in_stack_00000050._4_4_ & 1);
                  fVar35 = -fVar33;
                  if (cVar14 != '\0') {
                    fVar35 = fVar33;
                  }
                  if (iVar9 < 1) {
                    fVar33 = 1.0;
                    iVar9 = 1;
                  }
                  else {
                    fVar33 = *(float *)((long)unaff_x19 + 0x30c);
                  }
                  fVar27 = (float)((ulong)in_stack_000000e0 >> 0x20);
                  if (in_stack_00000170 == 1.26117e-44) {
LAB_05bd9c58:
                    fVar33 = ((fVar34 + fVar35) * (1.0 - fVar33)) / (float)iVar9;
                    if (cVar14 == '\0') {
                      in_stack_000000e8._4_4_ = in_stack_000000e8._4_4_ + fVar33;
                      in_stack_000000e0 = CONCAT44(fVar27 + 0.0,(float)in_stack_000000e0 + 0.0);
                    }
                    else {
                      in_stack_000000e8._4_4_ = in_stack_000000e8._4_4_ - fVar33;
                    }
                  }
                  else {
                    if (in_stack_00000170 != 2.24208e-43) {
                      if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      uVar12 = FUN_04f8481c(in_stack_00000170,0);
                      cVar14 = (char)unaff_x19[0x1e];
                      if ((uVar12 & 1) != 0) goto LAB_05bd9c58;
                    }
                    fVar33 = ((fVar34 + fVar35) * fVar33) /
                             (float)(int)((iVar2 - (~in_stack_00000050._4_4_ & 1)) + iVar11);
                    if (cVar14 == '\0') {
                      in_stack_000000e8._4_4_ = in_stack_000000e8._4_4_ + fVar33;
                      in_stack_000000e0 = CONCAT44(fVar27 + 0.0,(float)in_stack_000000e0 + 0.0);
                    }
                    else {
                      in_stack_000000e8._4_4_ = in_stack_000000e8._4_4_ - fVar33;
                    }
                  }
                }
              }
              else {
                in_stack_000000e8._4_4_ = fVar35;
                if ((char)unaff_x19[0x1e] != '\0') {
                  in_stack_000000e8._4_4_ = fVar34 + fVar35;
                }
                in_stack_000000e0 = 0;
              }
            }
          }
          else if (uVar10 == 0x20) {
            in_stack_000000e8._4_4_ = (fVar35 + fVar34 * 0.5) - (fVar32 + fVar25) * 0.5;
            in_stack_000000e0 = 0;
          }
switchD_05bd7eb4_caseD_3:
          uVar10 = (uint)*(undefined8 *)(unaff_x29 + 0x18);
          if (uVar10 <= in_stack_00000158) break;
          lVar15 = unaff_x29 + unaff_x25 * 0x178;
          fVar34 = in_stack_000000a8 + in_stack_000000e8._4_4_;
          in_stack_00000130 = (float)in_stack_000000a0 + (float)in_stack_000000e0;
          fVar33 = (float)((ulong)in_stack_000000a0 >> 0x20) +
                   (float)((ulong)in_stack_000000e0 >> 0x20);
          if (*(char *)(lVar15 + 400) == '\0') goto LAB_05bd8760;
          iVar11 = *(int *)(unaff_x29 + unaff_x25 * 0x178 + 0x20);
          if (iVar11 != 0) goto LAB_05bd8578;
          fVar35 = fmodf(*(float *)((long)unaff_x19 + 0x34c) * (float)(int)uVar18,1.0);
          switch(*(undefined4 *)((long)unaff_x19 + 0x344)) {
          case 0:
            lVar23 = unaff_x29 + unaff_x25 * 0x178;
            *(undefined4 *)(lVar23 + 0x84) = 0;
            *(undefined4 *)(lVar23 + 0xac) = 0;
            *(undefined4 *)(lVar23 + 0xd4) = 0x3f800000;
            fVar35 = 1.0;
            break;
          case 1:
            fVar31 = *(float *)(unaff_x29 + unaff_x25 * 0x178 + 0x68);
            if (*(int *)((long)unaff_x19 + 0x29c) == 0x208) {
              lVar23 = unaff_x29 + unaff_x25 * 0x178;
              fVar25 = (in_stack_000000e8._4_4_ + fVar31) - *(float *)(unaff_x19 + 0x9e);
              fVar31 = *(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e);
              goto LAB_05bd8168;
            }
            lVar23 = unaff_x29 + unaff_x25 * 0x178;
            fVar25 = fVar25 - fVar32;
            *(float *)(lVar23 + 0x84) = fVar35 + (fVar31 - fVar32) / fVar25;
            *(float *)(lVar23 + 0xac) = fVar35 + (*(float *)(lVar23 + 0x90) - fVar32) / fVar25;
            *(float *)(lVar23 + 0xd4) = fVar35 + (*(float *)(lVar23 + 0xb8) - fVar32) / fVar25;
            fVar35 = fVar35 + (*(float *)(lVar23 + 0xe0) - fVar32) / fVar25;
            break;
          case 2:
            lVar23 = unaff_x29 + unaff_x25 * 0x178;
            fVar31 = *(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e);
            fVar25 = (in_stack_000000e8._4_4_ + *(float *)(lVar23 + 0x68)) -
                     *(float *)(unaff_x19 + 0x9e);
LAB_05bd8168:
            *(float *)(lVar23 + 0x84) = fVar35 + fVar25 / fVar31;
            *(float *)(lVar23 + 0xac) =
                 fVar35 + ((in_stack_000000e8._4_4_ + *(float *)(lVar23 + 0x90)) -
                          *(float *)(unaff_x19 + 0x9e)) /
                          (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
            *(float *)(lVar23 + 0xd4) =
                 fVar35 + ((in_stack_000000e8._4_4_ + *(float *)(lVar23 + 0xb8)) -
                          *(float *)(unaff_x19 + 0x9e)) /
                          (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
            fVar35 = fVar35 + ((in_stack_000000e8._4_4_ + *(float *)(lVar23 + 0xe0)) -
                              *(float *)(unaff_x19 + 0x9e)) /
                              (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
            break;
          case 3:
            switch((int)unaff_x19[0x69]) {
            case 0:
              lVar23 = unaff_x29 + unaff_x25 * 0x178;
              *(undefined4 *)(lVar23 + 0x88) = 0;
              *(undefined4 *)(lVar23 + 0xb0) = 0x3f800000;
              *(undefined4 *)(lVar23 + 0xd8) = 0;
              *(undefined4 *)(lVar23 + 0x100) = 0x3f800000;
              break;
            case 1:
              lVar23 = unaff_x29 + unaff_x25 * 0x178;
              fVar31 = fVar31 - fVar36;
              fVar25 = fVar35 + (*(float *)(lVar23 + 0x6c) - fVar36) / fVar31;
              fVar31 = fVar35 + (*(float *)(lVar23 + 0x94) - fVar36) / fVar31;
              *(float *)(lVar23 + 0x88) = fVar25;
              *(float *)(lVar23 + 0xb0) = fVar31;
              *(float *)(lVar23 + 0xd8) = fVar25;
              *(float *)(lVar23 + 0x100) = fVar31;
              break;
            case 2:
              lVar23 = unaff_x29 + unaff_x25 * 0x178;
              fVar25 = fVar35 + (*(float *)(lVar23 + 0x6c) - *(float *)((long)unaff_x19 + 0x4f4)) /
                                (*(float *)((long)unaff_x19 + 0x4fc) -
                                *(float *)((long)unaff_x19 + 0x4f4));
              *(float *)(lVar23 + 0x88) = fVar25;
              fVar31 = *(float *)((long)unaff_x19 + 0x4f4);
              fVar32 = *(float *)((long)unaff_x19 + 0x4fc);
              *(float *)(lVar23 + 0xd8) = fVar25;
              fVar25 = fVar35 + (*(float *)(lVar23 + 0x94) - fVar31) / (fVar32 - fVar31);
              *(float *)(lVar23 + 0xb0) = fVar25;
              *(float *)(lVar23 + 0x100) = fVar25;
              break;
            case 3:
              if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_06021dcc(*(undefined8 *)
                            Method_UnityEngine_InputSystem_InputControlList<InputControl>_Resize__,0
                          );
              uVar10 = (uint)*(undefined8 *)(unaff_x29 + 0x18);
            }
            if (uVar10 <= in_stack_00000158) goto LAB_05bda2b0;
            lVar23 = unaff_x29 + unaff_x25 * 0x178;
            fVar25 = *(float *)(lVar23 + 0x158);
            fVar31 = (1.0 - (*(float *)(lVar23 + 0x88) + *(float *)(lVar23 + 0xb0)) * fVar25) * 0.5;
            fVar32 = fVar35 + *(float *)(lVar23 + 0x88) * fVar25 + fVar31;
            fVar35 = fVar35 + fVar31 + *(float *)(lVar23 + 0xb0) * fVar25;
            *(float *)(lVar23 + 0x84) = fVar32;
            *(float *)(lVar23 + 0xac) = fVar32;
            *(float *)(lVar23 + 0xd4) = fVar35;
            break;
          default:
            goto switchD_05bd80d4_default;
          }
          *(float *)(unaff_x29 + unaff_x25 * 0x178 + 0xfc) = fVar35;
switchD_05bd80d4_default:
          switch((int)unaff_x19[0x69]) {
          case 0:
            if (uVar10 <= in_stack_00000158) goto LAB_05bda2b0;
            lVar23 = unaff_x29 + unaff_x25 * 0x178;
            *(undefined4 *)(lVar23 + 0x88) = 0;
            *(undefined4 *)(lVar23 + 0xb0) = 0x3f800000;
            *(undefined4 *)(lVar23 + 0xd8) = 0x3f800000;
            *(undefined4 *)(lVar23 + 0x100) = 0;
            break;
          case 1:
            if (in_stack_00000158 < uVar10) {
              lVar23 = unaff_x29 + unaff_x25 * 0x178;
              fVar26 = fVar26 - fVar29;
              fVar25 = (*(float *)(lVar23 + 0x6c) - fVar29) / fVar26;
              fVar26 = (*(float *)(lVar23 + 0x94) - fVar29) / fVar26;
              *(float *)(lVar23 + 0x88) = fVar25;
              goto LAB_05bd84c0;
            }
            goto LAB_05bda2b0;
          case 2:
            if (uVar10 <= in_stack_00000158) goto LAB_05bda2b0;
            lVar23 = unaff_x29 + unaff_x25 * 0x178;
            fVar25 = (*(float *)(lVar23 + 0x6c) - *(float *)((long)unaff_x19 + 0x4f4)) /
                     (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
            *(float *)(lVar23 + 0x88) = fVar25;
            fVar26 = (*(float *)(lVar23 + 0x94) - *(float *)((long)unaff_x19 + 0x4f4)) /
                     (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
LAB_05bd84c0:
            *(float *)(lVar23 + 0xb0) = fVar26;
            *(float *)(lVar23 + 0xd8) = fVar26;
            *(float *)(lVar23 + 0x100) = fVar25;
            break;
          case 3:
            if (uVar10 <= in_stack_00000158) goto LAB_05bda2b0;
            lVar23 = unaff_x29 + unaff_x25 * 0x178;
            fVar31 = *(float *)(lVar23 + 0x158);
            fVar26 = (1.0 - (*(float *)(lVar23 + 0x84) + *(float *)(lVar23 + 0xd4)) / fVar31) * 0.5;
            fVar25 = *(float *)(lVar23 + 0x84) / fVar31 + fVar26;
            fVar26 = fVar26 + *(float *)(lVar23 + 0xd4) / fVar31;
            *(float *)(lVar23 + 0x88) = fVar25;
            *(float *)(lVar23 + 0xb0) = fVar26;
            *(float *)(lVar23 + 0x100) = fVar25;
            *(float *)(lVar23 + 0xd8) = fVar26;
          }
          if (uVar10 <= in_stack_00000158) break;
          lVar23 = unaff_x29 + unaff_x25 * 0x178;
          unaff_s13 = fStack0000000000000060 * *(float *)(lVar23 + 0x15c) *
                      (1.0 - *(float *)(unaff_x19 + 0x60));
          if ((*(char *)(lVar23 + 0x54) == '\0') &&
             ((*(byte *)(unaff_x29 + unaff_x25 * 0x178 + 0x18c) & 1) != 0)) {
            unaff_s13 = -unaff_s13;
          }
          lVar23 = unaff_x29 + unaff_x25 * 0x178;
          *(float *)(lVar23 + 0x80) = unaff_s13;
          *(float *)(lVar23 + 0xa8) = unaff_s13;
          *(float *)(lVar23 + 0xd0) = unaff_s13;
          *(float *)(lVar23 + 0xf8) = unaff_s13;
LAB_05bd8578:
          if (((int)in_stack_00000158 < (int)unaff_x19[0x6c]) &&
             (in_stack_000000c8 < *(int *)((long)unaff_x19 + 0x364))) {
            if (((int)unaff_x19[0x6d] <= (int)uVar18) || ((int)unaff_x19[0x62] == 5)) {
              if (((int)uVar18 < (int)unaff_x19[0x6d]) && ((int)unaff_x19[0x62] == 5)) {
                if (in_stack_00000158 < uVar10) {
                  if (*(int *)(unaff_x29 + unaff_x25 * 0x178 + 0x60) == in_stack_00000030._4_4_) {
                    lVar15 = unaff_x29 + unaff_x25 * 0x178;
                    *(ulong *)(lVar15 + 0x68) =
                         CONCAT44(in_stack_00000130 +
                                  (float)((ulong)*(undefined8 *)(lVar15 + 0x68) >> 0x20),
                                  fVar34 + (float)*(undefined8 *)(lVar15 + 0x68));
                    *(float *)(lVar15 + 0x70) = fVar33 + *(float *)(lVar15 + 0x70);
                    *(ulong *)(lVar15 + 0x90) =
                         CONCAT44(in_stack_00000130 +
                                  (float)((ulong)*(undefined8 *)(lVar15 + 0x90) >> 0x20),
                                  fVar34 + (float)*(undefined8 *)(lVar15 + 0x90));
                    *(float *)(lVar15 + 0x98) = fVar33 + *(float *)(lVar15 + 0x98);
                    *(ulong *)(lVar15 + 0xb8) =
                         CONCAT44(in_stack_00000130 +
                                  (float)((ulong)*(undefined8 *)(lVar15 + 0xb8) >> 0x20),
                                  fVar34 + (float)*(undefined8 *)(lVar15 + 0xb8));
                    *(float *)(lVar15 + 0xc0) = fVar33 + *(float *)(lVar15 + 0xc0);
                    *(ulong *)(lVar15 + 0xe0) =
                         CONCAT44(in_stack_00000130 +
                                  (float)((ulong)*(undefined8 *)(lVar15 + 0xe0) >> 0x20),
                                  fVar34 + (float)*(undefined8 *)(lVar15 + 0xe0));
                    *(float *)(lVar15 + 0xe8) = fVar33 + *(float *)(lVar15 + 0xe8);
                    goto LAB_05bd870c;
                  }
                  goto LAB_05bd8650;
                }
                break;
              }
              goto LAB_05bd8650;
            }
            if (uVar10 <= in_stack_00000158) break;
            lVar15 = unaff_x29 + unaff_x25 * 0x178;
            *(ulong *)(lVar15 + 0x68) =
                 CONCAT44(in_stack_00000130 + (float)((ulong)*(undefined8 *)(lVar15 + 0x68) >> 0x20)
                          ,fVar34 + (float)*(undefined8 *)(lVar15 + 0x68));
            *(float *)(lVar15 + 0x70) = fVar33 + *(float *)(lVar15 + 0x70);
            *(ulong *)(lVar15 + 0x90) =
                 CONCAT44(in_stack_00000130 + (float)((ulong)*(undefined8 *)(lVar15 + 0x90) >> 0x20)
                          ,fVar34 + (float)*(undefined8 *)(lVar15 + 0x90));
            *(float *)(lVar15 + 0x98) = fVar33 + *(float *)(lVar15 + 0x98);
            *(ulong *)(lVar15 + 0xb8) =
                 CONCAT44(in_stack_00000130 + (float)((ulong)*(undefined8 *)(lVar15 + 0xb8) >> 0x20)
                          ,fVar34 + (float)*(undefined8 *)(lVar15 + 0xb8));
            *(float *)(lVar15 + 0xc0) = fVar33 + *(float *)(lVar15 + 0xc0);
            *(ulong *)(lVar15 + 0xe0) =
                 CONCAT44(in_stack_00000130 + (float)((ulong)*(undefined8 *)(lVar15 + 0xe0) >> 0x20)
                          ,fVar34 + (float)*(undefined8 *)(lVar15 + 0xe0));
            *(float *)(lVar15 + 0xe8) = fVar33 + *(float *)(lVar15 + 0xe8);
          }
          else {
LAB_05bd8650:
            if (uVar10 <= in_stack_00000158) break;
            if (DAT_06b7224b == '\0') {
              FUN_02d6084c(PTR_DAT_0675e318);
              DAT_06b7224b = '\x01';
              uVar10 = *(uint *)(unaff_x29 + 0x18);
            }
            puVar7 = PTR_DAT_0675e318;
            uVar28 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_0675e318 + 0xb8) + 1);
            lVar23 = unaff_x29 + unaff_x25 * 0x178;
            *(undefined8 *)(lVar23 + 0x68) = **(undefined8 **)(*(long *)PTR_DAT_0675e318 + 0xb8);
            *(undefined4 *)(lVar23 + 0x70) = uVar28;
            if (uVar10 <= in_stack_00000158) break;
            uVar28 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
            lVar23 = unaff_x29 + unaff_x25 * 0x178;
            *(undefined8 *)(lVar23 + 0x90) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
            *(undefined4 *)(lVar23 + 0x98) = uVar28;
            uVar28 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
            *(undefined8 *)(lVar23 + 0xb8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
            *(undefined4 *)(lVar23 + 0xc0) = uVar28;
            uVar28 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
            *(undefined8 *)(lVar23 + 0xe0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
            *(undefined4 *)(lVar23 + 0xe8) = uVar28;
            *(undefined1 *)(lVar15 + 400) = 0;
          }
LAB_05bd870c:
          iVar9 = FUN_06030c10(0);
          *(bool *)((long)unaff_x19 + 0x174) = iVar9 == 1;
          if (iVar11 == 0) {
            pcVar16 = *(code **)(*unaff_x19 + 0x8d8);
LAB_05bd874c:
            (*pcVar16)();
            unaff_x28 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          }
          else {
            unaff_x28 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
            if (iVar11 == 1) {
              pcVar16 = *(code **)(*unaff_x19 + 0x8f8);
              goto LAB_05bd874c;
            }
          }
LAB_05bd8760:
          unaff_x26 = 0x60;
          if ((*in_stack_00000178 == 0) ||
             (lVar15 = *(long *)(*in_stack_00000178 + 0x38), lVar15 == 0)) goto LAB_05bda144;
          if (*(uint *)(lVar15 + 0x18) <= in_stack_00000158) break;
          lVar15 = lVar15 + unaff_x25 * 0x178;
          uVar22 = *(undefined8 *)(lVar15 + 0x114);
          *(undefined8 *)(lVar15 + 0x114) =
               CONCAT44(in_stack_00000130 + (float)((ulong)uVar22 >> 0x20),fVar34 + (float)uVar22);
          *(float *)(lVar15 + 0x11c) = fVar33 + *(float *)(lVar15 + 0x11c);
          if ((*in_stack_00000178 == 0) ||
             (lVar15 = *(long *)(*in_stack_00000178 + 0x38), lVar15 == 0)) goto LAB_05bda144;
          if (*(uint *)(lVar15 + 0x18) <= in_stack_00000158) break;
          lVar15 = lVar15 + unaff_x25 * 0x178;
          *(ulong *)(lVar15 + 0x108) =
               CONCAT44(in_stack_00000130 + (float)((ulong)*(undefined8 *)(lVar15 + 0x108) >> 0x20),
                        fVar34 + (float)*(undefined8 *)(lVar15 + 0x108));
          *(float *)(lVar15 + 0x110) = fVar33 + *(float *)(lVar15 + 0x110);
          if ((*in_stack_00000178 == 0) ||
             (lVar15 = *(long *)(*in_stack_00000178 + 0x38), lVar15 == 0)) goto LAB_05bda144;
          if (*(uint *)(lVar15 + 0x18) <= in_stack_00000158) break;
          lVar15 = lVar15 + unaff_x25 * 0x178;
          *(ulong *)(lVar15 + 0x120) =
               CONCAT44(in_stack_00000130 + (float)((ulong)*(undefined8 *)(lVar15 + 0x120) >> 0x20),
                        fVar34 + (float)*(undefined8 *)(lVar15 + 0x120));
          *(float *)(lVar15 + 0x128) = fVar33 + *(float *)(lVar15 + 0x128);
          if ((*in_stack_00000178 == 0) ||
             (lVar15 = *(long *)(*in_stack_00000178 + 0x38), lVar15 == 0)) goto LAB_05bda144;
          if (*(uint *)(lVar15 + 0x18) <= in_stack_00000158) break;
          lVar15 = lVar15 + unaff_x25 * 0x178;
          *(float *)(lVar15 + 300) = fVar34 + *(float *)(lVar15 + 300);
          *(ulong *)(lVar15 + 0x130) =
               CONCAT44(fVar33 + (float)((ulong)*(undefined8 *)(lVar15 + 0x130) >> 0x20),
                        in_stack_00000130 + (float)*(undefined8 *)(lVar15 + 0x130));
          lVar15 = *in_stack_00000178;
          if ((lVar15 == 0) || (lVar23 = *(long *)(lVar15 + 0x38), lVar23 == 0)) goto LAB_05bda144;
          uVar10 = *(uint *)(lVar23 + 0x18);
          if (uVar10 <= in_stack_00000158) break;
          lVar17 = lVar23 + unaff_x25 * 0x178;
          *(float *)(lVar17 + 0x148) = in_stack_00000130 + *(float *)(lVar17 + 0x148);
          *(ulong *)(lVar17 + 0x138) =
               CONCAT44(fVar34 + (float)((ulong)*(undefined8 *)(lVar17 + 0x138) >> 0x20),
                        fVar34 + (float)*(undefined8 *)(lVar17 + 0x138));
          *(ulong *)(lVar17 + 0x140) =
               CONCAT44(in_stack_00000130 + (float)((ulong)*(undefined8 *)(lVar17 + 0x140) >> 0x20),
                        in_stack_00000130 + (float)*(undefined8 *)(lVar17 + 0x140));
          if (uVar18 == unaff_w21) {
            uVar10 = *in_stack_00000180 - 1;
            if (in_stack_00000158 == uVar10) goto LAB_05bd8970;
          }
          else {
            lVar15 = *(long *)(lVar15 + 0x50);
            if (lVar15 == 0) goto LAB_05bda144;
            if (*(uint *)(lVar15 + 0x18) <= unaff_w21) break;
            lVar17 = (long)(int)unaff_w21;
            lVar21 = lVar15 + lVar17 * 0x60;
            fVar25 = in_stack_00000130 + *(float *)(lVar21 + 0x58);
            *(ulong *)(lVar21 + 0x50) =
                 CONCAT44(in_stack_00000130 + (float)((ulong)*(undefined8 *)(lVar21 + 0x50) >> 0x20)
                          ,in_stack_00000130 + (float)*(undefined8 *)(lVar21 + 0x50));
            *(float *)(lVar21 + 0x58) = fVar25;
            *(float *)(lVar21 + 0x5c) = fVar34 + *(float *)(lVar21 + 0x5c);
            if (uVar10 <= *(uint *)(lVar21 + 0x38)) break;
            uVar28 = *(undefined4 *)(lVar23 + (long)(int)*(uint *)(lVar21 + 0x38) * 0x178 + 0x114);
            lVar15 = lVar15 + lVar17 * 0x60;
            *(float *)(lVar15 + 0x74) = fVar25;
            *(undefined4 *)(lVar15 + 0x70) = uVar28;
            lVar15 = *in_stack_00000178;
            if ((lVar15 == 0) || (lVar23 = *(long *)(lVar15 + 0x50), lVar23 == 0))
            goto LAB_05bda144;
            if (*(uint *)(lVar23 + 0x18) <= unaff_w21) break;
            lVar15 = *(long *)(lVar15 + 0x38);
            if (lVar15 == 0) goto LAB_05bda144;
            uVar10 = *(uint *)(lVar23 + lVar17 * 0x60 + 0x44);
            if (*(uint *)(lVar15 + 0x18) <= uVar10) break;
            lVar23 = lVar23 + lVar17 * 0x60;
            *(undefined4 *)(lVar23 + 0x78) =
                 *(undefined4 *)(lVar15 + (long)(int)uVar10 * 0x178 + 0x120);
            *(undefined4 *)(lVar23 + 0x7c) = *(undefined4 *)(lVar23 + 0x50);
            uVar10 = *in_stack_00000180 - 1;
LAB_05bd8970:
            if (in_stack_00000158 == uVar10) {
              lVar15 = *in_stack_00000178;
              if ((lVar15 == 0) || (lVar23 = *(long *)(lVar15 + 0x50), lVar23 == 0))
              goto LAB_05bda144;
              if (*(uint *)(lVar23 + 0x18) <= uVar18) break;
              lVar17 = lVar23 + lVar20 * 0x60;
              fVar25 = in_stack_00000130 + *(float *)(lVar17 + 0x58);
              *(ulong *)(lVar17 + 0x50) =
                   CONCAT44(in_stack_00000130 +
                            (float)((ulong)*(undefined8 *)(lVar17 + 0x50) >> 0x20),
                            in_stack_00000130 + (float)*(undefined8 *)(lVar17 + 0x50));
              *(float *)(lVar17 + 0x58) = fVar25;
              *(float *)(lVar17 + 0x5c) = fVar34 + *(float *)(lVar17 + 0x5c);
              lVar15 = *(long *)(lVar15 + 0x38);
              if (lVar15 == 0) goto LAB_05bda144;
              if (*(uint *)(lVar15 + 0x18) <= *(uint *)(lVar17 + 0x38)) break;
              uVar28 = *(undefined4 *)(lVar15 + (long)(int)*(uint *)(lVar17 + 0x38) * 0x178 + 0x114)
              ;
              lVar23 = lVar23 + lVar20 * 0x60;
              *(float *)(lVar23 + 0x74) = fVar25;
              *(undefined4 *)(lVar23 + 0x70) = uVar28;
              lVar15 = *in_stack_00000178;
              if ((lVar15 == 0) || (lVar23 = *(long *)(lVar15 + 0x50), lVar23 == 0))
              goto LAB_05bda144;
              if (*(uint *)(lVar23 + 0x18) <= uVar18) break;
              lVar15 = *(long *)(lVar15 + 0x38);
              if (lVar15 == 0) goto LAB_05bda144;
              uVar10 = *(uint *)(lVar23 + lVar20 * 0x60 + 0x44);
              if (*(uint *)(lVar15 + 0x18) <= uVar10) break;
              lVar23 = lVar23 + lVar20 * 0x60;
              *(undefined4 *)(lVar23 + 0x78) =
                   *(undefined4 *)(lVar15 + (long)(int)uVar10 * 0x178 + 0x120);
              *(undefined4 *)(lVar23 + 0x7c) = *(undefined4 *)(lVar23 + 0x50);
            }
          }
          if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar12 = FUN_04f83944(in_stack_00000170,0);
          if (((((uVar12 & 1) == 0) && (1 < (int)in_stack_00000170 - 0x2010U)) &&
              (in_stack_00000170 != 2.42425e-43)) && (in_stack_00000170 != 6.30584e-44)) {
            if ((in_stack_00000108._4_4_ & 1) == 0) {
              if (uVar19 == 1) {
                if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar10 = FUN_04f83894(in_stack_00000170,0);
                if (((in_stack_00000170 == 1.14949e-41) ||
                    (((uStack0000000000000118 | uVar10 ^ 1) & 1) != 0)) || (*in_stack_00000180 == 1)
                   ) goto LAB_05bd8df4;
              }
              in_stack_00000108._4_4_ = 0;
            }
            else {
              if (((uVar19 != 1) &&
                  ((int)in_stack_00000158 < (int)(*(uint *)(unaff_x29 + 0x18) - 1))) &&
                 (((int)in_stack_00000158 < *in_stack_00000180 &&
                  ((in_stack_00000170 == 1.15145e-41 || (in_stack_00000170 == 5.46506e-44)))))) {
                if (*(uint *)(unaff_x29 + 0x18) <= in_stack_00000158 - 1) break;
                uVar4 = *(undefined2 *)(unaff_x29 + in_stack_00000160 + -0x430);
                if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar12 = FUN_04f83944(uVar4,0);
                if ((uVar12 & 1) != 0) {
                  if (*(uint *)(unaff_x29 + 0x18) <= uVar19) break;
                  uVar4 = *(undefined2 *)(unaff_x29 + in_stack_00000160 + -0x140);
                  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar12 = FUN_04f83944(uVar4,0);
                  unaff_x28 = (long *)
                              Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                  if ((uVar12 & 1) != 0) goto LAB_05bd8b90;
                }
              }
LAB_05bd8df4:
              if (in_stack_00000158 == *in_stack_00000180 - 1U) {
                if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar12 = FUN_04f83944(in_stack_00000170,0);
                iVar11 = iStack0000000000000110;
                if ((uVar12 & 1) == 0) goto LAB_05bd8e34;
              }
              else {
LAB_05bd8e34:
                iVar11 = in_stack_00000158 - 1;
              }
              lVar15 = *in_stack_00000178;
              if (lVar15 == 0) goto LAB_05bda144;
              lVar23 = *(long *)(lVar15 + 0x40);
              if (lVar23 == 0) goto LAB_05bda144;
              uVar10 = *(uint *)(lVar15 + 0x24);
              iVar9 = *(int *)(lVar23 + 0x18);
              if (iVar9 < (int)(uVar10 + 1)) {
                if (*(int *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__
                            + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_03562f88((long *)(lVar15 + 0x40),iVar9 + 1,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_get_Item__
                            );
                lVar15 = *in_stack_00000178;
                if (lVar15 == 0) goto LAB_05bda144;
              }
              unaff_x28 = (long *)
                          Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
              lVar15 = *(long *)(lVar15 + 0x40);
              if (lVar15 == 0) goto LAB_05bda144;
              if (*(uint *)(lVar15 + 0x18) <= uVar10) break;
              lVar15 = lVar15 + (long)(int)uVar10 * 0x18;
              *(long **)(lVar15 + 0x20) = unaff_x19;
              *(uint *)(lVar15 + 0x28) = in_stack_00000148;
              *(int *)(lVar15 + 0x2c) = iVar11;
              *(uint *)(lVar15 + 0x30) = (iVar11 - in_stack_00000148) + 1;
              thunk_FUN_02dd37b4();
              lVar15 = unaff_x19[0x74];
              if (lVar15 == 0) goto LAB_05bda144;
              lVar23 = *(long *)(lVar15 + 0x50);
              *(int *)(lVar15 + 0x24) = *(int *)(lVar15 + 0x24) + 1;
              if (lVar23 == 0) goto LAB_05bda144;
              if (*(uint *)(lVar23 + 0x18) <= uVar18) break;
              lVar23 = lVar23 + lVar20 * 0x60;
              in_stack_00000108._4_4_ = 0;
              in_stack_000000c8 = in_stack_000000c8 + 1;
              *(int *)(lVar23 + 0x34) = *(int *)(lVar23 + 0x34) + 1;
            }
          }
          else {
            if ((in_stack_00000108._4_4_ & 1) == 0) {
              in_stack_00000148 = in_stack_00000158;
            }
            if (in_stack_00000158 == *in_stack_00000180 - 1U) {
              lVar15 = *in_stack_00000178;
              if (lVar15 == 0) goto LAB_05bda144;
              lVar23 = *(long *)(lVar15 + 0x40);
              if (lVar23 == 0) goto LAB_05bda144;
              uVar10 = *(uint *)(lVar15 + 0x24);
              iVar11 = *(int *)(lVar23 + 0x18);
              if (iVar11 < (int)(uVar10 + 1)) {
                if (*(int *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__
                            + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_03562f88((long *)(lVar15 + 0x40),iVar11 + 1,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_get_Item__
                            );
                lVar15 = *in_stack_00000178;
                if (lVar15 == 0) goto LAB_05bda144;
              }
              unaff_x28 = (long *)
                          Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
              lVar15 = *(long *)(lVar15 + 0x40);
              if (lVar15 == 0) goto LAB_05bda144;
              if (*(uint *)(lVar15 + 0x18) <= uVar10) break;
              lVar15 = lVar15 + (long)(int)uVar10 * 0x18;
              *(long **)(lVar15 + 0x20) = unaff_x19;
              *(uint *)(lVar15 + 0x28) = in_stack_00000148;
              *(uint *)(lVar15 + 0x2c) = in_stack_00000158;
              *(uint *)(lVar15 + 0x30) = uVar19 - in_stack_00000148;
              thunk_FUN_02dd37b4();
              lVar15 = unaff_x19[0x74];
              if (lVar15 == 0) goto LAB_05bda144;
              lVar23 = *(long *)(lVar15 + 0x50);
              *(int *)(lVar15 + 0x24) = *(int *)(lVar15 + 0x24) + 1;
              if (lVar23 == 0) goto LAB_05bda144;
              if (*(uint *)(lVar23 + 0x18) <= uVar18) break;
              lVar23 = lVar23 + lVar20 * 0x60;
              in_stack_000000c8 = in_stack_000000c8 + 1;
              *(int *)(lVar23 + 0x34) = *(int *)(lVar23 + 0x34) + 1;
            }
LAB_05bd8b90:
            in_stack_00000108._4_4_ = 1;
          }
          unaff_x22 = 0x178;
          lVar20 = *in_stack_00000178;
          if ((lVar20 == 0) || (lVar15 = *(long *)(lVar20 + 0x38), lVar15 == 0)) goto LAB_05bda144;
          if (*(uint *)(lVar15 + 0x18) <= in_stack_00000158) break;
          unaff_w24 = in_stack_00000158;
          unaff_w21 = uVar18;
          if ((*(byte *)(lVar15 + unaff_x25 * 0x178 + 0x18c) >> 2 & 1) != 0) {
            lVar23 = lVar15 + unaff_x25 * 0x178;
            iVar11 = *(int *)(lVar23 + 0x60);
            *(undefined4 *)(lVar23 + 0x168) = in_stack_00001274;
            if ((((int)unaff_x19[0x6c] < (int)in_stack_00000158) ||
                ((int)unaff_x19[0x6d] < (int)uVar18)) ||
               (((int)unaff_x19[0x62] == 5 && (iVar11 + 1 != (int)unaff_x19[0x6e])))) {
              unaff_w20 = 0;
            }
            else {
              unaff_w20 = 1;
            }
            unaff_w23 = in_stack_00000170 == 1.14949e-41 | uStack0000000000000118;
            if ((in_stack_00000170 == 1.14949e-41) == 0 && (uStack0000000000000118 & 1) == 0) {
              fVar25 = *(float *)(lVar15 + unaff_x25 * 0x178 + 0x15c);
              if (fStack0000000000000114 <= fVar25) {
                fStack0000000000000114 = fVar25;
              }
              if (fStack00000000000000f0 <= ABS(unaff_s13)) {
                fStack00000000000000f0 = ABS(unaff_s13);
              }
              if (iVar11 != iStack0000000000000064) {
                if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                  lVar20 = *in_stack_00000178;
                  if (lVar20 == 0) goto LAB_05bda144;
                  lVar15 = *(long *)(*unaff_x28 + 0xb8);
                }
                else {
                  lVar15 = *(long *)(*unaff_x28 + 0xb8);
                }
                fStack00000000000000f4 = *(float *)(lVar15 + 0x1730);
              }
              lVar15 = *(long *)(lVar20 + 0x38);
              if (lVar15 == 0) goto LAB_05bda144;
              if (*(uint *)(lVar15 + 0x18) <= in_stack_00000158) break;
              if (unaff_x19[0x1f] == 0) goto LAB_05bda144;
              fVar26 = *(float *)(lVar15 + unaff_x25 * 0x178 + 0x144);
              fVar25 = (float)FUN_06114688(unaff_x19[0x1f] + 0x28,0);
              fVar26 = fVar26 + fStack0000000000000114 * fVar25;
              iStack0000000000000064 = iVar11;
              if (fVar26 <= fStack00000000000000f4) {
                fStack00000000000000f4 = fVar26;
              }
            }
            unaff_x26 = 0x60;
            if (bVar6) {
LAB_05bd907c:
              in_w8 = *in_stack_00000180;
              unaff_x27 = in_stack_00000178;
              in_stack_00000158 = uVar19;
              goto code_r0x05bd9084;
            }
            if ((((in_stack_00000170 != 1.82169e-44) && (((uint)in_stack_00000170 & 0xfffe) != 10))
                && ((int)in_stack_00000158 <= (int)uVar5)) && (unaff_w20 == 1)) {
              if (in_stack_00000158 == uVar5) {
                if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar12 = FUN_04f8481c(in_stack_00000170,0);
                if ((uVar12 & 1) != 0) goto LAB_05bd9014;
              }
              if ((*in_stack_00000178 == 0) ||
                 (lVar15 = *(long *)(*in_stack_00000178 + 0x38), lVar15 == 0)) goto LAB_05bda144;
              if (in_stack_00000158 < *(uint *)(lVar15 + 0x18)) {
                lVar15 = lVar15 + unaff_x25 * 0x178;
                fStack0000000000000074 = *(float *)(lVar15 + 0x15c);
                uStack0000000000000070 = *(undefined4 *)(lVar15 + 0x114);
                in_stack_00000078 = *(undefined4 *)(lVar15 + 0x164);
                fVar25 = fStack0000000000000074;
                if (fStack0000000000000114 != 0.0) {
                  fVar25 = fStack0000000000000114;
                }
                uStack000000000000006c = 0;
                fVar26 = unaff_s13;
                if (fStack0000000000000114 != 0.0) {
                  fVar26 = fStack00000000000000f0;
                }
                fStack0000000000000068 = fStack00000000000000f4;
                fStack00000000000000f0 = fVar26;
                fStack0000000000000114 = fVar25;
                goto LAB_05bd907c;
              }
              break;
            }
LAB_05bd9014:
            bVar6 = false;
            unaff_x27 = in_stack_00000178;
            in_stack_00000158 = uVar19;
            goto LAB_05bd912c;
          }
          if (!bVar6) {
            bVar6 = false;
            unaff_x27 = in_stack_00000178;
            in_stack_00000158 = uVar19;
            goto LAB_05bd912c;
          }
          if (*(uint *)(lVar15 + 0x18) <= in_stack_00000158 - 1) break;
          lVar15 = lVar15 + in_stack_00000160;
          unaff_x27 = in_stack_00000178;
          in_stack_00000158 = uVar19;
LAB_05bd8bdc:
          lVar20 = *unaff_x19;
          uVar28 = *(undefined4 *)(lVar15 + -0x334);
          uVar30 = *(undefined4 *)(lVar15 + -0x2f8);
        } while( true );
      }
      goto LAB_05bda2b0;
    }
    goto LAB_05bda144;
  }
  if ((unaff_w24 == (uint)in_stack_000000d8) || ((int)(uint)in_stack_00000168 <= (int)unaff_w24)) {
    if ((*unaff_x27 != 0) && (lVar15 = *(long *)(*unaff_x27 + 0x38), lVar15 != 0)) {
      lVar20 = unaff_x25;
      uVar19 = unaff_w24;
      if ((unaff_w23 & 1) != 0) {
        lVar20 = in_stack_00000168;
        uVar19 = (uint)in_stack_00000168;
      }
      if (uVar19 < *(uint *)(lVar15 + 0x18)) {
        lVar15 = lVar15 + lVar20 * unaff_x22;
        (**(code **)(*unaff_x19 + 0x908))
                  (uStack0000000000000070,fStack0000000000000068,uStack000000000000006c,
                   *(undefined4 *)(lVar15 + 0x120),fStack00000000000000f4,0,fStack0000000000000074,
                   *(undefined4 *)(lVar15 + 0x15c));
        lVar15 = *unaff_x28;
        goto LAB_05bd9100;
      }
LAB_05bda2b0:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
  }
  else if ((unaff_w20 & 1) == 0) {
    if ((*unaff_x27 != 0) && (lVar15 = *(long *)(*unaff_x27 + 0x38), lVar15 != 0)) {
      if (in_stack_00000158 - 2 < *(uint *)(lVar15 + 0x18)) {
        lVar15 = lVar15 + in_stack_00000160;
        goto LAB_05bd8bdc;
      }
      goto LAB_05bda2b0;
    }
  }
  else {
    if (in_w8 + -1 <= (int)unaff_w24) {
LAB_05bd92f4:
      bVar6 = true;
      goto LAB_05bd912c;
    }
    if ((*unaff_x27 != 0) && (lVar15 = *(long *)(*unaff_x27 + 0x38), lVar15 != 0)) {
      if (in_stack_00000158 < *(uint *)(lVar15 + 0x18)) {
        uVar12 = FUN_05bf4b74(in_stack_00000078,*(undefined4 *)(lVar15 + in_stack_00000160),0);
        unaff_x28 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        if ((uVar12 & 1) != 0) goto LAB_05bd92f4;
        if ((*unaff_x27 == 0) || (lVar15 = *(long *)(*unaff_x27 + 0x38), lVar15 == 0))
        goto LAB_05bda144;
        if (unaff_w24 < *(uint *)(lVar15 + 0x18)) {
          lVar15 = lVar15 + unaff_x25 * unaff_x22;
          (**(code **)(*unaff_x19 + 0x908))
                    (uStack0000000000000070,fStack0000000000000068,uStack000000000000006c,
                     *(undefined4 *)(lVar15 + 0x120),fStack00000000000000f4,0,fStack0000000000000074
                     ,*(undefined4 *)(lVar15 + 0x15c));
          unaff_x28 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          goto LAB_05bd90fc;
        }
      }
      goto LAB_05bda2b0;
    }
  }
  goto LAB_05bda144;
  while( true ) {
    lVar15 = *unaff_x27;
    lVar20 = lVar20 + 1;
    lVar23 = lVar23 + 0x50;
    if (lVar15 == 0) break;
LAB_05bd9ec8:
    uVar12 = lVar20 + 1;
    if ((long)*(int *)(lVar15 + 0x34) <= (long)uVar12) {
LAB_05bd7728:
      if (*(int *)(*(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Clear__ +
                  0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05bf40c4();
      return;
    }
    lVar15 = *(long *)(lVar15 + 0x60);
    if (lVar15 == 0) break;
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_05bda2b0;
    FUN_05c3fc00(lVar15 + lVar23 + 0x70,0);
    lVar15 = unaff_x19[0xe4];
    if (lVar15 == 0) break;
    if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_05bda2b0;
    uVar22 = *(undefined8 *)(lVar15 + lVar20 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar13 = UnityEngine_Font__add_textureRebuilt(uVar22,0,0);
    if ((uVar13 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x354) != 0) {
        if ((*unaff_x27 == 0) || (lVar15 = *(long *)(*unaff_x27 + 0x60), lVar15 == 0)) break;
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_05bda2b0;
        FUN_05c3fd34(lVar15 + lVar23 + 0x70,1,0);
      }
      lVar15 = unaff_x19[0xe4];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_05bda2b0;
      lVar15 = *(long *)(lVar15 + lVar20 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = FUN_05c48e08(lVar15,0);
      if ((*unaff_x27 == 0) || (lVar17 = *(long *)(*unaff_x27 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_05bda2b0;
      if (lVar15 == 0) break;
      FUN_06040930(lVar15,*(undefined8 *)(lVar17 + lVar23 + 0x80),0);
      lVar15 = unaff_x19[0xe4];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_05bda2b0;
      lVar15 = *(long *)(lVar15 + lVar20 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = FUN_05c48e08(lVar15,0);
      if ((*unaff_x27 == 0) || (lVar17 = *(long *)(*unaff_x27 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_05bda2b0;
      if (lVar15 == 0) break;
      FUN_06041994(lVar15,0,*(undefined8 *)(lVar17 + lVar23 + 0x98),0);
      lVar15 = unaff_x19[0xe4];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_05bda2b0;
      lVar15 = *(long *)(lVar15 + lVar20 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = FUN_05c48e08(lVar15,0);
      if ((*unaff_x27 == 0) || (lVar17 = *(long *)(*unaff_x27 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_05bda2b0;
      if (lVar15 == 0) break;
      FUN_06040b94(lVar15,*(undefined8 *)(lVar17 + lVar23 + 0xa0),0);
      lVar15 = unaff_x19[0xe4];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_05bda2b0;
      lVar15 = *(long *)(lVar15 + lVar20 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = FUN_05c48e08(lVar15,0);
      if ((*unaff_x27 == 0) || (lVar17 = *(long *)(*unaff_x27 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_05bda2b0;
      if (lVar15 == 0) break;
      FUN_06040ca8(lVar15,*(undefined8 *)(lVar17 + lVar23 + 0xa8),0);
      lVar15 = unaff_x19[0xe4];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_05bda2b0;
      lVar15 = *(long *)(lVar15 + lVar20 * 8 + 0x28);
      if ((lVar15 == 0) || (lVar15 = FUN_05c48e08(lVar15,0), lVar15 == 0)) break;
      FUN_06042d74(lVar15,0);
    }
  }
LAB_05bda144:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


