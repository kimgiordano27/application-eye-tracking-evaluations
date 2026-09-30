/*
FUNCTION_NAME: Unity.VisualScripting.Member$$Invoke
ENTRY_POINT: 05bd9358
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


void Unity_VisualScripting_Member__Invoke(long param_1)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  bool bVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  char cVar13;
  uint uVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long *unaff_x19;
  uint unaff_w20;
  undefined8 uVar21;
  uint unaff_w21;
  uint uVar22;
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
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float unaff_s11;
  float fVar40;
  float unaff_s13;
  float fVar41;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  float fStack0000000000000060;
  int iStack0000000000000064;
  float fStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  float fStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 in_stack_000000a0;
  float in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  float fStack00000000000000b4;
  float in_stack_000000b8;
  undefined8 in_stack_000000c0;
  int in_stack_000000c8;
  undefined8 in_stack_000000d0;
  uint uStack00000000000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  float fStack00000000000000f0;
  float fStack00000000000000f4;
  long in_stack_000000f8;
  undefined8 in_stack_00000100;
  uint uStack0000000000000108;
  uint uStack000000000000010c;
  int iStack0000000000000110;
  float fStack0000000000000114;
  uint in_stack_00000118;
  float in_stack_00000130;
  uint in_stack_00000148;
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
  
code_r0x05bd9358:
  if (param_1 != 0) {
LAB_05bd935c:
    lVar15 = *(long *)(param_1 + 0x38);
    if (lVar15 != 0) {
      if (unaff_w24 < *(uint *)(lVar15 + 0x18)) {
        lVar15 = lVar15 + unaff_x25 * unaff_x22;
        fVar25 = *(float *)(lVar15 + 0x15c);
        uVar30 = *(undefined4 *)(lVar15 + 0x114);
        fVar32 = *(float *)(lVar15 + 0x58);
        fVar29 = *(float *)(lVar15 + 0x144);
        fVar26 = unaff_s11 * fVar25;
LAB_05bd93a4:
        iVar10 = *in_stack_00000180;
        if (iVar10 == 1) {
LAB_05bd93b4:
          if ((*unaff_x27 == 0) || (lVar15 = *(long *)(*unaff_x27 + 0x38), lVar15 == 0))
          goto LAB_05bda144;
          if (*(uint *)(lVar15 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
          lVar15 = lVar15 + unaff_x25 * unaff_x22;
          lVar19 = *unaff_x19;
          uVar33 = *(undefined4 *)(lVar15 + 0x120);
          fVar27 = *(float *)(lVar15 + 0x144);
LAB_05bd93e0:
          pcVar16 = *(code **)(lVar19 + 0x908);
        }
        else {
          if (unaff_w24 == uStack00000000000000d8) {
            if ((*unaff_x27 == 0) || (lVar15 = *(long *)(*unaff_x27 + 0x38), lVar15 == 0))
            goto LAB_05bda144;
            uVar9 = *(uint *)(lVar15 + 0x18);
            if (in_stack_00000170 == 1.14949e-41 || (in_stack_00000118 & 1) != 0)
            goto joined_r0x05bd96a0;
LAB_05bd96ac:
            lVar19 = unaff_x25;
            if (uVar9 <= unaff_w24) goto LAB_05bda2b0;
          }
          else {
            if (iVar10 <= (int)unaff_w24) {
LAB_05bd94b4:
              if ((int)unaff_w24 < iVar10) {
                iVar10 = FUN_0606f30c(in_stack_000000f8,0);
                if (*(uint *)(unaff_x29 + 0x18) <= unaff_w23) goto LAB_05bda2b0;
                lVar15 = *(long *)(unaff_x29 + in_stack_00000160 + -0x124);
                if (lVar15 == 0) goto LAB_05bda144;
                iVar8 = FUN_0606f30c(lVar15,0);
                unaff_x27 = in_stack_00000178;
                if (iVar10 != iVar8) goto LAB_05bd93b4;
              }
              if ((unaff_w20 & 1) != 0) {
                bVar5 = true;
                uVar9 = unaff_w24;
                uVar22 = unaff_w21;
                unaff_w24 = unaff_w23;
                goto LAB_05bd9710;
              }
              if ((*unaff_x27 != 0) && (lVar15 = *(long *)(*unaff_x27 + 0x38), lVar15 != 0)) {
                if (unaff_w23 - 2 < *(uint *)(lVar15 + 0x18)) {
                  lVar19 = *unaff_x19;
                  uVar33 = *(undefined4 *)(lVar15 + in_stack_00000160 + -0x334);
                  fVar27 = *(float *)(lVar15 + in_stack_00000160 + -0x310);
                  goto LAB_05bd93e0;
                }
                goto LAB_05bda2b0;
              }
              goto LAB_05bda144;
            }
            lVar15 = *unaff_x27;
            if ((lVar15 == 0) || (lVar19 = *(long *)(lVar15 + 0x38), lVar19 == 0))
            goto LAB_05bda144;
            if (*(uint *)(lVar19 + 0x18) <= unaff_w23) goto LAB_05bda2b0;
            if (*(float *)(lVar19 + in_stack_00000160 + -0x10c) == fVar32) {
              fVar27 = *(float *)(lVar19 + in_stack_00000160 + -0x20);
              if (*(int *)(*(long *)
                            Method_UnityEngine_InputSystem_Utilities_InlinedArray<Substring>_get_Item__
                          + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar11 = FUN_05bf5098(in_stack_00000130 + fVar27,fVar29,0);
              if ((uVar11 & 1) != 0) {
                iVar10 = *in_stack_00000180;
                goto LAB_05bd94b4;
              }
              lVar15 = *unaff_x27;
              if (lVar15 == 0) goto LAB_05bda144;
            }
            lVar15 = *(long *)(lVar15 + 0x38);
            if (lVar15 == 0) goto LAB_05bda144;
            uVar9 = *(uint *)(lVar15 + 0x18);
            if ((int)unaff_w24 <= (int)(uint)in_stack_00000168) goto LAB_05bd96ac;
joined_r0x05bd96a0:
            lVar19 = in_stack_00000168;
            if (uVar9 <= (uint)in_stack_00000168) goto LAB_05bda2b0;
          }
          lVar15 = lVar15 + lVar19 * unaff_x22;
          fVar27 = *(float *)(lVar15 + 0x144);
          uVar33 = *(undefined4 *)(lVar15 + 0x120);
          pcVar16 = *(code **)(*unaff_x19 + 0x908);
        }
LAB_05bd96d8:
        (*pcVar16)(uVar30,fVar26 + fVar29,0,uVar33,unaff_s11 * fVar25 + fVar27,0,fVar25,fVar25);
LAB_05bd970c:
        bVar5 = false;
        uVar9 = unaff_w24;
        uVar22 = unaff_w21;
        unaff_w24 = unaff_w23;
LAB_05bd9710:
        if ((*unaff_x27 == 0) || (lVar15 = *(long *)(*unaff_x27 + 0x38), lVar15 == 0))
        goto LAB_05bda144;
        uVar18 = (uint)*(undefined8 *)(lVar15 + 0x18);
        if (uVar18 <= uVar9) goto LAB_05bda2b0;
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
          if ((((int)unaff_x19[0x6c] < (int)uVar9) || ((int)unaff_x19[0x6d] < (int)uVar22)) ||
             (((int)unaff_x19[0x62] == 5 &&
              (*(int *)(lVar15 + unaff_x25 * unaff_x22 + 0x60) + 1 != (int)unaff_x19[0x6e])))) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          uVar14 = (uint)in_stack_00000168;
          if ((in_stack_00000100._4_4_ & 1) == 0) {
            if ((((in_stack_00000170 != 1.82169e-44) && (((uint)in_stack_00000170 & 0xfffe) != 10))
                && ((int)uVar9 <= (int)uVar14)) && (bVar1)) {
              if (uVar9 == uVar14) {
                if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar11 = FUN_04f8481c(in_stack_00000170,0);
                if ((uVar11 & 1) != 0) goto LAB_05bd9ac4;
              }
              lVar19 = *unaff_x28;
              if (*(int *)(lVar19 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
                lVar19 = *unaff_x28;
              }
              if ((*unaff_x27 != 0) && (lVar15 = *(long *)(*unaff_x27 + 0x38), lVar15 != 0)) {
                uVar18 = (uint)*(undefined8 *)(lVar15 + 0x18);
                if (uVar9 < uVar18) {
                  lVar19 = *(long *)(lVar19 + 0xb8);
                  lVar23 = lVar15 + unaff_x25 * unaff_x22;
                  in_stack_00001268 = *(undefined8 *)(lVar23 + 0x180);
                  in_stack_00001260 = *(undefined8 *)(lVar23 + 0x178);
                  in_stack_00000170 = *(float *)(lVar19 + 0x1720);
                  in_stack_00001270 = *(float *)(lVar23 + 0x188);
                  fStack00000000000000b4 = *(float *)(lVar19 + 0x1728);
                  in_stack_000000d0._4_4_ = *(float *)(lVar19 + 0x1724);
                  in_stack_000000b8 = *(float *)(lVar19 + 0x172c);
                  uStack00000000000000b0 = 0;
                  goto LAB_05bd9854;
                }
                goto LAB_05bda2b0;
              }
              goto LAB_05bda144;
            }
            in_stack_00000100._4_4_ = 0;
          }
          else {
            in_stack_00000170 = in_stack_000000c0._4_4_;
LAB_05bd9854:
            if (uVar18 <= uVar9) goto LAB_05bda2b0;
            lVar15 = lVar15 + unaff_x25 * unaff_x22;
            fVar36 = *(float *)(lVar15 + 0x120);
            fVar31 = *(float *)(lVar15 + 0x13c);
            fVar39 = *(float *)(lVar15 + 0x180);
            fVar40 = *(float *)(lVar15 + 0x188);
            uVar24 = *(undefined8 *)(lVar15 + 0x178);
            fVar41 = *(float *)(lVar15 + 0x184);
            uVar21 = *(undefined8 *)(lVar15 + 0x180);
            fVar38 = *(float *)(lVar15 + 0x114);
            fVar27 = *(float *)(lVar15 + 0x138);
            fVar34 = *(float *)(lVar15 + 0x140);
            fVar37 = *(float *)(lVar15 + 0x148);
            in_stack_00000188 = uVar24;
            fStack0000000000000190 = fVar39;
            fStack0000000000000194 = fVar41;
            in_stack_00000198 = fVar40;
            in_stack_000001a0 = in_stack_00001260;
            in_stack_000001a8 = in_stack_00001268;
            in_stack_000001b0 = in_stack_00001270;
            uVar11 = FUN_05bf61dc(&stack0x000001a0,&stack0x00000188,0);
            lVar15 = *(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_RemoveAtWithCapacity__
            ;
            if ((uVar11 & 1) == 0) {
              if (*(int *)(lVar15 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(lVar15);
              }
              bVar7 = (in_stack_00000118 & 1) == 0;
              if (bVar7) {
                fVar31 = fVar36;
              }
              fVar31 = fVar31 + (float)in_stack_00001268;
              if (bVar7) {
                fVar27 = fVar38;
              }
              fVar27 = fVar27 - (float)((ulong)in_stack_00001260 >> 0x20);
              in_stack_000000c0._4_4_ = in_stack_00000170;
              if (fVar27 <= in_stack_00000170) {
                in_stack_000000c0._4_4_ = fVar27;
              }
              if (fStack00000000000000b4 <= fVar31) {
                fStack00000000000000b4 = fVar31;
              }
              if (*(int *)(*(long *)
                            Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_RemoveAtWithCapacity__
                          + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              if (fVar37 - in_stack_00001270 <= in_stack_000000d0._4_4_) {
                in_stack_000000d0._4_4_ = fVar37 - in_stack_00001270;
              }
              fVar34 = fVar34 + (float)((ulong)in_stack_00001268 >> 0x20);
              if (in_stack_000000b8 <= fVar34) {
                in_stack_000000b8 = fVar34;
              }
            }
            else {
              if (*(int *)(lVar15 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(lVar15);
              }
              if ((in_stack_00000118 & 1) == 0) {
                fVar27 = fVar38;
              }
              in_stack_000000c0._4_4_ =
                   (fVar27 + (fStack00000000000000b4 - (float)in_stack_00001268)) * 0.5;
              if (fVar37 <= in_stack_000000d0._4_4_) {
                in_stack_000000d0._4_4_ = fVar37;
              }
              if (in_stack_000000b8 <= fVar34) {
                in_stack_000000b8 = fVar34;
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
              in_stack_000000d0._4_4_ = fVar37 - fVar40;
              if ((in_stack_00000118 & 1) == 0) {
                fVar31 = fVar36;
              }
              fStack00000000000000b4 = fVar31 + fVar39;
              uStack00000000000000b0 = 0;
              in_stack_000000b8 = fVar34 + fVar41;
              in_stack_00001260 = uVar24;
              in_stack_00001268 = uVar21;
              in_stack_00001270 = fVar40;
            }
            unaff_x22 = 0x178;
            if ((((*in_stack_00000180 == 1) || (uVar9 == uStack00000000000000d8)) ||
                ((int)uVar14 <= (int)uVar9)) || (!bVar1)) goto LAB_05bd9a90;
            in_stack_00000100._4_4_ = 1;
          }
        }
        puVar6 = 
        Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__;
        iVar10 = *in_stack_00000180;
        iStack0000000000000110 = iStack0000000000000110 + 1;
        in_stack_00000160 = in_stack_00000160 + 0x178;
        unaff_w23 = unaff_w24 + 1;
        if (iVar10 <= (int)unaff_w24) {
          lVar15 = *unaff_x27;
          if (lVar15 == 0) goto LAB_05bda144;
          lVar19 = *(long *)(lVar15 + 0x60);
          if (lVar19 == 0) goto LAB_05bda144;
          if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_05bda2b0;
          *(undefined4 *)(lVar19 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x50 + 0x28) =
               in_stack_00001274;
          *(int *)(lVar15 + 0x18) = iVar10;
          lVar19 = unaff_x19[0xd7];
          *(uint *)(lVar15 + 0x2c) = uVar22 + 1;
          if (iVar10 < 1 || in_stack_000000c8 == 0) {
            in_stack_000000c8 = 1;
          }
          *(int *)(lVar15 + 0x1c) = (int)lVar19;
          *(int *)(lVar15 + 0x24) = in_stack_000000c8;
          *(int *)(lVar15 + 0x30) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
          if (((int)unaff_x19[0x6a] != 0xff) ||
             (uVar11 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar11 & 1) == 0)) goto LAB_05bd7728;
          lVar15 = unaff_x19[0xde];
          if (lVar15 != 0) {
            (**(code **)(lVar15 + 0x18))
                      (*(undefined8 *)(lVar15 + 0x40),*unaff_x27,*(undefined8 *)(lVar15 + 0x28));
          }
          if (*(int *)((long)unaff_x19 + 0x354) != 0) {
            if ((*unaff_x27 == 0) || (lVar15 = *(long *)(*unaff_x27 + 0x60), lVar15 == 0))
            goto LAB_05bda144;
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            if (*(int *)(lVar15 + 0x18) == 0) goto LAB_05bda2b0;
            FUN_05c3fd34(lVar15 + 0x20,1,0);
          }
          if (unaff_x19[0x7b] == 0) goto LAB_05bda144;
          FUN_06042ef4(unaff_x19[0x7b],0);
          if ((unaff_x19[0x74] == 0) || (lVar15 = *(long *)(unaff_x19[0x74] + 0x60), lVar15 == 0))
          goto LAB_05bda144;
          if (*(int *)(lVar15 + 0x18) == 0) goto LAB_05bda2b0;
          if (unaff_x19[0x7b] == 0) goto LAB_05bda144;
          FUN_06040930(unaff_x19[0x7b],*(undefined8 *)(lVar15 + 0x30),0);
          if ((unaff_x19[0x74] == 0) || (lVar15 = *(long *)(unaff_x19[0x74] + 0x60), lVar15 == 0))
          goto LAB_05bda144;
          if (*(int *)(lVar15 + 0x18) == 0) goto LAB_05bda2b0;
          if (unaff_x19[0x7b] == 0) goto LAB_05bda144;
          FUN_06041994(unaff_x19[0x7b],0,*(undefined8 *)(lVar15 + 0x48),0);
          if ((unaff_x19[0x74] == 0) || (lVar15 = *(long *)(unaff_x19[0x74] + 0x60), lVar15 == 0))
          goto LAB_05bda144;
          if (*(int *)(lVar15 + 0x18) == 0) goto LAB_05bda2b0;
          if (unaff_x19[0x7b] == 0) goto LAB_05bda144;
          FUN_06040b94(unaff_x19[0x7b],*(undefined8 *)(lVar15 + 0x50),0);
          if ((unaff_x19[0x74] == 0) || (lVar15 = *(long *)(unaff_x19[0x74] + 0x60), lVar15 == 0))
          goto LAB_05bda144;
          if (*(int *)(lVar15 + 0x18) == 0) goto LAB_05bda2b0;
          if (unaff_x19[0x7b] == 0) goto LAB_05bda144;
          FUN_06040ca8(unaff_x19[0x7b],*(undefined8 *)(lVar15 + 0x58),0);
          if (unaff_x19[0x7b] == 0) goto LAB_05bda144;
          FUN_06042d74(unaff_x19[0x7b],0);
          lVar15 = *unaff_x27;
          if (lVar15 == 0) goto LAB_05bda144;
          lVar23 = 0;
          lVar19 = 0;
          goto LAB_05bd9ec8;
        }
        if (*(uint *)(unaff_x29 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
        unaff_x25 = (long)(int)unaff_w24;
        lVar15 = unaff_x29 + unaff_x25 * unaff_x22;
        in_stack_000000f8 = *(long *)(lVar15 + 0x40);
        uVar3 = *(ushort *)(lVar15 + 0x24);
        in_stack_00000170 = (float)(uint)uVar3;
        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        in_stack_00000118 = FUN_04f80ed4(uVar3,0);
        if (*(uint *)(unaff_x29 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
        if ((*unaff_x27 == 0) || (lVar15 = *(long *)(*unaff_x27 + 0x50), lVar15 == 0))
        goto LAB_05bda144;
        unaff_w21 = *(uint *)(unaff_x29 + unaff_x25 * unaff_x22 + 0x5c);
        if (*(uint *)(lVar15 + 0x18) <= unaff_w21) goto LAB_05bda2b0;
        lVar19 = (long)(int)unaff_w21;
        lVar15 = lVar15 + lVar19 * unaff_x26;
        uVar18 = *(uint *)(lVar15 + 0x40);
        _uStack00000000000000d8 = (long)(int)uVar18;
        uVar9 = *(uint *)(lVar15 + 0x6c);
        iVar2 = *(int *)(lVar15 + 0x20);
        iVar10 = *(int *)(lVar15 + 0x28);
        iVar8 = *(int *)(lVar15 + 0x2c);
        uVar14 = *(uint *)(lVar15 + 0x44);
        in_stack_00000168 = (long)(int)uVar14;
        fVar31 = *(float *)(lVar15 + 0x50);
        fVar34 = *(float *)(lVar15 + 0x58);
        fVar38 = *(float *)(lVar15 + 0x5c);
        fVar39 = *(float *)(lVar15 + 0x60);
        fVar40 = *(float *)(lVar15 + 100);
        fVar37 = *(float *)(lVar15 + 0x70);
        fVar41 = *(float *)(lVar15 + 0x74);
        fVar27 = *(float *)(lVar15 + 0x78);
        fVar36 = *(float *)(lVar15 + 0x7c);
        if ((int)uVar9 < 9) {
          switch(uVar9) {
          case 1:
            if ((char)unaff_x19[0x1e] == '\0') {
              in_stack_000000e8._4_4_ = fVar40 + 0.0;
            }
            else {
              in_stack_000000e8._4_4_ = 0.0 - fVar38;
            }
            break;
          case 2:
            in_stack_000000e8._4_4_ = (fVar40 + fVar39 * 0.5) - fVar38 * 0.5;
            break;
          case 3:
            goto switchD_05bd7eb4_caseD_3;
          case 4:
            in_stack_000000e8._4_4_ = (fVar39 + fVar40) - fVar38;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000e8._4_4_ = fVar39 + fVar40;
            }
            break;
          default:
            if ((((in_stack_00000170 != 4.2039e-45) && (in_stack_00000170 != 1.1614e-41)) &&
                (in_stack_00000170 != 1.14949e-41)) &&
               (((in_stack_00000170 != 2.42425e-43 && (in_stack_00000170 != 1.4013e-44)) &&
                (((int)unaff_w24 <= (int)uVar14 && (uVar9 == 8)))))) goto LAB_05bd7f50;
            goto switchD_05bd7eb4_caseD_3;
          }
          in_stack_000000e0 = 0;
        }
        else if (uVar9 == 0x10) {
          if ((int)unaff_w24 <= (int)uVar14) {
            if ((uint)in_stack_00000170 < 0xad) {
              if ((in_stack_00000170 != 4.2039e-45) && (in_stack_00000170 != 1.4013e-44))
              goto LAB_05bd7f50;
            }
            else if ((in_stack_00000170 != 2.42425e-43) &&
                    ((in_stack_00000170 != 1.14949e-41 && (in_stack_00000170 != 1.1614e-41)))) {
LAB_05bd7f50:
              if (uVar18 < *(uint *)(unaff_x29 + 0x18)) {
                uVar4 = *(undefined2 *)(unaff_x29 + _uStack00000000000000d8 * 0x178 + 0x24);
                if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar11 = FUN_04f84410(uVar4,0);
                unaff_x28 = (long *)
                            Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                if ((uVar11 & 1) == 0) {
                  bVar1 = (int)unaff_w21 < (int)unaff_x19[0x97];
                }
                else {
                  bVar1 = false;
                }
                if ((fVar39 < fVar38) || (bVar1 || uVar9 >> 4 != 0)) {
                  if ((unaff_w23 == 1) ||
                     ((unaff_w21 != uVar22 || (unaff_w24 == *(uint *)((long)unaff_x19 + 0x35c))))) {
                    in_stack_000000e8._4_4_ = fVar40;
                    if ((char)unaff_x19[0x1e] != '\0') {
                      in_stack_000000e8._4_4_ = fVar39 + fVar40;
                    }
                    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    in_stack_00000050._4_4_ = FUN_04f8481c(in_stack_00000170,0);
                    in_stack_000000e0 = 0;
                  }
                  else {
                    cVar13 = (char)unaff_x19[0x1e];
                    iVar8 = (iVar8 - iVar2) - (in_stack_00000050._4_4_ & 1);
                    fVar40 = -fVar38;
                    if (cVar13 != '\0') {
                      fVar40 = fVar38;
                    }
                    if (iVar8 < 1) {
                      fVar38 = 1.0;
                      iVar8 = 1;
                    }
                    else {
                      fVar38 = *(float *)((long)unaff_x19 + 0x30c);
                    }
                    fVar28 = (float)((ulong)in_stack_000000e0 >> 0x20);
                    if (in_stack_00000170 == 1.26117e-44) {
LAB_05bd9c58:
                      fVar38 = ((fVar39 + fVar40) * (1.0 - fVar38)) / (float)iVar8;
                      if (cVar13 == '\0') {
                        in_stack_000000e8._4_4_ = in_stack_000000e8._4_4_ + fVar38;
                        in_stack_000000e0 = CONCAT44(fVar28 + 0.0,(float)in_stack_000000e0 + 0.0);
                      }
                      else {
                        in_stack_000000e8._4_4_ = in_stack_000000e8._4_4_ - fVar38;
                      }
                    }
                    else {
                      if (in_stack_00000170 != 2.24208e-43) {
                        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4();
                        }
                        uVar11 = FUN_04f8481c(in_stack_00000170,0);
                        cVar13 = (char)unaff_x19[0x1e];
                        if ((uVar11 & 1) != 0) goto LAB_05bd9c58;
                      }
                      fVar38 = ((fVar39 + fVar40) * fVar38) /
                               (float)(int)((iVar2 - (~in_stack_00000050._4_4_ & 1)) + iVar10);
                      if (cVar13 == '\0') {
                        in_stack_000000e8._4_4_ = in_stack_000000e8._4_4_ + fVar38;
                        in_stack_000000e0 = CONCAT44(fVar28 + 0.0,(float)in_stack_000000e0 + 0.0);
                      }
                      else {
                        in_stack_000000e8._4_4_ = in_stack_000000e8._4_4_ - fVar38;
                      }
                    }
                  }
                }
                else {
                  in_stack_000000e8._4_4_ = fVar40;
                  if ((char)unaff_x19[0x1e] != '\0') {
                    in_stack_000000e8._4_4_ = fVar39 + fVar40;
                  }
                  in_stack_000000e0 = 0;
                }
                goto switchD_05bd7eb4_caseD_3;
              }
              goto LAB_05bda2b0;
            }
          }
        }
        else if (uVar9 == 0x20) {
          in_stack_000000e8._4_4_ = (fVar40 + fVar39 * 0.5) - (fVar37 + fVar27) * 0.5;
          in_stack_000000e0 = 0;
        }
switchD_05bd7eb4_caseD_3:
        uVar9 = (uint)*(undefined8 *)(unaff_x29 + 0x18);
        if (uVar9 <= unaff_w24) goto LAB_05bda2b0;
        lVar15 = unaff_x29 + unaff_x25 * 0x178;
        fVar39 = in_stack_000000a8 + in_stack_000000e8._4_4_;
        in_stack_00000130 = (float)in_stack_000000a0 + (float)in_stack_000000e0;
        fVar38 = (float)((ulong)in_stack_000000a0 >> 0x20) +
                 (float)((ulong)in_stack_000000e0 >> 0x20);
        if (*(char *)(lVar15 + 400) == '\0') goto LAB_05bd8760;
        iVar10 = *(int *)(unaff_x29 + unaff_x25 * 0x178 + 0x20);
        if (iVar10 != 0) goto LAB_05bd8578;
        fVar40 = fmodf(*(float *)((long)unaff_x19 + 0x34c) * (float)(int)unaff_w21,1.0);
        switch(*(undefined4 *)((long)unaff_x19 + 0x344)) {
        case 0:
          lVar23 = unaff_x29 + unaff_x25 * 0x178;
          *(undefined4 *)(lVar23 + 0x84) = 0;
          *(undefined4 *)(lVar23 + 0xac) = 0;
          *(undefined4 *)(lVar23 + 0xd4) = 0x3f800000;
          fVar40 = 1.0;
          break;
        case 1:
          fVar36 = *(float *)(unaff_x29 + unaff_x25 * 0x178 + 0x68);
          if (*(int *)((long)unaff_x19 + 0x29c) == 0x208) {
            lVar23 = unaff_x29 + unaff_x25 * 0x178;
            fVar27 = (in_stack_000000e8._4_4_ + fVar36) - *(float *)(unaff_x19 + 0x9e);
            fVar36 = *(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e);
            goto LAB_05bd8168;
          }
          lVar23 = unaff_x29 + unaff_x25 * 0x178;
          fVar27 = fVar27 - fVar37;
          *(float *)(lVar23 + 0x84) = fVar40 + (fVar36 - fVar37) / fVar27;
          *(float *)(lVar23 + 0xac) = fVar40 + (*(float *)(lVar23 + 0x90) - fVar37) / fVar27;
          *(float *)(lVar23 + 0xd4) = fVar40 + (*(float *)(lVar23 + 0xb8) - fVar37) / fVar27;
          fVar40 = fVar40 + (*(float *)(lVar23 + 0xe0) - fVar37) / fVar27;
          break;
        case 2:
          lVar23 = unaff_x29 + unaff_x25 * 0x178;
          fVar36 = *(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e);
          fVar27 = (in_stack_000000e8._4_4_ + *(float *)(lVar23 + 0x68)) -
                   *(float *)(unaff_x19 + 0x9e);
LAB_05bd8168:
          *(float *)(lVar23 + 0x84) = fVar40 + fVar27 / fVar36;
          *(float *)(lVar23 + 0xac) =
               fVar40 + ((in_stack_000000e8._4_4_ + *(float *)(lVar23 + 0x90)) -
                        *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar23 + 0xd4) =
               fVar40 + ((in_stack_000000e8._4_4_ + *(float *)(lVar23 + 0xb8)) -
                        *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          fVar40 = fVar40 + ((in_stack_000000e8._4_4_ + *(float *)(lVar23 + 0xe0)) -
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
            fVar36 = fVar36 - fVar41;
            fVar27 = fVar40 + (*(float *)(lVar23 + 0x6c) - fVar41) / fVar36;
            fVar36 = fVar40 + (*(float *)(lVar23 + 0x94) - fVar41) / fVar36;
            *(float *)(lVar23 + 0x88) = fVar27;
            *(float *)(lVar23 + 0xb0) = fVar36;
            *(float *)(lVar23 + 0xd8) = fVar27;
            *(float *)(lVar23 + 0x100) = fVar36;
            break;
          case 2:
            lVar23 = unaff_x29 + unaff_x25 * 0x178;
            fVar27 = fVar40 + (*(float *)(lVar23 + 0x6c) - *(float *)((long)unaff_x19 + 0x4f4)) /
                              (*(float *)((long)unaff_x19 + 0x4fc) -
                              *(float *)((long)unaff_x19 + 0x4f4));
            *(float *)(lVar23 + 0x88) = fVar27;
            fVar36 = *(float *)((long)unaff_x19 + 0x4f4);
            fVar37 = *(float *)((long)unaff_x19 + 0x4fc);
            *(float *)(lVar23 + 0xd8) = fVar27;
            fVar27 = fVar40 + (*(float *)(lVar23 + 0x94) - fVar36) / (fVar37 - fVar36);
            *(float *)(lVar23 + 0xb0) = fVar27;
            *(float *)(lVar23 + 0x100) = fVar27;
            break;
          case 3:
            if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_06021dcc(*(undefined8 *)
                          Method_UnityEngine_InputSystem_InputControlList<InputControl>_Resize__,0);
            uVar9 = (uint)*(undefined8 *)(unaff_x29 + 0x18);
          }
          if (uVar9 <= unaff_w24) goto LAB_05bda2b0;
          lVar23 = unaff_x29 + unaff_x25 * 0x178;
          fVar27 = *(float *)(lVar23 + 0x158);
          fVar36 = (1.0 - (*(float *)(lVar23 + 0x88) + *(float *)(lVar23 + 0xb0)) * fVar27) * 0.5;
          fVar37 = fVar40 + *(float *)(lVar23 + 0x88) * fVar27 + fVar36;
          fVar40 = fVar40 + fVar36 + *(float *)(lVar23 + 0xb0) * fVar27;
          *(float *)(lVar23 + 0x84) = fVar37;
          *(float *)(lVar23 + 0xac) = fVar37;
          *(float *)(lVar23 + 0xd4) = fVar40;
          break;
        default:
          goto switchD_05bd80d4_default;
        }
        *(float *)(unaff_x29 + unaff_x25 * 0x178 + 0xfc) = fVar40;
switchD_05bd80d4_default:
        switch((int)unaff_x19[0x69]) {
        case 0:
          if (uVar9 <= unaff_w24) goto LAB_05bda2b0;
          lVar23 = unaff_x29 + unaff_x25 * 0x178;
          *(undefined4 *)(lVar23 + 0x88) = 0;
          *(undefined4 *)(lVar23 + 0xb0) = 0x3f800000;
          *(undefined4 *)(lVar23 + 0xd8) = 0x3f800000;
          *(undefined4 *)(lVar23 + 0x100) = 0;
          break;
        case 1:
          if (unaff_w24 < uVar9) {
            lVar23 = unaff_x29 + unaff_x25 * 0x178;
            fVar31 = fVar31 - fVar34;
            fVar27 = (*(float *)(lVar23 + 0x6c) - fVar34) / fVar31;
            fVar31 = (*(float *)(lVar23 + 0x94) - fVar34) / fVar31;
            *(float *)(lVar23 + 0x88) = fVar27;
            goto LAB_05bd84c0;
          }
          goto LAB_05bda2b0;
        case 2:
          if (uVar9 <= unaff_w24) goto LAB_05bda2b0;
          lVar23 = unaff_x29 + unaff_x25 * 0x178;
          fVar27 = (*(float *)(lVar23 + 0x6c) - *(float *)((long)unaff_x19 + 0x4f4)) /
                   (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
          *(float *)(lVar23 + 0x88) = fVar27;
          fVar31 = (*(float *)(lVar23 + 0x94) - *(float *)((long)unaff_x19 + 0x4f4)) /
                   (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
LAB_05bd84c0:
          *(float *)(lVar23 + 0xb0) = fVar31;
          *(float *)(lVar23 + 0xd8) = fVar31;
          *(float *)(lVar23 + 0x100) = fVar27;
          break;
        case 3:
          if (uVar9 <= unaff_w24) goto LAB_05bda2b0;
          lVar23 = unaff_x29 + unaff_x25 * 0x178;
          fVar36 = *(float *)(lVar23 + 0x158);
          fVar31 = (1.0 - (*(float *)(lVar23 + 0x84) + *(float *)(lVar23 + 0xd4)) / fVar36) * 0.5;
          fVar27 = *(float *)(lVar23 + 0x84) / fVar36 + fVar31;
          fVar31 = fVar31 + *(float *)(lVar23 + 0xd4) / fVar36;
          *(float *)(lVar23 + 0x88) = fVar27;
          *(float *)(lVar23 + 0xb0) = fVar31;
          *(float *)(lVar23 + 0x100) = fVar27;
          *(float *)(lVar23 + 0xd8) = fVar31;
        }
        if (uVar9 <= unaff_w24) goto LAB_05bda2b0;
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
        if (((int)unaff_w24 < (int)unaff_x19[0x6c]) &&
           (in_stack_000000c8 < *(int *)((long)unaff_x19 + 0x364))) {
          if (((int)unaff_w21 < (int)unaff_x19[0x6d]) && ((int)unaff_x19[0x62] != 5)) {
            if (uVar9 <= unaff_w24) goto LAB_05bda2b0;
            lVar15 = unaff_x29 + unaff_x25 * 0x178;
            *(ulong *)(lVar15 + 0x68) =
                 CONCAT44(in_stack_00000130 + (float)((ulong)*(undefined8 *)(lVar15 + 0x68) >> 0x20)
                          ,fVar39 + (float)*(undefined8 *)(lVar15 + 0x68));
            *(float *)(lVar15 + 0x70) = fVar38 + *(float *)(lVar15 + 0x70);
            *(ulong *)(lVar15 + 0x90) =
                 CONCAT44(in_stack_00000130 + (float)((ulong)*(undefined8 *)(lVar15 + 0x90) >> 0x20)
                          ,fVar39 + (float)*(undefined8 *)(lVar15 + 0x90));
            *(float *)(lVar15 + 0x98) = fVar38 + *(float *)(lVar15 + 0x98);
            *(ulong *)(lVar15 + 0xb8) =
                 CONCAT44(in_stack_00000130 + (float)((ulong)*(undefined8 *)(lVar15 + 0xb8) >> 0x20)
                          ,fVar39 + (float)*(undefined8 *)(lVar15 + 0xb8));
            *(float *)(lVar15 + 0xc0) = fVar38 + *(float *)(lVar15 + 0xc0);
            *(ulong *)(lVar15 + 0xe0) =
                 CONCAT44(in_stack_00000130 + (float)((ulong)*(undefined8 *)(lVar15 + 0xe0) >> 0x20)
                          ,fVar39 + (float)*(undefined8 *)(lVar15 + 0xe0));
            *(float *)(lVar15 + 0xe8) = fVar38 + *(float *)(lVar15 + 0xe8);
            goto LAB_05bd870c;
          }
          if (((int)unaff_w21 < (int)unaff_x19[0x6d]) && ((int)unaff_x19[0x62] == 5)) {
            if (unaff_w24 < uVar9) {
              if (*(int *)(unaff_x29 + unaff_x25 * 0x178 + 0x60) == in_stack_00000030._4_4_) {
                lVar15 = unaff_x29 + unaff_x25 * 0x178;
                *(ulong *)(lVar15 + 0x68) =
                     CONCAT44(in_stack_00000130 +
                              (float)((ulong)*(undefined8 *)(lVar15 + 0x68) >> 0x20),
                              fVar39 + (float)*(undefined8 *)(lVar15 + 0x68));
                *(float *)(lVar15 + 0x70) = fVar38 + *(float *)(lVar15 + 0x70);
                *(ulong *)(lVar15 + 0x90) =
                     CONCAT44(in_stack_00000130 +
                              (float)((ulong)*(undefined8 *)(lVar15 + 0x90) >> 0x20),
                              fVar39 + (float)*(undefined8 *)(lVar15 + 0x90));
                *(float *)(lVar15 + 0x98) = fVar38 + *(float *)(lVar15 + 0x98);
                *(ulong *)(lVar15 + 0xb8) =
                     CONCAT44(in_stack_00000130 +
                              (float)((ulong)*(undefined8 *)(lVar15 + 0xb8) >> 0x20),
                              fVar39 + (float)*(undefined8 *)(lVar15 + 0xb8));
                *(float *)(lVar15 + 0xc0) = fVar38 + *(float *)(lVar15 + 0xc0);
                *(ulong *)(lVar15 + 0xe0) =
                     CONCAT44(in_stack_00000130 +
                              (float)((ulong)*(undefined8 *)(lVar15 + 0xe0) >> 0x20),
                              fVar39 + (float)*(undefined8 *)(lVar15 + 0xe0));
                *(float *)(lVar15 + 0xe8) = fVar38 + *(float *)(lVar15 + 0xe8);
                goto LAB_05bd870c;
              }
              goto LAB_05bd8650;
            }
            goto LAB_05bda2b0;
          }
        }
LAB_05bd8650:
        if (uVar9 <= unaff_w24) goto LAB_05bda2b0;
        if (DAT_06b7224b == '\0') {
          FUN_02d6084c(PTR_DAT_0675e318);
          DAT_06b7224b = '\x01';
          uVar9 = *(uint *)(unaff_x29 + 0x18);
        }
        puVar6 = PTR_DAT_0675e318;
        uVar33 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_0675e318 + 0xb8) + 1);
        lVar23 = unaff_x29 + unaff_x25 * 0x178;
        *(undefined8 *)(lVar23 + 0x68) = **(undefined8 **)(*(long *)PTR_DAT_0675e318 + 0xb8);
        *(undefined4 *)(lVar23 + 0x70) = uVar33;
        if (uVar9 <= unaff_w24) goto LAB_05bda2b0;
        uVar33 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
        lVar23 = unaff_x29 + unaff_x25 * 0x178;
        *(undefined8 *)(lVar23 + 0x90) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
        *(undefined4 *)(lVar23 + 0x98) = uVar33;
        uVar33 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
        *(undefined8 *)(lVar23 + 0xb8) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
        *(undefined4 *)(lVar23 + 0xc0) = uVar33;
        uVar33 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
        *(undefined8 *)(lVar23 + 0xe0) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
        *(undefined4 *)(lVar23 + 0xe8) = uVar33;
        *(undefined1 *)(lVar15 + 400) = 0;
LAB_05bd870c:
        iVar8 = FUN_06030c10(0);
        *(bool *)((long)unaff_x19 + 0x174) = iVar8 == 1;
        if (iVar10 == 0) {
          pcVar16 = *(code **)(*unaff_x19 + 0x8d8);
LAB_05bd874c:
          (*pcVar16)();
          unaff_x28 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        }
        else {
          unaff_x28 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          if (iVar10 == 1) {
            pcVar16 = *(code **)(*unaff_x19 + 0x8f8);
            goto LAB_05bd874c;
          }
        }
LAB_05bd8760:
        if ((*in_stack_00000178 == 0) ||
           (lVar15 = *(long *)(*in_stack_00000178 + 0x38), lVar15 == 0)) goto LAB_05bda144;
        if (*(uint *)(lVar15 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
        lVar15 = lVar15 + unaff_x25 * 0x178;
        uVar21 = *(undefined8 *)(lVar15 + 0x114);
        *(undefined8 *)(lVar15 + 0x114) =
             CONCAT44(in_stack_00000130 + (float)((ulong)uVar21 >> 0x20),fVar39 + (float)uVar21);
        *(float *)(lVar15 + 0x11c) = fVar38 + *(float *)(lVar15 + 0x11c);
        if ((*in_stack_00000178 == 0) ||
           (lVar15 = *(long *)(*in_stack_00000178 + 0x38), lVar15 == 0)) goto LAB_05bda144;
        if (*(uint *)(lVar15 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
        lVar15 = lVar15 + unaff_x25 * 0x178;
        *(ulong *)(lVar15 + 0x108) =
             CONCAT44(in_stack_00000130 + (float)((ulong)*(undefined8 *)(lVar15 + 0x108) >> 0x20),
                      fVar39 + (float)*(undefined8 *)(lVar15 + 0x108));
        *(float *)(lVar15 + 0x110) = fVar38 + *(float *)(lVar15 + 0x110);
        if ((*in_stack_00000178 == 0) ||
           (lVar15 = *(long *)(*in_stack_00000178 + 0x38), lVar15 == 0)) goto LAB_05bda144;
        if (*(uint *)(lVar15 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
        lVar15 = lVar15 + unaff_x25 * 0x178;
        *(ulong *)(lVar15 + 0x120) =
             CONCAT44(in_stack_00000130 + (float)((ulong)*(undefined8 *)(lVar15 + 0x120) >> 0x20),
                      fVar39 + (float)*(undefined8 *)(lVar15 + 0x120));
        *(float *)(lVar15 + 0x128) = fVar38 + *(float *)(lVar15 + 0x128);
        if ((*in_stack_00000178 == 0) ||
           (lVar15 = *(long *)(*in_stack_00000178 + 0x38), lVar15 == 0)) goto LAB_05bda144;
        if (*(uint *)(lVar15 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
        lVar15 = lVar15 + unaff_x25 * 0x178;
        *(float *)(lVar15 + 300) = fVar39 + *(float *)(lVar15 + 300);
        *(ulong *)(lVar15 + 0x130) =
             CONCAT44(fVar38 + (float)((ulong)*(undefined8 *)(lVar15 + 0x130) >> 0x20),
                      in_stack_00000130 + (float)*(undefined8 *)(lVar15 + 0x130));
        lVar15 = *in_stack_00000178;
        if ((lVar15 == 0) || (lVar23 = *(long *)(lVar15 + 0x38), lVar23 == 0)) goto LAB_05bda144;
        uVar9 = *(uint *)(lVar23 + 0x18);
        if (uVar9 <= unaff_w24) goto LAB_05bda2b0;
        lVar17 = lVar23 + unaff_x25 * 0x178;
        *(float *)(lVar17 + 0x148) = in_stack_00000130 + *(float *)(lVar17 + 0x148);
        *(ulong *)(lVar17 + 0x138) =
             CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar17 + 0x138) >> 0x20),
                      fVar39 + (float)*(undefined8 *)(lVar17 + 0x138));
        *(ulong *)(lVar17 + 0x140) =
             CONCAT44(in_stack_00000130 + (float)((ulong)*(undefined8 *)(lVar17 + 0x140) >> 0x20),
                      in_stack_00000130 + (float)*(undefined8 *)(lVar17 + 0x140));
        if (unaff_w21 == uVar22) {
          uVar9 = *in_stack_00000180 - 1;
          if (unaff_w24 == uVar9) goto LAB_05bd8970;
        }
        else {
          lVar15 = *(long *)(lVar15 + 0x50);
          if (lVar15 == 0) goto LAB_05bda144;
          if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_05bda2b0;
          lVar17 = (long)(int)uVar22;
          lVar20 = lVar15 + lVar17 * 0x60;
          fVar27 = in_stack_00000130 + *(float *)(lVar20 + 0x58);
          *(ulong *)(lVar20 + 0x50) =
               CONCAT44(in_stack_00000130 + (float)((ulong)*(undefined8 *)(lVar20 + 0x50) >> 0x20),
                        in_stack_00000130 + (float)*(undefined8 *)(lVar20 + 0x50));
          *(float *)(lVar20 + 0x58) = fVar27;
          *(float *)(lVar20 + 0x5c) = fVar39 + *(float *)(lVar20 + 0x5c);
          if (uVar9 <= *(uint *)(lVar20 + 0x38)) goto LAB_05bda2b0;
          uVar33 = *(undefined4 *)(lVar23 + (long)(int)*(uint *)(lVar20 + 0x38) * 0x178 + 0x114);
          lVar15 = lVar15 + lVar17 * 0x60;
          *(float *)(lVar15 + 0x74) = fVar27;
          *(undefined4 *)(lVar15 + 0x70) = uVar33;
          lVar15 = *in_stack_00000178;
          if ((lVar15 == 0) || (lVar23 = *(long *)(lVar15 + 0x50), lVar23 == 0)) goto LAB_05bda144;
          if (*(uint *)(lVar23 + 0x18) <= uVar22) goto LAB_05bda2b0;
          lVar15 = *(long *)(lVar15 + 0x38);
          if (lVar15 == 0) goto LAB_05bda144;
          uVar9 = *(uint *)(lVar23 + lVar17 * 0x60 + 0x44);
          if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_05bda2b0;
          lVar23 = lVar23 + lVar17 * 0x60;
          *(undefined4 *)(lVar23 + 0x78) =
               *(undefined4 *)(lVar15 + (long)(int)uVar9 * 0x178 + 0x120);
          *(undefined4 *)(lVar23 + 0x7c) = *(undefined4 *)(lVar23 + 0x50);
          uVar9 = *in_stack_00000180 - 1;
LAB_05bd8970:
          if (unaff_w24 == uVar9) {
            lVar15 = *in_stack_00000178;
            if ((lVar15 == 0) || (lVar23 = *(long *)(lVar15 + 0x50), lVar23 == 0))
            goto LAB_05bda144;
            if (*(uint *)(lVar23 + 0x18) <= unaff_w21) goto LAB_05bda2b0;
            lVar17 = lVar23 + lVar19 * 0x60;
            fVar27 = in_stack_00000130 + *(float *)(lVar17 + 0x58);
            *(ulong *)(lVar17 + 0x50) =
                 CONCAT44(in_stack_00000130 + (float)((ulong)*(undefined8 *)(lVar17 + 0x50) >> 0x20)
                          ,in_stack_00000130 + (float)*(undefined8 *)(lVar17 + 0x50));
            *(float *)(lVar17 + 0x58) = fVar27;
            *(float *)(lVar17 + 0x5c) = fVar39 + *(float *)(lVar17 + 0x5c);
            lVar15 = *(long *)(lVar15 + 0x38);
            if (lVar15 == 0) goto LAB_05bda144;
            if (*(uint *)(lVar15 + 0x18) <= *(uint *)(lVar17 + 0x38)) goto LAB_05bda2b0;
            uVar33 = *(undefined4 *)(lVar15 + (long)(int)*(uint *)(lVar17 + 0x38) * 0x178 + 0x114);
            lVar23 = lVar23 + lVar19 * 0x60;
            *(float *)(lVar23 + 0x74) = fVar27;
            *(undefined4 *)(lVar23 + 0x70) = uVar33;
            lVar15 = *in_stack_00000178;
            if ((lVar15 == 0) || (lVar23 = *(long *)(lVar15 + 0x50), lVar23 == 0))
            goto LAB_05bda144;
            if (*(uint *)(lVar23 + 0x18) <= unaff_w21) goto LAB_05bda2b0;
            lVar15 = *(long *)(lVar15 + 0x38);
            if (lVar15 == 0) goto LAB_05bda144;
            uVar9 = *(uint *)(lVar23 + lVar19 * 0x60 + 0x44);
            if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_05bda2b0;
            lVar23 = lVar23 + lVar19 * 0x60;
            *(undefined4 *)(lVar23 + 0x78) =
                 *(undefined4 *)(lVar15 + (long)(int)uVar9 * 0x178 + 0x120);
            *(undefined4 *)(lVar23 + 0x7c) = *(undefined4 *)(lVar23 + 0x50);
          }
        }
        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar11 = FUN_04f83944(in_stack_00000170,0);
        if (((((uVar11 & 1) == 0) && (1 < (int)in_stack_00000170 - 0x2010U)) &&
            (in_stack_00000170 != 2.42425e-43)) && (in_stack_00000170 != 6.30584e-44)) {
          if ((uStack000000000000010c & 1) == 0) {
            if (unaff_w23 == 1) {
              if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar9 = FUN_04f83894(in_stack_00000170,0);
              if (((in_stack_00000170 == 1.14949e-41) ||
                  (((in_stack_00000118 | uVar9 ^ 1) & 1) != 0)) || (*in_stack_00000180 == 1))
              goto LAB_05bd8df4;
            }
            uStack000000000000010c = 0;
          }
          else {
            if (((unaff_w23 != 1) && ((int)unaff_w24 < (int)(*(uint *)(unaff_x29 + 0x18) - 1))) &&
               (((int)unaff_w24 < *in_stack_00000180 &&
                ((in_stack_00000170 == 1.15145e-41 || (in_stack_00000170 == 5.46506e-44)))))) {
              if (*(uint *)(unaff_x29 + 0x18) <= unaff_w24 - 1) goto LAB_05bda2b0;
              uVar4 = *(undefined2 *)(unaff_x29 + in_stack_00000160 + -0x430);
              if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar11 = FUN_04f83944(uVar4,0);
              if ((uVar11 & 1) != 0) {
                if (*(uint *)(unaff_x29 + 0x18) <= unaff_w23) goto LAB_05bda2b0;
                uVar4 = *(undefined2 *)(unaff_x29 + in_stack_00000160 + -0x140);
                if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar11 = FUN_04f83944(uVar4,0);
                unaff_x28 = (long *)
                            Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                if ((uVar11 & 1) != 0) goto LAB_05bd8b90;
              }
            }
LAB_05bd8df4:
            if (unaff_w24 == *in_stack_00000180 - 1U) {
              if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar11 = FUN_04f83944(in_stack_00000170,0);
              iVar10 = iStack0000000000000110;
              if ((uVar11 & 1) == 0) goto LAB_05bd8e34;
            }
            else {
LAB_05bd8e34:
              iVar10 = unaff_w24 - 1;
            }
            lVar15 = *in_stack_00000178;
            if (lVar15 == 0) goto LAB_05bda144;
            lVar23 = *(long *)(lVar15 + 0x40);
            if (lVar23 == 0) goto LAB_05bda144;
            uVar9 = *(uint *)(lVar15 + 0x24);
            iVar8 = *(int *)(lVar23 + 0x18);
            if (iVar8 < (int)(uVar9 + 1)) {
              if (*(int *)(*(long *)
                            Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__
                          + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_03562f88((long *)(lVar15 + 0x40),iVar8 + 1,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_get_Item__)
              ;
              lVar15 = *in_stack_00000178;
              if (lVar15 == 0) goto LAB_05bda144;
            }
            unaff_x28 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
            lVar15 = *(long *)(lVar15 + 0x40);
            if (lVar15 == 0) goto LAB_05bda144;
            if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_05bda2b0;
            lVar15 = lVar15 + (long)(int)uVar9 * 0x18;
            *(long **)(lVar15 + 0x20) = unaff_x19;
            *(uint *)(lVar15 + 0x28) = in_stack_00000148;
            *(int *)(lVar15 + 0x2c) = iVar10;
            *(uint *)(lVar15 + 0x30) = (iVar10 - in_stack_00000148) + 1;
            thunk_FUN_02dd37b4();
            lVar15 = unaff_x19[0x74];
            if (lVar15 == 0) goto LAB_05bda144;
            lVar23 = *(long *)(lVar15 + 0x50);
            *(int *)(lVar15 + 0x24) = *(int *)(lVar15 + 0x24) + 1;
            if (lVar23 == 0) goto LAB_05bda144;
            if (*(uint *)(lVar23 + 0x18) <= unaff_w21) goto LAB_05bda2b0;
            lVar23 = lVar23 + lVar19 * 0x60;
            uStack000000000000010c = 0;
            in_stack_000000c8 = in_stack_000000c8 + 1;
            *(int *)(lVar23 + 0x34) = *(int *)(lVar23 + 0x34) + 1;
          }
        }
        else {
          if ((uStack000000000000010c & 1) == 0) {
            in_stack_00000148 = unaff_w24;
          }
          if (unaff_w24 == *in_stack_00000180 - 1U) {
            lVar15 = *in_stack_00000178;
            if (lVar15 == 0) goto LAB_05bda144;
            lVar23 = *(long *)(lVar15 + 0x40);
            if (lVar23 == 0) goto LAB_05bda144;
            uVar9 = *(uint *)(lVar15 + 0x24);
            iVar10 = *(int *)(lVar23 + 0x18);
            if (iVar10 < (int)(uVar9 + 1)) {
              if (*(int *)(*(long *)
                            Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__
                          + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_03562f88((long *)(lVar15 + 0x40),iVar10 + 1,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_get_Item__)
              ;
              lVar15 = *in_stack_00000178;
              if (lVar15 == 0) goto LAB_05bda144;
            }
            unaff_x28 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
            lVar15 = *(long *)(lVar15 + 0x40);
            if (lVar15 == 0) goto LAB_05bda144;
            if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_05bda2b0;
            lVar15 = lVar15 + (long)(int)uVar9 * 0x18;
            *(long **)(lVar15 + 0x20) = unaff_x19;
            *(uint *)(lVar15 + 0x28) = in_stack_00000148;
            *(uint *)(lVar15 + 0x2c) = unaff_w24;
            *(uint *)(lVar15 + 0x30) = unaff_w23 - in_stack_00000148;
            thunk_FUN_02dd37b4();
            lVar15 = unaff_x19[0x74];
            if (lVar15 == 0) goto LAB_05bda144;
            lVar23 = *(long *)(lVar15 + 0x50);
            *(int *)(lVar15 + 0x24) = *(int *)(lVar15 + 0x24) + 1;
            if (lVar23 == 0) goto LAB_05bda144;
            if (*(uint *)(lVar23 + 0x18) <= unaff_w21) goto LAB_05bda2b0;
            lVar23 = lVar23 + lVar19 * 0x60;
            in_stack_000000c8 = in_stack_000000c8 + 1;
            *(int *)(lVar23 + 0x34) = *(int *)(lVar23 + 0x34) + 1;
          }
LAB_05bd8b90:
          uStack000000000000010c = 1;
        }
        unaff_x22 = 0x178;
        lVar15 = *in_stack_00000178;
        if ((lVar15 == 0) || (lVar19 = *(long *)(lVar15 + 0x38), lVar19 == 0)) goto LAB_05bda144;
        if (*(uint *)(lVar19 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
        if ((*(byte *)(lVar19 + unaff_x25 * 0x178 + 0x18c) >> 2 & 1) == 0) {
          if ((uStack0000000000000108 & 1) == 0) {
            uStack0000000000000108 = 0;
          }
          else {
            if (*(uint *)(lVar19 + 0x18) <= unaff_w24 - 1) goto LAB_05bda2b0;
LAB_05bd8bdc:
            lVar23 = *unaff_x19;
            uVar33 = *(undefined4 *)(lVar19 + in_stack_00000160 + -0x334);
            uVar35 = *(undefined4 *)(lVar19 + in_stack_00000160 + -0x2f8);
LAB_05bd90bc:
            (**(code **)(lVar23 + 0x908))
                      (uStack0000000000000070,fStack0000000000000068,uStack000000000000006c,uVar33,
                       fStack00000000000000f4,0,fStack0000000000000074,uVar35);
LAB_05bd90fc:
            lVar15 = *unaff_x28;
LAB_05bd9100:
            if (*(int *)(lVar15 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar15 = *unaff_x28;
            }
            uStack0000000000000108 = 0;
            fStack0000000000000114 = 0.0;
            fStack00000000000000f4 = *(float *)(*(long *)(lVar15 + 0xb8) + 0x1730);
            fStack00000000000000f0 = 0.0;
          }
        }
        else {
          lVar23 = lVar19 + unaff_x25 * 0x178;
          iVar10 = *(int *)(lVar23 + 0x60);
          *(undefined4 *)(lVar23 + 0x168) = in_stack_00001274;
          if ((((int)unaff_x19[0x6c] < (int)unaff_w24) || ((int)unaff_x19[0x6d] < (int)unaff_w21))
             || (((int)unaff_x19[0x62] == 5 && (iVar10 + 1 != (int)unaff_x19[0x6e])))) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (in_stack_00000170 != 1.14949e-41 && (in_stack_00000118 & 1) == 0) {
            fVar27 = *(float *)(lVar19 + unaff_x25 * 0x178 + 0x15c);
            if (fStack0000000000000114 <= fVar27) {
              fStack0000000000000114 = fVar27;
            }
            if (fStack00000000000000f0 <= ABS(unaff_s13)) {
              fStack00000000000000f0 = ABS(unaff_s13);
            }
            if (iVar10 != iStack0000000000000064) {
              if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
                lVar15 = *in_stack_00000178;
                if (lVar15 == 0) goto LAB_05bda144;
                lVar19 = *(long *)(*unaff_x28 + 0xb8);
              }
              else {
                lVar19 = *(long *)(*unaff_x28 + 0xb8);
              }
              fStack00000000000000f4 = *(float *)(lVar19 + 0x1730);
            }
            lVar15 = *(long *)(lVar15 + 0x38);
            if (lVar15 == 0) goto LAB_05bda144;
            if (*(uint *)(lVar15 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
            if (unaff_x19[0x1f] == 0) goto LAB_05bda144;
            fVar31 = *(float *)(lVar15 + unaff_x25 * 0x178 + 0x144);
            fVar27 = (float)FUN_06114688(unaff_x19[0x1f] + 0x28,0);
            fVar31 = fVar31 + fStack0000000000000114 * fVar27;
            iStack0000000000000064 = iVar10;
            if (fVar31 <= fStack00000000000000f4) {
              fStack00000000000000f4 = fVar31;
            }
          }
          if ((uStack0000000000000108 & 1) == 0) {
            if ((((in_stack_00000170 == 1.82169e-44) || (((uint)in_stack_00000170 & 0xfffe) == 10))
                || ((int)uVar14 < (int)unaff_w24)) || (!bVar1)) {
LAB_05bd9014:
              uStack0000000000000108 = 0;
              goto LAB_05bd912c;
            }
            if (unaff_w24 == uVar14) {
              if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar11 = FUN_04f8481c(in_stack_00000170,0);
              if ((uVar11 & 1) != 0) goto LAB_05bd9014;
            }
            if ((*in_stack_00000178 == 0) ||
               (lVar15 = *(long *)(*in_stack_00000178 + 0x38), lVar15 == 0)) goto LAB_05bda144;
            if (*(uint *)(lVar15 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
            lVar15 = lVar15 + unaff_x25 * 0x178;
            fStack0000000000000074 = *(float *)(lVar15 + 0x15c);
            uStack0000000000000070 = *(undefined4 *)(lVar15 + 0x114);
            in_stack_00000078 = *(undefined4 *)(lVar15 + 0x164);
            fVar27 = fStack0000000000000074;
            if (fStack0000000000000114 != 0.0) {
              fVar27 = fStack0000000000000114;
            }
            uStack000000000000006c = 0;
            fVar31 = unaff_s13;
            if (fStack0000000000000114 != 0.0) {
              fVar31 = fStack00000000000000f0;
            }
            fStack0000000000000068 = fStack00000000000000f4;
            fStack00000000000000f0 = fVar31;
            fStack0000000000000114 = fVar27;
          }
          if (*in_stack_00000180 == 1) {
            if ((*in_stack_00000178 != 0) &&
               (lVar15 = *(long *)(*in_stack_00000178 + 0x38), lVar15 != 0)) {
              if (unaff_w24 < *(uint *)(lVar15 + 0x18)) {
                lVar15 = lVar15 + unaff_x25 * 0x178;
                lVar23 = *unaff_x19;
                uVar33 = *(undefined4 *)(lVar15 + 0x120);
                uVar35 = *(undefined4 *)(lVar15 + 0x15c);
                goto LAB_05bd90bc;
              }
              goto LAB_05bda2b0;
            }
            goto LAB_05bda144;
          }
          if ((unaff_w24 == uVar18) || ((int)uVar14 <= (int)unaff_w24)) {
            if ((*in_stack_00000178 != 0) &&
               (lVar15 = *(long *)(*in_stack_00000178 + 0x38), lVar15 != 0)) {
              lVar19 = unaff_x25;
              uVar9 = unaff_w24;
              if (in_stack_00000170 == 1.14949e-41 || (in_stack_00000118 & 1) != 0) {
                lVar19 = in_stack_00000168;
                uVar9 = uVar14;
              }
              if (uVar9 < *(uint *)(lVar15 + 0x18)) {
                lVar15 = lVar15 + lVar19 * 0x178;
                (**(code **)(*unaff_x19 + 0x908))
                          (uStack0000000000000070,fStack0000000000000068,uStack000000000000006c,
                           *(undefined4 *)(lVar15 + 0x120),fStack00000000000000f4,0,
                           fStack0000000000000074,*(undefined4 *)(lVar15 + 0x15c));
                lVar15 = *unaff_x28;
                goto LAB_05bd9100;
              }
              goto LAB_05bda2b0;
            }
            goto LAB_05bda144;
          }
          if (!bVar1) {
            if ((*in_stack_00000178 != 0) &&
               (lVar19 = *(long *)(*in_stack_00000178 + 0x38), lVar19 != 0)) {
              if (unaff_w24 - 1 < *(uint *)(lVar19 + 0x18)) goto LAB_05bd8bdc;
              goto LAB_05bda2b0;
            }
            goto LAB_05bda144;
          }
          if ((int)unaff_w24 < *in_stack_00000180 + -1) {
            if ((*in_stack_00000178 == 0) ||
               (lVar15 = *(long *)(*in_stack_00000178 + 0x38), lVar15 == 0)) goto LAB_05bda144;
            if (*(uint *)(lVar15 + 0x18) <= unaff_w23) goto LAB_05bda2b0;
            uVar11 = FUN_05bf4b74(in_stack_00000078,*(undefined4 *)(lVar15 + in_stack_00000160),0);
            unaff_x28 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
            if ((uVar11 & 1) == 0) {
              if ((*in_stack_00000178 != 0) &&
                 (lVar15 = *(long *)(*in_stack_00000178 + 0x38), lVar15 != 0)) {
                if (unaff_w24 < *(uint *)(lVar15 + 0x18)) {
                  lVar15 = lVar15 + unaff_x25 * 0x178;
                  (**(code **)(*unaff_x19 + 0x908))
                            (uStack0000000000000070,fStack0000000000000068,uStack000000000000006c,
                             *(undefined4 *)(lVar15 + 0x120),fStack00000000000000f4,0,
                             fStack0000000000000074,*(undefined4 *)(lVar15 + 0x15c));
                  unaff_x28 = (long *)
                              Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                  goto LAB_05bd90fc;
                }
                goto LAB_05bda2b0;
              }
              goto LAB_05bda144;
            }
          }
          uStack0000000000000108 = 1;
        }
LAB_05bd912c:
        unaff_x26 = 0x60;
        if ((*in_stack_00000178 == 0) ||
           (lVar15 = *(long *)(*in_stack_00000178 + 0x38), lVar15 == 0)) goto LAB_05bda144;
        if (*(uint *)(lVar15 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
        if (in_stack_000000f8 == 0) goto LAB_05bda144;
        uVar9 = *(uint *)(lVar15 + unaff_x25 * 0x178 + 0x18c);
        unaff_s11 = (float)FUN_06114698(in_stack_000000f8 + 0x28,0);
        if ((uVar9 >> 6 & 1) != 0) {
          param_1 = *in_stack_00000178;
          if ((param_1 == 0) || (lVar15 = *(long *)(param_1 + 0x38), lVar15 == 0))
          goto LAB_05bda144;
          if (*(uint *)(lVar15 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
          *(undefined4 *)(lVar15 + unaff_x25 * 0x178 + 0x170) = in_stack_00001274;
          if ((((int)unaff_x19[0x6c] < (int)unaff_w24) || ((int)unaff_x19[0x6d] < (int)unaff_w21))
             || (((int)unaff_x19[0x62] == 5 &&
                 (*(int *)(lVar15 + unaff_x25 * 0x178 + 0x60) + 1 != (int)unaff_x19[0x6e])))) {
            unaff_w20 = 0;
          }
          else {
            unaff_w20 = 1;
          }
          if ((((in_stack_00000170 != 1.82169e-44) && (((uint)in_stack_00000170 & 0xfffe) != 10)) &&
              ((int)unaff_w24 <= (int)uVar14)) && (!bVar5 && unaff_w20 == 1)) {
            unaff_x27 = in_stack_00000178;
            if (unaff_w24 != uVar14) goto LAB_05bd935c;
            if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar11 = FUN_04f8481c(in_stack_00000170,0);
            if ((uVar11 & 1) == 0) {
              param_1 = *in_stack_00000178;
              goto code_r0x05bd9358;
            }
          }
          unaff_x27 = in_stack_00000178;
          if (bVar5) goto LAB_05bd93a4;
          goto LAB_05bd970c;
        }
        unaff_x27 = in_stack_00000178;
        if (bVar5) goto code_r0x05bd9178;
        goto LAB_05bd970c;
      }
      goto LAB_05bda2b0;
    }
  }
  goto LAB_05bda144;
code_r0x05bd9178:
  if ((*in_stack_00000178 == 0) || (lVar15 = *(long *)(*in_stack_00000178 + 0x38), lVar15 == 0))
  goto LAB_05bda144;
  if (*(uint *)(lVar15 + 0x18) <= unaff_w24 - 1) goto LAB_05bda2b0;
  uVar33 = *(undefined4 *)(lVar15 + in_stack_00000160 + -0x334);
  fVar27 = *(float *)(lVar15 + in_stack_00000160 + -0x310);
  pcVar16 = *(code **)(*unaff_x19 + 0x908);
  goto LAB_05bd96d8;
  while( true ) {
    lVar15 = *unaff_x27;
    lVar19 = lVar19 + 1;
    lVar23 = lVar23 + 0x50;
    if (lVar15 == 0) break;
LAB_05bd9ec8:
    uVar11 = lVar19 + 1;
    if ((long)*(int *)(lVar15 + 0x34) <= (long)uVar11) {
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
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_05bda2b0;
    FUN_05c3fc00(lVar15 + lVar23 + 0x70,0);
    lVar15 = unaff_x19[0xe4];
    if (lVar15 == 0) break;
    if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_05bda2b0;
    uVar21 = *(undefined8 *)(lVar15 + lVar19 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar12 = UnityEngine_Font__add_textureRebuilt(uVar21,0,0);
    if ((uVar12 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x354) != 0) {
        if ((*unaff_x27 == 0) || (lVar15 = *(long *)(*unaff_x27 + 0x60), lVar15 == 0)) break;
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar11) {
LAB_05bda2b0:
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        FUN_05c3fd34(lVar15 + lVar23 + 0x70,1,0);
      }
      lVar15 = unaff_x19[0xe4];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_05bda2b0;
      lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = FUN_05c48e08(lVar15,0);
      if ((*unaff_x27 == 0) || (lVar17 = *(long *)(*unaff_x27 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_05bda2b0;
      if (lVar15 == 0) break;
      FUN_06040930(lVar15,*(undefined8 *)(lVar17 + lVar23 + 0x80),0);
      lVar15 = unaff_x19[0xe4];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_05bda2b0;
      lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = FUN_05c48e08(lVar15,0);
      if ((*unaff_x27 == 0) || (lVar17 = *(long *)(*unaff_x27 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_05bda2b0;
      if (lVar15 == 0) break;
      FUN_06041994(lVar15,0,*(undefined8 *)(lVar17 + lVar23 + 0x98),0);
      lVar15 = unaff_x19[0xe4];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_05bda2b0;
      lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = FUN_05c48e08(lVar15,0);
      if ((*unaff_x27 == 0) || (lVar17 = *(long *)(*unaff_x27 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_05bda2b0;
      if (lVar15 == 0) break;
      FUN_06040b94(lVar15,*(undefined8 *)(lVar17 + lVar23 + 0xa0),0);
      lVar15 = unaff_x19[0xe4];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_05bda2b0;
      lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = FUN_05c48e08(lVar15,0);
      if ((*unaff_x27 == 0) || (lVar17 = *(long *)(*unaff_x27 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_05bda2b0;
      if (lVar15 == 0) break;
      FUN_06040ca8(lVar15,*(undefined8 *)(lVar17 + lVar23 + 0xa8),0);
      lVar15 = unaff_x19[0xe4];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_05bda2b0;
      lVar15 = *(long *)(lVar15 + lVar19 * 8 + 0x28);
      if ((lVar15 == 0) || (lVar15 = FUN_05c48e08(lVar15,0), lVar15 == 0)) break;
      FUN_06042d74(lVar15,0);
    }
  }
LAB_05bda144:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


