/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRInteractorReticleVisual$$get_endpointSmoothingTime
ENTRY_POINT: 024924fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 156
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;weak_vector_component_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_endpointSmoothingTime
               (undefined1 param_1 [16],ulong param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  double __x;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  int *piVar23;
  ulong uVar24;
  undefined1 uVar25;
  char cVar26;
  uint in_w8;
  undefined4 *puVar27;
  long lVar28;
  float *pfVar29;
  long lVar30;
  code *pcVar31;
  uint uVar32;
  float *pfVar33;
  long lVar34;
  long lVar35;
  uint uVar36;
  uint uVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long *unaff_x19;
  uint unaff_w21;
  uint uVar41;
  long lVar42;
  long *plVar43;
  uint unaff_w22;
  long unaff_x23;
  undefined4 unaff_w24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  long lVar44;
  long *unaff_x28;
  int iVar45;
  long *unaff_x29;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined4 uVar55;
  double dVar56;
  float fVar57;
  ulong uVar58;
  float fVar59;
  ulong uVar60;
  float fVar61;
  uint uVar62;
  ulong uVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  ulong unaff_d9;
  float fVar69;
  float unaff_s12;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  uint uStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  byte bStack000000000000005c;
  uint uStack0000000000000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float in_stack_00000090;
  float fStack0000000000000098;
  uint uStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  int iStack00000000000000ac;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  undefined8 in_stack_000000b8;
  undefined8 uStack00000000000000c0;
  float in_stack_000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  float fStack00000000000000f4;
  float in_stack_00000128;
  float fStack0000000000000134;
  long *in_stack_00000138;
  int in_stack_00000140;
  uint *in_stack_00000148;
  long *in_stack_00000150;
  undefined8 in_stack_00000158;
  float fStack0000000000000160;
  float fStack0000000000000164;
  float in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  float in_stack_00000180;
  uint in_stack_00000880;
  undefined4 in_stack_00000884;
  undefined4 in_stack_00000890;
  undefined4 in_stack_00000bf8;
  undefined4 in_stack_00000bfc;
  undefined8 in_stack_00000c00;
  long in_stack_000016d8;
  uint in_stack_0000176c;
  uint in_stack_00001788;
  undefined8 in_stack_00001790;
  undefined8 in_stack_00001798;
  float in_stack_000017a0;
  undefined8 in_stack_000017a8;
  char in_stack_000017b4;
  float in_stack_000017b8;
  uint in_stack_000017bc;
  
code_r0x024924fc:
  fVar57 = (float)unaff_d9;
  if (in_w8 == unaff_w22) {
    in_stack_000017bc = (uint)((ulong)in_stack_000017a8 >> 0x20);
    bVar7 = true;
    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
    if (in_stack_000017bc == 0x2026) {
      lVar22 = unaff_x19[0xc9];
      lVar42 = unaff_x23 + unaff_x25 * unaff_x27;
      *(undefined4 *)(lVar42 + 0x2c) = 0;
      *(long *)(lVar42 + 0x30) = lVar22;
      *(long *)(lVar42 + 0x38) = unaff_x19[0xca];
      *(long *)(lVar42 + 0x50) = unaff_x19[0xcb];
      *(int *)(lVar42 + 0x58) = (int)unaff_x19[0xcc];
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      in_stack_000017a8 = CONCAT44(3,unaff_w22 + 1);
    }
    else if (in_stack_000017bc == 3) {
      if ((*in_stack_00000138 == 0) || (lVar22 = FUN_024b11ac(*in_stack_00000138,0), lVar22 == 0))
      goto LAB_0249920c;
      in_stack_00000bf8 = 3;
      FUN_01299bc0(lVar22,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_w22)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      bVar7 = true;
      *(ulong *)(unaff_x23 + unaff_x25 * unaff_x27 + 0x30) =
           CONCAT44(in_stack_00000884,in_stack_00000880);
      unaff_w22 = *(uint *)((long)unaff_x19 + 0x48c);
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
    }
  }
  else {
    bVar7 = false;
  }
  iVar16 = (int)unaff_x27;
  if (((int)unaff_w22 < *(int *)((long)unaff_x19 + 0x31c)) && (in_stack_000017bc != 3)) {
    if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
    goto LAB_0249920c;
    if (unaff_w22 < *(uint *)(lVar22 + 0x18)) {
      lVar22 = lVar22 + (long)(int)unaff_w22 * (long)iVar16;
      *(undefined1 *)(lVar22 + 0x194) = 0;
      *(undefined2 *)(lVar22 + 0x20) = 0x200b;
      *(undefined4 *)(lVar22 + 100) = 0;
      *in_stack_00000148 = unaff_w22 + 1;
      uVar17 = in_stack_000017bc;
      goto LAB_02492630;
    }
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  }
  iVar13 = *(int *)((long)unaff_x19 + 0x63c);
  fStack00000000000000f4 = unaff_s12;
  if (iVar13 == 0) {
    uVar17 = *(uint *)((long)unaff_x19 + 0x254);
    if ((uVar17 >> 4 & 1) == 0) {
      if ((uVar17 >> 3 & 1) == 0) {
        if ((uVar17 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016f92d4(in_stack_000017bc,0);
          if ((uVar21 & 1) != 0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar17 = FUN_016f95a8(in_stack_000017bc,0);
            in_stack_000017bc = uVar17 & 0xffff;
            fStack00000000000000f4 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f9218(in_stack_000017bc,0);
        if ((uVar21 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar17 = FUN_016f9724(in_stack_000017bc,0);
          goto LAB_02492a0c;
        }
      }
    }
    else {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar21 = FUN_016f92d4(in_stack_000017bc,0);
      if ((uVar21 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_016f95a8(in_stack_000017bc,0);
LAB_02492a0c:
        in_stack_000017bc = uVar17 & 0xffff;
      }
    }
    iVar13 = *(int *)((long)unaff_x19 + 0x63c);
    if (iVar13 == 0) goto LAB_02492a20;
LAB_0249265c:
    if (iVar13 == 1) {
      if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
      goto LAB_0249920c;
      if (*in_stack_00000148 < *(uint *)(lVar22 + 0x18)) {
        lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x27;
        lVar42 = *(long *)(lVar22 + 0x40);
        unaff_x19[0xd2] = lVar42;
        *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar22 + 0x48);
        if ((lVar42 == 0) || (lVar22 = FUN_024ebfa0(lVar42,0), lVar22 == 0)) goto LAB_0249920c;
        FUN_0132138c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                     *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
        lVar42 = CONCAT44(in_stack_00000884,in_stack_00000880);
        uVar17 = in_stack_000017bc;
        if (lVar42 == 0) goto LAB_02492630;
        if (in_stack_000017bc == 0x3c) {
          in_stack_000017bc = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
        }
        else {
          lVar22 = *unaff_x29;
          if (*(int *)(lVar22 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar22 = *unaff_x29;
          }
          *(undefined4 *)((long)unaff_x19 + 0x1b4) =
               *(undefined4 *)(*(long *)(lVar22 + 0xb8) + 0x68);
        }
        if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
        fVar57 = *(float *)(unaff_x19 + 0x3c);
        memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
        iVar13 = FUN_026fd110(&stack0x00001700,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        memmove(&stack0x00001700,(void *)(*in_stack_00000138 + 0x50),0x60);
        fVar59 = (float)FUN_026fd120(&stack0x00001700,0);
        fVar51 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar51 = unaff_s12;
        }
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar51 = (fVar57 / (float)iVar13) * fVar59 * fVar51;
        iVar13 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
        fVar57 = *(float *)(unaff_x19 + 0x3c);
        if (iVar13 < 1) {
          if (*in_stack_00000138 == 0) goto LAB_0249920c;
          iVar13 = FUN_026fd110(*in_stack_00000138 + 0x50,0);
          if (*in_stack_00000138 == 0) goto LAB_0249920c;
          fVar59 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
          fVar53 = fStack0000000000000084;
          if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
            fVar53 = unaff_s12;
          }
          if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
          fVar52 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
          if (*(long *)(lVar42 + 0x20) == 0) goto LAB_0249920c;
          FUN_026fd62c(&stack0x00000880,*(long *)(lVar42 + 0x20),0);
          unaff_x26[0x1cd] = unaff_x26[1];
          unaff_x26[0x1cc] = *unaff_x26;
          fVar46 = (float)FUN_026fd45c(&stack0x000016e0,0);
          if (*(long *)(lVar42 + 0x20) == 0) goto LAB_0249920c;
          fVar61 = *(float *)(lVar42 + 0x2c);
          fVar66 = (float)FUN_026fd668(*(long *)(lVar42 + 0x20),0);
          if (*in_stack_00000138 == 0) goto LAB_0249920c;
          fVar54 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
          if (*in_stack_00000138 == 0) goto LAB_0249920c;
          fVar64 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
          if (*in_stack_00000138 == 0) goto LAB_0249920c;
          fVar65 = *(float *)((long)unaff_x19 + 0x3fc);
          fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
          if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
          fStack0000000000000134 = fVar51 * fVar64 * fVar65 * fStack0000000000000134;
          fVar53 = (fVar57 / (float)iVar13) * fVar59 * fVar53;
          fVar57 = fVar53 * (fVar52 / fVar46) * fVar61 * fVar66;
          fVar53 = fVar53 / fVar57;
          fVar54 = fVar53 * fVar54;
          fVar51 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
          fVar53 = fVar53 * fVar51;
        }
        else {
          if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
          iVar13 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
          if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
          fVar59 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
          if (*(long *)(lVar42 + 0x20) == 0) goto LAB_0249920c;
          fVar53 = *(float *)(lVar42 + 0x2c);
          fVar52 = fStack0000000000000084;
          if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
            fVar52 = 1.0;
          }
          fVar46 = (float)FUN_026fd668(*(long *)(lVar42 + 0x20),0);
          if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
          fVar54 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
          if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
          fVar61 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
          if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
          fVar66 = *(float *)((long)unaff_x19 + 0x3fc);
          fStack0000000000000134 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
          if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
          fStack0000000000000134 = fVar51 * fVar61 * fVar66 * fStack0000000000000134;
          fVar57 = (fVar57 / (float)iVar13) * fVar59 * fVar52 * fVar53 * fVar46;
          fVar53 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
        }
        lVar22 = unaff_x19[0x6c];
        unaff_x19[200] = lVar42;
        if ((lVar22 == 0) || (lVar42 = *(long *)(lVar22 + 0x38), lVar42 == 0)) goto LAB_0249920c;
        if (*in_stack_00000148 < *(uint *)(lVar42 + 0x18)) {
          lVar42 = lVar42 + (int)*in_stack_00000148 * unaff_x27;
          *(undefined4 *)(lVar42 + 0x2c) = 1;
          *(float *)(lVar42 + 0x160) = fVar57;
          in_stack_00000128 = 0.0;
          *(long *)(lVar42 + 0x40) = unaff_x19[0xd2];
          *(long *)(lVar42 + 0x38) = unaff_x19[0x1f];
          *(int *)(lVar42 + 0x58) = (int)unaff_x19[0x23];
          *(undefined4 *)(unaff_x19 + 0x23) = unaff_w24;
          goto LAB_02492e14;
        }
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    }
    lVar22 = *in_stack_00000150;
    fVar51 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar51 = fVar57;
    }
    fStack0000000000000134 = 0.0;
    if (lVar22 == 0) goto LAB_0249920c;
    fVar54 = 0.0;
    fVar53 = 0.0;
  }
  else {
    if (iVar13 != 0) goto LAB_0249265c;
LAB_02492a20:
    if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
    goto LAB_0249920c;
    uVar62 = *in_stack_00000148;
    uVar18 = *(uint *)(lVar22 + 0x18);
    if (uVar18 <= uVar62)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar42 = *(long *)(lVar22 + (int)uVar62 * unaff_x27 + 0x30);
    unaff_x19[200] = lVar42;
    uVar17 = in_stack_000017bc;
    if (lVar42 == 0) goto LAB_02492630;
    lVar30 = lVar22 + (int)uVar62 * unaff_x27;
    lVar42 = *(long *)(lVar30 + 0x38);
    unaff_x19[0x1f] = lVar42;
    unaff_x19[0x22] = *(long *)(lVar30 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar30 + 0x58);
    if (bVar7) {
      lVar30 = unaff_x19[0x8e];
      if (lVar30 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar30 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if ((*(int *)(lVar30 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
         (uVar62 == *(uint *)(unaff_x19 + 0x92))) goto LAB_02492ab4;
      if (uVar18 <= uVar62 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (lVar42 == 0) goto LAB_0249920c;
      fVar51 = *(float *)(lVar22 + (long)(int)(uVar62 - 1) * (long)iVar16 + 0x60);
      iVar13 = FUN_026fd110(lVar42 + 0x50,0);
      lVar22 = *in_stack_00000138;
    }
    else {
LAB_02492ab4:
      if (lVar42 == 0) goto LAB_0249920c;
      fVar51 = *(float *)(unaff_x19 + 0x3c);
      iVar13 = FUN_026fd110(lVar42 + 0x50,0);
      lVar22 = unaff_x19[0x1f];
    }
    if (lVar22 == 0) goto LAB_0249920c;
    fVar52 = (float)FUN_026fd120(lVar22 + 0x50,0);
    fVar59 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar59 = unaff_s12;
    }
    fVar53 = 0.0;
    fVar54 = 0.0;
    if (!(bool)(bVar7 & in_stack_000017bc == 0x2026)) {
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar54 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar53 = (float)FUN_026fd180(*in_stack_00000138 + 0x50,0);
    }
    lVar22 = unaff_x19[200];
    if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_0249920c;
    fVar46 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar61 = *(float *)(lVar22 + 0x2c);
    fVar57 = (float)FUN_026fd668(*(long *)(lVar22 + 0x20),0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar66 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar64 = *(float *)((long)unaff_x19 + 0x3fc);
    fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
    lVar22 = unaff_x19[0x6c];
    if ((lVar22 == 0) || (lVar42 = *(long *)(lVar22 + 0x38), lVar42 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar42 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar42 = lVar42 + (int)*in_stack_00000148 * unaff_x27;
    *(undefined4 *)(lVar42 + 0x2c) = 0;
    fVar59 = ((fStack00000000000000f4 * fVar51) / (float)iVar13) * fVar52 * fVar59;
    fVar57 = fVar59 * fVar46 * fVar61 * fVar57;
    *(float *)(lVar42 + 0x160) = fVar57;
    uVar17 = *(uint *)(unaff_x19 + 0x23);
    fStack0000000000000134 = fVar59 * fVar66 * fVar64 * fStack0000000000000134;
    if (uVar17 == 0) {
      in_stack_00000128 = *(float *)(unaff_x19 + 0xc2);
    }
    else {
      lVar42 = unaff_x19[0xe0];
      if (lVar42 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar42 + 0x18) <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar42 = *(long *)(lVar42 + (long)(int)uVar17 * 8 + 0x20);
      if (lVar42 == 0) goto LAB_0249920c;
      in_stack_00000128 = *(float *)(lVar42 + 0x104);
    }
LAB_02492e14:
    unaff_s12 = 1.0;
    fVar51 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar51 = fVar57;
    }
  }
  lVar22 = *(long *)(lVar22 + 0x38);
  if (lVar22 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x27;
  *(short *)(lVar22 + 0x20) = (short)in_stack_000017bc;
  *(int *)(lVar22 + 0x60) = (int)unaff_x19[0x3c];
  *(undefined4 *)(lVar22 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
  if ((unaff_x19[0x6c] == 0) || (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(int *)(lVar22 + (int)*in_stack_00000148 * unaff_x27 + 0x168) = (int)unaff_x19[0x2a];
  if ((unaff_x19[0x6c] == 0) || (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(undefined4 *)(lVar22 + (int)*in_stack_00000148 * unaff_x27 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x154);
  if ((unaff_x19[0x6c] == 0) || (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0))
  goto LAB_0249920c;
  uVar17 = *in_stack_00000148;
  FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
               *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
  if (*(uint *)(lVar22 + 0x18) <= uVar17)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar22 = lVar22 + (int)uVar17 * unaff_x27;
  uVar20 = unaff_x26[1];
  uVar19 = *unaff_x26;
  *(undefined4 *)(lVar22 + 0x18c) = in_stack_00000890;
  *(undefined8 *)(lVar22 + 0x184) = uVar20;
  *(undefined8 *)(lVar22 + 0x17c) = uVar19;
  if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(undefined4 *)(lVar22 + (int)*in_stack_00000148 * unaff_x27 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x254);
  if ((unaff_x19[200] == 0) || (lVar22 = *(long *)(unaff_x19[200] + 0x20), lVar22 == 0))
  goto LAB_0249920c;
  FUN_026fd62c(&stack0x00000bf8,lVar22,0);
  puVar9 = 
  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__;
  unaff_x26[0x1df] = in_stack_00000c00;
  unaff_x26[0x1de] = CONCAT44(in_stack_00000bfc,in_stack_00000bf8);
  if ((int)in_stack_000017bc < 0x10000) {
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar18 = FUN_016f68bc(in_stack_000017bc,0);
    uVar18 = uVar18 & 1;
  }
  else {
    uVar18 = 0;
  }
  fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
  *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
    fVar46 = 0.0;
    fVar52 = 0.0;
    fVar59 = 0.0;
  }
  else {
    if (unaff_x19[200] == 0) goto LAB_0249920c;
    uVar62 = *in_stack_00000148;
    uVar17 = *(uint *)(unaff_x19[200] + 0x28);
    if ((int)uVar62 < (int)in_stack_00000078._4_4_) {
      if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar22 + 0x18) <= uVar62 + 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar22 = *(long *)(lVar22 + (long)(int)(uVar62 + 1) * (long)iVar16 + 0x30);
      if ((((lVar22 == 0) || (*in_stack_00000138 == 0)) ||
          (lVar42 = *(long *)(*in_stack_00000138 + 0x128), lVar42 == 0)) ||
         (lVar42 = *(long *)(lVar42 + 0x18), lVar42 == 0)) goto LAB_0249920c;
      in_stack_00000880 = uVar17 | *(int *)(lVar22 + 0x28) << 0x10;
      uVar21 = FUN_0129eff4(lVar42,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      uVar55 = 0;
      if ((uVar21 & 1) == 0) {
        fVar46 = 0.0;
        fVar52 = 0.0;
        fVar59 = 0.0;
      }
      else {
        if (in_stack_000016d8 == 0) goto LAB_0249920c;
        fVar59 = *(float *)(in_stack_000016d8 + 0x14);
        fVar52 = *(float *)(in_stack_000016d8 + 0x18);
        fVar46 = *(float *)(in_stack_000016d8 + 0x1c);
        uVar55 = *(undefined4 *)(in_stack_000016d8 + 0x20);
        if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
          fStack00000000000000cc = 0.0;
        }
      }
      uVar62 = *in_stack_00000148;
    }
    else {
      uVar55 = 0;
      fVar46 = 0.0;
      fVar52 = 0.0;
      fVar59 = 0.0;
    }
    if (0 < (int)uVar62) {
      if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar22 + 0x18) <= (uint)((long)(int)uVar62 + -1))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar22 = *(long *)(lVar22 + ((long)(int)uVar62 + -1) * unaff_x27 + 0x30);
      if (((lVar22 == 0) || (*in_stack_00000138 == 0)) ||
         ((lVar42 = *(long *)(*in_stack_00000138 + 0x128), lVar42 == 0 ||
          (lVar42 = *(long *)(lVar42 + 0x18), lVar42 == 0)))) goto LAB_0249920c;
      in_stack_00000880 = *(uint *)(lVar22 + 0x28) | uVar17 << 0x10;
      uVar21 = FUN_0129eff4(lVar42,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      if ((uVar21 & 1) != 0) {
        if ((in_stack_000016d8 == 0) ||
           (fVar59 = (float)FUN_024bb1bc(fVar59,fVar52,fVar46,uVar55,
                                         *(undefined4 *)(in_stack_000016d8 + 0x28),
                                         *(undefined4 *)(in_stack_000016d8 + 0x2c),
                                         *(undefined4 *)(in_stack_000016d8 + 0x30),
                                         *(undefined4 *)(in_stack_000016d8 + 0x34),0),
           in_stack_000016d8 == 0)) goto LAB_0249920c;
        if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
          fStack00000000000000cc = 0.0;
        }
      }
    }
    *(float *)((long)unaff_x19 + 0x2f4) = fVar46;
  }
  if ((char)unaff_x19[0x1d] != '\0') {
    fVar66 = *(float *)(unaff_x19 + 199);
    fVar61 = (float)FUN_026fd474(&stack0x00001770,0);
    fVar66 = fVar66 - fVar51 * fVar61 * (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc));
    *(float *)(unaff_x19 + 199) = fVar66;
    if ((uVar18 != 0) || (in_stack_000017bc == 0x200b)) {
      *(float *)(unaff_x19 + 199) = fVar66 - in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac)
      ;
    }
  }
  fVar66 = *(float *)(unaff_x19 + 0x55);
  fVar61 = 0.0;
  if (fVar66 != 0.0) {
    fVar61 = (float)FUN_026fd454(&stack0x00001770,0);
    fVar64 = (float)FUN_026fd464(&stack0x00001770,0);
    fVar61 = (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (fVar66 * 0.5 - fVar51 * (fVar61 * 0.5 + fVar64));
    *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fVar61;
  }
  if (((unaff_w21 == 0) && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
    lVar22 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar21 = FUN_02681b9c(lVar22,0,0);
    fVar65 = 0.0;
    if ((uVar21 & 1) != 0) {
      lVar22 = unaff_x19[0x22];
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar22 == 0) goto LAB_0249920c;
      uVar21 = FUN_0267e1d8(lVar22,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
      fVar65 = 0.0;
      if ((uVar21 & 1) != 0) {
        lVar22 = unaff_x19[0x22];
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar22 == 0) goto LAB_0249920c;
        fVar66 = (float)FUN_0267f610(lVar22,*(undefined4 *)
                                             (*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
        if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) goto LAB_0249920c;
        fVar64 = *(float *)(*in_stack_00000138 + 0x1b0);
        fVar65 = (float)FUN_0267f610(unaff_x19[0x22],
                                     *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0);
        fVar65 = fVar65 * fVar66 * fVar64 * 0.25;
        if (fVar66 < in_stack_00000128 + fVar65) {
          in_stack_00000128 = fVar66 - fVar65;
        }
      }
    }
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar66 = *(float *)(*in_stack_00000138 + 0x1b4);
  }
  else {
    lVar22 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar21 = FUN_02681b9c(lVar22,0,0);
    fVar66 = 0.0;
    if ((uVar21 & 1) != 0) {
      lVar22 = unaff_x19[0x22];
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar22 == 0) goto LAB_0249920c;
      uVar21 = FUN_0267e1d8(lVar22,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
      if ((uVar21 & 1) != 0) {
        lVar22 = unaff_x19[0x22];
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar22 == 0) goto LAB_0249920c;
        uVar21 = FUN_0267e1d8(lVar22,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0);
        if ((uVar21 & 1) != 0) {
          lVar22 = unaff_x19[0x22];
          if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (lVar22 != 0) {
            fVar64 = (float)FUN_0267f610(lVar22,*(undefined4 *)
                                                 (*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
            if ((*in_stack_00000138 != 0) && (unaff_x19[0x22] != 0)) {
              fVar68 = *(float *)(*in_stack_00000138 + 0x1a8);
              fVar65 = (float)FUN_0267f610(unaff_x19[0x22],
                                           *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc)
                                           ,0);
              fVar65 = fVar65 * fVar64 * fVar68 * 0.25;
              if (fVar64 < in_stack_00000128 + fVar65) {
                in_stack_00000128 = fVar64 - fVar65;
              }
              goto LAB_024934bc;
            }
          }
          goto LAB_0249920c;
        }
      }
    }
    fVar65 = 0.0;
  }
LAB_024934bc:
  fVar72 = *(float *)(unaff_x19 + 199);
  fVar64 = (float)FUN_026fd464(&stack0x00001770,0);
  fVar72 = fVar72 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar51 * (fVar59 + ((fVar64 - in_stack_00000128) - fVar65));
  fVar59 = (float)FUN_026fd46c(&stack0x00001770,0);
  fVar68 = *(float *)((long)unaff_x19 + 0x614) +
           ((fStack0000000000000134 + fVar51 * (fVar52 + in_stack_00000128 + fVar59)) -
           *(float *)(unaff_x19 + 0x9a));
  fVar59 = (float)FUN_026fd45c(&stack0x00001770,0);
  fVar70 = fVar68 - fVar51 * (in_stack_00000128 + in_stack_00000128 + fVar59);
  fVar59 = (float)FUN_026fd454(&stack0x00001770,0);
  fVar64 = fVar72 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar51 * (fVar65 + fVar65 + in_stack_00000128 + in_stack_00000128 + fVar59);
  fVar59 = fVar72;
  fVar52 = fVar64;
  if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (unaff_w21 == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
    fVar74 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
    fVar59 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar49 = fVar74 * fVar51 * (fVar65 + in_stack_00000128 + fVar59);
    fVar59 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar52 = (float)FUN_026fd45c(&stack0x00001770,0);
    fVar68 = fVar68 + 0.0;
    fVar70 = fVar70 + 0.0;
    fVar74 = fVar74 * fVar51 * (((fVar59 - fVar52) - in_stack_00000128) - fVar65);
    fVar52 = fVar64 + fVar74;
    fVar59 = fVar72 + fVar49;
    fVar48 = (fVar49 - fVar74) * 0.5;
    fVar72 = (fVar72 + fVar74) - fVar48;
    fVar64 = (fVar64 + fVar49) - fVar48;
    fVar59 = fVar59 - fVar48;
    fVar52 = fVar52 - fVar48;
  }
  if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
    fVar49 = 0.0;
    fVar50 = 0.0;
    fVar67 = 0.0;
    fVar48 = 0.0;
    fVar73 = fVar70;
    fVar74 = fVar68;
    fStack00000000000000e8 = fVar59;
    fStack00000000000000ec = fVar72;
  }
  else {
    thunk_FUN_026935f0(_uStack0000000000000060,0);
    fVar69 = (fVar64 + fVar72) * 0.5;
    fVar71 = (fVar70 + fVar68) * 0.5;
    fVar68 = fVar68 - fVar71;
    fVar48 = 0.0;
    fVar74 = fVar68;
    fVar47 = (float)FUN_02692df0(fVar59 - fVar69,_uStack0000000000000060,0);
    fVar48 = fVar48 + 0.0;
    fVar70 = fVar70 - fVar71;
    fVar49 = 0.0;
    fVar59 = fVar70;
    fVar72 = (float)FUN_02692df0(fVar72 - fVar69,_uStack0000000000000060,0);
    fVar49 = fVar49 + 0.0;
    fVar67 = 0.0;
    fVar64 = (float)FUN_02692df0(fVar64 - fVar69,_uStack0000000000000060,0);
    fVar64 = fVar69 + fVar64;
    fVar68 = fVar71 + fVar68;
    fVar67 = fVar67 + 0.0;
    fVar50 = 0.0;
    fVar52 = (float)FUN_02692df0(fVar52 - fVar69,_uStack0000000000000060,0);
    fVar52 = fVar69 + fVar52;
    fVar70 = fVar71 + fVar70;
    fVar50 = fVar50 + 0.0;
    fVar73 = fVar71 + fVar59;
    fVar74 = fVar71 + fVar74;
    fStack00000000000000e8 = fVar69 + fVar47;
    fStack00000000000000ec = fVar69 + fVar72;
  }
  if (*in_stack_00000150 == 0) goto LAB_0249920c;
  lVar22 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_d9 = (ulong)(uint)fVar51;
  if (lVar22 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar22 + 0x120) = fVar73;
  *(float *)(lVar22 + 0x11c) = fStack00000000000000ec;
  *(float *)(lVar22 + 0x124) = fVar49;
  if (*in_stack_00000150 == 0) goto LAB_0249920c;
  lVar22 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_s12 = 1.0;
  if (lVar22 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar22 + 0x114) = fVar74;
  *(float *)(lVar22 + 0x110) = fStack00000000000000e8;
  *(float *)(lVar22 + 0x118) = fVar48;
  if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar22 + 0x128) = fVar64;
  *(float *)(lVar22 + 300) = fVar68;
  *(float *)(lVar22 + 0x130) = fVar67;
  if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar22 + 0x134) = fVar52;
  *(float *)(lVar22 + 0x138) = fVar70;
  *(float *)(lVar22 + 0x13c) = fVar50;
  if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
  goto LAB_0249920c;
  uVar62 = *in_stack_00000148;
  lVar42 = (long)(int)uVar62;
  if (*(uint *)(lVar22 + 0x18) <= uVar62)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar30 = lVar22 + lVar42 * unaff_x27;
  *(int *)(lVar30 + 0x140) = (int)unaff_x19[199];
  fVar52 = *(float *)(unaff_x19 + 0x9a);
  param_2 = (ulong)(uint)fVar52;
  fVar59 = *(float *)((long)unaff_x19 + 0x614);
  *(float *)(lVar30 + 0x15c) = (fVar64 - fStack00000000000000ec) / (fVar74 - fVar73);
  *(float *)(lVar30 + 0x14c) = (fStack0000000000000134 - fVar52) + fVar59;
  fVar54 = fVar54 * fVar51;
  if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
    fVar54 = fVar54 / fStack00000000000000f4;
    fVar53 = (fVar53 * fVar51) / fStack00000000000000f4;
  }
  else {
    fVar53 = fVar53 * fVar51;
  }
  uVar37 = *(uint *)(unaff_x19 + 0x92);
  bVar11 = uVar18 != 0;
  fVar54 = fVar59 + fVar54;
  bVar12 = uVar62 != uVar37;
  if (bVar12 && bVar11) {
    fVar59 = *(float *)(unaff_x19 + 0x98);
    lVar22 = lVar22 + lVar42 * unaff_x27;
    *(float *)(lVar22 + 0x154) = fVar59;
    fVar53 = *(float *)((long)unaff_x19 + 0x4c4);
    *(float *)(lVar22 + 0x148) = fVar59 - fVar52;
    *(float *)(lVar22 + 0x158) = fVar53;
    *(float *)(unaff_x19 + 0x97) = fVar59 - fVar52;
    fVar53 = fVar53 - fVar52;
    *(float *)(lVar22 + 0x150) = fVar53;
  }
  else {
    fVar53 = fVar59 + fVar53;
    fVar64 = fVar54;
    fVar68 = fVar53;
    if (fVar59 != 0.0) {
      fVar64 = (fVar54 - fVar59) / *(float *)((long)unaff_x19 + 0x3fc);
      fVar68 = (fVar53 - fVar59) / *(float *)((long)unaff_x19 + 0x3fc);
      if (fVar64 <= fVar54) {
        fVar64 = fVar54;
      }
      if (fVar53 <= fVar68) {
        fVar68 = fVar53;
      }
    }
    lVar22 = lVar22 + lVar42 * unaff_x27;
    fVar59 = fVar64;
    if (fVar64 <= *(float *)(unaff_x19 + 0x98)) {
      fVar59 = *(float *)(unaff_x19 + 0x98);
    }
    fVar70 = fVar68;
    if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar68) {
      fVar70 = *(float *)((long)unaff_x19 + 0x4c4);
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar70;
    fVar53 = fVar53 - fVar52;
    *(float *)(unaff_x19 + 0x98) = fVar59;
    *(float *)(lVar22 + 0x154) = fVar64;
    *(float *)(lVar22 + 0x158) = fVar68;
    *(float *)(lVar22 + 0x148) = fVar54 - fVar52;
    *(float *)(unaff_x19 + 0x97) = fVar54 - fVar52;
    *(float *)(lVar22 + 0x150) = fVar53;
  }
  *(float *)((long)unaff_x19 + 0x4bc) = fVar53;
  if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
    if (!bVar12 || !bVar11) {
      *(float *)(unaff_x19 + 0x96) = fVar59;
      if (unaff_x19[0x1f] != 0) {
        fVar59 = *(float *)((long)unaff_x19 + 0x4b4);
        fVar52 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
        fStack00000000000000f4 = (fVar51 * fVar52) / fStack00000000000000f4;
        param_2 = (ulong)*(uint *)(unaff_x19 + 0x9a);
        if (fVar59 <= fStack00000000000000f4) {
          fVar59 = fStack00000000000000f4;
        }
        *(float *)((long)unaff_x19 + 0x4b4) = fVar59;
        goto LAB_02493948;
      }
      goto LAB_0249920c;
    }
  }
  else {
LAB_02493948:
    if ((!bVar12 || !bVar11) && (float)param_2 == 0.0) {
      fVar59 = *(float *)(in_stack_00000070 + 0x208);
      if (*(float *)(in_stack_00000070 + 0x208) <= fVar54) {
        fVar59 = fVar54;
      }
      *(float *)(in_stack_00000070 + 0x208) = fVar59;
    }
  }
  lVar22 = *in_stack_00000150;
  if ((lVar22 == 0) || (lVar42 = *(long *)(lVar22 + 0x38), lVar42 == 0)) goto LAB_0249920c;
  uVar2 = *in_stack_00000148;
  if (*(uint *)(lVar42 + 0x18) <= uVar2)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar42 = lVar42 + (int)uVar2 * unaff_x27;
  *(undefined1 *)(lVar42 + 0x194) = 0;
  uVar32 = *(uint *)(unaff_x19 + 0x4e);
  uVar17 = in_stack_000017bc;
  if ((in_stack_000017bc != 9) &&
     (((((uVar18 != 0 || (in_stack_000017bc == 3)) || (in_stack_000017bc == 0x200b)) ||
       (in_stack_000017bc == 0xad)) &&
      (((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) == 0 &&
       (*(int *)((long)unaff_x19 + 0x63c) != 1)))))) {
    if (((in_stack_000017bc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
      fVar59 = (float)param_2;
      fVar57 = 0.0;
      if ((0.0 < fVar59) && (fVar57 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
        fVar57 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      }
      param_2 = (ulong)(uint)fStack00000000000000a4;
      if (fStack00000000000000a4 <
          (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - fVar59)) + fVar57)
      {
        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
          *(uint *)((long)unaff_x19 + 0x2dc) = uVar2;
        }
        unaff_x28 = (long *)StringLiteral_302;
        unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
        unaff_x26 = (undefined8 *)&stack0x00000880;
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        lVar22 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar21 = FUN_02681b9c(lVar22,0,0);
        if ((uVar21 & 1) != 0) {
          plVar43 = (long *)unaff_x19[0x5c];
          uVar19 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar43 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar43 + 0x558))(plVar43,uVar19,*(undefined8 *)(*plVar43 + 0x560));
          lVar22 = unaff_x19[0x5c];
          if (lVar22 == 0) goto LAB_0249920c;
          *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar43 = (long *)unaff_x19[0x5c];
          if (plVar43 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        in_stack_000017a8 = CONCAT44(3,uVar2);
        goto LAB_02492630;
      }
    }
    if ((((in_stack_000017bc - 0x2007 < 0x23) &&
         ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
        (in_stack_000017bc - 10 < 2)) || (in_stack_000017bc == 0xa0)) {
LAB_024944e4:
      if (((in_stack_000017bc != 0xad) && (in_stack_000017bc != 0x200b)) &&
         (in_stack_000017bc != 0x2060)) {
        lVar22 = *in_stack_00000150;
        if ((lVar22 == 0) || (lVar42 = *(long *)(lVar22 + 0x50), lVar42 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar42 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar42 = lVar42 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        *(int *)(lVar42 + 0x2c) = *(int *)(lVar42 + 0x2c) + 1;
        *(int *)(lVar22 + 0x20) = *(int *)(lVar22 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar21 = FUN_016fa418(in_stack_000017bc,0);
      if ((uVar21 & 1) != 0) goto LAB_024944e4;
    }
    if (in_stack_000017bc == 0xa0) {
      if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x50), lVar22 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_024949c4:
      *(int *)(lVar22 + 0x20) = *(int *)(lVar22 + 0x20) + 1;
    }
LAB_02494abc:
    if (((int)unaff_x19[0x5b] == 1) && ((in_stack_000017bc == 0x2d || (!bVar7)))) {
      if (unaff_x19[0xca] == 0) goto LAB_0249920c;
      fVar57 = *(float *)(unaff_x19 + 0x3c);
      iVar13 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
      if (unaff_x19[0xca] == 0) goto LAB_0249920c;
      fVar52 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
      lVar22 = unaff_x19[0xc9];
      fVar59 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar59 = 1.0;
      }
      if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_0249920c;
      fVar54 = *(float *)((long)unaff_x19 + 0x3fc);
      fVar65 = *(float *)(lVar22 + 0x2c);
      fVar53 = (float)FUN_026fd668(*(long *)(lVar22 + 0x20),0);
      fVar64 = *_fStack0000000000000098;
      fVar53 = fVar54 * (fVar57 / (float)iVar13) * fVar52 * fVar59 * fVar65 * fVar53;
      fVar57 = *_fStack0000000000000088;
      if ((in_stack_000017bc == 10) && (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92]))
      {
        if ((*in_stack_00000150 == 0) ||
           (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0)) goto LAB_0249920c;
        uVar2 = *(int *)((long)unaff_x19 + 0x48c) - 1;
        if (*(uint *)(lVar22 + 0x18) <= uVar2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0xca] == 0) goto LAB_0249920c;
        fVar59 = *(float *)(lVar22 + (long)(int)uVar2 * (long)iVar16 + 0x60);
        iVar13 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
        if (unaff_x19[0xca] == 0) goto LAB_0249920c;
        fVar54 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
        lVar22 = unaff_x19[0xc9];
        fVar52 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar52 = 1.0;
        }
        if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_0249920c;
        fVar65 = *(float *)((long)unaff_x19 + 0x3fc);
        fVar68 = *(float *)(lVar22 + 0x2c);
        fVar53 = (float)FUN_026fd668(*(long *)(lVar22 + 0x20),0);
        if ((*in_stack_00000150 == 0) ||
           (lVar22 = *(long *)(*in_stack_00000150 + 0x50), lVar22 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        fVar64 = *(float *)(lVar22 + 0x60);
        fVar57 = *(float *)(lVar22 + 100);
        fVar53 = fVar65 * (fVar59 / (float)iVar13) * fVar54 * fVar52 * fVar68 * fVar53;
      }
      fVar65 = *(float *)(unaff_x19 + 0x9a);
      fVar52 = *(float *)(unaff_x19 + 0x96);
      fVar68 = *(float *)((long)unaff_x19 + 0x4c4);
      fVar59 = 0.0;
      fVar54 = 0.0;
      if ((0.0 < fVar65) && (fVar54 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
        fVar54 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      }
      fVar70 = *(float *)(unaff_x19 + 199);
      if ((char)unaff_x19[0x1d] == '\0') {
        if ((unaff_x19[0xc9] == 0) || (lVar22 = *(long *)(unaff_x19[0xc9] + 0x20), lVar22 == 0))
        goto LAB_0249920c;
        FUN_026fd62c(&stack0x00000880,lVar22,0);
        fVar59 = (float)FUN_026fd474(&stack0x000016e0,0);
      }
      puVar9 = System_Threading_Mutex_TypeInfo;
      fVar72 = *(float *)(unaff_x19 + 0x6b);
      fVar57 = (in_stack_00000090 - fVar64) - fVar57;
      bVar11 = true;
      if ((fVar72 <= fVar57) && (bVar11 = false, !NAN(fVar72))) {
        bVar11 = fVar72 == -1.0;
      }
      if (!bVar11) {
        fVar57 = fVar72;
      }
      fVar64 = _DAT_0294c6e8;
      if ((uVar32 & 0x18) == 0) {
        fVar64 = 1.0;
      }
      if (((fVar52 - (fVar68 - fVar65)) + fVar54 < fStack00000000000000a4) &&
         (ABS(fVar70) + fVar53 * fVar59 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
          fVar64 * fVar57)) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_024d69d4();
        lVar22 = *(long *)(*(long *)puVar9 + 0xb8);
        memcpy(&stack0x00000508,(void *)(lVar22 + 0x788),0x378);
        FUN_013b86dc(lVar22 + 0x11f0,&stack0x00000508,
                     *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
      }
    }
    unaff_d9 = (ulong)(uint)fVar51;
    unaff_s12 = 1.0;
    lVar22 = *in_stack_00000150;
    if ((lVar22 == 0) || (lVar42 = *(long *)(lVar22 + 0x38), lVar42 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar42 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    uVar2 = *(uint *)(unaff_x19 + 0x94);
    lVar42 = lVar42 + (int)*in_stack_00000148 * unaff_x27;
    *(uint *)(lVar42 + 100) = uVar2;
    *(int *)(lVar42 + 0x68) = (int)unaff_x19[0x95];
    if ((bVar7) ||
       ((in_stack_000017bc < 0xe && ((1 << (ulong)(in_stack_000017bc & 0x1f) & 0x2c00U) != 0)))) {
      lVar22 = *(long *)(lVar22 + 0x50);
      if (lVar22 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar22 + 0x18) <= uVar2)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (*(int *)(lVar22 + (long)(int)uVar2 * 0x5c + 0x24) == 1) goto LAB_02494e68;
    }
    else {
      lVar22 = *(long *)(lVar22 + 0x50);
      if (lVar22 == 0) goto LAB_0249920c;
LAB_02494e68:
      if (*(uint *)(lVar22 + 0x18) <= uVar2)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(int *)(lVar22 + (long)(int)uVar2 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
    }
    if (in_stack_000017bc == 9) {
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar57 = (float)FUN_026fd208(*in_stack_00000138 + 0x50,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar52 = *(float *)(unaff_x19 + 199);
      fVar59 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000138 + 0x1b9));
      fVar57 = fVar51 * fVar57 * fVar59;
      fVar59 = fVar57 * (float)(int)(fVar52 / fVar57);
      param_2 = (ulong)(uint)fVar59;
      if (fVar59 <= fVar52) {
        fVar59 = fVar52 + fVar57;
      }
LAB_02495058:
      *(float *)(unaff_x19 + 199) = fVar59;
    }
    else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
      if ((char)unaff_x19[0x1d] == '\0') {
        fVar52 = unaff_s12;
        if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
          fVar52 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
        }
        fVar59 = *(float *)(unaff_x19 + 199);
        fVar53 = (float)FUN_026fd474(&stack0x00001770,0);
        if (unaff_x19[0x1f] != 0) {
          fVar57 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
          fVar59 = fVar59 + fVar57 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                     fVar51 * (fVar46 + fVar52 * fVar53) +
                                     in_stack_000000c8 *
                                     (fVar66 + fStack00000000000000cc +
                                               *(float *)(unaff_x19[0x1f] + 0x1ac)));
          *(float *)(unaff_x19 + 199) = fVar59;
          goto joined_r0x02494fac;
        }
        goto LAB_0249920c;
      }
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar59 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
               (*(float *)((long)unaff_x19 + 0x2a4) +
               fVar51 * fVar46 +
               in_stack_000000c8 *
               (fVar66 + fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
      param_2 = (ulong)(uint)fVar59;
      fVar59 = *(float *)(unaff_x19 + 199) - fVar59;
      *(float *)(unaff_x19 + 199) = fVar59;
      if ((uVar18 != 0) || (in_stack_000017bc == 0x200b)) {
        fVar57 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
        param_2 = (ulong)(uint)fVar57;
        fVar59 = fVar59 - fVar57;
        goto LAB_02495058;
      }
    }
    else {
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar57 = *(float *)(unaff_x19 + 199);
      fVar59 = fVar57 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                        (*(float *)((long)unaff_x19 + 0x2a4) +
                        (*(float *)(unaff_x19 + 0x55) - fVar61) +
                        in_stack_000000c8 *
                        (fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
      *(float *)(unaff_x19 + 199) = fVar59;
joined_r0x02494fac:
      if ((uVar18 != 0) || (param_2 = (ulong)(uint)fVar57, in_stack_000017bc == 0x200b)) {
        fVar57 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
        param_2 = (ulong)(uint)fVar57;
        fVar59 = fVar59 + fVar57;
        goto LAB_02495058;
      }
    }
    lVar22 = *in_stack_00000150;
    if ((lVar22 == 0) || (lVar42 = *(long *)(lVar22 + 0x38), lVar42 == 0)) goto LAB_0249920c;
    uVar2 = *in_stack_00000148;
    uVar32 = (uint)*(undefined8 *)(lVar42 + 0x18);
    if (uVar32 <= uVar2)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar42 + (int)uVar2 * unaff_x27 + 0x144) = fVar59;
    uVar36 = in_stack_000017bc;
    if ((int)in_stack_000017bc < 0xd) {
      if ((in_stack_000017bc - 10 < 2) || (in_stack_000017bc == 3)) goto LAB_024950bc;
FUN_02495710:
      if (((bool)(bVar7 & in_stack_000017bc == 0x2d)) || ((float)uVar2 == in_stack_00000078._4_4_))
      goto LAB_024950bc;
    }
    else {
      if (1 < in_stack_000017bc - 0x2028) {
        if (in_stack_000017bc != 0xd) goto FUN_02495710;
        param_2 = 0;
        *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
        if ((float)uVar2 != in_stack_00000078._4_4_) goto LAB_0249572c;
      }
LAB_024950bc:
      if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
        fVar57 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (((fStack000000000000004c < ABS(fVar57)) && (*(char *)((long)unaff_x19 + 700) == '\0'))
           && (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
          FUN_024d6ca8(fVar57);
          *(float *)((long)unaff_x19 + 0x4bc) = *(float *)((long)unaff_x19 + 0x4bc) - fVar57;
          *(float *)(unaff_x19 + 0x9a) = fVar57 + *(float *)(unaff_x19 + 0x9a);
          puVar9 = System_Threading_Mutex_TypeInfo;
          lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
          if (*(int *)(lVar22 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar22 = *(long *)puVar9;
          }
          lVar42 = *(long *)(lVar22 + 0xb8);
          if (*(int *)(lVar42 + 0x7ac) == (int)unaff_x19[0x94]) {
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar42 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
            }
            FUN_013b8de4(lVar42 + 0x11f0,&stack0x00000880,
                         *(undefined8 *)
                          Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                        );
            lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
            memcpy((void *)(*(long *)(lVar22 + 0xb8) + 0x788),&stack0x00000880,0x378);
            lVar22 = *(long *)(lVar22 + 0xb8);
            *(float *)(lVar22 + 0x7bc) = fVar57 + *(float *)(lVar22 + 0x7bc);
            *(float *)(lVar22 + 0x800) = fVar57 + *(float *)(lVar22 + 0x800);
            memcpy(&stack0x00000190,(void *)(lVar22 + 0x788),0x378);
            FUN_013b86dc(lVar22 + 0x11f0,&stack0x00000190,
                         *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__
                        );
          }
        }
      }
      fVar52 = *(float *)(unaff_x19 + 0x9a);
      *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
      fVar59 = *(float *)((long)unaff_x19 + 0x4c4) - fVar52;
      fVar57 = *(float *)((long)unaff_x19 + 0x4bc);
      if (fVar59 <= *(float *)((long)unaff_x19 + 0x4bc)) {
        fVar57 = fVar59;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar57;
      fVar53 = *(float *)(unaff_x19 + 0x98);
      if (in_stack_000017b4 == '\0') {
        in_stack_000017b8 = fVar57;
      }
      if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
         (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
          ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
        in_stack_000017b4 = '\x01';
      }
      lVar22 = *in_stack_00000150;
      if ((lVar22 == 0) || (lVar42 = *(long *)(lVar22 + 0x50), lVar42 == 0)) goto LAB_0249920c;
      uVar2 = *(uint *)(unaff_x19 + 0x94);
      if (*(uint *)(lVar42 + 0x18) <= uVar2)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar42 + (long)(int)uVar2 * 0x5c;
      *(int *)(lVar30 + 0x34) = (int)unaff_x19[0x92];
      iVar13 = (int)unaff_x19[0x92];
      if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
        iVar13 = *(int *)((long)unaff_x19 + 0x494);
      }
      *(int *)((long)unaff_x19 + 0x494) = iVar13;
      *(int *)(lVar30 + 0x38) = iVar13;
      *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
      *(undefined4 *)(lVar30 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
      iVar13 = *(int *)((long)unaff_x19 + 0x494);
      if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
        iVar13 = *(int *)((long)unaff_x19 + 0x49c);
      }
      *(int *)((long)unaff_x19 + 0x49c) = iVar13;
      *(int *)(lVar30 + 0x40) = iVar13;
      *(int *)(lVar30 + 0x24) = (*(int *)(lVar30 + 0x3c) - *(int *)(lVar30 + 0x34)) + 1;
      *(undefined4 *)(lVar30 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar55 = *(undefined4 *)(lVar22 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x27 + 0x11c)
      ;
      lVar42 = lVar42 + (long)(int)uVar2 * 0x5c;
      *(float *)(lVar42 + 0x70) = fVar59;
      *(undefined4 *)(lVar42 + 0x6c) = uVar55;
      lVar22 = *in_stack_00000150;
      if ((lVar22 == 0) || (lVar42 = *(long *)(lVar22 + 0x50), lVar42 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar42 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar55 = *(undefined4 *)(lVar22 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x27 + 0x128)
      ;
      fVar53 = fVar53 - fVar52;
      lVar42 = lVar42 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      *(float *)(lVar42 + 0x78) = fVar53;
      *(undefined4 *)(lVar42 + 0x74) = uVar55;
      lVar22 = *in_stack_00000150;
      if ((lVar22 == 0) || (lVar30 = *(long *)(lVar22 + 0x50), lVar30 == 0)) goto LAB_0249920c;
      lVar34 = (long)(int)*(uint *)(unaff_x19 + 0x94);
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar42 = lVar30 + lVar34 * 0x5c;
      *(float *)(lVar42 + 0x44) = *(float *)(lVar42 + 0x74) - fVar51 * in_stack_00000128;
      *(float *)(lVar42 + 0x5c) = fStack00000000000000d4;
      if (*(int *)(lVar42 + 0x24) == 1) {
        *(int *)(lVar30 + lVar34 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
      }
      if ((*in_stack_00000138 == 0) || (lVar42 = *(long *)(lVar22 + 0x38), lVar42 == 0))
      goto LAB_0249920c;
      lVar44 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
      uVar32 = (uint)*(undefined8 *)(lVar42 + 0x18);
      if (uVar32 <= *(uint *)((long)unaff_x19 + 0x49c))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if ((*(char *)(lVar42 + lVar44 * unaff_x27 + 0x194) == '\0') &&
         (lVar44 = (long)(int)*(uint *)(unaff_x19 + 0x93), uVar32 <= *(uint *)(unaff_x19 + 0x93)))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      fVar51 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
               (in_stack_000000c8 *
                (fVar66 + fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)) -
               *(float *)((long)unaff_x19 + 0x2a4));
      fVar57 = -fVar51;
      if ((char)unaff_x19[0x1d] != '\0') {
        fVar57 = fVar51;
      }
      lVar30 = lVar30 + lVar34 * 0x5c;
      *(float *)(lVar30 + 0x58) = *(float *)(lVar42 + lVar44 * unaff_x27 + 0x144) + fVar57;
      fVar57 = *(float *)(unaff_x19 + 0x9a);
      *(float *)(lVar30 + 0x48) = fStack0000000000000050 + (fVar53 - fVar59);
      *(float *)(lVar30 + 0x4c) = fVar53;
      param_2 = (ulong)(uint)(0.0 - fVar57);
      *(float *)(lVar30 + 0x50) = 0.0 - fVar57;
      *(float *)(lVar30 + 0x54) = fVar59;
      unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
      if ((int)in_stack_000017bc < 0x2d) {
        if (in_stack_000017bc - 10 < 2) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering:
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          unaff_x28 = (long *)StringLiteral_302;
          unaff_x26 = (undefined8 *)&stack0x00000880;
          FUN_024d69d4();
          lVar22 = unaff_x19[0x6c];
          *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
          iVar16 = (int)unaff_x19[0x94] + 1;
          *(int *)(unaff_x19 + 0x94) = iVar16;
          *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
          if ((lVar22 == 0) || (*(long *)(lVar22 + 0x50) == 0)) goto LAB_0249920c;
          if (*(int *)(*(long *)(lVar22 + 0x50) + 0x18) <= iVar16) {
            FUN_024d6e60();
            lVar22 = unaff_x19[0x6c];
            if (lVar22 == 0) goto LAB_0249920c;
          }
          lVar22 = *(long *)(lVar22 + 0x38);
          if (lVar22 == 0) goto LAB_0249920c;
          if (*in_stack_00000148 < *(uint *)(lVar22 + 0x18)) {
            fVar57 = *(float *)(lVar22 + (int)*in_stack_00000148 * unaff_x27 + 0x154);
            if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
              fVar51 = 0.0;
              if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
                fVar51 = *(float *)((long)unaff_x19 + 0x2c4);
              }
              uVar25 = 0;
              fVar51 = *(float *)(unaff_x19 + 0x9a) +
                       fVar57 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                       fStack0000000000000054 *
                       (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4)) +
                       in_stack_000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar51);
            }
            else {
              if ((in_stack_000017bc == 0x2029) || (fVar51 = 0.0, in_stack_000017bc == 10)) {
                fVar51 = *(float *)((long)unaff_x19 + 0x2c4);
              }
              uVar25 = 1;
              fVar51 = *(float *)(unaff_x19 + 0x9a) +
                       *(float *)(unaff_x19 + 0x57) +
                       in_stack_000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar51);
            }
            *(float *)(unaff_x19 + 0x9a) = fVar51;
            *(undefined1 *)((long)unaff_x19 + 700) = uVar25;
            lVar22 = *unaff_x29;
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar22 = *unaff_x29;
            }
            uVar19 = *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x15a8);
            *(float *)(unaff_x19 + 0x99) = fVar57;
            param_2 = NEON_rev64(uVar19,4);
            unaff_x19[0x98] = param_2;
            *(float *)(unaff_x19 + 199) =
                 *(float *)(unaff_x19 + 0x80) + 0.0 + *(float *)((long)unaff_x19 + 0x404);
            FUN_024d69d4();
            FUN_024d69d4();
            *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
            fStack0000000000000058 = 1.4013e-45;
            bStack000000000000005c = 1;
            goto LAB_02492630;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        if (in_stack_000017bc == 3) {
          if (unaff_x19[0x8e] == 0) goto LAB_0249920c;
          in_stack_00001788 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
          uVar36 = 3;
        }
      }
      else if ((in_stack_000017bc - 0x2028 < 2) || (in_stack_000017bc == 0x2d))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering;
    }
LAB_0249572c:
    uVar2 = *in_stack_00000148;
    if (uVar32 <= uVar2)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (*(char *)(lVar42 + (int)uVar2 * unaff_x27 + 0x194) != '\0') {
      lVar42 = lVar42 + (int)uVar2 * unaff_x27;
      uVar58 = *(ulong *)(lVar42 + 0x11c);
      uVar21 = *(ulong *)(in_stack_00000070 + 0x230);
      *(ulong *)(in_stack_00000070 + 0x230) =
           uVar58 ^ (uVar58 ^ uVar21) &
                    CONCAT44(-(uint)((float)(uVar21 >> 0x20) < (float)(uVar58 >> 0x20)),
                             -(uint)((float)uVar21 < (float)uVar58));
      uVar21 = *(ulong *)(in_stack_00000070 + 0x238);
      param_2 = *(ulong *)(lVar42 + 0x128);
      *(ulong *)(in_stack_00000070 + 0x238) =
           param_2 ^ (param_2 ^ uVar21) &
                     CONCAT44(-(uint)((float)(param_2 >> 0x20) < (float)(uVar21 >> 0x20)),
                              -(uint)((float)param_2 < (float)uVar21));
    }
    if (((int)unaff_x19[0x5b] == 5) &&
       ((0xd < uVar36 || ((1 << (ulong)(uVar36 & 0x1f) & 0x2c00U) == 0)))) {
      lVar42 = *(long *)(lVar22 + 0x58);
      if (lVar42 == 0) goto LAB_0249920c;
      iVar13 = (int)unaff_x19[0x95] + 1;
      if (*(int *)(lVar42 + 0x18) < iVar13) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147c08((long *)(lVar22 + 0x58),iVar13,1,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
        lVar22 = *in_stack_00000150;
        if (lVar22 == 0) goto LAB_0249920c;
      }
      lVar42 = *(long *)(lVar22 + 0x58);
      if (lVar42 == 0) goto LAB_0249920c;
      uVar32 = *(uint *)(unaff_x19 + 0x95);
      lVar30 = (long)(int)uVar32;
      uVar2 = *(uint *)(lVar42 + 0x18);
      if (uVar2 <= uVar32)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar34 = lVar42 + lVar30 * 0x14;
      fVar51 = *(float *)(lVar34 + 0x30);
      param_2 = (ulong)(uint)fVar51;
      *(undefined4 *)(lVar34 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
      fVar57 = *(float *)((long)unaff_x19 + 0x4bc);
      if (fVar51 <= *(float *)((long)unaff_x19 + 0x4bc)) {
        fVar57 = fVar51;
      }
      *(float *)(lVar34 + 0x30) = fVar57;
      uVar36 = *(uint *)((long)unaff_x19 + 0x48c);
      if (uVar36 == 0 && uVar32 == 0) {
        *(uint *)(lVar42 + lVar30 * 0x14 + 0x20) = uVar36;
      }
      else {
        uVar6 = uVar36 - 1;
        if (0 < (int)uVar36) {
          lVar22 = *(long *)(lVar22 + 0x38);
          if (lVar22 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar22 + 0x18) <= uVar6)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          if (uVar32 != *(uint *)(lVar22 + (long)(int)uVar6 * (long)iVar16 + 0x68)) {
            if (uVar32 - 1 < uVar2) {
              *(uint *)(lVar42 + 0x20 + (long)(int)(uVar32 - 1) * 0x14 + 4) = uVar6;
              *(uint *)(lVar42 + 0x20 + lVar30 * 0x14) = uVar36;
              goto LAB_024957b0;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
        }
        if ((float)uVar36 == in_stack_00000078._4_4_) {
          *(float *)(lVar42 + lVar30 * 0x14 + 0x24) = in_stack_00000078._4_4_;
        }
      }
    }
LAB_024957b0:
    puVar9 = System_Threading_Mutex_TypeInfo;
    if (((char)unaff_x19[0x5a] != '\0') ||
       ((*(uint *)(unaff_x19 + 0x5b) < 7 &&
        ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) != 0)))) {
      if ((uVar18 == 0) &&
         (((in_stack_000017bc != 0x2d && (in_stack_000017bc != 0x200b)) &&
          (in_stack_000017bc != 0xad)))) {
        if (*(char *)((long)unaff_x19 + 0x2d2) == '\0') {
LAB_02495868:
          if (((((0x2bfd < in_stack_000017bc - 0xac01) && (0x1d < in_stack_000017bc - 0xa961)) &&
               (0xfd < in_stack_000017bc - 0x1101)) || (uVar21 = FUN_024e95f0(0), (uVar21 & 1) != 0)
              ) && ((((0xed < in_stack_000017bc - 0xff01 && (0x1d < in_stack_000017bc - 0xfe31)) &&
                     (0x717d < in_stack_000017bc - 0x2e81)) && (0x1fd < in_stack_000017bc - 0xf901))
                   )) goto LAB_024958f0;
          lVar22 = FUN_024e94b0(0);
          if ((lVar22 == 0) || (*(long *)(lVar22 + 0x10) == 0)) goto LAB_0249920c;
          uVar21 = FUN_0129aa60(*(long *)(lVar22 + 0x10),&stack0x00000880,
                                *(undefined8 *)
                                 System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                               );
          if ((int)in_stack_00000078._4_4_ <= (int)*in_stack_00000148) {
            in_stack_00000880 = in_stack_000017bc;
            if ((uVar21 & 1) == 0) {
LAB_02495bc4:
              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_024d69d4();
              bStack000000000000005c = 0;
              goto LAB_02495b70;
            }
LAB_02495adc:
            if (uVar62 != uVar37 || ((bStack000000000000005c ^ 0xff) & 1) != 0) goto LAB_02495b70;
            goto LAB_02495af4;
          }
          lVar22 = FUN_024e94b0(0);
          if (((lVar22 == 0) || (*in_stack_00000150 == 0)) ||
             (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar42 + 0x18) <= *in_stack_00000148 + 1)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          if (*(long *)(lVar22 + 0x18) == 0) goto LAB_0249920c;
          in_stack_00000880 =
               (uint)*(ushort *)(lVar42 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar16 + 0x20)
          ;
          uVar58 = FUN_0129aa60(*(long *)(lVar22 + 0x18),&stack0x00000880,
                                *(undefined8 *)
                                 System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                               );
          if ((uVar21 & 1) != 0) goto LAB_02495adc;
          if ((uVar58 & 1) == 0) goto LAB_02495bc4;
          if ((bStack000000000000005c & 1) == 0) goto LAB_024959d4;
          if (uVar18 != 0) goto LAB_02495af8;
        }
        else {
LAB_024958f0:
          if ((bStack000000000000005c & 1) == 0) {
LAB_024959d4:
            bStack000000000000005c = 0;
            goto LAB_02495b70;
          }
          if ((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) == 0) {
LAB_02495af4:
            if (uVar18 == 0) goto LAB_02495b30;
          }
LAB_02495af8:
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_024d69d4();
        }
LAB_02495b30:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_024d69d4();
        bStack000000000000005c = 1;
      }
      else {
        if (*(char *)((long)unaff_x19 + 0x2d2) == '\x01') goto LAB_024958f0;
        if (((in_stack_000017bc - 0x2007 < 0x29) &&
            ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
           ((in_stack_000017bc == 0xa0 || (in_stack_000017bc == 0x2060)))) goto LAB_02495868;
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_024d69d4();
        bStack000000000000005c = 0;
        *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xe78) = 0xffffffff;
      }
    }
LAB_02495b70:
    unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    unaff_x28 = (long *)StringLiteral_302;
    unaff_x26 = (undefined8 *)&stack0x00000880;
    FUN_024d69d4();
    *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
    goto LAB_02492630;
  }
  *(undefined1 *)(lVar42 + 0x194) = 1;
  pfVar29 = _fStack0000000000000088;
  pfVar33 = _fStack0000000000000098;
  if (bVar7) {
    lVar22 = *(long *)(lVar22 + 0x50);
    if (lVar22 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    pfVar33 = (float *)(lVar22 + 0x60);
    pfVar29 = (float *)(lVar22 + 100);
  }
  fVar52 = *pfVar33;
  fVar53 = *pfVar29;
  fVar59 = *(float *)(unaff_x19 + 0x6b);
  fVar54 = *(float *)(unaff_x19 + 199);
  fStack00000000000000d4 = (in_stack_00000090 - fVar52) - fVar53;
  bVar11 = true;
  if ((fVar59 <= fStack00000000000000d4) && (bVar11 = false, !NAN(fVar59))) {
    bVar11 = fVar59 == -1.0;
  }
  if (!bVar11) {
    fStack00000000000000d4 = fVar59;
  }
  fVar59 = 0.0;
  if ((char)unaff_x19[0x1d] == '\0') {
    fVar59 = (float)FUN_026fd474(&stack0x00001770,0);
    param_2 = (ulong)*(uint *)(unaff_x19 + 0x9a);
  }
  fVar70 = *(float *)((long)unaff_x19 + 0x4c4);
  fVar64 = *(float *)((long)unaff_x19 + 0x2cc);
  fVar68 = (float)param_2;
  if (in_stack_000017bc != 0xad) {
    fVar57 = fVar51;
  }
  fVar72 = 0.0;
  if ((0.0 < fVar68) && (fVar72 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
    fVar72 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
  }
  fVar72 = (*(float *)(unaff_x19 + 0x96) - (fVar70 - fVar68)) + fVar72;
  uVar2 = *in_stack_00000148;
  if (fVar72 <= fStack00000000000000a4) {
UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited:
    unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
    fVar68 = 1.0 - fVar64;
    param_2 = (ulong)(uint)fVar68;
    fVar59 = ABS(fVar54) + fVar59 * fVar68 * fVar57;
    fVar57 = _DAT_0294c6e8;
    if ((uVar32 & 0x18) == 0) {
      fVar57 = 1.0;
    }
    if (fVar59 <= fVar57 * fStack00000000000000d4) {
LAB_02494950:
      if (in_stack_000017bc == 0xad) {
        if ((*in_stack_00000150 == 0) ||
           (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0)) goto LAB_0249920c;
        if (*in_stack_00000148 < *(uint *)(lVar22 + 0x18)) {
          *(undefined1 *)(lVar22 + (int)*in_stack_00000148 * unaff_x27 + 0x194) = 0;
          goto LAB_02494abc;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      }
      if (in_stack_000017bc == 9) {
        lVar22 = *in_stack_00000150;
        if ((lVar22 == 0) || (lVar42 = *(long *)(lVar22 + 0x38), lVar42 == 0)) goto LAB_0249920c;
        uVar2 = *in_stack_00000148;
        if (uVar2 < *(uint *)(lVar42 + 0x18)) {
          *(undefined1 *)(lVar42 + (int)uVar2 * unaff_x27 + 0x194) = 0;
          *(uint *)((long)unaff_x19 + 0x49c) = uVar2;
          lVar42 = *(long *)(lVar22 + 0x50);
          if (lVar42 == 0) goto LAB_0249920c;
          if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar42 + 0x18)) {
            lVar42 = lVar42 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
            *(int *)(lVar42 + 0x2c) = *(int *)(lVar42 + 0x2c) + 1;
            goto LAB_024949c4;
          }
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      }
      if (*(int *)((long)unaff_x19 + 0x63c) == 1) {
        (**(code **)(*unaff_x19 + 0x8c8))();
      }
      else if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
        (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000128,fVar65);
      }
      uVar2 = *in_stack_00000148;
      if (((uint)fStack0000000000000058 & 1) != 0) {
        *(uint *)(in_stack_00000070 + 0x1f0) = uVar2;
      }
      *(uint *)((long)unaff_x19 + 0x49c) = uVar2;
      *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
      if ((unaff_x19[0x6c] == 0) || (lVar22 = *(long *)(unaff_x19[0x6c] + 0x50), lVar22 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      fStack0000000000000058 = 0.0;
      *(float *)(lVar22 + 0x60) = fVar52;
      *(float *)(lVar22 + 100) = fVar53;
      goto LAB_02494abc;
    }
    if (((char)unaff_x19[0x5a] != '\0') && (uVar2 != *(uint *)(unaff_x19 + 0x92))) {
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00001788 = FUN_024d66ec();
      if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
        lVar22 = *in_stack_00000150;
        if ((lVar22 == 0) || (lVar42 = *(long *)(lVar22 + 0x38), lVar42 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar42 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar54 = *(float *)(unaff_x19 + 0x9a);
        fVar64 = 0.0;
        if ((0.0 < fVar54) && (fVar64 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
          fVar64 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
        }
        fVar64 = in_stack_000000c8 * *(float *)(unaff_x19 + 0x56) +
                 *(float *)(lVar42 + (int)*in_stack_00000148 * unaff_x27 + 0x154) +
                 (fVar64 - *(float *)((long)unaff_x19 + 0x4c4)) +
                 fStack0000000000000054 *
                 (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
      }
      else {
        lVar22 = unaff_x19[0x6c];
        *(undefined1 *)((long)unaff_x19 + 700) = 1;
        if (lVar22 == 0) goto LAB_0249920c;
        fVar54 = *(float *)(unaff_x19 + 0x9a);
        fVar64 = *(float *)(unaff_x19 + 0x57) + in_stack_000000c8 * *(float *)(unaff_x19 + 0x56);
      }
      puVar9 = System_Threading_Mutex_TypeInfo;
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_0249920c;
      uVar36 = *(uint *)((long)unaff_x19 + 0x48c);
      if ((uVar36 < *(uint *)(lVar22 + 0x18)) &&
         (uVar6 = uVar36 - 1, uVar6 < *(uint *)(lVar22 + 0x18))) {
        param_2 = (ulong)(uint)(fVar64 + *(float *)(unaff_x19 + 0x96));
        fVar68 = (fVar64 + *(float *)(unaff_x19 + 0x96) + fVar54) -
                 *(float *)(lVar22 + (int)uVar36 * unaff_x27 + 0x158);
        if (((in_stack_00000068._4_1_ & 1) != 0 ||
             *(short *)(lVar22 + (long)(int)uVar6 * (long)iVar16 + 0x20) != 0xad) ||
           ((fStack00000000000000a4 <= fVar68 && ((int)unaff_x19[0x5b] != 0)))) {
          if (*(short *)(lVar22 + (int)uVar36 * unaff_x27 + 0x20) == 0xad) {
            in_stack_00000068._4_1_ = 1;
          }
          else {
            if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
              fVar64 = *(float *)((long)unaff_x19 + 0x2cc);
              fVar54 = *(float *)(unaff_x19 + 0x59) / 100.0;
              if ((fVar54 <= fVar64) || ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)))
              {
                fVar64 = *(float *)((long)unaff_x19 + 0x1dc);
                param_2 = (ulong)(uint)fVar64;
                fVar54 = *(float *)(unaff_x19 + 0x49);
                if ((fVar54 < fVar64) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                goto LAB_02499210;
                goto LAB_024946c0;
              }
LAB_024992ac:
              fVar51 = fVar59;
              if (0.0 < fVar64) {
                fVar51 = fVar59 / (1.0 - fVar64);
              }
              fVar64 = fVar64 + (fVar59 - fVar57 * (fStack00000000000000d4 + DAT_02958218)) / fVar51
              ;
LAB_0249929c:
              if (fVar54 <= fVar64) {
                fVar64 = fVar54;
              }
              *(float *)((long)unaff_x19 + 0x2cc) = fVar64;
              return;
            }
LAB_024946c0:
            lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar22 = *(long *)puVar9;
            }
            iVar13 = *(int *)(*(long *)(lVar22 + 0xb8) + 0xe78);
            if ((((float)iVar13 != fStack0000000000000034) && (iVar13 != -1)) &&
               (((bStack000000000000005c ^ 1) & 1) == 0)) {
              if (*(int *)(lVar22 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              in_stack_00001788 = FUN_024d66ec();
              if ((unaff_x19[0x6c] == 0) ||
                 (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0)) goto LAB_0249920c;
              uVar6 = *in_stack_00000148 - 1;
              if (*(uint *)(lVar22 + 0x18) <= uVar6)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              fStack0000000000000034 = (float)iVar13;
              if (*(short *)(lVar22 + (long)(int)uVar6 * (long)iVar16 + 0x20) == 0xad) {
                *in_stack_00000148 = uVar6;
                goto LAB_024947b4;
              }
            }
            if (fStack00000000000000a4 < fVar68) {
              if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                *(undefined4 *)((long)unaff_x19 + 0x2dc) = *(undefined4 *)((long)unaff_x19 + 0x48c);
              }
              unaff_x28 = (long *)StringLiteral_302;
              unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
              if ((char)unaff_x19[0x46] != '\0') {
                fVar54 = *(float *)(unaff_x19 + 0x58);
                if ((fVar54 < *(float *)((long)unaff_x19 + 0x2b4)) &&
                   (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                  fVar57 = *(float *)((long)unaff_x19 + 0x2b4) +
                           ((in_stack_00000018._4_4_ - fVar68) / (float)((int)unaff_x19[0x94] + 1))
                           / fStack0000000000000054;
                  if (fVar57 <= fVar54) {
                    fVar57 = fVar54;
                  }
LAB_024964c8:
                  *(float *)((long)unaff_x19 + 0x2b4) = fVar57;
                  return;
                }
                fVar64 = *(float *)((long)unaff_x19 + 0x2cc);
                fVar54 = *(float *)(unaff_x19 + 0x59) / 100.0;
                if ((fVar64 < fVar54) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                goto LAB_024992ac;
                fVar64 = *(float *)((long)unaff_x19 + 0x1dc);
                param_2 = (ulong)(uint)fVar64;
                fVar54 = *(float *)(unaff_x19 + 0x49);
                if ((fVar54 < fVar64) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                goto LAB_02499210;
              }
              switch((int)unaff_x19[0x5b]) {
              case 0:
              case 2:
              case 4:
                param_2 = unaff_d9;
                FUN_024d7014(fStack0000000000000054,unaff_d9,in_stack_000000c8,
                             *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar66,fStack00000000000000cc,
                             fStack00000000000000d4,fStack0000000000000048);
                break;
              case 1:
                lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
                if (*(int *)(lVar22 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar22 = *unaff_x29;
                }
                lVar42 = *(long *)(lVar22 + 0xb8);
                lVar22 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
                  lVar22 = FUN_00d5941c(lVar22);
                }
                lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 8);
                if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
                  lVar22 = FUN_00d5941c();
                }
                piVar23 = (int *)thunk_FUN_00d32ed4(lVar42 + 0x11f0,*(long *)(lVar22 + 0x80) + 0xa0)
                ;
                if (*piVar23 == 0) {
                  in_stack_00000068._4_1_ = 0;
                  goto LAB_02495f00;
                }
                lVar22 = *unaff_x29;
                if (*(int *)(lVar22 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar22 = *unaff_x29;
                }
                FUN_013b8de4(*(long *)(lVar22 + 0xb8) + 0x11f0,&stack0x00000880,
                             *(undefined8 *)
                              Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                            );
                memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
                iVar16 = FUN_024d66ec();
                in_stack_00000068._4_1_ = 0;
                goto LAB_02494364;
              case 3:
                if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                in_stack_00001788 = FUN_024d66ec();
                in_stack_00000068._4_1_ = 0;
                goto LAB_0249408c;
              case 5:
                *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
                param_2 = unaff_d9;
                FUN_024d7014(fStack0000000000000054,unaff_d9,in_stack_000000c8,
                             *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar66,fStack00000000000000cc,
                             fStack00000000000000d4,fStack0000000000000048);
                *(undefined4 *)(unaff_x19 + 0x99) = 0;
                *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
                *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                break;
              case 6:
                lVar22 = unaff_x19[0x5c];
                if (*(int *)(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar21 = FUN_02681b9c(lVar22,0,0);
                if ((uVar21 & 1) != 0) {
                  plVar43 = (long *)unaff_x19[0x5c];
                  uVar19 = (**(code **)(*unaff_x19 + 0x548))();
                  if (plVar43 == (long *)0x0) goto LAB_0249920c;
                  (**(code **)(*plVar43 + 0x558))(plVar43,uVar19,*(undefined8 *)(*plVar43 + 0x560));
                  lVar22 = unaff_x19[0x5c];
                  if (lVar22 == 0) goto LAB_0249920c;
                  *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
                  FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                  plVar43 = (long *)unaff_x19[0x5c];
                  if (plVar43 == (long *)0x0) goto LAB_0249920c;
                  (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
                  *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                }
                in_stack_00000068._4_1_ = 0;
                goto LAB_02494484;
              default:
                in_stack_00000068._4_1_ = 0;
                goto LAB_02494950;
              }
              in_stack_00000068._4_1_ = 0;
              bStack000000000000005c = 1;
              fStack0000000000000058 = 1.4013e-45;
              goto LAB_024944c4;
            }
            param_2 = unaff_d9;
            FUN_024d7014(fStack0000000000000054,unaff_d9,in_stack_000000c8,
                         *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar66,fStack00000000000000cc,
                         fStack00000000000000d4,fStack0000000000000048);
            bStack000000000000005c = 1;
            in_stack_00000068._4_1_ = 0;
            fStack0000000000000058 = 1.4013e-45;
          }
        }
        else {
          *in_stack_00000148 = uVar6;
LAB_024947b4:
          in_stack_000017a8 = CONCAT44(0x2d,uVar6);
          in_stack_00001788 = in_stack_00001788 - 1;
          in_stack_00000068._4_1_ = 0;
        }
        unaff_x26 = (undefined8 *)&stack0x00000880;
        unaff_s12 = 1.0;
        unaff_x28 = (long *)StringLiteral_302;
        unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
        goto LAB_02492630;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    }
    if (((char)unaff_x19[0x46] != '\0') &&
       (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
      fVar54 = *(float *)(unaff_x19 + 0x59) / 100.0;
      if (fVar64 < fVar54) {
        fVar51 = fVar59 / fVar68;
        if (fVar64 <= 0.0) {
          fVar51 = fVar59;
        }
        fVar64 = fVar64 + (fVar59 - fVar57 * (fStack00000000000000d4 + DAT_02958218)) / fVar51;
        goto LAB_0249929c;
      }
      fVar64 = *(float *)((long)unaff_x19 + 0x1dc);
      param_2 = (ulong)(uint)fVar64;
      fVar54 = *(float *)(unaff_x19 + 0x49);
      if (fVar64 <= fVar54) goto LAB_02493e34;
LAB_02499210:
      fVar57 = (fVar64 - *(float *)(unaff_x19 + 0x47)) * 0.5;
      if (fVar57 <= DAT_028aa298) {
        fVar57 = DAT_028aa298;
      }
      *(float *)((long)unaff_x19 + 0x234) = fVar64;
      fVar51 = (fVar64 - fVar57) * 20.0 + 0.5;
      fVar57 = DAT_02958220;
      if (fVar51 != INFINITY) {
        fVar57 = (float)(int)fVar51 / 20.0;
      }
      if (fVar57 <= fVar54) {
        fVar57 = fVar54;
      }
LAB_02495fd8:
      *(float *)((long)unaff_x19 + 0x1dc) = fVar57;
      return;
    }
LAB_02493e34:
    iVar13 = (int)unaff_x19[0x5b];
    if (iVar13 == 1) {
      lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar22 = *unaff_x29;
      }
      unaff_x28 = (long *)StringLiteral_302;
      lVar42 = *(long *)(lVar22 + 0xb8);
      lVar22 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
      if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
        lVar22 = FUN_00d5941c(lVar22);
      }
      lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 8);
      if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
        lVar22 = FUN_00d5941c();
      }
      piVar23 = (int *)thunk_FUN_00d32ed4(lVar42 + 0x11f0,*(long *)(lVar22 + 0x80) + 0xa0);
      if (*piVar23 == 0) goto LAB_02495f00;
      lVar22 = *unaff_x29;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar22 = *unaff_x29;
      }
      FUN_013b8de4(*(long *)(lVar22 + 0xb8) + 0x11f0,&stack0x00000880,
                   *(undefined8 *)
                    Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                  );
      memcpy(&stack0x00000c70,&stack0x00000880,0x378);
      goto LAB_02494358;
    }
    if (iVar13 != 6) {
      if (iVar13 == 3) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        goto LAB_02493ec0;
      }
      goto LAB_02494950;
    }
    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    unaff_x28 = (long *)StringLiteral_302;
    in_stack_00001788 = FUN_024d66ec();
    lVar22 = unaff_x19[0x5c];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    }
    uVar21 = FUN_02681b9c(lVar22,0,0);
    if ((uVar21 & 1) != 0) {
      plVar43 = (long *)unaff_x19[0x5c];
      uVar19 = (**(code **)(*unaff_x19 + 0x548))();
      if (plVar43 == (long *)0x0) goto LAB_0249920c;
      (**(code **)(*plVar43 + 0x558))(plVar43,uVar19,*(undefined8 *)(*plVar43 + 0x560));
      lVar22 = unaff_x19[0x5c];
      if (lVar22 == 0) goto LAB_0249920c;
      *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
      FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
      plVar43 = (long *)unaff_x19[0x5c];
      if (plVar43 == (long *)0x0) goto LAB_0249920c;
      (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
    }
LAB_02494484:
    unaff_x26 = (undefined8 *)&stack0x00000880;
    unaff_s12 = 1.0;
    in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
  }
  else {
    if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
      *(uint *)((long)unaff_x19 + 0x2dc) = uVar2;
    }
    unaff_x28 = (long *)StringLiteral_302;
    unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
    uVar19 = DAT_02941c08;
    if ((char)unaff_x19[0x46] != '\0') {
      fVar74 = *(float *)(unaff_x19 + 0x58);
      if (((fVar74 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar68)) &&
         (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
        fVar57 = *(float *)((long)unaff_x19 + 0x2b4) +
                 ((in_stack_00000018._4_4_ - fVar72) / (float)(int)unaff_x19[0x94]) /
                 fStack0000000000000054;
        if (fVar57 <= fVar74) {
          fVar57 = fVar74;
        }
        goto LAB_024964c8;
      }
      fVar72 = *(float *)((long)unaff_x19 + 0x1dc);
      fVar68 = *(float *)(unaff_x19 + 0x49);
      param_2 = (ulong)(uint)fVar68;
      if ((fVar68 < fVar72) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
        fVar57 = (fVar72 - *(float *)(unaff_x19 + 0x47)) * 0.5;
        if (fVar57 <= DAT_028aa298) {
          fVar57 = DAT_028aa298;
        }
        fVar51 = (fVar72 - fVar57) * 20.0 + 0.5;
        fVar57 = DAT_02958220;
        if (fVar51 != INFINITY) {
          fVar57 = (float)(int)fVar51 / 20.0;
        }
        if (fVar57 <= fVar68) {
          fVar57 = fVar68;
        }
        *(float *)((long)unaff_x19 + 0x234) = fVar72;
        goto LAB_02495fd8;
      }
    }
    switch((int)unaff_x19[0x5b]) {
    case 1:
      lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar22 = *unaff_x29;
      }
      lVar42 = *(long *)(lVar22 + 0xb8);
      lVar22 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
      if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
        lVar22 = FUN_00d5941c(lVar22);
      }
      unaff_x28 = (long *)StringLiteral_302;
      lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 8);
      if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
        lVar22 = FUN_00d5941c();
      }
      piVar23 = (int *)thunk_FUN_00d32ed4(lVar42 + 0x11f0,*(long *)(lVar22 + 0x80) + 0xa0);
      if (*piVar23 == 0) {
LAB_02495f00:
        in_stack_000017a8 = DAT_02941c08;
        unaff_x26 = (undefined8 *)&stack0x00000880;
        unaff_s12 = 1.0;
        in_stack_00000148[0] = 0;
        in_stack_00000148[1] = 0;
        in_stack_00001788 = 0xffffffff;
      }
      else {
        lVar22 = *unaff_x29;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar22 = *unaff_x29;
        }
        FUN_013b8de4(*(long *)(lVar22 + 0xb8) + 0x11f0,&stack0x00000880,
                     *(undefined8 *)
                      Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                    );
        memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_02494358:
        iVar16 = FUN_024d66ec();
LAB_02494364:
        unaff_s12 = 1.0;
        unaff_x26 = (undefined8 *)&stack0x00000880;
        iVar13 = *(int *)((long)unaff_x19 + 0x48c) + -1;
        *(int *)((long)unaff_x19 + 0x48c) = iVar13;
        in_stack_000017a8 = CONCAT44(0x2026,iVar13);
        in_stack_00000140 = in_stack_00000140 + 1;
        in_stack_00001788 = iVar16 - 1;
      }
      break;
    default:
      goto 
      UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited;
    case 3:
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
LAB_02493ec0:
      unaff_x28 = (long *)StringLiteral_302;
      in_stack_00001788 = FUN_024d66ec();
      goto LAB_0249408c;
    case 5:
      if ((uVar2 != 0) && (-1 < (int)in_stack_00001788)) {
        fVar57 = *(float *)(unaff_x19 + 0x98);
        unaff_x26 = (undefined8 *)&stack0x00000880;
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        if (fVar57 - fVar70 <= fStack00000000000000a4) {
          *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
          *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
          param_2 = *(ulong *)(*(long *)(*unaff_x29 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x99) = 0;
          lVar22 = NEON_rev64(param_2,4);
          unaff_x19[0x98] = lVar22;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x94) = (int)unaff_x19[0x94] + 1;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          break;
        }
        goto LAB_0249408c;
      }
      in_stack_00001788 = 0xffffffff;
      *in_stack_00000148 = 0;
      in_stack_000017a8 = uVar19;
LAB_024944c4:
      unaff_s12 = 1.0;
      unaff_x26 = (undefined8 *)&stack0x00000880;
      unaff_x28 = (long *)StringLiteral_302;
      unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
      break;
    case 6:
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00001788 = FUN_024d66ec();
      unaff_x28 = (long *)StringLiteral_302;
      lVar22 = unaff_x19[0x5c];
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
      }
      uVar21 = FUN_02681b9c(lVar22,0,0);
      if ((uVar21 & 1) != 0) {
        plVar43 = (long *)unaff_x19[0x5c];
        uVar19 = (**(code **)(*unaff_x19 + 0x548))();
        if (plVar43 == (long *)0x0) goto LAB_0249920c;
        (**(code **)(*plVar43 + 0x558))(plVar43,uVar19,*(undefined8 *)(*plVar43 + 0x560));
        lVar22 = unaff_x19[0x5c];
        if (lVar22 == 0) goto LAB_0249920c;
        *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
        FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
        plVar43 = (long *)unaff_x19[0x5c];
        if (plVar43 == (long *)0x0) goto LAB_0249920c;
        (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
        *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      }
LAB_0249408c:
      unaff_x26 = (undefined8 *)&stack0x00000880;
      unaff_s12 = 1.0;
      in_stack_000017a8 = CONCAT44(3,uVar2);
    }
  }
LAB_02492630:
  in_stack_00001788 = in_stack_00001788 + 1;
  lVar22 = unaff_x19[0x8e];
  if (lVar22 == 0) goto LAB_0249920c;
  if ((int)*(uint *)(lVar22 + 0x18) <= (int)in_stack_00001788) {
LAB_02495f1c:
    fVar57 = (float)param_2;
    if (((char)unaff_x19[0x46] != '\0') &&
       (fVar57 = DAT_02956ccc,
       DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
      fVar57 = *(float *)((long)unaff_x19 + 0x1dc);
      fVar51 = *(float *)((long)unaff_x19 + 0x24c);
      if ((fVar57 < fVar51) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
        if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
          *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
        }
        fVar59 = (*(float *)((long)unaff_x19 + 0x234) - fVar57) * 0.5;
        if (fVar59 <= DAT_028aa298) {
          fVar59 = DAT_028aa298;
        }
        *(float *)(unaff_x19 + 0x47) = fVar57;
        fVar59 = (fVar57 + fVar59) * 20.0 + 0.5;
        fVar57 = DAT_02958220;
        if (fVar59 != INFINITY) {
          fVar57 = (float)(int)fVar59 / 20.0;
        }
        if (fVar51 <= fVar57) {
          fVar57 = fVar51;
        }
        goto LAB_02495fd8;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
    if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
      uVar19 = FUN_0176eb1c(in_stack_00000038,0);
      uVar20 = FUN_017840ac(in_stack_00000040,0);
      uVar19 = FUN_0160073c(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__,
                            uVar19,*(undefined8 *)
                                    Method_UnityEngine_GameObject_GetComponents<Component>__,uVar20,
                            0);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x28);
      }
      FUN_02660dac(uVar19,0);
    }
    if ((*in_stack_00000148 == 0) || ((*in_stack_00000148 == 1 && (uVar17 == 3)))) {
      (**(code **)(*unaff_x19 + 0x948))();
      goto LAB_02496098;
    }
    lVar22 = *unaff_x29;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar22 = *unaff_x29;
    }
    puVar9 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    lVar22 = **(long **)(lVar22 + 0xb8);
    if (lVar22 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    iVar16 = *(int *)(lVar22 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
    if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
    goto LAB_0249920c;
    if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(int *)(lVar22 + 0x18) == 0)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    FUN_024e7d94(lVar22 + 0x20,0,0);
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    puVar10 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
    iVar13 = (int)unaff_x19[0x4d];
    in_stack_000000c8 =
         **(float **)
           (*(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
           + 0xb8);
    uStack00000000000000c0 =
         *(undefined8 *)
          (*(float **)
            (*(long *)
              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ + 0xb8
            ) + 1);
    lVar22 = unaff_x19[0xe2];
    _in_stack_00000090 = uStack00000000000000c0;
    fStack0000000000000098 = in_stack_000000c8;
    if (iVar13 < 0x401) {
      if (iVar13 == 0x100) {
        if (lVar22 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar22 + 0x18) < 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar19 = *(undefined8 *)(lVar22 + 0x30);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*in_stack_00000150 == 0) ||
             (lVar42 = *(long *)(*in_stack_00000150 + 0x58), lVar42 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar42 + 0x18) <= uStack000000000000002c)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar57 = *(float *)(lVar42 + (long)(int)uStack000000000000002c * 0x14 + 0x28);
        }
        else {
          fVar57 = *(float *)(unaff_x19 + 0x96);
        }
        fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar22 + 0x2c);
        fVar57 = (0.0 - fVar57) - fStack0000000000000020;
      }
      else if (iVar13 == 0x200) {
        if (lVar22 == 0) goto LAB_0249920c;
        if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fStack0000000000000098 = (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
        uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5,
                          ((float)*(undefined8 *)(lVar22 + 0x24) +
                          (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*in_stack_00000150 == 0) ||
             (lVar22 = *(long *)(*in_stack_00000150 + 0x58), lVar22 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar22 + 0x18) <= uStack000000000000002c)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar22 = lVar22 + (long)(int)uStack000000000000002c * 0x14;
          fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
          fVar57 = ((fStack0000000000000020 + *(float *)(lVar22 + 0x28) + *(float *)(lVar22 + 0x30))
                   - fStack0000000000000024) * -0.5 + 0.0;
        }
        else {
          fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
          fVar57 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8) -
                   fStack0000000000000024) * -0.5 + 0.0;
        }
      }
      else {
        if (iVar13 != 0x400) goto LAB_024965d0;
        if (lVar22 == 0) goto LAB_0249920c;
        if (*(int *)(lVar22 + 0x18) == 0)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar19 = *(undefined8 *)(lVar22 + 0x24);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*in_stack_00000150 == 0) ||
             (lVar42 = *(long *)(*in_stack_00000150 + 0x58), lVar42 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar42 + 0x18) <= uStack000000000000002c)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          in_stack_000017b8 = *(float *)(lVar42 + (long)(int)uStack000000000000002c * 0x14 + 0x30);
        }
        fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar22 + 0x20);
        fVar57 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
      }
      _in_stack_00000090 = CONCAT44((float)((ulong)uVar19 >> 0x20) + 0.0,(float)uVar19 + fVar57);
    }
    else if (iVar13 == 0x800) {
      if (lVar22 == 0) goto LAB_0249920c;
      if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      fVar57 = ((float)*(undefined8 *)(lVar22 + 0x24) + (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5
      ;
      fStack0000000000000098 =
           fStack0000000000000030 + 0.0 +
           (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
      _in_stack_00000090 =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5 + 0.0,fVar57 + 0.0
                   );
    }
    else {
      if (iVar13 == 0x1000) {
        if (lVar22 == 0) goto LAB_0249920c;
        if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar57 = (float)*(undefined8 *)(lVar22 + 0x24) + (float)*(undefined8 *)(lVar22 + 0x30);
        fVar51 = (float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20);
        fStack0000000000000020 =
             fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) + *(float *)(unaff_x19 + 0x9b);
        fStack0000000000000098 =
             fStack0000000000000030 + 0.0 +
             (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
      }
      else {
        if (iVar13 != 0x2000) goto LAB_024965d0;
        if (lVar22 == 0) goto LAB_0249920c;
        if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar57 = (float)*(undefined8 *)(lVar22 + 0x24) + (float)*(undefined8 *)(lVar22 + 0x30);
        fVar51 = (float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20);
        fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
        fStack0000000000000098 =
             fStack0000000000000030 + 0.0 +
             (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
      }
      fVar57 = fVar57 * 0.5;
      _in_stack_00000090 =
           CONCAT44(fVar51 * 0.5 + 0.0,
                    fVar57 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) * 0.5));
    }
LAB_024965d0:
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    uVar19 = FUN_0285a188(unaff_x19[0xe4],0);
    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar9);
    }
    uVar21 = FUN_0268b4e0(uVar19,0,0);
    lVar22 = FUN_024c933c();
    if (lVar22 == 0) goto LAB_0249920c;
    FUN_026a125c(lVar22,0);
    *(float *)(unaff_x19 + 0xe1) = fVar57;
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    iVar13 = FUN_02859798(unaff_x19[0xe4],0);
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    fVar51 = (float)FUN_028598f0(unaff_x19[0xe4],0);
    __x = DAT_028aa048;
    dVar56 = modf(DAT_028aa048,(double *)&stack0x00000880);
    if (dVar56 == 0.5) {
      fVar59 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar59 = fVar59 + 1.0;
      }
    }
    else {
      fVar59 = 255.0;
    }
    dVar56 = modf(__x,(double *)&stack0x00000880);
    if (dVar56 == 0.5) {
      fVar52 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar52 = fVar52 + 1.0;
      }
    }
    else {
      fVar52 = 255.0;
    }
    dVar56 = modf(__x,(double *)&stack0x00000880);
    if (dVar56 == 0.5) {
      fVar53 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar53 = fVar53 + 1.0;
      }
    }
    else {
      fVar53 = 255.0;
    }
    dVar56 = modf(__x,(double *)&stack0x00000880);
    if (dVar56 == 0.5) {
      fVar54 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar54 = fVar54 + 1.0;
      }
    }
    else {
      fVar54 = 255.0;
    }
    modf(__x,(double *)&stack0x00000880);
    modf(__x,(double *)&stack0x00000880);
    modf(__x,(double *)&stack0x00000880);
    modf(__x,(double *)&stack0x00000880);
    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_037825d3 == '\0') {
      thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
      DAT_037825d3 = '\x01';
    }
    lVar22 = *(long *)puVar10;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar22 = *(long *)puVar10;
    }
    puVar27 = *(undefined4 **)(lVar22 + 0xb8);
    uVar58 = (ulong)(uint)puVar27[1];
    uVar60 = (ulong)(uint)puVar27[2];
    uVar63 = (ulong)(uint)puVar27[3];
    UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
              (*puVar27,uVar58,uVar60,uVar63,&stack0x00001790,0x4000ffff,0);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar22 = *in_stack_00000150;
    if (lVar22 == 0) goto LAB_0249920c;
    uVar17 = *in_stack_00000148;
    if ((int)uVar17 < 1) {
      iStack00000000000000ac = 0;
      iVar16 = 0;
      goto LAB_02498c58;
    }
    lVar22 = *(long *)(lVar22 + 0x38);
    fVar57 = ABS(fVar57);
    fVar46 = 1.0;
    if ((uVar21 & 1) == 0) {
      fVar46 = fVar57;
    }
    if (lVar22 == 0) goto LAB_0249920c;
    bVar8 = false;
    bVar7 = false;
    bVar12 = false;
    bVar11 = false;
    uStack0000000000000060 =
         (int)fVar59 & 0xffU | ((int)fVar52 & 0xffU) << 8 | ((int)fVar53 & 0xffU) << 0x10 |
         (int)fVar54 << 0x18;
    fStack00000000000000d0 = *(float *)(*(long *)(*unaff_x29 + 0xb8) + 0x15a8);
    fStack00000000000000cc = 0.0;
    fStack0000000000000058 = fStack00000000000000b0;
    _bStack000000000000005c = 0.0;
    fStack0000000000000034 = 0.0;
    fStack0000000000000088 = 0.0;
    fStack0000000000000030 = 0.0;
    uVar18 = 0;
    iVar45 = 0;
    lVar42 = 0x2e0;
    fVar52 = 0.0;
    fVar59 = 0.0;
    iStack00000000000000ac = 0;
    fStack0000000000000020 = 0.0;
    fStack000000000000004c = 0.0;
    fStack00000000000000a4 = fStack00000000000000b0;
    fStack00000000000000a8 = fStack00000000000000b4;
    fStack0000000000000050 = fStack00000000000000b4;
    fStack0000000000000054 = (float)uStack00000000000000a0;
    in_stack_00000078._4_4_ = fStack00000000000000b4;
    fStack0000000000000080 = fStack00000000000000b0;
    in_stack_00000068._4_4_ = uStack00000000000000a0;
    uVar62 = 0;
    uVar37 = 1;
    goto LAB_02496a50;
  }
  if (*(uint *)(lVar22 + 0x18) <= in_stack_00001788)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  in_stack_000017bc = *(uint *)(lVar22 + (long)(int)in_stack_00001788 * 0xc + 0x20);
  if (in_stack_000017bc == 0) goto LAB_02495f1c;
  if (5 < in_stack_00000140) {
    uVar19 = FUN_0176eb1c(&stack0x000017bc,0);
    uVar20 = FUN_0176eb1c(&stack0x00001788,0);
    uVar19 = FUN_0160073c(*(undefined8 *)UnityEngine_Rendering_Universal_DebugValidationMode_var,
                          uVar19,*(undefined8 *)
                                  Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                          ,uVar20,0);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x28);
    }
    FUN_026610e4(uVar19,0);
    in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
  }
  if ((*(char *)((long)unaff_x19 + 0x2fa) != '\0') && (in_stack_000017bc == 0x3c)) {
    *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
    uVar21 = FUN_024d0688();
    if (((uVar21 & 1) == 0) ||
       (in_stack_00001788 = in_stack_0000176c, uVar17 = in_stack_000017bc,
       *(int *)((long)unaff_x19 + 0x63c) != 0))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor;
    goto LAB_02492630;
  }
  if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x27;
  *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar22 + 0x2c);
  *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar22 + 0x58);
  unaff_x19[0x1f] = *(long *)(lVar22 + 0x38);
UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor:
  if ((unaff_x19[0x6c] == 0) || (unaff_x23 = *(long *)(unaff_x19[0x6c] + 0x38), unaff_x23 == 0))
  goto LAB_0249920c;
  unaff_w22 = *in_stack_00000148;
  if (*(uint *)(unaff_x23 + 0x18) <= unaff_w22)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  unaff_x25 = (long)(int)unaff_w22;
  unaff_w21 = (uint)*(byte *)(unaff_x23 + unaff_x25 * unaff_x27 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
  in_w8 = (uint)in_stack_000017a8;
  unaff_w24 = (undefined4)unaff_x19[0x23];
  goto code_r0x024924fc;
LAB_02496a50:
  do {
    uVar17 = uVar37 - 1;
    if (*(uint *)(lVar22 + 0x18) <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x50), lVar30 == 0))
    goto LAB_0249920c;
    lVar44 = (long)(int)uVar17;
    lVar34 = lVar22 + lVar44 * 0x178;
    uVar2 = *(uint *)(lVar34 + 100);
    if (*(uint *)(lVar30 + 0x18) <= uVar2)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar38 = *(long *)(lVar34 + 0x38);
    uVar4 = *(ushort *)(lVar34 + 0x20);
    lVar35 = (long)(int)uVar2;
    lVar30 = lVar30 + lVar35 * 0x5c;
    uVar36 = *(uint *)(lVar30 + 0x3c);
    iVar14 = *(int *)(lVar30 + 0x28);
    iVar15 = *(int *)(lVar30 + 0x2c);
    uVar6 = *(uint *)(lVar30 + 0x40);
    lVar34 = (long)(int)uVar6;
    uVar32 = *(uint *)(lVar30 + 0x68);
    fVar70 = *(float *)(lVar30 + 0x5c);
    fVar74 = *(float *)(lVar30 + 0x60);
    iVar3 = *(int *)(lVar30 + 0x20);
    fVar61 = *(float *)(lVar30 + 0x4c);
    fVar64 = *(float *)(lVar30 + 0x54);
    fVar53 = *(float *)(lVar30 + 0x58);
    fVar68 = *(float *)(lVar30 + 0x6c);
    fVar65 = *(float *)(lVar30 + 0x70);
    fVar54 = *(float *)(lVar30 + 0x74);
    fVar66 = *(float *)(lVar30 + 0x78);
    fVar72 = fVar70 + fVar74;
    uVar41 = (uint)uVar4;
    if ((int)uVar32 < 9) {
      switch(uVar32) {
      case 1:
        if ((char)unaff_x19[0x1d] == '\0') {
          in_stack_000000c8 = fVar74 + 0.0;
        }
        else {
          in_stack_000000c8 = 0.0 - fVar53;
        }
        break;
      case 2:
LAB_02496c1c:
        in_stack_000000c8 = (fVar74 + fVar70 * 0.5) - fVar53 * 0.5;
        break;
      default:
        goto switchD_02496b58_caseD_3;
      case 4:
        in_stack_000000c8 = fVar72 - fVar53;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c8 = fVar72;
        }
        break;
      case 8:
        goto switchD_02496b58_caseD_8;
      }
LAB_02496c90:
      uStack00000000000000c0 = 0;
    }
    else if (uVar32 == 0x10) {
switchD_02496b58_caseD_8:
      if (uVar4 < 0xad) {
        if ((uVar41 != 3) && (uVar41 != 10)) goto LAB_02496bac;
      }
      else if ((uVar41 != 0xad) && ((uVar41 != 0x200b && (uVar41 != 0x2060)))) {
LAB_02496bac:
        if (*(uint *)(lVar22 + 0x18) <= uVar36)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar5 = *(undefined2 *)(lVar22 + (long)(int)uVar36 * 0x178 + 0x20);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f9f84(uVar5,0);
        if ((uVar21 & 1) == 0) {
          bVar1 = (int)uVar2 < (int)unaff_x19[0x94];
        }
        else {
          bVar1 = false;
        }
        if ((fVar53 <= fVar70) && (!bVar1 && (uVar32 >> 4 & 1) == 0)) {
          in_stack_000000c8 = fVar74;
          if ((char)unaff_x19[0x1d] != '\0') {
            in_stack_000000c8 = fVar72;
          }
          goto LAB_02496c90;
        }
        if (((uVar37 == 1) || (uVar2 != uVar62)) || (uVar17 == *(uint *)((long)unaff_x19 + 0x31c)))
        {
          in_stack_000000c8 = fVar74;
          if ((char)unaff_x19[0x1d] != '\0') {
            in_stack_000000c8 = fVar72;
          }
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          fStack0000000000000020 = (float)FUN_016fa418(uVar4,0);
          uStack00000000000000c0 = 0;
        }
        else {
          cVar26 = (char)unaff_x19[0x1d];
          fVar72 = -fVar53;
          if (cVar26 != '\0') {
            fVar72 = fVar53;
          }
          if (*(uint *)(lVar22 + 0x18) <= uVar36)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar53 = 1.0;
          iVar15 = (int)*(char *)(lVar22 + (long)(int)uVar36 * 0x178 + 0x194) +
                   (-iVar3 - ((uint)fStack0000000000000020 & 1)) + iVar15 + -1;
          if (0 < iVar15) {
            fVar53 = *(float *)((long)unaff_x19 + 0x2d4);
          }
          if (iVar15 < 1) {
            iVar15 = 1;
          }
          if (uVar41 == 9) {
LAB_02498bb8:
            fVar53 = 1.0 - fVar53;
          }
          else {
            if (uVar41 != 0xa0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar21 = FUN_016fa418(uVar4,0);
              cVar26 = (char)unaff_x19[0x1d];
              if ((uVar21 & 1) != 0) goto LAB_02498bb8;
            }
            iVar15 = (iVar3 - (~(uint)fStack0000000000000020 & 1)) + iVar14;
          }
          fVar53 = ((fVar70 + fVar72) * fVar53) / (float)iVar15;
          if (cVar26 == '\0') {
            in_stack_000000c8 = in_stack_000000c8 + fVar53;
            uStack00000000000000c0 =
                 CONCAT44((float)((ulong)uStack00000000000000c0 >> 0x20) + 0.0,
                          (float)uStack00000000000000c0 + 0.0);
          }
          else {
            in_stack_000000c8 = in_stack_000000c8 - fVar53;
          }
        }
      }
    }
    else if (uVar32 == 0x20) {
      fVar53 = fVar68 + fVar54;
      goto LAB_02496c1c;
    }
switchD_02496b58_caseD_3:
    uVar32 = (uint)*(undefined8 *)(lVar22 + 0x18);
    if (uVar32 <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar30 = lVar22 + lVar44 * 0x178;
    fVar72 = fStack0000000000000098 + in_stack_000000c8;
    fVar53 = (float)_in_stack_00000090 + (float)uStack00000000000000c0;
    fVar70 = (float)((ulong)_in_stack_00000090 >> 0x20) +
             (float)((ulong)uStack00000000000000c0 >> 0x20);
    if (*(char *)(lVar30 + 0x194) == '\0') goto LAB_02497688;
    iVar14 = *(int *)(lVar22 + lVar44 * 0x178 + 0x2c);
    if (iVar14 != 0) goto LAB_02497374;
    fVar52 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar2,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
    case 0:
      lVar28 = lVar22 + lVar44 * 0x178;
      *(undefined4 *)(lVar28 + 0x84) = 0;
      *(undefined4 *)(lVar28 + 0xac) = 0;
      *(undefined4 *)(lVar28 + 0xd4) = 0x3f800000;
      fVar52 = 1.0;
      break;
    case 1:
      fVar66 = *(float *)(lVar22 + lVar44 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
        lVar28 = lVar22 + lVar44 * 0x178;
        fVar54 = (in_stack_000000c8 + fVar66) - *(float *)(in_stack_00000070 + 0x230);
        fVar66 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
        goto LAB_02496df8;
      }
      lVar28 = lVar22 + lVar44 * 0x178;
      fVar54 = fVar54 - fVar68;
      *(float *)(lVar28 + 0x84) = fVar52 + (fVar66 - fVar68) / fVar54;
      *(float *)(lVar28 + 0xac) = fVar52 + (*(float *)(lVar28 + 0x98) - fVar68) / fVar54;
      *(float *)(lVar28 + 0xd4) = fVar52 + (*(float *)(lVar28 + 0xc0) - fVar68) / fVar54;
      fVar52 = fVar52 + (*(float *)(lVar28 + 0xe8) - fVar68) / fVar54;
      break;
    case 2:
      lVar28 = lVar22 + lVar44 * 0x178;
      fVar66 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      fVar54 = (in_stack_000000c8 + *(float *)(lVar28 + 0x70)) -
               *(float *)(in_stack_00000070 + 0x230);
LAB_02496df8:
      *(float *)(lVar28 + 0x84) = fVar52 + fVar54 / fVar66;
      *(float *)(lVar28 + 0xac) =
           fVar52 + ((in_stack_000000c8 + *(float *)(lVar28 + 0x98)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      *(float *)(lVar28 + 0xd4) =
           fVar52 + ((in_stack_000000c8 + *(float *)(lVar28 + 0xc0)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      fVar52 = fVar52 + ((in_stack_000000c8 + *(float *)(lVar28 + 0xe8)) -
                        *(float *)(in_stack_00000070 + 0x230)) /
                        (*(float *)(in_stack_00000070 + 0x238) -
                        *(float *)(in_stack_00000070 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x61]) {
      case 0:
        lVar28 = lVar22 + lVar44 * 0x178;
        *(undefined4 *)(lVar28 + 0x88) = 0;
        *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar28 + 0xd8) = 0;
        *(undefined4 *)(lVar28 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar28 = lVar22 + lVar44 * 0x178;
        fVar66 = fVar66 - fVar65;
        fVar54 = fVar52 + (*(float *)(lVar28 + 0x74) - fVar65) / fVar66;
        fVar66 = fVar52 + (*(float *)(lVar28 + 0x9c) - fVar65) / fVar66;
        *(float *)(lVar28 + 0x88) = fVar54;
        *(float *)(lVar28 + 0xb0) = fVar66;
        *(float *)(lVar28 + 0xd8) = fVar54;
        *(float *)(lVar28 + 0x100) = fVar66;
        break;
      case 2:
        lVar28 = lVar22 + lVar44 * 0x178;
        fVar54 = fVar52 + (*(float *)(lVar28 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                          (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
        *(float *)(lVar28 + 0x88) = fVar54;
        fVar66 = *(float *)(unaff_x19 + 0x9b);
        fVar65 = *(float *)(unaff_x19 + 0x9c);
        *(float *)(lVar28 + 0xd8) = fVar54;
        fVar54 = fVar52 + (*(float *)(lVar28 + 0x9c) - fVar66) / (fVar65 - fVar66);
        *(float *)(lVar28 + 0xb0) = fVar54;
        *(float *)(lVar28 + 0x100) = fVar54;
        break;
      case 3:
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
        uVar32 = (uint)*(undefined8 *)(lVar22 + 0x18);
      }
      if (uVar32 <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar22 + lVar44 * 0x178;
      fVar54 = *(float *)(lVar28 + 0x15c);
      fVar66 = (1.0 - (*(float *)(lVar28 + 0x88) + *(float *)(lVar28 + 0xb0)) * fVar54) * 0.5;
      fVar65 = fVar52 + *(float *)(lVar28 + 0x88) * fVar54 + fVar66;
      fVar52 = fVar52 + fVar66 + *(float *)(lVar28 + 0xb0) * fVar54;
      *(float *)(lVar28 + 0x84) = fVar65;
      *(float *)(lVar28 + 0xac) = fVar65;
      *(float *)(lVar28 + 0xd4) = fVar52;
      break;
    default:
      goto switchD_02496d4c_default;
    }
    *(float *)(lVar22 + lVar44 * 0x178 + 0xfc) = fVar52;
switchD_02496d4c_default:
    switch((int)unaff_x19[0x61]) {
    case 0:
      if (uVar32 <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar22 + lVar44 * 0x178;
      *(undefined4 *)(lVar28 + 0x88) = 0;
      *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0x100) = 0;
      break;
    case 1:
      if (uVar17 < uVar32) {
        lVar28 = lVar22 + lVar44 * 0x178;
        fVar61 = fVar61 - fVar64;
        fVar52 = (*(float *)(lVar28 + 0x74) - fVar64) / fVar61;
        fVar61 = (*(float *)(lVar28 + 0x9c) - fVar64) / fVar61;
        *(float *)(lVar28 + 0x88) = fVar52;
        goto LAB_02497174;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    case 2:
      if (uVar32 <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar22 + lVar44 * 0x178;
      fVar52 = (*(float *)(lVar28 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar28 + 0x88) = fVar52;
      fVar61 = (*(float *)(lVar28 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_02497174:
      *(float *)(lVar28 + 0xb0) = fVar61;
      *(float *)(lVar28 + 0xd8) = fVar61;
      *(float *)(lVar28 + 0x100) = fVar52;
      break;
    case 3:
      if (uVar32 <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar22 + lVar44 * 0x178;
      fVar61 = *(float *)(lVar28 + 0x15c);
      fVar54 = (1.0 - (*(float *)(lVar28 + 0x84) + *(float *)(lVar28 + 0xd4)) / fVar61) * 0.5;
      fVar52 = *(float *)(lVar28 + 0x84) / fVar61 + fVar54;
      fVar54 = fVar54 + *(float *)(lVar28 + 0xd4) / fVar61;
      *(float *)(lVar28 + 0x88) = fVar52;
      *(float *)(lVar28 + 0xb0) = fVar54;
      *(float *)(lVar28 + 0x100) = fVar52;
      *(float *)(lVar28 + 0xd8) = fVar54;
    }
    if (uVar32 <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar28 = lVar22 + lVar44 * 0x178;
    fVar52 = *(float *)(lVar28 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
    if ((*(char *)(lVar28 + 0x5c) == '\0') && ((*(byte *)(lVar22 + lVar44 * 0x178 + 400) & 1) != 0))
    {
      fVar52 = -fVar52;
    }
    fVar54 = fVar57;
    if (((iVar13 == 2) || (fVar54 = fVar46, iVar13 == 1)) || (fVar54 = fVar57 / fVar51, iVar13 == 0)
       ) {
      fVar52 = fVar54 * fVar52;
    }
    lVar28 = lVar22 + lVar44 * 0x178;
    fVar61 = *(float *)(lVar28 + 0x88);
    fVar66 = *(float *)(lVar28 + 0x84);
    fVar54 = -2.1474836e+09;
    if (fVar66 != INFINITY) {
      fVar54 = (float)(int)fVar66;
    }
    fVar65 = *(float *)(lVar28 + 0xd4);
    fVar68 = *(float *)(lVar28 + 0xd8);
    fVar64 = -2.1474836e+09;
    if (fVar61 != INFINITY) {
      fVar64 = (float)(int)fVar61;
    }
    uVar55 = FUN_024e0374(fVar66 - fVar54,fVar61 - fVar64);
    *(undefined4 *)(lVar28 + 0x84) = uVar55;
    if (*(uint *)(lVar22 + 0x18) <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar68 = fVar68 - fVar64;
    *(float *)(lVar28 + 0x88) = fVar52;
    uVar55 = FUN_024e0374(fVar66 - fVar54,fVar68);
    *(undefined4 *)(lVar22 + lVar44 * 0x178 + 0xac) = uVar55;
    if (*(uint *)(lVar22 + 0x18) <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar65 = fVar65 - fVar54;
    *(float *)(lVar22 + lVar44 * 0x178 + 0xb0) = fVar52;
    fVar54 = (float)FUN_024e0374(fVar65,fVar68);
    *(float *)(lVar28 + 0xd4) = fVar54;
    if (*(uint *)(lVar22 + 0x18) <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar28 + 0xd8) = fVar52;
    uVar55 = FUN_024e0374(fVar65,fVar61 - fVar64);
    *(undefined4 *)(lVar22 + lVar44 * 0x178 + 0xfc) = uVar55;
    uVar32 = (uint)*(undefined8 *)(lVar22 + 0x18);
    if (uVar32 <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar22 + lVar44 * 0x178 + 0x100) = fVar52;
LAB_02497374:
    if (((int)unaff_x19[100] <= (int)uVar17) ||
       (*(int *)((long)unaff_x19 + 0x324) <= iStack00000000000000ac)) goto LAB_02497490;
    if (((int)uVar2 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar32 <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar22 + lVar44 * 0x178;
      *(ulong *)(lVar30 + 0x70) =
           CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar30 + 0x70) >> 0x20),
                    fVar72 + (float)*(undefined8 *)(lVar30 + 0x70));
      *(float *)(lVar30 + 0x78) = fVar70 + *(float *)(lVar30 + 0x78);
      if (*(uint *)(lVar22 + 0x18) <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar22 + lVar44 * 0x178;
      *(ulong *)(lVar30 + 0x98) =
           CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar30 + 0x98) >> 0x20),
                    fVar72 + (float)*(undefined8 *)(lVar30 + 0x98));
      *(float *)(lVar30 + 0xa0) = fVar70 + *(float *)(lVar30 + 0xa0);
      if (*(uint *)(lVar22 + 0x18) <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar22 + lVar44 * 0x178;
      *(ulong *)(lVar30 + 0xc0) =
           CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar30 + 0xc0) >> 0x20),
                    fVar72 + (float)*(undefined8 *)(lVar30 + 0xc0));
      *(float *)(lVar30 + 200) = fVar70 + *(float *)(lVar30 + 200);
      if (*(uint *)(lVar22 + 0x18) <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar22 + lVar44 * 0x178;
      *(ulong *)(lVar30 + 0xe8) =
           CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar30 + 0xe8) >> 0x20),
                    fVar72 + (float)*(undefined8 *)(lVar30 + 0xe8));
      *(float *)(lVar30 + 0xf0) = fVar70 + *(float *)(lVar30 + 0xf0);
      if (iVar14 == 0) goto LAB_02497668;
LAB_02497598:
      if (iVar14 == 1) {
        pcVar31 = *(code **)(*unaff_x19 + 0x8f8);
        goto LAB_02497674;
      }
    }
    else {
      if (((int)uVar2 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
        if (uVar32 <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(uint *)(lVar22 + lVar44 * 0x178 + 0x68) != uStack000000000000002c) goto LAB_02497490;
        lVar30 = lVar22 + lVar44 * 0x178;
        *(ulong *)(lVar30 + 0x70) =
             CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar30 + 0x70) >> 0x20),
                      fVar72 + (float)*(undefined8 *)(lVar30 + 0x70));
        *(float *)(lVar30 + 0x78) = fVar70 + *(float *)(lVar30 + 0x78);
        if (*(uint *)(lVar22 + 0x18) <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar22 + lVar44 * 0x178;
        *(ulong *)(lVar30 + 0x98) =
             CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar30 + 0x98) >> 0x20),
                      fVar72 + (float)*(undefined8 *)(lVar30 + 0x98));
        *(float *)(lVar30 + 0xa0) = fVar70 + *(float *)(lVar30 + 0xa0);
        if (*(uint *)(lVar22 + 0x18) <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar22 + lVar44 * 0x178;
        *(ulong *)(lVar30 + 0xc0) =
             CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar30 + 0xc0) >> 0x20),
                      fVar72 + (float)*(undefined8 *)(lVar30 + 0xc0));
        *(float *)(lVar30 + 200) = fVar70 + *(float *)(lVar30 + 200);
        if (*(uint *)(lVar22 + 0x18) <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar22 + lVar44 * 0x178;
        *(ulong *)(lVar30 + 0xe8) =
             CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar30 + 0xe8) >> 0x20),
                      fVar72 + (float)*(undefined8 *)(lVar30 + 0xe8));
        *(float *)(lVar30 + 0xf0) = fVar70 + *(float *)(lVar30 + 0xf0);
      }
      else {
LAB_02497490:
        if (uVar32 <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        puVar9 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        lVar28 = lVar22 + lVar44 * 0x178;
        uVar55 = *(undefined4 *)
                  (*(undefined8 **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8) + 1);
        *(undefined8 *)(lVar28 + 0x70) =
             **(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        *(undefined4 *)(lVar28 + 0x78) = uVar55;
        if (*(uint *)(lVar22 + 0x18) <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar22 + lVar44 * 0x178;
        uVar55 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar28 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar28 + 0xa0) = uVar55;
        if (*(uint *)(lVar22 + 0x18) <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar22 + lVar44 * 0x178;
        uVar55 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar28 + 0xc0) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar28 + 200) = uVar55;
        if (*(uint *)(lVar22 + 0x18) <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar22 + lVar44 * 0x178;
        uVar55 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar28 + 0xe8) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar28 + 0xf0) = uVar55;
        if (*(uint *)(lVar22 + 0x18) <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(undefined1 *)(lVar30 + 0x194) = 0;
      }
      if (iVar14 != 0) goto LAB_02497598;
LAB_02497668:
      pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
LAB_02497674:
      (*pcVar31)();
    }
LAB_02497688:
    if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar30 + 0x18) <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar30 = lVar30 + lVar44 * 0x178;
    uVar19 = *(undefined8 *)(lVar30 + 0x11c);
    *(undefined8 *)(lVar30 + 0x11c) =
         CONCAT44(fVar53 + (float)((ulong)uVar19 >> 0x20),fVar72 + (float)uVar19);
    *(float *)(lVar30 + 0x124) = fVar70 + *(float *)(lVar30 + 0x124);
    if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar30 + 0x18) <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar30 = lVar30 + lVar44 * 0x178;
    *(ulong *)(lVar30 + 0x110) =
         CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar30 + 0x110) >> 0x20),
                  fVar72 + (float)*(undefined8 *)(lVar30 + 0x110));
    *(float *)(lVar30 + 0x118) = fVar70 + *(float *)(lVar30 + 0x118);
    if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar30 + 0x18) <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar30 = lVar30 + lVar44 * 0x178;
    *(ulong *)(lVar30 + 0x128) =
         CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar30 + 0x128) >> 0x20),
                  fVar72 + (float)*(undefined8 *)(lVar30 + 0x128));
    *(float *)(lVar30 + 0x130) = fVar70 + *(float *)(lVar30 + 0x130);
    if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar30 + 0x18) <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar30 = lVar30 + lVar44 * 0x178;
    *(float *)(lVar30 + 0x134) = fVar72 + *(float *)(lVar30 + 0x134);
    *(ulong *)(lVar30 + 0x138) =
         CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar30 + 0x138) >> 0x20),
                  fVar53 + (float)*(undefined8 *)(lVar30 + 0x138));
    lVar30 = *in_stack_00000150;
    if ((lVar30 == 0) || (lVar28 = *(long *)(lVar30 + 0x38), lVar28 == 0)) goto LAB_0249920c;
    uVar32 = *(uint *)(lVar28 + 0x18);
    if (uVar32 <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar39 = lVar28 + lVar44 * 0x178;
    uVar58 = CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar39 + 0x140) >> 0x20),
                      fVar72 + (float)*(undefined8 *)(lVar39 + 0x140));
    fVar54 = fVar53 + *(float *)(lVar39 + 0x150);
    uVar60 = (ulong)(uint)fVar54;
    uVar63 = CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar39 + 0x148) >> 0x20),
                      fVar53 + (float)*(undefined8 *)(lVar39 + 0x148));
    *(ulong *)(lVar39 + 0x140) = uVar58;
    *(ulong *)(lVar39 + 0x148) = uVar63;
    *(float *)(lVar39 + 0x150) = fVar54;
    if (uVar2 == uVar62) {
      uVar62 = *in_stack_00000148 - 1;
      if (uVar17 == uVar62) goto LAB_0249788c;
    }
    else {
      lVar30 = *(long *)(lVar30 + 0x50);
      if (lVar30 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar30 + 0x18) <= uVar62)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar39 = (long)(int)uVar62;
      lVar40 = lVar30 + lVar39 * 0x5c;
      uVar63 = (ulong)(uint)*(float *)(lVar40 + 0x58);
      fVar54 = fVar53 + *(float *)(lVar40 + 0x54);
      uVar58 = (ulong)(uint)fVar54;
      fVar61 = fVar72 + *(float *)(lVar40 + 0x58);
      uVar60 = (ulong)(uint)fVar61;
      *(ulong *)(lVar40 + 0x4c) =
           CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar40 + 0x4c) >> 0x20),
                    fVar53 + (float)*(undefined8 *)(lVar40 + 0x4c));
      *(float *)(lVar40 + 0x54) = fVar54;
      *(float *)(lVar40 + 0x58) = fVar61;
      if (uVar32 <= *(uint *)(lVar40 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar55 = *(undefined4 *)(lVar28 + (long)(int)*(uint *)(lVar40 + 0x34) * 0x178 + 0x11c);
      lVar30 = lVar30 + lVar39 * 0x5c;
      *(float *)(lVar30 + 0x70) = fVar54;
      *(undefined4 *)(lVar30 + 0x6c) = uVar55;
      lVar30 = *in_stack_00000150;
      if ((lVar30 == 0) || (lVar28 = *(long *)(lVar30 + 0x50), lVar28 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= uVar62)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_0249920c;
      uVar62 = *(uint *)(lVar28 + lVar39 * 0x5c + 0x40);
      if (*(uint *)(lVar30 + 0x18) <= uVar62)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar28 + lVar39 * 0x5c;
      *(undefined4 *)(lVar28 + 0x74) = *(undefined4 *)(lVar30 + (long)(int)uVar62 * 0x178 + 0x128);
      *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar28 + 0x4c);
      uVar62 = *in_stack_00000148 - 1;
LAB_0249788c:
      if (uVar17 == uVar62) {
        lVar30 = *in_stack_00000150;
        if ((lVar30 == 0) || (lVar28 = *(long *)(lVar30 + 0x50), lVar28 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar28 + 0x18) <= uVar2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar39 = lVar28 + lVar35 * 0x5c;
        uVar63 = (ulong)(uint)*(float *)(lVar39 + 0x58);
        uVar58 = CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar39 + 0x4c) >> 0x20),
                          fVar53 + (float)*(undefined8 *)(lVar39 + 0x4c));
        fVar54 = fVar53 + *(float *)(lVar39 + 0x54);
        fVar72 = fVar72 + *(float *)(lVar39 + 0x58);
        uVar60 = (ulong)(uint)fVar72;
        *(ulong *)(lVar39 + 0x4c) = uVar58;
        *(float *)(lVar39 + 0x54) = fVar54;
        *(float *)(lVar39 + 0x58) = fVar72;
        lVar30 = *(long *)(lVar30 + 0x38);
        if (lVar30 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(lVar39 + 0x34))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar55 = *(undefined4 *)(lVar30 + (long)(int)*(uint *)(lVar39 + 0x34) * 0x178 + 0x11c);
        lVar28 = lVar28 + lVar35 * 0x5c;
        *(float *)(lVar28 + 0x70) = fVar54;
        *(undefined4 *)(lVar28 + 0x6c) = uVar55;
        lVar30 = *in_stack_00000150;
        if ((lVar30 == 0) || (lVar28 = *(long *)(lVar30 + 0x50), lVar28 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar28 + 0x18) <= uVar2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = *(long *)(lVar30 + 0x38);
        if (lVar30 == 0) goto LAB_0249920c;
        uVar62 = *(uint *)(lVar28 + lVar35 * 0x5c + 0x40);
        if (*(uint *)(lVar30 + 0x18) <= uVar62)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar28 + lVar35 * 0x5c;
        *(undefined4 *)(lVar28 + 0x74) = *(undefined4 *)(lVar30 + (long)(int)uVar62 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar28 + 0x4c);
      }
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar21 = FUN_016f9468(uVar41,0);
    if (((((uVar21 & 1) == 0) && (1 < uVar41 - 0x2010)) && (uVar41 != 0xad)) && (uVar41 != 0x2d)) {
      if (bVar7) {
        if (((uVar37 != 1) && ((int)uVar17 < (int)(*(uint *)(lVar22 + 0x18) - 1))) &&
           (((int)uVar17 < (int)*in_stack_00000148 && ((uVar41 == 0x2019 || (uVar41 == 0x27)))))) {
          if (*(uint *)(lVar22 + 0x18) <= uVar37 - 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar5 = *(undefined2 *)(lVar22 + lVar42 + -0x438);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016f9468(uVar5,0);
          if ((uVar21 & 1) != 0) {
            if (*(uint *)(lVar22 + 0x18) <= uVar37)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar5 = *(undefined2 *)(lVar22 + lVar42 + -0x148);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar21 = FUN_016f9468(uVar5,0);
            if ((uVar21 & 1) != 0) goto LAB_02497aa4;
          }
        }
      }
      else {
        if (uVar37 != 1) {
LAB_024985a0:
          bVar7 = false;
          goto LAB_02497aac;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f93a0(uVar41,0);
        if ((uVar21 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016f68bc(uVar41,0);
          if (((uVar41 != 0x200b) && ((uVar21 & 1) == 0)) && (*in_stack_00000148 != 1))
          goto LAB_024985a0;
        }
      }
      if (uVar17 == *in_stack_00000148 - 1) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f9468(uVar41,0);
        iVar14 = iVar45;
        if ((uVar21 & 1) == 0) goto LAB_02497de0;
      }
      else {
LAB_02497de0:
        iVar14 = uVar37 - 2;
      }
      lVar30 = *in_stack_00000150;
      if (lVar30 == 0) goto LAB_0249920c;
      lVar28 = *(long *)(lVar30 + 0x40);
      if (lVar28 == 0) goto LAB_0249920c;
      uVar62 = *(uint *)(lVar30 + 0x24);
      iVar15 = *(int *)(lVar28 + 0x18);
      if (iVar15 < (int)(uVar62 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar30 + 0x40),iVar15 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar30 = *in_stack_00000150;
        if (lVar30 == 0) goto LAB_0249920c;
      }
      lVar28 = *(long *)(lVar30 + 0x40);
      if (lVar28 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= uVar62)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar28 + (long)(int)uVar62 * 0x18;
      *(uint *)(lVar28 + 0x28) = uVar18;
      *(int *)(lVar28 + 0x2c) = iVar14;
      *(uint *)(lVar28 + 0x30) = (iVar14 - uVar18) + 1;
      *(long **)(lVar28 + 0x20) = unaff_x19;
      lVar28 = *(long *)(lVar30 + 0x50);
      *(int *)(lVar30 + 0x24) = *(int *)(lVar30 + 0x24) + 1;
      if (lVar28 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= uVar2)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar28 + lVar35 * 0x5c;
      bVar7 = false;
      iStack00000000000000ac = iStack00000000000000ac + 1;
      *(int *)(lVar28 + 0x30) = *(int *)(lVar28 + 0x30) + 1;
    }
    else {
      if (!bVar7) {
        uVar18 = uVar17;
      }
      if (uVar17 == *in_stack_00000148 - 1) {
        lVar30 = *in_stack_00000150;
        if (lVar30 == 0) goto LAB_0249920c;
        lVar28 = *(long *)(lVar30 + 0x40);
        if (lVar28 == 0) goto LAB_0249920c;
        uVar62 = *(uint *)(lVar30 + 0x24);
        iVar14 = *(int *)(lVar28 + 0x18);
        if (iVar14 < (int)(uVar62 + 1)) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147b84((long *)(lVar30 + 0x40),iVar14 + 1,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
          lVar30 = *in_stack_00000150;
          if (lVar30 == 0) goto LAB_0249920c;
        }
        lVar28 = *(long *)(lVar30 + 0x40);
        if (lVar28 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar28 + 0x18) <= uVar62)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar28 + (long)(int)uVar62 * 0x18;
        *(uint *)(lVar28 + 0x28) = uVar18;
        *(uint *)(lVar28 + 0x2c) = uVar17;
        *(long **)(lVar28 + 0x20) = unaff_x19;
        *(uint *)(lVar28 + 0x30) = uVar37 - uVar18;
        lVar28 = *(long *)(lVar30 + 0x50);
        *(int *)(lVar30 + 0x24) = *(int *)(lVar30 + 0x24) + 1;
        if (lVar28 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar28 + 0x18) <= uVar2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar28 + lVar35 * 0x5c;
        iStack00000000000000ac = iStack00000000000000ac + 1;
        *(int *)(lVar28 + 0x30) = *(int *)(lVar28 + 0x30) + 1;
      }
LAB_02497aa4:
      bVar7 = true;
    }
LAB_02497aac:
    if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
    goto LAB_0249920c;
    uVar62 = *(uint *)(lVar30 + 0x18);
    if (uVar62 <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar30 + lVar44 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar11) {
LAB_02497adc:
        if (uVar62 <= uVar37 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar35 = *unaff_x19;
        uVar62 = *(uint *)(lVar30 + lVar42 + -0x330);
        uVar55 = *(undefined4 *)(lVar30 + lVar42 + -0x2f8);
LAB_0249805c:
        pcVar31 = *(code **)(lVar35 + 0x908);
LAB_02498064:
        uVar63 = (ulong)uVar62;
        uVar58 = (ulong)(uint)fStack0000000000000050;
        uVar60 = (ulong)(uint)fStack0000000000000054;
        (*pcVar31)(fStack0000000000000058,uVar58,uVar60,uVar63,fStack00000000000000d0,0,
                   _bStack000000000000005c,uVar55);
        puVar9 = System_Threading_Mutex_TypeInfo;
        lVar30 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar30 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar30 = *(long *)puVar9;
        }
LAB_024980b4:
        bVar11 = false;
        fVar59 = 0.0;
        fStack00000000000000d0 = *(float *)(*(long *)(lVar30 + 0xb8) + 0x15a8);
        fStack00000000000000cc = 0.0;
      }
      else {
LAB_02497fc4:
        bVar11 = false;
      }
    }
    else {
      lVar30 = lVar30 + lVar44 * 0x178;
      iVar14 = *(int *)(lVar30 + 0x68);
      *(int *)(lVar30 + 0x16c) = iVar16;
      if ((((int)unaff_x19[100] < (int)uVar17) || ((int)unaff_x19[0x65] < (int)uVar2)) ||
         (((int)unaff_x19[0x5b] == 5 && (iVar14 + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar21 = FUN_016f68bc(uVar41,0);
      if ((uVar41 != 0x200b) && ((uVar21 & 1) == 0)) {
        lVar30 = *in_stack_00000150;
        if ((lVar30 == 0) || (lVar35 = *(long *)(lVar30 + 0x38), lVar35 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar35 + 0x18) <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar54 = *(float *)(lVar35 + lVar44 * 0x178 + 0x160);
        if (fVar59 <= fVar54) {
          fVar59 = fVar54;
        }
        if (fStack00000000000000cc <= ABS(fVar52)) {
          fStack00000000000000cc = ABS(fVar52);
        }
        if ((float)iVar14 != fStack000000000000004c) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar30 = *in_stack_00000150;
            if (lVar30 == 0) goto LAB_0249920c;
            lVar35 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          else {
            lVar35 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          fStack00000000000000d0 = *(float *)(lVar35 + 0x15a8);
        }
        lVar30 = *(long *)(lVar30 + 0x38);
        if (lVar30 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0x1e] == 0) goto LAB_0249920c;
        fVar61 = *(float *)(lVar30 + lVar44 * 0x178 + 0x14c);
        fVar54 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
        fVar61 = fVar61 + fVar59 * fVar54;
        if (fVar61 <= fStack00000000000000d0) {
          fStack00000000000000d0 = fVar61;
        }
        uVar58 = (ulong)(uint)fStack00000000000000d0;
        fStack000000000000004c = (float)iVar14;
      }
      if (!bVar11) {
        bVar11 = false;
        if ((((uVar41 == 0xd) || ((uVar41 | 1) == 0xb)) || ((int)uVar6 < (int)uVar17)) ||
           ((bool)(bVar1 ^ 1))) goto LAB_024980d0;
        if (uVar17 == uVar6) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016fa418(uVar41,0);
          if ((uVar21 & 1) != 0) goto LAB_02497fc4;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar30 + lVar44 * 0x178;
        _bStack000000000000005c = *(float *)(lVar30 + 0x160);
        fStack0000000000000058 = *(float *)(lVar30 + 0x11c);
        bVar11 = fVar59 != 0.0;
        fVar54 = _bStack000000000000005c;
        if (bVar11) {
          fVar54 = fVar59;
        }
        fVar59 = fVar54;
        uStack0000000000000060 = *(uint *)(lVar30 + 0x168);
        fStack0000000000000054 = 0.0;
        fVar54 = fVar52;
        if (bVar11) {
          fVar54 = fStack00000000000000cc;
        }
        uVar58 = (ulong)(uint)fVar54;
        fStack0000000000000050 = fStack00000000000000d0;
        fStack00000000000000cc = fVar54;
      }
      if (*in_stack_00000148 == 1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 != 0)) {
          if (uVar17 < *(uint *)(lVar30 + 0x18)) {
            lVar30 = lVar30 + lVar44 * 0x178;
            lVar35 = *unaff_x19;
            uVar62 = *(uint *)(lVar30 + 0x128);
            uVar55 = *(undefined4 *)(lVar30 + 0x160);
            goto LAB_0249805c;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if ((uVar17 == uVar36) || ((int)uVar6 <= (int)uVar17)) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f68bc(uVar41,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 != 0)) {
          if (uVar41 == 0x200b || (uVar21 & 1) != 0) {
            lVar35 = lVar34;
            if (*(uint *)(lVar30 + 0x18) <= uVar6)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
            lVar35 = lVar44;
            if (*(uint *)(lVar30 + 0x18) <= uVar17)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          lVar30 = lVar30 + lVar35 * 0x178;
          uVar62 = *(uint *)(lVar30 + 0x128);
          uVar55 = *(undefined4 *)(lVar30 + 0x160);
          pcVar31 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_02498064;
        }
        goto LAB_0249920c;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 != 0)) {
          uVar62 = *(uint *)(lVar30 + 0x18);
          goto LAB_02497adc;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar17 < (int)(*in_stack_00000148 - 1)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= uVar37)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar21 = FUN_024a9e4c(uStack0000000000000060,*(undefined4 *)(lVar30 + lVar42),0);
        if ((uVar21 & 1) == 0) {
          if ((*in_stack_00000150 != 0) &&
             (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 != 0)) {
            if (uVar17 < *(uint *)(lVar30 + 0x18)) {
              lVar30 = lVar30 + lVar44 * 0x178;
              uVar63 = (ulong)*(uint *)(lVar30 + 0x128);
              uVar60 = (ulong)(uint)fStack0000000000000054;
              uVar58 = (ulong)(uint)fStack0000000000000050;
              (**(code **)(*unaff_x19 + 0x908))
                        (fStack0000000000000058,uVar58,uVar60,uVar63,fStack00000000000000d0,0,
                         _bStack000000000000005c,*(undefined4 *)(lVar30 + 0x160));
              puVar9 = System_Threading_Mutex_TypeInfo;
              lVar30 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar30 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar30 = *(long *)puVar9;
              }
              goto LAB_024980b4;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          goto LAB_0249920c;
        }
      }
      bVar11 = true;
    }
LAB_024980d0:
    if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar30 + 0x18) <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (lVar38 == 0) goto LAB_0249920c;
    uVar62 = *(uint *)(lVar30 + lVar44 * 0x178 + 400);
    fVar54 = (float)FUN_026fd1f0(lVar38 + 0x50,0);
    if ((uVar62 >> 6 & 1) == 0) {
      if (bVar12) {
        if ((*in_stack_00000150 == 0) ||
           (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= uVar37 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar62 = *(uint *)(lVar30 + lVar42 + -0x330);
        pcVar31 = *(code **)(*unaff_x19 + 0x908);
        fVar53 = fStack0000000000000088 * fVar54 + *(float *)(lVar30 + lVar42 + -0x30c);
LAB_02498648:
        uVar63 = (ulong)uVar62;
        uVar58 = (ulong)(uint)in_stack_00000078._4_4_;
        uVar60 = (ulong)in_stack_00000068._4_4_;
        (*pcVar31)(fStack0000000000000080,uVar58,uVar60,uVar63,fVar53,0,fStack0000000000000088,
                   fStack0000000000000088);
      }
LAB_0249867c:
      bVar12 = false;
    }
    else {
      lVar30 = *in_stack_00000150;
      if ((lVar30 == 0) || (lVar35 = *(long *)(lVar30 + 0x38), lVar35 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar35 + 0x18) <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(int *)(lVar35 + lVar44 * 0x178 + 0x174) = iVar16;
      if ((((int)unaff_x19[100] < (int)uVar17) || ((int)unaff_x19[0x65] < (int)uVar2)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar35 + lVar44 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uVar41 == 0xd) || ((uVar41 | 1) == 0xb)) || ((int)uVar6 < (int)uVar17)) ||
         (bVar12 || !bVar1)) {
LAB_02498228:
        if (!bVar12) goto LAB_0249867c;
      }
      else {
        if (uVar17 == uVar6) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016fa418(uVar41,0);
          if ((uVar21 & 1) != 0) goto LAB_02498228;
          lVar30 = *in_stack_00000150;
          if (lVar30 == 0) goto LAB_0249920c;
        }
        lVar30 = *(long *)(lVar30 + 0x38);
        if (lVar30 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar30 + lVar44 * 0x178;
        fStack0000000000000034 = *(float *)(lVar30 + 0x60);
        fStack0000000000000088 = *(float *)(lVar30 + 0x160);
        fStack0000000000000030 = *(float *)(lVar30 + 0x14c);
        uVar58 = (ulong)(uint)fStack0000000000000030;
        fStack0000000000000080 = *(float *)(lVar30 + 0x11c);
        in_stack_00000078._4_4_ = fVar54 * fStack0000000000000088 + fStack0000000000000030;
        in_stack_00000068._4_4_ = 0;
      }
      uVar62 = *in_stack_00000148;
      if (uVar62 == 1) {
LAB_024983ac:
        if ((*in_stack_00000150 != 0) &&
           (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 != 0)) {
          if (uVar17 < *(uint *)(lVar30 + 0x18)) {
            lVar30 = lVar30 + lVar44 * 0x178;
            lVar34 = *unaff_x19;
            uVar62 = *(uint *)(lVar30 + 0x128);
            fVar53 = *(float *)(lVar30 + 0x14c);
LAB_024983d8:
            pcVar31 = *(code **)(lVar34 + 0x908);
FUN_02498644:
            fVar53 = fVar54 * fStack0000000000000088 + fVar53;
            goto LAB_02498648;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if (uVar17 == uVar36) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f68bc(uVar41,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 != 0)) {
          uVar62 = *(uint *)(lVar30 + 0x18);
          if (uVar41 == 0x200b || (uVar21 & 1) != 0) {
            if (uVar62 <= uVar6)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
LAB_02498620:
            lVar34 = lVar44;
            if (uVar62 <= uVar17)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
LAB_02498628:
          lVar30 = lVar30 + lVar34 * 0x178;
          fVar53 = *(float *)(lVar30 + 0x14c);
          uVar62 = *(uint *)(lVar30 + 0x128);
          pcVar31 = *(code **)(*unaff_x19 + 0x908);
          goto FUN_02498644;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar17 < (int)uVar62) {
        lVar30 = *in_stack_00000150;
        if ((lVar30 != 0) && (lVar35 = *(long *)(lVar30 + 0x38), lVar35 != 0)) {
          if (uVar37 < *(uint *)(lVar35 + 0x18)) {
            if (*(float *)(lVar35 + lVar42 + -0x108) == fStack0000000000000034) {
              fVar61 = *(float *)(lVar35 + lVar42 + -0x1c);
              if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar58 = (ulong)(uint)fStack0000000000000030;
              uVar21 = FUN_024aa280(fVar53 + fVar61,uVar58,0);
              if ((uVar21 & 1) != 0) {
                uVar62 = *in_stack_00000148;
                goto 
                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
                ;
              }
              lVar30 = *in_stack_00000150;
              if (lVar30 == 0) goto LAB_0249920c;
            }
            lVar30 = *(long *)(lVar30 + 0x38);
            if (lVar30 != 0) {
              uVar62 = *(uint *)(lVar30 + 0x18);
              if ((int)uVar17 <= (int)uVar6) goto LAB_02498620;
              if (uVar6 < uVar62) goto LAB_02498628;
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
      if ((int)uVar17 < (int)uVar62) {
        iVar14 = FUN_02681c0c(lVar38,0);
        if (*(uint *)(lVar22 + 0x18) <= uVar37)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = *(long *)(lVar22 + lVar42 + -0x130);
        if (lVar30 == 0) goto LAB_0249920c;
        iVar15 = FUN_02681c0c(lVar30,0);
        if (iVar14 != iVar15) goto LAB_024983ac;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 != 0)) {
          if (uVar37 - 2 < *(uint *)(lVar30 + 0x18)) {
            lVar34 = *unaff_x19;
            uVar62 = *(uint *)(lVar30 + lVar42 + -0x330);
            fVar53 = *(float *)(lVar30 + lVar42 + -0x30c);
            goto LAB_024983d8;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      bVar12 = true;
    }
    if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
    goto LAB_0249920c;
    uVar62 = (uint)*(undefined8 *)(lVar30 + 0x18);
    if (uVar62 <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar30 + lVar44 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar8) {
        uVar60 = (ulong)uStack00000000000000a0;
        uVar63 = (ulong)(uint)fStack00000000000000a4;
        uVar58 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar58,uVar60,uVar63,fStack00000000000000a8,uVar60);
      }
LAB_024986e8:
      bVar8 = false;
    }
    else {
      if ((((int)unaff_x19[100] < (int)uVar17) || ((int)unaff_x19[0x65] < (int)uVar2)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar30 + lVar44 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar8) {
        if ((((uVar41 == 0xd) || ((uVar41 | 1) == 0xb)) || ((int)uVar6 < (int)uVar17)) || (!bVar1))
        goto LAB_024986e8;
        if (uVar17 == uVar6) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016fa418(uVar41,0);
          if ((uVar21 & 1) != 0) goto LAB_024986e8;
        }
        puVar9 = System_Threading_Mutex_TypeInfo;
        lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar34 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar34 = *(long *)puVar9;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0)) goto LAB_0249920c;
        uVar62 = (uint)*(undefined8 *)(lVar30 + 0x18);
        if (uVar62 <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar34 = *(long *)(lVar34 + 0xb8);
        lVar35 = lVar30 + lVar44 * 0x178;
        in_stack_00001798 = *(undefined8 *)(lVar35 + 0x184);
        in_stack_00001790 = *(undefined8 *)(lVar35 + 0x17c);
        fStack00000000000000b0 = *(float *)(lVar34 + 0x1598);
        in_stack_000017a0 = *(float *)(lVar35 + 0x18c);
        fStack00000000000000b4 = *(float *)(lVar34 + 0x159c);
        fStack00000000000000a4 = *(float *)(lVar34 + 0x15a0);
        fStack00000000000000a8 = *(float *)(lVar34 + 0x15a4);
        uStack00000000000000a0 = 0;
      }
      if (uVar62 <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar30 + lVar44 * 0x178;
      fVar64 = *(float *)(lVar30 + 0x188);
      uVar20 = *(undefined8 *)(lVar30 + 0x17c);
      fVar68 = *(float *)(lVar30 + 0x184);
      uVar19 = *(undefined8 *)(lVar30 + 0x184);
      fVar65 = *(float *)(lVar30 + 0x18c);
      fVar53 = *(float *)(lVar30 + 0x11c);
      fVar61 = *(float *)(lVar30 + 0x128);
      fVar66 = *(float *)(lVar30 + 0x148);
      fVar54 = *(float *)(lVar30 + 0x150);
      in_stack_00000158 = uVar20;
      fStack0000000000000160 = fVar68;
      fStack0000000000000164 = fVar64;
      in_stack_00000168 = fVar65;
      in_stack_00000170 = in_stack_00001790;
      in_stack_00000178 = in_stack_00001798;
      in_stack_00000180 = in_stack_000017a0;
      uVar21 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
      lVar30 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
      if ((uVar21 & 1) == 0) {
        if (*(int *)(lVar30 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar30);
        }
        fVar53 = fVar53 - (float)((ulong)in_stack_00001790 >> 0x20);
        if (fVar53 <= fStack00000000000000b0) {
          fStack00000000000000b0 = fVar53;
        }
        fVar54 = fVar54 - in_stack_000017a0;
        uVar58 = (ulong)(uint)fVar54;
        fVar61 = fVar61 + (float)in_stack_00001798;
        uVar60 = (ulong)(uint)fVar61;
        if (fVar54 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar54;
        }
        fVar66 = fVar66 + (float)((ulong)in_stack_00001798 >> 0x20);
        uVar63 = (ulong)(uint)fVar66;
        if (fStack00000000000000a4 <= fVar61) {
          fStack00000000000000a4 = fVar61;
        }
        if (fStack00000000000000a8 <= fVar66) {
          fStack00000000000000a8 = fVar66;
        }
      }
      else {
        if (*(int *)(lVar30 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar30);
        }
        fVar53 = (fVar53 + (fStack00000000000000a4 - (float)in_stack_00001798)) * 0.5;
        uVar63 = (ulong)(uint)fVar53;
        if (fVar54 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar54;
        }
        uVar58 = (ulong)(uint)fStack00000000000000b4;
        uVar60 = (ulong)uStack00000000000000a0;
        if (fStack00000000000000a8 <= fVar66) {
          fStack00000000000000a8 = fVar66;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar58,uVar60,uVar63,fStack00000000000000a8,uVar60);
        fStack00000000000000b4 = fVar54 - fVar65;
        fStack00000000000000a4 = fVar61 + fVar68;
        uStack00000000000000a0 = 0;
        fStack00000000000000a8 = fVar66 + fVar64;
        fStack00000000000000b0 = fVar53;
        in_stack_00001790 = uVar20;
        in_stack_00001798 = uVar19;
        in_stack_000017a0 = fVar65;
      }
      if (((*in_stack_00000148 == 1) || (uVar17 == uVar36)) ||
         (((int)uVar6 <= (int)uVar17 || (!bVar1)))) {
        uVar60 = (ulong)uStack00000000000000a0;
        uVar63 = (ulong)(uint)fStack00000000000000a4;
        uVar58 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar58,uVar60,uVar63,fStack00000000000000a8,uVar60);
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
    }
    uVar17 = *in_stack_00000148;
    iVar45 = iVar45 + 1;
    lVar42 = lVar42 + 0x178;
    bVar1 = (int)uVar37 < (int)uVar17;
    uVar62 = uVar2;
    uVar37 = uVar37 + 1;
  } while (bVar1);
  lVar22 = *in_stack_00000150;
  if (lVar22 != 0) {
    iVar16 = uVar2 + 1;
LAB_02498c58:
    puVar10 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    puVar9 = PTR_DAT_033ed410;
    *(uint *)(lVar22 + 0x18) = uVar17;
    lVar42 = unaff_x19[0xd3];
    *(int *)(lVar22 + 0x2c) = iVar16;
    iVar16 = iStack00000000000000ac;
    if ((int)uVar17 < 1) {
      iVar16 = 1;
    }
    if (iStack00000000000000ac == 0) {
      iVar16 = 1;
    }
    *(int *)(lVar22 + 0x1c) = (int)lVar42;
    *(int *)(lVar22 + 0x24) = iVar16;
    *(int *)(lVar22 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar21 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar21 & 1) == 0)) {
LAB_02496098:
      if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__ + 0xe0) == 0
         ) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar22 = unaff_x19[0xde];
    if (lVar22 != 0) {
      (**(code **)(lVar22 + 0x18))
                (*(undefined8 *)(lVar22 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar22 + 0x28));
    }
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    iVar16 = FUN_02859dc4(unaff_x19[0xe4],0);
    if (iVar16 != 0x19) {
      lVar22 = unaff_x19[0xe4];
      if (lVar22 == 0) goto LAB_0249920c;
      uVar17 = FUN_02859dc4(lVar22,0);
      FUN_02859e00(lVar22,uVar17 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
      goto LAB_0249920c;
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar22 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      FUN_024e8000(lVar22 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar22 = *(long *)(unaff_x19[0x6c] + 0x60), lVar22 != 0)) {
        if (*(int *)(lVar22 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar22 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar22 = *(long *)(unaff_x19[0x6c] + 0x60), lVar22 != 0)) {
            if (*(int *)(lVar22 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar22 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar22 = *(long *)(unaff_x19[0x6c] + 0x60), lVar22 != 0)) {
                if (*(int *)(lVar22 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar22 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar22 = *(long *)(unaff_x19[0x6c] + 0x60), lVar22 != 0)) {
                    if (*(int *)(lVar22 + 0x18) == 0)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar22 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        if (unaff_x19[0xe3] != 0) {
                          FUN_02858f1c(unaff_x19[0xe3],unaff_x19[0x73],0);
                          if (unaff_x19[0xe3] != 0) {
                            uVar19 = FUN_02858bac(unaff_x19[0xe3],0);
                            if (unaff_x19[0xe3] != 0) {
                              uVar17 = FUN_02858a14(unaff_x19[0xe3],0);
                              lVar22 = *in_stack_00000150;
                              if (lVar22 != 0) {
                                lVar30 = 0;
                                lVar42 = 0;
                                do {
                                  uVar21 = lVar42 + 1;
                                  if ((long)*(int *)(lVar22 + 0x34) <= (long)uVar21)
                                  goto LAB_02496098;
                                  lVar22 = *(long *)(lVar22 + 0x60);
                                  if (lVar22 == 0) break;
                                  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  if (*(uint *)(lVar22 + 0x18) <= uVar21)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  FUN_024e7ecc(lVar22 + lVar30 + 0x70,0);
                                  lVar22 = unaff_x19[0xe0];
                                  if (lVar22 == 0) break;
                                  if (*(uint *)(lVar22 + 0x18) <= uVar21)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  uVar20 = *(undefined8 *)(lVar22 + lVar42 * 8 + 0x28);
                                  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar24 = FUN_0268b4e0(uVar20,0,0);
                                  if ((uVar24 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                      if ((*in_stack_00000150 == 0) ||
                                         (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0
                                         )) break;
                                      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      if (*(uint *)(lVar22 + 0x18) <= uVar21)
                                      goto 
                                      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                      ;
                                      FUN_024e8000(lVar22 + lVar30 + 0x70,1,0);
                                    }
                                    lVar22 = unaff_x19[0xe0];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar22 = *(long *)(lVar22 + lVar42 * 8 + 0x28);
                                    if (lVar22 == 0) break;
                                    lVar22 = FUN_024f0144(lVar22,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar34 = *(long *)(*in_stack_00000150 + 0x60), lVar34 == 0))
                                    break;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar22 == 0) break;
                                    FUN_0266b9c4(lVar22,*(undefined8 *)(lVar34 + lVar30 + 0x80),0);
                                    lVar22 = unaff_x19[0xe0];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar22 = *(long *)(lVar22 + lVar42 * 8 + 0x28);
                                    if (lVar22 == 0) break;
                                    lVar22 = FUN_024f0144(lVar22,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar34 = *(long *)(*in_stack_00000150 + 0x60), lVar34 == 0))
                                    break;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar22 == 0) break;
                                    FUN_0266bbc8(lVar22,*(undefined8 *)(lVar34 + lVar30 + 0x98),0);
                                    lVar22 = unaff_x19[0xe0];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar22 = *(long *)(lVar22 + lVar42 * 8 + 0x28);
                                    if (lVar22 == 0) break;
                                    lVar22 = FUN_024f0144(lVar22,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar34 = *(long *)(*in_stack_00000150 + 0x60), lVar34 == 0))
                                    break;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar22 == 0) break;
                                    FUN_0266bc74(lVar22,*(undefined8 *)(lVar34 + lVar30 + 0xa0),0);
                                    lVar22 = unaff_x19[0xe0];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar22 = *(long *)(lVar22 + lVar42 * 8 + 0x28);
                                    if (lVar22 == 0) break;
                                    lVar22 = FUN_024f0144(lVar22,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar34 = *(long *)(*in_stack_00000150 + 0x60), lVar34 == 0))
                                    break;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar22 == 0) break;
                                    FUN_0266c1dc(lVar22,*(undefined8 *)(lVar34 + lVar30 + 0xa8),0);
                                    lVar22 = unaff_x19[0xe0];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar22 = *(long *)(lVar22 + lVar42 * 8 + 0x28);
                                    if ((lVar22 == 0) ||
                                       (lVar22 = FUN_024f0144(lVar22,0), lVar22 == 0)) break;
                                    FUN_0266ed90(lVar22,0);
                                    lVar22 = unaff_x19[0xe0];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar22 = *(long *)(lVar22 + lVar42 * 8 + 0x28);
                                    if (lVar22 == 0) break;
                                    lVar22 = FUN_02738ef4(lVar22,0);
                                    lVar34 = unaff_x19[0xe0];
                                    if (lVar34 == 0) break;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar34 = *(long *)(lVar34 + lVar42 * 8 + 0x28);
                                    if ((lVar34 == 0) ||
                                       (uVar20 = FUN_024f0144(lVar34,0), lVar22 == 0)) break;
                                    FUN_02858f1c(lVar22,uVar20,0);
                                    lVar22 = unaff_x19[0xe0];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar22 = *(long *)(lVar22 + lVar42 * 8 + 0x28);
                                    if ((lVar22 == 0) ||
                                       (lVar22 = FUN_02738ef4(lVar22,0), lVar22 == 0)) break;
                                    FUN_02858b14(uVar19,uVar58,uVar60,uVar63,lVar22,0);
                                    lVar22 = unaff_x19[0xe0];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar22 = *(long *)(lVar22 + lVar42 * 8 + 0x28);
                                    if ((lVar22 == 0) ||
                                       (lVar22 = FUN_02738ef4(lVar22,0), lVar22 == 0)) break;
                                    FUN_02858a50(lVar22,uVar17 & 1,0);
                                    lVar22 = unaff_x19[0xe0];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    plVar43 = *(long **)(lVar22 + lVar42 * 8 + 0x28);
                                    uVar18 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar43 == (long *)0x0) break;
                                    (**(code **)(*plVar43 + 0x2c8))
                                              (plVar43,uVar18 & 1,*(undefined8 *)(*plVar43 + 0x2d0))
                                    ;
                                  }
                                  lVar22 = *in_stack_00000150;
                                  lVar42 = lVar42 + 1;
                                  lVar30 = lVar30 + 0x50;
                                } while (lVar22 != 0);
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
    }
  }
LAB_0249920c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


