/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRInteractorReticleVisual$$UpdateReticleTarget
ENTRY_POINT: 02492828
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

void UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__UpdateReticleTarget(long param_1)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  double __x;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  int *piVar22;
  ulong uVar23;
  ulong uVar24;
  undefined1 uVar25;
  char cVar26;
  long lVar27;
  undefined4 *puVar28;
  long lVar29;
  long lVar30;
  float *pfVar31;
  code *pcVar32;
  uint uVar33;
  long lVar34;
  float *pfVar35;
  long lVar36;
  long lVar37;
  uint uVar38;
  uint uVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long *unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  uint uVar43;
  long *plVar44;
  uint uVar45;
  long unaff_x22;
  long *unaff_x23;
  undefined4 unaff_w24;
  long *plVar46;
  undefined8 *unaff_x26;
  long unaff_x27;
  long lVar47;
  long *plVar48;
  int iVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  double dVar59;
  uint uVar60;
  ulong uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float unaff_s12;
  float fVar68;
  float fVar69;
  float unaff_s13;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined4 uVar73;
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
  
code_r0x02492828:
                    /* catch(type#1 @ 03274860) { ... } // from try @ 024927b0 with catch @ 02492828
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0249276c with catch @ 0249282c
                        */
  *(undefined4 *)((long)unaff_x19 + 0x1b4) = *(undefined4 *)(param_1 + 0x68);
LAB_02492830:
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02492780 with catch @ 02492830
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0249275c with catch @ 02492834
                        */
  if (unaff_x19[0x1f] != 0) {
    fVar62 = *(float *)(unaff_x19 + 0x3c);
                    /* try { // try from 0249284c to 0259284f has its CatchHandler @ 02492870 */
    memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
                    /* try { // try from 02492850 to 02592877 has its CatchHandler @ 02492688 */
    iVar13 = FUN_026fd110(&stack0x00001700,0);
    if (*unaff_x23 != 0) {
                    /* catch() { ... } // from try @ 0249284c with catch @ 02492870 */
                    /* try { // try from 02492878 to 0259287f has its CatchHandler @ 02492894 */
      memmove(&stack0x00001700,(void *)(*unaff_x23 + 0x50),0x60);
                    /* try { // try from 02492880 to 0259288b has its CatchHandler @ 02492688 */
                    /* try { // try from 0249288c to 02592893 has its CatchHandler @ 02492894 */
      fVar50 = (float)FUN_026fd120(&stack0x00001700,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02492878 with catch @ 02492894
                       catch(type#2 @ 00000000) { ... } // from try @ 0249288c with catch @ 02492894
                        */
      fVar72 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar72 = unaff_s12;
      }
      if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
      fVar72 = (fVar62 / (float)iVar13) * fVar50 * fVar72;
      iVar13 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
      fVar62 = *(float *)(unaff_x19 + 0x3c);
      if (iVar13 < 1) {
        if (*unaff_x23 == 0) goto LAB_0249920c;
        iVar13 = FUN_026fd110(*unaff_x23 + 0x50,0);
        if (*unaff_x23 == 0) goto LAB_0249920c;
        fVar65 = (float)FUN_026fd120(*unaff_x23 + 0x50,0);
        fVar50 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar50 = unaff_s12;
        }
        if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
        fVar68 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
        if (*(long *)(unaff_x22 + 0x20) == 0) goto LAB_0249920c;
        FUN_026fd62c(&stack0x00000880,*(long *)(unaff_x22 + 0x20),0);
        unaff_x26[0x1cd] = unaff_x26[1];
        unaff_x26[0x1cc] = *unaff_x26;
        fVar51 = (float)FUN_026fd45c(&stack0x000016e0,0);
        if (*(long *)(unaff_x22 + 0x20) == 0) goto LAB_0249920c;
        fVar53 = *(float *)(unaff_x22 + 0x2c);
        fVar70 = (float)FUN_026fd668(*(long *)(unaff_x22 + 0x20),0);
        if (*unaff_x23 == 0) goto LAB_0249920c;
        fVar52 = (float)FUN_026fd140(*unaff_x23 + 0x50,0);
        if (*unaff_x23 == 0) goto LAB_0249920c;
        fVar63 = (float)FUN_026fd170(*unaff_x23 + 0x50,0);
        if (*unaff_x23 == 0) goto LAB_0249920c;
        fVar54 = *(float *)((long)unaff_x19 + 0x3fc);
        fStack0000000000000134 = (float)FUN_026fd120(*unaff_x23 + 0x50,0);
        if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
        fStack0000000000000134 = fVar72 * fVar63 * fVar54 * fStack0000000000000134;
        fVar50 = (fVar62 / (float)iVar13) * fVar65 * fVar50;
        fVar62 = fVar50 * (fVar68 / fVar51) * fVar53 * fVar70;
        fVar50 = fVar50 / fVar62;
        fVar52 = fVar50 * fVar52;
        fVar72 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
        fVar50 = fVar50 * fVar72;
      }
      else {
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        iVar13 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar50 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (*(long *)(unaff_x22 + 0x20) == 0) goto LAB_0249920c;
        fVar68 = *(float *)(unaff_x22 + 0x2c);
        fVar65 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar65 = 1.0;
        }
        fVar51 = (float)FUN_026fd668(*(long *)(unaff_x22 + 0x20),0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar52 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar53 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar70 = *(float *)((long)unaff_x19 + 0x3fc);
        fStack0000000000000134 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fStack0000000000000134 = fVar72 * fVar53 * fVar70 * fStack0000000000000134;
        fVar62 = (fVar62 / (float)iVar13) * fVar50 * fVar65 * fVar68 * fVar51;
        fVar50 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
      }
      lVar27 = unaff_x19[0x6c];
      unaff_x19[200] = unaff_x22;
      if ((lVar27 != 0) && (lVar30 = *(long *)(lVar27 + 0x38), lVar30 != 0)) {
        if (*in_stack_00000148 < *(uint *)(lVar30 + 0x18)) {
          lVar30 = lVar30 + (int)*in_stack_00000148 * unaff_x27;
          *(undefined4 *)(lVar30 + 0x2c) = 1;
          *(float *)(lVar30 + 0x160) = fVar62;
          fVar72 = 0.0;
          *(long *)(lVar30 + 0x40) = unaff_x19[0xd2];
          *(long *)(lVar30 + 0x38) = unaff_x19[0x1f];
          *(int *)(lVar30 + 0x58) = (int)unaff_x19[0x23];
          *(undefined4 *)(unaff_x19 + 0x23) = unaff_w24;
          fStack00000000000000f4 = unaff_s13;
LAB_02492e14:
          fVar65 = 0.0;
          if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
            fVar65 = fVar62;
          }
LAB_02492e2c:
          fVar68 = fVar65;
          lVar27 = *(long *)(lVar27 + 0x38);
          if (lVar27 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x27;
          *(short *)(lVar27 + 0x20) = (short)in_stack_000017bc;
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
          uVar12 = *in_stack_00000148;
          FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
                       *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
          if (*(uint *)(lVar27 + 0x18) <= uVar12)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar27 = lVar27 + (int)uVar12 * unaff_x27;
          uVar18 = unaff_x26[1];
          uVar21 = *unaff_x26;
          *(undefined4 *)(lVar27 + 0x18c) = in_stack_00000890;
          *(undefined8 *)(lVar27 + 0x184) = uVar18;
          *(undefined8 *)(lVar27 + 0x17c) = uVar21;
          if ((*in_stack_00000150 == 0) ||
             (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          *(undefined4 *)(lVar27 + (int)*in_stack_00000148 * unaff_x27 + 400) =
               *(undefined4 *)((long)unaff_x19 + 0x254);
          if ((unaff_x19[200] == 0) || (lVar27 = *(long *)(unaff_x19[200] + 0x20), lVar27 == 0))
          goto LAB_0249920c;
          FUN_026fd62c(&stack0x00000bf8,lVar27,0);
          puVar8 = 
          Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
          ;
          unaff_x26[0x1df] = in_stack_00000c00;
          unaff_x26[0x1de] = CONCAT44(in_stack_00000bfc,in_stack_00000bf8);
          if ((int)in_stack_000017bc < 0x10000) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar12 = FUN_016f68bc(in_stack_000017bc,0);
            uVar12 = uVar12 & 1;
          }
          else {
            uVar12 = 0;
          }
          fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
          *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
          iVar13 = (int)unaff_x27;
          if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
            fVar53 = 0.0;
            fVar51 = 0.0;
            fVar65 = 0.0;
          }
          else {
            if (unaff_x19[200] == 0) goto LAB_0249920c;
            uVar60 = *in_stack_00000148;
            uVar17 = *(uint *)(unaff_x19[200] + 0x28);
            if ((int)uVar60 < (int)in_stack_00000078._4_4_) {
              if ((*in_stack_00000150 == 0) ||
                 (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0)) goto LAB_0249920c;
              if (*(uint *)(lVar27 + 0x18) <= uVar60 + 1)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              lVar27 = *(long *)(lVar27 + (long)(int)(uVar60 + 1) * (long)iVar13 + 0x30);
              if ((((lVar27 == 0) || (*in_stack_00000138 == 0)) ||
                  (lVar30 = *(long *)(*in_stack_00000138 + 0x128), lVar30 == 0)) ||
                 (lVar30 = *(long *)(lVar30 + 0x18), lVar30 == 0)) goto LAB_0249920c;
              in_stack_00000880 = uVar17 | *(int *)(lVar27 + 0x28) << 0x10;
              uVar19 = FUN_0129eff4(lVar30,&stack0x00000880,&stack0x000016d8,
                                    *(undefined8 *)
                                     Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                                   );
              uVar73 = 0;
              if ((uVar19 & 1) == 0) {
                fVar53 = 0.0;
                fVar51 = 0.0;
                fVar65 = 0.0;
              }
              else {
                if (in_stack_000016d8 == 0) goto LAB_0249920c;
                fVar65 = *(float *)(in_stack_000016d8 + 0x14);
                fVar51 = *(float *)(in_stack_000016d8 + 0x18);
                fVar53 = *(float *)(in_stack_000016d8 + 0x1c);
                uVar73 = *(undefined4 *)(in_stack_000016d8 + 0x20);
                if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
                  fStack00000000000000cc = 0.0;
                }
              }
              uVar60 = *in_stack_00000148;
            }
            else {
              uVar73 = 0;
              fVar53 = 0.0;
              fVar51 = 0.0;
              fVar65 = 0.0;
            }
            if (0 < (int)uVar60) {
              if ((*in_stack_00000150 == 0) ||
                 (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0)) goto LAB_0249920c;
              if (*(uint *)(lVar27 + 0x18) <= (uint)((long)(int)uVar60 + -1))
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              lVar27 = *(long *)(lVar27 + ((long)(int)uVar60 + -1) * unaff_x27 + 0x30);
              if (((lVar27 == 0) || (*in_stack_00000138 == 0)) ||
                 ((lVar30 = *(long *)(*in_stack_00000138 + 0x128), lVar30 == 0 ||
                  (lVar30 = *(long *)(lVar30 + 0x18), lVar30 == 0)))) goto LAB_0249920c;
              in_stack_00000880 = *(uint *)(lVar27 + 0x28) | uVar17 << 0x10;
              uVar19 = FUN_0129eff4(lVar30,&stack0x00000880,&stack0x000016d8,
                                    *(undefined8 *)
                                     Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                                   );
              if ((uVar19 & 1) != 0) {
                if ((in_stack_000016d8 == 0) ||
                   (fVar65 = (float)FUN_024bb1bc(fVar65,fVar51,fVar53,uVar73,
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
            *(float *)((long)unaff_x19 + 0x2f4) = fVar53;
          }
          if ((char)unaff_x19[0x1d] != '\0') {
            fVar63 = *(float *)(unaff_x19 + 199);
            fVar70 = (float)FUN_026fd474(&stack0x00001770,0);
            fVar63 = fVar63 - fVar68 * fVar70 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
            *(float *)(unaff_x19 + 199) = fVar63;
            if ((uVar12 != 0) || (in_stack_000017bc == 0x200b)) {
              *(float *)(unaff_x19 + 199) =
                   fVar63 - in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
            }
          }
          fVar63 = *(float *)(unaff_x19 + 0x55);
          fVar70 = 0.0;
          if (fVar63 != 0.0) {
            fVar70 = (float)FUN_026fd454(&stack0x00001770,0);
            fVar54 = (float)FUN_026fd464(&stack0x00001770,0);
            fVar70 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                     (fVar63 * 0.5 - fVar68 * (fVar70 * 0.5 + fVar54));
            *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fVar70;
          }
          if (((unaff_w21 == 0) && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
             ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
            lVar27 = unaff_x19[0x22];
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar19 = FUN_02681b9c(lVar27,0,0);
            fVar55 = 0.0;
            if ((uVar19 & 1) != 0) {
              lVar27 = unaff_x19[0x22];
              if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              if (lVar27 == 0) goto LAB_0249920c;
              uVar19 = FUN_0267e1d8(lVar27,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54)
                                    ,0);
              fVar55 = 0.0;
              if ((uVar19 & 1) != 0) {
                lVar27 = unaff_x19[0x22];
                if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                if (lVar27 == 0) goto LAB_0249920c;
                fVar63 = (float)FUN_0267f610(lVar27,*(undefined4 *)
                                                     (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
                if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) goto LAB_0249920c;
                fVar54 = *(float *)(*in_stack_00000138 + 0x1b0);
                fVar55 = (float)FUN_0267f610(unaff_x19[0x22],
                                             *(undefined4 *)
                                              (*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
                fVar55 = fVar55 * fVar63 * fVar54 * 0.25;
                if (fVar63 < fVar72 + fVar55) {
                  fVar72 = fVar63 - fVar55;
                }
              }
            }
            if (*in_stack_00000138 == 0) goto LAB_0249920c;
            fVar63 = *(float *)(*in_stack_00000138 + 0x1b4);
          }
          else {
            lVar27 = unaff_x19[0x22];
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar19 = FUN_02681b9c(lVar27,0,0);
            fVar63 = 0.0;
            if ((uVar19 & 1) != 0) {
              lVar27 = unaff_x19[0x22];
              if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              if (lVar27 == 0) goto LAB_0249920c;
              uVar19 = FUN_0267e1d8(lVar27,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54)
                                    ,0);
              if ((uVar19 & 1) != 0) {
                lVar27 = unaff_x19[0x22];
                if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                if (lVar27 == 0) goto LAB_0249920c;
                uVar19 = FUN_0267e1d8(lVar27,*(undefined4 *)
                                              (*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
                if ((uVar19 & 1) != 0) {
                  lVar27 = unaff_x19[0x22];
                  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  if (lVar27 != 0) {
                    fVar54 = (float)FUN_0267f610(lVar27,*(undefined4 *)
                                                         (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),
                                                 0);
                    if ((*in_stack_00000138 != 0) && (unaff_x19[0x22] != 0)) {
                      fVar64 = *(float *)(*in_stack_00000138 + 0x1a8);
                      fVar55 = (float)FUN_0267f610(unaff_x19[0x22],
                                                   *(undefined4 *)
                                                    (*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
                      fVar55 = fVar55 * fVar54 * fVar64 * 0.25;
                      if (fVar54 < fVar72 + fVar55) {
                        fVar72 = fVar54 - fVar55;
                      }
                      goto LAB_024934bc;
                    }
                  }
                  goto LAB_0249920c;
                }
              }
            }
            fVar55 = 0.0;
          }
LAB_024934bc:
          fStack00000000000000ec = *(float *)(unaff_x19 + 199);
          fVar54 = (float)FUN_026fd464(&stack0x00001770,0);
          fStack00000000000000ec =
               fStack00000000000000ec +
               (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
               fVar68 * (fVar65 + ((fVar54 - fVar72) - fVar55));
          fVar65 = (float)FUN_026fd46c(&stack0x00001770,0);
          fVar54 = *(float *)((long)unaff_x19 + 0x614) +
                   ((fStack0000000000000134 + fVar68 * (fVar51 + fVar72 + fVar65)) -
                   *(float *)(unaff_x19 + 0x9a));
          fVar65 = (float)FUN_026fd45c(&stack0x00001770,0);
          fVar64 = fVar54 - fVar68 * (fVar72 + fVar72 + fVar65);
          fVar65 = (float)FUN_026fd454(&stack0x00001770,0);
          fVar51 = fStack00000000000000ec +
                   (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                   fVar68 * (fVar55 + fVar55 + fVar72 + fVar72 + fVar65);
          fStack00000000000000e8 = fStack00000000000000ec;
          fVar65 = fVar51;
          if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (unaff_w21 == 0)) &&
             ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
            fVar56 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
            fVar65 = (float)FUN_026fd46c(&stack0x00001770,0);
            fVar69 = fVar56 * fVar68 * (fVar55 + fVar72 + fVar65);
            fVar65 = (float)FUN_026fd46c(&stack0x00001770,0);
            fVar74 = (float)FUN_026fd45c(&stack0x00001770,0);
            fVar54 = fVar54 + 0.0;
            fVar64 = fVar64 + 0.0;
            fVar56 = fVar56 * fVar68 * (((fVar65 - fVar74) - fVar72) - fVar55);
            fVar65 = fVar51 + fVar56;
            fVar74 = fStack00000000000000ec + fVar69;
            fVar57 = (fVar69 - fVar56) * 0.5;
            fStack00000000000000ec = (fStack00000000000000ec + fVar56) - fVar57;
            fVar51 = (fVar51 + fVar69) - fVar57;
            fStack00000000000000e8 = fVar74 - fVar57;
            fVar65 = fVar65 - fVar57;
          }
          if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
            fVar57 = 0.0;
            fVar58 = 0.0;
            fVar66 = 0.0;
            fVar56 = 0.0;
            fVar69 = fVar64;
            fVar74 = fVar54;
          }
          else {
            thunk_FUN_026935f0(_uStack0000000000000060,0);
            fVar67 = (fVar51 + fStack00000000000000ec) * 0.5;
            fVar71 = (fVar64 + fVar54) * 0.5;
            fVar54 = fVar54 - fVar71;
            fVar56 = 0.0;
            fVar74 = fVar54;
            fStack00000000000000e8 =
                 (float)FUN_02692df0(fStack00000000000000e8 - fVar67,_uStack0000000000000060,0);
            fStack00000000000000e8 = fVar67 + fStack00000000000000e8;
            fVar56 = fVar56 + 0.0;
            fVar64 = fVar64 - fVar71;
            fVar57 = 0.0;
            fVar69 = fVar64;
            fStack00000000000000ec =
                 (float)FUN_02692df0(fStack00000000000000ec - fVar67,_uStack0000000000000060,0);
            fStack00000000000000ec = fVar67 + fStack00000000000000ec;
            fVar57 = fVar57 + 0.0;
            fVar66 = 0.0;
            fVar51 = (float)FUN_02692df0(fVar51 - fVar67,_uStack0000000000000060,0);
            fVar51 = fVar67 + fVar51;
            fVar54 = fVar71 + fVar54;
            fVar66 = fVar66 + 0.0;
            fVar58 = 0.0;
            fVar65 = (float)FUN_02692df0(fVar65 - fVar67,_uStack0000000000000060,0);
            fVar65 = fVar67 + fVar65;
            fVar64 = fVar71 + fVar64;
            fVar58 = fVar58 + 0.0;
            fVar69 = fVar71 + fVar69;
            fVar74 = fVar71 + fVar74;
          }
          if (*in_stack_00000150 == 0) goto LAB_0249920c;
          lVar27 = *(long *)(*in_stack_00000150 + 0x38);
          uVar19 = (ulong)(uint)fVar68;
          if (lVar27 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x27;
          *(float *)(lVar27 + 0x120) = fVar69;
          *(float *)(lVar27 + 0x11c) = fStack00000000000000ec;
          *(float *)(lVar27 + 0x124) = fVar57;
          if ((*in_stack_00000150 == 0) ||
             (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x27;
          *(float *)(lVar27 + 0x114) = fVar74;
          *(float *)(lVar27 + 0x110) = fStack00000000000000e8;
          *(float *)(lVar27 + 0x118) = fVar56;
          if ((*in_stack_00000150 == 0) ||
             (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x27;
          *(float *)(lVar27 + 0x128) = fVar51;
          *(float *)(lVar27 + 300) = fVar54;
          *(float *)(lVar27 + 0x130) = fVar66;
          if ((*in_stack_00000150 == 0) ||
             (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x27;
          *(float *)(lVar27 + 0x134) = fVar65;
          *(float *)(lVar27 + 0x138) = fVar64;
          *(float *)(lVar27 + 0x13c) = fVar58;
          if ((*in_stack_00000150 == 0) ||
             (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0)) goto LAB_0249920c;
          uVar17 = *in_stack_00000148;
          lVar30 = (long)(int)uVar17;
          if (*(uint *)(lVar27 + 0x18) <= uVar17)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar34 = lVar27 + lVar30 * unaff_x27;
          *(int *)(lVar34 + 0x140) = (int)unaff_x19[199];
          fVar54 = *(float *)(unaff_x19 + 0x9a);
          uVar20 = (ulong)(uint)fVar54;
          fVar65 = *(float *)((long)unaff_x19 + 0x614);
          *(float *)(lVar34 + 0x15c) = (fVar51 - fStack00000000000000ec) / (fVar74 - fVar69);
          *(float *)(lVar34 + 0x14c) = (fStack0000000000000134 - fVar54) + fVar65;
          fVar52 = fVar52 * fVar68;
          if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
            fVar52 = fVar52 / fStack00000000000000f4;
            fVar50 = (fVar50 * fVar68) / fStack00000000000000f4;
          }
          else {
            fVar50 = fVar50 * fVar68;
          }
          uVar60 = *(uint *)(unaff_x19 + 0x92);
          bVar10 = uVar12 != 0;
          fVar52 = fVar65 + fVar52;
          bVar11 = uVar17 != uVar60;
          if (bVar11 && bVar10) {
            fVar65 = *(float *)(unaff_x19 + 0x98);
            lVar27 = lVar27 + lVar30 * unaff_x27;
            *(float *)(lVar27 + 0x154) = fVar65;
            fVar50 = *(float *)((long)unaff_x19 + 0x4c4);
            *(float *)(lVar27 + 0x148) = fVar65 - fVar54;
            *(float *)(lVar27 + 0x158) = fVar50;
            *(float *)(unaff_x19 + 0x97) = fVar65 - fVar54;
            fVar50 = fVar50 - fVar54;
            *(float *)(lVar27 + 0x150) = fVar50;
          }
          else {
            fVar50 = fVar65 + fVar50;
            fVar51 = fVar52;
            fVar64 = fVar50;
            if (fVar65 != 0.0) {
              fVar51 = (fVar52 - fVar65) / *(float *)((long)unaff_x19 + 0x3fc);
              fVar64 = (fVar50 - fVar65) / *(float *)((long)unaff_x19 + 0x3fc);
              if (fVar51 <= fVar52) {
                fVar51 = fVar52;
              }
              if (fVar50 <= fVar64) {
                fVar64 = fVar50;
              }
            }
            lVar27 = lVar27 + lVar30 * unaff_x27;
            fVar65 = fVar51;
            if (fVar51 <= *(float *)(unaff_x19 + 0x98)) {
              fVar65 = *(float *)(unaff_x19 + 0x98);
            }
            fVar74 = fVar64;
            if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar64) {
              fVar74 = *(float *)((long)unaff_x19 + 0x4c4);
            }
            *(float *)((long)unaff_x19 + 0x4c4) = fVar74;
            fVar50 = fVar50 - fVar54;
            *(float *)(unaff_x19 + 0x98) = fVar65;
            *(float *)(lVar27 + 0x154) = fVar51;
            *(float *)(lVar27 + 0x158) = fVar64;
            *(float *)(lVar27 + 0x148) = fVar52 - fVar54;
            *(float *)(unaff_x19 + 0x97) = fVar52 - fVar54;
            *(float *)(lVar27 + 0x150) = fVar50;
          }
          *(float *)((long)unaff_x19 + 0x4bc) = fVar50;
          if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
            if (!bVar11 || !bVar10) {
              *(float *)(unaff_x19 + 0x96) = fVar65;
              if (unaff_x19[0x1f] != 0) {
                fVar50 = *(float *)((long)unaff_x19 + 0x4b4);
                fVar65 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
                fStack00000000000000f4 = (fVar68 * fVar65) / fStack00000000000000f4;
                uVar20 = (ulong)*(uint *)(unaff_x19 + 0x9a);
                if (fVar50 <= fStack00000000000000f4) {
                  fVar50 = fStack00000000000000f4;
                }
                *(float *)((long)unaff_x19 + 0x4b4) = fVar50;
                goto LAB_02493948;
              }
              goto LAB_0249920c;
            }
          }
          else {
LAB_02493948:
            if ((!bVar11 || !bVar10) && (float)uVar20 == 0.0) {
              fVar50 = *(float *)(in_stack_00000070 + 0x208);
              if (*(float *)(in_stack_00000070 + 0x208) <= fVar52) {
                fVar50 = fVar52;
              }
              *(float *)(in_stack_00000070 + 0x208) = fVar50;
            }
          }
          lVar27 = *in_stack_00000150;
          if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_0249920c;
          uVar39 = *in_stack_00000148;
          if (*(uint *)(lVar30 + 0x18) <= uVar39)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar30 = lVar30 + (int)uVar39 * unaff_x27;
          *(undefined1 *)(lVar30 + 0x194) = 0;
          uVar33 = *(uint *)(unaff_x19 + 0x4e);
          uVar45 = in_stack_000017bc;
          if ((in_stack_000017bc == 9) ||
             (((((uVar12 == 0 && (in_stack_000017bc != 3)) && (in_stack_000017bc != 0x200b)) &&
               (in_stack_000017bc != 0xad)) ||
              (((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) != 0 ||
               (*(int *)((long)unaff_x19 + 0x63c) == 1)))))) {
            *(undefined1 *)(lVar30 + 0x194) = 1;
            pfVar31 = _fStack0000000000000088;
            pfVar35 = _fStack0000000000000098;
            if (unaff_w20 != 0) {
              lVar27 = *(long *)(lVar27 + 0x50);
              if (lVar27 == 0) goto LAB_0249920c;
              if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
              pfVar35 = (float *)(lVar27 + 0x60);
              pfVar31 = (float *)(lVar27 + 100);
            }
            fVar65 = *pfVar35;
            fVar51 = *pfVar31;
            fVar50 = *(float *)(unaff_x19 + 0x6b);
            fVar52 = *(float *)(unaff_x19 + 199);
            fStack00000000000000d4 = (in_stack_00000090 - fVar65) - fVar51;
            bVar10 = true;
            if ((fVar50 <= fStack00000000000000d4) && (bVar10 = false, !NAN(fVar50))) {
              bVar10 = fVar50 == -1.0;
            }
            if (!bVar10) {
              fStack00000000000000d4 = fVar50;
            }
            fVar50 = 0.0;
            if ((char)unaff_x19[0x1d] == '\0') {
              fVar50 = (float)FUN_026fd474(&stack0x00001770,0);
              uVar20 = (ulong)*(uint *)(unaff_x19 + 0x9a);
            }
            fVar74 = *(float *)((long)unaff_x19 + 0x4c4);
            fVar54 = *(float *)((long)unaff_x19 + 0x2cc);
            fVar64 = (float)uVar20;
            if (in_stack_000017bc != 0xad) {
              fVar62 = fVar68;
            }
            fVar56 = 0.0;
            if ((0.0 < fVar64) && (fVar56 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
              fVar56 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
            }
            fVar56 = (*(float *)(unaff_x19 + 0x96) - (fVar74 - fVar64)) + fVar56;
            uVar39 = *in_stack_00000148;
            if (fStack00000000000000a4 < fVar56) {
              if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                *(uint *)((long)unaff_x19 + 0x2dc) = uVar39;
              }
              plVar48 = (long *)StringLiteral_302;
              plVar44 = (long *)System_Threading_Mutex_TypeInfo;
              uVar21 = DAT_02941c08;
              if ((char)unaff_x19[0x46] != '\0') {
                fVar57 = *(float *)(unaff_x19 + 0x58);
                if (((fVar57 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar64)) &&
                   (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                  fVar62 = *(float *)((long)unaff_x19 + 0x2b4) +
                           ((in_stack_00000018._4_4_ - fVar56) / (float)(int)unaff_x19[0x94]) /
                           fStack0000000000000054;
                  if (fVar62 <= fVar57) {
                    fVar62 = fVar57;
                  }
                  goto LAB_024964c8;
                }
                fVar56 = *(float *)((long)unaff_x19 + 0x1dc);
                fVar64 = *(float *)(unaff_x19 + 0x49);
                uVar20 = (ulong)(uint)fVar64;
                if ((fVar64 < fVar56) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                {
                  fVar62 = (fVar56 - *(float *)(unaff_x19 + 0x47)) * 0.5;
                  if (fVar62 <= DAT_028aa298) {
                    fVar62 = DAT_028aa298;
                  }
                  fVar72 = (fVar56 - fVar62) * 20.0 + 0.5;
                  fVar62 = DAT_02958220;
                  if (fVar72 != INFINITY) {
                    fVar62 = (float)(int)fVar72 / 20.0;
                  }
                  if (fVar62 <= fVar64) {
                    fVar62 = fVar64;
                  }
                  *(float *)((long)unaff_x19 + 0x234) = fVar56;
                  goto LAB_02495fd8;
                }
              }
              switch((int)unaff_x19[0x5b]) {
              case 1:
                lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
                if (*(int *)(lVar27 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar27 = *plVar44;
                }
                lVar30 = *(long *)(lVar27 + 0xb8);
                lVar27 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                if ((*(byte *)(lVar27 + 0x132) & 1) == 0) {
                  lVar27 = FUN_00d5941c(lVar27);
                }
                plVar48 = (long *)StringLiteral_302;
                lVar27 = *(long *)(*(long *)(lVar27 + 0xc0) + 8);
                if ((*(byte *)(lVar27 + 0x132) & 1) == 0) {
                  lVar27 = FUN_00d5941c();
                }
                piVar22 = (int *)thunk_FUN_00d32ed4(lVar30 + 0x11f0,*(long *)(lVar27 + 0x80) + 0xa0)
                ;
                if (*piVar22 == 0) {
LAB_02495f00:
                  in_stack_000017a8 = DAT_02941c08;
                  in_stack_00000148[0] = 0;
                  in_stack_00000148[1] = 0;
                  uVar19 = uVar20;
                  in_stack_00001788 = 0xffffffff;
                  goto LAB_02492630;
                }
                lVar27 = *plVar44;
                if (*(int *)(lVar27 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar27 = *plVar44;
                }
                FUN_013b8de4(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x00000880,
                             *(undefined8 *)
                              Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                            );
                memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_02494358:
                iVar14 = FUN_024d66ec();
LAB_02494364:
                iVar49 = *(int *)((long)unaff_x19 + 0x48c) + -1;
                *(int *)((long)unaff_x19 + 0x48c) = iVar49;
                in_stack_00000140 = in_stack_00000140 + 1;
                uVar19 = uVar20;
                in_stack_00001788 = iVar14 - 1;
                in_stack_000017a8 = CONCAT44(0x2026,iVar49);
                goto LAB_02492630;
              default:
                goto 
                UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited
                ;
              case 3:
                if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
LAB_02493ec0:
                plVar48 = (long *)StringLiteral_302;
                in_stack_00001788 = FUN_024d66ec();
                break;
              case 5:
                if ((uVar39 == 0) || ((int)in_stack_00001788 < 0)) {
                  *in_stack_00000148 = 0;
                  plVar48 = (long *)StringLiteral_302;
                  plVar44 = (long *)System_Threading_Mutex_TypeInfo;
                  uVar19 = uVar20;
                  in_stack_00001788 = 0xffffffff;
                  in_stack_000017a8 = uVar21;
                  goto LAB_02492630;
                }
                fVar62 = *(float *)(unaff_x19 + 0x98);
                if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                in_stack_00001788 = FUN_024d66ec();
                if (fVar62 - fVar74 <= fStack00000000000000a4) {
                  *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
                  *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
                  uVar19 = *(ulong *)(*(long *)(*plVar44 + 0xb8) + 0x15a8);
                  *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
                  *(undefined4 *)(unaff_x19 + 0x99) = 0;
                  lVar27 = NEON_rev64(uVar19,4);
                  unaff_x19[0x98] = lVar27;
                  *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                  *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
                  *(int *)(unaff_x19 + 0x94) = (int)unaff_x19[0x94] + 1;
                  *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                  goto LAB_02492630;
                }
                break;
              case 6:
                if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                in_stack_00001788 = FUN_024d66ec();
                plVar48 = (long *)StringLiteral_302;
                lVar27 = unaff_x19[0x5c];
                if (*(int *)(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)
                                      System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                    );
                }
                uVar19 = FUN_02681b9c(lVar27,0,0);
                if ((uVar19 & 1) != 0) {
                  plVar46 = (long *)unaff_x19[0x5c];
                  uVar21 = (**(code **)(*unaff_x19 + 0x548))();
                  if (plVar46 == (long *)0x0) goto LAB_0249920c;
                  (**(code **)(*plVar46 + 0x558))(plVar46,uVar21,*(undefined8 *)(*plVar46 + 0x560));
                  lVar27 = unaff_x19[0x5c];
                  if (lVar27 == 0) goto LAB_0249920c;
                  *(int *)(lVar27 + 0x3f8) = (int)unaff_x19[0x7f];
                  FUN_024c910c(lVar27,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                  plVar46 = (long *)unaff_x19[0x5c];
                  if (plVar46 == (long *)0x0) goto LAB_0249920c;
                  (**(code **)(*plVar46 + 0x7d8))(plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
                  *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                }
              }
LAB_0249408c:
              uVar19 = uVar20;
              in_stack_000017a8 = CONCAT44(3,uVar39);
              goto LAB_02492630;
            }
UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited:
            plVar44 = (long *)System_Threading_Mutex_TypeInfo;
            fVar64 = 1.0 - fVar54;
            uVar20 = (ulong)(uint)fVar64;
            fVar50 = ABS(fVar52) + fVar50 * fVar64 * fVar62;
            fVar62 = _DAT_0294c6e8;
            if ((uVar33 & 0x18) == 0) {
              fVar62 = 1.0;
            }
            if (fVar62 * fStack00000000000000d4 < fVar50) {
              if (((char)unaff_x19[0x5a] != '\0') && (uVar39 != *(uint *)(unaff_x19 + 0x92))) {
                if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                in_stack_00001788 = FUN_024d66ec();
                if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                  lVar27 = *in_stack_00000150;
                  if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0))
                  goto LAB_0249920c;
                  if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  fVar52 = *(float *)(unaff_x19 + 0x9a);
                  fVar54 = 0.0;
                  if ((0.0 < fVar52) && (fVar54 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
                    fVar54 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                  }
                  fVar54 = in_stack_000000c8 * *(float *)(unaff_x19 + 0x56) +
                           *(float *)(lVar30 + (int)*in_stack_00000148 * unaff_x27 + 0x154) +
                           (fVar54 - *(float *)((long)unaff_x19 + 0x4c4)) +
                           fStack0000000000000054 *
                           (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
                }
                else {
                  lVar27 = unaff_x19[0x6c];
                  *(undefined1 *)((long)unaff_x19 + 700) = 1;
                  if (lVar27 == 0) goto LAB_0249920c;
                  fVar52 = *(float *)(unaff_x19 + 0x9a);
                  fVar54 = *(float *)(unaff_x19 + 0x57) +
                           in_stack_000000c8 * *(float *)(unaff_x19 + 0x56);
                }
                puVar8 = System_Threading_Mutex_TypeInfo;
                lVar27 = *(long *)(lVar27 + 0x38);
                if (lVar27 != 0) {
                  uVar38 = *(uint *)((long)unaff_x19 + 0x48c);
                  if ((*(uint *)(lVar27 + 0x18) <= uVar38) ||
                     (uVar5 = uVar38 - 1, *(uint *)(lVar27 + 0x18) <= uVar5))
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  uVar20 = (ulong)(uint)(fVar54 + *(float *)(unaff_x19 + 0x96));
                  fVar64 = (fVar54 + *(float *)(unaff_x19 + 0x96) + fVar52) -
                           *(float *)(lVar27 + (int)uVar38 * unaff_x27 + 0x158);
                  if (((in_stack_00000068._4_1_ & 1) == 0 &&
                       *(short *)(lVar27 + (long)(int)uVar5 * (long)iVar13 + 0x20) == 0xad) &&
                     ((fVar64 < fStack00000000000000a4 || ((int)unaff_x19[0x5b] == 0)))) {
                    *in_stack_00000148 = uVar5;
LAB_024947b4:
                    in_stack_000017a8 = CONCAT44(0x2d,uVar5);
                    in_stack_00000068._4_1_ = 0;
                    plVar48 = (long *)StringLiteral_302;
                    plVar44 = (long *)System_Threading_Mutex_TypeInfo;
                    uVar19 = uVar20;
                    in_stack_00001788 = in_stack_00001788 - 1;
                    goto LAB_02492630;
                  }
                  if (*(short *)(lVar27 + (int)uVar38 * unaff_x27 + 0x20) == 0xad) {
                    in_stack_00000068._4_1_ = 1;
                    plVar48 = (long *)StringLiteral_302;
                    plVar44 = (long *)System_Threading_Mutex_TypeInfo;
                    uVar19 = uVar20;
                    goto LAB_02492630;
                  }
                  if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
                    fVar54 = *(float *)((long)unaff_x19 + 0x2cc);
                    fVar52 = *(float *)(unaff_x19 + 0x59) / 100.0;
                    if ((fVar52 <= fVar54) ||
                       ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
                      fVar54 = *(float *)((long)unaff_x19 + 0x1dc);
                      uVar20 = (ulong)(uint)fVar54;
                      fVar52 = *(float *)(unaff_x19 + 0x49);
                      if ((fVar52 < fVar54) &&
                         (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                      goto LAB_02499210;
                      goto LAB_024946c0;
                    }
LAB_024992ac:
                    fVar72 = fVar50;
                    if (0.0 < fVar54) {
                      fVar72 = fVar50 / (1.0 - fVar54);
                    }
                    fVar54 = fVar54 + (fVar50 - fVar62 * (fStack00000000000000d4 + DAT_02958218)) /
                                      fVar72;
LAB_0249929c:
                    if (fVar52 <= fVar54) {
                      fVar54 = fVar52;
                    }
                    *(float *)((long)unaff_x19 + 0x2cc) = fVar54;
                    return;
                  }
LAB_024946c0:
                  lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
                  if (*(int *)(lVar27 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar27 = *(long *)puVar8;
                  }
                  iVar14 = *(int *)(*(long *)(lVar27 + 0xb8) + 0xe78);
                  if ((((float)iVar14 != fStack0000000000000034) && (iVar14 != -1)) &&
                     (((bStack000000000000005c ^ 1) & 1) == 0)) {
                    if (*(int *)(lVar27 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    in_stack_00001788 = FUN_024d66ec();
                    if ((unaff_x19[0x6c] == 0) ||
                       (lVar27 = *(long *)(unaff_x19[0x6c] + 0x38), lVar27 == 0)) goto LAB_0249920c;
                    uVar5 = *in_stack_00000148 - 1;
                    if (*(uint *)(lVar27 + 0x18) <= uVar5)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    fStack0000000000000034 = (float)iVar14;
                    if (*(short *)(lVar27 + (long)(int)uVar5 * (long)iVar13 + 0x20) == 0xad) {
                      *in_stack_00000148 = uVar5;
                      goto LAB_024947b4;
                    }
                  }
                  if (fVar64 <= fStack00000000000000a4) {
                    FUN_024d7014(fStack0000000000000054,uVar19,in_stack_000000c8,
                                 *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar63,
                                 fStack00000000000000cc,fStack00000000000000d4,
                                 fStack0000000000000048);
                    bStack000000000000005c = 1;
                    in_stack_00000068._4_1_ = 0;
                    fStack0000000000000058 = 1.4013e-45;
                    plVar48 = (long *)StringLiteral_302;
                    plVar44 = (long *)System_Threading_Mutex_TypeInfo;
                    goto LAB_02492630;
                  }
                  if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                    *(undefined4 *)((long)unaff_x19 + 0x2dc) =
                         *(undefined4 *)((long)unaff_x19 + 0x48c);
                  }
                  plVar48 = (long *)StringLiteral_302;
                  plVar44 = (long *)System_Threading_Mutex_TypeInfo;
                  if ((char)unaff_x19[0x46] != '\0') {
                    fVar52 = *(float *)(unaff_x19 + 0x58);
                    if ((fVar52 < *(float *)((long)unaff_x19 + 0x2b4)) &&
                       (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                      fVar62 = *(float *)((long)unaff_x19 + 0x2b4) +
                               ((in_stack_00000018._4_4_ - fVar64) /
                               (float)((int)unaff_x19[0x94] + 1)) / fStack0000000000000054;
                      if (fVar62 <= fVar52) {
                        fVar62 = fVar52;
                      }
LAB_024964c8:
                      *(float *)((long)unaff_x19 + 0x2b4) = fVar62;
                      return;
                    }
                    fVar54 = *(float *)((long)unaff_x19 + 0x2cc);
                    fVar52 = *(float *)(unaff_x19 + 0x59) / 100.0;
                    if ((fVar54 < fVar52) &&
                       (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                    goto LAB_024992ac;
                    fVar54 = *(float *)((long)unaff_x19 + 0x1dc);
                    uVar20 = (ulong)(uint)fVar54;
                    fVar52 = *(float *)(unaff_x19 + 0x49);
                    if ((fVar52 < fVar54) &&
                       (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                    goto LAB_02499210;
                  }
                  switch((int)unaff_x19[0x5b]) {
                  case 0:
                  case 2:
                  case 4:
                    FUN_024d7014(fStack0000000000000054,uVar19,in_stack_000000c8,
                                 *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar63,
                                 fStack00000000000000cc,fStack00000000000000d4,
                                 fStack0000000000000048);
                    break;
                  case 1:
                    lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
                    if (*(int *)(lVar27 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar27 = *plVar44;
                    }
                    lVar30 = *(long *)(lVar27 + 0xb8);
                    lVar27 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                    if ((*(byte *)(lVar27 + 0x132) & 1) == 0) {
                      lVar27 = FUN_00d5941c(lVar27);
                    }
                    lVar27 = *(long *)(*(long *)(lVar27 + 0xc0) + 8);
                    if ((*(byte *)(lVar27 + 0x132) & 1) == 0) {
                      lVar27 = FUN_00d5941c();
                    }
                    piVar22 = (int *)thunk_FUN_00d32ed4(lVar30 + 0x11f0,
                                                        *(long *)(lVar27 + 0x80) + 0xa0);
                    if (*piVar22 == 0) {
                      in_stack_00000068._4_1_ = 0;
                      goto LAB_02495f00;
                    }
                    lVar27 = *plVar44;
                    if (*(int *)(lVar27 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar27 = *plVar44;
                    }
                    FUN_013b8de4(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x00000880,
                                 *(undefined8 *)
                                  Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                );
                    memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
                    iVar14 = FUN_024d66ec();
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
                    FUN_024d7014(fStack0000000000000054,uVar19,in_stack_000000c8,
                                 *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar63,
                                 fStack00000000000000cc,fStack00000000000000d4,
                                 fStack0000000000000048);
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
                    uVar19 = FUN_02681b9c(lVar27,0,0);
                    if ((uVar19 & 1) != 0) {
                      plVar46 = (long *)unaff_x19[0x5c];
                      uVar21 = (**(code **)(*unaff_x19 + 0x548))();
                      if (plVar46 == (long *)0x0) goto LAB_0249920c;
                      (**(code **)(*plVar46 + 0x558))
                                (plVar46,uVar21,*(undefined8 *)(*plVar46 + 0x560));
                      lVar27 = unaff_x19[0x5c];
                      if (lVar27 == 0) goto LAB_0249920c;
                      *(int *)(lVar27 + 0x3f8) = (int)unaff_x19[0x7f];
                      FUN_024c910c(lVar27,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                      plVar46 = (long *)unaff_x19[0x5c];
                      if (plVar46 == (long *)0x0) goto LAB_0249920c;
                      (**(code **)(*plVar46 + 0x7d8))(plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0))
                      ;
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
                  plVar48 = (long *)StringLiteral_302;
                  plVar44 = (long *)System_Threading_Mutex_TypeInfo;
                  goto LAB_02492630;
                }
                goto LAB_0249920c;
              }
              if (((char)unaff_x19[0x46] != '\0') &&
                 (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                fVar52 = *(float *)(unaff_x19 + 0x59) / 100.0;
                if (fVar54 < fVar52) {
                  fVar72 = fVar50 / fVar64;
                  if (fVar54 <= 0.0) {
                    fVar72 = fVar50;
                  }
                  fVar54 = fVar54 + (fVar50 - fVar62 * (fStack00000000000000d4 + DAT_02958218)) /
                                    fVar72;
                  goto LAB_0249929c;
                }
                fVar54 = *(float *)((long)unaff_x19 + 0x1dc);
                uVar20 = (ulong)(uint)fVar54;
                fVar52 = *(float *)(unaff_x19 + 0x49);
                if (fVar54 <= fVar52) goto LAB_02493e34;
LAB_02499210:
                fVar62 = (fVar54 - *(float *)(unaff_x19 + 0x47)) * 0.5;
                if (fVar62 <= DAT_028aa298) {
                  fVar62 = DAT_028aa298;
                }
                *(float *)((long)unaff_x19 + 0x234) = fVar54;
                fVar72 = (fVar54 - fVar62) * 20.0 + 0.5;
                fVar62 = DAT_02958220;
                if (fVar72 != INFINITY) {
                  fVar62 = (float)(int)fVar72 / 20.0;
                }
                if (fVar62 <= fVar52) {
                  fVar62 = fVar52;
                }
LAB_02495fd8:
                *(float *)((long)unaff_x19 + 0x1dc) = fVar62;
                return;
              }
LAB_02493e34:
              iVar14 = (int)unaff_x19[0x5b];
              if (iVar14 == 1) {
                lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
                if (*(int *)(lVar27 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar27 = *plVar44;
                }
                plVar48 = (long *)StringLiteral_302;
                lVar30 = *(long *)(lVar27 + 0xb8);
                lVar27 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                if ((*(byte *)(lVar27 + 0x132) & 1) == 0) {
                  lVar27 = FUN_00d5941c(lVar27);
                }
                lVar27 = *(long *)(*(long *)(lVar27 + 0xc0) + 8);
                if ((*(byte *)(lVar27 + 0x132) & 1) == 0) {
                  lVar27 = FUN_00d5941c();
                }
                piVar22 = (int *)thunk_FUN_00d32ed4(lVar30 + 0x11f0,*(long *)(lVar27 + 0x80) + 0xa0)
                ;
                if (*piVar22 != 0) {
                  lVar27 = *plVar44;
                  if (*(int *)(lVar27 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar27 = *plVar44;
                  }
                  FUN_013b8de4(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x00000880,
                               *(undefined8 *)
                                Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                              );
                  memcpy(&stack0x00000c70,&stack0x00000880,0x378);
                  goto LAB_02494358;
                }
                goto LAB_02495f00;
              }
              if (iVar14 != 6) {
                if (iVar14 == 3) {
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
              plVar48 = (long *)StringLiteral_302;
              in_stack_00001788 = FUN_024d66ec();
              lVar27 = unaff_x19[0x5c];
              if (*(int *)(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                          0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)
                                    System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                  );
              }
              uVar19 = FUN_02681b9c(lVar27,0,0);
              if ((uVar19 & 1) != 0) {
                plVar46 = (long *)unaff_x19[0x5c];
                uVar21 = (**(code **)(*unaff_x19 + 0x548))();
                if (plVar46 == (long *)0x0) goto LAB_0249920c;
                (**(code **)(*plVar46 + 0x558))(plVar46,uVar21,*(undefined8 *)(*plVar46 + 0x560));
                lVar27 = unaff_x19[0x5c];
                if (lVar27 == 0) goto LAB_0249920c;
                *(int *)(lVar27 + 0x3f8) = (int)unaff_x19[0x7f];
                FUN_024c910c(lVar27,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                plVar46 = (long *)unaff_x19[0x5c];
                if (plVar46 == (long *)0x0) goto LAB_0249920c;
                (**(code **)(*plVar46 + 0x7d8))(plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
                *(undefined1 *)(unaff_x19 + 0x5e) = 1;
              }
LAB_02494484:
              uVar19 = uVar20;
              in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
              goto LAB_02492630;
            }
LAB_02494950:
            if (in_stack_000017bc != 0xad) {
              if (in_stack_000017bc != 9) {
                if (*(int *)((long)unaff_x19 + 0x63c) == 1) {
                  (**(code **)(*unaff_x19 + 0x8c8))();
                }
                else if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
                  (**(code **)(*unaff_x19 + 0x8b8))(fVar72,fVar55);
                }
                uVar39 = *in_stack_00000148;
                if (((uint)fStack0000000000000058 & 1) != 0) {
                  *(uint *)(in_stack_00000070 + 0x1f0) = uVar39;
                }
                *(uint *)((long)unaff_x19 + 0x49c) = uVar39;
                *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
                if ((unaff_x19[0x6c] != 0) &&
                   (lVar27 = *(long *)(unaff_x19[0x6c] + 0x50), lVar27 != 0)) {
                  if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar27 + 0x18)) {
                    lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                    fStack0000000000000058 = 0.0;
                    *(float *)(lVar27 + 0x60) = fVar65;
                    *(float *)(lVar27 + 100) = fVar51;
                    goto LAB_02494abc;
                  }
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                }
                goto LAB_0249920c;
              }
              lVar27 = *in_stack_00000150;
              if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0))
              goto LAB_0249920c;
              uVar39 = *in_stack_00000148;
              if (uVar39 < *(uint *)(lVar30 + 0x18)) {
                *(undefined1 *)(lVar30 + (int)uVar39 * unaff_x27 + 0x194) = 0;
                *(uint *)((long)unaff_x19 + 0x49c) = uVar39;
                lVar30 = *(long *)(lVar27 + 0x50);
                if (lVar30 != 0) {
                  if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar30 + 0x18)) {
                    lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                    *(int *)(lVar30 + 0x2c) = *(int *)(lVar30 + 0x2c) + 1;
                    goto LAB_024949c4;
                  }
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                }
                goto LAB_0249920c;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            }
            if ((*in_stack_00000150 == 0) ||
               (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0)) goto LAB_0249920c;
            if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            *(undefined1 *)(lVar27 + (int)*in_stack_00000148 * unaff_x27 + 0x194) = 0;
          }
          else {
            if (((in_stack_000017bc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
              fVar62 = 0.0;
              if ((0.0 < (float)uVar20) && (fVar62 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0'))
              {
                fVar62 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
              }
              uVar19 = (ulong)(uint)fStack00000000000000a4;
              if (fStack00000000000000a4 <
                  (*(float *)(unaff_x19 + 0x96) -
                  (*(float *)((long)unaff_x19 + 0x4c4) - (float)uVar20)) + fVar62) {
                if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                  *(uint *)((long)unaff_x19 + 0x2dc) = uVar39;
                }
                plVar48 = (long *)StringLiteral_302;
                plVar44 = (long *)System_Threading_Mutex_TypeInfo;
                if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                in_stack_00001788 = FUN_024d66ec();
                lVar27 = unaff_x19[0x5c];
                if (*(int *)(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)
                                      System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                    );
                }
                uVar20 = FUN_02681b9c(lVar27,0,0);
                if ((uVar20 & 1) != 0) {
                  plVar46 = (long *)unaff_x19[0x5c];
                  uVar21 = (**(code **)(*unaff_x19 + 0x548))();
                  if (plVar46 == (long *)0x0) goto LAB_0249920c;
                  (**(code **)(*plVar46 + 0x558))(plVar46,uVar21,*(undefined8 *)(*plVar46 + 0x560));
                  lVar27 = unaff_x19[0x5c];
                  if (lVar27 == 0) goto LAB_0249920c;
                  *(int *)(lVar27 + 0x3f8) = (int)unaff_x19[0x7f];
                  FUN_024c910c(lVar27,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                  plVar46 = (long *)unaff_x19[0x5c];
                  if (plVar46 == (long *)0x0) goto LAB_0249920c;
                  (**(code **)(*plVar46 + 0x7d8))(plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
                  *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                }
                in_stack_000017a8 = CONCAT44(3,uVar39);
                goto LAB_02492630;
              }
            }
            if ((((in_stack_000017bc - 0x2007 < 0x23) &&
                 ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
                (in_stack_000017bc - 10 < 2)) || (in_stack_000017bc == 0xa0)) {
LAB_024944e4:
              if (((in_stack_000017bc != 0xad) && (in_stack_000017bc != 0x200b)) &&
                 (in_stack_000017bc != 0x2060)) {
                lVar27 = *in_stack_00000150;
                if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x50), lVar30 == 0))
                goto LAB_0249920c;
                if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                *(int *)(lVar30 + 0x2c) = *(int *)(lVar30 + 0x2c) + 1;
                *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
              }
            }
            else {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar19 = FUN_016fa418(in_stack_000017bc,0);
              if ((uVar19 & 1) != 0) goto LAB_024944e4;
            }
            if (in_stack_000017bc == 0xa0) {
              if ((*in_stack_00000150 == 0) ||
                 (lVar27 = *(long *)(*in_stack_00000150 + 0x50), lVar27 == 0)) goto LAB_0249920c;
              if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_024949c4:
              *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
            }
          }
LAB_02494abc:
          if (((int)unaff_x19[0x5b] == 1) && ((in_stack_000017bc == 0x2d || (unaff_w20 != 1)))) {
            if (unaff_x19[0xca] == 0) goto LAB_0249920c;
            fVar62 = *(float *)(unaff_x19 + 0x3c);
            iVar14 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
            if (unaff_x19[0xca] == 0) goto LAB_0249920c;
            fVar65 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
            lVar27 = unaff_x19[0xc9];
            fVar50 = fStack0000000000000084;
            if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
              fVar50 = 1.0;
            }
            if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_0249920c;
            fVar52 = *(float *)((long)unaff_x19 + 0x3fc);
            fVar55 = *(float *)(lVar27 + 0x2c);
            fVar51 = (float)FUN_026fd668(*(long *)(lVar27 + 0x20),0);
            fVar54 = *_fStack0000000000000098;
            fVar51 = fVar52 * (fVar62 / (float)iVar14) * fVar65 * fVar50 * fVar55 * fVar51;
            fVar62 = *_fStack0000000000000088;
            if ((in_stack_000017bc == 10) &&
               (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
              if ((*in_stack_00000150 == 0) ||
                 (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0)) goto LAB_0249920c;
              uVar39 = *(int *)((long)unaff_x19 + 0x48c) - 1;
              if (*(uint *)(lVar27 + 0x18) <= uVar39)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              if (unaff_x19[0xca] == 0) goto LAB_0249920c;
              fVar50 = *(float *)(lVar27 + (long)(int)uVar39 * (long)iVar13 + 0x60);
              iVar14 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
              if (unaff_x19[0xca] == 0) goto LAB_0249920c;
              fVar52 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
              lVar27 = unaff_x19[0xc9];
              fVar65 = fStack0000000000000084;
              if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                fVar65 = 1.0;
              }
              if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_0249920c;
              fVar55 = *(float *)((long)unaff_x19 + 0x3fc);
              fVar64 = *(float *)(lVar27 + 0x2c);
              fVar51 = (float)FUN_026fd668(*(long *)(lVar27 + 0x20),0);
              if ((*in_stack_00000150 == 0) ||
                 (lVar27 = *(long *)(*in_stack_00000150 + 0x50), lVar27 == 0)) goto LAB_0249920c;
              if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
              fVar54 = *(float *)(lVar27 + 0x60);
              fVar62 = *(float *)(lVar27 + 100);
              fVar51 = fVar55 * (fVar50 / (float)iVar14) * fVar52 * fVar65 * fVar64 * fVar51;
            }
            fVar55 = *(float *)(unaff_x19 + 0x9a);
            fVar65 = *(float *)(unaff_x19 + 0x96);
            fVar64 = *(float *)((long)unaff_x19 + 0x4c4);
            fVar50 = 0.0;
            fVar52 = 0.0;
            if ((0.0 < fVar55) && (fVar52 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
              fVar52 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
            }
            fVar74 = *(float *)(unaff_x19 + 199);
            if ((char)unaff_x19[0x1d] == '\0') {
              if ((unaff_x19[0xc9] == 0) ||
                 (lVar27 = *(long *)(unaff_x19[0xc9] + 0x20), lVar27 == 0)) goto LAB_0249920c;
              FUN_026fd62c(&stack0x00000880,lVar27,0);
              fVar50 = (float)FUN_026fd474(&stack0x000016e0,0);
            }
            puVar8 = System_Threading_Mutex_TypeInfo;
            fVar56 = *(float *)(unaff_x19 + 0x6b);
            fVar62 = (in_stack_00000090 - fVar54) - fVar62;
            bVar10 = true;
            if ((fVar56 <= fVar62) && (bVar10 = false, !NAN(fVar56))) {
              bVar10 = fVar56 == -1.0;
            }
            if (!bVar10) {
              fVar62 = fVar56;
            }
            fVar54 = _DAT_0294c6e8;
            if ((uVar33 & 0x18) == 0) {
              fVar54 = 1.0;
            }
            if (((fVar65 - (fVar64 - fVar55)) + fVar52 < fStack00000000000000a4) &&
               (ABS(fVar74) + fVar51 * fVar50 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
                fVar54 * fVar62)) {
              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_024d69d4();
              lVar27 = *(long *)(*(long *)puVar8 + 0xb8);
              memcpy(&stack0x00000508,(void *)(lVar27 + 0x788),0x378);
              FUN_013b86dc(lVar27 + 0x11f0,&stack0x00000508,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<TextStyle>_get_Item__);
            }
          }
          fVar62 = 1.0;
          lVar27 = *in_stack_00000150;
          if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar39 = *(uint *)(unaff_x19 + 0x94);
          lVar30 = lVar30 + (int)*in_stack_00000148 * unaff_x27;
          *(uint *)(lVar30 + 100) = uVar39;
          *(int *)(lVar30 + 0x68) = (int)unaff_x19[0x95];
          if (((unaff_w20 & 1) == 0) &&
             ((0xd < in_stack_000017bc || ((1 << (ulong)(in_stack_000017bc & 0x1f) & 0x2c00U) == 0))
             )) {
            lVar27 = *(long *)(lVar27 + 0x50);
            if (lVar27 == 0) goto LAB_0249920c;
LAB_02494e68:
            if (*(uint *)(lVar27 + 0x18) <= uVar39)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            *(int *)(lVar27 + (long)(int)uVar39 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
          }
          else {
            lVar27 = *(long *)(lVar27 + 0x50);
            if (lVar27 == 0) goto LAB_0249920c;
            if (*(uint *)(lVar27 + 0x18) <= uVar39)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (*(int *)(lVar27 + (long)(int)uVar39 * 0x5c + 0x24) == 1) goto LAB_02494e68;
          }
          if (in_stack_000017bc == 9) {
            if (*in_stack_00000138 == 0) goto LAB_0249920c;
            fVar62 = (float)FUN_026fd208(*in_stack_00000138 + 0x50,0);
            if (*in_stack_00000138 == 0) goto LAB_0249920c;
            fVar51 = *(float *)(unaff_x19 + 199);
            fVar50 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000138 + 0x1b9));
            fVar62 = fVar68 * fVar62 * fVar50;
            fVar65 = fVar62 * (float)(int)(fVar51 / fVar62);
            uVar19 = (ulong)(uint)fVar65;
            if (fVar65 <= fVar51) {
              fVar65 = fVar51 + fVar62;
            }
LAB_02495058:
            *(float *)(unaff_x19 + 199) = fVar65;
          }
          else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
            if ((char)unaff_x19[0x1d] == '\0') {
              if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
                fVar62 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
              }
              fVar65 = *(float *)(unaff_x19 + 199);
              fVar51 = (float)FUN_026fd474(&stack0x00001770,0);
              if (unaff_x19[0x1f] != 0) {
                fVar50 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
                fVar65 = fVar65 + fVar50 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                           fVar68 * (fVar53 + fVar62 * fVar51) +
                                           in_stack_000000c8 *
                                           (fVar63 + fStack00000000000000cc +
                                                     *(float *)(unaff_x19[0x1f] + 0x1ac)));
                *(float *)(unaff_x19 + 199) = fVar65;
                goto joined_r0x02494fac;
              }
              goto LAB_0249920c;
            }
            if (*in_stack_00000138 == 0) goto LAB_0249920c;
            fVar65 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                     (*(float *)((long)unaff_x19 + 0x2a4) +
                     fVar68 * fVar53 +
                     in_stack_000000c8 *
                     (fVar63 + fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
            uVar19 = (ulong)(uint)fVar65;
            fVar65 = *(float *)(unaff_x19 + 199) - fVar65;
            *(float *)(unaff_x19 + 199) = fVar65;
            if ((uVar12 != 0) || (in_stack_000017bc == 0x200b)) {
              fVar62 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
              uVar19 = (ulong)(uint)fVar62;
              fVar65 = fVar65 - fVar62;
              goto LAB_02495058;
            }
          }
          else {
            if (*in_stack_00000138 == 0) goto LAB_0249920c;
            fVar50 = *(float *)(unaff_x19 + 199);
            fVar65 = fVar50 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                              (*(float *)((long)unaff_x19 + 0x2a4) +
                              (*(float *)(unaff_x19 + 0x55) - fVar70) +
                              in_stack_000000c8 *
                              (fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
            *(float *)(unaff_x19 + 199) = fVar65;
joined_r0x02494fac:
            if ((uVar12 != 0) || (uVar19 = (ulong)(uint)fVar50, in_stack_000017bc == 0x200b)) {
              fVar62 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
              uVar19 = (ulong)(uint)fVar62;
              fVar65 = fVar65 + fVar62;
              goto LAB_02495058;
            }
          }
          lVar27 = *in_stack_00000150;
          if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_0249920c;
          uVar39 = *in_stack_00000148;
          uVar33 = (uint)*(undefined8 *)(lVar30 + 0x18);
          if (uVar33 <= uVar39)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          *(float *)(lVar30 + (int)uVar39 * unaff_x27 + 0x144) = fVar65;
          uVar38 = in_stack_000017bc;
          if ((int)in_stack_000017bc < 0xd) {
            if ((in_stack_000017bc - 10 < 2) || (in_stack_000017bc == 3)) goto LAB_024950bc;
FUN_02495710:
            if (((unaff_w20 & in_stack_000017bc == 0x2d) != 0) ||
               ((float)uVar39 == in_stack_00000078._4_4_)) goto LAB_024950bc;
          }
          else {
            if (1 < in_stack_000017bc - 0x2028) {
              if (in_stack_000017bc != 0xd) goto FUN_02495710;
              uVar19 = 0;
              *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
              if ((float)uVar39 != in_stack_00000078._4_4_) goto LAB_0249572c;
            }
LAB_024950bc:
            if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
              fVar62 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
              if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              if (((fStack000000000000004c < ABS(fVar62)) &&
                  (*(char *)((long)unaff_x19 + 700) == '\0')) &&
                 (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
                FUN_024d6ca8(fVar62);
                *(float *)((long)unaff_x19 + 0x4bc) = *(float *)((long)unaff_x19 + 0x4bc) - fVar62;
                *(float *)(unaff_x19 + 0x9a) = fVar62 + *(float *)(unaff_x19 + 0x9a);
                puVar8 = System_Threading_Mutex_TypeInfo;
                lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
                if (*(int *)(lVar27 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar27 = *(long *)puVar8;
                }
                lVar30 = *(long *)(lVar27 + 0xb8);
                if (*(int *)(lVar30 + 0x7ac) == (int)unaff_x19[0x94]) {
                  if (*(int *)(lVar27 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar30 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
                  }
                  FUN_013b8de4(lVar30 + 0x11f0,&stack0x00000880,
                               *(undefined8 *)
                                Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                              );
                  lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
                  memcpy((void *)(*(long *)(lVar27 + 0xb8) + 0x788),&stack0x00000880,0x378);
                  lVar27 = *(long *)(lVar27 + 0xb8);
                  *(float *)(lVar27 + 0x7bc) = fVar62 + *(float *)(lVar27 + 0x7bc);
                  *(float *)(lVar27 + 0x800) = fVar62 + *(float *)(lVar27 + 0x800);
                  memcpy(&stack0x00000190,(void *)(lVar27 + 0x788),0x378);
                  FUN_013b86dc(lVar27 + 0x11f0,&stack0x00000190,
                               *(undefined8 *)
                                Method_System_Collections_Generic_List<TextStyle>_get_Item__);
                }
              }
            }
            fVar65 = *(float *)(unaff_x19 + 0x9a);
            *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
            fVar50 = *(float *)((long)unaff_x19 + 0x4c4) - fVar65;
            fVar62 = *(float *)((long)unaff_x19 + 0x4bc);
            if (fVar50 <= *(float *)((long)unaff_x19 + 0x4bc)) {
              fVar62 = fVar50;
            }
            *(float *)((long)unaff_x19 + 0x4bc) = fVar62;
            fVar51 = *(float *)(unaff_x19 + 0x98);
            if (in_stack_000017b4 == '\0') {
              in_stack_000017b8 = fVar62;
            }
            if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
               (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
                ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
              in_stack_000017b4 = '\x01';
            }
            lVar27 = *in_stack_00000150;
            if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x50), lVar30 == 0))
            goto LAB_0249920c;
            uVar39 = *(uint *)(unaff_x19 + 0x94);
            if (*(uint *)(lVar30 + 0x18) <= uVar39)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar34 = lVar30 + (long)(int)uVar39 * 0x5c;
            *(int *)(lVar34 + 0x34) = (int)unaff_x19[0x92];
            iVar14 = (int)unaff_x19[0x92];
            if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
              iVar14 = *(int *)((long)unaff_x19 + 0x494);
            }
            *(int *)((long)unaff_x19 + 0x494) = iVar14;
            *(int *)(lVar34 + 0x38) = iVar14;
            *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
            *(undefined4 *)(lVar34 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
            iVar14 = *(int *)((long)unaff_x19 + 0x494);
            if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
              iVar14 = *(int *)((long)unaff_x19 + 0x49c);
            }
            *(int *)((long)unaff_x19 + 0x49c) = iVar14;
            *(int *)(lVar34 + 0x40) = iVar14;
            *(int *)(lVar34 + 0x24) = (*(int *)(lVar34 + 0x3c) - *(int *)(lVar34 + 0x34)) + 1;
            *(undefined4 *)(lVar34 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
            lVar27 = *(long *)(lVar27 + 0x38);
            if (lVar27 == 0) goto LAB_0249920c;
            if (*(uint *)(lVar27 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar73 = *(undefined4 *)
                      (lVar27 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x27 + 0x11c);
            lVar30 = lVar30 + (long)(int)uVar39 * 0x5c;
            *(float *)(lVar30 + 0x70) = fVar50;
            *(undefined4 *)(lVar30 + 0x6c) = uVar73;
            lVar27 = *in_stack_00000150;
            if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x50), lVar30 == 0))
            goto LAB_0249920c;
            if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar27 = *(long *)(lVar27 + 0x38);
            if (lVar27 == 0) goto LAB_0249920c;
            if (*(uint *)(lVar27 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar73 = *(undefined4 *)
                      (lVar27 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x27 + 0x128);
            fVar51 = fVar51 - fVar65;
            lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
            *(float *)(lVar30 + 0x78) = fVar51;
            *(undefined4 *)(lVar30 + 0x74) = uVar73;
            lVar27 = *in_stack_00000150;
            if ((lVar27 == 0) || (lVar34 = *(long *)(lVar27 + 0x50), lVar34 == 0))
            goto LAB_0249920c;
            lVar36 = (long)(int)*(uint *)(unaff_x19 + 0x94);
            if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar30 = lVar34 + lVar36 * 0x5c;
            *(float *)(lVar30 + 0x44) = *(float *)(lVar30 + 0x74) - fVar68 * fVar72;
            *(float *)(lVar30 + 0x5c) = fStack00000000000000d4;
            if (*(int *)(lVar30 + 0x24) == 1) {
              *(int *)(lVar34 + lVar36 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
            }
            if ((*in_stack_00000138 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0))
            goto LAB_0249920c;
            lVar47 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
            uVar33 = (uint)*(undefined8 *)(lVar30 + 0x18);
            if (uVar33 <= *(uint *)((long)unaff_x19 + 0x49c))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if ((*(char *)(lVar30 + lVar47 * unaff_x27 + 0x194) == '\0') &&
               (lVar47 = (long)(int)*(uint *)(unaff_x19 + 0x93),
               uVar33 <= *(uint *)(unaff_x19 + 0x93)))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            fVar65 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                     (in_stack_000000c8 *
                      (fVar63 + fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)) -
                     *(float *)((long)unaff_x19 + 0x2a4));
            fVar62 = -fVar65;
            if ((char)unaff_x19[0x1d] != '\0') {
              fVar62 = fVar65;
            }
            lVar34 = lVar34 + lVar36 * 0x5c;
            *(float *)(lVar34 + 0x58) = *(float *)(lVar30 + lVar47 * unaff_x27 + 0x144) + fVar62;
            fVar62 = *(float *)(unaff_x19 + 0x9a);
            *(float *)(lVar34 + 0x48) = fStack0000000000000050 + (fVar51 - fVar50);
            *(float *)(lVar34 + 0x4c) = fVar51;
            uVar19 = (ulong)(uint)(0.0 - fVar62);
            *(float *)(lVar34 + 0x50) = 0.0 - fVar62;
            *(float *)(lVar34 + 0x54) = fVar50;
            plVar44 = (long *)System_Threading_Mutex_TypeInfo;
            if ((int)in_stack_000017bc < 0x2d) {
              if (in_stack_000017bc - 10 < 2) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering:
                if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                plVar48 = (long *)StringLiteral_302;
                FUN_024d69d4();
                lVar27 = unaff_x19[0x6c];
                *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
                iVar14 = (int)unaff_x19[0x94] + 1;
                *(int *)(unaff_x19 + 0x94) = iVar14;
                *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
                if ((lVar27 != 0) && (*(long *)(lVar27 + 0x50) != 0)) {
                  if (*(int *)(*(long *)(lVar27 + 0x50) + 0x18) <= iVar14) {
                    FUN_024d6e60();
                    lVar27 = unaff_x19[0x6c];
                    if (lVar27 == 0) goto LAB_0249920c;
                  }
                  lVar27 = *(long *)(lVar27 + 0x38);
                  if (lVar27 != 0) {
                    if (*in_stack_00000148 < *(uint *)(lVar27 + 0x18)) {
                      fVar62 = *(float *)(lVar27 + (int)*in_stack_00000148 * unaff_x27 + 0x154);
                      if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                        fVar50 = 0.0;
                        if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
                          fVar50 = *(float *)((long)unaff_x19 + 0x2c4);
                        }
                        uVar25 = 0;
                        fVar50 = *(float *)(unaff_x19 + 0x9a) +
                                 fVar62 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                                 fStack0000000000000054 *
                                 (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4)) +
                                 in_stack_000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar50);
                      }
                      else {
                        if ((in_stack_000017bc == 0x2029) || (fVar50 = 0.0, in_stack_000017bc == 10)
                           ) {
                          fVar50 = *(float *)((long)unaff_x19 + 0x2c4);
                        }
                        uVar25 = 1;
                        fVar50 = *(float *)(unaff_x19 + 0x9a) +
                                 *(float *)(unaff_x19 + 0x57) +
                                 in_stack_000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar50);
                      }
                      *(float *)(unaff_x19 + 0x9a) = fVar50;
                      *(undefined1 *)((long)unaff_x19 + 700) = uVar25;
                      lVar27 = *plVar44;
                      if (*(int *)(lVar27 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                        lVar27 = *plVar44;
                      }
                      uVar21 = *(undefined8 *)(*(long *)(lVar27 + 0xb8) + 0x15a8);
                      *(float *)(unaff_x19 + 0x99) = fVar62;
                      uVar19 = NEON_rev64(uVar21,4);
                      unaff_x19[0x98] = uVar19;
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
              if (in_stack_000017bc == 3) {
                if (unaff_x19[0x8e] == 0) goto LAB_0249920c;
                in_stack_00001788 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
                uVar38 = 3;
              }
            }
            else if ((in_stack_000017bc - 0x2028 < 2) || (in_stack_000017bc == 0x2d))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering;
          }
LAB_0249572c:
          uVar39 = *in_stack_00000148;
          if (uVar33 <= uVar39)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          if (*(char *)(lVar30 + (int)uVar39 * unaff_x27 + 0x194) != '\0') {
            lVar30 = lVar30 + (int)uVar39 * unaff_x27;
            uVar20 = *(ulong *)(lVar30 + 0x11c);
            uVar19 = *(ulong *)(in_stack_00000070 + 0x230);
            *(ulong *)(in_stack_00000070 + 0x230) =
                 uVar20 ^ (uVar20 ^ uVar19) &
                          CONCAT44(-(uint)((float)(uVar19 >> 0x20) < (float)(uVar20 >> 0x20)),
                                   -(uint)((float)uVar19 < (float)uVar20));
            uVar20 = *(ulong *)(in_stack_00000070 + 0x238);
            uVar19 = *(ulong *)(lVar30 + 0x128);
            *(ulong *)(in_stack_00000070 + 0x238) =
                 uVar19 ^ (uVar19 ^ uVar20) &
                          CONCAT44(-(uint)((float)(uVar19 >> 0x20) < (float)(uVar20 >> 0x20)),
                                   -(uint)((float)uVar19 < (float)uVar20));
          }
          if (((int)unaff_x19[0x5b] == 5) &&
             ((0xd < uVar38 || ((1 << (ulong)(uVar38 & 0x1f) & 0x2c00U) == 0)))) {
            lVar30 = *(long *)(lVar27 + 0x58);
            if (lVar30 == 0) goto LAB_0249920c;
            iVar14 = (int)unaff_x19[0x95] + 1;
            if (*(int *)(lVar30 + 0x18) < iVar14) {
              if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_01147c08((long *)(lVar27 + 0x58),iVar14,1,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__
                          );
              lVar27 = *in_stack_00000150;
              if (lVar27 == 0) goto LAB_0249920c;
            }
            lVar30 = *(long *)(lVar27 + 0x58);
            if (lVar30 == 0) goto LAB_0249920c;
            uVar33 = *(uint *)(unaff_x19 + 0x95);
            lVar34 = (long)(int)uVar33;
            uVar39 = *(uint *)(lVar30 + 0x18);
            if (uVar39 <= uVar33)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar36 = lVar30 + lVar34 * 0x14;
            fVar50 = *(float *)(lVar36 + 0x30);
            uVar19 = (ulong)(uint)fVar50;
            *(undefined4 *)(lVar36 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
            fVar62 = *(float *)((long)unaff_x19 + 0x4bc);
            if (fVar50 <= *(float *)((long)unaff_x19 + 0x4bc)) {
              fVar62 = fVar50;
            }
            *(float *)(lVar36 + 0x30) = fVar62;
            uVar38 = *(uint *)((long)unaff_x19 + 0x48c);
            if (uVar38 == 0 && uVar33 == 0) {
              *(uint *)(lVar30 + lVar34 * 0x14 + 0x20) = uVar38;
            }
            else {
              uVar5 = uVar38 - 1;
              if (0 < (int)uVar38) {
                lVar27 = *(long *)(lVar27 + 0x38);
                if (lVar27 == 0) goto LAB_0249920c;
                if (*(uint *)(lVar27 + 0x18) <= uVar5)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                if (uVar33 != *(uint *)(lVar27 + (long)(int)uVar5 * (long)iVar13 + 0x68)) {
                  if (uVar33 - 1 < uVar39) {
                    *(uint *)(lVar30 + 0x20 + (long)(int)(uVar33 - 1) * 0x14 + 4) = uVar5;
                    *(uint *)(lVar30 + 0x20 + lVar34 * 0x14) = uVar38;
                    goto LAB_024957b0;
                  }
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                }
              }
              if ((float)uVar38 == in_stack_00000078._4_4_) {
                *(float *)(lVar30 + lVar34 * 0x14 + 0x24) = in_stack_00000078._4_4_;
              }
            }
          }
LAB_024957b0:
          puVar8 = System_Threading_Mutex_TypeInfo;
          if (((char)unaff_x19[0x5a] != '\0') ||
             ((*(uint *)(unaff_x19 + 0x5b) < 7 &&
              ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) != 0)))) {
            if ((uVar12 == 0) &&
               (((in_stack_000017bc != 0x2d && (in_stack_000017bc != 0x200b)) &&
                (in_stack_000017bc != 0xad)))) {
              if (*(char *)((long)unaff_x19 + 0x2d2) == '\0') {
LAB_02495868:
                if (((((0x2bfd < in_stack_000017bc - 0xac01) && (0x1d < in_stack_000017bc - 0xa961))
                     && (0xfd < in_stack_000017bc - 0x1101)) ||
                    (uVar20 = FUN_024e95f0(0), (uVar20 & 1) != 0)) &&
                   ((((0xed < in_stack_000017bc - 0xff01 && (0x1d < in_stack_000017bc - 0xfe31)) &&
                     (0x717d < in_stack_000017bc - 0x2e81)) && (0x1fd < in_stack_000017bc - 0xf901))
                   )) goto LAB_024958f0;
                lVar27 = FUN_024e94b0(0);
                if ((lVar27 == 0) || (*(long *)(lVar27 + 0x10) == 0)) goto LAB_0249920c;
                uVar20 = FUN_0129aa60(*(long *)(lVar27 + 0x10),&stack0x00000880,
                                      *(undefined8 *)
                                       System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                     );
                if ((int)*in_stack_00000148 < (int)in_stack_00000078._4_4_) {
                  lVar27 = FUN_024e94b0(0);
                  if (((lVar27 != 0) && (*in_stack_00000150 != 0)) &&
                     (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 != 0)) {
                    if (*in_stack_00000148 + 1 < *(uint *)(lVar30 + 0x18)) {
                      if (*(long *)(lVar27 + 0x18) != 0) {
                        in_stack_00000880 =
                             (uint)*(ushort *)
                                    (lVar30 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar13 +
                                    0x20);
                        uVar23 = FUN_0129aa60(*(long *)(lVar27 + 0x18),&stack0x00000880,
                                              *(undefined8 *)
                                               System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                             );
                        if ((uVar20 & 1) != 0) goto LAB_02495adc;
                        if ((uVar23 & 1) == 0) goto LAB_02495bc4;
                        if ((bStack000000000000005c & 1) != 0) goto joined_r0x02495af4;
                        goto LAB_024959d4;
                      }
                      goto LAB_0249920c;
                    }
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  }
                  goto LAB_0249920c;
                }
                in_stack_00000880 = in_stack_000017bc;
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
                if (uVar17 != uVar60 || ((bStack000000000000005c ^ 0xff) & 1) != 0)
                goto LAB_02495b70;
joined_r0x02495af4:
                if (uVar12 != 0) goto LAB_02495af8;
              }
              else {
LAB_024958f0:
                if ((bStack000000000000005c & 1) == 0) {
LAB_024959d4:
                  bStack000000000000005c = 0;
                  goto LAB_02495b70;
                }
                if ((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) == 0)
                goto joined_r0x02495af4;
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
              if (((in_stack_000017bc - 0x2007 < 0x29) &&
                  ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
                 ((in_stack_000017bc == 0xa0 || (in_stack_000017bc == 0x2060)))) goto LAB_02495868;
              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_024d69d4();
              bStack000000000000005c = 0;
              *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xe78) = 0xffffffff;
            }
          }
LAB_02495b70:
          plVar44 = (long *)System_Threading_Mutex_TypeInfo;
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          plVar48 = (long *)StringLiteral_302;
          FUN_024d69d4();
          *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
LAB_02492630:
          unaff_x26 = (undefined8 *)&stack0x00000880;
          unaff_s12 = 1.0;
          in_stack_00001788 = in_stack_00001788 + 1;
          lVar27 = unaff_x19[0x8e];
          if (lVar27 != 0) {
            if ((int)in_stack_00001788 < (int)*(uint *)(lVar27 + 0x18)) {
              if (*(uint *)(lVar27 + 0x18) <= in_stack_00001788)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              in_stack_000017bc = *(uint *)(lVar27 + (long)(int)in_stack_00001788 * 0xc + 0x20);
              if (in_stack_000017bc == 0) goto LAB_02495f1c;
              if (5 < in_stack_00000140) {
                uVar21 = FUN_0176eb1c(&stack0x000017bc,0);
                uVar18 = FUN_0176eb1c(&stack0x00001788,0);
                uVar21 = FUN_0160073c(*(undefined8 *)
                                       UnityEngine_Rendering_Universal_DebugValidationMode_var,
                                      uVar21,*(undefined8 *)
                                              Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                                      ,uVar18,0);
                if (*(int *)(*plVar48 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*plVar48);
                }
                FUN_026610e4(uVar21,0);
                in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
              }
              if ((*(char *)((long)unaff_x19 + 0x2fa) != '\0') && (in_stack_000017bc == 0x3c))
              goto code_r0x02492440;
              if ((*in_stack_00000150 != 0) &&
                 (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 != 0)) {
                if (*in_stack_00000148 < *(uint *)(lVar27 + 0x18)) {
                  lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x27;
                  *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar27 + 0x2c);
                  *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar27 + 0x58);
                  unaff_x19[0x1f] = *(long *)(lVar27 + 0x38);
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor
                  ;
                }
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              }
              goto LAB_0249920c;
            }
LAB_02495f1c:
            fVar62 = (float)uVar19;
            if (((char)unaff_x19[0x46] != '\0') &&
               (fVar62 = DAT_02956ccc,
               DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
              fVar62 = *(float *)((long)unaff_x19 + 0x1dc);
              fVar72 = *(float *)((long)unaff_x19 + 0x24c);
              if ((fVar62 < fVar72) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
                  *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
                }
                fVar50 = (*(float *)((long)unaff_x19 + 0x234) - fVar62) * 0.5;
                if (fVar50 <= DAT_028aa298) {
                  fVar50 = DAT_028aa298;
                }
                *(float *)(unaff_x19 + 0x47) = fVar62;
                fVar50 = (fVar62 + fVar50) * 20.0 + 0.5;
                fVar62 = DAT_02958220;
                if (fVar50 != INFINITY) {
                  fVar62 = (float)(int)fVar50 / 20.0;
                }
                if (fVar72 <= fVar62) {
                  fVar62 = fVar72;
                }
                goto LAB_02495fd8;
              }
            }
            *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
            if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
              uVar21 = FUN_0176eb1c(in_stack_00000038,0);
              uVar18 = FUN_017840ac(in_stack_00000040,0);
              uVar21 = FUN_0160073c(*(undefined8 *)
                                     Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__,uVar21,
                                    *(undefined8 *)
                                     Method_UnityEngine_GameObject_GetComponents<Component>__,uVar18
                                    ,0);
              if (*(int *)(*plVar48 + 0xe0) == 0) {
                thunk_FUN_00d32864(*plVar48);
              }
              FUN_02660dac(uVar21,0);
            }
            if ((*in_stack_00000148 == 0) || ((*in_stack_00000148 == 1 && (uVar45 == 3)))) {
              (**(code **)(*unaff_x19 + 0x948))();
              goto LAB_02496098;
            }
            lVar27 = *plVar44;
            if (*(int *)(lVar27 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar27 = *plVar44;
            }
            puVar8 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
            lVar27 = **(long **)(lVar27 + 0xb8);
            if (lVar27 == 0) goto LAB_0249920c;
            if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            iVar13 = *(int *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
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
            puVar9 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
            iVar14 = (int)unaff_x19[0x4d];
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
            lVar27 = unaff_x19[0xe2];
            _in_stack_00000090 = uStack00000000000000c0;
            fStack0000000000000098 = in_stack_000000c8;
            if (iVar14 < 0x401) {
              if (iVar14 == 0x100) {
                if (lVar27 == 0) goto LAB_0249920c;
                if (*(uint *)(lVar27 + 0x18) < 2)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                uVar21 = *(undefined8 *)(lVar27 + 0x30);
                if ((int)unaff_x19[0x5b] == 5) {
                  if ((*in_stack_00000150 == 0) ||
                     (lVar30 = *(long *)(*in_stack_00000150 + 0x58), lVar30 == 0))
                  goto LAB_0249920c;
                  if (*(uint *)(lVar30 + 0x18) <= uStack000000000000002c)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  fVar62 = *(float *)(lVar30 + (long)(int)uStack000000000000002c * 0x14 + 0x28);
                }
                else {
                  fVar62 = *(float *)(unaff_x19 + 0x96);
                }
                fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar27 + 0x2c);
                fVar62 = (0.0 - fVar62) - fStack0000000000000020;
              }
              else if (iVar14 == 0x200) {
                if (lVar27 == 0) goto LAB_0249920c;
                if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0))
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                fStack0000000000000098 =
                     (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
                uVar21 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                                  (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5,
                                  ((float)*(undefined8 *)(lVar27 + 0x24) +
                                  (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5);
                if ((int)unaff_x19[0x5b] == 5) {
                  if ((*in_stack_00000150 == 0) ||
                     (lVar27 = *(long *)(*in_stack_00000150 + 0x58), lVar27 == 0))
                  goto LAB_0249920c;
                  if (*(uint *)(lVar27 + 0x18) <= uStack000000000000002c)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  lVar27 = lVar27 + (long)(int)uStack000000000000002c * 0x14;
                  fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
                  fVar62 = ((fStack0000000000000020 + *(float *)(lVar27 + 0x28) +
                            *(float *)(lVar27 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
                }
                else {
                  fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
                  fVar62 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) +
                            in_stack_000017b8) - fStack0000000000000024) * -0.5 + 0.0;
                }
              }
              else {
                if (iVar14 != 0x400) goto LAB_024965d0;
                if (lVar27 == 0) goto LAB_0249920c;
                if (*(int *)(lVar27 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                uVar21 = *(undefined8 *)(lVar27 + 0x24);
                if ((int)unaff_x19[0x5b] == 5) {
                  if ((*in_stack_00000150 == 0) ||
                     (lVar30 = *(long *)(*in_stack_00000150 + 0x58), lVar30 == 0))
                  goto LAB_0249920c;
                  if (*(uint *)(lVar30 + 0x18) <= uStack000000000000002c)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  in_stack_000017b8 =
                       *(float *)(lVar30 + (long)(int)uStack000000000000002c * 0x14 + 0x30);
                }
                fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar27 + 0x20);
                fVar62 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
              }
              _in_stack_00000090 =
                   CONCAT44((float)((ulong)uVar21 >> 0x20) + 0.0,(float)uVar21 + fVar62);
            }
            else if (iVar14 == 0x800) {
              if (lVar27 == 0) goto LAB_0249920c;
              if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0))
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              fVar62 = ((float)*(undefined8 *)(lVar27 + 0x24) +
                       (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5;
              fStack0000000000000098 =
                   fStack0000000000000030 + 0.0 +
                   (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
              _in_stack_00000090 =
                   CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5 + 0.0,
                            fVar62 + 0.0);
            }
            else {
              if (iVar14 == 0x1000) {
                if (lVar27 == 0) goto LAB_0249920c;
                if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0))
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                fVar62 = (float)*(undefined8 *)(lVar27 + 0x24) +
                         (float)*(undefined8 *)(lVar27 + 0x30);
                fVar72 = (float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                         (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20);
                fStack0000000000000020 =
                     fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) +
                     *(float *)(unaff_x19 + 0x9b);
                fStack0000000000000098 =
                     fStack0000000000000030 + 0.0 +
                     (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
              }
              else {
                if (iVar14 != 0x2000) goto LAB_024965d0;
                if (lVar27 == 0) goto LAB_0249920c;
                if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0))
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                fVar62 = (float)*(undefined8 *)(lVar27 + 0x24) +
                         (float)*(undefined8 *)(lVar27 + 0x30);
                fVar72 = (float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                         (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20);
                fStack0000000000000020 =
                     *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
                fStack0000000000000098 =
                     fStack0000000000000030 + 0.0 +
                     (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
              }
              fVar62 = fVar62 * 0.5;
              _in_stack_00000090 =
                   CONCAT44(fVar72 * 0.5 + 0.0,
                            fVar62 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) * 0.5)
                           );
            }
LAB_024965d0:
            if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
            uVar21 = FUN_0285a188(unaff_x19[0xe4],0);
            if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar8);
            }
            uVar19 = FUN_0268b4e0(uVar21,0,0);
            lVar27 = FUN_024c933c();
            if (lVar27 == 0) goto LAB_0249920c;
            FUN_026a125c(lVar27,0);
            *(float *)(unaff_x19 + 0xe1) = fVar62;
            if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
            iVar14 = FUN_02859798(unaff_x19[0xe4],0);
            if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
            fVar72 = (float)FUN_028598f0(unaff_x19[0xe4],0);
            __x = DAT_028aa048;
            dVar59 = modf(DAT_028aa048,(double *)&stack0x00000880);
            if (dVar59 == 0.5) {
              fVar50 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
              if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
                fVar50 = fVar50 + 1.0;
              }
            }
            else {
              fVar50 = 255.0;
            }
            dVar59 = modf(__x,(double *)&stack0x00000880);
            if (dVar59 == 0.5) {
              fVar65 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
              if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
                fVar65 = fVar65 + 1.0;
              }
            }
            else {
              fVar65 = 255.0;
            }
            dVar59 = modf(__x,(double *)&stack0x00000880);
            if (dVar59 == 0.5) {
              fVar68 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
              if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
                fVar68 = fVar68 + 1.0;
              }
            }
            else {
              fVar68 = 255.0;
            }
            dVar59 = modf(__x,(double *)&stack0x00000880);
            if (dVar59 == 0.5) {
              fVar51 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
              if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
                fVar51 = fVar51 + 1.0;
              }
            }
            else {
              fVar51 = 255.0;
            }
            modf(__x,(double *)&stack0x00000880);
            modf(__x,(double *)&stack0x00000880);
            modf(__x,(double *)&stack0x00000880);
            modf(__x,(double *)&stack0x00000880);
            if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (DAT_037825d3 == '\0') {
              thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
              DAT_037825d3 = '\x01';
            }
            lVar27 = *(long *)puVar9;
            if (*(int *)(lVar27 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar27 = *(long *)puVar9;
            }
            puVar28 = *(undefined4 **)(lVar27 + 0xb8);
            uVar20 = (ulong)(uint)puVar28[1];
            uVar23 = (ulong)(uint)puVar28[2];
            uVar61 = (ulong)(uint)puVar28[3];
            UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                      (*puVar28,uVar20,uVar23,uVar61,&stack0x00001790,0x4000ffff,0);
            if (*(int *)(*plVar44 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar27 = *in_stack_00000150;
            if (lVar27 == 0) goto LAB_0249920c;
            uVar12 = *in_stack_00000148;
            if ((int)uVar12 < 1) {
              iStack00000000000000ac = 0;
              iVar13 = 0;
              goto LAB_02498c58;
            }
            lVar27 = *(long *)(lVar27 + 0x38);
            fVar62 = ABS(fVar62);
            fVar53 = 1.0;
            if ((uVar19 & 1) == 0) {
              fVar53 = fVar62;
            }
            if (lVar27 == 0) goto LAB_0249920c;
            bVar7 = false;
            bVar10 = false;
            bVar6 = false;
            bVar11 = false;
            uStack0000000000000060 =
                 (int)fVar50 & 0xffU | ((int)fVar65 & 0xffU) << 8 | ((int)fVar68 & 0xffU) << 0x10 |
                 (int)fVar51 << 0x18;
            fStack00000000000000d0 = *(float *)(*(long *)(*plVar44 + 0xb8) + 0x15a8);
            fStack00000000000000cc = 0.0;
            fStack0000000000000058 = fStack00000000000000b0;
            _bStack000000000000005c = 0.0;
            fStack0000000000000034 = 0.0;
            fStack0000000000000088 = 0.0;
            fStack0000000000000030 = 0.0;
            uVar17 = 0;
            iVar49 = 0;
            lVar30 = 0x2e0;
            fVar65 = 0.0;
            fVar50 = 0.0;
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
            uVar60 = 0;
            uVar39 = 1;
            goto LAB_02496a50;
          }
          goto LAB_0249920c;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      }
    }
  }
  goto LAB_0249920c;
code_r0x02492440:
  *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
  uVar20 = FUN_024d0688();
  if (((uVar20 & 1) != 0) &&
     (in_stack_00001788 = in_stack_0000176c, uVar45 = in_stack_000017bc,
     *(int *)((long)unaff_x19 + 0x63c) == 0)) goto LAB_02492630;
UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor:
  if ((unaff_x19[0x6c] == 0) || (lVar27 = *(long *)(unaff_x19[0x6c] + 0x38), lVar27 == 0))
  goto LAB_0249920c;
  uVar12 = *in_stack_00000148;
  if (*(uint *)(lVar27 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar30 = (long)(int)uVar12;
  unaff_w21 = (uint)*(byte *)(lVar27 + lVar30 * unaff_x27 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
  unaff_w24 = (undefined4)unaff_x19[0x23];
  if ((uint)in_stack_000017a8 == uVar12) {
    in_stack_000017bc = (uint)((ulong)in_stack_000017a8 >> 0x20);
    unaff_w20 = 1;
    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
    if (in_stack_000017bc == 0x2026) {
      lVar34 = unaff_x19[0xc9];
      lVar27 = lVar27 + lVar30 * unaff_x27;
      *(undefined4 *)(lVar27 + 0x2c) = 0;
      *(long *)(lVar27 + 0x30) = lVar34;
      *(long *)(lVar27 + 0x38) = unaff_x19[0xca];
      *(long *)(lVar27 + 0x50) = unaff_x19[0xcb];
      *(int *)(lVar27 + 0x58) = (int)unaff_x19[0xcc];
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      in_stack_000017a8 = CONCAT44(3,uVar12 + 1);
    }
    else if (in_stack_000017bc == 3) {
      if ((*in_stack_00000138 == 0) || (lVar34 = FUN_024b11ac(*in_stack_00000138,0), lVar34 == 0))
      goto LAB_0249920c;
      in_stack_00000bf8 = 3;
      FUN_01299bc0(lVar34,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
      if (*(uint *)(lVar27 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      unaff_w20 = 1;
      *(ulong *)(lVar27 + lVar30 * unaff_x27 + 0x30) = CONCAT44(in_stack_00000884,in_stack_00000880)
      ;
      uVar12 = *(uint *)((long)unaff_x19 + 0x48c);
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
    }
  }
  else {
    unaff_w20 = 0;
  }
  if (((int)uVar12 < *(int *)((long)unaff_x19 + 0x31c)) && (in_stack_000017bc != 3)) {
    if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar27 + 0x18) <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar27 = lVar27 + (long)(int)uVar12 * (long)iVar13;
    *(undefined1 *)(lVar27 + 0x194) = 0;
    *(undefined2 *)(lVar27 + 0x20) = 0x200b;
    *(undefined4 *)(lVar27 + 100) = 0;
    *in_stack_00000148 = uVar12 + 1;
    uVar45 = in_stack_000017bc;
    goto LAB_02492630;
  }
  iVar14 = *(int *)((long)unaff_x19 + 0x63c);
  unaff_s13 = 1.0;
  if (iVar14 == 0) {
    uVar12 = *(uint *)((long)unaff_x19 + 0x254);
    if ((uVar12 >> 4 & 1) == 0) {
      unaff_s13 = unaff_s12;
      if ((uVar12 >> 3 & 1) == 0) {
        if ((uVar12 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar20 = FUN_016f92d4(in_stack_000017bc,0);
          if ((uVar20 & 1) != 0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar12 = FUN_016f95a8(in_stack_000017bc,0);
            in_stack_000017bc = uVar12 & 0xffff;
            unaff_s13 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar20 = FUN_016f9218(in_stack_000017bc,0);
        if ((uVar20 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar12 = FUN_016f9724(in_stack_000017bc,0);
          goto LAB_02492a0c;
        }
      }
    }
    else {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar20 = FUN_016f92d4(in_stack_000017bc,0);
      unaff_s13 = 1.0;
      if ((uVar20 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_016f95a8(in_stack_000017bc,0);
LAB_02492a0c:
        in_stack_000017bc = uVar12 & 0xffff;
        unaff_s13 = 1.0;
      }
    }
    iVar14 = *(int *)((long)unaff_x19 + 0x63c);
  }
  uVar45 = in_stack_000017bc;
  fStack00000000000000f4 = unaff_s13;
  if (iVar14 != 0) {
    if (iVar14 == 1) {
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x27;
      lVar30 = *(long *)(lVar27 + 0x40);
      unaff_x19[0xd2] = lVar30;
      *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar27 + 0x48);
      if ((lVar30 == 0) || (lVar27 = FUN_024ebfa0(lVar30,0), lVar27 == 0)) goto LAB_0249920c;
      FUN_0132138c(lVar27,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                   *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
      unaff_x22 = CONCAT44(in_stack_00000884,in_stack_00000880);
      if (unaff_x22 != 0) {
        unaff_x23 = in_stack_00000138;
        if (in_stack_000017bc == 0x3c) {
          in_stack_000017bc = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
          goto LAB_02492830;
        }
        lVar27 = *plVar44;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar27 = *plVar44;
        }
        param_1 = *(long *)(lVar27 + 0xb8);
        goto code_r0x02492828;
      }
      goto LAB_02492630;
    }
    lVar27 = *in_stack_00000150;
    fVar65 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar65 = fVar68;
    }
    fStack0000000000000134 = 0.0;
    if (lVar27 == 0) goto LAB_0249920c;
    fVar52 = 0.0;
    fVar50 = 0.0;
    fVar62 = fVar68;
    goto LAB_02492e2c;
  }
  if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
  goto LAB_0249920c;
  uVar17 = *in_stack_00000148;
  uVar12 = *(uint *)(lVar27 + 0x18);
  if (uVar12 <= uVar17) goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar30 = *(long *)(lVar27 + (int)uVar17 * unaff_x27 + 0x30);
  unaff_x19[200] = lVar30;
  if (lVar30 == 0) goto LAB_02492630;
  lVar34 = lVar27 + (int)uVar17 * unaff_x27;
  lVar30 = *(long *)(lVar34 + 0x38);
  unaff_x19[0x1f] = lVar30;
  unaff_x19[0x22] = *(long *)(lVar34 + 0x50);
  *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar34 + 0x58);
  if (unaff_w20 != 0) {
    lVar34 = unaff_x19[0x8e];
    if (lVar34 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar34 + 0x18) <= in_stack_00001788)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(int *)(lVar34 + (long)(int)in_stack_00001788 * 0xc + 0x20) == 10) &&
       (uVar17 != *(uint *)(unaff_x19 + 0x92))) {
      if (uVar12 <= uVar17 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (lVar30 == 0) goto LAB_0249920c;
      fVar72 = *(float *)(lVar27 + (long)(int)(uVar17 - 1) * (long)iVar13 + 0x60);
      iVar13 = FUN_026fd110(lVar30 + 0x50,0);
      lVar27 = *in_stack_00000138;
      goto joined_r0x024945ac;
    }
  }
  if (lVar30 == 0) goto LAB_0249920c;
  fVar72 = *(float *)(unaff_x19 + 0x3c);
  iVar13 = FUN_026fd110(lVar30 + 0x50,0);
  lVar27 = unaff_x19[0x1f];
joined_r0x024945ac:
  if (lVar27 == 0) goto LAB_0249920c;
  fVar68 = (float)FUN_026fd120(lVar27 + 0x50,0);
  fVar65 = fStack0000000000000084;
  if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
    fVar65 = 1.0;
  }
  fVar50 = 0.0;
  fVar52 = 0.0;
  if ((unaff_w20 & in_stack_000017bc == 0x2026) == 0) {
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar52 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar50 = (float)FUN_026fd180(*in_stack_00000138 + 0x50,0);
  }
  lVar27 = unaff_x19[200];
  if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_0249920c;
  fVar51 = *(float *)((long)unaff_x19 + 0x3fc);
  fVar53 = *(float *)(lVar27 + 0x2c);
  fVar62 = (float)FUN_026fd668(*(long *)(lVar27 + 0x20),0);
  if (*in_stack_00000138 == 0) goto LAB_0249920c;
  fVar70 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
  if (*in_stack_00000138 == 0) goto LAB_0249920c;
  fVar63 = *(float *)((long)unaff_x19 + 0x3fc);
  fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
                    /* try { // try from 02492ba4 to 02592d87 has its CatchHandler @ 02492ba4
                       catch() { ... } // from try @ 02492ba4 with catch @ 02492ba4
                       catch() { ... } // from try @ 02492e48 with catch @ 02492ba4
                       catch() { ... } // from try @ 02492f4c with catch @ 02492ba4
                       catch() { ... } // from try @ 02492fc4 with catch @ 02492ba4
                       catch() { ... } // from try @ 02493050 with catch @ 02492ba4
                       catch() { ... } // from try @ 024930c0 with catch @ 02492ba4
                       catch() { ... } // from try @ 024930f0 with catch @ 02492ba4
                       catch() { ... } // from try @ 02493124 with catch @ 02492ba4
                       catch() { ... } // from try @ 024931d4 with catch @ 02492ba4
                       catch() { ... } // from try @ 0249332c with catch @ 02492ba4
                       catch() { ... } // from try @ 02493340 with catch @ 02492ba4
                       catch() { ... } // from try @ 02493368 with catch @ 02492ba4 */
  lVar27 = unaff_x19[0x6c];
  if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_0249920c;
  if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar30 = lVar30 + (int)*in_stack_00000148 * unaff_x27;
  *(undefined4 *)(lVar30 + 0x2c) = 0;
  fVar65 = ((unaff_s13 * fVar72) / (float)iVar13) * fVar68 * fVar65;
  fVar62 = fVar65 * fVar51 * fVar53 * fVar62;
  *(float *)(lVar30 + 0x160) = fVar62;
  uVar12 = *(uint *)(unaff_x19 + 0x23);
  fStack0000000000000134 = fVar65 * fVar70 * fVar63 * fStack0000000000000134;
  if (uVar12 == 0) {
    fVar72 = *(float *)(unaff_x19 + 0xc2);
    goto LAB_02492e14;
  }
  lVar30 = unaff_x19[0xe0];
  if (lVar30 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar30 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar30 = *(long *)(lVar30 + (long)(int)uVar12 * 8 + 0x20);
  if (lVar30 == 0) goto LAB_0249920c;
  fVar72 = *(float *)(lVar30 + 0x104);
  goto LAB_02492e14;
LAB_02496a50:
  do {
    uVar12 = uVar39 - 1;
    if (*(uint *)(lVar27 + 0x18) <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*in_stack_00000150 == 0) || (lVar34 = *(long *)(*in_stack_00000150 + 0x50), lVar34 == 0))
    goto LAB_0249920c;
    lVar47 = (long)(int)uVar12;
    lVar36 = lVar27 + lVar47 * 0x178;
    uVar33 = *(uint *)(lVar36 + 100);
    if (*(uint *)(lVar34 + 0x18) <= uVar33)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar40 = *(long *)(lVar36 + 0x38);
    uVar3 = *(ushort *)(lVar36 + 0x20);
    lVar37 = (long)(int)uVar33;
    lVar34 = lVar34 + lVar37 * 0x5c;
    uVar38 = *(uint *)(lVar34 + 0x3c);
    iVar15 = *(int *)(lVar34 + 0x28);
    iVar16 = *(int *)(lVar34 + 0x2c);
    uVar5 = *(uint *)(lVar34 + 0x40);
    lVar36 = (long)(int)uVar5;
    uVar45 = *(uint *)(lVar34 + 0x68);
    fVar64 = *(float *)(lVar34 + 0x5c);
    fVar56 = *(float *)(lVar34 + 0x60);
    iVar2 = *(int *)(lVar34 + 0x20);
    fVar70 = *(float *)(lVar34 + 0x4c);
    fVar63 = *(float *)(lVar34 + 0x54);
    fVar68 = *(float *)(lVar34 + 0x58);
    fVar55 = *(float *)(lVar34 + 0x6c);
    fVar54 = *(float *)(lVar34 + 0x70);
    fVar51 = *(float *)(lVar34 + 0x74);
    fVar52 = *(float *)(lVar34 + 0x78);
    fVar74 = fVar64 + fVar56;
    uVar43 = (uint)uVar3;
    if ((int)uVar45 < 9) {
      switch(uVar45) {
      case 1:
        if ((char)unaff_x19[0x1d] == '\0') {
          in_stack_000000c8 = fVar56 + 0.0;
        }
        else {
          in_stack_000000c8 = 0.0 - fVar68;
        }
        break;
      case 2:
LAB_02496c1c:
        in_stack_000000c8 = (fVar56 + fVar64 * 0.5) - fVar68 * 0.5;
        break;
      default:
        goto switchD_02496b58_caseD_3;
      case 4:
        in_stack_000000c8 = fVar74 - fVar68;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c8 = fVar74;
        }
        break;
      case 8:
        goto switchD_02496b58_caseD_8;
      }
LAB_02496c90:
      uStack00000000000000c0 = 0;
    }
    else if (uVar45 == 0x10) {
switchD_02496b58_caseD_8:
      if (uVar3 < 0xad) {
        if ((uVar43 != 3) && (uVar43 != 10)) goto LAB_02496bac;
      }
      else if ((uVar43 != 0xad) && ((uVar43 != 0x200b && (uVar43 != 0x2060)))) {
LAB_02496bac:
        if (*(uint *)(lVar27 + 0x18) <= uVar38)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar4 = *(undefined2 *)(lVar27 + (long)(int)uVar38 * 0x178 + 0x20);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar19 = FUN_016f9f84(uVar4,0);
        if ((uVar19 & 1) == 0) {
          bVar1 = (int)uVar33 < (int)unaff_x19[0x94];
        }
        else {
          bVar1 = false;
        }
        if ((fVar68 <= fVar64) && (!bVar1 && (uVar45 >> 4 & 1) == 0)) {
          in_stack_000000c8 = fVar56;
          if ((char)unaff_x19[0x1d] != '\0') {
            in_stack_000000c8 = fVar74;
          }
          goto LAB_02496c90;
        }
        if (((uVar39 == 1) || (uVar33 != uVar60)) || (uVar12 == *(uint *)((long)unaff_x19 + 0x31c)))
        {
          in_stack_000000c8 = fVar56;
          if ((char)unaff_x19[0x1d] != '\0') {
            in_stack_000000c8 = fVar74;
          }
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          fStack0000000000000020 = (float)FUN_016fa418(uVar3,0);
          uStack00000000000000c0 = 0;
        }
        else {
          cVar26 = (char)unaff_x19[0x1d];
          fVar74 = -fVar68;
          if (cVar26 != '\0') {
            fVar74 = fVar68;
          }
          if (*(uint *)(lVar27 + 0x18) <= uVar38)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar68 = 1.0;
          iVar16 = (int)*(char *)(lVar27 + (long)(int)uVar38 * 0x178 + 0x194) +
                   (-iVar2 - ((uint)fStack0000000000000020 & 1)) + iVar16 + -1;
          if (0 < iVar16) {
            fVar68 = *(float *)((long)unaff_x19 + 0x2d4);
          }
          if (iVar16 < 1) {
            iVar16 = 1;
          }
          if (uVar43 == 9) {
LAB_02498bb8:
            fVar68 = 1.0 - fVar68;
          }
          else {
            if (uVar43 != 0xa0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar19 = FUN_016fa418(uVar3,0);
              cVar26 = (char)unaff_x19[0x1d];
              if ((uVar19 & 1) != 0) goto LAB_02498bb8;
            }
            iVar16 = (iVar2 - (~(uint)fStack0000000000000020 & 1)) + iVar15;
          }
          fVar68 = ((fVar64 + fVar74) * fVar68) / (float)iVar16;
          if (cVar26 == '\0') {
            in_stack_000000c8 = in_stack_000000c8 + fVar68;
            uStack00000000000000c0 =
                 CONCAT44((float)((ulong)uStack00000000000000c0 >> 0x20) + 0.0,
                          (float)uStack00000000000000c0 + 0.0);
          }
          else {
            in_stack_000000c8 = in_stack_000000c8 - fVar68;
          }
        }
      }
    }
    else if (uVar45 == 0x20) {
      fVar68 = fVar55 + fVar51;
      goto LAB_02496c1c;
    }
switchD_02496b58_caseD_3:
    uVar45 = (uint)*(undefined8 *)(lVar27 + 0x18);
    if (uVar45 <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar34 = lVar27 + lVar47 * 0x178;
    fVar74 = fStack0000000000000098 + in_stack_000000c8;
    fVar68 = (float)_in_stack_00000090 + (float)uStack00000000000000c0;
    fVar64 = (float)((ulong)_in_stack_00000090 >> 0x20) +
             (float)((ulong)uStack00000000000000c0 >> 0x20);
    if (*(char *)(lVar34 + 0x194) == '\0') goto LAB_02497688;
    iVar15 = *(int *)(lVar27 + lVar47 * 0x178 + 0x2c);
    if (iVar15 != 0) goto LAB_02497374;
    fVar65 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar33,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
    case 0:
      lVar29 = lVar27 + lVar47 * 0x178;
      *(undefined4 *)(lVar29 + 0x84) = 0;
      *(undefined4 *)(lVar29 + 0xac) = 0;
      *(undefined4 *)(lVar29 + 0xd4) = 0x3f800000;
      fVar65 = 1.0;
      break;
    case 1:
      fVar52 = *(float *)(lVar27 + lVar47 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
        lVar29 = lVar27 + lVar47 * 0x178;
        fVar51 = (in_stack_000000c8 + fVar52) - *(float *)(in_stack_00000070 + 0x230);
        fVar52 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
        goto LAB_02496df8;
      }
      lVar29 = lVar27 + lVar47 * 0x178;
      fVar51 = fVar51 - fVar55;
      *(float *)(lVar29 + 0x84) = fVar65 + (fVar52 - fVar55) / fVar51;
      *(float *)(lVar29 + 0xac) = fVar65 + (*(float *)(lVar29 + 0x98) - fVar55) / fVar51;
      *(float *)(lVar29 + 0xd4) = fVar65 + (*(float *)(lVar29 + 0xc0) - fVar55) / fVar51;
      fVar65 = fVar65 + (*(float *)(lVar29 + 0xe8) - fVar55) / fVar51;
      break;
    case 2:
      lVar29 = lVar27 + lVar47 * 0x178;
      fVar52 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      fVar51 = (in_stack_000000c8 + *(float *)(lVar29 + 0x70)) -
               *(float *)(in_stack_00000070 + 0x230);
LAB_02496df8:
      *(float *)(lVar29 + 0x84) = fVar65 + fVar51 / fVar52;
      *(float *)(lVar29 + 0xac) =
           fVar65 + ((in_stack_000000c8 + *(float *)(lVar29 + 0x98)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      *(float *)(lVar29 + 0xd4) =
           fVar65 + ((in_stack_000000c8 + *(float *)(lVar29 + 0xc0)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      fVar65 = fVar65 + ((in_stack_000000c8 + *(float *)(lVar29 + 0xe8)) -
                        *(float *)(in_stack_00000070 + 0x230)) /
                        (*(float *)(in_stack_00000070 + 0x238) -
                        *(float *)(in_stack_00000070 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x61]) {
      case 0:
        lVar29 = lVar27 + lVar47 * 0x178;
        *(undefined4 *)(lVar29 + 0x88) = 0;
        *(undefined4 *)(lVar29 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar29 + 0xd8) = 0;
        *(undefined4 *)(lVar29 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar29 = lVar27 + lVar47 * 0x178;
        fVar52 = fVar52 - fVar54;
        fVar51 = fVar65 + (*(float *)(lVar29 + 0x74) - fVar54) / fVar52;
        fVar52 = fVar65 + (*(float *)(lVar29 + 0x9c) - fVar54) / fVar52;
        *(float *)(lVar29 + 0x88) = fVar51;
        *(float *)(lVar29 + 0xb0) = fVar52;
        *(float *)(lVar29 + 0xd8) = fVar51;
        *(float *)(lVar29 + 0x100) = fVar52;
        break;
      case 2:
        lVar29 = lVar27 + lVar47 * 0x178;
        fVar51 = fVar65 + (*(float *)(lVar29 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                          (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
        *(float *)(lVar29 + 0x88) = fVar51;
        fVar52 = *(float *)(unaff_x19 + 0x9b);
        fVar54 = *(float *)(unaff_x19 + 0x9c);
        *(float *)(lVar29 + 0xd8) = fVar51;
        fVar51 = fVar65 + (*(float *)(lVar29 + 0x9c) - fVar52) / (fVar54 - fVar52);
        *(float *)(lVar29 + 0xb0) = fVar51;
        *(float *)(lVar29 + 0x100) = fVar51;
        break;
      case 3:
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
        uVar45 = (uint)*(undefined8 *)(lVar27 + 0x18);
      }
      if (uVar45 <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar27 + lVar47 * 0x178;
      fVar51 = *(float *)(lVar29 + 0x15c);
      fVar52 = (1.0 - (*(float *)(lVar29 + 0x88) + *(float *)(lVar29 + 0xb0)) * fVar51) * 0.5;
      fVar54 = fVar65 + *(float *)(lVar29 + 0x88) * fVar51 + fVar52;
      fVar65 = fVar65 + fVar52 + *(float *)(lVar29 + 0xb0) * fVar51;
      *(float *)(lVar29 + 0x84) = fVar54;
      *(float *)(lVar29 + 0xac) = fVar54;
      *(float *)(lVar29 + 0xd4) = fVar65;
      break;
    default:
      goto switchD_02496d4c_default;
    }
    *(float *)(lVar27 + lVar47 * 0x178 + 0xfc) = fVar65;
switchD_02496d4c_default:
    switch((int)unaff_x19[0x61]) {
    case 0:
      if (uVar45 <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar27 + lVar47 * 0x178;
      *(undefined4 *)(lVar29 + 0x88) = 0;
      *(undefined4 *)(lVar29 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar29 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar29 + 0x100) = 0;
      break;
    case 1:
      if (uVar12 < uVar45) {
        lVar29 = lVar27 + lVar47 * 0x178;
        fVar70 = fVar70 - fVar63;
        fVar65 = (*(float *)(lVar29 + 0x74) - fVar63) / fVar70;
        fVar70 = (*(float *)(lVar29 + 0x9c) - fVar63) / fVar70;
        *(float *)(lVar29 + 0x88) = fVar65;
        goto LAB_02497174;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    case 2:
      if (uVar45 <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar27 + lVar47 * 0x178;
      fVar65 = (*(float *)(lVar29 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar29 + 0x88) = fVar65;
      fVar70 = (*(float *)(lVar29 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_02497174:
      *(float *)(lVar29 + 0xb0) = fVar70;
      *(float *)(lVar29 + 0xd8) = fVar70;
      *(float *)(lVar29 + 0x100) = fVar65;
      break;
    case 3:
      if (uVar45 <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar27 + lVar47 * 0x178;
      fVar70 = *(float *)(lVar29 + 0x15c);
      fVar51 = (1.0 - (*(float *)(lVar29 + 0x84) + *(float *)(lVar29 + 0xd4)) / fVar70) * 0.5;
      fVar65 = *(float *)(lVar29 + 0x84) / fVar70 + fVar51;
      fVar51 = fVar51 + *(float *)(lVar29 + 0xd4) / fVar70;
      *(float *)(lVar29 + 0x88) = fVar65;
      *(float *)(lVar29 + 0xb0) = fVar51;
      *(float *)(lVar29 + 0x100) = fVar65;
      *(float *)(lVar29 + 0xd8) = fVar51;
    }
    if (uVar45 <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar29 = lVar27 + lVar47 * 0x178;
    fVar65 = *(float *)(lVar29 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
    if ((*(char *)(lVar29 + 0x5c) == '\0') && ((*(byte *)(lVar27 + lVar47 * 0x178 + 400) & 1) != 0))
    {
      fVar65 = -fVar65;
    }
    fVar51 = fVar62;
    if (((iVar14 == 2) || (fVar51 = fVar53, iVar14 == 1)) || (fVar51 = fVar62 / fVar72, iVar14 == 0)
       ) {
      fVar65 = fVar51 * fVar65;
    }
    lVar29 = lVar27 + lVar47 * 0x178;
    fVar70 = *(float *)(lVar29 + 0x88);
    fVar52 = *(float *)(lVar29 + 0x84);
    fVar51 = -2.1474836e+09;
    if (fVar52 != INFINITY) {
      fVar51 = (float)(int)fVar52;
    }
    fVar54 = *(float *)(lVar29 + 0xd4);
    fVar55 = *(float *)(lVar29 + 0xd8);
    fVar63 = -2.1474836e+09;
    if (fVar70 != INFINITY) {
      fVar63 = (float)(int)fVar70;
    }
    uVar73 = FUN_024e0374(fVar52 - fVar51,fVar70 - fVar63);
    *(undefined4 *)(lVar29 + 0x84) = uVar73;
    if (*(uint *)(lVar27 + 0x18) <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar55 = fVar55 - fVar63;
    *(float *)(lVar29 + 0x88) = fVar65;
    uVar73 = FUN_024e0374(fVar52 - fVar51,fVar55);
    *(undefined4 *)(lVar27 + lVar47 * 0x178 + 0xac) = uVar73;
    if (*(uint *)(lVar27 + 0x18) <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar54 = fVar54 - fVar51;
    *(float *)(lVar27 + lVar47 * 0x178 + 0xb0) = fVar65;
    fVar51 = (float)FUN_024e0374(fVar54,fVar55);
    *(float *)(lVar29 + 0xd4) = fVar51;
    if (*(uint *)(lVar27 + 0x18) <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar29 + 0xd8) = fVar65;
    uVar73 = FUN_024e0374(fVar54,fVar70 - fVar63);
    *(undefined4 *)(lVar27 + lVar47 * 0x178 + 0xfc) = uVar73;
    uVar45 = (uint)*(undefined8 *)(lVar27 + 0x18);
    if (uVar45 <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar27 + lVar47 * 0x178 + 0x100) = fVar65;
LAB_02497374:
    if (((int)unaff_x19[100] <= (int)uVar12) ||
       (*(int *)((long)unaff_x19 + 0x324) <= iStack00000000000000ac)) goto LAB_02497490;
    if (((int)uVar33 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar45 <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar34 = lVar27 + lVar47 * 0x178;
      *(ulong *)(lVar34 + 0x70) =
           CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar34 + 0x70) >> 0x20),
                    fVar74 + (float)*(undefined8 *)(lVar34 + 0x70));
      *(float *)(lVar34 + 0x78) = fVar64 + *(float *)(lVar34 + 0x78);
      if (*(uint *)(lVar27 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar34 = lVar27 + lVar47 * 0x178;
      *(ulong *)(lVar34 + 0x98) =
           CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar34 + 0x98) >> 0x20),
                    fVar74 + (float)*(undefined8 *)(lVar34 + 0x98));
      *(float *)(lVar34 + 0xa0) = fVar64 + *(float *)(lVar34 + 0xa0);
      if (*(uint *)(lVar27 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar34 = lVar27 + lVar47 * 0x178;
      *(ulong *)(lVar34 + 0xc0) =
           CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar34 + 0xc0) >> 0x20),
                    fVar74 + (float)*(undefined8 *)(lVar34 + 0xc0));
      *(float *)(lVar34 + 200) = fVar64 + *(float *)(lVar34 + 200);
      if (*(uint *)(lVar27 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar34 = lVar27 + lVar47 * 0x178;
      *(ulong *)(lVar34 + 0xe8) =
           CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar34 + 0xe8) >> 0x20),
                    fVar74 + (float)*(undefined8 *)(lVar34 + 0xe8));
      *(float *)(lVar34 + 0xf0) = fVar64 + *(float *)(lVar34 + 0xf0);
      if (iVar15 != 0) goto LAB_02497598;
LAB_02497668:
      pcVar32 = *(code **)(*unaff_x19 + 0x8d8);
LAB_02497674:
      (*pcVar32)();
    }
    else {
      if (((int)uVar33 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
        if (uVar45 <= uVar12)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(uint *)(lVar27 + lVar47 * 0x178 + 0x68) != uStack000000000000002c) goto LAB_02497490;
        lVar34 = lVar27 + lVar47 * 0x178;
        *(ulong *)(lVar34 + 0x70) =
             CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar34 + 0x70) >> 0x20),
                      fVar74 + (float)*(undefined8 *)(lVar34 + 0x70));
        *(float *)(lVar34 + 0x78) = fVar64 + *(float *)(lVar34 + 0x78);
        if (*(uint *)(lVar27 + 0x18) <= uVar12)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar34 = lVar27 + lVar47 * 0x178;
        *(ulong *)(lVar34 + 0x98) =
             CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar34 + 0x98) >> 0x20),
                      fVar74 + (float)*(undefined8 *)(lVar34 + 0x98));
        *(float *)(lVar34 + 0xa0) = fVar64 + *(float *)(lVar34 + 0xa0);
        if (*(uint *)(lVar27 + 0x18) <= uVar12)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar34 = lVar27 + lVar47 * 0x178;
        *(ulong *)(lVar34 + 0xc0) =
             CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar34 + 0xc0) >> 0x20),
                      fVar74 + (float)*(undefined8 *)(lVar34 + 0xc0));
        *(float *)(lVar34 + 200) = fVar64 + *(float *)(lVar34 + 200);
        if (*(uint *)(lVar27 + 0x18) <= uVar12)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar34 = lVar27 + lVar47 * 0x178;
        *(ulong *)(lVar34 + 0xe8) =
             CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar34 + 0xe8) >> 0x20),
                      fVar74 + (float)*(undefined8 *)(lVar34 + 0xe8));
        *(float *)(lVar34 + 0xf0) = fVar64 + *(float *)(lVar34 + 0xf0);
      }
      else {
LAB_02497490:
        if (uVar45 <= uVar12)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        puVar8 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        lVar29 = lVar27 + lVar47 * 0x178;
        uVar73 = *(undefined4 *)
                  (*(undefined8 **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8) + 1);
        *(undefined8 *)(lVar29 + 0x70) =
             **(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        *(undefined4 *)(lVar29 + 0x78) = uVar73;
        if (*(uint *)(lVar27 + 0x18) <= uVar12)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar27 + lVar47 * 0x178;
        uVar73 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
        *(undefined8 *)(lVar29 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
        *(undefined4 *)(lVar29 + 0xa0) = uVar73;
        if (*(uint *)(lVar27 + 0x18) <= uVar12)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar27 + lVar47 * 0x178;
        uVar73 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
        *(undefined8 *)(lVar29 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
        *(undefined4 *)(lVar29 + 200) = uVar73;
        if (*(uint *)(lVar27 + 0x18) <= uVar12)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar27 + lVar47 * 0x178;
        uVar73 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
        *(undefined8 *)(lVar29 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
        *(undefined4 *)(lVar29 + 0xf0) = uVar73;
        if (*(uint *)(lVar27 + 0x18) <= uVar12)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(undefined1 *)(lVar34 + 0x194) = 0;
      }
      if (iVar15 == 0) goto LAB_02497668;
LAB_02497598:
      if (iVar15 == 1) {
        pcVar32 = *(code **)(*unaff_x19 + 0x8f8);
        goto LAB_02497674;
      }
    }
LAB_02497688:
    if ((*in_stack_00000150 == 0) || (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar34 + 0x18) <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar34 = lVar34 + lVar47 * 0x178;
    uVar21 = *(undefined8 *)(lVar34 + 0x11c);
    *(undefined8 *)(lVar34 + 0x11c) =
         CONCAT44(fVar68 + (float)((ulong)uVar21 >> 0x20),fVar74 + (float)uVar21);
    *(float *)(lVar34 + 0x124) = fVar64 + *(float *)(lVar34 + 0x124);
    if ((*in_stack_00000150 == 0) || (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar34 + 0x18) <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar34 = lVar34 + lVar47 * 0x178;
    *(ulong *)(lVar34 + 0x110) =
         CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar34 + 0x110) >> 0x20),
                  fVar74 + (float)*(undefined8 *)(lVar34 + 0x110));
    *(float *)(lVar34 + 0x118) = fVar64 + *(float *)(lVar34 + 0x118);
    if ((*in_stack_00000150 == 0) || (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar34 + 0x18) <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar34 = lVar34 + lVar47 * 0x178;
    *(ulong *)(lVar34 + 0x128) =
         CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar34 + 0x128) >> 0x20),
                  fVar74 + (float)*(undefined8 *)(lVar34 + 0x128));
    *(float *)(lVar34 + 0x130) = fVar64 + *(float *)(lVar34 + 0x130);
    if ((*in_stack_00000150 == 0) || (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar34 + 0x18) <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar34 = lVar34 + lVar47 * 0x178;
    *(float *)(lVar34 + 0x134) = fVar74 + *(float *)(lVar34 + 0x134);
    *(ulong *)(lVar34 + 0x138) =
         CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar34 + 0x138) >> 0x20),
                  fVar68 + (float)*(undefined8 *)(lVar34 + 0x138));
    lVar34 = *in_stack_00000150;
    if ((lVar34 == 0) || (lVar29 = *(long *)(lVar34 + 0x38), lVar29 == 0)) goto LAB_0249920c;
    uVar45 = *(uint *)(lVar29 + 0x18);
    if (uVar45 <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar41 = lVar29 + lVar47 * 0x178;
    uVar20 = CONCAT44(fVar74 + (float)((ulong)*(undefined8 *)(lVar41 + 0x140) >> 0x20),
                      fVar74 + (float)*(undefined8 *)(lVar41 + 0x140));
    fVar51 = fVar68 + *(float *)(lVar41 + 0x150);
    uVar23 = (ulong)(uint)fVar51;
    uVar61 = CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar41 + 0x148) >> 0x20),
                      fVar68 + (float)*(undefined8 *)(lVar41 + 0x148));
    *(ulong *)(lVar41 + 0x140) = uVar20;
    *(ulong *)(lVar41 + 0x148) = uVar61;
    *(float *)(lVar41 + 0x150) = fVar51;
    if (uVar33 == uVar60) {
      uVar60 = *in_stack_00000148 - 1;
      if (uVar12 == uVar60) goto LAB_0249788c;
    }
    else {
      lVar34 = *(long *)(lVar34 + 0x50);
      if (lVar34 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar34 + 0x18) <= uVar60)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar41 = (long)(int)uVar60;
      lVar42 = lVar34 + lVar41 * 0x5c;
      uVar61 = (ulong)(uint)*(float *)(lVar42 + 0x58);
      fVar51 = fVar68 + *(float *)(lVar42 + 0x54);
      uVar20 = (ulong)(uint)fVar51;
      fVar70 = fVar74 + *(float *)(lVar42 + 0x58);
      uVar23 = (ulong)(uint)fVar70;
      *(ulong *)(lVar42 + 0x4c) =
           CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar42 + 0x4c) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar42 + 0x4c));
      *(float *)(lVar42 + 0x54) = fVar51;
      *(float *)(lVar42 + 0x58) = fVar70;
      if (uVar45 <= *(uint *)(lVar42 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar73 = *(undefined4 *)(lVar29 + (long)(int)*(uint *)(lVar42 + 0x34) * 0x178 + 0x11c);
      lVar34 = lVar34 + lVar41 * 0x5c;
      *(float *)(lVar34 + 0x70) = fVar51;
      *(undefined4 *)(lVar34 + 0x6c) = uVar73;
      lVar34 = *in_stack_00000150;
      if ((lVar34 == 0) || (lVar29 = *(long *)(lVar34 + 0x50), lVar29 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar29 + 0x18) <= uVar60)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar34 = *(long *)(lVar34 + 0x38);
      if (lVar34 == 0) goto LAB_0249920c;
      uVar60 = *(uint *)(lVar29 + lVar41 * 0x5c + 0x40);
      if (*(uint *)(lVar34 + 0x18) <= uVar60)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar29 + lVar41 * 0x5c;
      *(undefined4 *)(lVar29 + 0x74) = *(undefined4 *)(lVar34 + (long)(int)uVar60 * 0x178 + 0x128);
      *(undefined4 *)(lVar29 + 0x78) = *(undefined4 *)(lVar29 + 0x4c);
      uVar60 = *in_stack_00000148 - 1;
LAB_0249788c:
      if (uVar12 == uVar60) {
        lVar34 = *in_stack_00000150;
        if ((lVar34 == 0) || (lVar29 = *(long *)(lVar34 + 0x50), lVar29 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar29 + 0x18) <= uVar33)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar41 = lVar29 + lVar37 * 0x5c;
        uVar61 = (ulong)(uint)*(float *)(lVar41 + 0x58);
        uVar20 = CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar41 + 0x4c) >> 0x20),
                          fVar68 + (float)*(undefined8 *)(lVar41 + 0x4c));
        fVar51 = fVar68 + *(float *)(lVar41 + 0x54);
        fVar74 = fVar74 + *(float *)(lVar41 + 0x58);
        uVar23 = (ulong)(uint)fVar74;
        *(ulong *)(lVar41 + 0x4c) = uVar20;
        *(float *)(lVar41 + 0x54) = fVar51;
        *(float *)(lVar41 + 0x58) = fVar74;
        lVar34 = *(long *)(lVar34 + 0x38);
        if (lVar34 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar34 + 0x18) <= *(uint *)(lVar41 + 0x34))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar73 = *(undefined4 *)(lVar34 + (long)(int)*(uint *)(lVar41 + 0x34) * 0x178 + 0x11c);
        lVar29 = lVar29 + lVar37 * 0x5c;
        *(float *)(lVar29 + 0x70) = fVar51;
        *(undefined4 *)(lVar29 + 0x6c) = uVar73;
        lVar34 = *in_stack_00000150;
        if ((lVar34 == 0) || (lVar29 = *(long *)(lVar34 + 0x50), lVar29 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar29 + 0x18) <= uVar33)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar34 = *(long *)(lVar34 + 0x38);
        if (lVar34 == 0) goto LAB_0249920c;
        uVar60 = *(uint *)(lVar29 + lVar37 * 0x5c + 0x40);
        if (*(uint *)(lVar34 + 0x18) <= uVar60)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar29 + lVar37 * 0x5c;
        *(undefined4 *)(lVar29 + 0x74) = *(undefined4 *)(lVar34 + (long)(int)uVar60 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar29 + 0x78) = *(undefined4 *)(lVar29 + 0x4c);
      }
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar19 = FUN_016f9468(uVar43,0);
    if (((((uVar19 & 1) == 0) && (1 < uVar43 - 0x2010)) && (uVar43 != 0xad)) && (uVar43 != 0x2d)) {
      if (bVar10) {
        if (((uVar39 != 1) && ((int)uVar12 < (int)(*(uint *)(lVar27 + 0x18) - 1))) &&
           (((int)uVar12 < (int)*in_stack_00000148 && ((uVar43 == 0x2019 || (uVar43 == 0x27)))))) {
          if (*(uint *)(lVar27 + 0x18) <= uVar39 - 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar4 = *(undefined2 *)(lVar27 + lVar30 + -0x438);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar19 = FUN_016f9468(uVar4,0);
          if ((uVar19 & 1) != 0) {
            if (*(uint *)(lVar27 + 0x18) <= uVar39)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar4 = *(undefined2 *)(lVar27 + lVar30 + -0x148);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar19 = FUN_016f9468(uVar4,0);
            if ((uVar19 & 1) != 0) goto LAB_02497aa4;
          }
        }
      }
      else {
        if (uVar39 != 1) {
LAB_024985a0:
          bVar10 = false;
          goto LAB_02497aac;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar19 = FUN_016f93a0(uVar43,0);
        if ((uVar19 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar19 = FUN_016f68bc(uVar43,0);
          if (((uVar43 != 0x200b) && ((uVar19 & 1) == 0)) && (*in_stack_00000148 != 1))
          goto LAB_024985a0;
        }
      }
      if (uVar12 == *in_stack_00000148 - 1) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar19 = FUN_016f9468(uVar43,0);
        iVar15 = iVar49;
        if ((uVar19 & 1) == 0) goto LAB_02497de0;
      }
      else {
LAB_02497de0:
        iVar15 = uVar39 - 2;
      }
      lVar34 = *in_stack_00000150;
      if (lVar34 == 0) goto LAB_0249920c;
      lVar29 = *(long *)(lVar34 + 0x40);
      if (lVar29 == 0) goto LAB_0249920c;
      uVar60 = *(uint *)(lVar34 + 0x24);
      iVar16 = *(int *)(lVar29 + 0x18);
      if (iVar16 < (int)(uVar60 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar34 + 0x40),iVar16 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar34 = *in_stack_00000150;
        if (lVar34 == 0) goto LAB_0249920c;
      }
      lVar29 = *(long *)(lVar34 + 0x40);
      if (lVar29 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar29 + 0x18) <= uVar60)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar29 + (long)(int)uVar60 * 0x18;
      *(uint *)(lVar29 + 0x28) = uVar17;
      *(int *)(lVar29 + 0x2c) = iVar15;
      *(uint *)(lVar29 + 0x30) = (iVar15 - uVar17) + 1;
      *(long **)(lVar29 + 0x20) = unaff_x19;
      lVar29 = *(long *)(lVar34 + 0x50);
      *(int *)(lVar34 + 0x24) = *(int *)(lVar34 + 0x24) + 1;
      if (lVar29 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar29 + 0x18) <= uVar33)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar29 + lVar37 * 0x5c;
      bVar10 = false;
      iStack00000000000000ac = iStack00000000000000ac + 1;
      *(int *)(lVar29 + 0x30) = *(int *)(lVar29 + 0x30) + 1;
    }
    else {
      if (!bVar10) {
        uVar17 = uVar12;
      }
      if (uVar12 == *in_stack_00000148 - 1) {
        lVar34 = *in_stack_00000150;
        if (lVar34 == 0) goto LAB_0249920c;
        lVar29 = *(long *)(lVar34 + 0x40);
        if (lVar29 == 0) goto LAB_0249920c;
        uVar60 = *(uint *)(lVar34 + 0x24);
        iVar15 = *(int *)(lVar29 + 0x18);
        if (iVar15 < (int)(uVar60 + 1)) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147b84((long *)(lVar34 + 0x40),iVar15 + 1,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
          lVar34 = *in_stack_00000150;
          if (lVar34 == 0) goto LAB_0249920c;
        }
        lVar29 = *(long *)(lVar34 + 0x40);
        if (lVar29 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar29 + 0x18) <= uVar60)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar29 + (long)(int)uVar60 * 0x18;
        *(uint *)(lVar29 + 0x28) = uVar17;
        *(uint *)(lVar29 + 0x2c) = uVar12;
        *(long **)(lVar29 + 0x20) = unaff_x19;
        *(uint *)(lVar29 + 0x30) = uVar39 - uVar17;
        lVar29 = *(long *)(lVar34 + 0x50);
        *(int *)(lVar34 + 0x24) = *(int *)(lVar34 + 0x24) + 1;
        if (lVar29 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar29 + 0x18) <= uVar33)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar29 + lVar37 * 0x5c;
        iStack00000000000000ac = iStack00000000000000ac + 1;
        *(int *)(lVar29 + 0x30) = *(int *)(lVar29 + 0x30) + 1;
      }
LAB_02497aa4:
      bVar10 = true;
    }
LAB_02497aac:
    if ((*in_stack_00000150 == 0) || (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 == 0))
    goto LAB_0249920c;
    uVar60 = *(uint *)(lVar34 + 0x18);
    if (uVar60 <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar34 + lVar47 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar11) {
LAB_02497adc:
        if (uVar60 <= uVar39 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar37 = *unaff_x19;
        uVar60 = *(uint *)(lVar34 + lVar30 + -0x330);
        uVar73 = *(undefined4 *)(lVar34 + lVar30 + -0x2f8);
LAB_0249805c:
        pcVar32 = *(code **)(lVar37 + 0x908);
LAB_02498064:
        uVar61 = (ulong)uVar60;
        uVar20 = (ulong)(uint)fStack0000000000000050;
        uVar23 = (ulong)(uint)fStack0000000000000054;
        (*pcVar32)(fStack0000000000000058,uVar20,uVar23,uVar61,fStack00000000000000d0,0,
                   _bStack000000000000005c,uVar73);
        puVar8 = System_Threading_Mutex_TypeInfo;
        lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar34 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar34 = *(long *)puVar8;
        }
LAB_024980b4:
        bVar11 = false;
        fVar50 = 0.0;
        fStack00000000000000d0 = *(float *)(*(long *)(lVar34 + 0xb8) + 0x15a8);
        fStack00000000000000cc = 0.0;
      }
      else {
LAB_02497fc4:
        bVar11 = false;
      }
    }
    else {
      lVar34 = lVar34 + lVar47 * 0x178;
      iVar15 = *(int *)(lVar34 + 0x68);
      *(int *)(lVar34 + 0x16c) = iVar13;
      if ((((int)unaff_x19[100] < (int)uVar12) || ((int)unaff_x19[0x65] < (int)uVar33)) ||
         (((int)unaff_x19[0x5b] == 5 && (iVar15 + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar19 = FUN_016f68bc(uVar43,0);
      if ((uVar43 != 0x200b) && ((uVar19 & 1) == 0)) {
        lVar34 = *in_stack_00000150;
        if ((lVar34 == 0) || (lVar37 = *(long *)(lVar34 + 0x38), lVar37 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar37 + 0x18) <= uVar12)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar51 = *(float *)(lVar37 + lVar47 * 0x178 + 0x160);
        if (fVar50 <= fVar51) {
          fVar50 = fVar51;
        }
        if (fStack00000000000000cc <= ABS(fVar65)) {
          fStack00000000000000cc = ABS(fVar65);
        }
        if ((float)iVar15 != fStack000000000000004c) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar34 = *in_stack_00000150;
            if (lVar34 == 0) goto LAB_0249920c;
            lVar37 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          else {
            lVar37 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          fStack00000000000000d0 = *(float *)(lVar37 + 0x15a8);
        }
        lVar34 = *(long *)(lVar34 + 0x38);
        if (lVar34 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar34 + 0x18) <= uVar12)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0x1e] == 0) goto LAB_0249920c;
        fVar70 = *(float *)(lVar34 + lVar47 * 0x178 + 0x14c);
        fVar51 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
        fVar70 = fVar70 + fVar50 * fVar51;
        if (fVar70 <= fStack00000000000000d0) {
          fStack00000000000000d0 = fVar70;
        }
        uVar20 = (ulong)(uint)fStack00000000000000d0;
        fStack000000000000004c = (float)iVar15;
      }
      if (!bVar11) {
        bVar11 = false;
        if ((((uVar43 == 0xd) || ((uVar43 | 1) == 0xb)) || ((int)uVar5 < (int)uVar12)) ||
           ((bool)(bVar1 ^ 1))) goto LAB_024980d0;
        if (uVar12 == uVar5) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar19 = FUN_016fa418(uVar43,0);
          if ((uVar19 & 1) != 0) goto LAB_02497fc4;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar34 + 0x18) <= uVar12)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar34 = lVar34 + lVar47 * 0x178;
        _bStack000000000000005c = *(float *)(lVar34 + 0x160);
        fStack0000000000000058 = *(float *)(lVar34 + 0x11c);
        bVar11 = fVar50 != 0.0;
        fVar51 = _bStack000000000000005c;
        if (bVar11) {
          fVar51 = fVar50;
        }
        fVar50 = fVar51;
        uStack0000000000000060 = *(uint *)(lVar34 + 0x168);
        fStack0000000000000054 = 0.0;
        fVar51 = fVar65;
        if (bVar11) {
          fVar51 = fStack00000000000000cc;
        }
        uVar20 = (ulong)(uint)fVar51;
        fStack0000000000000050 = fStack00000000000000d0;
        fStack00000000000000cc = fVar51;
      }
      if (*in_stack_00000148 == 1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 != 0)) {
          if (uVar12 < *(uint *)(lVar34 + 0x18)) {
            lVar34 = lVar34 + lVar47 * 0x178;
            lVar37 = *unaff_x19;
            uVar60 = *(uint *)(lVar34 + 0x128);
            uVar73 = *(undefined4 *)(lVar34 + 0x160);
            goto LAB_0249805c;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if ((uVar12 == uVar38) || ((int)uVar5 <= (int)uVar12)) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar19 = FUN_016f68bc(uVar43,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 != 0)) {
          if (uVar43 == 0x200b || (uVar19 & 1) != 0) {
            lVar37 = lVar36;
            if (*(uint *)(lVar34 + 0x18) <= uVar5)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
            lVar37 = lVar47;
            if (*(uint *)(lVar34 + 0x18) <= uVar12)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          lVar34 = lVar34 + lVar37 * 0x178;
          uVar60 = *(uint *)(lVar34 + 0x128);
          uVar73 = *(undefined4 *)(lVar34 + 0x160);
          pcVar32 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_02498064;
        }
        goto LAB_0249920c;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 != 0)) {
          uVar60 = *(uint *)(lVar34 + 0x18);
          goto LAB_02497adc;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar12 < (int)(*in_stack_00000148 - 1)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar34 + 0x18) <= uVar39)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar19 = FUN_024a9e4c(uStack0000000000000060,*(undefined4 *)(lVar34 + lVar30),0);
        if ((uVar19 & 1) == 0) {
          if ((*in_stack_00000150 != 0) &&
             (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 != 0)) {
            if (uVar12 < *(uint *)(lVar34 + 0x18)) {
              lVar34 = lVar34 + lVar47 * 0x178;
              uVar61 = (ulong)*(uint *)(lVar34 + 0x128);
              uVar23 = (ulong)(uint)fStack0000000000000054;
              uVar20 = (ulong)(uint)fStack0000000000000050;
              (**(code **)(*unaff_x19 + 0x908))
                        (fStack0000000000000058,uVar20,uVar23,uVar61,fStack00000000000000d0,0,
                         _bStack000000000000005c,*(undefined4 *)(lVar34 + 0x160));
              puVar8 = System_Threading_Mutex_TypeInfo;
              lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar34 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar34 = *(long *)puVar8;
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
    if ((*in_stack_00000150 == 0) || (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar34 + 0x18) <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (lVar40 == 0) goto LAB_0249920c;
    uVar60 = *(uint *)(lVar34 + lVar47 * 0x178 + 400);
    fVar51 = (float)FUN_026fd1f0(lVar40 + 0x50,0);
    if ((uVar60 >> 6 & 1) == 0) {
      if (bVar6) {
        if ((*in_stack_00000150 == 0) ||
           (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar34 + 0x18) <= uVar39 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar60 = *(uint *)(lVar34 + lVar30 + -0x330);
        pcVar32 = *(code **)(*unaff_x19 + 0x908);
        fVar68 = fStack0000000000000088 * fVar51 + *(float *)(lVar34 + lVar30 + -0x30c);
LAB_02498648:
        uVar61 = (ulong)uVar60;
        uVar20 = (ulong)(uint)in_stack_00000078._4_4_;
        uVar23 = (ulong)in_stack_00000068._4_4_;
        (*pcVar32)(fStack0000000000000080,uVar20,uVar23,uVar61,fVar68,0,fStack0000000000000088,
                   fStack0000000000000088);
      }
LAB_0249867c:
      bVar6 = false;
    }
    else {
      lVar34 = *in_stack_00000150;
      if ((lVar34 == 0) || (lVar37 = *(long *)(lVar34 + 0x38), lVar37 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar37 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(int *)(lVar37 + lVar47 * 0x178 + 0x174) = iVar13;
      if ((((int)unaff_x19[100] < (int)uVar12) || ((int)unaff_x19[0x65] < (int)uVar33)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar37 + lVar47 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uVar43 == 0xd) || ((uVar43 | 1) == 0xb)) || ((int)uVar5 < (int)uVar12)) ||
         (bVar6 || !bVar1)) {
LAB_02498228:
        if (!bVar6) goto LAB_0249867c;
      }
      else {
        if (uVar12 == uVar5) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar19 = FUN_016fa418(uVar43,0);
          if ((uVar19 & 1) != 0) goto LAB_02498228;
          lVar34 = *in_stack_00000150;
          if (lVar34 == 0) goto LAB_0249920c;
        }
        lVar34 = *(long *)(lVar34 + 0x38);
        if (lVar34 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar34 + 0x18) <= uVar12)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar34 = lVar34 + lVar47 * 0x178;
        fStack0000000000000034 = *(float *)(lVar34 + 0x60);
        fStack0000000000000088 = *(float *)(lVar34 + 0x160);
        fStack0000000000000030 = *(float *)(lVar34 + 0x14c);
        uVar20 = (ulong)(uint)fStack0000000000000030;
        fStack0000000000000080 = *(float *)(lVar34 + 0x11c);
        in_stack_00000078._4_4_ = fVar51 * fStack0000000000000088 + fStack0000000000000030;
        in_stack_00000068._4_4_ = 0;
      }
      uVar60 = *in_stack_00000148;
      if (uVar60 == 1) {
LAB_024983ac:
        if ((*in_stack_00000150 != 0) &&
           (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 != 0)) {
          if (uVar12 < *(uint *)(lVar34 + 0x18)) {
            lVar34 = lVar34 + lVar47 * 0x178;
            lVar36 = *unaff_x19;
            uVar60 = *(uint *)(lVar34 + 0x128);
            fVar68 = *(float *)(lVar34 + 0x14c);
LAB_024983d8:
            pcVar32 = *(code **)(lVar36 + 0x908);
FUN_02498644:
            fVar68 = fVar51 * fStack0000000000000088 + fVar68;
            goto LAB_02498648;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if (uVar12 == uVar38) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar19 = FUN_016f68bc(uVar43,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 != 0)) {
          uVar60 = *(uint *)(lVar34 + 0x18);
          if (uVar43 == 0x200b || (uVar19 & 1) != 0) {
            if (uVar60 <= uVar5)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
LAB_02498620:
            lVar36 = lVar47;
            if (uVar60 <= uVar12)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
LAB_02498628:
          lVar34 = lVar34 + lVar36 * 0x178;
          fVar68 = *(float *)(lVar34 + 0x14c);
          uVar60 = *(uint *)(lVar34 + 0x128);
          pcVar32 = *(code **)(*unaff_x19 + 0x908);
          goto FUN_02498644;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar12 < (int)uVar60) {
        lVar34 = *in_stack_00000150;
        if ((lVar34 != 0) && (lVar37 = *(long *)(lVar34 + 0x38), lVar37 != 0)) {
          if (uVar39 < *(uint *)(lVar37 + 0x18)) {
            if (*(float *)(lVar37 + lVar30 + -0x108) == fStack0000000000000034) {
              fVar70 = *(float *)(lVar37 + lVar30 + -0x1c);
              if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar20 = (ulong)(uint)fStack0000000000000030;
              uVar19 = FUN_024aa280(fVar68 + fVar70,uVar20,0);
              if ((uVar19 & 1) != 0) {
                uVar60 = *in_stack_00000148;
                goto 
                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
                ;
              }
              lVar34 = *in_stack_00000150;
              if (lVar34 == 0) goto LAB_0249920c;
            }
            lVar34 = *(long *)(lVar34 + 0x38);
            if (lVar34 != 0) {
              uVar60 = *(uint *)(lVar34 + 0x18);
              if ((int)uVar12 <= (int)uVar5) goto LAB_02498620;
              if (uVar5 < uVar60) goto LAB_02498628;
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
      if ((int)uVar12 < (int)uVar60) {
        iVar15 = FUN_02681c0c(lVar40,0);
        if (*(uint *)(lVar27 + 0x18) <= uVar39)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar34 = *(long *)(lVar27 + lVar30 + -0x130);
        if (lVar34 == 0) goto LAB_0249920c;
        iVar16 = FUN_02681c0c(lVar34,0);
        if (iVar15 != iVar16) goto LAB_024983ac;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 != 0)) {
          if (uVar39 - 2 < *(uint *)(lVar34 + 0x18)) {
            lVar36 = *unaff_x19;
            uVar60 = *(uint *)(lVar34 + lVar30 + -0x330);
            fVar68 = *(float *)(lVar34 + lVar30 + -0x30c);
            goto LAB_024983d8;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      bVar6 = true;
    }
    if ((*in_stack_00000150 == 0) || (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 == 0))
    goto LAB_0249920c;
    uVar60 = (uint)*(undefined8 *)(lVar34 + 0x18);
    if (uVar60 <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar34 + lVar47 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar7) {
        uVar23 = (ulong)uStack00000000000000a0;
        uVar61 = (ulong)(uint)fStack00000000000000a4;
        uVar20 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar20,uVar23,uVar61,fStack00000000000000a8,uVar23);
      }
LAB_024986e8:
      bVar7 = false;
    }
    else {
      if ((((int)unaff_x19[100] < (int)uVar12) || ((int)unaff_x19[0x65] < (int)uVar33)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar34 + lVar47 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar7) {
        if ((((uVar43 == 0xd) || ((uVar43 | 1) == 0xb)) || ((int)uVar5 < (int)uVar12)) || (!bVar1))
        goto LAB_024986e8;
        if (uVar12 == uVar5) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar19 = FUN_016fa418(uVar43,0);
          if ((uVar19 & 1) != 0) goto LAB_024986e8;
        }
        puVar8 = System_Threading_Mutex_TypeInfo;
        lVar36 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar36 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar36 = *(long *)puVar8;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 == 0)) goto LAB_0249920c;
        uVar60 = (uint)*(undefined8 *)(lVar34 + 0x18);
        if (uVar60 <= uVar12)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = *(long *)(lVar36 + 0xb8);
        lVar37 = lVar34 + lVar47 * 0x178;
        in_stack_00001798 = *(undefined8 *)(lVar37 + 0x184);
        in_stack_00001790 = *(undefined8 *)(lVar37 + 0x17c);
        fStack00000000000000b0 = *(float *)(lVar36 + 0x1598);
        in_stack_000017a0 = *(float *)(lVar37 + 0x18c);
        fStack00000000000000b4 = *(float *)(lVar36 + 0x159c);
        fStack00000000000000a4 = *(float *)(lVar36 + 0x15a0);
        fStack00000000000000a8 = *(float *)(lVar36 + 0x15a4);
        uStack00000000000000a0 = 0;
      }
      if (uVar60 <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar34 = lVar34 + lVar47 * 0x178;
      fVar63 = *(float *)(lVar34 + 0x188);
      uVar18 = *(undefined8 *)(lVar34 + 0x17c);
      fVar55 = *(float *)(lVar34 + 0x184);
      uVar21 = *(undefined8 *)(lVar34 + 0x184);
      fVar54 = *(float *)(lVar34 + 0x18c);
      fVar68 = *(float *)(lVar34 + 0x11c);
      fVar70 = *(float *)(lVar34 + 0x128);
      fVar52 = *(float *)(lVar34 + 0x148);
      fVar51 = *(float *)(lVar34 + 0x150);
      in_stack_00000158 = uVar18;
      fStack0000000000000160 = fVar55;
      fStack0000000000000164 = fVar63;
      in_stack_00000168 = fVar54;
      in_stack_00000170 = in_stack_00001790;
      in_stack_00000178 = in_stack_00001798;
      in_stack_00000180 = in_stack_000017a0;
      uVar19 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
      lVar34 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
      if ((uVar19 & 1) == 0) {
        if (*(int *)(lVar34 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar34);
        }
        fVar68 = fVar68 - (float)((ulong)in_stack_00001790 >> 0x20);
        if (fVar68 <= fStack00000000000000b0) {
          fStack00000000000000b0 = fVar68;
        }
        fVar51 = fVar51 - in_stack_000017a0;
        uVar20 = (ulong)(uint)fVar51;
        fVar70 = fVar70 + (float)in_stack_00001798;
        uVar23 = (ulong)(uint)fVar70;
        if (fVar51 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar51;
        }
        fVar52 = fVar52 + (float)((ulong)in_stack_00001798 >> 0x20);
        uVar61 = (ulong)(uint)fVar52;
        if (fStack00000000000000a4 <= fVar70) {
          fStack00000000000000a4 = fVar70;
        }
        if (fStack00000000000000a8 <= fVar52) {
          fStack00000000000000a8 = fVar52;
        }
      }
      else {
        if (*(int *)(lVar34 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar34);
        }
        fVar68 = (fVar68 + (fStack00000000000000a4 - (float)in_stack_00001798)) * 0.5;
        uVar61 = (ulong)(uint)fVar68;
        if (fVar51 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar51;
        }
        uVar20 = (ulong)(uint)fStack00000000000000b4;
        uVar23 = (ulong)uStack00000000000000a0;
        if (fStack00000000000000a8 <= fVar52) {
          fStack00000000000000a8 = fVar52;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar20,uVar23,uVar61,fStack00000000000000a8,uVar23);
        fStack00000000000000b4 = fVar51 - fVar54;
        fStack00000000000000a4 = fVar70 + fVar55;
        uStack00000000000000a0 = 0;
        fStack00000000000000a8 = fVar52 + fVar63;
        fStack00000000000000b0 = fVar68;
        in_stack_00001790 = uVar18;
        in_stack_00001798 = uVar21;
        in_stack_000017a0 = fVar54;
      }
      if (((*in_stack_00000148 == 1) || (uVar12 == uVar38)) ||
         (((int)uVar5 <= (int)uVar12 || (!bVar1)))) {
        uVar23 = (ulong)uStack00000000000000a0;
        uVar61 = (ulong)(uint)fStack00000000000000a4;
        uVar20 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar20,uVar23,uVar61,fStack00000000000000a8,uVar23);
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
    }
    uVar12 = *in_stack_00000148;
    iVar49 = iVar49 + 1;
    lVar30 = lVar30 + 0x178;
    bVar1 = (int)uVar39 < (int)uVar12;
    uVar60 = uVar33;
    uVar39 = uVar39 + 1;
  } while (bVar1);
  lVar27 = *in_stack_00000150;
  if (lVar27 != 0) {
    iVar13 = uVar33 + 1;
LAB_02498c58:
    puVar9 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    puVar8 = PTR_DAT_033ed410;
    *(uint *)(lVar27 + 0x18) = uVar12;
    lVar30 = unaff_x19[0xd3];
    *(int *)(lVar27 + 0x2c) = iVar13;
    iVar13 = iStack00000000000000ac;
    if ((int)uVar12 < 1) {
      iVar13 = 1;
    }
    if (iStack00000000000000ac == 0) {
      iVar13 = 1;
    }
    *(int *)(lVar27 + 0x1c) = (int)lVar30;
    *(int *)(lVar27 + 0x24) = iVar13;
    *(int *)(lVar27 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar19 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar19 & 1) == 0)) {
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
    iVar13 = FUN_02859dc4(unaff_x19[0xe4],0);
    if (iVar13 != 0x19) {
      lVar27 = unaff_x19[0xe4];
      if (lVar27 == 0) goto LAB_0249920c;
      uVar12 = FUN_02859dc4(lVar27,0);
      FUN_02859e00(lVar27,uVar12 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x60), lVar27 == 0))
      goto LAB_0249920c;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
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
                            uVar21 = FUN_02858bac(unaff_x19[0xe3],0);
                            if (unaff_x19[0xe3] != 0) {
                              uVar12 = FUN_02858a14(unaff_x19[0xe3],0);
                              lVar27 = *in_stack_00000150;
                              if (lVar27 != 0) {
                                lVar34 = 0;
                                lVar30 = 0;
                                do {
                                  uVar19 = lVar30 + 1;
                                  if ((long)*(int *)(lVar27 + 0x34) <= (long)uVar19)
                                  goto LAB_02496098;
                                  lVar27 = *(long *)(lVar27 + 0x60);
                                  if (lVar27 == 0) break;
                                  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  if (*(uint *)(lVar27 + 0x18) <= uVar19)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  FUN_024e7ecc(lVar27 + lVar34 + 0x70,0);
                                  lVar27 = unaff_x19[0xe0];
                                  if (lVar27 == 0) break;
                                  if (*(uint *)(lVar27 + 0x18) <= uVar19)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  uVar18 = *(undefined8 *)(lVar27 + lVar30 * 8 + 0x28);
                                  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar24 = FUN_0268b4e0(uVar18,0,0);
                                  if ((uVar24 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                      if ((*in_stack_00000150 == 0) ||
                                         (lVar27 = *(long *)(*in_stack_00000150 + 0x60), lVar27 == 0
                                         )) break;
                                      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      if (*(uint *)(lVar27 + 0x18) <= uVar19)
                                      goto 
                                      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                      ;
                                      FUN_024e8000(lVar27 + lVar34 + 0x70,1,0);
                                    }
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = FUN_024f0144(lVar27,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar36 = *(long *)(*in_stack_00000150 + 0x60), lVar36 == 0))
                                    break;
                                    if (*(uint *)(lVar36 + 0x18) <= uVar19)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar27 == 0) break;
                                    FUN_0266b9c4(lVar27,*(undefined8 *)(lVar36 + lVar34 + 0x80),0);
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = FUN_024f0144(lVar27,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar36 = *(long *)(*in_stack_00000150 + 0x60), lVar36 == 0))
                                    break;
                                    if (*(uint *)(lVar36 + 0x18) <= uVar19)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar27 == 0) break;
                                    FUN_0266bbc8(lVar27,*(undefined8 *)(lVar36 + lVar34 + 0x98),0);
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = FUN_024f0144(lVar27,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar36 = *(long *)(*in_stack_00000150 + 0x60), lVar36 == 0))
                                    break;
                                    if (*(uint *)(lVar36 + 0x18) <= uVar19)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar27 == 0) break;
                                    FUN_0266bc74(lVar27,*(undefined8 *)(lVar36 + lVar34 + 0xa0),0);
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = FUN_024f0144(lVar27,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar36 = *(long *)(*in_stack_00000150 + 0x60), lVar36 == 0))
                                    break;
                                    if (*(uint *)(lVar36 + 0x18) <= uVar19)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar27 == 0) break;
                                    FUN_0266c1dc(lVar27,*(undefined8 *)(lVar36 + lVar34 + 0xa8),0);
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (lVar27 = FUN_024f0144(lVar27,0), lVar27 == 0)) break;
                                    FUN_0266ed90(lVar27,0);
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = FUN_02738ef4(lVar27,0);
                                    lVar36 = unaff_x19[0xe0];
                                    if (lVar36 == 0) break;
                                    if (*(uint *)(lVar36 + 0x18) <= uVar19)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar36 = *(long *)(lVar36 + lVar30 * 8 + 0x28);
                                    if ((lVar36 == 0) ||
                                       (uVar18 = FUN_024f0144(lVar36,0), lVar27 == 0)) break;
                                    FUN_02858f1c(lVar27,uVar18,0);
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (lVar27 = FUN_02738ef4(lVar27,0), lVar27 == 0)) break;
                                    FUN_02858b14(uVar21,uVar20,uVar23,uVar61,lVar27,0);
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (lVar27 = FUN_02738ef4(lVar27,0), lVar27 == 0)) break;
                                    FUN_02858a50(lVar27,uVar12 & 1,0);
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar19)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    plVar44 = *(long **)(lVar27 + lVar30 * 8 + 0x28);
                                    uVar17 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar44 == (long *)0x0) break;
                                    (**(code **)(*plVar44 + 0x2c8))
                                              (plVar44,uVar17 & 1,*(undefined8 *)(*plVar44 + 0x2d0))
                                    ;
                                  }
                                  lVar27 = *in_stack_00000150;
                                  lVar30 = lVar30 + 1;
                                  lVar34 = lVar34 + 0x50;
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


