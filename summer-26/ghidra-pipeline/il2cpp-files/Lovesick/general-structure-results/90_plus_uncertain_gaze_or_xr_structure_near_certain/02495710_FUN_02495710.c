/*
FUNCTION_NAME: FUN_02495710
ENTRY_POINT: 02495710
PROGRAM: Lovesick-libil2cpp.so
SCORE: 156
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;weak_vector_component_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02495710(long param_1,undefined1 param_2 [16],ulong param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  undefined2 uVar5;
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
  long lVar22;
  int *piVar23;
  ulong uVar24;
  undefined1 uVar25;
  char cVar26;
  undefined4 *puVar27;
  long lVar28;
  long lVar29;
  float *pfVar30;
  long in_x9;
  long lVar31;
  code *pcVar32;
  float *pfVar33;
  undefined8 in_x10;
  long lVar34;
  uint in_w11;
  uint uVar35;
  long lVar36;
  long lVar37;
  long in_x12;
  long lVar38;
  long *unaff_x19;
  byte unaff_w20;
  uint uVar39;
  long unaff_x21;
  long *plVar40;
  uint uVar41;
  long *unaff_x22;
  uint unaff_w24;
  long lVar42;
  long *plVar43;
  long unaff_x25;
  long unaff_x27;
  long lVar44;
  undefined1 *unaff_x28;
  uint unaff_w29;
  int iVar45;
  long *plVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  ulong uVar56;
  double dVar57;
  ulong uVar58;
  ulong uVar59;
  uint uVar60;
  ulong uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float unaff_s12;
  float fVar71;
  float fVar72;
  ulong unaff_d13;
  float fVar73;
  undefined4 uVar74;
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
  float in_stack_000000c0;
  float fStack00000000000000c8;
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
  
  plVar40 = unaff_x22;
code_r0x02495710:
  iVar18 = (int)unaff_x27;
  if ((unaff_w20 & in_w11 == 0x2d) != 0) goto LAB_024950bc;
  if ((float)(uint)in_x12 == in_stack_00000078._4_4_) goto LAB_024950bc;
LAB_0249572c:
  uVar15 = *in_stack_00000148;
  if (uVar15 < (uint)in_x10) {
    if (*(char *)(in_x9 + (int)uVar15 * unaff_x27 + 0x194) != '\0') {
      lVar31 = in_x9 + (int)uVar15 * unaff_x27;
      uVar58 = *(ulong *)(lVar31 + 0x11c);
      uVar56 = *(ulong *)(in_stack_00000070 + 0x230);
      *(ulong *)(in_stack_00000070 + 0x230) =
           uVar58 ^ (uVar58 ^ uVar56) &
                    CONCAT44(-(uint)((float)(uVar56 >> 0x20) < (float)(uVar58 >> 0x20)),
                             -(uint)((float)uVar56 < (float)uVar58));
      uVar56 = *(ulong *)(in_stack_00000070 + 0x238);
      param_3 = *(ulong *)(lVar31 + 0x128);
      *(ulong *)(in_stack_00000070 + 0x238) =
           param_3 ^ (param_3 ^ uVar56) &
                     CONCAT44(-(uint)((float)(param_3 >> 0x20) < (float)(uVar56 >> 0x20)),
                              -(uint)((float)param_3 < (float)uVar56));
    }
    if (((int)unaff_x19[0x5b] == 5) &&
       ((0xd < in_w11 || ((1 << (ulong)(in_w11 & 0x1f) & 0x2c00U) == 0)))) {
      lVar31 = *(long *)(param_1 + 0x58);
      if (lVar31 == 0) goto LAB_0249920c;
      iVar14 = (int)unaff_x19[0x95] + 1;
      if (*(int *)(lVar31 + 0x18) < iVar14) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147c08((long *)(param_1 + 0x58),iVar14,1,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
        param_1 = *in_stack_00000150;
        if (param_1 == 0) goto LAB_0249920c;
      }
      lVar31 = *(long *)(param_1 + 0x58);
      if (lVar31 == 0) goto LAB_0249920c;
      uVar19 = *(uint *)(unaff_x19 + 0x95);
      lVar29 = (long)(int)uVar19;
      uVar15 = *(uint *)(lVar31 + 0x18);
      if (uVar15 <= uVar19)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar42 = lVar31 + lVar29 * 0x14;
      fVar73 = *(float *)(lVar42 + 0x30);
      param_3 = (ulong)(uint)fVar73;
      *(undefined4 *)(lVar42 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
      fVar63 = *(float *)((long)unaff_x19 + 0x4bc);
      if (fVar73 <= *(float *)((long)unaff_x19 + 0x4bc)) {
        fVar63 = fVar73;
      }
      *(float *)(lVar42 + 0x30) = fVar63;
      uVar60 = *(uint *)((long)unaff_x19 + 0x48c);
      if (uVar60 == 0 && uVar19 == 0) {
        *(uint *)(lVar31 + lVar29 * 0x14 + 0x20) = uVar60;
        plVar40 = in_stack_00000150;
      }
      else {
        uVar35 = uVar60 - 1;
        if (0 < (int)uVar60) {
          lVar42 = *(long *)(param_1 + 0x38);
          if (lVar42 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar42 + 0x18) <= uVar35)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          if (uVar19 != *(uint *)(lVar42 + (long)(int)uVar35 * (long)iVar18 + 0x68)) {
            if (uVar19 - 1 < uVar15) {
              *(uint *)(lVar31 + 0x20 + (long)(int)(uVar19 - 1) * 0x14 + 4) = uVar35;
              *(uint *)(lVar31 + 0x20 + lVar29 * 0x14) = uVar60;
              plVar40 = in_stack_00000150;
              goto LAB_024957b0;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
        }
        plVar40 = in_stack_00000150;
        if ((float)uVar60 == in_stack_00000078._4_4_) {
          *(float *)(lVar31 + lVar29 * 0x14 + 0x24) = in_stack_00000078._4_4_;
        }
      }
    }
LAB_024957b0:
    puVar10 = System_Threading_Mutex_TypeInfo;
    if (((char)unaff_x19[0x5a] == '\0') &&
       ((6 < *(uint *)(unaff_x19 + 0x5b) ||
        ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) == 0)))) goto LAB_02495b70;
    if ((unaff_w29 == 0) &&
       (((in_stack_000017bc != 0x2d && (in_stack_000017bc != 0x200b)) && (in_stack_000017bc != 0xad)
        ))) {
      if (*(char *)((long)unaff_x19 + 0x2d2) != '\0') goto LAB_024958f0;
LAB_02495868:
      if (((((0x2bfd < in_stack_000017bc - 0xac01) && (0x1d < in_stack_000017bc - 0xa961)) &&
           (0xfd < in_stack_000017bc - 0x1101)) || (uVar56 = FUN_024e95f0(0), (uVar56 & 1) != 0)) &&
         ((((0xed < in_stack_000017bc - 0xff01 && (0x1d < in_stack_000017bc - 0xfe31)) &&
           (0x717d < in_stack_000017bc - 0x2e81)) && (0x1fd < in_stack_000017bc - 0xf901))))
      goto LAB_024958f0;
      lVar31 = FUN_024e94b0(0);
      if ((lVar31 == 0) || (*(long *)(lVar31 + 0x10) == 0)) goto LAB_0249920c;
      uVar56 = FUN_0129aa60(*(long *)(lVar31 + 0x10),&stack0x00000880,
                            *(undefined8 *)
                             System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                           );
      if ((int)in_stack_00000078._4_4_ <= (int)*in_stack_00000148) {
        in_stack_00000880 = in_stack_000017bc;
        if ((uVar56 & 1) == 0) {
LAB_02495bc4:
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_024d69d4();
          bStack000000000000005c = 0;
          goto LAB_02495b70;
        }
LAB_02495adc:
        if ((uint)unaff_x21 != unaff_w24 || ((bStack000000000000005c ^ 0xff) & 1) != 0)
        goto LAB_02495b70;
        goto LAB_02495af4;
      }
      lVar31 = FUN_024e94b0(0);
      if (((lVar31 == 0) || (*plVar40 == 0)) || (lVar29 = *(long *)(*plVar40 + 0x38), lVar29 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148 + 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (*(long *)(lVar31 + 0x18) == 0) goto LAB_0249920c;
      in_stack_00000880 =
           (uint)*(ushort *)(lVar29 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar18 + 0x20);
      uVar58 = FUN_0129aa60(*(long *)(lVar31 + 0x18),&stack0x00000880,
                            *(undefined8 *)
                             System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                           );
      if ((uVar56 & 1) != 0) goto LAB_02495adc;
      if ((uVar58 & 1) == 0) goto LAB_02495bc4;
      if ((bStack000000000000005c & 1) == 0) goto LAB_024959d4;
      if (unaff_w29 != 0) goto LAB_02495af8;
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
      if ((bStack000000000000005c & 1) == 0) {
LAB_024959d4:
        bStack000000000000005c = 0;
        goto LAB_02495b70;
      }
      if ((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) == 0) {
LAB_02495af4:
        if (unaff_w29 == 0) goto LAB_02495b30;
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
LAB_02495b70:
    plVar46 = (long *)System_Threading_Mutex_TypeInfo;
    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar40 = (long *)StringLiteral_302;
    FUN_024d69d4();
    *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
    in_w11 = in_stack_000017bc;
LAB_02492630:
    fVar63 = (float)unaff_d13;
    in_stack_00001788 = in_stack_00001788 + 1;
    lVar31 = unaff_x19[0x8e];
    if (lVar31 != 0) {
      if ((int)in_stack_00001788 < (int)*(uint *)(lVar31 + 0x18)) {
        if (*(uint *)(lVar31 + 0x18) <= in_stack_00001788)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar15 = *(uint *)(lVar31 + (long)(int)in_stack_00001788 * 0xc + 0x20);
        if (uVar15 == 0) goto LAB_02495f1c;
        if (5 < in_stack_00000140) {
          uVar20 = FUN_0176eb1c(&stack0x000017bc,0);
          uVar21 = FUN_0176eb1c(&stack0x00001788,0);
          uVar20 = FUN_0160073c(*(undefined8 *)
                                 UnityEngine_Rendering_Universal_DebugValidationMode_var,uVar20,
                                *(undefined8 *)
                                 Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                                ,uVar21,0);
          if (*(int *)(*plVar40 + 0xe0) == 0) {
            thunk_FUN_00d32864(*plVar40);
          }
          FUN_026610e4(uVar20,0);
          in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
        }
        if ((*(char *)((long)unaff_x19 + 0x2fa) != '\0') && (uVar15 == 0x3c)) goto code_r0x02492440;
        if ((*in_stack_00000150 != 0) &&
           (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 != 0)) {
          if (*in_stack_00000148 < *(uint *)(lVar31 + 0x18)) {
            lVar31 = lVar31 + (int)*in_stack_00000148 * unaff_x27;
            *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar31 + 0x2c);
            *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar31 + 0x58);
            unaff_x19[0x1f] = *(long *)(lVar31 + 0x38);
            goto 
            UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
LAB_02495f1c:
      fVar63 = (float)param_3;
      if (((char)unaff_x19[0x46] != '\0') &&
         (fVar63 = DAT_02956ccc,
         DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
        fVar63 = *(float *)((long)unaff_x19 + 0x1dc);
        fVar73 = *(float *)((long)unaff_x19 + 0x24c);
        if ((fVar63 < fVar73) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
            *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
          }
          fVar47 = (*(float *)((long)unaff_x19 + 0x234) - fVar63) * 0.5;
          if (fVar47 <= DAT_028aa298) {
            fVar47 = DAT_028aa298;
          }
          *(float *)(unaff_x19 + 0x47) = fVar63;
          fVar47 = (fVar63 + fVar47) * 20.0 + 0.5;
          fVar63 = DAT_02958220;
          if (fVar47 != INFINITY) {
            fVar63 = (float)(int)fVar47 / 20.0;
          }
          if (fVar73 <= fVar63) {
            fVar63 = fVar73;
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
        if (*(int *)(*plVar40 + 0xe0) == 0) {
          thunk_FUN_00d32864(*plVar40);
        }
        FUN_02660dac(uVar20,0);
      }
      if ((*in_stack_00000148 == 0) || ((*in_stack_00000148 == 1 && (in_w11 == 3)))) {
        (**(code **)(*unaff_x19 + 0x948))();
        goto LAB_02496098;
      }
      lVar31 = *plVar46;
      if (*(int *)(lVar31 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar31 = *plVar46;
      }
      puVar10 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      lVar31 = **(long **)(lVar31 + 0xb8);
      if (lVar31 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      iVar18 = *(int *)(lVar31 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
      if ((*in_stack_00000150 == 0) || (lVar31 = *(long *)(*in_stack_00000150 + 0x60), lVar31 == 0))
      goto LAB_0249920c;
      if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar31 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      FUN_024e7d94(lVar31 + 0x20,0,0);
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
      lVar31 = unaff_x19[0xe2];
      _in_stack_00000090 = _in_stack_000000c0;
      fStack0000000000000098 = fStack00000000000000c8;
      if (iVar14 < 0x401) {
        if (iVar14 == 0x100) {
          if (lVar31 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar31 + 0x18) < 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar20 = *(undefined8 *)(lVar31 + 0x30);
          if ((int)unaff_x19[0x5b] == 5) {
            if ((*in_stack_00000150 == 0) ||
               (lVar29 = *(long *)(*in_stack_00000150 + 0x58), lVar29 == 0)) goto LAB_0249920c;
            if (*(uint *)(lVar29 + 0x18) <= uStack000000000000002c)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            fVar63 = *(float *)(lVar29 + (long)(int)uStack000000000000002c * 0x14 + 0x28);
          }
          else {
            fVar63 = *(float *)(unaff_x19 + 0x96);
          }
          fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar31 + 0x2c);
          fVar63 = (0.0 - fVar63) - fStack0000000000000020;
        }
        else if (iVar14 == 0x200) {
          if (lVar31 == 0) goto LAB_0249920c;
          if ((*(int *)(lVar31 + 0x18) == 1) || (*(int *)(lVar31 + 0x18) == 0))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fStack0000000000000098 = (*(float *)(lVar31 + 0x20) + *(float *)(lVar31 + 0x2c)) * 0.5;
          uVar20 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar31 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar31 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar31 + 0x24) +
                            (float)*(undefined8 *)(lVar31 + 0x30)) * 0.5);
          if ((int)unaff_x19[0x5b] == 5) {
            if ((*in_stack_00000150 == 0) ||
               (lVar31 = *(long *)(*in_stack_00000150 + 0x58), lVar31 == 0)) goto LAB_0249920c;
            if (*(uint *)(lVar31 + 0x18) <= uStack000000000000002c)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar31 = lVar31 + (long)(int)uStack000000000000002c * 0x14;
            fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
            fVar63 = ((fStack0000000000000020 + *(float *)(lVar31 + 0x28) +
                      *(float *)(lVar31 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
          }
          else {
            fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
            fVar63 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8) -
                     fStack0000000000000024) * -0.5 + 0.0;
          }
        }
        else {
          if (iVar14 != 0x400) goto LAB_024965d0;
          if (lVar31 == 0) goto LAB_0249920c;
          if (*(int *)(lVar31 + 0x18) == 0)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar20 = *(undefined8 *)(lVar31 + 0x24);
          if ((int)unaff_x19[0x5b] == 5) {
            if ((*in_stack_00000150 == 0) ||
               (lVar29 = *(long *)(*in_stack_00000150 + 0x58), lVar29 == 0)) goto LAB_0249920c;
            if (*(uint *)(lVar29 + 0x18) <= uStack000000000000002c)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            in_stack_000017b8 = *(float *)(lVar29 + (long)(int)uStack000000000000002c * 0x14 + 0x30)
            ;
          }
          fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar31 + 0x20);
          fVar63 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
        }
        _in_stack_00000090 = CONCAT44((float)((ulong)uVar20 >> 0x20) + 0.0,(float)uVar20 + fVar63);
      }
      else if (iVar14 == 0x800) {
        if (lVar31 == 0) goto LAB_0249920c;
        if ((*(int *)(lVar31 + 0x18) == 1) || (*(int *)(lVar31 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar63 = ((float)*(undefined8 *)(lVar31 + 0x24) + (float)*(undefined8 *)(lVar31 + 0x30)) *
                 0.5;
        fStack0000000000000098 =
             fStack0000000000000030 + 0.0 +
             (*(float *)(lVar31 + 0x20) + *(float *)(lVar31 + 0x2c)) * 0.5;
        _in_stack_00000090 =
             CONCAT44(((float)((ulong)*(undefined8 *)(lVar31 + 0x24) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar31 + 0x30) >> 0x20)) * 0.5 + 0.0,
                      fVar63 + 0.0);
      }
      else {
        if (iVar14 == 0x1000) {
          if (lVar31 == 0) goto LAB_0249920c;
          if ((*(int *)(lVar31 + 0x18) == 1) || (*(int *)(lVar31 + 0x18) == 0))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar63 = (float)*(undefined8 *)(lVar31 + 0x24) + (float)*(undefined8 *)(lVar31 + 0x30);
          fVar73 = (float)((ulong)*(undefined8 *)(lVar31 + 0x24) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(lVar31 + 0x30) >> 0x20);
          fStack0000000000000020 =
               fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) + *(float *)(unaff_x19 + 0x9b);
          fStack0000000000000098 =
               fStack0000000000000030 + 0.0 +
               (*(float *)(lVar31 + 0x20) + *(float *)(lVar31 + 0x2c)) * 0.5;
        }
        else {
          if (iVar14 != 0x2000) goto LAB_024965d0;
          if (lVar31 == 0) goto LAB_0249920c;
          if ((*(int *)(lVar31 + 0x18) == 1) || (*(int *)(lVar31 + 0x18) == 0))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar63 = (float)*(undefined8 *)(lVar31 + 0x24) + (float)*(undefined8 *)(lVar31 + 0x30);
          fVar73 = (float)((ulong)*(undefined8 *)(lVar31 + 0x24) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(lVar31 + 0x30) >> 0x20);
          fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
          fStack0000000000000098 =
               fStack0000000000000030 + 0.0 +
               (*(float *)(lVar31 + 0x20) + *(float *)(lVar31 + 0x2c)) * 0.5;
        }
        fVar63 = fVar63 * 0.5;
        _in_stack_00000090 =
             CONCAT44(fVar73 * 0.5 + 0.0,
                      fVar63 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) * 0.5));
      }
LAB_024965d0:
      if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
      uVar20 = FUN_0285a188(unaff_x19[0xe4],0);
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar10);
      }
      uVar56 = FUN_0268b4e0(uVar20,0,0);
      lVar31 = FUN_024c933c();
      if (lVar31 == 0) goto LAB_0249920c;
      FUN_026a125c(lVar31,0);
      *(float *)(unaff_x19 + 0xe1) = fVar63;
      if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
      iVar14 = FUN_02859798(unaff_x19[0xe4],0);
      if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
      fVar73 = (float)FUN_028598f0(unaff_x19[0xe4],0);
      __x = DAT_028aa048;
      dVar57 = modf(DAT_028aa048,(double *)&stack0x00000880);
      if (dVar57 == 0.5) {
        fVar47 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
        if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
          fVar47 = fVar47 + 1.0;
        }
      }
      else {
        fVar47 = 255.0;
      }
      dVar57 = modf(__x,(double *)&stack0x00000880);
      if (dVar57 == 0.5) {
        fVar67 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
        if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
          fVar67 = fVar67 + 1.0;
        }
      }
      else {
        fVar67 = 255.0;
      }
      dVar57 = modf(__x,(double *)&stack0x00000880);
      if (dVar57 == 0.5) {
        fVar70 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
        if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
          fVar70 = fVar70 + 1.0;
        }
      }
      else {
        fVar70 = 255.0;
      }
      dVar57 = modf(__x,(double *)&stack0x00000880);
      if (dVar57 == 0.5) {
        fVar49 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
        if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
          fVar49 = fVar49 + 1.0;
        }
      }
      else {
        fVar49 = 255.0;
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
      lVar31 = *(long *)puVar11;
      if (*(int *)(lVar31 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar31 = *(long *)puVar11;
      }
      puVar27 = *(undefined4 **)(lVar31 + 0xb8);
      uVar58 = (ulong)(uint)puVar27[1];
      uVar59 = (ulong)(uint)puVar27[2];
      uVar61 = (ulong)(uint)puVar27[3];
      UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                (*puVar27,uVar58,uVar59,uVar61,&stack0x00001790,0x4000ffff,0);
      if (*(int *)(*plVar46 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar31 = *in_stack_00000150;
      if (lVar31 == 0) goto LAB_0249920c;
      uVar15 = *in_stack_00000148;
      if ((int)uVar15 < 1) {
        iStack00000000000000ac = 0;
        iVar18 = 0;
        goto LAB_02498c58;
      }
      lVar31 = *(long *)(lVar31 + 0x38);
      fVar63 = ABS(fVar63);
      fVar48 = 1.0;
      if ((uVar56 & 1) == 0) {
        fVar48 = fVar63;
      }
      if (lVar31 == 0) goto LAB_0249920c;
      bVar9 = false;
      bVar12 = false;
      bVar8 = false;
      bVar13 = false;
      uStack0000000000000060 =
           (int)fVar47 & 0xffU | ((int)fVar67 & 0xffU) << 8 | ((int)fVar70 & 0xffU) << 0x10 |
           (int)fVar49 << 0x18;
      fStack00000000000000d0 = *(float *)(*(long *)(*plVar46 + 0xb8) + 0x15a8);
      fStack00000000000000cc = 0.0;
      fStack0000000000000058 = fStack00000000000000b0;
      _bStack000000000000005c = 0.0;
      fStack0000000000000034 = 0.0;
      fStack0000000000000088 = 0.0;
      fStack0000000000000030 = 0.0;
      uVar19 = 0;
      iVar45 = 0;
      lVar29 = 0x2e0;
      fVar67 = 0.0;
      fVar47 = 0.0;
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
      uVar35 = 1;
      goto LAB_02496a50;
    }
    goto LAB_0249920c;
  }
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
code_r0x02492440:
  *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
  uVar56 = FUN_024d0688();
  if (((uVar56 & 1) != 0) &&
     (in_stack_00001788 = in_stack_0000176c, in_w11 = uVar15, *(int *)((long)unaff_x19 + 0x63c) == 0
     )) goto LAB_02492630;
UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor:
  if ((unaff_x19[0x6c] == 0) || (lVar31 = *(long *)(unaff_x19[0x6c] + 0x38), lVar31 == 0))
  goto LAB_0249920c;
  uVar19 = *in_stack_00000148;
  if (*(uint *)(lVar31 + 0x18) <= uVar19)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar42 = (long)(int)uVar19;
  cVar26 = *(char *)(lVar31 + lVar42 * unaff_x27 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
  lVar29 = unaff_x19[0x23];
  if ((uint)in_stack_000017a8 == uVar19) {
    uVar15 = (uint)((ulong)in_stack_000017a8 >> 0x20);
    unaff_w20 = 1;
    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
    if (uVar15 == 0x2026) {
      lVar22 = unaff_x19[0xc9];
      lVar31 = lVar31 + lVar42 * unaff_x27;
      *(undefined4 *)(lVar31 + 0x2c) = 0;
      *(long *)(lVar31 + 0x30) = lVar22;
      *(long *)(lVar31 + 0x38) = unaff_x19[0xca];
      *(long *)(lVar31 + 0x50) = unaff_x19[0xcb];
      *(int *)(lVar31 + 0x58) = (int)unaff_x19[0xcc];
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      in_stack_000017a8 = CONCAT44(3,uVar19 + 1);
    }
    else if (uVar15 == 3) {
      if ((*in_stack_00000138 == 0) || (lVar22 = FUN_024b11ac(*in_stack_00000138,0), lVar22 == 0))
      goto LAB_0249920c;
      FUN_01299bc0(lVar22,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
      if (*(uint *)(lVar31 + 0x18) <= uVar19)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      unaff_w20 = 1;
      *(ulong *)(lVar31 + lVar42 * unaff_x27 + 0x30) = CONCAT44(in_stack_00000884,in_stack_00000880)
      ;
      uVar19 = *(uint *)((long)unaff_x19 + 0x48c);
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
    }
  }
  else {
    unaff_w20 = 0;
  }
  in_w11 = uVar15;
  if (((int)uVar19 < *(int *)((long)unaff_x19 + 0x31c)) && (uVar15 != 3)) {
    if ((*in_stack_00000150 == 0) || (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar31 + 0x18) <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar31 = lVar31 + (long)(int)uVar19 * (long)iVar18;
    *(undefined1 *)(lVar31 + 0x194) = 0;
    *(undefined2 *)(lVar31 + 0x20) = 0x200b;
    *(undefined4 *)(lVar31 + 100) = 0;
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
          uVar56 = FUN_016f92d4(uVar15,0);
          if ((uVar56 & 1) != 0) {
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
        uVar56 = FUN_016f9218(uVar15,0);
        if ((uVar56 & 1) != 0) {
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
      uVar56 = FUN_016f92d4(uVar15,0);
      if ((uVar56 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar15 = FUN_016f95a8(uVar15,0);
LAB_02492a0c:
        uVar15 = uVar15 & 0xffff;
      }
    }
    iVar14 = *(int *)((long)unaff_x19 + 0x63c);
    in_w11 = uVar15;
    if (iVar14 == 0) goto LAB_02492a20;
LAB_0249265c:
    if (iVar14 == 1) {
      if ((*in_stack_00000150 == 0) || (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = lVar31 + (int)*in_stack_00000148 * unaff_x27;
      lVar42 = *(long *)(lVar31 + 0x40);
      unaff_x19[0xd2] = lVar42;
      *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar31 + 0x48);
      if ((lVar42 == 0) || (lVar31 = FUN_024ebfa0(lVar42,0), lVar31 == 0)) goto LAB_0249920c;
      FUN_0132138c(lVar31,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                   *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
      lVar42 = CONCAT44(in_stack_00000884,in_stack_00000880);
      if (lVar42 == 0) goto LAB_02492630;
      if (in_w11 == 0x3c) {
        in_w11 = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
      }
      else {
        lVar31 = *plVar46;
        if (*(int *)(lVar31 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar31 = *plVar46;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1b4) = *(undefined4 *)(*(long *)(lVar31 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar63 = *(float *)(unaff_x19 + 0x3c);
      memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
      iVar14 = FUN_026fd110(&stack0x00001700,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      memmove(&stack0x00001700,(void *)(*in_stack_00000138 + 0x50),0x60);
      fVar47 = (float)FUN_026fd120(&stack0x00001700,0);
      fVar73 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar73 = unaff_s12;
      }
      if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
      fVar73 = (fVar63 / (float)iVar14) * fVar47 * fVar73;
      iVar14 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
      fVar63 = *(float *)(unaff_x19 + 0x3c);
      if (iVar14 < 1) {
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        iVar14 = FUN_026fd110(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar47 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
        fVar70 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar70 = unaff_s12;
        }
        if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
        fVar67 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
        if (*(long *)(lVar42 + 0x20) == 0) goto LAB_0249920c;
        FUN_026fd62c(&stack0x00000880,*(long *)(lVar42 + 0x20),0);
        fVar48 = (float)FUN_026fd45c(&stack0x000016e0,0);
        if (*(long *)(lVar42 + 0x20) == 0) goto LAB_0249920c;
        fVar50 = *(float *)(lVar42 + 0x2c);
        fVar71 = (float)FUN_026fd668(*(long *)(lVar42 + 0x20),0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar49 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar51 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar64 = *(float *)((long)unaff_x19 + 0x3fc);
        fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
        if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
        fStack0000000000000134 = fVar73 * fVar51 * fVar64 * fStack0000000000000134;
        fVar70 = (fVar63 / (float)iVar14) * fVar47 * fVar70;
        fVar63 = fVar70 * (fVar67 / fVar48) * fVar50 * fVar71;
        fVar70 = fVar70 / fVar63;
        fVar49 = fVar70 * fVar49;
        fVar73 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
        fVar70 = fVar70 * fVar73;
      }
      else {
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        iVar14 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar47 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (*(long *)(lVar42 + 0x20) == 0) goto LAB_0249920c;
        fVar70 = *(float *)(lVar42 + 0x2c);
        fVar67 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar67 = 1.0;
        }
        fVar48 = (float)FUN_026fd668(*(long *)(lVar42 + 0x20),0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar49 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar50 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar71 = *(float *)((long)unaff_x19 + 0x3fc);
        fStack0000000000000134 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fStack0000000000000134 = fVar73 * fVar50 * fVar71 * fStack0000000000000134;
        fVar63 = (fVar63 / (float)iVar14) * fVar47 * fVar67 * fVar70 * fVar48;
        fVar70 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
      }
      lVar31 = unaff_x19[0x6c];
      unaff_x19[200] = lVar42;
      if ((lVar31 == 0) || (lVar42 = *(long *)(lVar31 + 0x38), lVar42 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar42 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar42 = lVar42 + (int)*in_stack_00000148 * unaff_x27;
      *(undefined4 *)(lVar42 + 0x2c) = 1;
      *(float *)(lVar42 + 0x160) = fVar63;
      in_stack_00000128 = 0.0;
      *(long *)(lVar42 + 0x40) = unaff_x19[0xd2];
      *(long *)(lVar42 + 0x38) = unaff_x19[0x1f];
      *(int *)(lVar42 + 0x58) = (int)unaff_x19[0x23];
      *(int *)(unaff_x19 + 0x23) = (int)lVar29;
      goto LAB_02492e14;
    }
    lVar31 = *in_stack_00000150;
    fVar73 = 0.0;
    if (in_w11 != 3 && in_w11 != 0xad) {
      fVar73 = fVar63;
    }
    fStack0000000000000134 = 0.0;
    if (lVar31 == 0) goto LAB_0249920c;
    fVar49 = 0.0;
    fVar70 = 0.0;
  }
  else {
    if (iVar14 != 0) goto LAB_0249265c;
LAB_02492a20:
    if ((*in_stack_00000150 == 0) || (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 == 0))
    goto LAB_0249920c;
    uVar19 = *in_stack_00000148;
    uVar15 = *(uint *)(lVar31 + 0x18);
    if (uVar15 <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar29 = *(long *)(lVar31 + (int)uVar19 * unaff_x27 + 0x30);
    unaff_x19[200] = lVar29;
    if (lVar29 == 0) goto LAB_02492630;
    lVar42 = lVar31 + (int)uVar19 * unaff_x27;
    lVar29 = *(long *)(lVar42 + 0x38);
    unaff_x19[0x1f] = lVar29;
    unaff_x19[0x22] = *(long *)(lVar42 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar42 + 0x58);
    if (unaff_w20 == 0) {
LAB_02492ab4:
      if (lVar29 == 0) goto LAB_0249920c;
      fVar73 = *(float *)(unaff_x19 + 0x3c);
      iVar14 = FUN_026fd110(lVar29 + 0x50,0);
      lVar31 = unaff_x19[0x1f];
    }
    else {
      lVar42 = unaff_x19[0x8e];
      if (lVar42 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar42 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if ((*(int *)(lVar42 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
         (uVar19 == *(uint *)(unaff_x19 + 0x92))) goto LAB_02492ab4;
      if (uVar15 <= uVar19 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (lVar29 == 0) goto LAB_0249920c;
      fVar73 = *(float *)(lVar31 + (long)(int)(uVar19 - 1) * (long)iVar18 + 0x60);
      iVar14 = FUN_026fd110(lVar29 + 0x50,0);
      lVar31 = *in_stack_00000138;
    }
    if (lVar31 == 0) goto LAB_0249920c;
    fVar67 = (float)FUN_026fd120(lVar31 + 0x50,0);
    fVar47 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar47 = unaff_s12;
    }
    fVar70 = 0.0;
    fVar49 = 0.0;
    if ((unaff_w20 & in_w11 == 0x2026) == 0) {
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar49 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar70 = (float)FUN_026fd180(*in_stack_00000138 + 0x50,0);
    }
    lVar31 = unaff_x19[200];
    if ((lVar31 == 0) || (*(long *)(lVar31 + 0x20) == 0)) goto LAB_0249920c;
    fVar48 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar50 = *(float *)(lVar31 + 0x2c);
    fVar63 = (float)FUN_026fd668(*(long *)(lVar31 + 0x20),0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar71 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar51 = *(float *)((long)unaff_x19 + 0x3fc);
    fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
    lVar31 = unaff_x19[0x6c];
    if ((lVar31 == 0) || (lVar29 = *(long *)(lVar31 + 0x38), lVar29 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar29 = lVar29 + (int)*in_stack_00000148 * unaff_x27;
    *(undefined4 *)(lVar29 + 0x2c) = 0;
    fVar47 = ((fStack00000000000000f4 * fVar73) / (float)iVar14) * fVar67 * fVar47;
    fVar63 = fVar47 * fVar48 * fVar50 * fVar63;
    *(float *)(lVar29 + 0x160) = fVar63;
    uVar15 = *(uint *)(unaff_x19 + 0x23);
    fStack0000000000000134 = fVar47 * fVar71 * fVar51 * fStack0000000000000134;
    if (uVar15 == 0) {
      in_stack_00000128 = *(float *)(unaff_x19 + 0xc2);
    }
    else {
      lVar29 = unaff_x19[0xe0];
      if (lVar29 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar29 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = *(long *)(lVar29 + (long)(int)uVar15 * 8 + 0x20);
      if (lVar29 == 0) goto LAB_0249920c;
      in_stack_00000128 = *(float *)(lVar29 + 0x104);
    }
LAB_02492e14:
    unaff_s12 = 1.0;
    fVar73 = 0.0;
    if (in_w11 != 3 && in_w11 != 0xad) {
      fVar73 = fVar63;
    }
  }
  lVar31 = *(long *)(lVar31 + 0x38);
  if (lVar31 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar31 = lVar31 + (int)*in_stack_00000148 * unaff_x27;
  *(short *)(lVar31 + 0x20) = (short)in_w11;
  *(int *)(lVar31 + 0x60) = (int)unaff_x19[0x3c];
  *(undefined4 *)(lVar31 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
  if ((unaff_x19[0x6c] == 0) || (lVar31 = *(long *)(unaff_x19[0x6c] + 0x38), lVar31 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(int *)(lVar31 + (int)*in_stack_00000148 * unaff_x27 + 0x168) = (int)unaff_x19[0x2a];
  if ((unaff_x19[0x6c] == 0) || (lVar31 = *(long *)(unaff_x19[0x6c] + 0x38), lVar31 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(undefined4 *)(lVar31 + (int)*in_stack_00000148 * unaff_x27 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x154);
  if ((unaff_x19[0x6c] == 0) || (lVar31 = *(long *)(unaff_x19[0x6c] + 0x38), lVar31 == 0))
  goto LAB_0249920c;
  uVar15 = *in_stack_00000148;
  FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
               *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
  if (*(uint *)(lVar31 + 0x18) <= uVar15)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar31 = lVar31 + (int)uVar15 * unaff_x27;
  *(undefined4 *)(lVar31 + 0x18c) = in_stack_00000890;
  *(undefined8 *)(lVar31 + 0x184) = in_stack_00000888;
  *(ulong *)(lVar31 + 0x17c) = CONCAT44(in_stack_00000884,in_stack_00000880);
  if ((*in_stack_00000150 == 0) || (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(undefined4 *)(lVar31 + (int)*in_stack_00000148 * unaff_x27 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x254);
  if ((unaff_x19[200] == 0) || (lVar31 = *(long *)(unaff_x19[200] + 0x20), lVar31 == 0))
  goto LAB_0249920c;
  FUN_026fd62c(&stack0x00000bf8,lVar31,0);
  puVar10 = 
  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__;
  if ((int)in_w11 < 0x10000) {
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar15 = FUN_016f68bc(in_w11,0);
    unaff_w29 = uVar15 & 1;
  }
  else {
    unaff_w29 = 0;
  }
  fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
  *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
    fVar48 = 0.0;
    fVar67 = 0.0;
    fVar47 = 0.0;
  }
  else {
    if (unaff_x19[200] == 0) goto LAB_0249920c;
    uVar19 = *in_stack_00000148;
    uVar15 = *(uint *)(unaff_x19[200] + 0x28);
    if ((int)uVar19 < (int)in_stack_00000078._4_4_) {
      if ((*in_stack_00000150 == 0) || (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar31 + 0x18) <= uVar19 + 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = *(long *)(lVar31 + (long)(int)(uVar19 + 1) * (long)iVar18 + 0x30);
      if ((((lVar31 == 0) || (*in_stack_00000138 == 0)) ||
          (lVar29 = *(long *)(*in_stack_00000138 + 0x128), lVar29 == 0)) ||
         (lVar29 = *(long *)(lVar29 + 0x18), lVar29 == 0)) goto LAB_0249920c;
      in_stack_00000880 = uVar15 | *(int *)(lVar31 + 0x28) << 0x10;
      uVar56 = FUN_0129eff4(lVar29,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      uVar74 = 0;
      if ((uVar56 & 1) == 0) {
        fVar48 = 0.0;
        fVar67 = 0.0;
        fVar47 = 0.0;
      }
      else {
        if (in_stack_000016d8 == 0) goto LAB_0249920c;
        fVar47 = *(float *)(in_stack_000016d8 + 0x14);
        fVar67 = *(float *)(in_stack_000016d8 + 0x18);
        fVar48 = *(float *)(in_stack_000016d8 + 0x1c);
        uVar74 = *(undefined4 *)(in_stack_000016d8 + 0x20);
        if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
          fStack00000000000000cc = 0.0;
        }
      }
      uVar19 = *in_stack_00000148;
    }
    else {
      uVar74 = 0;
      fVar48 = 0.0;
      fVar67 = 0.0;
      fVar47 = 0.0;
    }
    if (0 < (int)uVar19) {
      if ((*in_stack_00000150 == 0) || (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar31 + 0x18) <= (uint)((long)(int)uVar19 + -1))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = *(long *)(lVar31 + ((long)(int)uVar19 + -1) * unaff_x27 + 0x30);
      if (((lVar31 == 0) || (*in_stack_00000138 == 0)) ||
         ((lVar29 = *(long *)(*in_stack_00000138 + 0x128), lVar29 == 0 ||
          (lVar29 = *(long *)(lVar29 + 0x18), lVar29 == 0)))) goto LAB_0249920c;
      in_stack_00000880 = *(uint *)(lVar31 + 0x28) | uVar15 << 0x10;
      uVar56 = FUN_0129eff4(lVar29,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      if ((uVar56 & 1) != 0) {
        if ((in_stack_000016d8 == 0) ||
           (fVar47 = (float)FUN_024bb1bc(fVar47,fVar67,fVar48,uVar74,
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
    *(float *)((long)unaff_x19 + 0x2f4) = fVar48;
  }
  if ((char)unaff_x19[0x1d] != '\0') {
    fVar71 = *(float *)(unaff_x19 + 199);
    fVar50 = (float)FUN_026fd474(&stack0x00001770,0);
    fVar71 = fVar71 - fVar73 * fVar50 * (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc));
    *(float *)(unaff_x19 + 199) = fVar71;
    if ((unaff_w29 != 0) || (in_w11 == 0x200b)) {
      *(float *)(unaff_x19 + 199) =
           fVar71 - fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
    }
  }
  fVar71 = *(float *)(unaff_x19 + 0x55);
  fVar50 = 0.0;
  if (fVar71 != 0.0) {
    fVar50 = (float)FUN_026fd454(&stack0x00001770,0);
    fVar51 = (float)FUN_026fd464(&stack0x00001770,0);
    fVar50 = (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (fVar71 * 0.5 - fVar73 * (fVar50 * 0.5 + fVar51));
    *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fVar50;
  }
  if (((cVar26 == '\0') && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
    lVar31 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar56 = FUN_02681b9c(lVar31,0,0);
    fVar51 = 0.0;
    if ((uVar56 & 1) != 0) {
      lVar31 = unaff_x19[0x22];
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar31 == 0) goto LAB_0249920c;
      uVar56 = FUN_0267e1d8(lVar31,*(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
      fVar51 = 0.0;
      if ((uVar56 & 1) != 0) {
        lVar31 = unaff_x19[0x22];
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar31 == 0) goto LAB_0249920c;
        fVar71 = (float)FUN_0267f610(lVar31,*(undefined4 *)
                                             (*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
        if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) goto LAB_0249920c;
        fVar64 = *(float *)(*in_stack_00000138 + 0x1b0);
        fVar51 = (float)FUN_0267f610(unaff_x19[0x22],
                                     *(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xcc),0);
        fVar51 = fVar51 * fVar71 * fVar64 * 0.25;
        if (fVar71 < in_stack_00000128 + fVar51) {
          in_stack_00000128 = fVar71 - fVar51;
        }
      }
    }
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    in_stack_000000c0 = *(float *)(*in_stack_00000138 + 0x1b4);
  }
  else {
    lVar31 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar56 = FUN_02681b9c(lVar31,0,0);
    in_stack_000000c0 = 0.0;
    if ((uVar56 & 1) != 0) {
      lVar31 = unaff_x19[0x22];
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar31 == 0) goto LAB_0249920c;
      uVar56 = FUN_0267e1d8(lVar31,*(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
      if ((uVar56 & 1) != 0) {
        lVar31 = unaff_x19[0x22];
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar31 == 0) goto LAB_0249920c;
        uVar56 = FUN_0267e1d8(lVar31,*(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xcc),0);
        if ((uVar56 & 1) != 0) {
          lVar31 = unaff_x19[0x22];
          if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (lVar31 == 0) goto LAB_0249920c;
          fVar71 = (float)FUN_0267f610(lVar31,*(undefined4 *)
                                               (*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
          if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) goto LAB_0249920c;
          fVar64 = *(float *)(*in_stack_00000138 + 0x1a8);
          fVar51 = (float)FUN_0267f610(unaff_x19[0x22],
                                       *(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xcc),0)
          ;
          fVar51 = fVar51 * fVar71 * fVar64 * 0.25;
          if (fVar71 < in_stack_00000128 + fVar51) {
            in_stack_00000128 = fVar71 - fVar51;
          }
          goto LAB_024934bc;
        }
      }
    }
    fVar51 = 0.0;
  }
LAB_024934bc:
  fVar65 = *(float *)(unaff_x19 + 199);
  fVar71 = (float)FUN_026fd464(&stack0x00001770,0);
  fVar65 = fVar65 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar73 * (fVar47 + ((fVar71 - in_stack_00000128) - fVar51));
  fVar47 = (float)FUN_026fd46c(&stack0x00001770,0);
  fVar64 = *(float *)((long)unaff_x19 + 0x614) +
           ((fStack0000000000000134 + fVar73 * (fVar67 + in_stack_00000128 + fVar47)) -
           *(float *)(unaff_x19 + 0x9a));
  fVar47 = (float)FUN_026fd45c(&stack0x00001770,0);
  fVar68 = fVar64 - fVar73 * (in_stack_00000128 + in_stack_00000128 + fVar47);
  fVar47 = (float)FUN_026fd454(&stack0x00001770,0);
  fVar71 = fVar65 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar73 * (fVar51 + fVar51 + in_stack_00000128 + in_stack_00000128 + fVar47);
  fVar47 = fVar65;
  fVar67 = fVar71;
  if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (cVar26 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
    fVar62 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
    fVar47 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar54 = fVar62 * fVar73 * (fVar51 + in_stack_00000128 + fVar47);
    fVar47 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar67 = (float)FUN_026fd45c(&stack0x00001770,0);
    fVar64 = fVar64 + 0.0;
    fVar68 = fVar68 + 0.0;
    fVar62 = fVar62 * fVar73 * (((fVar47 - fVar67) - in_stack_00000128) - fVar51);
    fVar67 = fVar71 + fVar62;
    fVar47 = fVar65 + fVar54;
    fVar53 = (fVar54 - fVar62) * 0.5;
    fVar65 = (fVar65 + fVar62) - fVar53;
    fVar71 = (fVar71 + fVar54) - fVar53;
    fVar47 = fVar47 - fVar53;
    fVar67 = fVar67 - fVar53;
  }
  if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
    fVar54 = 0.0;
    fVar55 = 0.0;
    fVar66 = 0.0;
    fVar53 = 0.0;
    fVar75 = fVar68;
    fVar62 = fVar64;
    fStack00000000000000e8 = fVar47;
    fStack00000000000000ec = fVar65;
  }
  else {
    thunk_FUN_026935f0(_uStack0000000000000060,0);
    fVar69 = (fVar71 + fVar65) * 0.5;
    fVar72 = (fVar68 + fVar64) * 0.5;
    fVar64 = fVar64 - fVar72;
    fVar53 = 0.0;
    fVar62 = fVar64;
    fVar52 = (float)FUN_02692df0(fVar47 - fVar69,_uStack0000000000000060,0);
    fVar53 = fVar53 + 0.0;
    fVar68 = fVar68 - fVar72;
    fVar54 = 0.0;
    fVar47 = fVar68;
    fVar65 = (float)FUN_02692df0(fVar65 - fVar69,_uStack0000000000000060,0);
    fVar54 = fVar54 + 0.0;
    fVar66 = 0.0;
    fVar71 = (float)FUN_02692df0(fVar71 - fVar69,_uStack0000000000000060,0);
    fVar71 = fVar69 + fVar71;
    fVar64 = fVar72 + fVar64;
    fVar66 = fVar66 + 0.0;
    fVar55 = 0.0;
    fVar67 = (float)FUN_02692df0(fVar67 - fVar69,_uStack0000000000000060,0);
    fVar67 = fVar69 + fVar67;
    fVar68 = fVar72 + fVar68;
    fVar55 = fVar55 + 0.0;
    fVar75 = fVar72 + fVar47;
    fVar62 = fVar72 + fVar62;
    fStack00000000000000e8 = fVar69 + fVar52;
    fStack00000000000000ec = fVar69 + fVar65;
  }
  if (*in_stack_00000150 == 0) goto LAB_0249920c;
  lVar31 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_d13 = (ulong)(uint)fVar73;
  if (lVar31 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar31 = lVar31 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar31 + 0x120) = fVar75;
  *(float *)(lVar31 + 0x11c) = fStack00000000000000ec;
  *(float *)(lVar31 + 0x124) = fVar54;
  if (*in_stack_00000150 == 0) goto LAB_0249920c;
  lVar31 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_s12 = 1.0;
  if (lVar31 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar31 = lVar31 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar31 + 0x114) = fVar62;
  *(float *)(lVar31 + 0x110) = fStack00000000000000e8;
  *(float *)(lVar31 + 0x118) = fVar53;
  if ((*in_stack_00000150 == 0) || (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar31 = lVar31 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar31 + 0x128) = fVar71;
  *(float *)(lVar31 + 300) = fVar64;
  *(float *)(lVar31 + 0x130) = fVar66;
  if ((*in_stack_00000150 == 0) || (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar31 = lVar31 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar31 + 0x134) = fVar67;
  *(float *)(lVar31 + 0x138) = fVar68;
  *(float *)(lVar31 + 0x13c) = fVar55;
  if ((*in_stack_00000150 == 0) || (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 == 0))
  goto LAB_0249920c;
  uVar15 = *in_stack_00000148;
  unaff_x21 = (long)(int)uVar15;
  if (*(uint *)(lVar31 + 0x18) <= uVar15)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar29 = lVar31 + unaff_x21 * unaff_x27;
  *(int *)(lVar29 + 0x140) = (int)unaff_x19[199];
  fVar67 = *(float *)(unaff_x19 + 0x9a);
  param_3 = (ulong)(uint)fVar67;
  fVar47 = *(float *)((long)unaff_x19 + 0x614);
  *(float *)(lVar29 + 0x15c) = (fVar71 - fStack00000000000000ec) / (fVar62 - fVar75);
  *(float *)(lVar29 + 0x14c) = (fStack0000000000000134 - fVar67) + fVar47;
  fVar49 = fVar49 * fVar73;
  if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
    fVar49 = fVar49 / fStack00000000000000f4;
    fVar70 = (fVar70 * fVar73) / fStack00000000000000f4;
  }
  else {
    fVar70 = fVar70 * fVar73;
  }
  unaff_w24 = *(uint *)(unaff_x19 + 0x92);
  bVar12 = unaff_w29 != 0;
  fVar49 = fVar47 + fVar49;
  bVar13 = uVar15 != unaff_w24;
  if (bVar13 && bVar12) {
    fVar47 = *(float *)(unaff_x19 + 0x98);
    lVar31 = lVar31 + unaff_x21 * unaff_x27;
    *(float *)(lVar31 + 0x154) = fVar47;
    fVar70 = *(float *)((long)unaff_x19 + 0x4c4);
    *(float *)(lVar31 + 0x148) = fVar47 - fVar67;
    *(float *)(lVar31 + 0x158) = fVar70;
    *(float *)(unaff_x19 + 0x97) = fVar47 - fVar67;
    fVar70 = fVar70 - fVar67;
    *(float *)(lVar31 + 0x150) = fVar70;
  }
  else {
    fVar70 = fVar47 + fVar70;
    fVar71 = fVar49;
    fVar64 = fVar70;
    if (fVar47 != 0.0) {
      fVar71 = (fVar49 - fVar47) / *(float *)((long)unaff_x19 + 0x3fc);
      fVar64 = (fVar70 - fVar47) / *(float *)((long)unaff_x19 + 0x3fc);
      if (fVar71 <= fVar49) {
        fVar71 = fVar49;
      }
      if (fVar70 <= fVar64) {
        fVar64 = fVar70;
      }
    }
    lVar31 = lVar31 + unaff_x21 * unaff_x27;
    fVar47 = fVar71;
    if (fVar71 <= *(float *)(unaff_x19 + 0x98)) {
      fVar47 = *(float *)(unaff_x19 + 0x98);
    }
    fVar68 = fVar64;
    if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar64) {
      fVar68 = *(float *)((long)unaff_x19 + 0x4c4);
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar68;
    fVar70 = fVar70 - fVar67;
    *(float *)(unaff_x19 + 0x98) = fVar47;
    *(float *)(lVar31 + 0x154) = fVar71;
    *(float *)(lVar31 + 0x158) = fVar64;
    *(float *)(lVar31 + 0x148) = fVar49 - fVar67;
    *(float *)(unaff_x19 + 0x97) = fVar49 - fVar67;
    *(float *)(lVar31 + 0x150) = fVar70;
  }
  *(float *)((long)unaff_x19 + 0x4bc) = fVar70;
  if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
    if (!bVar13 || !bVar12) {
      *(float *)(unaff_x19 + 0x96) = fVar47;
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar47 = *(float *)((long)unaff_x19 + 0x4b4);
      fVar67 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
      fStack00000000000000f4 = (fVar73 * fVar67) / fStack00000000000000f4;
      param_3 = (ulong)*(uint *)(unaff_x19 + 0x9a);
      if (fVar47 <= fStack00000000000000f4) {
        fVar47 = fStack00000000000000f4;
      }
      *(float *)((long)unaff_x19 + 0x4b4) = fVar47;
      goto LAB_02493948;
    }
  }
  else {
LAB_02493948:
    if ((!bVar13 || !bVar12) && (float)param_3 == 0.0) {
      fVar47 = *(float *)(in_stack_00000070 + 0x208);
      if (*(float *)(in_stack_00000070 + 0x208) <= fVar49) {
        fVar47 = fVar49;
      }
      *(float *)(in_stack_00000070 + 0x208) = fVar47;
    }
  }
  lVar31 = *in_stack_00000150;
  if ((lVar31 == 0) || (lVar29 = *(long *)(lVar31 + 0x38), lVar29 == 0)) goto LAB_0249920c;
  uVar15 = *in_stack_00000148;
  if (*(uint *)(lVar29 + 0x18) <= uVar15)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar29 = lVar29 + (int)uVar15 * unaff_x27;
  *(undefined1 *)(lVar29 + 0x194) = 0;
  uVar19 = *(uint *)(unaff_x19 + 0x4e);
  if (((in_w11 == 9) ||
      ((((unaff_w29 == 0 && (in_w11 != 3)) && (in_w11 != 0x200b)) && (in_w11 != 0xad)))) ||
     (((in_w11 == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) != 0 ||
      (*(int *)((long)unaff_x19 + 0x63c) == 1)))) {
    *(undefined1 *)(lVar29 + 0x194) = 1;
    pfVar30 = _fStack0000000000000088;
    pfVar33 = _fStack0000000000000098;
    if (unaff_w20 != 0) {
      lVar31 = *(long *)(lVar31 + 0x50);
      if (lVar31 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      pfVar33 = (float *)(lVar31 + 0x60);
      pfVar30 = (float *)(lVar31 + 100);
    }
    fVar67 = *pfVar33;
    fVar70 = *pfVar30;
    fVar47 = *(float *)(unaff_x19 + 0x6b);
    fVar49 = *(float *)(unaff_x19 + 199);
    fStack00000000000000d4 = (in_stack_00000090 - fVar67) - fVar70;
    bVar12 = true;
    if ((fVar47 <= fStack00000000000000d4) && (bVar12 = false, !NAN(fVar47))) {
      bVar12 = fVar47 == -1.0;
    }
    if (!bVar12) {
      fStack00000000000000d4 = fVar47;
    }
    fVar47 = 0.0;
    if ((char)unaff_x19[0x1d] == '\0') {
      fVar47 = (float)FUN_026fd474(&stack0x00001770,0);
      param_3 = (ulong)*(uint *)(unaff_x19 + 0x9a);
    }
    fVar68 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar71 = *(float *)((long)unaff_x19 + 0x2cc);
    fVar64 = (float)param_3;
    if (in_w11 != 0xad) {
      fVar63 = fVar73;
    }
    fVar65 = 0.0;
    if ((0.0 < fVar64) && (fVar65 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar65 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar65 = (*(float *)(unaff_x19 + 0x96) - (fVar68 - fVar64)) + fVar65;
    uVar15 = *in_stack_00000148;
    if (fStack00000000000000a4 < fVar65) {
      if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
        *(uint *)((long)unaff_x19 + 0x2dc) = uVar15;
      }
      plVar40 = (long *)StringLiteral_302;
      plVar46 = (long *)System_Threading_Mutex_TypeInfo;
      uVar20 = DAT_02941c08;
      if ((char)unaff_x19[0x46] != '\0') {
        fVar62 = *(float *)(unaff_x19 + 0x58);
        if (((fVar62 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar64)) &&
           (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar63 = *(float *)((long)unaff_x19 + 0x2b4) +
                   ((in_stack_00000018._4_4_ - fVar65) / (float)(int)unaff_x19[0x94]) /
                   fStack0000000000000054;
          if (fVar63 <= fVar62) {
            fVar63 = fVar62;
          }
          goto LAB_024964c8;
        }
        fVar65 = *(float *)((long)unaff_x19 + 0x1dc);
        fVar64 = *(float *)(unaff_x19 + 0x49);
        param_3 = (ulong)(uint)fVar64;
        if ((fVar64 < fVar65) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar63 = (fVar65 - *(float *)(unaff_x19 + 0x47)) * 0.5;
          if (fVar63 <= DAT_028aa298) {
            fVar63 = DAT_028aa298;
          }
          fVar73 = (fVar65 - fVar63) * 20.0 + 0.5;
          fVar63 = DAT_02958220;
          if (fVar73 != INFINITY) {
            fVar63 = (float)(int)fVar73 / 20.0;
          }
          if (fVar63 <= fVar64) {
            fVar63 = fVar64;
          }
          *(float *)((long)unaff_x19 + 0x234) = fVar65;
          goto LAB_02495fd8;
        }
      }
      switch((int)unaff_x19[0x5b]) {
      case 1:
        lVar31 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar31 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar31 = *plVar46;
        }
        lVar29 = *(long *)(lVar31 + 0xb8);
        lVar31 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar31 + 0x132) & 1) == 0) {
          lVar31 = FUN_00d5941c(lVar31);
        }
        plVar40 = (long *)StringLiteral_302;
        lVar31 = *(long *)(*(long *)(lVar31 + 0xc0) + 8);
        if ((*(byte *)(lVar31 + 0x132) & 1) == 0) {
          lVar31 = FUN_00d5941c();
        }
        piVar23 = (int *)thunk_FUN_00d32ed4(lVar29 + 0x11f0,*(long *)(lVar31 + 0x80) + 0xa0);
        if (*piVar23 == 0) goto LAB_02495f00;
        lVar31 = *plVar46;
        if (*(int *)(lVar31 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar31 = *plVar46;
        }
        FUN_013b8de4(*(long *)(lVar31 + 0xb8) + 0x11f0,&stack0x00000880,
                     *(undefined8 *)
                      Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                    );
        memcpy(&stack0x00001360,&stack0x00000880,0x378);
        break;
      default:
        goto 
        UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited;
      case 3:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
LAB_02493ec0:
        plVar40 = (long *)StringLiteral_302;
        in_stack_00001788 = FUN_024d66ec();
        goto LAB_0249408c;
      case 5:
        if ((uVar15 != 0) && (-1 < (int)in_stack_00001788)) {
          fVar63 = *(float *)(unaff_x19 + 0x98);
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00001788 = FUN_024d66ec();
          if (fVar63 - fVar68 <= fStack00000000000000a4) {
            *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
            *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
            param_3 = *(ulong *)(*(long *)(*plVar46 + 0xb8) + 0x15a8);
            *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
            *(undefined4 *)(unaff_x19 + 0x99) = 0;
            lVar31 = NEON_rev64(param_3,4);
            unaff_x19[0x98] = lVar31;
            *(undefined4 *)(unaff_x19 + 0x9a) = 0;
            *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
            *(int *)(unaff_x19 + 0x94) = (int)unaff_x19[0x94] + 1;
            *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
            goto LAB_02492630;
          }
          goto LAB_0249408c;
        }
        in_stack_00001788 = 0xffffffff;
        *in_stack_00000148 = 0;
        in_stack_000017a8 = uVar20;
        goto LAB_024944c4;
      case 6:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        plVar40 = (long *)StringLiteral_302;
        lVar31 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar56 = FUN_02681b9c(lVar31,0,0);
        if ((uVar56 & 1) != 0) {
          plVar43 = (long *)unaff_x19[0x5c];
          uVar20 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar43 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar43 + 0x558))(plVar43,uVar20,*(undefined8 *)(*plVar43 + 0x560));
          lVar31 = unaff_x19[0x5c];
          if (lVar31 == 0) goto LAB_0249920c;
          *(int *)(lVar31 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar31,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar43 = (long *)unaff_x19[0x5c];
          if (plVar43 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        goto LAB_0249408c;
      }
LAB_02494358:
      iVar14 = FUN_024d66ec();
      goto LAB_02494364;
    }
UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited:
    plVar46 = (long *)System_Threading_Mutex_TypeInfo;
    fVar64 = 1.0 - fVar71;
    param_3 = (ulong)(uint)fVar64;
    fVar47 = ABS(fVar49) + fVar47 * fVar64 * fVar63;
    fVar63 = _DAT_0294c6e8;
    if ((uVar19 & 0x18) == 0) {
      fVar63 = 1.0;
    }
    if (fVar63 * fStack00000000000000d4 < fVar47) {
      if (((char)unaff_x19[0x5a] == '\0') || (uVar15 == *(uint *)(unaff_x19 + 0x92))) {
        if (((char)unaff_x19[0x46] == '\0') ||
           ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
LAB_02493e34:
          iVar14 = (int)unaff_x19[0x5b];
          if (iVar14 == 1) {
            lVar31 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar31 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar31 = *plVar46;
            }
            plVar40 = (long *)StringLiteral_302;
            lVar29 = *(long *)(lVar31 + 0xb8);
            lVar31 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
            if ((*(byte *)(lVar31 + 0x132) & 1) == 0) {
              lVar31 = FUN_00d5941c(lVar31);
            }
            lVar31 = *(long *)(*(long *)(lVar31 + 0xc0) + 8);
            if ((*(byte *)(lVar31 + 0x132) & 1) == 0) {
              lVar31 = FUN_00d5941c();
            }
            piVar23 = (int *)thunk_FUN_00d32ed4(lVar29 + 0x11f0,*(long *)(lVar31 + 0x80) + 0xa0);
            if (*piVar23 == 0) goto LAB_02495f00;
            lVar31 = *plVar46;
            if (*(int *)(lVar31 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar31 = *plVar46;
            }
            FUN_013b8de4(*(long *)(lVar31 + 0xb8) + 0x11f0,&stack0x00000880,
                         *(undefined8 *)
                          Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                        );
            memcpy(&stack0x00000c70,&stack0x00000880,0x378);
            goto LAB_02494358;
          }
          if (iVar14 == 6) {
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar40 = (long *)StringLiteral_302;
            in_stack_00001788 = FUN_024d66ec();
            lVar31 = unaff_x19[0x5c];
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                );
            }
            uVar56 = FUN_02681b9c(lVar31,0,0);
            if ((uVar56 & 1) != 0) {
              plVar43 = (long *)unaff_x19[0x5c];
              uVar20 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar43 == (long *)0x0) goto LAB_0249920c;
              (**(code **)(*plVar43 + 0x558))(plVar43,uVar20,*(undefined8 *)(*plVar43 + 0x560));
              lVar31 = unaff_x19[0x5c];
              if (lVar31 == 0) goto LAB_0249920c;
              *(int *)(lVar31 + 0x3f8) = (int)unaff_x19[0x7f];
              FUN_024c910c(lVar31,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
              plVar43 = (long *)unaff_x19[0x5c];
              if (plVar43 == (long *)0x0) goto LAB_0249920c;
              (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x5e) = 1;
            }
            goto LAB_02494484;
          }
          if (iVar14 == 3) {
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            goto LAB_02493ec0;
          }
          goto LAB_02494950;
        }
        fVar49 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if (fVar71 < fVar49) {
          fVar73 = fVar47 / fVar64;
          if (fVar71 <= 0.0) {
            fVar73 = fVar47;
          }
          fVar71 = fVar71 + (fVar47 - fVar63 * (fStack00000000000000d4 + DAT_02958218)) / fVar73;
          goto LAB_0249929c;
        }
        fVar71 = *(float *)((long)unaff_x19 + 0x1dc);
        param_3 = (ulong)(uint)fVar71;
        fVar49 = *(float *)(unaff_x19 + 0x49);
        if (fVar71 <= fVar49) goto LAB_02493e34;
LAB_02499210:
        fVar63 = (fVar71 - *(float *)(unaff_x19 + 0x47)) * 0.5;
        if (fVar63 <= DAT_028aa298) {
          fVar63 = DAT_028aa298;
        }
        *(float *)((long)unaff_x19 + 0x234) = fVar71;
        fVar73 = (fVar71 - fVar63) * 20.0 + 0.5;
        fVar63 = DAT_02958220;
        if (fVar73 != INFINITY) {
          fVar63 = (float)(int)fVar73 / 20.0;
        }
        if (fVar63 <= fVar49) {
          fVar63 = fVar49;
        }
LAB_02495fd8:
        *(float *)((long)unaff_x19 + 0x1dc) = fVar63;
        return;
      }
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00001788 = FUN_024d66ec();
      if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
        lVar31 = *in_stack_00000150;
        if ((lVar31 == 0) || (lVar29 = *(long *)(lVar31 + 0x38), lVar29 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar49 = *(float *)(unaff_x19 + 0x9a);
        fVar71 = 0.0;
        if ((0.0 < fVar49) && (fVar71 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
          fVar71 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
        }
        fVar71 = fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56) +
                 *(float *)(lVar29 + (int)*in_stack_00000148 * unaff_x27 + 0x154) +
                 (fVar71 - *(float *)((long)unaff_x19 + 0x4c4)) +
                 fStack0000000000000054 *
                 (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
      }
      else {
        lVar31 = unaff_x19[0x6c];
        *(undefined1 *)((long)unaff_x19 + 700) = 1;
        if (lVar31 == 0) goto LAB_0249920c;
        fVar49 = *(float *)(unaff_x19 + 0x9a);
        fVar71 = *(float *)(unaff_x19 + 0x57) +
                 fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56);
      }
      puVar10 = System_Threading_Mutex_TypeInfo;
      lVar31 = *(long *)(lVar31 + 0x38);
      if (lVar31 == 0) goto LAB_0249920c;
      uVar60 = *(uint *)((long)unaff_x19 + 0x48c);
      if ((*(uint *)(lVar31 + 0x18) <= uVar60) ||
         (uVar35 = uVar60 - 1, *(uint *)(lVar31 + 0x18) <= uVar35))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      param_3 = (ulong)(uint)(fVar71 + *(float *)(unaff_x19 + 0x96));
      fVar64 = (fVar71 + *(float *)(unaff_x19 + 0x96) + fVar49) -
               *(float *)(lVar31 + (int)uVar60 * unaff_x27 + 0x158);
      if (((in_stack_00000068._4_1_ & 1) == 0 &&
           *(short *)(lVar31 + (long)(int)uVar35 * (long)iVar18 + 0x20) == 0xad) &&
         ((fVar64 < fStack00000000000000a4 || ((int)unaff_x19[0x5b] == 0)))) {
        *in_stack_00000148 = uVar35;
LAB_024947b4:
        in_stack_000017a8 = CONCAT44(0x2d,uVar35);
        in_stack_00001788 = in_stack_00001788 - 1;
        in_stack_00000068._4_1_ = 0;
LAB_02494938:
        unaff_s12 = 1.0;
        plVar40 = (long *)StringLiteral_302;
        plVar46 = (long *)System_Threading_Mutex_TypeInfo;
        goto LAB_02492630;
      }
      if (*(short *)(lVar31 + (int)uVar60 * unaff_x27 + 0x20) == 0xad) {
        in_stack_00000068._4_1_ = 1;
        goto LAB_02494938;
      }
      if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
        fVar71 = *(float *)((long)unaff_x19 + 0x2cc);
        fVar49 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if ((fVar49 <= fVar71) || ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
          fVar71 = *(float *)((long)unaff_x19 + 0x1dc);
          param_3 = (ulong)(uint)fVar71;
          fVar49 = *(float *)(unaff_x19 + 0x49);
          if ((fVar49 < fVar71) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
          goto LAB_02499210;
          goto LAB_024946c0;
        }
LAB_024992ac:
        fVar73 = fVar47;
        if (0.0 < fVar71) {
          fVar73 = fVar47 / (1.0 - fVar71);
        }
        fVar71 = fVar71 + (fVar47 - fVar63 * (fStack00000000000000d4 + DAT_02958218)) / fVar73;
LAB_0249929c:
        if (fVar49 <= fVar71) {
          fVar71 = fVar49;
        }
        *(float *)((long)unaff_x19 + 0x2cc) = fVar71;
        return;
      }
LAB_024946c0:
      lVar31 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar31 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar31 = *(long *)puVar10;
      }
      iVar14 = *(int *)(*(long *)(lVar31 + 0xb8) + 0xe78);
      if ((((float)iVar14 != fStack0000000000000034) && (iVar14 != -1)) &&
         (((bStack000000000000005c ^ 1) & 1) == 0)) {
        if (*(int *)(lVar31 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        if ((unaff_x19[0x6c] == 0) || (lVar31 = *(long *)(unaff_x19[0x6c] + 0x38), lVar31 == 0))
        goto LAB_0249920c;
        uVar35 = *in_stack_00000148 - 1;
        if (*(uint *)(lVar31 + 0x18) <= uVar35)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fStack0000000000000034 = (float)iVar14;
        if (*(short *)(lVar31 + (long)(int)uVar35 * (long)iVar18 + 0x20) == 0xad) {
          *in_stack_00000148 = uVar35;
          goto LAB_024947b4;
        }
      }
      if (fVar64 <= fStack00000000000000a4) {
        param_3 = unaff_d13;
        FUN_024d7014(fStack0000000000000054,unaff_d13,fStack00000000000000c8,
                     *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0,
                     fStack00000000000000cc,fStack00000000000000d4,fStack0000000000000048);
        bStack000000000000005c = 1;
        in_stack_00000068._4_1_ = 0;
        fStack0000000000000058 = 1.4013e-45;
        goto LAB_02494938;
      }
      if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
        *(undefined4 *)((long)unaff_x19 + 0x2dc) = *(undefined4 *)((long)unaff_x19 + 0x48c);
      }
      plVar40 = (long *)StringLiteral_302;
      plVar46 = (long *)System_Threading_Mutex_TypeInfo;
      if ((char)unaff_x19[0x46] != '\0') {
        fVar49 = *(float *)(unaff_x19 + 0x58);
        if ((fVar49 < *(float *)((long)unaff_x19 + 0x2b4)) &&
           (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar63 = *(float *)((long)unaff_x19 + 0x2b4) +
                   ((in_stack_00000018._4_4_ - fVar64) / (float)((int)unaff_x19[0x94] + 1)) /
                   fStack0000000000000054;
          if (fVar63 <= fVar49) {
            fVar63 = fVar49;
          }
LAB_024964c8:
          *(float *)((long)unaff_x19 + 0x2b4) = fVar63;
          return;
        }
        fVar71 = *(float *)((long)unaff_x19 + 0x2cc);
        fVar49 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if ((fVar71 < fVar49) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
        goto LAB_024992ac;
        fVar71 = *(float *)((long)unaff_x19 + 0x1dc);
        param_3 = (ulong)(uint)fVar71;
        fVar49 = *(float *)(unaff_x19 + 0x49);
        if ((fVar49 < fVar71) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
        goto LAB_02499210;
      }
      switch((int)unaff_x19[0x5b]) {
      case 0:
      case 2:
      case 4:
        param_3 = unaff_d13;
        FUN_024d7014(fStack0000000000000054,unaff_d13,fStack00000000000000c8,
                     *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0,
                     fStack00000000000000cc,fStack00000000000000d4,fStack0000000000000048);
        break;
      case 1:
        lVar31 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar31 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar31 = *plVar46;
        }
        lVar29 = *(long *)(lVar31 + 0xb8);
        lVar31 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar31 + 0x132) & 1) == 0) {
          lVar31 = FUN_00d5941c(lVar31);
        }
        lVar31 = *(long *)(*(long *)(lVar31 + 0xc0) + 8);
        if ((*(byte *)(lVar31 + 0x132) & 1) == 0) {
          lVar31 = FUN_00d5941c();
        }
        piVar23 = (int *)thunk_FUN_00d32ed4(lVar29 + 0x11f0,*(long *)(lVar31 + 0x80) + 0xa0);
        if (*piVar23 == 0) {
          in_stack_00000068._4_1_ = 0;
LAB_02495f00:
          in_stack_000017a8 = DAT_02941c08;
          unaff_s12 = 1.0;
          in_stack_00000148[0] = 0;
          in_stack_00000148[1] = 0;
          in_stack_00001788 = 0xffffffff;
          goto LAB_02492630;
        }
        lVar31 = *plVar46;
        if (*(int *)(lVar31 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar31 = *plVar46;
        }
        FUN_013b8de4(*(long *)(lVar31 + 0xb8) + 0x11f0,&stack0x00000880,
                     *(undefined8 *)
                      Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                    );
        memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
        iVar14 = FUN_024d66ec();
        in_stack_00000068._4_1_ = 0;
LAB_02494364:
        unaff_s12 = 1.0;
        iVar45 = *(int *)((long)unaff_x19 + 0x48c) + -1;
        *(int *)((long)unaff_x19 + 0x48c) = iVar45;
        in_stack_000017a8 = CONCAT44(0x2026,iVar45);
        in_stack_00000140 = in_stack_00000140 + 1;
        in_stack_00001788 = iVar14 - 1;
        goto LAB_02492630;
      case 3:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        in_stack_00000068._4_1_ = 0;
LAB_0249408c:
        unaff_s12 = 1.0;
        in_stack_000017a8 = CONCAT44(3,uVar15);
        goto LAB_02492630;
      case 5:
        *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
        param_3 = unaff_d13;
        FUN_024d7014(fStack0000000000000054,unaff_d13,fStack00000000000000c8,
                     *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0,
                     fStack00000000000000cc,fStack00000000000000d4,fStack0000000000000048);
        *(undefined4 *)(unaff_x19 + 0x99) = 0;
        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
        *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
        *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
        break;
      case 6:
        lVar31 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar56 = FUN_02681b9c(lVar31,0,0);
        if ((uVar56 & 1) != 0) {
          plVar43 = (long *)unaff_x19[0x5c];
          uVar20 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar43 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar43 + 0x558))(plVar43,uVar20,*(undefined8 *)(*plVar43 + 0x560));
          lVar31 = unaff_x19[0x5c];
          if (lVar31 == 0) goto LAB_0249920c;
          *(int *)(lVar31 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar31,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar43 = (long *)unaff_x19[0x5c];
          if (plVar43 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        in_stack_00000068._4_1_ = 0;
LAB_02494484:
        unaff_s12 = 1.0;
        in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
        goto LAB_02492630;
      default:
        in_stack_00000068._4_1_ = 0;
        goto LAB_02494950;
      }
      in_stack_00000068._4_1_ = 0;
      bStack000000000000005c = 1;
      fStack0000000000000058 = 1.4013e-45;
LAB_024944c4:
      unaff_s12 = 1.0;
      plVar40 = (long *)StringLiteral_302;
      plVar46 = (long *)System_Threading_Mutex_TypeInfo;
      goto LAB_02492630;
    }
LAB_02494950:
    if (in_w11 != 0xad) {
      if (in_w11 != 9) {
        if (*(int *)((long)unaff_x19 + 0x63c) == 1) {
          (**(code **)(*unaff_x19 + 0x8c8))();
        }
        else if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
          (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000128,fVar51);
        }
        uVar15 = *in_stack_00000148;
        if (((uint)fStack0000000000000058 & 1) != 0) {
          *(uint *)(in_stack_00000070 + 0x1f0) = uVar15;
        }
        *(uint *)((long)unaff_x19 + 0x49c) = uVar15;
        *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
        if ((unaff_x19[0x6c] == 0) || (lVar31 = *(long *)(unaff_x19[0x6c] + 0x50), lVar31 == 0))
        goto LAB_0249920c;
        if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        fStack0000000000000058 = 0.0;
        *(float *)(lVar31 + 0x60) = fVar67;
        *(float *)(lVar31 + 100) = fVar70;
        goto LAB_02494abc;
      }
      lVar31 = *in_stack_00000150;
      if ((lVar31 == 0) || (lVar29 = *(long *)(lVar31 + 0x38), lVar29 == 0)) goto LAB_0249920c;
      uVar15 = *in_stack_00000148;
      if (*(uint *)(lVar29 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(undefined1 *)(lVar29 + (int)uVar15 * unaff_x27 + 0x194) = 0;
      *(uint *)((long)unaff_x19 + 0x49c) = uVar15;
      lVar29 = *(long *)(lVar31 + 0x50);
      if (lVar29 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      *(int *)(lVar29 + 0x2c) = *(int *)(lVar29 + 0x2c) + 1;
      goto LAB_024949c4;
    }
    if ((*in_stack_00000150 == 0) || (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(undefined1 *)(lVar31 + (int)*in_stack_00000148 * unaff_x27 + 0x194) = 0;
  }
  else {
    if (((in_w11 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
      fVar47 = (float)param_3;
      fVar63 = 0.0;
      if ((0.0 < fVar47) && (fVar63 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
        fVar63 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      }
      param_3 = (ulong)(uint)fStack00000000000000a4;
      if (fStack00000000000000a4 <
          (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - fVar47)) + fVar63)
      {
        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
          *(uint *)((long)unaff_x19 + 0x2dc) = uVar15;
        }
        plVar40 = (long *)StringLiteral_302;
        plVar46 = (long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        lVar31 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar56 = FUN_02681b9c(lVar31,0,0);
        if ((uVar56 & 1) != 0) {
          plVar43 = (long *)unaff_x19[0x5c];
          uVar20 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar43 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar43 + 0x558))(plVar43,uVar20,*(undefined8 *)(*plVar43 + 0x560));
          lVar31 = unaff_x19[0x5c];
          if (lVar31 == 0) goto LAB_0249920c;
          *(int *)(lVar31 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar31,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar43 = (long *)unaff_x19[0x5c];
          if (plVar43 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar43 + 0x7d8))(plVar43,0,0,*(undefined8 *)(*plVar43 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        in_stack_000017a8 = CONCAT44(3,uVar15);
        goto LAB_02492630;
      }
    }
    if ((((in_w11 - 0x2007 < 0x23) &&
         ((1L << ((ulong)(in_w11 - 0x2007) & 0x3f) & 0x600000001U) != 0)) || (in_w11 - 10 < 2)) ||
       (in_w11 == 0xa0)) {
LAB_024944e4:
      if (((in_w11 != 0xad) && (in_w11 != 0x200b)) && (in_w11 != 0x2060)) {
        lVar31 = *in_stack_00000150;
        if ((lVar31 == 0) || (lVar29 = *(long *)(lVar31 + 0x50), lVar29 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        *(int *)(lVar29 + 0x2c) = *(int *)(lVar29 + 0x2c) + 1;
        *(int *)(lVar31 + 0x20) = *(int *)(lVar31 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar56 = FUN_016fa418(in_w11,0);
      if ((uVar56 & 1) != 0) goto LAB_024944e4;
    }
    if (in_w11 == 0xa0) {
      if ((*in_stack_00000150 == 0) || (lVar31 = *(long *)(*in_stack_00000150 + 0x50), lVar31 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_024949c4:
      *(int *)(lVar31 + 0x20) = *(int *)(lVar31 + 0x20) + 1;
    }
  }
LAB_02494abc:
  if (((int)unaff_x19[0x5b] == 1) && ((in_w11 == 0x2d || (unaff_w20 != 1)))) {
    if (unaff_x19[0xca] == 0) goto LAB_0249920c;
    fVar63 = *(float *)(unaff_x19 + 0x3c);
    iVar14 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
    if (unaff_x19[0xca] == 0) goto LAB_0249920c;
    fVar67 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
    lVar31 = unaff_x19[0xc9];
    fVar47 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar47 = 1.0;
    }
    if ((lVar31 == 0) || (*(long *)(lVar31 + 0x20) == 0)) goto LAB_0249920c;
    fVar49 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar51 = *(float *)(lVar31 + 0x2c);
    fVar70 = (float)FUN_026fd668(*(long *)(lVar31 + 0x20),0);
    fVar71 = *_fStack0000000000000098;
    fVar70 = fVar49 * (fVar63 / (float)iVar14) * fVar67 * fVar47 * fVar51 * fVar70;
    fVar63 = *_fStack0000000000000088;
    if ((in_w11 == 10) && (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
      if ((*in_stack_00000150 == 0) || (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 == 0))
      goto LAB_0249920c;
      uVar15 = *(int *)((long)unaff_x19 + 0x48c) - 1;
      if (*(uint *)(lVar31 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (unaff_x19[0xca] == 0) goto LAB_0249920c;
      fVar47 = *(float *)(lVar31 + (long)(int)uVar15 * (long)iVar18 + 0x60);
      iVar14 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
      if (unaff_x19[0xca] == 0) goto LAB_0249920c;
      fVar49 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
      lVar31 = unaff_x19[0xc9];
      fVar67 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar67 = 1.0;
      }
      if ((lVar31 == 0) || (*(long *)(lVar31 + 0x20) == 0)) goto LAB_0249920c;
      fVar51 = *(float *)((long)unaff_x19 + 0x3fc);
      fVar64 = *(float *)(lVar31 + 0x2c);
      fVar70 = (float)FUN_026fd668(*(long *)(lVar31 + 0x20),0);
      if ((*in_stack_00000150 == 0) || (lVar31 = *(long *)(*in_stack_00000150 + 0x50), lVar31 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      fVar71 = *(float *)(lVar31 + 0x60);
      fVar63 = *(float *)(lVar31 + 100);
      fVar70 = fVar51 * (fVar47 / (float)iVar14) * fVar49 * fVar67 * fVar64 * fVar70;
    }
    fVar51 = *(float *)(unaff_x19 + 0x9a);
    fVar67 = *(float *)(unaff_x19 + 0x96);
    fVar64 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar47 = 0.0;
    fVar49 = 0.0;
    if ((0.0 < fVar51) && (fVar49 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar49 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar68 = *(float *)(unaff_x19 + 199);
    if ((char)unaff_x19[0x1d] == '\0') {
      if ((unaff_x19[0xc9] == 0) || (lVar31 = *(long *)(unaff_x19[0xc9] + 0x20), lVar31 == 0))
      goto LAB_0249920c;
      FUN_026fd62c(&stack0x00000880,lVar31,0);
      fVar47 = (float)FUN_026fd474(&stack0x000016e0,0);
    }
    puVar10 = System_Threading_Mutex_TypeInfo;
    fVar65 = *(float *)(unaff_x19 + 0x6b);
    fVar63 = (in_stack_00000090 - fVar71) - fVar63;
    bVar12 = true;
    if ((fVar65 <= fVar63) && (bVar12 = false, !NAN(fVar65))) {
      bVar12 = fVar65 == -1.0;
    }
    if (!bVar12) {
      fVar63 = fVar65;
    }
    fVar71 = _DAT_0294c6e8;
    if ((uVar19 & 0x18) == 0) {
      fVar71 = 1.0;
    }
    if (((fVar67 - (fVar64 - fVar51)) + fVar49 < fStack00000000000000a4) &&
       (ABS(fVar68) + fVar70 * fVar47 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
        fVar71 * fVar63)) {
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024d69d4();
      lVar31 = *(long *)(*(long *)puVar10 + 0xb8);
      memcpy(&stack0x00000508,(void *)(lVar31 + 0x788),0x378);
      FUN_013b86dc(lVar31 + 0x11f0,&stack0x00000508,
                   *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
    }
  }
  unaff_d13 = (ulong)(uint)fVar73;
  unaff_s12 = 1.0;
  unaff_x28 = &stack0x00000880;
  lVar31 = *in_stack_00000150;
  if (lVar31 == 0) goto LAB_0249920c;
  lVar29 = *(long *)(lVar31 + 0x38);
  unaff_x25 = 0x5c;
  if (lVar29 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  uVar15 = *(uint *)(unaff_x19 + 0x94);
  lVar29 = lVar29 + (int)*in_stack_00000148 * unaff_x27;
  *(uint *)(lVar29 + 100) = uVar15;
  *(int *)(lVar29 + 0x68) = (int)unaff_x19[0x95];
  if ((unaff_w20 == 0) && ((0xd < in_w11 || ((1 << (ulong)(in_w11 & 0x1f) & 0x2c00U) == 0)))) {
    lVar31 = *(long *)(lVar31 + 0x50);
    if (lVar31 == 0) goto LAB_0249920c;
LAB_02494e68:
    if (*(uint *)(lVar31 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(int *)(lVar31 + (long)(int)uVar15 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
  }
  else {
    lVar31 = *(long *)(lVar31 + 0x50);
    if (lVar31 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar31 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (*(int *)(lVar31 + (long)(int)uVar15 * 0x5c + 0x24) == 1) goto LAB_02494e68;
  }
  if (in_w11 == 9) {
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar63 = (float)FUN_026fd208(*in_stack_00000138 + 0x50,0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar67 = *(float *)(unaff_x19 + 199);
    fVar47 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000138 + 0x1b9));
    fVar73 = fVar73 * fVar63 * fVar47;
    fVar47 = fVar73 * (float)(int)(fVar67 / fVar73);
    param_3 = (ulong)(uint)fVar47;
    if (fVar47 <= fVar67) {
      fVar47 = fVar67 + fVar73;
    }
  }
  else {
    if (*(float *)(unaff_x19 + 0x55) == 0.0) {
      if ((char)unaff_x19[0x1d] != '\0') {
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar47 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                 (*(float *)((long)unaff_x19 + 0x2a4) +
                 fVar73 * fVar48 +
                 fStack00000000000000c8 *
                 (in_stack_000000c0 +
                 fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
        param_3 = (ulong)(uint)fVar47;
        fVar47 = *(float *)(unaff_x19 + 199) - fVar47;
        *(float *)(unaff_x19 + 199) = fVar47;
        if ((unaff_w29 == 0) && (in_w11 != 0x200b)) goto LAB_0249505c;
        fVar63 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
        param_3 = (ulong)(uint)fVar63;
        fVar47 = fVar47 - fVar63;
        goto LAB_02495058;
      }
      fVar67 = unaff_s12;
      if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
        fVar67 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
      }
      fVar47 = *(float *)(unaff_x19 + 199);
      fVar70 = (float)FUN_026fd474(&stack0x00001770,0);
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar63 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
      fVar47 = fVar47 + fVar63 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                 fVar73 * (fVar48 + fVar67 * fVar70) +
                                 fStack00000000000000c8 *
                                 (in_stack_000000c0 +
                                 fStack00000000000000cc + *(float *)(unaff_x19[0x1f] + 0x1ac)));
      *(float *)(unaff_x19 + 199) = fVar47;
    }
    else {
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar63 = *(float *)(unaff_x19 + 199);
      fVar47 = fVar63 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                        (*(float *)((long)unaff_x19 + 0x2a4) +
                        (*(float *)(unaff_x19 + 0x55) - fVar50) +
                        fStack00000000000000c8 *
                        (fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
      *(float *)(unaff_x19 + 199) = fVar47;
    }
    if ((unaff_w29 == 0) && (param_3 = (ulong)(uint)fVar63, in_w11 != 0x200b)) goto LAB_0249505c;
    fVar63 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
    param_3 = (ulong)(uint)fVar63;
    fVar47 = fVar47 + fVar63;
  }
LAB_02495058:
  *(float *)(unaff_x19 + 199) = fVar47;
LAB_0249505c:
  param_1 = *in_stack_00000150;
  if ((param_1 == 0) || (in_x9 = *(long *)(param_1 + 0x38), in_x9 == 0)) goto LAB_0249920c;
  uVar15 = *in_stack_00000148;
  in_x12 = (long)(int)uVar15;
  in_x10 = *(undefined8 *)(in_x9 + 0x18);
  if ((uint)in_x10 <= uVar15)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(float *)(in_x9 + in_x12 * unaff_x27 + 0x144) = fVar47;
  in_stack_000017bc = in_w11;
  if ((int)in_w11 < 0xd) {
    plVar40 = in_stack_00000150;
    if ((1 < in_w11 - 10) && (in_w11 != 3)) goto code_r0x02495710;
  }
  else {
    plVar40 = in_stack_00000150;
    if (1 < in_w11 - 0x2028) {
      if (in_w11 != 0xd) goto code_r0x02495710;
      param_3 = 0;
      *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
      if ((float)uVar15 != in_stack_00000078._4_4_) goto LAB_0249572c;
    }
  }
LAB_024950bc:
  if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
    fVar63 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (((fStack000000000000004c < ABS(fVar63)) && (*(char *)((long)unaff_x19 + 700) == '\0')) &&
       (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
      FUN_024d6ca8(fVar63);
      *(float *)((long)unaff_x19 + 0x4bc) = *(float *)((long)unaff_x19 + 0x4bc) - fVar63;
      *(float *)(unaff_x19 + 0x9a) = fVar63 + *(float *)(unaff_x19 + 0x9a);
      puVar10 = System_Threading_Mutex_TypeInfo;
                    /* try { // try from 02495144 to 0259514f has its CatchHandler @ 02495408 */
      lVar31 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar31 + 0xe0) == 0) {
                    /* try { // try from 02495150 to 025951bb has its CatchHandler @ 0249480c */
        thunk_FUN_00d32864();
        lVar31 = *(long *)puVar10;
      }
      lVar29 = *(long *)(lVar31 + 0xb8);
      if (*(int *)(lVar29 + 0x7ac) == (int)unaff_x19[0x94]) {
        if (*(int *)(lVar31 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar29 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        FUN_013b8de4(lVar29 + 0x11f0,&stack0x00000880,
                     *(undefined8 *)
                      Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                    );
        lVar31 = *(long *)System_Threading_Mutex_TypeInfo;
                    /* try { // try from 024951bc to 025951c3 has its CatchHandler @ 02495438 */
        memcpy((void *)(*(long *)(lVar31 + 0xb8) + 0x788),&stack0x00000880,0x378);
        lVar31 = *(long *)(lVar31 + 0xb8);
                    /* try { // try from 024951d4 to 025951db has its CatchHandler @ 02495420 */
        *(float *)(lVar31 + 0x7bc) = fVar63 + *(float *)(lVar31 + 0x7bc);
        *(float *)(lVar31 + 0x800) = fVar63 + *(float *)(lVar31 + 0x800);
        memcpy(&stack0x00000190,(void *)(lVar31 + 0x788),0x378);
        FUN_013b86dc(lVar31 + 0x11f0,&stack0x00000190,
                     *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
      }
    }
  }
  fVar47 = *(float *)(unaff_x19 + 0x9a);
                    /* try { // try from 02495214 to 0259521f has its CatchHandler @ 02495424 */
  *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
  fVar73 = *(float *)((long)unaff_x19 + 0x4c4) - fVar47;
  fVar63 = *(float *)((long)unaff_x19 + 0x4bc);
  if (fVar73 <= *(float *)((long)unaff_x19 + 0x4bc)) {
    fVar63 = fVar73;
  }
  *(float *)((long)unaff_x19 + 0x4bc) = fVar63;
  fVar67 = *(float *)(unaff_x19 + 0x98);
  if (unaff_x28[0xf34] == '\0') {
    in_stack_000017b8 = fVar63;
  }
  if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
     (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
      ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
    unaff_x28[0xf34] = 1;
  }
  lVar31 = *plVar40;
  if ((lVar31 == 0) || (lVar29 = *(long *)(lVar31 + 0x50), lVar29 == 0)) goto LAB_0249920c;
  uVar15 = *(uint *)(unaff_x19 + 0x94);
  if (*(uint *)(lVar29 + 0x18) <= uVar15)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar42 = lVar29 + (int)uVar15 * unaff_x25;
  *(int *)(lVar42 + 0x34) = (int)unaff_x19[0x92];
  iVar14 = (int)unaff_x19[0x92];
  if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
    iVar14 = *(int *)((long)unaff_x19 + 0x494);
  }
  *(int *)((long)unaff_x19 + 0x494) = iVar14;
  *(int *)(lVar42 + 0x38) = iVar14;
  *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
  *(undefined4 *)(lVar42 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
  iVar14 = *(int *)((long)unaff_x19 + 0x494);
  if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
    iVar14 = *(int *)((long)unaff_x19 + 0x49c);
  }
  *(int *)((long)unaff_x19 + 0x49c) = iVar14;
                    /* try { // try from 024952d8 to 025952e3 has its CatchHandler @ 02495414 */
  *(int *)(lVar42 + 0x40) = iVar14;
                    /* try { // try from 024952e4 to 02595317 has its CatchHandler @ 0249480c */
  *(int *)(lVar42 + 0x24) = (*(int *)(lVar42 + 0x3c) - *(int *)(lVar42 + 0x34)) + 1;
  *(undefined4 *)(lVar42 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
  lVar31 = *(long *)(lVar31 + 0x38);
  if (lVar31 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar31 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  uVar74 = *(undefined4 *)(lVar31 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x27 + 0x11c);
                    /* try { // try from 02495318 to 0259531b has its CatchHandler @ 02495404 */
  lVar29 = lVar29 + (int)uVar15 * unaff_x25;
                    /* try { // try from 02495320 to 02595323 has its CatchHandler @ 02495400 */
  *(float *)(lVar29 + 0x70) = fVar73;
  *(undefined4 *)(lVar29 + 0x6c) = uVar74;
                    /* try { // try from 02495328 to 0259532b has its CatchHandler @ 024953fc */
  lVar31 = *plVar40;
                    /* try { // try from 02495330 to 02595333 has its CatchHandler @ 024953f8 */
  if ((lVar31 == 0) || (lVar29 = *(long *)(lVar31 + 0x50), lVar29 == 0)) goto LAB_0249920c;
                    /* try { // try from 02495338 to 0259533b has its CatchHandler @ 024953f4 */
                    /* try { // try from 02495340 to 02595343 has its CatchHandler @ 024953f0 */
  if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    /* try { // try from 02495348 to 0259534b has its CatchHandler @ 024953ec */
  lVar31 = *(long *)(lVar31 + 0x38);
  if (lVar31 == 0) goto LAB_0249920c;
                    /* try { // try from 02495350 to 02595353 has its CatchHandler @ 024953e8 */
                    /* try { // try from 02495358 to 0259535b has its CatchHandler @ 024953e4 */
  if (*(uint *)(lVar31 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    /* try { // try from 02495360 to 02595363 has its CatchHandler @ 024953e0 */
  uVar74 = *(undefined4 *)(lVar31 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x27 + 0x128);
                    /* try { // try from 02495368 to 0259536b has its CatchHandler @ 024953dc */
  fVar67 = fVar67 - fVar47;
  lVar29 = lVar29 + (int)*(uint *)(unaff_x19 + 0x94) * unaff_x25;
                    /* try { // try from 02495370 to 02595373 has its CatchHandler @ 024953d8 */
  *(float *)(lVar29 + 0x78) = fVar67;
  *(undefined4 *)(lVar29 + 0x74) = uVar74;
                    /* try { // try from 02495378 to 0259537b has its CatchHandler @ 024953d4 */
  param_1 = *plVar40;
                    /* try { // try from 02495380 to 02595383 has its CatchHandler @ 024953d0 */
  if ((param_1 == 0) || (lVar31 = *(long *)(param_1 + 0x50), lVar31 == 0)) goto LAB_0249920c;
                    /* try { // try from 02495388 to 0259538b has its CatchHandler @ 024953cc */
  lVar29 = (long)(int)*(uint *)(unaff_x19 + 0x94);
                    /* try { // try from 02495390 to 02595393 has its CatchHandler @ 024953c8 */
  if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    /* try { // try from 02495398 to 0259539b has its CatchHandler @ 024953c4 */
  lVar42 = lVar31 + lVar29 * unaff_x25;
                    /* try { // try from 024953a0 to 025953a3 has its CatchHandler @ 024953c0 */
                    /* try { // try from 024953a8 to 025953ab has its CatchHandler @ 024953bc */
                    /* try { // try from 024953b0 to 025953b3 has its CatchHandler @ 024953b8 */
  *(float *)(lVar42 + 0x44) = *(float *)(lVar42 + 0x74) - (float)unaff_d13 * in_stack_00000128;
                    /* try { // try from 024953b4 to 02595457 has its CatchHandler @ 0249480c */
                    /* catch() { ... } // from try @ 024953b0 with catch @ 024953b8 */
                    /* catch() { ... } // from try @ 024953a8 with catch @ 024953bc */
  *(float *)(lVar42 + 0x5c) = fStack00000000000000d4;
                    /* catch() { ... } // from try @ 024953a0 with catch @ 024953c0 */
  if (*(int *)(lVar42 + 0x24) == 1) {
                    /* catch() { ... } // from try @ 02495398 with catch @ 024953c4 */
                    /* catch() { ... } // from try @ 02495390 with catch @ 024953c8 */
                    /* catch() { ... } // from try @ 02495388 with catch @ 024953cc */
                    /* catch() { ... } // from try @ 02495380 with catch @ 024953d0 */
    *(int *)(lVar31 + lVar29 * unaff_x25 + 0x68) = (int)unaff_x19[0x4e];
  }
                    /* catch() { ... } // from try @ 02495378 with catch @ 024953d4 */
                    /* catch() { ... } // from try @ 02495370 with catch @ 024953d8 */
                    /* catch() { ... } // from try @ 02495368 with catch @ 024953dc */
                    /* catch() { ... } // from try @ 02495360 with catch @ 024953e0 */
                    /* catch() { ... } // from try @ 02495358 with catch @ 024953e4 */
  if ((*in_stack_00000138 == 0) || (in_x9 = *(long *)(param_1 + 0x38), in_x9 == 0))
  goto LAB_0249920c;
                    /* catch() { ... } // from try @ 02495350 with catch @ 024953e8 */
  lVar42 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
  in_x10 = *(undefined8 *)(in_x9 + 0x18);
  if ((uint)in_x10 <= *(uint *)((long)unaff_x19 + 0x49c))
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  if ((*(char *)(in_x9 + lVar42 * unaff_x27 + 0x194) == '\0') &&
     (lVar42 = (long)(int)*(uint *)(unaff_x19 + 0x93), (uint)in_x10 <= *(uint *)(unaff_x19 + 0x93)))
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  fVar47 = (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
           (fStack00000000000000c8 *
            (in_stack_000000c0 + fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)) -
           *(float *)((long)unaff_x19 + 0x2a4));
  fVar63 = -fVar47;
  if ((char)unaff_x19[0x1d] != '\0') {
    fVar63 = fVar47;
  }
  lVar31 = lVar31 + lVar29 * unaff_x25;
  *(float *)(lVar31 + 0x58) = *(float *)(in_x9 + lVar42 * unaff_x27 + 0x144) + fVar63;
  fVar63 = *(float *)(unaff_x19 + 0x9a);
  *(float *)(lVar31 + 0x48) = fStack0000000000000050 + (fVar67 - fVar73);
  *(float *)(lVar31 + 0x4c) = fVar67;
  param_3 = (ulong)(uint)(0.0 - fVar63);
  *(float *)(lVar31 + 0x50) = 0.0 - fVar63;
  *(float *)(lVar31 + 0x54) = fVar73;
  plVar46 = (long *)System_Threading_Mutex_TypeInfo;
  in_w11 = in_stack_000017bc;
  if ((int)in_stack_000017bc < 0x2d) {
    if (1 < in_stack_000017bc - 10) goto code_r0x0249549c;
  }
  else if ((1 < in_stack_000017bc - 0x2028) && (in_stack_000017bc != 0x2d)) goto LAB_0249572c;
  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar40 = (long *)StringLiteral_302;
  FUN_024d69d4();
  lVar31 = unaff_x19[0x6c];
  *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
  iVar14 = (int)unaff_x19[0x94] + 1;
  *(int *)(unaff_x19 + 0x94) = iVar14;
  *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
  if ((lVar31 == 0) || (*(long *)(lVar31 + 0x50) == 0)) goto LAB_0249920c;
  if (*(int *)(*(long *)(lVar31 + 0x50) + 0x18) <= iVar14) {
    FUN_024d6e60();
    lVar31 = unaff_x19[0x6c];
    if (lVar31 == 0) goto LAB_0249920c;
  }
  lVar31 = *(long *)(lVar31 + 0x38);
  if (lVar31 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  fVar63 = *(float *)(lVar31 + (int)*in_stack_00000148 * unaff_x27 + 0x154);
  if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
    fVar73 = 0.0;
    if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
      fVar73 = *(float *)((long)unaff_x19 + 0x2c4);
    }
    uVar25 = 0;
    fVar73 = *(float *)(unaff_x19 + 0x9a) +
             fVar63 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
             fStack0000000000000054 * (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4))
             + fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar73);
  }
  else {
    if ((in_stack_000017bc == 0x2029) || (fVar73 = 0.0, in_stack_000017bc == 10)) {
      fVar73 = *(float *)((long)unaff_x19 + 0x2c4);
    }
    uVar25 = 1;
    fVar73 = *(float *)(unaff_x19 + 0x9a) +
             *(float *)(unaff_x19 + 0x57) +
             fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar73);
  }
  *(float *)(unaff_x19 + 0x9a) = fVar73;
  *(undefined1 *)((long)unaff_x19 + 700) = uVar25;
  lVar31 = *plVar46;
  if (*(int *)(lVar31 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar31 = *plVar46;
  }
  uVar20 = *(undefined8 *)(*(long *)(lVar31 + 0xb8) + 0x15a8);
  *(float *)(unaff_x19 + 0x99) = fVar63;
  param_3 = NEON_rev64(uVar20,4);
  unaff_x19[0x98] = param_3;
  *(float *)(unaff_x19 + 199) =
       *(float *)(unaff_x19 + 0x80) + 0.0 + *(float *)((long)unaff_x19 + 0x404);
  FUN_024d69d4();
  FUN_024d69d4();
  *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
  fStack0000000000000058 = 1.4013e-45;
  bStack000000000000005c = 1;
  goto LAB_02492630;
code_r0x0249549c:
  if (in_stack_000017bc == 3) {
    if (unaff_x19[0x8e] == 0) goto LAB_0249920c;
    in_stack_00001788 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
    in_w11 = 3;
  }
  goto LAB_0249572c;
LAB_02496a50:
  do {
    uVar15 = uVar35 - 1;
    if (*(uint *)(lVar31 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*in_stack_00000150 == 0) || (lVar42 = *(long *)(*in_stack_00000150 + 0x50), lVar42 == 0))
    goto LAB_0249920c;
    lVar44 = (long)(int)uVar15;
    lVar22 = lVar31 + lVar44 * 0x178;
    uVar2 = *(uint *)(lVar22 + 100);
    if (*(uint *)(lVar42 + 0x18) <= uVar2)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar36 = *(long *)(lVar22 + 0x38);
    uVar4 = *(ushort *)(lVar22 + 0x20);
    lVar34 = (long)(int)uVar2;
    lVar42 = lVar42 + lVar34 * 0x5c;
    uVar6 = *(uint *)(lVar42 + 0x3c);
    iVar16 = *(int *)(lVar42 + 0x28);
    iVar17 = *(int *)(lVar42 + 0x2c);
    uVar7 = *(uint *)(lVar42 + 0x40);
    lVar22 = (long)(int)uVar7;
    uVar41 = *(uint *)(lVar42 + 0x68);
    fVar65 = *(float *)(lVar42 + 0x5c);
    fVar53 = *(float *)(lVar42 + 0x60);
    iVar3 = *(int *)(lVar42 + 0x20);
    fVar50 = *(float *)(lVar42 + 0x4c);
    fVar51 = *(float *)(lVar42 + 0x54);
    fVar70 = *(float *)(lVar42 + 0x58);
    fVar68 = *(float *)(lVar42 + 0x6c);
    fVar64 = *(float *)(lVar42 + 0x70);
    fVar49 = *(float *)(lVar42 + 0x74);
    fVar71 = *(float *)(lVar42 + 0x78);
    fVar62 = fVar65 + fVar53;
    uVar39 = (uint)uVar4;
    if ((int)uVar41 < 9) {
      switch(uVar41) {
      case 1:
        if ((char)unaff_x19[0x1d] == '\0') {
          fStack00000000000000c8 = fVar53 + 0.0;
        }
        else {
          fStack00000000000000c8 = 0.0 - fVar70;
        }
        break;
      case 2:
LAB_02496c1c:
        fStack00000000000000c8 = (fVar53 + fVar65 * 0.5) - fVar70 * 0.5;
        break;
      default:
        goto switchD_02496b58_caseD_3;
      case 4:
        fStack00000000000000c8 = fVar62 - fVar70;
        if ((char)unaff_x19[0x1d] != '\0') {
          fStack00000000000000c8 = fVar62;
        }
        break;
      case 8:
        goto switchD_02496b58_caseD_8;
      }
LAB_02496c90:
      _in_stack_000000c0 = 0;
    }
    else if (uVar41 == 0x10) {
switchD_02496b58_caseD_8:
      if (uVar4 < 0xad) {
        if ((uVar39 != 3) && (uVar39 != 10)) goto LAB_02496bac;
      }
      else if ((uVar39 != 0xad) && ((uVar39 != 0x200b && (uVar39 != 0x2060)))) {
LAB_02496bac:
        if (*(uint *)(lVar31 + 0x18) <= uVar6)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar5 = *(undefined2 *)(lVar31 + (long)(int)uVar6 * 0x178 + 0x20);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar56 = FUN_016f9f84(uVar5,0);
        if ((uVar56 & 1) == 0) {
          bVar1 = (int)uVar2 < (int)unaff_x19[0x94];
        }
        else {
          bVar1 = false;
        }
        if ((fVar70 <= fVar65) && (!bVar1 && (uVar41 >> 4 & 1) == 0)) {
          fStack00000000000000c8 = fVar53;
          if ((char)unaff_x19[0x1d] != '\0') {
            fStack00000000000000c8 = fVar62;
          }
          goto LAB_02496c90;
        }
        if (((uVar35 == 1) || (uVar2 != uVar60)) || (uVar15 == *(uint *)((long)unaff_x19 + 0x31c)))
        {
          fStack00000000000000c8 = fVar53;
          if ((char)unaff_x19[0x1d] != '\0') {
            fStack00000000000000c8 = fVar62;
          }
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          fStack0000000000000020 = (float)FUN_016fa418(uVar4,0);
          _in_stack_000000c0 = 0;
        }
        else {
          cVar26 = (char)unaff_x19[0x1d];
          fVar62 = -fVar70;
          if (cVar26 != '\0') {
            fVar62 = fVar70;
          }
          if (*(uint *)(lVar31 + 0x18) <= uVar6)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar70 = 1.0;
          iVar17 = (int)*(char *)(lVar31 + (long)(int)uVar6 * 0x178 + 0x194) +
                   (-iVar3 - ((uint)fStack0000000000000020 & 1)) + iVar17 + -1;
          if (0 < iVar17) {
            fVar70 = *(float *)((long)unaff_x19 + 0x2d4);
          }
          if (iVar17 < 1) {
            iVar17 = 1;
          }
          if (uVar39 == 9) {
LAB_02498bb8:
            fVar70 = 1.0 - fVar70;
          }
          else {
            if (uVar39 != 0xa0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar56 = FUN_016fa418(uVar4,0);
              cVar26 = (char)unaff_x19[0x1d];
              if ((uVar56 & 1) != 0) goto LAB_02498bb8;
            }
            iVar17 = (iVar3 - (~(uint)fStack0000000000000020 & 1)) + iVar16;
          }
          fVar70 = ((fVar65 + fVar62) * fVar70) / (float)iVar17;
          if (cVar26 == '\0') {
            fStack00000000000000c8 = fStack00000000000000c8 + fVar70;
            _in_stack_000000c0 =
                 CONCAT44((float)((ulong)_in_stack_000000c0 >> 0x20) + 0.0,
                          (float)_in_stack_000000c0 + 0.0);
          }
          else {
            fStack00000000000000c8 = fStack00000000000000c8 - fVar70;
          }
        }
      }
    }
    else if (uVar41 == 0x20) {
      fVar70 = fVar68 + fVar49;
      goto LAB_02496c1c;
    }
switchD_02496b58_caseD_3:
    uVar41 = (uint)*(undefined8 *)(lVar31 + 0x18);
    if (uVar41 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar42 = lVar31 + lVar44 * 0x178;
    fVar62 = fStack0000000000000098 + fStack00000000000000c8;
    fVar70 = (float)_in_stack_00000090 + (float)_in_stack_000000c0;
    fVar65 = (float)((ulong)_in_stack_00000090 >> 0x20) + (float)((ulong)_in_stack_000000c0 >> 0x20)
    ;
    if (*(char *)(lVar42 + 0x194) == '\0') goto LAB_02497688;
    iVar16 = *(int *)(lVar31 + lVar44 * 0x178 + 0x2c);
    if (iVar16 != 0) goto LAB_02497374;
    fVar67 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar2,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
    case 0:
      lVar28 = lVar31 + lVar44 * 0x178;
      *(undefined4 *)(lVar28 + 0x84) = 0;
      *(undefined4 *)(lVar28 + 0xac) = 0;
      *(undefined4 *)(lVar28 + 0xd4) = 0x3f800000;
      fVar67 = 1.0;
      break;
    case 1:
      fVar71 = *(float *)(lVar31 + lVar44 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
        lVar28 = lVar31 + lVar44 * 0x178;
        fVar49 = (fStack00000000000000c8 + fVar71) - *(float *)(in_stack_00000070 + 0x230);
        fVar71 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
        goto LAB_02496df8;
      }
      lVar28 = lVar31 + lVar44 * 0x178;
      fVar49 = fVar49 - fVar68;
      *(float *)(lVar28 + 0x84) = fVar67 + (fVar71 - fVar68) / fVar49;
      *(float *)(lVar28 + 0xac) = fVar67 + (*(float *)(lVar28 + 0x98) - fVar68) / fVar49;
      *(float *)(lVar28 + 0xd4) = fVar67 + (*(float *)(lVar28 + 0xc0) - fVar68) / fVar49;
      fVar67 = fVar67 + (*(float *)(lVar28 + 0xe8) - fVar68) / fVar49;
      break;
    case 2:
      lVar28 = lVar31 + lVar44 * 0x178;
      fVar71 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      fVar49 = (fStack00000000000000c8 + *(float *)(lVar28 + 0x70)) -
               *(float *)(in_stack_00000070 + 0x230);
LAB_02496df8:
      *(float *)(lVar28 + 0x84) = fVar67 + fVar49 / fVar71;
      *(float *)(lVar28 + 0xac) =
           fVar67 + ((fStack00000000000000c8 + *(float *)(lVar28 + 0x98)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      *(float *)(lVar28 + 0xd4) =
           fVar67 + ((fStack00000000000000c8 + *(float *)(lVar28 + 0xc0)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      fVar67 = fVar67 + ((fStack00000000000000c8 + *(float *)(lVar28 + 0xe8)) -
                        *(float *)(in_stack_00000070 + 0x230)) /
                        (*(float *)(in_stack_00000070 + 0x238) -
                        *(float *)(in_stack_00000070 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x61]) {
      case 0:
        lVar28 = lVar31 + lVar44 * 0x178;
        *(undefined4 *)(lVar28 + 0x88) = 0;
        *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar28 + 0xd8) = 0;
        *(undefined4 *)(lVar28 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar28 = lVar31 + lVar44 * 0x178;
        fVar71 = fVar71 - fVar64;
        fVar49 = fVar67 + (*(float *)(lVar28 + 0x74) - fVar64) / fVar71;
        fVar71 = fVar67 + (*(float *)(lVar28 + 0x9c) - fVar64) / fVar71;
        *(float *)(lVar28 + 0x88) = fVar49;
        *(float *)(lVar28 + 0xb0) = fVar71;
        *(float *)(lVar28 + 0xd8) = fVar49;
        *(float *)(lVar28 + 0x100) = fVar71;
        break;
      case 2:
        lVar28 = lVar31 + lVar44 * 0x178;
        fVar49 = fVar67 + (*(float *)(lVar28 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                          (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
        *(float *)(lVar28 + 0x88) = fVar49;
        fVar71 = *(float *)(unaff_x19 + 0x9b);
        fVar64 = *(float *)(unaff_x19 + 0x9c);
        *(float *)(lVar28 + 0xd8) = fVar49;
        fVar49 = fVar67 + (*(float *)(lVar28 + 0x9c) - fVar71) / (fVar64 - fVar71);
        *(float *)(lVar28 + 0xb0) = fVar49;
        *(float *)(lVar28 + 0x100) = fVar49;
        break;
      case 3:
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
        uVar41 = (uint)*(undefined8 *)(lVar31 + 0x18);
      }
      if (uVar41 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar31 + lVar44 * 0x178;
      fVar49 = *(float *)(lVar28 + 0x15c);
      fVar71 = (1.0 - (*(float *)(lVar28 + 0x88) + *(float *)(lVar28 + 0xb0)) * fVar49) * 0.5;
      fVar64 = fVar67 + *(float *)(lVar28 + 0x88) * fVar49 + fVar71;
      fVar67 = fVar67 + fVar71 + *(float *)(lVar28 + 0xb0) * fVar49;
      *(float *)(lVar28 + 0x84) = fVar64;
      *(float *)(lVar28 + 0xac) = fVar64;
      *(float *)(lVar28 + 0xd4) = fVar67;
      break;
    default:
      goto switchD_02496d4c_default;
    }
    *(float *)(lVar31 + lVar44 * 0x178 + 0xfc) = fVar67;
switchD_02496d4c_default:
    switch((int)unaff_x19[0x61]) {
    case 0:
      if (uVar41 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar31 + lVar44 * 0x178;
      *(undefined4 *)(lVar28 + 0x88) = 0;
      *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0x100) = 0;
      break;
    case 1:
      if (uVar15 < uVar41) {
        lVar28 = lVar31 + lVar44 * 0x178;
        fVar50 = fVar50 - fVar51;
        fVar67 = (*(float *)(lVar28 + 0x74) - fVar51) / fVar50;
        fVar50 = (*(float *)(lVar28 + 0x9c) - fVar51) / fVar50;
        *(float *)(lVar28 + 0x88) = fVar67;
        goto LAB_02497174;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    case 2:
      if (uVar41 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar31 + lVar44 * 0x178;
      fVar67 = (*(float *)(lVar28 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar28 + 0x88) = fVar67;
      fVar50 = (*(float *)(lVar28 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_02497174:
      *(float *)(lVar28 + 0xb0) = fVar50;
      *(float *)(lVar28 + 0xd8) = fVar50;
      *(float *)(lVar28 + 0x100) = fVar67;
      break;
    case 3:
      if (uVar41 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar31 + lVar44 * 0x178;
      fVar50 = *(float *)(lVar28 + 0x15c);
      fVar49 = (1.0 - (*(float *)(lVar28 + 0x84) + *(float *)(lVar28 + 0xd4)) / fVar50) * 0.5;
      fVar67 = *(float *)(lVar28 + 0x84) / fVar50 + fVar49;
      fVar49 = fVar49 + *(float *)(lVar28 + 0xd4) / fVar50;
      *(float *)(lVar28 + 0x88) = fVar67;
      *(float *)(lVar28 + 0xb0) = fVar49;
      *(float *)(lVar28 + 0x100) = fVar67;
      *(float *)(lVar28 + 0xd8) = fVar49;
    }
    if (uVar41 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar28 = lVar31 + lVar44 * 0x178;
    fVar67 = *(float *)(lVar28 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
    if ((*(char *)(lVar28 + 0x5c) == '\0') && ((*(byte *)(lVar31 + lVar44 * 0x178 + 400) & 1) != 0))
    {
      fVar67 = -fVar67;
    }
    fVar49 = fVar63;
    if (((iVar14 == 2) || (fVar49 = fVar48, iVar14 == 1)) || (fVar49 = fVar63 / fVar73, iVar14 == 0)
       ) {
      fVar67 = fVar49 * fVar67;
    }
    lVar28 = lVar31 + lVar44 * 0x178;
    fVar50 = *(float *)(lVar28 + 0x88);
    fVar71 = *(float *)(lVar28 + 0x84);
    fVar49 = -2.1474836e+09;
    if (fVar71 != INFINITY) {
      fVar49 = (float)(int)fVar71;
    }
    fVar64 = *(float *)(lVar28 + 0xd4);
    fVar68 = *(float *)(lVar28 + 0xd8);
    fVar51 = -2.1474836e+09;
    if (fVar50 != INFINITY) {
      fVar51 = (float)(int)fVar50;
    }
    uVar74 = FUN_024e0374(fVar71 - fVar49,fVar50 - fVar51);
    *(undefined4 *)(lVar28 + 0x84) = uVar74;
    if (*(uint *)(lVar31 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar68 = fVar68 - fVar51;
    *(float *)(lVar28 + 0x88) = fVar67;
    uVar74 = FUN_024e0374(fVar71 - fVar49,fVar68);
    *(undefined4 *)(lVar31 + lVar44 * 0x178 + 0xac) = uVar74;
    if (*(uint *)(lVar31 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar64 = fVar64 - fVar49;
    *(float *)(lVar31 + lVar44 * 0x178 + 0xb0) = fVar67;
    fVar49 = (float)FUN_024e0374(fVar64,fVar68);
    *(float *)(lVar28 + 0xd4) = fVar49;
    if (*(uint *)(lVar31 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar28 + 0xd8) = fVar67;
    uVar74 = FUN_024e0374(fVar64,fVar50 - fVar51);
    *(undefined4 *)(lVar31 + lVar44 * 0x178 + 0xfc) = uVar74;
    uVar41 = (uint)*(undefined8 *)(lVar31 + 0x18);
    if (uVar41 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar31 + lVar44 * 0x178 + 0x100) = fVar67;
LAB_02497374:
    if (((int)unaff_x19[100] <= (int)uVar15) ||
       (*(int *)((long)unaff_x19 + 0x324) <= iStack00000000000000ac)) goto LAB_02497490;
    if (((int)uVar2 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar41 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar42 = lVar31 + lVar44 * 0x178;
      *(ulong *)(lVar42 + 0x70) =
           CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar42 + 0x70) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar42 + 0x70));
      *(float *)(lVar42 + 0x78) = fVar65 + *(float *)(lVar42 + 0x78);
      if (*(uint *)(lVar31 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar42 = lVar31 + lVar44 * 0x178;
      *(ulong *)(lVar42 + 0x98) =
           CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar42 + 0x98) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar42 + 0x98));
      *(float *)(lVar42 + 0xa0) = fVar65 + *(float *)(lVar42 + 0xa0);
      if (*(uint *)(lVar31 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar42 = lVar31 + lVar44 * 0x178;
      *(ulong *)(lVar42 + 0xc0) =
           CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar42 + 0xc0) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar42 + 0xc0));
      *(float *)(lVar42 + 200) = fVar65 + *(float *)(lVar42 + 200);
      if (*(uint *)(lVar31 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar42 = lVar31 + lVar44 * 0x178;
      *(ulong *)(lVar42 + 0xe8) =
           CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar42 + 0xe8) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar42 + 0xe8));
      *(float *)(lVar42 + 0xf0) = fVar65 + *(float *)(lVar42 + 0xf0);
      if (iVar16 == 0) goto LAB_02497668;
LAB_02497598:
      if (iVar16 == 1) {
        pcVar32 = *(code **)(*unaff_x19 + 0x8f8);
        goto LAB_02497674;
      }
    }
    else {
      if (((int)uVar2 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
        if (uVar41 <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(uint *)(lVar31 + lVar44 * 0x178 + 0x68) != uStack000000000000002c) goto LAB_02497490;
        lVar42 = lVar31 + lVar44 * 0x178;
        *(ulong *)(lVar42 + 0x70) =
             CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar42 + 0x70) >> 0x20),
                      fVar62 + (float)*(undefined8 *)(lVar42 + 0x70));
        *(float *)(lVar42 + 0x78) = fVar65 + *(float *)(lVar42 + 0x78);
        if (*(uint *)(lVar31 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar42 = lVar31 + lVar44 * 0x178;
        *(ulong *)(lVar42 + 0x98) =
             CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar42 + 0x98) >> 0x20),
                      fVar62 + (float)*(undefined8 *)(lVar42 + 0x98));
        *(float *)(lVar42 + 0xa0) = fVar65 + *(float *)(lVar42 + 0xa0);
        if (*(uint *)(lVar31 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar42 = lVar31 + lVar44 * 0x178;
        *(ulong *)(lVar42 + 0xc0) =
             CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar42 + 0xc0) >> 0x20),
                      fVar62 + (float)*(undefined8 *)(lVar42 + 0xc0));
        *(float *)(lVar42 + 200) = fVar65 + *(float *)(lVar42 + 200);
        if (*(uint *)(lVar31 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar42 = lVar31 + lVar44 * 0x178;
        *(ulong *)(lVar42 + 0xe8) =
             CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar42 + 0xe8) >> 0x20),
                      fVar62 + (float)*(undefined8 *)(lVar42 + 0xe8));
        *(float *)(lVar42 + 0xf0) = fVar65 + *(float *)(lVar42 + 0xf0);
      }
      else {
LAB_02497490:
        if (uVar41 <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        puVar10 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        lVar28 = lVar31 + lVar44 * 0x178;
        uVar74 = *(undefined4 *)
                  (*(undefined8 **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8) + 1);
        *(undefined8 *)(lVar28 + 0x70) =
             **(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        *(undefined4 *)(lVar28 + 0x78) = uVar74;
        if (*(uint *)(lVar31 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar31 + lVar44 * 0x178;
        uVar74 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar28 + 0x98) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar28 + 0xa0) = uVar74;
        if (*(uint *)(lVar31 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar31 + lVar44 * 0x178;
        uVar74 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar28 + 0xc0) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar28 + 200) = uVar74;
        if (*(uint *)(lVar31 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar31 + lVar44 * 0x178;
        uVar74 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar28 + 0xe8) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar28 + 0xf0) = uVar74;
        if (*(uint *)(lVar31 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(undefined1 *)(lVar42 + 0x194) = 0;
      }
      if (iVar16 != 0) goto LAB_02497598;
LAB_02497668:
      pcVar32 = *(code **)(*unaff_x19 + 0x8d8);
LAB_02497674:
      (*pcVar32)();
    }
LAB_02497688:
    if ((*in_stack_00000150 == 0) || (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar42 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar42 = lVar42 + lVar44 * 0x178;
    uVar20 = *(undefined8 *)(lVar42 + 0x11c);
    *(undefined8 *)(lVar42 + 0x11c) =
         CONCAT44(fVar70 + (float)((ulong)uVar20 >> 0x20),fVar62 + (float)uVar20);
    *(float *)(lVar42 + 0x124) = fVar65 + *(float *)(lVar42 + 0x124);
    if ((*in_stack_00000150 == 0) || (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar42 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar42 = lVar42 + lVar44 * 0x178;
    *(ulong *)(lVar42 + 0x110) =
         CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar42 + 0x110) >> 0x20),
                  fVar62 + (float)*(undefined8 *)(lVar42 + 0x110));
    *(float *)(lVar42 + 0x118) = fVar65 + *(float *)(lVar42 + 0x118);
    if ((*in_stack_00000150 == 0) || (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar42 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar42 = lVar42 + lVar44 * 0x178;
    *(ulong *)(lVar42 + 0x128) =
         CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar42 + 0x128) >> 0x20),
                  fVar62 + (float)*(undefined8 *)(lVar42 + 0x128));
    *(float *)(lVar42 + 0x130) = fVar65 + *(float *)(lVar42 + 0x130);
    if ((*in_stack_00000150 == 0) || (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar42 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar42 = lVar42 + lVar44 * 0x178;
    *(float *)(lVar42 + 0x134) = fVar62 + *(float *)(lVar42 + 0x134);
    *(ulong *)(lVar42 + 0x138) =
         CONCAT44(fVar65 + (float)((ulong)*(undefined8 *)(lVar42 + 0x138) >> 0x20),
                  fVar70 + (float)*(undefined8 *)(lVar42 + 0x138));
    lVar42 = *in_stack_00000150;
    if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x38), lVar28 == 0)) goto LAB_0249920c;
    uVar41 = *(uint *)(lVar28 + 0x18);
    if (uVar41 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar37 = lVar28 + lVar44 * 0x178;
    uVar58 = CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar37 + 0x140) >> 0x20),
                      fVar62 + (float)*(undefined8 *)(lVar37 + 0x140));
    fVar49 = fVar70 + *(float *)(lVar37 + 0x150);
    uVar59 = (ulong)(uint)fVar49;
    uVar61 = CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar37 + 0x148) >> 0x20),
                      fVar70 + (float)*(undefined8 *)(lVar37 + 0x148));
    *(ulong *)(lVar37 + 0x140) = uVar58;
    *(ulong *)(lVar37 + 0x148) = uVar61;
    *(float *)(lVar37 + 0x150) = fVar49;
    if (uVar2 == uVar60) {
      uVar60 = *in_stack_00000148 - 1;
      if (uVar15 == uVar60) goto LAB_0249788c;
    }
    else {
      lVar42 = *(long *)(lVar42 + 0x50);
      if (lVar42 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar42 + 0x18) <= uVar60)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar37 = (long)(int)uVar60;
      lVar38 = lVar42 + lVar37 * 0x5c;
      uVar61 = (ulong)(uint)*(float *)(lVar38 + 0x58);
      fVar49 = fVar70 + *(float *)(lVar38 + 0x54);
      uVar58 = (ulong)(uint)fVar49;
      fVar50 = fVar62 + *(float *)(lVar38 + 0x58);
      uVar59 = (ulong)(uint)fVar50;
      *(ulong *)(lVar38 + 0x4c) =
           CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar38 + 0x4c) >> 0x20),
                    fVar70 + (float)*(undefined8 *)(lVar38 + 0x4c));
      *(float *)(lVar38 + 0x54) = fVar49;
      *(float *)(lVar38 + 0x58) = fVar50;
      if (uVar41 <= *(uint *)(lVar38 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar74 = *(undefined4 *)(lVar28 + (long)(int)*(uint *)(lVar38 + 0x34) * 0x178 + 0x11c);
      lVar42 = lVar42 + lVar37 * 0x5c;
      *(float *)(lVar42 + 0x70) = fVar49;
      *(undefined4 *)(lVar42 + 0x6c) = uVar74;
      lVar42 = *in_stack_00000150;
      if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x50), lVar28 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= uVar60)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar42 = *(long *)(lVar42 + 0x38);
      if (lVar42 == 0) goto LAB_0249920c;
      uVar60 = *(uint *)(lVar28 + lVar37 * 0x5c + 0x40);
      if (*(uint *)(lVar42 + 0x18) <= uVar60)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar28 + lVar37 * 0x5c;
      *(undefined4 *)(lVar28 + 0x74) = *(undefined4 *)(lVar42 + (long)(int)uVar60 * 0x178 + 0x128);
      *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar28 + 0x4c);
      uVar60 = *in_stack_00000148 - 1;
LAB_0249788c:
      if (uVar15 == uVar60) {
        lVar42 = *in_stack_00000150;
        if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x50), lVar28 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar28 + 0x18) <= uVar2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar37 = lVar28 + lVar34 * 0x5c;
        uVar61 = (ulong)(uint)*(float *)(lVar37 + 0x58);
        uVar58 = CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar37 + 0x4c) >> 0x20),
                          fVar70 + (float)*(undefined8 *)(lVar37 + 0x4c));
        fVar49 = fVar70 + *(float *)(lVar37 + 0x54);
        fVar62 = fVar62 + *(float *)(lVar37 + 0x58);
        uVar59 = (ulong)(uint)fVar62;
        *(ulong *)(lVar37 + 0x4c) = uVar58;
        *(float *)(lVar37 + 0x54) = fVar49;
        *(float *)(lVar37 + 0x58) = fVar62;
        lVar42 = *(long *)(lVar42 + 0x38);
        if (lVar42 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar42 + 0x18) <= *(uint *)(lVar37 + 0x34))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar74 = *(undefined4 *)(lVar42 + (long)(int)*(uint *)(lVar37 + 0x34) * 0x178 + 0x11c);
        lVar28 = lVar28 + lVar34 * 0x5c;
        *(float *)(lVar28 + 0x70) = fVar49;
        *(undefined4 *)(lVar28 + 0x6c) = uVar74;
        lVar42 = *in_stack_00000150;
        if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x50), lVar28 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar28 + 0x18) <= uVar2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar42 = *(long *)(lVar42 + 0x38);
        if (lVar42 == 0) goto LAB_0249920c;
        uVar60 = *(uint *)(lVar28 + lVar34 * 0x5c + 0x40);
        if (*(uint *)(lVar42 + 0x18) <= uVar60)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar28 + lVar34 * 0x5c;
        *(undefined4 *)(lVar28 + 0x74) = *(undefined4 *)(lVar42 + (long)(int)uVar60 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar28 + 0x4c);
      }
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar56 = FUN_016f9468(uVar39,0);
    if (((((uVar56 & 1) == 0) && (1 < uVar39 - 0x2010)) && (uVar39 != 0xad)) && (uVar39 != 0x2d)) {
      if (bVar12) {
        if (((uVar35 != 1) && ((int)uVar15 < (int)(*(uint *)(lVar31 + 0x18) - 1))) &&
           (((int)uVar15 < (int)*in_stack_00000148 && ((uVar39 == 0x2019 || (uVar39 == 0x27)))))) {
          if (*(uint *)(lVar31 + 0x18) <= uVar35 - 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar5 = *(undefined2 *)(lVar31 + lVar29 + -0x438);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar56 = FUN_016f9468(uVar5,0);
          if ((uVar56 & 1) != 0) {
            if (*(uint *)(lVar31 + 0x18) <= uVar35)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar5 = *(undefined2 *)(lVar31 + lVar29 + -0x148);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar56 = FUN_016f9468(uVar5,0);
            if ((uVar56 & 1) != 0) goto LAB_02497aa4;
          }
        }
      }
      else {
        if (uVar35 != 1) {
LAB_024985a0:
          bVar12 = false;
          goto LAB_02497aac;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar56 = FUN_016f93a0(uVar39,0);
        if ((uVar56 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar56 = FUN_016f68bc(uVar39,0);
          if (((uVar39 != 0x200b) && ((uVar56 & 1) == 0)) && (*in_stack_00000148 != 1))
          goto LAB_024985a0;
        }
      }
      if (uVar15 == *in_stack_00000148 - 1) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar56 = FUN_016f9468(uVar39,0);
        iVar16 = iVar45;
        if ((uVar56 & 1) == 0) goto LAB_02497de0;
      }
      else {
LAB_02497de0:
        iVar16 = uVar35 - 2;
      }
      lVar42 = *in_stack_00000150;
      if (lVar42 == 0) goto LAB_0249920c;
      lVar28 = *(long *)(lVar42 + 0x40);
      if (lVar28 == 0) goto LAB_0249920c;
      uVar60 = *(uint *)(lVar42 + 0x24);
      iVar17 = *(int *)(lVar28 + 0x18);
      if (iVar17 < (int)(uVar60 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar42 + 0x40),iVar17 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar42 = *in_stack_00000150;
        if (lVar42 == 0) goto LAB_0249920c;
      }
      lVar28 = *(long *)(lVar42 + 0x40);
      if (lVar28 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= uVar60)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar28 + (long)(int)uVar60 * 0x18;
      *(uint *)(lVar28 + 0x28) = uVar19;
      *(int *)(lVar28 + 0x2c) = iVar16;
      *(uint *)(lVar28 + 0x30) = (iVar16 - uVar19) + 1;
      *(long **)(lVar28 + 0x20) = unaff_x19;
      lVar28 = *(long *)(lVar42 + 0x50);
      *(int *)(lVar42 + 0x24) = *(int *)(lVar42 + 0x24) + 1;
      if (lVar28 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= uVar2)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar28 + lVar34 * 0x5c;
      bVar12 = false;
      iStack00000000000000ac = iStack00000000000000ac + 1;
      *(int *)(lVar28 + 0x30) = *(int *)(lVar28 + 0x30) + 1;
    }
    else {
      if (!bVar12) {
        uVar19 = uVar15;
      }
      if (uVar15 == *in_stack_00000148 - 1) {
        lVar42 = *in_stack_00000150;
        if (lVar42 == 0) goto LAB_0249920c;
        lVar28 = *(long *)(lVar42 + 0x40);
        if (lVar28 == 0) goto LAB_0249920c;
        uVar60 = *(uint *)(lVar42 + 0x24);
        iVar16 = *(int *)(lVar28 + 0x18);
        if (iVar16 < (int)(uVar60 + 1)) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147b84((long *)(lVar42 + 0x40),iVar16 + 1,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
          lVar42 = *in_stack_00000150;
          if (lVar42 == 0) goto LAB_0249920c;
        }
        lVar28 = *(long *)(lVar42 + 0x40);
        if (lVar28 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar28 + 0x18) <= uVar60)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar28 + (long)(int)uVar60 * 0x18;
        *(uint *)(lVar28 + 0x28) = uVar19;
        *(uint *)(lVar28 + 0x2c) = uVar15;
        *(long **)(lVar28 + 0x20) = unaff_x19;
        *(uint *)(lVar28 + 0x30) = uVar35 - uVar19;
        lVar28 = *(long *)(lVar42 + 0x50);
        *(int *)(lVar42 + 0x24) = *(int *)(lVar42 + 0x24) + 1;
        if (lVar28 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar28 + 0x18) <= uVar2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar28 + lVar34 * 0x5c;
        iStack00000000000000ac = iStack00000000000000ac + 1;
        *(int *)(lVar28 + 0x30) = *(int *)(lVar28 + 0x30) + 1;
      }
LAB_02497aa4:
      bVar12 = true;
    }
LAB_02497aac:
    if ((*in_stack_00000150 == 0) || (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 == 0))
    goto LAB_0249920c;
    uVar60 = *(uint *)(lVar42 + 0x18);
    if (uVar60 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar42 + lVar44 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar13) {
LAB_02497adc:
        if (uVar60 <= uVar35 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar34 = *unaff_x19;
        uVar60 = *(uint *)(lVar42 + lVar29 + -0x330);
        uVar74 = *(undefined4 *)(lVar42 + lVar29 + -0x2f8);
LAB_0249805c:
        pcVar32 = *(code **)(lVar34 + 0x908);
LAB_02498064:
        uVar61 = (ulong)uVar60;
        uVar58 = (ulong)(uint)fStack0000000000000050;
        uVar59 = (ulong)(uint)fStack0000000000000054;
        (*pcVar32)(fStack0000000000000058,uVar58,uVar59,uVar61,fStack00000000000000d0,0,
                   _bStack000000000000005c,uVar74);
        puVar10 = System_Threading_Mutex_TypeInfo;
        lVar42 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar42 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar42 = *(long *)puVar10;
        }
LAB_024980b4:
        bVar13 = false;
        fVar47 = 0.0;
        fStack00000000000000d0 = *(float *)(*(long *)(lVar42 + 0xb8) + 0x15a8);
        fStack00000000000000cc = 0.0;
      }
      else {
LAB_02497fc4:
        bVar13 = false;
      }
    }
    else {
      lVar42 = lVar42 + lVar44 * 0x178;
      iVar16 = *(int *)(lVar42 + 0x68);
      *(int *)(lVar42 + 0x16c) = iVar18;
      if ((((int)unaff_x19[100] < (int)uVar15) || ((int)unaff_x19[0x65] < (int)uVar2)) ||
         (((int)unaff_x19[0x5b] == 5 && (iVar16 + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar56 = FUN_016f68bc(uVar39,0);
      if ((uVar39 != 0x200b) && ((uVar56 & 1) == 0)) {
        lVar42 = *in_stack_00000150;
        if ((lVar42 == 0) || (lVar34 = *(long *)(lVar42 + 0x38), lVar34 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar34 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar49 = *(float *)(lVar34 + lVar44 * 0x178 + 0x160);
        if (fVar47 <= fVar49) {
          fVar47 = fVar49;
        }
        if (fStack00000000000000cc <= ABS(fVar67)) {
          fStack00000000000000cc = ABS(fVar67);
        }
        if ((float)iVar16 != fStack000000000000004c) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar42 = *in_stack_00000150;
            if (lVar42 == 0) goto LAB_0249920c;
            lVar34 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          else {
            lVar34 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          fStack00000000000000d0 = *(float *)(lVar34 + 0x15a8);
        }
        lVar42 = *(long *)(lVar42 + 0x38);
        if (lVar42 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar42 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0x1e] == 0) goto LAB_0249920c;
        fVar50 = *(float *)(lVar42 + lVar44 * 0x178 + 0x14c);
        fVar49 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
        fVar50 = fVar50 + fVar47 * fVar49;
        if (fVar50 <= fStack00000000000000d0) {
          fStack00000000000000d0 = fVar50;
        }
        uVar58 = (ulong)(uint)fStack00000000000000d0;
        fStack000000000000004c = (float)iVar16;
      }
      if (!bVar13) {
        bVar13 = false;
        if ((((uVar39 == 0xd) || ((uVar39 | 1) == 0xb)) || ((int)uVar7 < (int)uVar15)) ||
           ((bool)(bVar1 ^ 1))) goto LAB_024980d0;
        if (uVar15 == uVar7) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar56 = FUN_016fa418(uVar39,0);
          if ((uVar56 & 1) != 0) goto LAB_02497fc4;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar42 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar42 = lVar42 + lVar44 * 0x178;
        _bStack000000000000005c = *(float *)(lVar42 + 0x160);
        fStack0000000000000058 = *(float *)(lVar42 + 0x11c);
        bVar13 = fVar47 != 0.0;
        fVar49 = _bStack000000000000005c;
        if (bVar13) {
          fVar49 = fVar47;
        }
        fVar47 = fVar49;
        uStack0000000000000060 = *(uint *)(lVar42 + 0x168);
        fStack0000000000000054 = 0.0;
        fVar49 = fVar67;
        if (bVar13) {
          fVar49 = fStack00000000000000cc;
        }
        uVar58 = (ulong)(uint)fVar49;
        fStack0000000000000050 = fStack00000000000000d0;
        fStack00000000000000cc = fVar49;
      }
      if (*in_stack_00000148 == 1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 != 0)) {
          if (uVar15 < *(uint *)(lVar42 + 0x18)) {
            lVar42 = lVar42 + lVar44 * 0x178;
            lVar34 = *unaff_x19;
            uVar60 = *(uint *)(lVar42 + 0x128);
            uVar74 = *(undefined4 *)(lVar42 + 0x160);
            goto LAB_0249805c;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if ((uVar15 == uVar6) || ((int)uVar7 <= (int)uVar15)) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar56 = FUN_016f68bc(uVar39,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 != 0)) {
          if (uVar39 == 0x200b || (uVar56 & 1) != 0) {
            lVar34 = lVar22;
            if (*(uint *)(lVar42 + 0x18) <= uVar7)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
            lVar34 = lVar44;
            if (*(uint *)(lVar42 + 0x18) <= uVar15)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          lVar42 = lVar42 + lVar34 * 0x178;
          uVar60 = *(uint *)(lVar42 + 0x128);
          uVar74 = *(undefined4 *)(lVar42 + 0x160);
          pcVar32 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_02498064;
        }
        goto LAB_0249920c;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 != 0)) {
          uVar60 = *(uint *)(lVar42 + 0x18);
          goto LAB_02497adc;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar15 < (int)(*in_stack_00000148 - 1)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar42 + 0x18) <= uVar35)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar56 = FUN_024a9e4c(uStack0000000000000060,*(undefined4 *)(lVar42 + lVar29),0);
        if ((uVar56 & 1) == 0) {
          if ((*in_stack_00000150 != 0) &&
             (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 != 0)) {
            if (uVar15 < *(uint *)(lVar42 + 0x18)) {
              lVar42 = lVar42 + lVar44 * 0x178;
              uVar61 = (ulong)*(uint *)(lVar42 + 0x128);
              uVar59 = (ulong)(uint)fStack0000000000000054;
              uVar58 = (ulong)(uint)fStack0000000000000050;
              (**(code **)(*unaff_x19 + 0x908))
                        (fStack0000000000000058,uVar58,uVar59,uVar61,fStack00000000000000d0,0,
                         _bStack000000000000005c,*(undefined4 *)(lVar42 + 0x160));
              puVar10 = System_Threading_Mutex_TypeInfo;
              lVar42 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar42 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar42 = *(long *)puVar10;
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
    if ((*in_stack_00000150 == 0) || (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar42 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (lVar36 == 0) goto LAB_0249920c;
    uVar60 = *(uint *)(lVar42 + lVar44 * 0x178 + 400);
    fVar49 = (float)FUN_026fd1f0(lVar36 + 0x50,0);
    if ((uVar60 >> 6 & 1) == 0) {
      if (bVar8) {
        if ((*in_stack_00000150 == 0) ||
           (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar42 + 0x18) <= uVar35 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar60 = *(uint *)(lVar42 + lVar29 + -0x330);
        pcVar32 = *(code **)(*unaff_x19 + 0x908);
        fVar70 = fStack0000000000000088 * fVar49 + *(float *)(lVar42 + lVar29 + -0x30c);
LAB_02498648:
        uVar61 = (ulong)uVar60;
        uVar58 = (ulong)(uint)in_stack_00000078._4_4_;
        uVar59 = (ulong)in_stack_00000068._4_4_;
        (*pcVar32)(fStack0000000000000080,uVar58,uVar59,uVar61,fVar70,0,fStack0000000000000088,
                   fStack0000000000000088);
      }
LAB_0249867c:
      bVar8 = false;
    }
    else {
      lVar42 = *in_stack_00000150;
      if ((lVar42 == 0) || (lVar34 = *(long *)(lVar42 + 0x38), lVar34 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar34 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(int *)(lVar34 + lVar44 * 0x178 + 0x174) = iVar18;
      if ((((int)unaff_x19[100] < (int)uVar15) || ((int)unaff_x19[0x65] < (int)uVar2)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar34 + lVar44 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uVar39 == 0xd) || ((uVar39 | 1) == 0xb)) || ((int)uVar7 < (int)uVar15)) ||
         (bVar8 || !bVar1)) {
LAB_02498228:
        if (!bVar8) goto LAB_0249867c;
      }
      else {
        if (uVar15 == uVar7) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar56 = FUN_016fa418(uVar39,0);
          if ((uVar56 & 1) != 0) goto LAB_02498228;
          lVar42 = *in_stack_00000150;
          if (lVar42 == 0) goto LAB_0249920c;
        }
        lVar42 = *(long *)(lVar42 + 0x38);
        if (lVar42 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar42 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar42 = lVar42 + lVar44 * 0x178;
        fStack0000000000000034 = *(float *)(lVar42 + 0x60);
        fStack0000000000000088 = *(float *)(lVar42 + 0x160);
        fStack0000000000000030 = *(float *)(lVar42 + 0x14c);
        uVar58 = (ulong)(uint)fStack0000000000000030;
        fStack0000000000000080 = *(float *)(lVar42 + 0x11c);
        in_stack_00000078._4_4_ = fVar49 * fStack0000000000000088 + fStack0000000000000030;
        in_stack_00000068._4_4_ = 0;
      }
      uVar60 = *in_stack_00000148;
      if (uVar60 == 1) {
LAB_024983ac:
        if ((*in_stack_00000150 != 0) &&
           (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 != 0)) {
          if (uVar15 < *(uint *)(lVar42 + 0x18)) {
            lVar42 = lVar42 + lVar44 * 0x178;
            lVar22 = *unaff_x19;
            uVar60 = *(uint *)(lVar42 + 0x128);
            fVar70 = *(float *)(lVar42 + 0x14c);
LAB_024983d8:
            pcVar32 = *(code **)(lVar22 + 0x908);
FUN_02498644:
            fVar70 = fVar49 * fStack0000000000000088 + fVar70;
            goto LAB_02498648;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if (uVar15 == uVar6) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar56 = FUN_016f68bc(uVar39,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 != 0)) {
          uVar60 = *(uint *)(lVar42 + 0x18);
          if (uVar39 == 0x200b || (uVar56 & 1) != 0) {
            if (uVar60 <= uVar7)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
LAB_02498620:
            lVar22 = lVar44;
            if (uVar60 <= uVar15)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
LAB_02498628:
          lVar42 = lVar42 + lVar22 * 0x178;
          fVar70 = *(float *)(lVar42 + 0x14c);
          uVar60 = *(uint *)(lVar42 + 0x128);
          pcVar32 = *(code **)(*unaff_x19 + 0x908);
          goto FUN_02498644;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar15 < (int)uVar60) {
        lVar42 = *in_stack_00000150;
        if ((lVar42 != 0) && (lVar34 = *(long *)(lVar42 + 0x38), lVar34 != 0)) {
          if (uVar35 < *(uint *)(lVar34 + 0x18)) {
            if (*(float *)(lVar34 + lVar29 + -0x108) == fStack0000000000000034) {
              fVar50 = *(float *)(lVar34 + lVar29 + -0x1c);
              if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar58 = (ulong)(uint)fStack0000000000000030;
              uVar56 = FUN_024aa280(fVar70 + fVar50,uVar58,0);
              if ((uVar56 & 1) != 0) {
                uVar60 = *in_stack_00000148;
                goto 
                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
                ;
              }
              lVar42 = *in_stack_00000150;
              if (lVar42 == 0) goto LAB_0249920c;
            }
            lVar42 = *(long *)(lVar42 + 0x38);
            if (lVar42 != 0) {
              uVar60 = *(uint *)(lVar42 + 0x18);
              if ((int)uVar15 <= (int)uVar7) goto LAB_02498620;
              if (uVar7 < uVar60) goto LAB_02498628;
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
      if ((int)uVar15 < (int)uVar60) {
        iVar16 = FUN_02681c0c(lVar36,0);
        if (*(uint *)(lVar31 + 0x18) <= uVar35)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar42 = *(long *)(lVar31 + lVar29 + -0x130);
        if (lVar42 == 0) goto LAB_0249920c;
        iVar17 = FUN_02681c0c(lVar42,0);
        if (iVar16 != iVar17) goto LAB_024983ac;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 != 0)) {
          if (uVar35 - 2 < *(uint *)(lVar42 + 0x18)) {
            lVar22 = *unaff_x19;
            uVar60 = *(uint *)(lVar42 + lVar29 + -0x330);
            fVar70 = *(float *)(lVar42 + lVar29 + -0x30c);
            goto LAB_024983d8;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      bVar8 = true;
    }
    if ((*in_stack_00000150 == 0) || (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 == 0))
    goto LAB_0249920c;
    uVar60 = (uint)*(undefined8 *)(lVar42 + 0x18);
    if (uVar60 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar42 + lVar44 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar9) {
        uVar59 = (ulong)uStack00000000000000a0;
        uVar61 = (ulong)(uint)fStack00000000000000a4;
        uVar58 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar58,uVar59,uVar61,fStack00000000000000a8,uVar59);
      }
LAB_024986e8:
      bVar9 = false;
    }
    else {
      if ((((int)unaff_x19[100] < (int)uVar15) || ((int)unaff_x19[0x65] < (int)uVar2)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar42 + lVar44 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar9) {
        if ((((uVar39 == 0xd) || ((uVar39 | 1) == 0xb)) || ((int)uVar7 < (int)uVar15)) || (!bVar1))
        goto LAB_024986e8;
        if (uVar15 == uVar7) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar56 = FUN_016fa418(uVar39,0);
          if ((uVar56 & 1) != 0) goto LAB_024986e8;
        }
        puVar10 = System_Threading_Mutex_TypeInfo;
        lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar22 = *(long *)puVar10;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 == 0)) goto LAB_0249920c;
        uVar60 = (uint)*(undefined8 *)(lVar42 + 0x18);
        if (uVar60 <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar22 = *(long *)(lVar22 + 0xb8);
        lVar34 = lVar42 + lVar44 * 0x178;
        in_stack_00001798 = *(undefined8 *)(lVar34 + 0x184);
        in_stack_00001790 = *(undefined8 *)(lVar34 + 0x17c);
        fStack00000000000000b0 = *(float *)(lVar22 + 0x1598);
        in_stack_000017a0 = *(float *)(lVar34 + 0x18c);
        fStack00000000000000b4 = *(float *)(lVar22 + 0x159c);
        fStack00000000000000a4 = *(float *)(lVar22 + 0x15a0);
        fStack00000000000000a8 = *(float *)(lVar22 + 0x15a4);
        uStack00000000000000a0 = 0;
      }
      if (uVar60 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar42 = lVar42 + lVar44 * 0x178;
      fVar51 = *(float *)(lVar42 + 0x188);
      uVar21 = *(undefined8 *)(lVar42 + 0x17c);
      fVar68 = *(float *)(lVar42 + 0x184);
      uVar20 = *(undefined8 *)(lVar42 + 0x184);
      fVar64 = *(float *)(lVar42 + 0x18c);
      fVar70 = *(float *)(lVar42 + 0x11c);
      fVar50 = *(float *)(lVar42 + 0x128);
      fVar71 = *(float *)(lVar42 + 0x148);
      fVar49 = *(float *)(lVar42 + 0x150);
      in_stack_00000158 = uVar21;
      fStack0000000000000160 = fVar68;
      fStack0000000000000164 = fVar51;
      in_stack_00000168 = fVar64;
      in_stack_00000170 = in_stack_00001790;
      in_stack_00000178 = in_stack_00001798;
      in_stack_00000180 = in_stack_000017a0;
      uVar56 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
      lVar42 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
      if ((uVar56 & 1) == 0) {
        if (*(int *)(lVar42 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar42);
        }
        fVar70 = fVar70 - (float)((ulong)in_stack_00001790 >> 0x20);
        if (fVar70 <= fStack00000000000000b0) {
          fStack00000000000000b0 = fVar70;
        }
        fVar49 = fVar49 - in_stack_000017a0;
        uVar58 = (ulong)(uint)fVar49;
        fVar50 = fVar50 + (float)in_stack_00001798;
        uVar59 = (ulong)(uint)fVar50;
        if (fVar49 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar49;
        }
        fVar71 = fVar71 + (float)((ulong)in_stack_00001798 >> 0x20);
        uVar61 = (ulong)(uint)fVar71;
        if (fStack00000000000000a4 <= fVar50) {
          fStack00000000000000a4 = fVar50;
        }
        if (fStack00000000000000a8 <= fVar71) {
          fStack00000000000000a8 = fVar71;
        }
      }
      else {
        if (*(int *)(lVar42 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar42);
        }
        fVar70 = (fVar70 + (fStack00000000000000a4 - (float)in_stack_00001798)) * 0.5;
        uVar61 = (ulong)(uint)fVar70;
        if (fVar49 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar49;
        }
        uVar58 = (ulong)(uint)fStack00000000000000b4;
        uVar59 = (ulong)uStack00000000000000a0;
        if (fStack00000000000000a8 <= fVar71) {
          fStack00000000000000a8 = fVar71;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar58,uVar59,uVar61,fStack00000000000000a8,uVar59);
        fStack00000000000000b4 = fVar49 - fVar64;
        fStack00000000000000a4 = fVar50 + fVar68;
        uStack00000000000000a0 = 0;
        fStack00000000000000a8 = fVar71 + fVar51;
        fStack00000000000000b0 = fVar70;
        in_stack_00001790 = uVar21;
        in_stack_00001798 = uVar20;
        in_stack_000017a0 = fVar64;
      }
      if (((*in_stack_00000148 == 1) || (uVar15 == uVar6)) ||
         (((int)uVar7 <= (int)uVar15 || (!bVar1)))) {
        uVar59 = (ulong)uStack00000000000000a0;
        uVar61 = (ulong)(uint)fStack00000000000000a4;
        uVar58 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar58,uVar59,uVar61,fStack00000000000000a8,uVar59);
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
    }
    uVar15 = *in_stack_00000148;
    iVar45 = iVar45 + 1;
    lVar29 = lVar29 + 0x178;
    bVar1 = (int)uVar35 < (int)uVar15;
    uVar60 = uVar2;
    uVar35 = uVar35 + 1;
  } while (bVar1);
  lVar31 = *in_stack_00000150;
  if (lVar31 != 0) {
    iVar18 = uVar2 + 1;
LAB_02498c58:
    puVar11 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    puVar10 = PTR_DAT_033ed410;
    *(uint *)(lVar31 + 0x18) = uVar15;
    lVar29 = unaff_x19[0xd3];
    *(int *)(lVar31 + 0x2c) = iVar18;
    iVar18 = iStack00000000000000ac;
    if ((int)uVar15 < 1) {
      iVar18 = 1;
    }
    if (iStack00000000000000ac == 0) {
      iVar18 = 1;
    }
    *(int *)(lVar31 + 0x1c) = (int)lVar29;
    *(int *)(lVar31 + 0x24) = iVar18;
    *(int *)(lVar31 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar56 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar56 & 1) == 0)) {
LAB_02496098:
      if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__ + 0xe0) == 0
         ) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar31 = unaff_x19[0xde];
    if (lVar31 != 0) {
      (**(code **)(lVar31 + 0x18))
                (*(undefined8 *)(lVar31 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar31 + 0x28));
    }
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    iVar18 = FUN_02859dc4(unaff_x19[0xe4],0);
    if (iVar18 != 0x19) {
      lVar31 = unaff_x19[0xe4];
      if (lVar31 == 0) goto LAB_0249920c;
      uVar15 = FUN_02859dc4(lVar31,0);
      FUN_02859e00(lVar31,uVar15 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar31 = *(long *)(*in_stack_00000150 + 0x60), lVar31 == 0))
      goto LAB_0249920c;
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar31 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      FUN_024e8000(lVar31 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar31 = *(long *)(unaff_x19[0x6c] + 0x60), lVar31 != 0)) {
        if (*(int *)(lVar31 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar31 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar31 = *(long *)(unaff_x19[0x6c] + 0x60), lVar31 != 0)) {
            if (*(int *)(lVar31 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar31 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar31 = *(long *)(unaff_x19[0x6c] + 0x60), lVar31 != 0)) {
                if (*(int *)(lVar31 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar31 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar31 = *(long *)(unaff_x19[0x6c] + 0x60), lVar31 != 0)) {
                    if (*(int *)(lVar31 + 0x18) == 0)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar31 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        if (unaff_x19[0xe3] != 0) {
                          FUN_02858f1c(unaff_x19[0xe3],unaff_x19[0x73],0);
                          if (unaff_x19[0xe3] != 0) {
                            uVar20 = FUN_02858bac(unaff_x19[0xe3],0);
                            if (unaff_x19[0xe3] != 0) {
                              uVar15 = FUN_02858a14(unaff_x19[0xe3],0);
                              lVar31 = *in_stack_00000150;
                              if (lVar31 != 0) {
                                lVar42 = 0;
                                lVar29 = 0;
                                do {
                                  uVar56 = lVar29 + 1;
                                  if ((long)*(int *)(lVar31 + 0x34) <= (long)uVar56)
                                  goto LAB_02496098;
                                  lVar31 = *(long *)(lVar31 + 0x60);
                                  if (lVar31 == 0) break;
                                  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  if (*(uint *)(lVar31 + 0x18) <= uVar56)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  FUN_024e7ecc(lVar31 + lVar42 + 0x70,0);
                                  lVar31 = unaff_x19[0xe0];
                                  if (lVar31 == 0) break;
                                  if (*(uint *)(lVar31 + 0x18) <= uVar56)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  uVar21 = *(undefined8 *)(lVar31 + lVar29 * 8 + 0x28);
                                  if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar24 = FUN_0268b4e0(uVar21,0,0);
                                  if ((uVar24 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                      if ((*in_stack_00000150 == 0) ||
                                         (lVar31 = *(long *)(*in_stack_00000150 + 0x60), lVar31 == 0
                                         )) break;
                                      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      if (*(uint *)(lVar31 + 0x18) <= uVar56)
                                      goto 
                                      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                      ;
                                      FUN_024e8000(lVar31 + lVar42 + 0x70,1,0);
                                    }
                                    lVar31 = unaff_x19[0xe0];
                                    if (lVar31 == 0) break;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar31 = *(long *)(lVar31 + lVar29 * 8 + 0x28);
                                    if (lVar31 == 0) break;
                                    lVar31 = FUN_024f0144(lVar31,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
                                    break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar31 == 0) break;
                                    FUN_0266b9c4(lVar31,*(undefined8 *)(lVar22 + lVar42 + 0x80),0);
                                    lVar31 = unaff_x19[0xe0];
                                    if (lVar31 == 0) break;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar31 = *(long *)(lVar31 + lVar29 * 8 + 0x28);
                                    if (lVar31 == 0) break;
                                    lVar31 = FUN_024f0144(lVar31,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
                                    break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar31 == 0) break;
                                    FUN_0266bbc8(lVar31,*(undefined8 *)(lVar22 + lVar42 + 0x98),0);
                                    lVar31 = unaff_x19[0xe0];
                                    if (lVar31 == 0) break;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar31 = *(long *)(lVar31 + lVar29 * 8 + 0x28);
                                    if (lVar31 == 0) break;
                                    lVar31 = FUN_024f0144(lVar31,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
                                    break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar31 == 0) break;
                                    FUN_0266bc74(lVar31,*(undefined8 *)(lVar22 + lVar42 + 0xa0),0);
                                    lVar31 = unaff_x19[0xe0];
                                    if (lVar31 == 0) break;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar31 = *(long *)(lVar31 + lVar29 * 8 + 0x28);
                                    if (lVar31 == 0) break;
                                    lVar31 = FUN_024f0144(lVar31,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
                                    break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar31 == 0) break;
                                    FUN_0266c1dc(lVar31,*(undefined8 *)(lVar22 + lVar42 + 0xa8),0);
                                    lVar31 = unaff_x19[0xe0];
                                    if (lVar31 == 0) break;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar31 = *(long *)(lVar31 + lVar29 * 8 + 0x28);
                                    if ((lVar31 == 0) ||
                                       (lVar31 = FUN_024f0144(lVar31,0), lVar31 == 0)) break;
                                    FUN_0266ed90(lVar31,0);
                                    lVar31 = unaff_x19[0xe0];
                                    if (lVar31 == 0) break;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar31 = *(long *)(lVar31 + lVar29 * 8 + 0x28);
                                    if (lVar31 == 0) break;
                                    lVar31 = FUN_02738ef4(lVar31,0);
                                    lVar22 = unaff_x19[0xe0];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar22 = *(long *)(lVar22 + lVar29 * 8 + 0x28);
                                    if ((lVar22 == 0) ||
                                       (uVar21 = FUN_024f0144(lVar22,0), lVar31 == 0)) break;
                                    FUN_02858f1c(lVar31,uVar21,0);
                                    lVar31 = unaff_x19[0xe0];
                                    if (lVar31 == 0) break;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar31 = *(long *)(lVar31 + lVar29 * 8 + 0x28);
                                    if ((lVar31 == 0) ||
                                       (lVar31 = FUN_02738ef4(lVar31,0), lVar31 == 0)) break;
                                    FUN_02858b14(uVar20,uVar58,uVar59,uVar61,lVar31,0);
                                    lVar31 = unaff_x19[0xe0];
                                    if (lVar31 == 0) break;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar31 = *(long *)(lVar31 + lVar29 * 8 + 0x28);
                                    if ((lVar31 == 0) ||
                                       (lVar31 = FUN_02738ef4(lVar31,0), lVar31 == 0)) break;
                                    FUN_02858a50(lVar31,uVar15 & 1,0);
                                    lVar31 = unaff_x19[0xe0];
                                    if (lVar31 == 0) break;
                                    if (*(uint *)(lVar31 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    plVar40 = *(long **)(lVar31 + lVar29 * 8 + 0x28);
                                    uVar19 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar40 == (long *)0x0) break;
                                    (**(code **)(*plVar40 + 0x2c8))
                                              (plVar40,uVar19 & 1,*(undefined8 *)(*plVar40 + 0x2d0))
                                    ;
                                  }
                                  lVar31 = *in_stack_00000150;
                                  lVar29 = lVar29 + 1;
                                  lVar42 = lVar42 + 0x50;
                                } while (lVar31 != 0);
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


