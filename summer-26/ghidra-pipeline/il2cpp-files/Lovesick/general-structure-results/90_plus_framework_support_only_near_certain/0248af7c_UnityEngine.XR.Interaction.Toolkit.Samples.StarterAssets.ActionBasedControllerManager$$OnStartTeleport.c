/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager$$OnStartTeleport
ENTRY_POINT: 0248af7c
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

void UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__OnStartTeleport
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
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  int *piVar18;
  ulong uVar19;
  undefined1 uVar20;
  char cVar21;
  uint uVar22;
  long lVar23;
  undefined4 *puVar24;
  long lVar25;
  uint uVar26;
  long *plVar27;
  float *pfVar28;
  code *pcVar29;
  uint uVar30;
  uint uVar31;
  long lVar32;
  float *pfVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long *unaff_x19;
  uint unaff_w20;
  int iVar39;
  long unaff_x21;
  uint unaff_w22;
  undefined4 unaff_w24;
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
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  double dVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined4 uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  ulong unaff_d9;
  float fVar63;
  float fVar64;
  float unaff_s12;
  float unaff_s13;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined4 uVar68;
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
  
  fVar51 = unaff_s13;
code_r0x0248af7c:
  iVar12 = *(int *)((long)unaff_x19 + 0x63c);
  iVar39 = (int)unaff_x21;
  if (iVar12 != 0) goto LAB_0248abc8;
LAB_0248af84:
  if ((*in_stack_00000150 != 0) && (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 != 0)) {
    uVar26 = *unaff_x26;
    uVar11 = *(uint *)(lVar23 + 0x18);
    if (uVar11 <= uVar26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar32 = *(long *)(lVar23 + (int)uVar26 * unaff_x21 + 0x30);
    unaff_x19[200] = lVar32;
    plVar27 = (long *)System_Threading_Mutex_TypeInfo;
    uVar22 = in_stack_000017bc;
    if (lVar32 == 0) goto LAB_0248ab98;
    lVar37 = lVar23 + (int)uVar26 * unaff_x21;
    lVar32 = *(long *)(lVar37 + 0x38);
    unaff_x19[0x1f] = lVar32;
    unaff_x19[0x22] = *(long *)(lVar37 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar37 + 0x58);
    if (unaff_w20 == 0) {
LAB_0248b014:
      if (lVar32 == 0) goto LAB_02491464;
      fVar58 = *(float *)(unaff_x19 + 0x3c);
                    /* try { // try from 0248b01c to 0258b157 has its CatchHandler @ 0248b01c
                       catch() { ... } // from try @ 0248b01c with catch @ 0248b01c
                       catch() { ... } // from try @ 0248b1ac with catch @ 0248b01c
                       catch() { ... } // from try @ 0248b2a8 with catch @ 0248b01c
                       catch() { ... } // from try @ 0248b2dc with catch @ 0248b01c
                       catch() { ... } // from try @ 0248b30c with catch @ 0248b01c */
      iVar12 = FUN_026fd110(lVar32 + 0x50,0);
      lVar23 = unaff_x19[0x1f];
    }
    else {
      lVar37 = unaff_x19[0x8e];
      if (lVar37 == 0) goto LAB_02491464;
      if (*(uint *)(lVar37 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if ((*(int *)(lVar37 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
         (uVar26 == *(uint *)(unaff_x19 + 0x92))) goto LAB_0248b014;
      if (uVar11 <= uVar26 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar32 == 0) goto LAB_02491464;
      fVar58 = *(float *)(lVar23 + (long)(int)(uVar26 - 1) * (long)iVar39 + 0x60);
      iVar12 = FUN_026fd110(lVar32 + 0x50,0);
      lVar23 = *unaff_x27;
    }
    if (lVar23 == 0) goto LAB_02491464;
    fVar43 = (float)FUN_026fd120(lVar23 + 0x50,0);
    fVar53 = in_stack_00000080._4_4_;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar53 = unaff_s12;
    }
    fVar45 = 0.0;
    fVar44 = 0.0;
    if ((unaff_w20 & in_stack_000017bc == 0x2026) == 0) {
      if (*unaff_x27 == 0) goto LAB_02491464;
      fVar44 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
      if (*unaff_x27 == 0) goto LAB_02491464;
      fVar45 = (float)FUN_026fd180(*unaff_x27 + 0x50,0);
    }
    lVar23 = unaff_x19[200];
    if ((lVar23 != 0) && (*(long *)(lVar23 + 0x20) != 0)) {
      fVar65 = *(float *)((long)unaff_x19 + 0x3fc);
      fVar67 = *(float *)(lVar23 + 0x2c);
      fVar46 = (float)FUN_026fd668(*(long *)(lVar23 + 0x20),0);
      if (*unaff_x27 != 0) {
        fVar47 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
        if (*unaff_x27 != 0) {
          fVar69 = *(float *)((long)unaff_x19 + 0x3fc);
          fVar48 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
          lVar23 = unaff_x19[0x6c];
          if ((lVar23 != 0) && (lVar32 = *(long *)(lVar23 + 0x38), lVar32 != 0)) {
            if (*(uint *)(lVar32 + 0x18) <= *unaff_x26)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            lVar32 = lVar32 + (int)*unaff_x26 * unaff_x21;
            *(undefined4 *)(lVar32 + 0x2c) = 0;
            fVar53 = ((fVar51 * fVar58) / (float)iVar12) * fVar43 * fVar53;
            fVar46 = fVar53 * fVar65 * fVar67 * fVar46;
            *(float *)(lVar32 + 0x160) = fVar46;
            uVar11 = *(uint *)(unaff_x19 + 0x23);
            fVar48 = fVar53 * fVar47 * fVar69 * fVar48;
            if (uVar11 == 0) {
              in_stack_00000130._4_4_ = *(float *)(unaff_x19 + 0xc2);
            }
            else {
              lVar32 = unaff_x19[0xe0];
              if (lVar32 == 0) goto LAB_02491464;
              if (*(uint *)(lVar32 + 0x18) <= uVar11)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              lVar32 = *(long *)(lVar32 + (long)(int)uVar11 * 8 + 0x20);
              if (lVar32 == 0) goto LAB_02491464;
              in_stack_00000130._4_4_ = *(float *)(lVar32 + 0x4c);
            }
LAB_0248b384:
            unaff_s12 = 1.0;
            unaff_d9 = (ulong)(uint)fVar46;
            fVar58 = 0.0;
            if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
              fVar58 = fVar46;
            }
LAB_0248b39c:
            lVar23 = *(long *)(lVar23 + 0x38);
            if (lVar23 == 0) goto LAB_02491464;
            if (*(uint *)(lVar23 + 0x18) <= *unaff_x26)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            lVar23 = lVar23 + (int)*unaff_x26 * unaff_x21;
            *(short *)(lVar23 + 0x20) = (short)in_stack_000017bc;
            *(int *)(lVar23 + 0x60) = (int)unaff_x19[0x3c];
            *(undefined4 *)(lVar23 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
            if ((unaff_x19[0x6c] == 0) || (lVar23 = *(long *)(unaff_x19[0x6c] + 0x38), lVar23 == 0))
            goto LAB_02491464;
            if (*(uint *)(lVar23 + 0x18) <= *unaff_x26)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            *(int *)(lVar23 + (int)*unaff_x26 * unaff_x21 + 0x168) = (int)unaff_x19[0x2a];
            if ((unaff_x19[0x6c] == 0) || (lVar23 = *(long *)(unaff_x19[0x6c] + 0x38), lVar23 == 0))
            goto LAB_02491464;
            if (*(uint *)(lVar23 + 0x18) <= *unaff_x26)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            *(undefined4 *)(lVar23 + (int)*unaff_x26 * unaff_x21 + 0x170) =
                 *(undefined4 *)((long)unaff_x19 + 0x154);
            if ((unaff_x19[0x6c] == 0) || (lVar23 = *(long *)(unaff_x19[0x6c] + 0x38), lVar23 == 0))
            goto LAB_02491464;
            uVar11 = *unaff_x26;
            FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
                         *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
            if (*(uint *)(lVar23 + 0x18) <= uVar11)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            uVar15 = unaff_x28[1];
            uVar17 = *unaff_x28;
            lVar23 = lVar23 + (int)uVar11 * unaff_x21;
            *(undefined4 *)(lVar23 + 0x18c) = in_stack_00000890;
            *(undefined8 *)(lVar23 + 0x184) = uVar15;
            *(undefined8 *)(lVar23 + 0x17c) = uVar17;
            if ((*in_stack_00000150 == 0) ||
               (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0)) goto LAB_02491464;
            if (*(uint *)(lVar23 + 0x18) <= *unaff_x26)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            *(undefined4 *)(lVar23 + (int)*unaff_x26 * unaff_x21 + 400) =
                 *(undefined4 *)((long)unaff_x19 + 0x254);
            if ((unaff_x19[200] == 0) || (lVar23 = *(long *)(unaff_x19[200] + 0x20), lVar23 == 0))
            goto LAB_02491464;
            FUN_026fd62c(&stack0x00000bf8,lVar23,0);
            unaff_x28[0x1df] = in_stack_00000c00;
            unaff_x28[0x1de] = CONCAT44(in_stack_00000bfc,in_stack_00000bf8);
            if ((int)in_stack_000017bc < 0x10000) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar11 = FUN_016f68bc(in_stack_000017bc,0);
              uVar11 = uVar11 & 1;
            }
            else {
              uVar11 = 0;
            }
            fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
            *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
            fVar53 = (float)unaff_d9;
            if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
              fVar65 = 0.0;
              fVar46 = 0.0;
              fVar43 = 0.0;
            }
            else {
              if (unaff_x19[200] == 0) goto LAB_02491464;
              uVar22 = *unaff_x26;
              uVar26 = *(uint *)(unaff_x19[200] + 0x28);
              if ((int)uVar22 < (int)in_stack_00000078._4_4_) {
                if ((*in_stack_00000150 == 0) ||
                   (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0)) goto LAB_02491464;
                if (*(uint *)(lVar23 + 0x18) <= uVar22 + 1)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                lVar23 = *(long *)(lVar23 + (long)(int)(uVar22 + 1) * (long)iVar39 + 0x30);
                if ((((lVar23 == 0) || (*unaff_x27 == 0)) ||
                    (lVar32 = *(long *)(*unaff_x27 + 0x128), lVar32 == 0)) ||
                   (lVar32 = *(long *)(lVar32 + 0x18), lVar32 == 0)) goto LAB_02491464;
                in_stack_00000880 = uVar26 | *(int *)(lVar23 + 0x28) << 0x10;
                uVar16 = FUN_0129eff4(lVar32,&stack0x00000880,&stack0x000016d8,
                                      *(undefined8 *)
                                       Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                                     );
                uVar68 = 0;
                if ((uVar16 & 1) == 0) {
                  fVar65 = 0.0;
                  fVar46 = 0.0;
                  fVar43 = 0.0;
                }
                else {
                  if (in_stack_000016d8 == 0) goto LAB_02491464;
                  fVar43 = *(float *)(in_stack_000016d8 + 0x14);
                  fVar46 = *(float *)(in_stack_000016d8 + 0x18);
                  fVar65 = *(float *)(in_stack_000016d8 + 0x1c);
                  uVar68 = *(undefined4 *)(in_stack_000016d8 + 0x20);
                  if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
                    fStack00000000000000cc = 0.0;
                  }
                }
                uVar22 = *unaff_x26;
              }
              else {
                uVar68 = 0;
                fVar65 = 0.0;
                fVar46 = 0.0;
                fVar43 = 0.0;
              }
              if (0 < (int)uVar22) {
                if ((*in_stack_00000150 == 0) ||
                   (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0)) goto LAB_02491464;
                if (*(uint *)(lVar23 + 0x18) <= (uint)((long)(int)uVar22 + -1))
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                lVar23 = *(long *)(lVar23 + ((long)(int)uVar22 + -1) * unaff_x21 + 0x30);
                if (((lVar23 == 0) || (*unaff_x27 == 0)) ||
                   ((lVar32 = *(long *)(*unaff_x27 + 0x128), lVar32 == 0 ||
                    (lVar32 = *(long *)(lVar32 + 0x18), lVar32 == 0)))) goto LAB_02491464;
                in_stack_00000880 = *(uint *)(lVar23 + 0x28) | uVar26 << 0x10;
                uVar16 = FUN_0129eff4(lVar32,&stack0x00000880,&stack0x000016d8,
                                      *(undefined8 *)
                                       Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                                     );
                if ((uVar16 & 1) != 0) {
                  if ((in_stack_000016d8 == 0) ||
                     (fVar43 = (float)FUN_024bb1bc(fVar43,fVar46,fVar65,uVar68,
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
              *(float *)((long)unaff_x19 + 0x2f4) = fVar65;
            }
            if ((char)unaff_x19[0x1d] != '\0') {
              fVar47 = *(float *)(unaff_x19 + 199);
              fVar67 = (float)FUN_026fd474(&stack0x00001770,0);
              fVar47 = fVar47 - fVar58 * fVar67 * (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc));
              *(float *)(unaff_x19 + 199) = fVar47;
              if ((uVar11 != 0) || (in_stack_000017bc == 0x200b)) {
                *(float *)(unaff_x19 + 199) =
                     fVar47 - in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
              }
            }
            fVar47 = *(float *)(unaff_x19 + 0x55);
            fVar67 = 0.0;
            if (fVar47 != 0.0) {
              fVar67 = (float)FUN_026fd454(&stack0x00001770,0);
              fVar69 = (float)FUN_026fd464(&stack0x00001770,0);
              fVar67 = (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                       (fVar47 * 0.5 - fVar58 * (fVar67 * 0.5 + fVar69));
              *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fVar67;
            }
            if (((unaff_w22 == 0) && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
               ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
              lVar23 = unaff_x19[0x22];
              if (*(int *)(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                          0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar16 = FUN_02681b9c(lVar23,0,0);
              fVar69 = 0.0;
              if ((uVar16 & 1) != 0) {
                lVar23 = unaff_x19[0x22];
                if (*(int *)(*(long *)
                              Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                plVar27 = (long *)
                          Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                ;
                if (lVar23 == 0) goto LAB_02491464;
                uVar16 = FUN_0267e1d8(lVar23,*(undefined4 *)
                                              (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0x54),0);
                if ((uVar16 & 1) != 0) {
                  lVar23 = unaff_x19[0x22];
                  if (*(int *)(*plVar27 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    plVar27 = (long *)
                              Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                    ;
                  }
                  if (lVar23 == 0) goto LAB_02491464;
                  fVar47 = (float)FUN_0267f610(lVar23,*(undefined4 *)
                                                       (*(long *)(*plVar27 + 0xb8) + 0x54),0);
                  if ((*unaff_x27 == 0) || (unaff_x19[0x22] == 0)) goto LAB_02491464;
                  fVar59 = *(float *)(*unaff_x27 + 0x1b0);
                  fVar69 = (float)FUN_0267f610(unaff_x19[0x22],
                                               *(undefined4 *)
                                                (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0xcc),0);
                  fVar69 = fVar69 * fVar47 * fVar59 * 0.25;
                  if (fVar47 < in_stack_00000130._4_4_ + fVar69) {
                    in_stack_00000130._4_4_ = fVar47 - fVar69;
                  }
                }
              }
              if (*unaff_x27 == 0) goto LAB_02491464;
              fStack00000000000000c4 = *(float *)(*unaff_x27 + 0x1b4);
            }
            else {
              lVar23 = unaff_x19[0x22];
              if (*(int *)(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                          0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar16 = FUN_02681b9c(lVar23,0,0);
              fStack00000000000000c4 = 0.0;
              if ((uVar16 & 1) != 0) {
                lVar23 = unaff_x19[0x22];
                if (*(int *)(*(long *)
                              Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                plVar27 = (long *)
                          Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                ;
                if (lVar23 == 0) goto LAB_02491464;
                uVar16 = FUN_0267e1d8(lVar23,*(undefined4 *)
                                              (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0x54),0);
                if ((uVar16 & 1) != 0) {
                  lVar23 = unaff_x19[0x22];
                  if (*(int *)(*plVar27 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    plVar27 = (long *)
                              Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                    ;
                  }
                  if (lVar23 == 0) goto LAB_02491464;
                  uVar16 = FUN_0267e1d8(lVar23,*(undefined4 *)(*(long *)(*plVar27 + 0xb8) + 0xcc),0)
                  ;
                  if ((uVar16 & 1) != 0) {
                    lVar23 = unaff_x19[0x22];
                    if (*(int *)(*plVar27 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      plVar27 = (long *)
                                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                      ;
                    }
                    if (lVar23 != 0) {
                      fVar47 = (float)FUN_0267f610(lVar23,*(undefined4 *)
                                                           (*(long *)(*plVar27 + 0xb8) + 0x54),0);
                      if ((*unaff_x27 != 0) && (unaff_x19[0x22] != 0)) {
                        fVar59 = *(float *)(*unaff_x27 + 0x1a8);
                        fVar69 = (float)FUN_0267f610(unaff_x19[0x22],
                                                     *(undefined4 *)
                                                      (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0xcc),0);
                        fVar69 = fVar69 * fVar47 * fVar59 * 0.25;
                        if (fVar47 < in_stack_00000130._4_4_ + fVar69) {
                          in_stack_00000130._4_4_ = fVar47 - fVar69;
                        }
                        goto LAB_0248ba68;
                      }
                    }
                    goto LAB_02491464;
                  }
                }
              }
              fVar69 = 0.0;
            }
LAB_0248ba68:
            fVar60 = *(float *)(unaff_x19 + 199);
            fVar47 = (float)FUN_026fd464(&stack0x00001770,0);
            fVar60 = fVar60 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                              fVar58 * (fVar43 + ((fVar47 - in_stack_00000130._4_4_) - fVar69));
            fVar43 = (float)FUN_026fd46c(&stack0x00001770,0);
            fVar59 = *(float *)((long)unaff_x19 + 0x614) +
                     ((fVar48 + fVar58 * (fVar46 + in_stack_00000130._4_4_ + fVar43)) -
                     *(float *)(unaff_x19 + 0x9a));
            fVar43 = (float)FUN_026fd45c(&stack0x00001770,0);
            fVar63 = fVar59 - fVar58 * (in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar43);
            fVar43 = (float)FUN_026fd454(&stack0x00001770,0);
            fVar47 = fVar60 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                              fVar58 * (fVar69 + fVar69 +
                                       in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar43);
            fVar43 = fVar60;
            fVar46 = fVar47;
            if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (unaff_w22 == 0)) &&
               ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
              fVar62 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
              fVar43 = (float)FUN_026fd46c(&stack0x00001770,0);
              fVar50 = fVar62 * fVar58 * (fVar69 + in_stack_00000130._4_4_ + fVar43);
              fVar43 = (float)FUN_026fd46c(&stack0x00001770,0);
              fVar46 = (float)FUN_026fd45c(&stack0x00001770,0);
              fVar59 = fVar59 + 0.0;
              fVar63 = fVar63 + 0.0;
              fVar62 = fVar62 * fVar58 * (((fVar43 - fVar46) - in_stack_00000130._4_4_) - fVar69);
              fVar46 = fVar47 + fVar62;
              fVar43 = fVar60 + fVar50;
              fVar56 = (fVar50 - fVar62) * 0.5;
              fVar60 = (fVar60 + fVar62) - fVar56;
              fVar47 = (fVar47 + fVar50) - fVar56;
              fVar43 = fVar43 - fVar56;
              fVar46 = fVar46 - fVar56;
            }
            if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
              fVar50 = 0.0;
              fVar61 = 0.0;
              fStack00000000000000e0 = 0.0;
              fStack00000000000000e4 = 0.0;
              fVar56 = fVar63;
              fVar62 = fVar59;
              fStack00000000000000e8 = fVar43;
              fStack00000000000000ec = fVar60;
            }
            else {
              thunk_FUN_026935f0(_uStack0000000000000060,0);
              fVar64 = (fVar47 + fVar60) * 0.5;
              fVar66 = (fVar63 + fVar59) * 0.5;
              fVar59 = fVar59 - fVar66;
              fVar54 = 0.0;
              fVar62 = fVar59;
              fVar49 = (float)FUN_02692df0(fVar43 - fVar64,_uStack0000000000000060,0);
              fVar63 = fVar63 - fVar66;
              fVar55 = 0.0;
              fVar43 = fVar63;
              fVar60 = (float)FUN_02692df0(fVar60 - fVar64,_uStack0000000000000060,0);
              fVar61 = 0.0;
              fVar47 = (float)FUN_02692df0(fVar47 - fVar64,_uStack0000000000000060,0);
              fVar47 = fVar64 + fVar47;
              fVar59 = fVar66 + fVar59;
              fVar61 = fVar61 + 0.0;
              fVar50 = 0.0;
              fVar46 = (float)FUN_02692df0(fVar46 - fVar64,_uStack0000000000000060,0);
              fVar46 = fVar64 + fVar46;
              fVar63 = fVar66 + fVar63;
              fVar50 = fVar50 + 0.0;
              fVar56 = fVar66 + fVar43;
              fVar62 = fVar66 + fVar62;
              fStack00000000000000e8 = fVar64 + fVar49;
              fStack00000000000000ec = fVar64 + fVar60;
              fStack00000000000000e0 = fVar55 + 0.0;
              fStack00000000000000e4 = fVar54 + 0.0;
            }
            if (*in_stack_00000150 == 0) goto LAB_02491464;
            lVar23 = *(long *)(*in_stack_00000150 + 0x38);
            unaff_d9 = (ulong)(uint)fVar58;
            if (lVar23 == 0) goto LAB_02491464;
            if (*(uint *)(lVar23 + 0x18) <= *unaff_x26)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            lVar23 = lVar23 + (int)*unaff_x26 * unaff_x21;
            *(float *)(lVar23 + 0x120) = fVar56;
            *(float *)(lVar23 + 0x11c) = fStack00000000000000ec;
            *(float *)(lVar23 + 0x124) = fStack00000000000000e0;
            if (*in_stack_00000150 == 0) goto LAB_02491464;
            lVar23 = *(long *)(*in_stack_00000150 + 0x38);
            unaff_s12 = 1.0;
            if (lVar23 == 0) goto LAB_02491464;
            if (*(uint *)(lVar23 + 0x18) <= *unaff_x26)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            lVar23 = lVar23 + (int)*unaff_x26 * unaff_x21;
            *(float *)(lVar23 + 0x114) = fVar62;
            *(float *)(lVar23 + 0x110) = fStack00000000000000e8;
            *(float *)(lVar23 + 0x118) = fStack00000000000000e4;
            if ((*in_stack_00000150 == 0) ||
               (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0)) goto LAB_02491464;
            if (*(uint *)(lVar23 + 0x18) <= *unaff_x26)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            lVar23 = lVar23 + (int)*unaff_x26 * unaff_x21;
            *(float *)(lVar23 + 0x128) = fVar47;
            *(float *)(lVar23 + 300) = fVar59;
            *(float *)(lVar23 + 0x130) = fVar61;
            if ((*in_stack_00000150 == 0) ||
               (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0)) goto LAB_02491464;
            if (*(uint *)(lVar23 + 0x18) <= *unaff_x26)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            lVar23 = lVar23 + (int)*unaff_x26 * unaff_x21;
            *(float *)(lVar23 + 0x134) = fVar46;
            *(float *)(lVar23 + 0x138) = fVar63;
            *(float *)(lVar23 + 0x13c) = fVar50;
            if ((*in_stack_00000150 == 0) ||
               (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0)) goto LAB_02491464;
            uVar26 = *unaff_x26;
            lVar32 = (long)(int)uVar26;
            if (*(uint *)(lVar23 + 0x18) <= uVar26)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            lVar37 = lVar23 + lVar32 * unaff_x21;
            *(int *)(lVar37 + 0x140) = (int)unaff_x19[199];
            fVar46 = *(float *)(unaff_x19 + 0x9a);
            param_2 = (ulong)(uint)fVar46;
            fVar43 = *(float *)((long)unaff_x19 + 0x614);
            *(float *)(lVar37 + 0x15c) = (fVar47 - fStack00000000000000ec) / (fVar62 - fVar56);
            *(float *)(lVar37 + 0x14c) = (fVar48 - fVar46) + fVar43;
            fVar44 = fVar44 * fVar58;
            if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
              fVar44 = fVar44 / fVar51;
              fVar45 = (fVar45 * fVar58) / fVar51;
            }
            else {
              fVar45 = fVar45 * fVar58;
            }
            uVar2 = *(uint *)(unaff_x19 + 0x92);
            bVar9 = uVar11 != 0;
            fVar44 = fVar43 + fVar44;
            bVar10 = uVar26 != uVar2;
            if (bVar10 && bVar9) {
              fVar43 = *(float *)(unaff_x19 + 0x98);
              lVar23 = lVar23 + lVar32 * unaff_x21;
              *(float *)(lVar23 + 0x154) = fVar43;
              fVar45 = *(float *)((long)unaff_x19 + 0x4c4);
              *(float *)(lVar23 + 0x148) = fVar43 - fVar46;
              *(float *)(lVar23 + 0x158) = fVar45;
              *(float *)(unaff_x19 + 0x97) = fVar43 - fVar46;
              fVar45 = fVar45 - fVar46;
              *(float *)(lVar23 + 0x150) = fVar45;
            }
            else {
              fVar45 = fVar43 + fVar45;
              fVar47 = fVar44;
              fVar48 = fVar45;
              if (fVar43 != 0.0) {
                fVar47 = (fVar44 - fVar43) / *(float *)((long)unaff_x19 + 0x3fc);
                fVar48 = (fVar45 - fVar43) / *(float *)((long)unaff_x19 + 0x3fc);
                if (fVar47 <= fVar44) {
                  fVar47 = fVar44;
                }
                if (fVar45 <= fVar48) {
                  fVar48 = fVar45;
                }
              }
              lVar23 = lVar23 + lVar32 * unaff_x21;
              fVar43 = fVar47;
              if (fVar47 <= *(float *)(unaff_x19 + 0x98)) {
                fVar43 = *(float *)(unaff_x19 + 0x98);
              }
              fVar59 = fVar48;
              if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar48) {
                fVar59 = *(float *)((long)unaff_x19 + 0x4c4);
              }
              *(float *)((long)unaff_x19 + 0x4c4) = fVar59;
              fVar45 = fVar45 - fVar46;
              *(float *)(unaff_x19 + 0x98) = fVar43;
              *(float *)(lVar23 + 0x154) = fVar47;
              *(float *)(lVar23 + 0x158) = fVar48;
              *(float *)(lVar23 + 0x148) = fVar44 - fVar46;
              *(float *)(unaff_x19 + 0x97) = fVar44 - fVar46;
              *(float *)(lVar23 + 0x150) = fVar45;
            }
            *(float *)((long)unaff_x19 + 0x4bc) = fVar45;
            if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
              if (!bVar10 || !bVar9) {
                *(float *)(unaff_x19 + 0x96) = fVar43;
                if (unaff_x19[0x1f] != 0) {
                  fVar43 = *(float *)((long)unaff_x19 + 0x4b4);
                  fVar45 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
                  fVar51 = (fVar58 * fVar45) / fVar51;
                  param_2 = (ulong)*(uint *)(unaff_x19 + 0x9a);
                  if (fVar43 <= fVar51) {
                    fVar43 = fVar51;
                  }
                  *(float *)((long)unaff_x19 + 0x4b4) = fVar43;
                  goto LAB_0248bef4;
                }
                goto LAB_02491464;
              }
            }
            else {
LAB_0248bef4:
              if ((!bVar10 || !bVar9) && (float)param_2 == 0.0) {
                fVar51 = *(float *)(in_stack_00000070 + 0x208);
                if (*(float *)(in_stack_00000070 + 0x208) <= fVar44) {
                  fVar51 = fVar44;
                }
                *(float *)(in_stack_00000070 + 0x208) = fVar51;
              }
            }
            lVar23 = *in_stack_00000150;
            if ((lVar23 == 0) || (lVar32 = *(long *)(lVar23 + 0x38), lVar32 == 0))
            goto LAB_02491464;
            uVar3 = *unaff_x26;
            if (*(uint *)(lVar32 + 0x18) <= uVar3)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            lVar32 = lVar32 + (int)uVar3 * unaff_x21;
            *(undefined1 *)(lVar32 + 0x194) = 0;
            uVar30 = *(uint *)(unaff_x19 + 0x4e);
            uVar22 = in_stack_000017bc;
            if ((in_stack_000017bc == 9) ||
               (((((uVar11 == 0 && (in_stack_000017bc != 3)) && (in_stack_000017bc != 0x200b)) &&
                 (in_stack_000017bc != 0xad)) ||
                (((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) != 0 ||
                 (*(int *)((long)unaff_x19 + 0x63c) == 1)))))) {
              *(undefined1 *)(lVar32 + 0x194) = 1;
              pfVar28 = in_stack_00000088;
              pfVar33 = _fStack0000000000000098;
              if (unaff_w20 != 0) {
                lVar23 = *(long *)(lVar23 + 0x50);
                if (lVar23 == 0) goto LAB_02491464;
                if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                pfVar33 = (float *)(lVar23 + 0x60);
                pfVar28 = (float *)(lVar23 + 100);
              }
              fVar43 = *pfVar33;
              fVar45 = *pfVar28;
              fVar51 = *(float *)(unaff_x19 + 0x6b);
              fVar44 = *(float *)(unaff_x19 + 199);
              in_stack_000000d8._4_4_ = (fStack0000000000000090 - fVar43) - fVar45;
              bVar9 = true;
              if ((fVar51 <= in_stack_000000d8._4_4_) && (bVar9 = false, !NAN(fVar51))) {
                bVar9 = fVar51 == -1.0;
              }
              if (!bVar9) {
                in_stack_000000d8._4_4_ = fVar51;
              }
              fVar51 = 0.0;
              if ((char)unaff_x19[0x1d] == '\0') {
                fVar51 = (float)FUN_026fd474(&stack0x00001770,0);
                param_2 = (ulong)*(uint *)(unaff_x19 + 0x9a);
              }
              fVar48 = *(float *)((long)unaff_x19 + 0x4c4);
              fVar46 = *(float *)((long)unaff_x19 + 0x2cc);
              fVar47 = (float)param_2;
              if (in_stack_000017bc != 0xad) {
                fVar53 = fVar58;
              }
              fVar59 = 0.0;
              if ((0.0 < fVar47) && (fVar59 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
                fVar59 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
              }
              fVar59 = (*(float *)(unaff_x19 + 0x96) - (fVar48 - fVar47)) + fVar59;
              uVar3 = *in_stack_00000148;
              if (in_stack_000000a0 < fVar59) {
                if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                  *(uint *)((long)unaff_x19 + 0x2dc) = uVar3;
                }
                unaff_x29 = (long *)StringLiteral_302;
                plVar27 = (long *)System_Threading_Mutex_TypeInfo;
                uVar17 = DAT_02941c08;
                if ((char)unaff_x19[0x46] != '\0') {
                  fVar63 = *(float *)(unaff_x19 + 0x58);
                  if (((fVar63 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar47)) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                    fVar51 = *(float *)((long)unaff_x19 + 0x2b4) +
                             ((in_stack_00000018._4_4_ - fVar59) / (float)(int)unaff_x19[0x94]) /
                             fStack0000000000000054;
                    if (fVar51 <= fVar63) {
                      fVar51 = fVar63;
                    }
                    goto LAB_0248ea5c;
                  }
                  fVar59 = *(float *)((long)unaff_x19 + 0x1dc);
                  fVar47 = *(float *)(unaff_x19 + 0x49);
                  param_2 = (ulong)(uint)fVar47;
                  if ((fVar47 < fVar59) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                    fVar51 = (fVar59 - *(float *)(unaff_x19 + 0x47)) * 0.5;
                    if (fVar51 <= DAT_028aa298) {
                      fVar51 = DAT_028aa298;
                    }
                    fVar58 = (fVar59 - fVar51) * 20.0 + 0.5;
                    fVar51 = DAT_02958220;
                    if (fVar58 != INFINITY) {
                      fVar51 = (float)(int)fVar58 / 20.0;
                    }
                    if (fVar51 <= fVar47) {
                      fVar51 = fVar47;
                    }
                    *(float *)((long)unaff_x19 + 0x234) = fVar59;
                    goto LAB_0248e598;
                  }
                }
                switch((int)unaff_x19[0x5b]) {
                case 1:
                  lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
                  if (*(int *)(lVar23 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar23 = *plVar27;
                  }
                  lVar32 = *(long *)(lVar23 + 0xb8);
                  lVar23 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                  if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                    lVar23 = FUN_00d5941c(lVar23);
                  }
                  unaff_x29 = (long *)StringLiteral_302;
                  lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 8);
                  if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                    lVar23 = FUN_00d5941c();
                  }
                  piVar18 = (int *)thunk_FUN_00d32ed4(lVar32 + 0x11f0,
                                                      *(long *)(lVar23 + 0x80) + 0xa0);
                  if (*piVar18 == 0) {
LAB_0248e4bc:
                    in_stack_000017a8 = DAT_02941c08;
                    in_stack_00000148[0] = 0;
                    in_stack_00000148[1] = 0;
                    unaff_x26 = in_stack_00000148;
                    unaff_s12 = 1.0;
                    in_stack_00001788 = 0xffffffff;
                    goto LAB_0248ab98;
                  }
                  lVar23 = *plVar27;
                  if (*(int *)(lVar23 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar23 = *plVar27;
                  }
                  FUN_013b8de4(*(long *)(lVar23 + 0xb8) + 0x11f0,&stack0x00000880,
                               *(undefined8 *)
                                Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                              );
                  memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_0248c8f4:
                  iVar12 = FUN_024d66ec();
LAB_0248c900:
                  iVar13 = *(int *)((long)unaff_x19 + 0x48c) + -1;
                  *(int *)((long)unaff_x19 + 0x48c) = iVar13;
                  in_stack_00000140._4_4_ = in_stack_00000140._4_4_ + 1;
                  unaff_x26 = in_stack_00000148;
                  unaff_s12 = 1.0;
                  in_stack_00001788 = iVar12 - 1;
                  in_stack_000017a8 = CONCAT44(0x2026,iVar13);
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
                  if ((uVar3 == 0) || ((int)in_stack_00001788 < 0)) {
                    *in_stack_00000148 = 0;
                    plVar27 = (long *)System_Threading_Mutex_TypeInfo;
                    unaff_x26 = in_stack_00000148;
                    unaff_x29 = (long *)StringLiteral_302;
                    in_stack_00001788 = 0xffffffff;
                    in_stack_000017a8 = uVar17;
                    goto LAB_0248ab98;
                  }
                  fVar51 = *(float *)(unaff_x19 + 0x98);
                  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  in_stack_00001788 = FUN_024d66ec();
                  if (fVar51 - fVar48 <= in_stack_000000a0) {
                    *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
                    *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
                    param_2 = *(ulong *)(*(long *)(*plVar27 + 0xb8) + 0x15a8);
                    *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
                    *(undefined4 *)(unaff_x19 + 0x99) = 0;
                    lVar23 = NEON_rev64(param_2,4);
                    unaff_x19[0x98] = lVar23;
                    *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                    *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
                    *(int *)(unaff_x19 + 0x94) = (int)unaff_x19[0x94] + 1;
                    *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                    unaff_x26 = in_stack_00000148;
                    goto LAB_0248ab98;
                  }
                  break;
                case 6:
                  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  in_stack_00001788 = FUN_024d66ec();
                  unaff_x29 = (long *)StringLiteral_302;
                  lVar23 = unaff_x19[0x5c];
                  if (*(int *)(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)
                                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                      );
                  }
                  uVar16 = FUN_02681b9c(lVar23,0,0);
                  if ((uVar16 & 1) != 0) {
                    plVar40 = (long *)unaff_x19[0x5c];
                    uVar17 = (**(code **)(*unaff_x19 + 0x548))();
                    if (plVar40 == (long *)0x0) goto LAB_02491464;
                    (**(code **)(*plVar40 + 0x558))
                              (plVar40,uVar17,*(undefined8 *)(*plVar40 + 0x560));
                    lVar23 = unaff_x19[0x5c];
                    if (lVar23 == 0) goto LAB_02491464;
                    *(int *)(lVar23 + 0x3f8) = (int)unaff_x19[0x7f];
                    FUN_024c910c(lVar23,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                    plVar40 = (long *)unaff_x19[0x5c];
                    if (plVar40 == (long *)0x0) goto LAB_02491464;
                    (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
                    *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                  }
                }
LAB_0248c628:
                unaff_x26 = in_stack_00000148;
                unaff_s12 = 1.0;
                in_stack_000017a8 = CONCAT44(3,uVar3);
                goto LAB_0248ab98;
              }
switchD_0248c274_caseD_2:
              plVar27 = (long *)System_Threading_Mutex_TypeInfo;
              fVar47 = 1.0 - fVar46;
              param_2 = (ulong)(uint)fVar47;
              fVar53 = ABS(fVar44) + fVar51 * fVar47 * fVar53;
              fVar51 = _DAT_0294c6e8;
              if ((uVar30 & 0x18) == 0) {
                fVar51 = 1.0;
              }
              if (fVar51 * in_stack_000000d8._4_4_ < fVar53) {
                if (((char)unaff_x19[0x5a] != '\0') && (uVar3 != *(uint *)(unaff_x19 + 0x92))) {
                  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  in_stack_00001788 = FUN_024d66ec();
                  if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                    lVar23 = *in_stack_00000150;
                    if ((lVar23 == 0) || (lVar32 = *(long *)(lVar23 + 0x38), lVar32 == 0))
                    goto LAB_02491464;
                    if (*(uint *)(lVar32 + 0x18) <= *in_stack_00000148)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    fVar44 = *(float *)(unaff_x19 + 0x9a);
                    fVar46 = 0.0;
                    if ((0.0 < fVar44) && (fVar46 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0'))
                    {
                      fVar46 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                    }
                    fVar46 = in_stack_000000c8 * *(float *)(unaff_x19 + 0x56) +
                             *(float *)(lVar32 + (int)*in_stack_00000148 * unaff_x21 + 0x154) +
                             (fVar46 - *(float *)((long)unaff_x19 + 0x4c4)) +
                             fStack0000000000000054 *
                             (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
                  }
                  else {
                    lVar23 = unaff_x19[0x6c];
                    *(undefined1 *)((long)unaff_x19 + 700) = 1;
                    if (lVar23 == 0) goto LAB_02491464;
                    fVar44 = *(float *)(unaff_x19 + 0x9a);
                    fVar46 = *(float *)(unaff_x19 + 0x57) +
                             in_stack_000000c8 * *(float *)(unaff_x19 + 0x56);
                  }
                  puVar8 = System_Threading_Mutex_TypeInfo;
                  lVar23 = *(long *)(lVar23 + 0x38);
                  if (lVar23 != 0) {
                    uVar42 = *(uint *)((long)unaff_x19 + 0x48c);
                    if ((*(uint *)(lVar23 + 0x18) <= uVar42) ||
                       (uVar31 = uVar42 - 1, *(uint *)(lVar23 + 0x18) <= uVar31))
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    param_2 = (ulong)(uint)(fVar46 + *(float *)(unaff_x19 + 0x96));
                    fVar44 = (fVar46 + *(float *)(unaff_x19 + 0x96) + fVar44) -
                             *(float *)(lVar23 + (int)uVar42 * unaff_x21 + 0x158);
                    if (((in_stack_00000068._4_1_ & 1) != 0 ||
                         *(short *)(lVar23 + (long)(int)uVar31 * (long)iVar39 + 0x20) != 0xad) ||
                       ((in_stack_000000a0 <= fVar44 && ((int)unaff_x19[0x5b] != 0)))) {
                      if (*(short *)(lVar23 + (int)uVar42 * unaff_x21 + 0x20) == 0xad) {
                        in_stack_00000068._4_1_ = 1;
                      }
                      else {
                        if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
                          fVar46 = *(float *)((long)unaff_x19 + 0x2cc);
                          fVar48 = *(float *)(unaff_x19 + 0x59) / 100.0;
                          if ((fVar48 <= fVar46) ||
                             ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
                            fVar47 = *(float *)((long)unaff_x19 + 0x1dc);
                            param_2 = (ulong)(uint)fVar47;
                            fVar46 = *(float *)(unaff_x19 + 0x49);
                            if ((fVar46 < fVar47) &&
                               (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                            goto LAB_024914c0;
                            goto LAB_0248cc70;
                          }
LAB_0249155c:
                          fVar58 = fVar53;
                          if (0.0 < fVar46) {
                            fVar58 = fVar53 / (1.0 - fVar46);
                          }
                          fVar46 = fVar46 + (fVar53 - fVar51 * (in_stack_000000d8._4_4_ +
                                                               DAT_02958218)) / fVar58;
LAB_0249154c:
                          if (fVar48 <= fVar46) {
                            fVar46 = fVar48;
                          }
                          *(float *)((long)unaff_x19 + 0x2cc) = fVar46;
                          return;
                        }
LAB_0248cc70:
                        lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
                        if (*(int *)(lVar23 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                          lVar23 = *(long *)puVar8;
                        }
                        iVar12 = *(int *)(*(long *)(lVar23 + 0xb8) + 0xe78);
                        if ((((float)iVar12 != fStack0000000000000034) && (iVar12 != -1)) &&
                           (((bStack000000000000005c ^ 1) & 1) == 0)) {
                          if (*(int *)(lVar23 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          in_stack_00001788 = FUN_024d66ec();
                          if ((unaff_x19[0x6c] == 0) ||
                             (lVar23 = *(long *)(unaff_x19[0x6c] + 0x38), lVar23 == 0))
                          goto LAB_02491464;
                          uVar42 = *in_stack_00000148 - 1;
                          if (*(uint *)(lVar23 + 0x18) <= uVar42)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                          ;
                          fStack0000000000000034 = (float)iVar12;
                          if (*(short *)(lVar23 + (long)(int)uVar42 * (long)iVar39 + 0x20) == 0xad)
                          {
                            in_stack_00001788 = in_stack_00001788 - 1;
                            in_stack_00000068._4_1_ = 0;
                            in_stack_000017a8 = CONCAT44(0x2d,uVar42);
                            *in_stack_00000148 = uVar42;
                            goto LAB_0248cf04;
                          }
                        }
                        if (in_stack_000000a0 < fVar44) {
                          if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                            *(undefined4 *)((long)unaff_x19 + 0x2dc) =
                                 *(undefined4 *)((long)unaff_x19 + 0x48c);
                          }
                          unaff_x29 = (long *)StringLiteral_302;
                          plVar27 = (long *)System_Threading_Mutex_TypeInfo;
                          if ((char)unaff_x19[0x46] != '\0') {
                            fVar46 = *(float *)(unaff_x19 + 0x58);
                            if ((fVar46 < *(float *)((long)unaff_x19 + 0x2b4)) &&
                               (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                              fVar51 = *(float *)((long)unaff_x19 + 0x2b4) +
                                       ((in_stack_00000018._4_4_ - fVar44) /
                                       (float)((int)unaff_x19[0x94] + 1)) / fStack0000000000000054;
                              if (fVar51 <= fVar46) {
                                fVar51 = fVar46;
                              }
LAB_0248ea5c:
                              *(float *)((long)unaff_x19 + 0x2b4) = fVar51;
                              return;
                            }
                            fVar46 = *(float *)((long)unaff_x19 + 0x2cc);
                            fVar48 = *(float *)(unaff_x19 + 0x59) / 100.0;
                            if ((fVar46 < fVar48) &&
                               (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                            goto LAB_0249155c;
                            fVar47 = *(float *)((long)unaff_x19 + 0x1dc);
                            param_2 = (ulong)(uint)fVar47;
                            fVar46 = *(float *)(unaff_x19 + 0x49);
                            if ((fVar46 < fVar47) &&
                               (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                            goto LAB_024914c0;
                          }
                          switch((int)unaff_x19[0x5b]) {
                          case 0:
                          case 2:
                          case 4:
                            param_2 = unaff_d9;
                            FUN_024d7014(fStack0000000000000054,unaff_d9,in_stack_000000c8,
                                         *(undefined4 *)((long)unaff_x19 + 0x2f4),
                                         fStack00000000000000c4,fStack00000000000000cc,
                                         in_stack_000000d8._4_4_,fStack0000000000000048);
                            break;
                          case 1:
                            lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
                            if (*(int *)(lVar23 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                              lVar23 = *plVar27;
                            }
                            lVar32 = *(long *)(lVar23 + 0xb8);
                            lVar23 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                            if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                              lVar23 = FUN_00d5941c(lVar23);
                            }
                            lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 8);
                            if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                              lVar23 = FUN_00d5941c();
                            }
                            piVar18 = (int *)thunk_FUN_00d32ed4(lVar32 + 0x11f0,
                                                                *(long *)(lVar23 + 0x80) + 0xa0);
                            if (*piVar18 == 0) {
                              in_stack_00000068._4_1_ = 0;
                              goto LAB_0248e4bc;
                            }
                            lVar23 = *plVar27;
                            if (*(int *)(lVar23 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                              lVar23 = *plVar27;
                            }
                            FUN_013b8de4(*(long *)(lVar23 + 0xb8) + 0x11f0,&stack0x00000880,
                                         *(undefined8 *)
                                          Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                        );
                            memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
                            iVar12 = FUN_024d66ec();
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
                                         *(undefined4 *)((long)unaff_x19 + 0x2f4),
                                         fStack00000000000000c4,fStack00000000000000cc,
                                         in_stack_000000d8._4_4_,fStack0000000000000048);
                            *(undefined4 *)(unaff_x19 + 0x99) = 0;
                            *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                            *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
                            *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                            break;
                          case 6:
                            lVar23 = unaff_x19[0x5c];
                            if (*(int *)(*(long *)
                                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                        + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar16 = FUN_02681b9c(lVar23,0,0);
                            if ((uVar16 & 1) != 0) {
                              plVar40 = (long *)unaff_x19[0x5c];
                              uVar17 = (**(code **)(*unaff_x19 + 0x548))();
                              if (plVar40 == (long *)0x0) goto LAB_02491464;
                              (**(code **)(*plVar40 + 0x558))
                                        (plVar40,uVar17,*(undefined8 *)(*plVar40 + 0x560));
                              lVar23 = unaff_x19[0x5c];
                              if (lVar23 == 0) goto LAB_02491464;
                              *(int *)(lVar23 + 0x3f8) = (int)unaff_x19[0x7f];
                              FUN_024c910c(lVar23,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                              plVar40 = (long *)unaff_x19[0x5c];
                              if (plVar40 == (long *)0x0) goto LAB_02491464;
                              (**(code **)(*plVar40 + 0x7d8))
                                        (plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
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
                          plVar27 = (long *)System_Threading_Mutex_TypeInfo;
                          unaff_x26 = in_stack_00000148;
                          unaff_x29 = (long *)StringLiteral_302;
                          unaff_s12 = 1.0;
                          goto LAB_0248ab98;
                        }
                        param_2 = unaff_d9;
                        FUN_024d7014(fStack0000000000000054,unaff_d9,in_stack_000000c8,
                                     *(undefined4 *)((long)unaff_x19 + 0x2f4),fStack00000000000000c4
                                     ,fStack00000000000000cc,in_stack_000000d8._4_4_,
                                     fStack0000000000000048);
                        bStack000000000000005c = 1;
                        in_stack_00000068._4_1_ = 0;
                        fStack0000000000000058 = 1.4013e-45;
                      }
                    }
                    else {
                      in_stack_00001788 = in_stack_00001788 - 1;
                      in_stack_00000068._4_1_ = 0;
                      in_stack_000017a8 = CONCAT44(0x2d,uVar31);
                      *in_stack_00000148 = uVar31;
                    }
LAB_0248cf04:
                    plVar27 = (long *)System_Threading_Mutex_TypeInfo;
                    unaff_x26 = in_stack_00000148;
                    unaff_x29 = (long *)StringLiteral_302;
                    unaff_s12 = 1.0;
                    goto LAB_0248ab98;
                  }
                  goto LAB_02491464;
                }
                if (((char)unaff_x19[0x46] != '\0') &&
                   (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                  fVar48 = *(float *)(unaff_x19 + 0x59) / 100.0;
                  if (fVar46 < fVar48) {
                    fVar58 = fVar53 / fVar47;
                    if (fVar46 <= 0.0) {
                      fVar58 = fVar53;
                    }
                    fVar46 = fVar46 + (fVar53 - fVar51 * (in_stack_000000d8._4_4_ + DAT_02958218)) /
                                      fVar58;
                    goto LAB_0249154c;
                  }
                  fVar47 = *(float *)((long)unaff_x19 + 0x1dc);
                  param_2 = (ulong)(uint)fVar47;
                  fVar46 = *(float *)(unaff_x19 + 0x49);
                  if (fVar47 <= fVar46) goto LAB_0248c3dc;
LAB_024914c0:
                  fVar51 = (fVar47 - *(float *)(unaff_x19 + 0x47)) * 0.5;
                  if (fVar51 <= DAT_028aa298) {
                    fVar51 = DAT_028aa298;
                  }
                  *(float *)((long)unaff_x19 + 0x234) = fVar47;
                  fVar58 = (fVar47 - fVar51) * 20.0 + 0.5;
                  fVar51 = DAT_02958220;
                  if (fVar58 != INFINITY) {
                    fVar51 = (float)(int)fVar58 / 20.0;
                  }
                  if (fVar51 <= fVar46) {
                    fVar51 = fVar46;
                  }
LAB_0248e598:
                  *(float *)((long)unaff_x19 + 0x1dc) = fVar51;
                  return;
                }
LAB_0248c3dc:
                iVar12 = (int)unaff_x19[0x5b];
                if (iVar12 == 1) {
                  lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
                  if (*(int *)(lVar23 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar23 = *plVar27;
                  }
                  unaff_x29 = (long *)StringLiteral_302;
                  lVar32 = *(long *)(lVar23 + 0xb8);
                  lVar23 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                  if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                    lVar23 = FUN_00d5941c(lVar23);
                  }
                  lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 8);
                  if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                    lVar23 = FUN_00d5941c();
                  }
                  piVar18 = (int *)thunk_FUN_00d32ed4(lVar32 + 0x11f0,
                                                      *(long *)(lVar23 + 0x80) + 0xa0);
                  if (*piVar18 == 0) goto LAB_0248e4bc;
                  lVar23 = *plVar27;
                  if (*(int *)(lVar23 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar23 = *plVar27;
                  }
                  FUN_013b8de4(*(long *)(lVar23 + 0xb8) + 0x11f0,&stack0x00000880,
                               *(undefined8 *)
                                Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                              );
                  memcpy(&stack0x00000c70,&stack0x00000880,0x378);
                  goto LAB_0248c8f4;
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
                lVar23 = unaff_x19[0x5c];
                if (*(int *)(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)
                                      System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                    );
                }
                uVar16 = FUN_02681b9c(lVar23,0,0);
                if ((uVar16 & 1) != 0) {
                  plVar40 = (long *)unaff_x19[0x5c];
                  uVar17 = (**(code **)(*unaff_x19 + 0x548))();
                  if (plVar40 == (long *)0x0) goto LAB_02491464;
                  (**(code **)(*plVar40 + 0x558))(plVar40,uVar17,*(undefined8 *)(*plVar40 + 0x560));
                  lVar23 = unaff_x19[0x5c];
                  if (lVar23 == 0) goto LAB_02491464;
                  *(int *)(lVar23 + 0x3f8) = (int)unaff_x19[0x7f];
                  FUN_024c910c(lVar23,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                  plVar40 = (long *)unaff_x19[0x5c];
                  if (plVar40 == (long *)0x0) goto LAB_02491464;
                  (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
                  *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                }
LAB_0248ca1c:
                unaff_x26 = in_stack_00000148;
                unaff_s12 = 1.0;
                in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
                goto LAB_0248ab98;
              }
LAB_0248cf18:
              if (in_stack_000017bc != 0xad) {
                if (in_stack_000017bc != 9) {
                  if (*(int *)((long)unaff_x19 + 0x63c) == 1) {
                    (**(code **)(*unaff_x19 + 0x8c8))();
                  }
                  else if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
                    (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000130._4_4_,fVar69);
                  }
                  uVar3 = *in_stack_00000148;
                  if (((uint)fStack0000000000000058 & 1) != 0) {
                    *(uint *)(in_stack_00000070 + 0x1f0) = uVar3;
                  }
                  *(uint *)((long)unaff_x19 + 0x49c) = uVar3;
                  *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar23 = *(long *)(unaff_x19[0x6c] + 0x50), lVar23 != 0)) {
                    if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar23 + 0x18)) {
                      lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                      fStack0000000000000058 = 0.0;
                      *(float *)(lVar23 + 0x60) = fVar43;
                      *(float *)(lVar23 + 100) = fVar45;
                      goto FUN_0248d088;
                    }
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  }
                  goto LAB_02491464;
                }
                lVar23 = *in_stack_00000150;
                if ((lVar23 == 0) || (lVar32 = *(long *)(lVar23 + 0x38), lVar32 == 0))
                goto LAB_02491464;
                uVar3 = *in_stack_00000148;
                if (uVar3 < *(uint *)(lVar32 + 0x18)) {
                  *(undefined1 *)(lVar32 + (int)uVar3 * unaff_x21 + 0x194) = 0;
                  *(uint *)((long)unaff_x19 + 0x49c) = uVar3;
                  lVar32 = *(long *)(lVar23 + 0x50);
                  if (lVar32 != 0) {
                    if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar32 + 0x18)) {
                      lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                      *(int *)(lVar32 + 0x2c) = *(int *)(lVar32 + 0x2c) + 1;
                      goto LAB_0248cf8c;
                    }
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  }
                  goto LAB_02491464;
                }
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              }
              if ((*in_stack_00000150 == 0) ||
                 (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0)) goto LAB_02491464;
              if (*(uint *)(lVar23 + 0x18) <= *in_stack_00000148)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              *(undefined1 *)(lVar23 + (int)*in_stack_00000148 * unaff_x21 + 0x194) = 0;
            }
            else {
              if (((in_stack_000017bc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
                fVar53 = (float)param_2;
                fVar51 = 0.0;
                if ((0.0 < fVar53) && (fVar51 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
                  fVar51 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                }
                param_2 = (ulong)(uint)in_stack_000000a0;
                if (in_stack_000000a0 <
                    (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - fVar53))
                    + fVar51) {
                  if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                    *(uint *)((long)unaff_x19 + 0x2dc) = uVar3;
                  }
                  unaff_x29 = (long *)StringLiteral_302;
                  plVar27 = (long *)System_Threading_Mutex_TypeInfo;
                  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  in_stack_00001788 = FUN_024d66ec();
                  lVar23 = unaff_x19[0x5c];
                  if (*(int *)(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)
                                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                      );
                  }
                  uVar16 = FUN_02681b9c(lVar23,0,0);
                  if ((uVar16 & 1) != 0) {
                    plVar40 = (long *)unaff_x19[0x5c];
                    uVar17 = (**(code **)(*unaff_x19 + 0x548))();
                    if (plVar40 == (long *)0x0) goto LAB_02491464;
                    (**(code **)(*plVar40 + 0x558))
                              (plVar40,uVar17,*(undefined8 *)(*plVar40 + 0x560));
                    lVar23 = unaff_x19[0x5c];
                    if (lVar23 == 0) goto LAB_02491464;
                    *(int *)(lVar23 + 0x3f8) = (int)unaff_x19[0x7f];
                    FUN_024c910c(lVar23,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                    plVar40 = (long *)unaff_x19[0x5c];
                    if (plVar40 == (long *)0x0) goto LAB_02491464;
                    (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
                    *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                  }
                  unaff_x26 = in_stack_00000148;
                  in_stack_000017a8 = CONCAT44(3,uVar3);
                  goto LAB_0248ab98;
                }
              }
              if ((((in_stack_000017bc - 0x2007 < 0x23) &&
                   ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
                  (in_stack_000017bc - 10 < 2)) || (in_stack_000017bc == 0xa0)) {
UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs:
                if (((in_stack_000017bc != 0xad) && (in_stack_000017bc != 0x200b)) &&
                   (in_stack_000017bc != 0x2060)) {
                  lVar23 = *in_stack_00000150;
                  if ((lVar23 == 0) || (lVar32 = *(long *)(lVar23 + 0x50), lVar32 == 0))
                  goto LAB_02491464;
                  if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                  *(int *)(lVar32 + 0x2c) = *(int *)(lVar32 + 0x2c) + 1;
                  *(int *)(lVar23 + 0x20) = *(int *)(lVar23 + 0x20) + 1;
                }
              }
              else {
                if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar16 = FUN_016fa418(in_stack_000017bc,0);
                if ((uVar16 & 1) != 0)
                goto 
                UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs
                ;
              }
              if (in_stack_000017bc == 0xa0) {
                if ((*in_stack_00000150 == 0) ||
                   (lVar23 = *(long *)(*in_stack_00000150 + 0x50), lVar23 == 0)) goto LAB_02491464;
                if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_0248cf8c:
                *(int *)(lVar23 + 0x20) = *(int *)(lVar23 + 0x20) + 1;
              }
            }
FUN_0248d088:
            if (((int)unaff_x19[0x5b] == 1) && ((in_stack_000017bc == 0x2d || (unaff_w20 != 1)))) {
              if (unaff_x19[0xca] == 0) goto LAB_02491464;
              fVar51 = *(float *)(unaff_x19 + 0x3c);
              iVar12 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
              if (unaff_x19[0xca] == 0) goto LAB_02491464;
              fVar43 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
              lVar23 = unaff_x19[0xc9];
              fVar53 = in_stack_00000080._4_4_;
              if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                fVar53 = 1.0;
              }
              if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_02491464;
              fVar44 = *(float *)((long)unaff_x19 + 0x3fc);
              fVar47 = *(float *)(lVar23 + 0x2c);
              fVar45 = (float)FUN_026fd668(*(long *)(lVar23 + 0x20),0);
              fVar46 = *_fStack0000000000000098;
              fVar45 = fVar44 * (fVar51 / (float)iVar12) * fVar43 * fVar53 * fVar47 * fVar45;
              fVar51 = *in_stack_00000088;
              if ((in_stack_000017bc == 10) &&
                 (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
                if ((*in_stack_00000150 == 0) ||
                   (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0)) goto LAB_02491464;
                uVar3 = *(int *)((long)unaff_x19 + 0x48c) - 1;
                if (*(uint *)(lVar23 + 0x18) <= uVar3)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                if (unaff_x19[0xca] == 0) goto LAB_02491464;
                fVar53 = *(float *)(lVar23 + (long)(int)uVar3 * (long)iVar39 + 0x60);
                iVar12 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
                if (unaff_x19[0xca] == 0) goto LAB_02491464;
                fVar44 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
                lVar23 = unaff_x19[0xc9];
                fVar43 = in_stack_00000080._4_4_;
                if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                  fVar43 = 1.0;
                }
                if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_02491464;
                fVar47 = *(float *)((long)unaff_x19 + 0x3fc);
                fVar48 = *(float *)(lVar23 + 0x2c);
                fVar45 = (float)FUN_026fd668(*(long *)(lVar23 + 0x20),0);
                if ((*in_stack_00000150 == 0) ||
                   (lVar23 = *(long *)(*in_stack_00000150 + 0x50), lVar23 == 0)) goto LAB_02491464;
                if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                fVar46 = *(float *)(lVar23 + 0x60);
                fVar51 = *(float *)(lVar23 + 100);
                fVar45 = fVar47 * (fVar53 / (float)iVar12) * fVar44 * fVar43 * fVar48 * fVar45;
              }
              fVar47 = *(float *)(unaff_x19 + 0x9a);
              fVar43 = *(float *)(unaff_x19 + 0x96);
              fVar48 = *(float *)((long)unaff_x19 + 0x4c4);
              fVar53 = 0.0;
              fVar44 = 0.0;
              if ((0.0 < fVar47) && (fVar44 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
                fVar44 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
              }
              fVar69 = *(float *)(unaff_x19 + 199);
              if ((char)unaff_x19[0x1d] == '\0') {
                if ((unaff_x19[0xc9] == 0) ||
                   (lVar23 = *(long *)(unaff_x19[0xc9] + 0x20), lVar23 == 0)) goto LAB_02491464;
                FUN_026fd62c(&stack0x00000880,lVar23,0);
                unaff_x28[0x1cd] = unaff_x28[1];
                unaff_x28[0x1cc] = *unaff_x28;
                fVar53 = (float)FUN_026fd474(&stack0x000016e0,0);
              }
              puVar8 = System_Threading_Mutex_TypeInfo;
              fVar59 = *(float *)(unaff_x19 + 0x6b);
              fVar51 = (fStack0000000000000090 - fVar46) - fVar51;
              bVar9 = true;
              if ((fVar59 <= fVar51) && (bVar9 = false, !NAN(fVar59))) {
                bVar9 = fVar59 == -1.0;
              }
              if (!bVar9) {
                fVar51 = fVar59;
              }
              fVar46 = _DAT_0294c6e8;
              if ((uVar30 & 0x18) == 0) {
                fVar46 = 1.0;
              }
              if (((fVar43 - (fVar48 - fVar47)) + fVar44 < in_stack_000000a0) &&
                 (ABS(fVar69) + fVar45 * fVar53 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
                  fVar46 * fVar51)) {
                if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_024d69d4();
                lVar23 = *(long *)(*(long *)puVar8 + 0xb8);
                memcpy(&stack0x00000508,(void *)(lVar23 + 0x788),0x378);
                FUN_013b86dc(lVar23 + 0x11f0,&stack0x00000508,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List<TextStyle>_get_Item__);
              }
            }
            unaff_d9 = (ulong)(uint)fVar58;
            unaff_s12 = 1.0;
            lVar23 = *in_stack_00000150;
            if ((lVar23 == 0) || (lVar32 = *(long *)(lVar23 + 0x38), lVar32 == 0))
            goto LAB_02491464;
            if (*(uint *)(lVar32 + 0x18) <= *in_stack_00000148)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            uVar3 = *(uint *)(unaff_x19 + 0x94);
            lVar32 = lVar32 + (int)*in_stack_00000148 * unaff_x21;
            *(uint *)(lVar32 + 100) = uVar3;
            *(int *)(lVar32 + 0x68) = (int)unaff_x19[0x95];
            if (((unaff_w20 & 1) == 0) &&
               ((0xd < in_stack_000017bc ||
                ((1 << (ulong)(in_stack_000017bc & 0x1f) & 0x2c00U) == 0)))) {
              lVar23 = *(long *)(lVar23 + 0x50);
              if (lVar23 == 0) goto LAB_02491464;
LAB_0248d42c:
              if (*(uint *)(lVar23 + 0x18) <= uVar3)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              *(int *)(lVar23 + (long)(int)uVar3 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
            }
            else {
              lVar23 = *(long *)(lVar23 + 0x50);
              if (lVar23 == 0) goto LAB_02491464;
              if (*(uint *)(lVar23 + 0x18) <= uVar3)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              if (*(int *)(lVar23 + (long)(int)uVar3 * 0x5c + 0x24) == 1) goto LAB_0248d42c;
            }
            if (in_stack_000017bc == 9) {
              if (*unaff_x27 == 0) goto LAB_02491464;
              fVar51 = (float)FUN_026fd208(*unaff_x27 + 0x50,0);
              if (*unaff_x27 == 0) goto LAB_02491464;
              fVar43 = *(float *)(unaff_x19 + 199);
              fVar53 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x27 + 0x1b9));
              fVar51 = fVar58 * fVar51 * fVar53;
              fVar53 = fVar51 * (float)(int)(fVar43 / fVar51);
              param_2 = (ulong)(uint)fVar53;
              if (fVar53 <= fVar43) {
                fVar53 = fVar43 + fVar51;
              }
LAB_0248d614:
              *(float *)(unaff_x19 + 199) = fVar53;
            }
            else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
              if ((char)unaff_x19[0x1d] == '\0') {
                fVar43 = unaff_s12;
                if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
                  fVar43 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
                }
                fVar53 = *(float *)(unaff_x19 + 199);
                fVar45 = (float)FUN_026fd474(&stack0x00001770,0);
                if (unaff_x19[0x1f] != 0) {
                  fVar51 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
                  fVar53 = fVar53 + fVar51 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                             fVar58 * (fVar65 + fVar43 * fVar45) +
                                             in_stack_000000c8 *
                                             (fStack00000000000000c4 +
                                             fStack00000000000000cc +
                                             *(float *)(unaff_x19[0x1f] + 0x1ac)));
                  *(float *)(unaff_x19 + 199) = fVar53;
                  goto joined_r0x0248d568;
                }
                goto LAB_02491464;
              }
              if (*unaff_x27 == 0) goto LAB_02491464;
              fVar53 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                       (*(float *)((long)unaff_x19 + 0x2a4) +
                       fVar58 * fVar65 +
                       in_stack_000000c8 *
                       (fStack00000000000000c4 +
                       fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)));
              param_2 = (ulong)(uint)fVar53;
              fVar53 = *(float *)(unaff_x19 + 199) - fVar53;
              *(float *)(unaff_x19 + 199) = fVar53;
              if ((uVar11 != 0) || (in_stack_000017bc == 0x200b)) {
                fVar51 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
                param_2 = (ulong)(uint)fVar51;
                fVar53 = fVar53 - fVar51;
                goto LAB_0248d614;
              }
            }
            else {
              if (*unaff_x27 == 0) goto LAB_02491464;
              fVar51 = *(float *)(unaff_x19 + 199);
              fVar53 = fVar51 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                                (*(float *)((long)unaff_x19 + 0x2a4) +
                                (*(float *)(unaff_x19 + 0x55) - fVar67) +
                                in_stack_000000c8 *
                                (fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)));
              *(float *)(unaff_x19 + 199) = fVar53;
joined_r0x0248d568:
              if ((uVar11 != 0) || (param_2 = (ulong)(uint)fVar51, in_stack_000017bc == 0x200b)) {
                fVar51 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
                param_2 = (ulong)(uint)fVar51;
                fVar53 = fVar53 + fVar51;
                goto LAB_0248d614;
              }
            }
            lVar23 = *in_stack_00000150;
            if ((lVar23 == 0) || (lVar32 = *(long *)(lVar23 + 0x38), lVar32 == 0))
            goto LAB_02491464;
            uVar3 = *in_stack_00000148;
            uVar30 = (uint)*(undefined8 *)(lVar32 + 0x18);
            if (uVar30 <= uVar3)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            *(float *)(lVar32 + (int)uVar3 * unaff_x21 + 0x144) = fVar53;
            uVar42 = in_stack_000017bc;
            if ((int)in_stack_000017bc < 0xd) {
              if ((in_stack_000017bc - 10 < 2) || (in_stack_000017bc == 3)) goto LAB_0248d6b8;
LAB_0248d69c:
              if (((unaff_w20 & in_stack_000017bc == 0x2d) != 0) ||
                 ((float)uVar3 == in_stack_00000078._4_4_)) goto LAB_0248d6b8;
            }
            else {
              if (1 < in_stack_000017bc - 0x2028) {
                if (in_stack_000017bc != 0xd) goto LAB_0248d69c;
                param_2 = 0;
                *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
                if ((float)uVar3 != in_stack_00000078._4_4_) goto LAB_0248dc08;
              }
LAB_0248d6b8:
              if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
                fVar51 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                if (((fStack000000000000004c < ABS(fVar51)) &&
                    (*(char *)((long)unaff_x19 + 700) == '\0')) &&
                   (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
                  FUN_024d6ca8(fVar51);
                  *(float *)((long)unaff_x19 + 0x4bc) = *(float *)((long)unaff_x19 + 0x4bc) - fVar51
                  ;
                  *(float *)(unaff_x19 + 0x9a) = fVar51 + *(float *)(unaff_x19 + 0x9a);
                  puVar8 = System_Threading_Mutex_TypeInfo;
                  lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
                  if (*(int *)(lVar23 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar23 = *(long *)puVar8;
                  }
                  lVar32 = *(long *)(lVar23 + 0xb8);
                  if (*(int *)(lVar32 + 0x7ac) == (int)unaff_x19[0x94]) {
                    if (*(int *)(lVar23 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar32 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
                    }
                    FUN_013b8de4(lVar32 + 0x11f0,&stack0x00000880,
                                 *(undefined8 *)
                                  Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                );
                    lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
                    memcpy((void *)(*(long *)(lVar23 + 0xb8) + 0x788),&stack0x00000880,0x378);
                    lVar23 = *(long *)(lVar23 + 0xb8);
                    *(float *)(lVar23 + 0x7bc) = fVar51 + *(float *)(lVar23 + 0x7bc);
                    *(float *)(lVar23 + 0x800) = fVar51 + *(float *)(lVar23 + 0x800);
                    memcpy(&stack0x00000190,(void *)(lVar23 + 0x788),0x378);
                    FUN_013b86dc(lVar23 + 0x11f0,&stack0x00000190,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_List<TextStyle>_get_Item__);
                  }
                }
              }
              fVar43 = *(float *)(unaff_x19 + 0x9a);
              *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
              fVar53 = *(float *)((long)unaff_x19 + 0x4c4) - fVar43;
              fVar51 = *(float *)((long)unaff_x19 + 0x4bc);
              if (fVar53 <= *(float *)((long)unaff_x19 + 0x4bc)) {
                fVar51 = fVar53;
              }
              *(float *)((long)unaff_x19 + 0x4bc) = fVar51;
              fVar45 = *(float *)(unaff_x19 + 0x98);
              if (*(char *)((long)unaff_x28 + 0xf34) == '\0') {
                in_stack_000017b8 = fVar51;
              }
              if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
                 (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
                  ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
                *(undefined1 *)((long)unaff_x28 + 0xf34) = 1;
              }
              lVar23 = *in_stack_00000150;
              if ((lVar23 == 0) || (lVar32 = *(long *)(lVar23 + 0x50), lVar32 == 0))
              goto LAB_02491464;
              uVar3 = *(uint *)(unaff_x19 + 0x94);
              if (*(uint *)(lVar32 + 0x18) <= uVar3)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              lVar37 = lVar32 + (long)(int)uVar3 * 0x5c;
              *(int *)(lVar37 + 0x34) = (int)unaff_x19[0x92];
              iVar12 = (int)unaff_x19[0x92];
              if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
                iVar12 = *(int *)((long)unaff_x19 + 0x494);
              }
              *(int *)((long)unaff_x19 + 0x494) = iVar12;
              *(int *)(lVar37 + 0x38) = iVar12;
              *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
              *(undefined4 *)(lVar37 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
              iVar12 = *(int *)((long)unaff_x19 + 0x494);
              if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
                iVar12 = *(int *)((long)unaff_x19 + 0x49c);
              }
              *(int *)((long)unaff_x19 + 0x49c) = iVar12;
              *(int *)(lVar37 + 0x40) = iVar12;
              *(int *)(lVar37 + 0x24) = (*(int *)(lVar37 + 0x3c) - *(int *)(lVar37 + 0x34)) + 1;
              *(undefined4 *)(lVar37 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
              lVar23 = *(long *)(lVar23 + 0x38);
              if (lVar23 == 0) goto LAB_02491464;
              if (*(uint *)(lVar23 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              uVar68 = *(undefined4 *)
                        (lVar23 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x21 + 0x11c);
              lVar32 = lVar32 + (long)(int)uVar3 * 0x5c;
              *(float *)(lVar32 + 0x70) = fVar53;
              *(undefined4 *)(lVar32 + 0x6c) = uVar68;
              lVar23 = *in_stack_00000150;
              if ((lVar23 == 0) || (lVar32 = *(long *)(lVar23 + 0x50), lVar32 == 0))
              goto LAB_02491464;
              if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              lVar23 = *(long *)(lVar23 + 0x38);
              if (lVar23 == 0) goto LAB_02491464;
              if (*(uint *)(lVar23 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              fVar45 = fVar45 - fVar43;
              lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
              *(undefined4 *)(lVar32 + 0x74) =
                   *(undefined4 *)
                    (lVar23 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x21 + 0x128);
              *(float *)(lVar32 + 0x78) = fVar45;
              lVar23 = *in_stack_00000150;
              if ((lVar23 == 0) || (lVar37 = *(long *)(lVar23 + 0x50), lVar37 == 0))
              goto LAB_02491464;
              lVar41 = (long)(int)*(uint *)(unaff_x19 + 0x94);
              if (*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              lVar32 = lVar37 + lVar41 * 0x5c;
              *(float *)(lVar32 + 0x44) =
                   *(float *)(lVar32 + 0x74) - fVar58 * in_stack_00000130._4_4_;
              *(float *)(lVar32 + 0x5c) = in_stack_000000d8._4_4_;
              if (*(int *)(lVar32 + 0x24) == 1) {
                *(int *)(lVar37 + lVar41 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
              }
              if ((*unaff_x27 == 0) || (lVar32 = *(long *)(lVar23 + 0x38), lVar32 == 0))
              goto LAB_02491464;
              lVar34 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
              uVar30 = (uint)*(undefined8 *)(lVar32 + 0x18);
              if (uVar30 <= *(uint *)((long)unaff_x19 + 0x49c))
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              if ((*(char *)(lVar32 + lVar34 * unaff_x21 + 0x194) == '\0') &&
                 (lVar34 = (long)(int)*(uint *)(unaff_x19 + 0x93),
                 uVar30 <= *(uint *)(unaff_x19 + 0x93)))
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              fVar58 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                       (in_stack_000000c8 *
                        (fStack00000000000000c4 +
                        fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)) -
                       *(float *)((long)unaff_x19 + 0x2a4));
              fVar51 = -fVar58;
              if ((char)unaff_x19[0x1d] != '\0') {
                fVar51 = fVar58;
              }
              lVar37 = lVar37 + lVar41 * 0x5c;
              *(float *)(lVar37 + 0x58) = *(float *)(lVar32 + lVar34 * unaff_x21 + 0x144) + fVar51;
              fVar51 = *(float *)(unaff_x19 + 0x9a);
              *(float *)(lVar37 + 0x48) = fStack0000000000000050 + (fVar45 - fVar53);
              *(float *)(lVar37 + 0x4c) = fVar45;
              param_2 = (ulong)(uint)(0.0 - fVar51);
              *(float *)(lVar37 + 0x50) = 0.0 - fVar51;
              *(float *)(lVar37 + 0x54) = fVar53;
              plVar27 = (long *)System_Threading_Mutex_TypeInfo;
              if ((int)in_stack_000017bc < 0x2d) {
                if (in_stack_000017bc - 10 < 2) {
LAB_0248dad8:
                  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  unaff_x29 = (long *)StringLiteral_302;
                  FUN_024d69d4();
                  lVar23 = unaff_x19[0x6c];
                  *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
                  iVar12 = (int)unaff_x19[0x94] + 1;
                  *(int *)(unaff_x19 + 0x94) = iVar12;
                  *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
                  if ((lVar23 != 0) && (*(long *)(lVar23 + 0x50) != 0)) {
                    if (*(int *)(*(long *)(lVar23 + 0x50) + 0x18) <= iVar12) {
                      FUN_024d6e60();
                      lVar23 = unaff_x19[0x6c];
                      if (lVar23 == 0) goto LAB_02491464;
                    }
                    lVar23 = *(long *)(lVar23 + 0x38);
                    if (lVar23 != 0) {
                      if (*in_stack_00000148 < *(uint *)(lVar23 + 0x18)) {
                        fVar51 = *(float *)(lVar23 + (int)*in_stack_00000148 * unaff_x21 + 0x154);
                        if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                          fVar58 = 0.0;
                          if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
                            fVar58 = *(float *)((long)unaff_x19 + 0x2c4);
                          }
                          uVar20 = 0;
                          fVar58 = *(float *)(unaff_x19 + 0x9a) +
                                   fVar51 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                                   fStack0000000000000054 *
                                   (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4)) +
                                   in_stack_000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar58);
                        }
                        else {
                          if ((in_stack_000017bc == 0x2029) ||
                             (fVar58 = 0.0, in_stack_000017bc == 10)) {
                            fVar58 = *(float *)((long)unaff_x19 + 0x2c4);
                          }
                          uVar20 = 1;
                          fVar58 = *(float *)(unaff_x19 + 0x9a) +
                                   *(float *)(unaff_x19 + 0x57) +
                                   in_stack_000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar58);
                        }
                        *(float *)(unaff_x19 + 0x9a) = fVar58;
                        *(undefined1 *)((long)unaff_x19 + 700) = uVar20;
                        lVar23 = *plVar27;
                        if (*(int *)(lVar23 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                          lVar23 = *plVar27;
                        }
                        uVar17 = *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x15a8);
                        *(float *)(unaff_x19 + 0x99) = fVar51;
                        param_2 = NEON_rev64(uVar17,4);
                        unaff_x19[0x98] = param_2;
                        *(float *)(unaff_x19 + 199) =
                             *(float *)(unaff_x19 + 0x80) + 0.0 +
                             *(float *)((long)unaff_x19 + 0x404);
                        FUN_024d69d4();
                        FUN_024d69d4();
                        *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
                        fStack0000000000000058 = 1.4013e-45;
                        bStack000000000000005c = 1;
                        unaff_x26 = in_stack_00000148;
                        goto LAB_0248ab98;
                      }
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
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
              else if ((in_stack_000017bc - 0x2028 < 2) || (in_stack_000017bc == 0x2d))
              goto LAB_0248dad8;
            }
LAB_0248dc08:
            uVar3 = *in_stack_00000148;
            if (uVar30 <= uVar3)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            if (*(char *)(lVar32 + (int)uVar3 * unaff_x21 + 0x194) != '\0') {
              lVar32 = lVar32 + (int)uVar3 * unaff_x21;
              uVar19 = *(ulong *)(lVar32 + 0x11c);
              uVar16 = *(ulong *)(in_stack_00000070 + 0x230);
              *(ulong *)(in_stack_00000070 + 0x230) =
                   uVar19 ^ (uVar19 ^ uVar16) &
                            CONCAT44(-(uint)((float)(uVar16 >> 0x20) < (float)(uVar19 >> 0x20)),
                                     -(uint)((float)uVar16 < (float)uVar19));
              uVar16 = *(ulong *)(in_stack_00000070 + 0x238);
              param_2 = *(ulong *)(lVar32 + 0x128);
              *(ulong *)(in_stack_00000070 + 0x238) =
                   param_2 ^ (param_2 ^ uVar16) &
                             CONCAT44(-(uint)((float)(param_2 >> 0x20) < (float)(uVar16 >> 0x20)),
                                      -(uint)((float)param_2 < (float)uVar16));
            }
            if (((int)unaff_x19[0x5b] == 5) &&
               ((0xd < uVar42 || ((1 << (ulong)(uVar42 & 0x1f) & 0x2c00U) == 0)))) {
              lVar32 = *(long *)(lVar23 + 0x58);
              if (lVar32 == 0) goto LAB_02491464;
              iVar12 = (int)unaff_x19[0x95] + 1;
              if (*(int *)(lVar32 + 0x18) < iVar12) {
                if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_01147c08((long *)(lVar23 + 0x58),iVar12,1,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__
                            );
                lVar23 = *in_stack_00000150;
                if (lVar23 == 0) goto LAB_02491464;
              }
              lVar32 = *(long *)(lVar23 + 0x58);
              if (lVar32 == 0) goto LAB_02491464;
              uVar30 = *(uint *)(unaff_x19 + 0x95);
              lVar37 = (long)(int)uVar30;
              uVar3 = *(uint *)(lVar32 + 0x18);
              if (uVar3 <= uVar30)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              lVar41 = lVar32 + lVar37 * 0x14;
              fVar58 = *(float *)(lVar41 + 0x30);
              param_2 = (ulong)(uint)fVar58;
              *(undefined4 *)(lVar41 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
              fVar51 = *(float *)((long)unaff_x19 + 0x4bc);
              if (fVar58 <= *(float *)((long)unaff_x19 + 0x4bc)) {
                fVar51 = fVar58;
              }
              *(float *)(lVar41 + 0x30) = fVar51;
              uVar42 = *(uint *)((long)unaff_x19 + 0x48c);
              if (uVar42 == 0 && uVar30 == 0) {
                *(uint *)(lVar32 + lVar37 * 0x14 + 0x20) = uVar42;
              }
              else {
                uVar31 = uVar42 - 1;
                if (0 < (int)uVar42) {
                  lVar23 = *(long *)(lVar23 + 0x38);
                  if (lVar23 == 0) goto LAB_02491464;
                  if (*(uint *)(lVar23 + 0x18) <= uVar31)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  if (uVar30 != *(uint *)(lVar23 + (long)(int)uVar31 * (long)iVar39 + 0x68)) {
                    if (uVar30 - 1 < uVar3) {
                      *(uint *)(lVar32 + 0x20 + (long)(int)(uVar30 - 1) * 0x14 + 4) = uVar31;
                      *(uint *)(lVar32 + 0x20 + lVar37 * 0x14) = uVar42;
                      goto LAB_0248dc84;
                    }
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  }
                }
                if ((float)uVar42 == in_stack_00000078._4_4_) {
                  *(float *)(lVar32 + lVar37 * 0x14 + 0x24) = in_stack_00000078._4_4_;
                }
              }
            }
LAB_0248dc84:
            plVar27 = (long *)System_Threading_Mutex_TypeInfo;
            if (((char)unaff_x19[0x5a] != '\0') ||
               ((*(uint *)(unaff_x19 + 0x5b) < 7 &&
                ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) != 0)))) {
              if ((uVar11 == 0) &&
                 (((in_stack_000017bc != 0x2d && (in_stack_000017bc != 0x200b)) &&
                  (in_stack_000017bc != 0xad)))) {
                if (*(char *)((long)unaff_x19 + 0x2d2) == '\0') {
LAB_0248de4c:
                  if (((((0x2bfd < in_stack_000017bc - 0xac01) &&
                        (0x1d < in_stack_000017bc - 0xa961)) && (0xfd < in_stack_000017bc - 0x1101))
                      || (uVar16 = FUN_024e95f0(0), (uVar16 & 1) != 0)) &&
                     ((((0xed < in_stack_000017bc - 0xff01 && (0x1d < in_stack_000017bc - 0xfe31))
                       && (0x717d < in_stack_000017bc - 0x2e81)) &&
                      (0x1fd < in_stack_000017bc - 0xf901)))) goto LAB_0248ded4;
                  lVar23 = FUN_024e94b0(0);
                  if ((lVar23 == 0) || (*(long *)(lVar23 + 0x10) == 0)) goto LAB_02491464;
                  uVar16 = FUN_0129aa60(*(long *)(lVar23 + 0x10),&stack0x00000880,
                                        *(undefined8 *)
                                         System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                       );
                  if ((int)*in_stack_00000148 < (int)in_stack_00000078._4_4_) {
                    lVar23 = FUN_024e94b0(0);
                    if (((lVar23 == 0) || (*in_stack_00000150 == 0)) ||
                       (lVar32 = *(long *)(*in_stack_00000150 + 0x38), lVar32 == 0))
                    goto LAB_02491464;
                    if (*(uint *)(lVar32 + 0x18) <= *in_stack_00000148 + 1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    if (*(long *)(lVar23 + 0x18) == 0) goto LAB_02491464;
                    in_stack_00000880 =
                         (uint)*(ushort *)
                                (lVar32 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar39 + 0x20)
                    ;
                    uVar19 = FUN_0129aa60(*(long *)(lVar23 + 0x18),&stack0x00000880,
                                          *(undefined8 *)
                                           System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                         );
                    if ((uVar16 & 1) != 0) goto LAB_0248e0dc;
                    if ((uVar19 & 1) == 0) goto LAB_0248e1b0;
                    plVar27 = (long *)System_Threading_Mutex_TypeInfo;
                    if ((bStack000000000000005c & 1) == 0) {
                      bStack000000000000005c = 0;
                      goto LAB_0248e168;
                    }
                  }
                  else {
                    in_stack_00000880 = in_stack_000017bc;
                    if ((uVar16 & 1) == 0) {
LAB_0248e1b0:
                      plVar27 = (long *)System_Threading_Mutex_TypeInfo;
                      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      FUN_024d69d4();
                      bStack000000000000005c = 0;
                      goto LAB_0248e168;
                    }
LAB_0248e0dc:
                    plVar27 = (long *)System_Threading_Mutex_TypeInfo;
                    if (uVar26 != uVar2 || ((bStack000000000000005c ^ 0xff) & 1) != 0)
                    goto LAB_0248e168;
                  }
joined_r0x0248e0fc:
                  System_Threading_Mutex_TypeInfo = (undefined *)plVar27;
                  if (uVar11 != 0) {
LAB_0248e100:
                    plVar27 = (long *)System_Threading_Mutex_TypeInfo;
                    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    FUN_024d69d4();
                  }
                  if (*(int *)(*plVar27 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  FUN_024d69d4();
                  bStack000000000000005c = 1;
                }
                else {
LAB_0248ded4:
                  plVar27 = (long *)System_Threading_Mutex_TypeInfo;
                  if ((bStack000000000000005c & 1) != 0) {
                    if ((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) == 0)
                    goto joined_r0x0248e0fc;
                    goto LAB_0248e100;
                  }
                  bStack000000000000005c = 0;
                }
              }
              else {
                if (*(char *)((long)unaff_x19 + 0x2d2) == '\x01') goto LAB_0248ded4;
                if (((in_stack_000017bc - 0x2007 < 0x29) &&
                    ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
                   ((in_stack_000017bc == 0xa0 || (in_stack_000017bc == 0x2060))))
                goto LAB_0248de4c;
                if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_024d69d4();
                bStack000000000000005c = 0;
                *(undefined4 *)(*(long *)(*plVar27 + 0xb8) + 0xe78) = 0xffffffff;
              }
            }
LAB_0248e168:
            if (*(int *)(*plVar27 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            unaff_x29 = (long *)StringLiteral_302;
            FUN_024d69d4();
            *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
            unaff_x26 = in_stack_00000148;
LAB_0248ab98:
            fVar51 = unaff_s12;
            in_stack_00001788 = in_stack_00001788 + 1;
            lVar23 = unaff_x19[0x8e];
            if (lVar23 != 0) {
              if ((int)in_stack_00001788 < (int)*(uint *)(lVar23 + 0x18)) {
                if (*(uint *)(lVar23 + 0x18) <= in_stack_00001788)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                in_stack_000017bc = *(uint *)(lVar23 + (long)(int)in_stack_00001788 * 0xc + 0x20);
                if (in_stack_000017bc == 0) goto LAB_0248e4dc;
                if (5 < in_stack_00000140._4_4_) {
                  uVar17 = FUN_0176eb1c(&stack0x000017bc,0);
                  uVar15 = FUN_0176eb1c(&stack0x00001788,0);
                  uVar17 = FUN_0160073c(*(undefined8 *)
                                         UnityEngine_Rendering_Universal_DebugValidationMode_var,
                                        uVar17,*(undefined8 *)
                                                Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                                        ,uVar15,0);
                  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*unaff_x29);
                  }
                  FUN_026610e4(uVar17,0);
                  in_stack_000017a8 = CONCAT44(3,*unaff_x26);
                }
                unaff_s12 = fVar51;
                if ((*(char *)((long)unaff_x19 + 0x2fa) != '\0') && (in_stack_000017bc == 0x3c))
                goto code_r0x0248a9ac;
                if ((*in_stack_00000150 != 0) &&
                   (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 != 0)) {
                  if (*unaff_x26 < *(uint *)(lVar23 + 0x18)) {
                    lVar23 = lVar23 + (int)*unaff_x26 * unaff_x21;
                    *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar23 + 0x2c);
                    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar23 + 0x58);
                    unaff_x19[0x1f] = *(long *)(lVar23 + 0x38);
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__GetInputAction
                    ;
                  }
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                }
                goto LAB_02491464;
              }
LAB_0248e4dc:
              fVar51 = (float)param_2;
              if (((char)unaff_x19[0x46] != '\0') &&
                 (fVar51 = DAT_02956ccc,
                 DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47)))
              {
                fVar51 = *(float *)((long)unaff_x19 + 0x1dc);
                fVar58 = *(float *)((long)unaff_x19 + 0x24c);
                if ((fVar51 < fVar58) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                {
                  if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
                    *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
                  }
                  fVar53 = (*(float *)((long)unaff_x19 + 0x234) - fVar51) * 0.5;
                  if (fVar53 <= DAT_028aa298) {
                    fVar53 = DAT_028aa298;
                  }
                  *(float *)(unaff_x19 + 0x47) = fVar51;
                  fVar53 = (fVar51 + fVar53) * 20.0 + 0.5;
                  fVar51 = DAT_02958220;
                  if (fVar53 != INFINITY) {
                    fVar51 = (float)(int)fVar53 / 20.0;
                  }
                  if (fVar58 <= fVar51) {
                    fVar51 = fVar58;
                  }
                  goto LAB_0248e598;
                }
              }
              *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
              if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
                uVar17 = FUN_0176eb1c(_fStack0000000000000038,0);
                uVar15 = FUN_017840ac(in_stack_00000040,0);
                uVar17 = FUN_0160073c(*(undefined8 *)
                                       Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__,uVar17,
                                      *(undefined8 *)
                                       Method_UnityEngine_GameObject_GetComponents<Component>__,
                                      uVar15,0);
                if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*unaff_x29);
                }
                FUN_02660dac(uVar17,0);
              }
              puVar8 = Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
              if ((*unaff_x26 == 0) || ((*unaff_x26 == 1 && (uVar22 == 3)))) {
                (**(code **)(*unaff_x19 + 0x958))();
                lVar23 = *(long *)puVar8;
                goto LAB_02491474;
              }
              lVar23 = *plVar27;
              if (*(int *)(lVar23 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar23 = *plVar27;
              }
              plVar27 = (long *)PTR_DAT_033ed410;
              lVar23 = **(long **)(lVar23 + 0xb8);
              if (lVar23 == 0) goto LAB_02491464;
              if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              iVar12 = *(int *)(lVar23 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
              if ((*in_stack_00000150 == 0) ||
                 (lVar23 = *(long *)(*in_stack_00000150 + 0x60), lVar23 == 0)) goto LAB_02491464;
              if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              if (*(int *)(lVar23 + 0x18) == 0)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              FUN_024e7d94(lVar23 + 0x20,0,0);
              if (DAT_03774d76 == '\0') {
                thunk_FUN_00d48444(
                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                  );
                DAT_03774d76 = '\x01';
              }
              iVar39 = (int)unaff_x19[0x4d];
              fStack00000000000000c4 =
                   **(float **)
                     (*(long *)
                       Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                     + 0xb8);
              in_stack_000000b8 =
                   *(undefined8 *)
                    (*(float **)
                      (*(long *)
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      + 0xb8) + 1);
              lVar23 = unaff_x19[0xea];
              in_stack_00000088 = (float *)in_stack_000000b8;
              fStack0000000000000090 = fStack00000000000000c4;
              if (iVar39 < 0x401) {
                if (iVar39 == 0x100) {
                  if (lVar23 == 0) goto LAB_02491464;
                  if (*(uint *)(lVar23 + 0x18) < 2)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  uVar17 = *(undefined8 *)(lVar23 + 0x30);
                  if ((int)unaff_x19[0x5b] == 5) {
                    if ((*in_stack_00000150 == 0) ||
                       (lVar32 = *(long *)(*in_stack_00000150 + 0x58), lVar32 == 0))
                    goto LAB_02491464;
                    if (*(uint *)(lVar32 + 0x18) <= uStack0000000000000030)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    fVar51 = *(float *)(lVar32 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
                  }
                  else {
                    fVar51 = *(float *)(unaff_x19 + 0x96);
                  }
                  fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar23 + 0x2c);
                  fVar51 = (0.0 - fVar51) - fStack0000000000000020;
                }
                else if (iVar39 == 0x200) {
                  if (lVar23 == 0) goto LAB_02491464;
                  if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  fStack0000000000000090 =
                       (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
                  uVar17 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                                    (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5,
                                    ((float)*(undefined8 *)(lVar23 + 0x24) +
                                    (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5);
                  if ((int)unaff_x19[0x5b] == 5) {
                    if ((*in_stack_00000150 == 0) ||
                       (lVar23 = *(long *)(*in_stack_00000150 + 0x58), lVar23 == 0))
                    goto LAB_02491464;
                    if (*(uint *)(lVar23 + 0x18) <= uStack0000000000000030)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    lVar23 = lVar23 + (long)(int)uStack0000000000000030 * 0x14;
                    fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
                    fVar51 = ((fStack0000000000000020 + *(float *)(lVar23 + 0x28) +
                              *(float *)(lVar23 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
                  }
                  else {
                    fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
                    fVar51 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) +
                              in_stack_000017b8) - fStack0000000000000024) * -0.5 + 0.0;
                  }
                }
                else {
                  if (iVar39 != 0x400) goto LAB_0248eb64;
                  if (lVar23 == 0) goto LAB_02491464;
                  if (*(int *)(lVar23 + 0x18) == 0)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  uVar17 = *(undefined8 *)(lVar23 + 0x24);
                  if ((int)unaff_x19[0x5b] == 5) {
                    if ((*in_stack_00000150 == 0) ||
                       (lVar32 = *(long *)(*in_stack_00000150 + 0x58), lVar32 == 0))
                    goto LAB_02491464;
                    if (*(uint *)(lVar32 + 0x18) <= uStack0000000000000030)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    in_stack_000017b8 =
                         *(float *)(lVar32 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
                  }
                  fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar23 + 0x20);
                  fVar51 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
                }
                in_stack_00000088 =
                     (float *)CONCAT44((float)((ulong)uVar17 >> 0x20) + 0.0,(float)uVar17 + fVar51);
              }
              else if (iVar39 == 0x800) {
                if (lVar23 == 0) goto LAB_02491464;
                if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                fVar51 = ((float)*(undefined8 *)(lVar23 + 0x24) +
                         (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5;
                fStack0000000000000090 =
                     fStack000000000000002c + 0.0 +
                     (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
                in_stack_00000088 =
                     (float *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5
                                       + 0.0,fVar51 + 0.0);
              }
              else {
                if (iVar39 == 0x1000) {
                  if (lVar23 == 0) goto LAB_02491464;
                  if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  fVar51 = (float)*(undefined8 *)(lVar23 + 0x24) +
                           (float)*(undefined8 *)(lVar23 + 0x30);
                  fVar58 = (float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                           (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20);
                  fStack0000000000000020 =
                       fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) +
                       *(float *)(unaff_x19 + 0x9b);
                  fStack0000000000000090 =
                       fStack000000000000002c + 0.0 +
                       (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
                }
                else {
                  if (iVar39 != 0x2000) goto LAB_0248eb64;
                  if (lVar23 == 0) goto LAB_02491464;
                  if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  fVar51 = (float)*(undefined8 *)(lVar23 + 0x24) +
                           (float)*(undefined8 *)(lVar23 + 0x30);
                  fVar58 = (float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                           (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20);
                  fStack0000000000000020 =
                       *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
                  fStack0000000000000090 =
                       fStack000000000000002c + 0.0 +
                       (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
                }
                fVar51 = fVar51 * 0.5;
                in_stack_00000088 =
                     (float *)CONCAT44(fVar58 * 0.5 + 0.0,
                                       fVar51 + (0.0 - (fStack0000000000000020 -
                                                       fStack0000000000000024) * 0.5));
              }
LAB_0248eb64:
              lVar23 = FUN_0249b7f8();
              if (lVar23 == 0) goto LAB_02491464;
              FUN_026a125c(lVar23,0);
              __x = DAT_028aa048;
              *(float *)((long)unaff_x19 + 0x6dc) = fVar51;
              dVar52 = modf(__x,(double *)&stack0x00000880);
              puVar8 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
              if (dVar52 == 0.5) {
                fVar58 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
                if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
                  fVar58 = fVar58 + 1.0;
                }
              }
              else {
                fVar58 = 255.0;
              }
              dVar52 = modf(__x,(double *)&stack0x00000880);
              if (dVar52 == 0.5) {
                fVar53 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
                if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
                  fVar53 = fVar53 + 1.0;
                }
              }
              else {
                fVar53 = 255.0;
              }
              dVar52 = modf(__x,(double *)&stack0x00000880);
              if (dVar52 == 0.5) {
                fVar43 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
                if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
                  fVar43 = fVar43 + 1.0;
                }
              }
              else {
                fVar43 = 255.0;
              }
              dVar52 = modf(__x,(double *)&stack0x00000880);
              if (dVar52 == 0.5) {
                fVar45 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
                if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
                  fVar45 = fVar45 + 1.0;
                }
              }
              else {
                fVar45 = 255.0;
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
              lVar23 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
              if (*(int *)(lVar23 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar23 = *(long *)puVar8;
              }
              puVar24 = *(undefined4 **)(lVar23 + 0xb8);
              UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                        (*puVar24,puVar24[1],puVar24[2],puVar24[3],&stack0x00001790,0x4000ffff,0);
              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar23 = *in_stack_00000150;
              if (lVar23 == 0) goto LAB_02491464;
              uVar11 = *in_stack_00000148;
              if ((int)uVar11 < 1) {
                iStack00000000000000a4 = 0;
                iVar12 = 0;
                plVar40 = (long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
                goto LAB_02491068;
              }
              lVar23 = *(long *)(lVar23 + 0x38);
              if (lVar23 == 0) goto LAB_02491464;
              iVar39 = 0;
              bVar7 = false;
              bVar6 = false;
              bVar10 = false;
              iStack00000000000000a4 = 0;
              fStack0000000000000024 = 0.0;
              bVar9 = false;
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
                   (int)fVar58 & 0xffU | ((int)fVar53 & 0xffU) << 8 | ((int)fVar43 & 0xffU) << 0x10
                   | (int)fVar45 << 0x18;
              fVar53 = 0.0;
              fVar58 = 0.0;
              lStack0000000000000128 = 0x2e0;
              fStack0000000000000098 = fStack00000000000000a8;
              in_stack_000000a0 = fStack00000000000000ac;
              fStack000000000000004c = fStack00000000000000ac;
              fStack0000000000000050 = (float)uStack0000000000000094;
              in_stack_00000078._4_4_ = fStack00000000000000a8;
              in_stack_00000068._4_4_ = fStack00000000000000ac;
              uStack0000000000000060 = uStack0000000000000094;
              uVar26 = 0;
              uVar22 = 1;
              goto LAB_0248ef74;
            }
          }
        }
      }
    }
  }
  goto LAB_02491464;
code_r0x0248a9ac:
  *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
  uVar16 = FUN_024d0688();
  if (((uVar16 & 1) != 0) &&
     (in_stack_00001788 = in_stack_0000176c, uVar22 = in_stack_000017bc,
     *(int *)((long)unaff_x19 + 0x63c) == 0)) goto LAB_0248ab98;

  UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__GetInputAction
  :
  if ((unaff_x19[0x6c] == 0) || (lVar23 = *(long *)(unaff_x19[0x6c] + 0x38), lVar23 == 0))
  goto LAB_02491464;
  uVar11 = *unaff_x26;
  if (*(uint *)(lVar23 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar32 = (long)(int)uVar11;
  unaff_w22 = (uint)*(byte *)(lVar23 + lVar32 * unaff_x21 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
  unaff_w24 = (undefined4)unaff_x19[0x23];
  if ((uint)in_stack_000017a8 == uVar11) {
    in_stack_000017bc = (uint)((ulong)in_stack_000017a8 >> 0x20);
    unaff_w20 = 1;
    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
    if (in_stack_000017bc == 0x2026) {
      lVar37 = unaff_x19[0xc9];
      lVar23 = lVar23 + lVar32 * unaff_x21;
      *(undefined4 *)(lVar23 + 0x2c) = 0;
      *(long *)(lVar23 + 0x30) = lVar37;
      *(long *)(lVar23 + 0x38) = unaff_x19[0xca];
      *(long *)(lVar23 + 0x50) = unaff_x19[0xcb];
      *(int *)(lVar23 + 0x58) = (int)unaff_x19[0xcc];
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      in_stack_000017a8 = CONCAT44(3,uVar11 + 1);
    }
    else if (in_stack_000017bc == 3) {
      if ((*unaff_x27 == 0) || (lVar37 = FUN_024b11ac(*unaff_x27,0), lVar37 == 0))
      goto LAB_02491464;
      in_stack_00000bf8 = 3;
      FUN_01299bc0(lVar37,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
      if (*(uint *)(lVar23 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      unaff_w20 = 1;
      *(ulong *)(lVar23 + lVar32 * unaff_x21 + 0x30) = CONCAT44(in_stack_00000884,in_stack_00000880)
      ;
      uVar11 = *(uint *)((long)unaff_x19 + 0x48c);
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
    }
  }
  else {
    unaff_w20 = 0;
  }
  plVar27 = (long *)System_Threading_Mutex_TypeInfo;
  if (((int)uVar11 < *(int *)((long)unaff_x19 + 0x31c)) && (in_stack_000017bc != 3)) {
    if ((*in_stack_00000150 == 0) || (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar23 + 0x18) <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar23 = lVar23 + (long)(int)uVar11 * (long)iVar39;
    *(undefined1 *)(lVar23 + 0x194) = 0;
    *(undefined2 *)(lVar23 + 0x20) = 0x200b;
    *(undefined4 *)(lVar23 + 100) = 0;
    *in_stack_00000148 = uVar11 + 1;
    unaff_x26 = in_stack_00000148;
    uVar22 = in_stack_000017bc;
    goto LAB_0248ab98;
  }
  iVar12 = *(int *)((long)unaff_x19 + 0x63c);
  if (iVar12 == 0) {
    uVar11 = *(uint *)((long)unaff_x19 + 0x254);
    if ((uVar11 >> 4 & 1) == 0) {
      if ((uVar11 >> 3 & 1) == 0) {
        unaff_x26 = in_stack_00000148;
        if ((uVar11 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar16 = FUN_016f92d4(in_stack_000017bc,0);
          if ((uVar16 & 1) != 0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar11 = FUN_016f95a8(in_stack_000017bc,0);
            in_stack_000017bc = uVar11 & 0xffff;
            fVar51 = fStack0000000000000028;
          }
        }
        goto code_r0x0248af7c;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar16 = FUN_016f9218(in_stack_000017bc,0);
      unaff_x26 = in_stack_00000148;
      if ((uVar16 & 1) == 0) goto code_r0x0248af7c;
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_016f9724(in_stack_000017bc,0);
    }
    else {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar16 = FUN_016f92d4(in_stack_000017bc,0);
      unaff_x26 = in_stack_00000148;
      if ((uVar16 & 1) == 0) goto code_r0x0248af7c;
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_016f95a8(in_stack_000017bc,0);
    }
    in_stack_000017bc = uVar11 & 0xffff;
    unaff_x26 = in_stack_00000148;
    goto code_r0x0248af7c;
  }
  unaff_x26 = in_stack_00000148;
  if (iVar12 == 0) goto LAB_0248af84;
LAB_0248abc8:
  if (iVar12 == 1) {
    if ((*in_stack_00000150 == 0) || (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar23 + 0x18) <= *unaff_x26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar23 = lVar23 + (int)*unaff_x26 * unaff_x21;
    lVar32 = *(long *)(lVar23 + 0x40);
    unaff_x19[0xd2] = lVar32;
    *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar23 + 0x48);
    if ((lVar32 == 0) || (lVar23 = FUN_024ebfa0(lVar32,0), lVar23 == 0)) goto LAB_02491464;
    FUN_0132138c(lVar23,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                 *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
    puVar8 = System_Threading_Mutex_TypeInfo;
    lVar32 = CONCAT44(in_stack_00000884,in_stack_00000880);
    plVar27 = (long *)System_Threading_Mutex_TypeInfo;
    uVar22 = in_stack_000017bc;
    if (lVar32 != 0) {
      if (in_stack_000017bc == 0x3c) {
        in_stack_000017bc = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
      }
      else {
        lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar23 = *(long *)puVar8;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1b4) = *(undefined4 *)(*(long *)(lVar23 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x1f] == 0) goto LAB_02491464;
      fVar58 = *(float *)(unaff_x19 + 0x3c);
      memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
      iVar12 = FUN_026fd110(&stack0x00001700,0);
      if (*unaff_x27 == 0) goto LAB_02491464;
      memmove(&stack0x00001700,(void *)(*unaff_x27 + 0x50),0x60);
      fVar43 = (float)FUN_026fd120(&stack0x00001700,0);
      fVar53 = in_stack_00000080._4_4_;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar53 = unaff_s12;
      }
      if (unaff_x19[0xd2] == 0) goto LAB_02491464;
      fVar53 = (fVar58 / (float)iVar12) * fVar43 * fVar53;
      iVar12 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
      fVar58 = *(float *)(unaff_x19 + 0x3c);
      if (iVar12 < 1) {
        if (*unaff_x27 == 0) goto LAB_02491464;
        iVar12 = FUN_026fd110(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar43 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
        fVar45 = in_stack_00000080._4_4_;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar45 = unaff_s12;
        }
        if (unaff_x19[0x1f] == 0) goto LAB_02491464;
        fVar46 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
        if (*(long *)(lVar32 + 0x20) == 0) goto LAB_02491464;
        FUN_026fd62c(&stack0x00000880,*(long *)(lVar32 + 0x20),0);
        unaff_x28[0x1cd] = unaff_x28[1];
        unaff_x28[0x1cc] = *unaff_x28;
        fVar65 = (float)FUN_026fd45c(&stack0x000016e0,0);
        if (*(long *)(lVar32 + 0x20) == 0) goto LAB_02491464;
        fVar67 = *(float *)(lVar32 + 0x2c);
        fVar47 = (float)FUN_026fd668(*(long *)(lVar32 + 0x20),0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar44 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar69 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar59 = *(float *)((long)unaff_x19 + 0x3fc);
        fVar48 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
        if (unaff_x19[0x1f] == 0) goto LAB_02491464;
        fVar48 = fVar53 * fVar69 * fVar59 * fVar48;
        fVar45 = (fVar58 / (float)iVar12) * fVar43 * fVar45;
        fVar46 = fVar45 * (fVar46 / fVar65) * fVar67 * fVar47;
        fVar45 = fVar45 / fVar46;
        fVar44 = fVar45 * fVar44;
        fVar58 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
        fVar45 = fVar45 * fVar58;
      }
      else {
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        iVar12 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar43 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (*(long *)(lVar32 + 0x20) == 0) goto LAB_02491464;
        fVar46 = *(float *)(lVar32 + 0x2c);
        fVar45 = in_stack_00000080._4_4_;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar45 = 1.0;
        }
        fVar65 = (float)FUN_026fd668(*(long *)(lVar32 + 0x20),0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar44 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar67 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar47 = *(float *)((long)unaff_x19 + 0x3fc);
        fVar48 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar48 = fVar53 * fVar67 * fVar47 * fVar48;
        fVar46 = (fVar58 / (float)iVar12) * fVar43 * fVar45 * fVar46 * fVar65;
        fVar45 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
      }
      lVar23 = unaff_x19[0x6c];
      unaff_x19[200] = lVar32;
      if ((lVar23 == 0) || (lVar32 = *(long *)(lVar23 + 0x38), lVar32 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar32 + 0x18) <= *unaff_x26)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar32 = lVar32 + (int)*unaff_x26 * unaff_x21;
      *(undefined4 *)(lVar32 + 0x2c) = 1;
      *(float *)(lVar32 + 0x160) = fVar46;
      in_stack_00000130._4_4_ = 0.0;
      *(long *)(lVar32 + 0x40) = unaff_x19[0xd2];
      *(long *)(lVar32 + 0x38) = unaff_x19[0x1f];
      *(int *)(lVar32 + 0x58) = (int)unaff_x19[0x23];
      *(undefined4 *)(unaff_x19 + 0x23) = unaff_w24;
      goto LAB_0248b384;
    }
    goto LAB_0248ab98;
  }
  lVar23 = *in_stack_00000150;
  fVar58 = 0.0;
  if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
    fVar58 = (float)unaff_d9;
  }
  fVar48 = 0.0;
  if (lVar23 == 0) goto LAB_02491464;
  fVar44 = 0.0;
  fVar45 = 0.0;
  goto LAB_0248b39c;
LAB_0248ef74:
  uVar11 = uVar22 - 1;
  if (*(uint *)(lVar23 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*in_stack_00000150 == 0) || (lVar32 = *(long *)(*in_stack_00000150 + 0x50), lVar32 == 0))
  goto LAB_02491464;
  lVar41 = (long)(int)uVar11;
  lVar37 = lVar23 + lVar41 * 0x178;
  uVar2 = *(uint *)(lVar37 + 100);
  if (*(uint *)(lVar32 + 0x18) <= uVar2)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar35 = *(long *)(lVar37 + 0x38);
  uVar31 = (uint)*(ushort *)(lVar37 + 0x20);
  lVar34 = (long)(int)uVar2;
  lVar32 = lVar32 + lVar34 * 0x5c;
  uVar3 = *(uint *)(lVar32 + 0x3c);
  uVar30 = *(uint *)(lVar32 + 0x40);
  lVar37 = (long)(int)uVar30;
  iVar13 = *(int *)(lVar32 + 0x28);
  iVar14 = *(int *)(lVar32 + 0x2c);
  uVar42 = *(uint *)(lVar32 + 0x68);
  fVar48 = *(float *)(lVar32 + 0x5c);
  fVar69 = *(float *)(lVar32 + 0x60);
  iVar4 = *(int *)(lVar32 + 0x20);
  fVar44 = *(float *)(lVar32 + 0x4c);
  fVar65 = *(float *)(lVar32 + 0x54);
  fVar43 = *(float *)(lVar32 + 0x58);
  fVar47 = *(float *)(lVar32 + 0x6c);
  fVar67 = *(float *)(lVar32 + 0x70);
  fVar45 = *(float *)(lVar32 + 0x74);
  fVar46 = *(float *)(lVar32 + 0x78);
  fVar59 = fVar48 + fVar69;
  if ((int)uVar42 < 9) {
    switch(uVar42) {
    case 1:
      if ((char)unaff_x19[0x1d] == '\0') {
        fStack00000000000000c4 = fVar69 + 0.0;
      }
      else {
        fStack00000000000000c4 = 0.0 - fVar43;
      }
      break;
    case 2:
LAB_0248f124:
      fStack00000000000000c4 = (fVar69 + fVar48 * 0.5) - fVar43 * 0.5;
      break;
    default:
      goto switchD_0248f070_caseD_3;
    case 4:
      fStack00000000000000c4 = fVar59 - fVar43;
      if ((char)unaff_x19[0x1d] != '\0') {
        fStack00000000000000c4 = fVar59;
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
    if (uVar31 < 0xad) {
      if ((uVar31 != 3) && (uVar31 != 10)) goto LAB_0248f0c8;
    }
    else if ((uVar31 != 0xad) && ((uVar31 != 0x200b && (uVar31 != 0x2060)))) {
LAB_0248f0c8:
      if (*(uint *)(lVar23 + 0x18) <= uVar3)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar5 = *(undefined2 *)(lVar23 + (long)(int)uVar3 * 0x178 + 0x20);
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar16 = FUN_016f9f84(uVar5,0);
      if ((uVar16 & 1) == 0) {
        bVar1 = (int)uVar2 < (int)unaff_x19[0x94];
      }
      else {
        bVar1 = false;
      }
      if ((fVar43 <= fVar48) && (!bVar1 && (uVar42 >> 4 & 1) == 0)) {
        fStack00000000000000c4 = fVar69;
        if ((char)unaff_x19[0x1d] != '\0') {
          fStack00000000000000c4 = fVar59;
        }
        goto LAB_0248f194;
      }
      if (((uVar22 == 1) || (uVar2 != uVar26)) || (uVar11 == *(uint *)((long)unaff_x19 + 0x31c))) {
        fStack00000000000000c4 = fVar69;
        if ((char)unaff_x19[0x1d] != '\0') {
          fStack00000000000000c4 = fVar59;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fStack0000000000000024 = (float)FUN_016fa418(uVar31,0);
        in_stack_000000b8 = 0;
      }
      else {
        cVar21 = (char)unaff_x19[0x1d];
        fVar69 = -fVar43;
        if (cVar21 != '\0') {
          fVar69 = fVar43;
        }
        if (*(uint *)(lVar23 + 0x18) <= uVar3)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar43 = 1.0;
        iVar14 = (int)*(char *)(lVar23 + (long)(int)uVar3 * 0x178 + 0x194) +
                 (-iVar4 - ((uint)fStack0000000000000024 & 1)) + iVar14 + -1;
        if (0 < iVar14) {
          fVar43 = *(float *)((long)unaff_x19 + 0x2d4);
        }
        if (iVar14 < 1) {
          iVar14 = 1;
        }
        if (uVar31 == 9) {
LAB_02490fe0:
          fVar43 = 1.0 - fVar43;
        }
        else {
          if (uVar31 != 0xa0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar16 = FUN_016fa418(uVar31,0);
            cVar21 = (char)unaff_x19[0x1d];
            if ((uVar16 & 1) != 0) goto LAB_02490fe0;
          }
          iVar14 = (iVar4 - (~(uint)fStack0000000000000024 & 1)) + iVar13;
        }
        fVar43 = ((fVar48 + fVar69) * fVar43) / (float)iVar14;
        if (cVar21 == '\0') {
          fStack00000000000000c4 = fStack00000000000000c4 + fVar43;
          in_stack_000000b8 =
               CONCAT44((float)((ulong)in_stack_000000b8 >> 0x20) + 0.0,
                        (float)in_stack_000000b8 + 0.0);
        }
        else {
          fStack00000000000000c4 = fStack00000000000000c4 - fVar43;
        }
      }
    }
  }
  else if (uVar42 == 0x20) {
    fVar43 = fVar47 + fVar45;
    goto LAB_0248f124;
  }
switchD_0248f070_caseD_3:
  uVar42 = (uint)*(undefined8 *)(lVar23 + 0x18);
  if (uVar42 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar32 = lVar23 + lVar41 * 0x178;
  fVar69 = fStack0000000000000090 + fStack00000000000000c4;
  fVar43 = SUB84(in_stack_00000088,0) + (float)in_stack_000000b8;
  fVar48 = (float)((ulong)in_stack_00000088 >> 0x20) + (float)((ulong)in_stack_000000b8 >> 0x20);
  plVar40 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(char *)(lVar32 + 0x194) == '\0') goto LAB_0248fabc;
  iVar13 = *(int *)(lVar23 + lVar41 * 0x178 + 0x2c);
  if (iVar13 != 0) goto LAB_0248f808;
  fVar53 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar2,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
  case 0:
    lVar25 = lVar23 + lVar41 * 0x178;
    *(undefined4 *)(lVar25 + 0x84) = 0;
    *(undefined4 *)(lVar25 + 0xac) = 0;
    *(undefined4 *)(lVar25 + 0xd4) = 0x3f800000;
    fVar53 = 1.0;
    break;
  case 1:
    fVar46 = *(float *)(lVar23 + lVar41 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
      lVar25 = lVar23 + lVar41 * 0x178;
      fVar45 = (fStack00000000000000c4 + fVar46) - *(float *)(in_stack_00000070 + 0x230);
      fVar46 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      goto LAB_0248f2dc;
    }
    lVar25 = lVar23 + lVar41 * 0x178;
    fVar45 = fVar45 - fVar47;
    *(float *)(lVar25 + 0x84) = fVar53 + (fVar46 - fVar47) / fVar45;
    *(float *)(lVar25 + 0xac) = fVar53 + (*(float *)(lVar25 + 0x98) - fVar47) / fVar45;
    *(float *)(lVar25 + 0xd4) = fVar53 + (*(float *)(lVar25 + 0xc0) - fVar47) / fVar45;
    fVar53 = fVar53 + (*(float *)(lVar25 + 0xe8) - fVar47) / fVar45;
    break;
  case 2:
    lVar25 = lVar23 + lVar41 * 0x178;
    fVar46 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
    fVar45 = (fStack00000000000000c4 + *(float *)(lVar25 + 0x70)) -
             *(float *)(in_stack_00000070 + 0x230);
LAB_0248f2dc:
    *(float *)(lVar25 + 0x84) = fVar53 + fVar45 / fVar46;
    *(float *)(lVar25 + 0xac) =
         fVar53 + ((fStack00000000000000c4 + *(float *)(lVar25 + 0x98)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    *(float *)(lVar25 + 0xd4) =
         fVar53 + ((fStack00000000000000c4 + *(float *)(lVar25 + 0xc0)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    fVar53 = fVar53 + ((fStack00000000000000c4 + *(float *)(lVar25 + 0xe8)) -
                      *(float *)(in_stack_00000070 + 0x230)) /
                      (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x61]) {
    case 0:
      lVar25 = lVar23 + lVar41 * 0x178;
      *(undefined4 *)(lVar25 + 0x88) = 0;
      *(undefined4 *)(lVar25 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar25 + 0xd8) = 0;
      *(undefined4 *)(lVar25 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar25 = lVar23 + lVar41 * 0x178;
      fVar46 = fVar46 - fVar67;
      fVar45 = fVar53 + (*(float *)(lVar25 + 0x74) - fVar67) / fVar46;
      fVar46 = fVar53 + (*(float *)(lVar25 + 0x9c) - fVar67) / fVar46;
      *(float *)(lVar25 + 0x88) = fVar45;
      *(float *)(lVar25 + 0xb0) = fVar46;
      *(float *)(lVar25 + 0xd8) = fVar45;
      *(float *)(lVar25 + 0x100) = fVar46;
      break;
    case 2:
      lVar25 = lVar23 + lVar41 * 0x178;
      fVar45 = fVar53 + (*(float *)(lVar25 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                        (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar25 + 0x88) = fVar45;
      fVar46 = *(float *)(unaff_x19 + 0x9b);
      fVar67 = *(float *)(unaff_x19 + 0x9c);
      *(float *)(lVar25 + 0xd8) = fVar45;
      fVar45 = fVar53 + (*(float *)(lVar25 + 0x9c) - fVar46) / (fVar67 - fVar46);
      *(float *)(lVar25 + 0xb0) = fVar45;
      *(float *)(lVar25 + 0x100) = fVar45;
      break;
    case 3:
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
      uVar42 = (uint)*(undefined8 *)(lVar23 + 0x18);
    }
    if (uVar42 <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar25 = lVar23 + lVar41 * 0x178;
    fVar45 = *(float *)(lVar25 + 0x15c);
    fVar46 = (1.0 - (*(float *)(lVar25 + 0x88) + *(float *)(lVar25 + 0xb0)) * fVar45) * 0.5;
    fVar67 = fVar53 + *(float *)(lVar25 + 0x88) * fVar45 + fVar46;
    fVar53 = fVar53 + fVar46 + *(float *)(lVar25 + 0xb0) * fVar45;
    *(float *)(lVar25 + 0x84) = fVar67;
    *(float *)(lVar25 + 0xac) = fVar67;
    *(float *)(lVar25 + 0xd4) = fVar53;
    break;
  default:
    goto switchD_0248f240_default;
  }
  *(float *)(lVar23 + lVar41 * 0x178 + 0xfc) = fVar53;
switchD_0248f240_default:
  switch((int)unaff_x19[0x61]) {
  case 0:
    if (uVar42 <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar25 = lVar23 + lVar41 * 0x178;
    *(undefined4 *)(lVar25 + 0x88) = 0;
    *(undefined4 *)(lVar25 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar25 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar25 + 0x100) = 0;
    break;
  case 1:
    if (uVar11 < uVar42) {
      lVar25 = lVar23 + lVar41 * 0x178;
      fVar44 = fVar44 - fVar65;
      fVar53 = (*(float *)(lVar25 + 0x74) - fVar65) / fVar44;
      fVar44 = (*(float *)(lVar25 + 0x9c) - fVar65) / fVar44;
      *(float *)(lVar25 + 0x88) = fVar53;
      goto LAB_0248f644;
    }
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  case 2:
    if (uVar42 <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar25 = lVar23 + lVar41 * 0x178;
    fVar53 = (*(float *)(lVar25 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
    *(float *)(lVar25 + 0x88) = fVar53;
    fVar44 = (*(float *)(lVar25 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_0248f644:
    *(float *)(lVar25 + 0xb0) = fVar44;
    *(float *)(lVar25 + 0xd8) = fVar44;
    *(float *)(lVar25 + 0x100) = fVar53;
    break;
  case 3:
    if (uVar42 <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar25 = lVar23 + lVar41 * 0x178;
    fVar44 = *(float *)(lVar25 + 0x15c);
    fVar45 = (1.0 - (*(float *)(lVar25 + 0x84) + *(float *)(lVar25 + 0xd4)) / fVar44) * 0.5;
    fVar53 = *(float *)(lVar25 + 0x84) / fVar44 + fVar45;
    fVar45 = fVar45 + *(float *)(lVar25 + 0xd4) / fVar44;
    *(float *)(lVar25 + 0x88) = fVar53;
    *(float *)(lVar25 + 0xb0) = fVar45;
    *(float *)(lVar25 + 0x100) = fVar53;
    *(float *)(lVar25 + 0xd8) = fVar45;
  }
  if (uVar42 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar25 = lVar23 + lVar41 * 0x178;
  fVar53 = ABS(fVar51) * *(float *)(lVar25 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
  if ((*(char *)(lVar25 + 0x5c) == '\0') && ((*(byte *)(lVar23 + lVar41 * 0x178 + 400) & 1) != 0)) {
    fVar53 = -fVar53;
  }
  lVar25 = lVar23 + lVar41 * 0x178;
  fVar44 = *(float *)(lVar25 + 0x88);
  fVar46 = *(float *)(lVar25 + 0x84);
  fVar45 = -2.1474836e+09;
  if (fVar46 != INFINITY) {
    fVar45 = (float)(int)fVar46;
  }
  fVar67 = *(float *)(lVar25 + 0xd4);
  fVar47 = *(float *)(lVar25 + 0xd8);
  fVar65 = -2.1474836e+09;
  if (fVar44 != INFINITY) {
    fVar65 = (float)(int)fVar44;
  }
  uVar68 = FUN_024e0374(fVar46 - fVar45,fVar44 - fVar65);
  *(undefined4 *)(lVar25 + 0x84) = uVar68;
  if (*(uint *)(lVar23 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar47 = fVar47 - fVar65;
  *(float *)(lVar25 + 0x88) = fVar53;
  uVar68 = FUN_024e0374(fVar46 - fVar45,fVar47);
  *(undefined4 *)(lVar23 + lVar41 * 0x178 + 0xac) = uVar68;
  if (*(uint *)(lVar23 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar67 = fVar67 - fVar45;
  *(float *)(lVar23 + lVar41 * 0x178 + 0xb0) = fVar53;
  fVar45 = (float)FUN_024e0374(fVar67,fVar47);
  *(float *)(lVar25 + 0xd4) = fVar45;
  if (*(uint *)(lVar23 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar25 + 0xd8) = fVar53;
  uVar68 = FUN_024e0374(fVar67,fVar44 - fVar65);
  *(undefined4 *)(lVar23 + lVar41 * 0x178 + 0xfc) = uVar68;
  uVar42 = (uint)*(undefined8 *)(lVar23 + 0x18);
  if (uVar42 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar23 + lVar41 * 0x178 + 0x100) = fVar53;
LAB_0248f808:
  if (((int)uVar11 < (int)unaff_x19[100]) &&
     (iStack00000000000000a4 < *(int *)((long)unaff_x19 + 0x324))) {
    if (((int)uVar2 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar42 <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar32 = lVar23 + lVar41 * 0x178;
      *(ulong *)(lVar32 + 0x70) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar32 + 0x70) >> 0x20),
                    fVar69 + (float)*(undefined8 *)(lVar32 + 0x70));
      *(float *)(lVar32 + 0x78) = fVar48 + *(float *)(lVar32 + 0x78);
      plVar40 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (*(uint *)(lVar23 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar32 = lVar23 + lVar41 * 0x178;
      *(ulong *)(lVar32 + 0x98) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar32 + 0x98) >> 0x20),
                    fVar69 + (float)*(undefined8 *)(lVar32 + 0x98));
      *(float *)(lVar32 + 0xa0) = fVar48 + *(float *)(lVar32 + 0xa0);
      uVar42 = *(uint *)(lVar23 + 0x18);
LAB_0248fa4c:
      if (uVar42 <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar32 = lVar23 + lVar41 * 0x178;
      *(ulong *)(lVar32 + 0xc0) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar32 + 0xc0) >> 0x20),
                    fVar69 + (float)*(undefined8 *)(lVar32 + 0xc0));
      *(float *)(lVar32 + 200) = fVar48 + *(float *)(lVar32 + 200);
      if (*(uint *)(lVar23 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar32 = lVar23 + lVar41 * 0x178;
      *(ulong *)(lVar32 + 0xe8) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar32 + 0xe8) >> 0x20),
                    fVar69 + (float)*(undefined8 *)(lVar32 + 0xe8));
      *(float *)(lVar32 + 0xf0) = fVar48 + *(float *)(lVar32 + 0xf0);
      if (iVar13 != 0) goto LAB_0248f9d0;
LAB_0248fa9c:
      pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0248faa8:
      (*pcVar29)();
      goto LAB_0248fabc;
    }
    if (((int)uVar2 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
      if (uVar11 < uVar42) {
        if (*(uint *)(lVar23 + lVar41 * 0x178 + 0x68) != uStack0000000000000030) goto LAB_0248f8d8;
        lVar32 = lVar23 + lVar41 * 0x178;
        *(ulong *)(lVar32 + 0x70) =
             CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar32 + 0x70) >> 0x20),
                      fVar69 + (float)*(undefined8 *)(lVar32 + 0x70));
        *(float *)(lVar32 + 0x78) = fVar48 + *(float *)(lVar32 + 0x78);
        if (uVar11 < *(uint *)(lVar23 + 0x18)) {
          lVar32 = lVar23 + lVar41 * 0x178;
          *(ulong *)(lVar32 + 0x98) =
               CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar32 + 0x98) >> 0x20),
                        fVar69 + (float)*(undefined8 *)(lVar32 + 0x98));
          *(float *)(lVar32 + 0xa0) = fVar48 + *(float *)(lVar32 + 0xa0);
          uVar42 = *(uint *)(lVar23 + 0x18);
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
  lVar25 = lVar23 + lVar41 * 0x178;
  uVar68 = *(undefined4 *)
            (*(undefined8 **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8) + 1);
  *(undefined8 *)(lVar25 + 0x70) =
       **(undefined8 **)
         (*(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
         0xb8);
  *(undefined4 *)(lVar25 + 0x78) = uVar68;
  plVar40 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(uint *)(lVar23 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar25 = lVar23 + lVar41 * 0x178;
  uVar68 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar25 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar25 + 0xa0) = uVar68;
  if (*(uint *)(lVar23 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar25 = lVar23 + lVar41 * 0x178;
  uVar68 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar25 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar25 + 200) = uVar68;
  if (*(uint *)(lVar23 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar25 = lVar23 + lVar41 * 0x178;
  uVar68 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar25 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar25 + 0xf0) = uVar68;
  if (*(uint *)(lVar23 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined1 *)(lVar32 + 0x194) = 0;
  if (iVar13 == 0) goto LAB_0248fa9c;
LAB_0248f9d0:
  if (iVar13 == 1) {
    pcVar29 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_0248faa8;
  }
LAB_0248fabc:
  if ((*in_stack_00000150 == 0) || (lVar32 = *(long *)(*in_stack_00000150 + 0x38), lVar32 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar32 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar32 = lVar32 + lVar41 * 0x178;
  uVar17 = *(undefined8 *)(lVar32 + 0x11c);
  *(undefined8 *)(lVar32 + 0x11c) =
       CONCAT44(fVar43 + (float)((ulong)uVar17 >> 0x20),fVar69 + (float)uVar17);
  *(float *)(lVar32 + 0x124) = fVar48 + *(float *)(lVar32 + 0x124);
  if ((*in_stack_00000150 == 0) || (lVar32 = *(long *)(*in_stack_00000150 + 0x38), lVar32 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar32 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar32 = lVar32 + lVar41 * 0x178;
  *(ulong *)(lVar32 + 0x110) =
       CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar32 + 0x110) >> 0x20),
                fVar69 + (float)*(undefined8 *)(lVar32 + 0x110));
  *(float *)(lVar32 + 0x118) = fVar48 + *(float *)(lVar32 + 0x118);
  if ((*in_stack_00000150 == 0) || (lVar32 = *(long *)(*in_stack_00000150 + 0x38), lVar32 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar32 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar32 = lVar32 + lVar41 * 0x178;
  *(ulong *)(lVar32 + 0x128) =
       CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar32 + 0x128) >> 0x20),
                fVar69 + (float)*(undefined8 *)(lVar32 + 0x128));
  *(float *)(lVar32 + 0x130) = fVar48 + *(float *)(lVar32 + 0x130);
  if ((*in_stack_00000150 == 0) || (lVar32 = *(long *)(*in_stack_00000150 + 0x38), lVar32 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar32 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar32 = lVar32 + lVar41 * 0x178;
  *(float *)(lVar32 + 0x134) = fVar69 + *(float *)(lVar32 + 0x134);
  *(ulong *)(lVar32 + 0x138) =
       CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar32 + 0x138) >> 0x20),
                fVar43 + (float)*(undefined8 *)(lVar32 + 0x138));
  lVar32 = *in_stack_00000150;
  if ((lVar32 == 0) || (lVar25 = *(long *)(lVar32 + 0x38), lVar25 == 0)) goto LAB_02491464;
  uVar42 = *(uint *)(lVar25 + 0x18);
  if (uVar42 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar36 = lVar25 + lVar41 * 0x178;
  *(ulong *)(lVar36 + 0x140) =
       CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar36 + 0x140) >> 0x20),
                fVar69 + (float)*(undefined8 *)(lVar36 + 0x140));
  *(ulong *)(lVar36 + 0x148) =
       CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar36 + 0x148) >> 0x20),
                fVar43 + (float)*(undefined8 *)(lVar36 + 0x148));
  *(float *)(lVar36 + 0x150) = fVar43 + *(float *)(lVar36 + 0x150);
  if (uVar2 == uVar26) {
    uVar26 = *in_stack_00000148 - 1;
    if (uVar11 == uVar26) goto LAB_0248fccc;
  }
  else {
    lVar32 = *(long *)(lVar32 + 0x50);
    if (lVar32 == 0) goto LAB_02491464;
    if (*(uint *)(lVar32 + 0x18) <= uVar26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar36 = (long)(int)uVar26;
    lVar38 = lVar32 + lVar36 * 0x5c;
    fVar45 = fVar43 + *(float *)(lVar38 + 0x54);
    *(ulong *)(lVar38 + 0x4c) =
         CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar38 + 0x4c) >> 0x20),
                  fVar43 + (float)*(undefined8 *)(lVar38 + 0x4c));
    *(float *)(lVar38 + 0x54) = fVar45;
    *(float *)(lVar38 + 0x58) = fVar69 + *(float *)(lVar38 + 0x58);
    if (uVar42 <= *(uint *)(lVar38 + 0x34))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar68 = *(undefined4 *)(lVar25 + (long)(int)*(uint *)(lVar38 + 0x34) * 0x178 + 0x11c);
    lVar32 = lVar32 + lVar36 * 0x5c;
    *(float *)(lVar32 + 0x70) = fVar45;
    *(undefined4 *)(lVar32 + 0x6c) = uVar68;
    lVar32 = *in_stack_00000150;
    if ((lVar32 == 0) || (lVar25 = *(long *)(lVar32 + 0x50), lVar25 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar25 + 0x18) <= uVar26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar32 = *(long *)(lVar32 + 0x38);
    if (lVar32 == 0) goto LAB_02491464;
    uVar26 = *(uint *)(lVar25 + lVar36 * 0x5c + 0x40);
    if (*(uint *)(lVar32 + 0x18) <= uVar26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar25 = lVar25 + lVar36 * 0x5c;
    *(undefined4 *)(lVar25 + 0x74) = *(undefined4 *)(lVar32 + (long)(int)uVar26 * 0x178 + 0x128);
    *(undefined4 *)(lVar25 + 0x78) = *(undefined4 *)(lVar25 + 0x4c);
    uVar26 = *in_stack_00000148 - 1;
LAB_0248fccc:
    if (uVar11 == uVar26) {
      lVar32 = *in_stack_00000150;
      if ((lVar32 == 0) || (lVar25 = *(long *)(lVar32 + 0x50), lVar25 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar25 + 0x18) <= uVar2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar36 = lVar25 + lVar34 * 0x5c;
      fVar45 = fVar43 + *(float *)(lVar36 + 0x54);
      *(ulong *)(lVar36 + 0x4c) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar36 + 0x4c) >> 0x20),
                    fVar43 + (float)*(undefined8 *)(lVar36 + 0x4c));
      *(float *)(lVar36 + 0x54) = fVar45;
      *(float *)(lVar36 + 0x58) = fVar69 + *(float *)(lVar36 + 0x58);
      lVar32 = *(long *)(lVar32 + 0x38);
      if (lVar32 == 0) goto LAB_02491464;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(lVar36 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar68 = *(undefined4 *)(lVar32 + (long)(int)*(uint *)(lVar36 + 0x34) * 0x178 + 0x11c);
      lVar25 = lVar25 + lVar34 * 0x5c;
      *(float *)(lVar25 + 0x70) = fVar45;
      *(undefined4 *)(lVar25 + 0x6c) = uVar68;
      lVar32 = *in_stack_00000150;
      if ((lVar32 == 0) || (lVar25 = *(long *)(lVar32 + 0x50), lVar25 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar25 + 0x18) <= uVar2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar32 = *(long *)(lVar32 + 0x38);
      if (lVar32 == 0) goto LAB_02491464;
      uVar26 = *(uint *)(lVar25 + lVar34 * 0x5c + 0x40);
      if (*(uint *)(lVar32 + 0x18) <= uVar26)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar25 = lVar25 + lVar34 * 0x5c;
      *(undefined4 *)(lVar25 + 0x74) = *(undefined4 *)(lVar32 + (long)(int)uVar26 * 0x178 + 0x128);
      *(undefined4 *)(lVar25 + 0x78) = *(undefined4 *)(lVar25 + 0x4c);
    }
  }
  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar16 = FUN_016f9468(uVar31,0);
  if (((((uVar16 & 1) == 0) && (1 < uVar31 - 0x2010)) && (uVar31 != 0xad)) && (uVar31 != 0x2d)) {
    if (bVar9) {
      if (((uVar22 != 1) && ((int)uVar11 < (int)(*(uint *)(lVar23 + 0x18) - 1))) &&
         (((int)uVar11 < (int)*in_stack_00000148 && ((uVar31 == 0x2019 || (uVar31 == 0x27)))))) {
        if (*(uint *)(lVar23 + 0x18) <= uVar22 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar5 = *(undefined2 *)(lVar23 + lStack0000000000000128 + -0x438);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar16 = FUN_016f9468(uVar5,0);
        if ((uVar16 & 1) != 0) {
          if (*(uint *)(lVar23 + 0x18) <= uVar22)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar5 = *(undefined2 *)(lVar23 + lStack0000000000000128 + -0x148);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar16 = FUN_016f9468(uVar5,0);
          if ((uVar16 & 1) != 0) goto LAB_0248fee0;
        }
      }
    }
    else {
      if (uVar22 != 1) {
LAB_024909a0:
        bVar9 = false;
        goto LAB_0248fee8;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar16 = FUN_016f93a0(uVar31,0);
      if ((uVar16 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar16 = FUN_016f68bc(uVar31,0);
        if (((uVar31 != 0x200b) && ((uVar16 & 1) == 0)) && (*in_stack_00000148 != 1))
        goto LAB_024909a0;
      }
    }
    if (uVar11 == *in_stack_00000148 - 1) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar16 = FUN_016f9468(uVar31,0);
      iVar13 = iVar39;
      if ((uVar16 & 1) == 0) goto LAB_02490204;
    }
    else {
LAB_02490204:
      iVar13 = uVar22 - 2;
    }
    lVar32 = *in_stack_00000150;
    if (lVar32 == 0) goto LAB_02491464;
    lVar25 = *(long *)(lVar32 + 0x40);
    if (lVar25 == 0) goto LAB_02491464;
    uVar26 = *(uint *)(lVar32 + 0x24);
    iVar14 = *(int *)(lVar25 + 0x18);
    if (iVar14 < (int)(uVar26 + 1)) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147b84((long *)(lVar32 + 0x40),iVar14 + 1,
                   *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
      lVar32 = *in_stack_00000150;
      if (lVar32 == 0) goto LAB_02491464;
    }
    lVar25 = *(long *)(lVar32 + 0x40);
    if (lVar25 == 0) goto LAB_02491464;
    if (*(uint *)(lVar25 + 0x18) <= uVar26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar25 = lVar25 + (long)(int)uVar26 * 0x18;
    *(long **)(lVar25 + 0x20) = unaff_x19;
    *(uint *)(lVar25 + 0x28) = uStack0000000000000114;
    *(int *)(lVar25 + 0x2c) = iVar13;
    *(uint *)(lVar25 + 0x30) = (iVar13 - uStack0000000000000114) + 1;
    lVar25 = *(long *)(lVar32 + 0x50);
    *(int *)(lVar32 + 0x24) = *(int *)(lVar32 + 0x24) + 1;
    if (lVar25 == 0) goto LAB_02491464;
    if (*(uint *)(lVar25 + 0x18) <= uVar2)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar25 = lVar25 + lVar34 * 0x5c;
    bVar9 = false;
    iStack00000000000000a4 = iStack00000000000000a4 + 1;
    *(int *)(lVar25 + 0x30) = *(int *)(lVar25 + 0x30) + 1;
  }
  else {
    if (!bVar9) {
      uStack0000000000000114 = uVar11;
    }
    if (uVar11 == *in_stack_00000148 - 1) {
      lVar32 = *in_stack_00000150;
      if (lVar32 == 0) goto LAB_02491464;
      lVar25 = *(long *)(lVar32 + 0x40);
      if (lVar25 == 0) goto LAB_02491464;
      uVar26 = *(uint *)(lVar32 + 0x24);
      iVar13 = *(int *)(lVar25 + 0x18);
      if (iVar13 < (int)(uVar26 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar32 + 0x40),iVar13 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar32 = *in_stack_00000150;
        if (lVar32 == 0) goto LAB_02491464;
      }
      lVar25 = *(long *)(lVar32 + 0x40);
      if (lVar25 == 0) goto LAB_02491464;
      if (*(uint *)(lVar25 + 0x18) <= uVar26)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar25 = lVar25 + (long)(int)uVar26 * 0x18;
      *(long **)(lVar25 + 0x20) = unaff_x19;
      *(uint *)(lVar25 + 0x28) = uStack0000000000000114;
      *(uint *)(lVar25 + 0x2c) = uVar11;
      *(uint *)(lVar25 + 0x30) = uVar22 - uStack0000000000000114;
      lVar25 = *(long *)(lVar32 + 0x50);
      *(int *)(lVar32 + 0x24) = *(int *)(lVar32 + 0x24) + 1;
      if (lVar25 == 0) goto LAB_02491464;
      if (*(uint *)(lVar25 + 0x18) <= uVar2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar25 = lVar25 + lVar34 * 0x5c;
      iStack00000000000000a4 = iStack00000000000000a4 + 1;
      *(int *)(lVar25 + 0x30) = *(int *)(lVar25 + 0x30) + 1;
    }
LAB_0248fee0:
    bVar9 = true;
  }
LAB_0248fee8:
  if ((*in_stack_00000150 == 0) || (lVar32 = *(long *)(*in_stack_00000150 + 0x38), lVar32 == 0))
  goto LAB_02491464;
  uVar26 = *(uint *)(lVar32 + 0x18);
  if (uVar26 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar32 + lVar41 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar10) {
LAB_0248ff18:
      if (uVar26 <= uVar22 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar34 = *unaff_x19;
      uVar68 = *(undefined4 *)(lVar32 + lStack0000000000000128 + -0x330);
      uVar57 = *(undefined4 *)(lVar32 + lStack0000000000000128 + -0x2f8);
LAB_02490474:
      pcVar29 = *(code **)(lVar34 + 0x908);
LAB_0249047c:
      (*pcVar29)(fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,uVar68,
                 fStack00000000000000cc,0,fStack0000000000000058,uVar57);
      puVar8 = System_Threading_Mutex_TypeInfo;
      lVar32 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar32 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar32 = *(long *)puVar8;
      }
LAB_024904cc:
      bVar10 = false;
      fVar58 = 0.0;
      fStack00000000000000cc = *(float *)(*(long *)(lVar32 + 0xb8) + 0x15a8);
      in_stack_000000c8 = 0.0;
    }
    else {
LAB_024903d8:
      bVar10 = false;
    }
  }
  else {
    lVar32 = lVar32 + lVar41 * 0x178;
    iVar13 = *(int *)(lVar32 + 0x68);
    *(int *)(lVar32 + 0x16c) = iVar12;
    if ((((int)unaff_x19[100] < (int)uVar11) || ((int)unaff_x19[0x65] < (int)uVar2)) ||
       (((int)unaff_x19[0x5b] == 5 && (iVar13 + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar16 = FUN_016f68bc(uVar31,0);
    if ((uVar31 != 0x200b) && ((uVar16 & 1) == 0)) {
      lVar32 = *in_stack_00000150;
      if ((lVar32 == 0) || (lVar34 = *(long *)(lVar32 + 0x38), lVar34 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar34 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      fVar45 = *(float *)(lVar34 + lVar41 * 0x178 + 0x160);
      if (fVar58 <= fVar45) {
        fVar58 = fVar45;
      }
      if (in_stack_000000c8 <= ABS(fVar53)) {
        in_stack_000000c8 = ABS(fVar53);
      }
      if ((float)iVar13 != fStack0000000000000048) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar32 = *in_stack_00000150;
          if (lVar32 == 0) goto LAB_02491464;
          lVar34 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        else {
          lVar34 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        fStack00000000000000cc = *(float *)(lVar34 + 0x15a8);
      }
      lVar32 = *(long *)(lVar32 + 0x38);
      if (lVar32 == 0) goto LAB_02491464;
      if (*(uint *)(lVar32 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0x1e] == 0) goto LAB_02491464;
      fVar44 = *(float *)(lVar32 + lVar41 * 0x178 + 0x14c);
      fVar45 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
      fVar44 = fVar44 + fVar58 * fVar45;
      fStack0000000000000048 = (float)iVar13;
      if (fVar44 <= fStack00000000000000cc) {
        fStack00000000000000cc = fVar44;
      }
    }
    if (!bVar10) {
      bVar10 = false;
      if ((((uVar31 == 0xd) || ((uVar31 | 1) == 0xb)) || ((int)uVar30 < (int)uVar11)) || (!bVar1))
      goto LAB_024904e8;
      if (uVar11 == uVar30) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar16 = FUN_016fa418(uVar31,0);
        if ((uVar16 & 1) != 0) goto LAB_024903d8;
      }
      if ((*in_stack_00000150 == 0) || (lVar32 = *(long *)(*in_stack_00000150 + 0x38), lVar32 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar32 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar32 = lVar32 + lVar41 * 0x178;
      fStack0000000000000058 = *(float *)(lVar32 + 0x160);
      fStack0000000000000054 = *(float *)(lVar32 + 0x11c);
      bVar10 = fVar58 != 0.0;
      fVar45 = fStack0000000000000058;
      if (bVar10) {
        fVar45 = fVar58;
      }
      fVar58 = fVar45;
      _bStack000000000000005c = *(uint *)(lVar32 + 0x168);
      fStack0000000000000050 = 0.0;
      fVar45 = fVar53;
      if (bVar10) {
        fVar45 = in_stack_000000c8;
      }
      fStack000000000000004c = fStack00000000000000cc;
      in_stack_000000c8 = fVar45;
    }
    if (*in_stack_00000148 == 1) {
      if ((*in_stack_00000150 != 0) && (lVar32 = *(long *)(*in_stack_00000150 + 0x38), lVar32 != 0))
      {
        if (uVar11 < *(uint *)(lVar32 + 0x18)) {
          lVar32 = lVar32 + lVar41 * 0x178;
          lVar34 = *unaff_x19;
          uVar68 = *(undefined4 *)(lVar32 + 0x128);
          uVar57 = *(undefined4 *)(lVar32 + 0x160);
          goto LAB_02490474;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    if ((uVar11 == uVar3) || ((int)uVar30 <= (int)uVar11)) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar16 = FUN_016f68bc(uVar31,0);
      if ((*in_stack_00000150 != 0) && (lVar32 = *(long *)(*in_stack_00000150 + 0x38), lVar32 != 0))
      {
        if (uVar31 == 0x200b || (uVar16 & 1) != 0) {
          lVar34 = lVar37;
          if (*(uint *)(lVar32 + 0x18) <= uVar30)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
          lVar34 = lVar41;
          if (*(uint *)(lVar32 + 0x18) <= uVar11)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        lVar32 = lVar32 + lVar34 * 0x178;
        uVar68 = *(undefined4 *)(lVar32 + 0x128);
        uVar57 = *(undefined4 *)(lVar32 + 0x160);
        pcVar29 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_0249047c;
      }
      goto LAB_02491464;
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar32 = *(long *)(*in_stack_00000150 + 0x38), lVar32 != 0))
      {
        uVar26 = *(uint *)(lVar32 + 0x18);
        goto LAB_0248ff18;
      }
      goto LAB_02491464;
    }
    if ((int)uVar11 < (int)(*in_stack_00000148 - 1)) {
      if ((*in_stack_00000150 == 0) || (lVar32 = *(long *)(*in_stack_00000150 + 0x38), lVar32 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar32 + 0x18) <= uVar22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar16 = FUN_024a9e4c(_bStack000000000000005c,*(undefined4 *)(lVar32 + lStack0000000000000128)
                            ,0);
      if ((uVar16 & 1) == 0) {
        if ((*in_stack_00000150 != 0) &&
           (lVar32 = *(long *)(*in_stack_00000150 + 0x38), lVar32 != 0)) {
          if (uVar11 < *(uint *)(lVar32 + 0x18)) {
            lVar32 = lVar32 + lVar41 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,
                       *(undefined4 *)(lVar32 + 0x128),fStack00000000000000cc,0,
                       fStack0000000000000058,*(undefined4 *)(lVar32 + 0x160));
            puVar8 = System_Threading_Mutex_TypeInfo;
            lVar32 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar32 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar32 = *(long *)puVar8;
            }
            goto LAB_024904cc;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        goto LAB_02491464;
      }
    }
    bVar10 = true;
  }
LAB_024904e8:
  if ((*in_stack_00000150 == 0) || (lVar32 = *(long *)(*in_stack_00000150 + 0x38), lVar32 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar32 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (lVar35 == 0) goto LAB_02491464;
  uVar26 = *(uint *)(lVar32 + lVar41 * 0x178 + 400);
  fVar45 = (float)FUN_026fd1f0(lVar35 + 0x50,0);
  if ((uVar26 >> 6 & 1) == 0) {
    if (bVar6) {
      if ((*in_stack_00000150 == 0) || (lVar32 = *(long *)(*in_stack_00000150 + 0x38), lVar32 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar32 + 0x18) <= uVar22 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar68 = *(undefined4 *)(lVar32 + lStack0000000000000128 + -0x330);
      pcVar29 = *(code **)(*unaff_x19 + 0x908);
      fVar43 = in_stack_00000080._4_4_ * fVar45 +
               *(float *)(lVar32 + lStack0000000000000128 + -0x30c);
LAB_02490a68:
      (*pcVar29)(in_stack_00000078._4_4_,in_stack_00000068._4_4_,uStack0000000000000060,uVar68,
                 fVar43,0,in_stack_00000080._4_4_,in_stack_00000080._4_4_);
    }
LAB_02490a9c:
    bVar6 = false;
  }
  else {
    lVar32 = *in_stack_00000150;
    if ((lVar32 == 0) || (lVar34 = *(long *)(lVar32 + 0x38), lVar34 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar34 + 0x18) <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar34 + lVar41 * 0x178 + 0x174) = iVar12;
    if ((((int)unaff_x19[100] < (int)uVar11) || ((int)unaff_x19[0x65] < (int)uVar2)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar34 + lVar41 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar31 == 0xd) || ((uVar31 | 1) == 0xb)) || ((int)uVar30 < (int)uVar11)) ||
       (bVar6 || !bVar1)) {
LAB_02490668:
      if (!bVar6) goto LAB_02490a9c;
    }
    else {
      if (uVar11 == uVar30) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar16 = FUN_016fa418(uVar31,0);
        if ((uVar16 & 1) != 0) goto LAB_02490668;
        lVar32 = *in_stack_00000150;
        if (lVar32 == 0) goto LAB_02491464;
      }
      lVar32 = *(long *)(lVar32 + 0x38);
      if (lVar32 == 0) goto LAB_02491464;
      if (*(uint *)(lVar32 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar32 = lVar32 + lVar41 * 0x178;
      fStack0000000000000038 = *(float *)(lVar32 + 0x60);
      in_stack_00000080._4_4_ = *(float *)(lVar32 + 0x160);
      fStack0000000000000034 = *(float *)(lVar32 + 0x14c);
      in_stack_00000078._4_4_ = *(float *)(lVar32 + 0x11c);
      in_stack_00000068._4_4_ = fVar45 * in_stack_00000080._4_4_ + fStack0000000000000034;
      uStack0000000000000060 = 0;
    }
    uVar26 = *in_stack_00000148;
    if (uVar26 == 1) {
      if (*in_stack_00000150 != 0) {
        lVar32 = *(long *)(*in_stack_00000150 + 0x38);
joined_r0x024907c8:
        if (lVar32 != 0) {
          if (uVar11 < *(uint *)(lVar32 + 0x18)) {
            lVar32 = lVar32 + lVar41 * 0x178;
            lVar37 = *unaff_x19;
            uVar68 = *(undefined4 *)(lVar32 + 0x128);
            fVar43 = *(float *)(lVar32 + 0x14c);
LAB_024907e8:
            pcVar29 = *(code **)(lVar37 + 0x908);
LAB_02490a64:
            fVar43 = fVar45 * in_stack_00000080._4_4_ + fVar43;
            goto LAB_02490a68;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
      }
      goto LAB_02491464;
    }
    if (uVar11 == uVar3) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar16 = FUN_016f68bc(uVar31,0);
      if ((*in_stack_00000150 != 0) && (lVar32 = *(long *)(*in_stack_00000150 + 0x38), lVar32 != 0))
      {
        uVar26 = *(uint *)(lVar32 + 0x18);
        if (uVar31 == 0x200b || (uVar16 & 1) != 0) {
          if (uVar26 <= uVar30)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
LAB_02490a40:
          lVar37 = lVar41;
          if (uVar26 <= uVar11)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
LAB_02490a48:
        lVar32 = lVar32 + lVar37 * 0x178;
        fVar43 = *(float *)(lVar32 + 0x14c);
        uVar68 = *(undefined4 *)(lVar32 + 0x128);
        pcVar29 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_02490a64;
      }
      goto LAB_02491464;
    }
    if ((int)uVar11 < (int)uVar26) {
      lVar32 = *in_stack_00000150;
      if ((lVar32 != 0) && (lVar34 = *(long *)(lVar32 + 0x38), lVar34 != 0)) {
        if (uVar22 < *(uint *)(lVar34 + 0x18)) {
          if (*(float *)(lVar34 + lStack0000000000000128 + -0x108) == fStack0000000000000038) {
            fVar44 = *(float *)(lVar34 + lStack0000000000000128 + -0x1c);
            if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar16 = FUN_024aa280(fVar43 + fVar44,fStack0000000000000034,0);
            if ((uVar16 & 1) != 0) {
              uVar26 = *in_stack_00000148;
              goto LAB_024908ec;
            }
            lVar32 = *in_stack_00000150;
            if (lVar32 == 0) goto LAB_02491464;
          }
          lVar32 = *(long *)(lVar32 + 0x38);
          if (lVar32 != 0) {
            uVar26 = *(uint *)(lVar32 + 0x18);
            if ((int)uVar11 <= (int)uVar30) goto LAB_02490a40;
            if (uVar30 < uVar26) goto LAB_02490a48;
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
          goto LAB_02491464;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
LAB_024908ec:
    if ((int)uVar11 < (int)uVar26) {
      iVar13 = FUN_02681c0c(lVar35,0);
      if (*(uint *)(lVar23 + 0x18) <= uVar22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar32 = *(long *)(lVar23 + lStack0000000000000128 + -0x130);
      if (lVar32 == 0) goto LAB_02491464;
      iVar14 = FUN_02681c0c(lVar32,0);
      if (iVar13 != iVar14) {
        if (*in_stack_00000150 != 0) {
          lVar32 = *(long *)(*in_stack_00000150 + 0x38);
          goto joined_r0x024907c8;
        }
        goto LAB_02491464;
      }
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar32 = *(long *)(*in_stack_00000150 + 0x38), lVar32 != 0))
      {
        if (uVar22 - 2 < *(uint *)(lVar32 + 0x18)) {
          lVar37 = *unaff_x19;
          uVar68 = *(undefined4 *)(lVar32 + lStack0000000000000128 + -0x330);
          fVar43 = *(float *)(lVar32 + lStack0000000000000128 + -0x30c);
          goto LAB_024907e8;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    bVar6 = true;
  }
  if ((*in_stack_00000150 == 0) || (lVar32 = *(long *)(*in_stack_00000150 + 0x38), lVar32 == 0))
  goto LAB_02491464;
  uVar26 = (uint)*(undefined8 *)(lVar32 + 0x18);
  if (uVar26 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar32 + lVar41 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar7) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
    }
LAB_02490b04:
    bVar7 = false;
  }
  else {
    if ((((int)unaff_x19[100] < (int)uVar11) || ((int)unaff_x19[0x65] < (int)uVar2)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar32 + lVar41 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar7) {
      if ((((uVar31 == 0xd) || ((uVar31 | 1) == 0xb)) || ((int)uVar30 < (int)uVar11)) || (!bVar1))
      goto LAB_02490b04;
      if (uVar11 == uVar30) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar16 = FUN_016fa418(uVar31,0);
        if ((uVar16 & 1) != 0) goto LAB_02490b04;
      }
      puVar8 = System_Threading_Mutex_TypeInfo;
      lVar37 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar37 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar37 = *(long *)puVar8;
      }
      if ((*in_stack_00000150 == 0) || (lVar32 = *(long *)(*in_stack_00000150 + 0x38), lVar32 == 0))
      goto LAB_02491464;
      uVar26 = (uint)*(undefined8 *)(lVar32 + 0x18);
      if (uVar26 <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar37 = *(long *)(lVar37 + 0xb8);
      lVar34 = lVar32 + lVar41 * 0x178;
      in_stack_00001798 = *(undefined8 *)(lVar34 + 0x184);
      in_stack_00001790 = *(undefined8 *)(lVar34 + 0x17c);
      fStack00000000000000a8 = *(float *)(lVar37 + 0x1598);
      in_stack_000017a0 = *(float *)(lVar34 + 0x18c);
      fStack00000000000000ac = *(float *)(lVar37 + 0x159c);
      fStack0000000000000098 = *(float *)(lVar37 + 0x15a0);
      in_stack_000000a0 = *(float *)(lVar37 + 0x15a4);
      uStack0000000000000094 = 0;
    }
    if (uVar26 <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar32 = lVar32 + lVar41 * 0x178;
    fVar45 = *(float *)(lVar32 + 0x128);
    fVar65 = *(float *)(lVar32 + 0x188);
    uVar15 = *(undefined8 *)(lVar32 + 0x17c);
    fVar47 = *(float *)(lVar32 + 0x184);
    uVar17 = *(undefined8 *)(lVar32 + 0x184);
    fVar67 = *(float *)(lVar32 + 0x18c);
    fVar43 = *(float *)(lVar32 + 0x11c);
    fVar44 = *(float *)(lVar32 + 0x148);
    fVar46 = *(float *)(lVar32 + 0x150);
    in_stack_00000158 = uVar15;
    fStack0000000000000160 = fVar47;
    fStack0000000000000164 = fVar65;
    in_stack_00000168 = fVar67;
    in_stack_00000170 = in_stack_00001790;
    in_stack_00000178 = in_stack_00001798;
    in_stack_00000180 = in_stack_000017a0;
    uVar16 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
    lVar32 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if ((uVar16 & 1) == 0) {
      if (*(int *)(lVar32 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar32);
      }
      fVar45 = fVar45 + (float)in_stack_00001798;
      fVar43 = fVar43 - (float)((ulong)in_stack_00001790 >> 0x20);
      fVar44 = fVar44 + (float)((ulong)in_stack_00001798 >> 0x20);
      if (fVar43 <= fStack00000000000000a8) {
        fStack00000000000000a8 = fVar43;
      }
      if (fVar46 - in_stack_000017a0 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar46 - in_stack_000017a0;
      }
      if (fStack0000000000000098 <= fVar45) {
        fStack0000000000000098 = fVar45;
      }
      if (in_stack_000000a0 <= fVar44) {
        in_stack_000000a0 = fVar44;
      }
    }
    else {
      if (*(int *)(lVar32 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar32);
      }
      fVar43 = (fVar43 + (fStack0000000000000098 - (float)in_stack_00001798)) * 0.5;
      if (fVar46 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar46;
      }
      if (in_stack_000000a0 <= fVar44) {
        in_stack_000000a0 = fVar44;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,fVar43,
                 in_stack_000000a0,uStack0000000000000094);
      fStack00000000000000ac = fVar46 - fVar67;
      fStack0000000000000098 = fVar45 + fVar47;
      uStack0000000000000094 = 0;
      in_stack_000000a0 = fVar44 + fVar65;
      fStack00000000000000a8 = fVar43;
      in_stack_00001790 = uVar15;
      in_stack_00001798 = uVar17;
      in_stack_000017a0 = fVar67;
    }
    if (((*in_stack_00000148 == 1) || (uVar11 == uVar3)) ||
       (((int)uVar30 <= (int)uVar11 || (!bVar1)))) {
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
  iVar39 = iVar39 + 1;
  lStack0000000000000128 = lStack0000000000000128 + 0x178;
  bVar1 = (int)uVar11 <= (int)uVar22;
  uVar26 = uVar2;
  uVar22 = uVar22 + 1;
  if (bVar1) goto LAB_02491038;
  goto LAB_0248ef74;
LAB_02491038:
  lVar23 = *in_stack_00000150;
  if (lVar23 != 0) {
    iVar12 = uVar2 + 1;
    plVar27 = (long *)PTR_DAT_033ed410;
LAB_02491068:
    *(uint *)(lVar23 + 0x18) = uVar11;
    lVar32 = unaff_x19[0xd3];
    *(int *)(lVar23 + 0x2c) = iVar12;
    iVar12 = iStack00000000000000a4;
    if ((int)uVar11 < 1) {
      iVar12 = 1;
    }
    if (iStack00000000000000a4 == 0) {
      iVar12 = 1;
    }
    *(int *)(lVar23 + 0x1c) = (int)lVar32;
    *(int *)(lVar23 + 0x24) = iVar12;
    *(int *)(lVar23 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar16 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar16 & 1) == 0)) {
LAB_02491468:
      lVar23 = *(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
LAB_02491474:
      if (*(int *)(lVar23 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar23 = unaff_x19[0xda];
    if (lVar23 != 0) {
      (**(code **)(lVar23 + 0x18))
                (*(undefined8 *)(lVar23 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar23 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar23 = *(long *)(*in_stack_00000150 + 0x60), lVar23 == 0))
      goto LAB_02491464;
      if (*(int *)(*plVar27 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar23 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      FUN_024e8000(lVar23 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar23 = *(long *)(unaff_x19[0x6c] + 0x60), lVar23 != 0)) {
        if (*(int *)(lVar23 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar23 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar23 = *(long *)(unaff_x19[0x6c] + 0x60), lVar23 != 0)) {
            if (*(int *)(lVar23 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar23 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar23 = *(long *)(unaff_x19[0x6c] + 0x60), lVar23 != 0)) {
                if (*(int *)(lVar23 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar23 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar23 = *(long *)(unaff_x19[0x6c] + 0x60), lVar23 != 0)) {
                    if (*(int *)(lVar23 + 0x18) == 0)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar23 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        lVar23 = *in_stack_00000150;
                        if (lVar23 != 0) {
                          lVar37 = 0;
                          lVar32 = 0;
                          do {
                            uVar16 = lVar32 + 1;
                            if ((long)*(int *)(lVar23 + 0x34) <= (long)uVar16) goto LAB_02491468;
                            lVar23 = *(long *)(lVar23 + 0x60);
                            if (lVar23 == 0) break;
                            if (*(int *)(*plVar27 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            if (*(uint *)(lVar23 + 0x18) <= uVar16)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            FUN_024e7ecc(lVar23 + lVar37 + 0x70,0);
                            lVar23 = unaff_x19[0xe0];
                            if (lVar23 == 0) break;
                            if (*(uint *)(lVar23 + 0x18) <= uVar16)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            uVar17 = *(undefined8 *)(lVar23 + lVar32 * 8 + 0x28);
                            if (*(int *)(*plVar40 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar19 = FUN_0268b4e0(uVar17,0,0);
                            if ((uVar19 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                if ((*in_stack_00000150 == 0) ||
                                   (lVar23 = *(long *)(*in_stack_00000150 + 0x60), lVar23 == 0))
                                break;
                                if (*(int *)(*plVar27 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                if (*(uint *)(lVar23 + 0x18) <= uVar16)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                                ;
                                FUN_024e8000(lVar23 + lVar37 + 0x70,1,0);
                              }
                              lVar23 = unaff_x19[0xe0];
                              if (lVar23 == 0) break;
                              if (*(uint *)(lVar23 + 0x18) <= uVar16)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar23 = *(long *)(lVar23 + lVar32 * 8 + 0x28);
                              if (lVar23 == 0) break;
                              lVar23 = FUN_024eefa0(lVar23,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar41 = *(long *)(*in_stack_00000150 + 0x60), lVar41 == 0))
                              break;
                              if (*(uint *)(lVar41 + 0x18) <= uVar16)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar23 == 0) break;
                              FUN_0266b9c4(lVar23,*(undefined8 *)(lVar41 + lVar37 + 0x80),0);
                              lVar23 = unaff_x19[0xe0];
                              if (lVar23 == 0) break;
                              if (*(uint *)(lVar23 + 0x18) <= uVar16)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar23 = *(long *)(lVar23 + lVar32 * 8 + 0x28);
                              if (lVar23 == 0) break;
                              lVar23 = FUN_024eefa0(lVar23,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar41 = *(long *)(*in_stack_00000150 + 0x60), lVar41 == 0))
                              break;
                              if (*(uint *)(lVar41 + 0x18) <= uVar16)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar23 == 0) break;
                              FUN_0266bbc8(lVar23,*(undefined8 *)(lVar41 + lVar37 + 0x98),0);
                              lVar23 = unaff_x19[0xe0];
                              if (lVar23 == 0) break;
                              if (*(uint *)(lVar23 + 0x18) <= uVar16)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar23 = *(long *)(lVar23 + lVar32 * 8 + 0x28);
                              if (lVar23 == 0) break;
                              lVar23 = FUN_024eefa0(lVar23,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar41 = *(long *)(*in_stack_00000150 + 0x60), lVar41 == 0))
                              break;
                              if (*(uint *)(lVar41 + 0x18) <= uVar16)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar23 == 0) break;
                              FUN_0266bc74(lVar23,*(undefined8 *)(lVar41 + lVar37 + 0xa0),0);
                              lVar23 = unaff_x19[0xe0];
                              if (lVar23 == 0) break;
                              if (*(uint *)(lVar23 + 0x18) <= uVar16)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar23 = *(long *)(lVar23 + lVar32 * 8 + 0x28);
                              if (lVar23 == 0) break;
                              lVar23 = FUN_024eefa0(lVar23,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar41 = *(long *)(*in_stack_00000150 + 0x60), lVar41 == 0))
                              break;
                              if (*(uint *)(lVar41 + 0x18) <= uVar16)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar23 == 0) break;
                              FUN_0266c1dc(lVar23,*(undefined8 *)(lVar41 + lVar37 + 0xa8),0);
                              lVar23 = unaff_x19[0xe0];
                              if (lVar23 == 0) break;
                              if (*(uint *)(lVar23 + 0x18) <= uVar16)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar23 = *(long *)(lVar23 + lVar32 * 8 + 0x28);
                              if ((lVar23 == 0) || (lVar23 = FUN_024eefa0(lVar23,0), lVar23 == 0))
                              break;
                              FUN_0266ed90(lVar23,0);
                            }
                            lVar23 = *in_stack_00000150;
                            lVar32 = lVar32 + 1;
                            lVar37 = lVar37 + 0x50;
                          } while (lVar23 != 0);
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


