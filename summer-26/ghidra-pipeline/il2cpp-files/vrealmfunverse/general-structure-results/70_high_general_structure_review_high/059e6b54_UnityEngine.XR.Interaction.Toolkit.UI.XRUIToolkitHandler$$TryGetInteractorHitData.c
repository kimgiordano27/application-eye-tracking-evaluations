/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.UI.XRUIToolkitHandler$$TryGetInteractorHitData
ENTRY_POINT: 059e6b54
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_1;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_XR_Interaction_Toolkit_UI_XRUIToolkitHandler__TryGetInteractorHitData
               (undefined **param_1,float param_2,float param_3,float param_4,ulong param_5)

{
  bool bVar1;
  uint uVar2;
  float *pfVar3;
  undefined2 uVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  char cVar17;
  undefined8 *puVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long *unaff_x19;
  int iVar23;
  long unaff_x20;
  uint unaff_w21;
  undefined8 uVar24;
  long *plVar25;
  ulong unaff_x22;
  long lVar26;
  int *piVar27;
  long unaff_x23;
  uint unaff_w24;
  uint unaff_w25;
  long unaff_x27;
  int unaff_w28;
  uint uVar28;
  ushort uVar29;
  float fVar30;
  undefined4 uVar31;
  undefined8 uVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  uint uVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float unaff_s9;
  float unaff_s10;
  float fVar43;
  float unaff_s11;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  int iStack0000000000000040;
  uint uStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  int iStack000000000000005c;
  int iStack0000000000000060;
  float fStack0000000000000064;
  uint uStack0000000000000068;
  undefined4 uStack000000000000006c;
  float in_stack_00000070;
  undefined8 in_stack_00000088;
  uint in_stack_00000090;
  undefined8 in_stack_00000098;
  float in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000d8;
  float in_stack_000000e8;
  undefined8 in_stack_000000f0;
  float fStack00000000000000f8;
  int iStack00000000000000fc;
  undefined8 in_stack_00000118;
  uint in_stack_00000120;
  undefined8 in_stack_00000128;
  ulong in_stack_00000130;
  undefined8 in_stack_00000148;
  float in_stack_00000150;
  float in_stack_00000160;
  undefined8 in_stack_00000168;
  uint in_stack_00000170;
  undefined8 in_stack_00000180;
  uint in_stack_00000188;
  long in_stack_00000190;
  uint in_stack_000001a0;
  float fStack00000000000001b0;
  uint in_stack_000001c0;
  long in_stack_000001d0;
  undefined8 in_stack_000001d8;
  float fStack00000000000001e0;
  float fStack00000000000001e4;
  float in_stack_000001e8;
  undefined8 in_stack_00001320;
  undefined8 in_stack_00001328;
  float in_stack_00001330;
  undefined4 in_stack_00001334;
  
  fStack00000000000001b0 = param_4;
code_r0x059e6b54:
  fStack00000000000000f8 = fStack00000000000001b0;
  if (param_2 <= fStack00000000000001b0) {
    fStack00000000000000f8 = param_2;
  }
  if (in_stack_000000e8 <= unaff_s11 + param_3) {
    in_stack_000000e8 = unaff_s11 + param_3;
  }
  if (*(int *)(*(long *)param_1[0x93] + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  fVar34 = unaff_s9 + (float)((ulong)in_stack_00001328 >> 0x20);
  uVar15 = (ulong)(uint)fVar34;
  if (unaff_s10 - in_stack_00001330 <= in_stack_00000128._4_4_) {
    in_stack_00000128._4_4_ = unaff_s10 - in_stack_00001330;
  }
  uVar16 = (ulong)(uint)in_stack_00000128._4_4_;
  uVar12 = unaff_w24;
  if (in_stack_000000f0._4_4_ <= fVar34) {
    in_stack_000000f0._4_4_ = fVar34;
  }
LAB_059e6bb8:
  unaff_w24 = uVar12;
  if ((((*(int *)(unaff_x23 + 0x38) != 1) && (uVar12 != in_stack_00000120)) &&
      ((int)uVar12 < (int)in_stack_000001a0)) && ((unaff_w21 & 1) != 0)) {
    bVar5 = true;
    goto LAB_059e6c00;
  }
LAB_059e6bc8:
  uVar16 = (ulong)in_stack_000000d8._4_4_;
  uVar15 = (ulong)(uint)in_stack_00000128._4_4_;
  param_5 = (ulong)(uint)in_stack_000000e8;
  (**(code **)(*unaff_x19 + 0x918))
            (fStack00000000000000f8,uVar15,uVar16,param_5,in_stack_000000f0._4_4_,
             in_stack_000000d8._4_4_);
  uVar13 = in_stack_000001c0;
LAB_059e6bfc:
  bVar5 = false;
  uVar12 = unaff_w24;
  in_stack_000001c0 = uVar13;
LAB_059e6c00:
  puVar7 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__;
  puVar6 = PTR_DAT_06312520;
  uVar38 = (undefined4)param_5;
  uVar35 = (undefined4)uVar16;
  uVar33 = (undefined4)uVar15;
  iVar11 = *(int *)(unaff_x23 + 0x38);
  unaff_w24 = uVar12 + 1;
  if (iVar11 <= (int)unaff_w24) {
    lVar21 = unaff_x19[0x74];
    if (lVar21 == 0) goto LAB_059e75b4;
    lVar22 = *(long *)(lVar21 + 0x60);
    if (lVar22 == 0) goto LAB_059e75b4;
    if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_059e7774;
    *(undefined4 *)(lVar22 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x50 + 0x28) =
         in_stack_00001334;
    *(int *)(lVar21 + 0x18) = iVar11;
    lVar22 = unaff_x19[0xd7];
    *(uint *)(lVar21 + 0x2c) = in_stack_000001c0 + 1;
    if (iVar11 < 1 || iStack00000000000000fc == 0) {
      iStack00000000000000fc = 1;
    }
    *(int *)(lVar21 + 0x1c) = (int)lVar22;
    *(int *)(lVar21 + 0x24) = iStack00000000000000fc;
    *(int *)(lVar21 + 0x30) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
    if (((int)unaff_x19[0x6a] != 0xff) ||
       (uVar15 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar15 & 1) == 0)) goto LAB_059e75b8;
    lVar21 = unaff_x19[0xe2];
    if (lVar21 != 0) {
      (**(code **)(lVar21 + 0x18))
                (*(undefined8 *)(lVar21 + 0x40),unaff_x19[0x74],*(undefined8 *)(lVar21 + 0x28));
    }
    if (unaff_x19[0xe8] == 0) goto LAB_059e75b4;
    iVar11 = FUN_05f6e7f8(unaff_x19[0xe8],0);
    if (iVar11 != 0x19) {
      lVar21 = unaff_x19[0xe8];
      if (lVar21 == 0) goto LAB_059e75b4;
      uVar12 = FUN_05f6e7f8(lVar21,0);
      FUN_05f6e8ac(lVar21,uVar12 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x354) != 0) {
      if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x60), lVar21 == 0))
      goto LAB_059e75b4;
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (*(int *)(lVar21 + 0x18) == 0) goto LAB_059e7774;
      FUN_05a44e30(lVar21 + 0x20,1,0);
    }
    if (unaff_x19[0x7b] == 0) goto LAB_059e75b4;
    FUN_05c66aa4(unaff_x19[0x7b],0);
    if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x60), lVar21 == 0))
    goto LAB_059e75b4;
    if (*(int *)(lVar21 + 0x18) == 0) goto LAB_059e7774;
    if (unaff_x19[0x7b] == 0) goto LAB_059e75b4;
    FUN_05c63824(unaff_x19[0x7b],*(undefined8 *)(lVar21 + 0x30),0);
    if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x60), lVar21 == 0))
    goto LAB_059e75b4;
    if (*(int *)(lVar21 + 0x18) == 0) goto LAB_059e7774;
    if (unaff_x19[0x7b] == 0) goto LAB_059e75b4;
    FUN_05c64b60(unaff_x19[0x7b],0,*(undefined8 *)(lVar21 + 0x48),0);
    if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x60), lVar21 == 0))
    goto LAB_059e75b4;
    if (*(int *)(lVar21 + 0x18) == 0) goto LAB_059e7774;
    if (unaff_x19[0x7b] == 0) goto LAB_059e75b4;
    FUN_05c63a88(unaff_x19[0x7b],*(undefined8 *)(lVar21 + 0x50),0);
    if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x60), lVar21 == 0))
    goto LAB_059e75b4;
    if (*(int *)(lVar21 + 0x18) == 0) goto LAB_059e7774;
    if (unaff_x19[0x7b] == 0) goto LAB_059e75b4;
    FUN_05c63ddc(unaff_x19[0x7b],*(undefined8 *)(lVar21 + 0x58),0);
    if (unaff_x19[0x7b] == 0) goto LAB_059e75b4;
    FUN_05c66864(unaff_x19[0x7b],0);
    if (unaff_x19[0xe7] == 0) goto LAB_059e75b4;
    FUN_05f6baf8(unaff_x19[0xe7],unaff_x19[0x7b],0);
    if (unaff_x19[0xe7] == 0) goto LAB_059e75b4;
    uVar31 = FUN_05f6afd4(unaff_x19[0xe7],0);
    if (unaff_x19[0xe7] == 0) goto LAB_059e75b4;
    uVar12 = FUN_05f6ac10(unaff_x19[0xe7],0);
    lVar21 = unaff_x19[0x74];
    if (lVar21 == 0) goto LAB_059e75b4;
    lVar26 = 0;
    lVar22 = 0;
    goto LAB_059e7210;
  }
  if (*(uint *)(unaff_x27 + 0x18) <= unaff_w24) goto LAB_059e7774;
  piVar27 = (int *)(unaff_x20 + (ulong)unaff_w24 * (unaff_x22 & 0xffffffff));
  lVar21 = *(long *)(piVar27 + 8);
  uVar29 = *(ushort *)(piVar27 + 1);
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar28 = (uint)uVar29;
  bVar8 = FUN_04cf7fe0(uVar29,0);
  if (*(uint *)(unaff_x27 + 0x18) <= unaff_w24) goto LAB_059e7774;
  if ((unaff_x19[0x74] == 0) || (lVar22 = *(long *)(unaff_x19[0x74] + 0x50), lVar22 == 0))
  goto LAB_059e75b4;
  uVar13 = *(uint *)(unaff_x20 + (ulong)unaff_w24 * (unaff_x22 & 0xffffffff) + 0x3c);
  if (*(uint *)(lVar22 + 0x18) <= uVar13) goto LAB_059e7774;
  lVar22 = lVar22 + (long)(int)uVar13 * (long)unaff_w28;
  in_stack_00000120 = *(uint *)(lVar22 + 0x40);
  fVar36 = *(float *)(lVar22 + 0x58);
  fVar34 = *(float *)(lVar22 + 0x5c);
  uVar37 = *(uint *)(lVar22 + 0x6c);
  fVar41 = *(float *)(lVar22 + 0x60);
  fVar44 = *(float *)(lVar22 + 100);
  fVar43 = *(float *)(lVar22 + 0x70);
  fVar42 = *(float *)(lVar22 + 0x74);
  iVar11 = *(int *)(lVar22 + 0x20);
  fVar47 = *(float *)(lVar22 + 0x78);
  fVar46 = *(float *)(lVar22 + 0x7c);
  iVar10 = *(int *)(lVar22 + 0x28);
  iVar23 = *(int *)(lVar22 + 0x30);
  in_stack_000001a0 = *(uint *)(lVar22 + 0x44);
  fVar39 = *(float *)(lVar22 + 0x50);
  if ((int)uVar37 < 9) {
    if ((int)uVar37 < 3) {
      if (uVar37 != 1) {
        if (uVar37 != 2) {
LAB_059e519c:
          uVar29 = NEON_umaxv(CONCAT26(-(ushort)(uVar29 == (ushort)((ulong)DAT_01031700 >> 0x30)),
                                       CONCAT24(-(ushort)(uVar29 ==
                                                         (ushort)((ulong)DAT_01031700 >> 0x20)),
                                                CONCAT22(-(ushort)(uVar29 ==
                                                                  (ushort)((ulong)DAT_01031700 >>
                                                                          0x10)),
                                                         -(ushort)(uVar29 == (ushort)DAT_01031700)))
                                      ),2);
          if (((((uVar29 & 1) == 0) && (uVar28 != 3)) && (uVar37 == 8)) &&
             ((int)unaff_w24 <= (int)in_stack_000001a0)) goto LAB_059e51dc;
          goto LAB_059e52dc;
        }
        fVar44 = (fVar44 + fVar41 * 0.5) - fVar34 * 0.5;
LAB_059e52c4:
        in_stack_00000130 = (ulong)(uint)fVar44;
        in_stack_00000118._4_4_ = 0.0;
        goto LAB_059e52dc;
      }
      if ((char)unaff_x19[0x1e] == '\0') {
        fVar34 = fVar44 + 0.0;
      }
      else {
        fVar34 = 0.0 - fVar34;
      }
      in_stack_00000118._4_4_ = 0.0;
      in_stack_00000130 = 0;
LAB_059e5264:
      in_stack_00000130 = CONCAT44((int)(in_stack_00000130 >> 0x20),fVar34);
    }
    else {
      if (uVar37 == 3) goto LAB_059e52dc;
      if (uVar37 != 4) goto LAB_059e519c;
      in_stack_00000118._4_4_ = 0.0;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar34 = 0.0;
      }
      fVar34 = (fVar41 + fVar44) - fVar34;
      in_stack_00000130 = 0;
LAB_059e5150:
      in_stack_00000130 = CONCAT44((int)(in_stack_00000130 >> 0x20),fVar34);
    }
  }
  else if (uVar37 == 0x10) {
    if ((int)unaff_w24 <= (int)in_stack_000001a0) {
      if (uVar28 < 0xad) {
        if ((uVar28 != 3) && (uVar28 != 10)) {
LAB_059e51dc:
          if (*(uint *)(unaff_x27 + 0x18) <= in_stack_00000120) goto LAB_059e7774;
          uVar4 = *(undefined2 *)(in_stack_00000190 + (long)(int)in_stack_00000120 * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar15 = FUN_04cfb1f8(uVar4,0);
          if ((uVar15 & 1) == 0) {
            bVar1 = (int)uVar13 < (int)unaff_x19[0x97];
          }
          else {
            bVar1 = false;
          }
          if ((!bVar1 && (uVar37 >> 4 & 1) == 0) && (fVar34 <= fVar41)) {
            fVar34 = -0.0;
            if ((char)unaff_x19[0x1e] != '\0') {
              fVar34 = fVar41;
            }
            fVar44 = fVar44 + fVar34;
            goto LAB_059e52c4;
          }
          if (((unaff_w24 == 0) || (uVar13 != in_stack_000001c0)) ||
             (unaff_w24 == *(uint *)((long)unaff_x19 + 0x35c))) {
            fVar34 = -0.0;
            if ((char)unaff_x19[0x1e] != '\0') {
              fVar34 = fVar41;
            }
            if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            in_stack_00000130 = (ulong)(uint)(fVar44 + fVar34);
            uStack0000000000000044 =
                 System_Threading_Tasks_ThreadPoolTaskScheduler__TryExecuteTaskInline(uVar28,0);
            in_stack_00000118._4_4_ = 0.0;
          }
          else {
            cVar17 = (char)unaff_x19[0x1e];
            iVar23 = (iVar23 - iVar11) - (uStack0000000000000044 & 1);
            fVar44 = -fVar34;
            if (cVar17 != '\0') {
              fVar44 = fVar34;
            }
            if (iVar23 < 1) {
              fVar45 = 1.0;
              iVar23 = 1;
            }
            else {
              fVar45 = *(float *)((long)unaff_x19 + 0x30c);
            }
            fVar34 = (float)in_stack_00000130;
            fVar30 = (float)(in_stack_00000130 >> 0x20);
            if (uVar28 == 9) {
LAB_059e6f08:
              fVar44 = ((fVar41 + fVar44) * (1.0 - fVar45)) / (float)iVar23;
              if (cVar17 != '\0') {
                fVar34 = fVar34 - fVar44;
                goto LAB_059e5264;
              }
              in_stack_00000130 = CONCAT44(fVar30 + 0.0,fVar34 + fVar44);
              in_stack_00000118._4_4_ = in_stack_00000118._4_4_ + 0.0;
            }
            else {
              if (uVar28 != 0xa0) {
                if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                uVar15 = System_Threading_Tasks_ThreadPoolTaskScheduler__TryExecuteTaskInline
                                   (uVar28,0);
                cVar17 = (char)unaff_x19[0x1e];
                if ((uVar15 & 1) != 0) goto LAB_059e6f08;
              }
              fVar44 = ((fVar41 + fVar44) * fVar45) /
                       (float)(int)((iVar11 - ((uStack0000000000000044 ^ 0xffffffff) & 1)) + iVar10)
              ;
              if (cVar17 != '\0') {
                fVar34 = fVar34 - fVar44;
                goto LAB_059e5150;
              }
              in_stack_00000130 = CONCAT44(fVar30 + 0.0,fVar34 + fVar44);
              in_stack_00000118._4_4_ = in_stack_00000118._4_4_ + 0.0;
            }
          }
        }
      }
      else if (((uVar28 != 0xad) && (uVar28 != 0x200b)) && (uVar28 != 0x2060)) goto LAB_059e51dc;
    }
  }
  else if (uVar37 == 0x20) {
    in_stack_00000130 = (ulong)(uint)((fVar44 + fVar41 * 0.5) - (fVar43 + fVar47) * 0.5);
    in_stack_00000118._4_4_ = 0.0;
  }
LAB_059e52dc:
  param_5 = (ulong)(uint)fVar36;
  uVar37 = (uint)*(undefined8 *)(unaff_x27 + 0x18);
  if (uVar37 <= unaff_w24) goto LAB_059e7774;
  lVar22 = in_stack_00000190 + (ulong)unaff_w24 * 0x178;
  fVar34 = (float)in_stack_00000130;
  fVar44 = (float)in_stack_000000c0 + fVar34;
  fVar41 = (float)((ulong)in_stack_000000c0 >> 0x20) + (float)(in_stack_00000130 >> 0x20);
  fVar45 = in_stack_000000b8._4_4_ + in_stack_00000118._4_4_;
  if (*(char *)(lVar22 + 0x170) != '\0') {
    iVar11 = *piVar27;
    if (iVar11 == 0) {
      fVar30 = fmodf(*(float *)((long)unaff_x19 + 0x34c) * (float)(int)uVar13,1.0);
      iVar10 = *(int *)((long)unaff_x19 + 0x344);
      if (iVar10 < 2) {
        if (iVar10 == 0) {
          lVar26 = in_stack_00000190 + (ulong)unaff_w24 * 0x178;
          *(undefined4 *)(lVar26 + 100) = 0;
          *(undefined4 *)(lVar26 + 0x8c) = 0;
          *(undefined4 *)(lVar26 + 0xb4) = 0x3f800000;
          *(undefined4 *)(lVar26 + 0xdc) = 0x3f800000;
        }
        else if (iVar10 == 1) {
          lVar26 = in_stack_00000190 + (ulong)unaff_w24 * 0x178;
          fVar46 = *(float *)(lVar26 + 0x48);
          pfVar3 = (float *)(lVar26 + 100);
          if (*(int *)((long)unaff_x19 + 0x29c) == 0x208) {
            lVar26 = in_stack_00000190 + (ulong)unaff_w24 * 0x178;
            fVar47 = *(float *)(lVar26 + 0x70);
            *pfVar3 = fVar30 + ((fVar34 + fVar46) - *(float *)(unaff_x19 + 0x9e)) /
                               (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
            *(float *)(lVar26 + 0x8c) =
                 fVar30 + ((fVar34 + fVar47) - *(float *)(unaff_x19 + 0x9e)) /
                          (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
            *(float *)(lVar26 + 0xb4) =
                 fVar30 + ((fVar34 + *(float *)(lVar26 + 0x98)) - *(float *)(unaff_x19 + 0x9e)) /
                          (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
            *(float *)(lVar26 + 0xdc) =
                 fVar30 + ((fVar34 + *(float *)(lVar26 + 0xc0)) - *(float *)(unaff_x19 + 0x9e)) /
                          (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
            param_5 = in_stack_00000130;
          }
          else {
            lVar26 = in_stack_00000190 + (ulong)unaff_w24 * 0x178;
            fVar47 = fVar47 - fVar43;
            fVar34 = *(float *)(lVar26 + 0x70);
            fVar42 = *(float *)(lVar26 + 0x98);
            fVar40 = *(float *)(lVar26 + 0xc0);
            *pfVar3 = fVar30 + (fVar46 - fVar43) / fVar47;
            *(float *)(lVar26 + 0x8c) = fVar30 + (fVar34 - fVar43) / fVar47;
            fVar34 = fVar30 + (fVar42 - fVar43) / fVar47;
            *(float *)(lVar26 + 0xb4) = fVar34;
            *(float *)(lVar26 + 0xdc) = fVar30 + (fVar40 - fVar43) / fVar47;
            param_5 = (ulong)(uint)fVar34;
          }
        }
      }
      else if (iVar10 == 2) {
        lVar26 = in_stack_00000190 + (ulong)unaff_w24 * 0x178;
        *(float *)(lVar26 + 100) =
             fVar30 + ((fVar34 + *(float *)(lVar26 + 0x48)) - *(float *)(unaff_x19 + 0x9e)) /
                      (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
        *(float *)(lVar26 + 0x8c) =
             fVar30 + ((fVar34 + *(float *)(lVar26 + 0x70)) - *(float *)(unaff_x19 + 0x9e)) /
                      (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
        *(float *)(lVar26 + 0xb4) =
             fVar30 + ((fVar34 + *(float *)(lVar26 + 0x98)) - *(float *)(unaff_x19 + 0x9e)) /
                      (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
        *(float *)(lVar26 + 0xdc) =
             fVar30 + ((fVar34 + *(float *)(lVar26 + 0xc0)) - *(float *)(unaff_x19 + 0x9e)) /
                      (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
        param_5 = in_stack_00000130;
      }
      else if (iVar10 == 3) {
        iVar10 = (int)unaff_x19[0x69];
        if (iVar10 < 2) {
          if (iVar10 == 0) {
            lVar26 = in_stack_00000190 + (ulong)unaff_w24 * 0x178;
            *(undefined4 *)(lVar26 + 0x68) = 0;
            *(undefined4 *)(lVar26 + 0x90) = 0x3f800000;
            *(undefined4 *)(lVar26 + 0xb8) = 0;
            *(undefined4 *)(lVar26 + 0xe0) = 0x3f800000;
          }
          else if (iVar10 == 1) {
            lVar26 = in_stack_00000190 + (ulong)unaff_w24 * 0x178;
            fVar46 = fVar46 - fVar42;
            fVar34 = (*(float *)(lVar26 + 0x74) - fVar42) / fVar46;
            fVar46 = fVar30 + (*(float *)(lVar26 + 0x4c) - fVar42) / fVar46;
            *(float *)(lVar26 + 0x68) = fVar46;
            *(float *)(lVar26 + 0xb8) = fVar46;
            goto LAB_059e56e8;
          }
        }
        else if (iVar10 == 2) {
          lVar26 = in_stack_00000190 + (ulong)unaff_w24 * 0x178;
          fVar34 = fVar30 + (*(float *)(lVar26 + 0x4c) - *(float *)((long)unaff_x19 + 0x4f4)) /
                            (*(float *)((long)unaff_x19 + 0x4fc) -
                            *(float *)((long)unaff_x19 + 0x4f4));
          *(float *)(lVar26 + 0x68) = fVar34;
          fVar46 = *(float *)((long)unaff_x19 + 0x4f4);
          fVar47 = *(float *)((long)unaff_x19 + 0x4fc);
          *(float *)(lVar26 + 0xb8) = fVar34;
          fVar34 = (*(float *)(lVar26 + 0x74) - fVar46) / (fVar47 - fVar46);
LAB_059e56e8:
          *(float *)(lVar26 + 0x90) = fVar30 + fVar34;
          *(float *)(lVar26 + 0xe0) = fVar30 + fVar34;
        }
        else if (iVar10 == 3) {
          if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_05c44914(*(undefined8 *)
                        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerDownEvent>__
                       ,0);
          uVar37 = (uint)*(undefined8 *)(unaff_x27 + 0x18);
        }
        if (uVar37 <= unaff_w24) goto LAB_059e7774;
        lVar26 = in_stack_00000190 + (ulong)unaff_w24 * 0x178;
        fVar47 = *(float *)(lVar26 + 0x138);
        fVar46 = (1.0 - (*(float *)(lVar26 + 0x68) + *(float *)(lVar26 + 0x90)) * fVar47) * 0.5;
        fVar34 = fVar30 + *(float *)(lVar26 + 0x68) * fVar47 + fVar46;
        fVar30 = fVar30 + fVar46 + *(float *)(lVar26 + 0x90) * fVar47;
        *(float *)(lVar26 + 100) = fVar34;
        *(float *)(lVar26 + 0x8c) = fVar34;
        *(float *)(lVar26 + 0xb4) = fVar30;
        *(float *)(lVar26 + 0xdc) = fVar30;
        param_5 = (ulong)(uint)fVar47;
      }
      iVar10 = (int)unaff_x19[0x69];
      if (iVar10 < 2) {
        if (iVar10 == 0) {
          if (uVar37 <= unaff_w24) goto LAB_059e7774;
          lVar26 = in_stack_00000190 + (ulong)unaff_w24 * 0x178;
          *(undefined4 *)(lVar26 + 0x68) = 0;
          *(undefined4 *)(lVar26 + 0x90) = 0x3f800000;
          *(undefined4 *)(lVar26 + 0xb8) = 0x3f800000;
          *(undefined4 *)(lVar26 + 0xe0) = 0;
        }
        else if (iVar10 == 1) {
          if (unaff_w24 < uVar37) {
            lVar26 = in_stack_00000190 + (ulong)unaff_w24 * 0x178;
            fVar39 = fVar39 - fVar36;
            fVar34 = (*(float *)(lVar26 + 0x4c) - fVar36) / fVar39;
            fVar39 = (*(float *)(lVar26 + 0x74) - fVar36) / fVar39;
            *(float *)(lVar26 + 0x68) = fVar34;
            goto LAB_059e5860;
          }
          goto LAB_059e7774;
        }
      }
      else if (iVar10 == 2) {
        if (uVar37 <= unaff_w24) goto LAB_059e7774;
        lVar26 = in_stack_00000190 + (ulong)unaff_w24 * 0x178;
        fVar34 = (*(float *)(lVar26 + 0x4c) - *(float *)((long)unaff_x19 + 0x4f4)) /
                 (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
        *(float *)(lVar26 + 0x68) = fVar34;
        param_5 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x4fc);
        fVar39 = (*(float *)(lVar26 + 0x74) - *(float *)((long)unaff_x19 + 0x4f4)) /
                 (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
LAB_059e5860:
        *(float *)(lVar26 + 0x90) = fVar39;
        *(float *)(lVar26 + 0xb8) = fVar39;
        *(float *)(lVar26 + 0xe0) = fVar34;
      }
      else if (iVar10 == 3) {
        if (uVar37 <= unaff_w24) goto LAB_059e7774;
        lVar26 = in_stack_00000190 + (ulong)unaff_w24 * 0x178;
        fVar47 = *(float *)(lVar26 + 0x138);
        param_5 = 0x3f000000;
        fVar46 = (1.0 - (*(float *)(lVar26 + 100) + *(float *)(lVar26 + 0xb4)) / fVar47) * 0.5;
        fVar34 = *(float *)(lVar26 + 100) / fVar47 + fVar46;
        fVar46 = fVar46 + *(float *)(lVar26 + 0xb4) / fVar47;
        *(float *)(lVar26 + 0x68) = fVar34;
        *(float *)(lVar26 + 0xe0) = fVar34;
        *(float *)(lVar26 + 0x90) = fVar46;
        *(float *)(lVar26 + 0xb8) = fVar46;
      }
      if (uVar37 <= unaff_w24) goto LAB_059e7774;
      lVar26 = in_stack_00000190 + (ulong)unaff_w24 * 0x178;
      in_stack_00000160 = *(float *)(lVar26 + 0x13c) * (1.0 - *(float *)(unaff_x19 + 0x60));
      if ((*(char *)(lVar26 + 0x34) == '\0') &&
         ((*(byte *)(in_stack_00000190 + (ulong)unaff_w24 * 0x178 + 0x16c) & 1) != 0)) {
        in_stack_00000160 = -in_stack_00000160;
      }
      fVar34 = fStack0000000000000058;
      if (((iStack000000000000005c == 2) ||
          (fVar34 = fStack000000000000004c, iStack000000000000005c == 1)) ||
         (fVar34 = fStack0000000000000048, iStack000000000000005c == 0)) {
        in_stack_00000160 = fVar34 * in_stack_00000160;
      }
      lVar26 = in_stack_00000190 + (ulong)unaff_w24 * 0x178;
      *(float *)(lVar26 + 0x60) = in_stack_00000160;
      *(float *)(lVar26 + 0x88) = in_stack_00000160;
      *(float *)(lVar26 + 0xb0) = in_stack_00000160;
      *(float *)(lVar26 + 0xd8) = in_stack_00000160;
    }
    if (((int)unaff_w24 < (int)unaff_x19[0x6c]) &&
       (iStack00000000000000fc < *(int *)((long)unaff_x19 + 0x364))) {
      if (((int)unaff_x19[0x6d] <= (int)uVar13) || ((int)unaff_x19[0x62] == 5)) {
        if (((int)uVar13 < (int)unaff_x19[0x6d]) && ((int)unaff_x19[0x62] == 5)) {
          if (unaff_w24 < uVar37) {
            if (*(int *)(in_stack_00000190 + (ulong)unaff_w24 * 0x178 + 0x40) ==
                iStack0000000000000040) goto LAB_059e6758;
            goto LAB_059e5968;
          }
          goto LAB_059e7774;
        }
        goto LAB_059e5968;
      }
      if (uVar37 <= unaff_w24) goto LAB_059e7774;
LAB_059e6758:
      lVar22 = in_stack_00000190 + (ulong)unaff_w24 * 0x178;
      fVar34 = fVar45 + *(float *)(lVar22 + 0x78);
      param_5 = (ulong)(uint)fVar34;
      *(ulong *)(lVar22 + 0x48) =
           CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar22 + 0x48) >> 0x20),
                    fVar44 + (float)*(undefined8 *)(lVar22 + 0x48));
      *(float *)(lVar22 + 0x50) = fVar45 + *(float *)(lVar22 + 0x50);
      *(ulong *)(lVar22 + 0x70) =
           CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar22 + 0x70) >> 0x20),
                    fVar44 + (float)*(undefined8 *)(lVar22 + 0x70));
      *(float *)(lVar22 + 0x78) = fVar34;
      *(ulong *)(lVar22 + 0x98) =
           CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar22 + 0x98) >> 0x20),
                    fVar44 + (float)*(undefined8 *)(lVar22 + 0x98));
      *(float *)(lVar22 + 0xa0) = fVar45 + *(float *)(lVar22 + 0xa0);
      *(ulong *)(lVar22 + 0xc0) =
           CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar22 + 0xc0) >> 0x20),
                    fVar44 + (float)*(undefined8 *)(lVar22 + 0xc0));
      *(float *)(lVar22 + 200) = fVar45 + *(float *)(lVar22 + 200);
    }
    else {
LAB_059e5968:
      if (uVar37 <= unaff_w24) goto LAB_059e7774;
      if (DAT_066c1d97 == '\0') {
        FUN_02b3c81c(PTR_DAT_06312438);
        uVar37 = *(uint *)(unaff_x27 + 0x18);
        DAT_066c1d97 = '\x01';
      }
      puVar6 = PTR_DAT_06312438;
      uVar33 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_06312438 + 0xb8) + 1);
      *(undefined8 *)(in_stack_00000190 + (ulong)unaff_w24 * 0x178 + 0x48) =
           **(undefined8 **)(*(long *)PTR_DAT_06312438 + 0xb8);
      *(undefined4 *)(in_stack_00000190 + (ulong)unaff_w24 * 0x178 + 0x50) = uVar33;
      if (uVar37 <= unaff_w24) goto LAB_059e7774;
      lVar26 = in_stack_00000190 + (ulong)unaff_w24 * 0x178;
      uVar33 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
      *(undefined8 *)(lVar26 + 0x70) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
      *(undefined4 *)(lVar26 + 0x78) = uVar33;
      uVar33 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
      *(undefined8 *)(lVar26 + 0x98) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
      *(undefined4 *)(lVar26 + 0xa0) = uVar33;
      uVar24 = **(undefined8 **)(*(long *)puVar6 + 0xb8);
      uVar33 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
      *(undefined1 *)(lVar22 + 0x170) = 0;
      *(undefined8 *)(lVar26 + 0xc0) = uVar24;
      *(undefined4 *)(lVar26 + 200) = uVar33;
    }
    if (iVar11 == 0) {
      puVar18 = (undefined8 *)(*unaff_x19 + 0x8d8);
    }
    else {
      if (iVar11 != 1) goto LAB_059e5a88;
      puVar18 = (undefined8 *)(*unaff_x19 + 0x8f8);
    }
    (*(code *)*puVar18)();
  }
LAB_059e5a88:
  if ((unaff_x19[0x74] == 0) || (lVar22 = *(long *)(unaff_x19[0x74] + 0x38), lVar22 == 0))
  goto LAB_059e75b4;
  if (*(uint *)(lVar22 + 0x18) <= unaff_w24) goto LAB_059e7774;
  lVar22 = lVar22 + (ulong)unaff_w24 * 0x178;
  uVar24 = *(undefined8 *)(lVar22 + 0x114);
  *(float *)(lVar22 + 0x11c) = fVar45 + *(float *)(lVar22 + 0x11c);
  *(undefined8 *)(lVar22 + 0x114) =
       CONCAT44(fVar41 + (float)((ulong)uVar24 >> 0x20),fVar44 + (float)uVar24);
  if ((unaff_x19[0x74] == 0) || (lVar22 = *(long *)(unaff_x19[0x74] + 0x38), lVar22 == 0))
  goto LAB_059e75b4;
  if (*(uint *)(lVar22 + 0x18) <= unaff_w24) goto LAB_059e7774;
  lVar22 = lVar22 + (ulong)unaff_w24 * 0x178;
  *(ulong *)(lVar22 + 0x108) =
       CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar22 + 0x108) >> 0x20),
                fVar44 + (float)*(undefined8 *)(lVar22 + 0x108));
  *(float *)(lVar22 + 0x110) = fVar45 + *(float *)(lVar22 + 0x110);
  if ((unaff_x19[0x74] == 0) || (lVar22 = *(long *)(unaff_x19[0x74] + 0x38), lVar22 == 0))
  goto LAB_059e75b4;
  if (*(uint *)(lVar22 + 0x18) <= unaff_w24) goto LAB_059e7774;
  lVar22 = lVar22 + (ulong)unaff_w24 * 0x178;
  *(ulong *)(lVar22 + 0x120) =
       CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar22 + 0x120) >> 0x20),
                fVar44 + (float)*(undefined8 *)(lVar22 + 0x120));
  *(float *)(lVar22 + 0x128) = fVar45 + *(float *)(lVar22 + 0x128);
  if ((unaff_x19[0x74] == 0) || (lVar22 = *(long *)(unaff_x19[0x74] + 0x38), lVar22 == 0))
  goto LAB_059e75b4;
  if (*(uint *)(lVar22 + 0x18) <= unaff_w24) goto LAB_059e7774;
  lVar22 = lVar22 + (ulong)unaff_w24 * 0x178;
  uVar24 = *(undefined8 *)(lVar22 + 300);
  *(float *)(lVar22 + 0x134) = fVar45 + *(float *)(lVar22 + 0x134);
  *(undefined8 *)(lVar22 + 300) =
       CONCAT44(fVar41 + (float)((ulong)uVar24 >> 0x20),fVar44 + (float)uVar24);
  lVar22 = unaff_x19[0x74];
  if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_059e75b4;
  uVar37 = *(uint *)(lVar26 + 0x18);
  if (uVar37 <= unaff_w24) goto LAB_059e7774;
  lVar20 = lVar26 + 0x20 + (ulong)unaff_w24 * 0x178;
  uVar16 = *(ulong *)(lVar20 + 0x118);
  fVar34 = fVar41 + *(float *)(lVar20 + 0x128);
  uVar15 = (ulong)(uint)fVar34;
  *(float *)(lVar20 + 0x128) = fVar34;
  *(ulong *)(lVar20 + 0x120) =
       CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar20 + 0x120) >> 0x20),
                fVar41 + (float)*(undefined8 *)(lVar20 + 0x120));
  *(ulong *)(lVar20 + 0x118) = CONCAT44(fVar44 + (float)(uVar16 >> 0x20),fVar44 + (float)uVar16);
  if (uVar13 == in_stack_000001c0) {
    uVar37 = *(int *)(in_stack_000001d0 + 0x38) - 1;
    if (unaff_w24 == uVar37) goto LAB_059e5c90;
  }
  else {
    lVar22 = *(long *)(lVar22 + 0x50);
    if (lVar22 == 0) goto LAB_059e75b4;
    if (*(uint *)(lVar22 + 0x18) <= in_stack_000001c0) goto LAB_059e7774;
    lVar20 = lVar22 + 0x20 + (long)(int)in_stack_000001c0 * 0x60;
    param_5 = (ulong)(uint)*(float *)(lVar20 + 0x3c);
    uVar15 = CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20),
                      fVar41 + (float)*(undefined8 *)(lVar20 + 0x30));
    fVar34 = fVar41 + *(float *)(lVar20 + 0x38);
    fVar46 = fVar44 + *(float *)(lVar20 + 0x3c);
    uVar16 = (ulong)(uint)fVar46;
    *(ulong *)(lVar20 + 0x30) = uVar15;
    *(float *)(lVar20 + 0x38) = fVar34;
    *(float *)(lVar20 + 0x3c) = fVar46;
    if (uVar37 <= *(uint *)(lVar20 + 0x18)) goto LAB_059e7774;
    lVar22 = lVar22 + 0x20 + (long)(int)in_stack_000001c0 * 0x60;
    uVar33 = *(undefined4 *)(lVar26 + 0x20 + (long)(int)*(uint *)(lVar20 + 0x18) * 0x178 + 0xf4);
    *(float *)(lVar22 + 0x54) = fVar34;
    *(undefined4 *)(lVar22 + 0x50) = uVar33;
    lVar22 = unaff_x19[0x74];
    if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x50), lVar26 == 0)) goto LAB_059e75b4;
    if (*(uint *)(lVar26 + 0x18) <= in_stack_000001c0) goto LAB_059e7774;
    lVar22 = *(long *)(lVar22 + 0x38);
    if (lVar22 == 0) goto LAB_059e75b4;
    uVar37 = *(uint *)(lVar26 + 0x20 + (long)(int)in_stack_000001c0 * 0x60 + 0x24);
    if (*(uint *)(lVar22 + 0x18) <= uVar37) goto LAB_059e7774;
    lVar26 = lVar26 + 0x20 + (long)(int)in_stack_000001c0 * 0x60;
    *(undefined4 *)(lVar26 + 0x58) = *(undefined4 *)(lVar22 + (long)(int)uVar37 * 0x178 + 0x120);
    *(undefined4 *)(lVar26 + 0x5c) = *(undefined4 *)(lVar26 + 0x30);
    uVar37 = *(int *)(in_stack_000001d0 + 0x38) - 1;
LAB_059e5c90:
    if (unaff_w24 == uVar37) {
      lVar22 = unaff_x19[0x74];
      if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x50), lVar26 == 0)) goto LAB_059e75b4;
      if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_059e7774;
      lVar20 = lVar26 + 0x20 + (long)(int)uVar13 * 0x60;
      param_5 = (ulong)(uint)*(float *)(lVar20 + 0x3c);
      uVar15 = CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20),
                        fVar41 + (float)*(undefined8 *)(lVar20 + 0x30));
      fVar34 = fVar41 + *(float *)(lVar20 + 0x38);
      fVar44 = fVar44 + *(float *)(lVar20 + 0x3c);
      uVar16 = (ulong)(uint)fVar44;
      *(ulong *)(lVar20 + 0x30) = uVar15;
      *(float *)(lVar20 + 0x38) = fVar34;
      *(float *)(lVar20 + 0x3c) = fVar44;
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_059e75b4;
      uVar37 = *(uint *)(lVar26 + 0x20 + (long)(int)uVar13 * 0x60 + 0x18);
      if (*(uint *)(lVar22 + 0x18) <= uVar37) goto LAB_059e7774;
      *(undefined4 *)(lVar20 + 0x50) = *(undefined4 *)(lVar22 + (long)(int)uVar37 * 0x178 + 0x114);
      *(float *)(lVar20 + 0x54) = fVar34;
      lVar22 = unaff_x19[0x74];
      if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x50), lVar26 == 0)) goto LAB_059e75b4;
      if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_059e7774;
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_059e75b4;
      uVar37 = *(uint *)(lVar26 + 0x20 + (long)(int)uVar13 * 0x60 + 0x24);
      if (*(uint *)(lVar22 + 0x18) <= uVar37) goto LAB_059e7774;
      lVar26 = lVar26 + 0x20 + (long)(int)uVar13 * 0x60;
      *(undefined4 *)(lVar26 + 0x58) = *(undefined4 *)(lVar22 + (long)(int)uVar37 * 0x178 + 0x120);
      *(undefined4 *)(lVar26 + 0x5c) = *(undefined4 *)(lVar26 + 0x30);
    }
  }
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar14 = FUN_04cfa710(uVar28,0);
  if (((((uVar14 & 1) == 0) && (1 < uVar28 - 0x2010)) && (uVar28 != 0xad)) && (uVar28 != 0x2d)) {
    if ((in_stack_00000170 & 1) != 0) {
      if (((unaff_w24 != 0) && ((int)unaff_w24 < (int)(*(uint *)(unaff_x27 + 0x18) - 1))) &&
         (((int)unaff_w24 < *(int *)(in_stack_000001d0 + 0x38) &&
          ((uVar28 == 0x2019 || (uVar28 == 0x27)))))) {
        if (*(uint *)(unaff_x27 + 0x18) <= uVar12) goto LAB_059e7774;
        uVar4 = *(undefined2 *)(in_stack_00000190 + (ulong)uVar12 * 0x178 + 4);
        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar14 = FUN_04cfa710(uVar4,0);
        if ((uVar14 & 1) != 0) {
          if (*(uint *)(unaff_x27 + 0x18) <= uVar12 + 2) goto LAB_059e7774;
          uVar4 = *(undefined2 *)(in_stack_00000190 + (ulong)(uVar12 + 2) * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar14 = FUN_04cfa710(uVar4,0);
          if ((uVar14 & 1) != 0) goto LAB_059e5fa8;
        }
      }
LAB_059e6ce8:
      if (unaff_w24 == *(int *)(in_stack_000001d0 + 0x38) - 1U) {
        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar14 = FUN_04cfa710(uVar28,0);
        uVar37 = unaff_w24;
        if ((uVar14 & 1) == 0) goto LAB_059e6d28;
      }
      else {
LAB_059e6d28:
        uVar37 = uVar12;
      }
      lVar22 = unaff_x19[0x74];
      if (lVar22 != 0) {
        lVar26 = *(long *)(lVar22 + 0x40);
        if (lVar26 != 0) {
          uVar2 = *(uint *)(lVar22 + 0x24);
          iVar11 = *(int *)(lVar26 + 0x18);
          if (iVar11 < (int)(uVar2 + 1)) {
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__
                        + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            FUN_03335840((long *)(lVar22 + 0x40),iVar11 + 1,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<KeyUpEvent>__
                        );
            lVar22 = unaff_x19[0x74];
            if (lVar22 == 0) goto LAB_059e75b4;
          }
          lVar22 = *(long *)(lVar22 + 0x40);
          if (lVar22 != 0) {
            if (uVar2 < *(uint *)(lVar22 + 0x18)) {
              lVar22 = lVar22 + (long)(int)uVar2 * 0x18;
              *(long **)(lVar22 + 0x20) = unaff_x19;
              *(uint *)(lVar22 + 0x28) = unaff_w25;
              *(uint *)(lVar22 + 0x2c) = uVar37;
              *(uint *)(lVar22 + 0x30) = (uVar37 - unaff_w25) + 1;
              thunk_FUN_02bb0e9c();
              lVar22 = unaff_x19[0x74];
              if (lVar22 != 0) {
                lVar26 = *(long *)(lVar22 + 0x50);
                *(int *)(lVar22 + 0x24) = *(int *)(lVar22 + 0x24) + 1;
                if (lVar26 != 0) {
                  if (uVar13 < *(uint *)(lVar26 + 0x18)) {
                    in_stack_00000170 = 0;
                    goto LAB_059e5ebc;
                  }
                  goto LAB_059e7774;
                }
              }
              goto LAB_059e75b4;
            }
            goto LAB_059e7774;
          }
        }
      }
      goto LAB_059e75b4;
    }
    if (unaff_w24 == 0) {
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      bVar9 = FUN_04cfa668(uVar28,0);
      if ((((uVar28 == 0x200b | bVar9 ^ 0xff | bVar8) & 1) != 0) ||
         (*(int *)(in_stack_000001d0 + 0x38) == 1)) goto LAB_059e6ce8;
    }
    in_stack_00000170 = 0;
  }
  else {
    if ((in_stack_00000170 & 1) == 0) {
      unaff_w25 = unaff_w24;
    }
    if (unaff_w24 != *(int *)(in_stack_000001d0 + 0x38) - 1U) {
LAB_059e5fa8:
      in_stack_00000170 = 1;
      goto LAB_059e5fb0;
    }
    lVar22 = unaff_x19[0x74];
    if (lVar22 == 0) goto LAB_059e75b4;
    lVar26 = *(long *)(lVar22 + 0x40);
    if (lVar26 == 0) goto LAB_059e75b4;
    uVar37 = *(uint *)(lVar22 + 0x24);
    iVar11 = *(int *)(lVar26 + 0x18);
    if (iVar11 < (int)(uVar37 + 1)) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_03335840((long *)(lVar22 + 0x40),iVar11 + 1,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<KeyUpEvent>__
                  );
      lVar22 = unaff_x19[0x74];
      if (lVar22 == 0) goto LAB_059e75b4;
    }
    lVar22 = *(long *)(lVar22 + 0x40);
    if (lVar22 == 0) goto LAB_059e75b4;
    if (*(uint *)(lVar22 + 0x18) <= uVar37) goto LAB_059e7774;
    lVar22 = lVar22 + (long)(int)uVar37 * 0x18;
    *(long **)(lVar22 + 0x20) = unaff_x19;
    *(uint *)(lVar22 + 0x28) = unaff_w25;
    *(uint *)(lVar22 + 0x2c) = unaff_w24;
    *(uint *)(lVar22 + 0x30) = (unaff_w24 - unaff_w25) + 1;
    thunk_FUN_02bb0e9c();
    lVar22 = unaff_x19[0x74];
    if (lVar22 == 0) goto LAB_059e75b4;
    lVar26 = *(long *)(lVar22 + 0x50);
    *(int *)(lVar22 + 0x24) = *(int *)(lVar22 + 0x24) + 1;
    if (lVar26 == 0) goto LAB_059e75b4;
    if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_059e7774;
    in_stack_00000170 = 1;
LAB_059e5ebc:
    lVar26 = lVar26 + (long)(int)uVar13 * 0x60;
    iStack00000000000000fc = iStack00000000000000fc + 1;
    *(int *)(lVar26 + 0x34) = *(int *)(lVar26 + 0x34) + 1;
  }
LAB_059e5fb0:
  lVar22 = unaff_x19[0x74];
  if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_059e75b4;
  if (*(uint *)(lVar26 + 0x18) <= unaff_w24) goto LAB_059e7774;
  lVar20 = lVar26 + 0x20;
  if ((*(byte *)(lVar20 + (ulong)unaff_w24 * 0x178 + 0x16c) >> 2 & 1) == 0) {
    if ((in_stack_00000168._4_4_ & 1) != 0) {
      if (*(uint *)(lVar26 + 0x18) <= (uint)((long)(int)unaff_w24 + -1)) goto LAB_059e7774;
      lVar20 = lVar20 + ((long)(int)unaff_w24 + -1) * 0x178;
      lVar26 = *unaff_x19;
      uVar37 = *(uint *)(lVar20 + 0x100);
      uVar33 = *(undefined4 *)(lVar20 + 0x13c);
LAB_059e627c:
      pcVar19 = *(code **)(lVar26 + 0x908);
LAB_059e62b4:
      param_5 = (ulong)uVar37;
      uVar16 = (ulong)uStack0000000000000068;
      uVar15 = (ulong)(uint)fStack0000000000000064;
      (*pcVar19)(uStack000000000000006c,uVar15,uVar16,param_5,in_stack_00000150,0,in_stack_00000070,
                 uVar33);
      lVar22 = *(long *)System_Collections_Generic_List<int>___TypeInfo;
      if (*(int *)(lVar22 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar22 = *(long *)System_Collections_Generic_List<int>___TypeInfo;
      }
      in_stack_00000180._4_4_ = 0.0;
      in_stack_00000148._4_4_ = 0.0;
      in_stack_00000150 = *(float *)(*(long *)(lVar22 + 0xb8) + 0x1730);
    }
    in_stack_00000168._4_4_ = 0;
  }
  else {
    lVar26 = lVar20 + (ulong)unaff_w24 * 0x178;
    *(undefined4 *)(lVar26 + 0x148) = in_stack_00001334;
    iVar11 = *(int *)(lVar26 + 0x40);
    if ((((int)unaff_x19[0x6c] < (int)unaff_w24) || ((int)unaff_x19[0x6d] < (int)uVar13)) ||
       (((int)unaff_x19[0x62] == 5 && (iVar11 + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar8 & 1) == 0 && uVar28 != 0x200b) {
      fVar34 = *(float *)(lVar20 + (ulong)unaff_w24 * 0x178 + 0x13c);
      if (in_stack_00000180._4_4_ <= fVar34) {
        in_stack_00000180._4_4_ = fVar34;
      }
      uVar16 = (ulong)(uint)in_stack_00000180._4_4_;
      if (in_stack_00000148._4_4_ <= ABS(in_stack_00000160)) {
        in_stack_00000148._4_4_ = ABS(in_stack_00000160);
      }
      if (iVar11 != iStack0000000000000060) {
        if (*(int *)(*(long *)System_Collections_Generic_List<int>___TypeInfo + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar22 = unaff_x19[0x74];
          if (lVar22 == 0) goto LAB_059e75b4;
          lVar26 = *(long *)(*(long *)System_Collections_Generic_List<int>___TypeInfo + 0xb8);
        }
        else {
          lVar26 = *(long *)(*(long *)System_Collections_Generic_List<int>___TypeInfo + 0xb8);
        }
        in_stack_00000150 = *(float *)(lVar26 + 0x1730);
      }
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_059e75b4;
      if (*(uint *)(lVar22 + 0x18) <= unaff_w24) goto LAB_059e7774;
      if (unaff_x19[0x1f] == 0) goto LAB_059e75b4;
      fVar44 = *(float *)(lVar22 + (ulong)unaff_w24 * 0x178 + 0x144);
      fVar34 = (float)FUN_05d3d960(unaff_x19[0x1f] + 0x28,0);
      fVar44 = fVar44 + in_stack_00000180._4_4_ * fVar34;
      if (fVar44 <= in_stack_00000150) {
        in_stack_00000150 = fVar44;
      }
      uVar15 = (ulong)(uint)in_stack_00000150;
      iStack0000000000000060 = iVar11;
    }
    if ((in_stack_00000168._4_4_ & 1) != 0) {
LAB_059e623c:
      if (*(int *)(in_stack_000001d0 + 0x38) != 1) {
        if ((unaff_w24 != in_stack_00000120) && ((int)unaff_w24 < (int)in_stack_000001a0)) {
          if (bVar1) {
            if ((int)unaff_w24 < *(int *)(in_stack_000001d0 + 0x38) + -1) {
              if ((unaff_x19[0x74] == 0) ||
                 (lVar22 = *(long *)(unaff_x19[0x74] + 0x38), lVar22 == 0)) goto LAB_059e75b4;
              if (*(uint *)(lVar22 + 0x18) <= uVar12 + 2) goto LAB_059e7774;
              uVar14 = FUN_059f9a40(in_stack_00000088._4_4_,
                                    *(undefined4 *)(lVar22 + (ulong)(uVar12 + 2) * 0x178 + 0x164),0)
              ;
              if ((uVar14 & 1) == 0) {
                if ((unaff_x19[0x74] != 0) &&
                   (lVar22 = *(long *)(unaff_x19[0x74] + 0x38), lVar22 != 0)) {
                  if (unaff_w24 < *(uint *)(lVar22 + 0x18)) {
                    lVar22 = lVar22 + (ulong)unaff_w24 * 0x178;
                    uVar37 = *(uint *)(lVar22 + 0x120);
                    uVar33 = *(undefined4 *)(lVar22 + 0x15c);
                    pcVar19 = *(code **)(*unaff_x19 + 0x908);
                    goto LAB_059e62b4;
                  }
                  goto LAB_059e7774;
                }
                goto LAB_059e75b4;
              }
            }
            in_stack_00000168._4_4_ = 1;
            goto LAB_059e6300;
          }
          if ((unaff_x19[0x74] == 0) || (lVar22 = *(long *)(unaff_x19[0x74] + 0x38), lVar22 == 0))
          goto LAB_059e75b4;
          if ((uint)((long)(int)unaff_w24 + -1) < *(uint *)(lVar22 + 0x18)) {
            lVar22 = lVar22 + ((long)(int)unaff_w24 + -1) * 0x178;
            goto LAB_059e6270;
          }
          goto LAB_059e7774;
        }
        lVar22 = unaff_x19[0x74];
        if ((bVar8 & 1) == 0 && uVar28 != 0x200b) {
          if ((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0x38), lVar22 == 0)) goto LAB_059e75b4;
          if (*(uint *)(lVar22 + 0x18) <= unaff_w24) goto LAB_059e7774;
          lVar22 = lVar22 + (ulong)unaff_w24 * 0x178;
        }
        else {
          if ((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0x38), lVar22 == 0)) goto LAB_059e75b4;
          if (*(uint *)(lVar22 + 0x18) <= in_stack_000001a0) goto LAB_059e7774;
          lVar22 = lVar22 + (long)(int)in_stack_000001a0 * 0x178;
        }
        uVar37 = *(uint *)(lVar22 + 0x120);
        uVar33 = *(undefined4 *)(lVar22 + 0x15c);
        pcVar19 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_059e62b4;
      }
      if ((unaff_x19[0x74] != 0) && (lVar22 = *(long *)(unaff_x19[0x74] + 0x38), lVar22 != 0)) {
        if (unaff_w24 < *(uint *)(lVar22 + 0x18)) {
          lVar22 = lVar22 + (ulong)unaff_w24 * 0x178;
LAB_059e6270:
          lVar26 = *unaff_x19;
          uVar37 = *(uint *)(lVar22 + 0x120);
          uVar33 = *(undefined4 *)(lVar22 + 0x15c);
          goto LAB_059e627c;
        }
        goto LAB_059e7774;
      }
      goto LAB_059e75b4;
    }
    if ((((bVar1) && ((int)unaff_w24 <= (int)in_stack_000001a0)) && ((uVar28 & 0xfffe) != 10)) &&
       (uVar28 != 0xd)) {
      if (unaff_w24 == in_stack_000001a0) {
        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar14 = System_Threading_Tasks_ThreadPoolTaskScheduler__TryExecuteTaskInline(uVar28,0);
        if ((uVar14 & 1) != 0) goto LAB_059e61cc;
      }
      if ((unaff_x19[0x74] != 0) && (lVar22 = *(long *)(unaff_x19[0x74] + 0x38), lVar22 != 0)) {
        if (unaff_w24 < *(uint *)(lVar22 + 0x18)) {
          lVar22 = lVar22 + (ulong)unaff_w24 * 0x178;
          in_stack_00000070 = *(float *)(lVar22 + 0x15c);
          fVar34 = in_stack_00000070;
          if (in_stack_00000180._4_4_ != 0.0) {
            fVar34 = in_stack_00000180._4_4_;
          }
          uVar15 = (ulong)(uint)fVar34;
          fVar44 = in_stack_00000160;
          if (in_stack_00000180._4_4_ != 0.0) {
            fVar44 = in_stack_00000148._4_4_;
          }
          uStack0000000000000068 = 0;
          uStack000000000000006c = *(undefined4 *)(lVar22 + 0x114);
          in_stack_00000088._4_4_ = *(undefined4 *)(lVar22 + 0x164);
          fStack0000000000000064 = in_stack_00000150;
          in_stack_00000148._4_4_ = fVar44;
          in_stack_00000180._4_4_ = fVar34;
          goto LAB_059e623c;
        }
        goto LAB_059e7774;
      }
      goto LAB_059e75b4;
    }
LAB_059e61cc:
    in_stack_00000168._4_4_ = 0;
  }
LAB_059e6300:
  unaff_x22 = 0x178;
  if ((unaff_x19[0x74] == 0) || (lVar22 = *(long *)(unaff_x19[0x74] + 0x38), lVar22 == 0))
  goto LAB_059e75b4;
  if (*(uint *)(lVar22 + 0x18) <= unaff_w24) goto LAB_059e7774;
  if (lVar21 == 0) goto LAB_059e75b4;
  uVar37 = *(uint *)(lVar22 + (ulong)unaff_w24 * 0x178 + 0x18c);
  fVar34 = (float)FUN_05d3d970(lVar21 + 0x28,0);
  if ((uVar37 >> 6 & 1) == 0) {
    if ((in_stack_00000188 & 1) != 0) {
      if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
      goto LAB_059e75b4;
      if (*(uint *)(lVar21 + 0x18) <= (uint)((long)(int)unaff_w24 + -1)) goto LAB_059e7774;
      lVar21 = lVar21 + ((long)(int)unaff_w24 + -1) * 0x178;
FUN_059e65b4:
      fVar44 = *(float *)(lVar21 + 0x144);
      lVar22 = *unaff_x19;
      uVar12 = *(uint *)(lVar21 + 0x120);
LAB_059e6810:
      param_5 = (ulong)uVar12;
      uVar15 = (ulong)(uint)in_stack_000000a0;
      uVar16 = (ulong)in_stack_00000090;
      (**(code **)(lVar22 + 0x908))
                (in_stack_00000098._4_4_,uVar15,uVar16,param_5,
                 in_stack_000000a8._4_4_ * fVar34 + fVar44,0,in_stack_000000a8._4_4_,
                 in_stack_000000a8._4_4_);
    }
LAB_059e684c:
    in_stack_00000188 = 0;
  }
  else {
    lVar22 = unaff_x19[0x74];
    if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_059e75b4;
    if (*(uint *)(lVar26 + 0x18) <= unaff_w24) goto LAB_059e7774;
    *(undefined4 *)(lVar26 + 0x20 + (ulong)unaff_w24 * 0x178 + 0x150) = in_stack_00001334;
    if ((((int)unaff_x19[0x6c] < (int)unaff_w24) || ((int)unaff_x19[0x6d] < (int)uVar13)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar26 + 0x20 + (ulong)unaff_w24 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6e])))) {
      uVar37 = 0;
    }
    else {
      uVar37 = 1;
    }
    if ((((((in_stack_00000188 | uVar37 ^ 0xffffffff) & 1) == 0) &&
         ((int)unaff_w24 <= (int)in_stack_000001a0)) && ((uVar28 & 0xfffe) != 10)) &&
       (uVar28 != 0xd)) {
      if (unaff_w24 == in_stack_000001a0) {
        if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar14 = System_Threading_Tasks_ThreadPoolTaskScheduler__TryExecuteTaskInline(uVar28,0);
        if ((uVar14 & 1) != 0) goto LAB_059e644c;
        lVar22 = unaff_x19[0x74];
        if (lVar22 == 0) goto LAB_059e75b4;
      }
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_059e75b4;
      if (*(uint *)(lVar22 + 0x18) <= unaff_w24) goto LAB_059e7774;
      lVar22 = lVar22 + (ulong)unaff_w24 * 0x178;
      in_stack_000000a8._4_4_ = *(float *)(lVar22 + 0x15c);
      fStack0000000000000050 = *(float *)(lVar22 + 0x144);
      uVar15 = (ulong)(uint)fStack0000000000000050;
      in_stack_000000a0 = fVar34 * in_stack_000000a8._4_4_ + fStack0000000000000050;
      uVar16 = (ulong)(uint)in_stack_000000a0;
      in_stack_00000090 = 0;
      fStack0000000000000054 = *(float *)(lVar22 + 0x58);
      in_stack_00000098._4_4_ = *(undefined4 *)(lVar22 + 0x114);
    }
    else {
LAB_059e644c:
      if ((in_stack_00000188 & 1) == 0) goto LAB_059e684c;
    }
    iVar11 = *(int *)(in_stack_000001d0 + 0x38);
    if (iVar11 == 1) {
LAB_059e658c:
      if ((unaff_x19[0x74] != 0) && (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 != 0)) {
        if (unaff_w24 < *(uint *)(lVar21 + 0x18)) {
          lVar21 = lVar21 + (ulong)unaff_w24 * 0x178;
          goto FUN_059e65b4;
        }
        goto LAB_059e7774;
      }
      goto LAB_059e75b4;
    }
    if (unaff_w24 == in_stack_00000120) {
      lVar21 = unaff_x19[0x74];
      if ((uVar28 != 0x200b & (bVar8 ^ 0xff)) == 0) goto LAB_059e65f0;
LAB_059e67d8:
      if ((lVar21 != 0) && (lVar21 = *(long *)(lVar21 + 0x38), lVar21 != 0)) {
        if (unaff_w24 < *(uint *)(lVar21 + 0x18)) {
          lVar21 = lVar21 + (ulong)unaff_w24 * 0x178;
LAB_059e67f4:
          fVar44 = *(float *)(lVar21 + 0x144);
          lVar22 = *unaff_x19;
          uVar12 = *(uint *)(lVar21 + 0x120);
          goto LAB_059e6810;
        }
        goto LAB_059e7774;
      }
      goto LAB_059e75b4;
    }
    if ((int)unaff_w24 < iVar11) {
      if ((unaff_x19[0x74] != 0) && (lVar22 = *(long *)(unaff_x19[0x74] + 0x38), lVar22 != 0)) {
        uVar2 = uVar12 + 2;
        if (uVar2 < *(uint *)(lVar22 + 0x18)) {
          if (*(float *)(lVar22 + 0x20 + (ulong)uVar2 * 0x178 + 0x38) == fStack0000000000000054) {
            fVar44 = *(float *)(lVar22 + 0x20 + (ulong)uVar2 * 0x178 + 0x124);
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<ExecuteCommandEvent>__
                        + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar15 = (ulong)(uint)fStack0000000000000050;
            uVar14 = FUN_059f9f44(fVar41 + fVar44,uVar15,0);
            if ((uVar14 & 1) != 0) {
              iVar11 = *(int *)(in_stack_000001d0 + 0x38);
              goto LAB_059e668c;
            }
          }
          lVar21 = unaff_x19[0x74];
          if ((int)unaff_w24 <= (int)in_stack_000001a0) goto LAB_059e67d8;
LAB_059e65f0:
          if ((lVar21 != 0) && (lVar21 = *(long *)(lVar21 + 0x38), lVar21 != 0)) {
            if (in_stack_000001a0 < *(uint *)(lVar21 + 0x18)) {
              lVar21 = lVar21 + (long)(int)in_stack_000001a0 * 0x178;
              goto LAB_059e67f4;
            }
            goto LAB_059e7774;
          }
          goto LAB_059e75b4;
        }
        goto LAB_059e7774;
      }
      goto LAB_059e75b4;
    }
LAB_059e668c:
    if ((int)unaff_w24 < iVar11) {
      iVar11 = FUN_05c91f88(lVar21,0);
      if (*(uint *)(unaff_x27 + 0x18) <= uVar12 + 2) goto LAB_059e7774;
      lVar21 = *(long *)(in_stack_00000190 + (ulong)(uVar12 + 2) * 0x178 + 0x20);
      if (lVar21 == 0) goto LAB_059e75b4;
      iVar10 = FUN_05c91f88(lVar21,0);
      if (iVar11 != iVar10) goto LAB_059e658c;
    }
    if (uVar37 == 0) {
      if ((unaff_x19[0x74] != 0) && (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 != 0)) {
        if ((uint)((long)(int)unaff_w24 + -1) < *(uint *)(lVar21 + 0x18)) {
          lVar21 = lVar21 + ((long)(int)unaff_w24 + -1) * 0x178;
          goto FUN_059e65b4;
        }
        goto LAB_059e7774;
      }
      goto LAB_059e75b4;
    }
    in_stack_00000188 = 1;
  }
  unaff_w28 = 0x60;
  if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
  goto LAB_059e75b4;
  uVar37 = (uint)*(undefined8 *)(lVar21 + 0x18);
  if (uVar37 <= unaff_w24) goto LAB_059e7774;
  unaff_x20 = in_stack_00000190;
  unaff_x23 = in_stack_000001d0;
  in_stack_000001c0 = uVar13;
  if ((*(byte *)(lVar21 + 0x20 + (ulong)unaff_w24 * 0x178 + 0x16d) >> 1 & 1) == 0) {
    if (bVar5) goto LAB_059e6bc8;
    goto LAB_059e6bfc;
  }
  if ((((int)unaff_x19[0x6c] < (int)unaff_w24) || ((int)unaff_x19[0x6d] < (int)uVar13)) ||
     (((int)unaff_x19[0x62] == 5 &&
      (*(int *)(lVar21 + 0x20 + (ulong)unaff_w24 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6e])))) {
    unaff_w21 = 0;
  }
  else {
    unaff_w21 = 1;
  }
  uVar12 = unaff_w24;
  if (bVar5) {
    fStack00000000000001b0 = fStack00000000000000f8;
    uVar24 = in_stack_00001320;
    uVar32 = in_stack_00001328;
    fVar34 = in_stack_00001330;
    goto LAB_059e69ac;
  }
  bVar5 = false;
  if ((((unaff_w21 == 0) || ((int)in_stack_000001a0 < (int)unaff_w24)) || ((uVar28 & 0xfffe) == 10))
     || (uVar28 == 0xd)) goto LAB_059e6c00;
  if (unaff_w24 == in_stack_000001a0) {
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar14 = System_Threading_Tasks_ThreadPoolTaskScheduler__TryExecuteTaskInline(uVar28,0);
    if ((uVar14 & 1) != 0) goto LAB_059e6bfc;
  }
  puVar6 = System_Collections_Generic_List<int>___TypeInfo;
  lVar22 = *(long *)System_Collections_Generic_List<int>___TypeInfo;
  if (*(int *)(lVar22 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar22 = *(long *)puVar6;
  }
  if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x38), lVar21 == 0))
  goto LAB_059e75b4;
  uVar37 = (uint)*(undefined8 *)(lVar21 + 0x18);
  if (uVar37 <= unaff_w24) goto LAB_059e7774;
  lVar26 = *(long *)(lVar22 + 0xb8);
  lVar22 = lVar21 + (ulong)unaff_w24 * 0x178;
  in_stack_000000e8 = *(float *)(lVar26 + 0x1728);
  fVar34 = *(float *)(lVar22 + 0x188);
  in_stack_000000d8._4_4_ = 0;
  fStack00000000000001b0 = *(float *)(lVar26 + 0x1720);
  in_stack_000000f0._4_4_ = *(float *)(lVar26 + 0x172c);
  in_stack_00000128._4_4_ = *(float *)(lVar26 + 0x1724);
  uVar32 = *(undefined8 *)(lVar22 + 0x180);
  uVar24 = *(undefined8 *)(lVar22 + 0x178);
LAB_059e69ac:
  if (uVar37 <= unaff_w24) goto LAB_059e7774;
  lVar21 = lVar21 + (ulong)unaff_w24 * 0x178;
  lVar22 = 0x118;
  if ((bVar8 & 1) == 0) {
    lVar22 = 0xf4;
  }
  fVar44 = *(float *)(lVar21 + 0x180);
  fVar46 = *(float *)(lVar21 + 0x184);
  in_stack_00001328 = *(undefined8 *)(lVar21 + 0x180);
  in_stack_00001330 = *(float *)(lVar21 + 0x188);
  in_stack_00001320 = *(undefined8 *)(lVar21 + 0x178);
  fVar47 = *(float *)(lVar21 + 0x120);
  unaff_s11 = *(float *)(lVar21 + 0x13c);
  unaff_s9 = *(float *)(lVar21 + 0x140);
  unaff_s10 = *(float *)(lVar21 + 0x148);
  param_2 = *(float *)(lVar21 + lVar22 + 0x20);
  in_stack_000001d8 = in_stack_00001320;
  fStack00000000000001e0 = fVar44;
  fStack00000000000001e4 = fVar46;
  in_stack_000001e8 = in_stack_00001330;
  uVar15 = FUN_059fb068(&stack0x000001f0,&stack0x000001d8,0);
  param_3 = (float)uVar32;
  if ((uVar15 & 1) == 0) {
    if ((bVar8 & 1) == 0) {
      unaff_s11 = fVar47;
    }
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    param_1 = &
              Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<CurveUtility_SampleProjectilePoint_00000447_PostfixBurstDelegate>__
    ;
    param_2 = param_2 - (float)((ulong)uVar24 >> 0x20);
    in_stack_00001320 = uVar24;
    in_stack_00001328 = uVar32;
    in_stack_00001330 = fVar34;
    goto code_r0x059e6b54;
  }
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
              + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (unaff_s10 <= in_stack_00000128._4_4_) {
    in_stack_00000128._4_4_ = unaff_s10;
  }
  uVar15 = (ulong)(uint)in_stack_00000128._4_4_;
  fStack00000000000000f8 = (param_2 + (in_stack_000000e8 - param_3)) * 0.5;
  param_5 = (ulong)(uint)fStack00000000000000f8;
  uVar16 = (ulong)in_stack_000000d8._4_4_;
  if (in_stack_000000f0._4_4_ <= unaff_s9) {
    in_stack_000000f0._4_4_ = unaff_s9;
  }
  (**(code **)(*unaff_x19 + 0x918))
            (fStack00000000000001b0,uVar15,uVar16,param_5,in_stack_000000f0._4_4_,
             in_stack_000000d8._4_4_);
  puVar6 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__;
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
              + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if ((bVar8 & 1) == 0) {
    unaff_s11 = fVar47;
  }
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  in_stack_00000128._4_4_ = unaff_s10 - in_stack_00001330;
  unaff_x22 = 0x178;
  in_stack_000000e8 = fVar44 + unaff_s11;
  in_stack_000000d8._4_4_ = 0;
  in_stack_000000f0._4_4_ = unaff_s9 + fVar46;
  goto LAB_059e6bb8;
  while( true ) {
    lVar21 = unaff_x19[0x74];
    lVar22 = lVar22 + 1;
    lVar26 = lVar26 + 0x50;
    if (lVar21 == 0) break;
LAB_059e7210:
    uVar15 = lVar22 + 1;
    if ((long)*(int *)(lVar21 + 0x34) <= (long)uVar15) {
LAB_059e75b8:
      if ((char)unaff_x19[0xdf] != '\0') {
        (**(code **)(*unaff_x19 + 0x798))();
      }
      if (*(int *)(*(long *)Oculus_Interaction_Input_IOneEuroFilter<Vector3>___TypeInfo + 0xe4) == 0
         ) {
        thunk_FUN_02b9ad44();
      }
      FUN_059f8f98();
      return;
    }
    lVar21 = *(long *)(lVar21 + 0x60);
    if (lVar21 == 0) break;
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*(uint *)(lVar21 + 0x18) <= uVar15) goto LAB_059e7774;
    FUN_05a44d0c(lVar21 + lVar26 + 0x70,0);
    lVar21 = unaff_x19[0xe4];
    if (lVar21 == 0) break;
    if (*(uint *)(lVar21 + 0x18) <= uVar15) goto LAB_059e7774;
    uVar24 = *(undefined8 *)(lVar21 + lVar22 * 8 + 0x28);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar16 = FUN_05c8e378(uVar24,0,0);
    if ((uVar16 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x354) != 0) {
        if ((unaff_x19[0x74] == 0) || (lVar21 = *(long *)(unaff_x19[0x74] + 0x60), lVar21 == 0))
        break;
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (*(uint *)(lVar21 + 0x18) <= uVar15) {
LAB_059e7774:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        FUN_05a44e30(lVar21 + lVar26 + 0x70,1,0);
      }
      lVar21 = unaff_x19[0xe4];
      if (lVar21 == 0) break;
      if (*(uint *)(lVar21 + 0x18) <= uVar15) goto LAB_059e7774;
      lVar21 = *(long *)(lVar21 + lVar22 * 8 + 0x28);
      if (lVar21 == 0) break;
      lVar21 = FUN_05a4f064(lVar21,0);
      if ((unaff_x19[0x74] == 0) || (lVar20 = *(long *)(unaff_x19[0x74] + 0x60), lVar20 == 0))
      break;
      if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_059e7774;
      if (lVar21 == 0) break;
      FUN_05c63824(lVar21,*(undefined8 *)(lVar20 + lVar26 + 0x80),0);
      lVar21 = unaff_x19[0xe4];
      if (lVar21 == 0) break;
      if (*(uint *)(lVar21 + 0x18) <= uVar15) goto LAB_059e7774;
      lVar21 = *(long *)(lVar21 + lVar22 * 8 + 0x28);
      if (lVar21 == 0) break;
      lVar21 = FUN_05a4f064(lVar21,0);
      if ((unaff_x19[0x74] == 0) || (lVar20 = *(long *)(unaff_x19[0x74] + 0x60), lVar20 == 0))
      break;
      if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_059e7774;
      if (lVar21 == 0) break;
      FUN_05c64b60(lVar21,0,*(undefined8 *)(lVar20 + lVar26 + 0x98),0);
      lVar21 = unaff_x19[0xe4];
      if (lVar21 == 0) break;
      if (*(uint *)(lVar21 + 0x18) <= uVar15) goto LAB_059e7774;
      lVar21 = *(long *)(lVar21 + lVar22 * 8 + 0x28);
      if (lVar21 == 0) break;
      lVar21 = FUN_05a4f064(lVar21,0);
      if ((unaff_x19[0x74] == 0) || (lVar20 = *(long *)(unaff_x19[0x74] + 0x60), lVar20 == 0))
      break;
      if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_059e7774;
      if (lVar21 == 0) break;
      FUN_05c63a88(lVar21,*(undefined8 *)(lVar20 + lVar26 + 0xa0),0);
      lVar21 = unaff_x19[0xe4];
      if (lVar21 == 0) break;
      if (*(uint *)(lVar21 + 0x18) <= uVar15) goto LAB_059e7774;
      lVar21 = *(long *)(lVar21 + lVar22 * 8 + 0x28);
      if (lVar21 == 0) break;
      lVar21 = FUN_05a4f064(lVar21,0);
      if ((unaff_x19[0x74] == 0) || (lVar20 = *(long *)(unaff_x19[0x74] + 0x60), lVar20 == 0))
      break;
      if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_059e7774;
      if (lVar21 == 0) break;
      FUN_05c63ddc(lVar21,*(undefined8 *)(lVar20 + lVar26 + 0xa8),0);
      lVar21 = unaff_x19[0xe4];
      if (lVar21 == 0) break;
      if (*(uint *)(lVar21 + 0x18) <= uVar15) goto LAB_059e7774;
      lVar21 = *(long *)(lVar21 + lVar22 * 8 + 0x28);
      if ((lVar21 == 0) || (lVar21 = FUN_05a4f064(lVar21,0), lVar21 == 0)) break;
      FUN_05c66864(lVar21,0);
      lVar21 = unaff_x19[0xe4];
      if (lVar21 == 0) break;
      if (*(uint *)(lVar21 + 0x18) <= uVar15) goto LAB_059e7774;
      lVar21 = *(long *)(lVar21 + lVar22 * 8 + 0x28);
      if (lVar21 == 0) break;
      lVar21 = FUN_05d91928(lVar21,0);
      lVar20 = unaff_x19[0xe4];
      if (lVar20 == 0) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_059e7774;
      lVar20 = *(long *)(lVar20 + lVar22 * 8 + 0x28);
      if ((lVar20 == 0) || (uVar24 = FUN_05a4f064(lVar20,0), lVar21 == 0)) break;
      FUN_05f6baf8(lVar21,uVar24,0);
      lVar21 = unaff_x19[0xe4];
      if (lVar21 == 0) break;
      if (*(uint *)(lVar21 + 0x18) <= uVar15) goto LAB_059e7774;
      lVar21 = *(long *)(lVar21 + lVar22 * 8 + 0x28);
      if ((lVar21 == 0) || (lVar21 = FUN_05d91928(lVar21,0), lVar21 == 0)) break;
      FUN_05f6af00(uVar31,uVar33,uVar35,uVar38,lVar21,0);
      lVar21 = unaff_x19[0xe4];
      if (lVar21 == 0) break;
      if (*(uint *)(lVar21 + 0x18) <= uVar15) goto LAB_059e7774;
      lVar21 = *(long *)(lVar21 + lVar22 * 8 + 0x28);
      if ((lVar21 == 0) || (lVar21 = FUN_05d91928(lVar21,0), lVar21 == 0)) break;
      FUN_05f6acc4(lVar21,uVar12 & 1,0);
      lVar21 = unaff_x19[0xe4];
      if (lVar21 == 0) break;
      if (*(uint *)(lVar21 + 0x18) <= uVar15) goto LAB_059e7774;
      plVar25 = *(long **)(lVar21 + lVar22 * 8 + 0x28);
      uVar13 = (**(code **)(*unaff_x19 + 0x2b8))();
      if (plVar25 == (long *)0x0) break;
      (**(code **)(*plVar25 + 0x2c8))(plVar25,uVar13 & 1,*(undefined8 *)(*plVar25 + 0x2d0));
    }
  }
LAB_059e75b4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


