/*
FUNCTION_NAME: FUN_02498644
ENTRY_POINT: 02498644
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_15;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_1
*/


void FUN_02498644(code *param_1,float param_2,undefined1 param_3 [16],undefined1 param_4 [16],
                 ulong param_5,undefined1 param_6 [16],undefined1 param_7 [16],ulong param_8)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  char cVar18;
  long lVar19;
  long lVar20;
  code *pcVar21;
  long lVar22;
  long lVar23;
  long *unaff_x19;
  long unaff_x21;
  undefined8 uVar24;
  long *plVar25;
  uint uVar26;
  long unaff_x22;
  uint unaff_w23;
  long lVar27;
  int *unaff_x24;
  long lVar28;
  uint unaff_w25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  int unaff_w29;
  undefined4 uVar29;
  undefined8 uVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float unaff_s8;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float unaff_s13;
  float fVar40;
  float fVar41;
  float unaff_s15;
  float fStack0000000000000000;
  float fStack0000000000000008;
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
  uint uStack00000000000000e8;
  uint uStack00000000000000ec;
  undefined8 in_stack_000000f0;
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
  
code_r0x02498644:
  param_2 = unaff_s8 + param_2;
LAB_02498648:
  uVar15 = (ulong)(uint)in_stack_00000078._4_4_;
  uVar31 = (ulong)in_stack_00000068._4_4_;
  fStack0000000000000000 = (float)param_8;
  fStack0000000000000008 = unaff_s13;
  (*param_1)(in_stack_00000080,uVar15,uVar31,param_5,param_2,0,param_8,param_8);
  uVar13 = in_stack_00000130._4_4_;
LAB_0249867c:
  in_stack_00000130._4_4_ = uVar13;
  bVar7 = false;
  uVar14 = in_stack_00000140;
  do {
    if ((*unaff_x26 == 0) || (lVar19 = *(long *)(*unaff_x26 + 0x38), lVar19 == 0))
    goto LAB_0249920c;
    uVar13 = (uint)*(undefined8 *)(lVar19 + 0x18);
    if (uVar13 <= unaff_w23)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar19 + unaff_x27 * unaff_x22 + 0x191) >> 1 & 1) == 0) {
      if ((uStack00000000000000ec & 1) != 0) {
        uVar31 = (ulong)uStack00000000000000a0;
        param_5 = (ulong)(uint)fStack00000000000000a4;
        uVar15 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar15,uVar31,param_5,fStack00000000000000a8,uVar31);
      }
LAB_024986e8:
      uStack00000000000000ec = 0;
    }
    else {
      if ((((int)unaff_x19[100] < (int)unaff_w23) || ((int)unaff_x19[0x65] < (int)uVar14)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar19 + unaff_x27 * unaff_x22 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      uVar26 = (uint)in_stack_00000120;
      if ((uStack00000000000000ec & 1) == 0) {
        if ((((in_stack_00000138 == 0xd) || ((in_stack_00000138 | 1) == 0xb)) ||
            ((int)uVar26 < (int)unaff_w23)) || (!bVar1)) goto LAB_024986e8;
        if (unaff_w23 == uVar26) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar16 = FUN_016fa418(in_stack_00000138,0);
          if ((uVar16 & 1) != 0) goto LAB_024986e8;
        }
        puVar8 = System_Threading_Mutex_TypeInfo;
        lVar28 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar28 = *(long *)puVar8;
        }
        unaff_x22 = 0x178;
        if ((*unaff_x26 == 0) || (lVar19 = *(long *)(*unaff_x26 + 0x38), lVar19 == 0))
        goto LAB_0249920c;
        uVar13 = (uint)*(undefined8 *)(lVar19 + 0x18);
        if (uVar13 <= unaff_w23)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = *(long *)(lVar28 + 0xb8);
        lVar27 = lVar19 + unaff_x27 * 0x178;
        in_stack_00001798 = *(undefined8 *)(lVar27 + 0x184);
        in_stack_00001790 = *(undefined8 *)(lVar27 + 0x17c);
        fStack00000000000000b0 = *(float *)(lVar28 + 0x1598);
        in_stack_000017a0 = *(float *)(lVar27 + 0x18c);
        fStack00000000000000b4 = *(float *)(lVar28 + 0x159c);
        fStack00000000000000a4 = *(float *)(lVar28 + 0x15a0);
        fStack00000000000000a8 = *(float *)(lVar28 + 0x15a4);
        uStack00000000000000a0 = 0;
      }
      if (uVar13 <= unaff_w23)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar19 = lVar19 + unaff_x27 * unaff_x22;
      fVar33 = *(float *)(lVar19 + 0x188);
      uVar24 = *(undefined8 *)(lVar19 + 0x17c);
      fVar36 = *(float *)(lVar19 + 0x184);
      uVar30 = *(undefined8 *)(lVar19 + 0x184);
      fVar34 = *(float *)(lVar19 + 0x18c);
      fVar37 = *(float *)(lVar19 + 0x11c);
      fVar32 = *(float *)(lVar19 + 0x128);
      fVar35 = *(float *)(lVar19 + 0x148);
      fVar38 = *(float *)(lVar19 + 0x150);
      in_stack_00000158 = uVar24;
      fStack0000000000000160 = fVar36;
      fStack0000000000000164 = fVar33;
      in_stack_00000168 = fVar34;
      in_stack_00000170 = in_stack_00001790;
      in_stack_00000178 = in_stack_00001798;
      in_stack_00000180 = in_stack_000017a0;
      uVar15 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
      lVar19 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
      if ((uVar15 & 1) == 0) {
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar19);
        }
        fVar37 = fVar37 - (float)((ulong)in_stack_00001790 >> 0x20);
        if (fVar37 <= fStack00000000000000b0) {
          fStack00000000000000b0 = fVar37;
        }
        fVar38 = fVar38 - in_stack_000017a0;
        uVar15 = (ulong)(uint)fVar38;
        fVar32 = fVar32 + (float)in_stack_00001798;
        uVar31 = (ulong)(uint)fVar32;
        if (fVar38 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar38;
        }
        fVar35 = fVar35 + (float)((ulong)in_stack_00001798 >> 0x20);
        param_5 = (ulong)(uint)fVar35;
        if (fStack00000000000000a4 <= fVar32) {
          fStack00000000000000a4 = fVar32;
        }
        if (fStack00000000000000a8 <= fVar35) {
          fStack00000000000000a8 = fVar35;
        }
      }
      else {
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar19);
        }
        fVar37 = (fVar37 + (fStack00000000000000a4 - (float)in_stack_00001798)) * 0.5;
        param_5 = (ulong)(uint)fVar37;
        if (fVar38 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar38;
        }
        uVar15 = (ulong)(uint)fStack00000000000000b4;
        uVar31 = (ulong)uStack00000000000000a0;
        if (fStack00000000000000a8 <= fVar35) {
          fStack00000000000000a8 = fVar35;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar15,uVar31,param_5,fStack00000000000000a8,uVar31);
        fStack00000000000000b4 = fVar38 - fVar34;
        fStack00000000000000a4 = fVar32 + fVar36;
        uStack00000000000000a0 = 0;
        fStack00000000000000a8 = fVar35 + fVar33;
        fStack00000000000000b0 = fVar37;
        in_stack_00001790 = uVar24;
        in_stack_00001798 = uVar30;
        in_stack_000017a0 = fVar34;
      }
      if (((*unaff_x24 == 1) || (unaff_w23 == (uint)in_stack_000000b8)) ||
         (((int)uVar26 <= (int)unaff_w23 || (!bVar1)))) {
        uVar31 = (ulong)uStack00000000000000a0;
        param_5 = (ulong)(uint)fStack00000000000000a4;
        uVar15 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar15,uVar31,param_5,fStack00000000000000a8,uVar31);
        uStack00000000000000ec = 0;
      }
      else {
        uStack00000000000000ec = 1;
      }
    }
    puVar9 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    puVar8 = PTR_DAT_033ed410;
    iVar12 = *unaff_x24;
    uVar13 = in_stack_00000130._4_4_ + 1;
    unaff_w29 = unaff_w29 + 1;
    unaff_x21 = unaff_x21 + 0x178;
    if (iVar12 <= (int)in_stack_00000130._4_4_) {
      lVar19 = *unaff_x26;
      if (lVar19 == 0) goto LAB_0249920c;
      *(int *)(lVar19 + 0x18) = iVar12;
      lVar28 = unaff_x19[0xd3];
      *(uint *)(lVar19 + 0x2c) = uVar14 + 1;
      iVar11 = iStack00000000000000ac;
      if (iVar12 < 1) {
        iVar11 = 1;
      }
      if (iStack00000000000000ac == 0) {
        iVar11 = 1;
      }
      *(int *)(lVar19 + 0x1c) = (int)lVar28;
      *(int *)(lVar19 + 0x24) = iVar11;
      *(int *)(lVar19 + 0x30) = (int)unaff_x19[0x95] + 1;
      if (((int)unaff_x19[0x62] != 0xff) ||
         (uVar16 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar16 & 1) == 0)) goto LAB_02496098;
      lVar19 = unaff_x19[0xde];
      if (lVar19 != 0) {
        (**(code **)(lVar19 + 0x18))
                  (*(undefined8 *)(lVar19 + 0x40),*unaff_x26,*(undefined8 *)(lVar19 + 0x28));
      }
      if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
      iVar12 = FUN_02859dc4(unaff_x19[0xe4],0);
      if (iVar12 != 0x19) {
        lVar19 = unaff_x19[0xe4];
        if (lVar19 == 0) goto LAB_0249920c;
        uVar13 = FUN_02859dc4(lVar19,0);
        FUN_02859e00(lVar19,uVar13 | 0x19,0);
      }
      if (*(int *)((long)unaff_x19 + 0x314) != 0) {
        if ((*unaff_x26 == 0) || (lVar19 = *(long *)(*unaff_x26 + 0x60), lVar19 == 0))
        goto LAB_0249920c;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (*(int *)(lVar19 + 0x18) == 0)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        FUN_024e8000(lVar19 + 0x20,1,0);
      }
      if (unaff_x19[0x73] == 0) goto LAB_0249920c;
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] == 0) || (lVar19 = *(long *)(unaff_x19[0x6c] + 0x60), lVar19 == 0))
      goto LAB_0249920c;
      if (*(int *)(lVar19 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (unaff_x19[0x73] == 0) goto LAB_0249920c;
      FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar19 + 0x30),0);
      if ((unaff_x19[0x6c] == 0) || (lVar19 = *(long *)(unaff_x19[0x6c] + 0x60), lVar19 == 0))
      goto LAB_0249920c;
      if (*(int *)(lVar19 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (unaff_x19[0x73] == 0) goto LAB_0249920c;
      FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar19 + 0x48),0);
      if ((unaff_x19[0x6c] == 0) || (lVar19 = *(long *)(unaff_x19[0x6c] + 0x60), lVar19 == 0))
      goto LAB_0249920c;
      if (*(int *)(lVar19 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (unaff_x19[0x73] == 0) goto LAB_0249920c;
      FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar19 + 0x50),0);
      if ((unaff_x19[0x6c] == 0) || (lVar19 = *(long *)(unaff_x19[0x6c] + 0x60), lVar19 == 0))
      goto LAB_0249920c;
      if (*(int *)(lVar19 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (unaff_x19[0x73] == 0) goto LAB_0249920c;
      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar19 + 0x58),0);
      if (unaff_x19[0x73] == 0) goto LAB_0249920c;
      FUN_0266ed90(unaff_x19[0x73],0);
      if (unaff_x19[0xe3] == 0) goto LAB_0249920c;
      FUN_02858f1c(unaff_x19[0xe3],unaff_x19[0x73],0);
      if (unaff_x19[0xe3] == 0) goto LAB_0249920c;
      uVar30 = FUN_02858bac(unaff_x19[0xe3],0);
      if (unaff_x19[0xe3] == 0) goto LAB_0249920c;
      uVar13 = FUN_02858a14(unaff_x19[0xe3],0);
      lVar19 = *unaff_x26;
      if (lVar19 == 0) goto LAB_0249920c;
      lVar27 = 0;
      lVar28 = 0;
      break;
    }
    if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*unaff_x26 == 0) || (lVar19 = *(long *)(*unaff_x26 + 0x50), lVar19 == 0))
    goto LAB_0249920c;
    unaff_x27 = (long)(int)in_stack_00000130._4_4_;
    lVar28 = in_stack_00000128 + unaff_x27 * 0x178;
    in_stack_00000140 = *(uint *)(lVar28 + 100);
    if (*(uint *)(lVar19 + 0x18) <= in_stack_00000140)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar27 = *(long *)(lVar28 + 0x38);
    uVar3 = *(ushort *)(lVar28 + 0x20);
    lVar28 = (long)(int)in_stack_00000140;
    lVar19 = lVar19 + lVar28 * unaff_x28;
    uVar5 = *(uint *)(lVar19 + 0x3c);
    in_stack_000000b8 = (long)(int)uVar5;
    iVar12 = *(int *)(lVar19 + 0x28);
    iVar11 = *(int *)(lVar19 + 0x2c);
    uVar6 = *(uint *)(lVar19 + 0x40);
    in_stack_00000120 = (long)(int)uVar6;
    uVar26 = *(uint *)(lVar19 + 0x68);
    fVar39 = *(float *)(lVar19 + 0x5c);
    fVar41 = *(float *)(lVar19 + 0x60);
    iVar2 = *(int *)(lVar19 + 0x20);
    fVar32 = *(float *)(lVar19 + 0x4c);
    fVar33 = *(float *)(lVar19 + 0x54);
    fVar37 = *(float *)(lVar19 + 0x58);
    fVar36 = *(float *)(lVar19 + 0x6c);
    fVar34 = *(float *)(lVar19 + 0x70);
    fVar38 = *(float *)(lVar19 + 0x74);
    fVar35 = *(float *)(lVar19 + 0x78);
    fVar40 = fVar39 + fVar41;
    in_stack_00000138 = (uint)uVar3;
    if ((int)uVar26 < 9) {
      switch(uVar26) {
      case 1:
        if ((char)unaff_x19[0x1d] == '\0') {
          fStack00000000000000c8 = fVar41 + 0.0;
        }
        else {
          fStack00000000000000c8 = 0.0 - fVar37;
        }
        break;
      case 2:
LAB_02496c1c:
        fStack00000000000000c8 = (fVar41 + fVar39 * 0.5) - fVar37 * 0.5;
        break;
      default:
        goto switchD_02496b58_caseD_3;
      case 4:
        fStack00000000000000c8 = fVar40 - fVar37;
        if ((char)unaff_x19[0x1d] != '\0') {
          fStack00000000000000c8 = fVar40;
        }
        break;
      case 8:
        goto switchD_02496b58_caseD_8;
      }
LAB_02496c90:
      in_stack_000000c0 = 0;
    }
    else if (uVar26 == 0x10) {
switchD_02496b58_caseD_8:
      if (uVar3 < 0xad) {
        if ((in_stack_00000138 != 3) && (in_stack_00000138 != 10)) goto LAB_02496bac;
      }
      else if ((in_stack_00000138 != 0xad) &&
              ((in_stack_00000138 != 0x200b && (in_stack_00000138 != 0x2060)))) {
LAB_02496bac:
        if (*(uint *)(in_stack_00000128 + 0x18) <= uVar5)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar4 = *(undefined2 *)(in_stack_00000128 + in_stack_000000b8 * 0x178 + 0x20);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar15 = FUN_016f9f84(uVar4,0);
        if ((uVar15 & 1) == 0) {
          bVar1 = (int)in_stack_00000140 < (int)unaff_x19[0x94];
        }
        else {
          bVar1 = false;
        }
        if ((fVar37 <= fVar39) && (!bVar1 && (uVar26 >> 4 & 1) == 0)) {
          fStack00000000000000c8 = fVar41;
          if ((char)unaff_x19[0x1d] != '\0') {
            fStack00000000000000c8 = fVar40;
          }
          goto LAB_02496c90;
        }
        if (((uVar13 == 1) || (in_stack_00000140 != uVar14)) ||
           (in_stack_00000130._4_4_ == *(uint *)((long)unaff_x19 + 0x31c))) {
          fStack00000000000000c8 = fVar41;
          if ((char)unaff_x19[0x1d] != '\0') {
            fStack00000000000000c8 = fVar40;
          }
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uStack0000000000000020 = FUN_016fa418(uVar3,0);
          in_stack_000000c0 = 0;
        }
        else {
          cVar18 = (char)unaff_x19[0x1d];
          fVar40 = -fVar37;
          if (cVar18 != '\0') {
            fVar40 = fVar37;
          }
          if (*(uint *)(in_stack_00000128 + 0x18) <= uVar5)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar37 = 1.0;
          iVar11 = (int)*(char *)(in_stack_00000128 + in_stack_000000b8 * 0x178 + 0x194) +
                   (-iVar2 - (uStack0000000000000020 & 1)) + iVar11 + -1;
          if (0 < iVar11) {
            fVar37 = *(float *)((long)unaff_x19 + 0x2d4);
          }
          if (iVar11 < 1) {
            iVar11 = 1;
          }
          if (in_stack_00000138 == 9) {
LAB_02498bb8:
            fVar37 = 1.0 - fVar37;
          }
          else {
            if (in_stack_00000138 != 0xa0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar15 = FUN_016fa418(uVar3,0);
              cVar18 = (char)unaff_x19[0x1d];
              if ((uVar15 & 1) != 0) goto LAB_02498bb8;
            }
            iVar11 = (iVar2 - (~uStack0000000000000020 & 1)) + iVar12;
          }
          fVar37 = ((fVar39 + fVar40) * fVar37) / (float)iVar11;
          if (cVar18 == '\0') {
            fStack00000000000000c8 = fStack00000000000000c8 + fVar37;
            in_stack_000000c0 =
                 CONCAT44((float)((ulong)in_stack_000000c0 >> 0x20) + 0.0,
                          (float)in_stack_000000c0 + 0.0);
          }
          else {
            fStack00000000000000c8 = fStack00000000000000c8 - fVar37;
          }
        }
      }
    }
    else if (uVar26 == 0x20) {
      fVar37 = fVar36 + fVar38;
      goto LAB_02496c1c;
    }
switchD_02496b58_caseD_3:
    uVar26 = (uint)*(undefined8 *)(in_stack_00000128 + 0x18);
    if (uVar26 <= in_stack_00000130._4_4_)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar19 = in_stack_00000128 + unaff_x27 * 0x178;
    fVar40 = in_stack_00000098 + fStack00000000000000c8;
    fVar37 = (float)in_stack_00000090 + (float)in_stack_000000c0;
    fVar39 = (float)((ulong)in_stack_00000090 >> 0x20) + (float)((ulong)in_stack_000000c0 >> 0x20);
    if (*(char *)(lVar19 + 0x194) == '\0') goto LAB_02497688;
    iVar12 = *(int *)(in_stack_00000128 + unaff_x27 * 0x178 + 0x2c);
    if (iVar12 != 0) goto LAB_02497374;
    fVar41 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)in_stack_00000140,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
    case 0:
      lVar20 = in_stack_00000128 + unaff_x27 * 0x178;
      *(undefined4 *)(lVar20 + 0x84) = 0;
      *(undefined4 *)(lVar20 + 0xac) = 0;
      *(undefined4 *)(lVar20 + 0xd4) = 0x3f800000;
      fVar41 = 1.0;
      break;
    case 1:
      fVar35 = *(float *)(in_stack_00000128 + unaff_x27 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
        lVar20 = in_stack_00000128 + unaff_x27 * 0x178;
        fVar38 = (fStack00000000000000c8 + fVar35) - *(float *)(in_stack_00000070 + 0x230);
        fVar35 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
        goto LAB_02496df8;
      }
      lVar20 = in_stack_00000128 + unaff_x27 * 0x178;
      fVar38 = fVar38 - fVar36;
      *(float *)(lVar20 + 0x84) = fVar41 + (fVar35 - fVar36) / fVar38;
      *(float *)(lVar20 + 0xac) = fVar41 + (*(float *)(lVar20 + 0x98) - fVar36) / fVar38;
      *(float *)(lVar20 + 0xd4) = fVar41 + (*(float *)(lVar20 + 0xc0) - fVar36) / fVar38;
      fVar41 = fVar41 + (*(float *)(lVar20 + 0xe8) - fVar36) / fVar38;
      break;
    case 2:
      lVar20 = in_stack_00000128 + unaff_x27 * 0x178;
      fVar35 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      fVar38 = (fStack00000000000000c8 + *(float *)(lVar20 + 0x70)) -
               *(float *)(in_stack_00000070 + 0x230);
LAB_02496df8:
      *(float *)(lVar20 + 0x84) = fVar41 + fVar38 / fVar35;
      *(float *)(lVar20 + 0xac) =
           fVar41 + ((fStack00000000000000c8 + *(float *)(lVar20 + 0x98)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      *(float *)(lVar20 + 0xd4) =
           fVar41 + ((fStack00000000000000c8 + *(float *)(lVar20 + 0xc0)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      fVar41 = fVar41 + ((fStack00000000000000c8 + *(float *)(lVar20 + 0xe8)) -
                        *(float *)(in_stack_00000070 + 0x230)) /
                        (*(float *)(in_stack_00000070 + 0x238) -
                        *(float *)(in_stack_00000070 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x61]) {
      case 0:
        lVar20 = in_stack_00000128 + unaff_x27 * 0x178;
        *(undefined4 *)(lVar20 + 0x88) = 0;
        *(undefined4 *)(lVar20 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar20 + 0xd8) = 0;
        *(undefined4 *)(lVar20 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar20 = in_stack_00000128 + unaff_x27 * 0x178;
        fVar35 = fVar35 - fVar34;
        fVar38 = fVar41 + (*(float *)(lVar20 + 0x74) - fVar34) / fVar35;
        fVar35 = fVar41 + (*(float *)(lVar20 + 0x9c) - fVar34) / fVar35;
        *(float *)(lVar20 + 0x88) = fVar38;
        *(float *)(lVar20 + 0xb0) = fVar35;
        *(float *)(lVar20 + 0xd8) = fVar38;
        *(float *)(lVar20 + 0x100) = fVar35;
        break;
      case 2:
        lVar20 = in_stack_00000128 + unaff_x27 * 0x178;
        fVar38 = fVar41 + (*(float *)(lVar20 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                          (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
        *(float *)(lVar20 + 0x88) = fVar38;
        fVar35 = *(float *)(unaff_x19 + 0x9b);
        fVar34 = *(float *)(unaff_x19 + 0x9c);
        *(float *)(lVar20 + 0xd8) = fVar38;
        fVar38 = fVar41 + (*(float *)(lVar20 + 0x9c) - fVar35) / (fVar34 - fVar35);
        *(float *)(lVar20 + 0xb0) = fVar38;
        *(float *)(lVar20 + 0x100) = fVar38;
        break;
      case 3:
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
        uVar26 = (uint)*(undefined8 *)(in_stack_00000128 + 0x18);
      }
      if (uVar26 <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar20 = in_stack_00000128 + unaff_x27 * 0x178;
      fVar38 = *(float *)(lVar20 + 0x15c);
      fVar35 = (1.0 - (*(float *)(lVar20 + 0x88) + *(float *)(lVar20 + 0xb0)) * fVar38) * 0.5;
      fVar34 = fVar41 + *(float *)(lVar20 + 0x88) * fVar38 + fVar35;
      fVar41 = fVar41 + fVar35 + *(float *)(lVar20 + 0xb0) * fVar38;
      *(float *)(lVar20 + 0x84) = fVar34;
      *(float *)(lVar20 + 0xac) = fVar34;
      *(float *)(lVar20 + 0xd4) = fVar41;
      break;
    default:
      goto switchD_02496d4c_default;
    }
    *(float *)(in_stack_00000128 + unaff_x27 * 0x178 + 0xfc) = fVar41;
switchD_02496d4c_default:
    switch((int)unaff_x19[0x61]) {
    case 0:
      if (uVar26 <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar20 = in_stack_00000128 + unaff_x27 * 0x178;
      *(undefined4 *)(lVar20 + 0x88) = 0;
      *(undefined4 *)(lVar20 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar20 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar20 + 0x100) = 0;
      break;
    case 1:
      if (in_stack_00000130._4_4_ < uVar26) {
        lVar20 = in_stack_00000128 + unaff_x27 * 0x178;
        fVar32 = fVar32 - fVar33;
        fVar38 = (*(float *)(lVar20 + 0x74) - fVar33) / fVar32;
        fVar32 = (*(float *)(lVar20 + 0x9c) - fVar33) / fVar32;
        *(float *)(lVar20 + 0x88) = fVar38;
        goto LAB_02497174;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    case 2:
      if (uVar26 <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar20 = in_stack_00000128 + unaff_x27 * 0x178;
      fVar38 = (*(float *)(lVar20 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar20 + 0x88) = fVar38;
      fVar32 = (*(float *)(lVar20 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_02497174:
      *(float *)(lVar20 + 0xb0) = fVar32;
      *(float *)(lVar20 + 0xd8) = fVar32;
      *(float *)(lVar20 + 0x100) = fVar38;
      break;
    case 3:
      if (uVar26 <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar20 = in_stack_00000128 + unaff_x27 * 0x178;
      fVar35 = *(float *)(lVar20 + 0x15c);
      fVar32 = (1.0 - (*(float *)(lVar20 + 0x84) + *(float *)(lVar20 + 0xd4)) / fVar35) * 0.5;
      fVar38 = *(float *)(lVar20 + 0x84) / fVar35 + fVar32;
      fVar32 = fVar32 + *(float *)(lVar20 + 0xd4) / fVar35;
      *(float *)(lVar20 + 0x88) = fVar38;
      *(float *)(lVar20 + 0xb0) = fVar32;
      *(float *)(lVar20 + 0x100) = fVar38;
      *(float *)(lVar20 + 0xd8) = fVar32;
    }
    if (uVar26 <= in_stack_00000130._4_4_)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar20 = in_stack_00000128 + unaff_x27 * 0x178;
    unaff_s13 = *(float *)(lVar20 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
    if ((*(char *)(lVar20 + 0x5c) == '\0') &&
       ((*(byte *)(in_stack_00000128 + unaff_x27 * 0x178 + 400) & 1) != 0)) {
      unaff_s13 = -unaff_s13;
    }
    fVar38 = in_stack_00000038;
    if (((in_stack_00000040 == 2) || (fVar38 = fStack0000000000000028, in_stack_00000040 == 1)) ||
       (fVar38 = fStack0000000000000024, in_stack_00000040 == 0)) {
      unaff_s13 = fVar38 * unaff_s13;
    }
    lVar20 = in_stack_00000128 + unaff_x27 * 0x178;
    fVar32 = *(float *)(lVar20 + 0x88);
    fVar35 = *(float *)(lVar20 + 0x84);
    fVar38 = -2.1474836e+09;
    if (fVar35 != INFINITY) {
      fVar38 = (float)(int)fVar35;
    }
    fVar34 = *(float *)(lVar20 + 0xd4);
    fVar36 = *(float *)(lVar20 + 0xd8);
    fVar33 = -2.1474836e+09;
    if (fVar32 != INFINITY) {
      fVar33 = (float)(int)fVar32;
    }
    uVar29 = FUN_024e0374(fVar35 - fVar38,fVar32 - fVar33);
    *(undefined4 *)(lVar20 + 0x84) = uVar29;
    if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar36 = fVar36 - fVar33;
    *(float *)(lVar20 + 0x88) = unaff_s13;
    uVar29 = FUN_024e0374(fVar35 - fVar38,fVar36);
    *(undefined4 *)(in_stack_00000128 + unaff_x27 * 0x178 + 0xac) = uVar29;
    if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar34 = fVar34 - fVar38;
    *(float *)(in_stack_00000128 + unaff_x27 * 0x178 + 0xb0) = unaff_s13;
    fVar38 = (float)FUN_024e0374(fVar34,fVar36);
    *(float *)(lVar20 + 0xd4) = fVar38;
    if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar20 + 0xd8) = unaff_s13;
    uVar29 = FUN_024e0374(fVar34,fVar32 - fVar33);
    *(undefined4 *)(in_stack_00000128 + unaff_x27 * 0x178 + 0xfc) = uVar29;
    uVar26 = (uint)*(undefined8 *)(in_stack_00000128 + 0x18);
    if (uVar26 <= in_stack_00000130._4_4_)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(in_stack_00000128 + unaff_x27 * 0x178 + 0x100) = unaff_s13;
LAB_02497374:
    if (((int)unaff_x19[100] <= (int)in_stack_00000130._4_4_) ||
       (*(int *)((long)unaff_x19 + 0x324) <= iStack00000000000000ac)) goto LAB_02497490;
    if (((int)in_stack_00000140 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar26 <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar19 = in_stack_00000128 + unaff_x27 * 0x178;
      *(ulong *)(lVar19 + 0x70) =
           CONCAT44(fVar37 + (float)((ulong)*(undefined8 *)(lVar19 + 0x70) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar19 + 0x70));
      *(float *)(lVar19 + 0x78) = fVar39 + *(float *)(lVar19 + 0x78);
      if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar19 = in_stack_00000128 + unaff_x27 * 0x178;
      *(ulong *)(lVar19 + 0x98) =
           CONCAT44(fVar37 + (float)((ulong)*(undefined8 *)(lVar19 + 0x98) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar19 + 0x98));
      *(float *)(lVar19 + 0xa0) = fVar39 + *(float *)(lVar19 + 0xa0);
      if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar19 = in_stack_00000128 + unaff_x27 * 0x178;
      *(ulong *)(lVar19 + 0xc0) =
           CONCAT44(fVar37 + (float)((ulong)*(undefined8 *)(lVar19 + 0xc0) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar19 + 0xc0));
      *(float *)(lVar19 + 200) = fVar39 + *(float *)(lVar19 + 200);
      if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar19 = in_stack_00000128 + unaff_x27 * 0x178;
      *(ulong *)(lVar19 + 0xe8) =
           CONCAT44(fVar37 + (float)((ulong)*(undefined8 *)(lVar19 + 0xe8) >> 0x20),
                    fVar40 + (float)*(undefined8 *)(lVar19 + 0xe8));
      *(float *)(lVar19 + 0xf0) = fVar39 + *(float *)(lVar19 + 0xf0);
      if (iVar12 == 0) goto LAB_02497668;
LAB_02497598:
      if (iVar12 == 1) {
        pcVar21 = *(code **)(*unaff_x19 + 0x8f8);
        goto LAB_02497674;
      }
    }
    else {
      if (((int)in_stack_00000140 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
        if (uVar26 <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(int *)(in_stack_00000128 + unaff_x27 * 0x178 + 0x68) != iStack000000000000002c)
        goto LAB_02497490;
        lVar19 = in_stack_00000128 + unaff_x27 * 0x178;
        *(ulong *)(lVar19 + 0x70) =
             CONCAT44(fVar37 + (float)((ulong)*(undefined8 *)(lVar19 + 0x70) >> 0x20),
                      fVar40 + (float)*(undefined8 *)(lVar19 + 0x70));
        *(float *)(lVar19 + 0x78) = fVar39 + *(float *)(lVar19 + 0x78);
        if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar19 = in_stack_00000128 + unaff_x27 * 0x178;
        *(ulong *)(lVar19 + 0x98) =
             CONCAT44(fVar37 + (float)((ulong)*(undefined8 *)(lVar19 + 0x98) >> 0x20),
                      fVar40 + (float)*(undefined8 *)(lVar19 + 0x98));
        *(float *)(lVar19 + 0xa0) = fVar39 + *(float *)(lVar19 + 0xa0);
        if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar19 = in_stack_00000128 + unaff_x27 * 0x178;
        *(ulong *)(lVar19 + 0xc0) =
             CONCAT44(fVar37 + (float)((ulong)*(undefined8 *)(lVar19 + 0xc0) >> 0x20),
                      fVar40 + (float)*(undefined8 *)(lVar19 + 0xc0));
        *(float *)(lVar19 + 200) = fVar39 + *(float *)(lVar19 + 200);
        if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar19 = in_stack_00000128 + unaff_x27 * 0x178;
        *(ulong *)(lVar19 + 0xe8) =
             CONCAT44(fVar37 + (float)((ulong)*(undefined8 *)(lVar19 + 0xe8) >> 0x20),
                      fVar40 + (float)*(undefined8 *)(lVar19 + 0xe8));
        *(float *)(lVar19 + 0xf0) = fVar39 + *(float *)(lVar19 + 0xf0);
      }
      else {
LAB_02497490:
        if (uVar26 <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        puVar8 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        lVar20 = in_stack_00000128 + unaff_x27 * 0x178;
        uVar29 = *(undefined4 *)
                  (*(undefined8 **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8) + 1);
        *(undefined8 *)(lVar20 + 0x70) =
             **(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        *(undefined4 *)(lVar20 + 0x78) = uVar29;
        if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar20 = in_stack_00000128 + unaff_x27 * 0x178;
        uVar29 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
        *(undefined8 *)(lVar20 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
        *(undefined4 *)(lVar20 + 0xa0) = uVar29;
        if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar20 = in_stack_00000128 + unaff_x27 * 0x178;
        uVar29 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
        *(undefined8 *)(lVar20 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
        *(undefined4 *)(lVar20 + 200) = uVar29;
        if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar20 = in_stack_00000128 + unaff_x27 * 0x178;
        uVar29 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
        *(undefined8 *)(lVar20 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
        *(undefined4 *)(lVar20 + 0xf0) = uVar29;
        if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(undefined1 *)(lVar19 + 0x194) = 0;
      }
      if (iVar12 != 0) goto LAB_02497598;
LAB_02497668:
      pcVar21 = *(code **)(*unaff_x19 + 0x8d8);
LAB_02497674:
      (*pcVar21)();
    }
LAB_02497688:
    if ((*in_stack_00000150 == 0) || (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar19 + 0x18) <= in_stack_00000130._4_4_)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar19 = lVar19 + unaff_x27 * 0x178;
    uVar30 = *(undefined8 *)(lVar19 + 0x11c);
    *(undefined8 *)(lVar19 + 0x11c) =
         CONCAT44(fVar37 + (float)((ulong)uVar30 >> 0x20),fVar40 + (float)uVar30);
    *(float *)(lVar19 + 0x124) = fVar39 + *(float *)(lVar19 + 0x124);
    if ((*in_stack_00000150 == 0) || (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar19 + 0x18) <= in_stack_00000130._4_4_)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar19 = lVar19 + unaff_x27 * 0x178;
    *(ulong *)(lVar19 + 0x110) =
         CONCAT44(fVar37 + (float)((ulong)*(undefined8 *)(lVar19 + 0x110) >> 0x20),
                  fVar40 + (float)*(undefined8 *)(lVar19 + 0x110));
    *(float *)(lVar19 + 0x118) = fVar39 + *(float *)(lVar19 + 0x118);
    if ((*in_stack_00000150 == 0) || (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar19 + 0x18) <= in_stack_00000130._4_4_)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar19 = lVar19 + unaff_x27 * 0x178;
    *(ulong *)(lVar19 + 0x128) =
         CONCAT44(fVar37 + (float)((ulong)*(undefined8 *)(lVar19 + 0x128) >> 0x20),
                  fVar40 + (float)*(undefined8 *)(lVar19 + 0x128));
    *(float *)(lVar19 + 0x130) = fVar39 + *(float *)(lVar19 + 0x130);
    if ((*in_stack_00000150 == 0) || (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar19 + 0x18) <= in_stack_00000130._4_4_)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar19 = lVar19 + unaff_x27 * 0x178;
    *(float *)(lVar19 + 0x134) = fVar40 + *(float *)(lVar19 + 0x134);
    *(ulong *)(lVar19 + 0x138) =
         CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar19 + 0x138) >> 0x20),
                  fVar37 + (float)*(undefined8 *)(lVar19 + 0x138));
    lVar19 = *in_stack_00000150;
    if ((lVar19 == 0) || (lVar20 = *(long *)(lVar19 + 0x38), lVar20 == 0)) goto LAB_0249920c;
    uVar26 = *(uint *)(lVar20 + 0x18);
    if (uVar26 <= in_stack_00000130._4_4_)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar22 = lVar20 + unaff_x27 * 0x178;
    uVar15 = CONCAT44(fVar40 + (float)((ulong)*(undefined8 *)(lVar22 + 0x140) >> 0x20),
                      fVar40 + (float)*(undefined8 *)(lVar22 + 0x140));
    fVar38 = fVar37 + *(float *)(lVar22 + 0x150);
    uVar31 = (ulong)(uint)fVar38;
    param_5 = CONCAT44(fVar37 + (float)((ulong)*(undefined8 *)(lVar22 + 0x148) >> 0x20),
                       fVar37 + (float)*(undefined8 *)(lVar22 + 0x148));
    *(ulong *)(lVar22 + 0x140) = uVar15;
    *(ulong *)(lVar22 + 0x148) = param_5;
    *(float *)(lVar22 + 0x150) = fVar38;
    if (in_stack_00000140 == uVar14) {
      uVar14 = *in_stack_00000148 - 1;
      if (in_stack_00000130._4_4_ == uVar14) goto LAB_0249788c;
    }
    else {
      lVar19 = *(long *)(lVar19 + 0x50);
      if (lVar19 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar19 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar22 = (long)(int)uVar14;
      lVar23 = lVar19 + lVar22 * 0x5c;
      param_5 = (ulong)(uint)*(float *)(lVar23 + 0x58);
      fVar38 = fVar37 + *(float *)(lVar23 + 0x54);
      uVar15 = (ulong)(uint)fVar38;
      fVar32 = fVar40 + *(float *)(lVar23 + 0x58);
      uVar31 = (ulong)(uint)fVar32;
      *(ulong *)(lVar23 + 0x4c) =
           CONCAT44(fVar37 + (float)((ulong)*(undefined8 *)(lVar23 + 0x4c) >> 0x20),
                    fVar37 + (float)*(undefined8 *)(lVar23 + 0x4c));
      *(float *)(lVar23 + 0x54) = fVar38;
      *(float *)(lVar23 + 0x58) = fVar32;
      if (uVar26 <= *(uint *)(lVar23 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar29 = *(undefined4 *)(lVar20 + (long)(int)*(uint *)(lVar23 + 0x34) * 0x178 + 0x11c);
      lVar19 = lVar19 + lVar22 * 0x5c;
      *(float *)(lVar19 + 0x70) = fVar38;
      *(undefined4 *)(lVar19 + 0x6c) = uVar29;
      lVar19 = *in_stack_00000150;
      if ((lVar19 == 0) || (lVar20 = *(long *)(lVar19 + 0x50), lVar20 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar20 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar19 = *(long *)(lVar19 + 0x38);
      if (lVar19 == 0) goto LAB_0249920c;
      uVar14 = *(uint *)(lVar20 + lVar22 * 0x5c + 0x40);
      if (*(uint *)(lVar19 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar20 = lVar20 + lVar22 * 0x5c;
      *(undefined4 *)(lVar20 + 0x74) = *(undefined4 *)(lVar19 + (long)(int)uVar14 * 0x178 + 0x128);
      *(undefined4 *)(lVar20 + 0x78) = *(undefined4 *)(lVar20 + 0x4c);
      uVar14 = *in_stack_00000148 - 1;
LAB_0249788c:
      if (in_stack_00000130._4_4_ == uVar14) {
        lVar19 = *in_stack_00000150;
        if ((lVar19 == 0) || (lVar20 = *(long *)(lVar19 + 0x50), lVar20 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar20 + 0x18) <= in_stack_00000140)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar22 = lVar20 + lVar28 * 0x5c;
        param_5 = (ulong)(uint)*(float *)(lVar22 + 0x58);
        uVar15 = CONCAT44(fVar37 + (float)((ulong)*(undefined8 *)(lVar22 + 0x4c) >> 0x20),
                          fVar37 + (float)*(undefined8 *)(lVar22 + 0x4c));
        fVar38 = fVar37 + *(float *)(lVar22 + 0x54);
        fVar40 = fVar40 + *(float *)(lVar22 + 0x58);
        uVar31 = (ulong)(uint)fVar40;
        *(ulong *)(lVar22 + 0x4c) = uVar15;
        *(float *)(lVar22 + 0x54) = fVar38;
        *(float *)(lVar22 + 0x58) = fVar40;
        lVar19 = *(long *)(lVar19 + 0x38);
        if (lVar19 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar19 + 0x18) <= *(uint *)(lVar22 + 0x34))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar29 = *(undefined4 *)(lVar19 + (long)(int)*(uint *)(lVar22 + 0x34) * 0x178 + 0x11c);
        lVar20 = lVar20 + lVar28 * 0x5c;
        *(float *)(lVar20 + 0x70) = fVar38;
        *(undefined4 *)(lVar20 + 0x6c) = uVar29;
        lVar19 = *in_stack_00000150;
        if ((lVar19 == 0) || (lVar20 = *(long *)(lVar19 + 0x50), lVar20 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar20 + 0x18) <= in_stack_00000140)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar19 = *(long *)(lVar19 + 0x38);
        if (lVar19 == 0) goto LAB_0249920c;
        uVar14 = *(uint *)(lVar20 + lVar28 * 0x5c + 0x40);
        if (*(uint *)(lVar19 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar20 = lVar20 + lVar28 * 0x5c;
        *(undefined4 *)(lVar20 + 0x74) = *(undefined4 *)(lVar19 + (long)(int)uVar14 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar20 + 0x78) = *(undefined4 *)(lVar20 + 0x4c);
      }
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar16 = FUN_016f9468(in_stack_00000138,0);
    if (((((uVar16 & 1) == 0) && (1 < in_stack_00000138 - 0x2010)) && (in_stack_00000138 != 0xad))
       && (in_stack_00000138 != 0x2d)) {
      if ((uStack00000000000000e8 & 1) == 0) {
        if (uVar13 != 1) {
LAB_024985a0:
          uStack00000000000000e8 = 0;
          goto LAB_02497aac;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar16 = FUN_016f93a0(in_stack_00000138,0);
        if ((uVar16 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar16 = FUN_016f68bc(in_stack_00000138,0);
          if (((in_stack_00000138 != 0x200b) && ((uVar16 & 1) == 0)) && (*in_stack_00000148 != 1))
          goto LAB_024985a0;
        }
      }
      else if (((uVar13 != 1) &&
               ((int)in_stack_00000130._4_4_ < (int)(*(uint *)(in_stack_00000128 + 0x18) - 1))) &&
              (((int)in_stack_00000130._4_4_ < *in_stack_00000148 &&
               ((in_stack_00000138 == 0x2019 || (in_stack_00000138 == 0x27)))))) {
        if (*(uint *)(in_stack_00000128 + 0x18) <= in_stack_00000130._4_4_ - 1)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar4 = *(undefined2 *)(in_stack_00000128 + unaff_x21 + -0x438);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar16 = FUN_016f9468(uVar4,0);
        if ((uVar16 & 1) != 0) {
          if (*(uint *)(in_stack_00000128 + 0x18) <= uVar13)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar4 = *(undefined2 *)(in_stack_00000128 + unaff_x21 + -0x148);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar16 = FUN_016f9468(uVar4,0);
          if ((uVar16 & 1) != 0) goto LAB_02497aa4;
        }
      }
      if (in_stack_00000130._4_4_ == *in_stack_00000148 - 1U) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar16 = FUN_016f9468(in_stack_00000138,0);
        iVar12 = unaff_w29;
        if ((uVar16 & 1) == 0) goto LAB_02497de0;
      }
      else {
LAB_02497de0:
        iVar12 = in_stack_00000130._4_4_ - 1;
      }
      lVar19 = *in_stack_00000150;
      if (lVar19 == 0) goto LAB_0249920c;
      lVar20 = *(long *)(lVar19 + 0x40);
      if (lVar20 == 0) goto LAB_0249920c;
      uVar14 = *(uint *)(lVar19 + 0x24);
      iVar11 = *(int *)(lVar20 + 0x18);
      if (iVar11 < (int)(uVar14 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar19 + 0x40),iVar11 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar19 = *in_stack_00000150;
        if (lVar19 == 0) goto LAB_0249920c;
      }
      lVar20 = *(long *)(lVar19 + 0x40);
      if (lVar20 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar20 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar20 = lVar20 + (long)(int)uVar14 * 0x18;
      *(uint *)(lVar20 + 0x28) = unaff_w25;
      *(int *)(lVar20 + 0x2c) = iVar12;
      *(uint *)(lVar20 + 0x30) = (iVar12 - unaff_w25) + 1;
      *(long **)(lVar20 + 0x20) = unaff_x19;
      lVar20 = *(long *)(lVar19 + 0x50);
      *(int *)(lVar19 + 0x24) = *(int *)(lVar19 + 0x24) + 1;
      if (lVar20 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar20 + 0x18) <= in_stack_00000140)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar20 = lVar20 + lVar28 * 0x5c;
      uStack00000000000000e8 = 0;
      iStack00000000000000ac = iStack00000000000000ac + 1;
      *(int *)(lVar20 + 0x30) = *(int *)(lVar20 + 0x30) + 1;
    }
    else {
      if ((uStack00000000000000e8 & 1) == 0) {
        unaff_w25 = in_stack_00000130._4_4_;
      }
      if (in_stack_00000130._4_4_ == *in_stack_00000148 - 1U) {
        lVar19 = *in_stack_00000150;
        if (lVar19 == 0) goto LAB_0249920c;
        lVar20 = *(long *)(lVar19 + 0x40);
        if (lVar20 == 0) goto LAB_0249920c;
        uVar14 = *(uint *)(lVar19 + 0x24);
        iVar12 = *(int *)(lVar20 + 0x18);
        if (iVar12 < (int)(uVar14 + 1)) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147b84((long *)(lVar19 + 0x40),iVar12 + 1,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
          lVar19 = *in_stack_00000150;
          if (lVar19 == 0) goto LAB_0249920c;
        }
        lVar20 = *(long *)(lVar19 + 0x40);
        if (lVar20 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar20 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar20 = lVar20 + (long)(int)uVar14 * 0x18;
        *(uint *)(lVar20 + 0x28) = unaff_w25;
        *(uint *)(lVar20 + 0x2c) = in_stack_00000130._4_4_;
        *(long **)(lVar20 + 0x20) = unaff_x19;
        *(uint *)(lVar20 + 0x30) = uVar13 - unaff_w25;
        lVar20 = *(long *)(lVar19 + 0x50);
        *(int *)(lVar19 + 0x24) = *(int *)(lVar19 + 0x24) + 1;
        if (lVar20 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar20 + 0x18) <= in_stack_00000140)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar20 = lVar20 + lVar28 * 0x5c;
        iStack00000000000000ac = iStack00000000000000ac + 1;
        *(int *)(lVar20 + 0x30) = *(int *)(lVar20 + 0x30) + 1;
      }
LAB_02497aa4:
      uStack00000000000000e8 = 1;
    }
LAB_02497aac:
    if ((*in_stack_00000150 == 0) || (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0))
    goto LAB_0249920c;
    uVar14 = *(uint *)(lVar19 + 0x18);
    if (uVar14 <= in_stack_00000130._4_4_)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar19 + unaff_x27 * 0x178 + 400) >> 2 & 1) == 0) {
      if ((in_stack_000000f0._4_4_ & 1) == 0) {
LAB_02497fc4:
        in_stack_000000f0._4_4_ = 0;
      }
      else {
LAB_02497adc:
        if (uVar14 <= in_stack_00000130._4_4_ - 1)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = *unaff_x19;
        uVar14 = *(uint *)(lVar19 + unaff_x21 + -0x330);
        uVar29 = *(undefined4 *)(lVar19 + unaff_x21 + -0x2f8);
LAB_0249805c:
        pcVar21 = *(code **)(lVar28 + 0x908);
LAB_02498064:
        param_5 = (ulong)uVar14;
        uVar15 = (ulong)(uint)fStack0000000000000050;
        fStack0000000000000008 = fStack00000000000000cc;
        uVar31 = (ulong)uStack0000000000000054;
        fStack0000000000000000 = unaff_s15;
        (*pcVar21)(uStack0000000000000058,uVar15,uVar31,param_5,in_stack_000000d0,0,
                   fStack000000000000005c,uVar29);
        puVar8 = System_Threading_Mutex_TypeInfo;
        lVar19 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar19 = *(long *)puVar8;
        }
LAB_024980b4:
        in_stack_000000f0._4_4_ = 0;
        unaff_s15 = 0.0;
        in_stack_000000d0 = *(float *)(*(long *)(lVar19 + 0xb8) + 0x15a8);
        fStack00000000000000cc = 0.0;
      }
    }
    else {
      lVar19 = lVar19 + unaff_x27 * 0x178;
      iVar12 = *(int *)(lVar19 + 0x68);
      *(undefined4 *)(lVar19 + 0x16c) = in_stack_000017a4;
      if ((((int)unaff_x19[100] < (int)in_stack_00000130._4_4_) ||
          ((int)unaff_x19[0x65] < (int)in_stack_00000140)) ||
         (((int)unaff_x19[0x5b] == 5 && (iVar12 + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar16 = FUN_016f68bc(in_stack_00000138,0);
      if ((in_stack_00000138 != 0x200b) && ((uVar16 & 1) == 0)) {
        lVar19 = *in_stack_00000150;
        if ((lVar19 == 0) || (lVar28 = *(long *)(lVar19 + 0x38), lVar28 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar28 + 0x18) <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar38 = *(float *)(lVar28 + unaff_x27 * 0x178 + 0x160);
        if (unaff_s15 <= fVar38) {
          unaff_s15 = fVar38;
        }
        if (fStack00000000000000cc <= ABS(unaff_s13)) {
          fStack00000000000000cc = ABS(unaff_s13);
        }
        if (iVar12 != in_stack_00000048._4_4_) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar19 = *in_stack_00000150;
            if (lVar19 == 0) goto LAB_0249920c;
            lVar28 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          else {
            lVar28 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          in_stack_000000d0 = *(float *)(lVar28 + 0x15a8);
        }
        lVar19 = *(long *)(lVar19 + 0x38);
        if (lVar19 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar19 + 0x18) <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0x1e] == 0) goto LAB_0249920c;
        fVar32 = *(float *)(lVar19 + unaff_x27 * 0x178 + 0x14c);
        fVar38 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
        fVar32 = fVar32 + unaff_s15 * fVar38;
        if (fVar32 <= in_stack_000000d0) {
          in_stack_000000d0 = fVar32;
        }
        uVar15 = (ulong)(uint)in_stack_000000d0;
        in_stack_00000048._4_4_ = iVar12;
      }
      if ((in_stack_000000f0._4_4_ & 1) == 0) {
        in_stack_000000f0._4_4_ = 0;
        if ((((in_stack_00000138 == 0xd) || ((in_stack_00000138 | 1) == 0xb)) ||
            ((int)uVar6 < (int)in_stack_00000130._4_4_)) || ((bool)(bVar1 ^ 1))) goto LAB_024980d0;
        if (in_stack_00000130._4_4_ == uVar6) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar16 = FUN_016fa418(in_stack_00000138,0);
          if ((uVar16 & 1) != 0) goto LAB_02497fc4;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar19 + 0x18) <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar19 = lVar19 + unaff_x27 * 0x178;
        fStack000000000000005c = *(float *)(lVar19 + 0x160);
        uStack0000000000000058 = *(undefined4 *)(lVar19 + 0x11c);
        bVar10 = unaff_s15 != 0.0;
        fVar38 = fStack000000000000005c;
        if (bVar10) {
          fVar38 = unaff_s15;
        }
        unaff_s15 = fVar38;
        in_stack_00000060 = *(undefined4 *)(lVar19 + 0x168);
        uStack0000000000000054 = 0;
        fVar38 = unaff_s13;
        if (bVar10) {
          fVar38 = fStack00000000000000cc;
        }
        uVar15 = (ulong)(uint)fVar38;
        fStack0000000000000050 = in_stack_000000d0;
        fStack00000000000000cc = fVar38;
      }
      if (*in_stack_00000148 == 1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 != 0)) {
          if (in_stack_00000130._4_4_ < *(uint *)(lVar19 + 0x18)) {
            lVar19 = lVar19 + unaff_x27 * 0x178;
            lVar28 = *unaff_x19;
            uVar14 = *(uint *)(lVar19 + 0x128);
            uVar29 = *(undefined4 *)(lVar19 + 0x160);
            goto LAB_0249805c;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if ((in_stack_00000130._4_4_ == uVar5) || ((int)uVar6 <= (int)in_stack_00000130._4_4_)) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar15 = FUN_016f68bc(in_stack_00000138,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 != 0)) {
          if (in_stack_00000138 == 0x200b || (uVar15 & 1) != 0) {
            lVar28 = in_stack_00000120;
            if (*(uint *)(lVar19 + 0x18) <= uVar6)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
            lVar28 = unaff_x27;
            if (*(uint *)(lVar19 + 0x18) <= in_stack_00000130._4_4_)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          lVar19 = lVar19 + lVar28 * 0x178;
          uVar14 = *(uint *)(lVar19 + 0x128);
          uVar29 = *(undefined4 *)(lVar19 + 0x160);
          pcVar21 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_02498064;
        }
        goto LAB_0249920c;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 != 0)) {
          uVar14 = *(uint *)(lVar19 + 0x18);
          goto LAB_02497adc;
        }
        goto LAB_0249920c;
      }
      if ((int)in_stack_00000130._4_4_ < *in_stack_00000148 + -1) {
        if ((*in_stack_00000150 == 0) ||
           (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar19 + 0x18) <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar16 = FUN_024a9e4c(in_stack_00000060,*(undefined4 *)(lVar19 + unaff_x21),0);
        if ((uVar16 & 1) == 0) {
          if ((*in_stack_00000150 != 0) &&
             (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 != 0)) {
            if (in_stack_00000130._4_4_ < *(uint *)(lVar19 + 0x18)) {
              lVar19 = lVar19 + unaff_x27 * 0x178;
              param_5 = (ulong)*(uint *)(lVar19 + 0x128);
              fStack0000000000000008 = fStack00000000000000cc;
              uVar31 = (ulong)uStack0000000000000054;
              uVar15 = (ulong)(uint)fStack0000000000000050;
              fStack0000000000000000 = unaff_s15;
              (**(code **)(*unaff_x19 + 0x908))
                        (uStack0000000000000058,uVar15,uVar31,param_5,in_stack_000000d0,0,
                         fStack000000000000005c,*(undefined4 *)(lVar19 + 0x160));
              puVar8 = System_Threading_Mutex_TypeInfo;
              lVar19 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar19 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar19 = *(long *)puVar8;
              }
              goto LAB_024980b4;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          goto LAB_0249920c;
        }
      }
      in_stack_000000f0._4_4_ = 1;
    }
LAB_024980d0:
    unaff_x28 = 0x5c;
    unaff_x22 = 0x178;
    if ((*in_stack_00000150 == 0) || (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar19 + 0x18) <= in_stack_00000130._4_4_)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (lVar27 == 0) goto LAB_0249920c;
    uVar14 = *(uint *)(lVar19 + unaff_x27 * 0x178 + 400);
    fVar38 = (float)FUN_026fd1f0(lVar27 + 0x50,0);
    unaff_x24 = in_stack_00000148;
    unaff_x26 = in_stack_00000150;
    unaff_w23 = in_stack_00000130._4_4_;
    if ((uVar14 >> 6 & 1) == 0) {
      if (bVar7) {
        param_8 = (ulong)(uint)in_stack_00000088;
        if ((*in_stack_00000150 == 0) ||
           (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar19 + 0x18) <= in_stack_00000130._4_4_ - 1)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        param_5 = (ulong)*(uint *)(lVar19 + unaff_x21 + -0x330);
        param_1 = *(code **)(*unaff_x19 + 0x908);
        param_2 = in_stack_00000088 * fVar38 + *(float *)(lVar19 + unaff_x21 + -0x30c);
        in_stack_00000130._4_4_ = uVar13;
        goto LAB_02498648;
      }
      goto LAB_0249867c;
    }
    lVar19 = *in_stack_00000150;
    if ((lVar19 == 0) || (lVar28 = *(long *)(lVar19 + 0x38), lVar28 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar28 + 0x18) <= in_stack_00000130._4_4_)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(undefined4 *)(lVar28 + unaff_x27 * 0x178 + 0x174) = in_stack_000017a4;
    if ((((int)unaff_x19[100] < (int)in_stack_00000130._4_4_) ||
        ((int)unaff_x19[0x65] < (int)in_stack_00000140)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar28 + unaff_x27 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((in_stack_00000138 == 0xd) || ((in_stack_00000138 | 1) == 0xb)) ||
        ((int)uVar6 < (int)in_stack_00000130._4_4_)) || (bVar7 || !bVar1)) {
LAB_02498228:
      if (!bVar7) goto LAB_0249867c;
    }
    else {
      if (in_stack_00000130._4_4_ == uVar6) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar16 = FUN_016fa418(in_stack_00000138,0);
        if ((uVar16 & 1) != 0) goto LAB_02498228;
        lVar19 = *in_stack_00000150;
        if (lVar19 == 0) goto LAB_0249920c;
      }
      lVar19 = *(long *)(lVar19 + 0x38);
      if (lVar19 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar19 + 0x18) <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar19 = lVar19 + unaff_x27 * 0x178;
      fStack0000000000000034 = *(float *)(lVar19 + 0x60);
      in_stack_00000088 = *(float *)(lVar19 + 0x160);
      fStack0000000000000030 = *(float *)(lVar19 + 0x14c);
      uVar15 = (ulong)(uint)fStack0000000000000030;
      in_stack_00000080 = *(undefined4 *)(lVar19 + 0x11c);
      in_stack_00000078._4_4_ = fVar38 * in_stack_00000088 + fStack0000000000000030;
      in_stack_00000068._4_4_ = 0;
    }
    iVar12 = *in_stack_00000148;
    unaff_s8 = fVar38 * in_stack_00000088;
    if (iVar12 == 1) {
LAB_024983ac:
      if ((*in_stack_00000150 == 0) || (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar19 + 0x18) <= in_stack_00000130._4_4_)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar19 = lVar19 + unaff_x27 * 0x178;
      lVar28 = *unaff_x19;
      uVar14 = *(uint *)(lVar19 + 0x128);
      param_2 = *(float *)(lVar19 + 0x14c);
LAB_024983d8:
      param_8 = (ulong)(uint)in_stack_00000088;
      param_5 = (ulong)uVar14;
      unaff_x22 = 0x178;
      param_1 = *(code **)(lVar28 + 0x908);
      in_stack_00000130._4_4_ = uVar13;
      goto code_r0x02498644;
    }
    lVar19 = in_stack_00000120;
    if (in_stack_00000130._4_4_ == uVar5) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar15 = FUN_016f68bc(in_stack_00000138,0);
      if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
      goto LAB_0249920c;
      uVar14 = *(uint *)(lVar28 + 0x18);
      if (in_stack_00000138 == 0x200b || (uVar15 & 1) != 0) {
        if (uVar14 <= uVar6)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      }
      else {
LAB_02498620:
        lVar19 = unaff_x27;
        if (uVar14 <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      }
LAB_02498628:
      param_8 = (ulong)(uint)in_stack_00000088;
      lVar28 = lVar28 + lVar19 * 0x178;
      param_2 = *(float *)(lVar28 + 0x14c);
      param_5 = (ulong)*(uint *)(lVar28 + 0x128);
      param_1 = *(code **)(*unaff_x19 + 0x908);
      in_stack_00000130._4_4_ = uVar13;
      goto code_r0x02498644;
    }
    if ((int)in_stack_00000130._4_4_ < iVar12) {
      lVar28 = *in_stack_00000150;
      if ((lVar28 == 0) || (lVar20 = *(long *)(lVar28 + 0x38), lVar20 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar20 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (*(float *)(lVar20 + unaff_x21 + -0x108) == fStack0000000000000034) {
        fVar38 = *(float *)(lVar20 + unaff_x21 + -0x1c);
        if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar15 = (ulong)(uint)fStack0000000000000030;
        uVar16 = FUN_024aa280(fVar37 + fVar38,uVar15,0);
        if ((uVar16 & 1) != 0) {
          iVar12 = *in_stack_00000148;
          goto 
          UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
          ;
        }
        lVar28 = *in_stack_00000150;
        if (lVar28 == 0) goto LAB_0249920c;
      }
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_0249920c;
      uVar14 = *(uint *)(lVar28 + 0x18);
      if ((int)in_stack_00000130._4_4_ <= (int)uVar6) goto LAB_02498620;
      if (uVar6 < uVar14) goto LAB_02498628;
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    }

    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
    :
    if ((int)in_stack_00000130._4_4_ < iVar12) {
      iVar12 = FUN_02681c0c(lVar27,0);
      if (*(uint *)(in_stack_00000128 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar19 = *(long *)(in_stack_00000128 + unaff_x21 + -0x130);
      if (lVar19 == 0) goto LAB_0249920c;
      iVar11 = FUN_02681c0c(lVar19,0);
      if (iVar12 != iVar11) goto LAB_024983ac;
    }
    unaff_x22 = 0x178;
    if (!bVar1) {
      if ((*in_stack_00000150 == 0) || (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0))
      goto LAB_0249920c;
      if (in_stack_00000130._4_4_ - 1 < *(uint *)(lVar19 + 0x18)) {
        lVar28 = *unaff_x19;
        uVar14 = *(uint *)(lVar19 + unaff_x21 + -0x330);
        param_2 = *(float *)(lVar19 + unaff_x21 + -0x30c);
        goto LAB_024983d8;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    }
    bVar7 = true;
    in_stack_00000130._4_4_ = uVar13;
    uVar14 = in_stack_00000140;
  } while( true );
  while( true ) {
    lVar19 = *unaff_x26;
    lVar28 = lVar28 + 1;
    lVar27 = lVar27 + 0x50;
    if (lVar19 == 0) break;
    uVar16 = lVar28 + 1;
    if ((long)*(int *)(lVar19 + 0x34) <= (long)uVar16) {
LAB_02496098:
      if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__ + 0xe0) == 0
         ) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar19 = *(long *)(lVar19 + 0x60);
    if (lVar19 == 0) break;
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(uint *)(lVar19 + 0x18) <= uVar16)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    FUN_024e7ecc(lVar19 + lVar27 + 0x70,0);
    lVar19 = unaff_x19[0xe0];
    if (lVar19 == 0) break;
    if (*(uint *)(lVar19 + 0x18) <= uVar16)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    uVar24 = *(undefined8 *)(lVar19 + lVar28 * 8 + 0x28);
    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar17 = FUN_0268b4e0(uVar24,0,0);
    if ((uVar17 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x314) != 0) {
        if ((*unaff_x26 == 0) || (lVar19 = *(long *)(*unaff_x26 + 0x60), lVar19 == 0)) break;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (*(uint *)(lVar19 + 0x18) <= uVar16) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        FUN_024e8000(lVar19 + lVar27 + 0x70,1,0);
      }
      lVar19 = unaff_x19[0xe0];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar16)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar19 = *(long *)(lVar19 + lVar28 * 8 + 0x28);
      if (lVar19 == 0) break;
      lVar19 = FUN_024f0144(lVar19,0);
      if ((*unaff_x26 == 0) || (lVar20 = *(long *)(*unaff_x26 + 0x60), lVar20 == 0)) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar16)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (lVar19 == 0) break;
      FUN_0266b9c4(lVar19,*(undefined8 *)(lVar20 + lVar27 + 0x80),0);
      lVar19 = unaff_x19[0xe0];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar16)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar19 = *(long *)(lVar19 + lVar28 * 8 + 0x28);
      if (lVar19 == 0) break;
      lVar19 = FUN_024f0144(lVar19,0);
      if ((*unaff_x26 == 0) || (lVar20 = *(long *)(*unaff_x26 + 0x60), lVar20 == 0)) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar16)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (lVar19 == 0) break;
      FUN_0266bbc8(lVar19,*(undefined8 *)(lVar20 + lVar27 + 0x98),0);
      lVar19 = unaff_x19[0xe0];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar16)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar19 = *(long *)(lVar19 + lVar28 * 8 + 0x28);
      if (lVar19 == 0) break;
      lVar19 = FUN_024f0144(lVar19,0);
      if ((*unaff_x26 == 0) || (lVar20 = *(long *)(*unaff_x26 + 0x60), lVar20 == 0)) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar16)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (lVar19 == 0) break;
      FUN_0266bc74(lVar19,*(undefined8 *)(lVar20 + lVar27 + 0xa0),0);
      lVar19 = unaff_x19[0xe0];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar16)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar19 = *(long *)(lVar19 + lVar28 * 8 + 0x28);
      if (lVar19 == 0) break;
      lVar19 = FUN_024f0144(lVar19,0);
      if ((*unaff_x26 == 0) || (lVar20 = *(long *)(*unaff_x26 + 0x60), lVar20 == 0)) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar16)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (lVar19 == 0) break;
      FUN_0266c1dc(lVar19,*(undefined8 *)(lVar20 + lVar27 + 0xa8),0);
      lVar19 = unaff_x19[0xe0];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar16)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar19 = *(long *)(lVar19 + lVar28 * 8 + 0x28);
      if ((lVar19 == 0) || (lVar19 = FUN_024f0144(lVar19,0), lVar19 == 0)) break;
      FUN_0266ed90(lVar19,0);
      lVar19 = unaff_x19[0xe0];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar16)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar19 = *(long *)(lVar19 + lVar28 * 8 + 0x28);
      if (lVar19 == 0) break;
      lVar19 = FUN_02738ef4(lVar19,0);
      lVar20 = unaff_x19[0xe0];
      if (lVar20 == 0) break;
      if (*(uint *)(lVar20 + 0x18) <= uVar16)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar20 = *(long *)(lVar20 + lVar28 * 8 + 0x28);
      if ((lVar20 == 0) || (uVar24 = FUN_024f0144(lVar20,0), lVar19 == 0)) break;
      FUN_02858f1c(lVar19,uVar24,0);
      lVar19 = unaff_x19[0xe0];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar16)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar19 = *(long *)(lVar19 + lVar28 * 8 + 0x28);
      if ((lVar19 == 0) || (lVar19 = FUN_02738ef4(lVar19,0), lVar19 == 0)) break;
      FUN_02858b14(uVar30,uVar15,uVar31,param_5,lVar19,0);
      lVar19 = unaff_x19[0xe0];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar16)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar19 = *(long *)(lVar19 + lVar28 * 8 + 0x28);
      if ((lVar19 == 0) || (lVar19 = FUN_02738ef4(lVar19,0), lVar19 == 0)) break;
      FUN_02858a50(lVar19,uVar13 & 1,0);
      lVar19 = unaff_x19[0xe0];
      if (lVar19 == 0) break;
      if (*(uint *)(lVar19 + 0x18) <= uVar16)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      plVar25 = *(long **)(lVar19 + lVar28 * 8 + 0x28);
      uVar14 = (**(code **)(*unaff_x19 + 0x2b8))();
      if (plVar25 == (long *)0x0) break;
      (**(code **)(*plVar25 + 0x2c8))(plVar25,uVar14 & 1,*(undefined8 *)(*plVar25 + 0x2d0));
    }
  }
LAB_0249920c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


