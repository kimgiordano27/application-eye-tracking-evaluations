/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor$$CaptureAttachPose
ENTRY_POINT: 02497b90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_15;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_1;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__CaptureAttachPose
               (undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  char cVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *unaff_x19;
  int *unaff_x20;
  long unaff_x21;
  undefined8 uVar19;
  long *plVar20;
  uint uVar21;
  int unaff_w22;
  uint unaff_w23;
  long lVar22;
  uint unaff_w24;
  uint unaff_w25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  int unaff_w29;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float unaff_s13;
  float fVar34;
  float fVar35;
  float unaff_s15;
  uint uStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  int iStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  int in_stack_00000040;
  undefined8 in_stack_00000048;
  float fStack0000000000000050;
  uint uStack0000000000000054;
  undefined4 uStack0000000000000058;
  float fStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 in_stack_00000080;
  float in_stack_00000088;
  undefined8 in_stack_00000090;
  float in_stack_00000098;
  uint uStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  int iStack00000000000000ac;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  long in_stack_000000b8;
  undefined8 in_stack_000000c0;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  uint uStack00000000000000e8;
  uint uStack00000000000000ec;
  uint uStack00000000000000f0;
  uint uStack00000000000000f4;
  uint in_stack_00000100;
  float in_stack_00000110;
  long in_stack_00000120;
  long in_stack_00000128;
  undefined8 in_stack_00000130;
  uint in_stack_00000138;
  uint in_stack_00000140;
  int *in_stack_00000148;
  long *in_stack_00000150;
  undefined8 in_stack_00000158;
  float fStack0000000000000160;
  float fStack0000000000000164;
  float in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  float in_stack_00000180;
  undefined8 in_stack_00001790;
  undefined8 in_stack_00001798;
  float in_stack_000017a0;
  undefined4 in_stack_000017a4;
  
  uVar26 = in_stack_00000130._4_4_;
code_r0x02497b90:
  in_stack_00000130._4_4_ = uVar26;
  uVar11 = FUN_016f68bc(unaff_w25,0);
  if ((unaff_w25 != 0x200b) && ((uVar11 & 1) == 0)) {
    lVar14 = *unaff_x26;
    if ((lVar14 == 0) || (lVar17 = *(long *)(lVar14 + 0x38), lVar17 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar17 + 0x18) <= unaff_w23)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar23 = *(float *)(lVar17 + unaff_x27 * unaff_x28 + 0x160);
    if (unaff_s15 <= fVar23) {
      unaff_s15 = fVar23;
    }
    if (fStack00000000000000cc <= ABS(unaff_s13)) {
      fStack00000000000000cc = ABS(unaff_s13);
    }
    if (unaff_w22 != in_stack_00000048._4_4_) {
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar14 = *unaff_x26;
        if (lVar14 == 0) goto LAB_0249920c;
        lVar17 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
      }
      else {
        lVar17 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
      }
      in_stack_000000d0 = *(float *)(lVar17 + 0x15a8);
    }
    lVar14 = *(long *)(lVar14 + 0x38);
    if (lVar14 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar14 + 0x18) <= unaff_w23)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (unaff_x19[0x1e] == 0) goto LAB_0249920c;
    fVar31 = *(float *)(lVar14 + unaff_x27 * unaff_x28 + 0x14c);
    fVar23 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
    fVar31 = fVar31 + unaff_s15 * fVar23;
    if (fVar31 <= in_stack_000000d0) {
      in_stack_000000d0 = fVar31;
    }
    param_2 = (ulong)(uint)in_stack_000000d0;
    in_stack_00000048._4_4_ = unaff_w22;
  }
  uVar26 = (uint)in_stack_00000120;
  uVar10 = in_stack_00000140;
  if ((uStack00000000000000f4 & 1) == 0) {
    uStack00000000000000f4 = 0;
    if (in_stack_00000138 == 0xd) goto LAB_024980d0;
    if ((in_stack_00000138 | 1) == 0xb) goto LAB_024980d0;
    if ((int)uVar26 < (int)unaff_w23) goto LAB_024980d0;
    if (((in_stack_00000100 ^ 1) & 1) != 0) goto LAB_024980d0;
    if (unaff_w23 == uVar26) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_016fa418(in_stack_00000138,0);
      if ((uVar11 & 1) != 0) goto LAB_02497fc4;
    }
    if ((*unaff_x26 == 0) || (lVar14 = *(long *)(*unaff_x26 + 0x38), lVar14 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar14 + 0x18) <= unaff_w23)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar14 = lVar14 + unaff_x27 * 0x178;
    fStack000000000000005c = *(float *)(lVar14 + 0x160);
    uStack0000000000000058 = *(undefined4 *)(lVar14 + 0x11c);
    bVar7 = unaff_s15 != 0.0;
    fVar23 = fStack000000000000005c;
    if (bVar7) {
      fVar23 = unaff_s15;
    }
    unaff_s15 = fVar23;
    in_stack_00000060 = *(undefined4 *)(lVar14 + 0x168);
    uStack0000000000000054 = 0;
    fVar23 = unaff_s13;
    if (bVar7) {
      fVar23 = fStack00000000000000cc;
    }
    param_2 = (ulong)(uint)fVar23;
    fStack0000000000000050 = in_stack_000000d0;
    fStack00000000000000cc = fVar23;
  }
  if (*unaff_x20 == 1) {
    if ((*unaff_x26 == 0) || (lVar14 = *(long *)(*unaff_x26 + 0x38), lVar14 == 0))
    goto LAB_0249920c;
    if (unaff_w23 < *(uint *)(lVar14 + 0x18)) {
      lVar14 = lVar14 + unaff_x27 * 0x178;
      lVar17 = *unaff_x19;
      uVar26 = *(uint *)(lVar14 + 0x128);
      uVar30 = *(undefined4 *)(lVar14 + 0x160);
      goto LAB_0249805c;
    }
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  }
  if ((unaff_w23 == (uint)in_stack_000000b8) || ((int)uVar26 <= (int)unaff_w23)) {
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar11 = FUN_016f68bc(in_stack_00000138,0);
    if ((*unaff_x26 == 0) || (lVar14 = *(long *)(*unaff_x26 + 0x38), lVar14 == 0))
    goto LAB_0249920c;
    if (in_stack_00000138 == 0x200b || (uVar11 & 1) != 0) {
      lVar17 = in_stack_00000120;
      if (*(uint *)(lVar14 + 0x18) <= uVar26)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    }
    else {
      lVar17 = unaff_x27;
      if (*(uint *)(lVar14 + 0x18) <= unaff_w23)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    }
    lVar14 = lVar14 + lVar17 * 0x178;
    uVar26 = *(uint *)(lVar14 + 0x128);
    uVar30 = *(undefined4 *)(lVar14 + 0x160);
    pcVar15 = *(code **)(*unaff_x19 + 0x908);
LAB_02498064:
    param_4 = (ulong)uVar26;
    param_2 = (ulong)(uint)fStack0000000000000050;
    param_3 = (ulong)uStack0000000000000054;
    (*pcVar15)(uStack0000000000000058,param_2,param_3,param_4,in_stack_000000d0,0,
               fStack000000000000005c,uVar30);
    puVar5 = System_Threading_Mutex_TypeInfo;
    lVar14 = *(long *)System_Threading_Mutex_TypeInfo;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar14 = *(long *)puVar5;
    }
LAB_024980b4:
    uStack00000000000000f4 = 0;
    unaff_s15 = 0.0;
    in_stack_000000d0 = *(float *)(*(long *)(lVar14 + 0xb8) + 0x15a8);
    fStack00000000000000cc = 0.0;
    uVar10 = in_stack_00000140;
LAB_024980d0:
    do {
      if ((*unaff_x26 == 0) || (lVar14 = *(long *)(*unaff_x26 + 0x38), lVar14 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar14 + 0x18) <= unaff_w23)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (in_stack_000000d8 == 0) goto LAB_0249920c;
      uVar26 = *(uint *)(lVar14 + unaff_x27 * 0x178 + 400);
      fVar23 = (float)FUN_026fd1f0(in_stack_000000d8 + 0x50,0);
      uVar21 = (uint)in_stack_00000120;
      if ((uVar26 >> 6 & 1) == 0) {
        if ((uStack00000000000000f0 & 1) != 0) {
          if ((*unaff_x26 == 0) || (lVar14 = *(long *)(*unaff_x26 + 0x38), lVar14 == 0))
          goto LAB_0249920c;
          if (*(uint *)(lVar14 + 0x18) <= in_stack_00000130._4_4_ - 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar26 = *(uint *)(lVar14 + unaff_x21 + -0x330);
          pcVar15 = *(code **)(*unaff_x19 + 0x908);
          fVar31 = in_stack_00000088 * fVar23 + *(float *)(lVar14 + unaff_x21 + -0x30c);
LAB_02498648:
          param_4 = (ulong)uVar26;
          param_2 = (ulong)(uint)in_stack_00000078._4_4_;
          param_3 = (ulong)in_stack_00000068._4_4_;
          (*pcVar15)(in_stack_00000080,param_2,param_3,param_4,fVar31,0,in_stack_00000088,
                     in_stack_00000088);
        }
LAB_0249867c:
        uStack00000000000000f0 = 0;
      }
      else {
        lVar14 = *unaff_x26;
        if ((lVar14 == 0) || (lVar17 = *(long *)(lVar14 + 0x38), lVar17 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar17 + 0x18) <= unaff_w23)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(undefined4 *)(lVar17 + unaff_x27 * 0x178 + 0x174) = in_stack_000017a4;
        if ((((int)unaff_x19[100] < (int)unaff_w23) || ((int)unaff_x19[0x65] < (int)uVar10)) ||
           (((int)unaff_x19[0x5b] == 5 &&
            (*(int *)(lVar17 + unaff_x27 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if ((((in_stack_00000138 == 0xd) || ((in_stack_00000138 | 1) == 0xb)) ||
            ((int)uVar21 < (int)unaff_w23)) || ((uStack00000000000000f0 & 1) != 0 || !bVar7)) {
LAB_02498228:
          if ((uStack00000000000000f0 & 1) == 0) goto LAB_0249867c;
        }
        else {
          if (unaff_w23 == uVar21) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar11 = FUN_016fa418(in_stack_00000138,0);
            if ((uVar11 & 1) != 0) goto LAB_02498228;
            lVar14 = *unaff_x26;
            if (lVar14 == 0) goto LAB_0249920c;
          }
          lVar14 = *(long *)(lVar14 + 0x38);
          if (lVar14 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar14 + 0x18) <= unaff_w23)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar14 = lVar14 + unaff_x27 * 0x178;
          fStack0000000000000034 = *(float *)(lVar14 + 0x60);
          in_stack_00000088 = *(float *)(lVar14 + 0x160);
          fStack0000000000000030 = *(float *)(lVar14 + 0x14c);
          param_2 = (ulong)(uint)fStack0000000000000030;
          in_stack_00000080 = *(undefined4 *)(lVar14 + 0x11c);
          in_stack_00000078._4_4_ = fVar23 * in_stack_00000088 + fStack0000000000000030;
          in_stack_00000068._4_4_ = 0;
        }
        iVar9 = *unaff_x20;
        if (iVar9 == 1) {
LAB_024983ac:
          if ((*unaff_x26 != 0) && (lVar14 = *(long *)(*unaff_x26 + 0x38), lVar14 != 0)) {
            if (unaff_w23 < *(uint *)(lVar14 + 0x18)) {
              lVar14 = lVar14 + unaff_x27 * 0x178;
              lVar17 = *unaff_x19;
              uVar26 = *(uint *)(lVar14 + 0x128);
              fVar31 = *(float *)(lVar14 + 0x14c);
LAB_024983d8:
              pcVar15 = *(code **)(lVar17 + 0x908);
FUN_02498644:
              fVar31 = fVar23 * in_stack_00000088 + fVar31;
              goto LAB_02498648;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          goto LAB_0249920c;
        }
        if (unaff_w23 == (uint)in_stack_000000b8) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_016f68bc(in_stack_00000138,0);
          if ((*unaff_x26 != 0) && (lVar14 = *(long *)(*unaff_x26 + 0x38), lVar14 != 0)) {
            uVar26 = *(uint *)(lVar14 + 0x18);
            if (in_stack_00000138 == 0x200b || (uVar11 & 1) != 0) {
              if (uVar26 <= uVar21)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            }
            else {
LAB_02498620:
              in_stack_00000120 = unaff_x27;
              if (uVar26 <= unaff_w23)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            }
LAB_02498628:
            lVar14 = lVar14 + in_stack_00000120 * 0x178;
            fVar31 = *(float *)(lVar14 + 0x14c);
            uVar26 = *(uint *)(lVar14 + 0x128);
            pcVar15 = *(code **)(*unaff_x19 + 0x908);
            goto FUN_02498644;
          }
          goto LAB_0249920c;
        }
        if ((int)unaff_w23 < iVar9) {
          lVar14 = *unaff_x26;
          if ((lVar14 != 0) && (lVar17 = *(long *)(lVar14 + 0x38), lVar17 != 0)) {
            if (in_stack_00000130._4_4_ < *(uint *)(lVar17 + 0x18)) {
              if (*(float *)(lVar17 + unaff_x21 + -0x108) == fStack0000000000000034) {
                fVar31 = *(float *)(lVar17 + unaff_x21 + -0x1c);
                if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                param_2 = (ulong)(uint)fStack0000000000000030;
                uVar11 = FUN_024aa280(in_stack_00000110 + fVar31,param_2,0);
                if ((uVar11 & 1) != 0) {
                  iVar9 = *unaff_x20;
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
                  ;
                }
                lVar14 = *unaff_x26;
                if (lVar14 == 0) goto LAB_0249920c;
              }
              lVar14 = *(long *)(lVar14 + 0x38);
              if (lVar14 != 0) {
                uVar26 = *(uint *)(lVar14 + 0x18);
                if ((int)unaff_w23 <= (int)uVar21) goto LAB_02498620;
                if (uVar21 < uVar26) goto LAB_02498628;
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              }
              goto LAB_0249920c;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          goto LAB_0249920c;
        }

        UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
        :
        if ((int)unaff_w23 < iVar9) {
          iVar9 = FUN_02681c0c(in_stack_000000d8,0);
          if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar14 = *(long *)(in_stack_00000128 + in_stack_000000e0 + -0x130);
          if (lVar14 == 0) goto LAB_0249920c;
          iVar8 = FUN_02681c0c(lVar14,0);
          unaff_x21 = in_stack_000000e0;
          if (iVar9 != iVar8) goto LAB_024983ac;
        }
        if (!bVar7) {
          if ((*unaff_x26 != 0) && (lVar14 = *(long *)(*unaff_x26 + 0x38), lVar14 != 0)) {
            if (in_stack_00000130._4_4_ - 2 < *(uint *)(lVar14 + 0x18)) {
              lVar17 = *unaff_x19;
              uVar26 = *(uint *)(lVar14 + unaff_x21 + -0x330);
              fVar31 = *(float *)(lVar14 + unaff_x21 + -0x30c);
              goto LAB_024983d8;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          goto LAB_0249920c;
        }
        uStack00000000000000f0 = 1;
      }
      if ((*unaff_x26 == 0) || (lVar14 = *(long *)(*unaff_x26 + 0x38), lVar14 == 0))
      goto LAB_0249920c;
      uVar26 = (uint)*(undefined8 *)(lVar14 + 0x18);
      if (uVar26 <= unaff_w23)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if ((*(byte *)(lVar14 + unaff_x27 * 0x178 + 0x191) >> 1 & 1) == 0) {
        if ((uStack00000000000000ec & 1) != 0) {
          param_3 = (ulong)uStack00000000000000a0;
          param_4 = (ulong)(uint)fStack00000000000000a4;
          param_2 = (ulong)(uint)fStack00000000000000b4;
          (**(code **)(*unaff_x19 + 0x918))
                    (fStack00000000000000b0,param_2,param_3,param_4,fStack00000000000000a8,param_3);
        }
LAB_024986e8:
        uStack00000000000000ec = 0;
      }
      else {
        if ((((int)unaff_x19[100] < (int)unaff_w23) || ((int)unaff_x19[0x65] < (int)uVar10)) ||
           (((int)unaff_x19[0x5b] == 5 &&
            (*(int *)(lVar14 + unaff_x27 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if ((uStack00000000000000ec & 1) == 0) {
          if ((((in_stack_00000138 == 0xd) || ((in_stack_00000138 | 1) == 0xb)) ||
              ((int)uVar21 < (int)unaff_w23)) || (!bVar7)) goto LAB_024986e8;
          if (unaff_w23 == uVar21) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar11 = FUN_016fa418(in_stack_00000138,0);
            if ((uVar11 & 1) != 0) goto LAB_024986e8;
          }
          puVar5 = System_Threading_Mutex_TypeInfo;
          lVar17 = *(long *)System_Threading_Mutex_TypeInfo;
          if (*(int *)(lVar17 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar17 = *(long *)puVar5;
          }
          if ((*unaff_x26 == 0) || (lVar14 = *(long *)(*unaff_x26 + 0x38), lVar14 == 0))
          goto LAB_0249920c;
          uVar26 = (uint)*(undefined8 *)(lVar14 + 0x18);
          if (uVar26 <= unaff_w23)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar17 = *(long *)(lVar17 + 0xb8);
          lVar22 = lVar14 + unaff_x27 * 0x178;
          in_stack_00001798 = *(undefined8 *)(lVar22 + 0x184);
          in_stack_00001790 = *(undefined8 *)(lVar22 + 0x17c);
          fStack00000000000000b0 = *(float *)(lVar17 + 0x1598);
          in_stack_000017a0 = *(float *)(lVar22 + 0x18c);
          fStack00000000000000b4 = *(float *)(lVar17 + 0x159c);
          fStack00000000000000a4 = *(float *)(lVar17 + 0x15a0);
          fStack00000000000000a8 = *(float *)(lVar17 + 0x15a4);
          uStack00000000000000a0 = 0;
        }
        if (uVar26 <= unaff_w23)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar14 = lVar14 + unaff_x27 * 0x178;
        fVar27 = *(float *)(lVar14 + 0x188);
        uVar19 = *(undefined8 *)(lVar14 + 0x17c);
        fVar32 = *(float *)(lVar14 + 0x184);
        uVar24 = *(undefined8 *)(lVar14 + 0x184);
        fVar28 = *(float *)(lVar14 + 0x18c);
        fVar23 = *(float *)(lVar14 + 0x11c);
        fVar25 = *(float *)(lVar14 + 0x128);
        fVar29 = *(float *)(lVar14 + 0x148);
        fVar31 = *(float *)(lVar14 + 0x150);
        in_stack_00000158 = uVar19;
        fStack0000000000000160 = fVar32;
        fStack0000000000000164 = fVar27;
        in_stack_00000168 = fVar28;
        in_stack_00000170 = in_stack_00001790;
        in_stack_00000178 = in_stack_00001798;
        in_stack_00000180 = in_stack_000017a0;
        uVar11 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
        lVar14 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
        if ((uVar11 & 1) == 0) {
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar14);
          }
          fVar23 = fVar23 - (float)((ulong)in_stack_00001790 >> 0x20);
          if (fVar23 <= fStack00000000000000b0) {
            fStack00000000000000b0 = fVar23;
          }
          fVar31 = fVar31 - in_stack_000017a0;
          param_2 = (ulong)(uint)fVar31;
          fVar25 = fVar25 + (float)in_stack_00001798;
          param_3 = (ulong)(uint)fVar25;
          if (fVar31 <= fStack00000000000000b4) {
            fStack00000000000000b4 = fVar31;
          }
          fVar29 = fVar29 + (float)((ulong)in_stack_00001798 >> 0x20);
          param_4 = (ulong)(uint)fVar29;
          if (fStack00000000000000a4 <= fVar25) {
            fStack00000000000000a4 = fVar25;
          }
          if (fStack00000000000000a8 <= fVar29) {
            fStack00000000000000a8 = fVar29;
          }
        }
        else {
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar14);
          }
          fVar23 = (fVar23 + (fStack00000000000000a4 - (float)in_stack_00001798)) * 0.5;
          param_4 = (ulong)(uint)fVar23;
          if (fVar31 <= fStack00000000000000b4) {
            fStack00000000000000b4 = fVar31;
          }
          param_2 = (ulong)(uint)fStack00000000000000b4;
          param_3 = (ulong)uStack00000000000000a0;
          if (fStack00000000000000a8 <= fVar29) {
            fStack00000000000000a8 = fVar29;
          }
          (**(code **)(*unaff_x19 + 0x918))
                    (fStack00000000000000b0,param_2,param_3,param_4,fStack00000000000000a8,param_3);
          fStack00000000000000b4 = fVar31 - fVar28;
          fStack00000000000000a4 = fVar25 + fVar32;
          uStack00000000000000a0 = 0;
          fStack00000000000000a8 = fVar29 + fVar27;
          fStack00000000000000b0 = fVar23;
          in_stack_00001790 = uVar19;
          in_stack_00001798 = uVar24;
          in_stack_000017a0 = fVar28;
        }
        if (((*unaff_x20 == 1) || (unaff_w23 == (uint)in_stack_000000b8)) ||
           (((int)uVar21 <= (int)unaff_w23 || (!bVar7)))) {
          param_3 = (ulong)uStack00000000000000a0;
          param_4 = (ulong)(uint)fStack00000000000000a4;
          param_2 = (ulong)(uint)fStack00000000000000b4;
          (**(code **)(*unaff_x19 + 0x918))
                    (fStack00000000000000b0,param_2,param_3,param_4,fStack00000000000000a8,param_3);
          uStack00000000000000ec = 0;
        }
        else {
          uStack00000000000000ec = 1;
        }
      }
      puVar6 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      puVar5 = PTR_DAT_033ed410;
      iVar9 = *unaff_x20;
      uVar26 = in_stack_00000130._4_4_ + 1;
      unaff_w29 = unaff_w29 + 1;
      unaff_x21 = unaff_x21 + 0x178;
      if (iVar9 <= (int)in_stack_00000130._4_4_) {
        lVar14 = *unaff_x26;
        if (lVar14 == 0) goto LAB_0249920c;
        *(int *)(lVar14 + 0x18) = iVar9;
        lVar17 = unaff_x19[0xd3];
        *(uint *)(lVar14 + 0x2c) = uVar10 + 1;
        iVar8 = iStack00000000000000ac;
        if (iVar9 < 1) {
          iVar8 = 1;
        }
        if (iStack00000000000000ac == 0) {
          iVar8 = 1;
        }
        *(int *)(lVar14 + 0x1c) = (int)lVar17;
        *(int *)(lVar14 + 0x24) = iVar8;
        *(int *)(lVar14 + 0x30) = (int)unaff_x19[0x95] + 1;
        if (((int)unaff_x19[0x62] != 0xff) ||
           (uVar11 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar11 & 1) == 0)) goto LAB_02496098;
        lVar14 = unaff_x19[0xde];
        if (lVar14 != 0) {
          (**(code **)(lVar14 + 0x18))
                    (*(undefined8 *)(lVar14 + 0x40),*unaff_x26,*(undefined8 *)(lVar14 + 0x28));
        }
        if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
        iVar9 = FUN_02859dc4(unaff_x19[0xe4],0);
        if (iVar9 != 0x19) {
          lVar14 = unaff_x19[0xe4];
          if (lVar14 == 0) goto LAB_0249920c;
          uVar26 = FUN_02859dc4(lVar14,0);
          FUN_02859e00(lVar14,uVar26 | 0x19,0);
        }
        if (*(int *)((long)unaff_x19 + 0x314) != 0) {
          if ((*unaff_x26 == 0) || (lVar14 = *(long *)(*unaff_x26 + 0x60), lVar14 == 0))
          goto LAB_0249920c;
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (*(int *)(lVar14 + 0x18) == 0)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          FUN_024e8000(lVar14 + 0x20,1,0);
        }
        if (unaff_x19[0x73] == 0) goto LAB_0249920c;
        UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                  (unaff_x19[0x73],0);
        if ((unaff_x19[0x6c] == 0) || (lVar14 = *(long *)(unaff_x19[0x6c] + 0x60), lVar14 == 0))
        goto LAB_0249920c;
        if (*(int *)(lVar14 + 0x18) == 0)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0x73] == 0) goto LAB_0249920c;
        FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar14 + 0x30),0);
        if ((unaff_x19[0x6c] == 0) || (lVar14 = *(long *)(unaff_x19[0x6c] + 0x60), lVar14 == 0))
        goto LAB_0249920c;
        if (*(int *)(lVar14 + 0x18) == 0)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0x73] == 0) goto LAB_0249920c;
        FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar14 + 0x48),0);
        if ((unaff_x19[0x6c] == 0) || (lVar14 = *(long *)(unaff_x19[0x6c] + 0x60), lVar14 == 0))
        goto LAB_0249920c;
        if (*(int *)(lVar14 + 0x18) == 0)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0x73] == 0) goto LAB_0249920c;
        FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar14 + 0x50),0);
        if ((unaff_x19[0x6c] == 0) || (lVar14 = *(long *)(unaff_x19[0x6c] + 0x60), lVar14 == 0))
        goto LAB_0249920c;
        if (*(int *)(lVar14 + 0x18) == 0)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0x73] == 0) goto LAB_0249920c;
        FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar14 + 0x58),0);
        if (unaff_x19[0x73] == 0) goto LAB_0249920c;
        FUN_0266ed90(unaff_x19[0x73],0);
        if (unaff_x19[0xe3] == 0) goto LAB_0249920c;
        FUN_02858f1c(unaff_x19[0xe3],unaff_x19[0x73],0);
        if (unaff_x19[0xe3] == 0) goto LAB_0249920c;
        uVar24 = FUN_02858bac(unaff_x19[0xe3],0);
        if (unaff_x19[0xe3] == 0) goto LAB_0249920c;
        uVar26 = FUN_02858a14(unaff_x19[0xe3],0);
        lVar14 = *unaff_x26;
        if (lVar14 == 0) goto LAB_0249920c;
        lVar22 = 0;
        lVar17 = 0;
        goto LAB_02498e6c;
      }
      if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if ((*unaff_x26 == 0) || (lVar14 = *(long *)(*unaff_x26 + 0x50), lVar14 == 0))
      goto LAB_0249920c;
      unaff_x27 = (long)(int)in_stack_00000130._4_4_;
      lVar17 = in_stack_00000128 + unaff_x27 * 0x178;
      in_stack_00000140 = *(uint *)(lVar17 + 100);
      if (*(uint *)(lVar14 + 0x18) <= in_stack_00000140)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      in_stack_000000d8 = *(long *)(lVar17 + 0x38);
      uVar2 = *(ushort *)(lVar17 + 0x20);
      lVar17 = (long)(int)in_stack_00000140;
      lVar14 = lVar14 + lVar17 * 0x5c;
      uVar4 = *(uint *)(lVar14 + 0x3c);
      in_stack_000000b8 = (long)(int)uVar4;
      iVar9 = *(int *)(lVar14 + 0x28);
      iVar8 = *(int *)(lVar14 + 0x2c);
      in_stack_00000120 = (long)*(int *)(lVar14 + 0x40);
      uVar21 = *(uint *)(lVar14 + 0x68);
      fVar33 = *(float *)(lVar14 + 0x5c);
      fVar35 = *(float *)(lVar14 + 0x60);
      iVar1 = *(int *)(lVar14 + 0x20);
      fVar25 = *(float *)(lVar14 + 0x4c);
      fVar27 = *(float *)(lVar14 + 0x54);
      fVar23 = *(float *)(lVar14 + 0x58);
      fVar32 = *(float *)(lVar14 + 0x6c);
      fVar28 = *(float *)(lVar14 + 0x70);
      fVar31 = *(float *)(lVar14 + 0x74);
      fVar29 = *(float *)(lVar14 + 0x78);
      fVar34 = fVar33 + fVar35;
      unaff_w25 = (uint)uVar2;
      if ((int)uVar21 < 9) {
        switch(uVar21) {
        case 1:
          if ((char)unaff_x19[0x1d] == '\0') {
            fStack00000000000000c8 = fVar35 + 0.0;
          }
          else {
            fStack00000000000000c8 = 0.0 - fVar23;
          }
          break;
        case 2:
LAB_02496c1c:
          fStack00000000000000c8 = (fVar35 + fVar33 * 0.5) - fVar23 * 0.5;
          break;
        default:
          goto switchD_02496b58_caseD_3;
        case 4:
          fStack00000000000000c8 = fVar34 - fVar23;
          if ((char)unaff_x19[0x1d] != '\0') {
            fStack00000000000000c8 = fVar34;
          }
          break;
        case 8:
          goto switchD_02496b58_caseD_8;
        }
LAB_02496c90:
        in_stack_000000c0 = 0;
      }
      else if (uVar21 == 0x10) {
switchD_02496b58_caseD_8:
        if (uVar2 < 0xad) {
          if ((unaff_w25 != 3) && (unaff_w25 != 10)) goto LAB_02496bac;
        }
        else if ((unaff_w25 != 0xad) && ((unaff_w25 != 0x200b && (unaff_w25 != 0x2060)))) {
LAB_02496bac:
          if (*(uint *)(in_stack_00000128 + 0x18) <= uVar4)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar3 = *(undefined2 *)(in_stack_00000128 + in_stack_000000b8 * 0x178 + 0x20);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_016f9f84(uVar3,0);
          if ((uVar11 & 1) == 0) {
            bVar7 = (int)in_stack_00000140 < (int)unaff_x19[0x94];
          }
          else {
            bVar7 = false;
          }
          if ((fVar23 <= fVar33) && (!bVar7 && (uVar21 >> 4 & 1) == 0)) {
            fStack00000000000000c8 = fVar35;
            if ((char)unaff_x19[0x1d] != '\0') {
              fStack00000000000000c8 = fVar34;
            }
            goto LAB_02496c90;
          }
          if (((uVar26 == 1) || (in_stack_00000140 != uVar10)) ||
             (in_stack_00000130._4_4_ == *(uint *)((long)unaff_x19 + 0x31c))) {
            fStack00000000000000c8 = fVar35;
            if ((char)unaff_x19[0x1d] != '\0') {
              fStack00000000000000c8 = fVar34;
            }
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uStack0000000000000020 = FUN_016fa418(uVar2,0);
            in_stack_000000c0 = 0;
          }
          else {
            cVar13 = (char)unaff_x19[0x1d];
            fVar34 = -fVar23;
            if (cVar13 != '\0') {
              fVar34 = fVar23;
            }
            if (*(uint *)(in_stack_00000128 + 0x18) <= uVar4)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            fVar23 = 1.0;
            iVar8 = (int)*(char *)(in_stack_00000128 + in_stack_000000b8 * 0x178 + 0x194) +
                    (-iVar1 - (uStack0000000000000020 & 1)) + iVar8 + -1;
            if (0 < iVar8) {
              fVar23 = *(float *)((long)unaff_x19 + 0x2d4);
            }
            if (iVar8 < 1) {
              iVar8 = 1;
            }
            if (unaff_w25 == 9) {
LAB_02498bb8:
              fVar23 = 1.0 - fVar23;
            }
            else {
              if (unaff_w25 != 0xa0) {
                if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar11 = FUN_016fa418(uVar2,0);
                cVar13 = (char)unaff_x19[0x1d];
                if ((uVar11 & 1) != 0) goto LAB_02498bb8;
              }
              iVar8 = (iVar1 - (~uStack0000000000000020 & 1)) + iVar9;
            }
            fVar23 = ((fVar33 + fVar34) * fVar23) / (float)iVar8;
            if (cVar13 == '\0') {
              fStack00000000000000c8 = fStack00000000000000c8 + fVar23;
              in_stack_000000c0 =
                   CONCAT44((float)((ulong)in_stack_000000c0 >> 0x20) + 0.0,
                            (float)in_stack_000000c0 + 0.0);
            }
            else {
              fStack00000000000000c8 = fStack00000000000000c8 - fVar23;
            }
          }
        }
      }
      else if (uVar21 == 0x20) {
        fVar23 = fVar32 + fVar31;
        goto LAB_02496c1c;
      }
switchD_02496b58_caseD_3:
      uVar21 = (uint)*(undefined8 *)(in_stack_00000128 + 0x18);
      if (uVar21 <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar14 = in_stack_00000128 + unaff_x27 * 0x178;
      fVar33 = in_stack_00000098 + fStack00000000000000c8;
      in_stack_00000110 = (float)in_stack_00000090 + (float)in_stack_000000c0;
      fVar23 = (float)((ulong)in_stack_00000090 >> 0x20) + (float)((ulong)in_stack_000000c0 >> 0x20)
      ;
      if (*(char *)(lVar14 + 0x194) == '\0') goto LAB_02497688;
      iVar9 = *(int *)(in_stack_00000128 + unaff_x27 * 0x178 + 0x2c);
      if (iVar9 != 0) goto LAB_02497374;
      fVar34 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)in_stack_00000140,1.0);
      switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
      case 0:
        lVar22 = in_stack_00000128 + unaff_x27 * 0x178;
        *(undefined4 *)(lVar22 + 0x84) = 0;
        *(undefined4 *)(lVar22 + 0xac) = 0;
        *(undefined4 *)(lVar22 + 0xd4) = 0x3f800000;
        fVar34 = 1.0;
        break;
      case 1:
        fVar29 = *(float *)(in_stack_00000128 + unaff_x27 * 0x178 + 0x70);
        if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
          lVar22 = in_stack_00000128 + unaff_x27 * 0x178;
          fVar31 = (fStack00000000000000c8 + fVar29) - *(float *)(in_stack_00000070 + 0x230);
          fVar29 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
          goto LAB_02496df8;
        }
        lVar22 = in_stack_00000128 + unaff_x27 * 0x178;
        fVar31 = fVar31 - fVar32;
        *(float *)(lVar22 + 0x84) = fVar34 + (fVar29 - fVar32) / fVar31;
        *(float *)(lVar22 + 0xac) = fVar34 + (*(float *)(lVar22 + 0x98) - fVar32) / fVar31;
        *(float *)(lVar22 + 0xd4) = fVar34 + (*(float *)(lVar22 + 0xc0) - fVar32) / fVar31;
        fVar34 = fVar34 + (*(float *)(lVar22 + 0xe8) - fVar32) / fVar31;
        break;
      case 2:
        lVar22 = in_stack_00000128 + unaff_x27 * 0x178;
        fVar29 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
        fVar31 = (fStack00000000000000c8 + *(float *)(lVar22 + 0x70)) -
                 *(float *)(in_stack_00000070 + 0x230);
LAB_02496df8:
        *(float *)(lVar22 + 0x84) = fVar34 + fVar31 / fVar29;
        *(float *)(lVar22 + 0xac) =
             fVar34 + ((fStack00000000000000c8 + *(float *)(lVar22 + 0x98)) -
                      *(float *)(in_stack_00000070 + 0x230)) /
                      (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230)
                      );
        *(float *)(lVar22 + 0xd4) =
             fVar34 + ((fStack00000000000000c8 + *(float *)(lVar22 + 0xc0)) -
                      *(float *)(in_stack_00000070 + 0x230)) /
                      (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230)
                      );
        fVar34 = fVar34 + ((fStack00000000000000c8 + *(float *)(lVar22 + 0xe8)) -
                          *(float *)(in_stack_00000070 + 0x230)) /
                          (*(float *)(in_stack_00000070 + 0x238) -
                          *(float *)(in_stack_00000070 + 0x230));
        break;
      case 3:
        switch((int)unaff_x19[0x61]) {
        case 0:
          lVar22 = in_stack_00000128 + unaff_x27 * 0x178;
          *(undefined4 *)(lVar22 + 0x88) = 0;
          *(undefined4 *)(lVar22 + 0xb0) = 0x3f800000;
          *(undefined4 *)(lVar22 + 0xd8) = 0;
          *(undefined4 *)(lVar22 + 0x100) = 0x3f800000;
          break;
        case 1:
          lVar22 = in_stack_00000128 + unaff_x27 * 0x178;
          fVar29 = fVar29 - fVar28;
          fVar31 = fVar34 + (*(float *)(lVar22 + 0x74) - fVar28) / fVar29;
          fVar29 = fVar34 + (*(float *)(lVar22 + 0x9c) - fVar28) / fVar29;
          *(float *)(lVar22 + 0x88) = fVar31;
          *(float *)(lVar22 + 0xb0) = fVar29;
          *(float *)(lVar22 + 0xd8) = fVar31;
          *(float *)(lVar22 + 0x100) = fVar29;
          break;
        case 2:
          lVar22 = in_stack_00000128 + unaff_x27 * 0x178;
          fVar31 = fVar34 + (*(float *)(lVar22 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                            (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
          *(float *)(lVar22 + 0x88) = fVar31;
          fVar29 = *(float *)(unaff_x19 + 0x9b);
          fVar28 = *(float *)(unaff_x19 + 0x9c);
          *(float *)(lVar22 + 0xd8) = fVar31;
          fVar31 = fVar34 + (*(float *)(lVar22 + 0x9c) - fVar29) / (fVar28 - fVar29);
          *(float *)(lVar22 + 0xb0) = fVar31;
          *(float *)(lVar22 + 0x100) = fVar31;
          break;
        case 3:
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
          uVar21 = (uint)*(undefined8 *)(in_stack_00000128 + 0x18);
        }
        if (uVar21 <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar22 = in_stack_00000128 + unaff_x27 * 0x178;
        fVar31 = *(float *)(lVar22 + 0x15c);
        fVar29 = (1.0 - (*(float *)(lVar22 + 0x88) + *(float *)(lVar22 + 0xb0)) * fVar31) * 0.5;
        fVar28 = fVar34 + *(float *)(lVar22 + 0x88) * fVar31 + fVar29;
        fVar34 = fVar34 + fVar29 + *(float *)(lVar22 + 0xb0) * fVar31;
        *(float *)(lVar22 + 0x84) = fVar28;
        *(float *)(lVar22 + 0xac) = fVar28;
        *(float *)(lVar22 + 0xd4) = fVar34;
        break;
      default:
        goto switchD_02496d4c_default;
      }
      *(float *)(in_stack_00000128 + unaff_x27 * 0x178 + 0xfc) = fVar34;
switchD_02496d4c_default:
      switch((int)unaff_x19[0x61]) {
      case 0:
        if (uVar21 <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar22 = in_stack_00000128 + unaff_x27 * 0x178;
        *(undefined4 *)(lVar22 + 0x88) = 0;
        *(undefined4 *)(lVar22 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar22 + 0xd8) = 0x3f800000;
        *(undefined4 *)(lVar22 + 0x100) = 0;
        break;
      case 1:
        if (in_stack_00000130._4_4_ < uVar21) {
          lVar22 = in_stack_00000128 + unaff_x27 * 0x178;
          fVar25 = fVar25 - fVar27;
          fVar31 = (*(float *)(lVar22 + 0x74) - fVar27) / fVar25;
          fVar25 = (*(float *)(lVar22 + 0x9c) - fVar27) / fVar25;
          *(float *)(lVar22 + 0x88) = fVar31;
          goto LAB_02497174;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      case 2:
        if (uVar21 <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar22 = in_stack_00000128 + unaff_x27 * 0x178;
        fVar31 = (*(float *)(lVar22 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                 (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
        *(float *)(lVar22 + 0x88) = fVar31;
        fVar25 = (*(float *)(lVar22 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
                 (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_02497174:
        *(float *)(lVar22 + 0xb0) = fVar25;
        *(float *)(lVar22 + 0xd8) = fVar25;
        *(float *)(lVar22 + 0x100) = fVar31;
        break;
      case 3:
        if (uVar21 <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar22 = in_stack_00000128 + unaff_x27 * 0x178;
        fVar29 = *(float *)(lVar22 + 0x15c);
        fVar25 = (1.0 - (*(float *)(lVar22 + 0x84) + *(float *)(lVar22 + 0xd4)) / fVar29) * 0.5;
        fVar31 = *(float *)(lVar22 + 0x84) / fVar29 + fVar25;
        fVar25 = fVar25 + *(float *)(lVar22 + 0xd4) / fVar29;
        *(float *)(lVar22 + 0x88) = fVar31;
        *(float *)(lVar22 + 0xb0) = fVar25;
        *(float *)(lVar22 + 0x100) = fVar31;
        *(float *)(lVar22 + 0xd8) = fVar25;
      }
      if (uVar21 <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar22 = in_stack_00000128 + unaff_x27 * 0x178;
      unaff_s13 = *(float *)(lVar22 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
      if ((*(char *)(lVar22 + 0x5c) == '\0') &&
         ((*(byte *)(in_stack_00000128 + unaff_x27 * 0x178 + 400) & 1) != 0)) {
        unaff_s13 = -unaff_s13;
      }
      fVar31 = in_stack_00000038;
      if (((in_stack_00000040 == 2) || (fVar31 = fStack0000000000000028, in_stack_00000040 == 1)) ||
         (fVar31 = fStack0000000000000024, in_stack_00000040 == 0)) {
        unaff_s13 = fVar31 * unaff_s13;
      }
      lVar22 = in_stack_00000128 + unaff_x27 * 0x178;
      fVar25 = *(float *)(lVar22 + 0x88);
      fVar29 = *(float *)(lVar22 + 0x84);
      fVar31 = -2.1474836e+09;
      if (fVar29 != INFINITY) {
        fVar31 = (float)(int)fVar29;
      }
      fVar28 = *(float *)(lVar22 + 0xd4);
      fVar32 = *(float *)(lVar22 + 0xd8);
      fVar27 = -2.1474836e+09;
      if (fVar25 != INFINITY) {
        fVar27 = (float)(int)fVar25;
      }
      uVar30 = FUN_024e0374(fVar29 - fVar31,fVar25 - fVar27);
      *(undefined4 *)(lVar22 + 0x84) = uVar30;
      if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      fVar32 = fVar32 - fVar27;
      *(float *)(lVar22 + 0x88) = unaff_s13;
      uVar30 = FUN_024e0374(fVar29 - fVar31,fVar32);
      *(undefined4 *)(in_stack_00000128 + unaff_x27 * 0x178 + 0xac) = uVar30;
      if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      fVar28 = fVar28 - fVar31;
      *(float *)(in_stack_00000128 + unaff_x27 * 0x178 + 0xb0) = unaff_s13;
      fVar31 = (float)FUN_024e0374(fVar28,fVar32);
      *(float *)(lVar22 + 0xd4) = fVar31;
      if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(float *)(lVar22 + 0xd8) = unaff_s13;
      uVar30 = FUN_024e0374(fVar28,fVar25 - fVar27);
      *(undefined4 *)(in_stack_00000128 + unaff_x27 * 0x178 + 0xfc) = uVar30;
      uVar21 = (uint)*(undefined8 *)(in_stack_00000128 + 0x18);
      if (uVar21 <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(float *)(in_stack_00000128 + unaff_x27 * 0x178 + 0x100) = unaff_s13;
LAB_02497374:
      if (((int)unaff_x19[100] <= (int)in_stack_00000130._4_4_) ||
         (*(int *)((long)unaff_x19 + 0x324) <= iStack00000000000000ac)) goto LAB_02497490;
      if (((int)in_stack_00000140 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
        if (uVar21 <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar14 = in_stack_00000128 + unaff_x27 * 0x178;
        *(ulong *)(lVar14 + 0x70) =
             CONCAT44(in_stack_00000110 + (float)((ulong)*(undefined8 *)(lVar14 + 0x70) >> 0x20),
                      fVar33 + (float)*(undefined8 *)(lVar14 + 0x70));
        *(float *)(lVar14 + 0x78) = fVar23 + *(float *)(lVar14 + 0x78);
        if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar14 = in_stack_00000128 + unaff_x27 * 0x178;
        *(ulong *)(lVar14 + 0x98) =
             CONCAT44(in_stack_00000110 + (float)((ulong)*(undefined8 *)(lVar14 + 0x98) >> 0x20),
                      fVar33 + (float)*(undefined8 *)(lVar14 + 0x98));
        *(float *)(lVar14 + 0xa0) = fVar23 + *(float *)(lVar14 + 0xa0);
        if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar14 = in_stack_00000128 + unaff_x27 * 0x178;
        *(ulong *)(lVar14 + 0xc0) =
             CONCAT44(in_stack_00000110 + (float)((ulong)*(undefined8 *)(lVar14 + 0xc0) >> 0x20),
                      fVar33 + (float)*(undefined8 *)(lVar14 + 0xc0));
        *(float *)(lVar14 + 200) = fVar23 + *(float *)(lVar14 + 200);
        if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar14 = in_stack_00000128 + unaff_x27 * 0x178;
        *(ulong *)(lVar14 + 0xe8) =
             CONCAT44(in_stack_00000110 + (float)((ulong)*(undefined8 *)(lVar14 + 0xe8) >> 0x20),
                      fVar33 + (float)*(undefined8 *)(lVar14 + 0xe8));
        *(float *)(lVar14 + 0xf0) = fVar23 + *(float *)(lVar14 + 0xf0);
        if (iVar9 == 0) goto LAB_02497668;
LAB_02497598:
        if (iVar9 == 1) {
          pcVar15 = *(code **)(*unaff_x19 + 0x8f8);
          goto LAB_02497674;
        }
      }
      else {
        if (((int)in_stack_00000140 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
          if (uVar21 <= in_stack_00000130._4_4_)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          if (*(int *)(in_stack_00000128 + unaff_x27 * 0x178 + 0x68) != iStack000000000000002c)
          goto LAB_02497490;
          lVar14 = in_stack_00000128 + unaff_x27 * 0x178;
          *(ulong *)(lVar14 + 0x70) =
               CONCAT44(in_stack_00000110 + (float)((ulong)*(undefined8 *)(lVar14 + 0x70) >> 0x20),
                        fVar33 + (float)*(undefined8 *)(lVar14 + 0x70));
          *(float *)(lVar14 + 0x78) = fVar23 + *(float *)(lVar14 + 0x78);
          if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar14 = in_stack_00000128 + unaff_x27 * 0x178;
          *(ulong *)(lVar14 + 0x98) =
               CONCAT44(in_stack_00000110 + (float)((ulong)*(undefined8 *)(lVar14 + 0x98) >> 0x20),
                        fVar33 + (float)*(undefined8 *)(lVar14 + 0x98));
          *(float *)(lVar14 + 0xa0) = fVar23 + *(float *)(lVar14 + 0xa0);
          if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar14 = in_stack_00000128 + unaff_x27 * 0x178;
          *(ulong *)(lVar14 + 0xc0) =
               CONCAT44(in_stack_00000110 + (float)((ulong)*(undefined8 *)(lVar14 + 0xc0) >> 0x20),
                        fVar33 + (float)*(undefined8 *)(lVar14 + 0xc0));
          *(float *)(lVar14 + 200) = fVar23 + *(float *)(lVar14 + 200);
          if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar14 = in_stack_00000128 + unaff_x27 * 0x178;
          *(ulong *)(lVar14 + 0xe8) =
               CONCAT44(in_stack_00000110 + (float)((ulong)*(undefined8 *)(lVar14 + 0xe8) >> 0x20),
                        fVar33 + (float)*(undefined8 *)(lVar14 + 0xe8));
          *(float *)(lVar14 + 0xf0) = fVar23 + *(float *)(lVar14 + 0xf0);
        }
        else {
LAB_02497490:
          if (uVar21 <= in_stack_00000130._4_4_)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          puVar5 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
          lVar22 = in_stack_00000128 + unaff_x27 * 0x178;
          uVar30 = *(undefined4 *)
                    (*(undefined8 **)
                      (*(long *)
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      + 0xb8) + 1);
          *(undefined8 *)(lVar22 + 0x70) =
               **(undefined8 **)
                 (*(long *)
                   Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
                 0xb8);
          *(undefined4 *)(lVar22 + 0x78) = uVar30;
          if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar22 = in_stack_00000128 + unaff_x27 * 0x178;
          uVar30 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
          *(undefined8 *)(lVar22 + 0x98) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
          *(undefined4 *)(lVar22 + 0xa0) = uVar30;
          if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar22 = in_stack_00000128 + unaff_x27 * 0x178;
          uVar30 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
          *(undefined8 *)(lVar22 + 0xc0) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
          *(undefined4 *)(lVar22 + 200) = uVar30;
          if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar22 = in_stack_00000128 + unaff_x27 * 0x178;
          uVar30 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
          *(undefined8 *)(lVar22 + 0xe8) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
          *(undefined4 *)(lVar22 + 0xf0) = uVar30;
          if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          *(undefined1 *)(lVar14 + 0x194) = 0;
        }
        if (iVar9 != 0) goto LAB_02497598;
LAB_02497668:
        pcVar15 = *(code **)(*unaff_x19 + 0x8d8);
LAB_02497674:
        (*pcVar15)();
      }
LAB_02497688:
      if ((*in_stack_00000150 == 0) || (lVar14 = *(long *)(*in_stack_00000150 + 0x38), lVar14 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar14 + 0x18) <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar14 = lVar14 + unaff_x27 * 0x178;
      uVar24 = *(undefined8 *)(lVar14 + 0x11c);
      *(undefined8 *)(lVar14 + 0x11c) =
           CONCAT44(in_stack_00000110 + (float)((ulong)uVar24 >> 0x20),fVar33 + (float)uVar24);
      *(float *)(lVar14 + 0x124) = fVar23 + *(float *)(lVar14 + 0x124);
      if ((*in_stack_00000150 == 0) || (lVar14 = *(long *)(*in_stack_00000150 + 0x38), lVar14 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar14 + 0x18) <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar14 = lVar14 + unaff_x27 * 0x178;
      *(ulong *)(lVar14 + 0x110) =
           CONCAT44(in_stack_00000110 + (float)((ulong)*(undefined8 *)(lVar14 + 0x110) >> 0x20),
                    fVar33 + (float)*(undefined8 *)(lVar14 + 0x110));
      *(float *)(lVar14 + 0x118) = fVar23 + *(float *)(lVar14 + 0x118);
      if ((*in_stack_00000150 == 0) || (lVar14 = *(long *)(*in_stack_00000150 + 0x38), lVar14 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar14 + 0x18) <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar14 = lVar14 + unaff_x27 * 0x178;
      *(ulong *)(lVar14 + 0x128) =
           CONCAT44(in_stack_00000110 + (float)((ulong)*(undefined8 *)(lVar14 + 0x128) >> 0x20),
                    fVar33 + (float)*(undefined8 *)(lVar14 + 0x128));
      *(float *)(lVar14 + 0x130) = fVar23 + *(float *)(lVar14 + 0x130);
      if ((*in_stack_00000150 == 0) || (lVar14 = *(long *)(*in_stack_00000150 + 0x38), lVar14 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar14 + 0x18) <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar14 = lVar14 + unaff_x27 * 0x178;
      *(float *)(lVar14 + 0x134) = fVar33 + *(float *)(lVar14 + 0x134);
      *(ulong *)(lVar14 + 0x138) =
           CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(lVar14 + 0x138) >> 0x20),
                    in_stack_00000110 + (float)*(undefined8 *)(lVar14 + 0x138));
      lVar14 = *in_stack_00000150;
      if ((lVar14 == 0) || (lVar22 = *(long *)(lVar14 + 0x38), lVar22 == 0)) goto LAB_0249920c;
      uVar21 = *(uint *)(lVar22 + 0x18);
      if (uVar21 <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar16 = lVar22 + unaff_x27 * 0x178;
      param_2 = CONCAT44(fVar33 + (float)((ulong)*(undefined8 *)(lVar16 + 0x140) >> 0x20),
                         fVar33 + (float)*(undefined8 *)(lVar16 + 0x140));
      fVar23 = in_stack_00000110 + *(float *)(lVar16 + 0x150);
      param_3 = (ulong)(uint)fVar23;
      param_4 = CONCAT44(in_stack_00000110 + (float)((ulong)*(undefined8 *)(lVar16 + 0x148) >> 0x20)
                         ,in_stack_00000110 + (float)*(undefined8 *)(lVar16 + 0x148));
      *(ulong *)(lVar16 + 0x140) = param_2;
      *(ulong *)(lVar16 + 0x148) = param_4;
      *(float *)(lVar16 + 0x150) = fVar23;
      if (in_stack_00000140 == uVar10) {
        uVar10 = *in_stack_00000148 - 1;
        if (in_stack_00000130._4_4_ == uVar10) goto LAB_0249788c;
      }
      else {
        lVar14 = *(long *)(lVar14 + 0x50);
        if (lVar14 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar14 + 0x18) <= uVar10)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar16 = (long)(int)uVar10;
        lVar18 = lVar14 + lVar16 * 0x5c;
        param_4 = (ulong)(uint)*(float *)(lVar18 + 0x58);
        fVar23 = in_stack_00000110 + *(float *)(lVar18 + 0x54);
        param_2 = (ulong)(uint)fVar23;
        fVar31 = fVar33 + *(float *)(lVar18 + 0x58);
        param_3 = (ulong)(uint)fVar31;
        *(ulong *)(lVar18 + 0x4c) =
             CONCAT44(in_stack_00000110 + (float)((ulong)*(undefined8 *)(lVar18 + 0x4c) >> 0x20),
                      in_stack_00000110 + (float)*(undefined8 *)(lVar18 + 0x4c));
        *(float *)(lVar18 + 0x54) = fVar23;
        *(float *)(lVar18 + 0x58) = fVar31;
        if (uVar21 <= *(uint *)(lVar18 + 0x34))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar30 = *(undefined4 *)(lVar22 + (long)(int)*(uint *)(lVar18 + 0x34) * 0x178 + 0x11c);
        lVar14 = lVar14 + lVar16 * 0x5c;
        *(float *)(lVar14 + 0x70) = fVar23;
        *(undefined4 *)(lVar14 + 0x6c) = uVar30;
        lVar14 = *in_stack_00000150;
        if ((lVar14 == 0) || (lVar22 = *(long *)(lVar14 + 0x50), lVar22 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar22 + 0x18) <= uVar10)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar14 = *(long *)(lVar14 + 0x38);
        if (lVar14 == 0) goto LAB_0249920c;
        uVar10 = *(uint *)(lVar22 + lVar16 * 0x5c + 0x40);
        if (*(uint *)(lVar14 + 0x18) <= uVar10)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar22 = lVar22 + lVar16 * 0x5c;
        *(undefined4 *)(lVar22 + 0x74) = *(undefined4 *)(lVar14 + (long)(int)uVar10 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar22 + 0x78) = *(undefined4 *)(lVar22 + 0x4c);
        uVar10 = *in_stack_00000148 - 1;
LAB_0249788c:
        if (in_stack_00000130._4_4_ == uVar10) {
          lVar14 = *in_stack_00000150;
          if ((lVar14 == 0) || (lVar22 = *(long *)(lVar14 + 0x50), lVar22 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar22 + 0x18) <= in_stack_00000140)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar16 = lVar22 + lVar17 * 0x5c;
          param_4 = (ulong)(uint)*(float *)(lVar16 + 0x58);
          param_2 = CONCAT44(in_stack_00000110 +
                             (float)((ulong)*(undefined8 *)(lVar16 + 0x4c) >> 0x20),
                             in_stack_00000110 + (float)*(undefined8 *)(lVar16 + 0x4c));
          fVar23 = in_stack_00000110 + *(float *)(lVar16 + 0x54);
          fVar33 = fVar33 + *(float *)(lVar16 + 0x58);
          param_3 = (ulong)(uint)fVar33;
          *(ulong *)(lVar16 + 0x4c) = param_2;
          *(float *)(lVar16 + 0x54) = fVar23;
          *(float *)(lVar16 + 0x58) = fVar33;
          lVar14 = *(long *)(lVar14 + 0x38);
          if (lVar14 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar14 + 0x18) <= *(uint *)(lVar16 + 0x34))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar30 = *(undefined4 *)(lVar14 + (long)(int)*(uint *)(lVar16 + 0x34) * 0x178 + 0x11c);
          lVar22 = lVar22 + lVar17 * 0x5c;
          *(float *)(lVar22 + 0x70) = fVar23;
          *(undefined4 *)(lVar22 + 0x6c) = uVar30;
          lVar14 = *in_stack_00000150;
          if ((lVar14 == 0) || (lVar22 = *(long *)(lVar14 + 0x50), lVar22 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar22 + 0x18) <= in_stack_00000140)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar14 = *(long *)(lVar14 + 0x38);
          if (lVar14 == 0) goto LAB_0249920c;
          uVar10 = *(uint *)(lVar22 + lVar17 * 0x5c + 0x40);
          if (*(uint *)(lVar14 + 0x18) <= uVar10)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar22 = lVar22 + lVar17 * 0x5c;
          *(undefined4 *)(lVar22 + 0x74) =
               *(undefined4 *)(lVar14 + (long)(int)uVar10 * 0x178 + 0x128);
          *(undefined4 *)(lVar22 + 0x78) = *(undefined4 *)(lVar22 + 0x4c);
        }
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_016f9468(unaff_w25,0);
      if (((((uVar11 & 1) == 0) && (1 < unaff_w25 - 0x2010)) && (unaff_w25 != 0xad)) &&
         (unaff_w25 != 0x2d)) {
        if ((uStack00000000000000e8 & 1) == 0) {
          if (uVar26 != 1) {
LAB_024985a0:
            uStack00000000000000e8 = 0;
            goto LAB_02497aac;
          }
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_016f93a0(unaff_w25,0);
          if ((uVar11 & 1) != 0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar11 = FUN_016f68bc(unaff_w25,0);
            if (((unaff_w25 != 0x200b) && ((uVar11 & 1) == 0)) && (*in_stack_00000148 != 1))
            goto LAB_024985a0;
          }
        }
        else if (((uVar26 != 1) &&
                 ((int)in_stack_00000130._4_4_ < (int)(*(uint *)(in_stack_00000128 + 0x18) - 1))) &&
                (((int)in_stack_00000130._4_4_ < *in_stack_00000148 &&
                 ((unaff_w25 == 0x2019 || (unaff_w25 == 0x27)))))) {
          if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_ - 1)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar3 = *(undefined2 *)(in_stack_00000128 + unaff_x21 + -0x438);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_016f9468(uVar3,0);
          if ((uVar11 & 1) != 0) {
            if (*(uint *)(in_stack_00000128 + 0x18) <= uVar26)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar3 = *(undefined2 *)(in_stack_00000128 + unaff_x21 + -0x148);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar11 = FUN_016f9468(uVar3,0);
            if ((uVar11 & 1) != 0) goto LAB_02497aa4;
          }
        }
        if (in_stack_00000130._4_4_ == *in_stack_00000148 - 1U) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_016f9468(unaff_w25,0);
          iVar9 = unaff_w29;
          if ((uVar11 & 1) == 0) goto LAB_02497de0;
        }
        else {
LAB_02497de0:
          iVar9 = in_stack_00000130._4_4_ - 1;
        }
        lVar14 = *in_stack_00000150;
        if (lVar14 == 0) goto LAB_0249920c;
        lVar22 = *(long *)(lVar14 + 0x40);
        if (lVar22 == 0) goto LAB_0249920c;
        uVar10 = *(uint *)(lVar14 + 0x24);
        iVar8 = *(int *)(lVar22 + 0x18);
        if (iVar8 < (int)(uVar10 + 1)) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147b84((long *)(lVar14 + 0x40),iVar8 + 1,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
          lVar14 = *in_stack_00000150;
          if (lVar14 == 0) goto LAB_0249920c;
        }
        lVar22 = *(long *)(lVar14 + 0x40);
        if (lVar22 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar22 + 0x18) <= uVar10)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar22 = lVar22 + (long)(int)uVar10 * 0x18;
        *(uint *)(lVar22 + 0x28) = unaff_w24;
        *(int *)(lVar22 + 0x2c) = iVar9;
        *(uint *)(lVar22 + 0x30) = (iVar9 - unaff_w24) + 1;
        *(long **)(lVar22 + 0x20) = unaff_x19;
        lVar22 = *(long *)(lVar14 + 0x50);
        *(int *)(lVar14 + 0x24) = *(int *)(lVar14 + 0x24) + 1;
        if (lVar22 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar22 + 0x18) <= in_stack_00000140)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar22 = lVar22 + lVar17 * 0x5c;
        uStack00000000000000e8 = 0;
        iStack00000000000000ac = iStack00000000000000ac + 1;
        *(int *)(lVar22 + 0x30) = *(int *)(lVar22 + 0x30) + 1;
      }
      else {
        if ((uStack00000000000000e8 & 1) == 0) {
          unaff_w24 = in_stack_00000130._4_4_;
        }
        if (in_stack_00000130._4_4_ == *in_stack_00000148 - 1U) {
          lVar14 = *in_stack_00000150;
          if (lVar14 == 0) goto LAB_0249920c;
          lVar22 = *(long *)(lVar14 + 0x40);
          if (lVar22 == 0) goto LAB_0249920c;
          uVar10 = *(uint *)(lVar14 + 0x24);
          iVar9 = *(int *)(lVar22 + 0x18);
          if (iVar9 < (int)(uVar10 + 1)) {
            if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_01147b84((long *)(lVar14 + 0x40),iVar9 + 1,
                         *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
            lVar14 = *in_stack_00000150;
            if (lVar14 == 0) goto LAB_0249920c;
          }
          lVar22 = *(long *)(lVar14 + 0x40);
          if (lVar22 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar22 + 0x18) <= uVar10)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar22 = lVar22 + (long)(int)uVar10 * 0x18;
          *(uint *)(lVar22 + 0x28) = unaff_w24;
          *(uint *)(lVar22 + 0x2c) = in_stack_00000130._4_4_;
          *(long **)(lVar22 + 0x20) = unaff_x19;
          *(uint *)(lVar22 + 0x30) = uVar26 - unaff_w24;
          lVar22 = *(long *)(lVar14 + 0x50);
          *(int *)(lVar14 + 0x24) = *(int *)(lVar14 + 0x24) + 1;
          if (lVar22 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar22 + 0x18) <= in_stack_00000140)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar22 = lVar22 + lVar17 * 0x5c;
          iStack00000000000000ac = iStack00000000000000ac + 1;
          *(int *)(lVar22 + 0x30) = *(int *)(lVar22 + 0x30) + 1;
        }
LAB_02497aa4:
        uStack00000000000000e8 = 1;
      }
LAB_02497aac:
      if ((*in_stack_00000150 == 0) || (lVar14 = *(long *)(*in_stack_00000150 + 0x38), lVar14 == 0))
      goto LAB_0249920c;
      uVar10 = *(uint *)(lVar14 + 0x18);
      if (uVar10 <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      unaff_x20 = in_stack_00000148;
      unaff_w23 = in_stack_00000130._4_4_;
      in_stack_000000e0 = unaff_x21;
      in_stack_00000138 = unaff_w25;
      if ((*(byte *)(lVar14 + unaff_x27 * 0x178 + 400) >> 2 & 1) != 0) {
        lVar14 = lVar14 + unaff_x27 * 0x178;
        unaff_w22 = *(int *)(lVar14 + 0x68);
        unaff_x28 = 0x178;
        *(undefined4 *)(lVar14 + 0x16c) = in_stack_000017a4;
        if ((((int)unaff_x19[100] < (int)in_stack_00000130._4_4_) ||
            ((int)unaff_x19[0x65] < (int)in_stack_00000140)) ||
           (((int)unaff_x19[0x5b] == 5 && (unaff_w22 + 1 != (int)unaff_x19[0x66])))) {
          in_stack_00000100 = 0;
        }
        else {
          in_stack_00000100 = 1;
        }
        unaff_x26 = in_stack_00000150;
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        goto code_r0x02497b90;
      }
      unaff_x26 = in_stack_00000150;
      in_stack_00000130._4_4_ = uVar26;
      if (uStack00000000000000f4 != 0) goto LAB_02497adc;
LAB_02497fc4:
      uStack00000000000000f4 = 0;
      uVar10 = in_stack_00000140;
    } while( true );
  }
  if ((in_stack_00000100 & 1) == 0) {
    if ((*unaff_x26 != 0) && (lVar14 = *(long *)(*unaff_x26 + 0x38), lVar14 != 0)) {
      uVar10 = *(uint *)(lVar14 + 0x18);
      goto LAB_02497adc;
    }
    goto LAB_0249920c;
  }
  if ((int)unaff_w23 < *unaff_x20 + -1) {
    if ((*unaff_x26 == 0) || (lVar14 = *(long *)(*unaff_x26 + 0x38), lVar14 == 0))
    goto LAB_0249920c;
    if (in_stack_00000130._4_4_ < *(uint *)(lVar14 + 0x18)) {
      uVar11 = FUN_024a9e4c(in_stack_00000060,*(undefined4 *)(lVar14 + unaff_x21),0);
      unaff_x26 = in_stack_00000150;
      if ((uVar11 & 1) != 0) goto LAB_024982a4;
      if ((*in_stack_00000150 == 0) || (lVar14 = *(long *)(*in_stack_00000150 + 0x38), lVar14 == 0))
      goto LAB_0249920c;
      if (unaff_w23 < *(uint *)(lVar14 + 0x18)) {
        lVar14 = lVar14 + unaff_x27 * 0x178;
        param_4 = (ulong)*(uint *)(lVar14 + 0x128);
        param_3 = (ulong)uStack0000000000000054;
        param_2 = (ulong)(uint)fStack0000000000000050;
        (**(code **)(*unaff_x19 + 0x908))
                  (uStack0000000000000058,param_2,param_3,param_4,in_stack_000000d0,0,
                   fStack000000000000005c,*(undefined4 *)(lVar14 + 0x160));
        puVar5 = System_Threading_Mutex_TypeInfo;
        lVar14 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar14 + 0xe0) != 0) goto LAB_024980b4;
        thunk_FUN_00d32864();
        lVar14 = *(long *)puVar5;
        goto LAB_024980b4;
      }
    }
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
LAB_024982a4:
  uStack00000000000000f4 = 1;
  goto LAB_024980d0;
LAB_02497adc:
  if (uVar10 <= in_stack_00000130._4_4_ - 2)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar17 = *unaff_x19;
  uVar26 = *(uint *)(lVar14 + unaff_x21 + -0x330);
  uVar30 = *(undefined4 *)(lVar14 + unaff_x21 + -0x2f8);
LAB_0249805c:
  pcVar15 = *(code **)(lVar17 + 0x908);
  goto LAB_02498064;
  while( true ) {
    lVar14 = *unaff_x26;
    lVar17 = lVar17 + 1;
    lVar22 = lVar22 + 0x50;
    if (lVar14 == 0) break;
LAB_02498e6c:
    uVar11 = lVar17 + 1;
    if ((long)*(int *)(lVar14 + 0x34) <= (long)uVar11) {
LAB_02496098:
      if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__ + 0xe0) == 0
         ) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar14 = *(long *)(lVar14 + 0x60);
    if (lVar14 == 0) break;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    FUN_024e7ecc(lVar14 + lVar22 + 0x70,0);
    lVar14 = unaff_x19[0xe0];
    if (lVar14 == 0) break;
    if (*(uint *)(lVar14 + 0x18) <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    uVar19 = *(undefined8 *)(lVar14 + lVar17 * 8 + 0x28);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar12 = FUN_0268b4e0(uVar19,0,0);
    if ((uVar12 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x314) != 0) {
        if ((*unaff_x26 == 0) || (lVar14 = *(long *)(*unaff_x26 + 0x60), lVar14 == 0)) break;
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (*(uint *)(lVar14 + 0x18) <= uVar11)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        FUN_024e8000(lVar14 + lVar22 + 0x70,1,0);
      }
      lVar14 = unaff_x19[0xe0];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar14 = *(long *)(lVar14 + lVar17 * 8 + 0x28);
      if (lVar14 == 0) break;
      lVar14 = FUN_024f0144(lVar14,0);
      if ((*unaff_x26 == 0) || (lVar16 = *(long *)(*unaff_x26 + 0x60), lVar16 == 0)) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (lVar14 == 0) break;
      FUN_0266b9c4(lVar14,*(undefined8 *)(lVar16 + lVar22 + 0x80),0);
      lVar14 = unaff_x19[0xe0];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar14 = *(long *)(lVar14 + lVar17 * 8 + 0x28);
      if (lVar14 == 0) break;
      lVar14 = FUN_024f0144(lVar14,0);
      if ((*unaff_x26 == 0) || (lVar16 = *(long *)(*unaff_x26 + 0x60), lVar16 == 0)) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (lVar14 == 0) break;
      FUN_0266bbc8(lVar14,*(undefined8 *)(lVar16 + lVar22 + 0x98),0);
      lVar14 = unaff_x19[0xe0];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar14 = *(long *)(lVar14 + lVar17 * 8 + 0x28);
      if (lVar14 == 0) break;
      lVar14 = FUN_024f0144(lVar14,0);
      if ((*unaff_x26 == 0) || (lVar16 = *(long *)(*unaff_x26 + 0x60), lVar16 == 0)) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (lVar14 == 0) break;
      FUN_0266bc74(lVar14,*(undefined8 *)(lVar16 + lVar22 + 0xa0),0);
      lVar14 = unaff_x19[0xe0];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar14 = *(long *)(lVar14 + lVar17 * 8 + 0x28);
      if (lVar14 == 0) break;
      lVar14 = FUN_024f0144(lVar14,0);
      if ((*unaff_x26 == 0) || (lVar16 = *(long *)(*unaff_x26 + 0x60), lVar16 == 0)) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (lVar14 == 0) break;
      FUN_0266c1dc(lVar14,*(undefined8 *)(lVar16 + lVar22 + 0xa8),0);
      lVar14 = unaff_x19[0xe0];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar14 = *(long *)(lVar14 + lVar17 * 8 + 0x28);
      if ((lVar14 == 0) || (lVar14 = FUN_024f0144(lVar14,0), lVar14 == 0)) break;
      FUN_0266ed90(lVar14,0);
      lVar14 = unaff_x19[0xe0];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar14 = *(long *)(lVar14 + lVar17 * 8 + 0x28);
      if (lVar14 == 0) break;
      lVar14 = FUN_02738ef4(lVar14,0);
      lVar16 = unaff_x19[0xe0];
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar16 = *(long *)(lVar16 + lVar17 * 8 + 0x28);
      if ((lVar16 == 0) || (uVar19 = FUN_024f0144(lVar16,0), lVar14 == 0)) break;
      FUN_02858f1c(lVar14,uVar19,0);
      lVar14 = unaff_x19[0xe0];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar14 = *(long *)(lVar14 + lVar17 * 8 + 0x28);
      if ((lVar14 == 0) || (lVar14 = FUN_02738ef4(lVar14,0), lVar14 == 0)) break;
      FUN_02858b14(uVar24,param_2,param_3,param_4,lVar14,0);
      lVar14 = unaff_x19[0xe0];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar14 = *(long *)(lVar14 + lVar17 * 8 + 0x28);
      if ((lVar14 == 0) || (lVar14 = FUN_02738ef4(lVar14,0), lVar14 == 0)) break;
      FUN_02858a50(lVar14,uVar26 & 1,0);
      lVar14 = unaff_x19[0xe0];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      plVar20 = *(long **)(lVar14 + lVar17 * 8 + 0x28);
      uVar10 = (**(code **)(*unaff_x19 + 0x2b8))();
      if (plVar20 == (long *)0x0) break;
      (**(code **)(*plVar20 + 0x2c8))(plVar20,uVar10 & 1,*(undefined8 *)(*plVar20 + 0x2d0));
    }
  }
LAB_0249920c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


