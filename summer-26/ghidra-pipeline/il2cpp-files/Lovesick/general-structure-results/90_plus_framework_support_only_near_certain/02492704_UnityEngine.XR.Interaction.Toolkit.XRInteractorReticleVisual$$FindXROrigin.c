/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRInteractorReticleVisual$$FindXROrigin
ENTRY_POINT: 02492704
PROGRAM: Lovesick-libil2cpp.so
SCORE: 219
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;weak_pose_support;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;weak_vector_component_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_21;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__FindXROrigin
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
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  int *piVar22;
  ulong uVar23;
  undefined1 uVar24;
  char cVar25;
  long lVar26;
  undefined4 *puVar27;
  long lVar28;
  float *pfVar29;
  code *pcVar30;
  uint uVar31;
  long lVar32;
  float *pfVar33;
  long lVar34;
  long lVar35;
  uint uVar36;
  uint uVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long *unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  uint uVar42;
  undefined4 unaff_w24;
  uint unaff_w25;
  long *plVar43;
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
  float fVar55;
  float fVar56;
  double dVar57;
  float fVar58;
  ulong uVar59;
  ulong uVar60;
  uint uVar61;
  ulong uVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  ulong unaff_d9;
  float fVar67;
  float unaff_s12;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined4 uVar71;
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
  
code_r0x02492704:
  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar20 = FUN_016f92d4(unaff_w25,0);
  fVar63 = unaff_s12;
  fVar68 = unaff_s12;
  unaff_w25 = in_stack_000017bc;
  if ((uVar20 & 1) != 0) {
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_016f95a8(in_stack_000017bc,0);
                    /* try { // try from 0249275c to 02592763 has its CatchHandler @ 02492834 */
    unaff_w25 = uVar13 & 0xffff;
    fVar63 = fStack0000000000000028;
  }
LAB_02492a18:
  unaff_s12 = fVar63;
  iVar14 = *(int *)((long)unaff_x19 + 0x63c);
  iVar15 = (int)unaff_x27;
  if (iVar14 != 0) goto LAB_0249265c;
LAB_02492a20:
  if ((*in_stack_00000150 != 0) && (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 != 0)) {
    uVar18 = *in_stack_00000148;
    uVar13 = *(uint *)(lVar26 + 0x18);
    if (uVar13 <= uVar18)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar32 = *(long *)(lVar26 + (int)uVar18 * unaff_x27 + 0x30);
    unaff_x19[200] = lVar32;
    uVar61 = unaff_w25;
    if (lVar32 == 0) goto LAB_02492630;
    lVar40 = lVar26 + (int)uVar18 * unaff_x27;
    lVar32 = *(long *)(lVar40 + 0x38);
    unaff_x19[0x1f] = lVar32;
    unaff_x19[0x22] = *(long *)(lVar40 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar40 + 0x58);
    if (unaff_w20 == 0) {
LAB_02492ab4:
      if (lVar32 == 0) goto LAB_0249920c;
      fVar63 = *(float *)(unaff_x19 + 0x3c);
      iVar14 = FUN_026fd110(lVar32 + 0x50,0);
      lVar26 = unaff_x19[0x1f];
    }
    else {
      lVar40 = unaff_x19[0x8e];
      if (lVar40 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar40 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if ((*(int *)(lVar40 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
         (uVar18 == *(uint *)(unaff_x19 + 0x92))) goto LAB_02492ab4;
      if (uVar13 <= uVar18 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (lVar32 == 0) goto LAB_0249920c;
      fVar63 = *(float *)(lVar26 + (long)(int)(uVar18 - 1) * (long)iVar15 + 0x60);
      iVar14 = FUN_026fd110(lVar32 + 0x50,0);
      lVar26 = *in_stack_00000138;
    }
    if (lVar26 == 0) goto LAB_0249920c;
    fVar46 = (float)FUN_026fd120(lVar26 + 0x50,0);
    fVar58 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar58 = fVar68;
    }
    fVar48 = 0.0;
    fVar47 = 0.0;
    if ((unaff_w20 & unaff_w25 == 0x2026) == 0) {
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar47 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar48 = (float)FUN_026fd180(*in_stack_00000138 + 0x50,0);
    }
    lVar26 = unaff_x19[200];
    if ((lVar26 != 0) && (*(long *)(lVar26 + 0x20) != 0)) {
      fVar68 = *(float *)((long)unaff_x19 + 0x3fc);
      fVar70 = *(float *)(lVar26 + 0x2c);
      fVar49 = (float)FUN_026fd668(*(long *)(lVar26 + 0x20),0);
      if (*in_stack_00000138 != 0) {
        fVar50 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 != 0) {
          fVar72 = *(float *)((long)unaff_x19 + 0x3fc);
          fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
          lVar26 = unaff_x19[0x6c];
          if ((lVar26 != 0) && (lVar32 = *(long *)(lVar26 + 0x38), lVar32 != 0)) {
            if (*(uint *)(lVar32 + 0x18) <= *in_stack_00000148)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar32 = lVar32 + (int)*in_stack_00000148 * unaff_x27;
            *(undefined4 *)(lVar32 + 0x2c) = 0;
            fVar58 = ((unaff_s12 * fVar63) / (float)iVar14) * fVar46 * fVar58;
            fVar49 = fVar58 * fVar68 * fVar70 * fVar49;
            *(float *)(lVar32 + 0x160) = fVar49;
            uVar13 = *(uint *)(unaff_x19 + 0x23);
            fStack0000000000000134 = fVar58 * fVar50 * fVar72 * fStack0000000000000134;
            fStack00000000000000f4 = unaff_s12;
            if (uVar13 == 0) {
              in_stack_00000128 = *(float *)(unaff_x19 + 0xc2);
            }
            else {
              lVar32 = unaff_x19[0xe0];
              if (lVar32 == 0) goto LAB_0249920c;
              if (*(uint *)(lVar32 + 0x18) <= uVar13)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              lVar32 = *(long *)(lVar32 + (long)(int)uVar13 * 8 + 0x20);
              if (lVar32 == 0) goto LAB_0249920c;
              in_stack_00000128 = *(float *)(lVar32 + 0x104);
            }
LAB_02492e14:
            fVar68 = 1.0;
            unaff_d9 = (ulong)(uint)fVar49;
            fVar63 = 0.0;
            if (unaff_w25 != 3 && unaff_w25 != 0xad) {
              fVar63 = fVar49;
            }
LAB_02492e2c:
            lVar26 = *(long *)(lVar26 + 0x38);
            if (lVar26 != 0) {
              if (*in_stack_00000148 < *(uint *)(lVar26 + 0x18)) {
                lVar26 = lVar26 + (int)*in_stack_00000148 * unaff_x27;
                *(short *)(lVar26 + 0x20) = (short)unaff_w25;
                *(int *)(lVar26 + 0x60) = (int)unaff_x19[0x3c];
                *(undefined4 *)(lVar26 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
                if ((unaff_x19[0x6c] != 0) &&
                   (lVar26 = *(long *)(unaff_x19[0x6c] + 0x38), lVar26 != 0)) {
                  if (*in_stack_00000148 < *(uint *)(lVar26 + 0x18)) {
                    *(int *)(lVar26 + (int)*in_stack_00000148 * unaff_x27 + 0x168) =
                         (int)unaff_x19[0x2a];
                    if ((unaff_x19[0x6c] != 0) &&
                       (lVar26 = *(long *)(unaff_x19[0x6c] + 0x38), lVar26 != 0)) {
                      if (*in_stack_00000148 < *(uint *)(lVar26 + 0x18)) {
                        *(undefined4 *)(lVar26 + (int)*in_stack_00000148 * unaff_x27 + 0x170) =
                             *(undefined4 *)((long)unaff_x19 + 0x154);
                        if ((unaff_x19[0x6c] != 0) &&
                           (lVar26 = *(long *)(unaff_x19[0x6c] + 0x38), lVar26 != 0)) {
                          uVar13 = *in_stack_00000148;
                          FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
                                       *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
                          if (*(uint *)(lVar26 + 0x18) <= uVar13)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                          lVar26 = lVar26 + (int)uVar13 * unaff_x27;
                          uVar19 = unaff_x26[1];
                          uVar21 = *unaff_x26;
                          *(undefined4 *)(lVar26 + 0x18c) = in_stack_00000890;
                          *(undefined8 *)(lVar26 + 0x184) = uVar19;
                          *(undefined8 *)(lVar26 + 0x17c) = uVar21;
                          if ((*in_stack_00000150 == 0) ||
                             (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0))
                          goto LAB_0249920c;
                          if (*(uint *)(lVar26 + 0x18) <= *in_stack_00000148)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                          *(undefined4 *)(lVar26 + (int)*in_stack_00000148 * unaff_x27 + 400) =
                               *(undefined4 *)((long)unaff_x19 + 0x254);
                          if ((unaff_x19[200] == 0) ||
                             (lVar26 = *(long *)(unaff_x19[200] + 0x20), lVar26 == 0))
                          goto LAB_0249920c;
                          FUN_026fd62c(&stack0x00000bf8,lVar26,0);
                          puVar9 = 
                          Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                          ;
                          unaff_x26[0x1df] = in_stack_00000c00;
                          unaff_x26[0x1de] = CONCAT44(in_stack_00000bfc,in_stack_00000bf8);
                          if ((int)unaff_w25 < 0x10000) {
                            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0)
                                == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar13 = FUN_016f68bc(unaff_w25,0);
                            uVar13 = uVar13 & 1;
                          }
                          else {
                            uVar13 = 0;
                          }
                          fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
                          *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
                          fVar58 = (float)unaff_d9;
                          if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
                            fVar70 = 0.0;
                            fVar49 = 0.0;
                            fVar46 = 0.0;
                          }
                          else {
                            if (unaff_x19[200] == 0) goto LAB_0249920c;
                            uVar61 = *in_stack_00000148;
                            uVar18 = *(uint *)(unaff_x19[200] + 0x28);
                            if ((int)uVar61 < (int)in_stack_00000078._4_4_) {
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0))
                              goto LAB_0249920c;
                              if (*(uint *)(lVar26 + 0x18) <= uVar61 + 1)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              lVar26 = *(long *)(lVar26 + (long)(int)(uVar61 + 1) * (long)iVar15 +
                                                0x30);
                              if ((((lVar26 == 0) || (*in_stack_00000138 == 0)) ||
                                  (lVar32 = *(long *)(*in_stack_00000138 + 0x128), lVar32 == 0)) ||
                                 (lVar32 = *(long *)(lVar32 + 0x18), lVar32 == 0))
                              goto LAB_0249920c;
                              in_stack_00000880 = uVar18 | *(int *)(lVar26 + 0x28) << 0x10;
                              uVar20 = FUN_0129eff4(lVar32,&stack0x00000880,&stack0x000016d8,
                                                    *(undefined8 *)
                                                                                                          
                                                  Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                                                  );
                              uVar71 = 0;
                              if ((uVar20 & 1) == 0) {
                                fVar70 = 0.0;
                                fVar49 = 0.0;
                                fVar46 = 0.0;
                              }
                              else {
                                if (in_stack_000016d8 == 0) goto LAB_0249920c;
                                fVar46 = *(float *)(in_stack_000016d8 + 0x14);
                                fVar49 = *(float *)(in_stack_000016d8 + 0x18);
                                fVar70 = *(float *)(in_stack_000016d8 + 0x1c);
                                uVar71 = *(undefined4 *)(in_stack_000016d8 + 0x20);
                                if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
                                  fStack00000000000000cc = 0.0;
                                }
                              }
                              uVar61 = *in_stack_00000148;
                            }
                            else {
                              uVar71 = 0;
                              fVar70 = 0.0;
                              fVar49 = 0.0;
                              fVar46 = 0.0;
                            }
                            if (0 < (int)uVar61) {
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0))
                              goto LAB_0249920c;
                              if (*(uint *)(lVar26 + 0x18) <= (uint)((long)(int)uVar61 + -1))
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              lVar26 = *(long *)(lVar26 + ((long)(int)uVar61 + -1) * unaff_x27 +
                                                0x30);
                              if (((lVar26 == 0) || (*in_stack_00000138 == 0)) ||
                                 ((lVar32 = *(long *)(*in_stack_00000138 + 0x128), lVar32 == 0 ||
                                  (lVar32 = *(long *)(lVar32 + 0x18), lVar32 == 0))))
                              goto LAB_0249920c;
                              in_stack_00000880 = *(uint *)(lVar26 + 0x28) | uVar18 << 0x10;
                              uVar20 = FUN_0129eff4(lVar32,&stack0x00000880,&stack0x000016d8,
                                                    *(undefined8 *)
                                                                                                          
                                                  Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                                                  );
                              if ((uVar20 & 1) != 0) {
                                if ((in_stack_000016d8 == 0) ||
                                   (fVar46 = (float)FUN_024bb1bc(fVar46,fVar49,fVar70,uVar71,
                                                                 *(undefined4 *)
                                                                  (in_stack_000016d8 + 0x28),
                                                                 *(undefined4 *)
                                                                  (in_stack_000016d8 + 0x2c),
                                                                 *(undefined4 *)
                                                                  (in_stack_000016d8 + 0x30),
                                                                 *(undefined4 *)
                                                                  (in_stack_000016d8 + 0x34),0),
                                   in_stack_000016d8 == 0)) goto LAB_0249920c;
                                if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
                                  fStack00000000000000cc = 0.0;
                                }
                              }
                            }
                            *(float *)((long)unaff_x19 + 0x2f4) = fVar70;
                          }
                          if ((char)unaff_x19[0x1d] != '\0') {
                            fVar72 = *(float *)(unaff_x19 + 199);
                            fVar50 = (float)FUN_026fd474(&stack0x00001770,0);
                            fVar72 = fVar72 - fVar63 * fVar50 * (fVar68 - *(float *)((long)unaff_x19
                                                                                    + 0x2cc));
                            *(float *)(unaff_x19 + 199) = fVar72;
                            if ((uVar13 != 0) || (unaff_w25 == 0x200b)) {
                              *(float *)(unaff_x19 + 199) =
                                   fVar72 - in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
                            }
                          }
                          fVar72 = *(float *)(unaff_x19 + 0x55);
                          fVar50 = 0.0;
                          if (fVar72 != 0.0) {
                            fVar50 = (float)FUN_026fd454(&stack0x00001770,0);
                            fVar51 = (float)FUN_026fd464(&stack0x00001770,0);
                            fVar50 = (fVar68 - *(float *)((long)unaff_x19 + 0x2cc)) *
                                     (fVar72 * 0.5 - fVar63 * (fVar50 * 0.5 + fVar51));
                            *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fVar50;
                          }
                          if (((unaff_w21 == 0) && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
                             ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
                            lVar26 = unaff_x19[0x22];
                            if (*(int *)(*(long *)
                                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                        + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar20 = FUN_02681b9c(lVar26,0,0);
                            fVar52 = 0.0;
                            if ((uVar20 & 1) != 0) {
                              lVar26 = unaff_x19[0x22];
                              if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              if (lVar26 == 0) goto LAB_0249920c;
                              uVar20 = FUN_0267e1d8(lVar26,*(undefined4 *)
                                                            (*(long *)(*(long *)puVar9 + 0xb8) +
                                                            0x54),0);
                              fVar52 = 0.0;
                              if ((uVar20 & 1) != 0) {
                                lVar26 = unaff_x19[0x22];
                                if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                if (lVar26 == 0) goto LAB_0249920c;
                                fVar72 = (float)FUN_0267f610(lVar26,*(undefined4 *)
                                                                     (*(long *)(*(long *)puVar9 +
                                                                               0xb8) + 0x54),0);
                                if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0))
                                goto LAB_0249920c;
                                fVar51 = *(float *)(*in_stack_00000138 + 0x1b0);
                                fVar52 = (float)FUN_0267f610(unaff_x19[0x22],
                                                             *(undefined4 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0xcc),0);
                                fVar52 = fVar52 * fVar72 * fVar51 * 0.25;
                                if (fVar72 < in_stack_00000128 + fVar52) {
                                  in_stack_00000128 = fVar72 - fVar52;
                                }
                              }
                            }
                            if (*in_stack_00000138 == 0) goto LAB_0249920c;
                            fVar72 = *(float *)(*in_stack_00000138 + 0x1b4);
                          }
                          else {
                            lVar26 = unaff_x19[0x22];
                            if (*(int *)(*(long *)
                                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                        + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar20 = FUN_02681b9c(lVar26,0,0);
                            fVar72 = 0.0;
                            if ((uVar20 & 1) != 0) {
                              lVar26 = unaff_x19[0x22];
                              if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              if (lVar26 == 0) goto LAB_0249920c;
                              uVar20 = FUN_0267e1d8(lVar26,*(undefined4 *)
                                                            (*(long *)(*(long *)puVar9 + 0xb8) +
                                                            0x54),0);
                              if ((uVar20 & 1) != 0) {
                                lVar26 = unaff_x19[0x22];
                                if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                if (lVar26 == 0) goto LAB_0249920c;
                                uVar20 = FUN_0267e1d8(lVar26,*(undefined4 *)
                                                              (*(long *)(*(long *)puVar9 + 0xb8) +
                                                              0xcc),0);
                                if ((uVar20 & 1) != 0) {
                                  lVar26 = unaff_x19[0x22];
                                  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  if (lVar26 != 0) {
                                    fVar51 = (float)FUN_0267f610(lVar26,*(undefined4 *)
                                                                         (*(long *)(*(long *)puVar9
                                                                                   + 0xb8) + 0x54),0
                                                                );
                                    if ((*in_stack_00000138 != 0) && (unaff_x19[0x22] != 0)) {
                                      fVar64 = *(float *)(*in_stack_00000138 + 0x1a8);
                                      fVar52 = (float)FUN_0267f610(unaff_x19[0x22],
                                                                   *(undefined4 *)
                                                                    (*(long *)(*(long *)puVar9 +
                                                                              0xb8) + 0xcc),0);
                                      fVar52 = fVar52 * fVar51 * fVar64 * 0.25;
                                      if (fVar51 < in_stack_00000128 + fVar52) {
                                        in_stack_00000128 = fVar51 - fVar52;
                                      }
                                      goto LAB_024934bc;
                                    }
                                  }
                                  goto LAB_0249920c;
                                }
                              }
                            }
                            fVar52 = 0.0;
                          }
LAB_024934bc:
                          fVar65 = *(float *)(unaff_x19 + 199);
                          fVar51 = (float)FUN_026fd464(&stack0x00001770,0);
                          fVar65 = fVar65 + (fVar68 - *(float *)((long)unaff_x19 + 0x2cc)) *
                                            fVar63 * (fVar46 + ((fVar51 - in_stack_00000128) -
                                                               fVar52));
                          fVar46 = (float)FUN_026fd46c(&stack0x00001770,0);
                          fVar51 = *(float *)((long)unaff_x19 + 0x614) +
                                   ((fStack0000000000000134 +
                                    fVar63 * (fVar49 + in_stack_00000128 + fVar46)) -
                                   *(float *)(unaff_x19 + 0x9a));
                          fVar46 = (float)FUN_026fd45c(&stack0x00001770,0);
                          fVar64 = fVar51 - fVar63 * (in_stack_00000128 + in_stack_00000128 + fVar46
                                                     );
                          fVar46 = (float)FUN_026fd454(&stack0x00001770,0);
                          fVar49 = fVar65 + (fVar68 - *(float *)((long)unaff_x19 + 0x2cc)) *
                                            fVar63 * (fVar52 + fVar52 +
                                                     in_stack_00000128 + in_stack_00000128 + fVar46)
                          ;
                          fVar68 = fVar65;
                          fVar46 = fVar49;
                          if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (unaff_w21 == 0)) &&
                             ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
                            fVar74 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
                            fVar68 = (float)FUN_026fd46c(&stack0x00001770,0);
                            fVar55 = fVar74 * fVar63 * (fVar52 + in_stack_00000128 + fVar68);
                            fVar68 = (float)FUN_026fd46c(&stack0x00001770,0);
                            fVar46 = (float)FUN_026fd45c(&stack0x00001770,0);
                            fVar51 = fVar51 + 0.0;
                            fVar64 = fVar64 + 0.0;
                            fVar74 = fVar74 * fVar63 * (((fVar68 - fVar46) - in_stack_00000128) -
                                                       fVar52);
                            fVar46 = fVar49 + fVar74;
                            fVar68 = fVar65 + fVar55;
                            fVar54 = (fVar55 - fVar74) * 0.5;
                            fVar65 = (fVar65 + fVar74) - fVar54;
                            fVar49 = (fVar49 + fVar55) - fVar54;
                            fVar68 = fVar68 - fVar54;
                            fVar46 = fVar46 - fVar54;
                          }
                          if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
                            fVar55 = 0.0;
                            fVar56 = 0.0;
                            fVar66 = 0.0;
                            fVar54 = 0.0;
                            fVar73 = fVar64;
                            fVar74 = fVar51;
                            fStack00000000000000e8 = fVar68;
                            fStack00000000000000ec = fVar65;
                          }
                          else {
                            thunk_FUN_026935f0(_uStack0000000000000060,0);
                            fVar67 = (fVar49 + fVar65) * 0.5;
                            fVar69 = (fVar64 + fVar51) * 0.5;
                            fVar51 = fVar51 - fVar69;
                            fVar54 = 0.0;
                            fVar74 = fVar51;
                            fVar53 = (float)FUN_02692df0(fVar68 - fVar67,_uStack0000000000000060,0);
                            fVar54 = fVar54 + 0.0;
                            fVar64 = fVar64 - fVar69;
                            fVar55 = 0.0;
                            fVar68 = fVar64;
                            fVar65 = (float)FUN_02692df0(fVar65 - fVar67,_uStack0000000000000060,0);
                            fVar55 = fVar55 + 0.0;
                            fVar66 = 0.0;
                            fVar49 = (float)FUN_02692df0(fVar49 - fVar67,_uStack0000000000000060,0);
                            fVar49 = fVar67 + fVar49;
                            fVar51 = fVar69 + fVar51;
                            fVar66 = fVar66 + 0.0;
                            fVar56 = 0.0;
                            fVar46 = (float)FUN_02692df0(fVar46 - fVar67,_uStack0000000000000060,0);
                            fVar46 = fVar67 + fVar46;
                            fVar64 = fVar69 + fVar64;
                            fVar56 = fVar56 + 0.0;
                            fVar73 = fVar69 + fVar68;
                            fVar74 = fVar69 + fVar74;
                            fStack00000000000000e8 = fVar67 + fVar53;
                            fStack00000000000000ec = fVar67 + fVar65;
                          }
                          if (*in_stack_00000150 == 0) goto LAB_0249920c;
                          lVar26 = *(long *)(*in_stack_00000150 + 0x38);
                          unaff_d9 = (ulong)(uint)fVar63;
                          if (lVar26 == 0) goto LAB_0249920c;
                          if (*(uint *)(lVar26 + 0x18) <= *in_stack_00000148)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                          lVar26 = lVar26 + (int)*in_stack_00000148 * unaff_x27;
                          *(float *)(lVar26 + 0x120) = fVar73;
                          *(float *)(lVar26 + 0x11c) = fStack00000000000000ec;
                          *(float *)(lVar26 + 0x124) = fVar55;
                          if (*in_stack_00000150 == 0) goto LAB_0249920c;
                          lVar26 = *(long *)(*in_stack_00000150 + 0x38);
                          if (lVar26 == 0) goto LAB_0249920c;
                          if (*(uint *)(lVar26 + 0x18) <= *in_stack_00000148)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                          lVar26 = lVar26 + (int)*in_stack_00000148 * unaff_x27;
                          *(float *)(lVar26 + 0x114) = fVar74;
                          *(float *)(lVar26 + 0x110) = fStack00000000000000e8;
                          *(float *)(lVar26 + 0x118) = fVar54;
                          if ((*in_stack_00000150 == 0) ||
                             (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0))
                          goto LAB_0249920c;
                          if (*(uint *)(lVar26 + 0x18) <= *in_stack_00000148)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                          lVar26 = lVar26 + (int)*in_stack_00000148 * unaff_x27;
                          *(float *)(lVar26 + 0x128) = fVar49;
                          *(float *)(lVar26 + 300) = fVar51;
                          *(float *)(lVar26 + 0x130) = fVar66;
                          if ((*in_stack_00000150 == 0) ||
                             (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0))
                          goto LAB_0249920c;
                          if (*(uint *)(lVar26 + 0x18) <= *in_stack_00000148)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                          lVar26 = lVar26 + (int)*in_stack_00000148 * unaff_x27;
                          *(float *)(lVar26 + 0x134) = fVar46;
                          *(float *)(lVar26 + 0x138) = fVar64;
                          *(float *)(lVar26 + 0x13c) = fVar56;
                          if ((*in_stack_00000150 == 0) ||
                             (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0))
                          goto LAB_0249920c;
                          uVar18 = *in_stack_00000148;
                          lVar32 = (long)(int)uVar18;
                          if (*(uint *)(lVar26 + 0x18) <= uVar18)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                          lVar40 = lVar26 + lVar32 * unaff_x27;
                          *(int *)(lVar40 + 0x140) = (int)unaff_x19[199];
                          fVar46 = *(float *)(unaff_x19 + 0x9a);
                          param_2 = (ulong)(uint)fVar46;
                          fVar68 = *(float *)((long)unaff_x19 + 0x614);
                          *(float *)(lVar40 + 0x15c) =
                               (fVar49 - fStack00000000000000ec) / (fVar74 - fVar73);
                          *(float *)(lVar40 + 0x14c) = (fStack0000000000000134 - fVar46) + fVar68;
                          fVar47 = fVar47 * fVar63;
                          if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
                            fVar47 = fVar47 / fStack00000000000000f4;
                            fVar48 = (fVar48 * fVar63) / fStack00000000000000f4;
                          }
                          else {
                            fVar48 = fVar48 * fVar63;
                          }
                          uVar37 = *(uint *)(unaff_x19 + 0x92);
                          bVar11 = uVar13 != 0;
                          fVar47 = fVar68 + fVar47;
                          bVar12 = uVar18 != uVar37;
                          if (bVar12 && bVar11) {
                            fVar68 = *(float *)(unaff_x19 + 0x98);
                            lVar26 = lVar26 + lVar32 * unaff_x27;
                            *(float *)(lVar26 + 0x154) = fVar68;
                            fVar48 = *(float *)((long)unaff_x19 + 0x4c4);
                            *(float *)(lVar26 + 0x148) = fVar68 - fVar46;
                            *(float *)(lVar26 + 0x158) = fVar48;
                            *(float *)(unaff_x19 + 0x97) = fVar68 - fVar46;
                            fVar48 = fVar48 - fVar46;
                            *(float *)(lVar26 + 0x150) = fVar48;
                          }
                          else {
                            fVar48 = fVar68 + fVar48;
                            fVar49 = fVar47;
                            fVar51 = fVar48;
                            if (fVar68 != 0.0) {
                              fVar49 = (fVar47 - fVar68) / *(float *)((long)unaff_x19 + 0x3fc);
                              fVar51 = (fVar48 - fVar68) / *(float *)((long)unaff_x19 + 0x3fc);
                              if (fVar49 <= fVar47) {
                                fVar49 = fVar47;
                              }
                              if (fVar48 <= fVar51) {
                                fVar51 = fVar48;
                              }
                            }
                            lVar26 = lVar26 + lVar32 * unaff_x27;
                            fVar68 = fVar49;
                            if (fVar49 <= *(float *)(unaff_x19 + 0x98)) {
                              fVar68 = *(float *)(unaff_x19 + 0x98);
                            }
                            fVar64 = fVar51;
                            if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar51) {
                              fVar64 = *(float *)((long)unaff_x19 + 0x4c4);
                            }
                            *(float *)((long)unaff_x19 + 0x4c4) = fVar64;
                            fVar48 = fVar48 - fVar46;
                            *(float *)(unaff_x19 + 0x98) = fVar68;
                            *(float *)(lVar26 + 0x154) = fVar49;
                            *(float *)(lVar26 + 0x158) = fVar51;
                            *(float *)(lVar26 + 0x148) = fVar47 - fVar46;
                            *(float *)(unaff_x19 + 0x97) = fVar47 - fVar46;
                            *(float *)(lVar26 + 0x150) = fVar48;
                          }
                          *(float *)((long)unaff_x19 + 0x4bc) = fVar48;
                          if (((int)unaff_x19[0x94] == 0) ||
                             (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
                            if (!bVar12 || !bVar11) {
                              *(float *)(unaff_x19 + 0x96) = fVar68;
                              if (unaff_x19[0x1f] != 0) {
                                fVar68 = *(float *)((long)unaff_x19 + 0x4b4);
                                fVar46 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
                                fStack00000000000000f4 = (fVar63 * fVar46) / fStack00000000000000f4;
                                param_2 = (ulong)*(uint *)(unaff_x19 + 0x9a);
                                if (fVar68 <= fStack00000000000000f4) {
                                  fVar68 = fStack00000000000000f4;
                                }
                                *(float *)((long)unaff_x19 + 0x4b4) = fVar68;
                                goto LAB_02493948;
                              }
                              goto LAB_0249920c;
                            }
                          }
                          else {
LAB_02493948:
                            if ((!bVar12 || !bVar11) && (float)param_2 == 0.0) {
                              fVar68 = *(float *)(in_stack_00000070 + 0x208);
                              if (*(float *)(in_stack_00000070 + 0x208) <= fVar47) {
                                fVar68 = fVar47;
                              }
                              *(float *)(in_stack_00000070 + 0x208) = fVar68;
                            }
                          }
                          lVar26 = *in_stack_00000150;
                          if ((lVar26 == 0) || (lVar32 = *(long *)(lVar26 + 0x38), lVar32 == 0))
                          goto LAB_0249920c;
                          uVar2 = *in_stack_00000148;
                          if (*(uint *)(lVar32 + 0x18) <= uVar2)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                          lVar32 = lVar32 + (int)uVar2 * unaff_x27;
                          *(undefined1 *)(lVar32 + 0x194) = 0;
                          uVar31 = *(uint *)(unaff_x19 + 0x4e);
                          fVar68 = 1.0;
                          uVar61 = unaff_w25;
                          if ((unaff_w25 == 9) ||
                             (((((uVar13 == 0 && (unaff_w25 != 3)) && (unaff_w25 != 0x200b)) &&
                               (unaff_w25 != 0xad)) ||
                              (((unaff_w25 == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) != 0 ||
                               (*(int *)((long)unaff_x19 + 0x63c) == 1)))))) {
                            *(undefined1 *)(lVar32 + 0x194) = 1;
                            pfVar29 = _fStack0000000000000088;
                            pfVar33 = _fStack0000000000000098;
                            if (unaff_w20 != 0) {
                              lVar26 = *(long *)(lVar26 + 0x50);
                              if (lVar26 == 0) goto LAB_0249920c;
                              if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                              pfVar33 = (float *)(lVar26 + 0x60);
                              pfVar29 = (float *)(lVar26 + 100);
                            }
                            fVar48 = *pfVar33;
                            fVar47 = *pfVar29;
                            fVar46 = *(float *)(unaff_x19 + 0x6b);
                            fVar49 = *(float *)(unaff_x19 + 199);
                            fStack00000000000000d4 = (in_stack_00000090 - fVar48) - fVar47;
                            bVar11 = true;
                            if ((fVar46 <= fStack00000000000000d4) && (bVar11 = false, !NAN(fVar46))
                               ) {
                              bVar11 = fVar46 == -1.0;
                            }
                            if (!bVar11) {
                              fStack00000000000000d4 = fVar46;
                            }
                            fVar46 = 0.0;
                            if ((char)unaff_x19[0x1d] == '\0') {
                              fVar46 = (float)FUN_026fd474(&stack0x00001770,0);
                              param_2 = (ulong)*(uint *)(unaff_x19 + 0x9a);
                            }
                            fVar65 = *(float *)((long)unaff_x19 + 0x4c4);
                            fVar51 = *(float *)((long)unaff_x19 + 0x2cc);
                            fVar64 = (float)param_2;
                            if (unaff_w25 != 0xad) {
                              fVar58 = fVar63;
                            }
                            fVar74 = 0.0;
                            if ((0.0 < fVar64) &&
                               (fVar74 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
                              fVar74 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                            }
                            fVar74 = (*(float *)(unaff_x19 + 0x96) - (fVar65 - fVar64)) + fVar74;
                            uVar2 = *in_stack_00000148;
                            if (fStack00000000000000a4 < fVar74) {
                              if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                                *(uint *)((long)unaff_x19 + 0x2dc) = uVar2;
                              }
                              unaff_x28 = (long *)StringLiteral_302;
                              unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
                              uVar21 = DAT_02941c08;
                              if ((char)unaff_x19[0x46] != '\0') {
                                fVar54 = *(float *)(unaff_x19 + 0x58);
                                if (((fVar54 < *(float *)((long)unaff_x19 + 0x2b4)) &&
                                    (0.0 < fVar64)) &&
                                   (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                                  fVar68 = *(float *)((long)unaff_x19 + 0x2b4) +
                                           ((in_stack_00000018._4_4_ - fVar74) /
                                           (float)(int)unaff_x19[0x94]) / fStack0000000000000054;
                                  if (fVar68 <= fVar54) {
                                    fVar68 = fVar54;
                                  }
                                  goto LAB_024964c8;
                                }
                                fVar74 = *(float *)((long)unaff_x19 + 0x1dc);
                                fVar64 = *(float *)(unaff_x19 + 0x49);
                                param_2 = (ulong)(uint)fVar64;
                                if ((fVar64 < fVar74) &&
                                   (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                                  fVar68 = (fVar74 - *(float *)(unaff_x19 + 0x47)) * 0.5;
                                  if (fVar68 <= DAT_028aa298) {
                                    fVar68 = DAT_028aa298;
                                  }
                                  fVar63 = (fVar74 - fVar68) * 20.0 + 0.5;
                                  fVar68 = DAT_02958220;
                                  if (fVar63 != INFINITY) {
                                    fVar68 = (float)(int)fVar63 / 20.0;
                                  }
                                  if (fVar68 <= fVar64) {
                                    fVar68 = fVar64;
                                  }
                                  *(float *)((long)unaff_x19 + 0x234) = fVar74;
                                  goto LAB_02495fd8;
                                }
                              }
                              switch((int)unaff_x19[0x5b]) {
                              case 1:
                                lVar26 = *(long *)System_Threading_Mutex_TypeInfo;
                                if (*(int *)(lVar26 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                  lVar26 = *unaff_x29;
                                }
                                lVar32 = *(long *)(lVar26 + 0xb8);
                                lVar26 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                                if ((*(byte *)(lVar26 + 0x132) & 1) == 0) {
                                  lVar26 = FUN_00d5941c(lVar26);
                                }
                                unaff_x28 = (long *)StringLiteral_302;
                                lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 8);
                                if ((*(byte *)(lVar26 + 0x132) & 1) == 0) {
                                  lVar26 = FUN_00d5941c();
                                }
                                piVar22 = (int *)thunk_FUN_00d32ed4(lVar32 + 0x11f0,
                                                                    *(long *)(lVar26 + 0x80) + 0xa0)
                                ;
                                if (*piVar22 == 0) {
LAB_02495f00:
                                  in_stack_000017a8 = DAT_02941c08;
                                  unaff_x26 = (undefined8 *)&stack0x00000880;
                                  in_stack_00000148[0] = 0;
                                  in_stack_00000148[1] = 0;
                                  fVar68 = 1.0;
                                  in_stack_00001788 = 0xffffffff;
                                  goto LAB_02492630;
                                }
                                lVar26 = *unaff_x29;
                                if (*(int *)(lVar26 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                  lVar26 = *unaff_x29;
                                }
                                FUN_013b8de4(*(long *)(lVar26 + 0xb8) + 0x11f0,&stack0x00000880,
                                             *(undefined8 *)
                                              Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                            );
                                memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_02494358:
                                iVar14 = FUN_024d66ec();
LAB_02494364:
                                unaff_x26 = (undefined8 *)&stack0x00000880;
                                iVar45 = *(int *)((long)unaff_x19 + 0x48c) + -1;
                                *(int *)((long)unaff_x19 + 0x48c) = iVar45;
                                in_stack_000017a8 = CONCAT44(0x2026,iVar45);
                                in_stack_00000140 = in_stack_00000140 + 1;
                                fVar68 = 1.0;
                                in_stack_00001788 = iVar14 - 1;
                                goto LAB_02492630;
                              default:
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited
                                ;
                              case 3:
                                if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0)
                                {
                                  thunk_FUN_00d32864();
                                }
LAB_02493ec0:
                                unaff_x28 = (long *)StringLiteral_302;
                                in_stack_00001788 = FUN_024d66ec();
                                break;
                              case 5:
                                if ((uVar2 != 0) && (-1 < (int)in_stack_00001788)) {
                                  fVar63 = *(float *)(unaff_x19 + 0x98);
                                  unaff_x26 = (undefined8 *)&stack0x00000880;
                                  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0
                                     ) {
                                    thunk_FUN_00d32864();
                                  }
                                  in_stack_00001788 = FUN_024d66ec();
                                  if (fVar63 - fVar65 <= fStack00000000000000a4) {
                                    *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
                                    *(undefined4 *)(unaff_x19 + 0x92) =
                                         *(undefined4 *)((long)unaff_x19 + 0x48c);
                                    param_2 = *(ulong *)(*(long *)(*unaff_x29 + 0xb8) + 0x15a8);
                                    *(float *)(unaff_x19 + 199) =
                                         *(float *)((long)unaff_x19 + 0x404) + 0.0;
                                    *(undefined4 *)(unaff_x19 + 0x99) = 0;
                                    lVar26 = NEON_rev64(param_2,4);
                                    unaff_x19[0x98] = lVar26;
                                    *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                                    *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
                                    *(int *)(unaff_x19 + 0x94) = (int)unaff_x19[0x94] + 1;
                                    *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                                    goto LAB_02492630;
                                  }
                                  break;
                                }
                                in_stack_00001788 = 0xffffffff;
                                *in_stack_00000148 = 0;
                                in_stack_000017a8 = uVar21;
LAB_024944c4:
                                unaff_x26 = (undefined8 *)&stack0x00000880;
                                unaff_x28 = (long *)StringLiteral_302;
                                unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
                                fVar68 = 1.0;
                                goto LAB_02492630;
                              case 6:
                                if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0)
                                {
                                  thunk_FUN_00d32864();
                                }
                                in_stack_00001788 = FUN_024d66ec();
                                unaff_x28 = (long *)StringLiteral_302;
                                lVar26 = unaff_x19[0x5c];
                                if (*(int *)(*(long *)
                                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                            + 0xe0) == 0) {
                                  thunk_FUN_00d32864(*(long *)
                                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                                  );
                                }
                                uVar20 = FUN_02681b9c(lVar26,0,0);
                                if ((uVar20 & 1) != 0) {
                                  plVar43 = (long *)unaff_x19[0x5c];
                                  uVar21 = (**(code **)(*unaff_x19 + 0x548))();
                                  if (plVar43 == (long *)0x0) goto LAB_0249920c;
                                  (**(code **)(*plVar43 + 0x558))
                                            (plVar43,uVar21,*(undefined8 *)(*plVar43 + 0x560));
                                  lVar26 = unaff_x19[0x5c];
                                  if (lVar26 == 0) goto LAB_0249920c;
                                  *(int *)(lVar26 + 0x3f8) = (int)unaff_x19[0x7f];
                                  FUN_024c910c(lVar26,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                                  plVar43 = (long *)unaff_x19[0x5c];
                                  if (plVar43 == (long *)0x0) goto LAB_0249920c;
                                  (**(code **)(*plVar43 + 0x7d8))
                                            (plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
                                  *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                                }
                              }
LAB_0249408c:
                              unaff_x26 = (undefined8 *)&stack0x00000880;
                              in_stack_000017a8 = CONCAT44(3,uVar2);
                              fVar68 = 1.0;
                              goto LAB_02492630;
                            }
UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited:
                            unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
                            fVar64 = 1.0 - fVar51;
                            param_2 = (ulong)(uint)fVar64;
                            fVar58 = ABS(fVar49) + fVar46 * fVar64 * fVar58;
                            fVar68 = _DAT_0294c6e8;
                            if ((uVar31 & 0x18) == 0) {
                              fVar68 = 1.0;
                            }
                            if (fVar68 * fStack00000000000000d4 < fVar58) {
                              if (((char)unaff_x19[0x5a] == '\0') ||
                                 (uVar2 == *(uint *)(unaff_x19 + 0x92))) {
                                if (((char)unaff_x19[0x46] != '\0') &&
                                   (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                                  fVar49 = *(float *)(unaff_x19 + 0x59) / 100.0;
                                  if (fVar51 < fVar49) {
                                    fVar63 = fVar58 / fVar64;
                                    if (fVar51 <= 0.0) {
                                      fVar63 = fVar58;
                                    }
                                    fVar51 = fVar51 + (fVar58 - fVar68 * (fStack00000000000000d4 +
                                                                         DAT_02958218)) / fVar63;
                                    goto LAB_0249929c;
                                  }
                                  fVar51 = *(float *)((long)unaff_x19 + 0x1dc);
                                  param_2 = (ulong)(uint)fVar51;
                                  fVar49 = *(float *)(unaff_x19 + 0x49);
                                  if (fVar51 <= fVar49) goto LAB_02493e34;
LAB_02499210:
                                  fVar68 = (fVar51 - *(float *)(unaff_x19 + 0x47)) * 0.5;
                                  if (fVar68 <= DAT_028aa298) {
                                    fVar68 = DAT_028aa298;
                                  }
                                  *(float *)((long)unaff_x19 + 0x234) = fVar51;
                                  fVar63 = (fVar51 - fVar68) * 20.0 + 0.5;
                                  fVar68 = DAT_02958220;
                                  if (fVar63 != INFINITY) {
                                    fVar68 = (float)(int)fVar63 / 20.0;
                                  }
                                  if (fVar68 <= fVar49) {
                                    fVar68 = fVar49;
                                  }
LAB_02495fd8:
                                  *(float *)((long)unaff_x19 + 0x1dc) = fVar68;
                                  return;
                                }
LAB_02493e34:
                                iVar14 = (int)unaff_x19[0x5b];
                                if (iVar14 == 1) {
                                  lVar26 = *(long *)System_Threading_Mutex_TypeInfo;
                                  if (*(int *)(lVar26 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                    lVar26 = *unaff_x29;
                                  }
                                  unaff_x28 = (long *)StringLiteral_302;
                                  lVar32 = *(long *)(lVar26 + 0xb8);
                                  lVar26 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                                  if ((*(byte *)(lVar26 + 0x132) & 1) == 0) {
                                    lVar26 = FUN_00d5941c(lVar26);
                                  }
                                  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 8);
                                  if ((*(byte *)(lVar26 + 0x132) & 1) == 0) {
                                    lVar26 = FUN_00d5941c();
                                  }
                                  piVar22 = (int *)thunk_FUN_00d32ed4(lVar32 + 0x11f0,
                                                                      *(long *)(lVar26 + 0x80) +
                                                                      0xa0);
                                  if (*piVar22 == 0) goto LAB_02495f00;
                                  lVar26 = *unaff_x29;
                                  if (*(int *)(lVar26 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                    lVar26 = *unaff_x29;
                                  }
                                  FUN_013b8de4(*(long *)(lVar26 + 0xb8) + 0x11f0,&stack0x00000880,
                                               *(undefined8 *)
                                                Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                              );
                                  memcpy(&stack0x00000c70,&stack0x00000880,0x378);
                                  goto LAB_02494358;
                                }
                                if (iVar14 != 6) {
                                  if (iVar14 == 3) {
                                    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) ==
                                        0) {
                                      thunk_FUN_00d32864();
                                    }
                                    goto LAB_02493ec0;
                                  }
                                  goto LAB_02494950;
                                }
                                if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0)
                                {
                                  thunk_FUN_00d32864();
                                }
                                unaff_x28 = (long *)StringLiteral_302;
                                in_stack_00001788 = FUN_024d66ec();
                                lVar26 = unaff_x19[0x5c];
                                if (*(int *)(*(long *)
                                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                            + 0xe0) == 0) {
                                  thunk_FUN_00d32864(*(long *)
                                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                                  );
                                }
                                uVar20 = FUN_02681b9c(lVar26,0,0);
                                if ((uVar20 & 1) != 0) {
                                  plVar43 = (long *)unaff_x19[0x5c];
                                  uVar21 = (**(code **)(*unaff_x19 + 0x548))();
                                  if (plVar43 == (long *)0x0) goto LAB_0249920c;
                                  (**(code **)(*plVar43 + 0x558))
                                            (plVar43,uVar21,*(undefined8 *)(*plVar43 + 0x560));
                                  lVar26 = unaff_x19[0x5c];
                                  if (lVar26 == 0) goto LAB_0249920c;
                                  *(int *)(lVar26 + 0x3f8) = (int)unaff_x19[0x7f];
                                  FUN_024c910c(lVar26,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                                  plVar43 = (long *)unaff_x19[0x5c];
                                  if (plVar43 == (long *)0x0) goto LAB_0249920c;
                                  (**(code **)(*plVar43 + 0x7d8))
                                            (plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
                                  *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                                }
LAB_02494484:
                                unaff_x26 = (undefined8 *)&stack0x00000880;
                                in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
                                fVar68 = 1.0;
                                goto LAB_02492630;
                              }
                              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              in_stack_00001788 = FUN_024d66ec();
                              if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                                lVar26 = *in_stack_00000150;
                                if ((lVar26 == 0) ||
                                   (lVar32 = *(long *)(lVar26 + 0x38), lVar32 == 0))
                                goto LAB_0249920c;
                                if (*(uint *)(lVar32 + 0x18) <= *in_stack_00000148)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                ;
                                fVar46 = *(float *)(unaff_x19 + 0x9a);
                                fVar49 = 0.0;
                                if ((0.0 < fVar46) &&
                                   (fVar49 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
                                  fVar49 = *(float *)(unaff_x19 + 0x98) -
                                           *(float *)(unaff_x19 + 0x99);
                                }
                                fVar49 = in_stack_000000c8 * *(float *)(unaff_x19 + 0x56) +
                                         *(float *)(lVar32 + (int)*in_stack_00000148 * unaff_x27 +
                                                   0x154) +
                                         (fVar49 - *(float *)((long)unaff_x19 + 0x4c4)) +
                                         fStack0000000000000054 *
                                         (fStack0000000000000048 +
                                         *(float *)((long)unaff_x19 + 0x2b4));
                              }
                              else {
                                lVar26 = unaff_x19[0x6c];
                                *(undefined1 *)((long)unaff_x19 + 700) = 1;
                                if (lVar26 == 0) goto LAB_0249920c;
                                fVar46 = *(float *)(unaff_x19 + 0x9a);
                                fVar49 = *(float *)(unaff_x19 + 0x57) +
                                         in_stack_000000c8 * *(float *)(unaff_x19 + 0x56);
                              }
                              puVar9 = System_Threading_Mutex_TypeInfo;
                              lVar26 = *(long *)(lVar26 + 0x38);
                              if (lVar26 != 0) {
                                uVar36 = *(uint *)((long)unaff_x19 + 0x48c);
                                if ((*(uint *)(lVar26 + 0x18) <= uVar36) ||
                                   (uVar6 = uVar36 - 1, *(uint *)(lVar26 + 0x18) <= uVar6))
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                ;
                                param_2 = (ulong)(uint)(fVar49 + *(float *)(unaff_x19 + 0x96));
                                fVar46 = (fVar49 + *(float *)(unaff_x19 + 0x96) + fVar46) -
                                         *(float *)(lVar26 + (int)uVar36 * unaff_x27 + 0x158);
                                if (((in_stack_00000068._4_1_ & 1) != 0 ||
                                     *(short *)(lVar26 + (long)(int)uVar6 * (long)iVar15 + 0x20) !=
                                     0xad) ||
                                   ((fStack00000000000000a4 <= fVar46 && ((int)unaff_x19[0x5b] != 0)
                                    ))) {
                                  if (*(short *)(lVar26 + (int)uVar36 * unaff_x27 + 0x20) == 0xad) {
                                    in_stack_00000068._4_1_ = 1;
                                  }
                                  else {
                                    if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1)
                                        != 0) {
                                      fVar51 = *(float *)((long)unaff_x19 + 0x2cc);
                                      fVar49 = *(float *)(unaff_x19 + 0x59) / 100.0;
                                      if ((fVar49 <= fVar51) ||
                                         ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))
                                         ) {
                                        fVar51 = *(float *)((long)unaff_x19 + 0x1dc);
                                        param_2 = (ulong)(uint)fVar51;
                                        fVar49 = *(float *)(unaff_x19 + 0x49);
                                        if ((fVar49 < fVar51) &&
                                           (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]
                                           )) goto LAB_02499210;
                                        goto LAB_024946c0;
                                      }
LAB_024992ac:
                                      fVar63 = fVar58;
                                      if (0.0 < fVar51) {
                                        fVar63 = fVar58 / (1.0 - fVar51);
                                      }
                                      fVar51 = fVar51 + (fVar58 - fVar68 * (fStack00000000000000d4 +
                                                                           DAT_02958218)) / fVar63;
LAB_0249929c:
                                      if (fVar49 <= fVar51) {
                                        fVar51 = fVar49;
                                      }
                                      *(float *)((long)unaff_x19 + 0x2cc) = fVar51;
                                      return;
                                    }
LAB_024946c0:
                                    lVar26 = *(long *)System_Threading_Mutex_TypeInfo;
                                    if (*(int *)(lVar26 + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                      lVar26 = *(long *)puVar9;
                                    }
                                    iVar14 = *(int *)(*(long *)(lVar26 + 0xb8) + 0xe78);
                                    if ((((float)iVar14 != fStack0000000000000034) && (iVar14 != -1)
                                        ) && (((bStack000000000000005c ^ 1) & 1) == 0)) {
                                      if (*(int *)(lVar26 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      in_stack_00001788 = FUN_024d66ec();
                                      if ((unaff_x19[0x6c] == 0) ||
                                         (lVar26 = *(long *)(unaff_x19[0x6c] + 0x38), lVar26 == 0))
                                      goto LAB_0249920c;
                                      uVar6 = *in_stack_00000148 - 1;
                                      if (*(uint *)(lVar26 + 0x18) <= uVar6)
                                      goto 
                                      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                      ;
                                      fStack0000000000000034 = (float)iVar14;
                                      if (*(short *)(lVar26 + (long)(int)uVar6 * (long)iVar15 + 0x20
                                                    ) == 0xad) {
                                        *in_stack_00000148 = uVar6;
                                        goto LAB_024947b4;
                                      }
                                    }
                                    if (fStack00000000000000a4 < fVar46) {
                                      if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                                        *(undefined4 *)((long)unaff_x19 + 0x2dc) =
                                             *(undefined4 *)((long)unaff_x19 + 0x48c);
                                      }
                                      unaff_x28 = (long *)StringLiteral_302;
                                      unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
                                      if ((char)unaff_x19[0x46] != '\0') {
                                        fVar49 = *(float *)(unaff_x19 + 0x58);
                                        if ((fVar49 < *(float *)((long)unaff_x19 + 0x2b4)) &&
                                           (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]
                                           )) {
                                          fVar68 = *(float *)((long)unaff_x19 + 0x2b4) +
                                                   ((in_stack_00000018._4_4_ - fVar46) /
                                                   (float)((int)unaff_x19[0x94] + 1)) /
                                                   fStack0000000000000054;
                                          if (fVar68 <= fVar49) {
                                            fVar68 = fVar49;
                                          }
LAB_024964c8:
                                          *(float *)((long)unaff_x19 + 0x2b4) = fVar68;
                                          return;
                                        }
                                        fVar51 = *(float *)((long)unaff_x19 + 0x2cc);
                                        fVar49 = *(float *)(unaff_x19 + 0x59) / 100.0;
                                        if ((fVar51 < fVar49) &&
                                           (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]
                                           )) goto LAB_024992ac;
                                        fVar51 = *(float *)((long)unaff_x19 + 0x1dc);
                                        param_2 = (ulong)(uint)fVar51;
                                        fVar49 = *(float *)(unaff_x19 + 0x49);
                                        if ((fVar49 < fVar51) &&
                                           (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]
                                           )) goto LAB_02499210;
                                      }
                                      switch((int)unaff_x19[0x5b]) {
                                      case 0:
                                      case 2:
                                      case 4:
                                        param_2 = unaff_d9;
                                        FUN_024d7014(fStack0000000000000054,unaff_d9,
                                                     in_stack_000000c8,
                                                     *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar72
                                                     ,fStack00000000000000cc,fStack00000000000000d4,
                                                     fStack0000000000000048);
                                        break;
                                      case 1:
                                        lVar26 = *(long *)System_Threading_Mutex_TypeInfo;
                                        if (*(int *)(lVar26 + 0xe0) == 0) {
                                          thunk_FUN_00d32864();
                                          lVar26 = *unaff_x29;
                                        }
                                        lVar32 = *(long *)(lVar26 + 0xb8);
                                        lVar26 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                                        if ((*(byte *)(lVar26 + 0x132) & 1) == 0) {
                                          lVar26 = FUN_00d5941c(lVar26);
                                        }
                                        lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 8);
                                        if ((*(byte *)(lVar26 + 0x132) & 1) == 0) {
                                          lVar26 = FUN_00d5941c();
                                        }
                                        piVar22 = (int *)thunk_FUN_00d32ed4(lVar32 + 0x11f0,
                                                                            *(long *)(lVar26 + 0x80)
                                                                            + 0xa0);
                                        if (*piVar22 == 0) {
                                          in_stack_00000068._4_1_ = 0;
                                          goto LAB_02495f00;
                                        }
                                        lVar26 = *unaff_x29;
                                        if (*(int *)(lVar26 + 0xe0) == 0) {
                                          thunk_FUN_00d32864();
                                          lVar26 = *unaff_x29;
                                        }
                                        FUN_013b8de4(*(long *)(lVar26 + 0xb8) + 0x11f0,
                                                     &stack0x00000880,
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                                  );
                                        memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
                                        iVar14 = FUN_024d66ec();
                                        in_stack_00000068._4_1_ = 0;
                                        goto LAB_02494364;
                                      case 3:
                                        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0
                                                    ) == 0) {
                                          thunk_FUN_00d32864();
                                        }
                                        in_stack_00001788 = FUN_024d66ec();
                                        in_stack_00000068._4_1_ = 0;
                                        goto LAB_0249408c;
                                      case 5:
                                        *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
                                        param_2 = unaff_d9;
                                        FUN_024d7014(fStack0000000000000054,unaff_d9,
                                                     in_stack_000000c8,
                                                     *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar72
                                                     ,fStack00000000000000cc,fStack00000000000000d4,
                                                     fStack0000000000000048);
                                        *(undefined4 *)(unaff_x19 + 0x99) = 0;
                                        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                                        *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
                                        *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                                        break;
                                      case 6:
                                        lVar26 = unaff_x19[0x5c];
                                        if (*(int *)(*(long *)
                                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                                  + 0xe0) == 0) {
                                          thunk_FUN_00d32864();
                                        }
                                        uVar20 = FUN_02681b9c(lVar26,0,0);
                                        if ((uVar20 & 1) != 0) {
                                          plVar43 = (long *)unaff_x19[0x5c];
                                          uVar21 = (**(code **)(*unaff_x19 + 0x548))();
                                          if (plVar43 == (long *)0x0) goto LAB_0249920c;
                                          (**(code **)(*plVar43 + 0x558))
                                                    (plVar43,uVar21,
                                                     *(undefined8 *)(*plVar43 + 0x560));
                                          lVar26 = unaff_x19[0x5c];
                                          if (lVar26 == 0) goto LAB_0249920c;
                                          *(int *)(lVar26 + 0x3f8) = (int)unaff_x19[0x7f];
                                          FUN_024c910c(lVar26,*(undefined4 *)
                                                               ((long)unaff_x19 + 0x48c),0);
                                          plVar43 = (long *)unaff_x19[0x5c];
                                          if (plVar43 == (long *)0x0) goto LAB_0249920c;
                                          (**(code **)(*plVar43 + 0x7d8))
                                                    (plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
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
                                                 *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar72,
                                                 fStack00000000000000cc,fStack00000000000000d4,
                                                 fStack0000000000000048);
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
                                unaff_x28 = (long *)StringLiteral_302;
                                unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
                                fVar68 = 1.0;
                                goto LAB_02492630;
                              }
                              goto LAB_0249920c;
                            }
LAB_02494950:
                            if (unaff_w25 != 0xad) {
                              if (unaff_w25 != 9) {
                                if (*(int *)((long)unaff_x19 + 0x63c) == 1) {
                                  (**(code **)(*unaff_x19 + 0x8c8))();
                                }
                                else if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
                                  (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000128,fVar52);
                                }
                                uVar2 = *in_stack_00000148;
                                if (((uint)fStack0000000000000058 & 1) != 0) {
                                  *(uint *)(in_stack_00000070 + 0x1f0) = uVar2;
                                }
                                *(uint *)((long)unaff_x19 + 0x49c) = uVar2;
                                *(int *)((long)unaff_x19 + 0x4a4) =
                                     *(int *)((long)unaff_x19 + 0x4a4) + 1;
                                if ((unaff_x19[0x6c] != 0) &&
                                   (lVar26 = *(long *)(unaff_x19[0x6c] + 0x50), lVar26 != 0)) {
                                  if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar26 + 0x18)) {
                                    lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                                    fStack0000000000000058 = 0.0;
                                    *(float *)(lVar26 + 0x60) = fVar48;
                                    *(float *)(lVar26 + 100) = fVar47;
                                    goto LAB_02494abc;
                                  }
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                }
                                goto LAB_0249920c;
                              }
                              lVar26 = *in_stack_00000150;
                              if ((lVar26 == 0) || (lVar32 = *(long *)(lVar26 + 0x38), lVar32 == 0))
                              goto LAB_0249920c;
                              uVar2 = *in_stack_00000148;
                              if (uVar2 < *(uint *)(lVar32 + 0x18)) {
                                *(undefined1 *)(lVar32 + (int)uVar2 * unaff_x27 + 0x194) = 0;
                                *(uint *)((long)unaff_x19 + 0x49c) = uVar2;
                                lVar32 = *(long *)(lVar26 + 0x50);
                                if (lVar32 != 0) {
                                  if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar32 + 0x18)) {
                                    lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                                    *(int *)(lVar32 + 0x2c) = *(int *)(lVar32 + 0x2c) + 1;
                                    goto LAB_024949c4;
                                  }
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                }
                                goto LAB_0249920c;
                              }
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                            }
                            if ((*in_stack_00000150 == 0) ||
                               (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0))
                            goto LAB_0249920c;
                            if (*(uint *)(lVar26 + 0x18) <= *in_stack_00000148)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            *(undefined1 *)(lVar26 + (int)*in_stack_00000148 * unaff_x27 + 0x194) =
                                 0;
                          }
                          else {
                            if (((unaff_w25 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
                              fVar46 = (float)param_2;
                              fVar58 = 0.0;
                              if ((0.0 < fVar46) &&
                                 (fVar58 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
                                fVar58 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99)
                                ;
                              }
                              param_2 = (ulong)(uint)fStack00000000000000a4;
                              if (fStack00000000000000a4 <
                                  (*(float *)(unaff_x19 + 0x96) -
                                  (*(float *)((long)unaff_x19 + 0x4c4) - fVar46)) + fVar58) {
                                if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                                  *(uint *)((long)unaff_x19 + 0x2dc) = uVar2;
                                }
                                unaff_x28 = (long *)StringLiteral_302;
                                unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
                                unaff_x26 = (undefined8 *)&stack0x00000880;
                                if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0)
                                {
                                  thunk_FUN_00d32864();
                                }
                                in_stack_00001788 = FUN_024d66ec();
                                lVar26 = unaff_x19[0x5c];
                                if (*(int *)(*(long *)
                                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                            + 0xe0) == 0) {
                                  thunk_FUN_00d32864(*(long *)
                                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                                  );
                                }
                                uVar20 = FUN_02681b9c(lVar26,0,0);
                                if ((uVar20 & 1) != 0) {
                                  plVar43 = (long *)unaff_x19[0x5c];
                                  uVar21 = (**(code **)(*unaff_x19 + 0x548))();
                                  if (plVar43 == (long *)0x0) goto LAB_0249920c;
                                  (**(code **)(*plVar43 + 0x558))
                                            (plVar43,uVar21,*(undefined8 *)(*plVar43 + 0x560));
                                  lVar26 = unaff_x19[0x5c];
                                  if (lVar26 == 0) goto LAB_0249920c;
                                  *(int *)(lVar26 + 0x3f8) = (int)unaff_x19[0x7f];
                                  FUN_024c910c(lVar26,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                                  plVar43 = (long *)unaff_x19[0x5c];
                                  if (plVar43 == (long *)0x0) goto LAB_0249920c;
                                  (**(code **)(*plVar43 + 0x7d8))
                                            (plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
                                  *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                                }
                                in_stack_000017a8 = CONCAT44(3,uVar2);
                                goto LAB_02492630;
                              }
                            }
                            if ((((unaff_w25 - 0x2007 < 0x23) &&
                                 ((1L << ((ulong)(unaff_w25 - 0x2007) & 0x3f) & 0x600000001U) != 0))
                                || (unaff_w25 - 10 < 2)) || (unaff_w25 == 0xa0)) {
LAB_024944e4:
                              if (((unaff_w25 != 0xad) && (unaff_w25 != 0x200b)) &&
                                 (unaff_w25 != 0x2060)) {
                                lVar26 = *in_stack_00000150;
                                if ((lVar26 == 0) ||
                                   (lVar32 = *(long *)(lVar26 + 0x50), lVar32 == 0))
                                goto LAB_0249920c;
                                if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                ;
                                lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                                *(int *)(lVar32 + 0x2c) = *(int *)(lVar32 + 0x2c) + 1;
                                *(int *)(lVar26 + 0x20) = *(int *)(lVar26 + 0x20) + 1;
                              }
                            }
                            else {
                              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0
                                          ) == 0) {
                                thunk_FUN_00d32864();
                              }
                              uVar20 = FUN_016fa418(unaff_w25,0);
                              if ((uVar20 & 1) != 0) goto LAB_024944e4;
                            }
                            if (unaff_w25 == 0xa0) {
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar26 = *(long *)(*in_stack_00000150 + 0x50), lVar26 == 0))
                              goto LAB_0249920c;
                              if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_024949c4:
                              *(int *)(lVar26 + 0x20) = *(int *)(lVar26 + 0x20) + 1;
                            }
                          }
LAB_02494abc:
                          if (((int)unaff_x19[0x5b] == 1) &&
                             ((unaff_w25 == 0x2d || (unaff_w20 != 1)))) {
                            if (unaff_x19[0xca] == 0) goto LAB_0249920c;
                            fVar68 = *(float *)(unaff_x19 + 0x3c);
                            iVar14 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
                            if (unaff_x19[0xca] == 0) goto LAB_0249920c;
                            fVar46 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
                            lVar26 = unaff_x19[0xc9];
                            fVar58 = fStack0000000000000084;
                            if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                              fVar58 = 1.0;
                            }
                            if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto LAB_0249920c;
                            fVar47 = *(float *)((long)unaff_x19 + 0x3fc);
                            fVar51 = *(float *)(lVar26 + 0x2c);
                            fVar48 = (float)FUN_026fd668(*(long *)(lVar26 + 0x20),0);
                            fVar49 = *_fStack0000000000000098;
                            fVar48 = fVar47 * (fVar68 / (float)iVar14) * fVar46 * fVar58 * fVar51 *
                                     fVar48;
                            fVar68 = *_fStack0000000000000088;
                            if ((unaff_w25 == 10) &&
                               (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0))
                              goto LAB_0249920c;
                              uVar2 = *(int *)((long)unaff_x19 + 0x48c) - 1;
                              if (*(uint *)(lVar26 + 0x18) <= uVar2)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              if (unaff_x19[0xca] == 0) goto LAB_0249920c;
                              fVar58 = *(float *)(lVar26 + (long)(int)uVar2 * (long)iVar15 + 0x60);
                              iVar14 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
                              if (unaff_x19[0xca] == 0) goto LAB_0249920c;
                              fVar47 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
                              lVar26 = unaff_x19[0xc9];
                              fVar46 = fStack0000000000000084;
                              if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                                fVar46 = 1.0;
                              }
                              if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0))
                              goto LAB_0249920c;
                              fVar51 = *(float *)((long)unaff_x19 + 0x3fc);
                              fVar52 = *(float *)(lVar26 + 0x2c);
                              fVar48 = (float)FUN_026fd668(*(long *)(lVar26 + 0x20),0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar26 = *(long *)(*in_stack_00000150 + 0x50), lVar26 == 0))
                              goto LAB_0249920c;
                              if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                              fVar49 = *(float *)(lVar26 + 0x60);
                              fVar68 = *(float *)(lVar26 + 100);
                              fVar48 = fVar51 * (fVar58 / (float)iVar14) * fVar47 * fVar46 * fVar52
                                       * fVar48;
                            }
                            fVar51 = *(float *)(unaff_x19 + 0x9a);
                            fVar46 = *(float *)(unaff_x19 + 0x96);
                            fVar52 = *(float *)((long)unaff_x19 + 0x4c4);
                            fVar58 = 0.0;
                            fVar47 = 0.0;
                            if ((0.0 < fVar51) &&
                               (fVar47 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
                              fVar47 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                            }
                            fVar64 = *(float *)(unaff_x19 + 199);
                            if ((char)unaff_x19[0x1d] == '\0') {
                              if ((unaff_x19[0xc9] == 0) ||
                                 (lVar26 = *(long *)(unaff_x19[0xc9] + 0x20), lVar26 == 0))
                              goto LAB_0249920c;
                              FUN_026fd62c(&stack0x00000880,lVar26,0);
                              fVar58 = (float)FUN_026fd474(&stack0x000016e0,0);
                            }
                            puVar9 = System_Threading_Mutex_TypeInfo;
                            fVar65 = *(float *)(unaff_x19 + 0x6b);
                            fVar68 = (in_stack_00000090 - fVar49) - fVar68;
                            bVar11 = true;
                            if ((fVar65 <= fVar68) && (bVar11 = false, !NAN(fVar65))) {
                              bVar11 = fVar65 == -1.0;
                            }
                            if (!bVar11) {
                              fVar68 = fVar65;
                            }
                            fVar49 = _DAT_0294c6e8;
                            if ((uVar31 & 0x18) == 0) {
                              fVar49 = 1.0;
                            }
                            if (((fVar46 - (fVar52 - fVar51)) + fVar47 < fStack00000000000000a4) &&
                               (ABS(fVar64) +
                                fVar48 * fVar58 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
                                fVar49 * fVar68)) {
                              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              FUN_024d69d4();
                              lVar26 = *(long *)(*(long *)puVar9 + 0xb8);
                              memcpy(&stack0x00000508,(void *)(lVar26 + 0x788),0x378);
                              FUN_013b86dc(lVar26 + 0x11f0,&stack0x00000508,
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_List<TextStyle>_get_Item__
                                          );
                            }
                          }
                          unaff_d9 = (ulong)(uint)fVar63;
                          fVar68 = 1.0;
                          lVar26 = *in_stack_00000150;
                          if ((lVar26 == 0) || (lVar32 = *(long *)(lVar26 + 0x38), lVar32 == 0))
                          goto LAB_0249920c;
                          if (*(uint *)(lVar32 + 0x18) <= *in_stack_00000148)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                          uVar2 = *(uint *)(unaff_x19 + 0x94);
                          lVar32 = lVar32 + (int)*in_stack_00000148 * unaff_x27;
                          *(uint *)(lVar32 + 100) = uVar2;
                          *(int *)(lVar32 + 0x68) = (int)unaff_x19[0x95];
                          if (((unaff_w20 & 1) == 0) &&
                             ((0xd < unaff_w25 || ((1 << (ulong)(unaff_w25 & 0x1f) & 0x2c00U) == 0))
                             )) {
                            lVar26 = *(long *)(lVar26 + 0x50);
                            if (lVar26 == 0) goto LAB_0249920c;
LAB_02494e68:
                            if (*(uint *)(lVar26 + 0x18) <= uVar2)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            *(int *)(lVar26 + (long)(int)uVar2 * 0x5c + 0x68) = (int)unaff_x19[0x4e]
                            ;
                          }
                          else {
                            lVar26 = *(long *)(lVar26 + 0x50);
                            if (lVar26 == 0) goto LAB_0249920c;
                            if (*(uint *)(lVar26 + 0x18) <= uVar2)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            if (*(int *)(lVar26 + (long)(int)uVar2 * 0x5c + 0x24) == 1)
                            goto LAB_02494e68;
                          }
                          if (unaff_w25 == 9) {
                            if (*in_stack_00000138 == 0) goto LAB_0249920c;
                            fVar58 = (float)FUN_026fd208(*in_stack_00000138 + 0x50,0);
                            if (*in_stack_00000138 == 0) goto LAB_0249920c;
                            fVar48 = *(float *)(unaff_x19 + 199);
                            fVar46 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000138 + 0x1b9));
                            fVar58 = fVar63 * fVar58 * fVar46;
                            fVar46 = fVar58 * (float)(int)(fVar48 / fVar58);
                            param_2 = (ulong)(uint)fVar46;
                            if (fVar46 <= fVar48) {
                              fVar46 = fVar48 + fVar58;
                            }
LAB_02495058:
                            *(float *)(unaff_x19 + 199) = fVar46;
                          }
                          else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
                            if ((char)unaff_x19[0x1d] == '\0') {
                              fVar48 = fVar68;
                              if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
                                fVar48 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
                              }
                              fVar46 = *(float *)(unaff_x19 + 199);
                              fVar47 = (float)FUN_026fd474(&stack0x00001770,0);
                              if (unaff_x19[0x1f] != 0) {
                                fVar58 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
                                fVar46 = fVar46 + fVar58 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                                           fVar63 * (fVar70 + fVar48 * fVar47) +
                                                           in_stack_000000c8 *
                                                           (fVar72 + fStack00000000000000cc +
                                                                     *(float *)(unaff_x19[0x1f] +
                                                                               0x1ac)));
                                *(float *)(unaff_x19 + 199) = fVar46;
                                goto joined_r0x02494fac;
                              }
                              goto LAB_0249920c;
                            }
                            if (*in_stack_00000138 == 0) goto LAB_0249920c;
                            fVar46 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                                     (*(float *)((long)unaff_x19 + 0x2a4) +
                                     fVar63 * fVar70 +
                                     in_stack_000000c8 *
                                     (fVar72 + fStack00000000000000cc +
                                               *(float *)(*in_stack_00000138 + 0x1ac)));
                            param_2 = (ulong)(uint)fVar46;
                            fVar46 = *(float *)(unaff_x19 + 199) - fVar46;
                            *(float *)(unaff_x19 + 199) = fVar46;
                            if ((uVar13 != 0) || (unaff_w25 == 0x200b)) {
                              fVar58 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
                              param_2 = (ulong)(uint)fVar58;
                              fVar46 = fVar46 - fVar58;
                              goto LAB_02495058;
                            }
                          }
                          else {
                            if (*in_stack_00000138 == 0) goto LAB_0249920c;
                            fVar58 = *(float *)(unaff_x19 + 199);
                            fVar46 = fVar58 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                                              (*(float *)((long)unaff_x19 + 0x2a4) +
                                              (*(float *)(unaff_x19 + 0x55) - fVar50) +
                                              in_stack_000000c8 *
                                              (fStack00000000000000cc +
                                              *(float *)(*in_stack_00000138 + 0x1ac)));
                            *(float *)(unaff_x19 + 199) = fVar46;
joined_r0x02494fac:
                            if ((uVar13 != 0) ||
                               (param_2 = (ulong)(uint)fVar58, unaff_w25 == 0x200b)) {
                              fVar58 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
                              param_2 = (ulong)(uint)fVar58;
                              fVar46 = fVar46 + fVar58;
                              goto LAB_02495058;
                            }
                          }
                          lVar26 = *in_stack_00000150;
                          if ((lVar26 == 0) || (lVar32 = *(long *)(lVar26 + 0x38), lVar32 == 0))
                          goto LAB_0249920c;
                          uVar2 = *in_stack_00000148;
                          uVar31 = (uint)*(undefined8 *)(lVar32 + 0x18);
                          if (uVar31 <= uVar2)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                          *(float *)(lVar32 + (int)uVar2 * unaff_x27 + 0x144) = fVar46;
                          uVar36 = unaff_w25;
                          if ((int)unaff_w25 < 0xd) {
                            if ((unaff_w25 - 10 < 2) || (unaff_w25 == 3)) goto LAB_024950bc;
FUN_02495710:
                            if (((unaff_w20 & unaff_w25 == 0x2d) != 0) ||
                               ((float)uVar2 == in_stack_00000078._4_4_)) goto LAB_024950bc;
                          }
                          else {
                            if (1 < unaff_w25 - 0x2028) {
                              if (unaff_w25 != 0xd) goto FUN_02495710;
                              param_2 = 0;
                              *(float *)(unaff_x19 + 199) =
                                   *(float *)((long)unaff_x19 + 0x404) + 0.0;
                              if ((float)uVar2 != in_stack_00000078._4_4_) goto LAB_0249572c;
                            }
LAB_024950bc:
                            if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
                              fVar58 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                              if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo +
                                          0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              if (((fStack000000000000004c < ABS(fVar58)) &&
                                  (*(char *)((long)unaff_x19 + 700) == '\0')) &&
                                 (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
                                FUN_024d6ca8(fVar58);
                                *(float *)((long)unaff_x19 + 0x4bc) =
                                     *(float *)((long)unaff_x19 + 0x4bc) - fVar58;
                                *(float *)(unaff_x19 + 0x9a) = fVar58 + *(float *)(unaff_x19 + 0x9a)
                                ;
                                puVar9 = System_Threading_Mutex_TypeInfo;
                                lVar26 = *(long *)System_Threading_Mutex_TypeInfo;
                                if (*(int *)(lVar26 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                  lVar26 = *(long *)puVar9;
                                }
                                lVar32 = *(long *)(lVar26 + 0xb8);
                                if (*(int *)(lVar32 + 0x7ac) == (int)unaff_x19[0x94]) {
                                  if (*(int *)(lVar26 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                    lVar32 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo +
                                                      0xb8);
                                  }
                                  FUN_013b8de4(lVar32 + 0x11f0,&stack0x00000880,
                                               *(undefined8 *)
                                                Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                              );
                                  lVar26 = *(long *)System_Threading_Mutex_TypeInfo;
                                  memcpy((void *)(*(long *)(lVar26 + 0xb8) + 0x788),&stack0x00000880
                                         ,0x378);
                                  lVar26 = *(long *)(lVar26 + 0xb8);
                                  *(float *)(lVar26 + 0x7bc) = fVar58 + *(float *)(lVar26 + 0x7bc);
                                  *(float *)(lVar26 + 0x800) = fVar58 + *(float *)(lVar26 + 0x800);
                                  memcpy(&stack0x00000190,(void *)(lVar26 + 0x788),0x378);
                                  FUN_013b86dc(lVar26 + 0x11f0,&stack0x00000190,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_List<TextStyle>_get_Item__
                                              );
                                }
                              }
                            }
                            fVar48 = *(float *)(unaff_x19 + 0x9a);
                            *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
                            fVar46 = *(float *)((long)unaff_x19 + 0x4c4) - fVar48;
                            fVar58 = *(float *)((long)unaff_x19 + 0x4bc);
                            if (fVar46 <= *(float *)((long)unaff_x19 + 0x4bc)) {
                              fVar58 = fVar46;
                            }
                            *(float *)((long)unaff_x19 + 0x4bc) = fVar58;
                            fVar47 = *(float *)(unaff_x19 + 0x98);
                            if (in_stack_000017b4 == '\0') {
                              in_stack_000017b8 = fVar58;
                            }
                            if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
                               (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
                                ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
                              in_stack_000017b4 = '\x01';
                            }
                            lVar26 = *in_stack_00000150;
                            if ((lVar26 == 0) || (lVar32 = *(long *)(lVar26 + 0x50), lVar32 == 0))
                            goto LAB_0249920c;
                            uVar2 = *(uint *)(unaff_x19 + 0x94);
                            if (*(uint *)(lVar32 + 0x18) <= uVar2)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            lVar40 = lVar32 + (long)(int)uVar2 * 0x5c;
                            *(int *)(lVar40 + 0x34) = (int)unaff_x19[0x92];
                            iVar14 = (int)unaff_x19[0x92];
                            if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
                              iVar14 = *(int *)((long)unaff_x19 + 0x494);
                            }
                            *(int *)((long)unaff_x19 + 0x494) = iVar14;
                            *(int *)(lVar40 + 0x38) = iVar14;
                            *(undefined4 *)(unaff_x19 + 0x93) =
                                 *(undefined4 *)((long)unaff_x19 + 0x48c);
                            *(undefined4 *)(lVar40 + 0x3c) =
                                 *(undefined4 *)((long)unaff_x19 + 0x48c);
                            iVar14 = *(int *)((long)unaff_x19 + 0x494);
                            if (*(int *)((long)unaff_x19 + 0x494) <=
                                *(int *)((long)unaff_x19 + 0x49c)) {
                              iVar14 = *(int *)((long)unaff_x19 + 0x49c);
                            }
                            *(int *)((long)unaff_x19 + 0x49c) = iVar14;
                            *(int *)(lVar40 + 0x40) = iVar14;
                            *(int *)(lVar40 + 0x24) =
                                 (*(int *)(lVar40 + 0x3c) - *(int *)(lVar40 + 0x34)) + 1;
                            *(undefined4 *)(lVar40 + 0x28) =
                                 *(undefined4 *)((long)unaff_x19 + 0x4a4);
                            lVar26 = *(long *)(lVar26 + 0x38);
                            if (lVar26 == 0) goto LAB_0249920c;
                            if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            uVar71 = *(undefined4 *)
                                      (lVar26 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x27
                                      + 0x11c);
                            lVar32 = lVar32 + (long)(int)uVar2 * 0x5c;
                            *(float *)(lVar32 + 0x70) = fVar46;
                            *(undefined4 *)(lVar32 + 0x6c) = uVar71;
                            lVar26 = *in_stack_00000150;
                            if ((lVar26 == 0) || (lVar32 = *(long *)(lVar26 + 0x50), lVar32 == 0))
                            goto LAB_0249920c;
                            if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            lVar26 = *(long *)(lVar26 + 0x38);
                            if (lVar26 == 0) goto LAB_0249920c;
                            if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            uVar71 = *(undefined4 *)
                                      (lVar26 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x27
                                      + 0x128);
                            fVar47 = fVar47 - fVar48;
                            lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                            *(float *)(lVar32 + 0x78) = fVar47;
                            *(undefined4 *)(lVar32 + 0x74) = uVar71;
                            lVar26 = *in_stack_00000150;
                            if ((lVar26 == 0) || (lVar40 = *(long *)(lVar26 + 0x50), lVar40 == 0))
                            goto LAB_0249920c;
                            lVar34 = (long)(int)*(uint *)(unaff_x19 + 0x94);
                            if (*(uint *)(lVar40 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            lVar32 = lVar40 + lVar34 * 0x5c;
                            *(float *)(lVar32 + 0x44) =
                                 *(float *)(lVar32 + 0x74) - fVar63 * in_stack_00000128;
                            *(float *)(lVar32 + 0x5c) = fStack00000000000000d4;
                            if (*(int *)(lVar32 + 0x24) == 1) {
                              *(int *)(lVar40 + lVar34 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
                            }
                            if ((*in_stack_00000138 == 0) ||
                               (lVar32 = *(long *)(lVar26 + 0x38), lVar32 == 0)) goto LAB_0249920c;
                            lVar44 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
                            uVar31 = (uint)*(undefined8 *)(lVar32 + 0x18);
                            if (uVar31 <= *(uint *)((long)unaff_x19 + 0x49c))
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            if ((*(char *)(lVar32 + lVar44 * unaff_x27 + 0x194) == '\0') &&
                               (lVar44 = (long)(int)*(uint *)(unaff_x19 + 0x93),
                               uVar31 <= *(uint *)(unaff_x19 + 0x93)))
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            fVar58 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                                     (in_stack_000000c8 *
                                      (fVar72 + fStack00000000000000cc +
                                                *(float *)(*in_stack_00000138 + 0x1ac)) -
                                     *(float *)((long)unaff_x19 + 0x2a4));
                            fVar63 = -fVar58;
                            if ((char)unaff_x19[0x1d] != '\0') {
                              fVar63 = fVar58;
                            }
                            lVar40 = lVar40 + lVar34 * 0x5c;
                            *(float *)(lVar40 + 0x58) =
                                 *(float *)(lVar32 + lVar44 * unaff_x27 + 0x144) + fVar63;
                            fVar63 = *(float *)(unaff_x19 + 0x9a);
                            *(float *)(lVar40 + 0x48) = fStack0000000000000050 + (fVar47 - fVar46);
                            *(float *)(lVar40 + 0x4c) = fVar47;
                            param_2 = (ulong)(uint)(0.0 - fVar63);
                            *(float *)(lVar40 + 0x50) = 0.0 - fVar63;
                            *(float *)(lVar40 + 0x54) = fVar46;
                            unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
                            if ((int)unaff_w25 < 0x2d) {
                              if (unaff_w25 - 10 < 2) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering:
                                if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0)
                                {
                                  thunk_FUN_00d32864();
                                }
                                unaff_x28 = (long *)StringLiteral_302;
                                unaff_x26 = (undefined8 *)&stack0x00000880;
                                FUN_024d69d4();
                                lVar26 = unaff_x19[0x6c];
                                *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
                                iVar14 = (int)unaff_x19[0x94] + 1;
                                *(int *)(unaff_x19 + 0x94) = iVar14;
                                *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
                                if ((lVar26 != 0) && (*(long *)(lVar26 + 0x50) != 0)) {
                                  if (*(int *)(*(long *)(lVar26 + 0x50) + 0x18) <= iVar14) {
                                    FUN_024d6e60();
                                    lVar26 = unaff_x19[0x6c];
                                    if (lVar26 == 0) goto LAB_0249920c;
                                  }
                                  lVar26 = *(long *)(lVar26 + 0x38);
                                  if (lVar26 != 0) {
                                    if (*in_stack_00000148 < *(uint *)(lVar26 + 0x18)) {
                                      fVar63 = *(float *)(lVar26 + (int)*in_stack_00000148 *
                                                                   unaff_x27 + 0x154);
                                      if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                                        fVar58 = 0.0;
                                        if ((unaff_w25 == 0x2029) || (unaff_w25 == 10)) {
                                          fVar58 = *(float *)((long)unaff_x19 + 0x2c4);
                                        }
                                        uVar24 = 0;
                                        fVar58 = *(float *)(unaff_x19 + 0x9a) +
                                                 fVar63 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)
                                                          ) +
                                                 fStack0000000000000054 *
                                                 (fStack0000000000000048 +
                                                 *(float *)((long)unaff_x19 + 0x2b4)) +
                                                 in_stack_000000c8 *
                                                 (*(float *)(unaff_x19 + 0x56) + fVar58);
                                      }
                                      else {
                                        if ((unaff_w25 == 0x2029) || (fVar58 = 0.0, unaff_w25 == 10)
                                           ) {
                                          fVar58 = *(float *)((long)unaff_x19 + 0x2c4);
                                        }
                                        uVar24 = 1;
                                        fVar58 = *(float *)(unaff_x19 + 0x9a) +
                                                 *(float *)(unaff_x19 + 0x57) +
                                                 in_stack_000000c8 *
                                                 (*(float *)(unaff_x19 + 0x56) + fVar58);
                                      }
                                      *(float *)(unaff_x19 + 0x9a) = fVar58;
                                      *(undefined1 *)((long)unaff_x19 + 700) = uVar24;
                                      lVar26 = *unaff_x29;
                                      if (*(int *)(lVar26 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                        lVar26 = *unaff_x29;
                                      }
                                      uVar21 = *(undefined8 *)(*(long *)(lVar26 + 0xb8) + 0x15a8);
                                      *(float *)(unaff_x19 + 0x99) = fVar63;
                                      param_2 = NEON_rev64(uVar21,4);
                                      unaff_x19[0x98] = param_2;
                                      *(float *)(unaff_x19 + 199) =
                                           *(float *)(unaff_x19 + 0x80) + 0.0 +
                                           *(float *)((long)unaff_x19 + 0x404);
                                      FUN_024d69d4();
                                      FUN_024d69d4();
                                      *(int *)((long)unaff_x19 + 0x48c) =
                                           *(int *)((long)unaff_x19 + 0x48c) + 1;
                                      fStack0000000000000058 = 1.4013e-45;
                                      bStack000000000000005c = 1;
                                      goto LAB_02492630;
                                    }
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                  }
                                }
                                goto LAB_0249920c;
                              }
                              if (unaff_w25 == 3) {
                                if (unaff_x19[0x8e] == 0) goto LAB_0249920c;
                                in_stack_00001788 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
                                uVar36 = 3;
                              }
                            }
                            else if ((unaff_w25 - 0x2028 < 2) || (unaff_w25 == 0x2d))
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering;
                          }
LAB_0249572c:
                          uVar2 = *in_stack_00000148;
                          if (uVar31 <= uVar2)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                          if (*(char *)(lVar32 + (int)uVar2 * unaff_x27 + 0x194) != '\0') {
                            lVar32 = lVar32 + (int)uVar2 * unaff_x27;
                            uVar59 = *(ulong *)(lVar32 + 0x11c);
                            uVar20 = *(ulong *)(in_stack_00000070 + 0x230);
                            *(ulong *)(in_stack_00000070 + 0x230) =
                                 uVar59 ^ (uVar59 ^ uVar20) &
                                          CONCAT44(-(uint)((float)(uVar20 >> 0x20) <
                                                          (float)(uVar59 >> 0x20)),
                                                   -(uint)((float)uVar20 < (float)uVar59));
                            uVar20 = *(ulong *)(in_stack_00000070 + 0x238);
                            param_2 = *(ulong *)(lVar32 + 0x128);
                            *(ulong *)(in_stack_00000070 + 0x238) =
                                 param_2 ^ (param_2 ^ uVar20) &
                                           CONCAT44(-(uint)((float)(param_2 >> 0x20) <
                                                           (float)(uVar20 >> 0x20)),
                                                    -(uint)((float)param_2 < (float)uVar20));
                          }
                          if (((int)unaff_x19[0x5b] == 5) &&
                             ((0xd < uVar36 || ((1 << (ulong)(uVar36 & 0x1f) & 0x2c00U) == 0)))) {
                            lVar32 = *(long *)(lVar26 + 0x58);
                            if (lVar32 == 0) goto LAB_0249920c;
                            iVar14 = (int)unaff_x19[0x95] + 1;
                            if (*(int *)(lVar32 + 0x18) < iVar14) {
                              if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              FUN_01147c08((long *)(lVar26 + 0x58),iVar14,1,
                                           *(undefined8 *)
                                            Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__
                                          );
                              lVar26 = *in_stack_00000150;
                              if (lVar26 == 0) goto LAB_0249920c;
                            }
                            lVar32 = *(long *)(lVar26 + 0x58);
                            if (lVar32 == 0) goto LAB_0249920c;
                            uVar31 = *(uint *)(unaff_x19 + 0x95);
                            lVar40 = (long)(int)uVar31;
                            uVar2 = *(uint *)(lVar32 + 0x18);
                            if (uVar2 <= uVar31)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            lVar34 = lVar32 + lVar40 * 0x14;
                            fVar58 = *(float *)(lVar34 + 0x30);
                            param_2 = (ulong)(uint)fVar58;
                            *(undefined4 *)(lVar34 + 0x28) =
                                 *(undefined4 *)((long)unaff_x19 + 0x4ac);
                            fVar63 = *(float *)((long)unaff_x19 + 0x4bc);
                            if (fVar58 <= *(float *)((long)unaff_x19 + 0x4bc)) {
                              fVar63 = fVar58;
                            }
                            *(float *)(lVar34 + 0x30) = fVar63;
                            uVar36 = *(uint *)((long)unaff_x19 + 0x48c);
                            if (uVar36 == 0 && uVar31 == 0) {
                              *(uint *)(lVar32 + lVar40 * 0x14 + 0x20) = uVar36;
                            }
                            else {
                              uVar6 = uVar36 - 1;
                              if (0 < (int)uVar36) {
                                lVar26 = *(long *)(lVar26 + 0x38);
                                if (lVar26 == 0) goto LAB_0249920c;
                                if (*(uint *)(lVar26 + 0x18) <= uVar6)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                ;
                                if (uVar31 != *(uint *)(lVar26 + (long)(int)uVar6 * (long)iVar15 +
                                                       0x68)) {
                                  if (uVar31 - 1 < uVar2) {
                                    *(uint *)(lVar32 + 0x20 + (long)(int)(uVar31 - 1) * 0x14 + 4) =
                                         uVar6;
                                    *(uint *)(lVar32 + 0x20 + lVar40 * 0x14) = uVar36;
                                    goto LAB_024957b0;
                                  }
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                }
                              }
                              if ((float)uVar36 == in_stack_00000078._4_4_) {
                                *(float *)(lVar32 + lVar40 * 0x14 + 0x24) = in_stack_00000078._4_4_;
                              }
                            }
                          }
LAB_024957b0:
                          puVar9 = System_Threading_Mutex_TypeInfo;
                          if (((char)unaff_x19[0x5a] != '\0') ||
                             ((*(uint *)(unaff_x19 + 0x5b) < 7 &&
                              ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) != 0)))) {
                            if ((uVar13 == 0) &&
                               (((unaff_w25 != 0x2d && (unaff_w25 != 0x200b)) && (unaff_w25 != 0xad)
                                ))) {
                              if (*(char *)((long)unaff_x19 + 0x2d2) == '\0') {
LAB_02495868:
                                if (((((0x2bfd < unaff_w25 - 0xac01) && (0x1d < unaff_w25 - 0xa961))
                                     && (0xfd < unaff_w25 - 0x1101)) ||
                                    (uVar20 = FUN_024e95f0(0), (uVar20 & 1) != 0)) &&
                                   ((((0xed < unaff_w25 - 0xff01 && (0x1d < unaff_w25 - 0xfe31)) &&
                                     (0x717d < unaff_w25 - 0x2e81)) && (0x1fd < unaff_w25 - 0xf901))
                                   )) goto LAB_024958f0;
                                lVar26 = FUN_024e94b0(0);
                                if ((lVar26 == 0) || (*(long *)(lVar26 + 0x10) == 0))
                                goto LAB_0249920c;
                                uVar20 = FUN_0129aa60(*(long *)(lVar26 + 0x10),&stack0x00000880,
                                                      *(undefined8 *)
                                                                                                              
                                                  System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                                  );
                                if ((int)*in_stack_00000148 < (int)in_stack_00000078._4_4_) {
                                  lVar26 = FUN_024e94b0(0);
                                  if (((lVar26 != 0) && (*in_stack_00000150 != 0)) &&
                                     (lVar32 = *(long *)(*in_stack_00000150 + 0x38), lVar32 != 0)) {
                                    if (*in_stack_00000148 + 1 < *(uint *)(lVar32 + 0x18)) {
                                      if (*(long *)(lVar26 + 0x18) != 0) {
                                        in_stack_00000880 =
                                             (uint)*(ushort *)
                                                    (lVar32 + (long)(int)(*in_stack_00000148 + 1) *
                                                              (long)iVar15 + 0x20);
                                        uVar59 = FUN_0129aa60(*(long *)(lVar26 + 0x18),
                                                              &stack0x00000880,
                                                              *(undefined8 *)
                                                                                                                              
                                                  System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                                  );
                                        if ((uVar20 & 1) != 0) goto LAB_02495adc;
                                        if ((uVar59 & 1) == 0) goto LAB_02495bc4;
                                        if ((bStack000000000000005c & 1) != 0)
                                        goto joined_r0x02495af4;
                                        goto LAB_024959d4;
                                      }
                                      goto LAB_0249920c;
                                    }
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                  }
                                  goto LAB_0249920c;
                                }
                                in_stack_00000880 = unaff_w25;
                                if ((uVar20 & 1) == 0) {
LAB_02495bc4:
                                  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0
                                     ) {
                                    thunk_FUN_00d32864();
                                  }
                                  FUN_024d69d4();
                                  bStack000000000000005c = 0;
                                  goto LAB_02495b70;
                                }
LAB_02495adc:
                                if (uVar18 != uVar37 || ((bStack000000000000005c ^ 0xff) & 1) != 0)
                                goto LAB_02495b70;
joined_r0x02495af4:
                                if (uVar13 != 0) goto LAB_02495af8;
                              }
                              else {
LAB_024958f0:
                                if ((bStack000000000000005c & 1) == 0) {
LAB_024959d4:
                                  bStack000000000000005c = 0;
                                  goto LAB_02495b70;
                                }
                                if ((unaff_w25 == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) == 0)
                                goto joined_r0x02495af4;
LAB_02495af8:
                                if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0)
                                {
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
                              if (((unaff_w25 - 0x2007 < 0x29) &&
                                  ((1L << ((ulong)(unaff_w25 - 0x2007) & 0x3f) & 0x10000000401U) !=
                                   0)) || ((unaff_w25 == 0xa0 || (unaff_w25 == 0x2060))))
                              goto LAB_02495868;
                              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              FUN_024d69d4();
                              bStack000000000000005c = 0;
                              *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xe78) =
                                   0xffffffff;
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
LAB_02492630:
                          unaff_s12 = fVar68;
                          in_stack_00001788 = in_stack_00001788 + 1;
                          lVar26 = unaff_x19[0x8e];
                          if (lVar26 != 0) {
                            if ((int)in_stack_00001788 < (int)*(uint *)(lVar26 + 0x18)) {
                              if (*(uint *)(lVar26 + 0x18) <= in_stack_00001788)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              unaff_w25 = *(uint *)(lVar26 + (long)(int)in_stack_00001788 * 0xc +
                                                   0x20);
                              if (unaff_w25 == 0) goto LAB_02495f1c;
                              if (5 < in_stack_00000140) {
                                uVar21 = FUN_0176eb1c(&stack0x000017bc,0);
                                uVar19 = FUN_0176eb1c(&stack0x00001788,0);
                                uVar21 = FUN_0160073c(*(undefined8 *)
                                                                                                              
                                                  UnityEngine_Rendering_Universal_DebugValidationMode_var
                                                  ,uVar21,*(undefined8 *)
                                                                                                                      
                                                  Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                                                  ,uVar19,0);
                                if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                                  thunk_FUN_00d32864(*unaff_x28);
                                }
                                FUN_026610e4(uVar21,0);
                                in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
                              }
                              fVar68 = unaff_s12;
                              if ((*(char *)((long)unaff_x19 + 0x2fa) != '\0') &&
                                 (unaff_w25 == 0x3c)) goto code_r0x02492440;
                              if ((*in_stack_00000150 != 0) &&
                                 (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 != 0)) {
                                if (*in_stack_00000148 < *(uint *)(lVar26 + 0x18)) {
                                  lVar26 = lVar26 + (int)*in_stack_00000148 * unaff_x27;
                                  *(undefined4 *)((long)unaff_x19 + 0x63c) =
                                       *(undefined4 *)(lVar26 + 0x2c);
                                  *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar26 + 0x58)
                                  ;
                                  unaff_x19[0x1f] = *(long *)(lVar26 + 0x38);
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor
                                  ;
                                }
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                ;
                              }
                              goto LAB_0249920c;
                            }
LAB_02495f1c:
                            fVar68 = (float)param_2;
                            if (((char)unaff_x19[0x46] != '\0') &&
                               (fVar68 = DAT_02956ccc,
                               DAT_02956ccc <
                               *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47)))
                            {
                              fVar68 = *(float *)((long)unaff_x19 + 0x1dc);
                              fVar63 = *(float *)((long)unaff_x19 + 0x24c);
                              if ((fVar68 < fVar63) &&
                                 (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                                if (*(float *)((long)unaff_x19 + 0x2cc) <
                                    *(float *)(unaff_x19 + 0x59) / 100.0) {
                                  *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
                                }
                                fVar58 = (*(float *)((long)unaff_x19 + 0x234) - fVar68) * 0.5;
                                if (fVar58 <= DAT_028aa298) {
                                  fVar58 = DAT_028aa298;
                                }
                                *(float *)(unaff_x19 + 0x47) = fVar68;
                                fVar58 = (fVar68 + fVar58) * 20.0 + 0.5;
                                fVar68 = DAT_02958220;
                                if (fVar58 != INFINITY) {
                                  fVar68 = (float)(int)fVar58 / 20.0;
                                }
                                if (fVar63 <= fVar68) {
                                  fVar68 = fVar63;
                                }
                                goto LAB_02495fd8;
                              }
                            }
                            *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
                            if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
                              uVar21 = FUN_0176eb1c(in_stack_00000038,0);
                              uVar19 = FUN_017840ac(in_stack_00000040,0);
                              uVar21 = FUN_0160073c(*(undefined8 *)
                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__
                                                  ,uVar21,*(undefined8 *)
                                                                                                                      
                                                  Method_UnityEngine_GameObject_GetComponents<Component>__
                                                  ,uVar19,0);
                              if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                                thunk_FUN_00d32864(*unaff_x28);
                              }
                              FUN_02660dac(uVar21,0);
                            }
                            if ((*in_stack_00000148 == 0) ||
                               ((*in_stack_00000148 == 1 && (uVar61 == 3)))) {
                              (**(code **)(*unaff_x19 + 0x948))();
                              goto LAB_02496098;
                            }
                            lVar26 = *unaff_x29;
                            if (*(int *)(lVar26 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                              lVar26 = *unaff_x29;
                            }
                            puVar9 = 
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
                            lVar26 = **(long **)(lVar26 + 0xb8);
                            if (lVar26 == 0) goto LAB_0249920c;
                            if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            iVar14 = *(int *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38
                                             + 0x54) << 2;
                            if ((*in_stack_00000150 == 0) ||
                               (lVar26 = *(long *)(*in_stack_00000150 + 0x60), lVar26 == 0))
                            goto LAB_0249920c;
                            if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            if (*(int *)(lVar26 + 0x18) == 0)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            FUN_024e7d94(lVar26 + 0x20,0,0);
                            if (DAT_03774d76 == '\0') {
                              thunk_FUN_00d48444(
                                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                                );
                              DAT_03774d76 = '\x01';
                            }
                            puVar10 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
                            iVar15 = (int)unaff_x19[0x4d];
                            in_stack_000000c8 =
                                 **(float **)
                                   (*(long *)
                                     Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                   + 0xb8);
                            uStack00000000000000c0 =
                                 *(undefined8 *)
                                  (*(float **)
                                    (*(long *)
                                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                    + 0xb8) + 1);
                            lVar26 = unaff_x19[0xe2];
                            _in_stack_00000090 = uStack00000000000000c0;
                            fStack0000000000000098 = in_stack_000000c8;
                            if (iVar15 < 0x401) {
                              if (iVar15 == 0x100) {
                                if (lVar26 == 0) goto LAB_0249920c;
                                if (*(uint *)(lVar26 + 0x18) < 2)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                ;
                                uVar21 = *(undefined8 *)(lVar26 + 0x30);
                                if ((int)unaff_x19[0x5b] == 5) {
                                  if ((*in_stack_00000150 == 0) ||
                                     (lVar32 = *(long *)(*in_stack_00000150 + 0x58), lVar32 == 0))
                                  goto LAB_0249920c;
                                  if (*(uint *)(lVar32 + 0x18) <= uStack000000000000002c)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  fVar68 = *(float *)(lVar32 + (long)(int)uStack000000000000002c *
                                                               0x14 + 0x28);
                                }
                                else {
                                  fVar68 = *(float *)(unaff_x19 + 0x96);
                                }
                                fStack0000000000000098 =
                                     fStack0000000000000030 + 0.0 + *(float *)(lVar26 + 0x2c);
                                fVar68 = (0.0 - fVar68) - fStack0000000000000020;
                              }
                              else if (iVar15 == 0x200) {
                                if (lVar26 == 0) goto LAB_0249920c;
                                if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0)
                                   ) goto 
                                     UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                     ;
                                fStack0000000000000098 =
                                     (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
                                uVar21 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >>
                                                          0x20) +
                                                  (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >>
                                                         0x20)) * 0.5,
                                                  ((float)*(undefined8 *)(lVar26 + 0x24) +
                                                  (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5);
                                if ((int)unaff_x19[0x5b] == 5) {
                                  if ((*in_stack_00000150 == 0) ||
                                     (lVar26 = *(long *)(*in_stack_00000150 + 0x58), lVar26 == 0))
                                  goto LAB_0249920c;
                                  if (*(uint *)(lVar26 + 0x18) <= uStack000000000000002c)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  lVar26 = lVar26 + (long)(int)uStack000000000000002c * 0x14;
                                  fStack0000000000000098 =
                                       fStack0000000000000030 + 0.0 + fStack0000000000000098;
                                  fVar68 = ((fStack0000000000000020 + *(float *)(lVar26 + 0x28) +
                                            *(float *)(lVar26 + 0x30)) - fStack0000000000000024) *
                                           -0.5 + 0.0;
                                }
                                else {
                                  fStack0000000000000098 =
                                       fStack0000000000000030 + 0.0 + fStack0000000000000098;
                                  fVar68 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) +
                                            in_stack_000017b8) - fStack0000000000000024) * -0.5 +
                                           0.0;
                                }
                              }
                              else {
                                if (iVar15 != 0x400) goto LAB_024965d0;
                                if (lVar26 == 0) goto LAB_0249920c;
                                if (*(int *)(lVar26 + 0x18) == 0)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                ;
                                uVar21 = *(undefined8 *)(lVar26 + 0x24);
                                if ((int)unaff_x19[0x5b] == 5) {
                                  if ((*in_stack_00000150 == 0) ||
                                     (lVar32 = *(long *)(*in_stack_00000150 + 0x58), lVar32 == 0))
                                  goto LAB_0249920c;
                                  if (*(uint *)(lVar32 + 0x18) <= uStack000000000000002c)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  in_stack_000017b8 =
                                       *(float *)(lVar32 + (long)(int)uStack000000000000002c * 0x14
                                                 + 0x30);
                                }
                                fStack0000000000000098 =
                                     fStack0000000000000030 + 0.0 + *(float *)(lVar26 + 0x20);
                                fVar68 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
                              }
                              _in_stack_00000090 =
                                   CONCAT44((float)((ulong)uVar21 >> 0x20) + 0.0,
                                            (float)uVar21 + fVar68);
                            }
                            else if (iVar15 == 0x800) {
                              if (lVar26 == 0) goto LAB_0249920c;
                              if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0))
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              fVar68 = ((float)*(undefined8 *)(lVar26 + 0x24) +
                                       (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5;
                              fStack0000000000000098 =
                                   fStack0000000000000030 + 0.0 +
                                   (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
                              _in_stack_00000090 =
                                   CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20)
                                            + (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)
                                            ) * 0.5 + 0.0,fVar68 + 0.0);
                            }
                            else {
                              if (iVar15 == 0x1000) {
                                if (lVar26 == 0) goto LAB_0249920c;
                                if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0)
                                   ) goto 
                                     UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                     ;
                                fVar68 = (float)*(undefined8 *)(lVar26 + 0x24) +
                                         (float)*(undefined8 *)(lVar26 + 0x30);
                                fVar63 = (float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20);
                                fStack0000000000000020 =
                                     fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) +
                                     *(float *)(unaff_x19 + 0x9b);
                                fStack0000000000000098 =
                                     fStack0000000000000030 + 0.0 +
                                     (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
                              }
                              else {
                                if (iVar15 != 0x2000) goto LAB_024965d0;
                                if (lVar26 == 0) goto LAB_0249920c;
                                if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0)
                                   ) goto 
                                     UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                     ;
                                fVar68 = (float)*(undefined8 *)(lVar26 + 0x24) +
                                         (float)*(undefined8 *)(lVar26 + 0x30);
                                fVar63 = (float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20);
                                fStack0000000000000020 =
                                     *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
                                fStack0000000000000098 =
                                     fStack0000000000000030 + 0.0 +
                                     (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
                              }
                              fVar68 = fVar68 * 0.5;
                              _in_stack_00000090 =
                                   CONCAT44(fVar63 * 0.5 + 0.0,
                                            fVar68 + (0.0 - (fStack0000000000000020 -
                                                            fStack0000000000000024) * 0.5));
                            }
LAB_024965d0:
                            if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
                            uVar21 = FUN_0285a188(unaff_x19[0xe4],0);
                            if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                              thunk_FUN_00d32864(*(long *)puVar9);
                            }
                            uVar20 = FUN_0268b4e0(uVar21,0,0);
                            lVar26 = FUN_024c933c();
                            if (lVar26 == 0) goto LAB_0249920c;
                            FUN_026a125c(lVar26,0);
                            *(float *)(unaff_x19 + 0xe1) = fVar68;
                            if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
                            iVar15 = FUN_02859798(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
                            fVar63 = (float)FUN_028598f0(unaff_x19[0xe4],0);
                            __x = DAT_028aa048;
                            dVar57 = modf(DAT_028aa048,(double *)&stack0x00000880);
                            if (dVar57 == 0.5) {
                              fVar58 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
                              if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U)
                                  != 0) {
                                fVar58 = fVar58 + 1.0;
                              }
                            }
                            else {
                              fVar58 = 255.0;
                            }
                            dVar57 = modf(__x,(double *)&stack0x00000880);
                            if (dVar57 == 0.5) {
                              fVar46 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
                              if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U)
                                  != 0) {
                                fVar46 = fVar46 + 1.0;
                              }
                            }
                            else {
                              fVar46 = 255.0;
                            }
                            dVar57 = modf(__x,(double *)&stack0x00000880);
                            if (dVar57 == 0.5) {
                              fVar48 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
                              if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U)
                                  != 0) {
                                fVar48 = fVar48 + 1.0;
                              }
                            }
                            else {
                              fVar48 = 255.0;
                            }
                            dVar57 = modf(__x,(double *)&stack0x00000880);
                            if (dVar57 == 0.5) {
                              fVar47 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
                              if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U)
                                  != 0) {
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
                            if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            if (DAT_037825d3 == '\0') {
                              thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
                              DAT_037825d3 = '\x01';
                            }
                            lVar26 = *(long *)puVar10;
                            if (*(int *)(lVar26 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                              lVar26 = *(long *)puVar10;
                            }
                            puVar27 = *(undefined4 **)(lVar26 + 0xb8);
                            uVar59 = (ulong)(uint)puVar27[1];
                            uVar60 = (ulong)(uint)puVar27[2];
                            uVar62 = (ulong)(uint)puVar27[3];
                            UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                                      (*puVar27,uVar59,uVar60,uVar62,&stack0x00001790,0x4000ffff,0);
                            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            lVar26 = *in_stack_00000150;
                            if (lVar26 == 0) goto LAB_0249920c;
                            uVar13 = *in_stack_00000148;
                            if ((int)uVar13 < 1) {
                              iStack00000000000000ac = 0;
                              iVar14 = 0;
                              goto LAB_02498c58;
                            }
                            lVar26 = *(long *)(lVar26 + 0x38);
                            fVar68 = ABS(fVar68);
                            fVar49 = 1.0;
                            if ((uVar20 & 1) == 0) {
                              fVar49 = fVar68;
                            }
                            if (lVar26 == 0) goto LAB_0249920c;
                            bVar8 = false;
                            bVar11 = false;
                            bVar7 = false;
                            bVar12 = false;
                            uStack0000000000000060 =
                                 (int)fVar58 & 0xffU | ((int)fVar46 & 0xffU) << 8 |
                                 ((int)fVar48 & 0xffU) << 0x10 | (int)fVar47 << 0x18;
                            fStack00000000000000d0 =
                                 *(float *)(*(long *)(*unaff_x29 + 0xb8) + 0x15a8);
                            fStack00000000000000cc = 0.0;
                            fStack0000000000000058 = fStack00000000000000b0;
                            _bStack000000000000005c = 0.0;
                            fStack0000000000000034 = 0.0;
                            fStack0000000000000088 = 0.0;
                            fStack0000000000000030 = 0.0;
                            uVar18 = 0;
                            iVar45 = 0;
                            lVar32 = 0x2e0;
                            fVar46 = 0.0;
                            fVar58 = 0.0;
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
                            uVar61 = 0;
                            uVar37 = 1;
                            goto LAB_02496a50;
                          }
                        }
                        goto LAB_0249920c;
                      }
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    }
                    goto LAB_0249920c;
                  }
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                }
                goto LAB_0249920c;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            }
          }
        }
      }
    }
  }
  goto LAB_0249920c;
code_r0x02492440:
  *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
  uVar20 = FUN_024d0688();
  if (((uVar20 & 1) != 0) &&
     (in_stack_00001788 = in_stack_0000176c, uVar61 = unaff_w25,
     *(int *)((long)unaff_x19 + 0x63c) == 0)) goto LAB_02492630;
UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor:
  if ((unaff_x19[0x6c] == 0) || (lVar26 = *(long *)(unaff_x19[0x6c] + 0x38), lVar26 == 0))
  goto LAB_0249920c;
  uVar13 = *in_stack_00000148;
  if (*(uint *)(lVar26 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar32 = (long)(int)uVar13;
  unaff_w21 = (uint)*(byte *)(lVar26 + lVar32 * unaff_x27 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
  unaff_w24 = (undefined4)unaff_x19[0x23];
  if ((uint)in_stack_000017a8 == uVar13) {
    unaff_w25 = (uint)((ulong)in_stack_000017a8 >> 0x20);
    unaff_w20 = 1;
    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
    if (unaff_w25 == 0x2026) {
      lVar40 = unaff_x19[0xc9];
      lVar26 = lVar26 + lVar32 * unaff_x27;
      *(undefined4 *)(lVar26 + 0x2c) = 0;
      *(long *)(lVar26 + 0x30) = lVar40;
      *(long *)(lVar26 + 0x38) = unaff_x19[0xca];
      *(long *)(lVar26 + 0x50) = unaff_x19[0xcb];
      *(int *)(lVar26 + 0x58) = (int)unaff_x19[0xcc];
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      in_stack_000017a8 = CONCAT44(3,uVar13 + 1);
    }
    else if (unaff_w25 == 3) {
      if ((*in_stack_00000138 == 0) || (lVar40 = FUN_024b11ac(*in_stack_00000138,0), lVar40 == 0))
      goto LAB_0249920c;
      in_stack_00000bf8 = 3;
      FUN_01299bc0(lVar40,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
      if (*(uint *)(lVar26 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      unaff_w20 = 1;
      *(ulong *)(lVar26 + lVar32 * unaff_x27 + 0x30) = CONCAT44(in_stack_00000884,in_stack_00000880)
      ;
      uVar13 = *(uint *)((long)unaff_x19 + 0x48c);
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
    }
  }
  else {
    unaff_w20 = 0;
  }
  if (((int)uVar13 < *(int *)((long)unaff_x19 + 0x31c)) && (unaff_w25 != 3)) {
    if ((*in_stack_00000150 == 0) || (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar26 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar26 = lVar26 + (long)(int)uVar13 * (long)iVar15;
    *(undefined1 *)(lVar26 + 0x194) = 0;
    *(undefined2 *)(lVar26 + 0x20) = 0x200b;
    *(undefined4 *)(lVar26 + 100) = 0;
    *in_stack_00000148 = uVar13 + 1;
    uVar61 = unaff_w25;
    goto LAB_02492630;
  }
  iVar14 = *(int *)((long)unaff_x19 + 0x63c);
  if (iVar14 == 0) {
    uVar13 = *(uint *)((long)unaff_x19 + 0x254);
    fVar63 = unaff_s12;
    if ((uVar13 >> 4 & 1) == 0) {
      if ((uVar13 >> 3 & 1) == 0) {
        in_stack_000017bc = unaff_w25;
        if ((uVar13 >> 5 & 1) != 0) goto code_r0x02492704;
        goto LAB_02492a18;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar20 = FUN_016f9218(unaff_w25,0);
      if ((uVar20 & 1) == 0) goto LAB_02492a18;
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_016f9724(unaff_w25,0);
    }
    else {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar20 = FUN_016f92d4(unaff_w25,0);
      if ((uVar20 & 1) == 0) goto LAB_02492a18;
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_016f95a8(unaff_w25,0);
    }
    unaff_w25 = uVar13 & 0xffff;
    goto LAB_02492a18;
  }
                    /* catch() { ... } // from try @ 02492150 with catch @ 02492658 */
  if (iVar14 == 0) goto LAB_02492a20;
LAB_0249265c:
  fStack00000000000000f4 = unaff_s12;
  if (iVar14 == 1) {
                    /* try { // try from 02492670 to 0259267b has its CatchHandler @ 02491e14 */
    if ((*in_stack_00000150 == 0) || (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0))
    goto LAB_0249920c;
                    /* try { // try from 0249267c to 02592683 has its CatchHandler @ 02492684 */
                    /* catch() { ... } // from try @ 02492644 with catch @ 02492684
                       catch() { ... } // from try @ 0249267c with catch @ 02492684 */
                    /* try { // try from 02492688 to 0259275b has its CatchHandler @ 02492688
                       catch() { ... } // from try @ 02492688 with catch @ 02492688
                       catch() { ... } // from try @ 024927c0 with catch @ 02492688
                       catch() { ... } // from try @ 02492818 with catch @ 02492688
                       catch() { ... } // from try @ 02492850 with catch @ 02492688
                       catch() { ... } // from try @ 02492880 with catch @ 02492688 */
    if (*(uint *)(lVar26 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar26 = lVar26 + (int)*in_stack_00000148 * unaff_x27;
    lVar32 = *(long *)(lVar26 + 0x40);
    unaff_x19[0xd2] = lVar32;
    *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar26 + 0x48);
    if ((lVar32 == 0) || (lVar26 = FUN_024ebfa0(lVar32,0), lVar26 == 0)) goto LAB_0249920c;
    FUN_0132138c(lVar26,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                 *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
    lVar32 = CONCAT44(in_stack_00000884,in_stack_00000880);
    uVar61 = unaff_w25;
    if (lVar32 != 0) {
      if (unaff_w25 == 0x3c) {
        unaff_w25 = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
      }
      else {
        lVar26 = *unaff_x29;
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar26 = *unaff_x29;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1b4) = *(undefined4 *)(*(long *)(lVar26 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar63 = *(float *)(unaff_x19 + 0x3c);
      memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
      iVar14 = FUN_026fd110(&stack0x00001700,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      memmove(&stack0x00001700,(void *)(*in_stack_00000138 + 0x50),0x60);
      fVar46 = (float)FUN_026fd120(&stack0x00001700,0);
      fVar58 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar58 = fVar68;
      }
      if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
      fVar58 = (fVar63 / (float)iVar14) * fVar46 * fVar58;
      iVar14 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
      fVar63 = *(float *)(unaff_x19 + 0x3c);
      if (iVar14 < 1) {
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        iVar14 = FUN_026fd110(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar46 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
        fVar48 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar48 = fVar68;
        }
        if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
        fVar68 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
        if (*(long *)(lVar32 + 0x20) == 0) goto LAB_0249920c;
        FUN_026fd62c(&stack0x00000880,*(long *)(lVar32 + 0x20),0);
        unaff_x26[0x1cd] = unaff_x26[1];
        unaff_x26[0x1cc] = *unaff_x26;
        fVar49 = (float)FUN_026fd45c(&stack0x000016e0,0);
        if (*(long *)(lVar32 + 0x20) == 0) goto LAB_0249920c;
        fVar70 = *(float *)(lVar32 + 0x2c);
        fVar50 = (float)FUN_026fd668(*(long *)(lVar32 + 0x20),0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar47 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar72 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar51 = *(float *)((long)unaff_x19 + 0x3fc);
        fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
        if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
        fStack0000000000000134 = fVar58 * fVar72 * fVar51 * fStack0000000000000134;
        fVar48 = (fVar63 / (float)iVar14) * fVar46 * fVar48;
        fVar49 = fVar48 * (fVar68 / fVar49) * fVar70 * fVar50;
        fVar48 = fVar48 / fVar49;
        fVar47 = fVar48 * fVar47;
        fVar68 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
        fVar48 = fVar48 * fVar68;
      }
      else {
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        iVar14 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar68 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (*(long *)(lVar32 + 0x20) == 0) goto LAB_0249920c;
        fVar48 = *(float *)(lVar32 + 0x2c);
        fVar46 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar46 = 1.0;
        }
        fVar49 = (float)FUN_026fd668(*(long *)(lVar32 + 0x20),0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar47 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar70 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar50 = *(float *)((long)unaff_x19 + 0x3fc);
        fStack0000000000000134 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fStack0000000000000134 = fVar58 * fVar70 * fVar50 * fStack0000000000000134;
        fVar49 = (fVar63 / (float)iVar14) * fVar68 * fVar46 * fVar48 * fVar49;
        fVar48 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
      }
      lVar26 = unaff_x19[0x6c];
      unaff_x19[200] = lVar32;
      if ((lVar26 == 0) || (lVar32 = *(long *)(lVar26 + 0x38), lVar32 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar32 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar32 = lVar32 + (int)*in_stack_00000148 * unaff_x27;
      *(undefined4 *)(lVar32 + 0x2c) = 1;
      *(float *)(lVar32 + 0x160) = fVar49;
      in_stack_00000128 = 0.0;
      *(long *)(lVar32 + 0x40) = unaff_x19[0xd2];
      *(long *)(lVar32 + 0x38) = unaff_x19[0x1f];
      *(int *)(lVar32 + 0x58) = (int)unaff_x19[0x23];
      *(undefined4 *)(unaff_x19 + 0x23) = unaff_w24;
      goto LAB_02492e14;
    }
    goto LAB_02492630;
  }
                    /* try { // try from 0249276c to 02592773 has its CatchHandler @ 0249282c */
  fVar63 = 0.0;
  lVar26 = *in_stack_00000150;
                    /* try { // try from 02492780 to 0259278b has its CatchHandler @ 02492830 */
  if (unaff_w25 != 3 && unaff_w25 != 0xad) {
    fVar63 = (float)unaff_d9;
  }
  fStack0000000000000134 = 0.0;
  if (lVar26 == 0) goto LAB_0249920c;
  fVar47 = 0.0;
  fVar48 = 0.0;
  goto LAB_02492e2c;
LAB_02496a50:
  do {
    uVar13 = uVar37 - 1;
    if (*(uint *)(lVar26 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*in_stack_00000150 == 0) || (lVar40 = *(long *)(*in_stack_00000150 + 0x50), lVar40 == 0))
    goto LAB_0249920c;
    lVar44 = (long)(int)uVar13;
    lVar34 = lVar26 + lVar44 * 0x178;
    uVar2 = *(uint *)(lVar34 + 100);
    if (*(uint *)(lVar40 + 0x18) <= uVar2)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar38 = *(long *)(lVar34 + 0x38);
    uVar4 = *(ushort *)(lVar34 + 0x20);
    lVar35 = (long)(int)uVar2;
    lVar40 = lVar40 + lVar35 * 0x5c;
    uVar36 = *(uint *)(lVar40 + 0x3c);
    iVar16 = *(int *)(lVar40 + 0x28);
    iVar17 = *(int *)(lVar40 + 0x2c);
    uVar6 = *(uint *)(lVar40 + 0x40);
    lVar34 = (long)(int)uVar6;
    uVar31 = *(uint *)(lVar40 + 0x68);
    fVar64 = *(float *)(lVar40 + 0x5c);
    fVar74 = *(float *)(lVar40 + 0x60);
    iVar3 = *(int *)(lVar40 + 0x20);
    fVar70 = *(float *)(lVar40 + 0x4c);
    fVar72 = *(float *)(lVar40 + 0x54);
    fVar48 = *(float *)(lVar40 + 0x58);
    fVar52 = *(float *)(lVar40 + 0x6c);
    fVar51 = *(float *)(lVar40 + 0x70);
    fVar47 = *(float *)(lVar40 + 0x74);
    fVar50 = *(float *)(lVar40 + 0x78);
    fVar65 = fVar64 + fVar74;
    uVar42 = (uint)uVar4;
    if ((int)uVar31 < 9) {
      switch(uVar31) {
      case 1:
        if ((char)unaff_x19[0x1d] == '\0') {
          in_stack_000000c8 = fVar74 + 0.0;
        }
        else {
          in_stack_000000c8 = 0.0 - fVar48;
        }
        break;
      case 2:
LAB_02496c1c:
        in_stack_000000c8 = (fVar74 + fVar64 * 0.5) - fVar48 * 0.5;
        break;
      default:
        goto switchD_02496b58_caseD_3;
      case 4:
        in_stack_000000c8 = fVar65 - fVar48;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c8 = fVar65;
        }
        break;
      case 8:
        goto switchD_02496b58_caseD_8;
      }
LAB_02496c90:
      uStack00000000000000c0 = 0;
    }
    else if (uVar31 == 0x10) {
switchD_02496b58_caseD_8:
      if (uVar4 < 0xad) {
        if ((uVar42 != 3) && (uVar42 != 10)) goto LAB_02496bac;
      }
      else if ((uVar42 != 0xad) && ((uVar42 != 0x200b && (uVar42 != 0x2060)))) {
LAB_02496bac:
        if (*(uint *)(lVar26 + 0x18) <= uVar36)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar5 = *(undefined2 *)(lVar26 + (long)(int)uVar36 * 0x178 + 0x20);
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
        if ((fVar48 <= fVar64) && (!bVar1 && (uVar31 >> 4 & 1) == 0)) {
          in_stack_000000c8 = fVar74;
          if ((char)unaff_x19[0x1d] != '\0') {
            in_stack_000000c8 = fVar65;
          }
          goto LAB_02496c90;
        }
        if (((uVar37 == 1) || (uVar2 != uVar61)) || (uVar13 == *(uint *)((long)unaff_x19 + 0x31c)))
        {
          in_stack_000000c8 = fVar74;
          if ((char)unaff_x19[0x1d] != '\0') {
            in_stack_000000c8 = fVar65;
          }
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          fStack0000000000000020 = (float)FUN_016fa418(uVar4,0);
          uStack00000000000000c0 = 0;
        }
        else {
          cVar25 = (char)unaff_x19[0x1d];
          fVar65 = -fVar48;
          if (cVar25 != '\0') {
            fVar65 = fVar48;
          }
          if (*(uint *)(lVar26 + 0x18) <= uVar36)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar48 = 1.0;
          iVar17 = (int)*(char *)(lVar26 + (long)(int)uVar36 * 0x178 + 0x194) +
                   (-iVar3 - ((uint)fStack0000000000000020 & 1)) + iVar17 + -1;
          if (0 < iVar17) {
            fVar48 = *(float *)((long)unaff_x19 + 0x2d4);
          }
          if (iVar17 < 1) {
            iVar17 = 1;
          }
          if (uVar42 == 9) {
LAB_02498bb8:
            fVar48 = 1.0 - fVar48;
          }
          else {
            if (uVar42 != 0xa0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar20 = FUN_016fa418(uVar4,0);
              cVar25 = (char)unaff_x19[0x1d];
              if ((uVar20 & 1) != 0) goto LAB_02498bb8;
            }
            iVar17 = (iVar3 - (~(uint)fStack0000000000000020 & 1)) + iVar16;
          }
          fVar48 = ((fVar64 + fVar65) * fVar48) / (float)iVar17;
          if (cVar25 == '\0') {
            in_stack_000000c8 = in_stack_000000c8 + fVar48;
            uStack00000000000000c0 =
                 CONCAT44((float)((ulong)uStack00000000000000c0 >> 0x20) + 0.0,
                          (float)uStack00000000000000c0 + 0.0);
          }
          else {
            in_stack_000000c8 = in_stack_000000c8 - fVar48;
          }
        }
      }
    }
    else if (uVar31 == 0x20) {
      fVar48 = fVar52 + fVar47;
      goto LAB_02496c1c;
    }
switchD_02496b58_caseD_3:
    uVar31 = (uint)*(undefined8 *)(lVar26 + 0x18);
    if (uVar31 <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar40 = lVar26 + lVar44 * 0x178;
    fVar65 = fStack0000000000000098 + in_stack_000000c8;
    fVar48 = (float)_in_stack_00000090 + (float)uStack00000000000000c0;
    fVar64 = (float)((ulong)_in_stack_00000090 >> 0x20) +
             (float)((ulong)uStack00000000000000c0 >> 0x20);
    if (*(char *)(lVar40 + 0x194) == '\0') goto LAB_02497688;
    iVar16 = *(int *)(lVar26 + lVar44 * 0x178 + 0x2c);
    if (iVar16 != 0) goto LAB_02497374;
    fVar46 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar2,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
    case 0:
      lVar28 = lVar26 + lVar44 * 0x178;
      *(undefined4 *)(lVar28 + 0x84) = 0;
      *(undefined4 *)(lVar28 + 0xac) = 0;
      *(undefined4 *)(lVar28 + 0xd4) = 0x3f800000;
      fVar46 = 1.0;
      break;
    case 1:
      fVar50 = *(float *)(lVar26 + lVar44 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
        lVar28 = lVar26 + lVar44 * 0x178;
        fVar47 = (in_stack_000000c8 + fVar50) - *(float *)(in_stack_00000070 + 0x230);
        fVar50 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
        goto LAB_02496df8;
      }
      lVar28 = lVar26 + lVar44 * 0x178;
      fVar47 = fVar47 - fVar52;
      *(float *)(lVar28 + 0x84) = fVar46 + (fVar50 - fVar52) / fVar47;
      *(float *)(lVar28 + 0xac) = fVar46 + (*(float *)(lVar28 + 0x98) - fVar52) / fVar47;
      *(float *)(lVar28 + 0xd4) = fVar46 + (*(float *)(lVar28 + 0xc0) - fVar52) / fVar47;
      fVar46 = fVar46 + (*(float *)(lVar28 + 0xe8) - fVar52) / fVar47;
      break;
    case 2:
      lVar28 = lVar26 + lVar44 * 0x178;
      fVar50 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      fVar47 = (in_stack_000000c8 + *(float *)(lVar28 + 0x70)) -
               *(float *)(in_stack_00000070 + 0x230);
LAB_02496df8:
      *(float *)(lVar28 + 0x84) = fVar46 + fVar47 / fVar50;
      *(float *)(lVar28 + 0xac) =
           fVar46 + ((in_stack_000000c8 + *(float *)(lVar28 + 0x98)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      *(float *)(lVar28 + 0xd4) =
           fVar46 + ((in_stack_000000c8 + *(float *)(lVar28 + 0xc0)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      fVar46 = fVar46 + ((in_stack_000000c8 + *(float *)(lVar28 + 0xe8)) -
                        *(float *)(in_stack_00000070 + 0x230)) /
                        (*(float *)(in_stack_00000070 + 0x238) -
                        *(float *)(in_stack_00000070 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x61]) {
      case 0:
        lVar28 = lVar26 + lVar44 * 0x178;
        *(undefined4 *)(lVar28 + 0x88) = 0;
        *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar28 + 0xd8) = 0;
        *(undefined4 *)(lVar28 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar28 = lVar26 + lVar44 * 0x178;
        fVar50 = fVar50 - fVar51;
        fVar47 = fVar46 + (*(float *)(lVar28 + 0x74) - fVar51) / fVar50;
        fVar50 = fVar46 + (*(float *)(lVar28 + 0x9c) - fVar51) / fVar50;
        *(float *)(lVar28 + 0x88) = fVar47;
        *(float *)(lVar28 + 0xb0) = fVar50;
        *(float *)(lVar28 + 0xd8) = fVar47;
        *(float *)(lVar28 + 0x100) = fVar50;
        break;
      case 2:
        lVar28 = lVar26 + lVar44 * 0x178;
        fVar47 = fVar46 + (*(float *)(lVar28 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                          (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
        *(float *)(lVar28 + 0x88) = fVar47;
        fVar50 = *(float *)(unaff_x19 + 0x9b);
        fVar51 = *(float *)(unaff_x19 + 0x9c);
        *(float *)(lVar28 + 0xd8) = fVar47;
        fVar47 = fVar46 + (*(float *)(lVar28 + 0x9c) - fVar50) / (fVar51 - fVar50);
        *(float *)(lVar28 + 0xb0) = fVar47;
        *(float *)(lVar28 + 0x100) = fVar47;
        break;
      case 3:
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
        uVar31 = (uint)*(undefined8 *)(lVar26 + 0x18);
      }
      if (uVar31 <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar26 + lVar44 * 0x178;
      fVar47 = *(float *)(lVar28 + 0x15c);
      fVar50 = (1.0 - (*(float *)(lVar28 + 0x88) + *(float *)(lVar28 + 0xb0)) * fVar47) * 0.5;
      fVar51 = fVar46 + *(float *)(lVar28 + 0x88) * fVar47 + fVar50;
      fVar46 = fVar46 + fVar50 + *(float *)(lVar28 + 0xb0) * fVar47;
      *(float *)(lVar28 + 0x84) = fVar51;
      *(float *)(lVar28 + 0xac) = fVar51;
      *(float *)(lVar28 + 0xd4) = fVar46;
      break;
    default:
      goto switchD_02496d4c_default;
    }
    *(float *)(lVar26 + lVar44 * 0x178 + 0xfc) = fVar46;
switchD_02496d4c_default:
    switch((int)unaff_x19[0x61]) {
    case 0:
      if (uVar31 <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar26 + lVar44 * 0x178;
      *(undefined4 *)(lVar28 + 0x88) = 0;
      *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0x100) = 0;
      break;
    case 1:
      if (uVar13 < uVar31) {
        lVar28 = lVar26 + lVar44 * 0x178;
        fVar70 = fVar70 - fVar72;
        fVar46 = (*(float *)(lVar28 + 0x74) - fVar72) / fVar70;
        fVar70 = (*(float *)(lVar28 + 0x9c) - fVar72) / fVar70;
        *(float *)(lVar28 + 0x88) = fVar46;
        goto LAB_02497174;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    case 2:
      if (uVar31 <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar26 + lVar44 * 0x178;
      fVar46 = (*(float *)(lVar28 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar28 + 0x88) = fVar46;
      fVar70 = (*(float *)(lVar28 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_02497174:
      *(float *)(lVar28 + 0xb0) = fVar70;
      *(float *)(lVar28 + 0xd8) = fVar70;
      *(float *)(lVar28 + 0x100) = fVar46;
      break;
    case 3:
      if (uVar31 <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar26 + lVar44 * 0x178;
      fVar70 = *(float *)(lVar28 + 0x15c);
      fVar47 = (1.0 - (*(float *)(lVar28 + 0x84) + *(float *)(lVar28 + 0xd4)) / fVar70) * 0.5;
      fVar46 = *(float *)(lVar28 + 0x84) / fVar70 + fVar47;
      fVar47 = fVar47 + *(float *)(lVar28 + 0xd4) / fVar70;
      *(float *)(lVar28 + 0x88) = fVar46;
      *(float *)(lVar28 + 0xb0) = fVar47;
      *(float *)(lVar28 + 0x100) = fVar46;
      *(float *)(lVar28 + 0xd8) = fVar47;
    }
    if (uVar31 <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar28 = lVar26 + lVar44 * 0x178;
    fVar46 = *(float *)(lVar28 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
    if ((*(char *)(lVar28 + 0x5c) == '\0') && ((*(byte *)(lVar26 + lVar44 * 0x178 + 400) & 1) != 0))
    {
      fVar46 = -fVar46;
    }
    fVar47 = fVar68;
    if (((iVar15 == 2) || (fVar47 = fVar49, iVar15 == 1)) || (fVar47 = fVar68 / fVar63, iVar15 == 0)
       ) {
      fVar46 = fVar47 * fVar46;
    }
    lVar28 = lVar26 + lVar44 * 0x178;
    fVar70 = *(float *)(lVar28 + 0x88);
    fVar50 = *(float *)(lVar28 + 0x84);
    fVar47 = -2.1474836e+09;
    if (fVar50 != INFINITY) {
      fVar47 = (float)(int)fVar50;
    }
    fVar51 = *(float *)(lVar28 + 0xd4);
    fVar52 = *(float *)(lVar28 + 0xd8);
    fVar72 = -2.1474836e+09;
    if (fVar70 != INFINITY) {
      fVar72 = (float)(int)fVar70;
    }
    uVar71 = FUN_024e0374(fVar50 - fVar47,fVar70 - fVar72);
    *(undefined4 *)(lVar28 + 0x84) = uVar71;
    if (*(uint *)(lVar26 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar52 = fVar52 - fVar72;
    *(float *)(lVar28 + 0x88) = fVar46;
    uVar71 = FUN_024e0374(fVar50 - fVar47,fVar52);
    *(undefined4 *)(lVar26 + lVar44 * 0x178 + 0xac) = uVar71;
    if (*(uint *)(lVar26 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar51 = fVar51 - fVar47;
    *(float *)(lVar26 + lVar44 * 0x178 + 0xb0) = fVar46;
    fVar47 = (float)FUN_024e0374(fVar51,fVar52);
    *(float *)(lVar28 + 0xd4) = fVar47;
    if (*(uint *)(lVar26 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar28 + 0xd8) = fVar46;
    uVar71 = FUN_024e0374(fVar51,fVar70 - fVar72);
    *(undefined4 *)(lVar26 + lVar44 * 0x178 + 0xfc) = uVar71;
    uVar31 = (uint)*(undefined8 *)(lVar26 + 0x18);
    if (uVar31 <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar26 + lVar44 * 0x178 + 0x100) = fVar46;
LAB_02497374:
    if (((int)unaff_x19[100] <= (int)uVar13) ||
       (*(int *)((long)unaff_x19 + 0x324) <= iStack00000000000000ac)) goto LAB_02497490;
    if (((int)uVar2 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar31 <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar40 = lVar26 + lVar44 * 0x178;
      *(ulong *)(lVar40 + 0x70) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar40 + 0x70) >> 0x20),
                    fVar65 + (float)*(undefined8 *)(lVar40 + 0x70));
      *(float *)(lVar40 + 0x78) = fVar64 + *(float *)(lVar40 + 0x78);
      if (*(uint *)(lVar26 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar40 = lVar26 + lVar44 * 0x178;
      *(ulong *)(lVar40 + 0x98) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar40 + 0x98) >> 0x20),
                    fVar65 + (float)*(undefined8 *)(lVar40 + 0x98));
      *(float *)(lVar40 + 0xa0) = fVar64 + *(float *)(lVar40 + 0xa0);
      if (*(uint *)(lVar26 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar40 = lVar26 + lVar44 * 0x178;
      *(ulong *)(lVar40 + 0xc0) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar40 + 0xc0) >> 0x20),
                    fVar65 + (float)*(undefined8 *)(lVar40 + 0xc0));
      *(float *)(lVar40 + 200) = fVar64 + *(float *)(lVar40 + 200);
      if (*(uint *)(lVar26 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar40 = lVar26 + lVar44 * 0x178;
      *(ulong *)(lVar40 + 0xe8) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar40 + 0xe8) >> 0x20),
                    fVar65 + (float)*(undefined8 *)(lVar40 + 0xe8));
      *(float *)(lVar40 + 0xf0) = fVar64 + *(float *)(lVar40 + 0xf0);
      if (iVar16 == 0) goto LAB_02497668;
LAB_02497598:
      if (iVar16 == 1) {
        pcVar30 = *(code **)(*unaff_x19 + 0x8f8);
        goto LAB_02497674;
      }
    }
    else {
      if (((int)uVar2 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
        if (uVar31 <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(uint *)(lVar26 + lVar44 * 0x178 + 0x68) != uStack000000000000002c) goto LAB_02497490;
        lVar40 = lVar26 + lVar44 * 0x178;
        *(ulong *)(lVar40 + 0x70) =
             CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar40 + 0x70) >> 0x20),
                      fVar65 + (float)*(undefined8 *)(lVar40 + 0x70));
        *(float *)(lVar40 + 0x78) = fVar64 + *(float *)(lVar40 + 0x78);
        if (*(uint *)(lVar26 + 0x18) <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar40 = lVar26 + lVar44 * 0x178;
        *(ulong *)(lVar40 + 0x98) =
             CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar40 + 0x98) >> 0x20),
                      fVar65 + (float)*(undefined8 *)(lVar40 + 0x98));
        *(float *)(lVar40 + 0xa0) = fVar64 + *(float *)(lVar40 + 0xa0);
        if (*(uint *)(lVar26 + 0x18) <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar40 = lVar26 + lVar44 * 0x178;
        *(ulong *)(lVar40 + 0xc0) =
             CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar40 + 0xc0) >> 0x20),
                      fVar65 + (float)*(undefined8 *)(lVar40 + 0xc0));
        *(float *)(lVar40 + 200) = fVar64 + *(float *)(lVar40 + 200);
        if (*(uint *)(lVar26 + 0x18) <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar40 = lVar26 + lVar44 * 0x178;
        *(ulong *)(lVar40 + 0xe8) =
             CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar40 + 0xe8) >> 0x20),
                      fVar65 + (float)*(undefined8 *)(lVar40 + 0xe8));
        *(float *)(lVar40 + 0xf0) = fVar64 + *(float *)(lVar40 + 0xf0);
      }
      else {
LAB_02497490:
        if (uVar31 <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        puVar9 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        lVar28 = lVar26 + lVar44 * 0x178;
        uVar71 = *(undefined4 *)
                  (*(undefined8 **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8) + 1);
        *(undefined8 *)(lVar28 + 0x70) =
             **(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        *(undefined4 *)(lVar28 + 0x78) = uVar71;
        if (*(uint *)(lVar26 + 0x18) <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar26 + lVar44 * 0x178;
        uVar71 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar28 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar28 + 0xa0) = uVar71;
        if (*(uint *)(lVar26 + 0x18) <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar26 + lVar44 * 0x178;
        uVar71 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar28 + 0xc0) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar28 + 200) = uVar71;
        if (*(uint *)(lVar26 + 0x18) <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar26 + lVar44 * 0x178;
        uVar71 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar28 + 0xe8) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar28 + 0xf0) = uVar71;
        if (*(uint *)(lVar26 + 0x18) <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(undefined1 *)(lVar40 + 0x194) = 0;
      }
      if (iVar16 != 0) goto LAB_02497598;
LAB_02497668:
      pcVar30 = *(code **)(*unaff_x19 + 0x8d8);
LAB_02497674:
      (*pcVar30)();
    }
LAB_02497688:
    if ((*in_stack_00000150 == 0) || (lVar40 = *(long *)(*in_stack_00000150 + 0x38), lVar40 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar40 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar40 = lVar40 + lVar44 * 0x178;
    uVar21 = *(undefined8 *)(lVar40 + 0x11c);
    *(undefined8 *)(lVar40 + 0x11c) =
         CONCAT44(fVar48 + (float)((ulong)uVar21 >> 0x20),fVar65 + (float)uVar21);
    *(float *)(lVar40 + 0x124) = fVar64 + *(float *)(lVar40 + 0x124);
    if ((*in_stack_00000150 == 0) || (lVar40 = *(long *)(*in_stack_00000150 + 0x38), lVar40 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar40 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar40 = lVar40 + lVar44 * 0x178;
    *(ulong *)(lVar40 + 0x110) =
         CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar40 + 0x110) >> 0x20),
                  fVar65 + (float)*(undefined8 *)(lVar40 + 0x110));
    *(float *)(lVar40 + 0x118) = fVar64 + *(float *)(lVar40 + 0x118);
    if ((*in_stack_00000150 == 0) || (lVar40 = *(long *)(*in_stack_00000150 + 0x38), lVar40 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar40 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar40 = lVar40 + lVar44 * 0x178;
    *(ulong *)(lVar40 + 0x128) =
         CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar40 + 0x128) >> 0x20),
                  fVar65 + (float)*(undefined8 *)(lVar40 + 0x128));
    *(float *)(lVar40 + 0x130) = fVar64 + *(float *)(lVar40 + 0x130);
    if ((*in_stack_00000150 == 0) || (lVar40 = *(long *)(*in_stack_00000150 + 0x38), lVar40 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar40 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar40 = lVar40 + lVar44 * 0x178;
    *(float *)(lVar40 + 0x134) = fVar65 + *(float *)(lVar40 + 0x134);
    *(ulong *)(lVar40 + 0x138) =
         CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar40 + 0x138) >> 0x20),
                  fVar48 + (float)*(undefined8 *)(lVar40 + 0x138));
    lVar40 = *in_stack_00000150;
    if ((lVar40 == 0) || (lVar28 = *(long *)(lVar40 + 0x38), lVar28 == 0)) goto LAB_0249920c;
    uVar31 = *(uint *)(lVar28 + 0x18);
    if (uVar31 <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar39 = lVar28 + lVar44 * 0x178;
    uVar59 = CONCAT44(fVar65 + (float)((ulong)*(undefined8 *)(lVar39 + 0x140) >> 0x20),
                      fVar65 + (float)*(undefined8 *)(lVar39 + 0x140));
    fVar47 = fVar48 + *(float *)(lVar39 + 0x150);
    uVar60 = (ulong)(uint)fVar47;
    uVar62 = CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar39 + 0x148) >> 0x20),
                      fVar48 + (float)*(undefined8 *)(lVar39 + 0x148));
    *(ulong *)(lVar39 + 0x140) = uVar59;
    *(ulong *)(lVar39 + 0x148) = uVar62;
    *(float *)(lVar39 + 0x150) = fVar47;
    if (uVar2 == uVar61) {
      uVar61 = *in_stack_00000148 - 1;
      if (uVar13 == uVar61) goto LAB_0249788c;
    }
    else {
      lVar40 = *(long *)(lVar40 + 0x50);
      if (lVar40 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar40 + 0x18) <= uVar61)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar39 = (long)(int)uVar61;
      lVar41 = lVar40 + lVar39 * 0x5c;
      uVar62 = (ulong)(uint)*(float *)(lVar41 + 0x58);
      fVar47 = fVar48 + *(float *)(lVar41 + 0x54);
      uVar59 = (ulong)(uint)fVar47;
      fVar70 = fVar65 + *(float *)(lVar41 + 0x58);
      uVar60 = (ulong)(uint)fVar70;
      *(ulong *)(lVar41 + 0x4c) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar41 + 0x4c) >> 0x20),
                    fVar48 + (float)*(undefined8 *)(lVar41 + 0x4c));
      *(float *)(lVar41 + 0x54) = fVar47;
      *(float *)(lVar41 + 0x58) = fVar70;
      if (uVar31 <= *(uint *)(lVar41 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar71 = *(undefined4 *)(lVar28 + (long)(int)*(uint *)(lVar41 + 0x34) * 0x178 + 0x11c);
      lVar40 = lVar40 + lVar39 * 0x5c;
      *(float *)(lVar40 + 0x70) = fVar47;
      *(undefined4 *)(lVar40 + 0x6c) = uVar71;
      lVar40 = *in_stack_00000150;
      if ((lVar40 == 0) || (lVar28 = *(long *)(lVar40 + 0x50), lVar28 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= uVar61)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar40 = *(long *)(lVar40 + 0x38);
      if (lVar40 == 0) goto LAB_0249920c;
      uVar61 = *(uint *)(lVar28 + lVar39 * 0x5c + 0x40);
      if (*(uint *)(lVar40 + 0x18) <= uVar61)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar28 + lVar39 * 0x5c;
      *(undefined4 *)(lVar28 + 0x74) = *(undefined4 *)(lVar40 + (long)(int)uVar61 * 0x178 + 0x128);
      *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar28 + 0x4c);
      uVar61 = *in_stack_00000148 - 1;
LAB_0249788c:
      if (uVar13 == uVar61) {
        lVar40 = *in_stack_00000150;
        if ((lVar40 == 0) || (lVar28 = *(long *)(lVar40 + 0x50), lVar28 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar28 + 0x18) <= uVar2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar39 = lVar28 + lVar35 * 0x5c;
        uVar62 = (ulong)(uint)*(float *)(lVar39 + 0x58);
        uVar59 = CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar39 + 0x4c) >> 0x20),
                          fVar48 + (float)*(undefined8 *)(lVar39 + 0x4c));
        fVar47 = fVar48 + *(float *)(lVar39 + 0x54);
        fVar65 = fVar65 + *(float *)(lVar39 + 0x58);
        uVar60 = (ulong)(uint)fVar65;
        *(ulong *)(lVar39 + 0x4c) = uVar59;
        *(float *)(lVar39 + 0x54) = fVar47;
        *(float *)(lVar39 + 0x58) = fVar65;
        lVar40 = *(long *)(lVar40 + 0x38);
        if (lVar40 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar40 + 0x18) <= *(uint *)(lVar39 + 0x34))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar71 = *(undefined4 *)(lVar40 + (long)(int)*(uint *)(lVar39 + 0x34) * 0x178 + 0x11c);
        lVar28 = lVar28 + lVar35 * 0x5c;
        *(float *)(lVar28 + 0x70) = fVar47;
        *(undefined4 *)(lVar28 + 0x6c) = uVar71;
        lVar40 = *in_stack_00000150;
        if ((lVar40 == 0) || (lVar28 = *(long *)(lVar40 + 0x50), lVar28 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar28 + 0x18) <= uVar2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar40 = *(long *)(lVar40 + 0x38);
        if (lVar40 == 0) goto LAB_0249920c;
        uVar61 = *(uint *)(lVar28 + lVar35 * 0x5c + 0x40);
        if (*(uint *)(lVar40 + 0x18) <= uVar61)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar28 + lVar35 * 0x5c;
        *(undefined4 *)(lVar28 + 0x74) = *(undefined4 *)(lVar40 + (long)(int)uVar61 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar28 + 0x4c);
      }
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar20 = FUN_016f9468(uVar42,0);
    if (((((uVar20 & 1) == 0) && (1 < uVar42 - 0x2010)) && (uVar42 != 0xad)) && (uVar42 != 0x2d)) {
      if (bVar11) {
        if (((uVar37 != 1) && ((int)uVar13 < (int)(*(uint *)(lVar26 + 0x18) - 1))) &&
           (((int)uVar13 < (int)*in_stack_00000148 && ((uVar42 == 0x2019 || (uVar42 == 0x27)))))) {
          if (*(uint *)(lVar26 + 0x18) <= uVar37 - 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar5 = *(undefined2 *)(lVar26 + lVar32 + -0x438);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar20 = FUN_016f9468(uVar5,0);
          if ((uVar20 & 1) != 0) {
            if (*(uint *)(lVar26 + 0x18) <= uVar37)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar5 = *(undefined2 *)(lVar26 + lVar32 + -0x148);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar20 = FUN_016f9468(uVar5,0);
            if ((uVar20 & 1) != 0) goto LAB_02497aa4;
          }
        }
      }
      else {
        if (uVar37 != 1) {
LAB_024985a0:
          bVar11 = false;
          goto LAB_02497aac;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar20 = FUN_016f93a0(uVar42,0);
        if ((uVar20 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar20 = FUN_016f68bc(uVar42,0);
          if (((uVar42 != 0x200b) && ((uVar20 & 1) == 0)) && (*in_stack_00000148 != 1))
          goto LAB_024985a0;
        }
      }
      if (uVar13 == *in_stack_00000148 - 1) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar20 = FUN_016f9468(uVar42,0);
        iVar16 = iVar45;
        if ((uVar20 & 1) == 0) goto LAB_02497de0;
      }
      else {
LAB_02497de0:
        iVar16 = uVar37 - 2;
      }
      lVar40 = *in_stack_00000150;
      if (lVar40 == 0) goto LAB_0249920c;
      lVar28 = *(long *)(lVar40 + 0x40);
      if (lVar28 == 0) goto LAB_0249920c;
      uVar61 = *(uint *)(lVar40 + 0x24);
      iVar17 = *(int *)(lVar28 + 0x18);
      if (iVar17 < (int)(uVar61 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar40 + 0x40),iVar17 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar40 = *in_stack_00000150;
        if (lVar40 == 0) goto LAB_0249920c;
      }
      lVar28 = *(long *)(lVar40 + 0x40);
      if (lVar28 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= uVar61)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar28 + (long)(int)uVar61 * 0x18;
      *(uint *)(lVar28 + 0x28) = uVar18;
      *(int *)(lVar28 + 0x2c) = iVar16;
      *(uint *)(lVar28 + 0x30) = (iVar16 - uVar18) + 1;
      *(long **)(lVar28 + 0x20) = unaff_x19;
      lVar28 = *(long *)(lVar40 + 0x50);
      *(int *)(lVar40 + 0x24) = *(int *)(lVar40 + 0x24) + 1;
      if (lVar28 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= uVar2)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar28 + lVar35 * 0x5c;
      bVar11 = false;
      iStack00000000000000ac = iStack00000000000000ac + 1;
      *(int *)(lVar28 + 0x30) = *(int *)(lVar28 + 0x30) + 1;
    }
    else {
      if (!bVar11) {
        uVar18 = uVar13;
      }
      if (uVar13 == *in_stack_00000148 - 1) {
        lVar40 = *in_stack_00000150;
        if (lVar40 == 0) goto LAB_0249920c;
        lVar28 = *(long *)(lVar40 + 0x40);
        if (lVar28 == 0) goto LAB_0249920c;
        uVar61 = *(uint *)(lVar40 + 0x24);
        iVar16 = *(int *)(lVar28 + 0x18);
        if (iVar16 < (int)(uVar61 + 1)) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147b84((long *)(lVar40 + 0x40),iVar16 + 1,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
          lVar40 = *in_stack_00000150;
          if (lVar40 == 0) goto LAB_0249920c;
        }
        lVar28 = *(long *)(lVar40 + 0x40);
        if (lVar28 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar28 + 0x18) <= uVar61)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar28 + (long)(int)uVar61 * 0x18;
        *(uint *)(lVar28 + 0x28) = uVar18;
        *(uint *)(lVar28 + 0x2c) = uVar13;
        *(long **)(lVar28 + 0x20) = unaff_x19;
        *(uint *)(lVar28 + 0x30) = uVar37 - uVar18;
        lVar28 = *(long *)(lVar40 + 0x50);
        *(int *)(lVar40 + 0x24) = *(int *)(lVar40 + 0x24) + 1;
        if (lVar28 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar28 + 0x18) <= uVar2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar28 + lVar35 * 0x5c;
        iStack00000000000000ac = iStack00000000000000ac + 1;
        *(int *)(lVar28 + 0x30) = *(int *)(lVar28 + 0x30) + 1;
      }
LAB_02497aa4:
      bVar11 = true;
    }
LAB_02497aac:
    if ((*in_stack_00000150 == 0) || (lVar40 = *(long *)(*in_stack_00000150 + 0x38), lVar40 == 0))
    goto LAB_0249920c;
    uVar61 = *(uint *)(lVar40 + 0x18);
    if (uVar61 <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar40 + lVar44 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar12) {
LAB_02497adc:
        if (uVar61 <= uVar37 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar35 = *unaff_x19;
        uVar61 = *(uint *)(lVar40 + lVar32 + -0x330);
        uVar71 = *(undefined4 *)(lVar40 + lVar32 + -0x2f8);
LAB_0249805c:
        pcVar30 = *(code **)(lVar35 + 0x908);
LAB_02498064:
        uVar62 = (ulong)uVar61;
        uVar59 = (ulong)(uint)fStack0000000000000050;
        uVar60 = (ulong)(uint)fStack0000000000000054;
        (*pcVar30)(fStack0000000000000058,uVar59,uVar60,uVar62,fStack00000000000000d0,0,
                   _bStack000000000000005c,uVar71);
        puVar9 = System_Threading_Mutex_TypeInfo;
        lVar40 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar40 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar40 = *(long *)puVar9;
        }
LAB_024980b4:
        bVar12 = false;
        fVar58 = 0.0;
        fStack00000000000000d0 = *(float *)(*(long *)(lVar40 + 0xb8) + 0x15a8);
        fStack00000000000000cc = 0.0;
      }
      else {
LAB_02497fc4:
        bVar12 = false;
      }
    }
    else {
      lVar40 = lVar40 + lVar44 * 0x178;
      iVar16 = *(int *)(lVar40 + 0x68);
      *(int *)(lVar40 + 0x16c) = iVar14;
      if ((((int)unaff_x19[100] < (int)uVar13) || ((int)unaff_x19[0x65] < (int)uVar2)) ||
         (((int)unaff_x19[0x5b] == 5 && (iVar16 + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar20 = FUN_016f68bc(uVar42,0);
      if ((uVar42 != 0x200b) && ((uVar20 & 1) == 0)) {
        lVar40 = *in_stack_00000150;
        if ((lVar40 == 0) || (lVar35 = *(long *)(lVar40 + 0x38), lVar35 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar35 + 0x18) <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar47 = *(float *)(lVar35 + lVar44 * 0x178 + 0x160);
        if (fVar58 <= fVar47) {
          fVar58 = fVar47;
        }
        if (fStack00000000000000cc <= ABS(fVar46)) {
          fStack00000000000000cc = ABS(fVar46);
        }
        if ((float)iVar16 != fStack000000000000004c) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar40 = *in_stack_00000150;
            if (lVar40 == 0) goto LAB_0249920c;
            lVar35 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          else {
            lVar35 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          fStack00000000000000d0 = *(float *)(lVar35 + 0x15a8);
        }
        lVar40 = *(long *)(lVar40 + 0x38);
        if (lVar40 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar40 + 0x18) <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0x1e] == 0) goto LAB_0249920c;
        fVar70 = *(float *)(lVar40 + lVar44 * 0x178 + 0x14c);
        fVar47 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
        fVar70 = fVar70 + fVar58 * fVar47;
        if (fVar70 <= fStack00000000000000d0) {
          fStack00000000000000d0 = fVar70;
        }
        uVar59 = (ulong)(uint)fStack00000000000000d0;
        fStack000000000000004c = (float)iVar16;
      }
      if (!bVar12) {
        bVar12 = false;
        if ((((uVar42 == 0xd) || ((uVar42 | 1) == 0xb)) || ((int)uVar6 < (int)uVar13)) ||
           ((bool)(bVar1 ^ 1))) goto LAB_024980d0;
        if (uVar13 == uVar6) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar20 = FUN_016fa418(uVar42,0);
          if ((uVar20 & 1) != 0) goto LAB_02497fc4;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar40 = *(long *)(*in_stack_00000150 + 0x38), lVar40 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar40 + 0x18) <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar40 = lVar40 + lVar44 * 0x178;
        _bStack000000000000005c = *(float *)(lVar40 + 0x160);
        fStack0000000000000058 = *(float *)(lVar40 + 0x11c);
        bVar12 = fVar58 != 0.0;
        fVar47 = _bStack000000000000005c;
        if (bVar12) {
          fVar47 = fVar58;
        }
        fVar58 = fVar47;
        uStack0000000000000060 = *(uint *)(lVar40 + 0x168);
        fStack0000000000000054 = 0.0;
        fVar47 = fVar46;
        if (bVar12) {
          fVar47 = fStack00000000000000cc;
        }
        uVar59 = (ulong)(uint)fVar47;
        fStack0000000000000050 = fStack00000000000000d0;
        fStack00000000000000cc = fVar47;
      }
      if (*in_stack_00000148 == 1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar40 = *(long *)(*in_stack_00000150 + 0x38), lVar40 != 0)) {
          if (uVar13 < *(uint *)(lVar40 + 0x18)) {
            lVar40 = lVar40 + lVar44 * 0x178;
            lVar35 = *unaff_x19;
            uVar61 = *(uint *)(lVar40 + 0x128);
            uVar71 = *(undefined4 *)(lVar40 + 0x160);
            goto LAB_0249805c;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if ((uVar13 == uVar36) || ((int)uVar6 <= (int)uVar13)) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar20 = FUN_016f68bc(uVar42,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar40 = *(long *)(*in_stack_00000150 + 0x38), lVar40 != 0)) {
          if (uVar42 == 0x200b || (uVar20 & 1) != 0) {
            lVar35 = lVar34;
            if (*(uint *)(lVar40 + 0x18) <= uVar6)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
            lVar35 = lVar44;
            if (*(uint *)(lVar40 + 0x18) <= uVar13)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          lVar40 = lVar40 + lVar35 * 0x178;
          uVar61 = *(uint *)(lVar40 + 0x128);
          uVar71 = *(undefined4 *)(lVar40 + 0x160);
          pcVar30 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_02498064;
        }
        goto LAB_0249920c;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar40 = *(long *)(*in_stack_00000150 + 0x38), lVar40 != 0)) {
          uVar61 = *(uint *)(lVar40 + 0x18);
          goto LAB_02497adc;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar13 < (int)(*in_stack_00000148 - 1)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar40 = *(long *)(*in_stack_00000150 + 0x38), lVar40 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar40 + 0x18) <= uVar37)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar20 = FUN_024a9e4c(uStack0000000000000060,*(undefined4 *)(lVar40 + lVar32),0);
        if ((uVar20 & 1) == 0) {
          if ((*in_stack_00000150 != 0) &&
             (lVar40 = *(long *)(*in_stack_00000150 + 0x38), lVar40 != 0)) {
            if (uVar13 < *(uint *)(lVar40 + 0x18)) {
              lVar40 = lVar40 + lVar44 * 0x178;
              uVar62 = (ulong)*(uint *)(lVar40 + 0x128);
              uVar60 = (ulong)(uint)fStack0000000000000054;
              uVar59 = (ulong)(uint)fStack0000000000000050;
              (**(code **)(*unaff_x19 + 0x908))
                        (fStack0000000000000058,uVar59,uVar60,uVar62,fStack00000000000000d0,0,
                         _bStack000000000000005c,*(undefined4 *)(lVar40 + 0x160));
              puVar9 = System_Threading_Mutex_TypeInfo;
              lVar40 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar40 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar40 = *(long *)puVar9;
              }
              goto LAB_024980b4;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          goto LAB_0249920c;
        }
      }
      bVar12 = true;
    }
LAB_024980d0:
    if ((*in_stack_00000150 == 0) || (lVar40 = *(long *)(*in_stack_00000150 + 0x38), lVar40 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar40 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (lVar38 == 0) goto LAB_0249920c;
    uVar61 = *(uint *)(lVar40 + lVar44 * 0x178 + 400);
    fVar47 = (float)FUN_026fd1f0(lVar38 + 0x50,0);
    if ((uVar61 >> 6 & 1) == 0) {
      if (bVar7) {
        if ((*in_stack_00000150 == 0) ||
           (lVar40 = *(long *)(*in_stack_00000150 + 0x38), lVar40 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar40 + 0x18) <= uVar37 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar61 = *(uint *)(lVar40 + lVar32 + -0x330);
        pcVar30 = *(code **)(*unaff_x19 + 0x908);
        fVar48 = fStack0000000000000088 * fVar47 + *(float *)(lVar40 + lVar32 + -0x30c);
LAB_02498648:
        uVar62 = (ulong)uVar61;
        uVar59 = (ulong)(uint)in_stack_00000078._4_4_;
        uVar60 = (ulong)in_stack_00000068._4_4_;
        (*pcVar30)(fStack0000000000000080,uVar59,uVar60,uVar62,fVar48,0,fStack0000000000000088,
                   fStack0000000000000088);
      }
LAB_0249867c:
      bVar7 = false;
    }
    else {
      lVar40 = *in_stack_00000150;
      if ((lVar40 == 0) || (lVar35 = *(long *)(lVar40 + 0x38), lVar35 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar35 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(int *)(lVar35 + lVar44 * 0x178 + 0x174) = iVar14;
      if ((((int)unaff_x19[100] < (int)uVar13) || ((int)unaff_x19[0x65] < (int)uVar2)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar35 + lVar44 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uVar42 == 0xd) || ((uVar42 | 1) == 0xb)) || ((int)uVar6 < (int)uVar13)) ||
         (bVar7 || !bVar1)) {
LAB_02498228:
        if (!bVar7) goto LAB_0249867c;
      }
      else {
        if (uVar13 == uVar6) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar20 = FUN_016fa418(uVar42,0);
          if ((uVar20 & 1) != 0) goto LAB_02498228;
          lVar40 = *in_stack_00000150;
          if (lVar40 == 0) goto LAB_0249920c;
        }
        lVar40 = *(long *)(lVar40 + 0x38);
        if (lVar40 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar40 + 0x18) <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar40 = lVar40 + lVar44 * 0x178;
        fStack0000000000000034 = *(float *)(lVar40 + 0x60);
        fStack0000000000000088 = *(float *)(lVar40 + 0x160);
        fStack0000000000000030 = *(float *)(lVar40 + 0x14c);
        uVar59 = (ulong)(uint)fStack0000000000000030;
        fStack0000000000000080 = *(float *)(lVar40 + 0x11c);
        in_stack_00000078._4_4_ = fVar47 * fStack0000000000000088 + fStack0000000000000030;
        in_stack_00000068._4_4_ = 0;
      }
      uVar61 = *in_stack_00000148;
      if (uVar61 == 1) {
LAB_024983ac:
        if ((*in_stack_00000150 != 0) &&
           (lVar40 = *(long *)(*in_stack_00000150 + 0x38), lVar40 != 0)) {
          if (uVar13 < *(uint *)(lVar40 + 0x18)) {
            lVar40 = lVar40 + lVar44 * 0x178;
            lVar34 = *unaff_x19;
            uVar61 = *(uint *)(lVar40 + 0x128);
            fVar48 = *(float *)(lVar40 + 0x14c);
LAB_024983d8:
            pcVar30 = *(code **)(lVar34 + 0x908);
FUN_02498644:
            fVar48 = fVar47 * fStack0000000000000088 + fVar48;
            goto LAB_02498648;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if (uVar13 == uVar36) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar20 = FUN_016f68bc(uVar42,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar40 = *(long *)(*in_stack_00000150 + 0x38), lVar40 != 0)) {
          uVar61 = *(uint *)(lVar40 + 0x18);
          if (uVar42 == 0x200b || (uVar20 & 1) != 0) {
            if (uVar61 <= uVar6)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
LAB_02498620:
            lVar34 = lVar44;
            if (uVar61 <= uVar13)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
LAB_02498628:
          lVar40 = lVar40 + lVar34 * 0x178;
          fVar48 = *(float *)(lVar40 + 0x14c);
          uVar61 = *(uint *)(lVar40 + 0x128);
          pcVar30 = *(code **)(*unaff_x19 + 0x908);
          goto FUN_02498644;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar13 < (int)uVar61) {
        lVar40 = *in_stack_00000150;
        if ((lVar40 != 0) && (lVar35 = *(long *)(lVar40 + 0x38), lVar35 != 0)) {
          if (uVar37 < *(uint *)(lVar35 + 0x18)) {
            if (*(float *)(lVar35 + lVar32 + -0x108) == fStack0000000000000034) {
              fVar70 = *(float *)(lVar35 + lVar32 + -0x1c);
              if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar59 = (ulong)(uint)fStack0000000000000030;
              uVar20 = FUN_024aa280(fVar48 + fVar70,uVar59,0);
              if ((uVar20 & 1) != 0) {
                uVar61 = *in_stack_00000148;
                goto 
                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
                ;
              }
              lVar40 = *in_stack_00000150;
              if (lVar40 == 0) goto LAB_0249920c;
            }
            lVar40 = *(long *)(lVar40 + 0x38);
            if (lVar40 != 0) {
              uVar61 = *(uint *)(lVar40 + 0x18);
              if ((int)uVar13 <= (int)uVar6) goto LAB_02498620;
              if (uVar6 < uVar61) goto LAB_02498628;
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
      if ((int)uVar13 < (int)uVar61) {
        iVar16 = FUN_02681c0c(lVar38,0);
        if (*(uint *)(lVar26 + 0x18) <= uVar37)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar40 = *(long *)(lVar26 + lVar32 + -0x130);
        if (lVar40 == 0) goto LAB_0249920c;
        iVar17 = FUN_02681c0c(lVar40,0);
        if (iVar16 != iVar17) goto LAB_024983ac;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar40 = *(long *)(*in_stack_00000150 + 0x38), lVar40 != 0)) {
          if (uVar37 - 2 < *(uint *)(lVar40 + 0x18)) {
            lVar34 = *unaff_x19;
            uVar61 = *(uint *)(lVar40 + lVar32 + -0x330);
            fVar48 = *(float *)(lVar40 + lVar32 + -0x30c);
            goto LAB_024983d8;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      bVar7 = true;
    }
    if ((*in_stack_00000150 == 0) || (lVar40 = *(long *)(*in_stack_00000150 + 0x38), lVar40 == 0))
    goto LAB_0249920c;
    uVar61 = (uint)*(undefined8 *)(lVar40 + 0x18);
    if (uVar61 <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar40 + lVar44 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar8) {
        uVar60 = (ulong)uStack00000000000000a0;
        uVar62 = (ulong)(uint)fStack00000000000000a4;
        uVar59 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar59,uVar60,uVar62,fStack00000000000000a8,uVar60);
      }
LAB_024986e8:
      bVar8 = false;
    }
    else {
      if ((((int)unaff_x19[100] < (int)uVar13) || ((int)unaff_x19[0x65] < (int)uVar2)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar40 + lVar44 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar8) {
        if ((((uVar42 == 0xd) || ((uVar42 | 1) == 0xb)) || ((int)uVar6 < (int)uVar13)) || (!bVar1))
        goto LAB_024986e8;
        if (uVar13 == uVar6) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar20 = FUN_016fa418(uVar42,0);
          if ((uVar20 & 1) != 0) goto LAB_024986e8;
        }
        puVar9 = System_Threading_Mutex_TypeInfo;
        lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar34 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar34 = *(long *)puVar9;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar40 = *(long *)(*in_stack_00000150 + 0x38), lVar40 == 0)) goto LAB_0249920c;
        uVar61 = (uint)*(undefined8 *)(lVar40 + 0x18);
        if (uVar61 <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar34 = *(long *)(lVar34 + 0xb8);
        lVar35 = lVar40 + lVar44 * 0x178;
        in_stack_00001798 = *(undefined8 *)(lVar35 + 0x184);
        in_stack_00001790 = *(undefined8 *)(lVar35 + 0x17c);
        fStack00000000000000b0 = *(float *)(lVar34 + 0x1598);
        in_stack_000017a0 = *(float *)(lVar35 + 0x18c);
        fStack00000000000000b4 = *(float *)(lVar34 + 0x159c);
        fStack00000000000000a4 = *(float *)(lVar34 + 0x15a0);
        fStack00000000000000a8 = *(float *)(lVar34 + 0x15a4);
        uStack00000000000000a0 = 0;
      }
      if (uVar61 <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar40 = lVar40 + lVar44 * 0x178;
      fVar72 = *(float *)(lVar40 + 0x188);
      uVar19 = *(undefined8 *)(lVar40 + 0x17c);
      fVar52 = *(float *)(lVar40 + 0x184);
      uVar21 = *(undefined8 *)(lVar40 + 0x184);
      fVar51 = *(float *)(lVar40 + 0x18c);
      fVar48 = *(float *)(lVar40 + 0x11c);
      fVar70 = *(float *)(lVar40 + 0x128);
      fVar50 = *(float *)(lVar40 + 0x148);
      fVar47 = *(float *)(lVar40 + 0x150);
      in_stack_00000158 = uVar19;
      fStack0000000000000160 = fVar52;
      fStack0000000000000164 = fVar72;
      in_stack_00000168 = fVar51;
      in_stack_00000170 = in_stack_00001790;
      in_stack_00000178 = in_stack_00001798;
      in_stack_00000180 = in_stack_000017a0;
      uVar20 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
      lVar40 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
      if ((uVar20 & 1) == 0) {
        if (*(int *)(lVar40 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar40);
        }
        fVar48 = fVar48 - (float)((ulong)in_stack_00001790 >> 0x20);
        if (fVar48 <= fStack00000000000000b0) {
          fStack00000000000000b0 = fVar48;
        }
        fVar47 = fVar47 - in_stack_000017a0;
        uVar59 = (ulong)(uint)fVar47;
        fVar70 = fVar70 + (float)in_stack_00001798;
        uVar60 = (ulong)(uint)fVar70;
        if (fVar47 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar47;
        }
        fVar50 = fVar50 + (float)((ulong)in_stack_00001798 >> 0x20);
        uVar62 = (ulong)(uint)fVar50;
        if (fStack00000000000000a4 <= fVar70) {
          fStack00000000000000a4 = fVar70;
        }
        if (fStack00000000000000a8 <= fVar50) {
          fStack00000000000000a8 = fVar50;
        }
      }
      else {
        if (*(int *)(lVar40 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar40);
        }
        fVar48 = (fVar48 + (fStack00000000000000a4 - (float)in_stack_00001798)) * 0.5;
        uVar62 = (ulong)(uint)fVar48;
        if (fVar47 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar47;
        }
        uVar59 = (ulong)(uint)fStack00000000000000b4;
        uVar60 = (ulong)uStack00000000000000a0;
        if (fStack00000000000000a8 <= fVar50) {
          fStack00000000000000a8 = fVar50;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar59,uVar60,uVar62,fStack00000000000000a8,uVar60);
        fStack00000000000000b4 = fVar47 - fVar51;
        fStack00000000000000a4 = fVar70 + fVar52;
        uStack00000000000000a0 = 0;
        fStack00000000000000a8 = fVar50 + fVar72;
        fStack00000000000000b0 = fVar48;
        in_stack_00001790 = uVar19;
        in_stack_00001798 = uVar21;
        in_stack_000017a0 = fVar51;
      }
      if (((*in_stack_00000148 == 1) || (uVar13 == uVar36)) ||
         (((int)uVar6 <= (int)uVar13 || (!bVar1)))) {
        uVar60 = (ulong)uStack00000000000000a0;
        uVar62 = (ulong)(uint)fStack00000000000000a4;
        uVar59 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar59,uVar60,uVar62,fStack00000000000000a8,uVar60);
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
    }
    uVar13 = *in_stack_00000148;
    iVar45 = iVar45 + 1;
    lVar32 = lVar32 + 0x178;
    bVar1 = (int)uVar37 < (int)uVar13;
    uVar61 = uVar2;
    uVar37 = uVar37 + 1;
  } while (bVar1);
  lVar26 = *in_stack_00000150;
  if (lVar26 != 0) {
    iVar14 = uVar2 + 1;
LAB_02498c58:
    puVar10 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    puVar9 = PTR_DAT_033ed410;
    *(uint *)(lVar26 + 0x18) = uVar13;
    lVar32 = unaff_x19[0xd3];
    *(int *)(lVar26 + 0x2c) = iVar14;
    iVar14 = iStack00000000000000ac;
    if ((int)uVar13 < 1) {
      iVar14 = 1;
    }
    if (iStack00000000000000ac == 0) {
      iVar14 = 1;
    }
    *(int *)(lVar26 + 0x1c) = (int)lVar32;
    *(int *)(lVar26 + 0x24) = iVar14;
    *(int *)(lVar26 + 0x30) = (int)unaff_x19[0x95] + 1;
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
    lVar26 = unaff_x19[0xde];
    if (lVar26 != 0) {
      (**(code **)(lVar26 + 0x18))
                (*(undefined8 *)(lVar26 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar26 + 0x28));
    }
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    iVar14 = FUN_02859dc4(unaff_x19[0xe4],0);
    if (iVar14 != 0x19) {
      lVar26 = unaff_x19[0xe4];
      if (lVar26 == 0) goto LAB_0249920c;
      uVar13 = FUN_02859dc4(lVar26,0);
      FUN_02859e00(lVar26,uVar13 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar26 = *(long *)(*in_stack_00000150 + 0x60), lVar26 == 0))
      goto LAB_0249920c;
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar26 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      FUN_024e8000(lVar26 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar26 = *(long *)(unaff_x19[0x6c] + 0x60), lVar26 != 0)) {
        if (*(int *)(lVar26 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar26 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar26 = *(long *)(unaff_x19[0x6c] + 0x60), lVar26 != 0)) {
            if (*(int *)(lVar26 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar26 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar26 = *(long *)(unaff_x19[0x6c] + 0x60), lVar26 != 0)) {
                if (*(int *)(lVar26 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar26 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar26 = *(long *)(unaff_x19[0x6c] + 0x60), lVar26 != 0)) {
                    if (*(int *)(lVar26 + 0x18) == 0)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar26 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        if (unaff_x19[0xe3] != 0) {
                          FUN_02858f1c(unaff_x19[0xe3],unaff_x19[0x73],0);
                          if (unaff_x19[0xe3] != 0) {
                            uVar21 = FUN_02858bac(unaff_x19[0xe3],0);
                            if (unaff_x19[0xe3] != 0) {
                              uVar13 = FUN_02858a14(unaff_x19[0xe3],0);
                              lVar26 = *in_stack_00000150;
                              if (lVar26 != 0) {
                                lVar40 = 0;
                                lVar32 = 0;
                                do {
                                  uVar20 = lVar32 + 1;
                                  if ((long)*(int *)(lVar26 + 0x34) <= (long)uVar20)
                                  goto LAB_02496098;
                                  lVar26 = *(long *)(lVar26 + 0x60);
                                  if (lVar26 == 0) break;
                                  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  if (*(uint *)(lVar26 + 0x18) <= uVar20)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  FUN_024e7ecc(lVar26 + lVar40 + 0x70,0);
                                  lVar26 = unaff_x19[0xe0];
                                  if (lVar26 == 0) break;
                                  if (*(uint *)(lVar26 + 0x18) <= uVar20)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  uVar19 = *(undefined8 *)(lVar26 + lVar32 * 8 + 0x28);
                                  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar23 = FUN_0268b4e0(uVar19,0,0);
                                  if ((uVar23 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                      if ((*in_stack_00000150 == 0) ||
                                         (lVar26 = *(long *)(*in_stack_00000150 + 0x60), lVar26 == 0
                                         )) break;
                                      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      if (*(uint *)(lVar26 + 0x18) <= uVar20)
                                      goto 
                                      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                      ;
                                      FUN_024e8000(lVar26 + lVar40 + 0x70,1,0);
                                    }
                                    lVar26 = unaff_x19[0xe0];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar26 = *(long *)(lVar26 + lVar32 * 8 + 0x28);
                                    if (lVar26 == 0) break;
                                    lVar26 = FUN_024f0144(lVar26,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar34 = *(long *)(*in_stack_00000150 + 0x60), lVar34 == 0))
                                    break;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar26 == 0) break;
                                    FUN_0266b9c4(lVar26,*(undefined8 *)(lVar34 + lVar40 + 0x80),0);
                                    lVar26 = unaff_x19[0xe0];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar26 = *(long *)(lVar26 + lVar32 * 8 + 0x28);
                                    if (lVar26 == 0) break;
                                    lVar26 = FUN_024f0144(lVar26,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar34 = *(long *)(*in_stack_00000150 + 0x60), lVar34 == 0))
                                    break;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar26 == 0) break;
                                    FUN_0266bbc8(lVar26,*(undefined8 *)(lVar34 + lVar40 + 0x98),0);
                                    lVar26 = unaff_x19[0xe0];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar26 = *(long *)(lVar26 + lVar32 * 8 + 0x28);
                                    if (lVar26 == 0) break;
                                    lVar26 = FUN_024f0144(lVar26,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar34 = *(long *)(*in_stack_00000150 + 0x60), lVar34 == 0))
                                    break;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar26 == 0) break;
                                    FUN_0266bc74(lVar26,*(undefined8 *)(lVar34 + lVar40 + 0xa0),0);
                                    lVar26 = unaff_x19[0xe0];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar26 = *(long *)(lVar26 + lVar32 * 8 + 0x28);
                                    if (lVar26 == 0) break;
                                    lVar26 = FUN_024f0144(lVar26,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar34 = *(long *)(*in_stack_00000150 + 0x60), lVar34 == 0))
                                    break;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar26 == 0) break;
                                    FUN_0266c1dc(lVar26,*(undefined8 *)(lVar34 + lVar40 + 0xa8),0);
                                    lVar26 = unaff_x19[0xe0];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar26 = *(long *)(lVar26 + lVar32 * 8 + 0x28);
                                    if ((lVar26 == 0) ||
                                       (lVar26 = FUN_024f0144(lVar26,0), lVar26 == 0)) break;
                                    FUN_0266ed90(lVar26,0);
                                    lVar26 = unaff_x19[0xe0];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar26 = *(long *)(lVar26 + lVar32 * 8 + 0x28);
                                    if (lVar26 == 0) break;
                                    lVar26 = FUN_02738ef4(lVar26,0);
                                    lVar34 = unaff_x19[0xe0];
                                    if (lVar34 == 0) break;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar34 = *(long *)(lVar34 + lVar32 * 8 + 0x28);
                                    if ((lVar34 == 0) ||
                                       (uVar19 = FUN_024f0144(lVar34,0), lVar26 == 0)) break;
                                    FUN_02858f1c(lVar26,uVar19,0);
                                    lVar26 = unaff_x19[0xe0];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar26 = *(long *)(lVar26 + lVar32 * 8 + 0x28);
                                    if ((lVar26 == 0) ||
                                       (lVar26 = FUN_02738ef4(lVar26,0), lVar26 == 0)) break;
                                    FUN_02858b14(uVar21,uVar59,uVar60,uVar62,lVar26,0);
                                    lVar26 = unaff_x19[0xe0];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar26 = *(long *)(lVar26 + lVar32 * 8 + 0x28);
                                    if ((lVar26 == 0) ||
                                       (lVar26 = FUN_02738ef4(lVar26,0), lVar26 == 0)) break;
                                    FUN_02858a50(lVar26,uVar13 & 1,0);
                                    lVar26 = unaff_x19[0xe0];
                                    if (lVar26 == 0) break;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    plVar43 = *(long **)(lVar26 + lVar32 * 8 + 0x28);
                                    uVar18 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar43 == (long *)0x0) break;
                                    (**(code **)(*plVar43 + 0x2c8))
                                              (plVar43,uVar18 & 1,*(undefined8 *)(*plVar43 + 0x2d0))
                                    ;
                                  }
                                  lVar26 = *in_stack_00000150;
                                  lVar32 = lVar32 + 1;
                                  lVar40 = lVar40 + 0x50;
                                } while (lVar26 != 0);
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


