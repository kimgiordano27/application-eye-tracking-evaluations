/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRInteractorReticleVisual$$set_reticlePrefab
ENTRY_POINT: 024923d4
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

void UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__set_reticlePrefab
               (undefined8 *param_1,undefined1 param_2 [16],ulong param_3,undefined8 param_4)

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
  ulong uVar20;
  int *piVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined1 uVar24;
  char cVar25;
  uint uVar26;
  long lVar27;
  undefined4 *puVar28;
  long lVar29;
  float *pfVar30;
  long lVar31;
  code *pcVar32;
  uint uVar33;
  float *pfVar34;
  long lVar35;
  long lVar36;
  uint uVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long *unaff_x19;
  uint uVar41;
  long lVar42;
  long *plVar43;
  uint *unaff_x24;
  undefined8 unaff_x25;
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
  undefined8 uVar57;
  float fVar58;
  ulong uVar59;
  float fVar60;
  ulong uVar61;
  float fVar62;
  uint uVar63;
  ulong uVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  ulong unaff_d9;
  float fVar70;
  float unaff_s12;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
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
  char in_stack_000017b4;
  float in_stack_000017b8;
  uint in_stack_000017bc;
  
code_r0x024923d4:
  uVar19 = FUN_0160073c(*param_1,unaff_x25,
                        *(undefined8 *)
                         Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                        ,param_4,0);
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x28);
  }
  FUN_026610e4(uVar19,0);
  uVar19 = CONCAT44(3,*unaff_x24);
  uVar17 = in_stack_000017bc;
LAB_02492430:
  fVar58 = (float)unaff_d9;
  if ((*(char *)((long)unaff_x19 + 0x2fa) != '\0') && (uVar17 == 0x3c)) {
    *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
    uVar20 = FUN_024d0688();
    if (((uVar20 & 1) == 0) ||
       (in_stack_00001788 = in_stack_0000176c, *(int *)((long)unaff_x19 + 0x63c) != 0))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor;
    goto LAB_02492630;
  }
  if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x24)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar27 = lVar27 + (int)*unaff_x24 * unaff_x27;
  *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar27 + 0x2c);
  *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar27 + 0x58);
  unaff_x19[0x1f] = *(long *)(lVar27 + 0x38);
UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor:
  if ((unaff_x19[0x6c] == 0) || (lVar27 = *(long *)(unaff_x19[0x6c] + 0x38), lVar27 == 0))
  goto LAB_0249920c;
  uVar18 = *unaff_x24;
  if (*(uint *)(lVar27 + 0x18) <= uVar18)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar31 = (long)(int)uVar18;
  cVar25 = *(char *)(lVar27 + lVar31 * unaff_x27 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
  lVar42 = unaff_x19[0x23];
  if ((uint)uVar19 == uVar18) {
    uVar17 = (uint)((ulong)uVar19 >> 0x20);
    bVar7 = true;
    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
    if (uVar17 == 0x2026) {
      lVar35 = unaff_x19[0xc9];
      lVar27 = lVar27 + lVar31 * unaff_x27;
      *(undefined4 *)(lVar27 + 0x2c) = 0;
      *(long *)(lVar27 + 0x30) = lVar35;
      *(long *)(lVar27 + 0x38) = unaff_x19[0xca];
      *(long *)(lVar27 + 0x50) = unaff_x19[0xcb];
      *(int *)(lVar27 + 0x58) = (int)unaff_x19[0xcc];
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      uVar19 = CONCAT44(3,uVar18 + 1);
    }
    else if (uVar17 == 3) {
      if ((*in_stack_00000138 == 0) || (lVar35 = FUN_024b11ac(*in_stack_00000138,0), lVar35 == 0))
      goto LAB_0249920c;
      in_stack_00000bf8 = 3;
      FUN_01299bc0(lVar35,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
      if (*(uint *)(lVar27 + 0x18) <= uVar18)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      bVar7 = true;
      *(ulong *)(lVar27 + lVar31 * unaff_x27 + 0x30) = CONCAT44(in_stack_00000884,in_stack_00000880)
      ;
      uVar18 = *(uint *)((long)unaff_x19 + 0x48c);
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
    }
  }
  else {
    bVar7 = false;
  }
  iVar16 = (int)unaff_x27;
  unaff_x24 = in_stack_00000148;
  if (((int)uVar18 < *(int *)((long)unaff_x19 + 0x31c)) && (uVar17 != 3)) {
    if ((*in_stack_00000150 != 0) && (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 != 0)) {
      if (uVar18 < *(uint *)(lVar27 + 0x18)) {
        lVar27 = lVar27 + (long)(int)uVar18 * (long)iVar16;
        *(undefined1 *)(lVar27 + 0x194) = 0;
        *(undefined2 *)(lVar27 + 0x20) = 0x200b;
        *(undefined4 *)(lVar27 + 100) = 0;
        *in_stack_00000148 = uVar18 + 1;
        goto LAB_02492630;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    }
    goto LAB_0249920c;
  }
  iVar13 = *(int *)((long)unaff_x19 + 0x63c);
  fStack00000000000000f4 = unaff_s12;
  if (iVar13 == 0) {
    uVar18 = *(uint *)((long)unaff_x19 + 0x254);
    if ((uVar18 >> 4 & 1) == 0) {
      if ((uVar18 >> 3 & 1) == 0) {
        if ((uVar18 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar20 = FUN_016f92d4(uVar17,0);
          if ((uVar20 & 1) != 0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar17 = FUN_016f95a8(uVar17,0);
            uVar17 = uVar17 & 0xffff;
            fStack00000000000000f4 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar20 = FUN_016f9218(uVar17,0);
        if ((uVar20 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar17 = FUN_016f9724(uVar17,0);
          goto LAB_02492a0c;
        }
      }
    }
    else {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar20 = FUN_016f92d4(uVar17,0);
      if ((uVar20 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_016f95a8(uVar17,0);
LAB_02492a0c:
        uVar17 = uVar17 & 0xffff;
      }
    }
    iVar13 = *(int *)((long)unaff_x19 + 0x63c);
    if (iVar13 == 0) goto LAB_02492a20;
LAB_0249265c:
    if (iVar13 == 1) {
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x27;
      lVar31 = *(long *)(lVar27 + 0x40);
      unaff_x19[0xd2] = lVar31;
      *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar27 + 0x48);
      if ((lVar31 == 0) || (lVar27 = FUN_024ebfa0(lVar31,0), lVar27 == 0)) goto LAB_0249920c;
      FUN_0132138c(lVar27,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                   *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
      lVar31 = CONCAT44(in_stack_00000884,in_stack_00000880);
      if (lVar31 == 0) goto LAB_02492630;
      if (uVar17 == 0x3c) {
        uVar17 = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
      }
      else {
        lVar27 = *unaff_x29;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar27 = *unaff_x29;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1b4) = *(undefined4 *)(*(long *)(lVar27 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar58 = *(float *)(unaff_x19 + 0x3c);
      memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
      iVar13 = FUN_026fd110(&stack0x00001700,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      memmove(&stack0x00001700,(void *)(*in_stack_00000138 + 0x50),0x60);
      fVar60 = (float)FUN_026fd120(&stack0x00001700,0);
      fVar51 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar51 = unaff_s12;
      }
      if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
      fVar51 = (fVar58 / (float)iVar13) * fVar60 * fVar51;
      iVar13 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
      fVar58 = *(float *)(unaff_x19 + 0x3c);
      if (iVar13 < 1) {
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        iVar13 = FUN_026fd110(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar60 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
        fVar53 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar53 = unaff_s12;
        }
        if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
        fVar52 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
        if (*(long *)(lVar31 + 0x20) == 0) goto LAB_0249920c;
        FUN_026fd62c(&stack0x00000880,*(long *)(lVar31 + 0x20),0);
        unaff_x26[0x1cd] = unaff_x26[1];
        unaff_x26[0x1cc] = *unaff_x26;
        fVar46 = (float)FUN_026fd45c(&stack0x000016e0,0);
        if (*(long *)(lVar31 + 0x20) == 0) goto LAB_0249920c;
        fVar62 = *(float *)(lVar31 + 0x2c);
        fVar67 = (float)FUN_026fd668(*(long *)(lVar31 + 0x20),0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar54 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar65 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar66 = *(float *)((long)unaff_x19 + 0x3fc);
        fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
        if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
        fStack0000000000000134 = fVar51 * fVar65 * fVar66 * fStack0000000000000134;
        fVar53 = (fVar58 / (float)iVar13) * fVar60 * fVar53;
        fVar58 = fVar53 * (fVar52 / fVar46) * fVar62 * fVar67;
        fVar53 = fVar53 / fVar58;
        fVar54 = fVar53 * fVar54;
        fVar51 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
        fVar53 = fVar53 * fVar51;
      }
      else {
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        iVar13 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar60 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (*(long *)(lVar31 + 0x20) == 0) goto LAB_0249920c;
        fVar53 = *(float *)(lVar31 + 0x2c);
        fVar52 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar52 = 1.0;
        }
        fVar46 = (float)FUN_026fd668(*(long *)(lVar31 + 0x20),0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar54 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar62 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar67 = *(float *)((long)unaff_x19 + 0x3fc);
        fStack0000000000000134 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fStack0000000000000134 = fVar51 * fVar62 * fVar67 * fStack0000000000000134;
        fVar58 = (fVar58 / (float)iVar13) * fVar60 * fVar52 * fVar53 * fVar46;
        fVar53 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
      }
      lVar27 = unaff_x19[0x6c];
      unaff_x19[200] = lVar31;
      if ((lVar27 != 0) && (lVar31 = *(long *)(lVar27 + 0x38), lVar31 != 0)) {
        if (*in_stack_00000148 < *(uint *)(lVar31 + 0x18)) {
          lVar31 = lVar31 + (int)*in_stack_00000148 * unaff_x27;
          *(undefined4 *)(lVar31 + 0x2c) = 1;
          *(float *)(lVar31 + 0x160) = fVar58;
          in_stack_00000128 = 0.0;
          *(long *)(lVar31 + 0x40) = unaff_x19[0xd2];
          *(long *)(lVar31 + 0x38) = unaff_x19[0x1f];
          *(int *)(lVar31 + 0x58) = (int)unaff_x19[0x23];
          *(int *)(unaff_x19 + 0x23) = (int)lVar42;
          goto LAB_02492e14;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      }
      goto LAB_0249920c;
    }
    lVar27 = *in_stack_00000150;
    fVar51 = 0.0;
    if (uVar17 != 3 && uVar17 != 0xad) {
      fVar51 = fVar58;
    }
    fStack0000000000000134 = 0.0;
    if (lVar27 == 0) goto LAB_0249920c;
    fVar54 = 0.0;
    fVar53 = 0.0;
  }
  else {
    if (iVar13 != 0) goto LAB_0249265c;
LAB_02492a20:
    if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
    goto LAB_0249920c;
    uVar63 = *in_stack_00000148;
    uVar18 = *(uint *)(lVar27 + 0x18);
    if (uVar18 <= uVar63)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar42 = *(long *)(lVar27 + (int)uVar63 * unaff_x27 + 0x30);
    unaff_x19[200] = lVar42;
    if (lVar42 == 0) goto LAB_02492630;
    lVar31 = lVar27 + (int)uVar63 * unaff_x27;
    lVar42 = *(long *)(lVar31 + 0x38);
    unaff_x19[0x1f] = lVar42;
    unaff_x19[0x22] = *(long *)(lVar31 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar31 + 0x58);
    if (bVar7) {
      lVar31 = unaff_x19[0x8e];
      if (lVar31 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar31 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if ((*(int *)(lVar31 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
         (uVar63 == *(uint *)(unaff_x19 + 0x92))) goto LAB_02492ab4;
      if (uVar18 <= uVar63 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (lVar42 == 0) goto LAB_0249920c;
      fVar51 = *(float *)(lVar27 + (long)(int)(uVar63 - 1) * (long)iVar16 + 0x60);
      iVar13 = FUN_026fd110(lVar42 + 0x50,0);
      lVar27 = *in_stack_00000138;
    }
    else {
LAB_02492ab4:
      if (lVar42 == 0) goto LAB_0249920c;
      fVar51 = *(float *)(unaff_x19 + 0x3c);
      iVar13 = FUN_026fd110(lVar42 + 0x50,0);
      lVar27 = unaff_x19[0x1f];
    }
    if (lVar27 == 0) goto LAB_0249920c;
    fVar52 = (float)FUN_026fd120(lVar27 + 0x50,0);
    fVar60 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar60 = unaff_s12;
    }
    fVar53 = 0.0;
    fVar54 = 0.0;
    if (!(bool)(bVar7 & uVar17 == 0x2026)) {
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar54 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar53 = (float)FUN_026fd180(*in_stack_00000138 + 0x50,0);
    }
    lVar27 = unaff_x19[200];
    if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_0249920c;
    fVar46 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar62 = *(float *)(lVar27 + 0x2c);
    fVar58 = (float)FUN_026fd668(*(long *)(lVar27 + 0x20),0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar67 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar65 = *(float *)((long)unaff_x19 + 0x3fc);
    fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
    lVar27 = unaff_x19[0x6c];
    if ((lVar27 == 0) || (lVar42 = *(long *)(lVar27 + 0x38), lVar42 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar42 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar42 = lVar42 + (int)*in_stack_00000148 * unaff_x27;
    *(undefined4 *)(lVar42 + 0x2c) = 0;
    fVar60 = ((fStack00000000000000f4 * fVar51) / (float)iVar13) * fVar52 * fVar60;
    fVar58 = fVar60 * fVar46 * fVar62 * fVar58;
    *(float *)(lVar42 + 0x160) = fVar58;
    uVar18 = *(uint *)(unaff_x19 + 0x23);
    fStack0000000000000134 = fVar60 * fVar67 * fVar65 * fStack0000000000000134;
    if (uVar18 == 0) {
      in_stack_00000128 = *(float *)(unaff_x19 + 0xc2);
    }
    else {
      lVar42 = unaff_x19[0xe0];
      if (lVar42 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar42 + 0x18) <= uVar18)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar42 = *(long *)(lVar42 + (long)(int)uVar18 * 8 + 0x20);
      if (lVar42 == 0) goto LAB_0249920c;
      in_stack_00000128 = *(float *)(lVar42 + 0x104);
    }
LAB_02492e14:
    unaff_s12 = 1.0;
    fVar51 = 0.0;
    if (uVar17 != 3 && uVar17 != 0xad) {
      fVar51 = fVar58;
    }
  }
  lVar27 = *(long *)(lVar27 + 0x38);
  if (lVar27 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x27;
  *(short *)(lVar27 + 0x20) = (short)uVar17;
  *(int *)(lVar27 + 0x60) = (int)unaff_x19[0x3c];
  *(undefined4 *)(lVar27 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
  if ((unaff_x19[0x6c] == 0) || (lVar27 = *(long *)(unaff_x19[0x6c] + 0x38), lVar27 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(int *)(lVar27 + (int)*in_stack_00000148 * unaff_x27 + 0x168) = (int)unaff_x19[0x2a];
  if ((unaff_x19[0x6c] == 0) || (lVar27 = *(long *)(unaff_x19[0x6c] + 0x38), lVar27 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(undefined4 *)(lVar27 + (int)*in_stack_00000148 * unaff_x27 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x154);
  if ((unaff_x19[0x6c] == 0) || (lVar27 = *(long *)(unaff_x19[0x6c] + 0x38), lVar27 == 0))
  goto LAB_0249920c;
  uVar18 = *in_stack_00000148;
  FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
               *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
  if (*(uint *)(lVar27 + 0x18) <= uVar18)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar27 = lVar27 + (int)uVar18 * unaff_x27;
  uVar57 = unaff_x26[1];
  uVar22 = *unaff_x26;
  *(undefined4 *)(lVar27 + 0x18c) = in_stack_00000890;
  *(undefined8 *)(lVar27 + 0x184) = uVar57;
  *(undefined8 *)(lVar27 + 0x17c) = uVar22;
  if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(undefined4 *)(lVar27 + (int)*in_stack_00000148 * unaff_x27 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x254);
  if ((unaff_x19[200] == 0) || (lVar27 = *(long *)(unaff_x19[200] + 0x20), lVar27 == 0))
  goto LAB_0249920c;
  FUN_026fd62c(&stack0x00000bf8,lVar27,0);
  puVar9 = 
  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__;
  unaff_x26[0x1df] = in_stack_00000c00;
  unaff_x26[0x1de] = CONCAT44(in_stack_00000bfc,in_stack_00000bf8);
  if ((int)uVar17 < 0x10000) {
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar18 = FUN_016f68bc(uVar17,0);
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
    fVar60 = 0.0;
  }
  else {
    if (unaff_x19[200] == 0) goto LAB_0249920c;
    uVar26 = *in_stack_00000148;
    uVar63 = *(uint *)(unaff_x19[200] + 0x28);
    if ((int)uVar26 < (int)in_stack_00000078._4_4_) {
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar27 + 0x18) <= uVar26 + 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar27 = *(long *)(lVar27 + (long)(int)(uVar26 + 1) * (long)iVar16 + 0x30);
      if ((((lVar27 == 0) || (*in_stack_00000138 == 0)) ||
          (lVar42 = *(long *)(*in_stack_00000138 + 0x128), lVar42 == 0)) ||
         (lVar42 = *(long *)(lVar42 + 0x18), lVar42 == 0)) goto LAB_0249920c;
      in_stack_00000880 = uVar63 | *(int *)(lVar27 + 0x28) << 0x10;
      uVar20 = FUN_0129eff4(lVar42,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      uVar55 = 0;
      if ((uVar20 & 1) == 0) {
        fVar46 = 0.0;
        fVar52 = 0.0;
        fVar60 = 0.0;
      }
      else {
        if (in_stack_000016d8 == 0) goto LAB_0249920c;
        fVar60 = *(float *)(in_stack_000016d8 + 0x14);
        fVar52 = *(float *)(in_stack_000016d8 + 0x18);
        fVar46 = *(float *)(in_stack_000016d8 + 0x1c);
        uVar55 = *(undefined4 *)(in_stack_000016d8 + 0x20);
        if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
          fStack00000000000000cc = 0.0;
        }
      }
      uVar26 = *in_stack_00000148;
    }
    else {
      uVar55 = 0;
      fVar46 = 0.0;
      fVar52 = 0.0;
      fVar60 = 0.0;
    }
    if (0 < (int)uVar26) {
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar27 + 0x18) <= (uint)((long)(int)uVar26 + -1))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar27 = *(long *)(lVar27 + ((long)(int)uVar26 + -1) * unaff_x27 + 0x30);
      if (((lVar27 == 0) || (*in_stack_00000138 == 0)) ||
         ((lVar42 = *(long *)(*in_stack_00000138 + 0x128), lVar42 == 0 ||
          (lVar42 = *(long *)(lVar42 + 0x18), lVar42 == 0)))) goto LAB_0249920c;
      in_stack_00000880 = *(uint *)(lVar27 + 0x28) | uVar63 << 0x10;
      uVar20 = FUN_0129eff4(lVar42,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      if ((uVar20 & 1) != 0) {
        if ((in_stack_000016d8 == 0) ||
           (fVar60 = (float)FUN_024bb1bc(fVar60,fVar52,fVar46,uVar55,
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
    fVar67 = *(float *)(unaff_x19 + 199);
    fVar62 = (float)FUN_026fd474(&stack0x00001770,0);
    fVar67 = fVar67 - fVar51 * fVar62 * (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc));
    *(float *)(unaff_x19 + 199) = fVar67;
    if ((uVar18 != 0) || (uVar17 == 0x200b)) {
      *(float *)(unaff_x19 + 199) = fVar67 - in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac)
      ;
    }
  }
  fVar67 = *(float *)(unaff_x19 + 0x55);
  fVar62 = 0.0;
  if (fVar67 != 0.0) {
    fVar62 = (float)FUN_026fd454(&stack0x00001770,0);
    fVar65 = (float)FUN_026fd464(&stack0x00001770,0);
    fVar62 = (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (fVar67 * 0.5 - fVar51 * (fVar62 * 0.5 + fVar65));
    *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fVar62;
  }
  if (((cVar25 == '\0') && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
    lVar27 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar20 = FUN_02681b9c(lVar27,0,0);
    fVar66 = 0.0;
    if ((uVar20 & 1) != 0) {
      lVar27 = unaff_x19[0x22];
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar27 == 0) goto LAB_0249920c;
      uVar20 = FUN_0267e1d8(lVar27,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
      fVar66 = 0.0;
      if ((uVar20 & 1) != 0) {
        lVar27 = unaff_x19[0x22];
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar27 == 0) goto LAB_0249920c;
        fVar67 = (float)FUN_0267f610(lVar27,*(undefined4 *)
                                             (*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
        if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) goto LAB_0249920c;
        fVar65 = *(float *)(*in_stack_00000138 + 0x1b0);
        fVar66 = (float)FUN_0267f610(unaff_x19[0x22],
                                     *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0);
        fVar66 = fVar66 * fVar67 * fVar65 * 0.25;
        if (fVar67 < in_stack_00000128 + fVar66) {
          in_stack_00000128 = fVar67 - fVar66;
        }
      }
    }
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar67 = *(float *)(*in_stack_00000138 + 0x1b4);
  }
  else {
    lVar27 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar20 = FUN_02681b9c(lVar27,0,0);
    fVar67 = 0.0;
    if ((uVar20 & 1) != 0) {
      lVar27 = unaff_x19[0x22];
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar27 == 0) goto LAB_0249920c;
      uVar20 = FUN_0267e1d8(lVar27,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
      if ((uVar20 & 1) != 0) {
        lVar27 = unaff_x19[0x22];
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar27 == 0) goto LAB_0249920c;
        uVar20 = FUN_0267e1d8(lVar27,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0);
        if ((uVar20 & 1) != 0) {
          lVar27 = unaff_x19[0x22];
          if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (lVar27 != 0) {
            fVar65 = (float)FUN_0267f610(lVar27,*(undefined4 *)
                                                 (*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
            if ((*in_stack_00000138 != 0) && (unaff_x19[0x22] != 0)) {
              fVar69 = *(float *)(*in_stack_00000138 + 0x1a8);
              fVar66 = (float)FUN_0267f610(unaff_x19[0x22],
                                           *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc)
                                           ,0);
              fVar66 = fVar66 * fVar65 * fVar69 * 0.25;
              if (fVar65 < in_stack_00000128 + fVar66) {
                in_stack_00000128 = fVar65 - fVar66;
              }
              goto LAB_024934bc;
            }
          }
          goto LAB_0249920c;
        }
      }
    }
    fVar66 = 0.0;
  }
LAB_024934bc:
  fVar73 = *(float *)(unaff_x19 + 199);
  fVar65 = (float)FUN_026fd464(&stack0x00001770,0);
  fVar73 = fVar73 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar51 * (fVar60 + ((fVar65 - in_stack_00000128) - fVar66));
  fVar60 = (float)FUN_026fd46c(&stack0x00001770,0);
  fVar69 = *(float *)((long)unaff_x19 + 0x614) +
           ((fStack0000000000000134 + fVar51 * (fVar52 + in_stack_00000128 + fVar60)) -
           *(float *)(unaff_x19 + 0x9a));
  fVar60 = (float)FUN_026fd45c(&stack0x00001770,0);
  fVar71 = fVar69 - fVar51 * (in_stack_00000128 + in_stack_00000128 + fVar60);
  fVar60 = (float)FUN_026fd454(&stack0x00001770,0);
  fVar65 = fVar73 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar51 * (fVar66 + fVar66 + in_stack_00000128 + in_stack_00000128 + fVar60);
  fVar60 = fVar73;
  fVar52 = fVar65;
  if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (cVar25 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
    fVar75 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
    fVar60 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar49 = fVar75 * fVar51 * (fVar66 + in_stack_00000128 + fVar60);
    fVar60 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar52 = (float)FUN_026fd45c(&stack0x00001770,0);
    fVar69 = fVar69 + 0.0;
    fVar71 = fVar71 + 0.0;
    fVar75 = fVar75 * fVar51 * (((fVar60 - fVar52) - in_stack_00000128) - fVar66);
    fVar52 = fVar65 + fVar75;
    fVar60 = fVar73 + fVar49;
    fVar48 = (fVar49 - fVar75) * 0.5;
    fVar73 = (fVar73 + fVar75) - fVar48;
    fVar65 = (fVar65 + fVar49) - fVar48;
    fVar60 = fVar60 - fVar48;
    fVar52 = fVar52 - fVar48;
  }
  if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
    fVar49 = 0.0;
    fVar50 = 0.0;
    fVar68 = 0.0;
    fVar48 = 0.0;
    fVar74 = fVar71;
    fVar75 = fVar69;
    fStack00000000000000e8 = fVar60;
    fStack00000000000000ec = fVar73;
  }
  else {
    thunk_FUN_026935f0(_uStack0000000000000060,0);
    fVar70 = (fVar65 + fVar73) * 0.5;
    fVar72 = (fVar71 + fVar69) * 0.5;
    fVar69 = fVar69 - fVar72;
    fVar48 = 0.0;
    fVar75 = fVar69;
    fVar47 = (float)FUN_02692df0(fVar60 - fVar70,_uStack0000000000000060,0);
    fVar48 = fVar48 + 0.0;
    fVar71 = fVar71 - fVar72;
    fVar49 = 0.0;
    fVar60 = fVar71;
    fVar73 = (float)FUN_02692df0(fVar73 - fVar70,_uStack0000000000000060,0);
    fVar49 = fVar49 + 0.0;
    fVar68 = 0.0;
    fVar65 = (float)FUN_02692df0(fVar65 - fVar70,_uStack0000000000000060,0);
    fVar65 = fVar70 + fVar65;
    fVar69 = fVar72 + fVar69;
    fVar68 = fVar68 + 0.0;
    fVar50 = 0.0;
    fVar52 = (float)FUN_02692df0(fVar52 - fVar70,_uStack0000000000000060,0);
    fVar52 = fVar70 + fVar52;
    fVar71 = fVar72 + fVar71;
    fVar50 = fVar50 + 0.0;
    fVar74 = fVar72 + fVar60;
    fVar75 = fVar72 + fVar75;
    fStack00000000000000e8 = fVar70 + fVar47;
    fStack00000000000000ec = fVar70 + fVar73;
  }
  if (*in_stack_00000150 == 0) goto LAB_0249920c;
  lVar27 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_d9 = (ulong)(uint)fVar51;
  if (lVar27 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar27 + 0x120) = fVar74;
  *(float *)(lVar27 + 0x11c) = fStack00000000000000ec;
  *(float *)(lVar27 + 0x124) = fVar49;
  if (*in_stack_00000150 == 0) goto LAB_0249920c;
  lVar27 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_s12 = 1.0;
  if (lVar27 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar27 + 0x114) = fVar75;
  *(float *)(lVar27 + 0x110) = fStack00000000000000e8;
  *(float *)(lVar27 + 0x118) = fVar48;
  if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar27 + 0x128) = fVar65;
  *(float *)(lVar27 + 300) = fVar69;
  *(float *)(lVar27 + 0x130) = fVar68;
  if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar27 + 0x134) = fVar52;
  *(float *)(lVar27 + 0x138) = fVar71;
  *(float *)(lVar27 + 0x13c) = fVar50;
  if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
  goto LAB_0249920c;
  uVar63 = *in_stack_00000148;
  lVar42 = (long)(int)uVar63;
  if (*(uint *)(lVar27 + 0x18) <= uVar63)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar31 = lVar27 + lVar42 * unaff_x27;
  *(int *)(lVar31 + 0x140) = (int)unaff_x19[199];
  fVar52 = *(float *)(unaff_x19 + 0x9a);
  param_3 = (ulong)(uint)fVar52;
  fVar60 = *(float *)((long)unaff_x19 + 0x614);
  *(float *)(lVar31 + 0x15c) = (fVar65 - fStack00000000000000ec) / (fVar75 - fVar74);
  *(float *)(lVar31 + 0x14c) = (fStack0000000000000134 - fVar52) + fVar60;
  fVar54 = fVar54 * fVar51;
  if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
    fVar54 = fVar54 / fStack00000000000000f4;
    fVar53 = (fVar53 * fVar51) / fStack00000000000000f4;
  }
  else {
    fVar53 = fVar53 * fVar51;
  }
  uVar26 = *(uint *)(unaff_x19 + 0x92);
  bVar11 = uVar18 != 0;
  fVar54 = fVar60 + fVar54;
  bVar12 = uVar63 != uVar26;
  if (bVar12 && bVar11) {
    fVar60 = *(float *)(unaff_x19 + 0x98);
    lVar27 = lVar27 + lVar42 * unaff_x27;
    *(float *)(lVar27 + 0x154) = fVar60;
    fVar53 = *(float *)((long)unaff_x19 + 0x4c4);
    *(float *)(lVar27 + 0x148) = fVar60 - fVar52;
    *(float *)(lVar27 + 0x158) = fVar53;
    *(float *)(unaff_x19 + 0x97) = fVar60 - fVar52;
    fVar53 = fVar53 - fVar52;
    *(float *)(lVar27 + 0x150) = fVar53;
  }
  else {
    fVar53 = fVar60 + fVar53;
    fVar65 = fVar54;
    fVar69 = fVar53;
    if (fVar60 != 0.0) {
      fVar65 = (fVar54 - fVar60) / *(float *)((long)unaff_x19 + 0x3fc);
      fVar69 = (fVar53 - fVar60) / *(float *)((long)unaff_x19 + 0x3fc);
      if (fVar65 <= fVar54) {
        fVar65 = fVar54;
      }
      if (fVar53 <= fVar69) {
        fVar69 = fVar53;
      }
    }
    lVar27 = lVar27 + lVar42 * unaff_x27;
    fVar60 = fVar65;
    if (fVar65 <= *(float *)(unaff_x19 + 0x98)) {
      fVar60 = *(float *)(unaff_x19 + 0x98);
    }
    fVar71 = fVar69;
    if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar69) {
      fVar71 = *(float *)((long)unaff_x19 + 0x4c4);
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar71;
    fVar53 = fVar53 - fVar52;
    *(float *)(unaff_x19 + 0x98) = fVar60;
    *(float *)(lVar27 + 0x154) = fVar65;
    *(float *)(lVar27 + 0x158) = fVar69;
    *(float *)(lVar27 + 0x148) = fVar54 - fVar52;
    *(float *)(unaff_x19 + 0x97) = fVar54 - fVar52;
    *(float *)(lVar27 + 0x150) = fVar53;
  }
  *(float *)((long)unaff_x19 + 0x4bc) = fVar53;
  if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
    if (!bVar12 || !bVar11) {
      *(float *)(unaff_x19 + 0x96) = fVar60;
      if (unaff_x19[0x1f] != 0) {
        fVar60 = *(float *)((long)unaff_x19 + 0x4b4);
        fVar52 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
        fStack00000000000000f4 = (fVar51 * fVar52) / fStack00000000000000f4;
        param_3 = (ulong)*(uint *)(unaff_x19 + 0x9a);
        if (fVar60 <= fStack00000000000000f4) {
          fVar60 = fStack00000000000000f4;
        }
        *(float *)((long)unaff_x19 + 0x4b4) = fVar60;
        goto LAB_02493948;
      }
      goto LAB_0249920c;
    }
  }
  else {
LAB_02493948:
    if ((!bVar12 || !bVar11) && (float)param_3 == 0.0) {
      fVar60 = *(float *)(in_stack_00000070 + 0x208);
      if (*(float *)(in_stack_00000070 + 0x208) <= fVar54) {
        fVar60 = fVar54;
      }
      *(float *)(in_stack_00000070 + 0x208) = fVar60;
    }
  }
  lVar27 = *in_stack_00000150;
  if ((lVar27 == 0) || (lVar42 = *(long *)(lVar27 + 0x38), lVar42 == 0)) goto LAB_0249920c;
  uVar2 = *in_stack_00000148;
  if (*(uint *)(lVar42 + 0x18) <= uVar2)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar42 = lVar42 + (int)uVar2 * unaff_x27;
  *(undefined1 *)(lVar42 + 0x194) = 0;
  uVar33 = *(uint *)(unaff_x19 + 0x4e);
  if ((uVar17 == 9) ||
     (((((uVar18 == 0 && (uVar17 != 3)) && (uVar17 != 0x200b)) && (uVar17 != 0xad)) ||
      (((uVar17 == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) != 0 ||
       (*(int *)((long)unaff_x19 + 0x63c) == 1)))))) {
    *(undefined1 *)(lVar42 + 0x194) = 1;
    pfVar30 = _fStack0000000000000088;
    pfVar34 = _fStack0000000000000098;
    if (bVar7) {
      lVar27 = *(long *)(lVar27 + 0x50);
      if (lVar27 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      pfVar34 = (float *)(lVar27 + 0x60);
      pfVar30 = (float *)(lVar27 + 100);
    }
    fVar52 = *pfVar34;
    fVar53 = *pfVar30;
    fVar60 = *(float *)(unaff_x19 + 0x6b);
    fVar54 = *(float *)(unaff_x19 + 199);
    fStack00000000000000d4 = (in_stack_00000090 - fVar52) - fVar53;
    bVar11 = true;
    if ((fVar60 <= fStack00000000000000d4) && (bVar11 = false, !NAN(fVar60))) {
      bVar11 = fVar60 == -1.0;
    }
    if (!bVar11) {
      fStack00000000000000d4 = fVar60;
    }
    fVar60 = 0.0;
    if ((char)unaff_x19[0x1d] == '\0') {
      fVar60 = (float)FUN_026fd474(&stack0x00001770,0);
      param_3 = (ulong)*(uint *)(unaff_x19 + 0x9a);
    }
    fVar71 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar65 = *(float *)((long)unaff_x19 + 0x2cc);
    fVar69 = (float)param_3;
    if (uVar17 != 0xad) {
      fVar58 = fVar51;
    }
    fVar73 = 0.0;
    if ((0.0 < fVar69) && (fVar73 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar73 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar73 = (*(float *)(unaff_x19 + 0x96) - (fVar71 - fVar69)) + fVar73;
    uVar2 = *in_stack_00000148;
    if (fStack00000000000000a4 < fVar73) {
      if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
        *(uint *)((long)unaff_x19 + 0x2dc) = uVar2;
      }
      unaff_x28 = (long *)StringLiteral_302;
      unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
      uVar22 = DAT_02941c08;
      if ((char)unaff_x19[0x46] != '\0') {
        fVar75 = *(float *)(unaff_x19 + 0x58);
        if (((fVar75 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar69)) &&
           (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar58 = *(float *)((long)unaff_x19 + 0x2b4) +
                   ((in_stack_00000018._4_4_ - fVar73) / (float)(int)unaff_x19[0x94]) /
                   fStack0000000000000054;
          if (fVar58 <= fVar75) {
            fVar58 = fVar75;
          }
          goto LAB_024964c8;
        }
        fVar73 = *(float *)((long)unaff_x19 + 0x1dc);
        fVar69 = *(float *)(unaff_x19 + 0x49);
        param_3 = (ulong)(uint)fVar69;
        if ((fVar69 < fVar73) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar58 = (fVar73 - *(float *)(unaff_x19 + 0x47)) * 0.5;
          if (fVar58 <= DAT_028aa298) {
            fVar58 = DAT_028aa298;
          }
          fVar51 = (fVar73 - fVar58) * 20.0 + 0.5;
          fVar58 = DAT_02958220;
          if (fVar51 != INFINITY) {
            fVar58 = (float)(int)fVar51 / 20.0;
          }
          if (fVar58 <= fVar69) {
            fVar58 = fVar69;
          }
          *(float *)((long)unaff_x19 + 0x234) = fVar73;
          goto LAB_02495fd8;
        }
      }
      switch((int)unaff_x19[0x5b]) {
      case 1:
        lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar27 = *unaff_x29;
        }
        lVar42 = *(long *)(lVar27 + 0xb8);
        lVar27 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar27 + 0x132) & 1) == 0) {
          lVar27 = FUN_00d5941c(lVar27);
        }
        unaff_x28 = (long *)StringLiteral_302;
        lVar27 = *(long *)(*(long *)(lVar27 + 0xc0) + 8);
        if ((*(byte *)(lVar27 + 0x132) & 1) == 0) {
          lVar27 = FUN_00d5941c();
        }
        piVar21 = (int *)thunk_FUN_00d32ed4(lVar42 + 0x11f0,*(long *)(lVar27 + 0x80) + 0xa0);
        if (*piVar21 == 0) {
LAB_02495f00:
          uVar19 = DAT_02941c08;
          unaff_x26 = (undefined8 *)&stack0x00000880;
          unaff_s12 = 1.0;
          in_stack_00000148[0] = 0;
          in_stack_00000148[1] = 0;
          in_stack_00001788 = 0xffffffff;
        }
        else {
          lVar27 = *unaff_x29;
          if (*(int *)(lVar27 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar27 = *unaff_x29;
          }
          FUN_013b8de4(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x00000880,
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
          uVar19 = CONCAT44(0x2026,iVar13);
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
          fVar58 = *(float *)(unaff_x19 + 0x98);
          unaff_x26 = (undefined8 *)&stack0x00000880;
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00001788 = FUN_024d66ec();
          if (fVar58 - fVar71 <= fStack00000000000000a4) {
            *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
            *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
            param_3 = *(ulong *)(*(long *)(*unaff_x29 + 0xb8) + 0x15a8);
            *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
            *(undefined4 *)(unaff_x19 + 0x99) = 0;
            lVar27 = NEON_rev64(param_3,4);
            unaff_x19[0x98] = lVar27;
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
        uVar19 = uVar22;
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
        lVar27 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar20 = FUN_02681b9c(lVar27,0,0);
        if ((uVar20 & 1) != 0) {
          plVar43 = (long *)unaff_x19[0x5c];
          uVar19 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar43 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar43 + 0x558))(plVar43,uVar19,*(undefined8 *)(*plVar43 + 0x560));
          lVar27 = unaff_x19[0x5c];
          if (lVar27 == 0) goto LAB_0249920c;
          *(int *)(lVar27 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar27,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar43 = (long *)unaff_x19[0x5c];
          if (plVar43 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
LAB_0249408c:
        unaff_x26 = (undefined8 *)&stack0x00000880;
        unaff_s12 = 1.0;
        uVar19 = CONCAT44(3,uVar2);
      }
LAB_02492630:
      in_stack_00001788 = in_stack_00001788 + 1;
      lVar27 = unaff_x19[0x8e];
      if (lVar27 == 0) goto LAB_0249920c;
      if ((int)*(uint *)(lVar27 + 0x18) <= (int)in_stack_00001788) {
LAB_02495f1c:
        fVar58 = (float)param_3;
        if (((char)unaff_x19[0x46] != '\0') &&
           (fVar58 = DAT_02956ccc,
           DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
          fVar58 = *(float *)((long)unaff_x19 + 0x1dc);
          fVar51 = *(float *)((long)unaff_x19 + 0x24c);
          if ((fVar58 < fVar51) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
            if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
              *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
            }
            fVar60 = (*(float *)((long)unaff_x19 + 0x234) - fVar58) * 0.5;
            if (fVar60 <= DAT_028aa298) {
              fVar60 = DAT_028aa298;
            }
            *(float *)(unaff_x19 + 0x47) = fVar58;
            fVar60 = (fVar58 + fVar60) * 20.0 + 0.5;
            fVar58 = DAT_02958220;
            if (fVar60 != INFINITY) {
              fVar58 = (float)(int)fVar60 / 20.0;
            }
            if (fVar51 <= fVar58) {
              fVar58 = fVar51;
            }
LAB_02495fd8:
            *(float *)((long)unaff_x19 + 0x1dc) = fVar58;
            return;
          }
        }
        *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
        if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
          uVar19 = FUN_0176eb1c(in_stack_00000038,0);
          uVar22 = FUN_017840ac(in_stack_00000040,0);
          uVar19 = FUN_0160073c(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__
                                ,uVar19,*(undefined8 *)
                                         Method_UnityEngine_GameObject_GetComponents<Component>__,
                                uVar22,0);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_00d32864(*unaff_x28);
          }
          FUN_02660dac(uVar19,0);
        }
        if ((*unaff_x24 == 0) || ((*unaff_x24 == 1 && (uVar17 == 3)))) {
          (**(code **)(*unaff_x19 + 0x948))();
          goto LAB_02496098;
        }
        lVar27 = *unaff_x29;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar27 = *unaff_x29;
        }
        puVar9 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
        lVar27 = **(long **)(lVar27 + 0xb8);
        if (lVar27 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        iVar16 = *(int *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
        if ((*in_stack_00000150 == 0) ||
           (lVar27 = *(long *)(*in_stack_00000150 + 0x60), lVar27 == 0)) goto LAB_0249920c;
        if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (*(int *)(lVar27 + 0x18) == 0)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        FUN_024e7d94(lVar27 + 0x20,0,0);
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
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        uStack00000000000000c0 =
             *(undefined8 *)
              (*(float **)
                (*(long *)
                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
                0xb8) + 1);
        lVar27 = unaff_x19[0xe2];
        _in_stack_00000090 = uStack00000000000000c0;
        fStack0000000000000098 = in_stack_000000c8;
        if (iVar13 < 0x401) {
          if (iVar13 == 0x100) {
            if (lVar27 == 0) goto LAB_0249920c;
            if (*(uint *)(lVar27 + 0x18) < 2)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar19 = *(undefined8 *)(lVar27 + 0x30);
            if ((int)unaff_x19[0x5b] == 5) {
              if ((*in_stack_00000150 == 0) ||
                 (lVar42 = *(long *)(*in_stack_00000150 + 0x58), lVar42 == 0)) goto LAB_0249920c;
              if (*(uint *)(lVar42 + 0x18) <= uStack000000000000002c)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              fVar58 = *(float *)(lVar42 + (long)(int)uStack000000000000002c * 0x14 + 0x28);
            }
            else {
              fVar58 = *(float *)(unaff_x19 + 0x96);
            }
            fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar27 + 0x2c);
            fVar58 = (0.0 - fVar58) - fStack0000000000000020;
          }
          else if (iVar13 == 0x200) {
            if (lVar27 == 0) goto LAB_0249920c;
            if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            fStack0000000000000098 = (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
            uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar27 + 0x24) +
                              (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5);
            if ((int)unaff_x19[0x5b] == 5) {
              if ((*in_stack_00000150 == 0) ||
                 (lVar27 = *(long *)(*in_stack_00000150 + 0x58), lVar27 == 0)) goto LAB_0249920c;
              if (*(uint *)(lVar27 + 0x18) <= uStack000000000000002c)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              lVar27 = lVar27 + (long)(int)uStack000000000000002c * 0x14;
              fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
              fVar58 = ((fStack0000000000000020 + *(float *)(lVar27 + 0x28) +
                        *(float *)(lVar27 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
            }
            else {
              fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
              fVar58 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8)
                       - fStack0000000000000024) * -0.5 + 0.0;
            }
          }
          else {
            if (iVar13 != 0x400) goto LAB_024965d0;
            if (lVar27 == 0) goto LAB_0249920c;
            if (*(int *)(lVar27 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar19 = *(undefined8 *)(lVar27 + 0x24);
            if ((int)unaff_x19[0x5b] == 5) {
              if ((*in_stack_00000150 == 0) ||
                 (lVar42 = *(long *)(*in_stack_00000150 + 0x58), lVar42 == 0)) goto LAB_0249920c;
              if (*(uint *)(lVar42 + 0x18) <= uStack000000000000002c)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              in_stack_000017b8 =
                   *(float *)(lVar42 + (long)(int)uStack000000000000002c * 0x14 + 0x30);
            }
            fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar27 + 0x20);
            fVar58 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
          }
          _in_stack_00000090 = CONCAT44((float)((ulong)uVar19 >> 0x20) + 0.0,(float)uVar19 + fVar58)
          ;
        }
        else if (iVar13 == 0x800) {
          if (lVar27 == 0) goto LAB_0249920c;
          if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar58 = ((float)*(undefined8 *)(lVar27 + 0x24) + (float)*(undefined8 *)(lVar27 + 0x30)) *
                   0.5;
          fStack0000000000000098 =
               fStack0000000000000030 + 0.0 +
               (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
          _in_stack_00000090 =
               CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5 + 0.0,
                        fVar58 + 0.0);
        }
        else {
          if (iVar13 == 0x1000) {
            if (lVar27 == 0) goto LAB_0249920c;
            if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            fVar58 = (float)*(undefined8 *)(lVar27 + 0x24) + (float)*(undefined8 *)(lVar27 + 0x30);
            fVar51 = (float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20);
            fStack0000000000000020 =
                 fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) +
                 *(float *)(unaff_x19 + 0x9b);
            fStack0000000000000098 =
                 fStack0000000000000030 + 0.0 +
                 (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
          }
          else {
            if (iVar13 != 0x2000) goto LAB_024965d0;
            if (lVar27 == 0) goto LAB_0249920c;
            if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            fVar58 = (float)*(undefined8 *)(lVar27 + 0x24) + (float)*(undefined8 *)(lVar27 + 0x30);
            fVar51 = (float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20);
            fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
            fStack0000000000000098 =
                 fStack0000000000000030 + 0.0 +
                 (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
          }
          fVar58 = fVar58 * 0.5;
          _in_stack_00000090 =
               CONCAT44(fVar51 * 0.5 + 0.0,
                        fVar58 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) * 0.5));
        }
LAB_024965d0:
        if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
        uVar19 = FUN_0285a188(unaff_x19[0xe4],0);
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar9);
        }
        uVar20 = FUN_0268b4e0(uVar19,0,0);
        lVar27 = FUN_024c933c();
        if (lVar27 == 0) goto LAB_0249920c;
        FUN_026a125c(lVar27,0);
        *(float *)(unaff_x19 + 0xe1) = fVar58;
        if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
        iVar13 = FUN_02859798(unaff_x19[0xe4],0);
        if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
        fVar51 = (float)FUN_028598f0(unaff_x19[0xe4],0);
        __x = DAT_028aa048;
        dVar56 = modf(DAT_028aa048,(double *)&stack0x00000880);
        if (dVar56 == 0.5) {
          fVar60 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
          if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
            fVar60 = fVar60 + 1.0;
          }
        }
        else {
          fVar60 = 255.0;
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
        lVar27 = *(long *)puVar10;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar27 = *(long *)puVar10;
        }
        puVar28 = *(undefined4 **)(lVar27 + 0xb8);
        uVar59 = (ulong)(uint)puVar28[1];
        uVar61 = (ulong)(uint)puVar28[2];
        uVar64 = (ulong)(uint)puVar28[3];
        UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                  (*puVar28,uVar59,uVar61,uVar64,&stack0x00001790,0x4000ffff,0);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar27 = *in_stack_00000150;
        if (lVar27 == 0) goto LAB_0249920c;
        uVar17 = *in_stack_00000148;
        if ((int)uVar17 < 1) {
          iStack00000000000000ac = 0;
          iVar16 = 0;
          goto LAB_02498c58;
        }
        lVar27 = *(long *)(lVar27 + 0x38);
        fVar58 = ABS(fVar58);
        fVar46 = 1.0;
        if ((uVar20 & 1) == 0) {
          fVar46 = fVar58;
        }
        if (lVar27 == 0) goto LAB_0249920c;
        bVar8 = false;
        bVar7 = false;
        bVar12 = false;
        bVar11 = false;
        uStack0000000000000060 =
             (int)fVar60 & 0xffU | ((int)fVar52 & 0xffU) << 8 | ((int)fVar53 & 0xffU) << 0x10 |
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
        fVar60 = 0.0;
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
        uVar63 = 0;
        uVar26 = 1;
        goto LAB_02496a50;
      }
      if (*(uint *)(lVar27 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      in_stack_000017bc = *(uint *)(lVar27 + (long)(int)in_stack_00001788 * 0xc + 0x20);
      if (in_stack_000017bc == 0) goto LAB_02495f1c;
      uVar17 = in_stack_000017bc;
      if (5 < in_stack_00000140) goto code_r0x024923a8;
      goto LAB_02492430;
    }
UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited:
    unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
    fVar69 = 1.0 - fVar65;
    param_3 = (ulong)(uint)fVar69;
    fVar60 = ABS(fVar54) + fVar60 * fVar69 * fVar58;
    fVar58 = _DAT_0294c6e8;
    if ((uVar33 & 0x18) == 0) {
      fVar58 = 1.0;
    }
    if (fVar58 * fStack00000000000000d4 < fVar60) {
      if (((char)unaff_x19[0x5a] != '\0') && (uVar2 != *(uint *)(unaff_x19 + 0x92))) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
          lVar27 = *in_stack_00000150;
          if ((lVar27 == 0) || (lVar42 = *(long *)(lVar27 + 0x38), lVar42 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar42 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar54 = *(float *)(unaff_x19 + 0x9a);
          fVar65 = 0.0;
          if ((0.0 < fVar54) && (fVar65 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
            fVar65 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
          }
          fVar65 = in_stack_000000c8 * *(float *)(unaff_x19 + 0x56) +
                   *(float *)(lVar42 + (int)*in_stack_00000148 * unaff_x27 + 0x154) +
                   (fVar65 - *(float *)((long)unaff_x19 + 0x4c4)) +
                   fStack0000000000000054 *
                   (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
        }
        else {
          lVar27 = unaff_x19[0x6c];
          *(undefined1 *)((long)unaff_x19 + 700) = 1;
          if (lVar27 == 0) goto LAB_0249920c;
          fVar54 = *(float *)(unaff_x19 + 0x9a);
          fVar65 = *(float *)(unaff_x19 + 0x57) + in_stack_000000c8 * *(float *)(unaff_x19 + 0x56);
        }
        puVar9 = System_Threading_Mutex_TypeInfo;
        lVar27 = *(long *)(lVar27 + 0x38);
        if (lVar27 != 0) {
          uVar37 = *(uint *)((long)unaff_x19 + 0x48c);
          if ((*(uint *)(lVar27 + 0x18) <= uVar37) ||
             (uVar6 = uVar37 - 1, *(uint *)(lVar27 + 0x18) <= uVar6))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          param_3 = (ulong)(uint)(fVar65 + *(float *)(unaff_x19 + 0x96));
          fVar54 = (fVar65 + *(float *)(unaff_x19 + 0x96) + fVar54) -
                   *(float *)(lVar27 + (int)uVar37 * unaff_x27 + 0x158);
          if (((in_stack_00000068._4_1_ & 1) != 0 ||
               *(short *)(lVar27 + (long)(int)uVar6 * (long)iVar16 + 0x20) != 0xad) ||
             ((fStack00000000000000a4 <= fVar54 && ((int)unaff_x19[0x5b] != 0)))) {
            if (*(short *)(lVar27 + (int)uVar37 * unaff_x27 + 0x20) == 0xad) {
              in_stack_00000068._4_1_ = 1;
            }
            else {
              if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
                fVar65 = *(float *)((long)unaff_x19 + 0x2cc);
                fVar71 = *(float *)(unaff_x19 + 0x59) / 100.0;
                if ((fVar71 <= fVar65) ||
                   ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
                  fVar69 = *(float *)((long)unaff_x19 + 0x1dc);
                  param_3 = (ulong)(uint)fVar69;
                  fVar65 = *(float *)(unaff_x19 + 0x49);
                  if ((fVar65 < fVar69) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_02499210;
                  goto LAB_024946c0;
                }
LAB_024992ac:
                fVar51 = fVar60;
                if (0.0 < fVar65) {
                  fVar51 = fVar60 / (1.0 - fVar65);
                }
                fVar65 = fVar65 + (fVar60 - fVar58 * (fStack00000000000000d4 + DAT_02958218)) /
                                  fVar51;
LAB_0249929c:
                if (fVar71 <= fVar65) {
                  fVar65 = fVar71;
                }
                *(float *)((long)unaff_x19 + 0x2cc) = fVar65;
                return;
              }
LAB_024946c0:
              lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar27 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar27 = *(long *)puVar9;
              }
              iVar13 = *(int *)(*(long *)(lVar27 + 0xb8) + 0xe78);
              if ((((float)iVar13 != fStack0000000000000034) && (iVar13 != -1)) &&
                 (((bStack000000000000005c ^ 1) & 1) == 0)) {
                if (*(int *)(lVar27 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                in_stack_00001788 = FUN_024d66ec();
                if ((unaff_x19[0x6c] == 0) ||
                   (lVar27 = *(long *)(unaff_x19[0x6c] + 0x38), lVar27 == 0)) goto LAB_0249920c;
                uVar6 = *in_stack_00000148 - 1;
                if (*(uint *)(lVar27 + 0x18) <= uVar6)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                fStack0000000000000034 = (float)iVar13;
                if (*(short *)(lVar27 + (long)(int)uVar6 * (long)iVar16 + 0x20) == 0xad) {
                  *in_stack_00000148 = uVar6;
                  goto LAB_024947b4;
                }
              }
              if (fStack00000000000000a4 < fVar54) {
                if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                  *(undefined4 *)((long)unaff_x19 + 0x2dc) =
                       *(undefined4 *)((long)unaff_x19 + 0x48c);
                }
                unaff_x28 = (long *)StringLiteral_302;
                unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
                if ((char)unaff_x19[0x46] != '\0') {
                  fVar65 = *(float *)(unaff_x19 + 0x58);
                  if ((fVar65 < *(float *)((long)unaff_x19 + 0x2b4)) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                    fVar58 = *(float *)((long)unaff_x19 + 0x2b4) +
                             ((in_stack_00000018._4_4_ - fVar54) / (float)((int)unaff_x19[0x94] + 1)
                             ) / fStack0000000000000054;
                    if (fVar58 <= fVar65) {
                      fVar58 = fVar65;
                    }
LAB_024964c8:
                    *(float *)((long)unaff_x19 + 0x2b4) = fVar58;
                    return;
                  }
                  fVar65 = *(float *)((long)unaff_x19 + 0x2cc);
                  fVar71 = *(float *)(unaff_x19 + 0x59) / 100.0;
                  if ((fVar65 < fVar71) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_024992ac;
                  fVar69 = *(float *)((long)unaff_x19 + 0x1dc);
                  param_3 = (ulong)(uint)fVar69;
                  fVar65 = *(float *)(unaff_x19 + 0x49);
                  if ((fVar65 < fVar69) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_02499210;
                }
                switch((int)unaff_x19[0x5b]) {
                case 0:
                case 2:
                case 4:
                  param_3 = unaff_d9;
                  FUN_024d7014(fStack0000000000000054,unaff_d9,in_stack_000000c8,
                               *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar67,
                               fStack00000000000000cc,fStack00000000000000d4,fStack0000000000000048)
                  ;
                  break;
                case 1:
                  lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
                  if (*(int *)(lVar27 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar27 = *unaff_x29;
                  }
                  lVar42 = *(long *)(lVar27 + 0xb8);
                  lVar27 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                  if ((*(byte *)(lVar27 + 0x132) & 1) == 0) {
                    lVar27 = FUN_00d5941c(lVar27);
                  }
                  lVar27 = *(long *)(*(long *)(lVar27 + 0xc0) + 8);
                  if ((*(byte *)(lVar27 + 0x132) & 1) == 0) {
                    lVar27 = FUN_00d5941c();
                  }
                  piVar21 = (int *)thunk_FUN_00d32ed4(lVar42 + 0x11f0,
                                                      *(long *)(lVar27 + 0x80) + 0xa0);
                  if (*piVar21 == 0) {
                    in_stack_00000068._4_1_ = 0;
                    goto LAB_02495f00;
                  }
                  lVar27 = *unaff_x29;
                  if (*(int *)(lVar27 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar27 = *unaff_x29;
                  }
                  FUN_013b8de4(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x00000880,
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
                  param_3 = unaff_d9;
                  FUN_024d7014(fStack0000000000000054,unaff_d9,in_stack_000000c8,
                               *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar67,
                               fStack00000000000000cc,fStack00000000000000d4,fStack0000000000000048)
                  ;
                  *(undefined4 *)(unaff_x19 + 0x99) = 0;
                  *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                  *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
                  *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                  break;
                case 6:
                  lVar27 = unaff_x19[0x5c];
                  if (*(int *)(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar20 = FUN_02681b9c(lVar27,0,0);
                  if ((uVar20 & 1) != 0) {
                    plVar43 = (long *)unaff_x19[0x5c];
                    uVar19 = (**(code **)(*unaff_x19 + 0x548))();
                    if (plVar43 == (long *)0x0) goto LAB_0249920c;
                    (**(code **)(*plVar43 + 0x558))
                              (plVar43,uVar19,*(undefined8 *)(*plVar43 + 0x560));
                    lVar27 = unaff_x19[0x5c];
                    if (lVar27 == 0) goto LAB_0249920c;
                    *(int *)(lVar27 + 0x3f8) = (int)unaff_x19[0x7f];
                    FUN_024c910c(lVar27,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
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
              param_3 = unaff_d9;
              FUN_024d7014(fStack0000000000000054,unaff_d9,in_stack_000000c8,
                           *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar67,fStack00000000000000cc,
                           fStack00000000000000d4,fStack0000000000000048);
              bStack000000000000005c = 1;
              in_stack_00000068._4_1_ = 0;
              fStack0000000000000058 = 1.4013e-45;
            }
          }
          else {
            *in_stack_00000148 = uVar6;
LAB_024947b4:
            uVar19 = CONCAT44(0x2d,uVar6);
            in_stack_00001788 = in_stack_00001788 - 1;
            in_stack_00000068._4_1_ = 0;
          }
          unaff_x26 = (undefined8 *)&stack0x00000880;
          unaff_s12 = 1.0;
          unaff_x28 = (long *)StringLiteral_302;
          unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
          goto LAB_02492630;
        }
        goto LAB_0249920c;
      }
      if (((char)unaff_x19[0x46] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
        fVar71 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if (fVar65 < fVar71) {
          fVar51 = fVar60 / fVar69;
          if (fVar65 <= 0.0) {
            fVar51 = fVar60;
          }
          fVar65 = fVar65 + (fVar60 - fVar58 * (fStack00000000000000d4 + DAT_02958218)) / fVar51;
          goto LAB_0249929c;
        }
        fVar69 = *(float *)((long)unaff_x19 + 0x1dc);
        param_3 = (ulong)(uint)fVar69;
        fVar65 = *(float *)(unaff_x19 + 0x49);
        if (fVar69 <= fVar65) goto LAB_02493e34;
LAB_02499210:
        fVar58 = (fVar69 - *(float *)(unaff_x19 + 0x47)) * 0.5;
        if (fVar58 <= DAT_028aa298) {
          fVar58 = DAT_028aa298;
        }
        *(float *)((long)unaff_x19 + 0x234) = fVar69;
        fVar51 = (fVar69 - fVar58) * 20.0 + 0.5;
        fVar58 = DAT_02958220;
        if (fVar51 != INFINITY) {
          fVar58 = (float)(int)fVar51 / 20.0;
        }
        if (fVar58 <= fVar65) {
          fVar58 = fVar65;
        }
        goto LAB_02495fd8;
      }
LAB_02493e34:
      iVar13 = (int)unaff_x19[0x5b];
      if (iVar13 == 1) {
        lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar27 = *unaff_x29;
        }
        unaff_x28 = (long *)StringLiteral_302;
        lVar42 = *(long *)(lVar27 + 0xb8);
        lVar27 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar27 + 0x132) & 1) == 0) {
          lVar27 = FUN_00d5941c(lVar27);
        }
        lVar27 = *(long *)(*(long *)(lVar27 + 0xc0) + 8);
        if ((*(byte *)(lVar27 + 0x132) & 1) == 0) {
          lVar27 = FUN_00d5941c();
        }
        piVar21 = (int *)thunk_FUN_00d32ed4(lVar42 + 0x11f0,*(long *)(lVar27 + 0x80) + 0xa0);
        if (*piVar21 == 0) goto LAB_02495f00;
        lVar27 = *unaff_x29;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar27 = *unaff_x29;
        }
        FUN_013b8de4(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x00000880,
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
      lVar27 = unaff_x19[0x5c];
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
      }
      uVar20 = FUN_02681b9c(lVar27,0,0);
      if ((uVar20 & 1) != 0) {
        plVar43 = (long *)unaff_x19[0x5c];
        uVar19 = (**(code **)(*unaff_x19 + 0x548))();
        if (plVar43 == (long *)0x0) goto LAB_0249920c;
        (**(code **)(*plVar43 + 0x558))(plVar43,uVar19,*(undefined8 *)(*plVar43 + 0x560));
        lVar27 = unaff_x19[0x5c];
        if (lVar27 == 0) goto LAB_0249920c;
        *(int *)(lVar27 + 0x3f8) = (int)unaff_x19[0x7f];
        FUN_024c910c(lVar27,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
        plVar43 = (long *)unaff_x19[0x5c];
        if (plVar43 == (long *)0x0) goto LAB_0249920c;
        (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
        *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      }
LAB_02494484:
      unaff_x26 = (undefined8 *)&stack0x00000880;
      unaff_s12 = 1.0;
      uVar19 = CONCAT44(3,*in_stack_00000148);
      goto LAB_02492630;
    }
LAB_02494950:
    if (uVar17 != 0xad) {
      if (uVar17 != 9) {
        if (*(int *)((long)unaff_x19 + 0x63c) == 1) {
          (**(code **)(*unaff_x19 + 0x8c8))();
        }
        else if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
          (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000128,fVar66);
        }
        uVar2 = *in_stack_00000148;
        if (((uint)fStack0000000000000058 & 1) != 0) {
          *(uint *)(in_stack_00000070 + 0x1f0) = uVar2;
        }
        *(uint *)((long)unaff_x19 + 0x49c) = uVar2;
        *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
        if ((unaff_x19[0x6c] != 0) && (lVar27 = *(long *)(unaff_x19[0x6c] + 0x50), lVar27 != 0)) {
          if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar27 + 0x18)) {
            lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
            fStack0000000000000058 = 0.0;
            *(float *)(lVar27 + 0x60) = fVar52;
            *(float *)(lVar27 + 100) = fVar53;
            goto LAB_02494abc;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      lVar27 = *in_stack_00000150;
      if ((lVar27 == 0) || (lVar42 = *(long *)(lVar27 + 0x38), lVar42 == 0)) goto LAB_0249920c;
      uVar2 = *in_stack_00000148;
      if (uVar2 < *(uint *)(lVar42 + 0x18)) {
        *(undefined1 *)(lVar42 + (int)uVar2 * unaff_x27 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x49c) = uVar2;
        lVar42 = *(long *)(lVar27 + 0x50);
        if (lVar42 != 0) {
          if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar42 + 0x18)) {
            lVar42 = lVar42 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
            *(int *)(lVar42 + 0x2c) = *(int *)(lVar42 + 0x2c) + 1;
            goto LAB_024949c4;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    }
    if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(undefined1 *)(lVar27 + (int)*in_stack_00000148 * unaff_x27 + 0x194) = 0;
  }
  else {
    if (((uVar17 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
      fVar60 = (float)param_3;
      fVar58 = 0.0;
      if ((0.0 < fVar60) && (fVar58 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
        fVar58 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      }
      param_3 = (ulong)(uint)fStack00000000000000a4;
      if (fStack00000000000000a4 <
          (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - fVar60)) + fVar58)
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
        lVar27 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar20 = FUN_02681b9c(lVar27,0,0);
        if ((uVar20 & 1) != 0) {
          plVar43 = (long *)unaff_x19[0x5c];
          uVar19 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar43 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar43 + 0x558))(plVar43,uVar19,*(undefined8 *)(*plVar43 + 0x560));
          lVar27 = unaff_x19[0x5c];
          if (lVar27 == 0) goto LAB_0249920c;
          *(int *)(lVar27 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar27,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar43 = (long *)unaff_x19[0x5c];
          if (plVar43 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        uVar19 = CONCAT44(3,uVar2);
        goto LAB_02492630;
      }
    }
    if ((((uVar17 - 0x2007 < 0x23) &&
         ((1L << ((ulong)(uVar17 - 0x2007) & 0x3f) & 0x600000001U) != 0)) || (uVar17 - 10 < 2)) ||
       (uVar17 == 0xa0)) {
LAB_024944e4:
      if (((uVar17 != 0xad) && (uVar17 != 0x200b)) && (uVar17 != 0x2060)) {
        lVar27 = *in_stack_00000150;
        if ((lVar27 == 0) || (lVar42 = *(long *)(lVar27 + 0x50), lVar42 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar42 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar42 = lVar42 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        *(int *)(lVar42 + 0x2c) = *(int *)(lVar42 + 0x2c) + 1;
        *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar20 = FUN_016fa418(uVar17,0);
      if ((uVar20 & 1) != 0) goto LAB_024944e4;
    }
    if (uVar17 == 0xa0) {
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x50), lVar27 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_024949c4:
      *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
    }
  }
LAB_02494abc:
  if (((int)unaff_x19[0x5b] == 1) && ((uVar17 == 0x2d || (!bVar7)))) {
    if (unaff_x19[0xca] == 0) goto LAB_0249920c;
    fVar58 = *(float *)(unaff_x19 + 0x3c);
    iVar13 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
    if (unaff_x19[0xca] == 0) goto LAB_0249920c;
    fVar52 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
    lVar27 = unaff_x19[0xc9];
    fVar60 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar60 = 1.0;
    }
    if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_0249920c;
    fVar54 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar66 = *(float *)(lVar27 + 0x2c);
    fVar53 = (float)FUN_026fd668(*(long *)(lVar27 + 0x20),0);
    fVar65 = *_fStack0000000000000098;
    fVar53 = fVar54 * (fVar58 / (float)iVar13) * fVar52 * fVar60 * fVar66 * fVar53;
    fVar58 = *_fStack0000000000000088;
    if ((uVar17 == 10) && (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
      goto LAB_0249920c;
      uVar2 = *(int *)((long)unaff_x19 + 0x48c) - 1;
      if (*(uint *)(lVar27 + 0x18) <= uVar2)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (unaff_x19[0xca] == 0) goto LAB_0249920c;
      fVar60 = *(float *)(lVar27 + (long)(int)uVar2 * (long)iVar16 + 0x60);
      iVar13 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
      if (unaff_x19[0xca] == 0) goto LAB_0249920c;
      fVar54 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
      lVar27 = unaff_x19[0xc9];
      fVar52 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar52 = 1.0;
      }
      if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_0249920c;
      fVar66 = *(float *)((long)unaff_x19 + 0x3fc);
      fVar69 = *(float *)(lVar27 + 0x2c);
      fVar53 = (float)FUN_026fd668(*(long *)(lVar27 + 0x20),0);
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x50), lVar27 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      fVar65 = *(float *)(lVar27 + 0x60);
      fVar58 = *(float *)(lVar27 + 100);
      fVar53 = fVar66 * (fVar60 / (float)iVar13) * fVar54 * fVar52 * fVar69 * fVar53;
    }
    fVar66 = *(float *)(unaff_x19 + 0x9a);
    fVar52 = *(float *)(unaff_x19 + 0x96);
    fVar69 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar60 = 0.0;
    fVar54 = 0.0;
    if ((0.0 < fVar66) && (fVar54 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar54 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar71 = *(float *)(unaff_x19 + 199);
    if ((char)unaff_x19[0x1d] == '\0') {
      if ((unaff_x19[0xc9] == 0) || (lVar27 = *(long *)(unaff_x19[0xc9] + 0x20), lVar27 == 0))
      goto LAB_0249920c;
      FUN_026fd62c(&stack0x00000880,lVar27,0);
      fVar60 = (float)FUN_026fd474(&stack0x000016e0,0);
    }
    puVar9 = System_Threading_Mutex_TypeInfo;
    fVar73 = *(float *)(unaff_x19 + 0x6b);
    fVar58 = (in_stack_00000090 - fVar65) - fVar58;
    bVar11 = true;
    if ((fVar73 <= fVar58) && (bVar11 = false, !NAN(fVar73))) {
      bVar11 = fVar73 == -1.0;
    }
    if (!bVar11) {
      fVar58 = fVar73;
    }
    fVar65 = _DAT_0294c6e8;
    if ((uVar33 & 0x18) == 0) {
      fVar65 = 1.0;
    }
    if (((fVar52 - (fVar69 - fVar66)) + fVar54 < fStack00000000000000a4) &&
       (ABS(fVar71) + fVar53 * fVar60 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
        fVar65 * fVar58)) {
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024d69d4();
      lVar27 = *(long *)(*(long *)puVar9 + 0xb8);
      memcpy(&stack0x00000508,(void *)(lVar27 + 0x788),0x378);
      FUN_013b86dc(lVar27 + 0x11f0,&stack0x00000508,
                   *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
    }
  }
  unaff_d9 = (ulong)(uint)fVar51;
  unaff_s12 = 1.0;
  lVar27 = *in_stack_00000150;
  if ((lVar27 == 0) || (lVar42 = *(long *)(lVar27 + 0x38), lVar42 == 0)) goto LAB_0249920c;
  if (*(uint *)(lVar42 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  uVar2 = *(uint *)(unaff_x19 + 0x94);
  lVar42 = lVar42 + (int)*in_stack_00000148 * unaff_x27;
  *(uint *)(lVar42 + 100) = uVar2;
  *(int *)(lVar42 + 0x68) = (int)unaff_x19[0x95];
  if ((bVar7) || ((uVar17 < 0xe && ((1 << (ulong)(uVar17 & 0x1f) & 0x2c00U) != 0)))) {
    lVar27 = *(long *)(lVar27 + 0x50);
    if (lVar27 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar27 + 0x18) <= uVar2)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (*(int *)(lVar27 + (long)(int)uVar2 * 0x5c + 0x24) == 1) goto LAB_02494e68;
  }
  else {
    lVar27 = *(long *)(lVar27 + 0x50);
    if (lVar27 == 0) goto LAB_0249920c;
LAB_02494e68:
    if (*(uint *)(lVar27 + 0x18) <= uVar2)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(int *)(lVar27 + (long)(int)uVar2 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
  }
  if (uVar17 == 9) {
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar58 = (float)FUN_026fd208(*in_stack_00000138 + 0x50,0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar52 = *(float *)(unaff_x19 + 199);
    fVar60 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000138 + 0x1b9));
    fVar58 = fVar51 * fVar58 * fVar60;
    fVar60 = fVar58 * (float)(int)(fVar52 / fVar58);
    param_3 = (ulong)(uint)fVar60;
    if (fVar60 <= fVar52) {
      fVar60 = fVar52 + fVar58;
    }
LAB_02495058:
    *(float *)(unaff_x19 + 199) = fVar60;
  }
  else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
    if ((char)unaff_x19[0x1d] == '\0') {
      fVar52 = unaff_s12;
      if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
        fVar52 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
      }
      fVar60 = *(float *)(unaff_x19 + 199);
      fVar53 = (float)FUN_026fd474(&stack0x00001770,0);
      if (unaff_x19[0x1f] != 0) {
        fVar58 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
        fVar60 = fVar60 + fVar58 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                   fVar51 * (fVar46 + fVar52 * fVar53) +
                                   in_stack_000000c8 *
                                   (fVar67 + fStack00000000000000cc +
                                             *(float *)(unaff_x19[0x1f] + 0x1ac)));
        *(float *)(unaff_x19 + 199) = fVar60;
        goto joined_r0x02494fac;
      }
      goto LAB_0249920c;
    }
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar60 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (*(float *)((long)unaff_x19 + 0x2a4) +
             fVar51 * fVar46 +
             in_stack_000000c8 *
             (fVar67 + fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
    param_3 = (ulong)(uint)fVar60;
    fVar60 = *(float *)(unaff_x19 + 199) - fVar60;
    *(float *)(unaff_x19 + 199) = fVar60;
    if ((uVar18 != 0) || (uVar17 == 0x200b)) {
      fVar58 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      param_3 = (ulong)(uint)fVar58;
      fVar60 = fVar60 - fVar58;
      goto LAB_02495058;
    }
  }
  else {
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar58 = *(float *)(unaff_x19 + 199);
    fVar60 = fVar58 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                      (*(float *)((long)unaff_x19 + 0x2a4) +
                      (*(float *)(unaff_x19 + 0x55) - fVar62) +
                      in_stack_000000c8 *
                      (fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
    *(float *)(unaff_x19 + 199) = fVar60;
joined_r0x02494fac:
    if ((uVar18 != 0) || (param_3 = (ulong)(uint)fVar58, uVar17 == 0x200b)) {
      fVar58 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      param_3 = (ulong)(uint)fVar58;
      fVar60 = fVar60 + fVar58;
      goto LAB_02495058;
    }
  }
  lVar27 = *in_stack_00000150;
  if ((lVar27 == 0) || (lVar42 = *(long *)(lVar27 + 0x38), lVar42 == 0)) goto LAB_0249920c;
  uVar2 = *in_stack_00000148;
  uVar33 = (uint)*(undefined8 *)(lVar42 + 0x18);
  if (uVar33 <= uVar2) goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(float *)(lVar42 + (int)uVar2 * unaff_x27 + 0x144) = fVar60;
  uVar37 = uVar17;
  if ((int)uVar17 < 0xd) {
    if ((uVar17 - 10 < 2) || (uVar17 == 3)) goto LAB_024950bc;
FUN_02495710:
    if (((bool)(bVar7 & uVar17 == 0x2d)) || ((float)uVar2 == in_stack_00000078._4_4_))
    goto LAB_024950bc;
  }
  else {
    if (1 < uVar17 - 0x2028) {
      if (uVar17 != 0xd) goto FUN_02495710;
      param_3 = 0;
      *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
      if ((float)uVar2 != in_stack_00000078._4_4_) goto LAB_0249572c;
    }
LAB_024950bc:
    if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
      fVar58 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (((fStack000000000000004c < ABS(fVar58)) && (*(char *)((long)unaff_x19 + 700) == '\0')) &&
         (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
        FUN_024d6ca8(fVar58);
        *(float *)((long)unaff_x19 + 0x4bc) = *(float *)((long)unaff_x19 + 0x4bc) - fVar58;
        *(float *)(unaff_x19 + 0x9a) = fVar58 + *(float *)(unaff_x19 + 0x9a);
        puVar9 = System_Threading_Mutex_TypeInfo;
        lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar27 = *(long *)puVar9;
        }
        lVar42 = *(long *)(lVar27 + 0xb8);
        if (*(int *)(lVar42 + 0x7ac) == (int)unaff_x19[0x94]) {
          if (*(int *)(lVar27 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar42 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          FUN_013b8de4(lVar42 + 0x11f0,&stack0x00000880,
                       *(undefined8 *)
                        Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                      );
          lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
          memcpy((void *)(*(long *)(lVar27 + 0xb8) + 0x788),&stack0x00000880,0x378);
          lVar27 = *(long *)(lVar27 + 0xb8);
          *(float *)(lVar27 + 0x7bc) = fVar58 + *(float *)(lVar27 + 0x7bc);
          *(float *)(lVar27 + 0x800) = fVar58 + *(float *)(lVar27 + 0x800);
          memcpy(&stack0x00000190,(void *)(lVar27 + 0x788),0x378);
          FUN_013b86dc(lVar27 + 0x11f0,&stack0x00000190,
                       *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
        }
      }
    }
    fVar52 = *(float *)(unaff_x19 + 0x9a);
    *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
    fVar60 = *(float *)((long)unaff_x19 + 0x4c4) - fVar52;
    fVar58 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar60 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar58 = fVar60;
    }
    *(float *)((long)unaff_x19 + 0x4bc) = fVar58;
    fVar53 = *(float *)(unaff_x19 + 0x98);
    if (in_stack_000017b4 == '\0') {
      in_stack_000017b8 = fVar58;
    }
    if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
       (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
        ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
      in_stack_000017b4 = '\x01';
    }
    lVar27 = *in_stack_00000150;
    if ((lVar27 == 0) || (lVar42 = *(long *)(lVar27 + 0x50), lVar42 == 0)) goto LAB_0249920c;
    uVar2 = *(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar42 + 0x18) <= uVar2)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar31 = lVar42 + (long)(int)uVar2 * 0x5c;
    *(int *)(lVar31 + 0x34) = (int)unaff_x19[0x92];
    iVar13 = (int)unaff_x19[0x92];
    if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
      iVar13 = *(int *)((long)unaff_x19 + 0x494);
    }
    *(int *)((long)unaff_x19 + 0x494) = iVar13;
    *(int *)(lVar31 + 0x38) = iVar13;
    *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
    *(undefined4 *)(lVar31 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
    iVar13 = *(int *)((long)unaff_x19 + 0x494);
    if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
      iVar13 = *(int *)((long)unaff_x19 + 0x49c);
    }
    *(int *)((long)unaff_x19 + 0x49c) = iVar13;
    *(int *)(lVar31 + 0x40) = iVar13;
    *(int *)(lVar31 + 0x24) = (*(int *)(lVar31 + 0x3c) - *(int *)(lVar31 + 0x34)) + 1;
    *(undefined4 *)(lVar31 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
    lVar27 = *(long *)(lVar27 + 0x38);
    if (lVar27 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar27 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    uVar55 = *(undefined4 *)(lVar27 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x27 + 0x11c);
    lVar42 = lVar42 + (long)(int)uVar2 * 0x5c;
    *(float *)(lVar42 + 0x70) = fVar60;
    *(undefined4 *)(lVar42 + 0x6c) = uVar55;
    lVar27 = *in_stack_00000150;
    if ((lVar27 == 0) || (lVar42 = *(long *)(lVar27 + 0x50), lVar42 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar42 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar27 = *(long *)(lVar27 + 0x38);
    if (lVar27 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar27 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    uVar55 = *(undefined4 *)(lVar27 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x27 + 0x128);
    fVar53 = fVar53 - fVar52;
    lVar42 = lVar42 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    *(float *)(lVar42 + 0x78) = fVar53;
    *(undefined4 *)(lVar42 + 0x74) = uVar55;
    lVar27 = *in_stack_00000150;
    if ((lVar27 == 0) || (lVar31 = *(long *)(lVar27 + 0x50), lVar31 == 0)) goto LAB_0249920c;
    lVar35 = (long)(int)*(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar42 = lVar31 + lVar35 * 0x5c;
    *(float *)(lVar42 + 0x44) = *(float *)(lVar42 + 0x74) - fVar51 * in_stack_00000128;
    *(float *)(lVar42 + 0x5c) = fStack00000000000000d4;
    if (*(int *)(lVar42 + 0x24) == 1) {
      *(int *)(lVar31 + lVar35 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
    }
    if ((*in_stack_00000138 == 0) || (lVar42 = *(long *)(lVar27 + 0x38), lVar42 == 0))
    goto LAB_0249920c;
    lVar44 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
    uVar33 = (uint)*(undefined8 *)(lVar42 + 0x18);
    if (uVar33 <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(char *)(lVar42 + lVar44 * unaff_x27 + 0x194) == '\0') &&
       (lVar44 = (long)(int)*(uint *)(unaff_x19 + 0x93), uVar33 <= *(uint *)(unaff_x19 + 0x93)))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar51 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (in_stack_000000c8 *
              (fVar67 + fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)) -
             *(float *)((long)unaff_x19 + 0x2a4));
    fVar58 = -fVar51;
    if ((char)unaff_x19[0x1d] != '\0') {
      fVar58 = fVar51;
    }
    lVar31 = lVar31 + lVar35 * 0x5c;
    *(float *)(lVar31 + 0x58) = *(float *)(lVar42 + lVar44 * unaff_x27 + 0x144) + fVar58;
    fVar58 = *(float *)(unaff_x19 + 0x9a);
    *(float *)(lVar31 + 0x48) = fStack0000000000000050 + (fVar53 - fVar60);
    *(float *)(lVar31 + 0x4c) = fVar53;
    param_3 = (ulong)(uint)(0.0 - fVar58);
    *(float *)(lVar31 + 0x50) = 0.0 - fVar58;
    *(float *)(lVar31 + 0x54) = fVar60;
    unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
    if ((int)uVar17 < 0x2d) {
      if (uVar17 - 10 < 2) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        unaff_x28 = (long *)StringLiteral_302;
        unaff_x26 = (undefined8 *)&stack0x00000880;
        FUN_024d69d4();
        lVar27 = unaff_x19[0x6c];
        *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
        iVar16 = (int)unaff_x19[0x94] + 1;
        *(int *)(unaff_x19 + 0x94) = iVar16;
        *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
        if ((lVar27 != 0) && (*(long *)(lVar27 + 0x50) != 0)) {
          if (*(int *)(*(long *)(lVar27 + 0x50) + 0x18) <= iVar16) {
            FUN_024d6e60();
            lVar27 = unaff_x19[0x6c];
            if (lVar27 == 0) goto LAB_0249920c;
          }
          lVar27 = *(long *)(lVar27 + 0x38);
          if (lVar27 != 0) {
            if (*in_stack_00000148 < *(uint *)(lVar27 + 0x18)) {
              fVar58 = *(float *)(lVar27 + (int)*in_stack_00000148 * unaff_x27 + 0x154);
              if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                fVar51 = 0.0;
                if ((uVar17 == 0x2029) || (uVar17 == 10)) {
                  fVar51 = *(float *)((long)unaff_x19 + 0x2c4);
                }
                uVar24 = 0;
                fVar51 = *(float *)(unaff_x19 + 0x9a) +
                         fVar58 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                         fStack0000000000000054 *
                         (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4)) +
                         in_stack_000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar51);
              }
              else {
                if ((uVar17 == 0x2029) || (fVar51 = 0.0, uVar17 == 10)) {
                  fVar51 = *(float *)((long)unaff_x19 + 0x2c4);
                }
                uVar24 = 1;
                fVar51 = *(float *)(unaff_x19 + 0x9a) +
                         *(float *)(unaff_x19 + 0x57) +
                         in_stack_000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar51);
              }
              *(float *)(unaff_x19 + 0x9a) = fVar51;
              *(undefined1 *)((long)unaff_x19 + 700) = uVar24;
              lVar27 = *unaff_x29;
              if (*(int *)(lVar27 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar27 = *unaff_x29;
              }
              uVar22 = *(undefined8 *)(*(long *)(lVar27 + 0xb8) + 0x15a8);
              *(float *)(unaff_x19 + 0x99) = fVar58;
              param_3 = NEON_rev64(uVar22,4);
              unaff_x19[0x98] = param_3;
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
        }
        goto LAB_0249920c;
      }
      if (uVar17 == 3) {
        if (unaff_x19[0x8e] == 0) goto LAB_0249920c;
        in_stack_00001788 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
        uVar37 = 3;
      }
    }
    else if ((uVar17 - 0x2028 < 2) || (uVar17 == 0x2d))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering;
  }
LAB_0249572c:
  uVar2 = *in_stack_00000148;
  if (uVar33 <= uVar2) goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  if (*(char *)(lVar42 + (int)uVar2 * unaff_x27 + 0x194) != '\0') {
    lVar42 = lVar42 + (int)uVar2 * unaff_x27;
    uVar59 = *(ulong *)(lVar42 + 0x11c);
    uVar20 = *(ulong *)(in_stack_00000070 + 0x230);
    *(ulong *)(in_stack_00000070 + 0x230) =
         uVar59 ^ (uVar59 ^ uVar20) &
                  CONCAT44(-(uint)((float)(uVar20 >> 0x20) < (float)(uVar59 >> 0x20)),
                           -(uint)((float)uVar20 < (float)uVar59));
    uVar20 = *(ulong *)(in_stack_00000070 + 0x238);
    param_3 = *(ulong *)(lVar42 + 0x128);
    *(ulong *)(in_stack_00000070 + 0x238) =
         param_3 ^ (param_3 ^ uVar20) &
                   CONCAT44(-(uint)((float)(param_3 >> 0x20) < (float)(uVar20 >> 0x20)),
                            -(uint)((float)param_3 < (float)uVar20));
  }
  if (((int)unaff_x19[0x5b] == 5) &&
     ((0xd < uVar37 || ((1 << (ulong)(uVar37 & 0x1f) & 0x2c00U) == 0)))) {
    lVar42 = *(long *)(lVar27 + 0x58);
    if (lVar42 == 0) goto LAB_0249920c;
    iVar13 = (int)unaff_x19[0x95] + 1;
    if (*(int *)(lVar42 + 0x18) < iVar13) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147c08((long *)(lVar27 + 0x58),iVar13,1,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
      lVar27 = *in_stack_00000150;
      if (lVar27 == 0) goto LAB_0249920c;
    }
    lVar42 = *(long *)(lVar27 + 0x58);
    if (lVar42 == 0) goto LAB_0249920c;
    uVar33 = *(uint *)(unaff_x19 + 0x95);
    lVar31 = (long)(int)uVar33;
    uVar2 = *(uint *)(lVar42 + 0x18);
    if (uVar2 <= uVar33)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar35 = lVar42 + lVar31 * 0x14;
    fVar51 = *(float *)(lVar35 + 0x30);
    param_3 = (ulong)(uint)fVar51;
    *(undefined4 *)(lVar35 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    fVar58 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar51 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar58 = fVar51;
    }
    *(float *)(lVar35 + 0x30) = fVar58;
    uVar37 = *(uint *)((long)unaff_x19 + 0x48c);
    if (uVar37 == 0 && uVar33 == 0) {
      *(uint *)(lVar42 + lVar31 * 0x14 + 0x20) = uVar37;
    }
    else {
      uVar6 = uVar37 - 1;
      if (0 < (int)uVar37) {
        lVar27 = *(long *)(lVar27 + 0x38);
        if (lVar27 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar27 + 0x18) <= uVar6)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (uVar33 != *(uint *)(lVar27 + (long)(int)uVar6 * (long)iVar16 + 0x68)) {
          if (uVar33 - 1 < uVar2) {
            *(uint *)(lVar42 + 0x20 + (long)(int)(uVar33 - 1) * 0x14 + 4) = uVar6;
            *(uint *)(lVar42 + 0x20 + lVar31 * 0x14) = uVar37;
            goto LAB_024957b0;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
      }
      if ((float)uVar37 == in_stack_00000078._4_4_) {
        *(float *)(lVar42 + lVar31 * 0x14 + 0x24) = in_stack_00000078._4_4_;
      }
    }
  }
LAB_024957b0:
  puVar9 = System_Threading_Mutex_TypeInfo;
  if (((char)unaff_x19[0x5a] != '\0') ||
     ((*(uint *)(unaff_x19 + 0x5b) < 7 &&
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) != 0)))) {
    if ((uVar18 == 0) && (((uVar17 != 0x2d && (uVar17 != 0x200b)) && (uVar17 != 0xad)))) {
      if (*(char *)((long)unaff_x19 + 0x2d2) == '\0') {
LAB_02495868:
        if (((((0x2bfd < uVar17 - 0xac01) && (0x1d < uVar17 - 0xa961)) && (0xfd < uVar17 - 0x1101))
            || (uVar20 = FUN_024e95f0(0), (uVar20 & 1) != 0)) &&
           ((((0xed < uVar17 - 0xff01 && (0x1d < uVar17 - 0xfe31)) && (0x717d < uVar17 - 0x2e81)) &&
            (0x1fd < uVar17 - 0xf901)))) goto LAB_024958f0;
        lVar27 = FUN_024e94b0(0);
        if ((lVar27 == 0) || (*(long *)(lVar27 + 0x10) == 0)) goto LAB_0249920c;
        uVar20 = FUN_0129aa60(*(long *)(lVar27 + 0x10),&stack0x00000880,
                              *(undefined8 *)
                               System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                             );
        if ((int)*in_stack_00000148 < (int)in_stack_00000078._4_4_) {
          lVar27 = FUN_024e94b0(0);
          if (((lVar27 != 0) && (*in_stack_00000150 != 0)) &&
             (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 != 0)) {
            if (*in_stack_00000148 + 1 < *(uint *)(lVar42 + 0x18)) {
              if (*(long *)(lVar27 + 0x18) != 0) {
                in_stack_00000880 =
                     (uint)*(ushort *)
                            (lVar42 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar16 + 0x20);
                uVar59 = FUN_0129aa60(*(long *)(lVar27 + 0x18),&stack0x00000880,
                                      *(undefined8 *)
                                       System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                     );
                if ((uVar20 & 1) != 0) goto LAB_02495adc;
                if ((uVar59 & 1) == 0) goto LAB_02495bc4;
                if ((bStack000000000000005c & 1) != 0) goto joined_r0x02495af4;
                goto LAB_024959d4;
              }
              goto LAB_0249920c;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          goto LAB_0249920c;
        }
        in_stack_00000880 = uVar17;
        if ((uVar20 & 1) == 0) {
LAB_02495bc4:
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_024d69d4();
          bStack000000000000005c = 0;
          goto LAB_02495b70;
        }
LAB_02495adc:
        if (uVar63 != uVar26 || ((bStack000000000000005c ^ 0xff) & 1) != 0) goto LAB_02495b70;
joined_r0x02495af4:
        if (uVar18 != 0) goto LAB_02495af8;
      }
      else {
LAB_024958f0:
        if ((bStack000000000000005c & 1) == 0) {
LAB_024959d4:
          bStack000000000000005c = 0;
          goto LAB_02495b70;
        }
        if ((uVar17 == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) == 0) goto joined_r0x02495af4;
LAB_02495af8:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_024d69d4();
      }
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024d69d4();
      bStack000000000000005c = 1;
    }
    else {
      if (*(char *)((long)unaff_x19 + 0x2d2) == '\x01') goto LAB_024958f0;
      if (((uVar17 - 0x2007 < 0x29) &&
          ((1L << ((ulong)(uVar17 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
         ((uVar17 == 0xa0 || (uVar17 == 0x2060)))) goto LAB_02495868;
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
code_r0x024923a8:
  unaff_x25 = FUN_0176eb1c(&stack0x000017bc,0);
  param_4 = FUN_0176eb1c(&stack0x00001788,0);
  param_1 = (undefined8 *)UnityEngine_Rendering_Universal_DebugValidationMode_var;
  goto code_r0x024923d4;
LAB_02496a50:
  do {
    uVar17 = uVar26 - 1;
    if (*(uint *)(lVar27 + 0x18) <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*in_stack_00000150 == 0) || (lVar31 = *(long *)(*in_stack_00000150 + 0x50), lVar31 == 0))
    goto LAB_0249920c;
    lVar44 = (long)(int)uVar17;
    lVar35 = lVar27 + lVar44 * 0x178;
    uVar2 = *(uint *)(lVar35 + 100);
    if (*(uint *)(lVar31 + 0x18) <= uVar2)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar38 = *(long *)(lVar35 + 0x38);
    uVar4 = *(ushort *)(lVar35 + 0x20);
    lVar36 = (long)(int)uVar2;
    lVar31 = lVar31 + lVar36 * 0x5c;
    uVar37 = *(uint *)(lVar31 + 0x3c);
    iVar14 = *(int *)(lVar31 + 0x28);
    iVar15 = *(int *)(lVar31 + 0x2c);
    uVar6 = *(uint *)(lVar31 + 0x40);
    lVar35 = (long)(int)uVar6;
    uVar33 = *(uint *)(lVar31 + 0x68);
    fVar71 = *(float *)(lVar31 + 0x5c);
    fVar75 = *(float *)(lVar31 + 0x60);
    iVar3 = *(int *)(lVar31 + 0x20);
    fVar62 = *(float *)(lVar31 + 0x4c);
    fVar65 = *(float *)(lVar31 + 0x54);
    fVar53 = *(float *)(lVar31 + 0x58);
    fVar69 = *(float *)(lVar31 + 0x6c);
    fVar66 = *(float *)(lVar31 + 0x70);
    fVar54 = *(float *)(lVar31 + 0x74);
    fVar67 = *(float *)(lVar31 + 0x78);
    fVar73 = fVar71 + fVar75;
    uVar41 = (uint)uVar4;
    if ((int)uVar33 < 9) {
      switch(uVar33) {
      case 1:
        if ((char)unaff_x19[0x1d] == '\0') {
          in_stack_000000c8 = fVar75 + 0.0;
        }
        else {
          in_stack_000000c8 = 0.0 - fVar53;
        }
        break;
      case 2:
LAB_02496c1c:
        in_stack_000000c8 = (fVar75 + fVar71 * 0.5) - fVar53 * 0.5;
        break;
      default:
        goto switchD_02496b58_caseD_3;
      case 4:
        in_stack_000000c8 = fVar73 - fVar53;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c8 = fVar73;
        }
        break;
      case 8:
        goto switchD_02496b58_caseD_8;
      }
LAB_02496c90:
      uStack00000000000000c0 = 0;
    }
    else if (uVar33 == 0x10) {
switchD_02496b58_caseD_8:
      if (uVar4 < 0xad) {
        if ((uVar41 != 3) && (uVar41 != 10)) goto LAB_02496bac;
      }
      else if ((uVar41 != 0xad) && ((uVar41 != 0x200b && (uVar41 != 0x2060)))) {
LAB_02496bac:
        if (*(uint *)(lVar27 + 0x18) <= uVar37)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar5 = *(undefined2 *)(lVar27 + (long)(int)uVar37 * 0x178 + 0x20);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar20 = FUN_016f9f84(uVar5,0);
        if ((uVar20 & 1) == 0) {
          bVar1 = (int)uVar2 < (int)unaff_x19[0x94];
        }
        else {
          bVar1 = false;
        }
        if ((fVar53 <= fVar71) && (!bVar1 && (uVar33 >> 4 & 1) == 0)) {
          in_stack_000000c8 = fVar75;
          if ((char)unaff_x19[0x1d] != '\0') {
            in_stack_000000c8 = fVar73;
          }
          goto LAB_02496c90;
        }
        if (((uVar26 == 1) || (uVar2 != uVar63)) || (uVar17 == *(uint *)((long)unaff_x19 + 0x31c)))
        {
          in_stack_000000c8 = fVar75;
          if ((char)unaff_x19[0x1d] != '\0') {
            in_stack_000000c8 = fVar73;
          }
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          fStack0000000000000020 = (float)FUN_016fa418(uVar4,0);
          uStack00000000000000c0 = 0;
        }
        else {
          cVar25 = (char)unaff_x19[0x1d];
          fVar73 = -fVar53;
          if (cVar25 != '\0') {
            fVar73 = fVar53;
          }
          if (*(uint *)(lVar27 + 0x18) <= uVar37)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar53 = 1.0;
          iVar15 = (int)*(char *)(lVar27 + (long)(int)uVar37 * 0x178 + 0x194) +
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
              uVar20 = FUN_016fa418(uVar4,0);
              cVar25 = (char)unaff_x19[0x1d];
              if ((uVar20 & 1) != 0) goto LAB_02498bb8;
            }
            iVar15 = (iVar3 - (~(uint)fStack0000000000000020 & 1)) + iVar14;
          }
          fVar53 = ((fVar71 + fVar73) * fVar53) / (float)iVar15;
          if (cVar25 == '\0') {
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
    else if (uVar33 == 0x20) {
      fVar53 = fVar69 + fVar54;
      goto LAB_02496c1c;
    }
switchD_02496b58_caseD_3:
    uVar33 = (uint)*(undefined8 *)(lVar27 + 0x18);
    if (uVar33 <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar31 = lVar27 + lVar44 * 0x178;
    fVar73 = fStack0000000000000098 + in_stack_000000c8;
    fVar53 = (float)_in_stack_00000090 + (float)uStack00000000000000c0;
    fVar71 = (float)((ulong)_in_stack_00000090 >> 0x20) +
             (float)((ulong)uStack00000000000000c0 >> 0x20);
    if (*(char *)(lVar31 + 0x194) == '\0') goto LAB_02497688;
    iVar14 = *(int *)(lVar27 + lVar44 * 0x178 + 0x2c);
    if (iVar14 != 0) goto LAB_02497374;
    fVar52 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar2,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
    case 0:
      lVar29 = lVar27 + lVar44 * 0x178;
      *(undefined4 *)(lVar29 + 0x84) = 0;
      *(undefined4 *)(lVar29 + 0xac) = 0;
      *(undefined4 *)(lVar29 + 0xd4) = 0x3f800000;
      fVar52 = 1.0;
      break;
    case 1:
      fVar67 = *(float *)(lVar27 + lVar44 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
        lVar29 = lVar27 + lVar44 * 0x178;
        fVar54 = (in_stack_000000c8 + fVar67) - *(float *)(in_stack_00000070 + 0x230);
        fVar67 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
        goto LAB_02496df8;
      }
      lVar29 = lVar27 + lVar44 * 0x178;
      fVar54 = fVar54 - fVar69;
      *(float *)(lVar29 + 0x84) = fVar52 + (fVar67 - fVar69) / fVar54;
      *(float *)(lVar29 + 0xac) = fVar52 + (*(float *)(lVar29 + 0x98) - fVar69) / fVar54;
      *(float *)(lVar29 + 0xd4) = fVar52 + (*(float *)(lVar29 + 0xc0) - fVar69) / fVar54;
      fVar52 = fVar52 + (*(float *)(lVar29 + 0xe8) - fVar69) / fVar54;
      break;
    case 2:
      lVar29 = lVar27 + lVar44 * 0x178;
      fVar67 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      fVar54 = (in_stack_000000c8 + *(float *)(lVar29 + 0x70)) -
               *(float *)(in_stack_00000070 + 0x230);
LAB_02496df8:
      *(float *)(lVar29 + 0x84) = fVar52 + fVar54 / fVar67;
      *(float *)(lVar29 + 0xac) =
           fVar52 + ((in_stack_000000c8 + *(float *)(lVar29 + 0x98)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      *(float *)(lVar29 + 0xd4) =
           fVar52 + ((in_stack_000000c8 + *(float *)(lVar29 + 0xc0)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      fVar52 = fVar52 + ((in_stack_000000c8 + *(float *)(lVar29 + 0xe8)) -
                        *(float *)(in_stack_00000070 + 0x230)) /
                        (*(float *)(in_stack_00000070 + 0x238) -
                        *(float *)(in_stack_00000070 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x61]) {
      case 0:
        lVar29 = lVar27 + lVar44 * 0x178;
        *(undefined4 *)(lVar29 + 0x88) = 0;
        *(undefined4 *)(lVar29 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar29 + 0xd8) = 0;
        *(undefined4 *)(lVar29 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar29 = lVar27 + lVar44 * 0x178;
        fVar67 = fVar67 - fVar66;
        fVar54 = fVar52 + (*(float *)(lVar29 + 0x74) - fVar66) / fVar67;
        fVar67 = fVar52 + (*(float *)(lVar29 + 0x9c) - fVar66) / fVar67;
        *(float *)(lVar29 + 0x88) = fVar54;
        *(float *)(lVar29 + 0xb0) = fVar67;
        *(float *)(lVar29 + 0xd8) = fVar54;
        *(float *)(lVar29 + 0x100) = fVar67;
        break;
      case 2:
        lVar29 = lVar27 + lVar44 * 0x178;
        fVar54 = fVar52 + (*(float *)(lVar29 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                          (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
        *(float *)(lVar29 + 0x88) = fVar54;
        fVar67 = *(float *)(unaff_x19 + 0x9b);
        fVar66 = *(float *)(unaff_x19 + 0x9c);
        *(float *)(lVar29 + 0xd8) = fVar54;
        fVar54 = fVar52 + (*(float *)(lVar29 + 0x9c) - fVar67) / (fVar66 - fVar67);
        *(float *)(lVar29 + 0xb0) = fVar54;
        *(float *)(lVar29 + 0x100) = fVar54;
        break;
      case 3:
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
        uVar33 = (uint)*(undefined8 *)(lVar27 + 0x18);
      }
      if (uVar33 <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar27 + lVar44 * 0x178;
      fVar54 = *(float *)(lVar29 + 0x15c);
      fVar67 = (1.0 - (*(float *)(lVar29 + 0x88) + *(float *)(lVar29 + 0xb0)) * fVar54) * 0.5;
      fVar66 = fVar52 + *(float *)(lVar29 + 0x88) * fVar54 + fVar67;
      fVar52 = fVar52 + fVar67 + *(float *)(lVar29 + 0xb0) * fVar54;
      *(float *)(lVar29 + 0x84) = fVar66;
      *(float *)(lVar29 + 0xac) = fVar66;
      *(float *)(lVar29 + 0xd4) = fVar52;
      break;
    default:
      goto switchD_02496d4c_default;
    }
    *(float *)(lVar27 + lVar44 * 0x178 + 0xfc) = fVar52;
switchD_02496d4c_default:
    switch((int)unaff_x19[0x61]) {
    case 0:
      if (uVar33 <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar27 + lVar44 * 0x178;
      *(undefined4 *)(lVar29 + 0x88) = 0;
      *(undefined4 *)(lVar29 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar29 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar29 + 0x100) = 0;
      break;
    case 1:
      if (uVar17 < uVar33) {
        lVar29 = lVar27 + lVar44 * 0x178;
        fVar62 = fVar62 - fVar65;
        fVar52 = (*(float *)(lVar29 + 0x74) - fVar65) / fVar62;
        fVar62 = (*(float *)(lVar29 + 0x9c) - fVar65) / fVar62;
        *(float *)(lVar29 + 0x88) = fVar52;
        goto LAB_02497174;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    case 2:
      if (uVar33 <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar27 + lVar44 * 0x178;
      fVar52 = (*(float *)(lVar29 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar29 + 0x88) = fVar52;
      fVar62 = (*(float *)(lVar29 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_02497174:
      *(float *)(lVar29 + 0xb0) = fVar62;
      *(float *)(lVar29 + 0xd8) = fVar62;
      *(float *)(lVar29 + 0x100) = fVar52;
      break;
    case 3:
      if (uVar33 <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar27 + lVar44 * 0x178;
      fVar62 = *(float *)(lVar29 + 0x15c);
      fVar54 = (1.0 - (*(float *)(lVar29 + 0x84) + *(float *)(lVar29 + 0xd4)) / fVar62) * 0.5;
      fVar52 = *(float *)(lVar29 + 0x84) / fVar62 + fVar54;
      fVar54 = fVar54 + *(float *)(lVar29 + 0xd4) / fVar62;
      *(float *)(lVar29 + 0x88) = fVar52;
      *(float *)(lVar29 + 0xb0) = fVar54;
      *(float *)(lVar29 + 0x100) = fVar52;
      *(float *)(lVar29 + 0xd8) = fVar54;
    }
    if (uVar33 <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar29 = lVar27 + lVar44 * 0x178;
    fVar52 = *(float *)(lVar29 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
    if ((*(char *)(lVar29 + 0x5c) == '\0') && ((*(byte *)(lVar27 + lVar44 * 0x178 + 400) & 1) != 0))
    {
      fVar52 = -fVar52;
    }
    fVar54 = fVar58;
    if (((iVar13 == 2) || (fVar54 = fVar46, iVar13 == 1)) || (fVar54 = fVar58 / fVar51, iVar13 == 0)
       ) {
      fVar52 = fVar54 * fVar52;
    }
    lVar29 = lVar27 + lVar44 * 0x178;
    fVar62 = *(float *)(lVar29 + 0x88);
    fVar67 = *(float *)(lVar29 + 0x84);
    fVar54 = -2.1474836e+09;
    if (fVar67 != INFINITY) {
      fVar54 = (float)(int)fVar67;
    }
    fVar66 = *(float *)(lVar29 + 0xd4);
    fVar69 = *(float *)(lVar29 + 0xd8);
    fVar65 = -2.1474836e+09;
    if (fVar62 != INFINITY) {
      fVar65 = (float)(int)fVar62;
    }
    uVar55 = FUN_024e0374(fVar67 - fVar54,fVar62 - fVar65);
    *(undefined4 *)(lVar29 + 0x84) = uVar55;
    if (*(uint *)(lVar27 + 0x18) <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar69 = fVar69 - fVar65;
    *(float *)(lVar29 + 0x88) = fVar52;
    uVar55 = FUN_024e0374(fVar67 - fVar54,fVar69);
    *(undefined4 *)(lVar27 + lVar44 * 0x178 + 0xac) = uVar55;
    if (*(uint *)(lVar27 + 0x18) <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar66 = fVar66 - fVar54;
    *(float *)(lVar27 + lVar44 * 0x178 + 0xb0) = fVar52;
    fVar54 = (float)FUN_024e0374(fVar66,fVar69);
    *(float *)(lVar29 + 0xd4) = fVar54;
    if (*(uint *)(lVar27 + 0x18) <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar29 + 0xd8) = fVar52;
    uVar55 = FUN_024e0374(fVar66,fVar62 - fVar65);
    *(undefined4 *)(lVar27 + lVar44 * 0x178 + 0xfc) = uVar55;
    uVar33 = (uint)*(undefined8 *)(lVar27 + 0x18);
    if (uVar33 <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar27 + lVar44 * 0x178 + 0x100) = fVar52;
LAB_02497374:
    if (((int)unaff_x19[100] <= (int)uVar17) ||
       (*(int *)((long)unaff_x19 + 0x324) <= iStack00000000000000ac)) goto LAB_02497490;
    if (((int)uVar2 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar33 <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = lVar27 + lVar44 * 0x178;
      *(ulong *)(lVar31 + 0x70) =
           CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar31 + 0x70) >> 0x20),
                    fVar73 + (float)*(undefined8 *)(lVar31 + 0x70));
      *(float *)(lVar31 + 0x78) = fVar71 + *(float *)(lVar31 + 0x78);
      if (*(uint *)(lVar27 + 0x18) <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = lVar27 + lVar44 * 0x178;
      *(ulong *)(lVar31 + 0x98) =
           CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar31 + 0x98) >> 0x20),
                    fVar73 + (float)*(undefined8 *)(lVar31 + 0x98));
      *(float *)(lVar31 + 0xa0) = fVar71 + *(float *)(lVar31 + 0xa0);
      if (*(uint *)(lVar27 + 0x18) <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = lVar27 + lVar44 * 0x178;
      *(ulong *)(lVar31 + 0xc0) =
           CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar31 + 0xc0) >> 0x20),
                    fVar73 + (float)*(undefined8 *)(lVar31 + 0xc0));
      *(float *)(lVar31 + 200) = fVar71 + *(float *)(lVar31 + 200);
      if (*(uint *)(lVar27 + 0x18) <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = lVar27 + lVar44 * 0x178;
      *(ulong *)(lVar31 + 0xe8) =
           CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar31 + 0xe8) >> 0x20),
                    fVar73 + (float)*(undefined8 *)(lVar31 + 0xe8));
      *(float *)(lVar31 + 0xf0) = fVar71 + *(float *)(lVar31 + 0xf0);
      if (iVar14 == 0) goto LAB_02497668;
LAB_02497598:
      if (iVar14 == 1) {
        pcVar32 = *(code **)(*unaff_x19 + 0x8f8);
        goto LAB_02497674;
      }
    }
    else {
      if (((int)uVar2 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
        if (uVar33 <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(uint *)(lVar27 + lVar44 * 0x178 + 0x68) != uStack000000000000002c) goto LAB_02497490;
        lVar31 = lVar27 + lVar44 * 0x178;
        *(ulong *)(lVar31 + 0x70) =
             CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar31 + 0x70) >> 0x20),
                      fVar73 + (float)*(undefined8 *)(lVar31 + 0x70));
        *(float *)(lVar31 + 0x78) = fVar71 + *(float *)(lVar31 + 0x78);
        if (*(uint *)(lVar27 + 0x18) <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar31 = lVar27 + lVar44 * 0x178;
        *(ulong *)(lVar31 + 0x98) =
             CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar31 + 0x98) >> 0x20),
                      fVar73 + (float)*(undefined8 *)(lVar31 + 0x98));
        *(float *)(lVar31 + 0xa0) = fVar71 + *(float *)(lVar31 + 0xa0);
        if (*(uint *)(lVar27 + 0x18) <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar31 = lVar27 + lVar44 * 0x178;
        *(ulong *)(lVar31 + 0xc0) =
             CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar31 + 0xc0) >> 0x20),
                      fVar73 + (float)*(undefined8 *)(lVar31 + 0xc0));
        *(float *)(lVar31 + 200) = fVar71 + *(float *)(lVar31 + 200);
        if (*(uint *)(lVar27 + 0x18) <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar31 = lVar27 + lVar44 * 0x178;
        *(ulong *)(lVar31 + 0xe8) =
             CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar31 + 0xe8) >> 0x20),
                      fVar73 + (float)*(undefined8 *)(lVar31 + 0xe8));
        *(float *)(lVar31 + 0xf0) = fVar71 + *(float *)(lVar31 + 0xf0);
      }
      else {
LAB_02497490:
        if (uVar33 <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        puVar9 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        lVar29 = lVar27 + lVar44 * 0x178;
        uVar55 = *(undefined4 *)
                  (*(undefined8 **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8) + 1);
        *(undefined8 *)(lVar29 + 0x70) =
             **(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        *(undefined4 *)(lVar29 + 0x78) = uVar55;
        if (*(uint *)(lVar27 + 0x18) <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar27 + lVar44 * 0x178;
        uVar55 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar29 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar29 + 0xa0) = uVar55;
        if (*(uint *)(lVar27 + 0x18) <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar27 + lVar44 * 0x178;
        uVar55 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar29 + 0xc0) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar29 + 200) = uVar55;
        if (*(uint *)(lVar27 + 0x18) <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar27 + lVar44 * 0x178;
        uVar55 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar29 + 0xe8) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar29 + 0xf0) = uVar55;
        if (*(uint *)(lVar27 + 0x18) <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(undefined1 *)(lVar31 + 0x194) = 0;
      }
      if (iVar14 != 0) goto LAB_02497598;
LAB_02497668:
      pcVar32 = *(code **)(*unaff_x19 + 0x8d8);
LAB_02497674:
      (*pcVar32)();
    }
LAB_02497688:
    if ((*in_stack_00000150 == 0) || (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar31 + 0x18) <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar31 = lVar31 + lVar44 * 0x178;
    uVar19 = *(undefined8 *)(lVar31 + 0x11c);
    *(undefined8 *)(lVar31 + 0x11c) =
         CONCAT44(fVar53 + (float)((ulong)uVar19 >> 0x20),fVar73 + (float)uVar19);
    *(float *)(lVar31 + 0x124) = fVar71 + *(float *)(lVar31 + 0x124);
    if ((*in_stack_00000150 == 0) || (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar31 + 0x18) <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar31 = lVar31 + lVar44 * 0x178;
    *(ulong *)(lVar31 + 0x110) =
         CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar31 + 0x110) >> 0x20),
                  fVar73 + (float)*(undefined8 *)(lVar31 + 0x110));
    *(float *)(lVar31 + 0x118) = fVar71 + *(float *)(lVar31 + 0x118);
    if ((*in_stack_00000150 == 0) || (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar31 + 0x18) <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar31 = lVar31 + lVar44 * 0x178;
    *(ulong *)(lVar31 + 0x128) =
         CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar31 + 0x128) >> 0x20),
                  fVar73 + (float)*(undefined8 *)(lVar31 + 0x128));
    *(float *)(lVar31 + 0x130) = fVar71 + *(float *)(lVar31 + 0x130);
    if ((*in_stack_00000150 == 0) || (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar31 + 0x18) <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar31 = lVar31 + lVar44 * 0x178;
    *(float *)(lVar31 + 0x134) = fVar73 + *(float *)(lVar31 + 0x134);
    *(ulong *)(lVar31 + 0x138) =
         CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar31 + 0x138) >> 0x20),
                  fVar53 + (float)*(undefined8 *)(lVar31 + 0x138));
    lVar31 = *in_stack_00000150;
    if ((lVar31 == 0) || (lVar29 = *(long *)(lVar31 + 0x38), lVar29 == 0)) goto LAB_0249920c;
    uVar33 = *(uint *)(lVar29 + 0x18);
    if (uVar33 <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar39 = lVar29 + lVar44 * 0x178;
    uVar59 = CONCAT44(fVar73 + (float)((ulong)*(undefined8 *)(lVar39 + 0x140) >> 0x20),
                      fVar73 + (float)*(undefined8 *)(lVar39 + 0x140));
    fVar54 = fVar53 + *(float *)(lVar39 + 0x150);
    uVar61 = (ulong)(uint)fVar54;
    uVar64 = CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar39 + 0x148) >> 0x20),
                      fVar53 + (float)*(undefined8 *)(lVar39 + 0x148));
    *(ulong *)(lVar39 + 0x140) = uVar59;
    *(ulong *)(lVar39 + 0x148) = uVar64;
    *(float *)(lVar39 + 0x150) = fVar54;
    if (uVar2 == uVar63) {
      uVar63 = *in_stack_00000148 - 1;
      if (uVar17 == uVar63) goto LAB_0249788c;
    }
    else {
      lVar31 = *(long *)(lVar31 + 0x50);
      if (lVar31 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar31 + 0x18) <= uVar63)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar39 = (long)(int)uVar63;
      lVar40 = lVar31 + lVar39 * 0x5c;
      uVar64 = (ulong)(uint)*(float *)(lVar40 + 0x58);
      fVar54 = fVar53 + *(float *)(lVar40 + 0x54);
      uVar59 = (ulong)(uint)fVar54;
      fVar62 = fVar73 + *(float *)(lVar40 + 0x58);
      uVar61 = (ulong)(uint)fVar62;
      *(ulong *)(lVar40 + 0x4c) =
           CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar40 + 0x4c) >> 0x20),
                    fVar53 + (float)*(undefined8 *)(lVar40 + 0x4c));
      *(float *)(lVar40 + 0x54) = fVar54;
      *(float *)(lVar40 + 0x58) = fVar62;
      if (uVar33 <= *(uint *)(lVar40 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar55 = *(undefined4 *)(lVar29 + (long)(int)*(uint *)(lVar40 + 0x34) * 0x178 + 0x11c);
      lVar31 = lVar31 + lVar39 * 0x5c;
      *(float *)(lVar31 + 0x70) = fVar54;
      *(undefined4 *)(lVar31 + 0x6c) = uVar55;
      lVar31 = *in_stack_00000150;
      if ((lVar31 == 0) || (lVar29 = *(long *)(lVar31 + 0x50), lVar29 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar29 + 0x18) <= uVar63)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = *(long *)(lVar31 + 0x38);
      if (lVar31 == 0) goto LAB_0249920c;
      uVar63 = *(uint *)(lVar29 + lVar39 * 0x5c + 0x40);
      if (*(uint *)(lVar31 + 0x18) <= uVar63)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar29 + lVar39 * 0x5c;
      *(undefined4 *)(lVar29 + 0x74) = *(undefined4 *)(lVar31 + (long)(int)uVar63 * 0x178 + 0x128);
      *(undefined4 *)(lVar29 + 0x78) = *(undefined4 *)(lVar29 + 0x4c);
      uVar63 = *in_stack_00000148 - 1;
LAB_0249788c:
      if (uVar17 == uVar63) {
        lVar31 = *in_stack_00000150;
        if ((lVar31 == 0) || (lVar29 = *(long *)(lVar31 + 0x50), lVar29 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar29 + 0x18) <= uVar2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar39 = lVar29 + lVar36 * 0x5c;
        uVar64 = (ulong)(uint)*(float *)(lVar39 + 0x58);
        uVar59 = CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar39 + 0x4c) >> 0x20),
                          fVar53 + (float)*(undefined8 *)(lVar39 + 0x4c));
        fVar54 = fVar53 + *(float *)(lVar39 + 0x54);
        fVar73 = fVar73 + *(float *)(lVar39 + 0x58);
        uVar61 = (ulong)(uint)fVar73;
        *(ulong *)(lVar39 + 0x4c) = uVar59;
        *(float *)(lVar39 + 0x54) = fVar54;
        *(float *)(lVar39 + 0x58) = fVar73;
        lVar31 = *(long *)(lVar31 + 0x38);
        if (lVar31 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar31 + 0x18) <= *(uint *)(lVar39 + 0x34))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar55 = *(undefined4 *)(lVar31 + (long)(int)*(uint *)(lVar39 + 0x34) * 0x178 + 0x11c);
        lVar29 = lVar29 + lVar36 * 0x5c;
        *(float *)(lVar29 + 0x70) = fVar54;
        *(undefined4 *)(lVar29 + 0x6c) = uVar55;
        lVar31 = *in_stack_00000150;
        if ((lVar31 == 0) || (lVar29 = *(long *)(lVar31 + 0x50), lVar29 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar29 + 0x18) <= uVar2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar31 = *(long *)(lVar31 + 0x38);
        if (lVar31 == 0) goto LAB_0249920c;
        uVar63 = *(uint *)(lVar29 + lVar36 * 0x5c + 0x40);
        if (*(uint *)(lVar31 + 0x18) <= uVar63)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar29 + lVar36 * 0x5c;
        *(undefined4 *)(lVar29 + 0x74) = *(undefined4 *)(lVar31 + (long)(int)uVar63 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar29 + 0x78) = *(undefined4 *)(lVar29 + 0x4c);
      }
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar20 = FUN_016f9468(uVar41,0);
    if (((((uVar20 & 1) == 0) && (1 < uVar41 - 0x2010)) && (uVar41 != 0xad)) && (uVar41 != 0x2d)) {
      if (bVar7) {
        if (((uVar26 != 1) && ((int)uVar17 < (int)(*(uint *)(lVar27 + 0x18) - 1))) &&
           (((int)uVar17 < (int)*in_stack_00000148 && ((uVar41 == 0x2019 || (uVar41 == 0x27)))))) {
          if (*(uint *)(lVar27 + 0x18) <= uVar26 - 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar5 = *(undefined2 *)(lVar27 + lVar42 + -0x438);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar20 = FUN_016f9468(uVar5,0);
          if ((uVar20 & 1) != 0) {
            if (*(uint *)(lVar27 + 0x18) <= uVar26)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar5 = *(undefined2 *)(lVar27 + lVar42 + -0x148);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar20 = FUN_016f9468(uVar5,0);
            if ((uVar20 & 1) != 0) goto LAB_02497aa4;
          }
        }
      }
      else {
        if (uVar26 != 1) {
LAB_024985a0:
          bVar7 = false;
          goto LAB_02497aac;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar20 = FUN_016f93a0(uVar41,0);
        if ((uVar20 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar20 = FUN_016f68bc(uVar41,0);
          if (((uVar41 != 0x200b) && ((uVar20 & 1) == 0)) && (*in_stack_00000148 != 1))
          goto LAB_024985a0;
        }
      }
      if (uVar17 == *in_stack_00000148 - 1) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar20 = FUN_016f9468(uVar41,0);
        iVar14 = iVar45;
        if ((uVar20 & 1) == 0) goto LAB_02497de0;
      }
      else {
LAB_02497de0:
        iVar14 = uVar26 - 2;
      }
      lVar31 = *in_stack_00000150;
      if (lVar31 == 0) goto LAB_0249920c;
      lVar29 = *(long *)(lVar31 + 0x40);
      if (lVar29 == 0) goto LAB_0249920c;
      uVar63 = *(uint *)(lVar31 + 0x24);
      iVar15 = *(int *)(lVar29 + 0x18);
      if (iVar15 < (int)(uVar63 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar31 + 0x40),iVar15 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar31 = *in_stack_00000150;
        if (lVar31 == 0) goto LAB_0249920c;
      }
      lVar29 = *(long *)(lVar31 + 0x40);
      if (lVar29 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar29 + 0x18) <= uVar63)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar29 + (long)(int)uVar63 * 0x18;
      *(uint *)(lVar29 + 0x28) = uVar18;
      *(int *)(lVar29 + 0x2c) = iVar14;
      *(uint *)(lVar29 + 0x30) = (iVar14 - uVar18) + 1;
      *(long **)(lVar29 + 0x20) = unaff_x19;
      lVar29 = *(long *)(lVar31 + 0x50);
      *(int *)(lVar31 + 0x24) = *(int *)(lVar31 + 0x24) + 1;
      if (lVar29 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar29 + 0x18) <= uVar2)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar29 + lVar36 * 0x5c;
      bVar7 = false;
      iStack00000000000000ac = iStack00000000000000ac + 1;
      *(int *)(lVar29 + 0x30) = *(int *)(lVar29 + 0x30) + 1;
    }
    else {
      if (!bVar7) {
        uVar18 = uVar17;
      }
      if (uVar17 == *in_stack_00000148 - 1) {
        lVar31 = *in_stack_00000150;
        if (lVar31 == 0) goto LAB_0249920c;
        lVar29 = *(long *)(lVar31 + 0x40);
        if (lVar29 == 0) goto LAB_0249920c;
        uVar63 = *(uint *)(lVar31 + 0x24);
        iVar14 = *(int *)(lVar29 + 0x18);
        if (iVar14 < (int)(uVar63 + 1)) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147b84((long *)(lVar31 + 0x40),iVar14 + 1,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
          lVar31 = *in_stack_00000150;
          if (lVar31 == 0) goto LAB_0249920c;
        }
        lVar29 = *(long *)(lVar31 + 0x40);
        if (lVar29 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar29 + 0x18) <= uVar63)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar29 + (long)(int)uVar63 * 0x18;
        *(uint *)(lVar29 + 0x28) = uVar18;
        *(uint *)(lVar29 + 0x2c) = uVar17;
        *(long **)(lVar29 + 0x20) = unaff_x19;
        *(uint *)(lVar29 + 0x30) = uVar26 - uVar18;
        lVar29 = *(long *)(lVar31 + 0x50);
        *(int *)(lVar31 + 0x24) = *(int *)(lVar31 + 0x24) + 1;
        if (lVar29 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar29 + 0x18) <= uVar2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar29 + lVar36 * 0x5c;
        iStack00000000000000ac = iStack00000000000000ac + 1;
        *(int *)(lVar29 + 0x30) = *(int *)(lVar29 + 0x30) + 1;
      }
LAB_02497aa4:
      bVar7 = true;
    }
LAB_02497aac:
    if ((*in_stack_00000150 == 0) || (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 == 0))
    goto LAB_0249920c;
    uVar63 = *(uint *)(lVar31 + 0x18);
    if (uVar63 <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar31 + lVar44 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar11) {
LAB_02497adc:
        if (uVar63 <= uVar26 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = *unaff_x19;
        uVar63 = *(uint *)(lVar31 + lVar42 + -0x330);
        uVar55 = *(undefined4 *)(lVar31 + lVar42 + -0x2f8);
LAB_0249805c:
        pcVar32 = *(code **)(lVar36 + 0x908);
LAB_02498064:
        uVar64 = (ulong)uVar63;
        uVar59 = (ulong)(uint)fStack0000000000000050;
        uVar61 = (ulong)(uint)fStack0000000000000054;
        (*pcVar32)(fStack0000000000000058,uVar59,uVar61,uVar64,fStack00000000000000d0,0,
                   _bStack000000000000005c,uVar55);
        puVar9 = System_Threading_Mutex_TypeInfo;
        lVar31 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar31 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar31 = *(long *)puVar9;
        }
LAB_024980b4:
        bVar11 = false;
        fVar60 = 0.0;
        fStack00000000000000d0 = *(float *)(*(long *)(lVar31 + 0xb8) + 0x15a8);
        fStack00000000000000cc = 0.0;
      }
      else {
LAB_02497fc4:
        bVar11 = false;
      }
    }
    else {
      lVar31 = lVar31 + lVar44 * 0x178;
      iVar14 = *(int *)(lVar31 + 0x68);
      *(int *)(lVar31 + 0x16c) = iVar16;
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
      uVar20 = FUN_016f68bc(uVar41,0);
      if ((uVar41 != 0x200b) && ((uVar20 & 1) == 0)) {
        lVar31 = *in_stack_00000150;
        if ((lVar31 == 0) || (lVar36 = *(long *)(lVar31 + 0x38), lVar36 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar36 + 0x18) <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar54 = *(float *)(lVar36 + lVar44 * 0x178 + 0x160);
        if (fVar60 <= fVar54) {
          fVar60 = fVar54;
        }
        if (fStack00000000000000cc <= ABS(fVar52)) {
          fStack00000000000000cc = ABS(fVar52);
        }
        if ((float)iVar14 != fStack000000000000004c) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar31 = *in_stack_00000150;
            if (lVar31 == 0) goto LAB_0249920c;
            lVar36 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          else {
            lVar36 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          fStack00000000000000d0 = *(float *)(lVar36 + 0x15a8);
        }
        lVar31 = *(long *)(lVar31 + 0x38);
        if (lVar31 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar31 + 0x18) <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0x1e] == 0) goto LAB_0249920c;
        fVar62 = *(float *)(lVar31 + lVar44 * 0x178 + 0x14c);
        fVar54 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
        fVar62 = fVar62 + fVar60 * fVar54;
        if (fVar62 <= fStack00000000000000d0) {
          fStack00000000000000d0 = fVar62;
        }
        uVar59 = (ulong)(uint)fStack00000000000000d0;
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
          uVar20 = FUN_016fa418(uVar41,0);
          if ((uVar20 & 1) != 0) goto LAB_02497fc4;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar31 + 0x18) <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar31 = lVar31 + lVar44 * 0x178;
        _bStack000000000000005c = *(float *)(lVar31 + 0x160);
        fStack0000000000000058 = *(float *)(lVar31 + 0x11c);
        bVar11 = fVar60 != 0.0;
        fVar54 = _bStack000000000000005c;
        if (bVar11) {
          fVar54 = fVar60;
        }
        fVar60 = fVar54;
        uStack0000000000000060 = *(uint *)(lVar31 + 0x168);
        fStack0000000000000054 = 0.0;
        fVar54 = fVar52;
        if (bVar11) {
          fVar54 = fStack00000000000000cc;
        }
        uVar59 = (ulong)(uint)fVar54;
        fStack0000000000000050 = fStack00000000000000d0;
        fStack00000000000000cc = fVar54;
      }
      if (*in_stack_00000148 == 1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 != 0)) {
          if (uVar17 < *(uint *)(lVar31 + 0x18)) {
            lVar31 = lVar31 + lVar44 * 0x178;
            lVar36 = *unaff_x19;
            uVar63 = *(uint *)(lVar31 + 0x128);
            uVar55 = *(undefined4 *)(lVar31 + 0x160);
            goto LAB_0249805c;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if ((uVar17 == uVar37) || ((int)uVar6 <= (int)uVar17)) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar20 = FUN_016f68bc(uVar41,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 != 0)) {
          if (uVar41 == 0x200b || (uVar20 & 1) != 0) {
            lVar36 = lVar35;
            if (*(uint *)(lVar31 + 0x18) <= uVar6)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
            lVar36 = lVar44;
            if (*(uint *)(lVar31 + 0x18) <= uVar17)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          lVar31 = lVar31 + lVar36 * 0x178;
          uVar63 = *(uint *)(lVar31 + 0x128);
          uVar55 = *(undefined4 *)(lVar31 + 0x160);
          pcVar32 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_02498064;
        }
        goto LAB_0249920c;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 != 0)) {
          uVar63 = *(uint *)(lVar31 + 0x18);
          goto LAB_02497adc;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar17 < (int)(*in_stack_00000148 - 1)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar31 + 0x18) <= uVar26)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar20 = FUN_024a9e4c(uStack0000000000000060,*(undefined4 *)(lVar31 + lVar42),0);
        if ((uVar20 & 1) == 0) {
          if ((*in_stack_00000150 != 0) &&
             (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 != 0)) {
            if (uVar17 < *(uint *)(lVar31 + 0x18)) {
              lVar31 = lVar31 + lVar44 * 0x178;
              uVar64 = (ulong)*(uint *)(lVar31 + 0x128);
              uVar61 = (ulong)(uint)fStack0000000000000054;
              uVar59 = (ulong)(uint)fStack0000000000000050;
              (**(code **)(*unaff_x19 + 0x908))
                        (fStack0000000000000058,uVar59,uVar61,uVar64,fStack00000000000000d0,0,
                         _bStack000000000000005c,*(undefined4 *)(lVar31 + 0x160));
              puVar9 = System_Threading_Mutex_TypeInfo;
              lVar31 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar31 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar31 = *(long *)puVar9;
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
    if ((*in_stack_00000150 == 0) || (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar31 + 0x18) <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (lVar38 == 0) goto LAB_0249920c;
    uVar63 = *(uint *)(lVar31 + lVar44 * 0x178 + 400);
    fVar54 = (float)FUN_026fd1f0(lVar38 + 0x50,0);
    if ((uVar63 >> 6 & 1) == 0) {
      if (bVar12) {
        if ((*in_stack_00000150 == 0) ||
           (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar31 + 0x18) <= uVar26 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar63 = *(uint *)(lVar31 + lVar42 + -0x330);
        pcVar32 = *(code **)(*unaff_x19 + 0x908);
        fVar53 = fStack0000000000000088 * fVar54 + *(float *)(lVar31 + lVar42 + -0x30c);
LAB_02498648:
        uVar64 = (ulong)uVar63;
        uVar59 = (ulong)(uint)in_stack_00000078._4_4_;
        uVar61 = (ulong)in_stack_00000068._4_4_;
        (*pcVar32)(fStack0000000000000080,uVar59,uVar61,uVar64,fVar53,0,fStack0000000000000088,
                   fStack0000000000000088);
      }
LAB_0249867c:
      bVar12 = false;
    }
    else {
      lVar31 = *in_stack_00000150;
      if ((lVar31 == 0) || (lVar36 = *(long *)(lVar31 + 0x38), lVar36 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar36 + 0x18) <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(int *)(lVar36 + lVar44 * 0x178 + 0x174) = iVar16;
      if ((((int)unaff_x19[100] < (int)uVar17) || ((int)unaff_x19[0x65] < (int)uVar2)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar36 + lVar44 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
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
          uVar20 = FUN_016fa418(uVar41,0);
          if ((uVar20 & 1) != 0) goto LAB_02498228;
          lVar31 = *in_stack_00000150;
          if (lVar31 == 0) goto LAB_0249920c;
        }
        lVar31 = *(long *)(lVar31 + 0x38);
        if (lVar31 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar31 + 0x18) <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar31 = lVar31 + lVar44 * 0x178;
        fStack0000000000000034 = *(float *)(lVar31 + 0x60);
        fStack0000000000000088 = *(float *)(lVar31 + 0x160);
        fStack0000000000000030 = *(float *)(lVar31 + 0x14c);
        uVar59 = (ulong)(uint)fStack0000000000000030;
        fStack0000000000000080 = *(float *)(lVar31 + 0x11c);
        in_stack_00000078._4_4_ = fVar54 * fStack0000000000000088 + fStack0000000000000030;
        in_stack_00000068._4_4_ = 0;
      }
      uVar63 = *in_stack_00000148;
      if (uVar63 == 1) {
LAB_024983ac:
        if ((*in_stack_00000150 != 0) &&
           (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 != 0)) {
          if (uVar17 < *(uint *)(lVar31 + 0x18)) {
            lVar31 = lVar31 + lVar44 * 0x178;
            lVar35 = *unaff_x19;
            uVar63 = *(uint *)(lVar31 + 0x128);
            fVar53 = *(float *)(lVar31 + 0x14c);
LAB_024983d8:
            pcVar32 = *(code **)(lVar35 + 0x908);
FUN_02498644:
            fVar53 = fVar54 * fStack0000000000000088 + fVar53;
            goto LAB_02498648;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if (uVar17 == uVar37) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar20 = FUN_016f68bc(uVar41,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 != 0)) {
          uVar63 = *(uint *)(lVar31 + 0x18);
          if (uVar41 == 0x200b || (uVar20 & 1) != 0) {
            if (uVar63 <= uVar6)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
LAB_02498620:
            lVar35 = lVar44;
            if (uVar63 <= uVar17)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
LAB_02498628:
          lVar31 = lVar31 + lVar35 * 0x178;
          fVar53 = *(float *)(lVar31 + 0x14c);
          uVar63 = *(uint *)(lVar31 + 0x128);
          pcVar32 = *(code **)(*unaff_x19 + 0x908);
          goto FUN_02498644;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar17 < (int)uVar63) {
        lVar31 = *in_stack_00000150;
        if ((lVar31 != 0) && (lVar36 = *(long *)(lVar31 + 0x38), lVar36 != 0)) {
          if (uVar26 < *(uint *)(lVar36 + 0x18)) {
            if (*(float *)(lVar36 + lVar42 + -0x108) == fStack0000000000000034) {
              fVar62 = *(float *)(lVar36 + lVar42 + -0x1c);
              if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar59 = (ulong)(uint)fStack0000000000000030;
              uVar20 = FUN_024aa280(fVar53 + fVar62,uVar59,0);
              if ((uVar20 & 1) != 0) {
                uVar63 = *in_stack_00000148;
                goto 
                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
                ;
              }
              lVar31 = *in_stack_00000150;
              if (lVar31 == 0) goto LAB_0249920c;
            }
            lVar31 = *(long *)(lVar31 + 0x38);
            if (lVar31 != 0) {
              uVar63 = *(uint *)(lVar31 + 0x18);
              if ((int)uVar17 <= (int)uVar6) goto LAB_02498620;
              if (uVar6 < uVar63) goto LAB_02498628;
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
      if ((int)uVar17 < (int)uVar63) {
        iVar14 = FUN_02681c0c(lVar38,0);
        if (*(uint *)(lVar27 + 0x18) <= uVar26)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar31 = *(long *)(lVar27 + lVar42 + -0x130);
        if (lVar31 == 0) goto LAB_0249920c;
        iVar15 = FUN_02681c0c(lVar31,0);
        if (iVar14 != iVar15) goto LAB_024983ac;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 != 0)) {
          if (uVar26 - 2 < *(uint *)(lVar31 + 0x18)) {
            lVar35 = *unaff_x19;
            uVar63 = *(uint *)(lVar31 + lVar42 + -0x330);
            fVar53 = *(float *)(lVar31 + lVar42 + -0x30c);
            goto LAB_024983d8;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      bVar12 = true;
    }
    if ((*in_stack_00000150 == 0) || (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 == 0))
    goto LAB_0249920c;
    uVar63 = (uint)*(undefined8 *)(lVar31 + 0x18);
    if (uVar63 <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar31 + lVar44 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar8) {
        uVar61 = (ulong)uStack00000000000000a0;
        uVar64 = (ulong)(uint)fStack00000000000000a4;
        uVar59 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar59,uVar61,uVar64,fStack00000000000000a8,uVar61);
      }
LAB_024986e8:
      bVar8 = false;
    }
    else {
      if ((((int)unaff_x19[100] < (int)uVar17) || ((int)unaff_x19[0x65] < (int)uVar2)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar31 + lVar44 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
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
          uVar20 = FUN_016fa418(uVar41,0);
          if ((uVar20 & 1) != 0) goto LAB_024986e8;
        }
        puVar9 = System_Threading_Mutex_TypeInfo;
        lVar35 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar35 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar35 = *(long *)puVar9;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 == 0)) goto LAB_0249920c;
        uVar63 = (uint)*(undefined8 *)(lVar31 + 0x18);
        if (uVar63 <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar35 = *(long *)(lVar35 + 0xb8);
        lVar36 = lVar31 + lVar44 * 0x178;
        in_stack_00001798 = *(undefined8 *)(lVar36 + 0x184);
        in_stack_00001790 = *(undefined8 *)(lVar36 + 0x17c);
        fStack00000000000000b0 = *(float *)(lVar35 + 0x1598);
        in_stack_000017a0 = *(float *)(lVar36 + 0x18c);
        fStack00000000000000b4 = *(float *)(lVar35 + 0x159c);
        fStack00000000000000a4 = *(float *)(lVar35 + 0x15a0);
        fStack00000000000000a8 = *(float *)(lVar35 + 0x15a4);
        uStack00000000000000a0 = 0;
      }
      if (uVar63 <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = lVar31 + lVar44 * 0x178;
      fVar65 = *(float *)(lVar31 + 0x188);
      uVar22 = *(undefined8 *)(lVar31 + 0x17c);
      fVar69 = *(float *)(lVar31 + 0x184);
      uVar19 = *(undefined8 *)(lVar31 + 0x184);
      fVar66 = *(float *)(lVar31 + 0x18c);
      fVar53 = *(float *)(lVar31 + 0x11c);
      fVar62 = *(float *)(lVar31 + 0x128);
      fVar67 = *(float *)(lVar31 + 0x148);
      fVar54 = *(float *)(lVar31 + 0x150);
      in_stack_00000158 = uVar22;
      fStack0000000000000160 = fVar69;
      fStack0000000000000164 = fVar65;
      in_stack_00000168 = fVar66;
      in_stack_00000170 = in_stack_00001790;
      in_stack_00000178 = in_stack_00001798;
      in_stack_00000180 = in_stack_000017a0;
      uVar20 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
      lVar31 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
      if ((uVar20 & 1) == 0) {
        if (*(int *)(lVar31 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar31);
        }
        fVar53 = fVar53 - (float)((ulong)in_stack_00001790 >> 0x20);
        if (fVar53 <= fStack00000000000000b0) {
          fStack00000000000000b0 = fVar53;
        }
        fVar54 = fVar54 - in_stack_000017a0;
        uVar59 = (ulong)(uint)fVar54;
        fVar62 = fVar62 + (float)in_stack_00001798;
        uVar61 = (ulong)(uint)fVar62;
        if (fVar54 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar54;
        }
        fVar67 = fVar67 + (float)((ulong)in_stack_00001798 >> 0x20);
        uVar64 = (ulong)(uint)fVar67;
        if (fStack00000000000000a4 <= fVar62) {
          fStack00000000000000a4 = fVar62;
        }
        if (fStack00000000000000a8 <= fVar67) {
          fStack00000000000000a8 = fVar67;
        }
      }
      else {
        if (*(int *)(lVar31 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar31);
        }
        fVar53 = (fVar53 + (fStack00000000000000a4 - (float)in_stack_00001798)) * 0.5;
        uVar64 = (ulong)(uint)fVar53;
        if (fVar54 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar54;
        }
        uVar59 = (ulong)(uint)fStack00000000000000b4;
        uVar61 = (ulong)uStack00000000000000a0;
        if (fStack00000000000000a8 <= fVar67) {
          fStack00000000000000a8 = fVar67;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar59,uVar61,uVar64,fStack00000000000000a8,uVar61);
        fStack00000000000000b4 = fVar54 - fVar66;
        fStack00000000000000a4 = fVar62 + fVar69;
        uStack00000000000000a0 = 0;
        fStack00000000000000a8 = fVar67 + fVar65;
        fStack00000000000000b0 = fVar53;
        in_stack_00001790 = uVar22;
        in_stack_00001798 = uVar19;
        in_stack_000017a0 = fVar66;
      }
      if (((*in_stack_00000148 == 1) || (uVar17 == uVar37)) ||
         (((int)uVar6 <= (int)uVar17 || (!bVar1)))) {
        uVar61 = (ulong)uStack00000000000000a0;
        uVar64 = (ulong)(uint)fStack00000000000000a4;
        uVar59 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar59,uVar61,uVar64,fStack00000000000000a8,uVar61);
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
    }
    uVar17 = *in_stack_00000148;
    iVar45 = iVar45 + 1;
    lVar42 = lVar42 + 0x178;
    bVar1 = (int)uVar26 < (int)uVar17;
    uVar63 = uVar2;
    uVar26 = uVar26 + 1;
  } while (bVar1);
  lVar27 = *in_stack_00000150;
  if (lVar27 != 0) {
    iVar16 = uVar2 + 1;
LAB_02498c58:
    puVar10 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    puVar9 = PTR_DAT_033ed410;
    *(uint *)(lVar27 + 0x18) = uVar17;
    lVar42 = unaff_x19[0xd3];
    *(int *)(lVar27 + 0x2c) = iVar16;
    iVar16 = iStack00000000000000ac;
    if ((int)uVar17 < 1) {
      iVar16 = 1;
    }
    if (iStack00000000000000ac == 0) {
      iVar16 = 1;
    }
    *(int *)(lVar27 + 0x1c) = (int)lVar42;
    *(int *)(lVar27 + 0x24) = iVar16;
    *(int *)(lVar27 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar20 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar20 & 1) == 0)) {
LAB_02496098:
      if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__ + 0xe0) == 0
         ) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar27 = unaff_x19[0xde];
    if (lVar27 != 0) {
      (**(code **)(lVar27 + 0x18))
                (*(undefined8 *)(lVar27 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar27 + 0x28));
    }
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    iVar16 = FUN_02859dc4(unaff_x19[0xe4],0);
    if (iVar16 != 0x19) {
      lVar27 = unaff_x19[0xe4];
      if (lVar27 == 0) goto LAB_0249920c;
      uVar17 = FUN_02859dc4(lVar27,0);
      FUN_02859e00(lVar27,uVar17 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x60), lVar27 == 0))
      goto LAB_0249920c;
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar27 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      FUN_024e8000(lVar27 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar27 = *(long *)(unaff_x19[0x6c] + 0x60), lVar27 != 0)) {
        if (*(int *)(lVar27 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar27 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar27 = *(long *)(unaff_x19[0x6c] + 0x60), lVar27 != 0)) {
            if (*(int *)(lVar27 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar27 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar27 = *(long *)(unaff_x19[0x6c] + 0x60), lVar27 != 0)) {
                if (*(int *)(lVar27 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar27 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar27 = *(long *)(unaff_x19[0x6c] + 0x60), lVar27 != 0)) {
                    if (*(int *)(lVar27 + 0x18) == 0)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar27 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        if (unaff_x19[0xe3] != 0) {
                          FUN_02858f1c(unaff_x19[0xe3],unaff_x19[0x73],0);
                          if (unaff_x19[0xe3] != 0) {
                            uVar19 = FUN_02858bac(unaff_x19[0xe3],0);
                            if (unaff_x19[0xe3] != 0) {
                              uVar17 = FUN_02858a14(unaff_x19[0xe3],0);
                              lVar27 = *in_stack_00000150;
                              if (lVar27 != 0) {
                                lVar31 = 0;
                                lVar42 = 0;
                                do {
                                  uVar20 = lVar42 + 1;
                                  if ((long)*(int *)(lVar27 + 0x34) <= (long)uVar20)
                                  goto LAB_02496098;
                                  lVar27 = *(long *)(lVar27 + 0x60);
                                  if (lVar27 == 0) break;
                                  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  if (*(uint *)(lVar27 + 0x18) <= uVar20)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  FUN_024e7ecc(lVar27 + lVar31 + 0x70,0);
                                  lVar27 = unaff_x19[0xe0];
                                  if (lVar27 == 0) break;
                                  if (*(uint *)(lVar27 + 0x18) <= uVar20)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  uVar22 = *(undefined8 *)(lVar27 + lVar42 * 8 + 0x28);
                                  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar23 = FUN_0268b4e0(uVar22,0,0);
                                  if ((uVar23 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                      if ((*in_stack_00000150 == 0) ||
                                         (lVar27 = *(long *)(*in_stack_00000150 + 0x60), lVar27 == 0
                                         )) break;
                                      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      if (*(uint *)(lVar27 + 0x18) <= uVar20)
                                      goto 
                                      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                      ;
                                      FUN_024e8000(lVar27 + lVar31 + 0x70,1,0);
                                    }
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar27 = *(long *)(lVar27 + lVar42 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = FUN_024f0144(lVar27,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar35 = *(long *)(*in_stack_00000150 + 0x60), lVar35 == 0))
                                    break;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar27 == 0) break;
                                    FUN_0266b9c4(lVar27,*(undefined8 *)(lVar35 + lVar31 + 0x80),0);
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar27 = *(long *)(lVar27 + lVar42 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = FUN_024f0144(lVar27,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar35 = *(long *)(*in_stack_00000150 + 0x60), lVar35 == 0))
                                    break;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar27 == 0) break;
                                    FUN_0266bbc8(lVar27,*(undefined8 *)(lVar35 + lVar31 + 0x98),0);
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar27 = *(long *)(lVar27 + lVar42 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = FUN_024f0144(lVar27,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar35 = *(long *)(*in_stack_00000150 + 0x60), lVar35 == 0))
                                    break;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar27 == 0) break;
                                    FUN_0266bc74(lVar27,*(undefined8 *)(lVar35 + lVar31 + 0xa0),0);
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar27 = *(long *)(lVar27 + lVar42 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = FUN_024f0144(lVar27,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar35 = *(long *)(*in_stack_00000150 + 0x60), lVar35 == 0))
                                    break;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar27 == 0) break;
                                    FUN_0266c1dc(lVar27,*(undefined8 *)(lVar35 + lVar31 + 0xa8),0);
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar27 = *(long *)(lVar27 + lVar42 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (lVar27 = FUN_024f0144(lVar27,0), lVar27 == 0)) break;
                                    FUN_0266ed90(lVar27,0);
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar27 = *(long *)(lVar27 + lVar42 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = FUN_02738ef4(lVar27,0);
                                    lVar35 = unaff_x19[0xe0];
                                    if (lVar35 == 0) break;
                                    if (*(uint *)(lVar35 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar35 = *(long *)(lVar35 + lVar42 * 8 + 0x28);
                                    if ((lVar35 == 0) ||
                                       (uVar22 = FUN_024f0144(lVar35,0), lVar27 == 0)) break;
                                    FUN_02858f1c(lVar27,uVar22,0);
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar27 = *(long *)(lVar27 + lVar42 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (lVar27 = FUN_02738ef4(lVar27,0), lVar27 == 0)) break;
                                    FUN_02858b14(uVar19,uVar59,uVar61,uVar64,lVar27,0);
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar27 = *(long *)(lVar27 + lVar42 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (lVar27 = FUN_02738ef4(lVar27,0), lVar27 == 0)) break;
                                    FUN_02858a50(lVar27,uVar17 & 1,0);
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    plVar43 = *(long **)(lVar27 + lVar42 * 8 + 0x28);
                                    uVar18 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar43 == (long *)0x0) break;
                                    (**(code **)(*plVar43 + 0x2c8))
                                              (plVar43,uVar18 & 1,*(undefined8 *)(*plVar43 + 0x2d0))
                                    ;
                                  }
                                  lVar27 = *in_stack_00000150;
                                  lVar42 = lVar42 + 1;
                                  lVar31 = lVar31 + 0x50;
                                } while (lVar27 != 0);
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


