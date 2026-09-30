/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager$$GetInputAction
ENTRY_POINT: 0248aa2c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 141
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;weak_vector_component_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__GetInputAction
               (undefined1 param_1 [16],ulong param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  bool bVar6;
  bool bVar7;
  double __x;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  int *piVar21;
  ulong uVar22;
  undefined1 uVar23;
  char cVar24;
  uint uVar25;
  undefined4 *puVar26;
  long lVar27;
  long *plVar28;
  float *pfVar29;
  long lVar30;
  code *pcVar31;
  uint uVar32;
  uint uVar33;
  float *pfVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long *unaff_x19;
  long unaff_x21;
  long lVar39;
  long *plVar40;
  uint *unaff_x26;
  long lVar41;
  uint uVar42;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined4 uVar48;
  double dVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined4 uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  ulong unaff_d9;
  float fVar64;
  float fVar65;
  float unaff_s12;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  uint uStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined8 in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  byte bStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  float *in_stack_00000088;
  float fStack0000000000000090;
  undefined4 uStack0000000000000094;
  float fStack0000000000000098;
  float in_stack_000000a0;
  int iStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  undefined8 in_stack_000000b8;
  float fStack00000000000000c4;
  float in_stack_000000c8;
  float fStack00000000000000cc;
  undefined8 in_stack_000000d8;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  uint uStack0000000000000114;
  long lStack0000000000000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000140;
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
  float in_stack_000017b8;
  uint in_stack_000017bc;
  
code_r0x0248aa2c:
  fVar50 = (float)unaff_d9;
  if ((unaff_x19[0x6c] == 0) || (lVar39 = *(long *)(unaff_x19[0x6c] + 0x38), lVar39 == 0))
  goto LAB_02491464;
  uVar11 = *unaff_x26;
  if (*(uint *)(lVar39 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar41 = (long)(int)uVar11;
  cVar24 = *(char *)(lVar39 + lVar41 * unaff_x21 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
  lVar30 = unaff_x19[0x23];
  if ((uint)in_stack_000017a8 == uVar11) {
    in_stack_000017bc = (uint)((ulong)in_stack_000017a8 >> 0x20);
    bVar6 = true;
    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
    if (in_stack_000017bc == 0x2026) {
      lVar20 = unaff_x19[0xc9];
      lVar39 = lVar39 + lVar41 * unaff_x21;
      *(undefined4 *)(lVar39 + 0x2c) = 0;
      *(long *)(lVar39 + 0x30) = lVar20;
      *(long *)(lVar39 + 0x38) = unaff_x19[0xca];
      *(long *)(lVar39 + 0x50) = unaff_x19[0xcb];
      *(int *)(lVar39 + 0x58) = (int)unaff_x19[0xcc];
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      in_stack_000017a8 = CONCAT44(3,uVar11 + 1);
    }
    else if (in_stack_000017bc == 3) {
      if ((*unaff_x27 == 0) || (lVar20 = FUN_024b11ac(*unaff_x27,0), lVar20 == 0))
      goto LAB_02491464;
      in_stack_00000bf8 = 3;
      FUN_01299bc0(lVar20,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
      if (*(uint *)(lVar39 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      bVar6 = true;
      *(ulong *)(lVar39 + lVar41 * unaff_x21 + 0x30) = CONCAT44(in_stack_00000884,in_stack_00000880)
      ;
      uVar11 = *(uint *)((long)unaff_x19 + 0x48c);
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
    }
  }
  else {
    bVar6 = false;
  }
  plVar28 = (long *)System_Threading_Mutex_TypeInfo;
  iVar14 = (int)unaff_x21;
  if (((int)uVar11 < *(int *)((long)unaff_x19 + 0x31c)) && (in_stack_000017bc != 3)) {
    if ((*in_stack_00000150 != 0) && (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 != 0)) {
      if (uVar11 < *(uint *)(lVar39 + 0x18)) {
        lVar39 = lVar39 + (long)(int)uVar11 * (long)iVar14;
        *(undefined1 *)(lVar39 + 0x194) = 0;
        *(undefined2 *)(lVar39 + 0x20) = 0x200b;
        *(undefined4 *)(lVar39 + 100) = 0;
        *in_stack_00000148 = uVar11 + 1;
        uVar11 = in_stack_000017bc;
        goto LAB_0248ab98;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    }
    goto LAB_02491464;
  }
  iVar12 = *(int *)((long)unaff_x19 + 0x63c);
  fVar45 = unaff_s12;
  if (iVar12 == 0) {
    uVar11 = *(uint *)((long)unaff_x19 + 0x254);
    if ((uVar11 >> 4 & 1) == 0) {
      if ((uVar11 >> 3 & 1) == 0) {
        if ((uVar11 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar19 = FUN_016f92d4(in_stack_000017bc,0);
          if ((uVar19 & 1) != 0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar11 = FUN_016f95a8(in_stack_000017bc,0);
            in_stack_000017bc = uVar11 & 0xffff;
            fVar45 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar19 = FUN_016f9218(in_stack_000017bc,0);
        if ((uVar19 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_016f9724(in_stack_000017bc,0);
          goto LAB_0248af70;
        }
      }
    }
    else {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar19 = FUN_016f92d4(in_stack_000017bc,0);
      if ((uVar19 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_016f95a8(in_stack_000017bc,0);
LAB_0248af70:
        in_stack_000017bc = uVar11 & 0xffff;
      }
    }
    iVar12 = *(int *)((long)unaff_x19 + 0x63c);
    if (iVar12 == 0) goto LAB_0248af84;
LAB_0248abc8:
    if (iVar12 == 1) {
      if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar39 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar39 = lVar39 + (int)*in_stack_00000148 * unaff_x21;
      lVar41 = *(long *)(lVar39 + 0x40);
      unaff_x19[0xd2] = lVar41;
      *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar39 + 0x48);
      if ((lVar41 == 0) || (lVar39 = FUN_024ebfa0(lVar41,0), lVar39 == 0)) goto LAB_02491464;
      FUN_0132138c(lVar39,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                   *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
      puVar8 = System_Threading_Mutex_TypeInfo;
      lVar41 = CONCAT44(in_stack_00000884,in_stack_00000880);
      plVar28 = (long *)System_Threading_Mutex_TypeInfo;
      uVar11 = in_stack_000017bc;
      if (lVar41 == 0) goto LAB_0248ab98;
      if (in_stack_000017bc == 0x3c) {
        in_stack_000017bc = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
      }
      else {
        lVar39 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar39 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar39 = *(long *)puVar8;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1b4) = *(undefined4 *)(*(long *)(lVar39 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x1f] == 0) goto LAB_02491464;
      fVar50 = *(float *)(unaff_x19 + 0x3c);
      memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
      iVar12 = FUN_026fd110(&stack0x00001700,0);
      if (*unaff_x27 == 0) goto LAB_02491464;
      memmove(&stack0x00001700,(void *)(*unaff_x27 + 0x50),0x60);
      fVar46 = (float)FUN_026fd120(&stack0x00001700,0);
      fVar53 = in_stack_00000080._4_4_;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar53 = unaff_s12;
      }
      if (unaff_x19[0xd2] == 0) goto LAB_02491464;
      fVar53 = (fVar50 / (float)iVar12) * fVar46 * fVar53;
      iVar12 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
      fVar50 = *(float *)(unaff_x19 + 0x3c);
      if (iVar12 < 1) {
        if (*unaff_x27 == 0) goto LAB_02491464;
        iVar12 = FUN_026fd110(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar46 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
        fVar55 = in_stack_00000080._4_4_;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar55 = unaff_s12;
        }
        if (unaff_x19[0x1f] == 0) goto LAB_02491464;
        fVar47 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
        if (*(long *)(lVar41 + 0x20) == 0) goto LAB_02491464;
        FUN_026fd62c(&stack0x00000880,*(long *)(lVar41 + 0x20),0);
        unaff_x28[0x1cd] = unaff_x28[1];
        unaff_x28[0x1cc] = *unaff_x28;
        fVar56 = (float)FUN_026fd45c(&stack0x000016e0,0);
        if (*(long *)(lVar41 + 0x20) == 0) goto LAB_02491464;
        fVar57 = *(float *)(lVar41 + 0x2c);
        fVar63 = (float)FUN_026fd668(*(long *)(lVar41 + 0x20),0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar58 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar68 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar69 = *(float *)((long)unaff_x19 + 0x3fc);
        fVar66 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
        if (unaff_x19[0x1f] == 0) goto LAB_02491464;
        fVar66 = fVar53 * fVar68 * fVar69 * fVar66;
        fVar55 = (fVar50 / (float)iVar12) * fVar46 * fVar55;
        fVar50 = fVar55 * (fVar47 / fVar56) * fVar57 * fVar63;
        fVar55 = fVar55 / fVar50;
        fVar58 = fVar55 * fVar58;
        fVar53 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
        fVar55 = fVar55 * fVar53;
      }
      else {
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        iVar12 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar46 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (*(long *)(lVar41 + 0x20) == 0) goto LAB_02491464;
        fVar55 = *(float *)(lVar41 + 0x2c);
        fVar47 = in_stack_00000080._4_4_;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar47 = 1.0;
        }
        fVar56 = (float)FUN_026fd668(*(long *)(lVar41 + 0x20),0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar58 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar57 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar63 = *(float *)((long)unaff_x19 + 0x3fc);
        fVar66 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar66 = fVar53 * fVar57 * fVar63 * fVar66;
        fVar50 = (fVar50 / (float)iVar12) * fVar46 * fVar47 * fVar55 * fVar56;
        fVar55 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
      }
      lVar39 = unaff_x19[0x6c];
      unaff_x19[200] = lVar41;
      if ((lVar39 != 0) && (lVar41 = *(long *)(lVar39 + 0x38), lVar41 != 0)) {
        if (*in_stack_00000148 < *(uint *)(lVar41 + 0x18)) {
          lVar41 = lVar41 + (int)*in_stack_00000148 * unaff_x21;
          *(undefined4 *)(lVar41 + 0x2c) = 1;
          *(float *)(lVar41 + 0x160) = fVar50;
          in_stack_00000130._4_4_ = 0.0;
          *(long *)(lVar41 + 0x40) = unaff_x19[0xd2];
          *(long *)(lVar41 + 0x38) = unaff_x19[0x1f];
          *(int *)(lVar41 + 0x58) = (int)unaff_x19[0x23];
          *(int *)(unaff_x19 + 0x23) = (int)lVar30;
          goto LAB_0248b384;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    lVar39 = *in_stack_00000150;
    fVar53 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar53 = fVar50;
    }
    fVar66 = 0.0;
    if (lVar39 == 0) goto LAB_02491464;
    fVar58 = 0.0;
    fVar55 = 0.0;
  }
  else {
    if (iVar12 != 0) goto LAB_0248abc8;
LAB_0248af84:
    if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 == 0))
    goto LAB_02491464;
    uVar25 = *in_stack_00000148;
    uVar13 = *(uint *)(lVar39 + 0x18);
    if (uVar13 <= uVar25)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar30 = *(long *)(lVar39 + (int)uVar25 * unaff_x21 + 0x30);
    unaff_x19[200] = lVar30;
    plVar28 = (long *)System_Threading_Mutex_TypeInfo;
    uVar11 = in_stack_000017bc;
    if (lVar30 == 0) goto LAB_0248ab98;
    lVar41 = lVar39 + (int)uVar25 * unaff_x21;
    lVar30 = *(long *)(lVar41 + 0x38);
    unaff_x19[0x1f] = lVar30;
    unaff_x19[0x22] = *(long *)(lVar41 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar41 + 0x58);
    if (bVar6) {
      lVar41 = unaff_x19[0x8e];
      if (lVar41 == 0) goto LAB_02491464;
      if (*(uint *)(lVar41 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if ((*(int *)(lVar41 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
         (uVar25 == *(uint *)(unaff_x19 + 0x92))) goto LAB_0248b014;
      if (uVar13 <= uVar25 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar30 == 0) goto LAB_02491464;
      fVar53 = *(float *)(lVar39 + (long)(int)(uVar25 - 1) * (long)iVar14 + 0x60);
      iVar12 = FUN_026fd110(lVar30 + 0x50,0);
      lVar39 = *unaff_x27;
    }
    else {
LAB_0248b014:
      if (lVar30 == 0) goto LAB_02491464;
      fVar53 = *(float *)(unaff_x19 + 0x3c);
      iVar12 = FUN_026fd110(lVar30 + 0x50,0);
      lVar39 = unaff_x19[0x1f];
    }
    if (lVar39 == 0) goto LAB_02491464;
    fVar47 = (float)FUN_026fd120(lVar39 + 0x50,0);
    fVar46 = in_stack_00000080._4_4_;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar46 = unaff_s12;
    }
    fVar55 = 0.0;
    fVar58 = 0.0;
    if (!(bool)(bVar6 & in_stack_000017bc == 0x2026)) {
      if (*unaff_x27 == 0) goto LAB_02491464;
      fVar58 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
      if (*unaff_x27 == 0) goto LAB_02491464;
      fVar55 = (float)FUN_026fd180(*unaff_x27 + 0x50,0);
    }
    lVar39 = unaff_x19[200];
    if ((lVar39 == 0) || (*(long *)(lVar39 + 0x20) == 0)) goto LAB_02491464;
    fVar56 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar57 = *(float *)(lVar39 + 0x2c);
    fVar50 = (float)FUN_026fd668(*(long *)(lVar39 + 0x20),0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar63 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar68 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar66 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
    lVar39 = unaff_x19[0x6c];
    if ((lVar39 == 0) || (lVar30 = *(long *)(lVar39 + 0x38), lVar30 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar30 = lVar30 + (int)*in_stack_00000148 * unaff_x21;
    *(undefined4 *)(lVar30 + 0x2c) = 0;
    fVar46 = ((fVar45 * fVar53) / (float)iVar12) * fVar47 * fVar46;
    fVar50 = fVar46 * fVar56 * fVar57 * fVar50;
    *(float *)(lVar30 + 0x160) = fVar50;
    uVar11 = *(uint *)(unaff_x19 + 0x23);
    fVar66 = fVar46 * fVar63 * fVar68 * fVar66;
    if (uVar11 == 0) {
      in_stack_00000130._4_4_ = *(float *)(unaff_x19 + 0xc2);
    }
    else {
      lVar30 = unaff_x19[0xe0];
      if (lVar30 == 0) goto LAB_02491464;
      if (*(uint *)(lVar30 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar30 = *(long *)(lVar30 + (long)(int)uVar11 * 8 + 0x20);
      if (lVar30 == 0) goto LAB_02491464;
      in_stack_00000130._4_4_ = *(float *)(lVar30 + 0x4c);
    }
LAB_0248b384:
    unaff_s12 = 1.0;
    fVar53 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar53 = fVar50;
    }
  }
  lVar39 = *(long *)(lVar39 + 0x38);
  if (lVar39 == 0) goto LAB_02491464;
  if (*(uint *)(lVar39 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar39 = lVar39 + (int)*in_stack_00000148 * unaff_x21;
  *(short *)(lVar39 + 0x20) = (short)in_stack_000017bc;
  *(int *)(lVar39 + 0x60) = (int)unaff_x19[0x3c];
  *(undefined4 *)(lVar39 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
  if ((unaff_x19[0x6c] == 0) || (lVar39 = *(long *)(unaff_x19[0x6c] + 0x38), lVar39 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar39 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(int *)(lVar39 + (int)*in_stack_00000148 * unaff_x21 + 0x168) = (int)unaff_x19[0x2a];
  if ((unaff_x19[0x6c] == 0) || (lVar39 = *(long *)(unaff_x19[0x6c] + 0x38), lVar39 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar39 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined4 *)(lVar39 + (int)*in_stack_00000148 * unaff_x21 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x154);
  if ((unaff_x19[0x6c] == 0) || (lVar39 = *(long *)(unaff_x19[0x6c] + 0x38), lVar39 == 0))
  goto LAB_02491464;
  uVar11 = *in_stack_00000148;
  FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
               *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
  if (*(uint *)(lVar39 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  uVar18 = unaff_x28[1];
  uVar17 = *unaff_x28;
  lVar39 = lVar39 + (int)uVar11 * unaff_x21;
  *(undefined4 *)(lVar39 + 0x18c) = in_stack_00000890;
  *(undefined8 *)(lVar39 + 0x184) = uVar18;
  *(undefined8 *)(lVar39 + 0x17c) = uVar17;
  if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar39 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined4 *)(lVar39 + (int)*in_stack_00000148 * unaff_x21 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x254);
  if ((unaff_x19[200] == 0) || (lVar39 = *(long *)(unaff_x19[200] + 0x20), lVar39 == 0))
  goto LAB_02491464;
  FUN_026fd62c(&stack0x00000bf8,lVar39,0);
  unaff_x28[0x1df] = in_stack_00000c00;
  unaff_x28[0x1de] = CONCAT44(in_stack_00000bfc,in_stack_00000bf8);
  if ((int)in_stack_000017bc < 0x10000) {
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_016f68bc(in_stack_000017bc,0);
    uVar13 = uVar13 & 1;
  }
  else {
    uVar13 = 0;
  }
  fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
  *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
    fVar56 = 0.0;
    fVar47 = 0.0;
    fVar46 = 0.0;
  }
  else {
    if (unaff_x19[200] == 0) goto LAB_02491464;
    uVar25 = *in_stack_00000148;
    uVar11 = *(uint *)(unaff_x19[200] + 0x28);
    if ((int)uVar25 < (int)in_stack_00000078._4_4_) {
      if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar39 + 0x18) <= uVar25 + 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar39 = *(long *)(lVar39 + (long)(int)(uVar25 + 1) * (long)iVar14 + 0x30);
      if ((((lVar39 == 0) || (*unaff_x27 == 0)) ||
          (lVar30 = *(long *)(*unaff_x27 + 0x128), lVar30 == 0)) ||
         (lVar30 = *(long *)(lVar30 + 0x18), lVar30 == 0)) goto LAB_02491464;
      in_stack_00000880 = uVar11 | *(int *)(lVar39 + 0x28) << 0x10;
      uVar19 = FUN_0129eff4(lVar30,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      uVar48 = 0;
      if ((uVar19 & 1) == 0) {
        fVar56 = 0.0;
        fVar47 = 0.0;
        fVar46 = 0.0;
      }
      else {
        if (in_stack_000016d8 == 0) goto LAB_02491464;
        fVar46 = *(float *)(in_stack_000016d8 + 0x14);
        fVar47 = *(float *)(in_stack_000016d8 + 0x18);
        fVar56 = *(float *)(in_stack_000016d8 + 0x1c);
        uVar48 = *(undefined4 *)(in_stack_000016d8 + 0x20);
        if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
          fStack00000000000000cc = 0.0;
        }
      }
      uVar25 = *in_stack_00000148;
    }
    else {
      uVar48 = 0;
      fVar56 = 0.0;
      fVar47 = 0.0;
      fVar46 = 0.0;
    }
    if (0 < (int)uVar25) {
      if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar39 + 0x18) <= (uint)((long)(int)uVar25 + -1))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar39 = *(long *)(lVar39 + ((long)(int)uVar25 + -1) * unaff_x21 + 0x30);
      if (((lVar39 == 0) || (*unaff_x27 == 0)) ||
         ((lVar30 = *(long *)(*unaff_x27 + 0x128), lVar30 == 0 ||
          (lVar30 = *(long *)(lVar30 + 0x18), lVar30 == 0)))) goto LAB_02491464;
      in_stack_00000880 = *(uint *)(lVar39 + 0x28) | uVar11 << 0x10;
      uVar19 = FUN_0129eff4(lVar30,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      if ((uVar19 & 1) != 0) {
        if ((in_stack_000016d8 == 0) ||
           (fVar46 = (float)FUN_024bb1bc(fVar46,fVar47,fVar56,uVar48,
                                         *(undefined4 *)(in_stack_000016d8 + 0x28),
                                         *(undefined4 *)(in_stack_000016d8 + 0x2c),
                                         *(undefined4 *)(in_stack_000016d8 + 0x30),
                                         *(undefined4 *)(in_stack_000016d8 + 0x34),0),
           in_stack_000016d8 == 0)) goto LAB_02491464;
        if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
          fStack00000000000000cc = 0.0;
        }
      }
    }
    *(float *)((long)unaff_x19 + 0x2f4) = fVar56;
  }
  if ((char)unaff_x19[0x1d] != '\0') {
    fVar63 = *(float *)(unaff_x19 + 199);
    fVar57 = (float)FUN_026fd474(&stack0x00001770,0);
    fVar63 = fVar63 - fVar53 * fVar57 * (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc));
    *(float *)(unaff_x19 + 199) = fVar63;
    if ((uVar13 != 0) || (in_stack_000017bc == 0x200b)) {
      *(float *)(unaff_x19 + 199) = fVar63 - in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac)
      ;
    }
  }
  fVar63 = *(float *)(unaff_x19 + 0x55);
  fVar57 = 0.0;
  if (fVar63 != 0.0) {
    fVar57 = (float)FUN_026fd454(&stack0x00001770,0);
    fVar68 = (float)FUN_026fd464(&stack0x00001770,0);
    fVar57 = (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (fVar63 * 0.5 - fVar53 * (fVar57 * 0.5 + fVar68));
    *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fVar57;
  }
  if (((cVar24 == '\0') && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
    lVar39 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar19 = FUN_02681b9c(lVar39,0,0);
    fVar68 = 0.0;
    if ((uVar19 & 1) != 0) {
      lVar39 = unaff_x19[0x22];
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar28 = (long *)
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
      ;
      if (lVar39 == 0) goto LAB_02491464;
      uVar19 = FUN_0267e1d8(lVar39,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                              + 0xb8) + 0x54),0);
      if ((uVar19 & 1) != 0) {
        lVar39 = unaff_x19[0x22];
        if (*(int *)(*plVar28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          plVar28 = (long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
          ;
        }
        if (lVar39 == 0) goto LAB_02491464;
        fVar63 = (float)FUN_0267f610(lVar39,*(undefined4 *)(*(long *)(*plVar28 + 0xb8) + 0x54),0);
        if ((*unaff_x27 == 0) || (unaff_x19[0x22] == 0)) goto LAB_02491464;
        fVar69 = *(float *)(*unaff_x27 + 0x1b0);
        fVar68 = (float)FUN_0267f610(unaff_x19[0x22],
                                     *(undefined4 *)
                                      (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                + 0xb8) + 0xcc),0);
        fVar68 = fVar68 * fVar63 * fVar69 * 0.25;
        if (fVar63 < in_stack_00000130._4_4_ + fVar68) {
          in_stack_00000130._4_4_ = fVar63 - fVar68;
        }
      }
    }
    if (*unaff_x27 == 0) goto LAB_02491464;
    fStack00000000000000c4 = *(float *)(*unaff_x27 + 0x1b4);
  }
  else {
    lVar39 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar19 = FUN_02681b9c(lVar39,0,0);
    fStack00000000000000c4 = 0.0;
    if ((uVar19 & 1) != 0) {
      lVar39 = unaff_x19[0x22];
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar28 = (long *)
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
      ;
      if (lVar39 == 0) goto LAB_02491464;
      uVar19 = FUN_0267e1d8(lVar39,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                              + 0xb8) + 0x54),0);
      if ((uVar19 & 1) != 0) {
        lVar39 = unaff_x19[0x22];
        if (*(int *)(*plVar28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          plVar28 = (long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
          ;
        }
        if (lVar39 == 0) goto LAB_02491464;
        uVar19 = FUN_0267e1d8(lVar39,*(undefined4 *)(*(long *)(*plVar28 + 0xb8) + 0xcc),0);
        if ((uVar19 & 1) != 0) {
          lVar39 = unaff_x19[0x22];
          if (*(int *)(*plVar28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            plVar28 = (long *)
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
            ;
          }
          if (lVar39 != 0) {
            fVar63 = (float)FUN_0267f610(lVar39,*(undefined4 *)(*(long *)(*plVar28 + 0xb8) + 0x54),0
                                        );
            if ((*unaff_x27 != 0) && (unaff_x19[0x22] != 0)) {
              fVar69 = *(float *)(*unaff_x27 + 0x1a8);
              fVar68 = (float)FUN_0267f610(unaff_x19[0x22],
                                           *(undefined4 *)
                                            (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0xcc),0);
              fVar68 = fVar68 * fVar63 * fVar69 * 0.25;
              if (fVar63 < in_stack_00000130._4_4_ + fVar68) {
                in_stack_00000130._4_4_ = fVar63 - fVar68;
              }
              goto LAB_0248ba68;
            }
          }
          goto LAB_02491464;
        }
      }
    }
    fVar68 = 0.0;
  }
LAB_0248ba68:
  fVar60 = *(float *)(unaff_x19 + 199);
  fVar63 = (float)FUN_026fd464(&stack0x00001770,0);
  fVar60 = fVar60 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar53 * (fVar46 + ((fVar63 - in_stack_00000130._4_4_) - fVar68));
  fVar46 = (float)FUN_026fd46c(&stack0x00001770,0);
  fVar69 = *(float *)((long)unaff_x19 + 0x614) +
           ((fVar66 + fVar53 * (fVar47 + in_stack_00000130._4_4_ + fVar46)) -
           *(float *)(unaff_x19 + 0x9a));
  fVar46 = (float)FUN_026fd45c(&stack0x00001770,0);
  fVar64 = fVar69 - fVar53 * (in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar46);
  fVar46 = (float)FUN_026fd454(&stack0x00001770,0);
  fVar63 = fVar60 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar53 * (fVar68 + fVar68 +
                             in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar46);
  fVar46 = fVar60;
  fVar47 = fVar63;
  if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (cVar24 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
    fVar62 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
    fVar46 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar44 = fVar62 * fVar53 * (fVar68 + in_stack_00000130._4_4_ + fVar46);
    fVar46 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar47 = (float)FUN_026fd45c(&stack0x00001770,0);
    fVar69 = fVar69 + 0.0;
    fVar64 = fVar64 + 0.0;
    fVar62 = fVar62 * fVar53 * (((fVar46 - fVar47) - in_stack_00000130._4_4_) - fVar68);
    fVar47 = fVar63 + fVar62;
    fVar46 = fVar60 + fVar44;
    fVar54 = (fVar44 - fVar62) * 0.5;
    fVar60 = (fVar60 + fVar62) - fVar54;
    fVar63 = (fVar63 + fVar44) - fVar54;
    fVar46 = fVar46 - fVar54;
    fVar47 = fVar47 - fVar54;
  }
  if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
    fVar44 = 0.0;
    fVar61 = 0.0;
    fStack00000000000000e0 = 0.0;
    fStack00000000000000e4 = 0.0;
    fVar54 = fVar64;
    fVar62 = fVar69;
    fStack00000000000000e8 = fVar46;
    fStack00000000000000ec = fVar60;
  }
  else {
    thunk_FUN_026935f0(_uStack0000000000000060,0);
    fVar65 = (fVar63 + fVar60) * 0.5;
    fVar67 = (fVar64 + fVar69) * 0.5;
    fVar69 = fVar69 - fVar67;
    fVar51 = 0.0;
    fVar62 = fVar69;
    fVar43 = (float)FUN_02692df0(fVar46 - fVar65,_uStack0000000000000060,0);
    fVar64 = fVar64 - fVar67;
    fVar52 = 0.0;
    fVar46 = fVar64;
    fVar60 = (float)FUN_02692df0(fVar60 - fVar65,_uStack0000000000000060,0);
    fVar61 = 0.0;
    fVar63 = (float)FUN_02692df0(fVar63 - fVar65,_uStack0000000000000060,0);
    fVar63 = fVar65 + fVar63;
    fVar69 = fVar67 + fVar69;
    fVar61 = fVar61 + 0.0;
    fVar44 = 0.0;
    fVar47 = (float)FUN_02692df0(fVar47 - fVar65,_uStack0000000000000060,0);
    fVar47 = fVar65 + fVar47;
    fVar64 = fVar67 + fVar64;
    fVar44 = fVar44 + 0.0;
    fVar54 = fVar67 + fVar46;
    fVar62 = fVar67 + fVar62;
    fStack00000000000000e8 = fVar65 + fVar43;
    fStack00000000000000ec = fVar65 + fVar60;
    fStack00000000000000e0 = fVar52 + 0.0;
    fStack00000000000000e4 = fVar51 + 0.0;
  }
  if (*in_stack_00000150 == 0) goto LAB_02491464;
  lVar39 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_d9 = (ulong)(uint)fVar53;
  if (lVar39 == 0) goto LAB_02491464;
  if (*(uint *)(lVar39 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar39 = lVar39 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar39 + 0x120) = fVar54;
  *(float *)(lVar39 + 0x11c) = fStack00000000000000ec;
  *(float *)(lVar39 + 0x124) = fStack00000000000000e0;
  if (*in_stack_00000150 == 0) goto LAB_02491464;
  lVar39 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_s12 = 1.0;
  if (lVar39 == 0) goto LAB_02491464;
  if (*(uint *)(lVar39 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar39 = lVar39 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar39 + 0x114) = fVar62;
  *(float *)(lVar39 + 0x110) = fStack00000000000000e8;
  *(float *)(lVar39 + 0x118) = fStack00000000000000e4;
  if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar39 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar39 = lVar39 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar39 + 0x128) = fVar63;
  *(float *)(lVar39 + 300) = fVar69;
  *(float *)(lVar39 + 0x130) = fVar61;
  if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar39 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar39 = lVar39 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar39 + 0x134) = fVar47;
  *(float *)(lVar39 + 0x138) = fVar64;
  *(float *)(lVar39 + 0x13c) = fVar44;
  if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 == 0))
  goto LAB_02491464;
  uVar25 = *in_stack_00000148;
  lVar30 = (long)(int)uVar25;
  if (*(uint *)(lVar39 + 0x18) <= uVar25)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar41 = lVar39 + lVar30 * unaff_x21;
  *(int *)(lVar41 + 0x140) = (int)unaff_x19[199];
  fVar47 = *(float *)(unaff_x19 + 0x9a);
  param_2 = (ulong)(uint)fVar47;
  fVar46 = *(float *)((long)unaff_x19 + 0x614);
  *(float *)(lVar41 + 0x15c) = (fVar63 - fStack00000000000000ec) / (fVar62 - fVar54);
  *(float *)(lVar41 + 0x14c) = (fVar66 - fVar47) + fVar46;
  fVar58 = fVar58 * fVar53;
  if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
    fVar58 = fVar58 / fVar45;
    fVar55 = (fVar55 * fVar53) / fVar45;
  }
  else {
    fVar55 = fVar55 * fVar53;
  }
  uVar3 = *(uint *)(unaff_x19 + 0x92);
  bVar9 = uVar13 != 0;
  fVar58 = fVar46 + fVar58;
  bVar10 = uVar25 != uVar3;
  if (bVar10 && bVar9) {
    fVar46 = *(float *)(unaff_x19 + 0x98);
    lVar39 = lVar39 + lVar30 * unaff_x21;
    *(float *)(lVar39 + 0x154) = fVar46;
    fVar55 = *(float *)((long)unaff_x19 + 0x4c4);
    *(float *)(lVar39 + 0x148) = fVar46 - fVar47;
    *(float *)(lVar39 + 0x158) = fVar55;
    *(float *)(unaff_x19 + 0x97) = fVar46 - fVar47;
    fVar55 = fVar55 - fVar47;
    *(float *)(lVar39 + 0x150) = fVar55;
  }
  else {
    fVar55 = fVar46 + fVar55;
    fVar63 = fVar58;
    fVar66 = fVar55;
    if (fVar46 != 0.0) {
      fVar63 = (fVar58 - fVar46) / *(float *)((long)unaff_x19 + 0x3fc);
      fVar66 = (fVar55 - fVar46) / *(float *)((long)unaff_x19 + 0x3fc);
      if (fVar63 <= fVar58) {
        fVar63 = fVar58;
      }
      if (fVar55 <= fVar66) {
        fVar66 = fVar55;
      }
    }
    lVar39 = lVar39 + lVar30 * unaff_x21;
    fVar46 = fVar63;
    if (fVar63 <= *(float *)(unaff_x19 + 0x98)) {
      fVar46 = *(float *)(unaff_x19 + 0x98);
    }
    fVar69 = fVar66;
    if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar66) {
      fVar69 = *(float *)((long)unaff_x19 + 0x4c4);
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar69;
    fVar55 = fVar55 - fVar47;
    *(float *)(unaff_x19 + 0x98) = fVar46;
    *(float *)(lVar39 + 0x154) = fVar63;
    *(float *)(lVar39 + 0x158) = fVar66;
    *(float *)(lVar39 + 0x148) = fVar58 - fVar47;
    *(float *)(unaff_x19 + 0x97) = fVar58 - fVar47;
    *(float *)(lVar39 + 0x150) = fVar55;
  }
  *(float *)((long)unaff_x19 + 0x4bc) = fVar55;
  if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
    if (!bVar10 || !bVar9) {
      *(float *)(unaff_x19 + 0x96) = fVar46;
      if (unaff_x19[0x1f] != 0) {
        fVar46 = *(float *)((long)unaff_x19 + 0x4b4);
        fVar47 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
        fVar45 = (fVar53 * fVar47) / fVar45;
        param_2 = (ulong)*(uint *)(unaff_x19 + 0x9a);
        if (fVar46 <= fVar45) {
          fVar46 = fVar45;
        }
        *(float *)((long)unaff_x19 + 0x4b4) = fVar46;
        goto LAB_0248bef4;
      }
      goto LAB_02491464;
    }
  }
  else {
LAB_0248bef4:
    if ((!bVar10 || !bVar9) && (float)param_2 == 0.0) {
      fVar45 = *(float *)(in_stack_00000070 + 0x208);
      if (*(float *)(in_stack_00000070 + 0x208) <= fVar58) {
        fVar45 = fVar58;
      }
      *(float *)(in_stack_00000070 + 0x208) = fVar45;
    }
  }
  lVar39 = *in_stack_00000150;
  if ((lVar39 == 0) || (lVar30 = *(long *)(lVar39 + 0x38), lVar30 == 0)) goto LAB_02491464;
  uVar2 = *in_stack_00000148;
  if (*(uint *)(lVar30 + 0x18) <= uVar2)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar30 = lVar30 + (int)uVar2 * unaff_x21;
  *(undefined1 *)(lVar30 + 0x194) = 0;
  uVar32 = *(uint *)(unaff_x19 + 0x4e);
  uVar11 = in_stack_000017bc;
  if ((in_stack_000017bc == 9) ||
     (((((uVar13 == 0 && (in_stack_000017bc != 3)) && (in_stack_000017bc != 0x200b)) &&
       (in_stack_000017bc != 0xad)) ||
      (((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) != 0 ||
       (*(int *)((long)unaff_x19 + 0x63c) == 1)))))) {
    *(undefined1 *)(lVar30 + 0x194) = 1;
    pfVar29 = in_stack_00000088;
    pfVar34 = _fStack0000000000000098;
    if (bVar6) {
      lVar39 = *(long *)(lVar39 + 0x50);
      if (lVar39 == 0) goto LAB_02491464;
      if (*(uint *)(lVar39 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar39 = lVar39 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      pfVar34 = (float *)(lVar39 + 0x60);
      pfVar29 = (float *)(lVar39 + 100);
    }
    fVar46 = *pfVar34;
    fVar47 = *pfVar29;
    fVar45 = *(float *)(unaff_x19 + 0x6b);
    fVar55 = *(float *)(unaff_x19 + 199);
    in_stack_000000d8._4_4_ = (fStack0000000000000090 - fVar46) - fVar47;
    bVar9 = true;
    if ((fVar45 <= in_stack_000000d8._4_4_) && (bVar9 = false, !NAN(fVar45))) {
      bVar9 = fVar45 == -1.0;
    }
    if (!bVar9) {
      in_stack_000000d8._4_4_ = fVar45;
    }
    fVar45 = 0.0;
    if ((char)unaff_x19[0x1d] == '\0') {
      fVar45 = (float)FUN_026fd474(&stack0x00001770,0);
      param_2 = (ulong)*(uint *)(unaff_x19 + 0x9a);
    }
    fVar66 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar58 = *(float *)((long)unaff_x19 + 0x2cc);
    fVar63 = (float)param_2;
    if (in_stack_000017bc != 0xad) {
      fVar50 = fVar53;
    }
    fVar69 = 0.0;
    if ((0.0 < fVar63) && (fVar69 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar69 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar69 = (*(float *)(unaff_x19 + 0x96) - (fVar66 - fVar63)) + fVar69;
    uVar2 = *in_stack_00000148;
    if (in_stack_000000a0 < fVar69) {
      if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
        *(uint *)((long)unaff_x19 + 0x2dc) = uVar2;
      }
      unaff_x29 = (long *)StringLiteral_302;
      plVar28 = (long *)System_Threading_Mutex_TypeInfo;
      uVar17 = DAT_02941c08;
      if ((char)unaff_x19[0x46] != '\0') {
        fVar64 = *(float *)(unaff_x19 + 0x58);
        if (((fVar64 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar63)) &&
           (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar50 = *(float *)((long)unaff_x19 + 0x2b4) +
                   ((in_stack_00000018._4_4_ - fVar69) / (float)(int)unaff_x19[0x94]) /
                   fStack0000000000000054;
          if (fVar50 <= fVar64) {
            fVar50 = fVar64;
          }
          goto LAB_0248ea5c;
        }
        fVar69 = *(float *)((long)unaff_x19 + 0x1dc);
        fVar63 = *(float *)(unaff_x19 + 0x49);
        param_2 = (ulong)(uint)fVar63;
        if ((fVar63 < fVar69) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar50 = (fVar69 - *(float *)(unaff_x19 + 0x47)) * 0.5;
          if (fVar50 <= DAT_028aa298) {
            fVar50 = DAT_028aa298;
          }
          fVar45 = (fVar69 - fVar50) * 20.0 + 0.5;
          fVar50 = DAT_02958220;
          if (fVar45 != INFINITY) {
            fVar50 = (float)(int)fVar45 / 20.0;
          }
          if (fVar50 <= fVar63) {
            fVar50 = fVar63;
          }
          *(float *)((long)unaff_x19 + 0x234) = fVar69;
          goto LAB_0248e598;
        }
      }
      switch((int)unaff_x19[0x5b]) {
      case 1:
        lVar39 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar39 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar39 = *plVar28;
        }
        lVar30 = *(long *)(lVar39 + 0xb8);
        lVar39 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar39 + 0x132) & 1) == 0) {
          lVar39 = FUN_00d5941c(lVar39);
        }
        unaff_x29 = (long *)StringLiteral_302;
        lVar39 = *(long *)(*(long *)(lVar39 + 0xc0) + 8);
        if ((*(byte *)(lVar39 + 0x132) & 1) == 0) {
          lVar39 = FUN_00d5941c();
        }
        piVar21 = (int *)thunk_FUN_00d32ed4(lVar30 + 0x11f0,*(long *)(lVar39 + 0x80) + 0xa0);
        if (*piVar21 == 0) {
LAB_0248e4bc:
          in_stack_000017a8 = DAT_02941c08;
          unaff_s12 = 1.0;
          in_stack_00000148[0] = 0;
          in_stack_00000148[1] = 0;
          in_stack_00001788 = 0xffffffff;
          goto LAB_0248ab98;
        }
        lVar39 = *plVar28;
        if (*(int *)(lVar39 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar39 = *plVar28;
        }
        FUN_013b8de4(*(long *)(lVar39 + 0xb8) + 0x11f0,&stack0x00000880,
                     *(undefined8 *)
                      Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                    );
        memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_0248c8f4:
        iVar14 = FUN_024d66ec();
LAB_0248c900:
        unaff_s12 = 1.0;
        iVar12 = *(int *)((long)unaff_x19 + 0x48c) + -1;
        *(int *)((long)unaff_x19 + 0x48c) = iVar12;
        in_stack_00000140._4_4_ = in_stack_00000140._4_4_ + 1;
        in_stack_00001788 = iVar14 - 1;
        in_stack_000017a8 = CONCAT44(0x2026,iVar12);
        goto LAB_0248ab98;
      default:
        goto switchD_0248c274_caseD_2;
      case 3:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
LAB_0248c524:
        unaff_x29 = (long *)StringLiteral_302;
        in_stack_00001788 = FUN_024d66ec();
        break;
      case 5:
        if ((uVar2 == 0) || ((int)in_stack_00001788 < 0)) {
          *in_stack_00000148 = 0;
          plVar28 = (long *)System_Threading_Mutex_TypeInfo;
          unaff_x29 = (long *)StringLiteral_302;
          in_stack_00001788 = 0xffffffff;
          in_stack_000017a8 = uVar17;
          goto LAB_0248ab98;
        }
        fVar50 = *(float *)(unaff_x19 + 0x98);
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        if (fVar50 - fVar66 <= in_stack_000000a0) {
          *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
          *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
          param_2 = *(ulong *)(*(long *)(*plVar28 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x99) = 0;
          lVar39 = NEON_rev64(param_2,4);
          unaff_x19[0x98] = lVar39;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x94) = (int)unaff_x19[0x94] + 1;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          goto LAB_0248ab98;
        }
        break;
      case 6:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        unaff_x29 = (long *)StringLiteral_302;
        lVar39 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar19 = FUN_02681b9c(lVar39,0,0);
        if ((uVar19 & 1) != 0) {
          plVar40 = (long *)unaff_x19[0x5c];
          uVar17 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar40 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar40 + 0x558))(plVar40,uVar17,*(undefined8 *)(*plVar40 + 0x560));
          lVar39 = unaff_x19[0x5c];
          if (lVar39 == 0) goto LAB_02491464;
          *(int *)(lVar39 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar39,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar40 = (long *)unaff_x19[0x5c];
          if (plVar40 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
      }
LAB_0248c628:
      unaff_s12 = 1.0;
      in_stack_000017a8 = CONCAT44(3,uVar2);
      goto LAB_0248ab98;
    }
switchD_0248c274_caseD_2:
    plVar28 = (long *)System_Threading_Mutex_TypeInfo;
    fVar63 = 1.0 - fVar58;
    param_2 = (ulong)(uint)fVar63;
    fVar45 = ABS(fVar55) + fVar45 * fVar63 * fVar50;
    fVar50 = _DAT_0294c6e8;
    if ((uVar32 & 0x18) == 0) {
      fVar50 = 1.0;
    }
    if (fVar50 * in_stack_000000d8._4_4_ < fVar45) {
      if (((char)unaff_x19[0x5a] != '\0') && (uVar2 != *(uint *)(unaff_x19 + 0x92))) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
          lVar39 = *in_stack_00000150;
          if ((lVar39 == 0) || (lVar30 = *(long *)(lVar39 + 0x38), lVar30 == 0)) goto LAB_02491464;
          if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          fVar55 = *(float *)(unaff_x19 + 0x9a);
          fVar58 = 0.0;
          if ((0.0 < fVar55) && (fVar58 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
            fVar58 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
          }
          fVar58 = in_stack_000000c8 * *(float *)(unaff_x19 + 0x56) +
                   *(float *)(lVar30 + (int)*in_stack_00000148 * unaff_x21 + 0x154) +
                   (fVar58 - *(float *)((long)unaff_x19 + 0x4c4)) +
                   fStack0000000000000054 *
                   (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
        }
        else {
          lVar39 = unaff_x19[0x6c];
          *(undefined1 *)((long)unaff_x19 + 700) = 1;
          if (lVar39 == 0) goto LAB_02491464;
          fVar55 = *(float *)(unaff_x19 + 0x9a);
          fVar58 = *(float *)(unaff_x19 + 0x57) + in_stack_000000c8 * *(float *)(unaff_x19 + 0x56);
        }
        puVar8 = System_Threading_Mutex_TypeInfo;
        lVar39 = *(long *)(lVar39 + 0x38);
        if (lVar39 != 0) {
          uVar42 = *(uint *)((long)unaff_x19 + 0x48c);
          if ((*(uint *)(lVar39 + 0x18) <= uVar42) ||
             (uVar33 = uVar42 - 1, *(uint *)(lVar39 + 0x18) <= uVar33))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          param_2 = (ulong)(uint)(fVar58 + *(float *)(unaff_x19 + 0x96));
          fVar63 = (fVar58 + *(float *)(unaff_x19 + 0x96) + fVar55) -
                   *(float *)(lVar39 + (int)uVar42 * unaff_x21 + 0x158);
          if (((in_stack_00000068._4_1_ & 1) != 0 ||
               *(short *)(lVar39 + (long)(int)uVar33 * (long)iVar14 + 0x20) != 0xad) ||
             ((in_stack_000000a0 <= fVar63 && ((int)unaff_x19[0x5b] != 0)))) {
            if (*(short *)(lVar39 + (int)uVar42 * unaff_x21 + 0x20) == 0xad) {
              in_stack_00000068._4_1_ = 1;
            }
            else {
              if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
                fVar58 = *(float *)((long)unaff_x19 + 0x2cc);
                fVar55 = *(float *)(unaff_x19 + 0x59) / 100.0;
                if ((fVar55 <= fVar58) ||
                   ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
                  fVar58 = *(float *)((long)unaff_x19 + 0x1dc);
                  param_2 = (ulong)(uint)fVar58;
                  fVar55 = *(float *)(unaff_x19 + 0x49);
                  if ((fVar55 < fVar58) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_024914c0;
                  goto LAB_0248cc70;
                }
LAB_0249155c:
                fVar53 = fVar45;
                if (0.0 < fVar58) {
                  fVar53 = fVar45 / (1.0 - fVar58);
                }
                fVar58 = fVar58 + (fVar45 - fVar50 * (in_stack_000000d8._4_4_ + DAT_02958218)) /
                                  fVar53;
LAB_0249154c:
                if (fVar55 <= fVar58) {
                  fVar58 = fVar55;
                }
                *(float *)((long)unaff_x19 + 0x2cc) = fVar58;
                return;
              }
LAB_0248cc70:
              lVar39 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar39 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar39 = *(long *)puVar8;
              }
              iVar12 = *(int *)(*(long *)(lVar39 + 0xb8) + 0xe78);
              if ((((float)iVar12 != fStack0000000000000034) && (iVar12 != -1)) &&
                 (((bStack000000000000005c ^ 1) & 1) == 0)) {
                if (*(int *)(lVar39 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                in_stack_00001788 = FUN_024d66ec();
                if ((unaff_x19[0x6c] == 0) ||
                   (lVar39 = *(long *)(unaff_x19[0x6c] + 0x38), lVar39 == 0)) goto LAB_02491464;
                uVar42 = *in_stack_00000148 - 1;
                if (*(uint *)(lVar39 + 0x18) <= uVar42)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                fStack0000000000000034 = (float)iVar12;
                if (*(short *)(lVar39 + (long)(int)uVar42 * (long)iVar14 + 0x20) == 0xad) {
                  in_stack_00001788 = in_stack_00001788 - 1;
                  in_stack_00000068._4_1_ = 0;
                  in_stack_000017a8 = CONCAT44(0x2d,uVar42);
                  *in_stack_00000148 = uVar42;
                  goto LAB_0248cf04;
                }
              }
              if (in_stack_000000a0 < fVar63) {
                if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                  *(undefined4 *)((long)unaff_x19 + 0x2dc) =
                       *(undefined4 *)((long)unaff_x19 + 0x48c);
                }
                unaff_x29 = (long *)StringLiteral_302;
                plVar28 = (long *)System_Threading_Mutex_TypeInfo;
                if ((char)unaff_x19[0x46] != '\0') {
                  fVar55 = *(float *)(unaff_x19 + 0x58);
                  if ((fVar55 < *(float *)((long)unaff_x19 + 0x2b4)) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                    fVar50 = *(float *)((long)unaff_x19 + 0x2b4) +
                             ((in_stack_00000018._4_4_ - fVar63) / (float)((int)unaff_x19[0x94] + 1)
                             ) / fStack0000000000000054;
                    if (fVar50 <= fVar55) {
                      fVar50 = fVar55;
                    }
LAB_0248ea5c:
                    *(float *)((long)unaff_x19 + 0x2b4) = fVar50;
                    return;
                  }
                  fVar58 = *(float *)((long)unaff_x19 + 0x2cc);
                  fVar55 = *(float *)(unaff_x19 + 0x59) / 100.0;
                  if ((fVar58 < fVar55) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_0249155c;
                  fVar58 = *(float *)((long)unaff_x19 + 0x1dc);
                  param_2 = (ulong)(uint)fVar58;
                  fVar55 = *(float *)(unaff_x19 + 0x49);
                  if ((fVar55 < fVar58) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_024914c0;
                }
                unaff_s12 = 1.0;
                switch((int)unaff_x19[0x5b]) {
                case 0:
                case 2:
                case 4:
                  param_2 = unaff_d9;
                  FUN_024d7014(fStack0000000000000054,unaff_d9,in_stack_000000c8,
                               *(undefined4 *)((long)unaff_x19 + 0x2f4),fStack00000000000000c4,
                               fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048
                              );
                  break;
                case 1:
                  lVar39 = *(long *)System_Threading_Mutex_TypeInfo;
                  if (*(int *)(lVar39 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar39 = *plVar28;
                  }
                  lVar30 = *(long *)(lVar39 + 0xb8);
                  lVar39 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                  if ((*(byte *)(lVar39 + 0x132) & 1) == 0) {
                    lVar39 = FUN_00d5941c(lVar39);
                  }
                  lVar39 = *(long *)(*(long *)(lVar39 + 0xc0) + 8);
                  if ((*(byte *)(lVar39 + 0x132) & 1) == 0) {
                    lVar39 = FUN_00d5941c();
                  }
                  piVar21 = (int *)thunk_FUN_00d32ed4(lVar30 + 0x11f0,
                                                      *(long *)(lVar39 + 0x80) + 0xa0);
                  if (*piVar21 == 0) {
                    in_stack_00000068._4_1_ = 0;
                    goto LAB_0248e4bc;
                  }
                  lVar39 = *plVar28;
                  if (*(int *)(lVar39 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar39 = *plVar28;
                  }
                  FUN_013b8de4(*(long *)(lVar39 + 0xb8) + 0x11f0,&stack0x00000880,
                               *(undefined8 *)
                                Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                              );
                  memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
                  iVar14 = FUN_024d66ec();
                  in_stack_00000068._4_1_ = 0;
                  goto LAB_0248c900;
                case 3:
                  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  in_stack_00001788 = FUN_024d66ec();
                  in_stack_00000068._4_1_ = 0;
                  goto LAB_0248c628;
                case 5:
                  *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
                  param_2 = unaff_d9;
                  FUN_024d7014(fStack0000000000000054,unaff_d9,in_stack_000000c8,
                               *(undefined4 *)((long)unaff_x19 + 0x2f4),fStack00000000000000c4,
                               fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048
                              );
                  *(undefined4 *)(unaff_x19 + 0x99) = 0;
                  *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                  *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
                  *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                  break;
                case 6:
                  lVar39 = unaff_x19[0x5c];
                  if (*(int *)(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar19 = FUN_02681b9c(lVar39,0,0);
                  if ((uVar19 & 1) != 0) {
                    plVar40 = (long *)unaff_x19[0x5c];
                    uVar17 = (**(code **)(*unaff_x19 + 0x548))();
                    if (plVar40 == (long *)0x0) goto LAB_02491464;
                    (**(code **)(*plVar40 + 0x558))
                              (plVar40,uVar17,*(undefined8 *)(*plVar40 + 0x560));
                    lVar39 = unaff_x19[0x5c];
                    if (lVar39 == 0) goto LAB_02491464;
                    *(int *)(lVar39 + 0x3f8) = (int)unaff_x19[0x7f];
                    FUN_024c910c(lVar39,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                    plVar40 = (long *)unaff_x19[0x5c];
                    if (plVar40 == (long *)0x0) goto LAB_02491464;
                    (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
                    *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                  }
                  in_stack_00000068._4_1_ = 0;
                  goto LAB_0248ca1c;
                default:
                  in_stack_00000068._4_1_ = 0;
                  goto LAB_0248cf18;
                }
                in_stack_00000068._4_1_ = 0;
                bStack000000000000005c = 1;
                fStack0000000000000058 = 1.4013e-45;
                plVar28 = (long *)System_Threading_Mutex_TypeInfo;
                unaff_x29 = (long *)StringLiteral_302;
                goto LAB_0248ab98;
              }
              param_2 = unaff_d9;
              FUN_024d7014(fStack0000000000000054,unaff_d9,in_stack_000000c8,
                           *(undefined4 *)((long)unaff_x19 + 0x2f4),fStack00000000000000c4,
                           fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048);
              bStack000000000000005c = 1;
              in_stack_00000068._4_1_ = 0;
              fStack0000000000000058 = 1.4013e-45;
            }
          }
          else {
            in_stack_00001788 = in_stack_00001788 - 1;
            in_stack_00000068._4_1_ = 0;
            in_stack_000017a8 = CONCAT44(0x2d,uVar33);
            *in_stack_00000148 = uVar33;
          }
LAB_0248cf04:
          unaff_s12 = 1.0;
          plVar28 = (long *)System_Threading_Mutex_TypeInfo;
          unaff_x29 = (long *)StringLiteral_302;
          goto LAB_0248ab98;
        }
        goto LAB_02491464;
      }
      if (((char)unaff_x19[0x46] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
        fVar55 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if (fVar58 < fVar55) {
          fVar53 = fVar45 / fVar63;
          if (fVar58 <= 0.0) {
            fVar53 = fVar45;
          }
          fVar58 = fVar58 + (fVar45 - fVar50 * (in_stack_000000d8._4_4_ + DAT_02958218)) / fVar53;
          goto LAB_0249154c;
        }
        fVar58 = *(float *)((long)unaff_x19 + 0x1dc);
        param_2 = (ulong)(uint)fVar58;
        fVar55 = *(float *)(unaff_x19 + 0x49);
        if (fVar58 <= fVar55) goto LAB_0248c3dc;
LAB_024914c0:
        fVar50 = (fVar58 - *(float *)(unaff_x19 + 0x47)) * 0.5;
        if (fVar50 <= DAT_028aa298) {
          fVar50 = DAT_028aa298;
        }
        *(float *)((long)unaff_x19 + 0x234) = fVar58;
        fVar45 = (fVar58 - fVar50) * 20.0 + 0.5;
        fVar50 = DAT_02958220;
        if (fVar45 != INFINITY) {
          fVar50 = (float)(int)fVar45 / 20.0;
        }
        if (fVar50 <= fVar55) {
          fVar50 = fVar55;
        }
LAB_0248e598:
        *(float *)((long)unaff_x19 + 0x1dc) = fVar50;
        return;
      }
LAB_0248c3dc:
      iVar12 = (int)unaff_x19[0x5b];
      if (iVar12 == 1) {
        lVar39 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar39 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar39 = *plVar28;
        }
        unaff_x29 = (long *)StringLiteral_302;
        lVar30 = *(long *)(lVar39 + 0xb8);
        lVar39 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar39 + 0x132) & 1) == 0) {
          lVar39 = FUN_00d5941c(lVar39);
        }
        lVar39 = *(long *)(*(long *)(lVar39 + 0xc0) + 8);
        if ((*(byte *)(lVar39 + 0x132) & 1) == 0) {
          lVar39 = FUN_00d5941c();
        }
        piVar21 = (int *)thunk_FUN_00d32ed4(lVar30 + 0x11f0,*(long *)(lVar39 + 0x80) + 0xa0);
        if (*piVar21 != 0) {
          lVar39 = *plVar28;
          if (*(int *)(lVar39 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar39 = *plVar28;
          }
          FUN_013b8de4(*(long *)(lVar39 + 0xb8) + 0x11f0,&stack0x00000880,
                       *(undefined8 *)
                        Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                      );
          memcpy(&stack0x00000c70,&stack0x00000880,0x378);
          goto LAB_0248c8f4;
        }
        goto LAB_0248e4bc;
      }
      if (iVar12 != 6) {
        if (iVar12 == 3) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          goto LAB_0248c524;
        }
        goto LAB_0248cf18;
      }
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      unaff_x29 = (long *)StringLiteral_302;
      in_stack_00001788 = FUN_024d66ec();
      lVar39 = unaff_x19[0x5c];
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
      }
      uVar19 = FUN_02681b9c(lVar39,0,0);
      if ((uVar19 & 1) != 0) {
        plVar40 = (long *)unaff_x19[0x5c];
        uVar17 = (**(code **)(*unaff_x19 + 0x548))();
        if (plVar40 == (long *)0x0) goto LAB_02491464;
        (**(code **)(*plVar40 + 0x558))(plVar40,uVar17,*(undefined8 *)(*plVar40 + 0x560));
        lVar39 = unaff_x19[0x5c];
        if (lVar39 == 0) goto LAB_02491464;
        *(int *)(lVar39 + 0x3f8) = (int)unaff_x19[0x7f];
        FUN_024c910c(lVar39,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
        plVar40 = (long *)unaff_x19[0x5c];
        if (plVar40 == (long *)0x0) goto LAB_02491464;
        (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
        *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      }
LAB_0248ca1c:
      unaff_s12 = 1.0;
      in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
      goto LAB_0248ab98;
    }
LAB_0248cf18:
    if (in_stack_000017bc != 0xad) {
      if (in_stack_000017bc == 9) {
        lVar39 = *in_stack_00000150;
        if ((lVar39 != 0) && (lVar30 = *(long *)(lVar39 + 0x38), lVar30 != 0)) {
          uVar2 = *in_stack_00000148;
          if (*(uint *)(lVar30 + 0x18) <= uVar2)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          *(undefined1 *)(lVar30 + (int)uVar2 * unaff_x21 + 0x194) = 0;
          *(uint *)((long)unaff_x19 + 0x49c) = uVar2;
          lVar30 = *(long *)(lVar39 + 0x50);
          if (lVar30 != 0) {
            if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar30 + 0x18)) {
              lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
              *(int *)(lVar30 + 0x2c) = *(int *)(lVar30 + 0x2c) + 1;
              goto LAB_0248cf8c;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
        }
      }
      else {
        if (*(int *)((long)unaff_x19 + 0x63c) == 1) {
          (**(code **)(*unaff_x19 + 0x8c8))();
        }
        else if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
          (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000130._4_4_,fVar68);
        }
        uVar2 = *in_stack_00000148;
        if (((uint)fStack0000000000000058 & 1) != 0) {
          *(uint *)(in_stack_00000070 + 0x1f0) = uVar2;
        }
        *(uint *)((long)unaff_x19 + 0x49c) = uVar2;
        *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
        if ((unaff_x19[0x6c] != 0) && (lVar39 = *(long *)(unaff_x19[0x6c] + 0x50), lVar39 != 0)) {
          if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar39 + 0x18)) {
            lVar39 = lVar39 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
            fStack0000000000000058 = 0.0;
            *(float *)(lVar39 + 0x60) = fVar46;
            *(float *)(lVar39 + 100) = fVar47;
            goto FUN_0248d088;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
      }
      goto LAB_02491464;
    }
    if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar39 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(undefined1 *)(lVar39 + (int)*in_stack_00000148 * unaff_x21 + 0x194) = 0;
  }
  else {
    if (((in_stack_000017bc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
      fVar45 = (float)param_2;
      fVar50 = 0.0;
      if ((0.0 < fVar45) && (fVar50 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
        fVar50 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      }
      param_2 = (ulong)(uint)in_stack_000000a0;
      if (in_stack_000000a0 <
          (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - fVar45)) + fVar50)
      {
        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
          *(uint *)((long)unaff_x19 + 0x2dc) = uVar2;
        }
        unaff_x29 = (long *)StringLiteral_302;
        plVar28 = (long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        lVar39 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar19 = FUN_02681b9c(lVar39,0,0);
        if ((uVar19 & 1) != 0) {
          plVar40 = (long *)unaff_x19[0x5c];
          uVar17 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar40 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar40 + 0x558))(plVar40,uVar17,*(undefined8 *)(*plVar40 + 0x560));
          lVar39 = unaff_x19[0x5c];
          if (lVar39 == 0) goto LAB_02491464;
          *(int *)(lVar39 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar39,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar40 = (long *)unaff_x19[0x5c];
          if (plVar40 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        in_stack_000017a8 = CONCAT44(3,uVar2);
        goto LAB_0248ab98;
      }
    }
    if ((((in_stack_000017bc - 0x2007 < 0x23) &&
         ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
        (in_stack_000017bc - 10 < 2)) || (in_stack_000017bc == 0xa0)) {
UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs:
      if (((in_stack_000017bc != 0xad) && (in_stack_000017bc != 0x200b)) &&
         (in_stack_000017bc != 0x2060)) {
        lVar39 = *in_stack_00000150;
        if ((lVar39 == 0) || (lVar30 = *(long *)(lVar39 + 0x50), lVar30 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        *(int *)(lVar30 + 0x2c) = *(int *)(lVar30 + 0x2c) + 1;
        *(int *)(lVar39 + 0x20) = *(int *)(lVar39 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar19 = FUN_016fa418(in_stack_000017bc,0);
      if ((uVar19 & 1) != 0)
      goto UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs
      ;
    }
    if (in_stack_000017bc == 0xa0) {
      if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x50), lVar39 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar39 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar39 = lVar39 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_0248cf8c:
      *(int *)(lVar39 + 0x20) = *(int *)(lVar39 + 0x20) + 1;
    }
  }
FUN_0248d088:
  if (((int)unaff_x19[0x5b] == 1) && ((in_stack_000017bc == 0x2d || (!bVar6)))) {
    if (unaff_x19[0xca] == 0) goto LAB_02491464;
    fVar50 = *(float *)(unaff_x19 + 0x3c);
    iVar12 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
    if (unaff_x19[0xca] == 0) goto LAB_02491464;
    fVar46 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
    lVar39 = unaff_x19[0xc9];
    fVar45 = in_stack_00000080._4_4_;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar45 = 1.0;
    }
    if ((lVar39 == 0) || (*(long *)(lVar39 + 0x20) == 0)) goto LAB_02491464;
    fVar55 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar63 = *(float *)(lVar39 + 0x2c);
    fVar47 = (float)FUN_026fd668(*(long *)(lVar39 + 0x20),0);
    fVar58 = *_fStack0000000000000098;
    fVar47 = fVar55 * (fVar50 / (float)iVar12) * fVar46 * fVar45 * fVar63 * fVar47;
    fVar50 = *in_stack_00000088;
    if ((in_stack_000017bc == 10) && (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
      if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 == 0))
      goto LAB_02491464;
      uVar2 = *(int *)((long)unaff_x19 + 0x48c) - 1;
      if (*(uint *)(lVar39 + 0x18) <= uVar2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0xca] == 0) goto LAB_02491464;
      fVar45 = *(float *)(lVar39 + (long)(int)uVar2 * (long)iVar14 + 0x60);
      iVar12 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
      if (unaff_x19[0xca] == 0) goto LAB_02491464;
      fVar55 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
      lVar39 = unaff_x19[0xc9];
      fVar46 = in_stack_00000080._4_4_;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar46 = 1.0;
      }
      if ((lVar39 == 0) || (*(long *)(lVar39 + 0x20) == 0)) goto LAB_02491464;
      fVar63 = *(float *)((long)unaff_x19 + 0x3fc);
      fVar66 = *(float *)(lVar39 + 0x2c);
      fVar47 = (float)FUN_026fd668(*(long *)(lVar39 + 0x20),0);
      if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x50), lVar39 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar39 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar39 = lVar39 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      fVar58 = *(float *)(lVar39 + 0x60);
      fVar50 = *(float *)(lVar39 + 100);
      fVar47 = fVar63 * (fVar45 / (float)iVar12) * fVar55 * fVar46 * fVar66 * fVar47;
    }
    fVar63 = *(float *)(unaff_x19 + 0x9a);
    fVar46 = *(float *)(unaff_x19 + 0x96);
    fVar66 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar45 = 0.0;
    fVar55 = 0.0;
    if ((0.0 < fVar63) && (fVar55 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar55 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar68 = *(float *)(unaff_x19 + 199);
    if ((char)unaff_x19[0x1d] == '\0') {
      if ((unaff_x19[0xc9] == 0) || (lVar39 = *(long *)(unaff_x19[0xc9] + 0x20), lVar39 == 0))
      goto LAB_02491464;
      FUN_026fd62c(&stack0x00000880,lVar39,0);
      unaff_x28[0x1cd] = unaff_x28[1];
      unaff_x28[0x1cc] = *unaff_x28;
      fVar45 = (float)FUN_026fd474(&stack0x000016e0,0);
    }
    puVar8 = System_Threading_Mutex_TypeInfo;
    fVar69 = *(float *)(unaff_x19 + 0x6b);
    fVar50 = (fStack0000000000000090 - fVar58) - fVar50;
    bVar9 = true;
    if ((fVar69 <= fVar50) && (bVar9 = false, !NAN(fVar69))) {
      bVar9 = fVar69 == -1.0;
    }
    if (!bVar9) {
      fVar50 = fVar69;
    }
    fVar58 = _DAT_0294c6e8;
    if ((uVar32 & 0x18) == 0) {
      fVar58 = 1.0;
    }
    if (((fVar46 - (fVar66 - fVar63)) + fVar55 < in_stack_000000a0) &&
       (ABS(fVar68) + fVar47 * fVar45 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
        fVar58 * fVar50)) {
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024d69d4();
      lVar39 = *(long *)(*(long *)puVar8 + 0xb8);
      memcpy(&stack0x00000508,(void *)(lVar39 + 0x788),0x378);
      FUN_013b86dc(lVar39 + 0x11f0,&stack0x00000508,
                   *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
    }
  }
  unaff_d9 = (ulong)(uint)fVar53;
  unaff_s12 = 1.0;
  lVar39 = *in_stack_00000150;
  if ((lVar39 == 0) || (lVar30 = *(long *)(lVar39 + 0x38), lVar30 == 0)) goto LAB_02491464;
  if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  uVar2 = *(uint *)(unaff_x19 + 0x94);
  lVar30 = lVar30 + (int)*in_stack_00000148 * unaff_x21;
  *(uint *)(lVar30 + 100) = uVar2;
  *(int *)(lVar30 + 0x68) = (int)unaff_x19[0x95];
  if ((bVar6) ||
     ((in_stack_000017bc < 0xe && ((1 << (ulong)(in_stack_000017bc & 0x1f) & 0x2c00U) != 0)))) {
    lVar39 = *(long *)(lVar39 + 0x50);
    if (lVar39 == 0) goto LAB_02491464;
    if (*(uint *)(lVar39 + 0x18) <= uVar2)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if (*(int *)(lVar39 + (long)(int)uVar2 * 0x5c + 0x24) == 1) goto LAB_0248d42c;
  }
  else {
    lVar39 = *(long *)(lVar39 + 0x50);
    if (lVar39 == 0) goto LAB_02491464;
LAB_0248d42c:
    if (*(uint *)(lVar39 + 0x18) <= uVar2)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar39 + (long)(int)uVar2 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
  }
  if (in_stack_000017bc == 9) {
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar50 = (float)FUN_026fd208(*unaff_x27 + 0x50,0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar46 = *(float *)(unaff_x19 + 199);
    fVar45 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x27 + 0x1b9));
    fVar50 = fVar53 * fVar50 * fVar45;
    fVar45 = fVar50 * (float)(int)(fVar46 / fVar50);
    param_2 = (ulong)(uint)fVar45;
    if (fVar45 <= fVar46) {
      fVar45 = fVar46 + fVar50;
    }
LAB_0248d614:
    *(float *)(unaff_x19 + 199) = fVar45;
  }
  else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
    if ((char)unaff_x19[0x1d] == '\0') {
      fVar46 = unaff_s12;
      if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
        fVar46 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
      }
      fVar45 = *(float *)(unaff_x19 + 199);
      fVar47 = (float)FUN_026fd474(&stack0x00001770,0);
      if (unaff_x19[0x1f] != 0) {
        fVar50 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
        fVar45 = fVar45 + fVar50 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                   fVar53 * (fVar56 + fVar46 * fVar47) +
                                   in_stack_000000c8 *
                                   (fStack00000000000000c4 +
                                   fStack00000000000000cc + *(float *)(unaff_x19[0x1f] + 0x1ac)));
        *(float *)(unaff_x19 + 199) = fVar45;
        goto joined_r0x0248d568;
      }
      goto LAB_02491464;
    }
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar45 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (*(float *)((long)unaff_x19 + 0x2a4) +
             fVar53 * fVar56 +
             in_stack_000000c8 *
             (fStack00000000000000c4 + fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)));
    param_2 = (ulong)(uint)fVar45;
    fVar45 = *(float *)(unaff_x19 + 199) - fVar45;
    *(float *)(unaff_x19 + 199) = fVar45;
    if ((uVar13 != 0) || (in_stack_000017bc == 0x200b)) {
      fVar50 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      param_2 = (ulong)(uint)fVar50;
      fVar45 = fVar45 - fVar50;
      goto LAB_0248d614;
    }
  }
  else {
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar50 = *(float *)(unaff_x19 + 199);
    fVar45 = fVar50 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                      (*(float *)((long)unaff_x19 + 0x2a4) +
                      (*(float *)(unaff_x19 + 0x55) - fVar57) +
                      in_stack_000000c8 * (fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)))
    ;
    *(float *)(unaff_x19 + 199) = fVar45;
joined_r0x0248d568:
    if ((uVar13 != 0) || (param_2 = (ulong)(uint)fVar50, in_stack_000017bc == 0x200b)) {
      fVar50 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      param_2 = (ulong)(uint)fVar50;
      fVar45 = fVar45 + fVar50;
      goto LAB_0248d614;
    }
  }
  lVar39 = *in_stack_00000150;
  if ((lVar39 == 0) || (lVar30 = *(long *)(lVar39 + 0x38), lVar30 == 0)) goto LAB_02491464;
  uVar2 = *in_stack_00000148;
  uVar32 = (uint)*(undefined8 *)(lVar30 + 0x18);
  if (uVar32 <= uVar2)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar30 + (int)uVar2 * unaff_x21 + 0x144) = fVar45;
  uVar42 = in_stack_000017bc;
  if ((int)in_stack_000017bc < 0xd) {
    if ((in_stack_000017bc - 10 < 2) || (in_stack_000017bc == 3)) goto LAB_0248d6b8;
LAB_0248d69c:
    if (((bool)(bVar6 & in_stack_000017bc == 0x2d)) || ((float)uVar2 == in_stack_00000078._4_4_))
    goto LAB_0248d6b8;
  }
  else {
    if (1 < in_stack_000017bc - 0x2028) {
      if (in_stack_000017bc != 0xd) goto LAB_0248d69c;
      param_2 = 0;
      *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
      if ((float)uVar2 != in_stack_00000078._4_4_) goto LAB_0248dc08;
    }
LAB_0248d6b8:
    if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
      fVar50 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (((fStack000000000000004c < ABS(fVar50)) && (*(char *)((long)unaff_x19 + 700) == '\0')) &&
         (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
        FUN_024d6ca8(fVar50);
        *(float *)((long)unaff_x19 + 0x4bc) = *(float *)((long)unaff_x19 + 0x4bc) - fVar50;
        *(float *)(unaff_x19 + 0x9a) = fVar50 + *(float *)(unaff_x19 + 0x9a);
        puVar8 = System_Threading_Mutex_TypeInfo;
        lVar39 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar39 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar39 = *(long *)puVar8;
        }
        lVar30 = *(long *)(lVar39 + 0xb8);
        if (*(int *)(lVar30 + 0x7ac) == (int)unaff_x19[0x94]) {
          if (*(int *)(lVar39 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar30 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          FUN_013b8de4(lVar30 + 0x11f0,&stack0x00000880,
                       *(undefined8 *)
                        Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                      );
          lVar39 = *(long *)System_Threading_Mutex_TypeInfo;
          memcpy((void *)(*(long *)(lVar39 + 0xb8) + 0x788),&stack0x00000880,0x378);
          lVar39 = *(long *)(lVar39 + 0xb8);
          *(float *)(lVar39 + 0x7bc) = fVar50 + *(float *)(lVar39 + 0x7bc);
          *(float *)(lVar39 + 0x800) = fVar50 + *(float *)(lVar39 + 0x800);
          memcpy(&stack0x00000190,(void *)(lVar39 + 0x788),0x378);
          FUN_013b86dc(lVar39 + 0x11f0,&stack0x00000190,
                       *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
        }
      }
    }
    fVar46 = *(float *)(unaff_x19 + 0x9a);
    *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
    fVar45 = *(float *)((long)unaff_x19 + 0x4c4) - fVar46;
    fVar50 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar45 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar50 = fVar45;
    }
    *(float *)((long)unaff_x19 + 0x4bc) = fVar50;
    fVar47 = *(float *)(unaff_x19 + 0x98);
    if (*(char *)((long)unaff_x28 + 0xf34) == '\0') {
      in_stack_000017b8 = fVar50;
    }
    if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
       (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
        ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
      *(undefined1 *)((long)unaff_x28 + 0xf34) = 1;
    }
    lVar39 = *in_stack_00000150;
    if ((lVar39 == 0) || (lVar30 = *(long *)(lVar39 + 0x50), lVar30 == 0)) goto LAB_02491464;
    uVar2 = *(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar30 + 0x18) <= uVar2)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar41 = lVar30 + (long)(int)uVar2 * 0x5c;
    *(int *)(lVar41 + 0x34) = (int)unaff_x19[0x92];
    iVar12 = (int)unaff_x19[0x92];
    if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
      iVar12 = *(int *)((long)unaff_x19 + 0x494);
    }
    *(int *)((long)unaff_x19 + 0x494) = iVar12;
    *(int *)(lVar41 + 0x38) = iVar12;
    *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
    *(undefined4 *)(lVar41 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
    iVar12 = *(int *)((long)unaff_x19 + 0x494);
    if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
      iVar12 = *(int *)((long)unaff_x19 + 0x49c);
    }
    *(int *)((long)unaff_x19 + 0x49c) = iVar12;
    *(int *)(lVar41 + 0x40) = iVar12;
    *(int *)(lVar41 + 0x24) = (*(int *)(lVar41 + 0x3c) - *(int *)(lVar41 + 0x34)) + 1;
    *(undefined4 *)(lVar41 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
    lVar39 = *(long *)(lVar39 + 0x38);
    if (lVar39 == 0) goto LAB_02491464;
    if (*(uint *)(lVar39 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar48 = *(undefined4 *)(lVar39 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x21 + 0x11c);
    lVar30 = lVar30 + (long)(int)uVar2 * 0x5c;
    *(float *)(lVar30 + 0x70) = fVar45;
    *(undefined4 *)(lVar30 + 0x6c) = uVar48;
    lVar39 = *in_stack_00000150;
    if ((lVar39 == 0) || (lVar30 = *(long *)(lVar39 + 0x50), lVar30 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar39 = *(long *)(lVar39 + 0x38);
    if (lVar39 == 0) goto LAB_02491464;
    if (*(uint *)(lVar39 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    fVar47 = fVar47 - fVar46;
    lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    *(undefined4 *)(lVar30 + 0x74) =
         *(undefined4 *)(lVar39 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x21 + 0x128);
    *(float *)(lVar30 + 0x78) = fVar47;
    lVar39 = *in_stack_00000150;
    if ((lVar39 == 0) || (lVar41 = *(long *)(lVar39 + 0x50), lVar41 == 0)) goto LAB_02491464;
    lVar20 = (long)(int)*(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar30 = lVar41 + lVar20 * 0x5c;
    *(float *)(lVar30 + 0x44) = *(float *)(lVar30 + 0x74) - fVar53 * in_stack_00000130._4_4_;
    *(float *)(lVar30 + 0x5c) = in_stack_000000d8._4_4_;
    if (*(int *)(lVar30 + 0x24) == 1) {
      *(int *)(lVar41 + lVar20 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
    }
    if ((*unaff_x27 == 0) || (lVar30 = *(long *)(lVar39 + 0x38), lVar30 == 0)) goto LAB_02491464;
    lVar35 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
    uVar32 = (uint)*(undefined8 *)(lVar30 + 0x18);
    if (uVar32 <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if ((*(char *)(lVar30 + lVar35 * unaff_x21 + 0x194) == '\0') &&
       (lVar35 = (long)(int)*(uint *)(unaff_x19 + 0x93), uVar32 <= *(uint *)(unaff_x19 + 0x93)))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    fVar53 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (in_stack_000000c8 *
              (fStack00000000000000c4 + fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)) -
             *(float *)((long)unaff_x19 + 0x2a4));
    fVar50 = -fVar53;
    if ((char)unaff_x19[0x1d] != '\0') {
      fVar50 = fVar53;
    }
    lVar41 = lVar41 + lVar20 * 0x5c;
    *(float *)(lVar41 + 0x58) = *(float *)(lVar30 + lVar35 * unaff_x21 + 0x144) + fVar50;
    fVar50 = *(float *)(unaff_x19 + 0x9a);
    *(float *)(lVar41 + 0x48) = fStack0000000000000050 + (fVar47 - fVar45);
    *(float *)(lVar41 + 0x4c) = fVar47;
    param_2 = (ulong)(uint)(0.0 - fVar50);
    *(float *)(lVar41 + 0x50) = 0.0 - fVar50;
    *(float *)(lVar41 + 0x54) = fVar45;
    plVar28 = (long *)System_Threading_Mutex_TypeInfo;
    if ((int)in_stack_000017bc < 0x2d) {
      if (in_stack_000017bc - 10 < 2) {
LAB_0248dad8:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        unaff_x29 = (long *)StringLiteral_302;
        FUN_024d69d4();
        lVar39 = unaff_x19[0x6c];
        *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
        iVar14 = (int)unaff_x19[0x94] + 1;
        *(int *)(unaff_x19 + 0x94) = iVar14;
        *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
        if ((lVar39 != 0) && (*(long *)(lVar39 + 0x50) != 0)) {
          if (*(int *)(*(long *)(lVar39 + 0x50) + 0x18) <= iVar14) {
            FUN_024d6e60();
            lVar39 = unaff_x19[0x6c];
            if (lVar39 == 0) goto LAB_02491464;
          }
          lVar39 = *(long *)(lVar39 + 0x38);
          if (lVar39 != 0) {
            if (*in_stack_00000148 < *(uint *)(lVar39 + 0x18)) {
              fVar50 = *(float *)(lVar39 + (int)*in_stack_00000148 * unaff_x21 + 0x154);
              if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                fVar45 = 0.0;
                if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
                  fVar45 = *(float *)((long)unaff_x19 + 0x2c4);
                }
                uVar23 = 0;
                fVar45 = *(float *)(unaff_x19 + 0x9a) +
                         fVar50 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                         fStack0000000000000054 *
                         (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4)) +
                         in_stack_000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar45);
              }
              else {
                if ((in_stack_000017bc == 0x2029) || (fVar45 = 0.0, in_stack_000017bc == 10)) {
                  fVar45 = *(float *)((long)unaff_x19 + 0x2c4);
                }
                uVar23 = 1;
                fVar45 = *(float *)(unaff_x19 + 0x9a) +
                         *(float *)(unaff_x19 + 0x57) +
                         in_stack_000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar45);
              }
              *(float *)(unaff_x19 + 0x9a) = fVar45;
              *(undefined1 *)((long)unaff_x19 + 700) = uVar23;
              lVar39 = *plVar28;
              if (*(int *)(lVar39 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar39 = *plVar28;
              }
              uVar17 = *(undefined8 *)(*(long *)(lVar39 + 0xb8) + 0x15a8);
              *(float *)(unaff_x19 + 0x99) = fVar50;
              param_2 = NEON_rev64(uVar17,4);
              unaff_x19[0x98] = param_2;
              *(float *)(unaff_x19 + 199) =
                   *(float *)(unaff_x19 + 0x80) + 0.0 + *(float *)((long)unaff_x19 + 0x404);
              FUN_024d69d4();
              FUN_024d69d4();
              *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
              fStack0000000000000058 = 1.4013e-45;
              bStack000000000000005c = 1;
              goto LAB_0248ab98;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
        }
        goto LAB_02491464;
      }
      if (in_stack_000017bc == 3) {
        if (unaff_x19[0x8e] == 0) goto LAB_02491464;
        in_stack_00001788 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
        uVar42 = 3;
      }
    }
    else if ((in_stack_000017bc - 0x2028 < 2) || (in_stack_000017bc == 0x2d)) goto LAB_0248dad8;
  }
LAB_0248dc08:
  uVar2 = *in_stack_00000148;
  if (uVar32 <= uVar2)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (*(char *)(lVar30 + (int)uVar2 * unaff_x21 + 0x194) != '\0') {
    lVar30 = lVar30 + (int)uVar2 * unaff_x21;
    uVar22 = *(ulong *)(lVar30 + 0x11c);
    uVar19 = *(ulong *)(in_stack_00000070 + 0x230);
    *(ulong *)(in_stack_00000070 + 0x230) =
         uVar22 ^ (uVar22 ^ uVar19) &
                  CONCAT44(-(uint)((float)(uVar19 >> 0x20) < (float)(uVar22 >> 0x20)),
                           -(uint)((float)uVar19 < (float)uVar22));
    uVar19 = *(ulong *)(in_stack_00000070 + 0x238);
    param_2 = *(ulong *)(lVar30 + 0x128);
    *(ulong *)(in_stack_00000070 + 0x238) =
         param_2 ^ (param_2 ^ uVar19) &
                   CONCAT44(-(uint)((float)(param_2 >> 0x20) < (float)(uVar19 >> 0x20)),
                            -(uint)((float)param_2 < (float)uVar19));
  }
  if (((int)unaff_x19[0x5b] == 5) &&
     ((0xd < uVar42 || ((1 << (ulong)(uVar42 & 0x1f) & 0x2c00U) == 0)))) {
    lVar30 = *(long *)(lVar39 + 0x58);
    if (lVar30 == 0) goto LAB_02491464;
    iVar12 = (int)unaff_x19[0x95] + 1;
    if (*(int *)(lVar30 + 0x18) < iVar12) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147c08((long *)(lVar39 + 0x58),iVar12,1,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
      lVar39 = *in_stack_00000150;
      if (lVar39 == 0) goto LAB_02491464;
    }
    lVar30 = *(long *)(lVar39 + 0x58);
    if (lVar30 == 0) goto LAB_02491464;
    uVar32 = *(uint *)(unaff_x19 + 0x95);
    lVar41 = (long)(int)uVar32;
    uVar2 = *(uint *)(lVar30 + 0x18);
    if (uVar2 <= uVar32)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar20 = lVar30 + lVar41 * 0x14;
    fVar45 = *(float *)(lVar20 + 0x30);
    param_2 = (ulong)(uint)fVar45;
    *(undefined4 *)(lVar20 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    fVar50 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar45 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar50 = fVar45;
    }
    *(float *)(lVar20 + 0x30) = fVar50;
    uVar42 = *(uint *)((long)unaff_x19 + 0x48c);
    if (uVar42 == 0 && uVar32 == 0) {
      *(uint *)(lVar30 + lVar41 * 0x14 + 0x20) = uVar42;
    }
    else {
      uVar33 = uVar42 - 1;
      if (0 < (int)uVar42) {
        lVar39 = *(long *)(lVar39 + 0x38);
        if (lVar39 == 0) goto LAB_02491464;
        if (*(uint *)(lVar39 + 0x18) <= uVar33)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        if (uVar32 != *(uint *)(lVar39 + (long)(int)uVar33 * (long)iVar14 + 0x68)) {
          if (uVar32 - 1 < uVar2) {
            *(uint *)(lVar30 + 0x20 + (long)(int)(uVar32 - 1) * 0x14 + 4) = uVar33;
            *(uint *)(lVar30 + 0x20 + lVar41 * 0x14) = uVar42;
            goto LAB_0248dc84;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
      }
      if ((float)uVar42 == in_stack_00000078._4_4_) {
        *(float *)(lVar30 + lVar41 * 0x14 + 0x24) = in_stack_00000078._4_4_;
      }
    }
  }
LAB_0248dc84:
  plVar28 = (long *)System_Threading_Mutex_TypeInfo;
  if (((char)unaff_x19[0x5a] != '\0') ||
     ((*(uint *)(unaff_x19 + 0x5b) < 7 &&
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) != 0)))) {
    if ((uVar13 == 0) &&
       (((in_stack_000017bc != 0x2d && (in_stack_000017bc != 0x200b)) && (in_stack_000017bc != 0xad)
        ))) {
      if (*(char *)((long)unaff_x19 + 0x2d2) == '\0') {
LAB_0248de4c:
        if (((((0x2bfd < in_stack_000017bc - 0xac01) && (0x1d < in_stack_000017bc - 0xa961)) &&
             (0xfd < in_stack_000017bc - 0x1101)) || (uVar19 = FUN_024e95f0(0), (uVar19 & 1) != 0))
           && ((((0xed < in_stack_000017bc - 0xff01 && (0x1d < in_stack_000017bc - 0xfe31)) &&
                (0x717d < in_stack_000017bc - 0x2e81)) && (0x1fd < in_stack_000017bc - 0xf901))))
        goto LAB_0248ded4;
        lVar39 = FUN_024e94b0(0);
        if ((lVar39 == 0) || (*(long *)(lVar39 + 0x10) == 0)) goto LAB_02491464;
        uVar19 = FUN_0129aa60(*(long *)(lVar39 + 0x10),&stack0x00000880,
                              *(undefined8 *)
                               System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                             );
        if ((int)in_stack_00000078._4_4_ <= (int)*in_stack_00000148) {
          in_stack_00000880 = in_stack_000017bc;
          if ((uVar19 & 1) == 0) {
LAB_0248e1b0:
            plVar28 = (long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_024d69d4();
            bStack000000000000005c = 0;
            goto LAB_0248e168;
          }
LAB_0248e0dc:
          plVar28 = (long *)System_Threading_Mutex_TypeInfo;
          if (uVar25 != uVar3 || ((bStack000000000000005c ^ 0xff) & 1) != 0) goto LAB_0248e168;
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__get_invalidColorGradient;
        }
        lVar39 = FUN_024e94b0(0);
        if (((lVar39 == 0) || (*in_stack_00000150 == 0)) ||
           (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148 + 1)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        if (*(long *)(lVar39 + 0x18) == 0) goto LAB_02491464;
        in_stack_00000880 =
             (uint)*(ushort *)(lVar30 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar14 + 0x20);
        uVar22 = FUN_0129aa60(*(long *)(lVar39 + 0x18),&stack0x00000880,
                              *(undefined8 *)
                               System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                             );
        if ((uVar19 & 1) != 0) goto LAB_0248e0dc;
        if ((uVar22 & 1) == 0) goto LAB_0248e1b0;
        plVar28 = (long *)System_Threading_Mutex_TypeInfo;
        if ((bStack000000000000005c & 1) == 0) {
          bStack000000000000005c = 0;
          goto LAB_0248e168;
        }
        if (uVar13 != 0) goto LAB_0248e100;
      }
      else {
LAB_0248ded4:
        if ((bStack000000000000005c & 1) == 0) {
          bStack000000000000005c = 0;
          plVar28 = (long *)System_Threading_Mutex_TypeInfo;
          goto LAB_0248e168;
        }
        if ((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__get_invalidColorGradient:
          plVar28 = (long *)System_Threading_Mutex_TypeInfo;
          if (uVar13 == 0)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__get_smoothMovement;
        }
LAB_0248e100:
        plVar28 = (long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_024d69d4();
      }
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__get_smoothMovement:
      if (*(int *)(*plVar28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024d69d4();
      bStack000000000000005c = 1;
    }
    else {
      if (*(char *)((long)unaff_x19 + 0x2d2) == '\x01') goto LAB_0248ded4;
      if (((in_stack_000017bc - 0x2007 < 0x29) &&
          ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
         ((in_stack_000017bc == 0xa0 || (in_stack_000017bc == 0x2060)))) goto LAB_0248de4c;
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024d69d4();
      bStack000000000000005c = 0;
      *(undefined4 *)(*(long *)(*plVar28 + 0xb8) + 0xe78) = 0xffffffff;
    }
  }
LAB_0248e168:
  if (*(int *)(*plVar28 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  unaff_x29 = (long *)StringLiteral_302;
  FUN_024d69d4();
  *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
LAB_0248ab98:
  do {
    in_stack_00001788 = in_stack_00001788 + 1;
    lVar39 = unaff_x19[0x8e];
    if (lVar39 == 0) goto LAB_02491464;
    if ((int)*(uint *)(lVar39 + 0x18) <= (int)in_stack_00001788) {
LAB_0248e4dc:
      fVar50 = (float)param_2;
      if (((char)unaff_x19[0x46] != '\0') &&
         (fVar50 = DAT_02956ccc,
         DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
        fVar50 = *(float *)((long)unaff_x19 + 0x1dc);
        fVar45 = *(float *)((long)unaff_x19 + 0x24c);
        if ((fVar50 < fVar45) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
            *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
          }
          fVar53 = (*(float *)((long)unaff_x19 + 0x234) - fVar50) * 0.5;
          if (fVar53 <= DAT_028aa298) {
            fVar53 = DAT_028aa298;
          }
          *(float *)(unaff_x19 + 0x47) = fVar50;
          fVar53 = (fVar50 + fVar53) * 20.0 + 0.5;
          fVar50 = DAT_02958220;
          if (fVar53 != INFINITY) {
            fVar50 = (float)(int)fVar53 / 20.0;
          }
          if (fVar45 <= fVar50) {
            fVar50 = fVar45;
          }
          goto LAB_0248e598;
        }
      }
      *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
      if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
        uVar17 = FUN_0176eb1c(_fStack0000000000000038,0);
        uVar18 = FUN_017840ac(in_stack_00000040,0);
        uVar17 = FUN_0160073c(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__,
                              uVar17,*(undefined8 *)
                                      Method_UnityEngine_GameObject_GetComponents<Component>__,
                              uVar18,0);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_00d32864(*unaff_x29);
        }
        FUN_02660dac(uVar17,0);
      }
      puVar8 = Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
      if ((*in_stack_00000148 == 0) || ((*in_stack_00000148 == 1 && (uVar11 == 3)))) {
        (**(code **)(*unaff_x19 + 0x958))();
        lVar39 = *(long *)puVar8;
        goto LAB_02491474;
      }
      lVar39 = *plVar28;
      if (*(int *)(lVar39 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar39 = *plVar28;
      }
      plVar28 = (long *)PTR_DAT_033ed410;
      lVar39 = **(long **)(lVar39 + 0xb8);
      if (lVar39 == 0) goto LAB_02491464;
      if (*(uint *)(lVar39 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      iVar14 = *(int *)(lVar39 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
      if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x60), lVar39 == 0))
      goto LAB_02491464;
      if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar39 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      FUN_024e7d94(lVar39 + 0x20,0,0);
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      iVar12 = (int)unaff_x19[0x4d];
      fStack00000000000000c4 =
           **(float **)
             (*(long *)
               Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
             0xb8);
      in_stack_000000b8 =
           *(undefined8 *)
            (*(float **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8) + 1);
      lVar39 = unaff_x19[0xea];
      in_stack_00000088 = (float *)in_stack_000000b8;
      fStack0000000000000090 = fStack00000000000000c4;
      if (iVar12 < 0x401) {
        if (iVar12 == 0x100) {
          if (lVar39 == 0) goto LAB_02491464;
          if (*(uint *)(lVar39 + 0x18) < 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar17 = *(undefined8 *)(lVar39 + 0x30);
          if ((int)unaff_x19[0x5b] == 5) {
            if ((*in_stack_00000150 == 0) ||
               (lVar30 = *(long *)(*in_stack_00000150 + 0x58), lVar30 == 0)) goto LAB_02491464;
            if (*(uint *)(lVar30 + 0x18) <= uStack0000000000000030)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            fVar50 = *(float *)(lVar30 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
          }
          else {
            fVar50 = *(float *)(unaff_x19 + 0x96);
          }
          fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar39 + 0x2c);
          fVar50 = (0.0 - fVar50) - fStack0000000000000020;
        }
        else if (iVar12 == 0x200) {
          if (lVar39 == 0) goto LAB_02491464;
          if ((*(int *)(lVar39 + 0x18) == 1) || (*(int *)(lVar39 + 0x18) == 0))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          fStack0000000000000090 = (*(float *)(lVar39 + 0x20) + *(float *)(lVar39 + 0x2c)) * 0.5;
          uVar17 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar39 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar39 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar39 + 0x24) +
                            (float)*(undefined8 *)(lVar39 + 0x30)) * 0.5);
          if ((int)unaff_x19[0x5b] == 5) {
            if ((*in_stack_00000150 == 0) ||
               (lVar39 = *(long *)(*in_stack_00000150 + 0x58), lVar39 == 0)) goto LAB_02491464;
            if (*(uint *)(lVar39 + 0x18) <= uStack0000000000000030)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            lVar39 = lVar39 + (long)(int)uStack0000000000000030 * 0x14;
            fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
            fVar50 = ((fStack0000000000000020 + *(float *)(lVar39 + 0x28) +
                      *(float *)(lVar39 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
          }
          else {
            fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
            fVar50 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8) -
                     fStack0000000000000024) * -0.5 + 0.0;
          }
        }
        else {
          if (iVar12 != 0x400) goto LAB_0248eb64;
          if (lVar39 == 0) goto LAB_02491464;
          if (*(int *)(lVar39 + 0x18) == 0)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar17 = *(undefined8 *)(lVar39 + 0x24);
          if ((int)unaff_x19[0x5b] == 5) {
            if ((*in_stack_00000150 == 0) ||
               (lVar30 = *(long *)(*in_stack_00000150 + 0x58), lVar30 == 0)) goto LAB_02491464;
            if (*(uint *)(lVar30 + 0x18) <= uStack0000000000000030)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            in_stack_000017b8 = *(float *)(lVar30 + (long)(int)uStack0000000000000030 * 0x14 + 0x30)
            ;
          }
          fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar39 + 0x20);
          fVar50 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
        }
        in_stack_00000088 =
             (float *)CONCAT44((float)((ulong)uVar17 >> 0x20) + 0.0,(float)uVar17 + fVar50);
      }
      else if (iVar12 == 0x800) {
        if (lVar39 == 0) goto LAB_02491464;
        if ((*(int *)(lVar39 + 0x18) == 1) || (*(int *)(lVar39 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar50 = ((float)*(undefined8 *)(lVar39 + 0x24) + (float)*(undefined8 *)(lVar39 + 0x30)) *
                 0.5;
        fStack0000000000000090 =
             fStack000000000000002c + 0.0 +
             (*(float *)(lVar39 + 0x20) + *(float *)(lVar39 + 0x2c)) * 0.5;
        in_stack_00000088 =
             (float *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar39 + 0x24) >> 0x20) +
                               (float)((ulong)*(undefined8 *)(lVar39 + 0x30) >> 0x20)) * 0.5 + 0.0,
                               fVar50 + 0.0);
      }
      else {
        if (iVar12 == 0x1000) {
          if (lVar39 == 0) goto LAB_02491464;
          if ((*(int *)(lVar39 + 0x18) == 1) || (*(int *)(lVar39 + 0x18) == 0))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          fVar50 = (float)*(undefined8 *)(lVar39 + 0x24) + (float)*(undefined8 *)(lVar39 + 0x30);
          fVar45 = (float)((ulong)*(undefined8 *)(lVar39 + 0x24) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(lVar39 + 0x30) >> 0x20);
          fStack0000000000000020 =
               fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) + *(float *)(unaff_x19 + 0x9b);
          fStack0000000000000090 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar39 + 0x20) + *(float *)(lVar39 + 0x2c)) * 0.5;
        }
        else {
          if (iVar12 != 0x2000) goto LAB_0248eb64;
          if (lVar39 == 0) goto LAB_02491464;
          if ((*(int *)(lVar39 + 0x18) == 1) || (*(int *)(lVar39 + 0x18) == 0))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          fVar50 = (float)*(undefined8 *)(lVar39 + 0x24) + (float)*(undefined8 *)(lVar39 + 0x30);
          fVar45 = (float)((ulong)*(undefined8 *)(lVar39 + 0x24) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(lVar39 + 0x30) >> 0x20);
          fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
          fStack0000000000000090 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar39 + 0x20) + *(float *)(lVar39 + 0x2c)) * 0.5;
        }
        fVar50 = fVar50 * 0.5;
        in_stack_00000088 =
             (float *)CONCAT44(fVar45 * 0.5 + 0.0,
                               fVar50 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) *
                                               0.5));
      }
LAB_0248eb64:
      lVar39 = FUN_0249b7f8();
      if (lVar39 == 0) goto LAB_02491464;
      FUN_026a125c(lVar39,0);
      __x = DAT_028aa048;
      *(float *)((long)unaff_x19 + 0x6dc) = fVar50;
      dVar49 = modf(__x,(double *)&stack0x00000880);
      puVar8 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
      if (dVar49 == 0.5) {
        fVar45 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
        if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
          fVar45 = fVar45 + 1.0;
        }
      }
      else {
        fVar45 = 255.0;
      }
      dVar49 = modf(__x,(double *)&stack0x00000880);
      if (dVar49 == 0.5) {
        fVar53 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
        if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
          fVar53 = fVar53 + 1.0;
        }
      }
      else {
        fVar53 = 255.0;
      }
      dVar49 = modf(__x,(double *)&stack0x00000880);
      if (dVar49 == 0.5) {
        fVar46 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
        if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
          fVar46 = fVar46 + 1.0;
        }
      }
      else {
        fVar46 = 255.0;
      }
      dVar49 = modf(__x,(double *)&stack0x00000880);
      if (dVar49 == 0.5) {
        fVar47 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
        if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
          fVar47 = fVar47 + 1.0;
        }
      }
      else {
        fVar47 = 255.0;
      }
      modf(__x,(double *)&stack0x00000880);
      modf(__x,(double *)&stack0x00000880);
      modf(__x,(double *)&stack0x00000880);
      modf(__x,(double *)&stack0x00000880);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_037825d3 == '\0') {
        thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
        DAT_037825d3 = '\x01';
      }
      puVar8 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
      lVar39 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
      if (*(int *)(lVar39 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar39 = *(long *)puVar8;
      }
      puVar26 = *(undefined4 **)(lVar39 + 0xb8);
      UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                (*puVar26,puVar26[1],puVar26[2],puVar26[3],&stack0x00001790,0x4000ffff,0);
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar39 = *in_stack_00000150;
      if (lVar39 == 0) goto LAB_02491464;
      uVar11 = *in_stack_00000148;
      if ((int)uVar11 < 1) {
        iStack00000000000000a4 = 0;
        iVar14 = 0;
        plVar40 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
        goto LAB_02491068;
      }
      lVar39 = *(long *)(lVar39 + 0x38);
      if (lVar39 == 0) goto LAB_02491464;
      iVar12 = 0;
      bVar7 = false;
      bVar10 = false;
      bVar9 = false;
      iStack00000000000000a4 = 0;
      fStack0000000000000024 = 0.0;
      bVar6 = false;
      uStack0000000000000114 = 0;
      fStack0000000000000048 = 0.0;
      fStack00000000000000cc =
           *(float *)(*(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8) + 0x15a8);
      in_stack_000000c8 = 0.0;
      fStack0000000000000054 = fStack00000000000000a8;
      fStack0000000000000058 = 0.0;
      fStack0000000000000038 = 0.0;
      in_stack_00000080._4_4_ = 0.0;
      fStack0000000000000034 = 0.0;
      _bStack000000000000005c =
           (int)fVar45 & 0xffU | ((int)fVar53 & 0xffU) << 8 | ((int)fVar46 & 0xffU) << 0x10 |
           (int)fVar47 << 0x18;
      fVar53 = 0.0;
      fVar45 = 0.0;
      lStack0000000000000128 = 0x2e0;
      fStack0000000000000098 = fStack00000000000000a8;
      in_stack_000000a0 = fStack00000000000000ac;
      fStack000000000000004c = fStack00000000000000ac;
      fStack0000000000000050 = (float)uStack0000000000000094;
      in_stack_00000078._4_4_ = fStack00000000000000a8;
      in_stack_00000068._4_4_ = fStack00000000000000ac;
      uStack0000000000000060 = uStack0000000000000094;
      uVar13 = 0;
      uVar25 = 1;
      break;
    }
    if (*(uint *)(lVar39 + 0x18) <= in_stack_00001788)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    in_stack_000017bc = *(uint *)(lVar39 + (long)(int)in_stack_00001788 * 0xc + 0x20);
    if (in_stack_000017bc == 0) goto LAB_0248e4dc;
    if (5 < in_stack_00000140._4_4_) {
      uVar17 = FUN_0176eb1c(&stack0x000017bc,0);
      uVar18 = FUN_0176eb1c(&stack0x00001788,0);
      uVar17 = FUN_0160073c(*(undefined8 *)UnityEngine_Rendering_Universal_DebugValidationMode_var,
                            uVar17,*(undefined8 *)
                                    Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                            ,uVar18,0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x29);
      }
      FUN_026610e4(uVar17,0);
      in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
    }
    unaff_x26 = in_stack_00000148;
    if ((*(char *)((long)unaff_x19 + 0x2fa) == '\0') || (in_stack_000017bc != 0x3c)) {
      if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar39 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar39 = lVar39 + (int)*in_stack_00000148 * unaff_x21;
      *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar39 + 0x2c);
      *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar39 + 0x58);
      unaff_x19[0x1f] = *(long *)(lVar39 + 0x38);
      goto code_r0x0248aa2c;
    }
    *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
    uVar19 = FUN_024d0688();
    if (((uVar19 & 1) == 0) ||
       (in_stack_00001788 = in_stack_0000176c, uVar11 = in_stack_000017bc,
       *(int *)((long)unaff_x19 + 0x63c) != 0)) goto code_r0x0248aa2c;
  } while( true );
LAB_0248ef74:
  uVar11 = uVar25 - 1;
  if (*(uint *)(lVar39 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x50), lVar30 == 0))
  goto LAB_02491464;
  lVar20 = (long)(int)uVar11;
  lVar41 = lVar39 + lVar20 * 0x178;
  uVar3 = *(uint *)(lVar41 + 100);
  if (*(uint *)(lVar30 + 0x18) <= uVar3)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar36 = *(long *)(lVar41 + 0x38);
  uVar33 = (uint)*(ushort *)(lVar41 + 0x20);
  lVar35 = (long)(int)uVar3;
  lVar30 = lVar30 + lVar35 * 0x5c;
  uVar2 = *(uint *)(lVar30 + 0x3c);
  uVar32 = *(uint *)(lVar30 + 0x40);
  lVar41 = (long)(int)uVar32;
  iVar15 = *(int *)(lVar30 + 0x28);
  iVar16 = *(int *)(lVar30 + 0x2c);
  uVar42 = *(uint *)(lVar30 + 0x68);
  fVar66 = *(float *)(lVar30 + 0x5c);
  fVar68 = *(float *)(lVar30 + 0x60);
  iVar4 = *(int *)(lVar30 + 0x20);
  fVar55 = *(float *)(lVar30 + 0x4c);
  fVar56 = *(float *)(lVar30 + 0x54);
  fVar46 = *(float *)(lVar30 + 0x58);
  fVar63 = *(float *)(lVar30 + 0x6c);
  fVar57 = *(float *)(lVar30 + 0x70);
  fVar47 = *(float *)(lVar30 + 0x74);
  fVar58 = *(float *)(lVar30 + 0x78);
  fVar69 = fVar66 + fVar68;
  if ((int)uVar42 < 9) {
    switch(uVar42) {
    case 1:
      if ((char)unaff_x19[0x1d] == '\0') {
        fStack00000000000000c4 = fVar68 + 0.0;
      }
      else {
        fStack00000000000000c4 = 0.0 - fVar46;
      }
      break;
    case 2:
LAB_0248f124:
      fStack00000000000000c4 = (fVar68 + fVar66 * 0.5) - fVar46 * 0.5;
      break;
    default:
      goto switchD_0248f070_caseD_3;
    case 4:
      fStack00000000000000c4 = fVar69 - fVar46;
      if ((char)unaff_x19[0x1d] != '\0') {
        fStack00000000000000c4 = fVar69;
      }
      break;
    case 8:
      goto switchD_0248f070_caseD_8;
    }
LAB_0248f194:
    in_stack_000000b8 = 0;
  }
  else if (uVar42 == 0x10) {
switchD_0248f070_caseD_8:
    if (uVar33 < 0xad) {
      if ((uVar33 != 3) && (uVar33 != 10)) goto LAB_0248f0c8;
    }
    else if ((uVar33 != 0xad) && ((uVar33 != 0x200b && (uVar33 != 0x2060)))) {
LAB_0248f0c8:
      if (*(uint *)(lVar39 + 0x18) <= uVar2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar5 = *(undefined2 *)(lVar39 + (long)(int)uVar2 * 0x178 + 0x20);
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar19 = FUN_016f9f84(uVar5,0);
      if ((uVar19 & 1) == 0) {
        bVar1 = (int)uVar3 < (int)unaff_x19[0x94];
      }
      else {
        bVar1 = false;
      }
      if ((fVar46 <= fVar66) && (!bVar1 && (uVar42 >> 4 & 1) == 0)) {
        fStack00000000000000c4 = fVar68;
        if ((char)unaff_x19[0x1d] != '\0') {
          fStack00000000000000c4 = fVar69;
        }
        goto LAB_0248f194;
      }
      if (((uVar25 == 1) || (uVar3 != uVar13)) || (uVar11 == *(uint *)((long)unaff_x19 + 0x31c))) {
        fStack00000000000000c4 = fVar68;
        if ((char)unaff_x19[0x1d] != '\0') {
          fStack00000000000000c4 = fVar69;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fStack0000000000000024 = (float)FUN_016fa418(uVar33,0);
        in_stack_000000b8 = 0;
      }
      else {
        cVar24 = (char)unaff_x19[0x1d];
        fVar68 = -fVar46;
        if (cVar24 != '\0') {
          fVar68 = fVar46;
        }
        if (*(uint *)(lVar39 + 0x18) <= uVar2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar46 = 1.0;
        iVar16 = (int)*(char *)(lVar39 + (long)(int)uVar2 * 0x178 + 0x194) +
                 (-iVar4 - ((uint)fStack0000000000000024 & 1)) + iVar16 + -1;
        if (0 < iVar16) {
          fVar46 = *(float *)((long)unaff_x19 + 0x2d4);
        }
        if (iVar16 < 1) {
          iVar16 = 1;
        }
        if (uVar33 == 9) {
LAB_02490fe0:
          fVar46 = 1.0 - fVar46;
        }
        else {
          if (uVar33 != 0xa0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar19 = FUN_016fa418(uVar33,0);
            cVar24 = (char)unaff_x19[0x1d];
            if ((uVar19 & 1) != 0) goto LAB_02490fe0;
          }
          iVar16 = (iVar4 - (~(uint)fStack0000000000000024 & 1)) + iVar15;
        }
        fVar46 = ((fVar66 + fVar68) * fVar46) / (float)iVar16;
        if (cVar24 == '\0') {
          fStack00000000000000c4 = fStack00000000000000c4 + fVar46;
          in_stack_000000b8 =
               CONCAT44((float)((ulong)in_stack_000000b8 >> 0x20) + 0.0,
                        (float)in_stack_000000b8 + 0.0);
        }
        else {
          fStack00000000000000c4 = fStack00000000000000c4 - fVar46;
        }
      }
    }
  }
  else if (uVar42 == 0x20) {
    fVar46 = fVar63 + fVar47;
    goto LAB_0248f124;
  }
switchD_0248f070_caseD_3:
  uVar42 = (uint)*(undefined8 *)(lVar39 + 0x18);
  if (uVar42 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar30 = lVar39 + lVar20 * 0x178;
  fVar68 = fStack0000000000000090 + fStack00000000000000c4;
  fVar46 = SUB84(in_stack_00000088,0) + (float)in_stack_000000b8;
  fVar66 = (float)((ulong)in_stack_00000088 >> 0x20) + (float)((ulong)in_stack_000000b8 >> 0x20);
  plVar40 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(char *)(lVar30 + 0x194) == '\0') goto LAB_0248fabc;
  iVar15 = *(int *)(lVar39 + lVar20 * 0x178 + 0x2c);
  if (iVar15 != 0) goto LAB_0248f808;
  fVar53 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar3,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
  case 0:
    lVar27 = lVar39 + lVar20 * 0x178;
    *(undefined4 *)(lVar27 + 0x84) = 0;
    *(undefined4 *)(lVar27 + 0xac) = 0;
    *(undefined4 *)(lVar27 + 0xd4) = 0x3f800000;
    fVar53 = 1.0;
    break;
  case 1:
    fVar58 = *(float *)(lVar39 + lVar20 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
      lVar27 = lVar39 + lVar20 * 0x178;
      fVar47 = (fStack00000000000000c4 + fVar58) - *(float *)(in_stack_00000070 + 0x230);
      fVar58 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      goto LAB_0248f2dc;
    }
    lVar27 = lVar39 + lVar20 * 0x178;
    fVar47 = fVar47 - fVar63;
    *(float *)(lVar27 + 0x84) = fVar53 + (fVar58 - fVar63) / fVar47;
    *(float *)(lVar27 + 0xac) = fVar53 + (*(float *)(lVar27 + 0x98) - fVar63) / fVar47;
    *(float *)(lVar27 + 0xd4) = fVar53 + (*(float *)(lVar27 + 0xc0) - fVar63) / fVar47;
    fVar53 = fVar53 + (*(float *)(lVar27 + 0xe8) - fVar63) / fVar47;
    break;
  case 2:
    lVar27 = lVar39 + lVar20 * 0x178;
    fVar58 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
    fVar47 = (fStack00000000000000c4 + *(float *)(lVar27 + 0x70)) -
             *(float *)(in_stack_00000070 + 0x230);
LAB_0248f2dc:
    *(float *)(lVar27 + 0x84) = fVar53 + fVar47 / fVar58;
    *(float *)(lVar27 + 0xac) =
         fVar53 + ((fStack00000000000000c4 + *(float *)(lVar27 + 0x98)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    *(float *)(lVar27 + 0xd4) =
         fVar53 + ((fStack00000000000000c4 + *(float *)(lVar27 + 0xc0)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    fVar53 = fVar53 + ((fStack00000000000000c4 + *(float *)(lVar27 + 0xe8)) -
                      *(float *)(in_stack_00000070 + 0x230)) /
                      (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x61]) {
    case 0:
      lVar27 = lVar39 + lVar20 * 0x178;
      *(undefined4 *)(lVar27 + 0x88) = 0;
      *(undefined4 *)(lVar27 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar27 + 0xd8) = 0;
      *(undefined4 *)(lVar27 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar27 = lVar39 + lVar20 * 0x178;
      fVar58 = fVar58 - fVar57;
      fVar47 = fVar53 + (*(float *)(lVar27 + 0x74) - fVar57) / fVar58;
      fVar58 = fVar53 + (*(float *)(lVar27 + 0x9c) - fVar57) / fVar58;
      *(float *)(lVar27 + 0x88) = fVar47;
      *(float *)(lVar27 + 0xb0) = fVar58;
      *(float *)(lVar27 + 0xd8) = fVar47;
      *(float *)(lVar27 + 0x100) = fVar58;
      break;
    case 2:
      lVar27 = lVar39 + lVar20 * 0x178;
      fVar47 = fVar53 + (*(float *)(lVar27 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                        (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar27 + 0x88) = fVar47;
      fVar58 = *(float *)(unaff_x19 + 0x9b);
      fVar57 = *(float *)(unaff_x19 + 0x9c);
      *(float *)(lVar27 + 0xd8) = fVar47;
      fVar47 = fVar53 + (*(float *)(lVar27 + 0x9c) - fVar58) / (fVar57 - fVar58);
      *(float *)(lVar27 + 0xb0) = fVar47;
      *(float *)(lVar27 + 0x100) = fVar47;
      break;
    case 3:
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
      uVar42 = (uint)*(undefined8 *)(lVar39 + 0x18);
    }
    if (uVar42 <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar27 = lVar39 + lVar20 * 0x178;
    fVar47 = *(float *)(lVar27 + 0x15c);
    fVar58 = (1.0 - (*(float *)(lVar27 + 0x88) + *(float *)(lVar27 + 0xb0)) * fVar47) * 0.5;
    fVar57 = fVar53 + *(float *)(lVar27 + 0x88) * fVar47 + fVar58;
    fVar53 = fVar53 + fVar58 + *(float *)(lVar27 + 0xb0) * fVar47;
    *(float *)(lVar27 + 0x84) = fVar57;
    *(float *)(lVar27 + 0xac) = fVar57;
    *(float *)(lVar27 + 0xd4) = fVar53;
    break;
  default:
    goto switchD_0248f240_default;
  }
  *(float *)(lVar39 + lVar20 * 0x178 + 0xfc) = fVar53;
switchD_0248f240_default:
  switch((int)unaff_x19[0x61]) {
  case 0:
    if (uVar42 <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar27 = lVar39 + lVar20 * 0x178;
    *(undefined4 *)(lVar27 + 0x88) = 0;
    *(undefined4 *)(lVar27 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar27 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar27 + 0x100) = 0;
    break;
  case 1:
    if (uVar11 < uVar42) {
      lVar27 = lVar39 + lVar20 * 0x178;
      fVar55 = fVar55 - fVar56;
      fVar53 = (*(float *)(lVar27 + 0x74) - fVar56) / fVar55;
      fVar55 = (*(float *)(lVar27 + 0x9c) - fVar56) / fVar55;
      *(float *)(lVar27 + 0x88) = fVar53;
      goto LAB_0248f644;
    }
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  case 2:
    if (uVar42 <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar27 = lVar39 + lVar20 * 0x178;
    fVar53 = (*(float *)(lVar27 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
    *(float *)(lVar27 + 0x88) = fVar53;
    fVar55 = (*(float *)(lVar27 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_0248f644:
    *(float *)(lVar27 + 0xb0) = fVar55;
    *(float *)(lVar27 + 0xd8) = fVar55;
    *(float *)(lVar27 + 0x100) = fVar53;
    break;
  case 3:
    if (uVar42 <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar27 = lVar39 + lVar20 * 0x178;
    fVar55 = *(float *)(lVar27 + 0x15c);
    fVar47 = (1.0 - (*(float *)(lVar27 + 0x84) + *(float *)(lVar27 + 0xd4)) / fVar55) * 0.5;
    fVar53 = *(float *)(lVar27 + 0x84) / fVar55 + fVar47;
    fVar47 = fVar47 + *(float *)(lVar27 + 0xd4) / fVar55;
    *(float *)(lVar27 + 0x88) = fVar53;
    *(float *)(lVar27 + 0xb0) = fVar47;
    *(float *)(lVar27 + 0x100) = fVar53;
    *(float *)(lVar27 + 0xd8) = fVar47;
  }
  if (uVar42 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar27 = lVar39 + lVar20 * 0x178;
  fVar53 = ABS(fVar50) * *(float *)(lVar27 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
  if ((*(char *)(lVar27 + 0x5c) == '\0') && ((*(byte *)(lVar39 + lVar20 * 0x178 + 400) & 1) != 0)) {
    fVar53 = -fVar53;
  }
  lVar27 = lVar39 + lVar20 * 0x178;
  fVar55 = *(float *)(lVar27 + 0x88);
  fVar58 = *(float *)(lVar27 + 0x84);
  fVar47 = -2.1474836e+09;
  if (fVar58 != INFINITY) {
    fVar47 = (float)(int)fVar58;
  }
  fVar57 = *(float *)(lVar27 + 0xd4);
  fVar63 = *(float *)(lVar27 + 0xd8);
  fVar56 = -2.1474836e+09;
  if (fVar55 != INFINITY) {
    fVar56 = (float)(int)fVar55;
  }
  uVar48 = FUN_024e0374(fVar58 - fVar47,fVar55 - fVar56);
  *(undefined4 *)(lVar27 + 0x84) = uVar48;
  if (*(uint *)(lVar39 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar63 = fVar63 - fVar56;
  *(float *)(lVar27 + 0x88) = fVar53;
  uVar48 = FUN_024e0374(fVar58 - fVar47,fVar63);
  *(undefined4 *)(lVar39 + lVar20 * 0x178 + 0xac) = uVar48;
  if (*(uint *)(lVar39 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar57 = fVar57 - fVar47;
  *(float *)(lVar39 + lVar20 * 0x178 + 0xb0) = fVar53;
  fVar47 = (float)FUN_024e0374(fVar57,fVar63);
  *(float *)(lVar27 + 0xd4) = fVar47;
  if (*(uint *)(lVar39 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar27 + 0xd8) = fVar53;
  uVar48 = FUN_024e0374(fVar57,fVar55 - fVar56);
  *(undefined4 *)(lVar39 + lVar20 * 0x178 + 0xfc) = uVar48;
  uVar42 = (uint)*(undefined8 *)(lVar39 + 0x18);
  if (uVar42 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar39 + lVar20 * 0x178 + 0x100) = fVar53;
LAB_0248f808:
  if (((int)uVar11 < (int)unaff_x19[100]) &&
     (iStack00000000000000a4 < *(int *)((long)unaff_x19 + 0x324))) {
    if (((int)uVar3 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar42 <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar30 = lVar39 + lVar20 * 0x178;
      *(ulong *)(lVar30 + 0x70) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar30 + 0x70) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar30 + 0x70));
      *(float *)(lVar30 + 0x78) = fVar66 + *(float *)(lVar30 + 0x78);
      plVar40 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (*(uint *)(lVar39 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar30 = lVar39 + lVar20 * 0x178;
      *(ulong *)(lVar30 + 0x98) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar30 + 0x98) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar30 + 0x98));
      *(float *)(lVar30 + 0xa0) = fVar66 + *(float *)(lVar30 + 0xa0);
      uVar42 = *(uint *)(lVar39 + 0x18);
LAB_0248fa4c:
      if (uVar42 <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar30 = lVar39 + lVar20 * 0x178;
      *(ulong *)(lVar30 + 0xc0) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar30 + 0xc0) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar30 + 0xc0));
      *(float *)(lVar30 + 200) = fVar66 + *(float *)(lVar30 + 200);
      if (*(uint *)(lVar39 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar30 = lVar39 + lVar20 * 0x178;
      *(ulong *)(lVar30 + 0xe8) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar30 + 0xe8) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar30 + 0xe8));
      *(float *)(lVar30 + 0xf0) = fVar66 + *(float *)(lVar30 + 0xf0);
      if (iVar15 != 0) goto LAB_0248f9d0;
LAB_0248fa9c:
      pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0248faa8:
      (*pcVar31)();
      goto LAB_0248fabc;
    }
    if (((int)uVar3 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
      if (uVar11 < uVar42) {
        if (*(uint *)(lVar39 + lVar20 * 0x178 + 0x68) != uStack0000000000000030) goto LAB_0248f8d8;
        lVar30 = lVar39 + lVar20 * 0x178;
        *(ulong *)(lVar30 + 0x70) =
             CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar30 + 0x70) >> 0x20),
                      fVar68 + (float)*(undefined8 *)(lVar30 + 0x70));
        *(float *)(lVar30 + 0x78) = fVar66 + *(float *)(lVar30 + 0x78);
        if (uVar11 < *(uint *)(lVar39 + 0x18)) {
          lVar30 = lVar39 + lVar20 * 0x178;
          *(ulong *)(lVar30 + 0x98) =
               CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar30 + 0x98) >> 0x20),
                        fVar68 + (float)*(undefined8 *)(lVar30 + 0x98));
          *(float *)(lVar30 + 0xa0) = fVar66 + *(float *)(lVar30 + 0xa0);
          uVar42 = *(uint *)(lVar39 + 0x18);
          plVar40 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          goto LAB_0248fa4c;
        }
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    }
  }
LAB_0248f8d8:
  if (uVar42 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774d76 = '\x01';
  }
  puVar8 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  lVar27 = lVar39 + lVar20 * 0x178;
  uVar48 = *(undefined4 *)
            (*(undefined8 **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8) + 1);
  *(undefined8 *)(lVar27 + 0x70) =
       **(undefined8 **)
         (*(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
         0xb8);
  *(undefined4 *)(lVar27 + 0x78) = uVar48;
  plVar40 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(uint *)(lVar39 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar27 = lVar39 + lVar20 * 0x178;
  uVar48 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar27 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar27 + 0xa0) = uVar48;
  if (*(uint *)(lVar39 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar27 = lVar39 + lVar20 * 0x178;
  uVar48 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar27 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar27 + 200) = uVar48;
  if (*(uint *)(lVar39 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar27 = lVar39 + lVar20 * 0x178;
  uVar48 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar27 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar27 + 0xf0) = uVar48;
  if (*(uint *)(lVar39 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined1 *)(lVar30 + 0x194) = 0;
  if (iVar15 == 0) goto LAB_0248fa9c;
LAB_0248f9d0:
  if (iVar15 == 1) {
    pcVar31 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_0248faa8;
  }
LAB_0248fabc:
  if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar30 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar30 = lVar30 + lVar20 * 0x178;
  uVar17 = *(undefined8 *)(lVar30 + 0x11c);
  *(undefined8 *)(lVar30 + 0x11c) =
       CONCAT44(fVar46 + (float)((ulong)uVar17 >> 0x20),fVar68 + (float)uVar17);
  *(float *)(lVar30 + 0x124) = fVar66 + *(float *)(lVar30 + 0x124);
  if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar30 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar30 = lVar30 + lVar20 * 0x178;
  *(ulong *)(lVar30 + 0x110) =
       CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar30 + 0x110) >> 0x20),
                fVar68 + (float)*(undefined8 *)(lVar30 + 0x110));
  *(float *)(lVar30 + 0x118) = fVar66 + *(float *)(lVar30 + 0x118);
  if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar30 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar30 = lVar30 + lVar20 * 0x178;
  *(ulong *)(lVar30 + 0x128) =
       CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar30 + 0x128) >> 0x20),
                fVar68 + (float)*(undefined8 *)(lVar30 + 0x128));
  *(float *)(lVar30 + 0x130) = fVar66 + *(float *)(lVar30 + 0x130);
  if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar30 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar30 = lVar30 + lVar20 * 0x178;
  *(float *)(lVar30 + 0x134) = fVar68 + *(float *)(lVar30 + 0x134);
  *(ulong *)(lVar30 + 0x138) =
       CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar30 + 0x138) >> 0x20),
                fVar46 + (float)*(undefined8 *)(lVar30 + 0x138));
  lVar30 = *in_stack_00000150;
  if ((lVar30 == 0) || (lVar27 = *(long *)(lVar30 + 0x38), lVar27 == 0)) goto LAB_02491464;
  uVar42 = *(uint *)(lVar27 + 0x18);
  if (uVar42 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar37 = lVar27 + lVar20 * 0x178;
  *(ulong *)(lVar37 + 0x140) =
       CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar37 + 0x140) >> 0x20),
                fVar68 + (float)*(undefined8 *)(lVar37 + 0x140));
  *(ulong *)(lVar37 + 0x148) =
       CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar37 + 0x148) >> 0x20),
                fVar46 + (float)*(undefined8 *)(lVar37 + 0x148));
  *(float *)(lVar37 + 0x150) = fVar46 + *(float *)(lVar37 + 0x150);
  if (uVar3 == uVar13) {
    uVar13 = *in_stack_00000148 - 1;
    if (uVar11 == uVar13) goto LAB_0248fccc;
  }
  else {
    lVar30 = *(long *)(lVar30 + 0x50);
    if (lVar30 == 0) goto LAB_02491464;
    if (*(uint *)(lVar30 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar37 = (long)(int)uVar13;
    lVar38 = lVar30 + lVar37 * 0x5c;
    fVar47 = fVar46 + *(float *)(lVar38 + 0x54);
    *(ulong *)(lVar38 + 0x4c) =
         CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar38 + 0x4c) >> 0x20),
                  fVar46 + (float)*(undefined8 *)(lVar38 + 0x4c));
    *(float *)(lVar38 + 0x54) = fVar47;
    *(float *)(lVar38 + 0x58) = fVar68 + *(float *)(lVar38 + 0x58);
    if (uVar42 <= *(uint *)(lVar38 + 0x34))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar48 = *(undefined4 *)(lVar27 + (long)(int)*(uint *)(lVar38 + 0x34) * 0x178 + 0x11c);
    lVar30 = lVar30 + lVar37 * 0x5c;
    *(float *)(lVar30 + 0x70) = fVar47;
    *(undefined4 *)(lVar30 + 0x6c) = uVar48;
    lVar30 = *in_stack_00000150;
    if ((lVar30 == 0) || (lVar27 = *(long *)(lVar30 + 0x50), lVar27 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar27 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar30 = *(long *)(lVar30 + 0x38);
    if (lVar30 == 0) goto LAB_02491464;
    uVar13 = *(uint *)(lVar27 + lVar37 * 0x5c + 0x40);
    if (*(uint *)(lVar30 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar27 = lVar27 + lVar37 * 0x5c;
    *(undefined4 *)(lVar27 + 0x74) = *(undefined4 *)(lVar30 + (long)(int)uVar13 * 0x178 + 0x128);
    *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x4c);
    uVar13 = *in_stack_00000148 - 1;
LAB_0248fccc:
    if (uVar11 == uVar13) {
      lVar30 = *in_stack_00000150;
      if ((lVar30 == 0) || (lVar27 = *(long *)(lVar30 + 0x50), lVar27 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar27 + 0x18) <= uVar3)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar37 = lVar27 + lVar35 * 0x5c;
      fVar47 = fVar46 + *(float *)(lVar37 + 0x54);
      *(ulong *)(lVar37 + 0x4c) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar37 + 0x4c) >> 0x20),
                    fVar46 + (float)*(undefined8 *)(lVar37 + 0x4c));
      *(float *)(lVar37 + 0x54) = fVar47;
      *(float *)(lVar37 + 0x58) = fVar68 + *(float *)(lVar37 + 0x58);
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_02491464;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(lVar37 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar48 = *(undefined4 *)(lVar30 + (long)(int)*(uint *)(lVar37 + 0x34) * 0x178 + 0x11c);
      lVar27 = lVar27 + lVar35 * 0x5c;
      *(float *)(lVar27 + 0x70) = fVar47;
      *(undefined4 *)(lVar27 + 0x6c) = uVar48;
      lVar30 = *in_stack_00000150;
      if ((lVar30 == 0) || (lVar27 = *(long *)(lVar30 + 0x50), lVar27 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar27 + 0x18) <= uVar3)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_02491464;
      uVar13 = *(uint *)(lVar27 + lVar35 * 0x5c + 0x40);
      if (*(uint *)(lVar30 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar27 = lVar27 + lVar35 * 0x5c;
      *(undefined4 *)(lVar27 + 0x74) = *(undefined4 *)(lVar30 + (long)(int)uVar13 * 0x178 + 0x128);
      *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x4c);
    }
  }
  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar19 = FUN_016f9468(uVar33,0);
  if (((((uVar19 & 1) == 0) && (1 < uVar33 - 0x2010)) && (uVar33 != 0xad)) && (uVar33 != 0x2d)) {
    if (bVar6) {
      if (((uVar25 != 1) && ((int)uVar11 < (int)(*(uint *)(lVar39 + 0x18) - 1))) &&
         (((int)uVar11 < (int)*in_stack_00000148 && ((uVar33 == 0x2019 || (uVar33 == 0x27)))))) {
        if (*(uint *)(lVar39 + 0x18) <= uVar25 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar5 = *(undefined2 *)(lVar39 + lStack0000000000000128 + -0x438);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar19 = FUN_016f9468(uVar5,0);
        if ((uVar19 & 1) != 0) {
          if (*(uint *)(lVar39 + 0x18) <= uVar25)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar5 = *(undefined2 *)(lVar39 + lStack0000000000000128 + -0x148);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar19 = FUN_016f9468(uVar5,0);
          if ((uVar19 & 1) != 0) goto LAB_0248fee0;
        }
      }
    }
    else {
      if (uVar25 != 1) {
LAB_024909a0:
        bVar6 = false;
        goto LAB_0248fee8;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar19 = FUN_016f93a0(uVar33,0);
      if ((uVar19 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar19 = FUN_016f68bc(uVar33,0);
        if (((uVar33 != 0x200b) && ((uVar19 & 1) == 0)) && (*in_stack_00000148 != 1))
        goto LAB_024909a0;
      }
    }
    if (uVar11 == *in_stack_00000148 - 1) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar19 = FUN_016f9468(uVar33,0);
      iVar15 = iVar12;
      if ((uVar19 & 1) == 0) goto LAB_02490204;
    }
    else {
LAB_02490204:
      iVar15 = uVar25 - 2;
    }
    lVar30 = *in_stack_00000150;
    if (lVar30 == 0) goto LAB_02491464;
    lVar27 = *(long *)(lVar30 + 0x40);
    if (lVar27 == 0) goto LAB_02491464;
    uVar13 = *(uint *)(lVar30 + 0x24);
    iVar16 = *(int *)(lVar27 + 0x18);
    if (iVar16 < (int)(uVar13 + 1)) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147b84((long *)(lVar30 + 0x40),iVar16 + 1,
                   *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
      lVar30 = *in_stack_00000150;
      if (lVar30 == 0) goto LAB_02491464;
    }
    lVar27 = *(long *)(lVar30 + 0x40);
    if (lVar27 == 0) goto LAB_02491464;
    if (*(uint *)(lVar27 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar27 = lVar27 + (long)(int)uVar13 * 0x18;
    *(long **)(lVar27 + 0x20) = unaff_x19;
    *(uint *)(lVar27 + 0x28) = uStack0000000000000114;
    *(int *)(lVar27 + 0x2c) = iVar15;
    *(uint *)(lVar27 + 0x30) = (iVar15 - uStack0000000000000114) + 1;
    lVar27 = *(long *)(lVar30 + 0x50);
    *(int *)(lVar30 + 0x24) = *(int *)(lVar30 + 0x24) + 1;
    if (lVar27 == 0) goto LAB_02491464;
    if (*(uint *)(lVar27 + 0x18) <= uVar3)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar27 = lVar27 + lVar35 * 0x5c;
    bVar6 = false;
    iStack00000000000000a4 = iStack00000000000000a4 + 1;
    *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
  }
  else {
    if (!bVar6) {
      uStack0000000000000114 = uVar11;
    }
    if (uVar11 == *in_stack_00000148 - 1) {
      lVar30 = *in_stack_00000150;
      if (lVar30 == 0) goto LAB_02491464;
      lVar27 = *(long *)(lVar30 + 0x40);
      if (lVar27 == 0) goto LAB_02491464;
      uVar13 = *(uint *)(lVar30 + 0x24);
      iVar15 = *(int *)(lVar27 + 0x18);
      if (iVar15 < (int)(uVar13 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar30 + 0x40),iVar15 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar30 = *in_stack_00000150;
        if (lVar30 == 0) goto LAB_02491464;
      }
      lVar27 = *(long *)(lVar30 + 0x40);
      if (lVar27 == 0) goto LAB_02491464;
      if (*(uint *)(lVar27 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar27 = lVar27 + (long)(int)uVar13 * 0x18;
      *(long **)(lVar27 + 0x20) = unaff_x19;
      *(uint *)(lVar27 + 0x28) = uStack0000000000000114;
      *(uint *)(lVar27 + 0x2c) = uVar11;
      *(uint *)(lVar27 + 0x30) = uVar25 - uStack0000000000000114;
      lVar27 = *(long *)(lVar30 + 0x50);
      *(int *)(lVar30 + 0x24) = *(int *)(lVar30 + 0x24) + 1;
      if (lVar27 == 0) goto LAB_02491464;
      if (*(uint *)(lVar27 + 0x18) <= uVar3)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar27 = lVar27 + lVar35 * 0x5c;
      iStack00000000000000a4 = iStack00000000000000a4 + 1;
      *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
    }
LAB_0248fee0:
    bVar6 = true;
  }
LAB_0248fee8:
  if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
  goto LAB_02491464;
  uVar13 = *(uint *)(lVar30 + 0x18);
  if (uVar13 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar30 + lVar20 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar9) {
LAB_0248ff18:
      if (uVar13 <= uVar25 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar35 = *unaff_x19;
      uVar48 = *(undefined4 *)(lVar30 + lStack0000000000000128 + -0x330);
      uVar59 = *(undefined4 *)(lVar30 + lStack0000000000000128 + -0x2f8);
LAB_02490474:
      pcVar31 = *(code **)(lVar35 + 0x908);
LAB_0249047c:
      (*pcVar31)(fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,uVar48,
                 fStack00000000000000cc,0,fStack0000000000000058,uVar59);
      puVar8 = System_Threading_Mutex_TypeInfo;
      lVar30 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar30 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar30 = *(long *)puVar8;
      }
LAB_024904cc:
      bVar9 = false;
      fVar45 = 0.0;
      fStack00000000000000cc = *(float *)(*(long *)(lVar30 + 0xb8) + 0x15a8);
      in_stack_000000c8 = 0.0;
    }
    else {
LAB_024903d8:
      bVar9 = false;
    }
  }
  else {
    lVar30 = lVar30 + lVar20 * 0x178;
    iVar15 = *(int *)(lVar30 + 0x68);
    *(int *)(lVar30 + 0x16c) = iVar14;
    if ((((int)unaff_x19[100] < (int)uVar11) || ((int)unaff_x19[0x65] < (int)uVar3)) ||
       (((int)unaff_x19[0x5b] == 5 && (iVar15 + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar19 = FUN_016f68bc(uVar33,0);
    if ((uVar33 != 0x200b) && ((uVar19 & 1) == 0)) {
      lVar30 = *in_stack_00000150;
      if ((lVar30 == 0) || (lVar35 = *(long *)(lVar30 + 0x38), lVar35 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar35 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      fVar47 = *(float *)(lVar35 + lVar20 * 0x178 + 0x160);
      if (fVar45 <= fVar47) {
        fVar45 = fVar47;
      }
      if (in_stack_000000c8 <= ABS(fVar53)) {
        in_stack_000000c8 = ABS(fVar53);
      }
      if ((float)iVar15 != fStack0000000000000048) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar30 = *in_stack_00000150;
          if (lVar30 == 0) goto LAB_02491464;
          lVar35 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        else {
          lVar35 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        fStack00000000000000cc = *(float *)(lVar35 + 0x15a8);
      }
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_02491464;
      if (*(uint *)(lVar30 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0x1e] == 0) goto LAB_02491464;
      fVar55 = *(float *)(lVar30 + lVar20 * 0x178 + 0x14c);
      fVar47 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
      fVar55 = fVar55 + fVar45 * fVar47;
      fStack0000000000000048 = (float)iVar15;
      if (fVar55 <= fStack00000000000000cc) {
        fStack00000000000000cc = fVar55;
      }
    }
    if (!bVar9) {
      bVar9 = false;
      if ((((uVar33 == 0xd) || ((uVar33 | 1) == 0xb)) || ((int)uVar32 < (int)uVar11)) || (!bVar1))
      goto LAB_024904e8;
      if (uVar11 == uVar32) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar19 = FUN_016fa418(uVar33,0);
        if ((uVar19 & 1) != 0) goto LAB_024903d8;
      }
      if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar30 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar30 = lVar30 + lVar20 * 0x178;
      fStack0000000000000058 = *(float *)(lVar30 + 0x160);
      fStack0000000000000054 = *(float *)(lVar30 + 0x11c);
      bVar9 = fVar45 != 0.0;
      fVar47 = fStack0000000000000058;
      if (bVar9) {
        fVar47 = fVar45;
      }
      fVar45 = fVar47;
      _bStack000000000000005c = *(uint *)(lVar30 + 0x168);
      fStack0000000000000050 = 0.0;
      fVar47 = fVar53;
      if (bVar9) {
        fVar47 = in_stack_000000c8;
      }
      fStack000000000000004c = fStack00000000000000cc;
      in_stack_000000c8 = fVar47;
    }
    if (*in_stack_00000148 == 1) {
      if ((*in_stack_00000150 != 0) && (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 != 0))
      {
        if (uVar11 < *(uint *)(lVar30 + 0x18)) {
          lVar30 = lVar30 + lVar20 * 0x178;
          lVar35 = *unaff_x19;
          uVar48 = *(undefined4 *)(lVar30 + 0x128);
          uVar59 = *(undefined4 *)(lVar30 + 0x160);
          goto LAB_02490474;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    if ((uVar11 == uVar2) || ((int)uVar32 <= (int)uVar11)) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar19 = FUN_016f68bc(uVar33,0);
      if ((*in_stack_00000150 != 0) && (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 != 0))
      {
        if (uVar33 == 0x200b || (uVar19 & 1) != 0) {
          lVar35 = lVar41;
          if (*(uint *)(lVar30 + 0x18) <= uVar32)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
          lVar35 = lVar20;
          if (*(uint *)(lVar30 + 0x18) <= uVar11)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        lVar30 = lVar30 + lVar35 * 0x178;
        uVar48 = *(undefined4 *)(lVar30 + 0x128);
        uVar59 = *(undefined4 *)(lVar30 + 0x160);
        pcVar31 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_0249047c;
      }
      goto LAB_02491464;
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 != 0))
      {
        uVar13 = *(uint *)(lVar30 + 0x18);
        goto LAB_0248ff18;
      }
      goto LAB_02491464;
    }
    if ((int)uVar11 < (int)(*in_stack_00000148 - 1)) {
      if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar30 + 0x18) <= uVar25)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar19 = FUN_024a9e4c(_bStack000000000000005c,*(undefined4 *)(lVar30 + lStack0000000000000128)
                            ,0);
      if ((uVar19 & 1) == 0) {
        if ((*in_stack_00000150 != 0) &&
           (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 != 0)) {
          if (uVar11 < *(uint *)(lVar30 + 0x18)) {
            lVar30 = lVar30 + lVar20 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,
                       *(undefined4 *)(lVar30 + 0x128),fStack00000000000000cc,0,
                       fStack0000000000000058,*(undefined4 *)(lVar30 + 0x160));
            puVar8 = System_Threading_Mutex_TypeInfo;
            lVar30 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar30 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar30 = *(long *)puVar8;
            }
            goto LAB_024904cc;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        goto LAB_02491464;
      }
    }
    bVar9 = true;
  }
LAB_024904e8:
  if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar30 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (lVar36 == 0) goto LAB_02491464;
  uVar13 = *(uint *)(lVar30 + lVar20 * 0x178 + 400);
  fVar47 = (float)FUN_026fd1f0(lVar36 + 0x50,0);
  if ((uVar13 >> 6 & 1) == 0) {
    if (bVar10) {
      if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar30 + 0x18) <= uVar25 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar48 = *(undefined4 *)(lVar30 + lStack0000000000000128 + -0x330);
      pcVar31 = *(code **)(*unaff_x19 + 0x908);
      fVar46 = in_stack_00000080._4_4_ * fVar47 +
               *(float *)(lVar30 + lStack0000000000000128 + -0x30c);
LAB_02490a68:
      (*pcVar31)(in_stack_00000078._4_4_,in_stack_00000068._4_4_,uStack0000000000000060,uVar48,
                 fVar46,0,in_stack_00000080._4_4_,in_stack_00000080._4_4_);
    }
LAB_02490a9c:
    bVar10 = false;
  }
  else {
    lVar30 = *in_stack_00000150;
    if ((lVar30 == 0) || (lVar35 = *(long *)(lVar30 + 0x38), lVar35 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar35 + 0x18) <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar35 + lVar20 * 0x178 + 0x174) = iVar14;
    if ((((int)unaff_x19[100] < (int)uVar11) || ((int)unaff_x19[0x65] < (int)uVar3)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar35 + lVar20 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar33 == 0xd) || ((uVar33 | 1) == 0xb)) || ((int)uVar32 < (int)uVar11)) ||
       (bVar10 || !bVar1)) {
LAB_02490668:
      if (!bVar10) goto LAB_02490a9c;
    }
    else {
      if (uVar11 == uVar32) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar19 = FUN_016fa418(uVar33,0);
        if ((uVar19 & 1) != 0) goto LAB_02490668;
        lVar30 = *in_stack_00000150;
        if (lVar30 == 0) goto LAB_02491464;
      }
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_02491464;
      if (*(uint *)(lVar30 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar30 = lVar30 + lVar20 * 0x178;
      fStack0000000000000038 = *(float *)(lVar30 + 0x60);
      in_stack_00000080._4_4_ = *(float *)(lVar30 + 0x160);
      fStack0000000000000034 = *(float *)(lVar30 + 0x14c);
      in_stack_00000078._4_4_ = *(float *)(lVar30 + 0x11c);
      in_stack_00000068._4_4_ = fVar47 * in_stack_00000080._4_4_ + fStack0000000000000034;
      uStack0000000000000060 = 0;
    }
    uVar13 = *in_stack_00000148;
    if (uVar13 == 1) {
      if (*in_stack_00000150 != 0) {
        lVar30 = *(long *)(*in_stack_00000150 + 0x38);
joined_r0x024907c8:
        if (lVar30 != 0) {
          if (uVar11 < *(uint *)(lVar30 + 0x18)) {
            lVar30 = lVar30 + lVar20 * 0x178;
            lVar41 = *unaff_x19;
            uVar48 = *(undefined4 *)(lVar30 + 0x128);
            fVar46 = *(float *)(lVar30 + 0x14c);
LAB_024907e8:
            pcVar31 = *(code **)(lVar41 + 0x908);
LAB_02490a64:
            fVar46 = fVar47 * in_stack_00000080._4_4_ + fVar46;
            goto LAB_02490a68;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
      }
      goto LAB_02491464;
    }
    if (uVar11 == uVar2) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar19 = FUN_016f68bc(uVar33,0);
      if ((*in_stack_00000150 != 0) && (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 != 0))
      {
        uVar13 = *(uint *)(lVar30 + 0x18);
        if (uVar33 == 0x200b || (uVar19 & 1) != 0) {
          if (uVar13 <= uVar32)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
LAB_02490a40:
          lVar41 = lVar20;
          if (uVar13 <= uVar11)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
LAB_02490a48:
        lVar30 = lVar30 + lVar41 * 0x178;
        fVar46 = *(float *)(lVar30 + 0x14c);
        uVar48 = *(undefined4 *)(lVar30 + 0x128);
        pcVar31 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_02490a64;
      }
      goto LAB_02491464;
    }
    if ((int)uVar11 < (int)uVar13) {
      lVar30 = *in_stack_00000150;
      if ((lVar30 != 0) && (lVar35 = *(long *)(lVar30 + 0x38), lVar35 != 0)) {
        if (uVar25 < *(uint *)(lVar35 + 0x18)) {
          if (*(float *)(lVar35 + lStack0000000000000128 + -0x108) == fStack0000000000000038) {
            fVar55 = *(float *)(lVar35 + lStack0000000000000128 + -0x1c);
            if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar19 = FUN_024aa280(fVar46 + fVar55,fStack0000000000000034,0);
            if ((uVar19 & 1) != 0) {
              uVar13 = *in_stack_00000148;
              goto LAB_024908ec;
            }
            lVar30 = *in_stack_00000150;
            if (lVar30 == 0) goto LAB_02491464;
          }
          lVar30 = *(long *)(lVar30 + 0x38);
          if (lVar30 != 0) {
            uVar13 = *(uint *)(lVar30 + 0x18);
            if ((int)uVar11 <= (int)uVar32) goto LAB_02490a40;
            if (uVar32 < uVar13) goto LAB_02490a48;
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
          goto LAB_02491464;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
LAB_024908ec:
    if ((int)uVar11 < (int)uVar13) {
      iVar15 = FUN_02681c0c(lVar36,0);
      if (*(uint *)(lVar39 + 0x18) <= uVar25)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar30 = *(long *)(lVar39 + lStack0000000000000128 + -0x130);
      if (lVar30 == 0) goto LAB_02491464;
      iVar16 = FUN_02681c0c(lVar30,0);
      if (iVar15 != iVar16) {
        if (*in_stack_00000150 != 0) {
          lVar30 = *(long *)(*in_stack_00000150 + 0x38);
          goto joined_r0x024907c8;
        }
        goto LAB_02491464;
      }
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 != 0))
      {
        if (uVar25 - 2 < *(uint *)(lVar30 + 0x18)) {
          lVar41 = *unaff_x19;
          uVar48 = *(undefined4 *)(lVar30 + lStack0000000000000128 + -0x330);
          fVar46 = *(float *)(lVar30 + lStack0000000000000128 + -0x30c);
          goto LAB_024907e8;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    bVar10 = true;
  }
  if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
  goto LAB_02491464;
  uVar13 = (uint)*(undefined8 *)(lVar30 + 0x18);
  if (uVar13 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar30 + lVar20 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar7) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
    }
LAB_02490b04:
    bVar7 = false;
  }
  else {
    if ((((int)unaff_x19[100] < (int)uVar11) || ((int)unaff_x19[0x65] < (int)uVar3)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar30 + lVar20 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar7) {
      if ((((uVar33 == 0xd) || ((uVar33 | 1) == 0xb)) || ((int)uVar32 < (int)uVar11)) || (!bVar1))
      goto LAB_02490b04;
      if (uVar11 == uVar32) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar19 = FUN_016fa418(uVar33,0);
        if ((uVar19 & 1) != 0) goto LAB_02490b04;
      }
      puVar8 = System_Threading_Mutex_TypeInfo;
      lVar41 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar41 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar41 = *(long *)puVar8;
      }
      if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
      goto LAB_02491464;
      uVar13 = (uint)*(undefined8 *)(lVar30 + 0x18);
      if (uVar13 <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar41 = *(long *)(lVar41 + 0xb8);
      lVar35 = lVar30 + lVar20 * 0x178;
      in_stack_00001798 = *(undefined8 *)(lVar35 + 0x184);
      in_stack_00001790 = *(undefined8 *)(lVar35 + 0x17c);
      fStack00000000000000a8 = *(float *)(lVar41 + 0x1598);
      in_stack_000017a0 = *(float *)(lVar35 + 0x18c);
      fStack00000000000000ac = *(float *)(lVar41 + 0x159c);
      fStack0000000000000098 = *(float *)(lVar41 + 0x15a0);
      in_stack_000000a0 = *(float *)(lVar41 + 0x15a4);
      uStack0000000000000094 = 0;
    }
    if (uVar13 <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar30 = lVar30 + lVar20 * 0x178;
    fVar47 = *(float *)(lVar30 + 0x128);
    fVar56 = *(float *)(lVar30 + 0x188);
    uVar18 = *(undefined8 *)(lVar30 + 0x17c);
    fVar63 = *(float *)(lVar30 + 0x184);
    uVar17 = *(undefined8 *)(lVar30 + 0x184);
    fVar57 = *(float *)(lVar30 + 0x18c);
    fVar46 = *(float *)(lVar30 + 0x11c);
    fVar55 = *(float *)(lVar30 + 0x148);
    fVar58 = *(float *)(lVar30 + 0x150);
    in_stack_00000158 = uVar18;
    fStack0000000000000160 = fVar63;
    fStack0000000000000164 = fVar56;
    in_stack_00000168 = fVar57;
    in_stack_00000170 = in_stack_00001790;
    in_stack_00000178 = in_stack_00001798;
    in_stack_00000180 = in_stack_000017a0;
    uVar19 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
    lVar30 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if ((uVar19 & 1) == 0) {
      if (*(int *)(lVar30 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar30);
      }
      fVar47 = fVar47 + (float)in_stack_00001798;
      fVar46 = fVar46 - (float)((ulong)in_stack_00001790 >> 0x20);
      fVar55 = fVar55 + (float)((ulong)in_stack_00001798 >> 0x20);
      if (fVar46 <= fStack00000000000000a8) {
        fStack00000000000000a8 = fVar46;
      }
      if (fVar58 - in_stack_000017a0 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar58 - in_stack_000017a0;
      }
      if (fStack0000000000000098 <= fVar47) {
        fStack0000000000000098 = fVar47;
      }
      if (in_stack_000000a0 <= fVar55) {
        in_stack_000000a0 = fVar55;
      }
    }
    else {
      if (*(int *)(lVar30 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar30);
      }
      fVar46 = (fVar46 + (fStack0000000000000098 - (float)in_stack_00001798)) * 0.5;
      if (fVar58 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar58;
      }
      if (in_stack_000000a0 <= fVar55) {
        in_stack_000000a0 = fVar55;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,fVar46,
                 in_stack_000000a0,uStack0000000000000094);
      fStack00000000000000ac = fVar58 - fVar57;
      fStack0000000000000098 = fVar47 + fVar63;
      uStack0000000000000094 = 0;
      in_stack_000000a0 = fVar55 + fVar56;
      fStack00000000000000a8 = fVar46;
      in_stack_00001790 = uVar18;
      in_stack_00001798 = uVar17;
      in_stack_000017a0 = fVar57;
    }
    if (((*in_stack_00000148 == 1) || (uVar11 == uVar2)) ||
       (((int)uVar32 <= (int)uVar11 || (!bVar1)))) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
  }
  uVar11 = *in_stack_00000148;
  iVar12 = iVar12 + 1;
  lStack0000000000000128 = lStack0000000000000128 + 0x178;
  bVar1 = (int)uVar11 <= (int)uVar25;
  uVar13 = uVar3;
  uVar25 = uVar25 + 1;
  if (bVar1) goto LAB_02491038;
  goto LAB_0248ef74;
LAB_02491038:
  lVar39 = *in_stack_00000150;
  if (lVar39 != 0) {
    iVar14 = uVar3 + 1;
    plVar28 = (long *)PTR_DAT_033ed410;
LAB_02491068:
    *(uint *)(lVar39 + 0x18) = uVar11;
    lVar30 = unaff_x19[0xd3];
    *(int *)(lVar39 + 0x2c) = iVar14;
    iVar14 = iStack00000000000000a4;
    if ((int)uVar11 < 1) {
      iVar14 = 1;
    }
    if (iStack00000000000000a4 == 0) {
      iVar14 = 1;
    }
    *(int *)(lVar39 + 0x1c) = (int)lVar30;
    *(int *)(lVar39 + 0x24) = iVar14;
    *(int *)(lVar39 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar19 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar19 & 1) == 0)) {
LAB_02491468:
      lVar39 = *(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
LAB_02491474:
      if (*(int *)(lVar39 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar39 = unaff_x19[0xda];
    if (lVar39 != 0) {
      (**(code **)(lVar39 + 0x18))
                (*(undefined8 *)(lVar39 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar39 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x60), lVar39 == 0))
      goto LAB_02491464;
      if (*(int *)(*plVar28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar39 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      FUN_024e8000(lVar39 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar39 = *(long *)(unaff_x19[0x6c] + 0x60), lVar39 != 0)) {
        if (*(int *)(lVar39 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar39 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar39 = *(long *)(unaff_x19[0x6c] + 0x60), lVar39 != 0)) {
            if (*(int *)(lVar39 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar39 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar39 = *(long *)(unaff_x19[0x6c] + 0x60), lVar39 != 0)) {
                if (*(int *)(lVar39 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar39 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar39 = *(long *)(unaff_x19[0x6c] + 0x60), lVar39 != 0)) {
                    if (*(int *)(lVar39 + 0x18) == 0)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar39 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        lVar39 = *in_stack_00000150;
                        if (lVar39 != 0) {
                          lVar41 = 0;
                          lVar30 = 0;
                          do {
                            uVar19 = lVar30 + 1;
                            if ((long)*(int *)(lVar39 + 0x34) <= (long)uVar19) goto LAB_02491468;
                            lVar39 = *(long *)(lVar39 + 0x60);
                            if (lVar39 == 0) break;
                            if (*(int *)(*plVar28 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            if (*(uint *)(lVar39 + 0x18) <= uVar19)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            FUN_024e7ecc(lVar39 + lVar41 + 0x70,0);
                            lVar39 = unaff_x19[0xe0];
                            if (lVar39 == 0) break;
                            if (*(uint *)(lVar39 + 0x18) <= uVar19)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            uVar17 = *(undefined8 *)(lVar39 + lVar30 * 8 + 0x28);
                            if (*(int *)(*plVar40 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar22 = FUN_0268b4e0(uVar17,0,0);
                            if ((uVar22 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                if ((*in_stack_00000150 == 0) ||
                                   (lVar39 = *(long *)(*in_stack_00000150 + 0x60), lVar39 == 0))
                                break;
                                if (*(int *)(*plVar28 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                if (*(uint *)(lVar39 + 0x18) <= uVar19)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                                ;
                                FUN_024e8000(lVar39 + lVar41 + 0x70,1,0);
                              }
                              lVar39 = unaff_x19[0xe0];
                              if (lVar39 == 0) break;
                              if (*(uint *)(lVar39 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar39 = *(long *)(lVar39 + lVar30 * 8 + 0x28);
                              if (lVar39 == 0) break;
                              lVar39 = FUN_024eefa0(lVar39,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar20 = *(long *)(*in_stack_00000150 + 0x60), lVar20 == 0))
                              break;
                              if (*(uint *)(lVar20 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar39 == 0) break;
                              FUN_0266b9c4(lVar39,*(undefined8 *)(lVar20 + lVar41 + 0x80),0);
                              lVar39 = unaff_x19[0xe0];
                              if (lVar39 == 0) break;
                              if (*(uint *)(lVar39 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar39 = *(long *)(lVar39 + lVar30 * 8 + 0x28);
                              if (lVar39 == 0) break;
                              lVar39 = FUN_024eefa0(lVar39,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar20 = *(long *)(*in_stack_00000150 + 0x60), lVar20 == 0))
                              break;
                              if (*(uint *)(lVar20 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar39 == 0) break;
                              FUN_0266bbc8(lVar39,*(undefined8 *)(lVar20 + lVar41 + 0x98),0);
                              lVar39 = unaff_x19[0xe0];
                              if (lVar39 == 0) break;
                              if (*(uint *)(lVar39 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar39 = *(long *)(lVar39 + lVar30 * 8 + 0x28);
                              if (lVar39 == 0) break;
                              lVar39 = FUN_024eefa0(lVar39,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar20 = *(long *)(*in_stack_00000150 + 0x60), lVar20 == 0))
                              break;
                              if (*(uint *)(lVar20 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar39 == 0) break;
                              FUN_0266bc74(lVar39,*(undefined8 *)(lVar20 + lVar41 + 0xa0),0);
                              lVar39 = unaff_x19[0xe0];
                              if (lVar39 == 0) break;
                              if (*(uint *)(lVar39 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar39 = *(long *)(lVar39 + lVar30 * 8 + 0x28);
                              if (lVar39 == 0) break;
                              lVar39 = FUN_024eefa0(lVar39,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar20 = *(long *)(*in_stack_00000150 + 0x60), lVar20 == 0))
                              break;
                              if (*(uint *)(lVar20 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar39 == 0) break;
                              FUN_0266c1dc(lVar39,*(undefined8 *)(lVar20 + lVar41 + 0xa8),0);
                              lVar39 = unaff_x19[0xe0];
                              if (lVar39 == 0) break;
                              if (*(uint *)(lVar39 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar39 = *(long *)(lVar39 + lVar30 * 8 + 0x28);
                              if ((lVar39 == 0) || (lVar39 = FUN_024eefa0(lVar39,0), lVar39 == 0))
                              break;
                              FUN_0266ed90(lVar39,0);
                            }
                            lVar39 = *in_stack_00000150;
                            lVar30 = lVar30 + 1;
                            lVar41 = lVar41 + 0x50;
                          } while (lVar39 != 0);
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
LAB_02491464:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


