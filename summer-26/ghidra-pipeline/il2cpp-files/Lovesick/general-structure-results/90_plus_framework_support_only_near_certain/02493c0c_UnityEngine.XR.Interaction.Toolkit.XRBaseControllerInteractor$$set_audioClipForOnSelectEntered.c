/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor$$set_audioClipForOnSelectEntered
ENTRY_POINT: 02493c0c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 136
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;weak_vector_component_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__set_audioClipForOnSelectEntered
               (float param_1,ulong param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  double __x;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 in_ZR;
  bool bVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  int *piVar24;
  ulong uVar25;
  undefined1 uVar26;
  char cVar27;
  long lVar28;
  undefined4 *puVar29;
  long lVar30;
  long lVar31;
  float *pfVar32;
  code *pcVar33;
  float *pfVar34;
  long lVar35;
  uint uVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long *unaff_x19;
  uint unaff_w20;
  uint uVar41;
  long unaff_x21;
  long *plVar42;
  uint uVar43;
  uint unaff_w24;
  uint unaff_w25;
  long lVar44;
  long *plVar45;
  uint unaff_w26;
  long unaff_x27;
  long *plVar46;
  undefined1 *unaff_x28;
  uint unaff_w29;
  int iVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  double dVar56;
  ulong uVar57;
  ulong uVar58;
  uint uVar59;
  ulong uVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float unaff_s8;
  float fVar64;
  float unaff_s9;
  float fVar65;
  float unaff_s10;
  float fVar66;
  float fVar67;
  float unaff_s11;
  float fVar68;
  float unaff_s12;
  float fVar69;
  float fVar70;
  ulong unaff_d13;
  undefined4 uVar71;
  float fVar72;
  ulong unaff_d14;
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
  float fStack00000000000000ac;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  undefined8 in_stack_000000b8;
  float in_stack_000000c0;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  float fStack00000000000000f4;
  ulong in_stack_00000100;
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
  undefined8 in_stack_00000888;
  undefined4 in_stack_00000890;
  long in_stack_000016d8;
  uint in_stack_0000176c;
  uint in_stack_00001788;
  undefined8 in_stack_00001790;
  undefined8 in_stack_00001798;
  float in_stack_000017a0;
  undefined8 in_stack_000017a8;
  float in_stack_000017b8;
  uint in_stack_000017bc;
  
code_r0x02493c0c:
  uVar15 = (uint)unaff_x21;
  if (!(bool)in_ZR) {
    param_5 = (float)unaff_d13;
  }
  if ((0.0 < (float)param_2) && (*(char *)((long)unaff_x19 + 700) == '\0')) {
    unaff_s11 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
  }
  fVar61 = (param_6 - param_7) + unaff_s11;
  uVar19 = *in_stack_00000148;
  iVar18 = (int)unaff_x27;
  if (fStack00000000000000a4 < fVar61) {
    if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
      *(uint *)((long)unaff_x19 + 0x2dc) = uVar19;
    }
    plVar46 = (long *)StringLiteral_302;
    plVar42 = (long *)System_Threading_Mutex_TypeInfo;
    uVar20 = DAT_02941c08;
    if ((char)unaff_x19[0x46] != '\0') {
      fVar62 = *(float *)(unaff_x19 + 0x58);
      if (((fVar62 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < (float)param_2)) &&
         (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
        fVar61 = *(float *)((long)unaff_x19 + 0x2b4) +
                 ((in_stack_00000018._4_4_ - fVar61) / (float)(int)unaff_x19[0x94]) /
                 fStack0000000000000054;
        if (fVar61 <= fVar62) {
          fVar61 = fVar62;
        }
        goto LAB_024964c8;
      }
      fVar62 = *(float *)((long)unaff_x19 + 0x1dc);
      fVar61 = *(float *)(unaff_x19 + 0x49);
      param_2 = (ulong)(uint)fVar61;
      if ((fVar61 < fVar62) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
        fVar66 = (fVar62 - *(float *)(unaff_x19 + 0x47)) * 0.5;
        if (fVar66 <= DAT_028aa298) {
          fVar66 = DAT_028aa298;
        }
        fVar55 = (fVar62 - fVar66) * 20.0 + 0.5;
        fVar66 = DAT_02958220;
        if (fVar55 != INFINITY) {
          fVar66 = (float)(int)fVar55 / 20.0;
        }
        if (fVar66 <= fVar61) {
          fVar66 = fVar61;
        }
        *(float *)((long)unaff_x19 + 0x234) = fVar62;
        goto LAB_02495fd8;
      }
    }
    switch((int)unaff_x19[0x5b]) {
    case 1:
      lVar28 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar28 = *plVar42;
      }
      lVar31 = *(long *)(lVar28 + 0xb8);
      lVar28 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
      if ((*(byte *)(lVar28 + 0x132) & 1) == 0) {
        lVar28 = FUN_00d5941c(lVar28);
      }
      plVar46 = (long *)StringLiteral_302;
      lVar28 = *(long *)(*(long *)(lVar28 + 0xc0) + 8);
      if ((*(byte *)(lVar28 + 0x132) & 1) == 0) {
        lVar28 = FUN_00d5941c();
      }
      piVar24 = (int *)thunk_FUN_00d32ed4(lVar31 + 0x11f0,*(long *)(lVar28 + 0x80) + 0xa0);
      if (*piVar24 == 0) {
LAB_02495f00:
        in_stack_000017a8 = DAT_02941c08;
        in_stack_00000148[0] = 0;
        in_stack_00000148[1] = 0;
        in_stack_00001788 = 0xffffffff;
        unaff_w25 = in_stack_000017bc;
        goto LAB_02492630;
      }
      lVar28 = *plVar42;
      if (*(int *)(lVar28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar28 = *plVar42;
      }
      FUN_013b8de4(*(long *)(lVar28 + 0xb8) + 0x11f0,&stack0x00000880,
                   *(undefined8 *)
                    Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                  );
      memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_02494358:
      iVar14 = FUN_024d66ec();
LAB_02494364:
      iVar47 = *(int *)((long)unaff_x19 + 0x48c) + -1;
      *(int *)((long)unaff_x19 + 0x48c) = iVar47;
      in_stack_00000140 = in_stack_00000140 + 1;
      in_stack_00001788 = iVar14 - 1;
      in_stack_000017a8 = CONCAT44(0x2026,iVar47);
      unaff_w25 = in_stack_000017bc;
      goto LAB_02492630;
    default:
      goto 
      UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited;
    case 3:
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
LAB_02493ec0:
      plVar46 = (long *)StringLiteral_302;
      in_stack_00001788 = FUN_024d66ec();
      break;
    case 5:
      if ((uVar19 == 0) || ((int)in_stack_00001788 < 0)) {
        *in_stack_00000148 = 0;
        plVar46 = (long *)StringLiteral_302;
        plVar42 = (long *)System_Threading_Mutex_TypeInfo;
        in_stack_00001788 = 0xffffffff;
        in_stack_000017a8 = uVar20;
        unaff_w25 = in_stack_000017bc;
        goto LAB_02492630;
      }
      fVar61 = *(float *)(unaff_x19 + 0x98);
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00001788 = FUN_024d66ec();
      if (fVar61 - param_4 <= fStack00000000000000a4) {
        *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
        *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
        param_2 = *(ulong *)(*(long *)(*plVar42 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
        *(undefined4 *)(unaff_x19 + 0x99) = 0;
        lVar28 = NEON_rev64(param_2,4);
        unaff_x19[0x98] = lVar28;
        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
        *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
        *(int *)(unaff_x19 + 0x94) = (int)unaff_x19[0x94] + 1;
        *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
        unaff_w25 = in_stack_000017bc;
        goto LAB_02492630;
      }
      break;
    case 6:
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00001788 = FUN_024d66ec();
      plVar46 = (long *)StringLiteral_302;
      lVar28 = unaff_x19[0x5c];
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
      }
      uVar22 = FUN_02681b9c(lVar28,0,0);
      if ((uVar22 & 1) != 0) {
        plVar45 = (long *)unaff_x19[0x5c];
        uVar20 = (**(code **)(*unaff_x19 + 0x548))();
        if (plVar45 == (long *)0x0) goto LAB_0249920c;
        (**(code **)(*plVar45 + 0x558))(plVar45,uVar20,*(undefined8 *)(*plVar45 + 0x560));
        lVar28 = unaff_x19[0x5c];
        if (lVar28 == 0) goto LAB_0249920c;
        *(int *)(lVar28 + 0x3f8) = (int)unaff_x19[0x7f];
        FUN_024c910c(lVar28,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
        plVar45 = (long *)unaff_x19[0x5c];
        if (plVar45 == (long *)0x0) goto LAB_0249920c;
        (**(code **)(*plVar45 + 0x7d8))(plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7e0));
        *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      }
    }
LAB_0249408c:
    in_stack_000017a8 = CONCAT44(3,uVar19);
    unaff_w25 = in_stack_000017bc;
    goto LAB_02492630;
  }
UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited:
  plVar42 = (long *)System_Threading_Mutex_TypeInfo;
  fVar62 = unaff_s12 - param_3;
  param_2 = (ulong)(uint)fVar62;
  fVar66 = ABS(unaff_s10) + param_1 * fVar62 * param_5;
  fVar61 = _DAT_0294c6e8;
  if (unaff_w26 == 0) {
    fVar61 = unaff_s12;
  }
  if (fVar61 * fStack00000000000000d4 < fVar66) {
    if (((char)unaff_x19[0x5a] == '\0') || (uVar19 == *(uint *)(unaff_x19 + 0x92))) {
      if (((char)unaff_x19[0x46] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
        fVar55 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if (param_3 < fVar55) {
          fVar62 = fVar66 / fVar62;
          if (param_3 <= 0.0) {
            fVar62 = fVar66;
          }
          param_3 = param_3 + (fVar66 - fVar61 * (fStack00000000000000d4 + DAT_02958218)) / fVar62;
          goto LAB_0249929c;
        }
        fVar55 = *(float *)((long)unaff_x19 + 0x1dc);
        param_2 = (ulong)(uint)fVar55;
        fVar62 = *(float *)(unaff_x19 + 0x49);
        if (fVar55 <= fVar62) goto LAB_02493e34;
LAB_02499210:
        fVar61 = (fVar55 - *(float *)(unaff_x19 + 0x47)) * 0.5;
        if (fVar61 <= DAT_028aa298) {
          fVar61 = DAT_028aa298;
        }
        *(float *)((long)unaff_x19 + 0x234) = fVar55;
        fVar61 = (fVar55 - fVar61) * 20.0 + 0.5;
        fVar66 = DAT_02958220;
        if (fVar61 != INFINITY) {
          fVar66 = (float)(int)fVar61 / 20.0;
        }
        if (fVar66 <= fVar62) {
          fVar66 = fVar62;
        }
LAB_02495fd8:
        *(float *)((long)unaff_x19 + 0x1dc) = fVar66;
        return;
      }
LAB_02493e34:
      iVar14 = (int)unaff_x19[0x5b];
      if (iVar14 == 1) {
        unaff_s12 = 1.0;
        lVar28 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar28 = *plVar42;
        }
        plVar46 = (long *)StringLiteral_302;
        lVar31 = *(long *)(lVar28 + 0xb8);
        lVar28 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar28 + 0x132) & 1) == 0) {
          lVar28 = FUN_00d5941c(lVar28);
        }
        lVar28 = *(long *)(*(long *)(lVar28 + 0xc0) + 8);
        if ((*(byte *)(lVar28 + 0x132) & 1) == 0) {
          lVar28 = FUN_00d5941c();
        }
        piVar24 = (int *)thunk_FUN_00d32ed4(lVar31 + 0x11f0,*(long *)(lVar28 + 0x80) + 0xa0);
        if (*piVar24 != 0) {
          lVar28 = *plVar42;
          if (*(int *)(lVar28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar28 = *plVar42;
          }
          FUN_013b8de4(*(long *)(lVar28 + 0xb8) + 0x11f0,&stack0x00000880,
                       *(undefined8 *)
                        Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                      );
          memcpy(&stack0x00000c70,&stack0x00000880,0x378);
          goto LAB_02494358;
        }
        goto LAB_02495f00;
      }
      unaff_s12 = 1.0;
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
      plVar46 = (long *)StringLiteral_302;
      in_stack_00001788 = FUN_024d66ec();
      lVar28 = unaff_x19[0x5c];
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
      }
      uVar22 = FUN_02681b9c(lVar28,0,0);
      if ((uVar22 & 1) != 0) {
        plVar45 = (long *)unaff_x19[0x5c];
        uVar20 = (**(code **)(*unaff_x19 + 0x548))();
        if (plVar45 == (long *)0x0) goto LAB_0249920c;
        (**(code **)(*plVar45 + 0x558))(plVar45,uVar20,*(undefined8 *)(*plVar45 + 0x560));
        lVar28 = unaff_x19[0x5c];
        if (lVar28 == 0) goto LAB_0249920c;
        *(int *)(lVar28 + 0x3f8) = (int)unaff_x19[0x7f];
        FUN_024c910c(lVar28,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
        plVar45 = (long *)unaff_x19[0x5c];
        if (plVar45 == (long *)0x0) goto LAB_0249920c;
        (**(code **)(*plVar45 + 0x7d8))(plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7e0));
        *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      }
LAB_02494484:
      unaff_s12 = 1.0;
      in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
      unaff_w25 = in_stack_000017bc;
    }
    else {
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00001788 = FUN_024d66ec();
      if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
        lVar28 = *in_stack_00000150;
        if ((lVar28 == 0) || (lVar31 = *(long *)(lVar28 + 0x38), lVar31 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar62 = *(float *)(unaff_x19 + 0x9a);
        fVar55 = 0.0;
        if ((0.0 < fVar62) && (fVar55 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
          fVar55 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
        }
        fVar55 = fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56) +
                 *(float *)(lVar31 + (int)*in_stack_00000148 * unaff_x27 + 0x154) +
                 (fVar55 - *(float *)((long)unaff_x19 + 0x4c4)) +
                 fStack0000000000000054 *
                 (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
      }
      else {
        lVar28 = unaff_x19[0x6c];
        *(undefined1 *)((long)unaff_x19 + 700) = 1;
        if (lVar28 == 0) goto LAB_0249920c;
        fVar62 = *(float *)(unaff_x19 + 0x9a);
        fVar55 = *(float *)(unaff_x19 + 0x57) +
                 fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56);
      }
      puVar10 = System_Threading_Mutex_TypeInfo;
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_0249920c;
      uVar59 = *(uint *)((long)unaff_x19 + 0x48c);
      if ((*(uint *)(lVar28 + 0x18) <= uVar59) ||
         (uVar36 = uVar59 - 1, *(uint *)(lVar28 + 0x18) <= uVar36))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      param_2 = (ulong)(uint)(fVar55 + *(float *)(unaff_x19 + 0x96));
      fVar49 = (fVar55 + *(float *)(unaff_x19 + 0x96) + fVar62) -
               *(float *)(lVar28 + (int)uVar59 * unaff_x27 + 0x158);
      if (((in_stack_00000068._4_1_ & 1) != 0 ||
           *(short *)(lVar28 + (long)(int)uVar36 * (long)iVar18 + 0x20) != 0xad) ||
         ((fStack00000000000000a4 <= fVar49 && ((int)unaff_x19[0x5b] != 0)))) {
        if (*(short *)(lVar28 + (int)uVar59 * unaff_x27 + 0x20) == 0xad) {
          in_stack_00000068._4_1_ = 1;
        }
        else {
          if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
            param_3 = *(float *)((long)unaff_x19 + 0x2cc);
            fVar55 = *(float *)(unaff_x19 + 0x59) / 100.0;
            if ((fVar55 <= param_3) || ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)))
            {
              fVar55 = *(float *)((long)unaff_x19 + 0x1dc);
              param_2 = (ulong)(uint)fVar55;
              fVar62 = *(float *)(unaff_x19 + 0x49);
              if ((fVar62 < fVar55) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
              goto LAB_02499210;
              goto LAB_024946c0;
            }
LAB_024992ac:
            fVar62 = fVar66;
            if (0.0 < param_3) {
              fVar62 = fVar66 / (1.0 - param_3);
            }
            param_3 = param_3 + (fVar66 - fVar61 * (fStack00000000000000d4 + DAT_02958218)) / fVar62
            ;
LAB_0249929c:
            if (fVar55 <= param_3) {
              param_3 = fVar55;
            }
            *(float *)((long)unaff_x19 + 0x2cc) = param_3;
            return;
          }
LAB_024946c0:
          lVar28 = *(long *)System_Threading_Mutex_TypeInfo;
          if (*(int *)(lVar28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar28 = *(long *)puVar10;
          }
          iVar14 = *(int *)(*(long *)(lVar28 + 0xb8) + 0xe78);
          if ((((float)iVar14 != fStack0000000000000034) && (iVar14 != -1)) &&
             (((bStack000000000000005c ^ 1) & 1) == 0)) {
            if (*(int *)(lVar28 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            in_stack_00001788 = FUN_024d66ec();
            if ((unaff_x19[0x6c] == 0) || (lVar28 = *(long *)(unaff_x19[0x6c] + 0x38), lVar28 == 0))
            goto LAB_0249920c;
            uVar36 = *in_stack_00000148 - 1;
            if (*(uint *)(lVar28 + 0x18) <= uVar36)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            fStack0000000000000034 = (float)iVar14;
            if (*(short *)(lVar28 + (long)(int)uVar36 * (long)iVar18 + 0x20) == 0xad) {
              *in_stack_00000148 = uVar36;
              goto LAB_024947b4;
            }
          }
          if (fStack00000000000000a4 < fVar49) {
            if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
              *(undefined4 *)((long)unaff_x19 + 0x2dc) = *(undefined4 *)((long)unaff_x19 + 0x48c);
            }
            plVar46 = (long *)StringLiteral_302;
            plVar42 = (long *)System_Threading_Mutex_TypeInfo;
            if ((char)unaff_x19[0x46] != '\0') {
              fVar62 = *(float *)(unaff_x19 + 0x58);
              if ((fVar62 < *(float *)((long)unaff_x19 + 0x2b4)) &&
                 (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                fVar61 = *(float *)((long)unaff_x19 + 0x2b4) +
                         ((in_stack_00000018._4_4_ - fVar49) / (float)((int)unaff_x19[0x94] + 1)) /
                         fStack0000000000000054;
                if (fVar61 <= fVar62) {
                  fVar61 = fVar62;
                }
LAB_024964c8:
                *(float *)((long)unaff_x19 + 0x2b4) = fVar61;
                return;
              }
              param_3 = *(float *)((long)unaff_x19 + 0x2cc);
              fVar55 = *(float *)(unaff_x19 + 0x59) / 100.0;
              if ((param_3 < fVar55) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
              goto LAB_024992ac;
              fVar55 = *(float *)((long)unaff_x19 + 0x1dc);
              param_2 = (ulong)(uint)fVar55;
              fVar62 = *(float *)(unaff_x19 + 0x49);
              if ((fVar62 < fVar55) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
              goto LAB_02499210;
            }
            unaff_s12 = 1.0;
            switch((int)unaff_x19[0x5b]) {
            case 0:
            case 2:
            case 4:
              param_2 = unaff_d13;
              FUN_024d7014(fStack0000000000000054,unaff_d13,fStack00000000000000c8,
                           *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0,
                           fStack00000000000000cc,fStack00000000000000d4,fStack0000000000000048);
              break;
            case 1:
              lVar28 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar28 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar28 = *plVar42;
              }
              lVar31 = *(long *)(lVar28 + 0xb8);
              lVar28 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
              if ((*(byte *)(lVar28 + 0x132) & 1) == 0) {
                lVar28 = FUN_00d5941c(lVar28);
              }
              lVar28 = *(long *)(*(long *)(lVar28 + 0xc0) + 8);
              if ((*(byte *)(lVar28 + 0x132) & 1) == 0) {
                lVar28 = FUN_00d5941c();
              }
              piVar24 = (int *)thunk_FUN_00d32ed4(lVar31 + 0x11f0,*(long *)(lVar28 + 0x80) + 0xa0);
              if (*piVar24 == 0) {
                in_stack_00000068._4_1_ = 0;
                goto LAB_02495f00;
              }
              lVar28 = *plVar42;
              if (*(int *)(lVar28 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar28 = *plVar42;
              }
              FUN_013b8de4(*(long *)(lVar28 + 0xb8) + 0x11f0,&stack0x00000880,
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
              param_2 = unaff_d13;
              FUN_024d7014(fStack0000000000000054,unaff_d13,fStack00000000000000c8,
                           *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0,
                           fStack00000000000000cc,fStack00000000000000d4,fStack0000000000000048);
              *(undefined4 *)(unaff_x19 + 0x99) = 0;
              *(undefined4 *)(unaff_x19 + 0x9a) = 0;
              *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
              *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
              break;
            case 6:
              lVar28 = unaff_x19[0x5c];
              if (*(int *)(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                          0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar22 = FUN_02681b9c(lVar28,0,0);
              if ((uVar22 & 1) != 0) {
                plVar45 = (long *)unaff_x19[0x5c];
                uVar20 = (**(code **)(*unaff_x19 + 0x548))();
                if (plVar45 == (long *)0x0) goto LAB_0249920c;
                (**(code **)(*plVar45 + 0x558))(plVar45,uVar20,*(undefined8 *)(*plVar45 + 0x560));
                lVar28 = unaff_x19[0x5c];
                if (lVar28 == 0) goto LAB_0249920c;
                *(int *)(lVar28 + 0x3f8) = (int)unaff_x19[0x7f];
                FUN_024c910c(lVar28,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                plVar45 = (long *)unaff_x19[0x5c];
                if (plVar45 == (long *)0x0) goto LAB_0249920c;
                (**(code **)(*plVar45 + 0x7d8))(plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7e0));
                *(undefined1 *)(unaff_x19 + 0x5e) = 1;
              }
              in_stack_00000068._4_1_ = 0;
              goto LAB_02494484;
            default:
              in_stack_00000068._4_1_ = 0;
              unaff_w25 = in_stack_000017bc;
              goto LAB_02494950;
            }
            in_stack_00000068._4_1_ = 0;
            bStack000000000000005c = 1;
            fStack0000000000000058 = 1.4013e-45;
            plVar46 = (long *)StringLiteral_302;
            plVar42 = (long *)System_Threading_Mutex_TypeInfo;
            unaff_w25 = in_stack_000017bc;
            goto LAB_02492630;
          }
          param_2 = unaff_d13;
          FUN_024d7014(fStack0000000000000054,unaff_d13,fStack00000000000000c8,
                       *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0,
                       fStack00000000000000cc,fStack00000000000000d4,fStack0000000000000048);
          bStack000000000000005c = 1;
          in_stack_00000068._4_1_ = 0;
          fStack0000000000000058 = 1.4013e-45;
        }
      }
      else {
        *in_stack_00000148 = uVar36;
LAB_024947b4:
        in_stack_000017a8 = CONCAT44(0x2d,uVar36);
        in_stack_00001788 = in_stack_00001788 - 1;
        in_stack_00000068._4_1_ = 0;
      }
      unaff_s12 = 1.0;
      plVar46 = (long *)StringLiteral_302;
      plVar42 = (long *)System_Threading_Mutex_TypeInfo;
      unaff_w25 = in_stack_000017bc;
    }
LAB_02492630:
    param_5 = (float)unaff_d13;
    in_stack_00001788 = in_stack_00001788 + 1;
    lVar28 = unaff_x19[0x8e];
    if (lVar28 != 0) {
      if ((int)in_stack_00001788 < (int)*(uint *)(lVar28 + 0x18)) {
        if (*(uint *)(lVar28 + 0x18) <= in_stack_00001788)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar15 = *(uint *)(lVar28 + (long)(int)in_stack_00001788 * 0xc + 0x20);
        if (uVar15 == 0) goto LAB_02495f1c;
        if (5 < in_stack_00000140) {
          uVar20 = FUN_0176eb1c(&stack0x000017bc,0);
          uVar21 = FUN_0176eb1c(&stack0x00001788,0);
          uVar20 = FUN_0160073c(*(undefined8 *)
                                 UnityEngine_Rendering_Universal_DebugValidationMode_var,uVar20,
                                *(undefined8 *)
                                 Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                                ,uVar21,0);
          if (*(int *)(*plVar46 + 0xe0) == 0) {
            thunk_FUN_00d32864(*plVar46);
          }
          FUN_026610e4(uVar20,0);
          in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
        }
        if ((*(char *)((long)unaff_x19 + 0x2fa) != '\0') && (uVar15 == 0x3c)) goto code_r0x02492440;
        if ((*in_stack_00000150 != 0) &&
           (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 != 0)) {
          if (*in_stack_00000148 < *(uint *)(lVar28 + 0x18)) {
            lVar28 = lVar28 + (int)*in_stack_00000148 * unaff_x27;
            *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar28 + 0x2c);
            *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar28 + 0x58);
            unaff_x19[0x1f] = *(long *)(lVar28 + 0x38);
            goto 
            UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
LAB_02495f1c:
      fVar61 = (float)param_2;
      if (((char)unaff_x19[0x46] != '\0') &&
         (fVar61 = DAT_02956ccc,
         DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
        fVar61 = *(float *)((long)unaff_x19 + 0x1dc);
        fVar62 = *(float *)((long)unaff_x19 + 0x24c);
        if ((fVar61 < fVar62) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
            *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
          }
          fVar66 = (*(float *)((long)unaff_x19 + 0x234) - fVar61) * 0.5;
          if (fVar66 <= DAT_028aa298) {
            fVar66 = DAT_028aa298;
          }
          *(float *)(unaff_x19 + 0x47) = fVar61;
          fVar61 = (fVar61 + fVar66) * 20.0 + 0.5;
          fVar66 = DAT_02958220;
          if (fVar61 != INFINITY) {
            fVar66 = (float)(int)fVar61 / 20.0;
          }
          if (fVar62 <= fVar66) {
            fVar66 = fVar62;
          }
          goto LAB_02495fd8;
        }
      }
      *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
      if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
        uVar20 = FUN_0176eb1c(in_stack_00000038,0);
        uVar21 = FUN_017840ac(in_stack_00000040,0);
        uVar20 = FUN_0160073c(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__,
                              uVar20,*(undefined8 *)
                                      Method_UnityEngine_GameObject_GetComponents<Component>__,
                              uVar21,0);
        if (*(int *)(*plVar46 + 0xe0) == 0) {
          thunk_FUN_00d32864(*plVar46);
        }
        FUN_02660dac(uVar20,0);
      }
      if ((*in_stack_00000148 == 0) || ((*in_stack_00000148 == 1 && (unaff_w25 == 3)))) {
        (**(code **)(*unaff_x19 + 0x948))();
        goto LAB_02496098;
      }
      lVar28 = *plVar42;
      if (*(int *)(lVar28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar28 = *plVar42;
      }
      puVar10 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      lVar28 = **(long **)(lVar28 + 0xb8);
      if (lVar28 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      iVar18 = *(int *)(lVar28 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
      if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x60), lVar28 == 0))
      goto LAB_0249920c;
      if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar28 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      FUN_024e7d94(lVar28 + 0x20,0,0);
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      puVar11 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
      iVar14 = (int)unaff_x19[0x4d];
      fStack00000000000000c8 =
           **(float **)
             (*(long *)
               Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
             0xb8);
      _in_stack_000000c0 =
           *(undefined8 *)
            (*(float **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8) + 1);
      lVar28 = unaff_x19[0xe2];
      _in_stack_00000090 = _in_stack_000000c0;
      fStack0000000000000098 = fStack00000000000000c8;
      if (iVar14 < 0x401) {
        if (iVar14 == 0x100) {
          if (lVar28 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar28 + 0x18) < 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar20 = *(undefined8 *)(lVar28 + 0x30);
          if ((int)unaff_x19[0x5b] == 5) {
            if ((*in_stack_00000150 == 0) ||
               (lVar31 = *(long *)(*in_stack_00000150 + 0x58), lVar31 == 0)) goto LAB_0249920c;
            if (*(uint *)(lVar31 + 0x18) <= uStack000000000000002c)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            fVar61 = *(float *)(lVar31 + (long)(int)uStack000000000000002c * 0x14 + 0x28);
          }
          else {
            fVar61 = *(float *)(unaff_x19 + 0x96);
          }
          fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar28 + 0x2c);
          fVar61 = (0.0 - fVar61) - fStack0000000000000020;
        }
        else if (iVar14 == 0x200) {
          if (lVar28 == 0) goto LAB_0249920c;
          if ((*(int *)(lVar28 + 0x18) == 1) || (*(int *)(lVar28 + 0x18) == 0))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fStack0000000000000098 = (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
          uVar20 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar28 + 0x24) +
                            (float)*(undefined8 *)(lVar28 + 0x30)) * 0.5);
          if ((int)unaff_x19[0x5b] == 5) {
            if ((*in_stack_00000150 == 0) ||
               (lVar28 = *(long *)(*in_stack_00000150 + 0x58), lVar28 == 0)) goto LAB_0249920c;
            if (*(uint *)(lVar28 + 0x18) <= uStack000000000000002c)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar28 = lVar28 + (long)(int)uStack000000000000002c * 0x14;
            fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
            fVar61 = ((fStack0000000000000020 + *(float *)(lVar28 + 0x28) +
                      *(float *)(lVar28 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
          }
          else {
            fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
            fVar61 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8) -
                     fStack0000000000000024) * -0.5 + 0.0;
          }
        }
        else {
          if (iVar14 != 0x400) goto LAB_024965d0;
          if (lVar28 == 0) goto LAB_0249920c;
          if (*(int *)(lVar28 + 0x18) == 0)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar20 = *(undefined8 *)(lVar28 + 0x24);
          if ((int)unaff_x19[0x5b] == 5) {
            if ((*in_stack_00000150 == 0) ||
               (lVar31 = *(long *)(*in_stack_00000150 + 0x58), lVar31 == 0)) goto LAB_0249920c;
            if (*(uint *)(lVar31 + 0x18) <= uStack000000000000002c)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            in_stack_000017b8 = *(float *)(lVar31 + (long)(int)uStack000000000000002c * 0x14 + 0x30)
            ;
          }
          fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar28 + 0x20);
          fVar61 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
        }
        _in_stack_00000090 = CONCAT44((float)((ulong)uVar20 >> 0x20) + 0.0,(float)uVar20 + fVar61);
      }
      else if (iVar14 == 0x800) {
        if (lVar28 == 0) goto LAB_0249920c;
        if ((*(int *)(lVar28 + 0x18) == 1) || (*(int *)(lVar28 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar61 = ((float)*(undefined8 *)(lVar28 + 0x24) + (float)*(undefined8 *)(lVar28 + 0x30)) *
                 0.5;
        fStack0000000000000098 =
             fStack0000000000000030 + 0.0 +
             (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
        _in_stack_00000090 =
             CONCAT44(((float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20)) * 0.5 + 0.0,
                      fVar61 + 0.0);
      }
      else {
        if (iVar14 == 0x1000) {
          if (lVar28 == 0) goto LAB_0249920c;
          if ((*(int *)(lVar28 + 0x18) == 1) || (*(int *)(lVar28 + 0x18) == 0))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar61 = (float)*(undefined8 *)(lVar28 + 0x24) + (float)*(undefined8 *)(lVar28 + 0x30);
          fVar62 = (float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20);
          fStack0000000000000020 =
               fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) + *(float *)(unaff_x19 + 0x9b);
          fStack0000000000000098 =
               fStack0000000000000030 + 0.0 +
               (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
        }
        else {
          if (iVar14 != 0x2000) goto LAB_024965d0;
          if (lVar28 == 0) goto LAB_0249920c;
          if ((*(int *)(lVar28 + 0x18) == 1) || (*(int *)(lVar28 + 0x18) == 0))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar61 = (float)*(undefined8 *)(lVar28 + 0x24) + (float)*(undefined8 *)(lVar28 + 0x30);
          fVar62 = (float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20);
          fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
          fStack0000000000000098 =
               fStack0000000000000030 + 0.0 +
               (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
        }
        fVar61 = fVar61 * 0.5;
        _in_stack_00000090 =
             CONCAT44(fVar62 * 0.5 + 0.0,
                      fVar61 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) * 0.5));
      }
LAB_024965d0:
      if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
      uVar20 = FUN_0285a188(unaff_x19[0xe4],0);
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar10);
      }
      uVar22 = FUN_0268b4e0(uVar20,0,0);
      lVar28 = FUN_024c933c();
      if (lVar28 == 0) goto LAB_0249920c;
      FUN_026a125c(lVar28,0);
      *(float *)(unaff_x19 + 0xe1) = fVar61;
      if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
      iVar14 = FUN_02859798(unaff_x19[0xe4],0);
      if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
      fVar62 = (float)FUN_028598f0(unaff_x19[0xe4],0);
      __x = DAT_028aa048;
      dVar56 = modf(DAT_028aa048,(double *)&stack0x00000880);
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
        fVar55 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
        if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
          fVar55 = fVar55 + 1.0;
        }
      }
      else {
        fVar55 = 255.0;
      }
      dVar56 = modf(__x,(double *)&stack0x00000880);
      if (dVar56 == 0.5) {
        fVar49 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
        if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
          fVar49 = fVar49 + 1.0;
        }
      }
      else {
        fVar49 = 255.0;
      }
      dVar56 = modf(__x,(double *)&stack0x00000880);
      if (dVar56 == 0.5) {
        fVar68 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
        if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
          fVar68 = fVar68 + 1.0;
        }
      }
      else {
        fVar68 = 255.0;
      }
      modf(__x,(double *)&stack0x00000880);
      modf(__x,(double *)&stack0x00000880);
      modf(__x,(double *)&stack0x00000880);
      modf(__x,(double *)&stack0x00000880);
      if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_037825d3 == '\0') {
        thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
        DAT_037825d3 = '\x01';
      }
      lVar28 = *(long *)puVar11;
      if (*(int *)(lVar28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar28 = *(long *)puVar11;
      }
      puVar29 = *(undefined4 **)(lVar28 + 0xb8);
      uVar57 = (ulong)(uint)puVar29[1];
      uVar58 = (ulong)(uint)puVar29[2];
      uVar60 = (ulong)(uint)puVar29[3];
      UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                (*puVar29,uVar57,uVar58,uVar60,&stack0x00001790,0x4000ffff,0);
      if (*(int *)(*plVar42 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar28 = *in_stack_00000150;
      if (lVar28 == 0) goto LAB_0249920c;
      uVar15 = *in_stack_00000148;
      if ((int)uVar15 < 1) {
        fStack00000000000000ac = 0.0;
        iVar18 = 0;
        goto LAB_02498c58;
      }
      lVar28 = *(long *)(lVar28 + 0x38);
      fVar61 = ABS(fVar61);
      fVar48 = 1.0;
      if ((uVar22 & 1) == 0) {
        fVar48 = fVar61;
      }
      if (lVar28 == 0) goto LAB_0249920c;
      bVar9 = false;
      bVar12 = false;
      bVar8 = false;
      bVar13 = false;
      uStack0000000000000060 =
           (int)fVar66 & 0xffU | ((int)fVar55 & 0xffU) << 8 | ((int)fVar49 & 0xffU) << 0x10 |
           (int)fVar68 << 0x18;
      fStack00000000000000d0 = *(float *)(*(long *)(*plVar42 + 0xb8) + 0x15a8);
      fStack00000000000000cc = 0.0;
      fStack0000000000000058 = fStack00000000000000b0;
      _bStack000000000000005c = 0.0;
      fStack0000000000000034 = 0.0;
      fStack0000000000000088 = 0.0;
      fStack0000000000000030 = 0.0;
      uVar19 = 0;
      iVar47 = 0;
      lVar31 = 0x2e0;
      fVar55 = 0.0;
      fVar66 = 0.0;
      fStack00000000000000ac = 0.0;
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
      uVar36 = 1;
      goto LAB_02496a50;
    }
    goto LAB_0249920c;
  }
LAB_02494950:
  if (unaff_w25 == 0xad) {
    if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
    goto LAB_0249920c;
    if (*in_stack_00000148 < *(uint *)(lVar28 + 0x18)) {
      *(undefined1 *)(lVar28 + (int)*in_stack_00000148 * unaff_x27 + 0x194) = 0;
      goto LAB_02494abc;
    }
  }
  else if (unaff_w25 == 9) {
    lVar28 = *in_stack_00000150;
    if ((lVar28 == 0) || (lVar31 = *(long *)(lVar28 + 0x38), lVar31 == 0)) goto LAB_0249920c;
    uVar19 = *in_stack_00000148;
    if (uVar19 < *(uint *)(lVar31 + 0x18)) {
      *(undefined1 *)(lVar31 + (int)uVar19 * unaff_x27 + 0x194) = 0;
      *(uint *)((long)unaff_x19 + 0x49c) = uVar19;
      lVar31 = *(long *)(lVar28 + 0x50);
      if (lVar31 == 0) goto LAB_0249920c;
      if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar31 + 0x18)) {
        lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        *(int *)(lVar31 + 0x2c) = *(int *)(lVar31 + 0x2c) + 1;
        goto LAB_024949c4;
      }
    }
  }
  else {
    if (*(int *)((long)unaff_x19 + 0x63c) == 1) {
      (**(code **)(*unaff_x19 + 0x8c8))();
    }
    else if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
      (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000128,unaff_d14);
    }
    uVar19 = *in_stack_00000148;
    if (((uint)fStack0000000000000058 & 1) != 0) {
      *(uint *)(in_stack_00000070 + 0x1f0) = uVar19;
    }
    *(uint *)((long)unaff_x19 + 0x49c) = uVar19;
    *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
    if ((unaff_x19[0x6c] == 0) || (lVar28 = *(long *)(unaff_x19[0x6c] + 0x50), lVar28 == 0))
    goto LAB_0249920c;
    if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar28 + 0x18)) {
      lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      fStack0000000000000058 = 0.0;
      *(float *)(lVar28 + 0x60) = unaff_s8;
      *(float *)(lVar28 + 100) = unaff_s9;
      goto LAB_02494abc;
    }
  }
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
code_r0x02492440:
  *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
  uVar22 = FUN_024d0688();
  if (((uVar22 & 1) != 0) &&
     (in_stack_00001788 = in_stack_0000176c, unaff_w25 = uVar15,
     *(int *)((long)unaff_x19 + 0x63c) == 0)) goto LAB_02492630;
UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor:
  if ((unaff_x19[0x6c] == 0) || (lVar28 = *(long *)(unaff_x19[0x6c] + 0x38), lVar28 == 0))
  goto LAB_0249920c;
  uVar19 = *in_stack_00000148;
  if (*(uint *)(lVar28 + 0x18) <= uVar19)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar44 = (long)(int)uVar19;
  cVar27 = *(char *)(lVar28 + lVar44 * unaff_x27 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
  lVar31 = unaff_x19[0x23];
  if ((uint)in_stack_000017a8 == uVar19) {
    uVar15 = (uint)((ulong)in_stack_000017a8 >> 0x20);
    unaff_w20 = 1;
    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
    if (uVar15 == 0x2026) {
      lVar23 = unaff_x19[0xc9];
      lVar28 = lVar28 + lVar44 * unaff_x27;
      *(undefined4 *)(lVar28 + 0x2c) = 0;
      *(long *)(lVar28 + 0x30) = lVar23;
      *(long *)(lVar28 + 0x38) = unaff_x19[0xca];
      *(long *)(lVar28 + 0x50) = unaff_x19[0xcb];
      *(int *)(lVar28 + 0x58) = (int)unaff_x19[0xcc];
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      in_stack_000017a8 = CONCAT44(3,uVar19 + 1);
    }
    else if (uVar15 == 3) {
      if ((*in_stack_00000138 == 0) || (lVar23 = FUN_024b11ac(*in_stack_00000138,0), lVar23 == 0))
      goto LAB_0249920c;
      FUN_01299bc0(lVar23,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
      if (*(uint *)(lVar28 + 0x18) <= uVar19)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      unaff_w20 = 1;
      *(ulong *)(lVar28 + lVar44 * unaff_x27 + 0x30) = CONCAT44(in_stack_00000884,in_stack_00000880)
      ;
      uVar19 = *(uint *)((long)unaff_x19 + 0x48c);
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
    }
  }
  else {
    unaff_w20 = 0;
  }
  unaff_w25 = uVar15;
  if (((int)uVar19 < *(int *)((long)unaff_x19 + 0x31c)) && (uVar15 != 3)) {
    if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar28 + 0x18) <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar28 = lVar28 + (long)(int)uVar19 * (long)iVar18;
    *(undefined1 *)(lVar28 + 0x194) = 0;
    *(undefined2 *)(lVar28 + 0x20) = 0x200b;
    *(undefined4 *)(lVar28 + 100) = 0;
    *in_stack_00000148 = uVar19 + 1;
    goto LAB_02492630;
  }
  iVar14 = *(int *)((long)unaff_x19 + 0x63c);
  fStack00000000000000f4 = unaff_s12;
  if (iVar14 == 0) {
    uVar19 = *(uint *)((long)unaff_x19 + 0x254);
    if ((uVar19 >> 4 & 1) == 0) {
      if ((uVar19 >> 3 & 1) == 0) {
        if ((uVar19 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar22 = FUN_016f92d4(uVar15,0);
          if ((uVar22 & 1) != 0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar15 = FUN_016f95a8(uVar15,0);
            uVar15 = uVar15 & 0xffff;
            fStack00000000000000f4 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar22 = FUN_016f9218(uVar15,0);
        if ((uVar22 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar15 = FUN_016f9724(uVar15,0);
          goto LAB_02492a0c;
        }
      }
    }
    else {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar22 = FUN_016f92d4(uVar15,0);
      if ((uVar22 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar15 = FUN_016f95a8(uVar15,0);
LAB_02492a0c:
        uVar15 = uVar15 & 0xffff;
      }
    }
    iVar14 = *(int *)((long)unaff_x19 + 0x63c);
    unaff_w25 = uVar15;
    if (iVar14 == 0) goto LAB_02492a20;
LAB_0249265c:
    if (iVar14 == 1) {
      if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar28 + (int)*in_stack_00000148 * unaff_x27;
      lVar44 = *(long *)(lVar28 + 0x40);
      unaff_x19[0xd2] = lVar44;
      *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar28 + 0x48);
      if ((lVar44 == 0) || (lVar28 = FUN_024ebfa0(lVar44,0), lVar28 == 0)) goto LAB_0249920c;
      FUN_0132138c(lVar28,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                   *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
      lVar44 = CONCAT44(in_stack_00000884,in_stack_00000880);
      if (lVar44 == 0) goto LAB_02492630;
      if (unaff_w25 == 0x3c) {
        unaff_w25 = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
      }
      else {
        lVar28 = *plVar42;
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar28 = *plVar42;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1b4) = *(undefined4 *)(*(long *)(lVar28 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar61 = *(float *)(unaff_x19 + 0x3c);
      memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
      iVar14 = FUN_026fd110(&stack0x00001700,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      memmove(&stack0x00001700,(void *)(*in_stack_00000138 + 0x50),0x60);
      fVar66 = (float)FUN_026fd120(&stack0x00001700,0);
      fVar62 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar62 = unaff_s12;
      }
      if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
      fVar62 = (fVar61 / (float)iVar14) * fVar66 * fVar62;
      iVar14 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
      fVar61 = *(float *)(unaff_x19 + 0x3c);
      if (iVar14 < 1) {
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        iVar14 = FUN_026fd110(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar66 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
        fVar55 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar55 = unaff_s12;
        }
        if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
        fVar68 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
        if (*(long *)(lVar44 + 0x20) == 0) goto LAB_0249920c;
        FUN_026fd62c(&stack0x00000880,*(long *)(lVar44 + 0x20),0);
        fVar48 = (float)FUN_026fd45c(&stack0x000016e0,0);
        if (*(long *)(lVar44 + 0x20) == 0) goto LAB_0249920c;
        fVar50 = *(float *)(lVar44 + 0x2c);
        fVar69 = (float)FUN_026fd668(*(long *)(lVar44 + 0x20),0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar49 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar63 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar65 = *(float *)((long)unaff_x19 + 0x3fc);
        fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
        if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
        fStack0000000000000134 = fVar62 * fVar63 * fVar65 * fStack0000000000000134;
        fVar55 = (fVar61 / (float)iVar14) * fVar66 * fVar55;
        param_5 = fVar55 * (fVar68 / fVar48) * fVar50 * fVar69;
        fVar55 = fVar55 / param_5;
        fVar49 = fVar55 * fVar49;
        fVar61 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
        fVar55 = fVar55 * fVar61;
      }
      else {
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        iVar14 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar66 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (*(long *)(lVar44 + 0x20) == 0) goto LAB_0249920c;
        fVar68 = *(float *)(lVar44 + 0x2c);
        fVar55 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar55 = 1.0;
        }
        fVar48 = (float)FUN_026fd668(*(long *)(lVar44 + 0x20),0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar49 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar50 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar69 = *(float *)((long)unaff_x19 + 0x3fc);
        fStack0000000000000134 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fStack0000000000000134 = fVar62 * fVar50 * fVar69 * fStack0000000000000134;
        param_5 = (fVar61 / (float)iVar14) * fVar66 * fVar55 * fVar68 * fVar48;
        fVar55 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
      }
      lVar28 = unaff_x19[0x6c];
      unaff_x19[200] = lVar44;
      if ((lVar28 == 0) || (lVar44 = *(long *)(lVar28 + 0x38), lVar44 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar44 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar44 = lVar44 + (int)*in_stack_00000148 * unaff_x27;
      *(undefined4 *)(lVar44 + 0x2c) = 1;
      *(float *)(lVar44 + 0x160) = param_5;
      in_stack_00000128 = 0.0;
      *(long *)(lVar44 + 0x40) = unaff_x19[0xd2];
      *(long *)(lVar44 + 0x38) = unaff_x19[0x1f];
      *(int *)(lVar44 + 0x58) = (int)unaff_x19[0x23];
      *(int *)(unaff_x19 + 0x23) = (int)lVar31;
      goto LAB_02492e14;
    }
    lVar28 = *in_stack_00000150;
    fVar61 = 0.0;
    if (unaff_w25 != 3 && unaff_w25 != 0xad) {
      fVar61 = param_5;
    }
    fStack0000000000000134 = 0.0;
    if (lVar28 == 0) goto LAB_0249920c;
    fVar49 = 0.0;
    fVar55 = 0.0;
  }
  else {
    if (iVar14 != 0) goto LAB_0249265c;
LAB_02492a20:
    if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
    goto LAB_0249920c;
    uVar19 = *in_stack_00000148;
    uVar15 = *(uint *)(lVar28 + 0x18);
    if (uVar15 <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar31 = *(long *)(lVar28 + (int)uVar19 * unaff_x27 + 0x30);
    unaff_x19[200] = lVar31;
    if (lVar31 == 0) goto LAB_02492630;
    lVar44 = lVar28 + (int)uVar19 * unaff_x27;
    lVar31 = *(long *)(lVar44 + 0x38);
    unaff_x19[0x1f] = lVar31;
    unaff_x19[0x22] = *(long *)(lVar44 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar44 + 0x58);
    if (unaff_w20 == 0) {
LAB_02492ab4:
      if (lVar31 == 0) goto LAB_0249920c;
      fVar61 = *(float *)(unaff_x19 + 0x3c);
      iVar14 = FUN_026fd110(lVar31 + 0x50,0);
      lVar28 = unaff_x19[0x1f];
    }
    else {
      lVar44 = unaff_x19[0x8e];
      if (lVar44 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar44 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if ((*(int *)(lVar44 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
         (uVar19 == *(uint *)(unaff_x19 + 0x92))) goto LAB_02492ab4;
      if (uVar15 <= uVar19 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (lVar31 == 0) goto LAB_0249920c;
      fVar61 = *(float *)(lVar28 + (long)(int)(uVar19 - 1) * (long)iVar18 + 0x60);
      iVar14 = FUN_026fd110(lVar31 + 0x50,0);
      lVar28 = *in_stack_00000138;
    }
    if (lVar28 == 0) goto LAB_0249920c;
    fVar66 = (float)FUN_026fd120(lVar28 + 0x50,0);
    fVar62 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar62 = unaff_s12;
    }
    fVar55 = 0.0;
    fVar49 = 0.0;
    if ((unaff_w20 & unaff_w25 == 0x2026) == 0) {
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar49 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar55 = (float)FUN_026fd180(*in_stack_00000138 + 0x50,0);
    }
    lVar28 = unaff_x19[200];
    if ((lVar28 == 0) || (*(long *)(lVar28 + 0x20) == 0)) goto LAB_0249920c;
    fVar68 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar48 = *(float *)(lVar28 + 0x2c);
    param_5 = (float)FUN_026fd668(*(long *)(lVar28 + 0x20),0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar50 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar69 = *(float *)((long)unaff_x19 + 0x3fc);
    fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
    lVar28 = unaff_x19[0x6c];
    if ((lVar28 == 0) || (lVar31 = *(long *)(lVar28 + 0x38), lVar31 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar31 = lVar31 + (int)*in_stack_00000148 * unaff_x27;
    *(undefined4 *)(lVar31 + 0x2c) = 0;
    fVar62 = ((fStack00000000000000f4 * fVar61) / (float)iVar14) * fVar66 * fVar62;
    param_5 = fVar62 * fVar68 * fVar48 * param_5;
    *(float *)(lVar31 + 0x160) = param_5;
    uVar15 = *(uint *)(unaff_x19 + 0x23);
    fStack0000000000000134 = fVar62 * fVar50 * fVar69 * fStack0000000000000134;
    if (uVar15 == 0) {
      in_stack_00000128 = *(float *)(unaff_x19 + 0xc2);
    }
    else {
      lVar31 = unaff_x19[0xe0];
      if (lVar31 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar31 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = *(long *)(lVar31 + (long)(int)uVar15 * 8 + 0x20);
      if (lVar31 == 0) goto LAB_0249920c;
      in_stack_00000128 = *(float *)(lVar31 + 0x104);
    }
LAB_02492e14:
    unaff_s12 = 1.0;
    fVar61 = 0.0;
    if (unaff_w25 != 3 && unaff_w25 != 0xad) {
      fVar61 = param_5;
    }
  }
  lVar28 = *(long *)(lVar28 + 0x38);
  if (lVar28 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar28 = lVar28 + (int)*in_stack_00000148 * unaff_x27;
  *(short *)(lVar28 + 0x20) = (short)unaff_w25;
  *(int *)(lVar28 + 0x60) = (int)unaff_x19[0x3c];
  *(undefined4 *)(lVar28 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
  if ((unaff_x19[0x6c] == 0) || (lVar28 = *(long *)(unaff_x19[0x6c] + 0x38), lVar28 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(int *)(lVar28 + (int)*in_stack_00000148 * unaff_x27 + 0x168) = (int)unaff_x19[0x2a];
  if ((unaff_x19[0x6c] == 0) || (lVar28 = *(long *)(unaff_x19[0x6c] + 0x38), lVar28 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(undefined4 *)(lVar28 + (int)*in_stack_00000148 * unaff_x27 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x154);
  if ((unaff_x19[0x6c] == 0) || (lVar28 = *(long *)(unaff_x19[0x6c] + 0x38), lVar28 == 0))
  goto LAB_0249920c;
  uVar15 = *in_stack_00000148;
  FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
               *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
  if (*(uint *)(lVar28 + 0x18) <= uVar15)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar28 = lVar28 + (int)uVar15 * unaff_x27;
  *(undefined4 *)(lVar28 + 0x18c) = in_stack_00000890;
  *(undefined8 *)(lVar28 + 0x184) = in_stack_00000888;
  *(ulong *)(lVar28 + 0x17c) = CONCAT44(in_stack_00000884,in_stack_00000880);
  if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(undefined4 *)(lVar28 + (int)*in_stack_00000148 * unaff_x27 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x254);
  if ((unaff_x19[200] == 0) || (lVar28 = *(long *)(unaff_x19[200] + 0x20), lVar28 == 0))
  goto LAB_0249920c;
  FUN_026fd62c(&stack0x00000bf8,lVar28,0);
  puVar10 = 
  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__;
  unaff_x28 = &stack0x00000880;
  if ((int)unaff_w25 < 0x10000) {
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar15 = FUN_016f68bc(unaff_w25,0);
    unaff_w29 = uVar15 & 1;
  }
  else {
    unaff_w29 = 0;
  }
  fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
  *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
    fStack00000000000000ac = 0.0;
    fVar66 = 0.0;
    fVar62 = 0.0;
  }
  else {
    if (unaff_x19[200] == 0) goto LAB_0249920c;
    uVar19 = *in_stack_00000148;
    uVar15 = *(uint *)(unaff_x19[200] + 0x28);
    if ((int)uVar19 < (int)in_stack_00000078._4_4_) {
      if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= uVar19 + 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = *(long *)(lVar28 + (long)(int)(uVar19 + 1) * (long)iVar18 + 0x30);
      if ((((lVar28 == 0) || (*in_stack_00000138 == 0)) ||
          (lVar31 = *(long *)(*in_stack_00000138 + 0x128), lVar31 == 0)) ||
         (lVar31 = *(long *)(lVar31 + 0x18), lVar31 == 0)) goto LAB_0249920c;
      in_stack_00000880 = uVar15 | *(int *)(lVar28 + 0x28) << 0x10;
      uVar22 = FUN_0129eff4(lVar31,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      uVar71 = 0;
      if ((uVar22 & 1) == 0) {
        fStack00000000000000ac = 0.0;
        fVar66 = 0.0;
        fVar62 = 0.0;
      }
      else {
        if (in_stack_000016d8 == 0) goto LAB_0249920c;
        fVar62 = *(float *)(in_stack_000016d8 + 0x14);
        fVar66 = *(float *)(in_stack_000016d8 + 0x18);
        fStack00000000000000ac = *(float *)(in_stack_000016d8 + 0x1c);
        uVar71 = *(undefined4 *)(in_stack_000016d8 + 0x20);
        if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
          fStack00000000000000cc = 0.0;
        }
      }
      uVar19 = *in_stack_00000148;
    }
    else {
      uVar71 = 0;
      fStack00000000000000ac = 0.0;
      fVar66 = 0.0;
      fVar62 = 0.0;
    }
    if (0 < (int)uVar19) {
      if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= (uint)((long)(int)uVar19 + -1))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = *(long *)(lVar28 + ((long)(int)uVar19 + -1) * unaff_x27 + 0x30);
      if (((lVar28 == 0) || (*in_stack_00000138 == 0)) ||
         ((lVar31 = *(long *)(*in_stack_00000138 + 0x128), lVar31 == 0 ||
          (lVar31 = *(long *)(lVar31 + 0x18), lVar31 == 0)))) goto LAB_0249920c;
      in_stack_00000880 = *(uint *)(lVar28 + 0x28) | uVar15 << 0x10;
      uVar22 = FUN_0129eff4(lVar31,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      if ((uVar22 & 1) != 0) {
        if ((in_stack_000016d8 == 0) ||
           (fVar62 = (float)FUN_024bb1bc(fVar62,fVar66,fStack00000000000000ac,uVar71,
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
    *(float *)((long)unaff_x19 + 0x2f4) = fStack00000000000000ac;
  }
  if ((char)unaff_x19[0x1d] != '\0') {
    fVar48 = *(float *)(unaff_x19 + 199);
    fVar68 = (float)FUN_026fd474(&stack0x00001770,0);
    fVar48 = fVar48 - fVar61 * fVar68 * (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc));
    *(float *)(unaff_x19 + 199) = fVar48;
    if ((unaff_w29 != 0) || (unaff_w25 == 0x200b)) {
      *(float *)(unaff_x19 + 199) =
           fVar48 - fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
    }
  }
  fVar68 = *(float *)(unaff_x19 + 0x55);
  fStack0000000000000080 = 0.0;
  if (fVar68 != 0.0) {
    fVar48 = (float)FUN_026fd454(&stack0x00001770,0);
    fVar50 = (float)FUN_026fd464(&stack0x00001770,0);
    fStack0000000000000080 =
         (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
         (fVar68 * 0.5 - fVar61 * (fVar48 * 0.5 + fVar50));
    *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fStack0000000000000080;
  }
  if (((cVar27 == '\0') && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
    lVar28 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar22 = FUN_02681b9c(lVar28,0,0);
    fVar48 = 0.0;
    if ((uVar22 & 1) != 0) {
      lVar28 = unaff_x19[0x22];
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar28 == 0) goto LAB_0249920c;
      uVar22 = FUN_0267e1d8(lVar28,*(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
      fVar48 = 0.0;
      if ((uVar22 & 1) != 0) {
        lVar28 = unaff_x19[0x22];
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar28 == 0) goto LAB_0249920c;
        fVar68 = (float)FUN_0267f610(lVar28,*(undefined4 *)
                                             (*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
        if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) goto LAB_0249920c;
        fVar50 = *(float *)(*in_stack_00000138 + 0x1b0);
        fVar48 = (float)FUN_0267f610(unaff_x19[0x22],
                                     *(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xcc),0);
        fVar48 = fVar48 * fVar68 * fVar50 * 0.25;
        if (fVar68 < in_stack_00000128 + fVar48) {
          in_stack_00000128 = fVar68 - fVar48;
        }
      }
    }
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    in_stack_000000c0 = *(float *)(*in_stack_00000138 + 0x1b4);
  }
  else {
    lVar28 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar22 = FUN_02681b9c(lVar28,0,0);
    in_stack_000000c0 = 0.0;
    if ((uVar22 & 1) != 0) {
      lVar28 = unaff_x19[0x22];
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar28 == 0) goto LAB_0249920c;
      uVar22 = FUN_0267e1d8(lVar28,*(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
      if ((uVar22 & 1) != 0) {
        lVar28 = unaff_x19[0x22];
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar28 == 0) goto LAB_0249920c;
        uVar22 = FUN_0267e1d8(lVar28,*(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xcc),0);
        if ((uVar22 & 1) != 0) {
          lVar28 = unaff_x19[0x22];
          if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (lVar28 == 0) goto LAB_0249920c;
          fVar68 = (float)FUN_0267f610(lVar28,*(undefined4 *)
                                               (*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
          if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) goto LAB_0249920c;
          fVar50 = *(float *)(*in_stack_00000138 + 0x1a8);
          fVar48 = (float)FUN_0267f610(unaff_x19[0x22],
                                       *(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xcc),0)
          ;
          fVar48 = fVar48 * fVar68 * fVar50 * 0.25;
          if (fVar68 < in_stack_00000128 + fVar48) {
            in_stack_00000128 = fVar68 - fVar48;
          }
          goto LAB_024934bc;
        }
      }
    }
    fVar48 = 0.0;
  }
LAB_024934bc:
  fVar63 = *(float *)(unaff_x19 + 199);
  fVar68 = (float)FUN_026fd464(&stack0x00001770,0);
  fVar63 = fVar63 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar61 * (fVar62 + ((fVar68 - in_stack_00000128) - fVar48));
  fVar62 = (float)FUN_026fd46c(&stack0x00001770,0);
  fVar50 = *(float *)((long)unaff_x19 + 0x614) +
           ((fStack0000000000000134 + fVar61 * (fVar66 + in_stack_00000128 + fVar62)) -
           *(float *)(unaff_x19 + 0x9a));
  fVar62 = (float)FUN_026fd45c(&stack0x00001770,0);
  fVar69 = fVar50 - fVar61 * (in_stack_00000128 + in_stack_00000128 + fVar62);
  fVar62 = (float)FUN_026fd454(&stack0x00001770,0);
  fVar68 = fVar63 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar61 * (fVar48 + fVar48 + in_stack_00000128 + in_stack_00000128 + fVar62);
  fVar62 = fVar63;
  fVar66 = fVar68;
  if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (cVar27 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
    fVar65 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
    fVar62 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar53 = fVar65 * fVar61 * (fVar48 + in_stack_00000128 + fVar62);
    fVar62 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar66 = (float)FUN_026fd45c(&stack0x00001770,0);
    fVar50 = fVar50 + 0.0;
    fVar69 = fVar69 + 0.0;
    fVar65 = fVar65 * fVar61 * (((fVar62 - fVar66) - in_stack_00000128) - fVar48);
    fVar66 = fVar68 + fVar65;
    fVar62 = fVar63 + fVar53;
    fVar52 = (fVar53 - fVar65) * 0.5;
    fVar63 = (fVar63 + fVar65) - fVar52;
    fVar68 = (fVar68 + fVar53) - fVar52;
    fVar62 = fVar62 - fVar52;
    fVar66 = fVar66 - fVar52;
  }
  in_stack_00000100 = (ulong)(uint)fVar61;
  if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
    fVar53 = 0.0;
    fVar54 = 0.0;
    fVar64 = 0.0;
    fVar52 = 0.0;
    fVar72 = fVar69;
    fVar65 = fVar50;
    fStack00000000000000e8 = fVar62;
    fStack00000000000000ec = fVar63;
  }
  else {
    thunk_FUN_026935f0(_uStack0000000000000060,0);
    fVar67 = (fVar68 + fVar63) * 0.5;
    fVar70 = (fVar69 + fVar50) * 0.5;
    fVar50 = fVar50 - fVar70;
    fVar52 = 0.0;
    fVar65 = fVar50;
    fVar51 = (float)FUN_02692df0(fVar62 - fVar67,_uStack0000000000000060,0);
    fVar52 = fVar52 + 0.0;
    fVar69 = fVar69 - fVar70;
    fVar53 = 0.0;
    fVar62 = fVar69;
    fVar63 = (float)FUN_02692df0(fVar63 - fVar67,_uStack0000000000000060,0);
    fVar53 = fVar53 + 0.0;
    fVar64 = 0.0;
    fVar68 = (float)FUN_02692df0(fVar68 - fVar67,_uStack0000000000000060,0);
    fVar68 = fVar67 + fVar68;
    fVar50 = fVar70 + fVar50;
    fVar64 = fVar64 + 0.0;
    fVar54 = 0.0;
    fVar66 = (float)FUN_02692df0(fVar66 - fVar67,_uStack0000000000000060,0);
    fVar66 = fVar67 + fVar66;
    fVar69 = fVar70 + fVar69;
    fVar54 = fVar54 + 0.0;
    fVar72 = fVar70 + fVar62;
    fVar65 = fVar70 + fVar65;
    fStack00000000000000e8 = fVar67 + fVar51;
    fStack00000000000000ec = fVar67 + fVar63;
  }
  if (*in_stack_00000150 == 0) goto LAB_0249920c;
  lVar28 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_d13 = (ulong)(uint)fVar61;
  if (lVar28 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar28 = lVar28 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar28 + 0x120) = fVar72;
  *(float *)(lVar28 + 0x11c) = fStack00000000000000ec;
  *(float *)(lVar28 + 0x124) = fVar53;
  if (*in_stack_00000150 == 0) goto LAB_0249920c;
  lVar28 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_s12 = 1.0;
  if (lVar28 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar28 = lVar28 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar28 + 0x114) = fVar65;
  *(float *)(lVar28 + 0x110) = fStack00000000000000e8;
  *(float *)(lVar28 + 0x118) = fVar52;
  if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar28 = lVar28 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar28 + 0x128) = fVar68;
  *(float *)(lVar28 + 300) = fVar50;
  *(float *)(lVar28 + 0x130) = fVar64;
  if (*in_stack_00000150 == 0) goto LAB_0249920c;
  lVar28 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_d14 = (ulong)(uint)fVar48;
  if (lVar28 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar28 = lVar28 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar28 + 0x134) = fVar66;
  *(float *)(lVar28 + 0x138) = fVar69;
  *(float *)(lVar28 + 0x13c) = fVar54;
  if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
  goto LAB_0249920c;
  uVar15 = *in_stack_00000148;
  unaff_x21 = (long)(int)uVar15;
  if (*(uint *)(lVar28 + 0x18) <= uVar15)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar31 = lVar28 + unaff_x21 * unaff_x27;
  *(int *)(lVar31 + 0x140) = (int)unaff_x19[199];
  fVar66 = *(float *)(unaff_x19 + 0x9a);
  param_2 = (ulong)(uint)fVar66;
  fVar62 = *(float *)((long)unaff_x19 + 0x614);
  *(float *)(lVar31 + 0x15c) = (fVar68 - fStack00000000000000ec) / (fVar65 - fVar72);
  *(float *)(lVar31 + 0x14c) = (fStack0000000000000134 - fVar66) + fVar62;
  fVar49 = fVar49 * fVar61;
  if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
    fVar49 = fVar49 / fStack00000000000000f4;
    fVar55 = (fVar55 * fVar61) / fStack00000000000000f4;
  }
  else {
    fVar55 = fVar55 * fVar61;
  }
  unaff_w24 = *(uint *)(unaff_x19 + 0x92);
  bVar12 = unaff_w29 != 0;
  fVar49 = fVar62 + fVar49;
  bVar13 = uVar15 != unaff_w24;
  if (bVar13 && bVar12) {
    fVar62 = *(float *)(unaff_x19 + 0x98);
    lVar28 = lVar28 + unaff_x21 * unaff_x27;
    *(float *)(lVar28 + 0x154) = fVar62;
    fVar55 = *(float *)((long)unaff_x19 + 0x4c4);
    *(float *)(lVar28 + 0x148) = fVar62 - fVar66;
    *(float *)(lVar28 + 0x158) = fVar55;
    *(float *)(unaff_x19 + 0x97) = fVar62 - fVar66;
    fVar55 = fVar55 - fVar66;
    *(float *)(lVar28 + 0x150) = fVar55;
  }
  else {
    fVar55 = fVar62 + fVar55;
    fVar68 = fVar49;
    fVar48 = fVar55;
    if (fVar62 != 0.0) {
      fVar68 = (fVar49 - fVar62) / *(float *)((long)unaff_x19 + 0x3fc);
      fVar48 = (fVar55 - fVar62) / *(float *)((long)unaff_x19 + 0x3fc);
      if (fVar68 <= fVar49) {
        fVar68 = fVar49;
      }
      if (fVar55 <= fVar48) {
        fVar48 = fVar55;
      }
    }
    lVar28 = lVar28 + unaff_x21 * unaff_x27;
    fVar62 = fVar68;
    if (fVar68 <= *(float *)(unaff_x19 + 0x98)) {
      fVar62 = *(float *)(unaff_x19 + 0x98);
    }
    fVar50 = fVar48;
    if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar48) {
      fVar50 = *(float *)((long)unaff_x19 + 0x4c4);
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar50;
    fVar55 = fVar55 - fVar66;
    *(float *)(unaff_x19 + 0x98) = fVar62;
    *(float *)(lVar28 + 0x154) = fVar68;
    *(float *)(lVar28 + 0x158) = fVar48;
    *(float *)(lVar28 + 0x148) = fVar49 - fVar66;
    *(float *)(unaff_x19 + 0x97) = fVar49 - fVar66;
    *(float *)(lVar28 + 0x150) = fVar55;
  }
  *(float *)((long)unaff_x19 + 0x4bc) = fVar55;
  if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
    if (!bVar13 || !bVar12) {
      *(float *)(unaff_x19 + 0x96) = fVar62;
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar62 = *(float *)((long)unaff_x19 + 0x4b4);
      fVar66 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
      fStack00000000000000f4 = (fVar61 * fVar66) / fStack00000000000000f4;
      param_2 = (ulong)*(uint *)(unaff_x19 + 0x9a);
      if (fVar62 <= fStack00000000000000f4) {
        fVar62 = fStack00000000000000f4;
      }
      *(float *)((long)unaff_x19 + 0x4b4) = fVar62;
      goto LAB_02493948;
    }
  }
  else {
LAB_02493948:
    if ((!bVar13 || !bVar12) && (float)param_2 == 0.0) {
      fVar61 = *(float *)(in_stack_00000070 + 0x208);
      if (*(float *)(in_stack_00000070 + 0x208) <= fVar49) {
        fVar61 = fVar49;
      }
      *(float *)(in_stack_00000070 + 0x208) = fVar61;
    }
  }
  lVar28 = *in_stack_00000150;
  if ((lVar28 == 0) || (lVar31 = *(long *)(lVar28 + 0x38), lVar31 == 0)) goto LAB_0249920c;
  uVar19 = *in_stack_00000148;
  if (*(uint *)(lVar31 + 0x18) <= uVar19)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar31 = lVar31 + (int)uVar19 * unaff_x27;
  *(undefined1 *)(lVar31 + 0x194) = 0;
  unaff_w26 = *(uint *)(unaff_x19 + 0x4e) & 0x18;
  in_stack_000017bc = unaff_w25;
  if ((unaff_w25 == 9) ||
     (((((unaff_w29 == 0 && (unaff_w25 != 3)) && (unaff_w25 != 0x200b)) && (unaff_w25 != 0xad)) ||
      (((unaff_w25 == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) != 0 ||
       (*(int *)((long)unaff_x19 + 0x63c) == 1)))))) goto LAB_02493b5c;
  if (((unaff_w25 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
    fVar62 = (float)param_2;
    fVar61 = 0.0;
    if ((0.0 < fVar62) && (fVar61 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar61 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    param_2 = (ulong)(uint)fStack00000000000000a4;
    if (fStack00000000000000a4 <
        (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - fVar62)) + fVar61) {
      if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
        *(uint *)((long)unaff_x19 + 0x2dc) = uVar19;
      }
      plVar46 = (long *)StringLiteral_302;
      plVar42 = (long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00001788 = FUN_024d66ec();
      lVar28 = unaff_x19[0x5c];
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
      }
      uVar22 = FUN_02681b9c(lVar28,0,0);
      if ((uVar22 & 1) != 0) {
        plVar45 = (long *)unaff_x19[0x5c];
        uVar20 = (**(code **)(*unaff_x19 + 0x548))();
        if (plVar45 == (long *)0x0) goto LAB_0249920c;
        (**(code **)(*plVar45 + 0x558))(plVar45,uVar20,*(undefined8 *)(*plVar45 + 0x560));
        lVar28 = unaff_x19[0x5c];
        if (lVar28 == 0) goto LAB_0249920c;
        *(int *)(lVar28 + 0x3f8) = (int)unaff_x19[0x7f];
        FUN_024c910c(lVar28,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
        plVar45 = (long *)unaff_x19[0x5c];
        if (plVar45 == (long *)0x0) goto LAB_0249920c;
        (**(code **)(*plVar45 + 0x7d8))(plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7e0));
        *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      }
      in_stack_000017a8 = CONCAT44(3,uVar19);
      goto LAB_02492630;
    }
  }
  if ((((unaff_w25 - 0x2007 < 0x23) &&
       ((1L << ((ulong)(unaff_w25 - 0x2007) & 0x3f) & 0x600000001U) != 0)) || (unaff_w25 - 10 < 2))
     || (unaff_w25 == 0xa0)) {
LAB_024944e4:
    if (((unaff_w25 != 0xad) && (unaff_w25 != 0x200b)) && (unaff_w25 != 0x2060)) {
      lVar28 = *in_stack_00000150;
      if ((lVar28 == 0) || (lVar31 = *(long *)(lVar28 + 0x50), lVar31 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      *(int *)(lVar31 + 0x2c) = *(int *)(lVar31 + 0x2c) + 1;
      *(int *)(lVar28 + 0x20) = *(int *)(lVar28 + 0x20) + 1;
    }
  }
  else {
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar22 = FUN_016fa418(unaff_w25,0);
    if ((uVar22 & 1) != 0) goto LAB_024944e4;
  }
  if (unaff_w25 == 0xa0) {
    if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x50), lVar28 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_024949c4:
    *(int *)(lVar28 + 0x20) = *(int *)(lVar28 + 0x20) + 1;
  }
LAB_02494abc:
  if (((int)unaff_x19[0x5b] == 1) && ((in_stack_000017bc == 0x2d || (unaff_w20 != 1)))) {
    if (unaff_x19[0xca] == 0) goto LAB_0249920c;
    fVar61 = *(float *)(unaff_x19 + 0x3c);
    iVar14 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
    if (unaff_x19[0xca] == 0) goto LAB_0249920c;
    fVar66 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
    lVar28 = unaff_x19[0xc9];
    fVar62 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar62 = 1.0;
    }
    if ((lVar28 == 0) || (*(long *)(lVar28 + 0x20) == 0)) goto LAB_0249920c;
    fVar49 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar48 = *(float *)(lVar28 + 0x2c);
    fVar55 = (float)FUN_026fd668(*(long *)(lVar28 + 0x20),0);
    fVar68 = *_fStack0000000000000098;
    fVar55 = fVar49 * (fVar61 / (float)iVar14) * fVar66 * fVar62 * fVar48 * fVar55;
    fVar61 = *_fStack0000000000000088;
    if ((in_stack_000017bc == 10) && (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
      if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
      goto LAB_0249920c;
      uVar19 = *(int *)((long)unaff_x19 + 0x48c) - 1;
      if (*(uint *)(lVar28 + 0x18) <= uVar19)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (unaff_x19[0xca] == 0) goto LAB_0249920c;
      fVar62 = *(float *)(lVar28 + (long)(int)uVar19 * (long)iVar18 + 0x60);
      iVar14 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
      if (unaff_x19[0xca] == 0) goto LAB_0249920c;
      fVar49 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
      lVar28 = unaff_x19[0xc9];
      fVar66 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar66 = 1.0;
      }
      if ((lVar28 == 0) || (*(long *)(lVar28 + 0x20) == 0)) goto LAB_0249920c;
      fVar48 = *(float *)((long)unaff_x19 + 0x3fc);
      fVar50 = *(float *)(lVar28 + 0x2c);
      fVar55 = (float)FUN_026fd668(*(long *)(lVar28 + 0x20),0);
      if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x50), lVar28 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      fVar68 = *(float *)(lVar28 + 0x60);
      fVar61 = *(float *)(lVar28 + 100);
      fVar55 = fVar48 * (fVar62 / (float)iVar14) * fVar49 * fVar66 * fVar50 * fVar55;
    }
    fVar48 = *(float *)(unaff_x19 + 0x9a);
    fVar66 = *(float *)(unaff_x19 + 0x96);
    fVar50 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar62 = 0.0;
    fVar49 = 0.0;
    if ((0.0 < fVar48) && (fVar49 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar49 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar69 = *(float *)(unaff_x19 + 199);
    if ((char)unaff_x19[0x1d] == '\0') {
      if ((unaff_x19[0xc9] == 0) || (lVar28 = *(long *)(unaff_x19[0xc9] + 0x20), lVar28 == 0))
      goto LAB_0249920c;
      FUN_026fd62c(&stack0x00000880,lVar28,0);
      unaff_x28 = &stack0x00000880;
      fVar62 = (float)FUN_026fd474(&stack0x000016e0,0);
    }
    puVar10 = System_Threading_Mutex_TypeInfo;
    fVar63 = *(float *)(unaff_x19 + 0x6b);
    fVar61 = (in_stack_00000090 - fVar68) - fVar61;
    bVar12 = true;
    if ((fVar63 <= fVar61) && (bVar12 = false, !NAN(fVar63))) {
      bVar12 = fVar63 == -1.0;
    }
    if (!bVar12) {
      fVar61 = fVar63;
    }
    unaff_d13 = in_stack_00000100 & 0xffffffff;
    fVar68 = _DAT_0294c6e8;
    if (unaff_w26 == 0) {
      fVar68 = 1.0;
    }
    if (((fVar66 - (fVar50 - fVar48)) + fVar49 < fStack00000000000000a4) &&
       (ABS(fVar69) + fVar55 * fVar62 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
        fVar68 * fVar61)) {
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024d69d4();
      lVar28 = *(long *)(*(long *)puVar10 + 0xb8);
      memcpy(&stack0x00000508,(void *)(lVar28 + 0x788),0x378);
      FUN_013b86dc(lVar28 + 0x11f0,&stack0x00000508,
                   *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
    }
  }
  unaff_s12 = 1.0;
  lVar28 = *in_stack_00000150;
  if ((lVar28 == 0) || (lVar31 = *(long *)(lVar28 + 0x38), lVar31 == 0)) goto LAB_0249920c;
  if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  uVar19 = *(uint *)(unaff_x19 + 0x94);
  lVar31 = lVar31 + (int)*in_stack_00000148 * unaff_x27;
  *(uint *)(lVar31 + 100) = uVar19;
  *(int *)(lVar31 + 0x68) = (int)unaff_x19[0x95];
  if (((unaff_w20 & 1) == 0) &&
     ((0xd < in_stack_000017bc || ((1 << (ulong)(in_stack_000017bc & 0x1f) & 0x2c00U) == 0)))) {
    lVar28 = *(long *)(lVar28 + 0x50);
    if (lVar28 == 0) goto LAB_0249920c;
LAB_02494e68:
    if (*(uint *)(lVar28 + 0x18) <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(int *)(lVar28 + (long)(int)uVar19 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
  }
  else {
    lVar28 = *(long *)(lVar28 + 0x50);
    if (lVar28 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar28 + 0x18) <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (*(int *)(lVar28 + (long)(int)uVar19 * 0x5c + 0x24) == 1) goto LAB_02494e68;
  }
  fVar61 = (float)unaff_d13;
  if (in_stack_000017bc == 9) {
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar62 = (float)FUN_026fd208(*in_stack_00000138 + 0x50,0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar55 = *(float *)(unaff_x19 + 199);
    fVar66 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000138 + 0x1b9));
    fVar62 = fVar61 * fVar62 * fVar66;
    fVar66 = fVar62 * (float)(int)(fVar55 / fVar62);
    param_2 = (ulong)(uint)fVar66;
    if (fVar66 <= fVar55) {
      fVar66 = fVar55 + fVar62;
    }
LAB_02495058:
    *(float *)(unaff_x19 + 199) = fVar66;
  }
  else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
    if ((char)unaff_x19[0x1d] == '\0') {
      fVar55 = unaff_s12;
      if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
        fVar55 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
      }
      fVar66 = *(float *)(unaff_x19 + 199);
      fVar49 = (float)FUN_026fd474(&stack0x00001770,0);
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar62 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
      fVar66 = fVar66 + fVar62 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                 fVar61 * (fStack00000000000000ac + fVar55 * fVar49) +
                                 fStack00000000000000c8 *
                                 (in_stack_000000c0 +
                                 fStack00000000000000cc + *(float *)(unaff_x19[0x1f] + 0x1ac)));
      *(float *)(unaff_x19 + 199) = fVar66;
      goto joined_r0x02494fac;
    }
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar66 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (*(float *)((long)unaff_x19 + 0x2a4) +
             fVar61 * fStack00000000000000ac +
             fStack00000000000000c8 *
             (in_stack_000000c0 + fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
    param_2 = (ulong)(uint)fVar66;
    fVar66 = *(float *)(unaff_x19 + 199) - fVar66;
    *(float *)(unaff_x19 + 199) = fVar66;
    if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
      fVar62 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      param_2 = (ulong)(uint)fVar62;
      fVar66 = fVar66 - fVar62;
      goto LAB_02495058;
    }
  }
  else {
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar62 = *(float *)(unaff_x19 + 199);
    fVar66 = fVar62 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                      (*(float *)((long)unaff_x19 + 0x2a4) +
                      (*(float *)(unaff_x19 + 0x55) - fStack0000000000000080) +
                      fStack00000000000000c8 *
                      (fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
    *(float *)(unaff_x19 + 199) = fVar66;
joined_r0x02494fac:
    if ((unaff_w29 != 0) || (param_2 = (ulong)(uint)fVar62, in_stack_000017bc == 0x200b)) {
      fVar62 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      param_2 = (ulong)(uint)fVar62;
      fVar66 = fVar66 + fVar62;
      goto LAB_02495058;
    }
  }
  lVar28 = *in_stack_00000150;
  if ((lVar28 == 0) || (lVar31 = *(long *)(lVar28 + 0x38), lVar31 == 0)) goto LAB_0249920c;
  uVar19 = *in_stack_00000148;
  uVar59 = (uint)*(undefined8 *)(lVar31 + 0x18);
  if (uVar59 <= uVar19) goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(float *)(lVar31 + (int)uVar19 * unaff_x27 + 0x144) = fVar66;
  unaff_w25 = in_stack_000017bc;
  uVar36 = in_stack_000017bc;
  if ((int)in_stack_000017bc < 0xd) {
    if ((in_stack_000017bc - 10 < 2) || (in_stack_000017bc == 3)) goto LAB_024950bc;
FUN_02495710:
    if (((unaff_w20 & in_stack_000017bc == 0x2d) != 0) || ((float)uVar19 == in_stack_00000078._4_4_)
       ) goto LAB_024950bc;
  }
  else {
    if (1 < in_stack_000017bc - 0x2028) {
      if (in_stack_000017bc != 0xd) goto FUN_02495710;
      param_2 = 0;
      *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
      if ((float)uVar19 != in_stack_00000078._4_4_) goto LAB_0249572c;
    }
LAB_024950bc:
    if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
      fVar62 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (((fStack000000000000004c < ABS(fVar62)) && (*(char *)((long)unaff_x19 + 700) == '\0')) &&
         (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
        FUN_024d6ca8(fVar62);
        *(float *)((long)unaff_x19 + 0x4bc) = *(float *)((long)unaff_x19 + 0x4bc) - fVar62;
        *(float *)(unaff_x19 + 0x9a) = fVar62 + *(float *)(unaff_x19 + 0x9a);
        puVar10 = System_Threading_Mutex_TypeInfo;
        lVar28 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar28 = *(long *)puVar10;
        }
        lVar31 = *(long *)(lVar28 + 0xb8);
        if (*(int *)(lVar31 + 0x7ac) == (int)unaff_x19[0x94]) {
          if (*(int *)(lVar28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar31 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          FUN_013b8de4(lVar31 + 0x11f0,&stack0x00000880,
                       *(undefined8 *)
                        Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                      );
          lVar28 = *(long *)System_Threading_Mutex_TypeInfo;
          memcpy((void *)(*(long *)(lVar28 + 0xb8) + 0x788),&stack0x00000880,0x378);
          lVar28 = *(long *)(lVar28 + 0xb8);
          *(float *)(lVar28 + 0x7bc) = fVar62 + *(float *)(lVar28 + 0x7bc);
          *(float *)(lVar28 + 0x800) = fVar62 + *(float *)(lVar28 + 0x800);
          memcpy(&stack0x00000190,(void *)(lVar28 + 0x788),0x378);
          FUN_013b86dc(lVar28 + 0x11f0,&stack0x00000190,
                       *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
        }
      }
    }
    fVar55 = *(float *)(unaff_x19 + 0x9a);
    *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
    fVar66 = *(float *)((long)unaff_x19 + 0x4c4) - fVar55;
    fVar62 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar66 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar62 = fVar66;
    }
    *(float *)((long)unaff_x19 + 0x4bc) = fVar62;
    fVar49 = *(float *)(unaff_x19 + 0x98);
    if (unaff_x28[0xf34] == '\0') {
      in_stack_000017b8 = fVar62;
    }
    if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
       (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
        ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
      unaff_x28[0xf34] = 1;
    }
    lVar28 = *in_stack_00000150;
    if ((lVar28 == 0) || (lVar31 = *(long *)(lVar28 + 0x50), lVar31 == 0)) goto LAB_0249920c;
    uVar19 = *(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar31 + 0x18) <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar44 = lVar31 + (long)(int)uVar19 * 0x5c;
    *(int *)(lVar44 + 0x34) = (int)unaff_x19[0x92];
    iVar14 = (int)unaff_x19[0x92];
    if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
      iVar14 = *(int *)((long)unaff_x19 + 0x494);
    }
    *(int *)((long)unaff_x19 + 0x494) = iVar14;
    *(int *)(lVar44 + 0x38) = iVar14;
    *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
    *(undefined4 *)(lVar44 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
    iVar14 = *(int *)((long)unaff_x19 + 0x494);
    if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
      iVar14 = *(int *)((long)unaff_x19 + 0x49c);
    }
    *(int *)((long)unaff_x19 + 0x49c) = iVar14;
    *(int *)(lVar44 + 0x40) = iVar14;
    *(int *)(lVar44 + 0x24) = (*(int *)(lVar44 + 0x3c) - *(int *)(lVar44 + 0x34)) + 1;
    *(undefined4 *)(lVar44 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
    lVar28 = *(long *)(lVar28 + 0x38);
    if (lVar28 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar28 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    uVar71 = *(undefined4 *)(lVar28 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x27 + 0x11c);
    lVar31 = lVar31 + (long)(int)uVar19 * 0x5c;
    *(float *)(lVar31 + 0x70) = fVar66;
    *(undefined4 *)(lVar31 + 0x6c) = uVar71;
    lVar28 = *in_stack_00000150;
    if ((lVar28 == 0) || (lVar31 = *(long *)(lVar28 + 0x50), lVar31 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar28 = *(long *)(lVar28 + 0x38);
    if (lVar28 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar28 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    uVar71 = *(undefined4 *)(lVar28 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x27 + 0x128);
    fVar49 = fVar49 - fVar55;
    lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    *(float *)(lVar31 + 0x78) = fVar49;
    *(undefined4 *)(lVar31 + 0x74) = uVar71;
    lVar28 = *in_stack_00000150;
    if ((lVar28 == 0) || (lVar44 = *(long *)(lVar28 + 0x50), lVar44 == 0)) goto LAB_0249920c;
    lVar23 = (long)(int)*(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar44 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar31 = lVar44 + lVar23 * 0x5c;
    *(float *)(lVar31 + 0x44) = *(float *)(lVar31 + 0x74) - fVar61 * in_stack_00000128;
    *(float *)(lVar31 + 0x5c) = fStack00000000000000d4;
    if (*(int *)(lVar31 + 0x24) == 1) {
      *(int *)(lVar44 + lVar23 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
    }
    if ((*in_stack_00000138 == 0) || (lVar31 = *(long *)(lVar28 + 0x38), lVar31 == 0))
    goto LAB_0249920c;
    lVar39 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
    uVar59 = (uint)*(undefined8 *)(lVar31 + 0x18);
    if (uVar59 <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(char *)(lVar31 + lVar39 * unaff_x27 + 0x194) == '\0') &&
       (lVar39 = (long)(int)*(uint *)(unaff_x19 + 0x93), uVar59 <= *(uint *)(unaff_x19 + 0x93)))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar62 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (fStack00000000000000c8 *
              (in_stack_000000c0 + fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac))
             - *(float *)((long)unaff_x19 + 0x2a4));
    fVar61 = -fVar62;
    if ((char)unaff_x19[0x1d] != '\0') {
      fVar61 = fVar62;
    }
    lVar44 = lVar44 + lVar23 * 0x5c;
    *(float *)(lVar44 + 0x58) = *(float *)(lVar31 + lVar39 * unaff_x27 + 0x144) + fVar61;
    fVar61 = *(float *)(unaff_x19 + 0x9a);
    *(float *)(lVar44 + 0x48) = fStack0000000000000050 + (fVar49 - fVar66);
    *(float *)(lVar44 + 0x4c) = fVar49;
    param_2 = (ulong)(uint)(0.0 - fVar61);
    *(float *)(lVar44 + 0x50) = 0.0 - fVar61;
    *(float *)(lVar44 + 0x54) = fVar66;
    plVar42 = (long *)System_Threading_Mutex_TypeInfo;
    if ((int)in_stack_000017bc < 0x2d) {
      if (in_stack_000017bc - 10 < 2) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar46 = (long *)StringLiteral_302;
        FUN_024d69d4();
        lVar28 = unaff_x19[0x6c];
        *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
        iVar14 = (int)unaff_x19[0x94] + 1;
        *(int *)(unaff_x19 + 0x94) = iVar14;
        *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
        if ((lVar28 == 0) || (*(long *)(lVar28 + 0x50) == 0)) goto LAB_0249920c;
        if (*(int *)(*(long *)(lVar28 + 0x50) + 0x18) <= iVar14) {
          FUN_024d6e60();
          lVar28 = unaff_x19[0x6c];
          if (lVar28 == 0) goto LAB_0249920c;
        }
        lVar28 = *(long *)(lVar28 + 0x38);
        if (lVar28 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar61 = *(float *)(lVar28 + (int)*in_stack_00000148 * unaff_x27 + 0x154);
        if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
          fVar62 = 0.0;
          if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
            fVar62 = *(float *)((long)unaff_x19 + 0x2c4);
          }
          uVar26 = 0;
          fVar62 = *(float *)(unaff_x19 + 0x9a) +
                   fVar61 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                   fStack0000000000000054 *
                   (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4)) +
                   fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar62);
        }
        else {
          if ((in_stack_000017bc == 0x2029) || (fVar62 = 0.0, in_stack_000017bc == 10)) {
            fVar62 = *(float *)((long)unaff_x19 + 0x2c4);
          }
          uVar26 = 1;
          fVar62 = *(float *)(unaff_x19 + 0x9a) +
                   *(float *)(unaff_x19 + 0x57) +
                   fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar62);
        }
        *(float *)(unaff_x19 + 0x9a) = fVar62;
        *(undefined1 *)((long)unaff_x19 + 700) = uVar26;
        lVar28 = *plVar42;
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar28 = *plVar42;
        }
        uVar20 = *(undefined8 *)(*(long *)(lVar28 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x99) = fVar61;
        param_2 = NEON_rev64(uVar20,4);
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
  uVar19 = *in_stack_00000148;
  if (uVar59 <= uVar19) goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  if (*(char *)(lVar31 + (int)uVar19 * unaff_x27 + 0x194) != '\0') {
    lVar31 = lVar31 + (int)uVar19 * unaff_x27;
    uVar57 = *(ulong *)(lVar31 + 0x11c);
    uVar22 = *(ulong *)(in_stack_00000070 + 0x230);
    *(ulong *)(in_stack_00000070 + 0x230) =
         uVar57 ^ (uVar57 ^ uVar22) &
                  CONCAT44(-(uint)((float)(uVar22 >> 0x20) < (float)(uVar57 >> 0x20)),
                           -(uint)((float)uVar22 < (float)uVar57));
    uVar22 = *(ulong *)(in_stack_00000070 + 0x238);
    param_2 = *(ulong *)(lVar31 + 0x128);
    *(ulong *)(in_stack_00000070 + 0x238) =
         param_2 ^ (param_2 ^ uVar22) &
                   CONCAT44(-(uint)((float)(param_2 >> 0x20) < (float)(uVar22 >> 0x20)),
                            -(uint)((float)param_2 < (float)uVar22));
  }
  if (((int)unaff_x19[0x5b] == 5) &&
     ((0xd < uVar36 || ((1 << (ulong)(uVar36 & 0x1f) & 0x2c00U) == 0)))) {
    lVar31 = *(long *)(lVar28 + 0x58);
    if (lVar31 == 0) goto LAB_0249920c;
    iVar14 = (int)unaff_x19[0x95] + 1;
    if (*(int *)(lVar31 + 0x18) < iVar14) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147c08((long *)(lVar28 + 0x58),iVar14,1,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
      lVar28 = *in_stack_00000150;
      if (lVar28 == 0) goto LAB_0249920c;
    }
    lVar31 = *(long *)(lVar28 + 0x58);
    if (lVar31 == 0) goto LAB_0249920c;
    uVar59 = *(uint *)(unaff_x19 + 0x95);
    lVar44 = (long)(int)uVar59;
    uVar19 = *(uint *)(lVar31 + 0x18);
    if (uVar19 <= uVar59)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar23 = lVar31 + lVar44 * 0x14;
    fVar62 = *(float *)(lVar23 + 0x30);
    param_2 = (ulong)(uint)fVar62;
    *(undefined4 *)(lVar23 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    fVar61 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar62 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar61 = fVar62;
    }
    *(float *)(lVar23 + 0x30) = fVar61;
    uVar36 = *(uint *)((long)unaff_x19 + 0x48c);
    if (uVar36 == 0 && uVar59 == 0) {
      *(uint *)(lVar31 + lVar44 * 0x14 + 0x20) = uVar36;
    }
    else {
      uVar7 = uVar36 - 1;
      if (0 < (int)uVar36) {
        lVar28 = *(long *)(lVar28 + 0x38);
        if (lVar28 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar28 + 0x18) <= uVar7)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (uVar59 != *(uint *)(lVar28 + (long)(int)uVar7 * (long)iVar18 + 0x68)) {
          if (uVar19 <= uVar59 - 1)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          *(uint *)(lVar31 + 0x20 + (long)(int)(uVar59 - 1) * 0x14 + 4) = uVar7;
          *(uint *)(lVar31 + 0x20 + lVar44 * 0x14) = uVar36;
          goto LAB_024957b0;
        }
      }
      if ((float)uVar36 == in_stack_00000078._4_4_) {
        *(float *)(lVar31 + lVar44 * 0x14 + 0x24) = in_stack_00000078._4_4_;
      }
    }
  }
LAB_024957b0:
  puVar10 = System_Threading_Mutex_TypeInfo;
  if (((char)unaff_x19[0x5a] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5b) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) == 0)))) goto LAB_02495b70;
  if ((unaff_w29 == 0) &&
     (((in_stack_000017bc != 0x2d && (in_stack_000017bc != 0x200b)) && (in_stack_000017bc != 0xad)))
     ) {
    if (*(char *)((long)unaff_x19 + 0x2d2) != '\0') goto LAB_024958f0;
LAB_02495868:
    if (((((0x2bfd < in_stack_000017bc - 0xac01) && (0x1d < in_stack_000017bc - 0xa961)) &&
         (0xfd < in_stack_000017bc - 0x1101)) || (uVar22 = FUN_024e95f0(0), (uVar22 & 1) != 0)) &&
       ((((0xed < in_stack_000017bc - 0xff01 && (0x1d < in_stack_000017bc - 0xfe31)) &&
         (0x717d < in_stack_000017bc - 0x2e81)) && (0x1fd < in_stack_000017bc - 0xf901))))
    goto LAB_024958f0;
    lVar28 = FUN_024e94b0(0);
    if ((lVar28 == 0) || (*(long *)(lVar28 + 0x10) == 0)) goto LAB_0249920c;
    uVar22 = FUN_0129aa60(*(long *)(lVar28 + 0x10),&stack0x00000880,
                          *(undefined8 *)
                           System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                         );
    if ((int)in_stack_00000078._4_4_ <= (int)*in_stack_00000148) {
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
      if (uVar15 != unaff_w24 || ((bStack000000000000005c ^ 0xff) & 1) != 0) goto LAB_02495b70;
      goto joined_r0x02495af4;
    }
    lVar28 = FUN_024e94b0(0);
    if (((lVar28 == 0) || (*in_stack_00000150 == 0)) ||
       (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000148 + 1)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (*(long *)(lVar28 + 0x18) == 0) goto LAB_0249920c;
    in_stack_00000880 =
         (uint)*(ushort *)(lVar31 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar18 + 0x20);
    uVar57 = FUN_0129aa60(*(long *)(lVar28 + 0x18),&stack0x00000880,
                          *(undefined8 *)
                           System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                         );
    if ((uVar22 & 1) != 0) goto LAB_02495adc;
    if ((uVar57 & 1) == 0) goto LAB_02495bc4;
    if ((bStack000000000000005c & 1) != 0) goto joined_r0x02495af4;
  }
  else {
    if (*(char *)((long)unaff_x19 + 0x2d2) != '\x01') {
      if (((0x28 < in_stack_000017bc - 0x2007) ||
          ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
         ((in_stack_000017bc != 0xa0 && (in_stack_000017bc != 0x2060)))) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_024d69d4();
        bStack000000000000005c = 0;
        *(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xe78) = 0xffffffff;
        goto LAB_02495b70;
      }
      goto LAB_02495868;
    }
LAB_024958f0:
    if ((bStack000000000000005c & 1) != 0) {
      if ((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) == 0) {
joined_r0x02495af4:
        if (unaff_w29 != 0) goto LAB_02495af8;
      }
      else {
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
      goto LAB_02495b70;
    }
  }
  bStack000000000000005c = 0;
LAB_02495b70:
  plVar42 = (long *)System_Threading_Mutex_TypeInfo;
  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar46 = (long *)StringLiteral_302;
  FUN_024d69d4();
  *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
  goto LAB_02492630;
LAB_02493b5c:
  *(undefined1 *)(lVar31 + 0x194) = 1;
  pfVar32 = _fStack0000000000000088;
  pfVar34 = _fStack0000000000000098;
  if (unaff_w20 != 0) {
    lVar28 = *(long *)(lVar28 + 0x50);
    if (lVar28 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    pfVar34 = (float *)(lVar28 + 0x60);
    pfVar32 = (float *)(lVar28 + 100);
  }
  unaff_s8 = *pfVar34;
  unaff_s9 = *pfVar32;
  fVar61 = *(float *)(unaff_x19 + 0x6b);
  unaff_s10 = *(float *)(unaff_x19 + 199);
  fStack00000000000000d4 = (in_stack_00000090 - unaff_s8) - unaff_s9;
  bVar12 = true;
  if ((fVar61 <= fStack00000000000000d4) && (bVar12 = false, !NAN(fVar61))) {
    bVar12 = fVar61 == -1.0;
  }
  if (!bVar12) {
    fStack00000000000000d4 = fVar61;
  }
  unaff_s11 = 0.0;
  param_1 = 0.0;
  if ((char)unaff_x19[0x1d] == '\0') {
    param_1 = (float)FUN_026fd474(&stack0x00001770,0);
    param_2 = (ulong)*(uint *)(unaff_x19 + 0x9a);
  }
  param_4 = *(float *)((long)unaff_x19 + 0x4c4);
  param_6 = *(float *)(unaff_x19 + 0x96);
  param_3 = *(float *)((long)unaff_x19 + 0x2cc);
  in_ZR = unaff_w25 == 0xad;
  param_7 = param_4 - (float)param_2;
  goto code_r0x02493c0c;
LAB_02496a50:
  do {
    uVar15 = uVar36 - 1;
    if (*(uint *)(lVar28 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*in_stack_00000150 == 0) || (lVar44 = *(long *)(*in_stack_00000150 + 0x50), lVar44 == 0))
    goto LAB_0249920c;
    lVar39 = (long)(int)uVar15;
    lVar23 = lVar28 + lVar39 * 0x178;
    uVar7 = *(uint *)(lVar23 + 100);
    if (*(uint *)(lVar44 + 0x18) <= uVar7)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar37 = *(long *)(lVar23 + 0x38);
    uVar3 = *(ushort *)(lVar23 + 0x20);
    lVar35 = (long)(int)uVar7;
    lVar44 = lVar44 + lVar35 * 0x5c;
    uVar5 = *(uint *)(lVar44 + 0x3c);
    iVar16 = *(int *)(lVar44 + 0x28);
    iVar17 = *(int *)(lVar44 + 0x2c);
    uVar6 = *(uint *)(lVar44 + 0x40);
    lVar23 = (long)(int)uVar6;
    uVar43 = *(uint *)(lVar44 + 0x68);
    fVar53 = *(float *)(lVar44 + 0x5c);
    fVar54 = *(float *)(lVar44 + 0x60);
    iVar2 = *(int *)(lVar44 + 0x20);
    fVar50 = *(float *)(lVar44 + 0x4c);
    fVar63 = *(float *)(lVar44 + 0x54);
    fVar49 = *(float *)(lVar44 + 0x58);
    fVar52 = *(float *)(lVar44 + 0x6c);
    fVar65 = *(float *)(lVar44 + 0x70);
    fVar68 = *(float *)(lVar44 + 0x74);
    fVar69 = *(float *)(lVar44 + 0x78);
    fVar72 = fVar53 + fVar54;
    uVar41 = (uint)uVar3;
    if ((int)uVar43 < 9) {
      switch(uVar43) {
      case 1:
        if ((char)unaff_x19[0x1d] == '\0') {
          fStack00000000000000c8 = fVar54 + 0.0;
        }
        else {
          fStack00000000000000c8 = 0.0 - fVar49;
        }
        break;
      case 2:
LAB_02496c1c:
        fStack00000000000000c8 = (fVar54 + fVar53 * 0.5) - fVar49 * 0.5;
        break;
      default:
        goto switchD_02496b58_caseD_3;
      case 4:
        fStack00000000000000c8 = fVar72 - fVar49;
        if ((char)unaff_x19[0x1d] != '\0') {
          fStack00000000000000c8 = fVar72;
        }
        break;
      case 8:
        goto switchD_02496b58_caseD_8;
      }
LAB_02496c90:
      _in_stack_000000c0 = 0;
    }
    else if (uVar43 == 0x10) {
switchD_02496b58_caseD_8:
      if (uVar3 < 0xad) {
        if ((uVar41 != 3) && (uVar41 != 10)) goto LAB_02496bac;
      }
      else if ((uVar41 != 0xad) && ((uVar41 != 0x200b && (uVar41 != 0x2060)))) {
LAB_02496bac:
        if (*(uint *)(lVar28 + 0x18) <= uVar5)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar4 = *(undefined2 *)(lVar28 + (long)(int)uVar5 * 0x178 + 0x20);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar22 = FUN_016f9f84(uVar4,0);
        if ((uVar22 & 1) == 0) {
          bVar1 = (int)uVar7 < (int)unaff_x19[0x94];
        }
        else {
          bVar1 = false;
        }
        if ((fVar49 <= fVar53) && (!bVar1 && (uVar43 >> 4 & 1) == 0)) {
          fStack00000000000000c8 = fVar54;
          if ((char)unaff_x19[0x1d] != '\0') {
            fStack00000000000000c8 = fVar72;
          }
          goto LAB_02496c90;
        }
        if (((uVar36 == 1) || (uVar7 != uVar59)) || (uVar15 == *(uint *)((long)unaff_x19 + 0x31c)))
        {
          fStack00000000000000c8 = fVar54;
          if ((char)unaff_x19[0x1d] != '\0') {
            fStack00000000000000c8 = fVar72;
          }
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          fStack0000000000000020 = (float)FUN_016fa418(uVar3,0);
          _in_stack_000000c0 = 0;
        }
        else {
          cVar27 = (char)unaff_x19[0x1d];
          fVar72 = -fVar49;
          if (cVar27 != '\0') {
            fVar72 = fVar49;
          }
          if (*(uint *)(lVar28 + 0x18) <= uVar5)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar49 = 1.0;
          iVar17 = (int)*(char *)(lVar28 + (long)(int)uVar5 * 0x178 + 0x194) +
                   (-iVar2 - ((uint)fStack0000000000000020 & 1)) + iVar17 + -1;
          if (0 < iVar17) {
            fVar49 = *(float *)((long)unaff_x19 + 0x2d4);
          }
          if (iVar17 < 1) {
            iVar17 = 1;
          }
          if (uVar41 == 9) {
LAB_02498bb8:
            fVar49 = 1.0 - fVar49;
          }
          else {
            if (uVar41 != 0xa0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar22 = FUN_016fa418(uVar3,0);
              cVar27 = (char)unaff_x19[0x1d];
              if ((uVar22 & 1) != 0) goto LAB_02498bb8;
            }
            iVar17 = (iVar2 - (~(uint)fStack0000000000000020 & 1)) + iVar16;
          }
          fVar49 = ((fVar53 + fVar72) * fVar49) / (float)iVar17;
          if (cVar27 == '\0') {
            fStack00000000000000c8 = fStack00000000000000c8 + fVar49;
            _in_stack_000000c0 =
                 CONCAT44((float)((ulong)_in_stack_000000c0 >> 0x20) + 0.0,
                          (float)_in_stack_000000c0 + 0.0);
          }
          else {
            fStack00000000000000c8 = fStack00000000000000c8 - fVar49;
          }
        }
      }
    }
    else if (uVar43 == 0x20) {
      fVar49 = fVar52 + fVar68;
      goto LAB_02496c1c;
    }
switchD_02496b58_caseD_3:
    uVar43 = (uint)*(undefined8 *)(lVar28 + 0x18);
    if (uVar43 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar44 = lVar28 + lVar39 * 0x178;
    fVar72 = fStack0000000000000098 + fStack00000000000000c8;
    fVar49 = (float)_in_stack_00000090 + (float)_in_stack_000000c0;
    fVar53 = (float)((ulong)_in_stack_00000090 >> 0x20) + (float)((ulong)_in_stack_000000c0 >> 0x20)
    ;
    if (*(char *)(lVar44 + 0x194) == '\0') goto LAB_02497688;
    iVar16 = *(int *)(lVar28 + lVar39 * 0x178 + 0x2c);
    if (iVar16 != 0) goto LAB_02497374;
    fVar55 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar7,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
    case 0:
      lVar30 = lVar28 + lVar39 * 0x178;
      *(undefined4 *)(lVar30 + 0x84) = 0;
      *(undefined4 *)(lVar30 + 0xac) = 0;
      *(undefined4 *)(lVar30 + 0xd4) = 0x3f800000;
      fVar55 = 1.0;
      break;
    case 1:
      fVar69 = *(float *)(lVar28 + lVar39 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
        lVar30 = lVar28 + lVar39 * 0x178;
        fVar68 = (fStack00000000000000c8 + fVar69) - *(float *)(in_stack_00000070 + 0x230);
        fVar69 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
        goto LAB_02496df8;
      }
      lVar30 = lVar28 + lVar39 * 0x178;
      fVar68 = fVar68 - fVar52;
      *(float *)(lVar30 + 0x84) = fVar55 + (fVar69 - fVar52) / fVar68;
      *(float *)(lVar30 + 0xac) = fVar55 + (*(float *)(lVar30 + 0x98) - fVar52) / fVar68;
      *(float *)(lVar30 + 0xd4) = fVar55 + (*(float *)(lVar30 + 0xc0) - fVar52) / fVar68;
      fVar55 = fVar55 + (*(float *)(lVar30 + 0xe8) - fVar52) / fVar68;
      break;
    case 2:
      lVar30 = lVar28 + lVar39 * 0x178;
      fVar69 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      fVar68 = (fStack00000000000000c8 + *(float *)(lVar30 + 0x70)) -
               *(float *)(in_stack_00000070 + 0x230);
LAB_02496df8:
      *(float *)(lVar30 + 0x84) = fVar55 + fVar68 / fVar69;
      *(float *)(lVar30 + 0xac) =
           fVar55 + ((fStack00000000000000c8 + *(float *)(lVar30 + 0x98)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      *(float *)(lVar30 + 0xd4) =
           fVar55 + ((fStack00000000000000c8 + *(float *)(lVar30 + 0xc0)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      fVar55 = fVar55 + ((fStack00000000000000c8 + *(float *)(lVar30 + 0xe8)) -
                        *(float *)(in_stack_00000070 + 0x230)) /
                        (*(float *)(in_stack_00000070 + 0x238) -
                        *(float *)(in_stack_00000070 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x61]) {
      case 0:
        lVar30 = lVar28 + lVar39 * 0x178;
        *(undefined4 *)(lVar30 + 0x88) = 0;
        *(undefined4 *)(lVar30 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar30 + 0xd8) = 0;
        *(undefined4 *)(lVar30 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar30 = lVar28 + lVar39 * 0x178;
        fVar69 = fVar69 - fVar65;
        fVar68 = fVar55 + (*(float *)(lVar30 + 0x74) - fVar65) / fVar69;
        fVar69 = fVar55 + (*(float *)(lVar30 + 0x9c) - fVar65) / fVar69;
        *(float *)(lVar30 + 0x88) = fVar68;
        *(float *)(lVar30 + 0xb0) = fVar69;
        *(float *)(lVar30 + 0xd8) = fVar68;
        *(float *)(lVar30 + 0x100) = fVar69;
        break;
      case 2:
        lVar30 = lVar28 + lVar39 * 0x178;
        fVar68 = fVar55 + (*(float *)(lVar30 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                          (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
        *(float *)(lVar30 + 0x88) = fVar68;
        fVar69 = *(float *)(unaff_x19 + 0x9b);
        fVar65 = *(float *)(unaff_x19 + 0x9c);
        *(float *)(lVar30 + 0xd8) = fVar68;
        fVar68 = fVar55 + (*(float *)(lVar30 + 0x9c) - fVar69) / (fVar65 - fVar69);
        *(float *)(lVar30 + 0xb0) = fVar68;
        *(float *)(lVar30 + 0x100) = fVar68;
        break;
      case 3:
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
        uVar43 = (uint)*(undefined8 *)(lVar28 + 0x18);
      }
      if (uVar43 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar28 + lVar39 * 0x178;
      fVar68 = *(float *)(lVar30 + 0x15c);
      fVar69 = (1.0 - (*(float *)(lVar30 + 0x88) + *(float *)(lVar30 + 0xb0)) * fVar68) * 0.5;
      fVar65 = fVar55 + *(float *)(lVar30 + 0x88) * fVar68 + fVar69;
      fVar55 = fVar55 + fVar69 + *(float *)(lVar30 + 0xb0) * fVar68;
      *(float *)(lVar30 + 0x84) = fVar65;
      *(float *)(lVar30 + 0xac) = fVar65;
      *(float *)(lVar30 + 0xd4) = fVar55;
      break;
    default:
      goto switchD_02496d4c_default;
    }
    *(float *)(lVar28 + lVar39 * 0x178 + 0xfc) = fVar55;
switchD_02496d4c_default:
    switch((int)unaff_x19[0x61]) {
    case 0:
      if (uVar43 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar28 + lVar39 * 0x178;
      *(undefined4 *)(lVar30 + 0x88) = 0;
      *(undefined4 *)(lVar30 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar30 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar30 + 0x100) = 0;
      break;
    case 1:
      if (uVar15 < uVar43) {
        lVar30 = lVar28 + lVar39 * 0x178;
        fVar50 = fVar50 - fVar63;
        fVar55 = (*(float *)(lVar30 + 0x74) - fVar63) / fVar50;
        fVar50 = (*(float *)(lVar30 + 0x9c) - fVar63) / fVar50;
        *(float *)(lVar30 + 0x88) = fVar55;
        goto LAB_02497174;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    case 2:
      if (uVar43 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar28 + lVar39 * 0x178;
      fVar55 = (*(float *)(lVar30 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar30 + 0x88) = fVar55;
      fVar50 = (*(float *)(lVar30 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_02497174:
      *(float *)(lVar30 + 0xb0) = fVar50;
      *(float *)(lVar30 + 0xd8) = fVar50;
      *(float *)(lVar30 + 0x100) = fVar55;
      break;
    case 3:
      if (uVar43 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar28 + lVar39 * 0x178;
      fVar50 = *(float *)(lVar30 + 0x15c);
      fVar68 = (1.0 - (*(float *)(lVar30 + 0x84) + *(float *)(lVar30 + 0xd4)) / fVar50) * 0.5;
      fVar55 = *(float *)(lVar30 + 0x84) / fVar50 + fVar68;
      fVar68 = fVar68 + *(float *)(lVar30 + 0xd4) / fVar50;
      *(float *)(lVar30 + 0x88) = fVar55;
      *(float *)(lVar30 + 0xb0) = fVar68;
      *(float *)(lVar30 + 0x100) = fVar55;
      *(float *)(lVar30 + 0xd8) = fVar68;
    }
    if (uVar43 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar30 = lVar28 + lVar39 * 0x178;
    fVar55 = *(float *)(lVar30 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
    if ((*(char *)(lVar30 + 0x5c) == '\0') && ((*(byte *)(lVar28 + lVar39 * 0x178 + 400) & 1) != 0))
    {
      fVar55 = -fVar55;
    }
    fVar68 = fVar61;
    if (((iVar14 == 2) || (fVar68 = fVar48, iVar14 == 1)) || (fVar68 = fVar61 / fVar62, iVar14 == 0)
       ) {
      fVar55 = fVar68 * fVar55;
    }
    lVar30 = lVar28 + lVar39 * 0x178;
    fVar50 = *(float *)(lVar30 + 0x88);
    fVar69 = *(float *)(lVar30 + 0x84);
    fVar68 = -2.1474836e+09;
    if (fVar69 != INFINITY) {
      fVar68 = (float)(int)fVar69;
    }
    fVar65 = *(float *)(lVar30 + 0xd4);
    fVar52 = *(float *)(lVar30 + 0xd8);
    fVar63 = -2.1474836e+09;
    if (fVar50 != INFINITY) {
      fVar63 = (float)(int)fVar50;
    }
    uVar71 = FUN_024e0374(fVar69 - fVar68,fVar50 - fVar63);
    *(undefined4 *)(lVar30 + 0x84) = uVar71;
    if (*(uint *)(lVar28 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar52 = fVar52 - fVar63;
    *(float *)(lVar30 + 0x88) = fVar55;
    uVar71 = FUN_024e0374(fVar69 - fVar68,fVar52);
    *(undefined4 *)(lVar28 + lVar39 * 0x178 + 0xac) = uVar71;
    if (*(uint *)(lVar28 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar65 = fVar65 - fVar68;
    *(float *)(lVar28 + lVar39 * 0x178 + 0xb0) = fVar55;
    fVar68 = (float)FUN_024e0374(fVar65,fVar52);
    *(float *)(lVar30 + 0xd4) = fVar68;
    if (*(uint *)(lVar28 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar30 + 0xd8) = fVar55;
    uVar71 = FUN_024e0374(fVar65,fVar50 - fVar63);
    *(undefined4 *)(lVar28 + lVar39 * 0x178 + 0xfc) = uVar71;
    uVar43 = (uint)*(undefined8 *)(lVar28 + 0x18);
    if (uVar43 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar28 + lVar39 * 0x178 + 0x100) = fVar55;
LAB_02497374:
    if (((int)unaff_x19[100] <= (int)uVar15) ||
       (*(int *)((long)unaff_x19 + 0x324) <= (int)fStack00000000000000ac)) goto LAB_02497490;
    if (((int)uVar7 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar43 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar44 = lVar28 + lVar39 * 0x178;
      *(ulong *)(lVar44 + 0x70) =
           CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar44 + 0x70) >> 0x20),
                    fVar72 + (float)*(undefined8 *)(lVar44 + 0x70));
      *(float *)(lVar44 + 0x78) = fVar53 + *(float *)(lVar44 + 0x78);
      if (*(uint *)(lVar28 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar44 = lVar28 + lVar39 * 0x178;
      *(ulong *)(lVar44 + 0x98) =
           CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar44 + 0x98) >> 0x20),
                    fVar72 + (float)*(undefined8 *)(lVar44 + 0x98));
      *(float *)(lVar44 + 0xa0) = fVar53 + *(float *)(lVar44 + 0xa0);
      if (*(uint *)(lVar28 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar44 = lVar28 + lVar39 * 0x178;
      *(ulong *)(lVar44 + 0xc0) =
           CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar44 + 0xc0) >> 0x20),
                    fVar72 + (float)*(undefined8 *)(lVar44 + 0xc0));
      *(float *)(lVar44 + 200) = fVar53 + *(float *)(lVar44 + 200);
      if (*(uint *)(lVar28 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar44 = lVar28 + lVar39 * 0x178;
      *(ulong *)(lVar44 + 0xe8) =
           CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar44 + 0xe8) >> 0x20),
                    fVar72 + (float)*(undefined8 *)(lVar44 + 0xe8));
      *(float *)(lVar44 + 0xf0) = fVar53 + *(float *)(lVar44 + 0xf0);
      if (iVar16 == 0) goto LAB_02497668;
LAB_02497598:
      if (iVar16 == 1) {
        pcVar33 = *(code **)(*unaff_x19 + 0x8f8);
        goto LAB_02497674;
      }
    }
    else {
      if (((int)uVar7 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
        if (uVar43 <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(uint *)(lVar28 + lVar39 * 0x178 + 0x68) != uStack000000000000002c) goto LAB_02497490;
        lVar44 = lVar28 + lVar39 * 0x178;
        *(ulong *)(lVar44 + 0x70) =
             CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar44 + 0x70) >> 0x20),
                      fVar72 + (float)*(undefined8 *)(lVar44 + 0x70));
        *(float *)(lVar44 + 0x78) = fVar53 + *(float *)(lVar44 + 0x78);
        if (*(uint *)(lVar28 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar44 = lVar28 + lVar39 * 0x178;
        *(ulong *)(lVar44 + 0x98) =
             CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar44 + 0x98) >> 0x20),
                      fVar72 + (float)*(undefined8 *)(lVar44 + 0x98));
        *(float *)(lVar44 + 0xa0) = fVar53 + *(float *)(lVar44 + 0xa0);
        if (*(uint *)(lVar28 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar44 = lVar28 + lVar39 * 0x178;
        *(ulong *)(lVar44 + 0xc0) =
             CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar44 + 0xc0) >> 0x20),
                      fVar72 + (float)*(undefined8 *)(lVar44 + 0xc0));
        *(float *)(lVar44 + 200) = fVar53 + *(float *)(lVar44 + 200);
        if (*(uint *)(lVar28 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar44 = lVar28 + lVar39 * 0x178;
        *(ulong *)(lVar44 + 0xe8) =
             CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar44 + 0xe8) >> 0x20),
                      fVar72 + (float)*(undefined8 *)(lVar44 + 0xe8));
        *(float *)(lVar44 + 0xf0) = fVar53 + *(float *)(lVar44 + 0xf0);
      }
      else {
LAB_02497490:
        if (uVar43 <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        puVar10 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        lVar30 = lVar28 + lVar39 * 0x178;
        uVar71 = *(undefined4 *)
                  (*(undefined8 **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8) + 1);
        *(undefined8 *)(lVar30 + 0x70) =
             **(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        *(undefined4 *)(lVar30 + 0x78) = uVar71;
        if (*(uint *)(lVar28 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar28 + lVar39 * 0x178;
        uVar71 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar30 + 0x98) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar30 + 0xa0) = uVar71;
        if (*(uint *)(lVar28 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar28 + lVar39 * 0x178;
        uVar71 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar30 + 0xc0) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar30 + 200) = uVar71;
        if (*(uint *)(lVar28 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar28 + lVar39 * 0x178;
        uVar71 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar30 + 0xe8) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar30 + 0xf0) = uVar71;
        if (*(uint *)(lVar28 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(undefined1 *)(lVar44 + 0x194) = 0;
      }
      if (iVar16 != 0) goto LAB_02497598;
LAB_02497668:
      pcVar33 = *(code **)(*unaff_x19 + 0x8d8);
LAB_02497674:
      (*pcVar33)();
    }
LAB_02497688:
    if ((*in_stack_00000150 == 0) || (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar44 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar44 = lVar44 + lVar39 * 0x178;
    uVar20 = *(undefined8 *)(lVar44 + 0x11c);
    *(undefined8 *)(lVar44 + 0x11c) =
         CONCAT44(fVar49 + (float)((ulong)uVar20 >> 0x20),fVar72 + (float)uVar20);
    *(float *)(lVar44 + 0x124) = fVar53 + *(float *)(lVar44 + 0x124);
    if ((*in_stack_00000150 == 0) || (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar44 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar44 = lVar44 + lVar39 * 0x178;
    *(ulong *)(lVar44 + 0x110) =
         CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar44 + 0x110) >> 0x20),
                  fVar72 + (float)*(undefined8 *)(lVar44 + 0x110));
    *(float *)(lVar44 + 0x118) = fVar53 + *(float *)(lVar44 + 0x118);
    if ((*in_stack_00000150 == 0) || (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar44 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar44 = lVar44 + lVar39 * 0x178;
    *(ulong *)(lVar44 + 0x128) =
         CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar44 + 0x128) >> 0x20),
                  fVar72 + (float)*(undefined8 *)(lVar44 + 0x128));
    *(float *)(lVar44 + 0x130) = fVar53 + *(float *)(lVar44 + 0x130);
    if ((*in_stack_00000150 == 0) || (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar44 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar44 = lVar44 + lVar39 * 0x178;
    *(float *)(lVar44 + 0x134) = fVar72 + *(float *)(lVar44 + 0x134);
    *(ulong *)(lVar44 + 0x138) =
         CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar44 + 0x138) >> 0x20),
                  fVar49 + (float)*(undefined8 *)(lVar44 + 0x138));
    lVar44 = *in_stack_00000150;
    if ((lVar44 == 0) || (lVar30 = *(long *)(lVar44 + 0x38), lVar30 == 0)) goto LAB_0249920c;
    uVar43 = *(uint *)(lVar30 + 0x18);
    if (uVar43 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar38 = lVar30 + lVar39 * 0x178;
    uVar57 = CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar38 + 0x140) >> 0x20),
                      fVar72 + (float)*(undefined8 *)(lVar38 + 0x140));
    fVar68 = fVar49 + *(float *)(lVar38 + 0x150);
    uVar58 = (ulong)(uint)fVar68;
    uVar60 = CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar38 + 0x148) >> 0x20),
                      fVar49 + (float)*(undefined8 *)(lVar38 + 0x148));
    *(ulong *)(lVar38 + 0x140) = uVar57;
    *(ulong *)(lVar38 + 0x148) = uVar60;
    *(float *)(lVar38 + 0x150) = fVar68;
    if (uVar7 == uVar59) {
      uVar59 = *in_stack_00000148 - 1;
      if (uVar15 == uVar59) goto LAB_0249788c;
    }
    else {
      lVar44 = *(long *)(lVar44 + 0x50);
      if (lVar44 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar44 + 0x18) <= uVar59)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar38 = (long)(int)uVar59;
      lVar40 = lVar44 + lVar38 * 0x5c;
      uVar60 = (ulong)(uint)*(float *)(lVar40 + 0x58);
      fVar68 = fVar49 + *(float *)(lVar40 + 0x54);
      uVar57 = (ulong)(uint)fVar68;
      fVar50 = fVar72 + *(float *)(lVar40 + 0x58);
      uVar58 = (ulong)(uint)fVar50;
      *(ulong *)(lVar40 + 0x4c) =
           CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar40 + 0x4c) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar40 + 0x4c));
      *(float *)(lVar40 + 0x54) = fVar68;
      *(float *)(lVar40 + 0x58) = fVar50;
      if (uVar43 <= *(uint *)(lVar40 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar71 = *(undefined4 *)(lVar30 + (long)(int)*(uint *)(lVar40 + 0x34) * 0x178 + 0x11c);
      lVar44 = lVar44 + lVar38 * 0x5c;
      *(float *)(lVar44 + 0x70) = fVar68;
      *(undefined4 *)(lVar44 + 0x6c) = uVar71;
      lVar44 = *in_stack_00000150;
      if ((lVar44 == 0) || (lVar30 = *(long *)(lVar44 + 0x50), lVar30 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar30 + 0x18) <= uVar59)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar44 = *(long *)(lVar44 + 0x38);
      if (lVar44 == 0) goto LAB_0249920c;
      uVar59 = *(uint *)(lVar30 + lVar38 * 0x5c + 0x40);
      if (*(uint *)(lVar44 + 0x18) <= uVar59)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar30 + lVar38 * 0x5c;
      *(undefined4 *)(lVar30 + 0x74) = *(undefined4 *)(lVar44 + (long)(int)uVar59 * 0x178 + 0x128);
      *(undefined4 *)(lVar30 + 0x78) = *(undefined4 *)(lVar30 + 0x4c);
      uVar59 = *in_stack_00000148 - 1;
LAB_0249788c:
      if (uVar15 == uVar59) {
        lVar44 = *in_stack_00000150;
        if ((lVar44 == 0) || (lVar30 = *(long *)(lVar44 + 0x50), lVar30 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= uVar7)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar38 = lVar30 + lVar35 * 0x5c;
        uVar60 = (ulong)(uint)*(float *)(lVar38 + 0x58);
        uVar57 = CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar38 + 0x4c) >> 0x20),
                          fVar49 + (float)*(undefined8 *)(lVar38 + 0x4c));
        fVar68 = fVar49 + *(float *)(lVar38 + 0x54);
        fVar72 = fVar72 + *(float *)(lVar38 + 0x58);
        uVar58 = (ulong)(uint)fVar72;
        *(ulong *)(lVar38 + 0x4c) = uVar57;
        *(float *)(lVar38 + 0x54) = fVar68;
        *(float *)(lVar38 + 0x58) = fVar72;
        lVar44 = *(long *)(lVar44 + 0x38);
        if (lVar44 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar44 + 0x18) <= *(uint *)(lVar38 + 0x34))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar71 = *(undefined4 *)(lVar44 + (long)(int)*(uint *)(lVar38 + 0x34) * 0x178 + 0x11c);
        lVar30 = lVar30 + lVar35 * 0x5c;
        *(float *)(lVar30 + 0x70) = fVar68;
        *(undefined4 *)(lVar30 + 0x6c) = uVar71;
        lVar44 = *in_stack_00000150;
        if ((lVar44 == 0) || (lVar30 = *(long *)(lVar44 + 0x50), lVar30 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= uVar7)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar44 = *(long *)(lVar44 + 0x38);
        if (lVar44 == 0) goto LAB_0249920c;
        uVar59 = *(uint *)(lVar30 + lVar35 * 0x5c + 0x40);
        if (*(uint *)(lVar44 + 0x18) <= uVar59)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar30 + lVar35 * 0x5c;
        *(undefined4 *)(lVar30 + 0x74) = *(undefined4 *)(lVar44 + (long)(int)uVar59 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar30 + 0x78) = *(undefined4 *)(lVar30 + 0x4c);
      }
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar22 = FUN_016f9468(uVar41,0);
    if (((((uVar22 & 1) == 0) && (1 < uVar41 - 0x2010)) && (uVar41 != 0xad)) && (uVar41 != 0x2d)) {
      if (bVar12) {
        if (((uVar36 != 1) && ((int)uVar15 < (int)(*(uint *)(lVar28 + 0x18) - 1))) &&
           (((int)uVar15 < (int)*in_stack_00000148 && ((uVar41 == 0x2019 || (uVar41 == 0x27)))))) {
          if (*(uint *)(lVar28 + 0x18) <= uVar36 - 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar4 = *(undefined2 *)(lVar28 + lVar31 + -0x438);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar22 = FUN_016f9468(uVar4,0);
          if ((uVar22 & 1) != 0) {
            if (*(uint *)(lVar28 + 0x18) <= uVar36)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar4 = *(undefined2 *)(lVar28 + lVar31 + -0x148);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar22 = FUN_016f9468(uVar4,0);
            if ((uVar22 & 1) != 0) goto LAB_02497aa4;
          }
        }
      }
      else {
        if (uVar36 != 1) {
LAB_024985a0:
          bVar12 = false;
          goto LAB_02497aac;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar22 = FUN_016f93a0(uVar41,0);
        if ((uVar22 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar22 = FUN_016f68bc(uVar41,0);
          if (((uVar41 != 0x200b) && ((uVar22 & 1) == 0)) && (*in_stack_00000148 != 1))
          goto LAB_024985a0;
        }
      }
      if (uVar15 == *in_stack_00000148 - 1) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar22 = FUN_016f9468(uVar41,0);
        iVar16 = iVar47;
        if ((uVar22 & 1) == 0) goto LAB_02497de0;
      }
      else {
LAB_02497de0:
        iVar16 = uVar36 - 2;
      }
      lVar44 = *in_stack_00000150;
      if (lVar44 == 0) goto LAB_0249920c;
      lVar30 = *(long *)(lVar44 + 0x40);
      if (lVar30 == 0) goto LAB_0249920c;
      uVar59 = *(uint *)(lVar44 + 0x24);
      iVar17 = *(int *)(lVar30 + 0x18);
      if (iVar17 < (int)(uVar59 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar44 + 0x40),iVar17 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar44 = *in_stack_00000150;
        if (lVar44 == 0) goto LAB_0249920c;
      }
      lVar30 = *(long *)(lVar44 + 0x40);
      if (lVar30 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar30 + 0x18) <= uVar59)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar30 + (long)(int)uVar59 * 0x18;
      *(uint *)(lVar30 + 0x28) = uVar19;
      *(int *)(lVar30 + 0x2c) = iVar16;
      *(uint *)(lVar30 + 0x30) = (iVar16 - uVar19) + 1;
      *(long **)(lVar30 + 0x20) = unaff_x19;
      lVar30 = *(long *)(lVar44 + 0x50);
      *(int *)(lVar44 + 0x24) = *(int *)(lVar44 + 0x24) + 1;
      if (lVar30 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar30 + 0x18) <= uVar7)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar30 + lVar35 * 0x5c;
      bVar12 = false;
      fStack00000000000000ac = (float)((int)fStack00000000000000ac + 1);
      *(int *)(lVar30 + 0x30) = *(int *)(lVar30 + 0x30) + 1;
    }
    else {
      if (!bVar12) {
        uVar19 = uVar15;
      }
      if (uVar15 == *in_stack_00000148 - 1) {
        lVar44 = *in_stack_00000150;
        if (lVar44 == 0) goto LAB_0249920c;
        lVar30 = *(long *)(lVar44 + 0x40);
        if (lVar30 == 0) goto LAB_0249920c;
        uVar59 = *(uint *)(lVar44 + 0x24);
        iVar16 = *(int *)(lVar30 + 0x18);
        if (iVar16 < (int)(uVar59 + 1)) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147b84((long *)(lVar44 + 0x40),iVar16 + 1,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
          lVar44 = *in_stack_00000150;
          if (lVar44 == 0) goto LAB_0249920c;
        }
        lVar30 = *(long *)(lVar44 + 0x40);
        if (lVar30 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= uVar59)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar30 + (long)(int)uVar59 * 0x18;
        *(uint *)(lVar30 + 0x28) = uVar19;
        *(uint *)(lVar30 + 0x2c) = uVar15;
        *(long **)(lVar30 + 0x20) = unaff_x19;
        *(uint *)(lVar30 + 0x30) = uVar36 - uVar19;
        lVar30 = *(long *)(lVar44 + 0x50);
        *(int *)(lVar44 + 0x24) = *(int *)(lVar44 + 0x24) + 1;
        if (lVar30 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= uVar7)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar30 + lVar35 * 0x5c;
        fStack00000000000000ac = (float)((int)fStack00000000000000ac + 1);
        *(int *)(lVar30 + 0x30) = *(int *)(lVar30 + 0x30) + 1;
      }
LAB_02497aa4:
      bVar12 = true;
    }
LAB_02497aac:
    if ((*in_stack_00000150 == 0) || (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0))
    goto LAB_0249920c;
    uVar59 = *(uint *)(lVar44 + 0x18);
    if (uVar59 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar44 + lVar39 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar13) {
LAB_02497adc:
        if (uVar59 <= uVar36 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar35 = *unaff_x19;
        uVar59 = *(uint *)(lVar44 + lVar31 + -0x330);
        uVar71 = *(undefined4 *)(lVar44 + lVar31 + -0x2f8);
LAB_0249805c:
        pcVar33 = *(code **)(lVar35 + 0x908);
LAB_02498064:
        uVar60 = (ulong)uVar59;
        uVar57 = (ulong)(uint)fStack0000000000000050;
        uVar58 = (ulong)(uint)fStack0000000000000054;
        (*pcVar33)(fStack0000000000000058,uVar57,uVar58,uVar60,fStack00000000000000d0,0,
                   _bStack000000000000005c,uVar71);
        puVar10 = System_Threading_Mutex_TypeInfo;
        lVar44 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar44 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar44 = *(long *)puVar10;
        }
LAB_024980b4:
        bVar13 = false;
        fVar66 = 0.0;
        fStack00000000000000d0 = *(float *)(*(long *)(lVar44 + 0xb8) + 0x15a8);
        fStack00000000000000cc = 0.0;
      }
      else {
LAB_02497fc4:
        bVar13 = false;
      }
    }
    else {
      lVar44 = lVar44 + lVar39 * 0x178;
      iVar16 = *(int *)(lVar44 + 0x68);
      *(int *)(lVar44 + 0x16c) = iVar18;
      if ((((int)unaff_x19[100] < (int)uVar15) || ((int)unaff_x19[0x65] < (int)uVar7)) ||
         (((int)unaff_x19[0x5b] == 5 && (iVar16 + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar22 = FUN_016f68bc(uVar41,0);
      if ((uVar41 != 0x200b) && ((uVar22 & 1) == 0)) {
        lVar44 = *in_stack_00000150;
        if ((lVar44 == 0) || (lVar35 = *(long *)(lVar44 + 0x38), lVar35 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar35 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar68 = *(float *)(lVar35 + lVar39 * 0x178 + 0x160);
        if (fVar66 <= fVar68) {
          fVar66 = fVar68;
        }
        if (fStack00000000000000cc <= ABS(fVar55)) {
          fStack00000000000000cc = ABS(fVar55);
        }
        if ((float)iVar16 != fStack000000000000004c) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar44 = *in_stack_00000150;
            if (lVar44 == 0) goto LAB_0249920c;
            lVar35 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          else {
            lVar35 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          fStack00000000000000d0 = *(float *)(lVar35 + 0x15a8);
        }
        lVar44 = *(long *)(lVar44 + 0x38);
        if (lVar44 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar44 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0x1e] == 0) goto LAB_0249920c;
        fVar50 = *(float *)(lVar44 + lVar39 * 0x178 + 0x14c);
        fVar68 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
        fVar50 = fVar50 + fVar66 * fVar68;
        if (fVar50 <= fStack00000000000000d0) {
          fStack00000000000000d0 = fVar50;
        }
        uVar57 = (ulong)(uint)fStack00000000000000d0;
        fStack000000000000004c = (float)iVar16;
      }
      if (!bVar13) {
        bVar13 = false;
        if ((((uVar41 == 0xd) || ((uVar41 | 1) == 0xb)) || ((int)uVar6 < (int)uVar15)) ||
           ((bool)(bVar1 ^ 1))) goto LAB_024980d0;
        if (uVar15 == uVar6) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar22 = FUN_016fa418(uVar41,0);
          if ((uVar22 & 1) != 0) goto LAB_02497fc4;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar44 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar44 = lVar44 + lVar39 * 0x178;
        _bStack000000000000005c = *(float *)(lVar44 + 0x160);
        fStack0000000000000058 = *(float *)(lVar44 + 0x11c);
        bVar13 = fVar66 != 0.0;
        fVar68 = _bStack000000000000005c;
        if (bVar13) {
          fVar68 = fVar66;
        }
        fVar66 = fVar68;
        uStack0000000000000060 = *(uint *)(lVar44 + 0x168);
        fStack0000000000000054 = 0.0;
        fVar68 = fVar55;
        if (bVar13) {
          fVar68 = fStack00000000000000cc;
        }
        uVar57 = (ulong)(uint)fVar68;
        fStack0000000000000050 = fStack00000000000000d0;
        fStack00000000000000cc = fVar68;
      }
      if (*in_stack_00000148 == 1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 != 0)) {
          if (uVar15 < *(uint *)(lVar44 + 0x18)) {
            lVar44 = lVar44 + lVar39 * 0x178;
            lVar35 = *unaff_x19;
            uVar59 = *(uint *)(lVar44 + 0x128);
            uVar71 = *(undefined4 *)(lVar44 + 0x160);
            goto LAB_0249805c;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if ((uVar15 == uVar5) || ((int)uVar6 <= (int)uVar15)) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar22 = FUN_016f68bc(uVar41,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 != 0)) {
          if (uVar41 == 0x200b || (uVar22 & 1) != 0) {
            lVar35 = lVar23;
            if (*(uint *)(lVar44 + 0x18) <= uVar6)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
            lVar35 = lVar39;
            if (*(uint *)(lVar44 + 0x18) <= uVar15)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          lVar44 = lVar44 + lVar35 * 0x178;
          uVar59 = *(uint *)(lVar44 + 0x128);
          uVar71 = *(undefined4 *)(lVar44 + 0x160);
          pcVar33 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_02498064;
        }
        goto LAB_0249920c;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 != 0)) {
          uVar59 = *(uint *)(lVar44 + 0x18);
          goto LAB_02497adc;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar15 < (int)(*in_stack_00000148 - 1)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar44 + 0x18) <= uVar36)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar22 = FUN_024a9e4c(uStack0000000000000060,*(undefined4 *)(lVar44 + lVar31),0);
        if ((uVar22 & 1) == 0) {
          if ((*in_stack_00000150 != 0) &&
             (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 != 0)) {
            if (uVar15 < *(uint *)(lVar44 + 0x18)) {
              lVar44 = lVar44 + lVar39 * 0x178;
              uVar60 = (ulong)*(uint *)(lVar44 + 0x128);
              uVar58 = (ulong)(uint)fStack0000000000000054;
              uVar57 = (ulong)(uint)fStack0000000000000050;
              (**(code **)(*unaff_x19 + 0x908))
                        (fStack0000000000000058,uVar57,uVar58,uVar60,fStack00000000000000d0,0,
                         _bStack000000000000005c,*(undefined4 *)(lVar44 + 0x160));
              puVar10 = System_Threading_Mutex_TypeInfo;
              lVar44 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar44 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar44 = *(long *)puVar10;
              }
              goto LAB_024980b4;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          goto LAB_0249920c;
        }
      }
      bVar13 = true;
    }
LAB_024980d0:
    if ((*in_stack_00000150 == 0) || (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar44 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (lVar37 == 0) goto LAB_0249920c;
    uVar59 = *(uint *)(lVar44 + lVar39 * 0x178 + 400);
    fVar68 = (float)FUN_026fd1f0(lVar37 + 0x50,0);
    if ((uVar59 >> 6 & 1) == 0) {
      if (bVar8) {
        if ((*in_stack_00000150 == 0) ||
           (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar44 + 0x18) <= uVar36 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar59 = *(uint *)(lVar44 + lVar31 + -0x330);
        pcVar33 = *(code **)(*unaff_x19 + 0x908);
        fVar49 = fStack0000000000000088 * fVar68 + *(float *)(lVar44 + lVar31 + -0x30c);
LAB_02498648:
        uVar60 = (ulong)uVar59;
        uVar57 = (ulong)(uint)in_stack_00000078._4_4_;
        uVar58 = (ulong)in_stack_00000068._4_4_;
        (*pcVar33)(fStack0000000000000080,uVar57,uVar58,uVar60,fVar49,0,fStack0000000000000088,
                   fStack0000000000000088);
      }
LAB_0249867c:
      bVar8 = false;
    }
    else {
      lVar44 = *in_stack_00000150;
      if ((lVar44 == 0) || (lVar35 = *(long *)(lVar44 + 0x38), lVar35 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar35 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(int *)(lVar35 + lVar39 * 0x178 + 0x174) = iVar18;
      if ((((int)unaff_x19[100] < (int)uVar15) || ((int)unaff_x19[0x65] < (int)uVar7)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar35 + lVar39 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uVar41 == 0xd) || ((uVar41 | 1) == 0xb)) || ((int)uVar6 < (int)uVar15)) ||
         (bVar8 || !bVar1)) {
LAB_02498228:
        if (!bVar8) goto LAB_0249867c;
      }
      else {
        if (uVar15 == uVar6) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar22 = FUN_016fa418(uVar41,0);
          if ((uVar22 & 1) != 0) goto LAB_02498228;
          lVar44 = *in_stack_00000150;
          if (lVar44 == 0) goto LAB_0249920c;
        }
        lVar44 = *(long *)(lVar44 + 0x38);
        if (lVar44 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar44 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar44 = lVar44 + lVar39 * 0x178;
        fStack0000000000000034 = *(float *)(lVar44 + 0x60);
        fStack0000000000000088 = *(float *)(lVar44 + 0x160);
        fStack0000000000000030 = *(float *)(lVar44 + 0x14c);
        uVar57 = (ulong)(uint)fStack0000000000000030;
        fStack0000000000000080 = *(float *)(lVar44 + 0x11c);
        in_stack_00000078._4_4_ = fVar68 * fStack0000000000000088 + fStack0000000000000030;
        in_stack_00000068._4_4_ = 0;
      }
      uVar59 = *in_stack_00000148;
      if (uVar59 == 1) {
LAB_024983ac:
        if ((*in_stack_00000150 != 0) &&
           (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 != 0)) {
          if (uVar15 < *(uint *)(lVar44 + 0x18)) {
            lVar44 = lVar44 + lVar39 * 0x178;
            lVar23 = *unaff_x19;
            uVar59 = *(uint *)(lVar44 + 0x128);
            fVar49 = *(float *)(lVar44 + 0x14c);
LAB_024983d8:
            pcVar33 = *(code **)(lVar23 + 0x908);
FUN_02498644:
            fVar49 = fVar68 * fStack0000000000000088 + fVar49;
            goto LAB_02498648;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if (uVar15 == uVar5) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar22 = FUN_016f68bc(uVar41,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 != 0)) {
          uVar59 = *(uint *)(lVar44 + 0x18);
          if (uVar41 == 0x200b || (uVar22 & 1) != 0) {
            if (uVar59 <= uVar6)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
LAB_02498620:
            lVar23 = lVar39;
            if (uVar59 <= uVar15)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
LAB_02498628:
          lVar44 = lVar44 + lVar23 * 0x178;
          fVar49 = *(float *)(lVar44 + 0x14c);
          uVar59 = *(uint *)(lVar44 + 0x128);
          pcVar33 = *(code **)(*unaff_x19 + 0x908);
          goto FUN_02498644;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar15 < (int)uVar59) {
        lVar44 = *in_stack_00000150;
        if ((lVar44 != 0) && (lVar35 = *(long *)(lVar44 + 0x38), lVar35 != 0)) {
          if (uVar36 < *(uint *)(lVar35 + 0x18)) {
            if (*(float *)(lVar35 + lVar31 + -0x108) == fStack0000000000000034) {
              fVar50 = *(float *)(lVar35 + lVar31 + -0x1c);
              if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar57 = (ulong)(uint)fStack0000000000000030;
              uVar22 = FUN_024aa280(fVar49 + fVar50,uVar57,0);
              if ((uVar22 & 1) != 0) {
                uVar59 = *in_stack_00000148;
                goto 
                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
                ;
              }
              lVar44 = *in_stack_00000150;
              if (lVar44 == 0) goto LAB_0249920c;
            }
            lVar44 = *(long *)(lVar44 + 0x38);
            if (lVar44 != 0) {
              uVar59 = *(uint *)(lVar44 + 0x18);
              if ((int)uVar15 <= (int)uVar6) goto LAB_02498620;
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
      if ((int)uVar15 < (int)uVar59) {
        iVar16 = FUN_02681c0c(lVar37,0);
        if (*(uint *)(lVar28 + 0x18) <= uVar36)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar44 = *(long *)(lVar28 + lVar31 + -0x130);
        if (lVar44 == 0) goto LAB_0249920c;
        iVar17 = FUN_02681c0c(lVar44,0);
        if (iVar16 != iVar17) goto LAB_024983ac;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 != 0)) {
          if (uVar36 - 2 < *(uint *)(lVar44 + 0x18)) {
            lVar23 = *unaff_x19;
            uVar59 = *(uint *)(lVar44 + lVar31 + -0x330);
            fVar49 = *(float *)(lVar44 + lVar31 + -0x30c);
            goto LAB_024983d8;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      bVar8 = true;
    }
    if ((*in_stack_00000150 == 0) || (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0))
    goto LAB_0249920c;
    uVar59 = (uint)*(undefined8 *)(lVar44 + 0x18);
    if (uVar59 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar44 + lVar39 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar9) {
        uVar58 = (ulong)uStack00000000000000a0;
        uVar60 = (ulong)(uint)fStack00000000000000a4;
        uVar57 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar57,uVar58,uVar60,fStack00000000000000a8,uVar58);
      }
LAB_024986e8:
      bVar9 = false;
    }
    else {
      if ((((int)unaff_x19[100] < (int)uVar15) || ((int)unaff_x19[0x65] < (int)uVar7)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar44 + lVar39 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar9) {
        if ((((uVar41 == 0xd) || ((uVar41 | 1) == 0xb)) || ((int)uVar6 < (int)uVar15)) || (!bVar1))
        goto LAB_024986e8;
        if (uVar15 == uVar6) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar22 = FUN_016fa418(uVar41,0);
          if ((uVar22 & 1) != 0) goto LAB_024986e8;
        }
        puVar10 = System_Threading_Mutex_TypeInfo;
        lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar23 = *(long *)puVar10;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0)) goto LAB_0249920c;
        uVar59 = (uint)*(undefined8 *)(lVar44 + 0x18);
        if (uVar59 <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar23 = *(long *)(lVar23 + 0xb8);
        lVar35 = lVar44 + lVar39 * 0x178;
        in_stack_00001798 = *(undefined8 *)(lVar35 + 0x184);
        in_stack_00001790 = *(undefined8 *)(lVar35 + 0x17c);
        fStack00000000000000b0 = *(float *)(lVar23 + 0x1598);
        in_stack_000017a0 = *(float *)(lVar35 + 0x18c);
        fStack00000000000000b4 = *(float *)(lVar23 + 0x159c);
        fStack00000000000000a4 = *(float *)(lVar23 + 0x15a0);
        fStack00000000000000a8 = *(float *)(lVar23 + 0x15a4);
        uStack00000000000000a0 = 0;
      }
      if (uVar59 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar44 = lVar44 + lVar39 * 0x178;
      fVar63 = *(float *)(lVar44 + 0x188);
      uVar21 = *(undefined8 *)(lVar44 + 0x17c);
      fVar52 = *(float *)(lVar44 + 0x184);
      uVar20 = *(undefined8 *)(lVar44 + 0x184);
      fVar65 = *(float *)(lVar44 + 0x18c);
      fVar49 = *(float *)(lVar44 + 0x11c);
      fVar50 = *(float *)(lVar44 + 0x128);
      fVar69 = *(float *)(lVar44 + 0x148);
      fVar68 = *(float *)(lVar44 + 0x150);
      in_stack_00000158 = uVar21;
      fStack0000000000000160 = fVar52;
      fStack0000000000000164 = fVar63;
      in_stack_00000168 = fVar65;
      in_stack_00000170 = in_stack_00001790;
      in_stack_00000178 = in_stack_00001798;
      in_stack_00000180 = in_stack_000017a0;
      uVar22 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
      lVar44 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
      if ((uVar22 & 1) == 0) {
        if (*(int *)(lVar44 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar44);
        }
        fVar49 = fVar49 - (float)((ulong)in_stack_00001790 >> 0x20);
        if (fVar49 <= fStack00000000000000b0) {
          fStack00000000000000b0 = fVar49;
        }
        fVar68 = fVar68 - in_stack_000017a0;
        uVar57 = (ulong)(uint)fVar68;
        fVar50 = fVar50 + (float)in_stack_00001798;
        uVar58 = (ulong)(uint)fVar50;
        if (fVar68 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar68;
        }
        fVar69 = fVar69 + (float)((ulong)in_stack_00001798 >> 0x20);
        uVar60 = (ulong)(uint)fVar69;
        if (fStack00000000000000a4 <= fVar50) {
          fStack00000000000000a4 = fVar50;
        }
        if (fStack00000000000000a8 <= fVar69) {
          fStack00000000000000a8 = fVar69;
        }
      }
      else {
        if (*(int *)(lVar44 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar44);
        }
        fVar49 = (fVar49 + (fStack00000000000000a4 - (float)in_stack_00001798)) * 0.5;
        uVar60 = (ulong)(uint)fVar49;
        if (fVar68 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar68;
        }
        uVar57 = (ulong)(uint)fStack00000000000000b4;
        uVar58 = (ulong)uStack00000000000000a0;
        if (fStack00000000000000a8 <= fVar69) {
          fStack00000000000000a8 = fVar69;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar57,uVar58,uVar60,fStack00000000000000a8,uVar58);
        fStack00000000000000b4 = fVar68 - fVar65;
        fStack00000000000000a4 = fVar50 + fVar52;
        uStack00000000000000a0 = 0;
        fStack00000000000000a8 = fVar69 + fVar63;
        fStack00000000000000b0 = fVar49;
        in_stack_00001790 = uVar21;
        in_stack_00001798 = uVar20;
        in_stack_000017a0 = fVar65;
      }
      if (((*in_stack_00000148 == 1) || (uVar15 == uVar5)) ||
         (((int)uVar6 <= (int)uVar15 || (!bVar1)))) {
        uVar58 = (ulong)uStack00000000000000a0;
        uVar60 = (ulong)(uint)fStack00000000000000a4;
        uVar57 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar57,uVar58,uVar60,fStack00000000000000a8,uVar58);
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
    }
    uVar15 = *in_stack_00000148;
    iVar47 = iVar47 + 1;
    lVar31 = lVar31 + 0x178;
    bVar1 = (int)uVar36 < (int)uVar15;
    uVar59 = uVar7;
    uVar36 = uVar36 + 1;
  } while (bVar1);
  lVar28 = *in_stack_00000150;
  if (lVar28 != 0) {
    iVar18 = uVar7 + 1;
LAB_02498c58:
    puVar11 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    puVar10 = PTR_DAT_033ed410;
    *(uint *)(lVar28 + 0x18) = uVar15;
    lVar31 = unaff_x19[0xd3];
    *(int *)(lVar28 + 0x2c) = iVar18;
    iVar18 = (int)fStack00000000000000ac;
    if ((int)uVar15 < 1) {
      iVar18 = 1;
    }
    if (fStack00000000000000ac == 0.0) {
      iVar18 = 1;
    }
    *(int *)(lVar28 + 0x1c) = (int)lVar31;
    *(int *)(lVar28 + 0x24) = iVar18;
    *(int *)(lVar28 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar22 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar22 & 1) == 0)) {
LAB_02496098:
      if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__ + 0xe0) == 0
         ) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar28 = unaff_x19[0xde];
    if (lVar28 != 0) {
      (**(code **)(lVar28 + 0x18))
                (*(undefined8 *)(lVar28 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar28 + 0x28));
    }
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    iVar18 = FUN_02859dc4(unaff_x19[0xe4],0);
    if (iVar18 != 0x19) {
      lVar28 = unaff_x19[0xe4];
      if (lVar28 == 0) goto LAB_0249920c;
      uVar15 = FUN_02859dc4(lVar28,0);
      FUN_02859e00(lVar28,uVar15 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x60), lVar28 == 0))
      goto LAB_0249920c;
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar28 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      FUN_024e8000(lVar28 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar28 = *(long *)(unaff_x19[0x6c] + 0x60), lVar28 != 0)) {
        if (*(int *)(lVar28 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar28 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar28 = *(long *)(unaff_x19[0x6c] + 0x60), lVar28 != 0)) {
            if (*(int *)(lVar28 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar28 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar28 = *(long *)(unaff_x19[0x6c] + 0x60), lVar28 != 0)) {
                if (*(int *)(lVar28 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar28 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar28 = *(long *)(unaff_x19[0x6c] + 0x60), lVar28 != 0)) {
                    if (*(int *)(lVar28 + 0x18) == 0)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar28 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        if (unaff_x19[0xe3] != 0) {
                          FUN_02858f1c(unaff_x19[0xe3],unaff_x19[0x73],0);
                          if (unaff_x19[0xe3] != 0) {
                            uVar20 = FUN_02858bac(unaff_x19[0xe3],0);
                            if (unaff_x19[0xe3] != 0) {
                              uVar15 = FUN_02858a14(unaff_x19[0xe3],0);
                              lVar28 = *in_stack_00000150;
                              if (lVar28 != 0) {
                                lVar44 = 0;
                                lVar31 = 0;
                                do {
                                  uVar22 = lVar31 + 1;
                                  if ((long)*(int *)(lVar28 + 0x34) <= (long)uVar22)
                                  goto LAB_02496098;
                                  lVar28 = *(long *)(lVar28 + 0x60);
                                  if (lVar28 == 0) break;
                                  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  if (*(uint *)(lVar28 + 0x18) <= uVar22)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  FUN_024e7ecc(lVar28 + lVar44 + 0x70,0);
                                  lVar28 = unaff_x19[0xe0];
                                  if (lVar28 == 0) break;
                                  if (*(uint *)(lVar28 + 0x18) <= uVar22)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  uVar21 = *(undefined8 *)(lVar28 + lVar31 * 8 + 0x28);
                                  if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar25 = FUN_0268b4e0(uVar21,0,0);
                                  if ((uVar25 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                      if ((*in_stack_00000150 == 0) ||
                                         (lVar28 = *(long *)(*in_stack_00000150 + 0x60), lVar28 == 0
                                         )) break;
                                      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      if (*(uint *)(lVar28 + 0x18) <= uVar22)
                                      goto 
                                      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                      ;
                                      FUN_024e8000(lVar28 + lVar44 + 0x70,1,0);
                                    }
                                    lVar28 = unaff_x19[0xe0];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar28 = *(long *)(lVar28 + lVar31 * 8 + 0x28);
                                    if (lVar28 == 0) break;
                                    lVar28 = FUN_024f0144(lVar28,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar23 = *(long *)(*in_stack_00000150 + 0x60), lVar23 == 0))
                                    break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar28 == 0) break;
                                    FUN_0266b9c4(lVar28,*(undefined8 *)(lVar23 + lVar44 + 0x80),0);
                                    lVar28 = unaff_x19[0xe0];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar28 = *(long *)(lVar28 + lVar31 * 8 + 0x28);
                                    if (lVar28 == 0) break;
                                    lVar28 = FUN_024f0144(lVar28,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar23 = *(long *)(*in_stack_00000150 + 0x60), lVar23 == 0))
                                    break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar28 == 0) break;
                                    FUN_0266bbc8(lVar28,*(undefined8 *)(lVar23 + lVar44 + 0x98),0);
                                    lVar28 = unaff_x19[0xe0];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar28 = *(long *)(lVar28 + lVar31 * 8 + 0x28);
                                    if (lVar28 == 0) break;
                                    lVar28 = FUN_024f0144(lVar28,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar23 = *(long *)(*in_stack_00000150 + 0x60), lVar23 == 0))
                                    break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar28 == 0) break;
                                    FUN_0266bc74(lVar28,*(undefined8 *)(lVar23 + lVar44 + 0xa0),0);
                                    lVar28 = unaff_x19[0xe0];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar28 = *(long *)(lVar28 + lVar31 * 8 + 0x28);
                                    if (lVar28 == 0) break;
                                    lVar28 = FUN_024f0144(lVar28,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar23 = *(long *)(*in_stack_00000150 + 0x60), lVar23 == 0))
                                    break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar28 == 0) break;
                                    FUN_0266c1dc(lVar28,*(undefined8 *)(lVar23 + lVar44 + 0xa8),0);
                                    lVar28 = unaff_x19[0xe0];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar28 = *(long *)(lVar28 + lVar31 * 8 + 0x28);
                                    if ((lVar28 == 0) ||
                                       (lVar28 = FUN_024f0144(lVar28,0), lVar28 == 0)) break;
                                    FUN_0266ed90(lVar28,0);
                                    lVar28 = unaff_x19[0xe0];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar28 = *(long *)(lVar28 + lVar31 * 8 + 0x28);
                                    if (lVar28 == 0) break;
                                    lVar28 = FUN_02738ef4(lVar28,0);
                                    lVar23 = unaff_x19[0xe0];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar23 = *(long *)(lVar23 + lVar31 * 8 + 0x28);
                                    if ((lVar23 == 0) ||
                                       (uVar21 = FUN_024f0144(lVar23,0), lVar28 == 0)) break;
                                    FUN_02858f1c(lVar28,uVar21,0);
                                    lVar28 = unaff_x19[0xe0];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar28 = *(long *)(lVar28 + lVar31 * 8 + 0x28);
                                    if ((lVar28 == 0) ||
                                       (lVar28 = FUN_02738ef4(lVar28,0), lVar28 == 0)) break;
                                    FUN_02858b14(uVar20,uVar57,uVar58,uVar60,lVar28,0);
                                    lVar28 = unaff_x19[0xe0];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar28 = *(long *)(lVar28 + lVar31 * 8 + 0x28);
                                    if ((lVar28 == 0) ||
                                       (lVar28 = FUN_02738ef4(lVar28,0), lVar28 == 0)) break;
                                    FUN_02858a50(lVar28,uVar15 & 1,0);
                                    lVar28 = unaff_x19[0xe0];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    plVar42 = *(long **)(lVar28 + lVar31 * 8 + 0x28);
                                    uVar19 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar42 == (long *)0x0) break;
                                    (**(code **)(*plVar42 + 0x2c8))
                                              (plVar42,uVar19 & 1,*(undefined8 *)(*plVar42 + 0x2d0))
                                    ;
                                  }
                                  lVar28 = *in_stack_00000150;
                                  lVar31 = lVar31 + 1;
                                  lVar44 = lVar44 + 0x50;
                                } while (lVar28 != 0);
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


