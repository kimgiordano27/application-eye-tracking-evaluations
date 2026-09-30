/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor$$get_playHapticsOnHoverExited
ENTRY_POINT: 02493dac
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

void UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited
               (float param_1,undefined1 param_2 [16],float param_3,undefined1 param_4 [16],
               float param_5)

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
  ulong uVar24;
  int *piVar25;
  ulong uVar26;
  ulong uVar27;
  undefined1 uVar28;
  char cVar29;
  long lVar30;
  undefined4 *puVar31;
  long lVar32;
  long lVar33;
  float *pfVar34;
  code *pcVar35;
  float *pfVar36;
  long lVar37;
  uint uVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long *unaff_x19;
  uint unaff_w20;
  uint uVar43;
  long unaff_x21;
  long *plVar44;
  uint uVar45;
  uint unaff_w23;
  uint unaff_w24;
  uint unaff_w25;
  long lVar46;
  long *plVar47;
  uint unaff_w26;
  long unaff_x27;
  undefined1 *unaff_x28;
  long *plVar48;
  uint unaff_w29;
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
  float fVar60;
  uint uVar61;
  ulong uVar62;
  float fVar63;
  float unaff_s8;
  float fVar64;
  float unaff_s9;
  float fVar65;
  float unaff_s10;
  float fVar66;
  float fVar67;
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
  
code_r0x02493dac:
  uVar20 = in_stack_000017a8;
  plVar44 = (long *)System_Threading_Mutex_TypeInfo;
  uVar15 = (uint)unaff_x21;
  fVar60 = unaff_s12 - param_3;
  uVar24 = (ulong)(uint)fVar60;
  fVar66 = ABS(unaff_s10) + param_1 * fVar60 * param_5;
  fVar50 = _DAT_0294c6e8;
  if (unaff_w26 == 0) {
    fVar50 = unaff_s12;
  }
  iVar18 = (int)unaff_x27;
  if (fVar50 * fStack00000000000000d4 < fVar66) {
    if (((char)unaff_x19[0x5a] == '\0') || (unaff_w23 == *(uint *)(unaff_x19 + 0x92))) {
      if (((char)unaff_x19[0x46] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
        fVar58 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if (param_3 < fVar58) {
          fVar60 = fVar66 / fVar60;
          if (param_3 <= 0.0) {
            fVar60 = fVar66;
          }
          param_3 = param_3 + (fVar66 - fVar50 * (fStack00000000000000d4 + DAT_02958218)) / fVar60;
          goto LAB_0249929c;
        }
        fVar58 = *(float *)((long)unaff_x19 + 0x1dc);
        uVar24 = (ulong)(uint)fVar58;
        fVar60 = *(float *)(unaff_x19 + 0x49);
        if (fVar60 < fVar58) goto LAB_02499210;
      }
      iVar14 = (int)unaff_x19[0x5b];
      if (iVar14 == 1) {
        lVar30 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar30 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar30 = *plVar44;
        }
        plVar48 = (long *)StringLiteral_302;
        lVar33 = *(long *)(lVar30 + 0xb8);
        lVar30 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar30 + 0x132) & 1) == 0) {
          lVar30 = FUN_00d5941c(lVar30);
        }
        lVar30 = *(long *)(*(long *)(lVar30 + 0xc0) + 8);
        if ((*(byte *)(lVar30 + 0x132) & 1) == 0) {
          lVar30 = FUN_00d5941c();
        }
        piVar25 = (int *)thunk_FUN_00d32ed4(lVar33 + 0x11f0,*(long *)(lVar30 + 0x80) + 0xa0);
        if (*piVar25 == 0) goto LAB_02495f00;
        lVar30 = *plVar44;
        if (*(int *)(lVar30 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar30 = *plVar44;
        }
        FUN_013b8de4(*(long *)(lVar30 + 0xb8) + 0x11f0,&stack0x00000880,
                     *(undefined8 *)
                      Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                    );
        memcpy(&stack0x00000c70,&stack0x00000880,0x378);
        unaff_w25 = in_stack_000017bc;
        goto LAB_02494358;
      }
      if (iVar14 != 6) {
        if (iVar14 == 3) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) != 0) goto LAB_02493ec0;
          thunk_FUN_00d32864();
          goto LAB_02493ec0;
        }
        goto LAB_02494950;
      }
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar48 = (long *)StringLiteral_302;
      in_stack_00001788 = FUN_024d66ec();
      lVar30 = unaff_x19[0x5c];
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
      }
      uVar22 = FUN_02681b9c(lVar30,0,0);
      if ((uVar22 & 1) != 0) {
        plVar47 = (long *)unaff_x19[0x5c];
        uVar20 = (**(code **)(*unaff_x19 + 0x548))();
        if (plVar47 == (long *)0x0) goto LAB_0249920c;
        (**(code **)(*plVar47 + 0x558))(plVar47,uVar20,*(undefined8 *)(*plVar47 + 0x560));
        lVar30 = unaff_x19[0x5c];
        if (lVar30 == 0) goto LAB_0249920c;
        *(int *)(lVar30 + 0x3f8) = (int)unaff_x19[0x7f];
        FUN_024c910c(lVar30,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
        plVar47 = (long *)unaff_x19[0x5c];
        if (plVar47 == (long *)0x0) goto LAB_0249920c;
        (**(code **)(*plVar47 + 0x7d8))(plVar47,0,0,*(undefined8 *)(*plVar47 + 0x7e0));
        *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      }
LAB_02494484:
      uVar20 = CONCAT44(3,*in_stack_00000148);
    }
    else {
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00001788 = FUN_024d66ec();
      if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
        lVar30 = *in_stack_00000150;
        if ((lVar30 == 0) || (lVar33 = *(long *)(lVar30 + 0x38), lVar33 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar33 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar60 = *(float *)(unaff_x19 + 0x9a);
        fVar58 = 0.0;
        if ((0.0 < fVar60) && (fVar58 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
          fVar58 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
        }
        fVar58 = fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56) +
                 *(float *)(lVar33 + (int)*in_stack_00000148 * unaff_x27 + 0x154) +
                 (fVar58 - *(float *)((long)unaff_x19 + 0x4c4)) +
                 fStack0000000000000054 *
                 (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
      }
      else {
        lVar30 = unaff_x19[0x6c];
        *(undefined1 *)((long)unaff_x19 + 700) = 1;
        if (lVar30 == 0) goto LAB_0249920c;
        fVar60 = *(float *)(unaff_x19 + 0x9a);
        fVar58 = *(float *)(unaff_x19 + 0x57) +
                 fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56);
      }
      puVar10 = System_Threading_Mutex_TypeInfo;
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_0249920c;
      uVar19 = *(uint *)((long)unaff_x19 + 0x48c);
      if ((*(uint *)(lVar30 + 0x18) <= uVar19) ||
         (uVar61 = uVar19 - 1, *(uint *)(lVar30 + 0x18) <= uVar61))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar24 = (ulong)(uint)(fVar58 + *(float *)(unaff_x19 + 0x96));
      fVar68 = (fVar58 + *(float *)(unaff_x19 + 0x96) + fVar60) -
               *(float *)(lVar30 + (int)uVar19 * unaff_x27 + 0x158);
      if (((in_stack_00000068._4_1_ & 1) == 0 &&
           *(short *)(lVar30 + (long)(int)uVar61 * (long)iVar18 + 0x20) == 0xad) &&
         ((fVar68 < fStack00000000000000a4 || ((int)unaff_x19[0x5b] == 0)))) {
        *in_stack_00000148 = uVar61;
LAB_024947b4:
        in_stack_00000068._4_1_ = 0;
        plVar48 = (long *)StringLiteral_302;
        plVar44 = (long *)System_Threading_Mutex_TypeInfo;
        in_stack_00001788 = in_stack_00001788 - 1;
        uVar20 = CONCAT44(0x2d,uVar61);
        goto LAB_02492630;
      }
      if (*(short *)(lVar30 + (int)uVar19 * unaff_x27 + 0x20) == 0xad) {
        in_stack_00000068._4_1_ = 1;
        plVar48 = (long *)StringLiteral_302;
        plVar44 = (long *)System_Threading_Mutex_TypeInfo;
        goto LAB_02492630;
      }
      if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
        param_3 = *(float *)((long)unaff_x19 + 0x2cc);
        fVar58 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if ((fVar58 <= param_3) || ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
          fVar58 = *(float *)((long)unaff_x19 + 0x1dc);
          uVar24 = (ulong)(uint)fVar58;
          fVar60 = *(float *)(unaff_x19 + 0x49);
          if ((fVar60 < fVar58) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
          goto LAB_02499210;
          goto LAB_024946c0;
        }
LAB_024992ac:
        fVar60 = fVar66;
        if (0.0 < param_3) {
          fVar60 = fVar66 / (1.0 - param_3);
        }
        param_3 = param_3 + (fVar66 - fVar50 * (fStack00000000000000d4 + DAT_02958218)) / fVar60;
LAB_0249929c:
        if (fVar58 <= param_3) {
          param_3 = fVar58;
        }
        *(float *)((long)unaff_x19 + 0x2cc) = param_3;
        return;
      }
LAB_024946c0:
      lVar30 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar30 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar30 = *(long *)puVar10;
      }
      iVar14 = *(int *)(*(long *)(lVar30 + 0xb8) + 0xe78);
      if ((((float)iVar14 != fStack0000000000000034) && (iVar14 != -1)) &&
         (((bStack000000000000005c ^ 1) & 1) == 0)) {
        if (*(int *)(lVar30 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        if ((unaff_x19[0x6c] == 0) || (lVar30 = *(long *)(unaff_x19[0x6c] + 0x38), lVar30 == 0))
        goto LAB_0249920c;
        uVar61 = *in_stack_00000148 - 1;
        if (*(uint *)(lVar30 + 0x18) <= uVar61)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fStack0000000000000034 = (float)iVar14;
        if (*(short *)(lVar30 + (long)(int)uVar61 * (long)iVar18 + 0x20) == 0xad) {
          *in_stack_00000148 = uVar61;
          goto LAB_024947b4;
        }
      }
      if (fVar68 <= fStack00000000000000a4) {
        uVar24 = unaff_d13;
        FUN_024d7014(fStack0000000000000054,unaff_d13,fStack00000000000000c8,
                     *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0,
                     fStack00000000000000cc,fStack00000000000000d4,fStack0000000000000048);
        bStack000000000000005c = 1;
        in_stack_00000068._4_1_ = 0;
        fStack0000000000000058 = 1.4013e-45;
        plVar48 = (long *)StringLiteral_302;
        plVar44 = (long *)System_Threading_Mutex_TypeInfo;
        goto LAB_02492630;
      }
      if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
        *(undefined4 *)((long)unaff_x19 + 0x2dc) = *(undefined4 *)((long)unaff_x19 + 0x48c);
      }
      plVar48 = (long *)StringLiteral_302;
      plVar44 = (long *)System_Threading_Mutex_TypeInfo;
      if ((char)unaff_x19[0x46] != '\0') {
        fVar60 = *(float *)(unaff_x19 + 0x58);
        if ((fVar60 < *(float *)((long)unaff_x19 + 0x2b4)) &&
           (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar50 = *(float *)((long)unaff_x19 + 0x2b4) +
                   ((in_stack_00000018._4_4_ - fVar68) / (float)((int)unaff_x19[0x94] + 1)) /
                   fStack0000000000000054;
          if (fVar50 <= fVar60) {
            fVar50 = fVar60;
          }
LAB_024964c8:
          *(float *)((long)unaff_x19 + 0x2b4) = fVar50;
          return;
        }
        param_3 = *(float *)((long)unaff_x19 + 0x2cc);
        fVar58 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if ((param_3 < fVar58) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
        goto LAB_024992ac;
        fVar58 = *(float *)((long)unaff_x19 + 0x1dc);
        uVar24 = (ulong)(uint)fVar58;
        fVar60 = *(float *)(unaff_x19 + 0x49);
        if ((fVar60 < fVar58) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
LAB_02499210:
          fVar50 = (fVar58 - *(float *)(unaff_x19 + 0x47)) * 0.5;
          if (fVar50 <= DAT_028aa298) {
            fVar50 = DAT_028aa298;
          }
          *(float *)((long)unaff_x19 + 0x234) = fVar58;
          fVar66 = (fVar58 - fVar50) * 20.0 + 0.5;
          fVar50 = DAT_02958220;
          if (fVar66 != INFINITY) {
            fVar50 = (float)(int)fVar66 / 20.0;
          }
          if (fVar50 <= fVar60) {
            fVar50 = fVar60;
          }
LAB_02495fd8:
          *(float *)((long)unaff_x19 + 0x1dc) = fVar50;
          return;
        }
      }
      switch((int)unaff_x19[0x5b]) {
      case 0:
      case 2:
      case 4:
        uVar24 = unaff_d13;
        FUN_024d7014(fStack0000000000000054,unaff_d13,fStack00000000000000c8,
                     *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0,
                     fStack00000000000000cc,fStack00000000000000d4,fStack0000000000000048);
        break;
      case 1:
        lVar30 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar30 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar30 = *plVar44;
        }
        lVar33 = *(long *)(lVar30 + 0xb8);
        lVar30 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar30 + 0x132) & 1) == 0) {
          lVar30 = FUN_00d5941c(lVar30);
        }
        lVar30 = *(long *)(*(long *)(lVar30 + 0xc0) + 8);
        if ((*(byte *)(lVar30 + 0x132) & 1) == 0) {
          lVar30 = FUN_00d5941c();
        }
        piVar25 = (int *)thunk_FUN_00d32ed4(lVar33 + 0x11f0,*(long *)(lVar30 + 0x80) + 0xa0);
        if (*piVar25 == 0) {
          in_stack_00000068._4_1_ = 0;
          goto LAB_02495f00;
        }
        lVar30 = *plVar44;
        if (*(int *)(lVar30 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar30 = *plVar44;
        }
        FUN_013b8de4(*(long *)(lVar30 + 0xb8) + 0x11f0,&stack0x00000880,
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
        uVar24 = unaff_d13;
        FUN_024d7014(fStack0000000000000054,unaff_d13,fStack00000000000000c8,
                     *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0,
                     fStack00000000000000cc,fStack00000000000000d4,fStack0000000000000048);
        *(undefined4 *)(unaff_x19 + 0x99) = 0;
        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
        *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
        *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
        break;
      case 6:
        lVar30 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar22 = FUN_02681b9c(lVar30,0,0);
        if ((uVar22 & 1) != 0) {
          plVar47 = (long *)unaff_x19[0x5c];
          uVar20 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar47 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar47 + 0x558))(plVar47,uVar20,*(undefined8 *)(*plVar47 + 0x560));
          lVar30 = unaff_x19[0x5c];
          if (lVar30 == 0) goto LAB_0249920c;
          *(int *)(lVar30 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar30,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar47 = (long *)unaff_x19[0x5c];
          if (plVar47 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar47 + 0x7d8))(plVar47,0,0,*(undefined8 *)(*plVar47 + 0x7e0));
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
      plVar48 = (long *)StringLiteral_302;
      plVar44 = (long *)System_Threading_Mutex_TypeInfo;
    }
LAB_02492630:
    param_5 = (float)unaff_d13;
    fVar50 = 1.0;
    in_stack_00001788 = in_stack_00001788 + 1;
    lVar30 = unaff_x19[0x8e];
    if (lVar30 != 0) {
      if ((int)in_stack_00001788 < (int)*(uint *)(lVar30 + 0x18)) {
        if (*(uint *)(lVar30 + 0x18) <= in_stack_00001788)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        unaff_w25 = *(uint *)(lVar30 + (long)(int)in_stack_00001788 * 0xc + 0x20);
        if (unaff_w25 == 0) goto LAB_02495f1c;
        in_stack_000017a8 = uVar20;
        if (5 < in_stack_00000140) {
          uVar20 = FUN_0176eb1c(&stack0x000017bc,0);
          uVar21 = FUN_0176eb1c(&stack0x00001788,0);
          uVar20 = FUN_0160073c(*(undefined8 *)
                                 UnityEngine_Rendering_Universal_DebugValidationMode_var,uVar20,
                                *(undefined8 *)
                                 Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                                ,uVar21,0);
          if (*(int *)(*plVar48 + 0xe0) == 0) {
            thunk_FUN_00d32864(*plVar48);
          }
          FUN_026610e4(uVar20,0);
          in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
        }
        if ((*(char *)((long)unaff_x19 + 0x2fa) != '\0') && (unaff_w25 == 0x3c))
        goto code_r0x02492440;
        if ((*in_stack_00000150 != 0) &&
           (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 != 0)) {
          if (*in_stack_00000148 < *(uint *)(lVar30 + 0x18)) {
            lVar30 = lVar30 + (int)*in_stack_00000148 * unaff_x27;
            *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar30 + 0x2c);
            *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar30 + 0x58);
            unaff_x19[0x1f] = *(long *)(lVar30 + 0x38);
            goto 
            UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
LAB_02495f1c:
      fVar50 = (float)uVar24;
      if (((char)unaff_x19[0x46] != '\0') &&
         (fVar50 = DAT_02956ccc,
         DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
        fVar50 = *(float *)((long)unaff_x19 + 0x1dc);
        fVar60 = *(float *)((long)unaff_x19 + 0x24c);
        if ((fVar50 < fVar60) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
            *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
          }
          fVar66 = (*(float *)((long)unaff_x19 + 0x234) - fVar50) * 0.5;
          if (fVar66 <= DAT_028aa298) {
            fVar66 = DAT_028aa298;
          }
          *(float *)(unaff_x19 + 0x47) = fVar50;
          fVar66 = (fVar50 + fVar66) * 20.0 + 0.5;
          fVar50 = DAT_02958220;
          if (fVar66 != INFINITY) {
            fVar50 = (float)(int)fVar66 / 20.0;
          }
          if (fVar60 <= fVar50) {
            fVar50 = fVar60;
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
        if (*(int *)(*plVar48 + 0xe0) == 0) {
          thunk_FUN_00d32864(*plVar48);
        }
        FUN_02660dac(uVar20,0);
      }
      if ((*in_stack_00000148 == 0) || ((*in_stack_00000148 == 1 && (in_stack_000017bc == 3)))) {
        (**(code **)(*unaff_x19 + 0x948))();
        goto LAB_02496098;
      }
      lVar30 = *plVar44;
      if (*(int *)(lVar30 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar30 = *plVar44;
      }
      puVar10 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      lVar30 = **(long **)(lVar30 + 0xb8);
      if (lVar30 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      iVar18 = *(int *)(lVar30 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
      if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x60), lVar30 == 0))
      goto LAB_0249920c;
      if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar30 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      FUN_024e7d94(lVar30 + 0x20,0,0);
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
      lVar30 = unaff_x19[0xe2];
      _in_stack_00000090 = _in_stack_000000c0;
      fStack0000000000000098 = fStack00000000000000c8;
      if (iVar14 < 0x401) {
        if (iVar14 == 0x100) {
          if (lVar30 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar30 + 0x18) < 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar20 = *(undefined8 *)(lVar30 + 0x30);
          if ((int)unaff_x19[0x5b] == 5) {
            if ((*in_stack_00000150 == 0) ||
               (lVar33 = *(long *)(*in_stack_00000150 + 0x58), lVar33 == 0)) goto LAB_0249920c;
            if (*(uint *)(lVar33 + 0x18) <= uStack000000000000002c)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            fVar50 = *(float *)(lVar33 + (long)(int)uStack000000000000002c * 0x14 + 0x28);
          }
          else {
            fVar50 = *(float *)(unaff_x19 + 0x96);
          }
          fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar30 + 0x2c);
          fVar50 = (0.0 - fVar50) - fStack0000000000000020;
        }
        else if (iVar14 == 0x200) {
          if (lVar30 == 0) goto LAB_0249920c;
          if ((*(int *)(lVar30 + 0x18) == 1) || (*(int *)(lVar30 + 0x18) == 0))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fStack0000000000000098 = (*(float *)(lVar30 + 0x20) + *(float *)(lVar30 + 0x2c)) * 0.5;
          uVar20 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar30 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar30 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar30 + 0x24) +
                            (float)*(undefined8 *)(lVar30 + 0x30)) * 0.5);
          if ((int)unaff_x19[0x5b] == 5) {
            if ((*in_stack_00000150 == 0) ||
               (lVar30 = *(long *)(*in_stack_00000150 + 0x58), lVar30 == 0)) goto LAB_0249920c;
            if (*(uint *)(lVar30 + 0x18) <= uStack000000000000002c)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar30 = lVar30 + (long)(int)uStack000000000000002c * 0x14;
            fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
            fVar50 = ((fStack0000000000000020 + *(float *)(lVar30 + 0x28) +
                      *(float *)(lVar30 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
          }
          else {
            fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
            fVar50 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8) -
                     fStack0000000000000024) * -0.5 + 0.0;
          }
        }
        else {
          if (iVar14 != 0x400) goto LAB_024965d0;
          if (lVar30 == 0) goto LAB_0249920c;
          if (*(int *)(lVar30 + 0x18) == 0)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar20 = *(undefined8 *)(lVar30 + 0x24);
          if ((int)unaff_x19[0x5b] == 5) {
            if ((*in_stack_00000150 == 0) ||
               (lVar33 = *(long *)(*in_stack_00000150 + 0x58), lVar33 == 0)) goto LAB_0249920c;
            if (*(uint *)(lVar33 + 0x18) <= uStack000000000000002c)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            in_stack_000017b8 = *(float *)(lVar33 + (long)(int)uStack000000000000002c * 0x14 + 0x30)
            ;
          }
          fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar30 + 0x20);
          fVar50 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
        }
        _in_stack_00000090 = CONCAT44((float)((ulong)uVar20 >> 0x20) + 0.0,(float)uVar20 + fVar50);
      }
      else if (iVar14 == 0x800) {
        if (lVar30 == 0) goto LAB_0249920c;
        if ((*(int *)(lVar30 + 0x18) == 1) || (*(int *)(lVar30 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar50 = ((float)*(undefined8 *)(lVar30 + 0x24) + (float)*(undefined8 *)(lVar30 + 0x30)) *
                 0.5;
        fStack0000000000000098 =
             fStack0000000000000030 + 0.0 +
             (*(float *)(lVar30 + 0x20) + *(float *)(lVar30 + 0x2c)) * 0.5;
        _in_stack_00000090 =
             CONCAT44(((float)((ulong)*(undefined8 *)(lVar30 + 0x24) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar30 + 0x30) >> 0x20)) * 0.5 + 0.0,
                      fVar50 + 0.0);
      }
      else {
        if (iVar14 == 0x1000) {
          if (lVar30 == 0) goto LAB_0249920c;
          if ((*(int *)(lVar30 + 0x18) == 1) || (*(int *)(lVar30 + 0x18) == 0))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar50 = (float)*(undefined8 *)(lVar30 + 0x24) + (float)*(undefined8 *)(lVar30 + 0x30);
          fVar60 = (float)((ulong)*(undefined8 *)(lVar30 + 0x24) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(lVar30 + 0x30) >> 0x20);
          fStack0000000000000020 =
               fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) + *(float *)(unaff_x19 + 0x9b);
          fStack0000000000000098 =
               fStack0000000000000030 + 0.0 +
               (*(float *)(lVar30 + 0x20) + *(float *)(lVar30 + 0x2c)) * 0.5;
        }
        else {
          if (iVar14 != 0x2000) goto LAB_024965d0;
          if (lVar30 == 0) goto LAB_0249920c;
          if ((*(int *)(lVar30 + 0x18) == 1) || (*(int *)(lVar30 + 0x18) == 0))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar50 = (float)*(undefined8 *)(lVar30 + 0x24) + (float)*(undefined8 *)(lVar30 + 0x30);
          fVar60 = (float)((ulong)*(undefined8 *)(lVar30 + 0x24) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(lVar30 + 0x30) >> 0x20);
          fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
          fStack0000000000000098 =
               fStack0000000000000030 + 0.0 +
               (*(float *)(lVar30 + 0x20) + *(float *)(lVar30 + 0x2c)) * 0.5;
        }
        fVar50 = fVar50 * 0.5;
        _in_stack_00000090 =
             CONCAT44(fVar60 * 0.5 + 0.0,
                      fVar50 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) * 0.5));
      }
LAB_024965d0:
      if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
      uVar20 = FUN_0285a188(unaff_x19[0xe4],0);
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar10);
      }
      uVar24 = FUN_0268b4e0(uVar20,0,0);
      lVar30 = FUN_024c933c();
      if (lVar30 == 0) goto LAB_0249920c;
      FUN_026a125c(lVar30,0);
      *(float *)(unaff_x19 + 0xe1) = fVar50;
      if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
      iVar14 = FUN_02859798(unaff_x19[0xe4],0);
      if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
      fVar60 = (float)FUN_028598f0(unaff_x19[0xe4],0);
      __x = DAT_028aa048;
      dVar59 = modf(DAT_028aa048,(double *)&stack0x00000880);
      if (dVar59 == 0.5) {
        fVar66 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
        if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
          fVar66 = fVar66 + 1.0;
        }
      }
      else {
        fVar66 = 255.0;
      }
      dVar59 = modf(__x,(double *)&stack0x00000880);
      if (dVar59 == 0.5) {
        fVar58 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
        if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
          fVar58 = fVar58 + 1.0;
        }
      }
      else {
        fVar58 = 255.0;
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
      if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_037825d3 == '\0') {
        thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
        DAT_037825d3 = '\x01';
      }
      lVar30 = *(long *)puVar11;
      if (*(int *)(lVar30 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar30 = *(long *)puVar11;
      }
      puVar31 = *(undefined4 **)(lVar30 + 0xb8);
      uVar22 = (ulong)(uint)puVar31[1];
      uVar26 = (ulong)(uint)puVar31[2];
      uVar62 = (ulong)(uint)puVar31[3];
      UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                (*puVar31,uVar22,uVar26,uVar62,&stack0x00001790,0x4000ffff,0);
      if (*(int *)(*plVar44 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar30 = *in_stack_00000150;
      if (lVar30 == 0) goto LAB_0249920c;
      uVar15 = *in_stack_00000148;
      if ((int)uVar15 < 1) {
        fStack00000000000000ac = 0.0;
        iVar18 = 0;
        goto LAB_02498c58;
      }
      lVar30 = *(long *)(lVar30 + 0x38);
      fVar50 = ABS(fVar50);
      fVar53 = 1.0;
      if ((uVar24 & 1) == 0) {
        fVar53 = fVar50;
      }
      if (lVar30 == 0) goto LAB_0249920c;
      bVar9 = false;
      bVar12 = false;
      bVar8 = false;
      bVar13 = false;
      uStack0000000000000060 =
           (int)fVar66 & 0xffU | ((int)fVar58 & 0xffU) << 8 | ((int)fVar68 & 0xffU) << 0x10 |
           (int)fVar51 << 0x18;
      fStack00000000000000d0 = *(float *)(*(long *)(*plVar44 + 0xb8) + 0x15a8);
      fStack00000000000000cc = 0.0;
      fStack0000000000000058 = fStack00000000000000b0;
      _bStack000000000000005c = 0.0;
      fStack0000000000000034 = 0.0;
      fStack0000000000000088 = 0.0;
      fStack0000000000000030 = 0.0;
      uVar19 = 0;
      iVar49 = 0;
      lVar33 = 0x2e0;
      fVar58 = 0.0;
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
      uVar61 = 0;
      uVar38 = 1;
      goto LAB_02496a50;
    }
    goto LAB_0249920c;
  }
LAB_02494950:
  if (unaff_w25 == 0xad) {
    if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
    goto LAB_0249920c;
    if (*in_stack_00000148 < *(uint *)(lVar30 + 0x18)) {
      *(undefined1 *)(lVar30 + (int)*in_stack_00000148 * unaff_x27 + 0x194) = 0;
      goto LAB_02494abc;
    }
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  }
  if (unaff_w25 == 9) {
    lVar30 = *in_stack_00000150;
    if ((lVar30 == 0) || (lVar33 = *(long *)(lVar30 + 0x38), lVar33 == 0)) goto LAB_0249920c;
    uVar19 = *in_stack_00000148;
    if (*(uint *)(lVar33 + 0x18) <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(undefined1 *)(lVar33 + (int)uVar19 * unaff_x27 + 0x194) = 0;
    *(uint *)((long)unaff_x19 + 0x49c) = uVar19;
    lVar33 = *(long *)(lVar30 + 0x50);
    if (lVar33 == 0) goto LAB_0249920c;
    if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar33 + 0x18)) {
      lVar33 = lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      *(int *)(lVar33 + 0x2c) = *(int *)(lVar33 + 0x2c) + 1;
      goto LAB_024949c4;
    }
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  }
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
  if ((unaff_x19[0x6c] == 0) || (lVar30 = *(long *)(unaff_x19[0x6c] + 0x50), lVar30 == 0))
  goto LAB_0249920c;
  if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar30 + 0x18)) {
    lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    fStack0000000000000058 = 0.0;
    *(float *)(lVar30 + 0x60) = unaff_s8;
    *(float *)(lVar30 + 100) = unaff_s9;
    goto LAB_02494abc;
  }
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
code_r0x02492440:
  *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
  uVar22 = FUN_024d0688();
  if (((uVar22 & 1) != 0) &&
     (in_stack_00001788 = in_stack_0000176c, uVar20 = in_stack_000017a8,
     in_stack_000017bc = unaff_w25, *(int *)((long)unaff_x19 + 0x63c) == 0)) goto LAB_02492630;
UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor:
  if ((unaff_x19[0x6c] == 0) || (lVar30 = *(long *)(unaff_x19[0x6c] + 0x38), lVar30 == 0))
  goto LAB_0249920c;
  uVar15 = *in_stack_00000148;
  if (*(uint *)(lVar30 + 0x18) <= uVar15)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar46 = (long)(int)uVar15;
  cVar29 = *(char *)(lVar30 + lVar46 * unaff_x27 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
  lVar33 = unaff_x19[0x23];
  if ((uint)in_stack_000017a8 == uVar15) {
    unaff_w25 = (uint)((ulong)in_stack_000017a8 >> 0x20);
    unaff_w20 = 1;
    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
    if (unaff_w25 == 0x2026) {
      lVar23 = unaff_x19[0xc9];
      lVar30 = lVar30 + lVar46 * unaff_x27;
      *(undefined4 *)(lVar30 + 0x2c) = 0;
      *(long *)(lVar30 + 0x30) = lVar23;
      *(long *)(lVar30 + 0x38) = unaff_x19[0xca];
      *(long *)(lVar30 + 0x50) = unaff_x19[0xcb];
      *(int *)(lVar30 + 0x58) = (int)unaff_x19[0xcc];
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      in_stack_000017a8 = CONCAT44(3,uVar15 + 1);
    }
    else if (unaff_w25 == 3) {
      if ((*in_stack_00000138 == 0) || (lVar23 = FUN_024b11ac(*in_stack_00000138,0), lVar23 == 0))
      goto LAB_0249920c;
      FUN_01299bc0(lVar23,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
      if (*(uint *)(lVar30 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      unaff_w20 = 1;
      *(ulong *)(lVar30 + lVar46 * unaff_x27 + 0x30) = CONCAT44(in_stack_00000884,in_stack_00000880)
      ;
      uVar15 = *(uint *)((long)unaff_x19 + 0x48c);
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
    }
  }
  else {
    unaff_w20 = 0;
  }
  uVar20 = in_stack_000017a8;
  if (((int)uVar15 < *(int *)((long)unaff_x19 + 0x31c)) && (unaff_w25 != 3)) {
    if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar30 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar30 = lVar30 + (long)(int)uVar15 * (long)iVar18;
    *(undefined1 *)(lVar30 + 0x194) = 0;
    *(undefined2 *)(lVar30 + 0x20) = 0x200b;
    *(undefined4 *)(lVar30 + 100) = 0;
    *in_stack_00000148 = uVar15 + 1;
    in_stack_000017bc = unaff_w25;
    goto LAB_02492630;
  }
  iVar14 = *(int *)((long)unaff_x19 + 0x63c);
  fStack00000000000000f4 = fVar50;
  if (iVar14 == 0) {
    uVar15 = *(uint *)((long)unaff_x19 + 0x254);
    if ((uVar15 >> 4 & 1) == 0) {
      if ((uVar15 >> 3 & 1) == 0) {
        if ((uVar15 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar22 = FUN_016f92d4(unaff_w25,0);
          if ((uVar22 & 1) != 0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar15 = FUN_016f95a8(unaff_w25,0);
            unaff_w25 = uVar15 & 0xffff;
            fStack00000000000000f4 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar22 = FUN_016f9218(unaff_w25,0);
        if ((uVar22 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar15 = FUN_016f9724(unaff_w25,0);
          goto LAB_02492a0c;
        }
      }
    }
    else {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar22 = FUN_016f92d4(unaff_w25,0);
      fStack00000000000000f4 = 1.0;
      if ((uVar22 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar15 = FUN_016f95a8(unaff_w25,0);
LAB_02492a0c:
        unaff_w25 = uVar15 & 0xffff;
        fStack00000000000000f4 = 1.0;
      }
    }
    iVar14 = *(int *)((long)unaff_x19 + 0x63c);
    if (iVar14 != 0) goto LAB_0249265c;
LAB_02492a20:
    if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
    goto LAB_0249920c;
    uVar19 = *in_stack_00000148;
    uVar15 = *(uint *)(lVar30 + 0x18);
    if (uVar15 <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar33 = *(long *)(lVar30 + (int)uVar19 * unaff_x27 + 0x30);
    unaff_x19[200] = lVar33;
    in_stack_000017bc = unaff_w25;
    if (lVar33 == 0) goto LAB_02492630;
    lVar46 = lVar30 + (int)uVar19 * unaff_x27;
    lVar33 = *(long *)(lVar46 + 0x38);
    unaff_x19[0x1f] = lVar33;
    unaff_x19[0x22] = *(long *)(lVar46 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar46 + 0x58);
    if (unaff_w20 == 0) {
LAB_02492ab4:
      if (lVar33 == 0) goto LAB_0249920c;
      fVar60 = *(float *)(unaff_x19 + 0x3c);
      iVar14 = FUN_026fd110(lVar33 + 0x50,0);
      lVar30 = unaff_x19[0x1f];
    }
    else {
      lVar46 = unaff_x19[0x8e];
      if (lVar46 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar46 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if ((*(int *)(lVar46 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
         (uVar19 == *(uint *)(unaff_x19 + 0x92))) goto LAB_02492ab4;
      if (uVar15 <= uVar19 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (lVar33 == 0) goto LAB_0249920c;
      fVar60 = *(float *)(lVar30 + (long)(int)(uVar19 - 1) * (long)iVar18 + 0x60);
      iVar14 = FUN_026fd110(lVar33 + 0x50,0);
      lVar30 = *in_stack_00000138;
    }
    if (lVar30 == 0) goto LAB_0249920c;
    fVar68 = (float)FUN_026fd120(lVar30 + 0x50,0);
    fVar66 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar66 = fVar50;
    }
    fVar58 = 0.0;
    fVar52 = 0.0;
    if ((unaff_w20 & unaff_w25 == 0x2026) == 0) {
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar52 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar58 = (float)FUN_026fd180(*in_stack_00000138 + 0x50,0);
    }
    lVar30 = unaff_x19[200];
    if ((lVar30 == 0) || (*(long *)(lVar30 + 0x20) == 0)) goto LAB_0249920c;
    fVar50 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar51 = *(float *)(lVar30 + 0x2c);
    param_5 = (float)FUN_026fd668(*(long *)(lVar30 + 0x20),0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar53 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar69 = *(float *)((long)unaff_x19 + 0x3fc);
    fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
    lVar46 = unaff_x19[0x6c];
    if ((lVar46 == 0) || (lVar30 = *(long *)(lVar46 + 0x38), lVar30 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar30 = lVar30 + (int)*in_stack_00000148 * unaff_x27;
    *(undefined4 *)(lVar30 + 0x2c) = 0;
    fVar66 = ((fStack00000000000000f4 * fVar60) / (float)iVar14) * fVar68 * fVar66;
    param_5 = fVar66 * fVar50 * fVar51 * param_5;
    *(float *)(lVar30 + 0x160) = param_5;
    uVar15 = *(uint *)(unaff_x19 + 0x23);
    fStack0000000000000134 = fVar66 * fVar53 * fVar69 * fStack0000000000000134;
    if (uVar15 == 0) {
      in_stack_00000128 = *(float *)(unaff_x19 + 0xc2);
    }
    else {
      lVar30 = unaff_x19[0xe0];
      if (lVar30 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar30 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = *(long *)(lVar30 + (long)(int)uVar15 * 8 + 0x20);
      if (lVar30 == 0) goto LAB_0249920c;
      in_stack_00000128 = *(float *)(lVar30 + 0x104);
    }
LAB_02492e14:
    fVar50 = 0.0;
    if (unaff_w25 != 3 && unaff_w25 != 0xad) {
      fVar50 = param_5;
    }
  }
  else {
    if (iVar14 == 0) goto LAB_02492a20;
LAB_0249265c:
    if (iVar14 == 1) {
      if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar30 + (int)*in_stack_00000148 * unaff_x27;
      lVar46 = *(long *)(lVar30 + 0x40);
      unaff_x19[0xd2] = lVar46;
      *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar30 + 0x48);
      if ((lVar46 == 0) || (lVar30 = FUN_024ebfa0(lVar46,0), lVar30 == 0)) goto LAB_0249920c;
      FUN_0132138c(lVar30,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                   *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
      lVar30 = CONCAT44(in_stack_00000884,in_stack_00000880);
      in_stack_000017bc = unaff_w25;
      if (lVar30 == 0) goto LAB_02492630;
      if (unaff_w25 == 0x3c) {
        unaff_w25 = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
      }
      else {
        lVar46 = *plVar44;
        if (*(int *)(lVar46 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar46 = *plVar44;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1b4) = *(undefined4 *)(*(long *)(lVar46 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar60 = *(float *)(unaff_x19 + 0x3c);
      memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
      iVar14 = FUN_026fd110(&stack0x00001700,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      memmove(&stack0x00001700,(void *)(*in_stack_00000138 + 0x50),0x60);
      fVar58 = (float)FUN_026fd120(&stack0x00001700,0);
      fVar66 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar66 = 1.0;
      }
      if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
      fVar66 = (fVar60 / (float)iVar14) * fVar58 * fVar66;
      iVar14 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
      fVar60 = *(float *)(unaff_x19 + 0x3c);
      if (iVar14 < 1) {
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        iVar14 = FUN_026fd110(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar68 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
        fVar58 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar58 = fVar50;
        }
        if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
        fVar50 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
        if (*(long *)(lVar30 + 0x20) == 0) goto LAB_0249920c;
        FUN_026fd62c(&stack0x00000880,*(long *)(lVar30 + 0x20),0);
        fVar51 = (float)FUN_026fd45c(&stack0x000016e0,0);
        if (*(long *)(lVar30 + 0x20) == 0) goto LAB_0249920c;
        fVar53 = *(float *)(lVar30 + 0x2c);
        fVar69 = (float)FUN_026fd668(*(long *)(lVar30 + 0x20),0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar52 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar63 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar65 = *(float *)((long)unaff_x19 + 0x3fc);
        fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
        if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
        fStack0000000000000134 = fVar66 * fVar63 * fVar65 * fStack0000000000000134;
        fVar58 = (fVar60 / (float)iVar14) * fVar68 * fVar58;
        param_5 = fVar58 * (fVar50 / fVar51) * fVar53 * fVar69;
        fVar58 = fVar58 / param_5;
        fVar52 = fVar58 * fVar52;
        fVar50 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
        fVar58 = fVar58 * fVar50;
      }
      else {
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        iVar14 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar50 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (*(long *)(lVar30 + 0x20) == 0) goto LAB_0249920c;
        fVar68 = *(float *)(lVar30 + 0x2c);
        fVar58 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar58 = 1.0;
        }
        fVar51 = (float)FUN_026fd668(*(long *)(lVar30 + 0x20),0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar52 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar53 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar69 = *(float *)((long)unaff_x19 + 0x3fc);
        fStack0000000000000134 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fStack0000000000000134 = fVar66 * fVar53 * fVar69 * fStack0000000000000134;
        param_5 = (fVar60 / (float)iVar14) * fVar50 * fVar58 * fVar68 * fVar51;
        fVar58 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
      }
      lVar46 = unaff_x19[0x6c];
      unaff_x19[200] = lVar30;
      if ((lVar46 == 0) || (lVar30 = *(long *)(lVar46 + 0x38), lVar30 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar30 + (int)*in_stack_00000148 * unaff_x27;
      *(undefined4 *)(lVar30 + 0x2c) = 1;
      *(float *)(lVar30 + 0x160) = param_5;
      in_stack_00000128 = 0.0;
      *(long *)(lVar30 + 0x40) = unaff_x19[0xd2];
      *(long *)(lVar30 + 0x38) = unaff_x19[0x1f];
      *(int *)(lVar30 + 0x58) = (int)unaff_x19[0x23];
      *(int *)(unaff_x19 + 0x23) = (int)lVar33;
      goto LAB_02492e14;
    }
    lVar46 = *in_stack_00000150;
    fVar50 = 0.0;
    if (unaff_w25 != 3 && unaff_w25 != 0xad) {
      fVar50 = param_5;
    }
    fStack0000000000000134 = 0.0;
    if (lVar46 == 0) goto LAB_0249920c;
    fVar52 = 0.0;
    fVar58 = 0.0;
  }
  lVar30 = *(long *)(lVar46 + 0x38);
  if (lVar30 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar30 = lVar30 + (int)*in_stack_00000148 * unaff_x27;
  *(short *)(lVar30 + 0x20) = (short)unaff_w25;
  *(int *)(lVar30 + 0x60) = (int)unaff_x19[0x3c];
  *(undefined4 *)(lVar30 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
  if ((unaff_x19[0x6c] == 0) || (lVar30 = *(long *)(unaff_x19[0x6c] + 0x38), lVar30 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(int *)(lVar30 + (int)*in_stack_00000148 * unaff_x27 + 0x168) = (int)unaff_x19[0x2a];
  if ((unaff_x19[0x6c] == 0) || (lVar30 = *(long *)(unaff_x19[0x6c] + 0x38), lVar30 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(undefined4 *)(lVar30 + (int)*in_stack_00000148 * unaff_x27 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x154);
  if ((unaff_x19[0x6c] == 0) || (lVar30 = *(long *)(unaff_x19[0x6c] + 0x38), lVar30 == 0))
  goto LAB_0249920c;
  uVar15 = *in_stack_00000148;
  FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
               *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
  if (*(uint *)(lVar30 + 0x18) <= uVar15)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar30 = lVar30 + (int)uVar15 * unaff_x27;
  *(undefined4 *)(lVar30 + 0x18c) = in_stack_00000890;
  *(undefined8 *)(lVar30 + 0x184) = in_stack_00000888;
  *(ulong *)(lVar30 + 0x17c) = CONCAT44(in_stack_00000884,in_stack_00000880);
  if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(undefined4 *)(lVar30 + (int)*in_stack_00000148 * unaff_x27 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x254);
  if ((unaff_x19[200] == 0) || (lVar30 = *(long *)(unaff_x19[200] + 0x20), lVar30 == 0))
  goto LAB_0249920c;
  FUN_026fd62c(&stack0x00000bf8,lVar30,0);
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
    fVar60 = 0.0;
  }
  else {
    if (unaff_x19[200] == 0) goto LAB_0249920c;
    uVar19 = *in_stack_00000148;
    uVar15 = *(uint *)(unaff_x19[200] + 0x28);
    if ((int)uVar19 < (int)in_stack_00000078._4_4_) {
      if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar30 + 0x18) <= uVar19 + 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = *(long *)(lVar30 + (long)(int)(uVar19 + 1) * (long)iVar18 + 0x30);
      if ((((lVar30 == 0) || (*in_stack_00000138 == 0)) ||
          (lVar33 = *(long *)(*in_stack_00000138 + 0x128), lVar33 == 0)) ||
         (lVar33 = *(long *)(lVar33 + 0x18), lVar33 == 0)) goto LAB_0249920c;
      in_stack_00000880 = uVar15 | *(int *)(lVar30 + 0x28) << 0x10;
      uVar24 = FUN_0129eff4(lVar33,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      uVar71 = 0;
      if ((uVar24 & 1) == 0) {
        fStack00000000000000ac = 0.0;
        fVar66 = 0.0;
        fVar60 = 0.0;
      }
      else {
        if (in_stack_000016d8 == 0) goto LAB_0249920c;
        fVar60 = *(float *)(in_stack_000016d8 + 0x14);
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
      fVar60 = 0.0;
    }
    if (0 < (int)uVar19) {
      if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar30 + 0x18) <= (uint)((long)(int)uVar19 + -1))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = *(long *)(lVar30 + ((long)(int)uVar19 + -1) * unaff_x27 + 0x30);
      if (((lVar30 == 0) || (*in_stack_00000138 == 0)) ||
         ((lVar33 = *(long *)(*in_stack_00000138 + 0x128), lVar33 == 0 ||
          (lVar33 = *(long *)(lVar33 + 0x18), lVar33 == 0)))) goto LAB_0249920c;
      in_stack_00000880 = *(uint *)(lVar30 + 0x28) | uVar15 << 0x10;
      uVar24 = FUN_0129eff4(lVar33,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      if ((uVar24 & 1) != 0) {
        if ((in_stack_000016d8 == 0) ||
           (fVar60 = (float)FUN_024bb1bc(fVar60,fVar66,fStack00000000000000ac,uVar71,
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
    fVar51 = *(float *)(unaff_x19 + 199);
    fVar68 = (float)FUN_026fd474(&stack0x00001770,0);
    fVar51 = fVar51 - fVar50 * fVar68 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
    *(float *)(unaff_x19 + 199) = fVar51;
    if ((unaff_w29 != 0) || (unaff_w25 == 0x200b)) {
      *(float *)(unaff_x19 + 199) =
           fVar51 - fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
    }
  }
  fVar68 = *(float *)(unaff_x19 + 0x55);
  fStack0000000000000080 = 0.0;
  if (fVar68 != 0.0) {
    fVar51 = (float)FUN_026fd454(&stack0x00001770,0);
    fVar53 = (float)FUN_026fd464(&stack0x00001770,0);
    fStack0000000000000080 =
         (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
         (fVar68 * 0.5 - fVar50 * (fVar51 * 0.5 + fVar53));
    *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fStack0000000000000080;
  }
  if (((cVar29 == '\0') && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
    lVar30 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar24 = FUN_02681b9c(lVar30,0,0);
    fVar51 = 0.0;
    if ((uVar24 & 1) != 0) {
      lVar30 = unaff_x19[0x22];
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar30 == 0) goto LAB_0249920c;
      uVar24 = FUN_0267e1d8(lVar30,*(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
      fVar51 = 0.0;
      if ((uVar24 & 1) != 0) {
        lVar30 = unaff_x19[0x22];
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar30 == 0) goto LAB_0249920c;
        fVar68 = (float)FUN_0267f610(lVar30,*(undefined4 *)
                                             (*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
        if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) goto LAB_0249920c;
        fVar53 = *(float *)(*in_stack_00000138 + 0x1b0);
        fVar51 = (float)FUN_0267f610(unaff_x19[0x22],
                                     *(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xcc),0);
        fVar51 = fVar51 * fVar68 * fVar53 * 0.25;
        if (fVar68 < in_stack_00000128 + fVar51) {
          in_stack_00000128 = fVar68 - fVar51;
        }
      }
    }
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    in_stack_000000c0 = *(float *)(*in_stack_00000138 + 0x1b4);
  }
  else {
    lVar30 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar24 = FUN_02681b9c(lVar30,0,0);
    in_stack_000000c0 = 0.0;
    if ((uVar24 & 1) != 0) {
      lVar30 = unaff_x19[0x22];
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar30 == 0) goto LAB_0249920c;
      uVar24 = FUN_0267e1d8(lVar30,*(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
      if ((uVar24 & 1) != 0) {
        lVar30 = unaff_x19[0x22];
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar30 == 0) goto LAB_0249920c;
        uVar24 = FUN_0267e1d8(lVar30,*(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xcc),0);
        if ((uVar24 & 1) != 0) {
          lVar30 = unaff_x19[0x22];
          if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (lVar30 == 0) goto LAB_0249920c;
          fVar68 = (float)FUN_0267f610(lVar30,*(undefined4 *)
                                               (*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
          if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) goto LAB_0249920c;
          fVar53 = *(float *)(*in_stack_00000138 + 0x1a8);
          fVar51 = (float)FUN_0267f610(unaff_x19[0x22],
                                       *(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xcc),0)
          ;
          fVar51 = fVar51 * fVar68 * fVar53 * 0.25;
          if (fVar68 < in_stack_00000128 + fVar51) {
            in_stack_00000128 = fVar68 - fVar51;
          }
          goto LAB_024934bc;
        }
      }
    }
    fVar51 = 0.0;
  }
LAB_024934bc:
  fVar63 = *(float *)(unaff_x19 + 199);
  fVar68 = (float)FUN_026fd464(&stack0x00001770,0);
  fVar63 = fVar63 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar50 * (fVar60 + ((fVar68 - in_stack_00000128) - fVar51));
  fVar60 = (float)FUN_026fd46c(&stack0x00001770,0);
  fVar53 = *(float *)((long)unaff_x19 + 0x614) +
           ((fStack0000000000000134 + fVar50 * (fVar66 + in_stack_00000128 + fVar60)) -
           *(float *)(unaff_x19 + 0x9a));
  fVar60 = (float)FUN_026fd45c(&stack0x00001770,0);
  fVar69 = fVar53 - fVar50 * (in_stack_00000128 + in_stack_00000128 + fVar60);
  fVar60 = (float)FUN_026fd454(&stack0x00001770,0);
  fVar68 = fVar63 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar50 * (fVar51 + fVar51 + in_stack_00000128 + in_stack_00000128 + fVar60);
  fVar60 = fVar63;
  fVar66 = fVar68;
  if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (cVar29 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
    fVar65 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
    fVar60 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar56 = fVar65 * fVar50 * (fVar51 + in_stack_00000128 + fVar60);
    fVar60 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar66 = (float)FUN_026fd45c(&stack0x00001770,0);
    fVar53 = fVar53 + 0.0;
    fVar69 = fVar69 + 0.0;
    fVar65 = fVar65 * fVar50 * (((fVar60 - fVar66) - in_stack_00000128) - fVar51);
    fVar66 = fVar68 + fVar65;
    fVar60 = fVar63 + fVar56;
    fVar55 = (fVar56 - fVar65) * 0.5;
    fVar63 = (fVar63 + fVar65) - fVar55;
    fVar68 = (fVar68 + fVar56) - fVar55;
    fVar60 = fVar60 - fVar55;
    fVar66 = fVar66 - fVar55;
  }
  in_stack_00000100 = (ulong)(uint)fVar50;
  if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
    fVar56 = 0.0;
    fVar57 = 0.0;
    fVar64 = 0.0;
    fVar55 = 0.0;
    fVar72 = fVar69;
    fVar65 = fVar53;
    fStack00000000000000e8 = fVar60;
    fStack00000000000000ec = fVar63;
  }
  else {
    thunk_FUN_026935f0(_uStack0000000000000060,0);
    fVar67 = (fVar68 + fVar63) * 0.5;
    fVar70 = (fVar69 + fVar53) * 0.5;
    fVar53 = fVar53 - fVar70;
    fVar55 = 0.0;
    fVar65 = fVar53;
    fVar54 = (float)FUN_02692df0(fVar60 - fVar67,_uStack0000000000000060,0);
    fVar55 = fVar55 + 0.0;
    fVar69 = fVar69 - fVar70;
    fVar56 = 0.0;
    fVar60 = fVar69;
    fVar63 = (float)FUN_02692df0(fVar63 - fVar67,_uStack0000000000000060,0);
    fVar56 = fVar56 + 0.0;
    fVar64 = 0.0;
    fVar68 = (float)FUN_02692df0(fVar68 - fVar67,_uStack0000000000000060,0);
    fVar68 = fVar67 + fVar68;
    fVar53 = fVar70 + fVar53;
    fVar64 = fVar64 + 0.0;
    fVar57 = 0.0;
    fVar66 = (float)FUN_02692df0(fVar66 - fVar67,_uStack0000000000000060,0);
    fVar66 = fVar67 + fVar66;
    fVar69 = fVar70 + fVar69;
    fVar57 = fVar57 + 0.0;
    fVar72 = fVar70 + fVar60;
    fVar65 = fVar70 + fVar65;
    fStack00000000000000e8 = fVar67 + fVar54;
    fStack00000000000000ec = fVar67 + fVar63;
  }
  if (*in_stack_00000150 == 0) goto LAB_0249920c;
  lVar30 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_d13 = (ulong)(uint)fVar50;
  if (lVar30 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar30 = lVar30 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar30 + 0x120) = fVar72;
  *(float *)(lVar30 + 0x11c) = fStack00000000000000ec;
  *(float *)(lVar30 + 0x124) = fVar56;
  if (*in_stack_00000150 == 0) goto LAB_0249920c;
  lVar30 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_s12 = 1.0;
  if (lVar30 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar30 = lVar30 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar30 + 0x114) = fVar65;
  *(float *)(lVar30 + 0x110) = fStack00000000000000e8;
  *(float *)(lVar30 + 0x118) = fVar55;
  if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar30 = lVar30 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar30 + 0x128) = fVar68;
  *(float *)(lVar30 + 300) = fVar53;
  *(float *)(lVar30 + 0x130) = fVar64;
  if (*in_stack_00000150 == 0) goto LAB_0249920c;
  lVar30 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_d14 = (ulong)(uint)fVar51;
  if (lVar30 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar30 = lVar30 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar30 + 0x134) = fVar66;
  *(float *)(lVar30 + 0x138) = fVar69;
  *(float *)(lVar30 + 0x13c) = fVar57;
  if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
  goto LAB_0249920c;
  uVar15 = *in_stack_00000148;
  unaff_x21 = (long)(int)uVar15;
  if (*(uint *)(lVar30 + 0x18) <= uVar15)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar33 = lVar30 + unaff_x21 * unaff_x27;
  *(int *)(lVar33 + 0x140) = (int)unaff_x19[199];
  fVar66 = *(float *)(unaff_x19 + 0x9a);
  uVar24 = (ulong)(uint)fVar66;
  fVar60 = *(float *)((long)unaff_x19 + 0x614);
  *(float *)(lVar33 + 0x15c) = (fVar68 - fStack00000000000000ec) / (fVar65 - fVar72);
  *(float *)(lVar33 + 0x14c) = (fStack0000000000000134 - fVar66) + fVar60;
  fVar52 = fVar52 * fVar50;
  if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
    fVar52 = fVar52 / fStack00000000000000f4;
    fVar58 = (fVar58 * fVar50) / fStack00000000000000f4;
  }
  else {
    fVar58 = fVar58 * fVar50;
  }
  unaff_w24 = *(uint *)(unaff_x19 + 0x92);
  bVar12 = unaff_w29 != 0;
  fVar52 = fVar60 + fVar52;
  bVar13 = uVar15 != unaff_w24;
  if (bVar13 && bVar12) {
    fVar60 = *(float *)(unaff_x19 + 0x98);
    lVar30 = lVar30 + unaff_x21 * unaff_x27;
    *(float *)(lVar30 + 0x154) = fVar60;
    fVar58 = *(float *)((long)unaff_x19 + 0x4c4);
    *(float *)(lVar30 + 0x148) = fVar60 - fVar66;
    *(float *)(lVar30 + 0x158) = fVar58;
    *(float *)(unaff_x19 + 0x97) = fVar60 - fVar66;
    fVar58 = fVar58 - fVar66;
    *(float *)(lVar30 + 0x150) = fVar58;
  }
  else {
    fVar58 = fVar60 + fVar58;
    fVar68 = fVar52;
    fVar51 = fVar58;
    if (fVar60 != 0.0) {
      fVar68 = (fVar52 - fVar60) / *(float *)((long)unaff_x19 + 0x3fc);
      fVar51 = (fVar58 - fVar60) / *(float *)((long)unaff_x19 + 0x3fc);
      if (fVar68 <= fVar52) {
        fVar68 = fVar52;
      }
      if (fVar58 <= fVar51) {
        fVar51 = fVar58;
      }
    }
    lVar30 = lVar30 + unaff_x21 * unaff_x27;
    fVar60 = fVar68;
    if (fVar68 <= *(float *)(unaff_x19 + 0x98)) {
      fVar60 = *(float *)(unaff_x19 + 0x98);
    }
    fVar53 = fVar51;
    if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar51) {
      fVar53 = *(float *)((long)unaff_x19 + 0x4c4);
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar53;
    fVar58 = fVar58 - fVar66;
    *(float *)(unaff_x19 + 0x98) = fVar60;
    *(float *)(lVar30 + 0x154) = fVar68;
    *(float *)(lVar30 + 0x158) = fVar51;
    *(float *)(lVar30 + 0x148) = fVar52 - fVar66;
    *(float *)(unaff_x19 + 0x97) = fVar52 - fVar66;
    *(float *)(lVar30 + 0x150) = fVar58;
  }
  *(float *)((long)unaff_x19 + 0x4bc) = fVar58;
  if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
    if (!bVar13 || !bVar12) {
      *(float *)(unaff_x19 + 0x96) = fVar60;
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar60 = *(float *)((long)unaff_x19 + 0x4b4);
      fVar66 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
      fStack00000000000000f4 = (fVar50 * fVar66) / fStack00000000000000f4;
      uVar24 = (ulong)*(uint *)(unaff_x19 + 0x9a);
      if (fVar60 <= fStack00000000000000f4) {
        fVar60 = fStack00000000000000f4;
      }
      *(float *)((long)unaff_x19 + 0x4b4) = fVar60;
      goto LAB_02493948;
    }
  }
  else {
LAB_02493948:
    if ((!bVar13 || !bVar12) && (float)uVar24 == 0.0) {
      fVar60 = *(float *)(in_stack_00000070 + 0x208);
      if (*(float *)(in_stack_00000070 + 0x208) <= fVar52) {
        fVar60 = fVar52;
      }
      *(float *)(in_stack_00000070 + 0x208) = fVar60;
    }
  }
  lVar30 = *in_stack_00000150;
  if ((lVar30 == 0) || (lVar33 = *(long *)(lVar30 + 0x38), lVar33 == 0)) goto LAB_0249920c;
  uVar19 = *in_stack_00000148;
  if (*(uint *)(lVar33 + 0x18) <= uVar19)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar33 = lVar33 + (int)uVar19 * unaff_x27;
  *(undefined1 *)(lVar33 + 0x194) = 0;
  unaff_w26 = *(uint *)(unaff_x19 + 0x4e) & 0x18;
  in_stack_000017bc = unaff_w25;
  if (((unaff_w25 == 9) ||
      ((((unaff_w29 == 0 && (unaff_w25 != 3)) && (unaff_w25 != 0x200b)) && (unaff_w25 != 0xad)))) ||
     (((unaff_w25 == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) != 0 ||
      (*(int *)((long)unaff_x19 + 0x63c) == 1)))) {
    *(undefined1 *)(lVar33 + 0x194) = 1;
    pfVar34 = _fStack0000000000000088;
    pfVar36 = _fStack0000000000000098;
    if (unaff_w20 != 0) {
      lVar30 = *(long *)(lVar30 + 0x50);
      if (lVar30 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      pfVar36 = (float *)(lVar30 + 0x60);
      pfVar34 = (float *)(lVar30 + 100);
    }
    unaff_s8 = *pfVar36;
    unaff_s9 = *pfVar34;
    fVar60 = *(float *)(unaff_x19 + 0x6b);
    unaff_s10 = *(float *)(unaff_x19 + 199);
    fStack00000000000000d4 = (in_stack_00000090 - unaff_s8) - unaff_s9;
    bVar12 = true;
    if ((fVar60 <= fStack00000000000000d4) && (bVar12 = false, !NAN(fVar60))) {
      bVar12 = fVar60 == -1.0;
    }
    if (!bVar12) {
      fStack00000000000000d4 = fVar60;
    }
    param_1 = 0.0;
    if ((char)unaff_x19[0x1d] == '\0') {
      param_1 = (float)FUN_026fd474(&stack0x00001770,0);
      uVar24 = (ulong)*(uint *)(unaff_x19 + 0x9a);
    }
    fVar66 = *(float *)((long)unaff_x19 + 0x4c4);
    param_3 = *(float *)((long)unaff_x19 + 0x2cc);
    fVar60 = (float)uVar24;
    if (unaff_w25 != 0xad) {
      param_5 = fVar50;
    }
    fVar50 = 0.0;
    if ((0.0 < fVar60) && (fVar50 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar50 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar50 = (*(float *)(unaff_x19 + 0x96) - (fVar66 - fVar60)) + fVar50;
    unaff_w23 = *in_stack_00000148;
    if (fStack00000000000000a4 < fVar50) {
      if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
        *(uint *)((long)unaff_x19 + 0x2dc) = unaff_w23;
      }
      plVar48 = (long *)StringLiteral_302;
      plVar44 = (long *)System_Threading_Mutex_TypeInfo;
      uVar20 = DAT_02941c08;
      if ((char)unaff_x19[0x46] != '\0') {
        fVar58 = *(float *)(unaff_x19 + 0x58);
        if (((fVar58 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar60)) &&
           (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar50 = *(float *)((long)unaff_x19 + 0x2b4) +
                   ((in_stack_00000018._4_4_ - fVar50) / (float)(int)unaff_x19[0x94]) /
                   fStack0000000000000054;
          if (fVar50 <= fVar58) {
            fVar50 = fVar58;
          }
          goto LAB_024964c8;
        }
        fVar58 = *(float *)((long)unaff_x19 + 0x1dc);
        fVar60 = *(float *)(unaff_x19 + 0x49);
        uVar24 = (ulong)(uint)fVar60;
        if ((fVar60 < fVar58) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar50 = (fVar58 - *(float *)(unaff_x19 + 0x47)) * 0.5;
          if (fVar50 <= DAT_028aa298) {
            fVar50 = DAT_028aa298;
          }
          fVar66 = (fVar58 - fVar50) * 20.0 + 0.5;
          fVar50 = DAT_02958220;
          if (fVar66 != INFINITY) {
            fVar50 = (float)(int)fVar66 / 20.0;
          }
          if (fVar50 <= fVar60) {
            fVar50 = fVar60;
          }
          *(float *)((long)unaff_x19 + 0x234) = fVar58;
          goto LAB_02495fd8;
        }
      }
      switch((int)unaff_x19[0x5b]) {
      case 1:
        lVar30 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar30 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar30 = *plVar44;
        }
        lVar33 = *(long *)(lVar30 + 0xb8);
        lVar30 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar30 + 0x132) & 1) == 0) {
          lVar30 = FUN_00d5941c(lVar30);
        }
        plVar48 = (long *)StringLiteral_302;
        lVar30 = *(long *)(*(long *)(lVar30 + 0xc0) + 8);
        if ((*(byte *)(lVar30 + 0x132) & 1) == 0) {
          lVar30 = FUN_00d5941c();
        }
        piVar25 = (int *)thunk_FUN_00d32ed4(lVar33 + 0x11f0,*(long *)(lVar30 + 0x80) + 0xa0);
        if (*piVar25 == 0) {
LAB_02495f00:
          uVar20 = DAT_02941c08;
          in_stack_00000148[0] = 0;
          in_stack_00000148[1] = 0;
          in_stack_00001788 = 0xffffffff;
        }
        else {
          lVar30 = *plVar44;
          if (*(int *)(lVar30 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar30 = *plVar44;
          }
          FUN_013b8de4(*(long *)(lVar30 + 0xb8) + 0x11f0,&stack0x00000880,
                       *(undefined8 *)
                        Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                      );
          memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_02494358:
          iVar14 = FUN_024d66ec();
          in_stack_000017bc = unaff_w25;
LAB_02494364:
          iVar49 = *(int *)((long)unaff_x19 + 0x48c) + -1;
          *(int *)((long)unaff_x19 + 0x48c) = iVar49;
          in_stack_00000140 = in_stack_00000140 + 1;
          in_stack_00001788 = iVar14 - 1;
          uVar20 = CONCAT44(0x2026,iVar49);
        }
        goto LAB_02492630;
      default:
        goto code_r0x02493dac;
      case 3:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
LAB_02493ec0:
        plVar48 = (long *)StringLiteral_302;
        in_stack_00001788 = FUN_024d66ec();
        break;
      case 5:
        if ((unaff_w23 == 0) || ((int)in_stack_00001788 < 0)) {
          in_stack_00001788 = 0xffffffff;
          *in_stack_00000148 = 0;
          plVar48 = (long *)StringLiteral_302;
          plVar44 = (long *)System_Threading_Mutex_TypeInfo;
          goto LAB_02492630;
        }
        fVar50 = *(float *)(unaff_x19 + 0x98);
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        if (fVar50 - fVar66 <= fStack00000000000000a4) {
          *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
          *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
          uVar24 = *(ulong *)(*(long *)(*plVar44 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x99) = 0;
          lVar30 = NEON_rev64(uVar24,4);
          unaff_x19[0x98] = lVar30;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x94) = (int)unaff_x19[0x94] + 1;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          uVar20 = in_stack_000017a8;
          goto LAB_02492630;
        }
        break;
      case 6:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        plVar48 = (long *)StringLiteral_302;
        lVar30 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar22 = FUN_02681b9c(lVar30,0,0);
        if ((uVar22 & 1) != 0) {
          plVar47 = (long *)unaff_x19[0x5c];
          uVar20 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar47 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar47 + 0x558))(plVar47,uVar20,*(undefined8 *)(*plVar47 + 0x560));
          lVar30 = unaff_x19[0x5c];
          if (lVar30 == 0) goto LAB_0249920c;
          *(int *)(lVar30 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar30,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar47 = (long *)unaff_x19[0x5c];
          if (plVar47 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar47 + 0x7d8))(plVar47,0,0,*(undefined8 *)(*plVar47 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
      }
LAB_0249408c:
      uVar20 = CONCAT44(3,unaff_w23);
      goto LAB_02492630;
    }
    goto code_r0x02493dac;
  }
  if (((unaff_w25 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
    fVar60 = (float)uVar24;
    fVar50 = 0.0;
    if ((0.0 < fVar60) && (fVar50 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar50 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    uVar24 = (ulong)(uint)fStack00000000000000a4;
    if (fStack00000000000000a4 <
        (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - fVar60)) + fVar50) {
      if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
        *(uint *)((long)unaff_x19 + 0x2dc) = uVar19;
      }
      plVar48 = (long *)StringLiteral_302;
      plVar44 = (long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00001788 = FUN_024d66ec();
      lVar30 = unaff_x19[0x5c];
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
      }
      uVar22 = FUN_02681b9c(lVar30,0,0);
      if ((uVar22 & 1) != 0) {
        plVar47 = (long *)unaff_x19[0x5c];
        uVar20 = (**(code **)(*unaff_x19 + 0x548))();
        if (plVar47 == (long *)0x0) goto LAB_0249920c;
        (**(code **)(*plVar47 + 0x558))(plVar47,uVar20,*(undefined8 *)(*plVar47 + 0x560));
        lVar30 = unaff_x19[0x5c];
        if (lVar30 == 0) goto LAB_0249920c;
        *(int *)(lVar30 + 0x3f8) = (int)unaff_x19[0x7f];
        FUN_024c910c(lVar30,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
        plVar47 = (long *)unaff_x19[0x5c];
        if (plVar47 == (long *)0x0) goto LAB_0249920c;
        (**(code **)(*plVar47 + 0x7d8))(plVar47,0,0,*(undefined8 *)(*plVar47 + 0x7e0));
        *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      }
      uVar20 = CONCAT44(3,uVar19);
      goto LAB_02492630;
    }
  }
  if ((((unaff_w25 - 0x2007 < 0x23) &&
       ((1L << ((ulong)(unaff_w25 - 0x2007) & 0x3f) & 0x600000001U) != 0)) || (unaff_w25 - 10 < 2))
     || (unaff_w25 == 0xa0)) {
LAB_024944e4:
    if (((unaff_w25 != 0xad) && (unaff_w25 != 0x200b)) && (unaff_w25 != 0x2060)) {
      lVar30 = *in_stack_00000150;
      if ((lVar30 == 0) || (lVar33 = *(long *)(lVar30 + 0x50), lVar33 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar33 = lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      *(int *)(lVar33 + 0x2c) = *(int *)(lVar33 + 0x2c) + 1;
      *(int *)(lVar30 + 0x20) = *(int *)(lVar30 + 0x20) + 1;
    }
  }
  else {
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar24 = FUN_016fa418(unaff_w25,0);
    if ((uVar24 & 1) != 0) goto LAB_024944e4;
  }
  if (unaff_w25 == 0xa0) {
    if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x50), lVar30 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_024949c4:
    *(int *)(lVar30 + 0x20) = *(int *)(lVar30 + 0x20) + 1;
  }
LAB_02494abc:
  if (((int)unaff_x19[0x5b] == 1) && ((in_stack_000017bc == 0x2d || (unaff_w20 != 1)))) {
    if (unaff_x19[0xca] == 0) goto LAB_0249920c;
    fVar50 = *(float *)(unaff_x19 + 0x3c);
    iVar14 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
    if (unaff_x19[0xca] == 0) goto LAB_0249920c;
    fVar66 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
    lVar30 = unaff_x19[0xc9];
    fVar60 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar60 = 1.0;
    }
    if ((lVar30 == 0) || (*(long *)(lVar30 + 0x20) == 0)) goto LAB_0249920c;
    fVar68 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar53 = *(float *)(lVar30 + 0x2c);
    fVar58 = (float)FUN_026fd668(*(long *)(lVar30 + 0x20),0);
    fVar51 = *_fStack0000000000000098;
    fVar58 = fVar68 * (fVar50 / (float)iVar14) * fVar66 * fVar60 * fVar53 * fVar58;
    fVar50 = *_fStack0000000000000088;
    if ((in_stack_000017bc == 10) && (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
      if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
      goto LAB_0249920c;
      uVar19 = *(int *)((long)unaff_x19 + 0x48c) - 1;
      if (*(uint *)(lVar30 + 0x18) <= uVar19)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (unaff_x19[0xca] == 0) goto LAB_0249920c;
      fVar60 = *(float *)(lVar30 + (long)(int)uVar19 * (long)iVar18 + 0x60);
      iVar14 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
      if (unaff_x19[0xca] == 0) goto LAB_0249920c;
      fVar68 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
      lVar30 = unaff_x19[0xc9];
      fVar66 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar66 = 1.0;
      }
      if ((lVar30 == 0) || (*(long *)(lVar30 + 0x20) == 0)) goto LAB_0249920c;
      fVar53 = *(float *)((long)unaff_x19 + 0x3fc);
      fVar69 = *(float *)(lVar30 + 0x2c);
      fVar58 = (float)FUN_026fd668(*(long *)(lVar30 + 0x20),0);
      if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x50), lVar30 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      fVar51 = *(float *)(lVar30 + 0x60);
      fVar50 = *(float *)(lVar30 + 100);
      fVar58 = fVar53 * (fVar60 / (float)iVar14) * fVar68 * fVar66 * fVar69 * fVar58;
    }
    fVar53 = *(float *)(unaff_x19 + 0x9a);
    fVar66 = *(float *)(unaff_x19 + 0x96);
    fVar69 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar60 = 0.0;
    fVar68 = 0.0;
    if ((0.0 < fVar53) && (fVar68 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar68 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar52 = *(float *)(unaff_x19 + 199);
    if ((char)unaff_x19[0x1d] == '\0') {
      if ((unaff_x19[0xc9] == 0) || (lVar30 = *(long *)(unaff_x19[0xc9] + 0x20), lVar30 == 0))
      goto LAB_0249920c;
      FUN_026fd62c(&stack0x00000880,lVar30,0);
      unaff_x28 = &stack0x00000880;
      fVar60 = (float)FUN_026fd474(&stack0x000016e0,0);
    }
    puVar10 = System_Threading_Mutex_TypeInfo;
    fVar63 = *(float *)(unaff_x19 + 0x6b);
    fVar50 = (in_stack_00000090 - fVar51) - fVar50;
    bVar12 = true;
    if ((fVar63 <= fVar50) && (bVar12 = false, !NAN(fVar63))) {
      bVar12 = fVar63 == -1.0;
    }
    if (!bVar12) {
      fVar50 = fVar63;
    }
    unaff_d13 = in_stack_00000100 & 0xffffffff;
    fVar51 = _DAT_0294c6e8;
    if (unaff_w26 == 0) {
      fVar51 = 1.0;
    }
    if (((fVar66 - (fVar69 - fVar53)) + fVar68 < fStack00000000000000a4) &&
       (ABS(fVar52) + fVar58 * fVar60 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
        fVar51 * fVar50)) {
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024d69d4();
      lVar30 = *(long *)(*(long *)puVar10 + 0xb8);
      memcpy(&stack0x00000508,(void *)(lVar30 + 0x788),0x378);
      FUN_013b86dc(lVar30 + 0x11f0,&stack0x00000508,
                   *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
    }
  }
  fVar50 = 1.0;
  lVar30 = *in_stack_00000150;
  if ((lVar30 == 0) || (lVar33 = *(long *)(lVar30 + 0x38), lVar33 == 0)) goto LAB_0249920c;
  if (*(uint *)(lVar33 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  uVar19 = *(uint *)(unaff_x19 + 0x94);
  lVar33 = lVar33 + (int)*in_stack_00000148 * unaff_x27;
  *(uint *)(lVar33 + 100) = uVar19;
  *(int *)(lVar33 + 0x68) = (int)unaff_x19[0x95];
  if (((unaff_w20 & 1) == 0) &&
     ((0xd < in_stack_000017bc || ((1 << (ulong)(in_stack_000017bc & 0x1f) & 0x2c00U) == 0)))) {
    lVar30 = *(long *)(lVar30 + 0x50);
    if (lVar30 == 0) goto LAB_0249920c;
LAB_02494e68:
    if (*(uint *)(lVar30 + 0x18) <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(int *)(lVar30 + (long)(int)uVar19 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
  }
  else {
    lVar30 = *(long *)(lVar30 + 0x50);
    if (lVar30 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar30 + 0x18) <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (*(int *)(lVar30 + (long)(int)uVar19 * 0x5c + 0x24) == 1) goto LAB_02494e68;
  }
  fVar60 = (float)unaff_d13;
  if (in_stack_000017bc == 9) {
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar50 = (float)FUN_026fd208(*in_stack_00000138 + 0x50,0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar68 = *(float *)(unaff_x19 + 199);
    fVar66 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000138 + 0x1b9));
    fVar50 = fVar60 * fVar50 * fVar66;
    fVar58 = fVar50 * (float)(int)(fVar68 / fVar50);
    uVar24 = (ulong)(uint)fVar58;
    if (fVar58 <= fVar68) {
      fVar58 = fVar68 + fVar50;
    }
LAB_02495058:
    *(float *)(unaff_x19 + 199) = fVar58;
  }
  else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
    if ((char)unaff_x19[0x1d] == '\0') {
      if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
        fVar50 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
      }
      fVar58 = *(float *)(unaff_x19 + 199);
      fVar68 = (float)FUN_026fd474(&stack0x00001770,0);
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar66 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
      fVar58 = fVar58 + fVar66 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                 fVar60 * (fStack00000000000000ac + fVar50 * fVar68) +
                                 fStack00000000000000c8 *
                                 (in_stack_000000c0 +
                                 fStack00000000000000cc + *(float *)(unaff_x19[0x1f] + 0x1ac)));
      *(float *)(unaff_x19 + 199) = fVar58;
      goto joined_r0x02494fac;
    }
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar58 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (*(float *)((long)unaff_x19 + 0x2a4) +
             fVar60 * fStack00000000000000ac +
             fStack00000000000000c8 *
             (in_stack_000000c0 + fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
    uVar24 = (ulong)(uint)fVar58;
    fVar58 = *(float *)(unaff_x19 + 199) - fVar58;
    *(float *)(unaff_x19 + 199) = fVar58;
    if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
      fVar50 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      uVar24 = (ulong)(uint)fVar50;
      fVar58 = fVar58 - fVar50;
      goto LAB_02495058;
    }
  }
  else {
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar66 = *(float *)(unaff_x19 + 199);
    fVar58 = fVar66 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                      (*(float *)((long)unaff_x19 + 0x2a4) +
                      (*(float *)(unaff_x19 + 0x55) - fStack0000000000000080) +
                      fStack00000000000000c8 *
                      (fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
    *(float *)(unaff_x19 + 199) = fVar58;
joined_r0x02494fac:
    if ((unaff_w29 != 0) || (uVar24 = (ulong)(uint)fVar66, in_stack_000017bc == 0x200b)) {
      fVar50 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      uVar24 = (ulong)(uint)fVar50;
      fVar58 = fVar58 + fVar50;
      goto LAB_02495058;
    }
  }
  lVar30 = *in_stack_00000150;
  if ((lVar30 == 0) || (lVar33 = *(long *)(lVar30 + 0x38), lVar33 == 0)) goto LAB_0249920c;
  uVar19 = *in_stack_00000148;
  uVar61 = (uint)*(undefined8 *)(lVar33 + 0x18);
  if (uVar61 <= uVar19) goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(float *)(lVar33 + (int)uVar19 * unaff_x27 + 0x144) = fVar58;
  uVar38 = in_stack_000017bc;
  if ((int)in_stack_000017bc < 0xd) {
    if ((in_stack_000017bc - 10 < 2) || (in_stack_000017bc == 3)) goto LAB_024950bc;
FUN_02495710:
    if (((unaff_w20 & in_stack_000017bc == 0x2d) != 0) || ((float)uVar19 == in_stack_00000078._4_4_)
       ) goto LAB_024950bc;
  }
  else {
    if (1 < in_stack_000017bc - 0x2028) {
      if (in_stack_000017bc != 0xd) goto FUN_02495710;
      uVar24 = 0;
      *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
      if ((float)uVar19 != in_stack_00000078._4_4_) goto LAB_0249572c;
    }
LAB_024950bc:
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
        puVar10 = System_Threading_Mutex_TypeInfo;
        lVar30 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar30 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar30 = *(long *)puVar10;
        }
        lVar33 = *(long *)(lVar30 + 0xb8);
        if (*(int *)(lVar33 + 0x7ac) == (int)unaff_x19[0x94]) {
          if (*(int *)(lVar30 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar33 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          FUN_013b8de4(lVar33 + 0x11f0,&stack0x00000880,
                       *(undefined8 *)
                        Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                      );
          lVar30 = *(long *)System_Threading_Mutex_TypeInfo;
          memcpy((void *)(*(long *)(lVar30 + 0xb8) + 0x788),&stack0x00000880,0x378);
          lVar30 = *(long *)(lVar30 + 0xb8);
          *(float *)(lVar30 + 0x7bc) = fVar50 + *(float *)(lVar30 + 0x7bc);
          *(float *)(lVar30 + 0x800) = fVar50 + *(float *)(lVar30 + 0x800);
          memcpy(&stack0x00000190,(void *)(lVar30 + 0x788),0x378);
          FUN_013b86dc(lVar30 + 0x11f0,&stack0x00000190,
                       *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
        }
      }
    }
    fVar58 = *(float *)(unaff_x19 + 0x9a);
    *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
    fVar66 = *(float *)((long)unaff_x19 + 0x4c4) - fVar58;
    fVar50 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar66 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar50 = fVar66;
    }
    *(float *)((long)unaff_x19 + 0x4bc) = fVar50;
    fVar68 = *(float *)(unaff_x19 + 0x98);
    if (unaff_x28[0xf34] == '\0') {
      in_stack_000017b8 = fVar50;
    }
    if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
       (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
        ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
      unaff_x28[0xf34] = 1;
    }
    lVar30 = *in_stack_00000150;
    if ((lVar30 == 0) || (lVar33 = *(long *)(lVar30 + 0x50), lVar33 == 0)) goto LAB_0249920c;
    uVar19 = *(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar33 + 0x18) <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar46 = lVar33 + (long)(int)uVar19 * 0x5c;
    *(int *)(lVar46 + 0x34) = (int)unaff_x19[0x92];
    iVar14 = (int)unaff_x19[0x92];
    if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
      iVar14 = *(int *)((long)unaff_x19 + 0x494);
    }
    *(int *)((long)unaff_x19 + 0x494) = iVar14;
    *(int *)(lVar46 + 0x38) = iVar14;
    *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
    *(undefined4 *)(lVar46 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
    iVar14 = *(int *)((long)unaff_x19 + 0x494);
    if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
      iVar14 = *(int *)((long)unaff_x19 + 0x49c);
    }
    *(int *)((long)unaff_x19 + 0x49c) = iVar14;
    *(int *)(lVar46 + 0x40) = iVar14;
    *(int *)(lVar46 + 0x24) = (*(int *)(lVar46 + 0x3c) - *(int *)(lVar46 + 0x34)) + 1;
    *(undefined4 *)(lVar46 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
    lVar30 = *(long *)(lVar30 + 0x38);
    if (lVar30 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar30 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    uVar71 = *(undefined4 *)(lVar30 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x27 + 0x11c);
    lVar33 = lVar33 + (long)(int)uVar19 * 0x5c;
    *(float *)(lVar33 + 0x70) = fVar66;
    *(undefined4 *)(lVar33 + 0x6c) = uVar71;
    lVar30 = *in_stack_00000150;
    if ((lVar30 == 0) || (lVar33 = *(long *)(lVar30 + 0x50), lVar33 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar30 = *(long *)(lVar30 + 0x38);
    if (lVar30 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar30 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    uVar71 = *(undefined4 *)(lVar30 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x27 + 0x128);
    fVar68 = fVar68 - fVar58;
    lVar33 = lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    *(float *)(lVar33 + 0x78) = fVar68;
    *(undefined4 *)(lVar33 + 0x74) = uVar71;
    lVar30 = *in_stack_00000150;
    if ((lVar30 == 0) || (lVar46 = *(long *)(lVar30 + 0x50), lVar46 == 0)) goto LAB_0249920c;
    lVar23 = (long)(int)*(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar46 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar33 = lVar46 + lVar23 * 0x5c;
    *(float *)(lVar33 + 0x44) = *(float *)(lVar33 + 0x74) - fVar60 * in_stack_00000128;
    *(float *)(lVar33 + 0x5c) = fStack00000000000000d4;
    if (*(int *)(lVar33 + 0x24) == 1) {
      *(int *)(lVar46 + lVar23 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
    }
    if ((*in_stack_00000138 == 0) || (lVar33 = *(long *)(lVar30 + 0x38), lVar33 == 0))
    goto LAB_0249920c;
    lVar41 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
    uVar61 = (uint)*(undefined8 *)(lVar33 + 0x18);
    if (uVar61 <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(char *)(lVar33 + lVar41 * unaff_x27 + 0x194) == '\0') &&
       (lVar41 = (long)(int)*(uint *)(unaff_x19 + 0x93), uVar61 <= *(uint *)(unaff_x19 + 0x93)))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar60 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (fStack00000000000000c8 *
              (in_stack_000000c0 + fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac))
             - *(float *)((long)unaff_x19 + 0x2a4));
    fVar50 = -fVar60;
    if ((char)unaff_x19[0x1d] != '\0') {
      fVar50 = fVar60;
    }
    lVar46 = lVar46 + lVar23 * 0x5c;
    *(float *)(lVar46 + 0x58) = *(float *)(lVar33 + lVar41 * unaff_x27 + 0x144) + fVar50;
    fVar50 = *(float *)(unaff_x19 + 0x9a);
    *(float *)(lVar46 + 0x48) = fStack0000000000000050 + (fVar68 - fVar66);
    *(float *)(lVar46 + 0x4c) = fVar68;
    uVar24 = (ulong)(uint)(0.0 - fVar50);
    *(float *)(lVar46 + 0x50) = 0.0 - fVar50;
    *(float *)(lVar46 + 0x54) = fVar66;
    plVar44 = (long *)System_Threading_Mutex_TypeInfo;
    if ((int)in_stack_000017bc < 0x2d) {
      if (in_stack_000017bc - 10 < 2) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar48 = (long *)StringLiteral_302;
        FUN_024d69d4();
        lVar30 = unaff_x19[0x6c];
        *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
        iVar14 = (int)unaff_x19[0x94] + 1;
        *(int *)(unaff_x19 + 0x94) = iVar14;
        *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
        if ((lVar30 == 0) || (*(long *)(lVar30 + 0x50) == 0)) goto LAB_0249920c;
        if (*(int *)(*(long *)(lVar30 + 0x50) + 0x18) <= iVar14) {
          FUN_024d6e60();
          lVar30 = unaff_x19[0x6c];
          if (lVar30 == 0) goto LAB_0249920c;
        }
        lVar30 = *(long *)(lVar30 + 0x38);
        if (lVar30 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar50 = *(float *)(lVar30 + (int)*in_stack_00000148 * unaff_x27 + 0x154);
        if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
          fVar60 = 0.0;
          if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
            fVar60 = *(float *)((long)unaff_x19 + 0x2c4);
          }
          uVar28 = 0;
          fVar60 = *(float *)(unaff_x19 + 0x9a) +
                   fVar50 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                   fStack0000000000000054 *
                   (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4)) +
                   fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar60);
        }
        else {
          if ((in_stack_000017bc == 0x2029) || (fVar60 = 0.0, in_stack_000017bc == 10)) {
            fVar60 = *(float *)((long)unaff_x19 + 0x2c4);
          }
          uVar28 = 1;
          fVar60 = *(float *)(unaff_x19 + 0x9a) +
                   *(float *)(unaff_x19 + 0x57) +
                   fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar60);
        }
        *(float *)(unaff_x19 + 0x9a) = fVar60;
        *(undefined1 *)((long)unaff_x19 + 700) = uVar28;
        lVar30 = *plVar44;
        if (*(int *)(lVar30 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar30 = *plVar44;
        }
        uVar21 = *(undefined8 *)(*(long *)(lVar30 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x99) = fVar50;
        uVar24 = NEON_rev64(uVar21,4);
        unaff_x19[0x98] = uVar24;
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
        uVar38 = 3;
      }
    }
    else if ((in_stack_000017bc - 0x2028 < 2) || (in_stack_000017bc == 0x2d))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering;
  }
LAB_0249572c:
  uVar19 = *in_stack_00000148;
  if (uVar61 <= uVar19) goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  if (*(char *)(lVar33 + (int)uVar19 * unaff_x27 + 0x194) != '\0') {
    lVar33 = lVar33 + (int)uVar19 * unaff_x27;
    uVar22 = *(ulong *)(lVar33 + 0x11c);
    uVar24 = *(ulong *)(in_stack_00000070 + 0x230);
    *(ulong *)(in_stack_00000070 + 0x230) =
         uVar22 ^ (uVar22 ^ uVar24) &
                  CONCAT44(-(uint)((float)(uVar24 >> 0x20) < (float)(uVar22 >> 0x20)),
                           -(uint)((float)uVar24 < (float)uVar22));
    uVar22 = *(ulong *)(in_stack_00000070 + 0x238);
    uVar24 = *(ulong *)(lVar33 + 0x128);
    *(ulong *)(in_stack_00000070 + 0x238) =
         uVar24 ^ (uVar24 ^ uVar22) &
                  CONCAT44(-(uint)((float)(uVar24 >> 0x20) < (float)(uVar22 >> 0x20)),
                           -(uint)((float)uVar24 < (float)uVar22));
  }
  if (((int)unaff_x19[0x5b] == 5) &&
     ((0xd < uVar38 || ((1 << (ulong)(uVar38 & 0x1f) & 0x2c00U) == 0)))) {
    lVar33 = *(long *)(lVar30 + 0x58);
    if (lVar33 == 0) goto LAB_0249920c;
    iVar14 = (int)unaff_x19[0x95] + 1;
    if (*(int *)(lVar33 + 0x18) < iVar14) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147c08((long *)(lVar30 + 0x58),iVar14,1,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
      lVar30 = *in_stack_00000150;
      if (lVar30 == 0) goto LAB_0249920c;
    }
    lVar33 = *(long *)(lVar30 + 0x58);
    if (lVar33 == 0) goto LAB_0249920c;
    uVar61 = *(uint *)(unaff_x19 + 0x95);
    lVar46 = (long)(int)uVar61;
    uVar19 = *(uint *)(lVar33 + 0x18);
    if (uVar19 <= uVar61)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar23 = lVar33 + lVar46 * 0x14;
    fVar60 = *(float *)(lVar23 + 0x30);
    uVar24 = (ulong)(uint)fVar60;
    *(undefined4 *)(lVar23 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    fVar50 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar60 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar50 = fVar60;
    }
    *(float *)(lVar23 + 0x30) = fVar50;
    uVar38 = *(uint *)((long)unaff_x19 + 0x48c);
    if (uVar38 == 0 && uVar61 == 0) {
      *(uint *)(lVar33 + lVar46 * 0x14 + 0x20) = uVar38;
    }
    else {
      uVar7 = uVar38 - 1;
      if (0 < (int)uVar38) {
        lVar30 = *(long *)(lVar30 + 0x38);
        if (lVar30 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= uVar7)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (uVar61 != *(uint *)(lVar30 + (long)(int)uVar7 * (long)iVar18 + 0x68)) {
          if (uVar19 <= uVar61 - 1)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          *(uint *)(lVar33 + 0x20 + (long)(int)(uVar61 - 1) * 0x14 + 4) = uVar7;
          *(uint *)(lVar33 + 0x20 + lVar46 * 0x14) = uVar38;
          goto LAB_024957b0;
        }
      }
      if ((float)uVar38 == in_stack_00000078._4_4_) {
        *(float *)(lVar33 + lVar46 * 0x14 + 0x24) = in_stack_00000078._4_4_;
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
    lVar30 = FUN_024e94b0(0);
    if ((lVar30 == 0) || (*(long *)(lVar30 + 0x10) == 0)) goto LAB_0249920c;
    uVar22 = FUN_0129aa60(*(long *)(lVar30 + 0x10),&stack0x00000880,
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
    lVar30 = FUN_024e94b0(0);
    if (((lVar30 == 0) || (*in_stack_00000150 == 0)) ||
       (lVar33 = *(long *)(*in_stack_00000150 + 0x38), lVar33 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar33 + 0x18) <= *in_stack_00000148 + 1)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (*(long *)(lVar30 + 0x18) == 0) goto LAB_0249920c;
    in_stack_00000880 =
         (uint)*(ushort *)(lVar33 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar18 + 0x20);
    uVar26 = FUN_0129aa60(*(long *)(lVar30 + 0x18),&stack0x00000880,
                          *(undefined8 *)
                           System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                         );
    if ((uVar22 & 1) != 0) goto LAB_02495adc;
    if ((uVar26 & 1) == 0) goto LAB_02495bc4;
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
  plVar44 = (long *)System_Threading_Mutex_TypeInfo;
  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar48 = (long *)StringLiteral_302;
  FUN_024d69d4();
  *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
  goto LAB_02492630;
LAB_02496a50:
  do {
    uVar15 = uVar38 - 1;
    if (*(uint *)(lVar30 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*in_stack_00000150 == 0) || (lVar46 = *(long *)(*in_stack_00000150 + 0x50), lVar46 == 0))
    goto LAB_0249920c;
    lVar41 = (long)(int)uVar15;
    lVar23 = lVar30 + lVar41 * 0x178;
    uVar7 = *(uint *)(lVar23 + 100);
    if (*(uint *)(lVar46 + 0x18) <= uVar7)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar39 = *(long *)(lVar23 + 0x38);
    uVar3 = *(ushort *)(lVar23 + 0x20);
    lVar37 = (long)(int)uVar7;
    lVar46 = lVar46 + lVar37 * 0x5c;
    uVar5 = *(uint *)(lVar46 + 0x3c);
    iVar16 = *(int *)(lVar46 + 0x28);
    iVar17 = *(int *)(lVar46 + 0x2c);
    uVar6 = *(uint *)(lVar46 + 0x40);
    lVar23 = (long)(int)uVar6;
    uVar45 = *(uint *)(lVar46 + 0x68);
    fVar56 = *(float *)(lVar46 + 0x5c);
    fVar57 = *(float *)(lVar46 + 0x60);
    iVar2 = *(int *)(lVar46 + 0x20);
    fVar69 = *(float *)(lVar46 + 0x4c);
    fVar63 = *(float *)(lVar46 + 0x54);
    fVar68 = *(float *)(lVar46 + 0x58);
    fVar55 = *(float *)(lVar46 + 0x6c);
    fVar65 = *(float *)(lVar46 + 0x70);
    fVar51 = *(float *)(lVar46 + 0x74);
    fVar52 = *(float *)(lVar46 + 0x78);
    fVar72 = fVar56 + fVar57;
    uVar43 = (uint)uVar3;
    if ((int)uVar45 < 9) {
      switch(uVar45) {
      case 1:
        if ((char)unaff_x19[0x1d] == '\0') {
          fStack00000000000000c8 = fVar57 + 0.0;
        }
        else {
          fStack00000000000000c8 = 0.0 - fVar68;
        }
        break;
      case 2:
LAB_02496c1c:
        fStack00000000000000c8 = (fVar57 + fVar56 * 0.5) - fVar68 * 0.5;
        break;
      default:
        goto switchD_02496b58_caseD_3;
      case 4:
        fStack00000000000000c8 = fVar72 - fVar68;
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
    else if (uVar45 == 0x10) {
switchD_02496b58_caseD_8:
      if (uVar3 < 0xad) {
        if ((uVar43 != 3) && (uVar43 != 10)) goto LAB_02496bac;
      }
      else if ((uVar43 != 0xad) && ((uVar43 != 0x200b && (uVar43 != 0x2060)))) {
LAB_02496bac:
        if (*(uint *)(lVar30 + 0x18) <= uVar5)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar4 = *(undefined2 *)(lVar30 + (long)(int)uVar5 * 0x178 + 0x20);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar24 = FUN_016f9f84(uVar4,0);
        if ((uVar24 & 1) == 0) {
          bVar1 = (int)uVar7 < (int)unaff_x19[0x94];
        }
        else {
          bVar1 = false;
        }
        if ((fVar68 <= fVar56) && (!bVar1 && (uVar45 >> 4 & 1) == 0)) {
          fStack00000000000000c8 = fVar57;
          if ((char)unaff_x19[0x1d] != '\0') {
            fStack00000000000000c8 = fVar72;
          }
          goto LAB_02496c90;
        }
        if (((uVar38 == 1) || (uVar7 != uVar61)) || (uVar15 == *(uint *)((long)unaff_x19 + 0x31c)))
        {
          fStack00000000000000c8 = fVar57;
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
          cVar29 = (char)unaff_x19[0x1d];
          fVar72 = -fVar68;
          if (cVar29 != '\0') {
            fVar72 = fVar68;
          }
          if (*(uint *)(lVar30 + 0x18) <= uVar5)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar68 = 1.0;
          iVar17 = (int)*(char *)(lVar30 + (long)(int)uVar5 * 0x178 + 0x194) +
                   (-iVar2 - ((uint)fStack0000000000000020 & 1)) + iVar17 + -1;
          if (0 < iVar17) {
            fVar68 = *(float *)((long)unaff_x19 + 0x2d4);
          }
          if (iVar17 < 1) {
            iVar17 = 1;
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
              uVar24 = FUN_016fa418(uVar3,0);
              cVar29 = (char)unaff_x19[0x1d];
              if ((uVar24 & 1) != 0) goto LAB_02498bb8;
            }
            iVar17 = (iVar2 - (~(uint)fStack0000000000000020 & 1)) + iVar16;
          }
          fVar68 = ((fVar56 + fVar72) * fVar68) / (float)iVar17;
          if (cVar29 == '\0') {
            fStack00000000000000c8 = fStack00000000000000c8 + fVar68;
            _in_stack_000000c0 =
                 CONCAT44((float)((ulong)_in_stack_000000c0 >> 0x20) + 0.0,
                          (float)_in_stack_000000c0 + 0.0);
          }
          else {
            fStack00000000000000c8 = fStack00000000000000c8 - fVar68;
          }
        }
      }
    }
    else if (uVar45 == 0x20) {
      fVar68 = fVar55 + fVar51;
      goto LAB_02496c1c;
    }
switchD_02496b58_caseD_3:
    uVar45 = (uint)*(undefined8 *)(lVar30 + 0x18);
    if (uVar45 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar46 = lVar30 + lVar41 * 0x178;
    fVar72 = fStack0000000000000098 + fStack00000000000000c8;
    fVar68 = (float)_in_stack_00000090 + (float)_in_stack_000000c0;
    fVar56 = (float)((ulong)_in_stack_00000090 >> 0x20) + (float)((ulong)_in_stack_000000c0 >> 0x20)
    ;
    if (*(char *)(lVar46 + 0x194) == '\0') goto LAB_02497688;
    iVar16 = *(int *)(lVar30 + lVar41 * 0x178 + 0x2c);
    if (iVar16 != 0) goto LAB_02497374;
    fVar58 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar7,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
    case 0:
      lVar32 = lVar30 + lVar41 * 0x178;
      *(undefined4 *)(lVar32 + 0x84) = 0;
      *(undefined4 *)(lVar32 + 0xac) = 0;
      *(undefined4 *)(lVar32 + 0xd4) = 0x3f800000;
      fVar58 = 1.0;
      break;
    case 1:
      fVar52 = *(float *)(lVar30 + lVar41 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
        lVar32 = lVar30 + lVar41 * 0x178;
        fVar51 = (fStack00000000000000c8 + fVar52) - *(float *)(in_stack_00000070 + 0x230);
        fVar52 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
        goto LAB_02496df8;
      }
      lVar32 = lVar30 + lVar41 * 0x178;
      fVar51 = fVar51 - fVar55;
      *(float *)(lVar32 + 0x84) = fVar58 + (fVar52 - fVar55) / fVar51;
      *(float *)(lVar32 + 0xac) = fVar58 + (*(float *)(lVar32 + 0x98) - fVar55) / fVar51;
      *(float *)(lVar32 + 0xd4) = fVar58 + (*(float *)(lVar32 + 0xc0) - fVar55) / fVar51;
      fVar58 = fVar58 + (*(float *)(lVar32 + 0xe8) - fVar55) / fVar51;
      break;
    case 2:
      lVar32 = lVar30 + lVar41 * 0x178;
      fVar52 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      fVar51 = (fStack00000000000000c8 + *(float *)(lVar32 + 0x70)) -
               *(float *)(in_stack_00000070 + 0x230);
LAB_02496df8:
      *(float *)(lVar32 + 0x84) = fVar58 + fVar51 / fVar52;
      *(float *)(lVar32 + 0xac) =
           fVar58 + ((fStack00000000000000c8 + *(float *)(lVar32 + 0x98)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      *(float *)(lVar32 + 0xd4) =
           fVar58 + ((fStack00000000000000c8 + *(float *)(lVar32 + 0xc0)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      fVar58 = fVar58 + ((fStack00000000000000c8 + *(float *)(lVar32 + 0xe8)) -
                        *(float *)(in_stack_00000070 + 0x230)) /
                        (*(float *)(in_stack_00000070 + 0x238) -
                        *(float *)(in_stack_00000070 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x61]) {
      case 0:
        lVar32 = lVar30 + lVar41 * 0x178;
        *(undefined4 *)(lVar32 + 0x88) = 0;
        *(undefined4 *)(lVar32 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar32 + 0xd8) = 0;
        *(undefined4 *)(lVar32 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar32 = lVar30 + lVar41 * 0x178;
        fVar52 = fVar52 - fVar65;
        fVar51 = fVar58 + (*(float *)(lVar32 + 0x74) - fVar65) / fVar52;
        fVar52 = fVar58 + (*(float *)(lVar32 + 0x9c) - fVar65) / fVar52;
        *(float *)(lVar32 + 0x88) = fVar51;
        *(float *)(lVar32 + 0xb0) = fVar52;
        *(float *)(lVar32 + 0xd8) = fVar51;
        *(float *)(lVar32 + 0x100) = fVar52;
        break;
      case 2:
        lVar32 = lVar30 + lVar41 * 0x178;
        fVar51 = fVar58 + (*(float *)(lVar32 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                          (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
        *(float *)(lVar32 + 0x88) = fVar51;
        fVar52 = *(float *)(unaff_x19 + 0x9b);
        fVar65 = *(float *)(unaff_x19 + 0x9c);
        *(float *)(lVar32 + 0xd8) = fVar51;
        fVar51 = fVar58 + (*(float *)(lVar32 + 0x9c) - fVar52) / (fVar65 - fVar52);
        *(float *)(lVar32 + 0xb0) = fVar51;
        *(float *)(lVar32 + 0x100) = fVar51;
        break;
      case 3:
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
        uVar45 = (uint)*(undefined8 *)(lVar30 + 0x18);
      }
      if (uVar45 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar32 = lVar30 + lVar41 * 0x178;
      fVar51 = *(float *)(lVar32 + 0x15c);
      fVar52 = (1.0 - (*(float *)(lVar32 + 0x88) + *(float *)(lVar32 + 0xb0)) * fVar51) * 0.5;
      fVar65 = fVar58 + *(float *)(lVar32 + 0x88) * fVar51 + fVar52;
      fVar58 = fVar58 + fVar52 + *(float *)(lVar32 + 0xb0) * fVar51;
      *(float *)(lVar32 + 0x84) = fVar65;
      *(float *)(lVar32 + 0xac) = fVar65;
      *(float *)(lVar32 + 0xd4) = fVar58;
      break;
    default:
      goto switchD_02496d4c_default;
    }
    *(float *)(lVar30 + lVar41 * 0x178 + 0xfc) = fVar58;
switchD_02496d4c_default:
    switch((int)unaff_x19[0x61]) {
    case 0:
      if (uVar45 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar32 = lVar30 + lVar41 * 0x178;
      *(undefined4 *)(lVar32 + 0x88) = 0;
      *(undefined4 *)(lVar32 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar32 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar32 + 0x100) = 0;
      break;
    case 1:
      if (uVar15 < uVar45) {
        lVar32 = lVar30 + lVar41 * 0x178;
        fVar69 = fVar69 - fVar63;
        fVar58 = (*(float *)(lVar32 + 0x74) - fVar63) / fVar69;
        fVar69 = (*(float *)(lVar32 + 0x9c) - fVar63) / fVar69;
        *(float *)(lVar32 + 0x88) = fVar58;
        goto LAB_02497174;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    case 2:
      if (uVar45 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar32 = lVar30 + lVar41 * 0x178;
      fVar58 = (*(float *)(lVar32 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar32 + 0x88) = fVar58;
      fVar69 = (*(float *)(lVar32 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_02497174:
      *(float *)(lVar32 + 0xb0) = fVar69;
      *(float *)(lVar32 + 0xd8) = fVar69;
      *(float *)(lVar32 + 0x100) = fVar58;
      break;
    case 3:
      if (uVar45 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar32 = lVar30 + lVar41 * 0x178;
      fVar69 = *(float *)(lVar32 + 0x15c);
      fVar51 = (1.0 - (*(float *)(lVar32 + 0x84) + *(float *)(lVar32 + 0xd4)) / fVar69) * 0.5;
      fVar58 = *(float *)(lVar32 + 0x84) / fVar69 + fVar51;
      fVar51 = fVar51 + *(float *)(lVar32 + 0xd4) / fVar69;
      *(float *)(lVar32 + 0x88) = fVar58;
      *(float *)(lVar32 + 0xb0) = fVar51;
      *(float *)(lVar32 + 0x100) = fVar58;
      *(float *)(lVar32 + 0xd8) = fVar51;
    }
    if (uVar45 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar32 = lVar30 + lVar41 * 0x178;
    fVar58 = *(float *)(lVar32 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
    if ((*(char *)(lVar32 + 0x5c) == '\0') && ((*(byte *)(lVar30 + lVar41 * 0x178 + 400) & 1) != 0))
    {
      fVar58 = -fVar58;
    }
    fVar51 = fVar50;
    if (((iVar14 == 2) || (fVar51 = fVar53, iVar14 == 1)) || (fVar51 = fVar50 / fVar60, iVar14 == 0)
       ) {
      fVar58 = fVar51 * fVar58;
    }
    lVar32 = lVar30 + lVar41 * 0x178;
    fVar69 = *(float *)(lVar32 + 0x88);
    fVar52 = *(float *)(lVar32 + 0x84);
    fVar51 = -2.1474836e+09;
    if (fVar52 != INFINITY) {
      fVar51 = (float)(int)fVar52;
    }
    fVar65 = *(float *)(lVar32 + 0xd4);
    fVar55 = *(float *)(lVar32 + 0xd8);
    fVar63 = -2.1474836e+09;
    if (fVar69 != INFINITY) {
      fVar63 = (float)(int)fVar69;
    }
    uVar71 = FUN_024e0374(fVar52 - fVar51,fVar69 - fVar63);
    *(undefined4 *)(lVar32 + 0x84) = uVar71;
    if (*(uint *)(lVar30 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar55 = fVar55 - fVar63;
    *(float *)(lVar32 + 0x88) = fVar58;
    uVar71 = FUN_024e0374(fVar52 - fVar51,fVar55);
    *(undefined4 *)(lVar30 + lVar41 * 0x178 + 0xac) = uVar71;
    if (*(uint *)(lVar30 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar65 = fVar65 - fVar51;
    *(float *)(lVar30 + lVar41 * 0x178 + 0xb0) = fVar58;
    fVar51 = (float)FUN_024e0374(fVar65,fVar55);
    *(float *)(lVar32 + 0xd4) = fVar51;
    if (*(uint *)(lVar30 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar32 + 0xd8) = fVar58;
    uVar71 = FUN_024e0374(fVar65,fVar69 - fVar63);
    *(undefined4 *)(lVar30 + lVar41 * 0x178 + 0xfc) = uVar71;
    uVar45 = (uint)*(undefined8 *)(lVar30 + 0x18);
    if (uVar45 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar30 + lVar41 * 0x178 + 0x100) = fVar58;
LAB_02497374:
    if (((int)unaff_x19[100] <= (int)uVar15) ||
       (*(int *)((long)unaff_x19 + 0x324) <= (int)fStack00000000000000ac)) goto LAB_02497490;
    if (((int)uVar7 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar45 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar46 = lVar30 + lVar41 * 0x178;
      *(ulong *)(lVar46 + 0x70) =
           CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar46 + 0x70) >> 0x20),
                    fVar72 + (float)*(undefined8 *)(lVar46 + 0x70));
      *(float *)(lVar46 + 0x78) = fVar56 + *(float *)(lVar46 + 0x78);
      if (*(uint *)(lVar30 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar46 = lVar30 + lVar41 * 0x178;
      *(ulong *)(lVar46 + 0x98) =
           CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar46 + 0x98) >> 0x20),
                    fVar72 + (float)*(undefined8 *)(lVar46 + 0x98));
      *(float *)(lVar46 + 0xa0) = fVar56 + *(float *)(lVar46 + 0xa0);
      if (*(uint *)(lVar30 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar46 = lVar30 + lVar41 * 0x178;
      *(ulong *)(lVar46 + 0xc0) =
           CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar46 + 0xc0) >> 0x20),
                    fVar72 + (float)*(undefined8 *)(lVar46 + 0xc0));
      *(float *)(lVar46 + 200) = fVar56 + *(float *)(lVar46 + 200);
      if (*(uint *)(lVar30 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar46 = lVar30 + lVar41 * 0x178;
      *(ulong *)(lVar46 + 0xe8) =
           CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar46 + 0xe8) >> 0x20),
                    fVar72 + (float)*(undefined8 *)(lVar46 + 0xe8));
      *(float *)(lVar46 + 0xf0) = fVar56 + *(float *)(lVar46 + 0xf0);
      if (iVar16 != 0) goto LAB_02497598;
LAB_02497668:
      pcVar35 = *(code **)(*unaff_x19 + 0x8d8);
LAB_02497674:
      (*pcVar35)();
    }
    else {
      if (((int)uVar7 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
        if (uVar45 <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(uint *)(lVar30 + lVar41 * 0x178 + 0x68) != uStack000000000000002c) goto LAB_02497490;
        lVar46 = lVar30 + lVar41 * 0x178;
        *(ulong *)(lVar46 + 0x70) =
             CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar46 + 0x70) >> 0x20),
                      fVar72 + (float)*(undefined8 *)(lVar46 + 0x70));
        *(float *)(lVar46 + 0x78) = fVar56 + *(float *)(lVar46 + 0x78);
        if (*(uint *)(lVar30 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar46 = lVar30 + lVar41 * 0x178;
        *(ulong *)(lVar46 + 0x98) =
             CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar46 + 0x98) >> 0x20),
                      fVar72 + (float)*(undefined8 *)(lVar46 + 0x98));
        *(float *)(lVar46 + 0xa0) = fVar56 + *(float *)(lVar46 + 0xa0);
        if (*(uint *)(lVar30 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar46 = lVar30 + lVar41 * 0x178;
        *(ulong *)(lVar46 + 0xc0) =
             CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar46 + 0xc0) >> 0x20),
                      fVar72 + (float)*(undefined8 *)(lVar46 + 0xc0));
        *(float *)(lVar46 + 200) = fVar56 + *(float *)(lVar46 + 200);
        if (*(uint *)(lVar30 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar46 = lVar30 + lVar41 * 0x178;
        *(ulong *)(lVar46 + 0xe8) =
             CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar46 + 0xe8) >> 0x20),
                      fVar72 + (float)*(undefined8 *)(lVar46 + 0xe8));
        *(float *)(lVar46 + 0xf0) = fVar56 + *(float *)(lVar46 + 0xf0);
      }
      else {
LAB_02497490:
        if (uVar45 <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        puVar10 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        lVar32 = lVar30 + lVar41 * 0x178;
        uVar71 = *(undefined4 *)
                  (*(undefined8 **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8) + 1);
        *(undefined8 *)(lVar32 + 0x70) =
             **(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        *(undefined4 *)(lVar32 + 0x78) = uVar71;
        if (*(uint *)(lVar30 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar32 = lVar30 + lVar41 * 0x178;
        uVar71 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar32 + 0x98) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar32 + 0xa0) = uVar71;
        if (*(uint *)(lVar30 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar32 = lVar30 + lVar41 * 0x178;
        uVar71 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar32 + 0xc0) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar32 + 200) = uVar71;
        if (*(uint *)(lVar30 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar32 = lVar30 + lVar41 * 0x178;
        uVar71 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar32 + 0xe8) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar32 + 0xf0) = uVar71;
        if (*(uint *)(lVar30 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(undefined1 *)(lVar46 + 0x194) = 0;
      }
      if (iVar16 == 0) goto LAB_02497668;
LAB_02497598:
      if (iVar16 == 1) {
        pcVar35 = *(code **)(*unaff_x19 + 0x8f8);
        goto LAB_02497674;
      }
    }
LAB_02497688:
    if ((*in_stack_00000150 == 0) || (lVar46 = *(long *)(*in_stack_00000150 + 0x38), lVar46 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar46 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar46 = lVar46 + lVar41 * 0x178;
    uVar20 = *(undefined8 *)(lVar46 + 0x11c);
    *(undefined8 *)(lVar46 + 0x11c) =
         CONCAT44(fVar68 + (float)((ulong)uVar20 >> 0x20),fVar72 + (float)uVar20);
    *(float *)(lVar46 + 0x124) = fVar56 + *(float *)(lVar46 + 0x124);
    if ((*in_stack_00000150 == 0) || (lVar46 = *(long *)(*in_stack_00000150 + 0x38), lVar46 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar46 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar46 = lVar46 + lVar41 * 0x178;
    *(ulong *)(lVar46 + 0x110) =
         CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar46 + 0x110) >> 0x20),
                  fVar72 + (float)*(undefined8 *)(lVar46 + 0x110));
    *(float *)(lVar46 + 0x118) = fVar56 + *(float *)(lVar46 + 0x118);
    if ((*in_stack_00000150 == 0) || (lVar46 = *(long *)(*in_stack_00000150 + 0x38), lVar46 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar46 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar46 = lVar46 + lVar41 * 0x178;
    *(ulong *)(lVar46 + 0x128) =
         CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar46 + 0x128) >> 0x20),
                  fVar72 + (float)*(undefined8 *)(lVar46 + 0x128));
    *(float *)(lVar46 + 0x130) = fVar56 + *(float *)(lVar46 + 0x130);
    if ((*in_stack_00000150 == 0) || (lVar46 = *(long *)(*in_stack_00000150 + 0x38), lVar46 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar46 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar46 = lVar46 + lVar41 * 0x178;
    *(float *)(lVar46 + 0x134) = fVar72 + *(float *)(lVar46 + 0x134);
    *(ulong *)(lVar46 + 0x138) =
         CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar46 + 0x138) >> 0x20),
                  fVar68 + (float)*(undefined8 *)(lVar46 + 0x138));
    lVar46 = *in_stack_00000150;
    if ((lVar46 == 0) || (lVar32 = *(long *)(lVar46 + 0x38), lVar32 == 0)) goto LAB_0249920c;
    uVar45 = *(uint *)(lVar32 + 0x18);
    if (uVar45 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar40 = lVar32 + lVar41 * 0x178;
    uVar22 = CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar40 + 0x140) >> 0x20),
                      fVar72 + (float)*(undefined8 *)(lVar40 + 0x140));
    fVar51 = fVar68 + *(float *)(lVar40 + 0x150);
    uVar26 = (ulong)(uint)fVar51;
    uVar62 = CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar40 + 0x148) >> 0x20),
                      fVar68 + (float)*(undefined8 *)(lVar40 + 0x148));
    *(ulong *)(lVar40 + 0x140) = uVar22;
    *(ulong *)(lVar40 + 0x148) = uVar62;
    *(float *)(lVar40 + 0x150) = fVar51;
    if (uVar7 == uVar61) {
      uVar61 = *in_stack_00000148 - 1;
      if (uVar15 == uVar61) goto LAB_0249788c;
    }
    else {
      lVar46 = *(long *)(lVar46 + 0x50);
      if (lVar46 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar46 + 0x18) <= uVar61)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar40 = (long)(int)uVar61;
      lVar42 = lVar46 + lVar40 * 0x5c;
      uVar62 = (ulong)(uint)*(float *)(lVar42 + 0x58);
      fVar51 = fVar68 + *(float *)(lVar42 + 0x54);
      uVar22 = (ulong)(uint)fVar51;
      fVar69 = fVar72 + *(float *)(lVar42 + 0x58);
      uVar26 = (ulong)(uint)fVar69;
      *(ulong *)(lVar42 + 0x4c) =
           CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar42 + 0x4c) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar42 + 0x4c));
      *(float *)(lVar42 + 0x54) = fVar51;
      *(float *)(lVar42 + 0x58) = fVar69;
      if (uVar45 <= *(uint *)(lVar42 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar71 = *(undefined4 *)(lVar32 + (long)(int)*(uint *)(lVar42 + 0x34) * 0x178 + 0x11c);
      lVar46 = lVar46 + lVar40 * 0x5c;
      *(float *)(lVar46 + 0x70) = fVar51;
      *(undefined4 *)(lVar46 + 0x6c) = uVar71;
      lVar46 = *in_stack_00000150;
      if ((lVar46 == 0) || (lVar32 = *(long *)(lVar46 + 0x50), lVar32 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar32 + 0x18) <= uVar61)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar46 = *(long *)(lVar46 + 0x38);
      if (lVar46 == 0) goto LAB_0249920c;
      uVar61 = *(uint *)(lVar32 + lVar40 * 0x5c + 0x40);
      if (*(uint *)(lVar46 + 0x18) <= uVar61)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar32 = lVar32 + lVar40 * 0x5c;
      *(undefined4 *)(lVar32 + 0x74) = *(undefined4 *)(lVar46 + (long)(int)uVar61 * 0x178 + 0x128);
      *(undefined4 *)(lVar32 + 0x78) = *(undefined4 *)(lVar32 + 0x4c);
      uVar61 = *in_stack_00000148 - 1;
LAB_0249788c:
      if (uVar15 == uVar61) {
        lVar46 = *in_stack_00000150;
        if ((lVar46 == 0) || (lVar32 = *(long *)(lVar46 + 0x50), lVar32 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar32 + 0x18) <= uVar7)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar40 = lVar32 + lVar37 * 0x5c;
        uVar62 = (ulong)(uint)*(float *)(lVar40 + 0x58);
        uVar22 = CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar40 + 0x4c) >> 0x20),
                          fVar68 + (float)*(undefined8 *)(lVar40 + 0x4c));
        fVar51 = fVar68 + *(float *)(lVar40 + 0x54);
        fVar72 = fVar72 + *(float *)(lVar40 + 0x58);
        uVar26 = (ulong)(uint)fVar72;
        *(ulong *)(lVar40 + 0x4c) = uVar22;
        *(float *)(lVar40 + 0x54) = fVar51;
        *(float *)(lVar40 + 0x58) = fVar72;
        lVar46 = *(long *)(lVar46 + 0x38);
        if (lVar46 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar46 + 0x18) <= *(uint *)(lVar40 + 0x34))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar71 = *(undefined4 *)(lVar46 + (long)(int)*(uint *)(lVar40 + 0x34) * 0x178 + 0x11c);
        lVar32 = lVar32 + lVar37 * 0x5c;
        *(float *)(lVar32 + 0x70) = fVar51;
        *(undefined4 *)(lVar32 + 0x6c) = uVar71;
        lVar46 = *in_stack_00000150;
        if ((lVar46 == 0) || (lVar32 = *(long *)(lVar46 + 0x50), lVar32 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar32 + 0x18) <= uVar7)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar46 = *(long *)(lVar46 + 0x38);
        if (lVar46 == 0) goto LAB_0249920c;
        uVar61 = *(uint *)(lVar32 + lVar37 * 0x5c + 0x40);
        if (*(uint *)(lVar46 + 0x18) <= uVar61)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar32 = lVar32 + lVar37 * 0x5c;
        *(undefined4 *)(lVar32 + 0x74) = *(undefined4 *)(lVar46 + (long)(int)uVar61 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar32 + 0x78) = *(undefined4 *)(lVar32 + 0x4c);
      }
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar24 = FUN_016f9468(uVar43,0);
    if (((((uVar24 & 1) == 0) && (1 < uVar43 - 0x2010)) && (uVar43 != 0xad)) && (uVar43 != 0x2d)) {
      if (bVar12) {
        if (((uVar38 != 1) && ((int)uVar15 < (int)(*(uint *)(lVar30 + 0x18) - 1))) &&
           (((int)uVar15 < (int)*in_stack_00000148 && ((uVar43 == 0x2019 || (uVar43 == 0x27)))))) {
          if (*(uint *)(lVar30 + 0x18) <= uVar38 - 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar4 = *(undefined2 *)(lVar30 + lVar33 + -0x438);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar24 = FUN_016f9468(uVar4,0);
          if ((uVar24 & 1) != 0) {
            if (*(uint *)(lVar30 + 0x18) <= uVar38)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar4 = *(undefined2 *)(lVar30 + lVar33 + -0x148);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar24 = FUN_016f9468(uVar4,0);
            if ((uVar24 & 1) != 0) goto LAB_02497aa4;
          }
        }
      }
      else {
        if (uVar38 != 1) {
LAB_024985a0:
          bVar12 = false;
          goto LAB_02497aac;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar24 = FUN_016f93a0(uVar43,0);
        if ((uVar24 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar24 = FUN_016f68bc(uVar43,0);
          if (((uVar43 != 0x200b) && ((uVar24 & 1) == 0)) && (*in_stack_00000148 != 1))
          goto LAB_024985a0;
        }
      }
      if (uVar15 == *in_stack_00000148 - 1) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar24 = FUN_016f9468(uVar43,0);
        iVar16 = iVar49;
        if ((uVar24 & 1) == 0) goto LAB_02497de0;
      }
      else {
LAB_02497de0:
        iVar16 = uVar38 - 2;
      }
      lVar46 = *in_stack_00000150;
      if (lVar46 == 0) goto LAB_0249920c;
      lVar32 = *(long *)(lVar46 + 0x40);
      if (lVar32 == 0) goto LAB_0249920c;
      uVar61 = *(uint *)(lVar46 + 0x24);
      iVar17 = *(int *)(lVar32 + 0x18);
      if (iVar17 < (int)(uVar61 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar46 + 0x40),iVar17 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar46 = *in_stack_00000150;
        if (lVar46 == 0) goto LAB_0249920c;
      }
      lVar32 = *(long *)(lVar46 + 0x40);
      if (lVar32 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar32 + 0x18) <= uVar61)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar32 = lVar32 + (long)(int)uVar61 * 0x18;
      *(uint *)(lVar32 + 0x28) = uVar19;
      *(int *)(lVar32 + 0x2c) = iVar16;
      *(uint *)(lVar32 + 0x30) = (iVar16 - uVar19) + 1;
      *(long **)(lVar32 + 0x20) = unaff_x19;
      lVar32 = *(long *)(lVar46 + 0x50);
      *(int *)(lVar46 + 0x24) = *(int *)(lVar46 + 0x24) + 1;
      if (lVar32 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar32 + 0x18) <= uVar7)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar32 = lVar32 + lVar37 * 0x5c;
      bVar12 = false;
      fStack00000000000000ac = (float)((int)fStack00000000000000ac + 1);
      *(int *)(lVar32 + 0x30) = *(int *)(lVar32 + 0x30) + 1;
    }
    else {
      if (!bVar12) {
        uVar19 = uVar15;
      }
      if (uVar15 == *in_stack_00000148 - 1) {
        lVar46 = *in_stack_00000150;
        if (lVar46 == 0) goto LAB_0249920c;
        lVar32 = *(long *)(lVar46 + 0x40);
        if (lVar32 == 0) goto LAB_0249920c;
        uVar61 = *(uint *)(lVar46 + 0x24);
        iVar16 = *(int *)(lVar32 + 0x18);
        if (iVar16 < (int)(uVar61 + 1)) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147b84((long *)(lVar46 + 0x40),iVar16 + 1,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
          lVar46 = *in_stack_00000150;
          if (lVar46 == 0) goto LAB_0249920c;
        }
        lVar32 = *(long *)(lVar46 + 0x40);
        if (lVar32 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar32 + 0x18) <= uVar61)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar32 = lVar32 + (long)(int)uVar61 * 0x18;
        *(uint *)(lVar32 + 0x28) = uVar19;
        *(uint *)(lVar32 + 0x2c) = uVar15;
        *(long **)(lVar32 + 0x20) = unaff_x19;
        *(uint *)(lVar32 + 0x30) = uVar38 - uVar19;
        lVar32 = *(long *)(lVar46 + 0x50);
        *(int *)(lVar46 + 0x24) = *(int *)(lVar46 + 0x24) + 1;
        if (lVar32 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar32 + 0x18) <= uVar7)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar32 = lVar32 + lVar37 * 0x5c;
        fStack00000000000000ac = (float)((int)fStack00000000000000ac + 1);
        *(int *)(lVar32 + 0x30) = *(int *)(lVar32 + 0x30) + 1;
      }
LAB_02497aa4:
      bVar12 = true;
    }
LAB_02497aac:
    if ((*in_stack_00000150 == 0) || (lVar46 = *(long *)(*in_stack_00000150 + 0x38), lVar46 == 0))
    goto LAB_0249920c;
    uVar61 = *(uint *)(lVar46 + 0x18);
    if (uVar61 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar46 + lVar41 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar13) {
LAB_02497adc:
        if (uVar61 <= uVar38 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar37 = *unaff_x19;
        uVar61 = *(uint *)(lVar46 + lVar33 + -0x330);
        uVar71 = *(undefined4 *)(lVar46 + lVar33 + -0x2f8);
LAB_0249805c:
        pcVar35 = *(code **)(lVar37 + 0x908);
LAB_02498064:
        uVar62 = (ulong)uVar61;
        uVar22 = (ulong)(uint)fStack0000000000000050;
        uVar26 = (ulong)(uint)fStack0000000000000054;
        (*pcVar35)(fStack0000000000000058,uVar22,uVar26,uVar62,fStack00000000000000d0,0,
                   _bStack000000000000005c,uVar71);
        puVar10 = System_Threading_Mutex_TypeInfo;
        lVar46 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar46 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar46 = *(long *)puVar10;
        }
LAB_024980b4:
        bVar13 = false;
        fVar66 = 0.0;
        fStack00000000000000d0 = *(float *)(*(long *)(lVar46 + 0xb8) + 0x15a8);
        fStack00000000000000cc = 0.0;
      }
      else {
LAB_02497fc4:
        bVar13 = false;
      }
    }
    else {
      lVar46 = lVar46 + lVar41 * 0x178;
      iVar16 = *(int *)(lVar46 + 0x68);
      *(int *)(lVar46 + 0x16c) = iVar18;
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
      uVar24 = FUN_016f68bc(uVar43,0);
      if ((uVar43 != 0x200b) && ((uVar24 & 1) == 0)) {
        lVar46 = *in_stack_00000150;
        if ((lVar46 == 0) || (lVar37 = *(long *)(lVar46 + 0x38), lVar37 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar37 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar51 = *(float *)(lVar37 + lVar41 * 0x178 + 0x160);
        if (fVar66 <= fVar51) {
          fVar66 = fVar51;
        }
        if (fStack00000000000000cc <= ABS(fVar58)) {
          fStack00000000000000cc = ABS(fVar58);
        }
        if ((float)iVar16 != fStack000000000000004c) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar46 = *in_stack_00000150;
            if (lVar46 == 0) goto LAB_0249920c;
            lVar37 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          else {
            lVar37 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          fStack00000000000000d0 = *(float *)(lVar37 + 0x15a8);
        }
        lVar46 = *(long *)(lVar46 + 0x38);
        if (lVar46 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar46 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0x1e] == 0) goto LAB_0249920c;
        fVar69 = *(float *)(lVar46 + lVar41 * 0x178 + 0x14c);
        fVar51 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
        fVar69 = fVar69 + fVar66 * fVar51;
        if (fVar69 <= fStack00000000000000d0) {
          fStack00000000000000d0 = fVar69;
        }
        uVar22 = (ulong)(uint)fStack00000000000000d0;
        fStack000000000000004c = (float)iVar16;
      }
      if (!bVar13) {
        bVar13 = false;
        if ((((uVar43 == 0xd) || ((uVar43 | 1) == 0xb)) || ((int)uVar6 < (int)uVar15)) ||
           ((bool)(bVar1 ^ 1))) goto LAB_024980d0;
        if (uVar15 == uVar6) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar24 = FUN_016fa418(uVar43,0);
          if ((uVar24 & 1) != 0) goto LAB_02497fc4;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar46 = *(long *)(*in_stack_00000150 + 0x38), lVar46 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar46 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar46 = lVar46 + lVar41 * 0x178;
        _bStack000000000000005c = *(float *)(lVar46 + 0x160);
        fStack0000000000000058 = *(float *)(lVar46 + 0x11c);
        bVar13 = fVar66 != 0.0;
        fVar51 = _bStack000000000000005c;
        if (bVar13) {
          fVar51 = fVar66;
        }
        fVar66 = fVar51;
        uStack0000000000000060 = *(uint *)(lVar46 + 0x168);
        fStack0000000000000054 = 0.0;
        fVar51 = fVar58;
        if (bVar13) {
          fVar51 = fStack00000000000000cc;
        }
        uVar22 = (ulong)(uint)fVar51;
        fStack0000000000000050 = fStack00000000000000d0;
        fStack00000000000000cc = fVar51;
      }
      if (*in_stack_00000148 == 1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar46 = *(long *)(*in_stack_00000150 + 0x38), lVar46 != 0)) {
          if (uVar15 < *(uint *)(lVar46 + 0x18)) {
            lVar46 = lVar46 + lVar41 * 0x178;
            lVar37 = *unaff_x19;
            uVar61 = *(uint *)(lVar46 + 0x128);
            uVar71 = *(undefined4 *)(lVar46 + 0x160);
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
        uVar24 = FUN_016f68bc(uVar43,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar46 = *(long *)(*in_stack_00000150 + 0x38), lVar46 != 0)) {
          if (uVar43 == 0x200b || (uVar24 & 1) != 0) {
            lVar37 = lVar23;
            if (*(uint *)(lVar46 + 0x18) <= uVar6)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
            lVar37 = lVar41;
            if (*(uint *)(lVar46 + 0x18) <= uVar15)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          lVar46 = lVar46 + lVar37 * 0x178;
          uVar61 = *(uint *)(lVar46 + 0x128);
          uVar71 = *(undefined4 *)(lVar46 + 0x160);
          pcVar35 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_02498064;
        }
        goto LAB_0249920c;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar46 = *(long *)(*in_stack_00000150 + 0x38), lVar46 != 0)) {
          uVar61 = *(uint *)(lVar46 + 0x18);
          goto LAB_02497adc;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar15 < (int)(*in_stack_00000148 - 1)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar46 = *(long *)(*in_stack_00000150 + 0x38), lVar46 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar46 + 0x18) <= uVar38)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar24 = FUN_024a9e4c(uStack0000000000000060,*(undefined4 *)(lVar46 + lVar33),0);
        if ((uVar24 & 1) == 0) {
          if ((*in_stack_00000150 != 0) &&
             (lVar46 = *(long *)(*in_stack_00000150 + 0x38), lVar46 != 0)) {
            if (uVar15 < *(uint *)(lVar46 + 0x18)) {
              lVar46 = lVar46 + lVar41 * 0x178;
              uVar62 = (ulong)*(uint *)(lVar46 + 0x128);
              uVar26 = (ulong)(uint)fStack0000000000000054;
              uVar22 = (ulong)(uint)fStack0000000000000050;
              (**(code **)(*unaff_x19 + 0x908))
                        (fStack0000000000000058,uVar22,uVar26,uVar62,fStack00000000000000d0,0,
                         _bStack000000000000005c,*(undefined4 *)(lVar46 + 0x160));
              puVar10 = System_Threading_Mutex_TypeInfo;
              lVar46 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar46 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar46 = *(long *)puVar10;
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
    if ((*in_stack_00000150 == 0) || (lVar46 = *(long *)(*in_stack_00000150 + 0x38), lVar46 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar46 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (lVar39 == 0) goto LAB_0249920c;
    uVar61 = *(uint *)(lVar46 + lVar41 * 0x178 + 400);
    fVar51 = (float)FUN_026fd1f0(lVar39 + 0x50,0);
    if ((uVar61 >> 6 & 1) == 0) {
      if (bVar8) {
        if ((*in_stack_00000150 == 0) ||
           (lVar46 = *(long *)(*in_stack_00000150 + 0x38), lVar46 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar46 + 0x18) <= uVar38 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar61 = *(uint *)(lVar46 + lVar33 + -0x330);
        pcVar35 = *(code **)(*unaff_x19 + 0x908);
        fVar68 = fStack0000000000000088 * fVar51 + *(float *)(lVar46 + lVar33 + -0x30c);
LAB_02498648:
        uVar62 = (ulong)uVar61;
        uVar22 = (ulong)(uint)in_stack_00000078._4_4_;
        uVar26 = (ulong)in_stack_00000068._4_4_;
        (*pcVar35)(fStack0000000000000080,uVar22,uVar26,uVar62,fVar68,0,fStack0000000000000088,
                   fStack0000000000000088);
      }
LAB_0249867c:
      bVar8 = false;
    }
    else {
      lVar46 = *in_stack_00000150;
      if ((lVar46 == 0) || (lVar37 = *(long *)(lVar46 + 0x38), lVar37 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar37 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(int *)(lVar37 + lVar41 * 0x178 + 0x174) = iVar18;
      if ((((int)unaff_x19[100] < (int)uVar15) || ((int)unaff_x19[0x65] < (int)uVar7)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar37 + lVar41 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uVar43 == 0xd) || ((uVar43 | 1) == 0xb)) || ((int)uVar6 < (int)uVar15)) ||
         (bVar8 || !bVar1)) {
LAB_02498228:
        if (!bVar8) goto LAB_0249867c;
      }
      else {
        if (uVar15 == uVar6) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar24 = FUN_016fa418(uVar43,0);
          if ((uVar24 & 1) != 0) goto LAB_02498228;
          lVar46 = *in_stack_00000150;
          if (lVar46 == 0) goto LAB_0249920c;
        }
        lVar46 = *(long *)(lVar46 + 0x38);
        if (lVar46 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar46 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar46 = lVar46 + lVar41 * 0x178;
        fStack0000000000000034 = *(float *)(lVar46 + 0x60);
        fStack0000000000000088 = *(float *)(lVar46 + 0x160);
        fStack0000000000000030 = *(float *)(lVar46 + 0x14c);
        uVar22 = (ulong)(uint)fStack0000000000000030;
        fStack0000000000000080 = *(float *)(lVar46 + 0x11c);
        in_stack_00000078._4_4_ = fVar51 * fStack0000000000000088 + fStack0000000000000030;
        in_stack_00000068._4_4_ = 0;
      }
      uVar61 = *in_stack_00000148;
      if (uVar61 == 1) {
LAB_024983ac:
        if ((*in_stack_00000150 != 0) &&
           (lVar46 = *(long *)(*in_stack_00000150 + 0x38), lVar46 != 0)) {
          if (uVar15 < *(uint *)(lVar46 + 0x18)) {
            lVar46 = lVar46 + lVar41 * 0x178;
            lVar23 = *unaff_x19;
            uVar61 = *(uint *)(lVar46 + 0x128);
            fVar68 = *(float *)(lVar46 + 0x14c);
LAB_024983d8:
            pcVar35 = *(code **)(lVar23 + 0x908);
FUN_02498644:
            fVar68 = fVar51 * fStack0000000000000088 + fVar68;
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
        uVar24 = FUN_016f68bc(uVar43,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar46 = *(long *)(*in_stack_00000150 + 0x38), lVar46 != 0)) {
          uVar61 = *(uint *)(lVar46 + 0x18);
          if (uVar43 == 0x200b || (uVar24 & 1) != 0) {
            if (uVar61 <= uVar6)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
LAB_02498620:
            lVar23 = lVar41;
            if (uVar61 <= uVar15)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
LAB_02498628:
          lVar46 = lVar46 + lVar23 * 0x178;
          fVar68 = *(float *)(lVar46 + 0x14c);
          uVar61 = *(uint *)(lVar46 + 0x128);
          pcVar35 = *(code **)(*unaff_x19 + 0x908);
          goto FUN_02498644;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar15 < (int)uVar61) {
        lVar46 = *in_stack_00000150;
        if ((lVar46 != 0) && (lVar37 = *(long *)(lVar46 + 0x38), lVar37 != 0)) {
          if (uVar38 < *(uint *)(lVar37 + 0x18)) {
            if (*(float *)(lVar37 + lVar33 + -0x108) == fStack0000000000000034) {
              fVar69 = *(float *)(lVar37 + lVar33 + -0x1c);
              if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar22 = (ulong)(uint)fStack0000000000000030;
              uVar24 = FUN_024aa280(fVar68 + fVar69,uVar22,0);
              if ((uVar24 & 1) != 0) {
                uVar61 = *in_stack_00000148;
                goto 
                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
                ;
              }
              lVar46 = *in_stack_00000150;
              if (lVar46 == 0) goto LAB_0249920c;
            }
            lVar46 = *(long *)(lVar46 + 0x38);
            if (lVar46 != 0) {
              uVar61 = *(uint *)(lVar46 + 0x18);
              if ((int)uVar15 <= (int)uVar6) goto LAB_02498620;
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
      if ((int)uVar15 < (int)uVar61) {
        iVar16 = FUN_02681c0c(lVar39,0);
        if (*(uint *)(lVar30 + 0x18) <= uVar38)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar46 = *(long *)(lVar30 + lVar33 + -0x130);
        if (lVar46 == 0) goto LAB_0249920c;
        iVar17 = FUN_02681c0c(lVar46,0);
        if (iVar16 != iVar17) goto LAB_024983ac;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar46 = *(long *)(*in_stack_00000150 + 0x38), lVar46 != 0)) {
          if (uVar38 - 2 < *(uint *)(lVar46 + 0x18)) {
            lVar23 = *unaff_x19;
            uVar61 = *(uint *)(lVar46 + lVar33 + -0x330);
            fVar68 = *(float *)(lVar46 + lVar33 + -0x30c);
            goto LAB_024983d8;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      bVar8 = true;
    }
    if ((*in_stack_00000150 == 0) || (lVar46 = *(long *)(*in_stack_00000150 + 0x38), lVar46 == 0))
    goto LAB_0249920c;
    uVar61 = (uint)*(undefined8 *)(lVar46 + 0x18);
    if (uVar61 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar46 + lVar41 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar9) {
        uVar26 = (ulong)uStack00000000000000a0;
        uVar62 = (ulong)(uint)fStack00000000000000a4;
        uVar22 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar22,uVar26,uVar62,fStack00000000000000a8,uVar26);
      }
LAB_024986e8:
      bVar9 = false;
    }
    else {
      if ((((int)unaff_x19[100] < (int)uVar15) || ((int)unaff_x19[0x65] < (int)uVar7)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar46 + lVar41 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar9) {
        if ((((uVar43 == 0xd) || ((uVar43 | 1) == 0xb)) || ((int)uVar6 < (int)uVar15)) || (!bVar1))
        goto LAB_024986e8;
        if (uVar15 == uVar6) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar24 = FUN_016fa418(uVar43,0);
          if ((uVar24 & 1) != 0) goto LAB_024986e8;
        }
        puVar10 = System_Threading_Mutex_TypeInfo;
        lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar23 = *(long *)puVar10;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar46 = *(long *)(*in_stack_00000150 + 0x38), lVar46 == 0)) goto LAB_0249920c;
        uVar61 = (uint)*(undefined8 *)(lVar46 + 0x18);
        if (uVar61 <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar23 = *(long *)(lVar23 + 0xb8);
        lVar37 = lVar46 + lVar41 * 0x178;
        in_stack_00001798 = *(undefined8 *)(lVar37 + 0x184);
        in_stack_00001790 = *(undefined8 *)(lVar37 + 0x17c);
        fStack00000000000000b0 = *(float *)(lVar23 + 0x1598);
        in_stack_000017a0 = *(float *)(lVar37 + 0x18c);
        fStack00000000000000b4 = *(float *)(lVar23 + 0x159c);
        fStack00000000000000a4 = *(float *)(lVar23 + 0x15a0);
        fStack00000000000000a8 = *(float *)(lVar23 + 0x15a4);
        uStack00000000000000a0 = 0;
      }
      if (uVar61 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar46 = lVar46 + lVar41 * 0x178;
      fVar63 = *(float *)(lVar46 + 0x188);
      uVar21 = *(undefined8 *)(lVar46 + 0x17c);
      fVar55 = *(float *)(lVar46 + 0x184);
      uVar20 = *(undefined8 *)(lVar46 + 0x184);
      fVar65 = *(float *)(lVar46 + 0x18c);
      fVar68 = *(float *)(lVar46 + 0x11c);
      fVar69 = *(float *)(lVar46 + 0x128);
      fVar52 = *(float *)(lVar46 + 0x148);
      fVar51 = *(float *)(lVar46 + 0x150);
      in_stack_00000158 = uVar21;
      fStack0000000000000160 = fVar55;
      fStack0000000000000164 = fVar63;
      in_stack_00000168 = fVar65;
      in_stack_00000170 = in_stack_00001790;
      in_stack_00000178 = in_stack_00001798;
      in_stack_00000180 = in_stack_000017a0;
      uVar24 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
      lVar46 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
      if ((uVar24 & 1) == 0) {
        if (*(int *)(lVar46 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar46);
        }
        fVar68 = fVar68 - (float)((ulong)in_stack_00001790 >> 0x20);
        if (fVar68 <= fStack00000000000000b0) {
          fStack00000000000000b0 = fVar68;
        }
        fVar51 = fVar51 - in_stack_000017a0;
        uVar22 = (ulong)(uint)fVar51;
        fVar69 = fVar69 + (float)in_stack_00001798;
        uVar26 = (ulong)(uint)fVar69;
        if (fVar51 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar51;
        }
        fVar52 = fVar52 + (float)((ulong)in_stack_00001798 >> 0x20);
        uVar62 = (ulong)(uint)fVar52;
        if (fStack00000000000000a4 <= fVar69) {
          fStack00000000000000a4 = fVar69;
        }
        if (fStack00000000000000a8 <= fVar52) {
          fStack00000000000000a8 = fVar52;
        }
      }
      else {
        if (*(int *)(lVar46 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar46);
        }
        fVar68 = (fVar68 + (fStack00000000000000a4 - (float)in_stack_00001798)) * 0.5;
        uVar62 = (ulong)(uint)fVar68;
        if (fVar51 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar51;
        }
        uVar22 = (ulong)(uint)fStack00000000000000b4;
        uVar26 = (ulong)uStack00000000000000a0;
        if (fStack00000000000000a8 <= fVar52) {
          fStack00000000000000a8 = fVar52;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar22,uVar26,uVar62,fStack00000000000000a8,uVar26);
        fStack00000000000000b4 = fVar51 - fVar65;
        fStack00000000000000a4 = fVar69 + fVar55;
        uStack00000000000000a0 = 0;
        fStack00000000000000a8 = fVar52 + fVar63;
        fStack00000000000000b0 = fVar68;
        in_stack_00001790 = uVar21;
        in_stack_00001798 = uVar20;
        in_stack_000017a0 = fVar65;
      }
      if (((*in_stack_00000148 == 1) || (uVar15 == uVar5)) ||
         (((int)uVar6 <= (int)uVar15 || (!bVar1)))) {
        uVar26 = (ulong)uStack00000000000000a0;
        uVar62 = (ulong)(uint)fStack00000000000000a4;
        uVar22 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar22,uVar26,uVar62,fStack00000000000000a8,uVar26);
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
    }
    uVar15 = *in_stack_00000148;
    iVar49 = iVar49 + 1;
    lVar33 = lVar33 + 0x178;
    bVar1 = (int)uVar38 < (int)uVar15;
    uVar61 = uVar7;
    uVar38 = uVar38 + 1;
  } while (bVar1);
  lVar30 = *in_stack_00000150;
  if (lVar30 != 0) {
    iVar18 = uVar7 + 1;
LAB_02498c58:
    puVar11 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    puVar10 = PTR_DAT_033ed410;
    *(uint *)(lVar30 + 0x18) = uVar15;
    lVar33 = unaff_x19[0xd3];
    *(int *)(lVar30 + 0x2c) = iVar18;
    iVar18 = (int)fStack00000000000000ac;
    if ((int)uVar15 < 1) {
      iVar18 = 1;
    }
    if (fStack00000000000000ac == 0.0) {
      iVar18 = 1;
    }
    *(int *)(lVar30 + 0x1c) = (int)lVar33;
    *(int *)(lVar30 + 0x24) = iVar18;
    *(int *)(lVar30 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar24 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar24 & 1) == 0)) {
LAB_02496098:
      if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__ + 0xe0) == 0
         ) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar30 = unaff_x19[0xde];
    if (lVar30 != 0) {
      (**(code **)(lVar30 + 0x18))
                (*(undefined8 *)(lVar30 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar30 + 0x28));
    }
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    iVar18 = FUN_02859dc4(unaff_x19[0xe4],0);
    if (iVar18 != 0x19) {
      lVar30 = unaff_x19[0xe4];
      if (lVar30 == 0) goto LAB_0249920c;
      uVar15 = FUN_02859dc4(lVar30,0);
      FUN_02859e00(lVar30,uVar15 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x60), lVar30 == 0))
      goto LAB_0249920c;
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar30 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      FUN_024e8000(lVar30 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar30 = *(long *)(unaff_x19[0x6c] + 0x60), lVar30 != 0)) {
        if (*(int *)(lVar30 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar30 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar30 = *(long *)(unaff_x19[0x6c] + 0x60), lVar30 != 0)) {
            if (*(int *)(lVar30 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar30 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar30 = *(long *)(unaff_x19[0x6c] + 0x60), lVar30 != 0)) {
                if (*(int *)(lVar30 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar30 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar30 = *(long *)(unaff_x19[0x6c] + 0x60), lVar30 != 0)) {
                    if (*(int *)(lVar30 + 0x18) == 0)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar30 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        if (unaff_x19[0xe3] != 0) {
                          FUN_02858f1c(unaff_x19[0xe3],unaff_x19[0x73],0);
                          if (unaff_x19[0xe3] != 0) {
                            uVar20 = FUN_02858bac(unaff_x19[0xe3],0);
                            if (unaff_x19[0xe3] != 0) {
                              uVar15 = FUN_02858a14(unaff_x19[0xe3],0);
                              lVar30 = *in_stack_00000150;
                              if (lVar30 != 0) {
                                lVar46 = 0;
                                lVar33 = 0;
                                do {
                                  uVar24 = lVar33 + 1;
                                  if ((long)*(int *)(lVar30 + 0x34) <= (long)uVar24)
                                  goto LAB_02496098;
                                  lVar30 = *(long *)(lVar30 + 0x60);
                                  if (lVar30 == 0) break;
                                  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  if (*(uint *)(lVar30 + 0x18) <= uVar24)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  FUN_024e7ecc(lVar30 + lVar46 + 0x70,0);
                                  lVar30 = unaff_x19[0xe0];
                                  if (lVar30 == 0) break;
                                  if (*(uint *)(lVar30 + 0x18) <= uVar24)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  uVar21 = *(undefined8 *)(lVar30 + lVar33 * 8 + 0x28);
                                  if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar27 = FUN_0268b4e0(uVar21,0,0);
                                  if ((uVar27 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                      if ((*in_stack_00000150 == 0) ||
                                         (lVar30 = *(long *)(*in_stack_00000150 + 0x60), lVar30 == 0
                                         )) break;
                                      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      if (*(uint *)(lVar30 + 0x18) <= uVar24)
                                      goto 
                                      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                      ;
                                      FUN_024e8000(lVar30 + lVar46 + 0x70,1,0);
                                    }
                                    lVar30 = unaff_x19[0xe0];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar30 = *(long *)(lVar30 + lVar33 * 8 + 0x28);
                                    if (lVar30 == 0) break;
                                    lVar30 = FUN_024f0144(lVar30,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar23 = *(long *)(*in_stack_00000150 + 0x60), lVar23 == 0))
                                    break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar30 == 0) break;
                                    FUN_0266b9c4(lVar30,*(undefined8 *)(lVar23 + lVar46 + 0x80),0);
                                    lVar30 = unaff_x19[0xe0];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar30 = *(long *)(lVar30 + lVar33 * 8 + 0x28);
                                    if (lVar30 == 0) break;
                                    lVar30 = FUN_024f0144(lVar30,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar23 = *(long *)(*in_stack_00000150 + 0x60), lVar23 == 0))
                                    break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar30 == 0) break;
                                    FUN_0266bbc8(lVar30,*(undefined8 *)(lVar23 + lVar46 + 0x98),0);
                                    lVar30 = unaff_x19[0xe0];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar30 = *(long *)(lVar30 + lVar33 * 8 + 0x28);
                                    if (lVar30 == 0) break;
                                    lVar30 = FUN_024f0144(lVar30,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar23 = *(long *)(*in_stack_00000150 + 0x60), lVar23 == 0))
                                    break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar30 == 0) break;
                                    FUN_0266bc74(lVar30,*(undefined8 *)(lVar23 + lVar46 + 0xa0),0);
                                    lVar30 = unaff_x19[0xe0];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar30 = *(long *)(lVar30 + lVar33 * 8 + 0x28);
                                    if (lVar30 == 0) break;
                                    lVar30 = FUN_024f0144(lVar30,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar23 = *(long *)(*in_stack_00000150 + 0x60), lVar23 == 0))
                                    break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar30 == 0) break;
                                    FUN_0266c1dc(lVar30,*(undefined8 *)(lVar23 + lVar46 + 0xa8),0);
                                    lVar30 = unaff_x19[0xe0];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar30 = *(long *)(lVar30 + lVar33 * 8 + 0x28);
                                    if ((lVar30 == 0) ||
                                       (lVar30 = FUN_024f0144(lVar30,0), lVar30 == 0)) break;
                                    FUN_0266ed90(lVar30,0);
                                    lVar30 = unaff_x19[0xe0];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar30 = *(long *)(lVar30 + lVar33 * 8 + 0x28);
                                    if (lVar30 == 0) break;
                                    lVar30 = FUN_02738ef4(lVar30,0);
                                    lVar23 = unaff_x19[0xe0];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar23 = *(long *)(lVar23 + lVar33 * 8 + 0x28);
                                    if ((lVar23 == 0) ||
                                       (uVar21 = FUN_024f0144(lVar23,0), lVar30 == 0)) break;
                                    FUN_02858f1c(lVar30,uVar21,0);
                                    lVar30 = unaff_x19[0xe0];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar30 = *(long *)(lVar30 + lVar33 * 8 + 0x28);
                                    if ((lVar30 == 0) ||
                                       (lVar30 = FUN_02738ef4(lVar30,0), lVar30 == 0)) break;
                                    FUN_02858b14(uVar20,uVar22,uVar26,uVar62,lVar30,0);
                                    lVar30 = unaff_x19[0xe0];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar30 = *(long *)(lVar30 + lVar33 * 8 + 0x28);
                                    if ((lVar30 == 0) ||
                                       (lVar30 = FUN_02738ef4(lVar30,0), lVar30 == 0)) break;
                                    FUN_02858a50(lVar30,uVar15 & 1,0);
                                    lVar30 = unaff_x19[0xe0];
                                    if (lVar30 == 0) break;
                                    if (*(uint *)(lVar30 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    plVar44 = *(long **)(lVar30 + lVar33 * 8 + 0x28);
                                    uVar19 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar44 == (long *)0x0) break;
                                    (**(code **)(*plVar44 + 0x2c8))
                                              (plVar44,uVar19 & 1,*(undefined8 *)(*plVar44 + 0x2d0))
                                    ;
                                  }
                                  lVar30 = *in_stack_00000150;
                                  lVar33 = lVar33 + 1;
                                  lVar46 = lVar46 + 0x50;
                                } while (lVar30 != 0);
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


