/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRInteractorReticleVisual$$OnDisable
ENTRY_POINT: 02492794
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

void UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__OnDisable(long param_1)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
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
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  int *piVar24;
  ulong uVar25;
  ulong uVar26;
  undefined1 uVar27;
  char cVar28;
  long lVar29;
  undefined4 *puVar30;
  long lVar31;
  uint in_w9;
  long lVar32;
  float *pfVar33;
  code *pcVar34;
  uint uVar35;
  long lVar36;
  float *pfVar37;
  long lVar38;
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
  uint *unaff_x24;
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
  double dVar56;
  float fVar57;
  float fVar58;
  uint uVar59;
  ulong uVar60;
  float fVar61;
  float fVar62;
  float unaff_s9;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float unaff_s12;
  float unaff_s13;
  float fVar69;
  float fVar70;
  undefined4 uVar71;
  float fVar72;
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
  undefined8 in_stack_000000f0;
  float in_stack_00000128;
  undefined8 in_stack_00000130;
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
  
code_r0x02492794:
  if (param_1 != 0) {
    fVar57 = 0.0;
    fVar58 = 0.0;
    fVar70 = unaff_s13;
    while (lVar29 = *(long *)(param_1 + 0x38), lVar29 != 0) {
      if (*(uint *)(lVar29 + 0x18) <= *unaff_x24)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar29 + (int)*unaff_x24 * unaff_x27;
      *(short *)(lVar29 + 0x20) = (short)in_w9;
      *(int *)(lVar29 + 0x60) = (int)unaff_x19[0x3c];
      *(undefined4 *)(lVar29 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
      if ((unaff_x19[0x6c] == 0) || (lVar29 = *(long *)(unaff_x19[0x6c] + 0x38), lVar29 == 0))
      break;
      if (*(uint *)(lVar29 + 0x18) <= *unaff_x24)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(int *)(lVar29 + (int)*unaff_x24 * unaff_x27 + 0x168) = (int)unaff_x19[0x2a];
      if ((unaff_x19[0x6c] == 0) || (lVar29 = *(long *)(unaff_x19[0x6c] + 0x38), lVar29 == 0))
      break;
      if (*(uint *)(lVar29 + 0x18) <= *unaff_x24)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(undefined4 *)(lVar29 + (int)*unaff_x24 * unaff_x27 + 0x170) =
           *(undefined4 *)((long)unaff_x19 + 0x154);
      if ((unaff_x19[0x6c] == 0) || (lVar29 = *(long *)(unaff_x19[0x6c] + 0x38), lVar29 == 0))
      break;
      uVar13 = *unaff_x24;
      FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
                   *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
      if (*(uint *)(lVar29 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar29 + (int)uVar13 * unaff_x27;
      uVar19 = unaff_x26[1];
      uVar23 = *unaff_x26;
      *(undefined4 *)(lVar29 + 0x18c) = in_stack_00000890;
      *(undefined8 *)(lVar29 + 0x184) = uVar19;
      *(undefined8 *)(lVar29 + 0x17c) = uVar23;
      if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
      break;
      if (*(uint *)(lVar29 + 0x18) <= *unaff_x24)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(undefined4 *)(lVar29 + (int)*unaff_x24 * unaff_x27 + 400) =
           *(undefined4 *)((long)unaff_x19 + 0x254);
      if ((unaff_x19[200] == 0) || (lVar29 = *(long *)(unaff_x19[200] + 0x20), lVar29 == 0)) break;
      FUN_026fd62c(&stack0x00000bf8,lVar29,0);
      puVar9 = 
      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__;
      unaff_x26[0x1df] = in_stack_00000c00;
      unaff_x26[0x1de] = CONCAT44(in_stack_00000bfc,in_stack_00000bf8);
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
      iVar14 = (int)unaff_x27;
      if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
        fVar67 = 0.0;
        fVar66 = 0.0;
        fVar63 = 0.0;
      }
      else {
        if (unaff_x19[200] == 0) break;
        uVar59 = *unaff_x24;
        uVar18 = *(uint *)(unaff_x19[200] + 0x28);
        if ((int)uVar59 < (int)in_stack_00000078._4_4_) {
          if ((*in_stack_00000150 == 0) ||
             (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0)) break;
          if (*(uint *)(lVar29 + 0x18) <= uVar59 + 1)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar29 = *(long *)(lVar29 + (long)(int)(uVar59 + 1) * (long)iVar14 + 0x30);
          if ((((lVar29 == 0) || (*in_stack_00000138 == 0)) ||
              (lVar32 = *(long *)(*in_stack_00000138 + 0x128), lVar32 == 0)) ||
             (lVar32 = *(long *)(lVar32 + 0x18), lVar32 == 0)) break;
          in_stack_00000880 = uVar18 | *(int *)(lVar29 + 0x28) << 0x10;
          uVar21 = FUN_0129eff4(lVar32,&stack0x00000880,&stack0x000016d8,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                               );
          uVar71 = 0;
          if ((uVar21 & 1) == 0) {
            fVar67 = 0.0;
            fVar66 = 0.0;
            fVar63 = 0.0;
          }
          else {
            if (in_stack_000016d8 == 0) break;
            fVar63 = *(float *)(in_stack_000016d8 + 0x14);
            fVar66 = *(float *)(in_stack_000016d8 + 0x18);
            fVar67 = *(float *)(in_stack_000016d8 + 0x1c);
            uVar71 = *(undefined4 *)(in_stack_000016d8 + 0x20);
            if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
              fStack00000000000000cc = 0.0;
            }
          }
          uVar59 = *unaff_x24;
        }
        else {
          uVar71 = 0;
          fVar67 = 0.0;
          fVar66 = 0.0;
          fVar63 = 0.0;
        }
        if (0 < (int)uVar59) {
          if ((*in_stack_00000150 == 0) ||
             (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0)) break;
          if (*(uint *)(lVar29 + 0x18) <= (uint)((long)(int)uVar59 + -1))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar29 = *(long *)(lVar29 + ((long)(int)uVar59 + -1) * unaff_x27 + 0x30);
          if (((lVar29 == 0) || (*in_stack_00000138 == 0)) ||
             ((lVar32 = *(long *)(*in_stack_00000138 + 0x128), lVar32 == 0 ||
              (lVar32 = *(long *)(lVar32 + 0x18), lVar32 == 0)))) break;
          in_stack_00000880 = *(uint *)(lVar29 + 0x28) | uVar18 << 0x10;
          uVar21 = FUN_0129eff4(lVar32,&stack0x00000880,&stack0x000016d8,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                               );
          if ((uVar21 & 1) != 0) {
            if ((in_stack_000016d8 == 0) ||
               (fVar63 = (float)FUN_024bb1bc(fVar63,fVar66,fVar67,uVar71,
                                             *(undefined4 *)(in_stack_000016d8 + 0x28),
                                             *(undefined4 *)(in_stack_000016d8 + 0x2c),
                                             *(undefined4 *)(in_stack_000016d8 + 0x30),
                                             *(undefined4 *)(in_stack_000016d8 + 0x34),0),
               in_stack_000016d8 == 0)) break;
            if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
              fStack00000000000000cc = 0.0;
            }
          }
        }
        *(float *)((long)unaff_x19 + 0x2f4) = fVar67;
      }
      if ((char)unaff_x19[0x1d] != '\0') {
        fVar61 = *(float *)(unaff_x19 + 199);
        fVar50 = (float)FUN_026fd474(&stack0x00001770,0);
        fVar61 = fVar61 - fVar70 * fVar50 * (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc));
        *(float *)(unaff_x19 + 199) = fVar61;
        if ((uVar13 != 0) || (in_stack_000017bc == 0x200b)) {
          *(float *)(unaff_x19 + 199) =
               fVar61 - in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
        }
      }
      fVar61 = *(float *)(unaff_x19 + 0x55);
      fVar50 = 0.0;
      if (fVar61 != 0.0) {
        fVar50 = (float)FUN_026fd454(&stack0x00001770,0);
        fVar51 = (float)FUN_026fd464(&stack0x00001770,0);
        fVar50 = (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                 (fVar61 * 0.5 - fVar70 * (fVar50 * 0.5 + fVar51));
        *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fVar50;
      }
      if (((unaff_w21 == 0) && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
         ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
        lVar29 = unaff_x19[0x22];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_02681b9c(lVar29,0,0);
        fVar52 = 0.0;
        if ((uVar21 & 1) != 0) {
          lVar29 = unaff_x19[0x22];
          if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (lVar29 == 0) break;
          uVar21 = FUN_0267e1d8(lVar29,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
          fVar52 = 0.0;
          if ((uVar21 & 1) != 0) {
            lVar29 = unaff_x19[0x22];
            if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (lVar29 == 0) break;
            fVar61 = (float)FUN_0267f610(lVar29,*(undefined4 *)
                                                 (*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
            if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) break;
            fVar51 = *(float *)(*in_stack_00000138 + 0x1b0);
            fVar52 = (float)FUN_0267f610(unaff_x19[0x22],
                                         *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0
                                        );
            fVar52 = fVar52 * fVar61 * fVar51 * 0.25;
            if (fVar61 < in_stack_00000128 + fVar52) {
              in_stack_00000128 = fVar61 - fVar52;
            }
          }
        }
        if (*in_stack_00000138 == 0) break;
        fVar61 = *(float *)(*in_stack_00000138 + 0x1b4);
      }
      else {
        lVar29 = unaff_x19[0x22];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_02681b9c(lVar29,0,0);
        fVar61 = 0.0;
        if ((uVar21 & 1) != 0) {
          lVar29 = unaff_x19[0x22];
          if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (lVar29 == 0) break;
          uVar21 = FUN_0267e1d8(lVar29,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
          if ((uVar21 & 1) != 0) {
            lVar29 = unaff_x19[0x22];
            if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (lVar29 == 0) break;
            uVar21 = FUN_0267e1d8(lVar29,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0
                                 );
            if ((uVar21 & 1) != 0) {
              lVar29 = unaff_x19[0x22];
              if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              if (lVar29 != 0) {
                fVar51 = (float)FUN_0267f610(lVar29,*(undefined4 *)
                                                     (*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
                if ((*in_stack_00000138 != 0) && (unaff_x19[0x22] != 0)) {
                  fVar62 = *(float *)(*in_stack_00000138 + 0x1a8);
                  fVar52 = (float)FUN_0267f610(unaff_x19[0x22],
                                               *(undefined4 *)
                                                (*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0);
                  fVar52 = fVar52 * fVar51 * fVar62 * 0.25;
                  if (fVar51 < in_stack_00000128 + fVar52) {
                    in_stack_00000128 = fVar51 - fVar52;
                  }
                  goto LAB_024934bc;
                }
              }
              break;
            }
          }
        }
        fVar52 = 0.0;
      }
LAB_024934bc:
      fStack00000000000000ec = *(float *)(unaff_x19 + 199);
      fVar51 = (float)FUN_026fd464(&stack0x00001770,0);
      fStack00000000000000ec =
           fStack00000000000000ec +
           (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
           fVar70 * (fVar63 + ((fVar51 - in_stack_00000128) - fVar52));
      fVar63 = (float)FUN_026fd46c(&stack0x00001770,0);
      fVar51 = *(float *)((long)unaff_x19 + 0x614) +
               ((in_stack_00000130._4_4_ + fVar70 * (fVar66 + in_stack_00000128 + fVar63)) -
               *(float *)(unaff_x19 + 0x9a));
      fVar63 = (float)FUN_026fd45c(&stack0x00001770,0);
      fVar62 = fVar51 - fVar70 * (in_stack_00000128 + in_stack_00000128 + fVar63);
      fVar63 = (float)FUN_026fd454(&stack0x00001770,0);
      fVar66 = fStack00000000000000ec +
               (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
               fVar70 * (fVar52 + fVar52 + in_stack_00000128 + in_stack_00000128 + fVar63);
      fStack00000000000000e8 = fStack00000000000000ec;
      fVar63 = fVar66;
      if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (unaff_w21 == 0)) &&
         ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
        fVar53 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
        fVar63 = (float)FUN_026fd46c(&stack0x00001770,0);
        fVar72 = fVar53 * fVar70 * (fVar52 + in_stack_00000128 + fVar63);
        fVar63 = (float)FUN_026fd46c(&stack0x00001770,0);
        fVar65 = (float)FUN_026fd45c(&stack0x00001770,0);
        fVar51 = fVar51 + 0.0;
        fVar62 = fVar62 + 0.0;
        fVar53 = fVar53 * fVar70 * (((fVar63 - fVar65) - in_stack_00000128) - fVar52);
        fVar63 = fVar66 + fVar53;
        fVar65 = fStack00000000000000ec + fVar72;
        fVar54 = (fVar72 - fVar53) * 0.5;
        fStack00000000000000ec = (fStack00000000000000ec + fVar53) - fVar54;
        fVar66 = (fVar66 + fVar72) - fVar54;
        fStack00000000000000e8 = fVar65 - fVar54;
        fVar63 = fVar63 - fVar54;
      }
      if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
        fVar54 = 0.0;
        fVar55 = 0.0;
        fVar64 = 0.0;
        fVar53 = 0.0;
        fVar72 = fVar62;
        fVar65 = fVar51;
      }
      else {
        thunk_FUN_026935f0(_uStack0000000000000060,0);
        fVar68 = (fVar66 + fStack00000000000000ec) * 0.5;
        fVar69 = (fVar62 + fVar51) * 0.5;
        fVar51 = fVar51 - fVar69;
        fVar53 = 0.0;
        fVar65 = fVar51;
        fStack00000000000000e8 =
             (float)FUN_02692df0(fStack00000000000000e8 - fVar68,_uStack0000000000000060,0);
        fStack00000000000000e8 = fVar68 + fStack00000000000000e8;
        fVar53 = fVar53 + 0.0;
        fVar62 = fVar62 - fVar69;
        fVar54 = 0.0;
        fVar72 = fVar62;
        fStack00000000000000ec =
             (float)FUN_02692df0(fStack00000000000000ec - fVar68,_uStack0000000000000060,0);
        fStack00000000000000ec = fVar68 + fStack00000000000000ec;
        fVar54 = fVar54 + 0.0;
        fVar64 = 0.0;
        fVar66 = (float)FUN_02692df0(fVar66 - fVar68,_uStack0000000000000060,0);
        fVar66 = fVar68 + fVar66;
        fVar51 = fVar69 + fVar51;
        fVar64 = fVar64 + 0.0;
        fVar55 = 0.0;
        fVar63 = (float)FUN_02692df0(fVar63 - fVar68,_uStack0000000000000060,0);
        fVar63 = fVar68 + fVar63;
        fVar62 = fVar69 + fVar62;
        fVar55 = fVar55 + 0.0;
        fVar72 = fVar69 + fVar72;
        fVar65 = fVar69 + fVar65;
      }
      if (*in_stack_00000150 == 0) break;
      lVar29 = *(long *)(*in_stack_00000150 + 0x38);
      uVar21 = (ulong)(uint)fVar70;
      if (lVar29 == 0) break;
      if (*(uint *)(lVar29 + 0x18) <= *unaff_x24)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar29 + (int)*unaff_x24 * unaff_x27;
      *(float *)(lVar29 + 0x120) = fVar72;
      *(float *)(lVar29 + 0x11c) = fStack00000000000000ec;
      *(float *)(lVar29 + 0x124) = fVar54;
      if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
      break;
      if (*(uint *)(lVar29 + 0x18) <= *unaff_x24)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar29 + (int)*unaff_x24 * unaff_x27;
      *(float *)(lVar29 + 0x114) = fVar65;
      *(float *)(lVar29 + 0x110) = fStack00000000000000e8;
      *(float *)(lVar29 + 0x118) = fVar53;
      if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
      break;
      if (*(uint *)(lVar29 + 0x18) <= *unaff_x24)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar29 + (int)*unaff_x24 * unaff_x27;
      *(float *)(lVar29 + 0x128) = fVar66;
      *(float *)(lVar29 + 300) = fVar51;
      *(float *)(lVar29 + 0x130) = fVar64;
      if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
      break;
      if (*(uint *)(lVar29 + 0x18) <= *unaff_x24)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar29 + (int)*unaff_x24 * unaff_x27;
      *(float *)(lVar29 + 0x134) = fVar63;
      *(float *)(lVar29 + 0x138) = fVar62;
      *(float *)(lVar29 + 0x13c) = fVar55;
      if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
      break;
      uVar18 = *unaff_x24;
      lVar32 = (long)(int)uVar18;
      if (*(uint *)(lVar29 + 0x18) <= uVar18)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = lVar29 + lVar32 * unaff_x27;
      *(int *)(lVar36 + 0x140) = (int)unaff_x19[199];
      fVar51 = *(float *)(unaff_x19 + 0x9a);
      uVar22 = (ulong)(uint)fVar51;
      fVar63 = *(float *)((long)unaff_x19 + 0x614);
      *(float *)(lVar36 + 0x15c) = (fVar66 - fStack00000000000000ec) / (fVar65 - fVar72);
      *(float *)(lVar36 + 0x14c) = (in_stack_00000130._4_4_ - fVar51) + fVar63;
      fVar57 = fVar57 * fVar70;
      if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
        fVar57 = fVar57 / in_stack_000000f0._4_4_;
        fVar58 = (fVar58 * fVar70) / in_stack_000000f0._4_4_;
      }
      else {
        fVar58 = fVar58 * fVar70;
      }
      uVar59 = *(uint *)(unaff_x19 + 0x92);
      bVar11 = uVar13 != 0;
      fVar57 = fVar63 + fVar57;
      bVar12 = uVar18 != uVar59;
      if (bVar12 && bVar11) {
        fVar63 = *(float *)(unaff_x19 + 0x98);
        lVar29 = lVar29 + lVar32 * unaff_x27;
        *(float *)(lVar29 + 0x154) = fVar63;
        fVar58 = *(float *)((long)unaff_x19 + 0x4c4);
        *(float *)(lVar29 + 0x148) = fVar63 - fVar51;
        *(float *)(lVar29 + 0x158) = fVar58;
        *(float *)(unaff_x19 + 0x97) = fVar63 - fVar51;
        fVar58 = fVar58 - fVar51;
        *(float *)(lVar29 + 0x150) = fVar58;
      }
      else {
        fVar58 = fVar63 + fVar58;
        fVar66 = fVar57;
        fVar62 = fVar58;
        if (fVar63 != 0.0) {
          fVar66 = (fVar57 - fVar63) / *(float *)((long)unaff_x19 + 0x3fc);
          fVar62 = (fVar58 - fVar63) / *(float *)((long)unaff_x19 + 0x3fc);
          if (fVar66 <= fVar57) {
            fVar66 = fVar57;
          }
          if (fVar58 <= fVar62) {
            fVar62 = fVar58;
          }
        }
        lVar29 = lVar29 + lVar32 * unaff_x27;
        fVar63 = fVar66;
        if (fVar66 <= *(float *)(unaff_x19 + 0x98)) {
          fVar63 = *(float *)(unaff_x19 + 0x98);
        }
        fVar53 = fVar62;
        if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar62) {
          fVar53 = *(float *)((long)unaff_x19 + 0x4c4);
        }
        *(float *)((long)unaff_x19 + 0x4c4) = fVar53;
        fVar58 = fVar58 - fVar51;
        *(float *)(unaff_x19 + 0x98) = fVar63;
        *(float *)(lVar29 + 0x154) = fVar66;
        *(float *)(lVar29 + 0x158) = fVar62;
        *(float *)(lVar29 + 0x148) = fVar57 - fVar51;
        *(float *)(unaff_x19 + 0x97) = fVar57 - fVar51;
        *(float *)(lVar29 + 0x150) = fVar58;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar58;
      if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
        if (!bVar12 || !bVar11) {
          *(float *)(unaff_x19 + 0x96) = fVar63;
          if (unaff_x19[0x1f] != 0) {
            fVar58 = *(float *)((long)unaff_x19 + 0x4b4);
            fVar63 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
            in_stack_000000f0._4_4_ = (fVar70 * fVar63) / in_stack_000000f0._4_4_;
            uVar22 = (ulong)*(uint *)(unaff_x19 + 0x9a);
            if (fVar58 <= in_stack_000000f0._4_4_) {
              fVar58 = in_stack_000000f0._4_4_;
            }
            *(float *)((long)unaff_x19 + 0x4b4) = fVar58;
            goto LAB_02493948;
          }
          break;
        }
      }
      else {
LAB_02493948:
        if ((!bVar12 || !bVar11) && (float)uVar22 == 0.0) {
          fVar58 = *(float *)(in_stack_00000070 + 0x208);
          if (*(float *)(in_stack_00000070 + 0x208) <= fVar57) {
            fVar58 = fVar57;
          }
          *(float *)(in_stack_00000070 + 0x208) = fVar58;
        }
      }
      lVar29 = *in_stack_00000150;
      if ((lVar29 == 0) || (lVar32 = *(long *)(lVar29 + 0x38), lVar32 == 0)) break;
      uVar39 = *in_stack_00000148;
      if (*(uint *)(lVar32 + 0x18) <= uVar39)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar32 = lVar32 + (int)uVar39 * unaff_x27;
      *(undefined1 *)(lVar32 + 0x194) = 0;
      uVar35 = *(uint *)(unaff_x19 + 0x4e);
      in_w9 = in_stack_000017bc;
      if ((in_stack_000017bc == 9) ||
         (((((uVar13 == 0 && (in_stack_000017bc != 3)) && (in_stack_000017bc != 0x200b)) &&
           (in_stack_000017bc != 0xad)) ||
          (((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) != 0 ||
           (*(int *)((long)unaff_x19 + 0x63c) == 1)))))) {
        *(undefined1 *)(lVar32 + 0x194) = 1;
        pfVar33 = _fStack0000000000000088;
        pfVar37 = _fStack0000000000000098;
        if (unaff_w20 != 0) {
          lVar29 = *(long *)(lVar29 + 0x50);
          if (lVar29 == 0) break;
          if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
          pfVar37 = (float *)(lVar29 + 0x60);
          pfVar33 = (float *)(lVar29 + 100);
        }
        fVar57 = *pfVar37;
        fVar63 = *pfVar33;
        fVar58 = *(float *)(unaff_x19 + 0x6b);
        fVar66 = *(float *)(unaff_x19 + 199);
        fStack00000000000000d4 = (in_stack_00000090 - fVar57) - fVar63;
        bVar11 = true;
        if ((fVar58 <= fStack00000000000000d4) && (bVar11 = false, !NAN(fVar58))) {
          bVar11 = fVar58 == -1.0;
        }
        if (!bVar11) {
          fStack00000000000000d4 = fVar58;
        }
        fVar58 = 0.0;
        if ((char)unaff_x19[0x1d] == '\0') {
          fVar58 = (float)FUN_026fd474(&stack0x00001770,0);
          uVar22 = (ulong)*(uint *)(unaff_x19 + 0x9a);
        }
        fVar53 = *(float *)((long)unaff_x19 + 0x4c4);
        fVar51 = *(float *)((long)unaff_x19 + 0x2cc);
        fVar62 = (float)uVar22;
        if (in_stack_000017bc != 0xad) {
          unaff_s9 = fVar70;
        }
        fVar54 = 0.0;
        if ((0.0 < fVar62) && (fVar54 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
          fVar54 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
        }
        fVar54 = (*(float *)(unaff_x19 + 0x96) - (fVar53 - fVar62)) + fVar54;
        uVar39 = *in_stack_00000148;
        if (fVar54 <= fStack00000000000000a4) {
UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited:
          plVar44 = (long *)System_Threading_Mutex_TypeInfo;
          fVar62 = 1.0 - fVar51;
          uVar22 = (ulong)(uint)fVar62;
          fVar66 = ABS(fVar66) + fVar58 * fVar62 * unaff_s9;
          fVar58 = _DAT_0294c6e8;
          if ((uVar35 & 0x18) == 0) {
            fVar58 = 1.0;
          }
          if (fVar66 <= fVar58 * fStack00000000000000d4) {
LAB_02494950:
            if (in_stack_000017bc == 0xad) {
              if ((*in_stack_00000150 != 0) &&
                 (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 != 0)) {
                if (*in_stack_00000148 < *(uint *)(lVar29 + 0x18)) {
                  *(undefined1 *)(lVar29 + (int)*in_stack_00000148 * unaff_x27 + 0x194) = 0;
                  goto LAB_02494abc;
                }
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              }
              break;
            }
            if (in_stack_000017bc != 9) {
              if (*(int *)((long)unaff_x19 + 0x63c) == 1) {
                (**(code **)(*unaff_x19 + 0x8c8))();
              }
              else if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
                (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000128,fVar52);
              }
              uVar39 = *in_stack_00000148;
              if (((uint)fStack0000000000000058 & 1) != 0) {
                *(uint *)(in_stack_00000070 + 0x1f0) = uVar39;
              }
              *(uint *)((long)unaff_x19 + 0x49c) = uVar39;
              *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar29 = *(long *)(unaff_x19[0x6c] + 0x50), lVar29 != 0)) {
                if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar29 + 0x18)) {
                  lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                  fStack0000000000000058 = 0.0;
                  *(float *)(lVar29 + 0x60) = fVar57;
                  *(float *)(lVar29 + 100) = fVar63;
                  goto LAB_02494abc;
                }
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              }
              break;
            }
            lVar29 = *in_stack_00000150;
            if ((lVar29 == 0) || (lVar32 = *(long *)(lVar29 + 0x38), lVar32 == 0)) break;
            uVar39 = *in_stack_00000148;
            if (uVar39 < *(uint *)(lVar32 + 0x18)) {
              *(undefined1 *)(lVar32 + (int)uVar39 * unaff_x27 + 0x194) = 0;
              *(uint *)((long)unaff_x19 + 0x49c) = uVar39;
              lVar32 = *(long *)(lVar29 + 0x50);
              if (lVar32 != 0) {
                if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar32 + 0x18)) {
                  lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                  *(int *)(lVar32 + 0x2c) = *(int *)(lVar32 + 0x2c) + 1;
                  goto LAB_024949c4;
                }
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              }
              break;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          if (((char)unaff_x19[0x5a] == '\0') || (uVar39 == *(uint *)(unaff_x19 + 0x92))) {
            if (((char)unaff_x19[0x46] != '\0') &&
               (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
              fVar53 = *(float *)(unaff_x19 + 0x59) / 100.0;
              if (fVar51 < fVar53) {
                fVar57 = fVar66 / fVar62;
                if (fVar51 <= 0.0) {
                  fVar57 = fVar66;
                }
                fVar51 = fVar51 + (fVar66 - fVar58 * (fStack00000000000000d4 + DAT_02958218)) /
                                  fVar57;
                goto LAB_0249929c;
              }
              fVar62 = *(float *)((long)unaff_x19 + 0x1dc);
              uVar22 = (ulong)(uint)fVar62;
              fVar51 = *(float *)(unaff_x19 + 0x49);
              if (fVar62 <= fVar51) goto LAB_02493e34;
LAB_02499210:
              fVar58 = (fVar62 - *(float *)(unaff_x19 + 0x47)) * 0.5;
              if (fVar58 <= DAT_028aa298) {
                fVar58 = DAT_028aa298;
              }
              *(float *)((long)unaff_x19 + 0x234) = fVar62;
              fVar57 = (fVar62 - fVar58) * 20.0 + 0.5;
              fVar58 = DAT_02958220;
              if (fVar57 != INFINITY) {
                fVar58 = (float)(int)fVar57 / 20.0;
              }
              if (fVar58 <= fVar51) {
                fVar58 = fVar51;
              }
LAB_02495fd8:
              *(float *)((long)unaff_x19 + 0x1dc) = fVar58;
              return;
            }
LAB_02493e34:
            iVar15 = (int)unaff_x19[0x5b];
            if (iVar15 == 1) {
              lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar29 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar29 = *plVar44;
              }
              plVar48 = (long *)StringLiteral_302;
              lVar32 = *(long *)(lVar29 + 0xb8);
              lVar29 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
              if ((*(byte *)(lVar29 + 0x132) & 1) == 0) {
                lVar29 = FUN_00d5941c(lVar29);
              }
              lVar29 = *(long *)(*(long *)(lVar29 + 0xc0) + 8);
              if ((*(byte *)(lVar29 + 0x132) & 1) == 0) {
                lVar29 = FUN_00d5941c();
              }
              piVar24 = (int *)thunk_FUN_00d32ed4(lVar32 + 0x11f0,*(long *)(lVar29 + 0x80) + 0xa0);
              if (*piVar24 == 0) goto LAB_02495f00;
              lVar29 = *plVar44;
              if (*(int *)(lVar29 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar29 = *plVar44;
              }
              FUN_013b8de4(*(long *)(lVar29 + 0xb8) + 0x11f0,&stack0x00000880,
                           *(undefined8 *)
                            Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                          );
              memcpy(&stack0x00000c70,&stack0x00000880,0x378);
              goto LAB_02494358;
            }
            if (iVar15 != 6) {
              if (iVar15 == 3) {
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
            lVar29 = unaff_x19[0x5c];
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                );
            }
            uVar21 = FUN_02681b9c(lVar29,0,0);
            if ((uVar21 & 1) != 0) {
              plVar46 = (long *)unaff_x19[0x5c];
              uVar23 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar46 == (long *)0x0) break;
              (**(code **)(*plVar46 + 0x558))(plVar46,uVar23,*(undefined8 *)(*plVar46 + 0x560));
              lVar29 = unaff_x19[0x5c];
              if (lVar29 == 0) break;
              *(int *)(lVar29 + 0x3f8) = (int)unaff_x19[0x7f];
              FUN_024c910c(lVar29,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
              plVar46 = (long *)unaff_x19[0x5c];
              if (plVar46 == (long *)0x0) break;
              (**(code **)(*plVar46 + 0x7d8))(plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x5e) = 1;
            }
LAB_02494484:
            uVar21 = uVar22;
            in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
          }
          else {
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            in_stack_00001788 = FUN_024d66ec();
            if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
              lVar29 = *in_stack_00000150;
              if ((lVar29 == 0) || (lVar32 = *(long *)(lVar29 + 0x38), lVar32 == 0)) break;
              if (*(uint *)(lVar32 + 0x18) <= *in_stack_00000148)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              fVar51 = *(float *)(unaff_x19 + 0x9a);
              fVar62 = 0.0;
              if ((0.0 < fVar51) && (fVar62 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
                fVar62 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
              }
              fVar62 = in_stack_000000c8 * *(float *)(unaff_x19 + 0x56) +
                       *(float *)(lVar32 + (int)*in_stack_00000148 * unaff_x27 + 0x154) +
                       (fVar62 - *(float *)((long)unaff_x19 + 0x4c4)) +
                       fStack0000000000000054 *
                       (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
            }
            else {
              lVar29 = unaff_x19[0x6c];
              *(undefined1 *)((long)unaff_x19 + 700) = 1;
              if (lVar29 == 0) break;
              fVar51 = *(float *)(unaff_x19 + 0x9a);
              fVar62 = *(float *)(unaff_x19 + 0x57) +
                       in_stack_000000c8 * *(float *)(unaff_x19 + 0x56);
            }
            puVar9 = System_Threading_Mutex_TypeInfo;
            lVar29 = *(long *)(lVar29 + 0x38);
            if (lVar29 == 0) break;
            uVar45 = *(uint *)((long)unaff_x19 + 0x48c);
            if ((*(uint *)(lVar29 + 0x18) <= uVar45) ||
               (uVar5 = uVar45 - 1, *(uint *)(lVar29 + 0x18) <= uVar5))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar22 = (ulong)(uint)(fVar62 + *(float *)(unaff_x19 + 0x96));
            fVar54 = (fVar62 + *(float *)(unaff_x19 + 0x96) + fVar51) -
                     *(float *)(lVar29 + (int)uVar45 * unaff_x27 + 0x158);
            if (((in_stack_00000068._4_1_ & 1) != 0 ||
                 *(short *)(lVar29 + (long)(int)uVar5 * (long)iVar14 + 0x20) != 0xad) ||
               ((fStack00000000000000a4 <= fVar54 && ((int)unaff_x19[0x5b] != 0)))) {
              if (*(short *)(lVar29 + (int)uVar45 * unaff_x27 + 0x20) == 0xad) {
                in_stack_00000068._4_1_ = 1;
                plVar48 = (long *)StringLiteral_302;
                plVar44 = (long *)System_Threading_Mutex_TypeInfo;
                uVar21 = uVar22;
                goto LAB_02492630;
              }
              if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
                fVar51 = *(float *)((long)unaff_x19 + 0x2cc);
                fVar53 = *(float *)(unaff_x19 + 0x59) / 100.0;
                if ((fVar53 <= fVar51) ||
                   ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
                  fVar62 = *(float *)((long)unaff_x19 + 0x1dc);
                  uVar22 = (ulong)(uint)fVar62;
                  fVar51 = *(float *)(unaff_x19 + 0x49);
                  if ((fVar51 < fVar62) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_02499210;
                  goto LAB_024946c0;
                }
LAB_024992ac:
                fVar57 = fVar66;
                if (0.0 < fVar51) {
                  fVar57 = fVar66 / (1.0 - fVar51);
                }
                fVar51 = fVar51 + (fVar66 - fVar58 * (fStack00000000000000d4 + DAT_02958218)) /
                                  fVar57;
LAB_0249929c:
                if (fVar53 <= fVar51) {
                  fVar51 = fVar53;
                }
                *(float *)((long)unaff_x19 + 0x2cc) = fVar51;
                return;
              }
LAB_024946c0:
              lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar29 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar29 = *(long *)puVar9;
              }
              iVar15 = *(int *)(*(long *)(lVar29 + 0xb8) + 0xe78);
              if ((((float)iVar15 != fStack0000000000000034) && (iVar15 != -1)) &&
                 (((bStack000000000000005c ^ 1) & 1) == 0)) {
                if (*(int *)(lVar29 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                in_stack_00001788 = FUN_024d66ec();
                if ((unaff_x19[0x6c] == 0) ||
                   (lVar29 = *(long *)(unaff_x19[0x6c] + 0x38), lVar29 == 0)) break;
                uVar5 = *in_stack_00000148 - 1;
                if (*(uint *)(lVar29 + 0x18) <= uVar5)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                fStack0000000000000034 = (float)iVar15;
                if (*(short *)(lVar29 + (long)(int)uVar5 * (long)iVar14 + 0x20) == 0xad) {
                  *in_stack_00000148 = uVar5;
                  goto LAB_024947b4;
                }
              }
              if (fStack00000000000000a4 < fVar54) {
                if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                  *(undefined4 *)((long)unaff_x19 + 0x2dc) =
                       *(undefined4 *)((long)unaff_x19 + 0x48c);
                }
                plVar48 = (long *)StringLiteral_302;
                plVar44 = (long *)System_Threading_Mutex_TypeInfo;
                if ((char)unaff_x19[0x46] != '\0') {
                  fVar51 = *(float *)(unaff_x19 + 0x58);
                  if ((fVar51 < *(float *)((long)unaff_x19 + 0x2b4)) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                    fVar58 = *(float *)((long)unaff_x19 + 0x2b4) +
                             ((in_stack_00000018._4_4_ - fVar54) / (float)((int)unaff_x19[0x94] + 1)
                             ) / fStack0000000000000054;
                    if (fVar58 <= fVar51) {
                      fVar58 = fVar51;
                    }
LAB_024964c8:
                    *(float *)((long)unaff_x19 + 0x2b4) = fVar58;
                    return;
                  }
                  fVar51 = *(float *)((long)unaff_x19 + 0x2cc);
                  fVar53 = *(float *)(unaff_x19 + 0x59) / 100.0;
                  if ((fVar51 < fVar53) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_024992ac;
                  fVar62 = *(float *)((long)unaff_x19 + 0x1dc);
                  uVar22 = (ulong)(uint)fVar62;
                  fVar51 = *(float *)(unaff_x19 + 0x49);
                  if ((fVar51 < fVar62) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_02499210;
                }
                switch((int)unaff_x19[0x5b]) {
                case 0:
                case 2:
                case 4:
                  FUN_024d7014(fStack0000000000000054,uVar21,in_stack_000000c8,
                               *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar61,
                               fStack00000000000000cc,fStack00000000000000d4,fStack0000000000000048)
                  ;
                  break;
                case 1:
                  lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
                  if (*(int *)(lVar29 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar29 = *plVar44;
                  }
                  lVar32 = *(long *)(lVar29 + 0xb8);
                  lVar29 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                  if ((*(byte *)(lVar29 + 0x132) & 1) == 0) {
                    lVar29 = FUN_00d5941c(lVar29);
                  }
                  lVar29 = *(long *)(*(long *)(lVar29 + 0xc0) + 8);
                  if ((*(byte *)(lVar29 + 0x132) & 1) == 0) {
                    lVar29 = FUN_00d5941c();
                  }
                  piVar24 = (int *)thunk_FUN_00d32ed4(lVar32 + 0x11f0,
                                                      *(long *)(lVar29 + 0x80) + 0xa0);
                  if (*piVar24 == 0) {
                    in_stack_00000068._4_1_ = 0;
                    goto LAB_02495f00;
                  }
                  lVar29 = *plVar44;
                  if (*(int *)(lVar29 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar29 = *plVar44;
                  }
                  FUN_013b8de4(*(long *)(lVar29 + 0xb8) + 0x11f0,&stack0x00000880,
                               *(undefined8 *)
                                Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                              );
                  memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
                  iVar15 = FUN_024d66ec();
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
                  FUN_024d7014(fStack0000000000000054,uVar21,in_stack_000000c8,
                               *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar61,
                               fStack00000000000000cc,fStack00000000000000d4,fStack0000000000000048)
                  ;
                  *(undefined4 *)(unaff_x19 + 0x99) = 0;
                  *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                  *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
                  *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                  break;
                case 6:
                  lVar29 = unaff_x19[0x5c];
                  if (*(int *)(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar21 = FUN_02681b9c(lVar29,0,0);
                  if ((uVar21 & 1) != 0) {
                    plVar46 = (long *)unaff_x19[0x5c];
                    uVar23 = (**(code **)(*unaff_x19 + 0x548))();
                    if (plVar46 == (long *)0x0) goto LAB_0249920c;
                    (**(code **)(*plVar46 + 0x558))
                              (plVar46,uVar23,*(undefined8 *)(*plVar46 + 0x560));
                    lVar29 = unaff_x19[0x5c];
                    if (lVar29 == 0) goto LAB_0249920c;
                    *(int *)(lVar29 + 0x3f8) = (int)unaff_x19[0x7f];
                    FUN_024c910c(lVar29,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                    plVar46 = (long *)unaff_x19[0x5c];
                    if (plVar46 == (long *)0x0) goto LAB_0249920c;
                    (**(code **)(*plVar46 + 0x7d8))(plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
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
              }
              else {
                FUN_024d7014(fStack0000000000000054,uVar21,in_stack_000000c8,
                             *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar61,fStack00000000000000cc,
                             fStack00000000000000d4,fStack0000000000000048);
                bStack000000000000005c = 1;
                in_stack_00000068._4_1_ = 0;
                fStack0000000000000058 = 1.4013e-45;
                plVar48 = (long *)StringLiteral_302;
                plVar44 = (long *)System_Threading_Mutex_TypeInfo;
              }
            }
            else {
              *in_stack_00000148 = uVar5;
LAB_024947b4:
              in_stack_000017a8 = CONCAT44(0x2d,uVar5);
              in_stack_00000068._4_1_ = 0;
              plVar48 = (long *)StringLiteral_302;
              plVar44 = (long *)System_Threading_Mutex_TypeInfo;
              uVar21 = uVar22;
              in_stack_00001788 = in_stack_00001788 - 1;
            }
          }
        }
        else {
          if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
            *(uint *)((long)unaff_x19 + 0x2dc) = uVar39;
          }
          plVar48 = (long *)StringLiteral_302;
          plVar44 = (long *)System_Threading_Mutex_TypeInfo;
          uVar23 = DAT_02941c08;
          if ((char)unaff_x19[0x46] != '\0') {
            fVar72 = *(float *)(unaff_x19 + 0x58);
            if (((fVar72 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar62)) &&
               (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
              fVar58 = *(float *)((long)unaff_x19 + 0x2b4) +
                       ((in_stack_00000018._4_4_ - fVar54) / (float)(int)unaff_x19[0x94]) /
                       fStack0000000000000054;
              if (fVar58 <= fVar72) {
                fVar58 = fVar72;
              }
              goto LAB_024964c8;
            }
            fVar54 = *(float *)((long)unaff_x19 + 0x1dc);
            fVar62 = *(float *)(unaff_x19 + 0x49);
            uVar22 = (ulong)(uint)fVar62;
            if ((fVar62 < fVar54) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
              fVar58 = (fVar54 - *(float *)(unaff_x19 + 0x47)) * 0.5;
              if (fVar58 <= DAT_028aa298) {
                fVar58 = DAT_028aa298;
              }
              fVar57 = (fVar54 - fVar58) * 20.0 + 0.5;
              fVar58 = DAT_02958220;
              if (fVar57 != INFINITY) {
                fVar58 = (float)(int)fVar57 / 20.0;
              }
              if (fVar58 <= fVar62) {
                fVar58 = fVar62;
              }
              *(float *)((long)unaff_x19 + 0x234) = fVar54;
              goto LAB_02495fd8;
            }
          }
          switch((int)unaff_x19[0x5b]) {
          case 1:
            lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar29 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar29 = *plVar44;
            }
            lVar32 = *(long *)(lVar29 + 0xb8);
            lVar29 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
            if ((*(byte *)(lVar29 + 0x132) & 1) == 0) {
              lVar29 = FUN_00d5941c(lVar29);
            }
            plVar48 = (long *)StringLiteral_302;
            lVar29 = *(long *)(*(long *)(lVar29 + 0xc0) + 8);
            if ((*(byte *)(lVar29 + 0x132) & 1) == 0) {
              lVar29 = FUN_00d5941c();
            }
            piVar24 = (int *)thunk_FUN_00d32ed4(lVar32 + 0x11f0,*(long *)(lVar29 + 0x80) + 0xa0);
            if (*piVar24 == 0) {
LAB_02495f00:
              in_stack_000017a8 = DAT_02941c08;
              in_stack_00000148[0] = 0;
              in_stack_00000148[1] = 0;
              uVar21 = uVar22;
              in_stack_00001788 = 0xffffffff;
            }
            else {
              lVar29 = *plVar44;
              if (*(int *)(lVar29 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar29 = *plVar44;
              }
              FUN_013b8de4(*(long *)(lVar29 + 0xb8) + 0x11f0,&stack0x00000880,
                           *(undefined8 *)
                            Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                          );
              memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_02494358:
              iVar15 = FUN_024d66ec();
LAB_02494364:
              iVar49 = *(int *)((long)unaff_x19 + 0x48c) + -1;
              *(int *)((long)unaff_x19 + 0x48c) = iVar49;
              in_stack_00000140 = in_stack_00000140 + 1;
              uVar21 = uVar22;
              in_stack_00001788 = iVar15 - 1;
              in_stack_000017a8 = CONCAT44(0x2026,iVar49);
            }
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
              uVar21 = uVar22;
              in_stack_00001788 = 0xffffffff;
              in_stack_000017a8 = uVar23;
            }
            else {
              fVar58 = *(float *)(unaff_x19 + 0x98);
              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              in_stack_00001788 = FUN_024d66ec();
              if (fStack00000000000000a4 < fVar58 - fVar53) break;
              *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
              *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
              uVar21 = *(ulong *)(*(long *)(*plVar44 + 0xb8) + 0x15a8);
              *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
              *(undefined4 *)(unaff_x19 + 0x99) = 0;
              lVar29 = NEON_rev64(uVar21,4);
              unaff_x19[0x98] = lVar29;
              *(undefined4 *)(unaff_x19 + 0x9a) = 0;
              *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
              *(int *)(unaff_x19 + 0x94) = (int)unaff_x19[0x94] + 1;
              *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
            }
            goto LAB_02492630;
          case 6:
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            in_stack_00001788 = FUN_024d66ec();
            plVar48 = (long *)StringLiteral_302;
            lVar29 = unaff_x19[0x5c];
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                );
            }
            uVar21 = FUN_02681b9c(lVar29,0,0);
            if ((uVar21 & 1) != 0) {
              plVar46 = (long *)unaff_x19[0x5c];
              uVar23 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar46 == (long *)0x0) goto LAB_0249920c;
              (**(code **)(*plVar46 + 0x558))(plVar46,uVar23,*(undefined8 *)(*plVar46 + 0x560));
              lVar29 = unaff_x19[0x5c];
              if (lVar29 == 0) goto LAB_0249920c;
              *(int *)(lVar29 + 0x3f8) = (int)unaff_x19[0x7f];
              FUN_024c910c(lVar29,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
              plVar46 = (long *)unaff_x19[0x5c];
              if (plVar46 == (long *)0x0) goto LAB_0249920c;
              (**(code **)(*plVar46 + 0x7d8))(plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x5e) = 1;
            }
          }
LAB_0249408c:
          uVar21 = uVar22;
          in_stack_000017a8 = CONCAT44(3,uVar39);
        }
      }
      else {
        if (((in_stack_000017bc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
          fVar58 = 0.0;
          if ((0.0 < (float)uVar22) && (fVar58 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
            fVar58 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
          }
          uVar21 = (ulong)(uint)fStack00000000000000a4;
          if (fStack00000000000000a4 <
              (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - (float)uVar22))
              + fVar58) {
            if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
              *(uint *)((long)unaff_x19 + 0x2dc) = uVar39;
            }
            plVar48 = (long *)StringLiteral_302;
            plVar44 = (long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            in_stack_00001788 = FUN_024d66ec();
            lVar29 = unaff_x19[0x5c];
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                );
            }
            uVar22 = FUN_02681b9c(lVar29,0,0);
            if ((uVar22 & 1) != 0) {
              plVar46 = (long *)unaff_x19[0x5c];
              uVar23 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar46 == (long *)0x0) break;
              (**(code **)(*plVar46 + 0x558))(plVar46,uVar23,*(undefined8 *)(*plVar46 + 0x560));
              lVar29 = unaff_x19[0x5c];
              if (lVar29 == 0) break;
              *(int *)(lVar29 + 0x3f8) = (int)unaff_x19[0x7f];
              FUN_024c910c(lVar29,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
              plVar46 = (long *)unaff_x19[0x5c];
              if (plVar46 == (long *)0x0) break;
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
            lVar29 = *in_stack_00000150;
            if ((lVar29 == 0) || (lVar32 = *(long *)(lVar29 + 0x50), lVar32 == 0)) break;
            if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
            *(int *)(lVar32 + 0x2c) = *(int *)(lVar32 + 0x2c) + 1;
            *(int *)(lVar29 + 0x20) = *(int *)(lVar29 + 0x20) + 1;
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
          if ((*in_stack_00000150 == 0) ||
             (lVar29 = *(long *)(*in_stack_00000150 + 0x50), lVar29 == 0)) break;
          if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_024949c4:
          *(int *)(lVar29 + 0x20) = *(int *)(lVar29 + 0x20) + 1;
        }
LAB_02494abc:
        if (((int)unaff_x19[0x5b] == 1) && ((in_stack_000017bc == 0x2d || (unaff_w20 != 1)))) {
          if (unaff_x19[0xca] == 0) break;
          fVar58 = *(float *)(unaff_x19 + 0x3c);
          iVar15 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
          if (unaff_x19[0xca] == 0) break;
          fVar63 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
          lVar29 = unaff_x19[0xc9];
          fVar57 = fStack0000000000000084;
          if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
            fVar57 = 1.0;
          }
          if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) break;
          fVar51 = *(float *)((long)unaff_x19 + 0x3fc);
          fVar62 = *(float *)(lVar29 + 0x2c);
          fVar66 = (float)FUN_026fd668(*(long *)(lVar29 + 0x20),0);
          fVar52 = *_fStack0000000000000098;
          fVar66 = fVar51 * (fVar58 / (float)iVar15) * fVar63 * fVar57 * fVar62 * fVar66;
          fVar58 = *_fStack0000000000000088;
          if ((in_stack_000017bc == 10) &&
             (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
            if ((*in_stack_00000150 == 0) ||
               (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0)) break;
            uVar39 = *(int *)((long)unaff_x19 + 0x48c) - 1;
            if (*(uint *)(lVar29 + 0x18) <= uVar39)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (unaff_x19[0xca] == 0) break;
            fVar57 = *(float *)(lVar29 + (long)(int)uVar39 * (long)iVar14 + 0x60);
            iVar15 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
            if (unaff_x19[0xca] == 0) break;
            fVar51 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
            lVar29 = unaff_x19[0xc9];
            fVar63 = fStack0000000000000084;
            if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
              fVar63 = 1.0;
            }
            if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) break;
            fVar62 = *(float *)((long)unaff_x19 + 0x3fc);
            fVar53 = *(float *)(lVar29 + 0x2c);
            fVar66 = (float)FUN_026fd668(*(long *)(lVar29 + 0x20),0);
            if ((*in_stack_00000150 == 0) ||
               (lVar29 = *(long *)(*in_stack_00000150 + 0x50), lVar29 == 0)) break;
            if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
            fVar52 = *(float *)(lVar29 + 0x60);
            fVar58 = *(float *)(lVar29 + 100);
            fVar66 = fVar62 * (fVar57 / (float)iVar15) * fVar51 * fVar63 * fVar53 * fVar66;
          }
          fVar62 = *(float *)(unaff_x19 + 0x9a);
          fVar63 = *(float *)(unaff_x19 + 0x96);
          fVar53 = *(float *)((long)unaff_x19 + 0x4c4);
          fVar57 = 0.0;
          fVar51 = 0.0;
          if ((0.0 < fVar62) && (fVar51 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
            fVar51 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
          }
          fVar54 = *(float *)(unaff_x19 + 199);
          if ((char)unaff_x19[0x1d] == '\0') {
            if ((unaff_x19[0xc9] == 0) || (lVar29 = *(long *)(unaff_x19[0xc9] + 0x20), lVar29 == 0))
            break;
            FUN_026fd62c(&stack0x00000880,lVar29,0);
            fVar57 = (float)FUN_026fd474(&stack0x000016e0,0);
          }
          puVar9 = System_Threading_Mutex_TypeInfo;
          fVar72 = *(float *)(unaff_x19 + 0x6b);
          fVar58 = (in_stack_00000090 - fVar52) - fVar58;
          bVar11 = true;
          if ((fVar72 <= fVar58) && (bVar11 = false, !NAN(fVar72))) {
            bVar11 = fVar72 == -1.0;
          }
          if (!bVar11) {
            fVar58 = fVar72;
          }
          fVar52 = _DAT_0294c6e8;
          if ((uVar35 & 0x18) == 0) {
            fVar52 = 1.0;
          }
          if (((fVar63 - (fVar53 - fVar62)) + fVar51 < fStack00000000000000a4) &&
             (ABS(fVar54) + fVar66 * fVar57 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
              fVar52 * fVar58)) {
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_024d69d4();
            lVar29 = *(long *)(*(long *)puVar9 + 0xb8);
            memcpy(&stack0x00000508,(void *)(lVar29 + 0x788),0x378);
            FUN_013b86dc(lVar29 + 0x11f0,&stack0x00000508,
                         *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__
                        );
          }
        }
        fVar58 = 1.0;
        lVar29 = *in_stack_00000150;
        if ((lVar29 == 0) || (lVar32 = *(long *)(lVar29 + 0x38), lVar32 == 0)) break;
        if (*(uint *)(lVar32 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar39 = *(uint *)(unaff_x19 + 0x94);
        lVar32 = lVar32 + (int)*in_stack_00000148 * unaff_x27;
        *(uint *)(lVar32 + 100) = uVar39;
        *(int *)(lVar32 + 0x68) = (int)unaff_x19[0x95];
        if (((unaff_w20 & 1) == 0) &&
           ((0xd < in_stack_000017bc || ((1 << (ulong)(in_stack_000017bc & 0x1f) & 0x2c00U) == 0))))
        {
          lVar29 = *(long *)(lVar29 + 0x50);
          if (lVar29 == 0) break;
LAB_02494e68:
          if (*(uint *)(lVar29 + 0x18) <= uVar39)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          *(int *)(lVar29 + (long)(int)uVar39 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
        }
        else {
          lVar29 = *(long *)(lVar29 + 0x50);
          if (lVar29 == 0) break;
          if (*(uint *)(lVar29 + 0x18) <= uVar39)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          if (*(int *)(lVar29 + (long)(int)uVar39 * 0x5c + 0x24) == 1) goto LAB_02494e68;
        }
        if (in_stack_000017bc == 9) {
          if (*in_stack_00000138 == 0) break;
          fVar58 = (float)FUN_026fd208(*in_stack_00000138 + 0x50,0);
          if (*in_stack_00000138 == 0) break;
          fVar66 = *(float *)(unaff_x19 + 199);
          fVar57 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000138 + 0x1b9));
          fVar58 = fVar70 * fVar58 * fVar57;
          fVar63 = fVar58 * (float)(int)(fVar66 / fVar58);
          uVar21 = (ulong)(uint)fVar63;
          if (fVar63 <= fVar66) {
            fVar63 = fVar66 + fVar58;
          }
LAB_02495058:
          *(float *)(unaff_x19 + 199) = fVar63;
        }
        else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
          if ((char)unaff_x19[0x1d] == '\0') {
            if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
              fVar58 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
            }
            fVar63 = *(float *)(unaff_x19 + 199);
            fVar66 = (float)FUN_026fd474(&stack0x00001770,0);
            if (unaff_x19[0x1f] != 0) {
              fVar57 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
              fVar63 = fVar63 + fVar57 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                         fVar70 * (fVar67 + fVar58 * fVar66) +
                                         in_stack_000000c8 *
                                         (fVar61 + fStack00000000000000cc +
                                                   *(float *)(unaff_x19[0x1f] + 0x1ac)));
              *(float *)(unaff_x19 + 199) = fVar63;
              goto joined_r0x02494fac;
            }
            break;
          }
          if (*in_stack_00000138 == 0) break;
          fVar63 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                   (*(float *)((long)unaff_x19 + 0x2a4) +
                   fVar70 * fVar67 +
                   in_stack_000000c8 *
                   (fVar61 + fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
          uVar21 = (ulong)(uint)fVar63;
          fVar63 = *(float *)(unaff_x19 + 199) - fVar63;
          *(float *)(unaff_x19 + 199) = fVar63;
          if ((uVar13 != 0) || (in_stack_000017bc == 0x200b)) {
            fVar58 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
            uVar21 = (ulong)(uint)fVar58;
            fVar63 = fVar63 - fVar58;
            goto LAB_02495058;
          }
        }
        else {
          if (*in_stack_00000138 == 0) break;
          fVar57 = *(float *)(unaff_x19 + 199);
          fVar63 = fVar57 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                            (*(float *)((long)unaff_x19 + 0x2a4) +
                            (*(float *)(unaff_x19 + 0x55) - fVar50) +
                            in_stack_000000c8 *
                            (fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
          *(float *)(unaff_x19 + 199) = fVar63;
joined_r0x02494fac:
          if ((uVar13 != 0) || (uVar21 = (ulong)(uint)fVar57, in_stack_000017bc == 0x200b)) {
            fVar58 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
            uVar21 = (ulong)(uint)fVar58;
            fVar63 = fVar63 + fVar58;
            goto LAB_02495058;
          }
        }
        lVar29 = *in_stack_00000150;
        if ((lVar29 == 0) || (lVar32 = *(long *)(lVar29 + 0x38), lVar32 == 0)) break;
        uVar39 = *in_stack_00000148;
        uVar35 = (uint)*(undefined8 *)(lVar32 + 0x18);
        if (uVar35 <= uVar39)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(float *)(lVar32 + (int)uVar39 * unaff_x27 + 0x144) = fVar63;
        uVar45 = in_stack_000017bc;
        if ((int)in_stack_000017bc < 0xd) {
          if ((in_stack_000017bc - 10 < 2) || (in_stack_000017bc == 3)) goto LAB_024950bc;
FUN_02495710:
          if (((unaff_w20 & in_stack_000017bc == 0x2d) != 0) ||
             ((float)uVar39 == in_stack_00000078._4_4_)) goto LAB_024950bc;
        }
        else {
          if (1 < in_stack_000017bc - 0x2028) {
            if (in_stack_000017bc != 0xd) goto FUN_02495710;
            uVar21 = 0;
            *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
            if ((float)uVar39 != in_stack_00000078._4_4_) goto LAB_0249572c;
          }
LAB_024950bc:
          if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
            fVar58 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
            if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (((fStack000000000000004c < ABS(fVar58)) &&
                (*(char *)((long)unaff_x19 + 700) == '\0')) &&
               (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
              FUN_024d6ca8(fVar58);
              *(float *)((long)unaff_x19 + 0x4bc) = *(float *)((long)unaff_x19 + 0x4bc) - fVar58;
              *(float *)(unaff_x19 + 0x9a) = fVar58 + *(float *)(unaff_x19 + 0x9a);
              puVar9 = System_Threading_Mutex_TypeInfo;
              lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar29 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar29 = *(long *)puVar9;
              }
              lVar32 = *(long *)(lVar29 + 0xb8);
              if (*(int *)(lVar32 + 0x7ac) == (int)unaff_x19[0x94]) {
                if (*(int *)(lVar29 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar32 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
                }
                FUN_013b8de4(lVar32 + 0x11f0,&stack0x00000880,
                             *(undefined8 *)
                              Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                            );
                lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
                memcpy((void *)(*(long *)(lVar29 + 0xb8) + 0x788),&stack0x00000880,0x378);
                lVar29 = *(long *)(lVar29 + 0xb8);
                *(float *)(lVar29 + 0x7bc) = fVar58 + *(float *)(lVar29 + 0x7bc);
                *(float *)(lVar29 + 0x800) = fVar58 + *(float *)(lVar29 + 0x800);
                memcpy(&stack0x00000190,(void *)(lVar29 + 0x788),0x378);
                FUN_013b86dc(lVar29 + 0x11f0,&stack0x00000190,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List<TextStyle>_get_Item__);
              }
            }
          }
          fVar63 = *(float *)(unaff_x19 + 0x9a);
          *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
          fVar57 = *(float *)((long)unaff_x19 + 0x4c4) - fVar63;
          fVar58 = *(float *)((long)unaff_x19 + 0x4bc);
          if (fVar57 <= *(float *)((long)unaff_x19 + 0x4bc)) {
            fVar58 = fVar57;
          }
          *(float *)((long)unaff_x19 + 0x4bc) = fVar58;
          fVar66 = *(float *)(unaff_x19 + 0x98);
          if (in_stack_000017b4 == '\0') {
            in_stack_000017b8 = fVar58;
          }
          if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
             (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
              ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
            in_stack_000017b4 = '\x01';
          }
          lVar29 = *in_stack_00000150;
          if ((lVar29 == 0) || (lVar32 = *(long *)(lVar29 + 0x50), lVar32 == 0)) break;
          uVar39 = *(uint *)(unaff_x19 + 0x94);
          if (*(uint *)(lVar32 + 0x18) <= uVar39)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar36 = lVar32 + (long)(int)uVar39 * 0x5c;
          *(int *)(lVar36 + 0x34) = (int)unaff_x19[0x92];
          iVar15 = (int)unaff_x19[0x92];
          if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
            iVar15 = *(int *)((long)unaff_x19 + 0x494);
          }
          *(int *)((long)unaff_x19 + 0x494) = iVar15;
          *(int *)(lVar36 + 0x38) = iVar15;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
          *(undefined4 *)(lVar36 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
          iVar15 = *(int *)((long)unaff_x19 + 0x494);
          if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
            iVar15 = *(int *)((long)unaff_x19 + 0x49c);
          }
          *(int *)((long)unaff_x19 + 0x49c) = iVar15;
          *(int *)(lVar36 + 0x40) = iVar15;
          *(int *)(lVar36 + 0x24) = (*(int *)(lVar36 + 0x3c) - *(int *)(lVar36 + 0x34)) + 1;
          *(undefined4 *)(lVar36 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
          lVar29 = *(long *)(lVar29 + 0x38);
          if (lVar29 == 0) break;
          if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar71 = *(undefined4 *)
                    (lVar29 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x27 + 0x11c);
          lVar32 = lVar32 + (long)(int)uVar39 * 0x5c;
          *(float *)(lVar32 + 0x70) = fVar57;
          *(undefined4 *)(lVar32 + 0x6c) = uVar71;
          lVar29 = *in_stack_00000150;
          if ((lVar29 == 0) || (lVar32 = *(long *)(lVar29 + 0x50), lVar32 == 0)) break;
          if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar29 = *(long *)(lVar29 + 0x38);
          if (lVar29 == 0) break;
          if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar71 = *(undefined4 *)
                    (lVar29 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x27 + 0x128);
          fVar66 = fVar66 - fVar63;
          lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
          *(float *)(lVar32 + 0x78) = fVar66;
          *(undefined4 *)(lVar32 + 0x74) = uVar71;
          lVar29 = *in_stack_00000150;
          if ((lVar29 == 0) || (lVar36 = *(long *)(lVar29 + 0x50), lVar36 == 0)) break;
          lVar20 = (long)(int)*(uint *)(unaff_x19 + 0x94);
          if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar32 = lVar36 + lVar20 * 0x5c;
          *(float *)(lVar32 + 0x44) = *(float *)(lVar32 + 0x74) - fVar70 * in_stack_00000128;
          *(float *)(lVar32 + 0x5c) = fStack00000000000000d4;
          if (*(int *)(lVar32 + 0x24) == 1) {
            *(int *)(lVar36 + lVar20 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
          }
          if ((*in_stack_00000138 == 0) || (lVar32 = *(long *)(lVar29 + 0x38), lVar32 == 0)) break;
          lVar47 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
          uVar35 = (uint)*(undefined8 *)(lVar32 + 0x18);
          if (uVar35 <= *(uint *)((long)unaff_x19 + 0x49c))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          if ((*(char *)(lVar32 + lVar47 * unaff_x27 + 0x194) == '\0') &&
             (lVar47 = (long)(int)*(uint *)(unaff_x19 + 0x93), uVar35 <= *(uint *)(unaff_x19 + 0x93)
             )) goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar63 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                   (in_stack_000000c8 *
                    (fVar61 + fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)) -
                   *(float *)((long)unaff_x19 + 0x2a4));
          fVar58 = -fVar63;
          if ((char)unaff_x19[0x1d] != '\0') {
            fVar58 = fVar63;
          }
          lVar36 = lVar36 + lVar20 * 0x5c;
          *(float *)(lVar36 + 0x58) = *(float *)(lVar32 + lVar47 * unaff_x27 + 0x144) + fVar58;
          fVar58 = *(float *)(unaff_x19 + 0x9a);
          *(float *)(lVar36 + 0x48) = fStack0000000000000050 + (fVar66 - fVar57);
          *(float *)(lVar36 + 0x4c) = fVar66;
          uVar21 = (ulong)(uint)(0.0 - fVar58);
          *(float *)(lVar36 + 0x50) = 0.0 - fVar58;
          *(float *)(lVar36 + 0x54) = fVar57;
          plVar44 = (long *)System_Threading_Mutex_TypeInfo;
          if ((int)in_stack_000017bc < 0x2d) {
            if (in_stack_000017bc - 10 < 2) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering:
              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              plVar48 = (long *)StringLiteral_302;
              FUN_024d69d4();
              lVar29 = unaff_x19[0x6c];
              *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
              iVar15 = (int)unaff_x19[0x94] + 1;
              *(int *)(unaff_x19 + 0x94) = iVar15;
              *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
              if ((lVar29 != 0) && (*(long *)(lVar29 + 0x50) != 0)) {
                if (*(int *)(*(long *)(lVar29 + 0x50) + 0x18) <= iVar15) {
                  FUN_024d6e60();
                  lVar29 = unaff_x19[0x6c];
                  if (lVar29 == 0) break;
                }
                lVar29 = *(long *)(lVar29 + 0x38);
                if (lVar29 != 0) {
                  if (*in_stack_00000148 < *(uint *)(lVar29 + 0x18)) {
                    fVar58 = *(float *)(lVar29 + (int)*in_stack_00000148 * unaff_x27 + 0x154);
                    if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                      fVar57 = 0.0;
                      if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
                        fVar57 = *(float *)((long)unaff_x19 + 0x2c4);
                      }
                      uVar27 = 0;
                      fVar57 = *(float *)(unaff_x19 + 0x9a) +
                               fVar58 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                               fStack0000000000000054 *
                               (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4)) +
                               in_stack_000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar57);
                    }
                    else {
                      if ((in_stack_000017bc == 0x2029) || (fVar57 = 0.0, in_stack_000017bc == 10))
                      {
                        fVar57 = *(float *)((long)unaff_x19 + 0x2c4);
                      }
                      uVar27 = 1;
                      fVar57 = *(float *)(unaff_x19 + 0x9a) +
                               *(float *)(unaff_x19 + 0x57) +
                               in_stack_000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar57);
                    }
                    *(float *)(unaff_x19 + 0x9a) = fVar57;
                    *(undefined1 *)((long)unaff_x19 + 700) = uVar27;
                    lVar29 = *plVar44;
                    if (*(int *)(lVar29 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar29 = *plVar44;
                    }
                    uVar23 = *(undefined8 *)(*(long *)(lVar29 + 0xb8) + 0x15a8);
                    *(float *)(unaff_x19 + 0x99) = fVar58;
                    uVar21 = NEON_rev64(uVar23,4);
                    unaff_x19[0x98] = uVar21;
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
              break;
            }
            if (in_stack_000017bc == 3) {
              if (unaff_x19[0x8e] == 0) break;
              in_stack_00001788 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
              uVar45 = 3;
            }
          }
          else if ((in_stack_000017bc - 0x2028 < 2) || (in_stack_000017bc == 0x2d))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering;
        }
LAB_0249572c:
        uVar39 = *in_stack_00000148;
        if (uVar35 <= uVar39)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(char *)(lVar32 + (int)uVar39 * unaff_x27 + 0x194) != '\0') {
          lVar32 = lVar32 + (int)uVar39 * unaff_x27;
          uVar22 = *(ulong *)(lVar32 + 0x11c);
          uVar21 = *(ulong *)(in_stack_00000070 + 0x230);
          *(ulong *)(in_stack_00000070 + 0x230) =
               uVar22 ^ (uVar22 ^ uVar21) &
                        CONCAT44(-(uint)((float)(uVar21 >> 0x20) < (float)(uVar22 >> 0x20)),
                                 -(uint)((float)uVar21 < (float)uVar22));
          uVar22 = *(ulong *)(in_stack_00000070 + 0x238);
          uVar21 = *(ulong *)(lVar32 + 0x128);
          *(ulong *)(in_stack_00000070 + 0x238) =
               uVar21 ^ (uVar21 ^ uVar22) &
                        CONCAT44(-(uint)((float)(uVar21 >> 0x20) < (float)(uVar22 >> 0x20)),
                                 -(uint)((float)uVar21 < (float)uVar22));
        }
        if (((int)unaff_x19[0x5b] == 5) &&
           ((0xd < uVar45 || ((1 << (ulong)(uVar45 & 0x1f) & 0x2c00U) == 0)))) {
          lVar32 = *(long *)(lVar29 + 0x58);
          if (lVar32 == 0) break;
          iVar15 = (int)unaff_x19[0x95] + 1;
          if (*(int *)(lVar32 + 0x18) < iVar15) {
            if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_01147c08((long *)(lVar29 + 0x58),iVar15,1,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
            lVar29 = *in_stack_00000150;
            if (lVar29 == 0) break;
          }
          lVar32 = *(long *)(lVar29 + 0x58);
          if (lVar32 == 0) break;
          uVar35 = *(uint *)(unaff_x19 + 0x95);
          lVar36 = (long)(int)uVar35;
          uVar39 = *(uint *)(lVar32 + 0x18);
          if (uVar39 <= uVar35)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar20 = lVar32 + lVar36 * 0x14;
          fVar57 = *(float *)(lVar20 + 0x30);
          uVar21 = (ulong)(uint)fVar57;
          *(undefined4 *)(lVar20 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
          fVar58 = *(float *)((long)unaff_x19 + 0x4bc);
          if (fVar57 <= *(float *)((long)unaff_x19 + 0x4bc)) {
            fVar58 = fVar57;
          }
          *(float *)(lVar20 + 0x30) = fVar58;
          uVar45 = *(uint *)((long)unaff_x19 + 0x48c);
          if (uVar45 == 0 && uVar35 == 0) {
            *(uint *)(lVar32 + lVar36 * 0x14 + 0x20) = uVar45;
          }
          else {
            uVar5 = uVar45 - 1;
            if (0 < (int)uVar45) {
              lVar29 = *(long *)(lVar29 + 0x38);
              if (lVar29 == 0) break;
              if (*(uint *)(lVar29 + 0x18) <= uVar5)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              if (uVar35 != *(uint *)(lVar29 + (long)(int)uVar5 * (long)iVar14 + 0x68)) {
                if (uVar35 - 1 < uVar39) {
                  *(uint *)(lVar32 + 0x20 + (long)(int)(uVar35 - 1) * 0x14 + 4) = uVar5;
                  *(uint *)(lVar32 + 0x20 + lVar36 * 0x14) = uVar45;
                  goto LAB_024957b0;
                }
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              }
            }
            if ((float)uVar45 == in_stack_00000078._4_4_) {
              *(float *)(lVar32 + lVar36 * 0x14 + 0x24) = in_stack_00000078._4_4_;
            }
          }
        }
LAB_024957b0:
        puVar9 = System_Threading_Mutex_TypeInfo;
        if (((char)unaff_x19[0x5a] != '\0') ||
           ((*(uint *)(unaff_x19 + 0x5b) < 7 &&
            ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) != 0)))) {
          if ((uVar13 == 0) &&
             (((in_stack_000017bc != 0x2d && (in_stack_000017bc != 0x200b)) &&
              (in_stack_000017bc != 0xad)))) {
            if (*(char *)((long)unaff_x19 + 0x2d2) == '\0') {
LAB_02495868:
              if (((((0x2bfd < in_stack_000017bc - 0xac01) && (0x1d < in_stack_000017bc - 0xa961))
                   && (0xfd < in_stack_000017bc - 0x1101)) ||
                  (uVar22 = FUN_024e95f0(0), (uVar22 & 1) != 0)) &&
                 ((((0xed < in_stack_000017bc - 0xff01 && (0x1d < in_stack_000017bc - 0xfe31)) &&
                   (0x717d < in_stack_000017bc - 0x2e81)) && (0x1fd < in_stack_000017bc - 0xf901))))
              goto LAB_024958f0;
              lVar29 = FUN_024e94b0(0);
              if ((lVar29 == 0) || (*(long *)(lVar29 + 0x10) == 0)) break;
              uVar22 = FUN_0129aa60(*(long *)(lVar29 + 0x10),&stack0x00000880,
                                    *(undefined8 *)
                                     System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                   );
              if ((int)*in_stack_00000148 < (int)in_stack_00000078._4_4_) {
                lVar29 = FUN_024e94b0(0);
                if (((lVar29 != 0) && (*in_stack_00000150 != 0)) &&
                   (lVar32 = *(long *)(*in_stack_00000150 + 0x38), lVar32 != 0)) {
                  if (*in_stack_00000148 + 1 < *(uint *)(lVar32 + 0x18)) {
                    if (*(long *)(lVar29 + 0x18) != 0) {
                      in_stack_00000880 =
                           (uint)*(ushort *)
                                  (lVar32 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar14 +
                                  0x20);
                      uVar25 = FUN_0129aa60(*(long *)(lVar29 + 0x18),&stack0x00000880,
                                            *(undefined8 *)
                                             System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                           );
                      if ((uVar22 & 1) != 0) goto LAB_02495adc;
                      if ((uVar25 & 1) == 0) goto LAB_02495bc4;
                      if ((bStack000000000000005c & 1) != 0) goto joined_r0x02495af4;
                      goto LAB_024959d4;
                    }
                    break;
                  }
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                }
                break;
              }
              in_stack_00000880 = in_stack_000017bc;
              if ((uVar22 & 1) == 0) {
LAB_02495bc4:
                if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_024d69d4();
                bStack000000000000005c = 0;
                goto LAB_02495b70;
              }
LAB_02495adc:
              if (uVar18 != uVar59 || ((bStack000000000000005c ^ 0xff) & 1) != 0) goto LAB_02495b70;
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
            *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xe78) = 0xffffffff;
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
      }
LAB_02492630:
      do {
        unaff_x26 = (undefined8 *)&stack0x00000880;
        unaff_s12 = 1.0;
        fVar57 = 1.0;
        in_stack_00001788 = in_stack_00001788 + 1;
        lVar29 = unaff_x19[0x8e];
        if (lVar29 == 0) goto LAB_0249920c;
        if ((int)*(uint *)(lVar29 + 0x18) <= (int)in_stack_00001788) {
LAB_02495f1c:
          fVar58 = (float)uVar21;
          if (((char)unaff_x19[0x46] != '\0') &&
             (fVar58 = DAT_02956ccc,
             DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
            fVar58 = *(float *)((long)unaff_x19 + 0x1dc);
            fVar57 = *(float *)((long)unaff_x19 + 0x24c);
            if ((fVar58 < fVar57) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
              if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
                *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
              }
              fVar70 = (*(float *)((long)unaff_x19 + 0x234) - fVar58) * 0.5;
              if (fVar70 <= DAT_028aa298) {
                fVar70 = DAT_028aa298;
              }
              *(float *)(unaff_x19 + 0x47) = fVar58;
              fVar70 = (fVar58 + fVar70) * 20.0 + 0.5;
              fVar58 = DAT_02958220;
              if (fVar70 != INFINITY) {
                fVar58 = (float)(int)fVar70 / 20.0;
              }
              if (fVar57 <= fVar58) {
                fVar58 = fVar57;
              }
              goto LAB_02495fd8;
            }
          }
          *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
          if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
            uVar23 = FUN_0176eb1c(in_stack_00000038,0);
            uVar19 = FUN_017840ac(in_stack_00000040,0);
            uVar23 = FUN_0160073c(*(undefined8 *)
                                   Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__,uVar23,
                                  *(undefined8 *)
                                   Method_UnityEngine_GameObject_GetComponents<Component>__,uVar19,0
                                 );
            if (*(int *)(*plVar48 + 0xe0) == 0) {
              thunk_FUN_00d32864(*plVar48);
            }
            FUN_02660dac(uVar23,0);
          }
          if ((*in_stack_00000148 == 0) || ((*in_stack_00000148 == 1 && (in_w9 == 3)))) {
            (**(code **)(*unaff_x19 + 0x948))();
            goto LAB_02496098;
          }
          lVar29 = *plVar44;
          if (*(int *)(lVar29 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar29 = *plVar44;
          }
          puVar9 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          lVar29 = **(long **)(lVar29 + 0xb8);
          if (lVar29 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          iVar14 = *(int *)(lVar29 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
          if ((*in_stack_00000150 == 0) ||
             (lVar29 = *(long *)(*in_stack_00000150 + 0x60), lVar29 == 0)) goto LAB_0249920c;
          if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (*(int *)(lVar29 + 0x18) == 0)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          FUN_024e7d94(lVar29 + 0x20,0,0);
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
                   Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
                 0xb8);
          uStack00000000000000c0 =
               *(undefined8 *)
                (*(float **)
                  (*(long *)
                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                  + 0xb8) + 1);
          lVar29 = unaff_x19[0xe2];
          _in_stack_00000090 = uStack00000000000000c0;
          fStack0000000000000098 = in_stack_000000c8;
          if (iVar15 < 0x401) {
            if (iVar15 == 0x100) {
              if (lVar29 == 0) goto LAB_0249920c;
              if (*(uint *)(lVar29 + 0x18) < 2)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              uVar23 = *(undefined8 *)(lVar29 + 0x30);
              if ((int)unaff_x19[0x5b] == 5) {
                if ((*in_stack_00000150 == 0) ||
                   (lVar32 = *(long *)(*in_stack_00000150 + 0x58), lVar32 == 0)) goto LAB_0249920c;
                if (*(uint *)(lVar32 + 0x18) <= uStack000000000000002c)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                fVar58 = *(float *)(lVar32 + (long)(int)uStack000000000000002c * 0x14 + 0x28);
              }
              else {
                fVar58 = *(float *)(unaff_x19 + 0x96);
              }
              fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar29 + 0x2c);
              fVar58 = (0.0 - fVar58) - fStack0000000000000020;
            }
            else if (iVar15 == 0x200) {
              if (lVar29 == 0) goto LAB_0249920c;
              if ((*(int *)(lVar29 + 0x18) == 1) || (*(int *)(lVar29 + 0x18) == 0))
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              fStack0000000000000098 = (*(float *)(lVar29 + 0x20) + *(float *)(lVar29 + 0x2c)) * 0.5
              ;
              uVar23 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar29 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar29 + 0x30) >> 0x20)) * 0.5,
                                ((float)*(undefined8 *)(lVar29 + 0x24) +
                                (float)*(undefined8 *)(lVar29 + 0x30)) * 0.5);
              if ((int)unaff_x19[0x5b] == 5) {
                if ((*in_stack_00000150 == 0) ||
                   (lVar29 = *(long *)(*in_stack_00000150 + 0x58), lVar29 == 0)) goto LAB_0249920c;
                if (*(uint *)(lVar29 + 0x18) <= uStack000000000000002c)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar29 = lVar29 + (long)(int)uStack000000000000002c * 0x14;
                fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
                fVar58 = ((fStack0000000000000020 + *(float *)(lVar29 + 0x28) +
                          *(float *)(lVar29 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
              }
              else {
                fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
                fVar58 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8
                          ) - fStack0000000000000024) * -0.5 + 0.0;
              }
            }
            else {
              if (iVar15 != 0x400) goto LAB_024965d0;
              if (lVar29 == 0) goto LAB_0249920c;
              if (*(int *)(lVar29 + 0x18) == 0)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              uVar23 = *(undefined8 *)(lVar29 + 0x24);
              if ((int)unaff_x19[0x5b] == 5) {
                if ((*in_stack_00000150 == 0) ||
                   (lVar32 = *(long *)(*in_stack_00000150 + 0x58), lVar32 == 0)) goto LAB_0249920c;
                if (*(uint *)(lVar32 + 0x18) <= uStack000000000000002c)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                in_stack_000017b8 =
                     *(float *)(lVar32 + (long)(int)uStack000000000000002c * 0x14 + 0x30);
              }
              fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar29 + 0x20);
              fVar58 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
            }
            _in_stack_00000090 =
                 CONCAT44((float)((ulong)uVar23 >> 0x20) + 0.0,(float)uVar23 + fVar58);
          }
          else if (iVar15 == 0x800) {
            if (lVar29 == 0) goto LAB_0249920c;
            if ((*(int *)(lVar29 + 0x18) == 1) || (*(int *)(lVar29 + 0x18) == 0))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            fVar58 = ((float)*(undefined8 *)(lVar29 + 0x24) + (float)*(undefined8 *)(lVar29 + 0x30))
                     * 0.5;
            fStack0000000000000098 =
                 fStack0000000000000030 + 0.0 +
                 (*(float *)(lVar29 + 0x20) + *(float *)(lVar29 + 0x2c)) * 0.5;
            _in_stack_00000090 =
                 CONCAT44(((float)((ulong)*(undefined8 *)(lVar29 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar29 + 0x30) >> 0x20)) * 0.5 + 0.0,
                          fVar58 + 0.0);
          }
          else {
            if (iVar15 == 0x1000) {
              if (lVar29 == 0) goto LAB_0249920c;
              if ((*(int *)(lVar29 + 0x18) == 1) || (*(int *)(lVar29 + 0x18) == 0))
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              fVar58 = (float)*(undefined8 *)(lVar29 + 0x24) + (float)*(undefined8 *)(lVar29 + 0x30)
              ;
              fVar57 = (float)((ulong)*(undefined8 *)(lVar29 + 0x24) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(lVar29 + 0x30) >> 0x20);
              fStack0000000000000020 =
                   fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) +
                   *(float *)(unaff_x19 + 0x9b);
              fStack0000000000000098 =
                   fStack0000000000000030 + 0.0 +
                   (*(float *)(lVar29 + 0x20) + *(float *)(lVar29 + 0x2c)) * 0.5;
            }
            else {
              if (iVar15 != 0x2000) goto LAB_024965d0;
              if (lVar29 == 0) goto LAB_0249920c;
              if ((*(int *)(lVar29 + 0x18) == 1) || (*(int *)(lVar29 + 0x18) == 0))
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              fVar58 = (float)*(undefined8 *)(lVar29 + 0x24) + (float)*(undefined8 *)(lVar29 + 0x30)
              ;
              fVar57 = (float)((ulong)*(undefined8 *)(lVar29 + 0x24) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(lVar29 + 0x30) >> 0x20);
              fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
              fStack0000000000000098 =
                   fStack0000000000000030 + 0.0 +
                   (*(float *)(lVar29 + 0x20) + *(float *)(lVar29 + 0x2c)) * 0.5;
            }
            fVar58 = fVar58 * 0.5;
            _in_stack_00000090 =
                 CONCAT44(fVar57 * 0.5 + 0.0,
                          fVar58 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) * 0.5));
          }
LAB_024965d0:
          if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
          uVar23 = FUN_0285a188(unaff_x19[0xe4],0);
          if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar9);
          }
          uVar21 = FUN_0268b4e0(uVar23,0,0);
          lVar29 = FUN_024c933c();
          if (lVar29 == 0) goto LAB_0249920c;
          FUN_026a125c(lVar29,0);
          *(float *)(unaff_x19 + 0xe1) = fVar58;
          if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
          iVar15 = FUN_02859798(unaff_x19[0xe4],0);
          if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
          fVar57 = (float)FUN_028598f0(unaff_x19[0xe4],0);
          __x = DAT_028aa048;
          dVar56 = modf(DAT_028aa048,(double *)&stack0x00000880);
          if (dVar56 == 0.5) {
            fVar70 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
            if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
              fVar70 = fVar70 + 1.0;
            }
          }
          else {
            fVar70 = 255.0;
          }
          dVar56 = modf(__x,(double *)&stack0x00000880);
          if (dVar56 == 0.5) {
            fVar63 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
            if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
              fVar63 = fVar63 + 1.0;
            }
          }
          else {
            fVar63 = 255.0;
          }
          dVar56 = modf(__x,(double *)&stack0x00000880);
          if (dVar56 == 0.5) {
            fVar66 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
            if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
              fVar66 = fVar66 + 1.0;
            }
          }
          else {
            fVar66 = 255.0;
          }
          dVar56 = modf(__x,(double *)&stack0x00000880);
          if (dVar56 == 0.5) {
            fVar67 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
            if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
              fVar67 = fVar67 + 1.0;
            }
          }
          else {
            fVar67 = 255.0;
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
          lVar29 = *(long *)puVar10;
          if (*(int *)(lVar29 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar29 = *(long *)puVar10;
          }
          puVar30 = *(undefined4 **)(lVar29 + 0xb8);
          uVar22 = (ulong)(uint)puVar30[1];
          uVar25 = (ulong)(uint)puVar30[2];
          uVar60 = (ulong)(uint)puVar30[3];
          UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                    (*puVar30,uVar22,uVar25,uVar60,&stack0x00001790,0x4000ffff,0);
          if (*(int *)(*plVar44 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar29 = *in_stack_00000150;
          if (lVar29 == 0) goto LAB_0249920c;
          uVar13 = *in_stack_00000148;
          if ((int)uVar13 < 1) {
            iStack00000000000000ac = 0;
            iVar14 = 0;
            goto LAB_02498c58;
          }
          lVar29 = *(long *)(lVar29 + 0x38);
          fVar58 = ABS(fVar58);
          fVar50 = 1.0;
          if ((uVar21 & 1) == 0) {
            fVar50 = fVar58;
          }
          if (lVar29 == 0) goto LAB_0249920c;
          bVar8 = false;
          bVar11 = false;
          bVar7 = false;
          bVar12 = false;
          uStack0000000000000060 =
               (int)fVar70 & 0xffU | ((int)fVar63 & 0xffU) << 8 | ((int)fVar66 & 0xffU) << 0x10 |
               (int)fVar67 << 0x18;
          fStack00000000000000d0 = *(float *)(*(long *)(*plVar44 + 0xb8) + 0x15a8);
          fStack00000000000000cc = 0.0;
          fStack0000000000000058 = fStack00000000000000b0;
          _bStack000000000000005c = 0.0;
          fStack0000000000000034 = 0.0;
          fStack0000000000000088 = 0.0;
          fStack0000000000000030 = 0.0;
          uVar18 = 0;
          iVar49 = 0;
          lVar32 = 0x2e0;
          fVar63 = 0.0;
          fVar70 = 0.0;
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
          uVar59 = 0;
          uVar39 = 1;
          goto LAB_02496a50;
        }
        if (*(uint *)(lVar29 + 0x18) <= in_stack_00001788)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar13 = *(uint *)(lVar29 + (long)(int)in_stack_00001788 * 0xc + 0x20);
        if (uVar13 == 0) goto LAB_02495f1c;
        if (5 < in_stack_00000140) {
          uVar23 = FUN_0176eb1c(&stack0x000017bc,0);
          uVar19 = FUN_0176eb1c(&stack0x00001788,0);
          uVar23 = FUN_0160073c(*(undefined8 *)
                                 UnityEngine_Rendering_Universal_DebugValidationMode_var,uVar23,
                                *(undefined8 *)
                                 Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                                ,uVar19,0);
          if (*(int *)(*plVar48 + 0xe0) == 0) {
            thunk_FUN_00d32864(*plVar48);
          }
          FUN_026610e4(uVar23,0);
          in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
        }
        if ((*(char *)((long)unaff_x19 + 0x2fa) == '\0') || (uVar13 != 0x3c)) {
          if ((*in_stack_00000150 == 0) ||
             (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar29 = lVar29 + (int)*in_stack_00000148 * unaff_x27;
          *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar29 + 0x2c);
          *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar29 + 0x58);
          unaff_x19[0x1f] = *(long *)(lVar29 + 0x38);
        }
        else {
          *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
          *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
          uVar22 = FUN_024d0688();
          if (((uVar22 & 1) != 0) &&
             (in_stack_00001788 = in_stack_0000176c, in_w9 = uVar13,
             *(int *)((long)unaff_x19 + 0x63c) == 0)) goto LAB_02492630;
        }
        if ((unaff_x19[0x6c] == 0) || (lVar29 = *(long *)(unaff_x19[0x6c] + 0x38), lVar29 == 0))
        goto LAB_0249920c;
        uVar18 = *in_stack_00000148;
        if (*(uint *)(lVar29 + 0x18) <= uVar18)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = (long)(int)uVar18;
        unaff_w21 = (uint)*(byte *)(lVar29 + lVar36 * unaff_x27 + 0x5c);
        *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
        lVar32 = unaff_x19[0x23];
        if ((uint)in_stack_000017a8 == uVar18) {
          uVar13 = (uint)((ulong)in_stack_000017a8 >> 0x20);
          unaff_w20 = 1;
          *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
          if (uVar13 == 0x2026) {
            lVar20 = unaff_x19[0xc9];
            lVar29 = lVar29 + lVar36 * unaff_x27;
            *(undefined4 *)(lVar29 + 0x2c) = 0;
            *(long *)(lVar29 + 0x30) = lVar20;
            *(long *)(lVar29 + 0x38) = unaff_x19[0xca];
            *(long *)(lVar29 + 0x50) = unaff_x19[0xcb];
            *(int *)(lVar29 + 0x58) = (int)unaff_x19[0xcc];
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
            in_stack_000017a8 = CONCAT44(3,uVar18 + 1);
          }
          else if (uVar13 == 3) {
            if ((*in_stack_00000138 == 0) ||
               (lVar20 = FUN_024b11ac(*in_stack_00000138,0), lVar20 == 0)) goto LAB_0249920c;
            in_stack_00000bf8 = 3;
            FUN_01299bc0(lVar20,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
            if (*(uint *)(lVar29 + 0x18) <= uVar18)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            unaff_w20 = 1;
            *(ulong *)(lVar29 + lVar36 * unaff_x27 + 0x30) =
                 CONCAT44(in_stack_00000884,in_stack_00000880);
            uVar18 = *(uint *)((long)unaff_x19 + 0x48c);
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          }
        }
        else {
          unaff_w20 = 0;
        }
        in_w9 = uVar13;
        if (((int)uVar18 < *(int *)((long)unaff_x19 + 0x31c)) && (uVar13 != 3)) {
          if ((*in_stack_00000150 == 0) ||
             (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar29 + 0x18) <= uVar18)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar29 = lVar29 + (long)(int)uVar18 * (long)iVar14;
          *(undefined1 *)(lVar29 + 0x194) = 0;
          *(undefined2 *)(lVar29 + 0x20) = 0x200b;
          *(undefined4 *)(lVar29 + 100) = 0;
          *in_stack_00000148 = uVar18 + 1;
          goto LAB_02492630;
        }
        iVar15 = *(int *)((long)unaff_x19 + 0x63c);
        unaff_x24 = in_stack_00000148;
        fVar63 = fVar57;
        if (iVar15 == 0) {
          uVar18 = *(uint *)((long)unaff_x19 + 0x254);
          if ((uVar18 >> 4 & 1) == 0) {
            if ((uVar18 >> 3 & 1) == 0) {
              if ((uVar18 >> 5 & 1) != 0) {
                if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar22 = FUN_016f92d4(uVar13,0);
                if ((uVar22 & 1) != 0) {
                  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar13 = FUN_016f95a8(uVar13,0);
                  uVar13 = uVar13 & 0xffff;
                  fVar63 = fStack0000000000000028;
                }
              }
            }
            else {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar22 = FUN_016f9218(uVar13,0);
              if ((uVar22 & 1) != 0) {
                if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar13 = FUN_016f9724(uVar13,0);
                goto LAB_02492a0c;
              }
            }
          }
          else {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar22 = FUN_016f92d4(uVar13,0);
            fVar63 = 1.0;
            if ((uVar22 & 1) != 0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar13 = FUN_016f95a8(uVar13,0);
LAB_02492a0c:
              uVar13 = uVar13 & 0xffff;
              fVar63 = 1.0;
            }
          }
          iVar15 = *(int *)((long)unaff_x19 + 0x63c);
          in_w9 = uVar13;
          if (iVar15 == 0) goto LAB_02492a20;
LAB_0249265c:
          if (iVar15 != 1) {
            param_1 = *in_stack_00000150;
            in_stack_000000f0 = CONCAT44(fVar63,fVar65);
            unaff_s13 = 0.0;
            if (in_w9 != 3 && in_w9 != 0xad) {
              unaff_s13 = fVar70;
            }
            in_stack_00000130._4_4_ = 0.0;
            in_stack_000017bc = in_w9;
            unaff_s9 = fVar70;
            goto code_r0x02492794;
          }
          if ((*in_stack_00000150 == 0) ||
             (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar29 = lVar29 + (int)*in_stack_00000148 * unaff_x27;
          lVar36 = *(long *)(lVar29 + 0x40);
          unaff_x19[0xd2] = lVar36;
          *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar29 + 0x48);
          if ((lVar36 == 0) || (lVar29 = FUN_024ebfa0(lVar36,0), lVar29 == 0)) goto LAB_0249920c;
          FUN_0132138c(lVar29,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                       *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
          lVar29 = CONCAT44(in_stack_00000884,in_stack_00000880);
          if (lVar29 != 0) {
            if (in_w9 == 0x3c) {
              in_w9 = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
            }
            else {
              lVar36 = *plVar44;
              if (*(int *)(lVar36 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar36 = *plVar44;
              }
              *(undefined4 *)((long)unaff_x19 + 0x1b4) =
                   *(undefined4 *)(*(long *)(lVar36 + 0xb8) + 0x68);
            }
            if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
            fVar58 = *(float *)(unaff_x19 + 0x3c);
            memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
            iVar14 = FUN_026fd110(&stack0x00001700,0);
            if (*in_stack_00000138 == 0) goto LAB_0249920c;
            memmove(&stack0x00001700,(void *)(*in_stack_00000138 + 0x50),0x60);
            fVar66 = (float)FUN_026fd120(&stack0x00001700,0);
            fVar70 = fStack0000000000000084;
            if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
              fVar70 = unaff_s12;
            }
            if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
            fVar70 = (fVar58 / (float)iVar14) * fVar66 * fVar70;
            iVar14 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
            fVar66 = *(float *)(unaff_x19 + 0x3c);
            if (iVar14 < 1) {
              if (*in_stack_00000138 == 0) goto LAB_0249920c;
              iVar14 = FUN_026fd110(*in_stack_00000138 + 0x50,0);
              if (*in_stack_00000138 == 0) goto LAB_0249920c;
              fVar67 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
              fVar58 = fStack0000000000000084;
              if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                fVar58 = fVar57;
              }
              if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
              fVar50 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
              if (*(long *)(lVar29 + 0x20) == 0) goto LAB_0249920c;
              FUN_026fd62c(&stack0x00000880,*(long *)(lVar29 + 0x20),0);
              fVar61 = (float)FUN_026fd45c(&stack0x000016e0,0);
              if (*(long *)(lVar29 + 0x20) == 0) goto LAB_0249920c;
              fVar51 = *(float *)(lVar29 + 0x2c);
              fVar52 = (float)FUN_026fd668(*(long *)(lVar29 + 0x20),0);
              if (*in_stack_00000138 == 0) goto LAB_0249920c;
              fVar57 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
              if (*in_stack_00000138 == 0) goto LAB_0249920c;
              fVar62 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
              if (*in_stack_00000138 == 0) goto LAB_0249920c;
              fVar53 = *(float *)((long)unaff_x19 + 0x3fc);
              in_stack_00000130._4_4_ = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
              if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
              in_stack_00000130._4_4_ = fVar70 * fVar62 * fVar53 * in_stack_00000130._4_4_;
              fVar58 = (fVar66 / (float)iVar14) * fVar67 * fVar58;
              unaff_s9 = fVar58 * (fVar50 / fVar61) * fVar51 * fVar52;
              fVar58 = fVar58 / unaff_s9;
              fVar57 = fVar58 * fVar57;
              fVar70 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
              fVar58 = fVar58 * fVar70;
            }
            else {
              if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
              iVar14 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
              if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
              fVar58 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
              if (*(long *)(lVar29 + 0x20) == 0) goto LAB_0249920c;
              fVar50 = *(float *)(lVar29 + 0x2c);
              fVar67 = fStack0000000000000084;
              if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                fVar67 = 1.0;
              }
              fVar61 = (float)FUN_026fd668(*(long *)(lVar29 + 0x20),0);
              if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
              fVar57 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
              if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
              fVar51 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
              if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
              fVar52 = *(float *)((long)unaff_x19 + 0x3fc);
              in_stack_00000130._4_4_ = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
              if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
              in_stack_00000130._4_4_ = fVar70 * fVar51 * fVar52 * in_stack_00000130._4_4_;
              unaff_s9 = (fVar66 / (float)iVar14) * fVar58 * fVar67 * fVar50 * fVar61;
              fVar58 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
            }
            param_1 = unaff_x19[0x6c];
            unaff_x19[200] = lVar29;
            if ((param_1 == 0) || (lVar29 = *(long *)(param_1 + 0x38), lVar29 == 0))
            goto LAB_0249920c;
            if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar29 = lVar29 + (int)*in_stack_00000148 * unaff_x27;
            *(undefined4 *)(lVar29 + 0x2c) = 1;
            *(float *)(lVar29 + 0x160) = unaff_s9;
            in_stack_00000128 = 0.0;
            *(long *)(lVar29 + 0x40) = unaff_x19[0xd2];
            *(long *)(lVar29 + 0x38) = unaff_x19[0x1f];
            *(int *)(lVar29 + 0x58) = (int)unaff_x19[0x23];
            *(int *)(unaff_x19 + 0x23) = (int)lVar32;
            goto LAB_02492e14;
          }
          goto LAB_02492630;
        }
        if (iVar15 != 0) goto LAB_0249265c;
LAB_02492a20:
        if ((*in_stack_00000150 == 0) ||
           (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0)) goto LAB_0249920c;
        uVar18 = *in_stack_00000148;
        uVar13 = *(uint *)(lVar29 + 0x18);
        if (uVar13 <= uVar18)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar32 = *(long *)(lVar29 + (int)uVar18 * unaff_x27 + 0x30);
        unaff_x19[200] = lVar32;
      } while (lVar32 == 0);
      lVar36 = lVar29 + (int)uVar18 * unaff_x27;
      lVar32 = *(long *)(lVar36 + 0x38);
      unaff_x19[0x1f] = lVar32;
      unaff_x19[0x22] = *(long *)(lVar36 + 0x50);
      *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar36 + 0x58);
      if (unaff_w20 == 0) {
LAB_02492ab4:
        if (lVar32 == 0) break;
        fVar70 = *(float *)(unaff_x19 + 0x3c);
        iVar14 = FUN_026fd110(lVar32 + 0x50,0);
        lVar29 = unaff_x19[0x1f];
      }
      else {
        lVar36 = unaff_x19[0x8e];
        if (lVar36 == 0) break;
        if (*(uint *)(lVar36 + 0x18) <= in_stack_00001788)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if ((*(int *)(lVar36 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
           (uVar18 == *(uint *)(unaff_x19 + 0x92))) goto LAB_02492ab4;
        if (uVar13 <= uVar18 - 1)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (lVar32 == 0) break;
        fVar70 = *(float *)(lVar29 + (long)(int)(uVar18 - 1) * (long)iVar14 + 0x60);
        iVar14 = FUN_026fd110(lVar32 + 0x50,0);
        lVar29 = *in_stack_00000138;
      }
      if (lVar29 == 0) break;
      fVar67 = (float)FUN_026fd120(lVar29 + 0x50,0);
      fVar66 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar66 = fVar57;
      }
      fVar58 = 0.0;
      fVar57 = 0.0;
      if ((unaff_w20 & in_w9 == 0x2026) == 0) {
        if (*in_stack_00000138 == 0) break;
        fVar57 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) break;
        fVar58 = (float)FUN_026fd180(*in_stack_00000138 + 0x50,0);
      }
      lVar29 = unaff_x19[200];
      if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) break;
      fVar61 = *(float *)((long)unaff_x19 + 0x3fc);
      fVar51 = *(float *)(lVar29 + 0x2c);
      fVar50 = (float)FUN_026fd668(*(long *)(lVar29 + 0x20),0);
      if (*in_stack_00000138 == 0) break;
      fVar52 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
      if (*in_stack_00000138 == 0) break;
      fVar62 = *(float *)((long)unaff_x19 + 0x3fc);
      in_stack_00000130._4_4_ = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
      param_1 = unaff_x19[0x6c];
      if ((param_1 == 0) || (lVar29 = *(long *)(param_1 + 0x38), lVar29 == 0)) break;
      if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar29 + (int)*in_stack_00000148 * unaff_x27;
      *(undefined4 *)(lVar29 + 0x2c) = 0;
      fVar66 = ((fVar63 * fVar70) / (float)iVar14) * fVar67 * fVar66;
      unaff_s9 = fVar66 * fVar61 * fVar51 * fVar50;
      *(float *)(lVar29 + 0x160) = unaff_s9;
      uVar13 = *(uint *)(unaff_x19 + 0x23);
      in_stack_00000130._4_4_ = fVar66 * fVar52 * fVar62 * in_stack_00000130._4_4_;
      if (uVar13 == 0) {
        in_stack_00000128 = *(float *)(unaff_x19 + 0xc2);
      }
      else {
        lVar29 = unaff_x19[0xe0];
        if (lVar29 == 0) break;
        if (*(uint *)(lVar29 + 0x18) <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = *(long *)(lVar29 + (long)(int)uVar13 * 8 + 0x20);
        if (lVar29 == 0) break;
        in_stack_00000128 = *(float *)(lVar29 + 0x104);
      }
LAB_02492e14:
      in_stack_000000f0 = CONCAT44(fVar63,fVar65);
      unaff_s12 = 1.0;
      fVar70 = 0.0;
      in_stack_000017bc = in_w9;
      if (in_w9 != 3 && in_w9 != 0xad) {
        fVar70 = unaff_s9;
      }
    }
  }
  goto LAB_0249920c;
LAB_02496a50:
  do {
    uVar13 = uVar39 - 1;
    if (*(uint *)(lVar29 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*in_stack_00000150 == 0) || (lVar36 = *(long *)(*in_stack_00000150 + 0x50), lVar36 == 0))
    goto LAB_0249920c;
    lVar47 = (long)(int)uVar13;
    lVar20 = lVar29 + lVar47 * 0x178;
    uVar35 = *(uint *)(lVar20 + 100);
    if (*(uint *)(lVar36 + 0x18) <= uVar35)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar40 = *(long *)(lVar20 + 0x38);
    uVar3 = *(ushort *)(lVar20 + 0x20);
    lVar38 = (long)(int)uVar35;
    lVar36 = lVar36 + lVar38 * 0x5c;
    uVar5 = *(uint *)(lVar36 + 0x3c);
    iVar16 = *(int *)(lVar36 + 0x28);
    iVar17 = *(int *)(lVar36 + 0x2c);
    uVar6 = *(uint *)(lVar36 + 0x40);
    lVar20 = (long)(int)uVar6;
    uVar45 = *(uint *)(lVar36 + 0x68);
    fVar53 = *(float *)(lVar36 + 0x5c);
    fVar72 = *(float *)(lVar36 + 0x60);
    iVar2 = *(int *)(lVar36 + 0x20);
    fVar61 = *(float *)(lVar36 + 0x4c);
    fVar52 = *(float *)(lVar36 + 0x54);
    fVar66 = *(float *)(lVar36 + 0x58);
    fVar65 = *(float *)(lVar36 + 0x6c);
    fVar62 = *(float *)(lVar36 + 0x70);
    fVar67 = *(float *)(lVar36 + 0x74);
    fVar51 = *(float *)(lVar36 + 0x78);
    fVar54 = fVar53 + fVar72;
    uVar43 = (uint)uVar3;
    if ((int)uVar45 < 9) {
      switch(uVar45) {
      case 1:
        if ((char)unaff_x19[0x1d] == '\0') {
          in_stack_000000c8 = fVar72 + 0.0;
        }
        else {
          in_stack_000000c8 = 0.0 - fVar66;
        }
        break;
      case 2:
LAB_02496c1c:
        in_stack_000000c8 = (fVar72 + fVar53 * 0.5) - fVar66 * 0.5;
        break;
      default:
        goto switchD_02496b58_caseD_3;
      case 4:
        in_stack_000000c8 = fVar54 - fVar66;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c8 = fVar54;
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
        if (*(uint *)(lVar29 + 0x18) <= uVar5)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar4 = *(undefined2 *)(lVar29 + (long)(int)uVar5 * 0x178 + 0x20);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f9f84(uVar4,0);
        if ((uVar21 & 1) == 0) {
          bVar1 = (int)uVar35 < (int)unaff_x19[0x94];
        }
        else {
          bVar1 = false;
        }
        if ((fVar66 <= fVar53) && (!bVar1 && (uVar45 >> 4 & 1) == 0)) {
          in_stack_000000c8 = fVar72;
          if ((char)unaff_x19[0x1d] != '\0') {
            in_stack_000000c8 = fVar54;
          }
          goto LAB_02496c90;
        }
        if (((uVar39 == 1) || (uVar35 != uVar59)) || (uVar13 == *(uint *)((long)unaff_x19 + 0x31c)))
        {
          in_stack_000000c8 = fVar72;
          if ((char)unaff_x19[0x1d] != '\0') {
            in_stack_000000c8 = fVar54;
          }
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          fStack0000000000000020 = (float)FUN_016fa418(uVar3,0);
          uStack00000000000000c0 = 0;
        }
        else {
          cVar28 = (char)unaff_x19[0x1d];
          fVar54 = -fVar66;
          if (cVar28 != '\0') {
            fVar54 = fVar66;
          }
          if (*(uint *)(lVar29 + 0x18) <= uVar5)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar66 = 1.0;
          iVar17 = (int)*(char *)(lVar29 + (long)(int)uVar5 * 0x178 + 0x194) +
                   (-iVar2 - ((uint)fStack0000000000000020 & 1)) + iVar17 + -1;
          if (0 < iVar17) {
            fVar66 = *(float *)((long)unaff_x19 + 0x2d4);
          }
          if (iVar17 < 1) {
            iVar17 = 1;
          }
          if (uVar43 == 9) {
LAB_02498bb8:
            fVar66 = 1.0 - fVar66;
          }
          else {
            if (uVar43 != 0xa0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar21 = FUN_016fa418(uVar3,0);
              cVar28 = (char)unaff_x19[0x1d];
              if ((uVar21 & 1) != 0) goto LAB_02498bb8;
            }
            iVar17 = (iVar2 - (~(uint)fStack0000000000000020 & 1)) + iVar16;
          }
          fVar66 = ((fVar53 + fVar54) * fVar66) / (float)iVar17;
          if (cVar28 == '\0') {
            in_stack_000000c8 = in_stack_000000c8 + fVar66;
            uStack00000000000000c0 =
                 CONCAT44((float)((ulong)uStack00000000000000c0 >> 0x20) + 0.0,
                          (float)uStack00000000000000c0 + 0.0);
          }
          else {
            in_stack_000000c8 = in_stack_000000c8 - fVar66;
          }
        }
      }
    }
    else if (uVar45 == 0x20) {
      fVar66 = fVar65 + fVar67;
      goto LAB_02496c1c;
    }
switchD_02496b58_caseD_3:
    uVar45 = (uint)*(undefined8 *)(lVar29 + 0x18);
    if (uVar45 <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar36 = lVar29 + lVar47 * 0x178;
    fVar54 = fStack0000000000000098 + in_stack_000000c8;
    fVar66 = (float)_in_stack_00000090 + (float)uStack00000000000000c0;
    fVar53 = (float)((ulong)_in_stack_00000090 >> 0x20) +
             (float)((ulong)uStack00000000000000c0 >> 0x20);
    if (*(char *)(lVar36 + 0x194) == '\0') goto LAB_02497688;
    iVar16 = *(int *)(lVar29 + lVar47 * 0x178 + 0x2c);
    if (iVar16 != 0) goto LAB_02497374;
    fVar63 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar35,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
    case 0:
      lVar31 = lVar29 + lVar47 * 0x178;
      *(undefined4 *)(lVar31 + 0x84) = 0;
      *(undefined4 *)(lVar31 + 0xac) = 0;
      *(undefined4 *)(lVar31 + 0xd4) = 0x3f800000;
      fVar63 = 1.0;
      break;
    case 1:
      fVar51 = *(float *)(lVar29 + lVar47 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
        lVar31 = lVar29 + lVar47 * 0x178;
        fVar67 = (in_stack_000000c8 + fVar51) - *(float *)(in_stack_00000070 + 0x230);
        fVar51 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
        goto LAB_02496df8;
      }
      lVar31 = lVar29 + lVar47 * 0x178;
      fVar67 = fVar67 - fVar65;
      *(float *)(lVar31 + 0x84) = fVar63 + (fVar51 - fVar65) / fVar67;
      *(float *)(lVar31 + 0xac) = fVar63 + (*(float *)(lVar31 + 0x98) - fVar65) / fVar67;
      *(float *)(lVar31 + 0xd4) = fVar63 + (*(float *)(lVar31 + 0xc0) - fVar65) / fVar67;
      fVar63 = fVar63 + (*(float *)(lVar31 + 0xe8) - fVar65) / fVar67;
      break;
    case 2:
      lVar31 = lVar29 + lVar47 * 0x178;
      fVar51 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      fVar67 = (in_stack_000000c8 + *(float *)(lVar31 + 0x70)) -
               *(float *)(in_stack_00000070 + 0x230);
LAB_02496df8:
      *(float *)(lVar31 + 0x84) = fVar63 + fVar67 / fVar51;
      *(float *)(lVar31 + 0xac) =
           fVar63 + ((in_stack_000000c8 + *(float *)(lVar31 + 0x98)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      *(float *)(lVar31 + 0xd4) =
           fVar63 + ((in_stack_000000c8 + *(float *)(lVar31 + 0xc0)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      fVar63 = fVar63 + ((in_stack_000000c8 + *(float *)(lVar31 + 0xe8)) -
                        *(float *)(in_stack_00000070 + 0x230)) /
                        (*(float *)(in_stack_00000070 + 0x238) -
                        *(float *)(in_stack_00000070 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x61]) {
      case 0:
        lVar31 = lVar29 + lVar47 * 0x178;
        *(undefined4 *)(lVar31 + 0x88) = 0;
        *(undefined4 *)(lVar31 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar31 + 0xd8) = 0;
        *(undefined4 *)(lVar31 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar31 = lVar29 + lVar47 * 0x178;
        fVar51 = fVar51 - fVar62;
        fVar67 = fVar63 + (*(float *)(lVar31 + 0x74) - fVar62) / fVar51;
        fVar51 = fVar63 + (*(float *)(lVar31 + 0x9c) - fVar62) / fVar51;
        *(float *)(lVar31 + 0x88) = fVar67;
        *(float *)(lVar31 + 0xb0) = fVar51;
        *(float *)(lVar31 + 0xd8) = fVar67;
        *(float *)(lVar31 + 0x100) = fVar51;
        break;
      case 2:
        lVar31 = lVar29 + lVar47 * 0x178;
        fVar67 = fVar63 + (*(float *)(lVar31 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                          (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
        *(float *)(lVar31 + 0x88) = fVar67;
        fVar51 = *(float *)(unaff_x19 + 0x9b);
        fVar62 = *(float *)(unaff_x19 + 0x9c);
        *(float *)(lVar31 + 0xd8) = fVar67;
        fVar67 = fVar63 + (*(float *)(lVar31 + 0x9c) - fVar51) / (fVar62 - fVar51);
        *(float *)(lVar31 + 0xb0) = fVar67;
        *(float *)(lVar31 + 0x100) = fVar67;
        break;
      case 3:
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
        uVar45 = (uint)*(undefined8 *)(lVar29 + 0x18);
      }
      if (uVar45 <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = lVar29 + lVar47 * 0x178;
      fVar67 = *(float *)(lVar31 + 0x15c);
      fVar51 = (1.0 - (*(float *)(lVar31 + 0x88) + *(float *)(lVar31 + 0xb0)) * fVar67) * 0.5;
      fVar62 = fVar63 + *(float *)(lVar31 + 0x88) * fVar67 + fVar51;
      fVar63 = fVar63 + fVar51 + *(float *)(lVar31 + 0xb0) * fVar67;
      *(float *)(lVar31 + 0x84) = fVar62;
      *(float *)(lVar31 + 0xac) = fVar62;
      *(float *)(lVar31 + 0xd4) = fVar63;
      break;
    default:
      goto switchD_02496d4c_default;
    }
    *(float *)(lVar29 + lVar47 * 0x178 + 0xfc) = fVar63;
switchD_02496d4c_default:
    switch((int)unaff_x19[0x61]) {
    case 0:
      if (uVar45 <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = lVar29 + lVar47 * 0x178;
      *(undefined4 *)(lVar31 + 0x88) = 0;
      *(undefined4 *)(lVar31 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar31 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar31 + 0x100) = 0;
      break;
    case 1:
      if (uVar13 < uVar45) {
        lVar31 = lVar29 + lVar47 * 0x178;
        fVar61 = fVar61 - fVar52;
        fVar63 = (*(float *)(lVar31 + 0x74) - fVar52) / fVar61;
        fVar61 = (*(float *)(lVar31 + 0x9c) - fVar52) / fVar61;
        *(float *)(lVar31 + 0x88) = fVar63;
        goto LAB_02497174;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    case 2:
      if (uVar45 <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = lVar29 + lVar47 * 0x178;
      fVar63 = (*(float *)(lVar31 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar31 + 0x88) = fVar63;
      fVar61 = (*(float *)(lVar31 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_02497174:
      *(float *)(lVar31 + 0xb0) = fVar61;
      *(float *)(lVar31 + 0xd8) = fVar61;
      *(float *)(lVar31 + 0x100) = fVar63;
      break;
    case 3:
      if (uVar45 <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = lVar29 + lVar47 * 0x178;
      fVar61 = *(float *)(lVar31 + 0x15c);
      fVar67 = (1.0 - (*(float *)(lVar31 + 0x84) + *(float *)(lVar31 + 0xd4)) / fVar61) * 0.5;
      fVar63 = *(float *)(lVar31 + 0x84) / fVar61 + fVar67;
      fVar67 = fVar67 + *(float *)(lVar31 + 0xd4) / fVar61;
      *(float *)(lVar31 + 0x88) = fVar63;
      *(float *)(lVar31 + 0xb0) = fVar67;
      *(float *)(lVar31 + 0x100) = fVar63;
      *(float *)(lVar31 + 0xd8) = fVar67;
    }
    if (uVar45 <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar31 = lVar29 + lVar47 * 0x178;
    fVar63 = *(float *)(lVar31 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
    if ((*(char *)(lVar31 + 0x5c) == '\0') && ((*(byte *)(lVar29 + lVar47 * 0x178 + 400) & 1) != 0))
    {
      fVar63 = -fVar63;
    }
    fVar67 = fVar58;
    if (((iVar15 == 2) || (fVar67 = fVar50, iVar15 == 1)) || (fVar67 = fVar58 / fVar57, iVar15 == 0)
       ) {
      fVar63 = fVar67 * fVar63;
    }
    lVar31 = lVar29 + lVar47 * 0x178;
    fVar61 = *(float *)(lVar31 + 0x88);
    fVar51 = *(float *)(lVar31 + 0x84);
    fVar67 = -2.1474836e+09;
    if (fVar51 != INFINITY) {
      fVar67 = (float)(int)fVar51;
    }
    fVar62 = *(float *)(lVar31 + 0xd4);
    fVar65 = *(float *)(lVar31 + 0xd8);
    fVar52 = -2.1474836e+09;
    if (fVar61 != INFINITY) {
      fVar52 = (float)(int)fVar61;
    }
    uVar71 = FUN_024e0374(fVar51 - fVar67,fVar61 - fVar52);
    *(undefined4 *)(lVar31 + 0x84) = uVar71;
    if (*(uint *)(lVar29 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar65 = fVar65 - fVar52;
    *(float *)(lVar31 + 0x88) = fVar63;
    uVar71 = FUN_024e0374(fVar51 - fVar67,fVar65);
    *(undefined4 *)(lVar29 + lVar47 * 0x178 + 0xac) = uVar71;
    if (*(uint *)(lVar29 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar62 = fVar62 - fVar67;
    *(float *)(lVar29 + lVar47 * 0x178 + 0xb0) = fVar63;
    fVar67 = (float)FUN_024e0374(fVar62,fVar65);
    *(float *)(lVar31 + 0xd4) = fVar67;
    if (*(uint *)(lVar29 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar31 + 0xd8) = fVar63;
    uVar71 = FUN_024e0374(fVar62,fVar61 - fVar52);
    *(undefined4 *)(lVar29 + lVar47 * 0x178 + 0xfc) = uVar71;
    uVar45 = (uint)*(undefined8 *)(lVar29 + 0x18);
    if (uVar45 <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar29 + lVar47 * 0x178 + 0x100) = fVar63;
LAB_02497374:
    if (((int)unaff_x19[100] <= (int)uVar13) ||
       (*(int *)((long)unaff_x19 + 0x324) <= iStack00000000000000ac)) goto LAB_02497490;
    if (((int)uVar35 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar45 <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = lVar29 + lVar47 * 0x178;
      *(ulong *)(lVar36 + 0x70) =
           CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar36 + 0x70) >> 0x20),
                    fVar54 + (float)*(undefined8 *)(lVar36 + 0x70));
      *(float *)(lVar36 + 0x78) = fVar53 + *(float *)(lVar36 + 0x78);
      if (*(uint *)(lVar29 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = lVar29 + lVar47 * 0x178;
      *(ulong *)(lVar36 + 0x98) =
           CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar36 + 0x98) >> 0x20),
                    fVar54 + (float)*(undefined8 *)(lVar36 + 0x98));
      *(float *)(lVar36 + 0xa0) = fVar53 + *(float *)(lVar36 + 0xa0);
      if (*(uint *)(lVar29 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = lVar29 + lVar47 * 0x178;
      *(ulong *)(lVar36 + 0xc0) =
           CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar36 + 0xc0) >> 0x20),
                    fVar54 + (float)*(undefined8 *)(lVar36 + 0xc0));
      *(float *)(lVar36 + 200) = fVar53 + *(float *)(lVar36 + 200);
      if (*(uint *)(lVar29 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = lVar29 + lVar47 * 0x178;
      *(ulong *)(lVar36 + 0xe8) =
           CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar36 + 0xe8) >> 0x20),
                    fVar54 + (float)*(undefined8 *)(lVar36 + 0xe8));
      *(float *)(lVar36 + 0xf0) = fVar53 + *(float *)(lVar36 + 0xf0);
      if (iVar16 == 0) goto LAB_02497668;
LAB_02497598:
      if (iVar16 == 1) {
        pcVar34 = *(code **)(*unaff_x19 + 0x8f8);
        goto LAB_02497674;
      }
    }
    else {
      if (((int)uVar35 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
        if (uVar45 <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(uint *)(lVar29 + lVar47 * 0x178 + 0x68) != uStack000000000000002c) goto LAB_02497490;
        lVar36 = lVar29 + lVar47 * 0x178;
        *(ulong *)(lVar36 + 0x70) =
             CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar36 + 0x70) >> 0x20),
                      fVar54 + (float)*(undefined8 *)(lVar36 + 0x70));
        *(float *)(lVar36 + 0x78) = fVar53 + *(float *)(lVar36 + 0x78);
        if (*(uint *)(lVar29 + 0x18) <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = lVar29 + lVar47 * 0x178;
        *(ulong *)(lVar36 + 0x98) =
             CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar36 + 0x98) >> 0x20),
                      fVar54 + (float)*(undefined8 *)(lVar36 + 0x98));
        *(float *)(lVar36 + 0xa0) = fVar53 + *(float *)(lVar36 + 0xa0);
        if (*(uint *)(lVar29 + 0x18) <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = lVar29 + lVar47 * 0x178;
        *(ulong *)(lVar36 + 0xc0) =
             CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar36 + 0xc0) >> 0x20),
                      fVar54 + (float)*(undefined8 *)(lVar36 + 0xc0));
        *(float *)(lVar36 + 200) = fVar53 + *(float *)(lVar36 + 200);
        if (*(uint *)(lVar29 + 0x18) <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = lVar29 + lVar47 * 0x178;
        *(ulong *)(lVar36 + 0xe8) =
             CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar36 + 0xe8) >> 0x20),
                      fVar54 + (float)*(undefined8 *)(lVar36 + 0xe8));
        *(float *)(lVar36 + 0xf0) = fVar53 + *(float *)(lVar36 + 0xf0);
      }
      else {
LAB_02497490:
        if (uVar45 <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        puVar9 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        lVar31 = lVar29 + lVar47 * 0x178;
        uVar71 = *(undefined4 *)
                  (*(undefined8 **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8) + 1);
        *(undefined8 *)(lVar31 + 0x70) =
             **(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        *(undefined4 *)(lVar31 + 0x78) = uVar71;
        if (*(uint *)(lVar29 + 0x18) <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar31 = lVar29 + lVar47 * 0x178;
        uVar71 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar31 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar31 + 0xa0) = uVar71;
        if (*(uint *)(lVar29 + 0x18) <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar31 = lVar29 + lVar47 * 0x178;
        uVar71 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar31 + 0xc0) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar31 + 200) = uVar71;
        if (*(uint *)(lVar29 + 0x18) <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar31 = lVar29 + lVar47 * 0x178;
        uVar71 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar31 + 0xe8) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar31 + 0xf0) = uVar71;
        if (*(uint *)(lVar29 + 0x18) <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(undefined1 *)(lVar36 + 0x194) = 0;
      }
      if (iVar16 != 0) goto LAB_02497598;
LAB_02497668:
      pcVar34 = *(code **)(*unaff_x19 + 0x8d8);
LAB_02497674:
      (*pcVar34)();
    }
LAB_02497688:
    if ((*in_stack_00000150 == 0) || (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar36 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar36 = lVar36 + lVar47 * 0x178;
    uVar23 = *(undefined8 *)(lVar36 + 0x11c);
    *(undefined8 *)(lVar36 + 0x11c) =
         CONCAT44(fVar66 + (float)((ulong)uVar23 >> 0x20),fVar54 + (float)uVar23);
    *(float *)(lVar36 + 0x124) = fVar53 + *(float *)(lVar36 + 0x124);
    if ((*in_stack_00000150 == 0) || (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar36 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar36 = lVar36 + lVar47 * 0x178;
    *(ulong *)(lVar36 + 0x110) =
         CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar36 + 0x110) >> 0x20),
                  fVar54 + (float)*(undefined8 *)(lVar36 + 0x110));
    *(float *)(lVar36 + 0x118) = fVar53 + *(float *)(lVar36 + 0x118);
    if ((*in_stack_00000150 == 0) || (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar36 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar36 = lVar36 + lVar47 * 0x178;
    *(ulong *)(lVar36 + 0x128) =
         CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar36 + 0x128) >> 0x20),
                  fVar54 + (float)*(undefined8 *)(lVar36 + 0x128));
    *(float *)(lVar36 + 0x130) = fVar53 + *(float *)(lVar36 + 0x130);
    if ((*in_stack_00000150 == 0) || (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar36 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar36 = lVar36 + lVar47 * 0x178;
    *(float *)(lVar36 + 0x134) = fVar54 + *(float *)(lVar36 + 0x134);
    *(ulong *)(lVar36 + 0x138) =
         CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar36 + 0x138) >> 0x20),
                  fVar66 + (float)*(undefined8 *)(lVar36 + 0x138));
    lVar36 = *in_stack_00000150;
    if ((lVar36 == 0) || (lVar31 = *(long *)(lVar36 + 0x38), lVar31 == 0)) goto LAB_0249920c;
    uVar45 = *(uint *)(lVar31 + 0x18);
    if (uVar45 <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar41 = lVar31 + lVar47 * 0x178;
    uVar22 = CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar41 + 0x140) >> 0x20),
                      fVar54 + (float)*(undefined8 *)(lVar41 + 0x140));
    fVar67 = fVar66 + *(float *)(lVar41 + 0x150);
    uVar25 = (ulong)(uint)fVar67;
    uVar60 = CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar41 + 0x148) >> 0x20),
                      fVar66 + (float)*(undefined8 *)(lVar41 + 0x148));
    *(ulong *)(lVar41 + 0x140) = uVar22;
    *(ulong *)(lVar41 + 0x148) = uVar60;
    *(float *)(lVar41 + 0x150) = fVar67;
    if (uVar35 == uVar59) {
      uVar59 = *in_stack_00000148 - 1;
      if (uVar13 == uVar59) goto LAB_0249788c;
    }
    else {
      lVar36 = *(long *)(lVar36 + 0x50);
      if (lVar36 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar36 + 0x18) <= uVar59)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar41 = (long)(int)uVar59;
      lVar42 = lVar36 + lVar41 * 0x5c;
      uVar60 = (ulong)(uint)*(float *)(lVar42 + 0x58);
      fVar67 = fVar66 + *(float *)(lVar42 + 0x54);
      uVar22 = (ulong)(uint)fVar67;
      fVar61 = fVar54 + *(float *)(lVar42 + 0x58);
      uVar25 = (ulong)(uint)fVar61;
      *(ulong *)(lVar42 + 0x4c) =
           CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar42 + 0x4c) >> 0x20),
                    fVar66 + (float)*(undefined8 *)(lVar42 + 0x4c));
      *(float *)(lVar42 + 0x54) = fVar67;
      *(float *)(lVar42 + 0x58) = fVar61;
      if (uVar45 <= *(uint *)(lVar42 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar71 = *(undefined4 *)(lVar31 + (long)(int)*(uint *)(lVar42 + 0x34) * 0x178 + 0x11c);
      lVar36 = lVar36 + lVar41 * 0x5c;
      *(float *)(lVar36 + 0x70) = fVar67;
      *(undefined4 *)(lVar36 + 0x6c) = uVar71;
      lVar36 = *in_stack_00000150;
      if ((lVar36 == 0) || (lVar31 = *(long *)(lVar36 + 0x50), lVar31 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar31 + 0x18) <= uVar59)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = *(long *)(lVar36 + 0x38);
      if (lVar36 == 0) goto LAB_0249920c;
      uVar59 = *(uint *)(lVar31 + lVar41 * 0x5c + 0x40);
      if (*(uint *)(lVar36 + 0x18) <= uVar59)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = lVar31 + lVar41 * 0x5c;
      *(undefined4 *)(lVar31 + 0x74) = *(undefined4 *)(lVar36 + (long)(int)uVar59 * 0x178 + 0x128);
      *(undefined4 *)(lVar31 + 0x78) = *(undefined4 *)(lVar31 + 0x4c);
      uVar59 = *in_stack_00000148 - 1;
LAB_0249788c:
      if (uVar13 == uVar59) {
        lVar36 = *in_stack_00000150;
        if ((lVar36 == 0) || (lVar31 = *(long *)(lVar36 + 0x50), lVar31 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar31 + 0x18) <= uVar35)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar41 = lVar31 + lVar38 * 0x5c;
        uVar60 = (ulong)(uint)*(float *)(lVar41 + 0x58);
        uVar22 = CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar41 + 0x4c) >> 0x20),
                          fVar66 + (float)*(undefined8 *)(lVar41 + 0x4c));
        fVar67 = fVar66 + *(float *)(lVar41 + 0x54);
        fVar54 = fVar54 + *(float *)(lVar41 + 0x58);
        uVar25 = (ulong)(uint)fVar54;
        *(ulong *)(lVar41 + 0x4c) = uVar22;
        *(float *)(lVar41 + 0x54) = fVar67;
        *(float *)(lVar41 + 0x58) = fVar54;
        lVar36 = *(long *)(lVar36 + 0x38);
        if (lVar36 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar36 + 0x18) <= *(uint *)(lVar41 + 0x34))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar71 = *(undefined4 *)(lVar36 + (long)(int)*(uint *)(lVar41 + 0x34) * 0x178 + 0x11c);
        lVar31 = lVar31 + lVar38 * 0x5c;
        *(float *)(lVar31 + 0x70) = fVar67;
        *(undefined4 *)(lVar31 + 0x6c) = uVar71;
        lVar36 = *in_stack_00000150;
        if ((lVar36 == 0) || (lVar31 = *(long *)(lVar36 + 0x50), lVar31 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar31 + 0x18) <= uVar35)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = *(long *)(lVar36 + 0x38);
        if (lVar36 == 0) goto LAB_0249920c;
        uVar59 = *(uint *)(lVar31 + lVar38 * 0x5c + 0x40);
        if (*(uint *)(lVar36 + 0x18) <= uVar59)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar31 = lVar31 + lVar38 * 0x5c;
        *(undefined4 *)(lVar31 + 0x74) = *(undefined4 *)(lVar36 + (long)(int)uVar59 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar31 + 0x78) = *(undefined4 *)(lVar31 + 0x4c);
      }
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar21 = FUN_016f9468(uVar43,0);
    if (((((uVar21 & 1) == 0) && (1 < uVar43 - 0x2010)) && (uVar43 != 0xad)) && (uVar43 != 0x2d)) {
      if (bVar11) {
        if (((uVar39 != 1) && ((int)uVar13 < (int)(*(uint *)(lVar29 + 0x18) - 1))) &&
           (((int)uVar13 < (int)*in_stack_00000148 && ((uVar43 == 0x2019 || (uVar43 == 0x27)))))) {
          if (*(uint *)(lVar29 + 0x18) <= uVar39 - 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar4 = *(undefined2 *)(lVar29 + lVar32 + -0x438);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016f9468(uVar4,0);
          if ((uVar21 & 1) != 0) {
            if (*(uint *)(lVar29 + 0x18) <= uVar39)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar4 = *(undefined2 *)(lVar29 + lVar32 + -0x148);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar21 = FUN_016f9468(uVar4,0);
            if ((uVar21 & 1) != 0) goto LAB_02497aa4;
          }
        }
      }
      else {
        if (uVar39 != 1) {
LAB_024985a0:
          bVar11 = false;
          goto LAB_02497aac;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f93a0(uVar43,0);
        if ((uVar21 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016f68bc(uVar43,0);
          if (((uVar43 != 0x200b) && ((uVar21 & 1) == 0)) && (*in_stack_00000148 != 1))
          goto LAB_024985a0;
        }
      }
      if (uVar13 == *in_stack_00000148 - 1) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f9468(uVar43,0);
        iVar16 = iVar49;
        if ((uVar21 & 1) == 0) goto LAB_02497de0;
      }
      else {
LAB_02497de0:
        iVar16 = uVar39 - 2;
      }
      lVar36 = *in_stack_00000150;
      if (lVar36 == 0) goto LAB_0249920c;
      lVar31 = *(long *)(lVar36 + 0x40);
      if (lVar31 == 0) goto LAB_0249920c;
      uVar59 = *(uint *)(lVar36 + 0x24);
      iVar17 = *(int *)(lVar31 + 0x18);
      if (iVar17 < (int)(uVar59 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar36 + 0x40),iVar17 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar36 = *in_stack_00000150;
        if (lVar36 == 0) goto LAB_0249920c;
      }
      lVar31 = *(long *)(lVar36 + 0x40);
      if (lVar31 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar31 + 0x18) <= uVar59)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = lVar31 + (long)(int)uVar59 * 0x18;
      *(uint *)(lVar31 + 0x28) = uVar18;
      *(int *)(lVar31 + 0x2c) = iVar16;
      *(uint *)(lVar31 + 0x30) = (iVar16 - uVar18) + 1;
      *(long **)(lVar31 + 0x20) = unaff_x19;
      lVar31 = *(long *)(lVar36 + 0x50);
      *(int *)(lVar36 + 0x24) = *(int *)(lVar36 + 0x24) + 1;
      if (lVar31 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar31 + 0x18) <= uVar35)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = lVar31 + lVar38 * 0x5c;
      bVar11 = false;
      iStack00000000000000ac = iStack00000000000000ac + 1;
      *(int *)(lVar31 + 0x30) = *(int *)(lVar31 + 0x30) + 1;
    }
    else {
      if (!bVar11) {
        uVar18 = uVar13;
      }
      if (uVar13 == *in_stack_00000148 - 1) {
        lVar36 = *in_stack_00000150;
        if (lVar36 == 0) goto LAB_0249920c;
        lVar31 = *(long *)(lVar36 + 0x40);
        if (lVar31 == 0) goto LAB_0249920c;
        uVar59 = *(uint *)(lVar36 + 0x24);
        iVar16 = *(int *)(lVar31 + 0x18);
        if (iVar16 < (int)(uVar59 + 1)) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147b84((long *)(lVar36 + 0x40),iVar16 + 1,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
          lVar36 = *in_stack_00000150;
          if (lVar36 == 0) goto LAB_0249920c;
        }
        lVar31 = *(long *)(lVar36 + 0x40);
        if (lVar31 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar31 + 0x18) <= uVar59)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar31 = lVar31 + (long)(int)uVar59 * 0x18;
        *(uint *)(lVar31 + 0x28) = uVar18;
        *(uint *)(lVar31 + 0x2c) = uVar13;
        *(long **)(lVar31 + 0x20) = unaff_x19;
        *(uint *)(lVar31 + 0x30) = uVar39 - uVar18;
        lVar31 = *(long *)(lVar36 + 0x50);
        *(int *)(lVar36 + 0x24) = *(int *)(lVar36 + 0x24) + 1;
        if (lVar31 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar31 + 0x18) <= uVar35)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar31 = lVar31 + lVar38 * 0x5c;
        iStack00000000000000ac = iStack00000000000000ac + 1;
        *(int *)(lVar31 + 0x30) = *(int *)(lVar31 + 0x30) + 1;
      }
LAB_02497aa4:
      bVar11 = true;
    }
LAB_02497aac:
    if ((*in_stack_00000150 == 0) || (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 == 0))
    goto LAB_0249920c;
    uVar59 = *(uint *)(lVar36 + 0x18);
    if (uVar59 <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar36 + lVar47 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar12) {
LAB_02497adc:
        if (uVar59 <= uVar39 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar38 = *unaff_x19;
        uVar59 = *(uint *)(lVar36 + lVar32 + -0x330);
        uVar71 = *(undefined4 *)(lVar36 + lVar32 + -0x2f8);
LAB_0249805c:
        pcVar34 = *(code **)(lVar38 + 0x908);
LAB_02498064:
        uVar60 = (ulong)uVar59;
        uVar22 = (ulong)(uint)fStack0000000000000050;
        uVar25 = (ulong)(uint)fStack0000000000000054;
        (*pcVar34)(fStack0000000000000058,uVar22,uVar25,uVar60,fStack00000000000000d0,0,
                   _bStack000000000000005c,uVar71);
        puVar9 = System_Threading_Mutex_TypeInfo;
        lVar36 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar36 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar36 = *(long *)puVar9;
        }
LAB_024980b4:
        bVar12 = false;
        fVar70 = 0.0;
        fStack00000000000000d0 = *(float *)(*(long *)(lVar36 + 0xb8) + 0x15a8);
        fStack00000000000000cc = 0.0;
      }
      else {
LAB_02497fc4:
        bVar12 = false;
      }
    }
    else {
      lVar36 = lVar36 + lVar47 * 0x178;
      iVar16 = *(int *)(lVar36 + 0x68);
      *(int *)(lVar36 + 0x16c) = iVar14;
      if ((((int)unaff_x19[100] < (int)uVar13) || ((int)unaff_x19[0x65] < (int)uVar35)) ||
         (((int)unaff_x19[0x5b] == 5 && (iVar16 + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar21 = FUN_016f68bc(uVar43,0);
      if ((uVar43 != 0x200b) && ((uVar21 & 1) == 0)) {
        lVar36 = *in_stack_00000150;
        if ((lVar36 == 0) || (lVar38 = *(long *)(lVar36 + 0x38), lVar38 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar38 + 0x18) <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar67 = *(float *)(lVar38 + lVar47 * 0x178 + 0x160);
        if (fVar70 <= fVar67) {
          fVar70 = fVar67;
        }
        if (fStack00000000000000cc <= ABS(fVar63)) {
          fStack00000000000000cc = ABS(fVar63);
        }
        if ((float)iVar16 != fStack000000000000004c) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar36 = *in_stack_00000150;
            if (lVar36 == 0) goto LAB_0249920c;
            lVar38 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          else {
            lVar38 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          fStack00000000000000d0 = *(float *)(lVar38 + 0x15a8);
        }
        lVar36 = *(long *)(lVar36 + 0x38);
        if (lVar36 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar36 + 0x18) <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0x1e] == 0) goto LAB_0249920c;
        fVar61 = *(float *)(lVar36 + lVar47 * 0x178 + 0x14c);
        fVar67 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
        fVar61 = fVar61 + fVar70 * fVar67;
        if (fVar61 <= fStack00000000000000d0) {
          fStack00000000000000d0 = fVar61;
        }
        uVar22 = (ulong)(uint)fStack00000000000000d0;
        fStack000000000000004c = (float)iVar16;
      }
      if (!bVar12) {
        bVar12 = false;
        if ((((uVar43 == 0xd) || ((uVar43 | 1) == 0xb)) || ((int)uVar6 < (int)uVar13)) ||
           ((bool)(bVar1 ^ 1))) goto LAB_024980d0;
        if (uVar13 == uVar6) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016fa418(uVar43,0);
          if ((uVar21 & 1) != 0) goto LAB_02497fc4;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar36 + 0x18) <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = lVar36 + lVar47 * 0x178;
        _bStack000000000000005c = *(float *)(lVar36 + 0x160);
        fStack0000000000000058 = *(float *)(lVar36 + 0x11c);
        bVar12 = fVar70 != 0.0;
        fVar67 = _bStack000000000000005c;
        if (bVar12) {
          fVar67 = fVar70;
        }
        fVar70 = fVar67;
        uStack0000000000000060 = *(uint *)(lVar36 + 0x168);
        fStack0000000000000054 = 0.0;
        fVar67 = fVar63;
        if (bVar12) {
          fVar67 = fStack00000000000000cc;
        }
        uVar22 = (ulong)(uint)fVar67;
        fStack0000000000000050 = fStack00000000000000d0;
        fStack00000000000000cc = fVar67;
      }
      if (*in_stack_00000148 == 1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 != 0)) {
          if (uVar13 < *(uint *)(lVar36 + 0x18)) {
            lVar36 = lVar36 + lVar47 * 0x178;
            lVar38 = *unaff_x19;
            uVar59 = *(uint *)(lVar36 + 0x128);
            uVar71 = *(undefined4 *)(lVar36 + 0x160);
            goto LAB_0249805c;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if ((uVar13 == uVar5) || ((int)uVar6 <= (int)uVar13)) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f68bc(uVar43,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 != 0)) {
          if (uVar43 == 0x200b || (uVar21 & 1) != 0) {
            lVar38 = lVar20;
            if (*(uint *)(lVar36 + 0x18) <= uVar6)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
            lVar38 = lVar47;
            if (*(uint *)(lVar36 + 0x18) <= uVar13)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          lVar36 = lVar36 + lVar38 * 0x178;
          uVar59 = *(uint *)(lVar36 + 0x128);
          uVar71 = *(undefined4 *)(lVar36 + 0x160);
          pcVar34 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_02498064;
        }
        goto LAB_0249920c;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 != 0)) {
          uVar59 = *(uint *)(lVar36 + 0x18);
          goto LAB_02497adc;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar13 < (int)(*in_stack_00000148 - 1)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar36 + 0x18) <= uVar39)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar21 = FUN_024a9e4c(uStack0000000000000060,*(undefined4 *)(lVar36 + lVar32),0);
        if ((uVar21 & 1) == 0) {
          if ((*in_stack_00000150 != 0) &&
             (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 != 0)) {
            if (uVar13 < *(uint *)(lVar36 + 0x18)) {
              lVar36 = lVar36 + lVar47 * 0x178;
              uVar60 = (ulong)*(uint *)(lVar36 + 0x128);
              uVar25 = (ulong)(uint)fStack0000000000000054;
              uVar22 = (ulong)(uint)fStack0000000000000050;
              (**(code **)(*unaff_x19 + 0x908))
                        (fStack0000000000000058,uVar22,uVar25,uVar60,fStack00000000000000d0,0,
                         _bStack000000000000005c,*(undefined4 *)(lVar36 + 0x160));
              puVar9 = System_Threading_Mutex_TypeInfo;
              lVar36 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar36 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar36 = *(long *)puVar9;
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
    if ((*in_stack_00000150 == 0) || (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar36 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (lVar40 == 0) goto LAB_0249920c;
    uVar59 = *(uint *)(lVar36 + lVar47 * 0x178 + 400);
    fVar67 = (float)FUN_026fd1f0(lVar40 + 0x50,0);
    if ((uVar59 >> 6 & 1) == 0) {
      if (bVar7) {
        if ((*in_stack_00000150 == 0) ||
           (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar36 + 0x18) <= uVar39 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar59 = *(uint *)(lVar36 + lVar32 + -0x330);
        pcVar34 = *(code **)(*unaff_x19 + 0x908);
        fVar66 = fStack0000000000000088 * fVar67 + *(float *)(lVar36 + lVar32 + -0x30c);
LAB_02498648:
        uVar60 = (ulong)uVar59;
        uVar22 = (ulong)(uint)in_stack_00000078._4_4_;
        uVar25 = (ulong)in_stack_00000068._4_4_;
        (*pcVar34)(fStack0000000000000080,uVar22,uVar25,uVar60,fVar66,0,fStack0000000000000088,
                   fStack0000000000000088);
      }
LAB_0249867c:
      bVar7 = false;
    }
    else {
      lVar36 = *in_stack_00000150;
      if ((lVar36 == 0) || (lVar38 = *(long *)(lVar36 + 0x38), lVar38 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar38 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(int *)(lVar38 + lVar47 * 0x178 + 0x174) = iVar14;
      if ((((int)unaff_x19[100] < (int)uVar13) || ((int)unaff_x19[0x65] < (int)uVar35)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar38 + lVar47 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uVar43 == 0xd) || ((uVar43 | 1) == 0xb)) || ((int)uVar6 < (int)uVar13)) ||
         (bVar7 || !bVar1)) {
LAB_02498228:
        if (!bVar7) goto LAB_0249867c;
      }
      else {
        if (uVar13 == uVar6) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016fa418(uVar43,0);
          if ((uVar21 & 1) != 0) goto LAB_02498228;
          lVar36 = *in_stack_00000150;
          if (lVar36 == 0) goto LAB_0249920c;
        }
        lVar36 = *(long *)(lVar36 + 0x38);
        if (lVar36 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar36 + 0x18) <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = lVar36 + lVar47 * 0x178;
        fStack0000000000000034 = *(float *)(lVar36 + 0x60);
        fStack0000000000000088 = *(float *)(lVar36 + 0x160);
        fStack0000000000000030 = *(float *)(lVar36 + 0x14c);
        uVar22 = (ulong)(uint)fStack0000000000000030;
        fStack0000000000000080 = *(float *)(lVar36 + 0x11c);
        in_stack_00000078._4_4_ = fVar67 * fStack0000000000000088 + fStack0000000000000030;
        in_stack_00000068._4_4_ = 0;
      }
      uVar59 = *in_stack_00000148;
      if (uVar59 == 1) {
LAB_024983ac:
        if ((*in_stack_00000150 != 0) &&
           (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 != 0)) {
          if (uVar13 < *(uint *)(lVar36 + 0x18)) {
            lVar36 = lVar36 + lVar47 * 0x178;
            lVar20 = *unaff_x19;
            uVar59 = *(uint *)(lVar36 + 0x128);
            fVar66 = *(float *)(lVar36 + 0x14c);
LAB_024983d8:
            pcVar34 = *(code **)(lVar20 + 0x908);
FUN_02498644:
            fVar66 = fVar67 * fStack0000000000000088 + fVar66;
            goto LAB_02498648;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if (uVar13 == uVar5) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f68bc(uVar43,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 != 0)) {
          uVar59 = *(uint *)(lVar36 + 0x18);
          if (uVar43 == 0x200b || (uVar21 & 1) != 0) {
            if (uVar59 <= uVar6)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
LAB_02498620:
            lVar20 = lVar47;
            if (uVar59 <= uVar13)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
LAB_02498628:
          lVar36 = lVar36 + lVar20 * 0x178;
          fVar66 = *(float *)(lVar36 + 0x14c);
          uVar59 = *(uint *)(lVar36 + 0x128);
          pcVar34 = *(code **)(*unaff_x19 + 0x908);
          goto FUN_02498644;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar13 < (int)uVar59) {
        lVar36 = *in_stack_00000150;
        if ((lVar36 != 0) && (lVar38 = *(long *)(lVar36 + 0x38), lVar38 != 0)) {
          if (uVar39 < *(uint *)(lVar38 + 0x18)) {
            if (*(float *)(lVar38 + lVar32 + -0x108) == fStack0000000000000034) {
              fVar61 = *(float *)(lVar38 + lVar32 + -0x1c);
              if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar22 = (ulong)(uint)fStack0000000000000030;
              uVar21 = FUN_024aa280(fVar66 + fVar61,uVar22,0);
              if ((uVar21 & 1) != 0) {
                uVar59 = *in_stack_00000148;
                goto 
                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
                ;
              }
              lVar36 = *in_stack_00000150;
              if (lVar36 == 0) goto LAB_0249920c;
            }
            lVar36 = *(long *)(lVar36 + 0x38);
            if (lVar36 != 0) {
              uVar59 = *(uint *)(lVar36 + 0x18);
              if ((int)uVar13 <= (int)uVar6) goto LAB_02498620;
              if (uVar6 < uVar59) goto LAB_02498628;
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
      if ((int)uVar13 < (int)uVar59) {
        iVar16 = FUN_02681c0c(lVar40,0);
        if (*(uint *)(lVar29 + 0x18) <= uVar39)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = *(long *)(lVar29 + lVar32 + -0x130);
        if (lVar36 == 0) goto LAB_0249920c;
        iVar17 = FUN_02681c0c(lVar36,0);
        if (iVar16 != iVar17) goto LAB_024983ac;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 != 0)) {
          if (uVar39 - 2 < *(uint *)(lVar36 + 0x18)) {
            lVar20 = *unaff_x19;
            uVar59 = *(uint *)(lVar36 + lVar32 + -0x330);
            fVar66 = *(float *)(lVar36 + lVar32 + -0x30c);
            goto LAB_024983d8;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      bVar7 = true;
    }
    if ((*in_stack_00000150 == 0) || (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 == 0))
    goto LAB_0249920c;
    uVar59 = (uint)*(undefined8 *)(lVar36 + 0x18);
    if (uVar59 <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar36 + lVar47 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar8) {
        uVar25 = (ulong)uStack00000000000000a0;
        uVar60 = (ulong)(uint)fStack00000000000000a4;
        uVar22 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar22,uVar25,uVar60,fStack00000000000000a8,uVar25);
      }
LAB_024986e8:
      bVar8 = false;
    }
    else {
      if ((((int)unaff_x19[100] < (int)uVar13) || ((int)unaff_x19[0x65] < (int)uVar35)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar36 + lVar47 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar8) {
        if ((((uVar43 == 0xd) || ((uVar43 | 1) == 0xb)) || ((int)uVar6 < (int)uVar13)) || (!bVar1))
        goto LAB_024986e8;
        if (uVar13 == uVar6) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016fa418(uVar43,0);
          if ((uVar21 & 1) != 0) goto LAB_024986e8;
        }
        puVar9 = System_Threading_Mutex_TypeInfo;
        lVar20 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar20 = *(long *)puVar9;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar36 = *(long *)(*in_stack_00000150 + 0x38), lVar36 == 0)) goto LAB_0249920c;
        uVar59 = (uint)*(undefined8 *)(lVar36 + 0x18);
        if (uVar59 <= uVar13)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar20 = *(long *)(lVar20 + 0xb8);
        lVar38 = lVar36 + lVar47 * 0x178;
        in_stack_00001798 = *(undefined8 *)(lVar38 + 0x184);
        in_stack_00001790 = *(undefined8 *)(lVar38 + 0x17c);
        fStack00000000000000b0 = *(float *)(lVar20 + 0x1598);
        in_stack_000017a0 = *(float *)(lVar38 + 0x18c);
        fStack00000000000000b4 = *(float *)(lVar20 + 0x159c);
        fStack00000000000000a4 = *(float *)(lVar20 + 0x15a0);
        fStack00000000000000a8 = *(float *)(lVar20 + 0x15a4);
        uStack00000000000000a0 = 0;
      }
      if (uVar59 <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = lVar36 + lVar47 * 0x178;
      fVar52 = *(float *)(lVar36 + 0x188);
      uVar19 = *(undefined8 *)(lVar36 + 0x17c);
      fVar65 = *(float *)(lVar36 + 0x184);
      uVar23 = *(undefined8 *)(lVar36 + 0x184);
      fVar62 = *(float *)(lVar36 + 0x18c);
      fVar66 = *(float *)(lVar36 + 0x11c);
      fVar61 = *(float *)(lVar36 + 0x128);
      fVar51 = *(float *)(lVar36 + 0x148);
      fVar67 = *(float *)(lVar36 + 0x150);
      in_stack_00000158 = uVar19;
      fStack0000000000000160 = fVar65;
      fStack0000000000000164 = fVar52;
      in_stack_00000168 = fVar62;
      in_stack_00000170 = in_stack_00001790;
      in_stack_00000178 = in_stack_00001798;
      in_stack_00000180 = in_stack_000017a0;
      uVar21 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
      lVar36 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
      if ((uVar21 & 1) == 0) {
        if (*(int *)(lVar36 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar36);
        }
        fVar66 = fVar66 - (float)((ulong)in_stack_00001790 >> 0x20);
        if (fVar66 <= fStack00000000000000b0) {
          fStack00000000000000b0 = fVar66;
        }
        fVar67 = fVar67 - in_stack_000017a0;
        uVar22 = (ulong)(uint)fVar67;
        fVar61 = fVar61 + (float)in_stack_00001798;
        uVar25 = (ulong)(uint)fVar61;
        if (fVar67 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar67;
        }
        fVar51 = fVar51 + (float)((ulong)in_stack_00001798 >> 0x20);
        uVar60 = (ulong)(uint)fVar51;
        if (fStack00000000000000a4 <= fVar61) {
          fStack00000000000000a4 = fVar61;
        }
        if (fStack00000000000000a8 <= fVar51) {
          fStack00000000000000a8 = fVar51;
        }
      }
      else {
        if (*(int *)(lVar36 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar36);
        }
        fVar66 = (fVar66 + (fStack00000000000000a4 - (float)in_stack_00001798)) * 0.5;
        uVar60 = (ulong)(uint)fVar66;
        if (fVar67 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar67;
        }
        uVar22 = (ulong)(uint)fStack00000000000000b4;
        uVar25 = (ulong)uStack00000000000000a0;
        if (fStack00000000000000a8 <= fVar51) {
          fStack00000000000000a8 = fVar51;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar22,uVar25,uVar60,fStack00000000000000a8,uVar25);
        fStack00000000000000b4 = fVar67 - fVar62;
        fStack00000000000000a4 = fVar61 + fVar65;
        uStack00000000000000a0 = 0;
        fStack00000000000000a8 = fVar51 + fVar52;
        fStack00000000000000b0 = fVar66;
        in_stack_00001790 = uVar19;
        in_stack_00001798 = uVar23;
        in_stack_000017a0 = fVar62;
      }
      if (((*in_stack_00000148 == 1) || (uVar13 == uVar5)) ||
         (((int)uVar6 <= (int)uVar13 || (!bVar1)))) {
        uVar25 = (ulong)uStack00000000000000a0;
        uVar60 = (ulong)(uint)fStack00000000000000a4;
        uVar22 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar22,uVar25,uVar60,fStack00000000000000a8,uVar25);
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
    }
    uVar13 = *in_stack_00000148;
    iVar49 = iVar49 + 1;
    lVar32 = lVar32 + 0x178;
    bVar1 = (int)uVar39 < (int)uVar13;
    uVar59 = uVar35;
    uVar39 = uVar39 + 1;
  } while (bVar1);
  lVar29 = *in_stack_00000150;
  if (lVar29 == 0) goto LAB_0249920c;
  iVar14 = uVar35 + 1;
LAB_02498c58:
  puVar10 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  puVar9 = PTR_DAT_033ed410;
  *(uint *)(lVar29 + 0x18) = uVar13;
  lVar32 = unaff_x19[0xd3];
  *(int *)(lVar29 + 0x2c) = iVar14;
  iVar14 = iStack00000000000000ac;
  if ((int)uVar13 < 1) {
    iVar14 = 1;
  }
  if (iStack00000000000000ac == 0) {
    iVar14 = 1;
  }
  *(int *)(lVar29 + 0x1c) = (int)lVar32;
  *(int *)(lVar29 + 0x24) = iVar14;
  *(int *)(lVar29 + 0x30) = (int)unaff_x19[0x95] + 1;
  if (((int)unaff_x19[0x62] != 0xff) ||
     (uVar21 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar21 & 1) == 0)) {
LAB_02496098:
    if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__ + 0xe0) == 0)
    {
      thunk_FUN_00d32864();
    }
    FUN_024a942c();
    return;
  }
  lVar29 = unaff_x19[0xde];
  if (lVar29 != 0) {
    (**(code **)(lVar29 + 0x18))
              (*(undefined8 *)(lVar29 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar29 + 0x28));
  }
  if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
  iVar14 = FUN_02859dc4(unaff_x19[0xe4],0);
  if (iVar14 != 0x19) {
    lVar29 = unaff_x19[0xe4];
    if (lVar29 == 0) goto LAB_0249920c;
    uVar13 = FUN_02859dc4(lVar29,0);
    FUN_02859e00(lVar29,uVar13 | 0x19,0);
  }
  if (*(int *)((long)unaff_x19 + 0x314) != 0) {
    if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x60), lVar29 == 0))
    goto LAB_0249920c;
    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(int *)(lVar29 + 0x18) == 0)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    FUN_024e8000(lVar29 + 0x20,1,0);
  }
  if (unaff_x19[0x73] != 0) {
    UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
              (unaff_x19[0x73],0);
    if ((unaff_x19[0x6c] != 0) && (lVar29 = *(long *)(unaff_x19[0x6c] + 0x60), lVar29 != 0)) {
      if (*(int *)(lVar29 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      if (unaff_x19[0x73] != 0) {
        FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar29 + 0x30),0);
        if ((unaff_x19[0x6c] != 0) && (lVar29 = *(long *)(unaff_x19[0x6c] + 0x60), lVar29 != 0)) {
          if (*(int *)(lVar29 + 0x18) == 0)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          if (unaff_x19[0x73] != 0) {
            FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar29 + 0x48),0);
            if ((unaff_x19[0x6c] != 0) && (lVar29 = *(long *)(unaff_x19[0x6c] + 0x60), lVar29 != 0))
            {
              if (*(int *)(lVar29 + 0x18) == 0)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              if (unaff_x19[0x73] != 0) {
                FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar29 + 0x50),0);
                if ((unaff_x19[0x6c] != 0) &&
                   (lVar29 = *(long *)(unaff_x19[0x6c] + 0x60), lVar29 != 0)) {
                  if (*(int *)(lVar29 + 0x18) == 0)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  if (unaff_x19[0x73] != 0) {
                    FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar29 + 0x58),0);
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266ed90(unaff_x19[0x73],0);
                      if (unaff_x19[0xe3] != 0) {
                        FUN_02858f1c(unaff_x19[0xe3],unaff_x19[0x73],0);
                        if (unaff_x19[0xe3] != 0) {
                          uVar23 = FUN_02858bac(unaff_x19[0xe3],0);
                          if (unaff_x19[0xe3] != 0) {
                            uVar13 = FUN_02858a14(unaff_x19[0xe3],0);
                            lVar29 = *in_stack_00000150;
                            if (lVar29 != 0) {
                              lVar36 = 0;
                              lVar32 = 0;
                              do {
                                uVar21 = lVar32 + 1;
                                if ((long)*(int *)(lVar29 + 0x34) <= (long)uVar21)
                                goto LAB_02496098;
                                lVar29 = *(long *)(lVar29 + 0x60);
                                if (lVar29 == 0) break;
                                if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                if (*(uint *)(lVar29 + 0x18) <= uVar21)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                ;
                                FUN_024e7ecc(lVar29 + lVar36 + 0x70,0);
                                lVar29 = unaff_x19[0xe0];
                                if (lVar29 == 0) break;
                                if (*(uint *)(lVar29 + 0x18) <= uVar21)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                ;
                                uVar19 = *(undefined8 *)(lVar29 + lVar32 * 8 + 0x28);
                                if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar26 = FUN_0268b4e0(uVar19,0,0);
                                if ((uVar26 & 1) == 0) {
                                  if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar29 = *(long *)(*in_stack_00000150 + 0x60), lVar29 == 0))
                                    break;
                                    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                    }
                                    if (*(uint *)(lVar29 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    FUN_024e8000(lVar29 + lVar36 + 0x70,1,0);
                                  }
                                  lVar29 = unaff_x19[0xe0];
                                  if (lVar29 == 0) break;
                                  if (*(uint *)(lVar29 + 0x18) <= uVar21)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  lVar29 = *(long *)(lVar29 + lVar32 * 8 + 0x28);
                                  if (lVar29 == 0) break;
                                  lVar29 = FUN_024f0144(lVar29,0);
                                  if ((*in_stack_00000150 == 0) ||
                                     (lVar20 = *(long *)(*in_stack_00000150 + 0x60), lVar20 == 0))
                                  break;
                                  if (*(uint *)(lVar20 + 0x18) <= uVar21)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  if (lVar29 == 0) break;
                                  FUN_0266b9c4(lVar29,*(undefined8 *)(lVar20 + lVar36 + 0x80),0);
                                  lVar29 = unaff_x19[0xe0];
                                  if (lVar29 == 0) break;
                                  if (*(uint *)(lVar29 + 0x18) <= uVar21)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  lVar29 = *(long *)(lVar29 + lVar32 * 8 + 0x28);
                                  if (lVar29 == 0) break;
                                  lVar29 = FUN_024f0144(lVar29,0);
                                  if ((*in_stack_00000150 == 0) ||
                                     (lVar20 = *(long *)(*in_stack_00000150 + 0x60), lVar20 == 0))
                                  break;
                                  if (*(uint *)(lVar20 + 0x18) <= uVar21)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  if (lVar29 == 0) break;
                                  FUN_0266bbc8(lVar29,*(undefined8 *)(lVar20 + lVar36 + 0x98),0);
                                  lVar29 = unaff_x19[0xe0];
                                  if (lVar29 == 0) break;
                                  if (*(uint *)(lVar29 + 0x18) <= uVar21)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  lVar29 = *(long *)(lVar29 + lVar32 * 8 + 0x28);
                                  if (lVar29 == 0) break;
                                  lVar29 = FUN_024f0144(lVar29,0);
                                  if ((*in_stack_00000150 == 0) ||
                                     (lVar20 = *(long *)(*in_stack_00000150 + 0x60), lVar20 == 0))
                                  break;
                                  if (*(uint *)(lVar20 + 0x18) <= uVar21)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  if (lVar29 == 0) break;
                                  FUN_0266bc74(lVar29,*(undefined8 *)(lVar20 + lVar36 + 0xa0),0);
                                  lVar29 = unaff_x19[0xe0];
                                  if (lVar29 == 0) break;
                                  if (*(uint *)(lVar29 + 0x18) <= uVar21)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  lVar29 = *(long *)(lVar29 + lVar32 * 8 + 0x28);
                                  if (lVar29 == 0) break;
                                  lVar29 = FUN_024f0144(lVar29,0);
                                  if ((*in_stack_00000150 == 0) ||
                                     (lVar20 = *(long *)(*in_stack_00000150 + 0x60), lVar20 == 0))
                                  break;
                                  if (*(uint *)(lVar20 + 0x18) <= uVar21)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  if (lVar29 == 0) break;
                                  FUN_0266c1dc(lVar29,*(undefined8 *)(lVar20 + lVar36 + 0xa8),0);
                                  lVar29 = unaff_x19[0xe0];
                                  if (lVar29 == 0) break;
                                  if (*(uint *)(lVar29 + 0x18) <= uVar21)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  lVar29 = *(long *)(lVar29 + lVar32 * 8 + 0x28);
                                  if ((lVar29 == 0) ||
                                     (lVar29 = FUN_024f0144(lVar29,0), lVar29 == 0)) break;
                                  FUN_0266ed90(lVar29,0);
                                  lVar29 = unaff_x19[0xe0];
                                  if (lVar29 == 0) break;
                                  if (*(uint *)(lVar29 + 0x18) <= uVar21)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  lVar29 = *(long *)(lVar29 + lVar32 * 8 + 0x28);
                                  if (lVar29 == 0) break;
                                  lVar29 = FUN_02738ef4(lVar29,0);
                                  lVar20 = unaff_x19[0xe0];
                                  if (lVar20 == 0) break;
                                  if (*(uint *)(lVar20 + 0x18) <= uVar21)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  lVar20 = *(long *)(lVar20 + lVar32 * 8 + 0x28);
                                  if ((lVar20 == 0) ||
                                     (uVar19 = FUN_024f0144(lVar20,0), lVar29 == 0)) break;
                                  FUN_02858f1c(lVar29,uVar19,0);
                                  lVar29 = unaff_x19[0xe0];
                                  if (lVar29 == 0) break;
                                  if (*(uint *)(lVar29 + 0x18) <= uVar21)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  lVar29 = *(long *)(lVar29 + lVar32 * 8 + 0x28);
                                  if ((lVar29 == 0) ||
                                     (lVar29 = FUN_02738ef4(lVar29,0), lVar29 == 0)) break;
                                  FUN_02858b14(uVar23,uVar22,uVar25,uVar60,lVar29,0);
                                  lVar29 = unaff_x19[0xe0];
                                  if (lVar29 == 0) break;
                                  if (*(uint *)(lVar29 + 0x18) <= uVar21)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  lVar29 = *(long *)(lVar29 + lVar32 * 8 + 0x28);
                                  if ((lVar29 == 0) ||
                                     (lVar29 = FUN_02738ef4(lVar29,0), lVar29 == 0)) break;
                                  FUN_02858a50(lVar29,uVar13 & 1,0);
                                  lVar29 = unaff_x19[0xe0];
                                  if (lVar29 == 0) break;
                                  if (*(uint *)(lVar29 + 0x18) <= uVar21)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  plVar44 = *(long **)(lVar29 + lVar32 * 8 + 0x28);
                                  uVar18 = (**(code **)(*unaff_x19 + 0x2b8))();
                                  if (plVar44 == (long *)0x0) break;
                                  (**(code **)(*plVar44 + 0x2c8))
                                            (plVar44,uVar18 & 1,*(undefined8 *)(*plVar44 + 0x2d0));
                                }
                                lVar29 = *in_stack_00000150;
                                lVar32 = lVar32 + 1;
                                lVar36 = lVar36 + 0x50;
                              } while (lVar29 != 0);
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


