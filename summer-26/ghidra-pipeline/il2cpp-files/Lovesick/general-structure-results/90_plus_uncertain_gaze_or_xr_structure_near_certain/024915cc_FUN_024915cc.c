/*
FUNCTION_NAME: FUN_024915cc
ENTRY_POINT: 024915cc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 181
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_21;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02491d4c) */
/* WARNING: Removing unreachable block (ram,0x02491c08) */
/* WARNING: Removing unreachable block (ram,0x02491cbc) */
/* WARNING: Removing unreachable block (ram,0x02491de0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_024915cc(long *param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  undefined8 uVar27;
  ulong uVar28;
  long lVar29;
  int *piVar30;
  ulong uVar31;
  ulong uVar32;
  undefined1 *puVar33;
  long lVar34;
  undefined1 uVar35;
  char cVar36;
  long *plVar37;
  float *pfVar38;
  undefined4 *puVar39;
  long lVar40;
  float *pfVar41;
  code *pcVar42;
  uint uVar43;
  uint uVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  uint uVar50;
  long *plVar51;
  uint uVar52;
  uint uVar53;
  long lVar54;
  long *plVar55;
  long *plVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  double dVar70;
  ulong uVar71;
  double dVar72;
  float fVar73;
  undefined8 uVar74;
  uint uVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined4 uVar93;
  float fVar94;
  float fVar95;
  uint local_1840;
  float local_1830;
  float local_182c;
  int local_1814;
  float local_1810;
  float local_180c;
  float local_1808;
  float local_1804;
  float local_17f4;
  float local_17e4;
  float local_17e0;
  uint local_17dc;
  undefined8 local_17d0;
  float local_17c0;
  float local_17bc;
  float local_17b8;
  int local_17b4;
  float local_17b0;
  float local_17ac;
  undefined8 local_17a0;
  float local_1798;
  float local_1794;
  float local_1790;
  float local_178c;
  float local_1778;
  float fStack_1774;
  float local_176c;
  float local_172c;
  ulong local_1708;
  float local_1700;
  float local_16fc;
  float local_16f8;
  ulong local_16f0;
  undefined8 uStack_16e8;
  undefined4 local_16e0;
  undefined1 auStack_16d0 [888];
  undefined1 auStack_1358 [888];
  double local_fe0;
  undefined8 uStack_fd8;
  ulong local_fd0;
  undefined8 uStack_fc8;
  undefined8 local_fc0;
  undefined8 uStack_fb8;
  undefined8 local_fb0;
  uint local_c68;
  undefined4 uStack_c64;
  undefined8 uStack_c60;
  undefined4 local_c58;
  double local_c50;
  undefined8 uStack_c48;
  undefined4 local_c40;
  double local_c30;
  undefined8 uStack_c28;
  ulong uStack_c20;
  undefined8 uStack_c18;
  undefined8 local_c10;
  undefined8 uStack_c08;
  undefined8 local_c00;
  undefined1 auStack_bf0 [888];
  undefined1 auStack_878 [888];
  undefined1 auStack_500 [888];
  long local_188;
  double local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  char local_ac [4];
  float local_a8;
  uint uStack_a4;
  
  puVar12 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_037825d4 & 1) == 0) {
    thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ef3c8);
    thunk_FUN_00d48444(System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                      );
    thunk_FUN_00d48444(StringLiteral_6354);
    thunk_FUN_00d48444(PTR_DAT_033ed410);
    thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
    thunk_FUN_00d48444(OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Hash128___TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<TMP_Text>_MoveNext__);
    thunk_FUN_00d48444(
                      Method_MedleyBossMemoryGame_<StartPhaseCoroutine>d__41_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<SystemLanguage,_string>_Add__);
    thunk_FUN_00d48444(
                      Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<TextStyle>_get_Item__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<SoundData>_GetEnumerator__);
    thunk_FUN_00d48444(StringLiteral_4307);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<uint>_ToArray__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_HaveDuplicateReferences<InputControl>__
                      );
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Theme_Primitives_Vector3AffordanceTheme_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_ARBaseGestureInteractable_OnGestureStarted<TwistGesture>__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmin_s32__);
    thunk_FUN_00d48444(System_Action<byte[],_int,_long>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5656);
    thunk_FUN_00d48444(TMPro_TMP_Dropdown_OptionData_TypeInfo);
    thunk_FUN_00d48444(System_Threading_Mutex_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__);
    thunk_FUN_00d48444(System_Collections_Generic_List<ScriptableRenderPass>_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_DebugValidationMode_var);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponents<Component>__);
    thunk_FUN_00d48444(
                      Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                      );
    thunk_FUN_00d48444(Unity_Mathematics_uint2_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__);
    DAT_037825d4 = 1;
  }
  local_a8 = 0.0;
  uStack_a4 = 0;
  local_ac[0] = '\0';
  local_b8 = 0;
  local_c0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_f4 = 0;
  uStack_178 = 0;
  local_180 = 0.0;
  local_170 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_158 = 0;
  local_160 = 0;
  local_188 = 0;
  memset(auStack_500,0,0x378);
  memset(auStack_878,0,0x378);
  memset(auStack_bf0,0,0x378);
  lVar49 = param_1[0x1e];
  if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar51 = (long *)StringLiteral_302;
  uVar25 = FUN_0268b4e0(lVar49,0,0);
  if ((uVar25 & 1) == 0) {
    if (param_1[0x1e] == 0) goto LAB_0249920c;
    lVar49 = FUN_024b11ac(param_1[0x1e],0);
    if (lVar49 != 0) {
      if (param_1[0x6c] != 0) {
        FUN_024f1728(param_1[0x6c],0);
      }
      puVar13 = Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
      lVar49 = param_1[0x8e];
      if ((lVar49 != 0) && (*(long *)(lVar49 + 0x18) != 0)) {
        if ((int)*(long *)(lVar49 + 0x18) == 0)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(int *)(lVar49 + 0x20) != 0) {
          lVar49 = param_1[0x1e];
          plVar37 = param_1 + 0x1f;
          *plVar37 = lVar49;
          plVar56 = (long *)System_Threading_Mutex_TypeInfo;
          lVar34 = param_1[0x21];
          *(undefined4 *)(param_1 + 0x23) = 0;
          param_1[0x22] = lVar34;
          puVar13 = 
          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_HaveDuplicateReferences<InputControl>__
          ;
          if (*(int *)(*plVar56 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            uVar93 = (undefined4)param_1[0x23];
            lVar49 = param_1[0x1f];
            lVar34 = param_1[0x22];
          }
          else {
            uVar93 = 0;
          }
          local_fb0 = 0;
          uStack_fc8 = 0;
          local_fd0 = 0;
          uStack_fb8 = 0;
          local_fc0 = 0;
          uStack_fd8 = 0;
          local_fe0 = 0.0;
          FUN_02499fd4((int)param_1[0xc2],&local_fe0,uVar93,lVar49,0,lVar34,0);
          uStack_c28 = uStack_fd8;
          local_c30 = local_fe0;
          uStack_c18 = uStack_fc8;
          uStack_c20 = local_fd0;
          uStack_c08 = uStack_fb8;
          local_c10 = local_fc0;
          local_c00 = local_fb0;
          FUN_013b7dec(*(long *)(*plVar56 + 0xb8) + 0x10,&local_c30,*(undefined8 *)puVar13);
          lVar49 = param_1[0x76];
          param_1[0xd2] = param_1[0x35];
          if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar25 = FUN_02681b9c(lVar49,0,0);
          if ((uVar25 & 1) != 0) {
            if (param_1[0x76] == 0) goto LAB_0249920c;
            FUN_024eb3e4(param_1[0x76],0);
          }
          if (param_1[0x1e] == 0) goto LAB_0249920c;
          lVar49 = param_1[0x91];
          fVar77 = *(float *)((long)param_1 + 0x1dc);
          iVar19 = FUN_026fd110(param_1[0x1e] + 0x50,0);
          puVar15 = StringLiteral_4307;
          puVar14 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmin_s32__;
          puVar13 = Method_System_Collections_Generic_List_Enumerator<TMP_Text>_MoveNext__;
          puVar12 = System_Action<byte[],_int,_long>_TypeInfo;
          if (param_1[0x1e] == 0) goto LAB_0249920c;
          fVar57 = (float)FUN_026fd120(param_1[0x1e] + 0x50,0);
          fVar73 = DAT_028aa040;
          fVar84 = *(float *)((long)param_1 + 0x1dc);
          *(undefined4 *)((long)param_1 + 0x3fc) = 0x3f800000;
          *(float *)(param_1 + 0x3c) = fVar84;
          fVar57 = (fVar77 / (float)iVar19) * fVar57;
          fVar60 = fVar73;
          fVar77 = fVar57 * fVar73;
          if (*(char *)((long)param_1 + 0x2fd) != '\0') {
            fVar60 = 1.0;
            fVar77 = fVar57;
          }
          local_fe0._0_4_ = fVar84;
          FUN_013b7dec(param_1 + 0x3d,&local_fe0,*(undefined8 *)puVar12);
          uStack_a4 = 0;
          *(uint *)((long)param_1 + 0x254) = *(uint *)(param_1 + 0x4a);
          if ((*(uint *)(param_1 + 0x4a) & 1) == 0) {
            local_fe0._0_4_ = (float)param_1[0x41];
          }
          else {
            local_fe0._0_4_ = 9.80909e-43;
          }
          *(float *)((long)param_1 + 0x20c) = local_fe0._0_4_;
          FUN_013b7dec(param_1 + 0x42,&local_fe0,*(undefined8 *)puVar14);
          FUN_024f24a0(param_1 + 0x4b,0);
          *(undefined4 *)(param_1 + 0x4e) = *(undefined4 *)((long)param_1 + 0x264);
          local_fe0 = (double)CONCAT44(local_fe0._4_4_,*(undefined4 *)((long)param_1 + 0x264));
          FUN_013b7dec(param_1 + 0x4f,&local_fe0,*(undefined8 *)puVar15);
          *(undefined4 *)((long)param_1 + 0x614) = 0;
          FUN_013b7d38(param_1 + 0xc3,*(undefined8 *)puVar13);
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          fVar86 = *(float *)((long)param_1 + 0x144);
          pfVar38 = *(float **)
                     (*(long *)
                       Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                     + 0xb8);
          fVar57 = *(float *)(param_1 + 0x28) * 255.0;
          fVar91 = *(float *)(param_1 + 0x29);
          fVar83 = *(float *)((long)param_1 + 0x14c);
          local_1808 = *pfVar38;
          if (*(float *)(param_1 + 0x28) < 0.0) {
            fVar57 = 0.0;
          }
          local_1810 = pfVar38[1];
          local_180c = pfVar38[2];
          dVar70 = modf((double)fVar57,&local_fe0);
          if (0.0 <= fVar57) {
            if (dVar70 == 0.5) {
              fVar57 = 1.0;
              goto LAB_02491c80;
            }
            fVar58 = (float)(int)(fVar57 + 0.5);
          }
          else if (dVar70 == -0.5) {
            fVar57 = -1.0;
LAB_02491c80:
            fVar58 = (float)local_fe0;
            if (((long)local_fe0 & 1U) != 0) {
              fVar58 = (float)local_fe0 + fVar57;
            }
          }
          else {
            fVar58 = (float)(int)(fVar57 + -0.5);
          }
          fVar57 = fVar86 * 255.0;
          if (fVar86 < 0.0) {
            fVar57 = 0.0;
          }
          dVar70 = modf((double)fVar57,&local_fe0);
          if (0.0 <= fVar57) {
            if (dVar70 == 0.5) {
              fVar57 = 1.0;
              goto LAB_02491d10;
            }
            fVar86 = (float)(int)(fVar57 + 0.5);
          }
          else if (dVar70 == -0.5) {
            fVar57 = -1.0;
LAB_02491d10:
            fVar86 = (float)local_fe0;
            if (((long)local_fe0 & 1U) != 0) {
              fVar86 = (float)local_fe0 + fVar57;
            }
          }
          else {
            fVar86 = (float)(int)(fVar57 + -0.5);
          }
          fVar57 = fVar91 * 255.0;
          if (fVar91 < 0.0) {
            fVar57 = 0.0;
          }
          dVar70 = modf((double)fVar57,&local_fe0);
          puVar13 = Method_System_Collections_Generic_List<uint>_ToArray__;
          if (0.0 <= fVar57) {
            if (dVar70 == 0.5) {
              fVar57 = 1.0;
              goto LAB_02491da0;
            }
            fVar91 = (float)(int)(fVar57 + 0.5);
          }
          else if (dVar70 == -0.5) {
            fVar57 = -1.0;
LAB_02491da0:
            fVar91 = (float)local_fe0;
            if (((long)local_fe0 & 1U) != 0) {
              fVar91 = (float)local_fe0 + fVar57;
            }
          }
          else {
            fVar91 = (float)(int)(fVar57 + -0.5);
          }
          fVar57 = fVar83 * 255.0;
          if (fVar83 < 0.0) {
            fVar57 = 0.0;
          }
          dVar70 = modf((double)fVar57,&local_fe0);
          if (0.0 <= fVar57) {
            if (dVar70 == 0.5) {
              fVar57 = 1.0;
              goto LAB_02491e38;
            }
            fVar83 = (float)(int)(fVar57 + 0.5);
          }
          else if (dVar70 == -0.5) {
            fVar57 = -1.0;
LAB_02491e38:
            fVar83 = (float)local_fe0;
            if (((long)local_fe0 & 1U) != 0) {
              fVar83 = (float)local_fe0 + fVar57;
            }
          }
          else {
            fVar83 = (float)(int)(fVar57 + -0.5);
          }
          uVar24 = (int)fVar58 & 0xffU | ((int)fVar86 & 0xffU) << 8 | ((int)fVar91 & 0xffU) << 0x10
                   | (int)fVar83 << 0x18;
          *(uint *)((long)param_1 + 0x13c) = uVar24;
          *(uint *)((long)param_1 + 0x4e4) = uVar24;
          *(uint *)(param_1 + 0x2a) = uVar24;
          *(uint *)((long)param_1 + 0x154) = uVar24;
          local_fe0._0_4_ = (float)uVar24;
          FUN_013b7dec(param_1 + 0x9d,&local_fe0,*(undefined8 *)puVar13);
          local_fe0._0_4_ = *(float *)((long)param_1 + 0x4e4);
          FUN_013b7dec(param_1 + 0xa1,&local_fe0,*(undefined8 *)puVar13);
          local_fe0 = (double)CONCAT44(local_fe0._4_4_,*(undefined4 *)((long)param_1 + 0x4e4));
          FUN_013b7dec(param_1 + 0xa5,&local_fe0,*(undefined8 *)puVar13);
          puVar13 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
          uVar93 = *(undefined4 *)((long)param_1 + 0x4e4);
          if (*(int *)(*(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (DAT_037825d3 == '\0') {
            thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
            DAT_037825d3 = '\x01';
          }
          puVar15 = 
          Method_UnityEngine_XR_Interaction_Toolkit_AR_ARBaseGestureInteractable_OnGestureStarted<TwistGesture>__
          ;
          puVar14 = Method_System_Collections_Generic_List<SoundData>_GetEnumerator__;
          lVar34 = *(long *)puVar13;
          if (*(int *)(lVar34 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar34 = *(long *)puVar13;
          }
          puVar39 = *(undefined4 **)(lVar34 + 0xb8);
          uStack_fd8 = 0;
          local_fe0 = 0.0;
          local_fd0 = local_fd0 & 0xffffffff00000000;
          UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                    (*puVar39,puVar39[1],puVar39[2],puVar39[3],&local_fe0,uVar93,0);
          uStack_c48 = uStack_fd8;
          local_c50 = local_fe0;
          local_c40 = (undefined4)local_fd0;
          FUN_013b7dec(param_1 + 0xa9,&local_c50,*(undefined8 *)puVar14);
          param_1[0xaf] = 0;
          FUN_013b7dec(param_1 + 0xb0,0,*(undefined8 *)puVar15);
          puVar13 = 
          UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Theme_Primitives_Vector3AffordanceTheme_TypeInfo
          ;
          if (param_1[0x1f] != 0) {
            local_c68 = (uint)*(byte *)(param_1[0x1f] + 0x1b8);
            *(uint *)(param_1 + 0xbd) = local_c68;
            puVar14 = Method_System_Collections_Generic_Dictionary<SystemLanguage,_string>_Add__;
            FUN_013b7dec(param_1 + 0xb9,&local_c68,*(undefined8 *)puVar13);
            FUN_013b7d38(param_1 + 0xbe,*(undefined8 *)puVar14);
            *(undefined1 *)((long)param_1 + 0x46c) = 0;
            *(undefined4 *)(param_1 + 0x9a) = 0;
            *(undefined4 *)(param_1 + 0x57) = 0xc6fffe00;
            if (param_1[0x1f] != 0) {
              fVar57 = (float)FUN_026fd130(param_1[0x1f] + 0x50,0);
              if (*plVar37 != 0) {
                fVar83 = (float)FUN_026fd140(*plVar37 + 0x50,0);
                if (*plVar37 != 0) {
                  fVar86 = (float)FUN_026fd180(*plVar37 + 0x50,0);
                  *(undefined8 *)((long)param_1 + 0x2a4) = 0;
                  *(undefined4 *)(param_1 + 199) = 0;
                  param_1[0x80] = 0;
                  local_c68 = 0;
                  FUN_013b7dec(param_1 + 0x81,&local_c68,*(undefined8 *)puVar12);
                  *(undefined1 *)(param_1 + 0x85) = 0;
                  *(undefined4 *)((long)param_1 + 0x48c) = 0;
                  *(undefined4 *)(param_1 + 0x92) = *(undefined4 *)((long)param_1 + 0x31c);
                  *(undefined8 *)((long)param_1 + 0x494) = 0;
                  *(undefined4 *)((long)param_1 + 0x49c) = 0;
                  lVar34 = *plVar56;
                  if (*(int *)(lVar34 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar34 = *plVar56;
                  }
                  lVar26 = param_1[0x6c];
                  uVar74 = *(undefined8 *)(*(long *)(lVar34 + 0xb8) + 0x15a8);
                  param_1[0x94] = 0;
                  param_1[0x99] = 0;
                  *(undefined1 *)((long)param_1 + 700) = 0;
                  lVar34 = NEON_rev64(uVar74,4);
                  *(undefined4 *)((long)param_1 + 0x2dc) = 0xffffffff;
                  param_1[0x98] = lVar34;
                  *(undefined4 *)(param_1 + 0x95) = 0;
                  if ((lVar26 != 0) && (*(long *)(lVar26 + 0x58) != 0)) {
                    uVar21 = (int)param_1[0x66] - 1;
                    uVar24 = *(int *)(*(long *)(lVar26 + 0x58) + 0x18) - 1;
                    if ((int)uVar21 <= (int)uVar24) {
                      uVar24 = uVar21;
                    }
                    uVar3 = 0;
                    if (-1 < (int)uVar21) {
                      uVar3 = uVar24;
                    }
                    FUN_024f1d04(lVar26,0);
                    fVar58 = *(float *)(param_1 + 0x67);
                    *(undefined4 *)(param_1 + 0x6b) = 0xbf800000;
                    fVar92 = *(float *)(param_1 + 0x6a);
                    param_1[0x69] = 0;
                    lVar34 = *plVar56;
                    fVar91 = *(float *)((long)param_1 + 0x33c);
                    fVar94 = *(float *)((long)param_1 + 0x354);
                    fVar59 = *(float *)((long)param_1 + 0x344);
                    if (*(int *)(lVar34 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar34 = *plVar56;
                    }
                    *(undefined8 *)((long)param_1 + 0x4d4) =
                         *(undefined8 *)(*(long *)(lVar34 + 0xb8) + 0x1598);
                    *(undefined8 *)((long)param_1 + 0x4dc) =
                         *(undefined8 *)(*(long *)(lVar34 + 0xb8) + 0x15a0);
                    puVar12 = 
                    Method_MedleyBossMemoryGame_<StartPhaseCoroutine>d__41_System_Collections_IEnumerator_Reset__
                    ;
                    if (param_1[0x6c] != 0) {
                      FUN_024f1b84(param_1[0x6c],0);
                      *(undefined4 *)((long)param_1 + 0x4b4) = 0;
                      *(undefined4 *)((long)param_1 + 0x4bc) = 0;
                      *(undefined8 *)((long)param_1 + 0x4ac) = 0;
                      local_a8 = 0.0;
                      local_ac[0] = '\0';
                      *(undefined1 *)((long)param_1 + 0x334) = 0;
                      *(undefined1 *)((long)param_1 + 0x2d2) = 0;
                      FUN_024f102c(&local_b8,0xffffffff,0,0);
                      FUN_024d69d4(param_1,*(long *)(*plVar56 + 0xb8) + 0x98,0xffffffff,0xffffffff,0
                                  );
                      FUN_024d69d4(param_1,*(long *)(*plVar56 + 0xb8) + 0x410,0xffffffff,0xffffffff,
                                   0);
                      FUN_024d69d4(param_1,*(long *)(*plVar56 + 0xb8) + 0x788,0xffffffff,0xffffffff,
                                   0);
                      FUN_024d69d4(param_1,*(long *)(*plVar56 + 0xb8) + 0xb00,0xffffffff,0xffffffff,
                                   0);
                      FUN_024d69d4(param_1,*(long *)(*plVar56 + 0xb8) + 0xe78,0xffffffff,0xffffffff,
                                   0);
                      FUN_013b7d38(*(long *)(*plVar56 + 0xb8) + 0x11f0,*(undefined8 *)puVar12);
                      fVar82 = DAT_028aa3e4;
                      fVar76 = DAT_028aa028;
                      local_d8 = local_d8 & 0xffffffff00000000;
                      lVar34 = param_1[0x8e];
                      if (lVar34 != 0) {
                        puVar1 = (uint *)((long)param_1 + 0x48c);
                        uVar24 = (int)lVar49 - 1;
                        uVar25 = (ulong)(uint)fVar77;
                        fVar57 = fVar57 - (fVar83 - fVar86);
                        lVar49 = (long)param_1 + 0x42c;
                        fVar83 = 0.0;
                        if (fVar92 <= 0.0) {
                          fVar92 = 0.0;
                        }
                        if (fVar94 <= 0.0) {
                          fVar94 = 0.0;
                        }
                        plVar2 = param_1 + 0x6c;
                        fVar92 = fVar92 + _LAB_028aa024;
                        uVar71 = (ulong)(uint)fVar92;
                        fVar86 = fVar94 + _LAB_028aa024;
                        fVar60 = fVar84 * DAT_028aa028 * fVar60;
                        bVar10 = true;
                        local_182c = 0.0;
                        bVar16 = false;
                        iVar19 = 0;
                        uVar21 = 0;
                        bVar11 = 1;
                        local_178c = fVar92;
LAB_02492378:
                        fVar84 = (float)uVar25;
                        fVar63 = 1.0;
                        if ((int)*(uint *)(lVar34 + 0x18) <= (int)uVar21) {
LAB_02495f1c:
                          fVar77 = (float)uVar71;
                          if (((char)param_1[0x46] != '\0') &&
                             (fVar77 = DAT_02956ccc,
                             DAT_02956ccc <
                             *(float *)((long)param_1 + 0x234) - *(float *)(param_1 + 0x47))) {
                            fVar77 = *(float *)((long)param_1 + 0x1dc);
                            fVar73 = *(float *)((long)param_1 + 0x24c);
                            if ((fVar77 < fVar73) &&
                               (*(int *)((long)param_1 + 0x23c) < (int)param_1[0x48])) {
                              if (*(float *)((long)param_1 + 0x2cc) <
                                  *(float *)(param_1 + 0x59) / 100.0) {
                                *(undefined4 *)((long)param_1 + 0x2cc) = 0;
                              }
                              fVar60 = (*(float *)((long)param_1 + 0x234) - fVar77) * 0.5;
                              if (fVar60 <= DAT_028aa298) {
                                fVar60 = DAT_028aa298;
                              }
                              *(float *)(param_1 + 0x47) = fVar77;
                              fVar60 = (fVar77 + fVar60) * 20.0 + 0.5;
                              fVar77 = DAT_02958220;
                              if (fVar60 != INFINITY) {
                                fVar77 = (float)(int)fVar60 / 20.0;
                              }
                              if (fVar73 <= fVar77) {
                                fVar77 = fVar73;
                              }
LAB_02495fd8:
                              *(float *)((long)param_1 + 0x1dc) = fVar77;
                              return;
                            }
                          }
                          *(undefined1 *)((long)param_1 + 0x244) = 1;
                          if ((int)param_1[0x48] <= *(int *)((long)param_1 + 0x23c)) {
                            uVar74 = FUN_0176eb1c((long)param_1 + 0x23c,0);
                            uVar27 = FUN_017840ac((long)param_1 + 0x1dc,0);
                            uVar74 = FUN_0160073c(*(undefined8 *)
                                                                                                      
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__
                                                  ,uVar74,*(undefined8 *)
                                                                                                                      
                                                  Method_UnityEngine_GameObject_GetComponents<Component>__
                                                  ,uVar27,0);
                            if (*(int *)(*plVar51 + 0xe0) == 0) {
                              thunk_FUN_00d32864(*plVar51);
                            }
                            FUN_02660dac(uVar74,0);
                          }
                          if ((*puVar1 == 0) || ((*puVar1 == 1 && (uStack_a4 == 3)))) {
                            (**(code **)(*param_1 + 0x948))
                                      (param_1,*(undefined8 *)(*param_1 + 0x950));
                            goto LAB_02496098;
                          }
                          lVar49 = *plVar56;
                          if (*(int *)(lVar49 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar49 = *plVar56;
                          }
                          puVar12 = 
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
                          lVar49 = **(long **)(lVar49 + 0xb8);
                          if (lVar49 == 0) goto LAB_0249920c;
                          if (*(uint *)(lVar49 + 0x18) <= *(uint *)(param_1 + 0xd0))
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                          local_c0 = CONCAT44(*(int *)(lVar49 + (long)(int)*(uint *)(param_1 + 0xd0)
                                                                * 0x38 + 0x54) << 2,(float)local_c0)
                          ;
                          if ((*plVar2 == 0) || (lVar49 = *(long *)(*plVar2 + 0x60), lVar49 == 0))
                          goto LAB_0249920c;
                          if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          if (*(int *)(lVar49 + 0x18) == 0)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                          FUN_024e7d94(lVar49 + 0x20,0,0);
                          if (DAT_03774d76 == '\0') {
                            thunk_FUN_00d48444(
                                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                              );
                            DAT_03774d76 = '\x01';
                          }
                          puVar13 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
                          iVar19 = (int)param_1[0x4d];
                          local_1798 = **(float **)
                                         (*(long *)
                                           Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                         + 0xb8);
                          local_17a0 = *(undefined8 *)
                                        (*(float **)
                                          (*(long *)
                                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                          + 0xb8) + 1);
                          lVar49 = param_1[0xe2];
                          local_17d0 = local_17a0;
                          fVar73 = local_1798;
                          if (iVar19 < 0x401) {
                            if (iVar19 == 0x100) {
                              if (lVar49 == 0) goto LAB_0249920c;
                              if (*(uint *)(lVar49 + 0x18) < 2)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              uVar74 = *(undefined8 *)(lVar49 + 0x30);
                              if ((int)param_1[0x5b] == 5) {
                                if ((*plVar2 == 0) ||
                                   (lVar34 = *(long *)(*plVar2 + 0x58), lVar34 == 0))
                                goto LAB_0249920c;
                                if (*(uint *)(lVar34 + 0x18) <= uVar3)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                ;
                                fVar77 = *(float *)(lVar34 + (long)(int)uVar3 * 0x14 + 0x28);
                              }
                              else {
                                fVar77 = *(float *)(param_1 + 0x96);
                              }
                              fVar73 = fVar58 + 0.0 + *(float *)(lVar49 + 0x2c);
                              fVar77 = (0.0 - fVar77) - fVar91;
                            }
                            else if (iVar19 == 0x200) {
                              if (lVar49 == 0) goto LAB_0249920c;
                              if ((*(int *)(lVar49 + 0x18) == 1) || (*(int *)(lVar49 + 0x18) == 0))
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              fVar73 = (*(float *)(lVar49 + 0x20) + *(float *)(lVar49 + 0x2c)) * 0.5
                              ;
                              uVar74 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar49 + 0x24) >>
                                                        0x20) +
                                                (float)((ulong)*(undefined8 *)(lVar49 + 0x30) >>
                                                       0x20)) * 0.5,
                                                ((float)*(undefined8 *)(lVar49 + 0x24) +
                                                (float)*(undefined8 *)(lVar49 + 0x30)) * 0.5);
                              if ((int)param_1[0x5b] == 5) {
                                if ((*plVar2 == 0) ||
                                   (lVar49 = *(long *)(*plVar2 + 0x58), lVar49 == 0))
                                goto LAB_0249920c;
                                if (*(uint *)(lVar49 + 0x18) <= uVar3)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                ;
                                lVar49 = lVar49 + (long)(int)uVar3 * 0x14;
                                fVar73 = fVar58 + 0.0 + fVar73;
                                fVar77 = ((fVar91 + *(float *)(lVar49 + 0x28) +
                                          *(float *)(lVar49 + 0x30)) - fVar59) * -0.5 + 0.0;
                              }
                              else {
                                fVar73 = fVar58 + 0.0 + fVar73;
                                fVar77 = ((fVar91 + *(float *)(param_1 + 0x96) + local_a8) - fVar59)
                                         * -0.5 + 0.0;
                              }
                            }
                            else {
                              if (iVar19 != 0x400) goto LAB_024965d0;
                              if (lVar49 == 0) goto LAB_0249920c;
                              if (*(int *)(lVar49 + 0x18) == 0)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              uVar74 = *(undefined8 *)(lVar49 + 0x24);
                              fVar77 = local_a8;
                              if ((int)param_1[0x5b] == 5) {
                                if ((*plVar2 == 0) ||
                                   (lVar34 = *(long *)(*plVar2 + 0x58), lVar34 == 0))
                                goto LAB_0249920c;
                                if (*(uint *)(lVar34 + 0x18) <= uVar3)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                ;
                                fVar77 = *(float *)(lVar34 + (long)(int)uVar3 * 0x14 + 0x30);
                              }
                              fVar73 = fVar58 + 0.0 + *(float *)(lVar49 + 0x20);
                              fVar77 = fVar59 + (0.0 - fVar77);
                            }
                            local_17d0 = CONCAT44((float)((ulong)uVar74 >> 0x20) + 0.0,
                                                  (float)uVar74 + fVar77);
                          }
                          else if (iVar19 == 0x800) {
                            if (lVar49 == 0) goto LAB_0249920c;
                            if ((*(int *)(lVar49 + 0x18) == 1) || (*(int *)(lVar49 + 0x18) == 0))
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            fVar77 = ((float)*(undefined8 *)(lVar49 + 0x24) +
                                     (float)*(undefined8 *)(lVar49 + 0x30)) * 0.5;
                            fVar73 = fVar58 + 0.0 +
                                     (*(float *)(lVar49 + 0x20) + *(float *)(lVar49 + 0x2c)) * 0.5;
                            local_17d0 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar49 + 0x24) >>
                                                          0x20) +
                                                  (float)((ulong)*(undefined8 *)(lVar49 + 0x30) >>
                                                         0x20)) * 0.5 + 0.0,fVar77 + 0.0);
                          }
                          else {
                            if (iVar19 == 0x1000) {
                              if (lVar49 == 0) goto LAB_0249920c;
                              if ((*(int *)(lVar49 + 0x18) == 1) || (*(int *)(lVar49 + 0x18) == 0))
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              fVar77 = (float)*(undefined8 *)(lVar49 + 0x24) +
                                       (float)*(undefined8 *)(lVar49 + 0x30);
                              fVar60 = (float)((ulong)*(undefined8 *)(lVar49 + 0x24) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)(lVar49 + 0x30) >> 0x20);
                              fVar91 = fVar91 + *(float *)(param_1 + 0x9c) +
                                       *(float *)(param_1 + 0x9b);
                              fVar73 = fVar58 + 0.0 +
                                       (*(float *)(lVar49 + 0x20) + *(float *)(lVar49 + 0x2c)) * 0.5
                              ;
                            }
                            else {
                              if (iVar19 != 0x2000) goto LAB_024965d0;
                              if (lVar49 == 0) goto LAB_0249920c;
                              if ((*(int *)(lVar49 + 0x18) == 1) || (*(int *)(lVar49 + 0x18) == 0))
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              fVar77 = (float)*(undefined8 *)(lVar49 + 0x24) +
                                       (float)*(undefined8 *)(lVar49 + 0x30);
                              fVar60 = (float)((ulong)*(undefined8 *)(lVar49 + 0x24) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)(lVar49 + 0x30) >> 0x20);
                              fVar91 = *(float *)((long)param_1 + 0x4b4) - fVar91;
                              fVar73 = fVar58 + 0.0 +
                                       (*(float *)(lVar49 + 0x20) + *(float *)(lVar49 + 0x2c)) * 0.5
                              ;
                            }
                            fVar77 = fVar77 * 0.5;
                            local_17d0 = CONCAT44(fVar60 * 0.5 + 0.0,
                                                  fVar77 + (0.0 - (fVar91 - fVar59) * 0.5));
                          }
LAB_024965d0:
                          if (param_1[0xe4] != 0) {
                            uVar74 = FUN_0285a188(param_1[0xe4],0);
                            if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                              thunk_FUN_00d32864(*(long *)puVar12);
                            }
                            uVar25 = FUN_0268b4e0(uVar74,0,0);
                            lVar49 = FUN_024c933c(param_1,0);
                            if (lVar49 != 0) {
                              FUN_026a125c(lVar49,0);
                              *(float *)(param_1 + 0xe1) = fVar77;
                              if (param_1[0xe4] != 0) {
                                iVar19 = FUN_02859798(param_1[0xe4],0);
                                if (param_1[0xe4] != 0) {
                                  fVar60 = (float)FUN_028598f0(param_1[0xe4],0);
                                  dVar70 = DAT_028aa048;
                                  dVar72 = modf(DAT_028aa048,&local_fe0);
                                  if (dVar72 == 0.5) {
                                    fVar57 = (float)local_fe0;
                                    if (((long)local_fe0 & 1U) != 0) {
                                      fVar57 = (float)local_fe0 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar57 = 255.0;
                                  }
                                  dVar72 = modf(dVar70,&local_fe0);
                                  if (dVar72 == 0.5) {
                                    fVar84 = (float)local_fe0;
                                    if (((long)local_fe0 & 1U) != 0) {
                                      fVar84 = (float)local_fe0 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar84 = 255.0;
                                  }
                                  dVar72 = modf(dVar70,&local_fe0);
                                  if (dVar72 == 0.5) {
                                    fVar83 = (float)local_fe0;
                                    if (((long)local_fe0 & 1U) != 0) {
                                      fVar83 = (float)local_fe0 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar83 = 255.0;
                                  }
                                  dVar72 = modf(dVar70,&local_fe0);
                                  if (dVar72 == 0.5) {
                                    fVar86 = (float)local_fe0;
                                    if (((long)local_fe0 & 1U) != 0) {
                                      fVar86 = (float)local_fe0 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar86 = 255.0;
                                  }
                                  dVar72 = modf(dVar70,&local_fe0);
                                  if (dVar72 == 0.5) {
                                    fVar91 = (float)local_fe0;
                                    if (((long)local_fe0 & 1U) != 0) {
                                      fVar91 = (float)local_fe0 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar91 = 255.0;
                                  }
                                  dVar72 = modf(dVar70,&local_fe0);
                                  if (dVar72 == 0.5) {
                                    fVar58 = (float)local_fe0;
                                    if (((long)local_fe0 & 1U) != 0) {
                                      fVar58 = (float)local_fe0 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar58 = 255.0;
                                  }
                                  dVar72 = modf(dVar70,&local_fe0);
                                  if (dVar72 == 0.5) {
                                    fVar59 = (float)local_fe0;
                                    if (((long)local_fe0 & 1U) != 0) {
                                      fVar59 = (float)local_fe0 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar59 = 255.0;
                                  }
                                  dVar70 = modf(dVar70,&local_fe0);
                                  if (dVar70 == 0.5) {
                                    fVar92 = (float)local_fe0;
                                    if (((long)local_fe0 & 1U) != 0) {
                                      fVar92 = (float)local_fe0 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar92 = 255.0;
                                  }
                                  if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  if (DAT_037825d3 == '\0') {
                                    thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
                                    DAT_037825d3 = '\x01';
                                  }
                                  lVar49 = *(long *)puVar13;
                                  if (*(int *)(lVar49 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                    lVar49 = *(long *)puVar13;
                                  }
                                  puVar39 = *(undefined4 **)(lVar49 + 0xb8);
                                  uVar71 = (ulong)(uint)puVar39[1];
                                  uVar28 = (ulong)(uint)puVar39[2];
                                  uVar31 = (ulong)(uint)puVar39[3];
                                  UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                                            (*puVar39,uVar71,uVar28,uVar31,&local_d0,0x4000ffff,0);
                                  if (*(int *)(*plVar56 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  lVar49 = *plVar2;
                                  if (lVar49 != 0) {
                                    uVar24 = *puVar1;
                                    if ((int)uVar24 < 1) {
                                      local_17b4 = 0;
                                      iVar19 = 0;
                                      goto LAB_02498c58;
                                    }
                                    lVar49 = *(long *)(lVar49 + 0x38);
                                    fVar77 = ABS(fVar77);
                                    fVar94 = 1.0;
                                    if ((uVar25 & 1) == 0) {
                                      fVar94 = fVar77;
                                    }
                                    if (lVar49 != 0) {
                                      bVar17 = false;
                                      bVar10 = false;
                                      bVar9 = false;
                                      bVar16 = false;
                                      uVar21 = (int)fVar57 & 0xffU | ((int)fVar84 & 0xffU) << 8 |
                                               ((int)fVar83 & 0xffU) << 0x10 | (int)fVar86 << 0x18;
                                      local_1790 = *(float *)(*(long *)(*plVar56 + 0xb8) + 0x15a8);
                                      local_1794 = 0.0;
                                      local_1804 = 0.0;
                                      local_182c = 0.0;
                                      fVar84 = 0.0;
                                      local_1830 = 0.0;
                                      uVar53 = 0;
                                      iVar20 = 0;
                                      lVar34 = 0x2e0;
                                      local_17dc = (int)fVar91 & 0xffU | ((int)fVar58 & 0xffU) << 8
                                                   | ((int)fVar59 & 0xffU) << 0x10 |
                                                   (int)fVar92 << 0x18;
                                      fVar83 = 0.0;
                                      fVar57 = 0.0;
                                      local_17b4 = 0;
                                      local_1840 = 0;
                                      local_1814 = 0;
                                      uVar75 = 0;
                                      uVar44 = 1;
                                      local_17f4 = local_180c;
                                      local_17e4 = local_1810;
                                      local_17e0 = local_1808;
                                      local_17c0 = local_180c;
                                      local_17bc = local_1808;
                                      local_17b8 = local_1810;
                                      local_17b0 = local_1808;
                                      local_17ac = local_1810;
                                      goto LAB_02496a50;
                                    }
                                  }
                                }
                              }
                            }
                          }
                          goto LAB_0249920c;
                        }
                        if (*(uint *)(lVar34 + 0x18) <= uVar21)
                        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                        uVar21 = *(uint *)(lVar34 + (long)(int)uVar21 * 0xc + 0x20);
                        if (uVar21 == 0) goto LAB_02495f1c;
                        uStack_a4 = uVar21;
                        if (5 < iVar19) {
                          uVar74 = FUN_0176eb1c(&uStack_a4,0);
                          uVar27 = FUN_0176eb1c(&local_d8,0);
                          uVar74 = FUN_0160073c(*(undefined8 *)
                                                 UnityEngine_Rendering_Universal_DebugValidationMode_var
                                                ,uVar74,*(undefined8 *)
                                                                                                                  
                                                  Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                                                ,uVar27,0);
                          if (*(int *)(*plVar51 + 0xe0) == 0) {
                            thunk_FUN_00d32864(*plVar51);
                          }
                          FUN_026610e4(uVar74,0);
                          local_b8 = CONCAT44(3,*puVar1);
                        }
                        if ((*(char *)((long)param_1 + 0x2fa) == '\0') || (uStack_a4 != 0x3c)) {
                          if ((*plVar2 == 0) || (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 == 0))
                          goto LAB_0249920c;
                          if (*(uint *)(lVar34 + 0x18) <= *puVar1)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                          lVar34 = lVar34 + (long)(int)*puVar1 * 0x178;
                          *(undefined4 *)((long)param_1 + 0x63c) = *(undefined4 *)(lVar34 + 0x2c);
                          *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(lVar34 + 0x58);
                          param_1[0x1f] = *(long *)(lVar34 + 0x38);
UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor:
                          if ((param_1[0x6c] == 0) ||
                             (lVar34 = *(long *)(param_1[0x6c] + 0x38), lVar34 == 0))
                          goto LAB_0249920c;
                          uVar21 = *puVar1;
                          if (*(uint *)(lVar34 + 0x18) <= uVar21)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                          lVar54 = (long)(int)uVar21;
                          cVar36 = *(char *)(lVar34 + lVar54 * 0x178 + 0x5c);
                          *(undefined1 *)((long)param_1 + 0x429) = 0;
                          lVar26 = param_1[0x23];
                          if ((uint)local_b8 == uVar21) {
                            bVar9 = true;
                            uStack_a4 = local_b8._4_4_;
                            *(undefined4 *)((long)param_1 + 0x63c) = 0;
                            if (local_b8._4_4_ == 0x2026) {
                              lVar29 = param_1[0xc9];
                              lVar34 = lVar34 + lVar54 * 0x178;
                              *(undefined4 *)(lVar34 + 0x2c) = 0;
                              *(long *)(lVar34 + 0x30) = lVar29;
                              *(long *)(lVar34 + 0x38) = param_1[0xca];
                              *(long *)(lVar34 + 0x50) = param_1[0xcb];
                              *(int *)(lVar34 + 0x58) = (int)param_1[0xcc];
                              *(undefined1 *)(param_1 + 0x5e) = 1;
                              local_b8 = CONCAT44(3,uVar21 + 1);
                            }
                            else if (local_b8._4_4_ == 3) {
                              if ((*plVar37 == 0) ||
                                 (lVar29 = FUN_024b11ac(*plVar37,0), lVar29 == 0))
                              goto LAB_0249920c;
                              local_c68 = 3;
                              FUN_01299bc0(lVar29,&local_c68,&local_fe0,
                                           *(undefined8 *)PTR_DAT_033ef3c8);
                              if (*(uint *)(lVar34 + 0x18) <= uVar21)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              bVar9 = true;
                              *(double *)(lVar34 + lVar54 * 0x178 + 0x30) = local_fe0;
                              uVar21 = *(uint *)((long)param_1 + 0x48c);
                              *(undefined1 *)(param_1 + 0x5e) = 1;
                            }
                          }
                          else {
                            bVar9 = false;
                          }
                          uVar53 = uStack_a4;
                          if (((int)uVar21 < *(int *)((long)param_1 + 0x31c)) && (uStack_a4 != 3)) {
                            if ((*plVar2 == 0) || (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 == 0))
                            goto LAB_0249920c;
                            if (*(uint *)(lVar34 + 0x18) <= uVar21)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            lVar34 = lVar34 + (long)(int)uVar21 * 0x178;
                            *(undefined1 *)(lVar34 + 0x194) = 0;
                            *(undefined2 *)(lVar34 + 0x20) = 0x200b;
                            *(undefined4 *)(lVar34 + 100) = 0;
                            *puVar1 = uVar21 + 1;
                          }
                          else {
                            iVar20 = *(int *)((long)param_1 + 0x63c);
                            local_176c = fVar63;
                            if (iVar20 == 0) {
                              uVar21 = *(uint *)((long)param_1 + 0x254);
                              if ((uVar21 >> 4 & 1) == 0) {
                                if ((uVar21 >> 3 & 1) == 0) {
                                  if ((uVar21 >> 5 & 1) != 0) {
                                    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo
                                                + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                    }
                                    uVar28 = FUN_016f92d4(uVar53,0);
                                    uVar21 = uStack_a4;
                                    if ((uVar28 & 1) != 0) {
                                      if (*(int *)(*(long *)
                                                  Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0)
                                          == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      uStack_a4 = FUN_016f95a8(uVar21,0);
                                      uStack_a4 = uStack_a4 & 0xffff;
                                      local_176c = fVar82;
                                    }
                                  }
                                }
                                else {
                                  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo +
                                              0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar28 = FUN_016f9218(uVar53,0);
                                  uVar21 = uStack_a4;
                                  if ((uVar28 & 1) != 0) {
                                    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo
                                                + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                    }
                                    uStack_a4 = FUN_016f9724(uVar21,0);
                                    goto LAB_02492a0c;
                                  }
                                }
                              }
                              else {
                                if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo +
                                            0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar28 = FUN_016f92d4(uVar53,0);
                                uVar21 = uStack_a4;
                                local_176c = 1.0;
                                if ((uVar28 & 1) != 0) {
                                  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo +
                                              0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uStack_a4 = FUN_016f95a8(uVar21,0);
LAB_02492a0c:
                                  uStack_a4 = uStack_a4 & 0xffff;
                                  local_176c = 1.0;
                                }
                              }
                              iVar20 = *(int *)((long)param_1 + 0x63c);
                              if (iVar20 == 0) goto LAB_02492a20;
LAB_0249265c:
                              if (iVar20 == 1) {
                                if ((*plVar2 == 0) ||
                                   (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 == 0))
                                goto LAB_0249920c;
                                if (*(uint *)(lVar34 + 0x18) <= *puVar1)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                ;
                                lVar34 = lVar34 + (long)(int)*puVar1 * 0x178;
                                lVar54 = *(long *)(lVar34 + 0x40);
                                param_1[0xd2] = lVar54;
                                *(undefined4 *)((long)param_1 + 0x69c) =
                                     *(undefined4 *)(lVar34 + 0x48);
                                if ((lVar54 == 0) || (lVar34 = FUN_024ebfa0(lVar54,0), lVar34 == 0))
                                goto LAB_0249920c;
                                FUN_0132138c(lVar34,*(undefined4 *)((long)param_1 + 0x69c),
                                             &local_fe0,
                                             *(undefined8 *)
                                              System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
                                dVar70 = local_fe0;
                                if (local_fe0 == 0.0) goto LAB_02492630;
                                if (uStack_a4 == 0x3c) {
                                  uStack_a4 = *(int *)((long)param_1 + 0x69c) + 0xe000;
                                }
                                else {
                                  lVar34 = *plVar56;
                                  if (*(int *)(lVar34 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                    lVar34 = *plVar56;
                                  }
                                  *(undefined4 *)((long)param_1 + 0x1b4) =
                                       *(undefined4 *)(*(long *)(lVar34 + 0xb8) + 0x68);
                                }
                                if (param_1[0x1f] == 0) goto LAB_0249920c;
                                fVar84 = *(float *)(param_1 + 0x3c);
                                memmove(&local_160,(void *)(param_1[0x1f] + 0x50),0x60);
                                iVar20 = FUN_026fd110(&local_160,0);
                                if (*plVar37 == 0) goto LAB_0249920c;
                                memmove(&local_160,(void *)(*plVar37 + 0x50),0x60);
                                fVar61 = (float)FUN_026fd120(&local_160,0);
                                fVar83 = fVar73;
                                if (*(char *)((long)param_1 + 0x2fd) != '\0') {
                                  fVar83 = 1.0;
                                }
                                if (param_1[0xd2] == 0) goto LAB_0249920c;
                                fVar83 = (fVar84 / (float)iVar20) * fVar61 * fVar83;
                                iVar20 = FUN_026fd110(param_1[0xd2] + 0x48,0);
                                fVar84 = *(float *)(param_1 + 0x3c);
                                if (iVar20 < 1) {
                                  if (*plVar37 == 0) goto LAB_0249920c;
                                  iVar20 = FUN_026fd110(*plVar37 + 0x50,0);
                                  if (*plVar37 == 0) goto LAB_0249920c;
                                  fVar61 = (float)FUN_026fd120(*plVar37 + 0x50,0);
                                  fVar87 = fVar73;
                                  if (*(char *)((long)param_1 + 0x2fd) != '\0') {
                                    fVar87 = fVar63;
                                  }
                                  if (param_1[0x1f] == 0) goto LAB_0249920c;
                                  fVar80 = (float)FUN_026fd140(param_1[0x1f] + 0x50,0);
                                  if (*(long *)((long)dVar70 + 0x20) == 0) goto LAB_0249920c;
                                  FUN_026fd62c(&local_fe0,*(long *)((long)dVar70 + 0x20),0);
                                  uStack_178 = uStack_fd8;
                                  local_180 = local_fe0;
                                  local_170 = (undefined4)local_fd0;
                                  fVar62 = (float)FUN_026fd45c(&local_180,0);
                                  if (*(long *)((long)dVar70 + 0x20) == 0) goto LAB_0249920c;
                                  fVar64 = *(float *)((long)dVar70 + 0x2c);
                                  fVar89 = (float)FUN_026fd668(*(long *)((long)dVar70 + 0x20),0);
                                  if (*plVar37 == 0) goto LAB_0249920c;
                                  fVar63 = (float)FUN_026fd140(*plVar37 + 0x50,0);
                                  if (*plVar37 == 0) goto LAB_0249920c;
                                  fVar78 = (float)FUN_026fd170(*plVar37 + 0x50,0);
                                  if (*plVar37 == 0) goto LAB_0249920c;
                                  fVar65 = *(float *)((long)param_1 + 0x3fc);
                                  local_172c = (float)FUN_026fd120(*plVar37 + 0x50,0);
                                  if (param_1[0x1f] == 0) goto LAB_0249920c;
                                  local_172c = fVar83 * fVar78 * fVar65 * local_172c;
                                  fVar87 = (fVar84 / (float)iVar20) * fVar61 * fVar87;
                                  fVar84 = fVar87 * (fVar80 / fVar62) * fVar64 * fVar89;
                                  fVar87 = fVar87 / fVar84;
                                  fVar63 = fVar87 * fVar63;
                                  fVar83 = (float)FUN_026fd180(param_1[0x1f] + 0x50,0);
                                  fVar87 = fVar87 * fVar83;
                                }
                                else {
                                  if (param_1[0xd2] == 0) goto LAB_0249920c;
                                  iVar20 = FUN_026fd110(param_1[0xd2] + 0x48,0);
                                  if (param_1[0xd2] == 0) goto LAB_0249920c;
                                  fVar61 = (float)FUN_026fd120(param_1[0xd2] + 0x48,0);
                                  if (*(long *)((long)dVar70 + 0x20) == 0) goto LAB_0249920c;
                                  fVar87 = *(float *)((long)dVar70 + 0x2c);
                                  fVar80 = fVar73;
                                  if (*(char *)((long)param_1 + 0x2fd) != '\0') {
                                    fVar80 = 1.0;
                                  }
                                  fVar62 = (float)FUN_026fd668(*(long *)((long)dVar70 + 0x20),0);
                                  if (param_1[0xd2] == 0) goto LAB_0249920c;
                                  fVar63 = (float)FUN_026fd140(param_1[0xd2] + 0x48,0);
                                  if (param_1[0xd2] == 0) goto LAB_0249920c;
                                  fVar64 = (float)FUN_026fd170(param_1[0xd2] + 0x48,0);
                                  if (param_1[0xd2] == 0) goto LAB_0249920c;
                                  fVar89 = *(float *)((long)param_1 + 0x3fc);
                                  local_172c = (float)FUN_026fd120(param_1[0xd2] + 0x48,0);
                                  if (param_1[0xd2] == 0) goto LAB_0249920c;
                                  local_172c = fVar83 * fVar64 * fVar89 * local_172c;
                                  fVar84 = (fVar84 / (float)iVar20) * fVar61 * fVar80 *
                                           fVar87 * fVar62;
                                  fVar87 = (float)FUN_026fd180(param_1[0xd2] + 0x48,0);
                                }
                                lVar34 = param_1[0x6c];
                                param_1[200] = (long)dVar70;
                                if ((lVar34 != 0) &&
                                   (lVar54 = *(long *)(lVar34 + 0x38), lVar54 != 0)) {
                                  if (*puVar1 < *(uint *)(lVar54 + 0x18)) {
                                    lVar54 = lVar54 + (long)(int)*puVar1 * 0x178;
                                    *(undefined4 *)(lVar54 + 0x2c) = 1;
                                    *(float *)(lVar54 + 0x160) = fVar84;
                                    fVar83 = 0.0;
                                    *(long *)(lVar54 + 0x40) = param_1[0xd2];
                                    *(long *)(lVar54 + 0x38) = param_1[0x1f];
                                    *(int *)(lVar54 + 0x58) = (int)param_1[0x23];
                                    *(int *)(param_1 + 0x23) = (int)lVar26;
                                    goto LAB_02492e14;
                                  }
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                }
                                goto LAB_0249920c;
                              }
                              lVar34 = *plVar2;
                              fVar61 = 0.0;
                              if (uStack_a4 != 3 && uStack_a4 != 0xad) {
                                fVar61 = fVar84;
                              }
                              local_172c = 0.0;
                              if (lVar34 == 0) goto LAB_0249920c;
                              fVar63 = 0.0;
                              fVar87 = 0.0;
                            }
                            else {
                              if (iVar20 != 0) goto LAB_0249265c;
LAB_02492a20:
                              if ((*plVar2 == 0) ||
                                 (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 == 0))
                              goto LAB_0249920c;
                              uVar53 = *puVar1;
                              uVar21 = *(uint *)(lVar34 + 0x18);
                              if (uVar21 <= uVar53)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              lVar26 = *(long *)(lVar34 + (long)(int)uVar53 * 0x178 + 0x30);
                              param_1[200] = lVar26;
                              if (lVar26 == 0) goto LAB_02492630;
                              lVar54 = lVar34 + (long)(int)uVar53 * 0x178;
                              lVar26 = *(long *)(lVar54 + 0x38);
                              param_1[0x1f] = lVar26;
                              param_1[0x22] = *(long *)(lVar54 + 0x50);
                              *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(lVar54 + 0x58);
                              if (bVar9) {
                                lVar54 = param_1[0x8e];
                                if (lVar54 == 0) goto LAB_0249920c;
                                if (*(uint *)(lVar54 + 0x18) <= (uint)local_d8)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                ;
                                if ((*(int *)(lVar54 + (long)(int)(uint)local_d8 * 0xc + 0x20) != 10
                                    ) || (uVar53 == *(uint *)(param_1 + 0x92))) goto LAB_02492ab4;
                                if (uVar21 <= uVar53 - 1)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                ;
                                if (lVar26 == 0) goto LAB_0249920c;
                                fVar83 = *(float *)(lVar34 + (long)(int)(uVar53 - 1) * 0x178 + 0x60)
                                ;
                                iVar20 = FUN_026fd110(lVar26 + 0x50,0);
                                lVar34 = *plVar37;
                              }
                              else {
LAB_02492ab4:
                                if (lVar26 == 0) goto LAB_0249920c;
                                fVar83 = *(float *)(param_1 + 0x3c);
                                iVar20 = FUN_026fd110(lVar26 + 0x50,0);
                                lVar34 = param_1[0x1f];
                              }
                              if (lVar34 == 0) goto LAB_0249920c;
                              fVar80 = (float)FUN_026fd120(lVar34 + 0x50,0);
                              fVar61 = fVar73;
                              if (*(char *)((long)param_1 + 0x2fd) != '\0') {
                                fVar61 = fVar63;
                              }
                              fVar87 = 0.0;
                              fVar63 = 0.0;
                              if (!(bool)(bVar9 & uStack_a4 == 0x2026)) {
                                if (*plVar37 == 0) goto LAB_0249920c;
                                fVar63 = (float)FUN_026fd140(*plVar37 + 0x50,0);
                                if (*plVar37 == 0) goto LAB_0249920c;
                                fVar87 = (float)FUN_026fd180(*plVar37 + 0x50,0);
                              }
                              lVar34 = param_1[200];
                              if ((lVar34 == 0) || (*(long *)(lVar34 + 0x20) == 0))
                              goto LAB_0249920c;
                              fVar62 = *(float *)((long)param_1 + 0x3fc);
                              fVar64 = *(float *)(lVar34 + 0x2c);
                              fVar84 = (float)FUN_026fd668(*(long *)(lVar34 + 0x20),0);
                              if (*plVar37 == 0) goto LAB_0249920c;
                              fVar89 = (float)FUN_026fd170(*plVar37 + 0x50,0);
                              if (*plVar37 == 0) goto LAB_0249920c;
                              fVar78 = *(float *)((long)param_1 + 0x3fc);
                              local_172c = (float)FUN_026fd120(*plVar37 + 0x50,0);
                              lVar34 = param_1[0x6c];
                              if ((lVar34 == 0) || (lVar26 = *(long *)(lVar34 + 0x38), lVar26 == 0))
                              goto LAB_0249920c;
                              if (*(uint *)(lVar26 + 0x18) <= *puVar1)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              lVar26 = lVar26 + (long)(int)*puVar1 * 0x178;
                              *(undefined4 *)(lVar26 + 0x2c) = 0;
                              fVar61 = ((local_176c * fVar83) / (float)iVar20) * fVar80 * fVar61;
                              fVar84 = fVar61 * fVar62 * fVar64 * fVar84;
                              *(float *)(lVar26 + 0x160) = fVar84;
                              uVar21 = *(uint *)(param_1 + 0x23);
                              local_172c = fVar61 * fVar89 * fVar78 * local_172c;
                              if (uVar21 == 0) {
                                fVar83 = *(float *)(param_1 + 0xc2);
                              }
                              else {
                                lVar26 = param_1[0xe0];
                                if (lVar26 == 0) goto LAB_0249920c;
                                if (*(uint *)(lVar26 + 0x18) <= uVar21)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                ;
                                lVar26 = *(long *)(lVar26 + (long)(int)uVar21 * 8 + 0x20);
                                if (lVar26 == 0) goto LAB_0249920c;
                                fVar83 = *(float *)(lVar26 + 0x104);
                              }
LAB_02492e14:
                              fVar61 = 0.0;
                              if (uStack_a4 != 3 && uStack_a4 != 0xad) {
                                fVar61 = fVar84;
                              }
                            }
                            lVar34 = *(long *)(lVar34 + 0x38);
                            if (lVar34 == 0) goto LAB_0249920c;
                            if (*(uint *)(lVar34 + 0x18) <= *puVar1)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            lVar34 = lVar34 + (long)(int)*puVar1 * 0x178;
                            *(short *)(lVar34 + 0x20) = (short)uStack_a4;
                            *(int *)(lVar34 + 0x60) = (int)param_1[0x3c];
                            *(undefined4 *)(lVar34 + 0x164) = *(undefined4 *)((long)param_1 + 0x4e4)
                            ;
                            if ((param_1[0x6c] == 0) ||
                               (lVar34 = *(long *)(param_1[0x6c] + 0x38), lVar34 == 0))
                            goto LAB_0249920c;
                            if (*(uint *)(lVar34 + 0x18) <= *puVar1)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            *(int *)(lVar34 + (long)(int)*puVar1 * 0x178 + 0x168) =
                                 (int)param_1[0x2a];
                            if ((param_1[0x6c] == 0) ||
                               (lVar34 = *(long *)(param_1[0x6c] + 0x38), lVar34 == 0))
                            goto LAB_0249920c;
                            if (*(uint *)(lVar34 + 0x18) <= *puVar1)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            *(undefined4 *)(lVar34 + (long)(int)*puVar1 * 0x178 + 0x170) =
                                 *(undefined4 *)((long)param_1 + 0x154);
                            if ((param_1[0x6c] == 0) ||
                               (lVar34 = *(long *)(param_1[0x6c] + 0x38), lVar34 == 0))
                            goto LAB_0249920c;
                            uVar21 = *puVar1;
                            FUN_013b78b8(param_1 + 0xa9,&local_fe0,
                                         *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
                            if (*(uint *)(lVar34 + 0x18) <= uVar21)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            lVar34 = lVar34 + (long)(int)uVar21 * 0x178;
                            *(undefined4 *)(lVar34 + 0x18c) = (undefined4)local_fd0;
                            *(undefined8 *)(lVar34 + 0x184) = uStack_fd8;
                            *(double *)(lVar34 + 0x17c) = local_fe0;
                            if ((*plVar2 == 0) || (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 == 0))
                            goto LAB_0249920c;
                            if (*(uint *)(lVar34 + 0x18) <= *puVar1)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            *(undefined4 *)(lVar34 + (long)(int)*puVar1 * 0x178 + 400) =
                                 *(undefined4 *)((long)param_1 + 0x254);
                            if ((param_1[200] == 0) ||
                               (lVar34 = *(long *)(param_1[200] + 0x20), lVar34 == 0))
                            goto LAB_0249920c;
                            FUN_026fd62c(&local_c68,lVar34,0);
                            uVar21 = uStack_a4;
                            puVar12 = 
                            Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                            ;
                            local_f0 = CONCAT44(uStack_c64,local_c68);
                            uStack_e8 = uStack_c60;
                            local_e0 = local_c58;
                            if ((int)uStack_a4 < 0x10000) {
                              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0
                                          ) == 0) {
                                thunk_FUN_00d32864();
                              }
                              uVar21 = FUN_016f68bc(uVar21,0);
                              uVar21 = uVar21 & 1;
                            }
                            else {
                              uVar21 = 0;
                            }
                            local_1794 = *(float *)(param_1 + 0x54);
                            *(undefined4 *)((long)param_1 + 0x2f4) = 0;
                            if (*(char *)((long)param_1 + 0x2f1) == '\0') {
                              fVar64 = 0.0;
                              fVar62 = 0.0;
                              fVar80 = 0.0;
                            }
                            else {
                              if (param_1[200] == 0) goto LAB_0249920c;
                              uVar75 = *puVar1;
                              uVar53 = *(uint *)(param_1[200] + 0x28);
                              if ((int)uVar75 < (int)uVar24) {
                                if ((*plVar2 == 0) ||
                                   (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 == 0))
                                goto LAB_0249920c;
                                if (*(uint *)(lVar34 + 0x18) <= uVar75 + 1)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                ;
                                lVar34 = *(long *)(lVar34 + (long)(int)(uVar75 + 1) * 0x178 + 0x30);
                                if ((((lVar34 == 0) || (*plVar37 == 0)) ||
                                    (lVar26 = *(long *)(*plVar37 + 0x128), lVar26 == 0)) ||
                                   (lVar26 = *(long *)(lVar26 + 0x18), lVar26 == 0))
                                goto LAB_0249920c;
                                local_fe0 = (double)CONCAT44(local_fe0._4_4_,
                                                             uVar53 | *(int *)(lVar34 + 0x28) <<
                                                                      0x10);
                                uVar25 = FUN_0129eff4(lVar26,&local_fe0,&local_188,
                                                      *(undefined8 *)
                                                                                                              
                                                  Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                                                  );
                                uVar93 = 0;
                                if ((uVar25 & 1) == 0) {
                                  fVar64 = 0.0;
                                  fVar62 = 0.0;
                                  fVar80 = 0.0;
                                }
                                else {
                                  if (local_188 == 0) goto LAB_0249920c;
                                  fVar80 = *(float *)(local_188 + 0x14);
                                  fVar62 = *(float *)(local_188 + 0x18);
                                  fVar64 = *(float *)(local_188 + 0x1c);
                                  uVar93 = *(undefined4 *)(local_188 + 0x20);
                                  if ((*(byte *)(local_188 + 0x39) & 1) != 0) {
                                    local_1794 = 0.0;
                                  }
                                }
                                uVar75 = *puVar1;
                              }
                              else {
                                uVar93 = 0;
                                fVar64 = 0.0;
                                fVar62 = 0.0;
                                fVar80 = 0.0;
                              }
                              if (0 < (int)uVar75) {
                                if ((*plVar2 == 0) ||
                                   (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 == 0))
                                goto LAB_0249920c;
                                if (*(uint *)(lVar34 + 0x18) <= (uint)((long)(int)uVar75 + -1))
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                ;
                                lVar34 = *(long *)(lVar34 + ((long)(int)uVar75 + -1) * 0x178 + 0x30)
                                ;
                                if (((lVar34 == 0) || (*plVar37 == 0)) ||
                                   ((lVar26 = *(long *)(*plVar37 + 0x128), lVar26 == 0 ||
                                    (lVar26 = *(long *)(lVar26 + 0x18), lVar26 == 0))))
                                goto LAB_0249920c;
                                local_fe0 = (double)CONCAT44(local_fe0._4_4_,
                                                             *(uint *)(lVar34 + 0x28) |
                                                             uVar53 << 0x10);
                                uVar25 = FUN_0129eff4(lVar26,&local_fe0,&local_188,
                                                      *(undefined8 *)
                                                                                                              
                                                  Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                                                  );
                                if ((uVar25 & 1) != 0) {
                                  if ((local_188 == 0) ||
                                     (fVar80 = (float)FUN_024bb1bc(fVar80,fVar62,fVar64,uVar93,
                                                                   *(undefined4 *)(local_188 + 0x28)
                                                                   ,*(undefined4 *)
                                                                     (local_188 + 0x2c),
                                                                   *(undefined4 *)(local_188 + 0x30)
                                                                   ,*(undefined4 *)
                                                                     (local_188 + 0x34),0),
                                     local_188 == 0)) goto LAB_0249920c;
                                  if ((*(byte *)(local_188 + 0x39) & 1) != 0) {
                                    local_1794 = 0.0;
                                  }
                                }
                              }
                              *(float *)((long)param_1 + 0x2f4) = fVar64;
                            }
                            if ((char)param_1[0x1d] != '\0') {
                              fVar78 = *(float *)(param_1 + 199);
                              fVar89 = (float)FUN_026fd474(&local_f0,0);
                              fVar78 = fVar78 - fVar61 * fVar89 * (1.0 - *(float *)((long)param_1 +
                                                                                   0x2cc));
                              *(float *)(param_1 + 199) = fVar78;
                              if ((uVar21 != 0) || (uStack_a4 == 0x200b)) {
                                *(float *)(param_1 + 199) =
                                     fVar78 - fVar60 * *(float *)((long)param_1 + 0x2ac);
                              }
                            }
                            fVar78 = *(float *)(param_1 + 0x55);
                            fVar89 = 0.0;
                            if (fVar78 != 0.0) {
                              fVar89 = (float)FUN_026fd454(&local_f0,0);
                              fVar65 = (float)FUN_026fd464(&local_f0,0);
                              fVar89 = (1.0 - *(float *)((long)param_1 + 0x2cc)) *
                                       (fVar78 * 0.5 - fVar61 * (fVar89 * 0.5 + fVar65));
                              *(float *)(param_1 + 199) = *(float *)(param_1 + 199) + fVar89;
                            }
                            if (((cVar36 == '\0') && (*(int *)((long)param_1 + 0x63c) == 0)) &&
                               ((*(byte *)((long)param_1 + 0x254) & 1) != 0)) {
                              lVar34 = param_1[0x22];
                              if (*(int *)(*(long *)
                                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                          + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              uVar25 = FUN_02681b9c(lVar34,0,0);
                              fVar66 = 0.0;
                              if ((uVar25 & 1) != 0) {
                                lVar34 = param_1[0x22];
                                if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                if (lVar34 == 0) goto LAB_0249920c;
                                uVar25 = FUN_0267e1d8(lVar34,*(undefined4 *)
                                                              (*(long *)(*(long *)puVar12 + 0xb8) +
                                                              0x54),0);
                                fVar66 = 0.0;
                                if ((uVar25 & 1) != 0) {
                                  lVar34 = param_1[0x22];
                                  if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  if (lVar34 == 0) goto LAB_0249920c;
                                  fVar78 = (float)FUN_0267f610(lVar34,*(undefined4 *)
                                                                       (*(long *)(*(long *)puVar12 +
                                                                                 0xb8) + 0x54),0);
                                  if ((*plVar37 == 0) || (param_1[0x22] == 0)) goto LAB_0249920c;
                                  fVar65 = *(float *)(*plVar37 + 0x1b0);
                                  fVar66 = (float)FUN_0267f610(param_1[0x22],
                                                               *(undefined4 *)
                                                                (*(long *)(*(long *)puVar12 + 0xb8)
                                                                + 0xcc),0);
                                  fVar66 = fVar66 * fVar78 * fVar65 * 0.25;
                                  if (fVar78 < fVar83 + fVar66) {
                                    fVar83 = fVar78 - fVar66;
                                  }
                                }
                              }
                              if (*plVar37 == 0) goto LAB_0249920c;
                              fVar78 = *(float *)(*plVar37 + 0x1b4);
                            }
                            else {
                              lVar34 = param_1[0x22];
                              if (*(int *)(*(long *)
                                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                          + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              uVar25 = FUN_02681b9c(lVar34,0,0);
                              fVar78 = 0.0;
                              if ((uVar25 & 1) != 0) {
                                lVar34 = param_1[0x22];
                                if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                if (lVar34 == 0) goto LAB_0249920c;
                                uVar25 = FUN_0267e1d8(lVar34,*(undefined4 *)
                                                              (*(long *)(*(long *)puVar12 + 0xb8) +
                                                              0x54),0);
                                if ((uVar25 & 1) != 0) {
                                  lVar34 = param_1[0x22];
                                  if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  if (lVar34 == 0) goto LAB_0249920c;
                                  uVar25 = FUN_0267e1d8(lVar34,*(undefined4 *)
                                                                (*(long *)(*(long *)puVar12 + 0xb8)
                                                                + 0xcc),0);
                                  if ((uVar25 & 1) != 0) {
                                    lVar34 = param_1[0x22];
                                    if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                    }
                                    if (lVar34 != 0) {
                                      fVar65 = (float)FUN_0267f610(lVar34,*(undefined4 *)
                                                                           (*(long *)(*(long *)
                                                  puVar12 + 0xb8) + 0x54),0);
                                      if ((*plVar37 != 0) && (param_1[0x22] != 0)) {
                                        fVar79 = *(float *)(*plVar37 + 0x1a8);
                                        fVar66 = (float)FUN_0267f610(param_1[0x22],
                                                                     *(undefined4 *)
                                                                      (*(long *)(*(long *)puVar12 +
                                                                                0xb8) + 0xcc),0);
                                        fVar66 = fVar66 * fVar65 * fVar79 * 0.25;
                                        if (fVar65 < fVar83 + fVar66) {
                                          fVar83 = fVar65 - fVar66;
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
                            fStack_1774 = *(float *)(param_1 + 199);
                            fVar65 = (float)FUN_026fd464(&local_f0,0);
                            fStack_1774 = fStack_1774 +
                                          (1.0 - *(float *)((long)param_1 + 0x2cc)) *
                                          fVar61 * (fVar80 + ((fVar65 - fVar83) - fVar66));
                            fVar80 = (float)FUN_026fd46c(&local_f0,0);
                            fVar65 = *(float *)((long)param_1 + 0x614) +
                                     ((local_172c + fVar61 * (fVar62 + fVar83 + fVar80)) -
                                     *(float *)(param_1 + 0x9a));
                            fVar80 = (float)FUN_026fd45c(&local_f0,0);
                            fVar79 = fVar65 - fVar61 * (fVar83 + fVar83 + fVar80);
                            fVar80 = (float)FUN_026fd454(&local_f0,0);
                            fVar62 = fStack_1774 +
                                     (1.0 - *(float *)((long)param_1 + 0x2cc)) *
                                     fVar61 * (fVar66 + fVar66 + fVar83 + fVar83 + fVar80);
                            local_1778 = fStack_1774;
                            fVar80 = fVar62;
                            if (((*(int *)((long)param_1 + 0x63c) == 0) && (cVar36 == '\0')) &&
                               ((*(byte *)((long)param_1 + 0x254) >> 1 & 1) != 0)) {
                              fVar67 = (float)(int)param_1[0xbd] * fVar76;
                              fVar80 = (float)FUN_026fd46c(&local_f0,0);
                              fVar88 = fVar67 * fVar61 * (fVar66 + fVar83 + fVar80);
                              fVar80 = (float)FUN_026fd46c(&local_f0,0);
                              fVar95 = (float)FUN_026fd45c(&local_f0,0);
                              fVar65 = fVar65 + 0.0;
                              fVar79 = fVar79 + 0.0;
                              fVar67 = fVar67 * fVar61 * (((fVar80 - fVar95) - fVar83) - fVar66);
                              fVar80 = fVar62 + fVar67;
                              fVar95 = fStack_1774 + fVar88;
                              fVar68 = (fVar88 - fVar67) * 0.5;
                              fStack_1774 = (fStack_1774 + fVar67) - fVar68;
                              fVar62 = (fVar62 + fVar88) - fVar68;
                              local_1778 = fVar95 - fVar68;
                              fVar80 = fVar80 - fVar68;
                            }
                            if (*(char *)((long)param_1 + 0x46c) == '\0') {
                              fVar68 = 0.0;
                              fVar69 = 0.0;
                              fVar81 = 0.0;
                              fVar67 = 0.0;
                              fVar88 = fVar79;
                              fVar95 = fVar65;
                            }
                            else {
                              thunk_FUN_026935f0(lVar49,0);
                              fVar85 = (fVar62 + fStack_1774) * 0.5;
                              fVar90 = (fVar79 + fVar65) * 0.5;
                              fVar65 = fVar65 - fVar90;
                              fVar67 = 0.0;
                              fVar95 = fVar65;
                              local_1778 = (float)FUN_02692df0(local_1778 - fVar85,lVar49,0);
                              local_1778 = fVar85 + local_1778;
                              fVar67 = fVar67 + 0.0;
                              fVar79 = fVar79 - fVar90;
                              fVar68 = 0.0;
                              fVar88 = fVar79;
                              fStack_1774 = (float)FUN_02692df0(fStack_1774 - fVar85,lVar49,0);
                              fStack_1774 = fVar85 + fStack_1774;
                              fVar68 = fVar68 + 0.0;
                              fVar81 = 0.0;
                              fVar62 = (float)FUN_02692df0(fVar62 - fVar85,lVar49,0);
                              fVar62 = fVar85 + fVar62;
                              fVar65 = fVar90 + fVar65;
                              fVar81 = fVar81 + 0.0;
                              fVar69 = 0.0;
                              fVar80 = (float)FUN_02692df0(fVar80 - fVar85,lVar49,0);
                              fVar80 = fVar85 + fVar80;
                              fVar79 = fVar90 + fVar79;
                              fVar69 = fVar69 + 0.0;
                              fVar88 = fVar90 + fVar88;
                              fVar95 = fVar90 + fVar95;
                            }
                            if (*plVar2 == 0) goto LAB_0249920c;
                            lVar34 = *(long *)(*plVar2 + 0x38);
                            uVar25 = (ulong)(uint)fVar61;
                            if (lVar34 == 0) goto LAB_0249920c;
                            if (*(uint *)(lVar34 + 0x18) <= *puVar1)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            lVar34 = lVar34 + (long)(int)*puVar1 * 0x178;
                            *(float *)(lVar34 + 0x120) = fVar88;
                            *(float *)(lVar34 + 0x11c) = fStack_1774;
                            *(float *)(lVar34 + 0x124) = fVar68;
                            if ((*plVar2 == 0) || (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 == 0))
                            goto LAB_0249920c;
                            if (*(uint *)(lVar34 + 0x18) <= *puVar1)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            lVar34 = lVar34 + (long)(int)*puVar1 * 0x178;
                            *(float *)(lVar34 + 0x114) = fVar95;
                            *(float *)(lVar34 + 0x110) = local_1778;
                            *(float *)(lVar34 + 0x118) = fVar67;
                            if ((*plVar2 == 0) || (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 == 0))
                            goto LAB_0249920c;
                            if (*(uint *)(lVar34 + 0x18) <= *puVar1)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            lVar34 = lVar34 + (long)(int)*puVar1 * 0x178;
                            *(float *)(lVar34 + 0x128) = fVar62;
                            *(float *)(lVar34 + 300) = fVar65;
                            *(float *)(lVar34 + 0x130) = fVar81;
                            if ((*plVar2 == 0) || (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 == 0))
                            goto LAB_0249920c;
                            if (*(uint *)(lVar34 + 0x18) <= *puVar1)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            lVar34 = lVar34 + (long)(int)*puVar1 * 0x178;
                            *(float *)(lVar34 + 0x134) = fVar80;
                            *(float *)(lVar34 + 0x138) = fVar79;
                            *(float *)(lVar34 + 0x13c) = fVar69;
                            if ((*plVar2 == 0) || (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 == 0))
                            goto LAB_0249920c;
                            uVar53 = *puVar1;
                            lVar26 = (long)(int)uVar53;
                            if (*(uint *)(lVar34 + 0x18) <= uVar53)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            lVar54 = lVar34 + lVar26 * 0x178;
                            *(int *)(lVar54 + 0x140) = (int)param_1[199];
                            fVar65 = *(float *)(param_1 + 0x9a);
                            uVar71 = (ulong)(uint)fVar65;
                            fVar80 = *(float *)((long)param_1 + 0x614);
                            *(float *)(lVar54 + 0x15c) = (fVar62 - fStack_1774) / (fVar95 - fVar88);
                            *(float *)(lVar54 + 0x14c) = (local_172c - fVar65) + fVar80;
                            fVar63 = fVar63 * fVar61;
                            if (*(int *)((long)param_1 + 0x63c) == 0) {
                              fVar63 = fVar63 / local_176c;
                              fVar87 = (fVar87 * fVar61) / local_176c;
                            }
                            else {
                              fVar87 = fVar87 * fVar61;
                            }
                            uVar75 = *(uint *)(param_1 + 0x92);
                            bVar17 = uVar21 != 0;
                            fVar63 = fVar80 + fVar63;
                            bVar18 = uVar53 != uVar75;
                            if (bVar18 && bVar17) {
                              fVar80 = *(float *)(param_1 + 0x98);
                              lVar34 = lVar34 + lVar26 * 0x178;
                              *(float *)(lVar34 + 0x154) = fVar80;
                              fVar87 = *(float *)((long)param_1 + 0x4c4);
                              *(float *)(lVar34 + 0x148) = fVar80 - fVar65;
                              *(float *)(lVar34 + 0x158) = fVar87;
                              *(float *)(param_1 + 0x97) = fVar80 - fVar65;
                              fVar87 = fVar87 - fVar65;
                              *(float *)(lVar34 + 0x150) = fVar87;
                            }
                            else {
                              fVar87 = fVar80 + fVar87;
                              fVar62 = fVar63;
                              fVar79 = fVar87;
                              if (fVar80 != 0.0) {
                                fVar62 = (fVar63 - fVar80) / *(float *)((long)param_1 + 0x3fc);
                                fVar79 = (fVar87 - fVar80) / *(float *)((long)param_1 + 0x3fc);
                                if (fVar62 <= fVar63) {
                                  fVar62 = fVar63;
                                }
                                if (fVar87 <= fVar79) {
                                  fVar79 = fVar87;
                                }
                              }
                              lVar34 = lVar34 + lVar26 * 0x178;
                              fVar80 = fVar62;
                              if (fVar62 <= *(float *)(param_1 + 0x98)) {
                                fVar80 = *(float *)(param_1 + 0x98);
                              }
                              fVar95 = fVar79;
                              if (*(float *)((long)param_1 + 0x4c4) <= fVar79) {
                                fVar95 = *(float *)((long)param_1 + 0x4c4);
                              }
                              *(float *)((long)param_1 + 0x4c4) = fVar95;
                              fVar87 = fVar87 - fVar65;
                              *(float *)(param_1 + 0x98) = fVar80;
                              *(float *)(lVar34 + 0x154) = fVar62;
                              *(float *)(lVar34 + 0x158) = fVar79;
                              *(float *)(lVar34 + 0x148) = fVar63 - fVar65;
                              *(float *)(param_1 + 0x97) = fVar63 - fVar65;
                              *(float *)(lVar34 + 0x150) = fVar87;
                            }
                            *(float *)((long)param_1 + 0x4bc) = fVar87;
                            if (((int)param_1[0x94] == 0) ||
                               (*(char *)((long)param_1 + 0x334) != '\0')) {
                              if (!bVar18 || !bVar17) {
                                *(float *)(param_1 + 0x96) = fVar80;
                                if (param_1[0x1f] != 0) {
                                  fVar80 = *(float *)((long)param_1 + 0x4b4);
                                  fVar87 = (float)FUN_026fd150(param_1[0x1f] + 0x50,0);
                                  local_176c = (fVar61 * fVar87) / local_176c;
                                  uVar71 = (ulong)*(uint *)(param_1 + 0x9a);
                                  if (fVar80 <= local_176c) {
                                    fVar80 = local_176c;
                                  }
                                  *(float *)((long)param_1 + 0x4b4) = fVar80;
                                  goto LAB_02493948;
                                }
                                goto LAB_0249920c;
                              }
                            }
                            else {
LAB_02493948:
                              if ((!bVar18 || !bVar17) && (float)uVar71 == 0.0) {
                                fVar80 = *(float *)((long)param_1 + 0x4ac);
                                if (*(float *)((long)param_1 + 0x4ac) <= fVar63) {
                                  fVar80 = fVar63;
                                }
                                *(float *)((long)param_1 + 0x4ac) = fVar80;
                              }
                            }
                            uVar44 = uStack_a4;
                            lVar34 = *plVar2;
                            if ((lVar34 == 0) || (lVar26 = *(long *)(lVar34 + 0x38), lVar26 == 0))
                            goto LAB_0249920c;
                            uVar43 = *puVar1;
                            if (*(uint *)(lVar26 + 0x18) <= uVar43)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            lVar26 = lVar26 + (long)(int)uVar43 * 0x178;
                            *(undefined1 *)(lVar26 + 0x194) = 0;
                            uVar52 = *(uint *)(param_1 + 0x4e);
                            if ((uStack_a4 == 9) ||
                               (((((uVar21 == 0 && (uStack_a4 != 3)) && (uStack_a4 != 0x200b)) &&
                                 (uStack_a4 != 0xad)) ||
                                (((bool)(uStack_a4 == 0xad & (bVar16 ^ 1U)) ||
                                 (*(int *)((long)param_1 + 0x63c) == 1)))))) {
                              *(undefined1 *)(lVar26 + 0x194) = 1;
                              pfVar41 = (float *)((long)param_1 + 0x34c);
                              pfVar38 = (float *)(param_1 + 0x69);
                              if (bVar9) {
                                lVar34 = *(long *)(lVar34 + 0x50);
                                if (lVar34 == 0) goto LAB_0249920c;
                                if (*(uint *)(lVar34 + 0x18) <= *(uint *)(param_1 + 0x94))
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                ;
                                lVar34 = lVar34 + (long)(int)*(uint *)(param_1 + 0x94) * 0x5c;
                                pfVar38 = (float *)(lVar34 + 0x60);
                                pfVar41 = (float *)(lVar34 + 100);
                              }
                              fVar80 = *pfVar38;
                              fVar87 = *pfVar41;
                              fVar63 = *(float *)(param_1 + 0x6b);
                              fVar62 = *(float *)(param_1 + 199);
                              local_178c = (fVar92 - fVar80) - fVar87;
                              bVar17 = true;
                              if ((fVar63 <= local_178c) && (bVar17 = false, !NAN(fVar63))) {
                                bVar17 = fVar63 == -1.0;
                              }
                              if (!bVar17) {
                                local_178c = fVar63;
                              }
                              fVar63 = 0.0;
                              if ((char)param_1[0x1d] == '\0') {
                                fVar63 = (float)FUN_026fd474(&local_f0,0);
                                uVar71 = (ulong)*(uint *)(param_1 + 0x9a);
                              }
                              fVar95 = *(float *)((long)param_1 + 0x4c4);
                              fVar65 = *(float *)((long)param_1 + 0x2cc);
                              fVar79 = (float)uVar71;
                              if (uStack_a4 != 0xad) {
                                fVar84 = fVar61;
                              }
                              fVar67 = 0.0;
                              if ((0.0 < fVar79) &&
                                 (fVar67 = 0.0, *(char *)((long)param_1 + 700) == '\0')) {
                                fVar67 = *(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x99);
                              }
                              fVar67 = (*(float *)(param_1 + 0x96) - (fVar95 - fVar79)) + fVar67;
                              uVar44 = *puVar1;
                              if (fVar86 < fVar67) {
                                if (*(int *)((long)param_1 + 0x2dc) == -1) {
                                  *(uint *)((long)param_1 + 0x2dc) = uVar44;
                                }
                                plVar51 = (long *)StringLiteral_302;
                                plVar56 = (long *)System_Threading_Mutex_TypeInfo;
                                uVar74 = DAT_02941c08;
                                if ((char)param_1[0x46] != '\0') {
                                  fVar68 = *(float *)(param_1 + 0x58);
                                  if (((fVar68 < *(float *)((long)param_1 + 0x2b4)) &&
                                      (0.0 < fVar79)) &&
                                     (*(int *)((long)param_1 + 0x23c) < (int)param_1[0x48])) {
                                    fVar77 = *(float *)((long)param_1 + 0x2b4) +
                                             ((fVar94 - fVar67) / (float)(int)param_1[0x94]) /
                                             fVar77;
                                    if (fVar77 <= fVar68) {
                                      fVar77 = fVar68;
                                    }
                                    goto LAB_024964c8;
                                  }
                                  fVar67 = *(float *)((long)param_1 + 0x1dc);
                                  fVar79 = *(float *)(param_1 + 0x49);
                                  uVar71 = (ulong)(uint)fVar79;
                                  if ((fVar79 < fVar67) &&
                                     (*(int *)((long)param_1 + 0x23c) < (int)param_1[0x48])) {
                                    fVar77 = (fVar67 - *(float *)(param_1 + 0x47)) * 0.5;
                                    if (fVar77 <= DAT_028aa298) {
                                      fVar77 = DAT_028aa298;
                                    }
                                    fVar73 = (fVar67 - fVar77) * 20.0 + 0.5;
                                    fVar77 = DAT_02958220;
                                    if (fVar73 != INFINITY) {
                                      fVar77 = (float)(int)fVar73 / 20.0;
                                    }
                                    if (fVar77 <= fVar79) {
                                      fVar77 = fVar79;
                                    }
                                    *(float *)((long)param_1 + 0x234) = fVar67;
                                    goto LAB_02495fd8;
                                  }
                                }
                                switch((int)param_1[0x5b]) {
                                case 1:
                                  lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
                                  if (*(int *)(lVar34 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                    lVar34 = *plVar56;
                                  }
                                  lVar26 = *(long *)(lVar34 + 0xb8);
                                  lVar34 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                                  if ((*(byte *)(lVar34 + 0x132) & 1) == 0) {
                                    lVar34 = FUN_00d5941c(lVar34);
                                  }
                                  plVar51 = (long *)StringLiteral_302;
                                  lVar34 = *(long *)(*(long *)(lVar34 + 0xc0) + 8);
                                  if ((*(byte *)(lVar34 + 0x132) & 1) == 0) {
                                    lVar34 = FUN_00d5941c();
                                  }
                                  piVar30 = (int *)thunk_FUN_00d32ed4(lVar26 + 0x11f0,
                                                                      *(long *)(lVar34 + 0x80) +
                                                                      0xa0);
                                  if (*piVar30 == 0) {
LAB_02495f00:
                                    local_b8 = DAT_02941c08;
                                    local_d8 = CONCAT44(local_d8._4_4_,0xffffffff);
                                    puVar1[0] = 0;
                                    puVar1[1] = 0;
                                  }
                                  else {
                                    lVar34 = *plVar56;
                                    if (*(int *)(lVar34 + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                      lVar34 = *plVar56;
                                    }
                                    FUN_013b8de4(*(long *)(lVar34 + 0xb8) + 0x11f0,&local_fe0,
                                                 *(undefined8 *)
                                                  Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                                );
                                    memcpy(auStack_500,&local_fe0,0x378);
                                    puVar33 = auStack_500;
LAB_02494358:
                                    iVar20 = FUN_024d66ec(param_1,puVar33,0);
LAB_02494364:
                                    local_d8 = CONCAT44(local_d8._4_4_,iVar20 + -1);
                                    iVar20 = *(int *)((long)param_1 + 0x48c) + -1;
                                    *(int *)((long)param_1 + 0x48c) = iVar20;
                                    local_b8 = CONCAT44(0x2026,iVar20);
                                    iVar19 = iVar19 + 1;
                                  }
                                  goto LAB_02492630;
                                default:
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited
                                  ;
                                case 3:
                                  lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
                                  if (*(int *)(lVar34 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                    lVar34 = *plVar56;
                                  }
                                  lVar34 = *(long *)(lVar34 + 0xb8) + 0xb00;
LAB_02493ec0:
                                  plVar51 = (long *)StringLiteral_302;
                                  uVar93 = FUN_024d66ec(param_1,lVar34,0);
LAB_02493ecc:
                                  local_d8 = CONCAT44(local_d8._4_4_,uVar93);
                                  break;
                                case 5:
                                  if ((uVar44 == 0) || ((int)(uint)local_d8 < 0)) {
                                    local_d8 = CONCAT44(local_d8._4_4_,0xffffffff);
                                    *puVar1 = 0;
                                    local_b8 = uVar74;
                                    plVar51 = (long *)StringLiteral_302;
                                    plVar56 = (long *)System_Threading_Mutex_TypeInfo;
                                  }
                                  else {
                                    fVar84 = *(float *)(param_1 + 0x98);
                                    lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
                                    if (*(int *)(lVar34 + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                      lVar34 = *plVar56;
                                    }
                                    uVar93 = FUN_024d66ec(param_1,*(long *)(lVar34 + 0xb8) + 0x410,0
                                                         );
                                    local_d8 = CONCAT44(local_d8._4_4_,uVar93);
                                    if (fVar86 < fVar84 - fVar95) break;
                                    *(undefined1 *)((long)param_1 + 0x334) = 1;
                                    *(undefined4 *)(param_1 + 0x92) =
                                         *(undefined4 *)((long)param_1 + 0x48c);
                                    uVar71 = *(ulong *)(*(long *)(*plVar56 + 0xb8) + 0x15a8);
                                    *(float *)(param_1 + 199) =
                                         *(float *)((long)param_1 + 0x404) + 0.0;
                                    *(undefined4 *)(param_1 + 0x99) = 0;
                                    lVar34 = NEON_rev64(uVar71,4);
                                    param_1[0x98] = lVar34;
                                    *(undefined4 *)(param_1 + 0x9a) = 0;
                                    *(undefined8 *)((long)param_1 + 0x4ac) = 0;
                                    *(int *)(param_1 + 0x94) = (int)param_1[0x94] + 1;
                                    *(int *)(param_1 + 0x95) = (int)param_1[0x95] + 1;
                                  }
                                  goto LAB_02492630;
                                case 6:
                                  lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
                                  if (*(int *)(lVar34 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                    lVar34 = *plVar56;
                                  }
                                  uVar93 = FUN_024d66ec(param_1,*(long *)(lVar34 + 0xb8) + 0xb00,0);
                                  plVar51 = (long *)StringLiteral_302;
                                  local_d8 = CONCAT44(local_d8._4_4_,uVar93);
                                  lVar34 = param_1[0x5c];
                                  if (*(int *)(*(long *)
                                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                              + 0xe0) == 0) {
                                    thunk_FUN_00d32864(*(long *)
                                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                                  );
                                  }
                                  uVar28 = FUN_02681b9c(lVar34,0,0);
                                  if ((uVar28 & 1) != 0) {
                                    plVar55 = (long *)param_1[0x5c];
                                    uVar74 = (**(code **)(*param_1 + 0x548))
                                                       (param_1,*(undefined8 *)(*param_1 + 0x550));
                                    if (plVar55 == (long *)0x0) goto LAB_0249920c;
                                    (**(code **)(*plVar55 + 0x558))
                                              (plVar55,uVar74,*(undefined8 *)(*plVar55 + 0x560));
                                    lVar34 = param_1[0x5c];
                                    if (lVar34 == 0) goto LAB_0249920c;
                                    *(int *)(lVar34 + 0x3f8) = (int)param_1[0x7f];
                                    FUN_024c910c(lVar34,*(undefined4 *)((long)param_1 + 0x48c),0);
                                    plVar55 = (long *)param_1[0x5c];
                                    if (plVar55 == (long *)0x0) goto LAB_0249920c;
                                    (**(code **)(*plVar55 + 0x7d8))
                                              (plVar55,0,0,*(undefined8 *)(*plVar55 + 0x7e0));
                                    *(undefined1 *)(param_1 + 0x5e) = 1;
                                  }
                                }
                                local_b8 = CONCAT44(3,uVar44);
                                goto LAB_02492630;
                              }
UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited:
                              plVar56 = (long *)System_Threading_Mutex_TypeInfo;
                              fVar79 = 1.0 - fVar65;
                              uVar71 = (ulong)(uint)fVar79;
                              fVar63 = ABS(fVar62) + fVar63 * fVar79 * fVar84;
                              fVar84 = _DAT_0294c6e8;
                              if ((uVar52 & 0x18) == 0) {
                                fVar84 = 1.0;
                              }
                              if (fVar84 * local_178c < fVar63) {
                                if (((char)param_1[0x5a] == '\0') ||
                                   (uVar44 == *(uint *)(param_1 + 0x92))) {
                                  if (((char)param_1[0x46] != '\0') &&
                                     (*(int *)((long)param_1 + 0x23c) < (int)param_1[0x48])) {
                                    fVar62 = *(float *)(param_1 + 0x59) / 100.0;
                                    if (fVar65 < fVar62) {
                                      fVar77 = fVar63 / fVar79;
                                      if (fVar65 <= 0.0) {
                                        fVar77 = fVar63;
                                      }
                                      fVar65 = fVar65 + (fVar63 - fVar84 * (local_178c +
                                                                           DAT_02958218)) / fVar77;
                                      goto LAB_0249929c;
                                    }
                                    fVar65 = *(float *)((long)param_1 + 0x1dc);
                                    uVar71 = (ulong)(uint)fVar65;
                                    fVar62 = *(float *)(param_1 + 0x49);
                                    if (fVar65 <= fVar62) goto LAB_02493e34;
LAB_02499210:
                                    fVar77 = (fVar65 - *(float *)(param_1 + 0x47)) * 0.5;
                                    if (fVar77 <= DAT_028aa298) {
                                      fVar77 = DAT_028aa298;
                                    }
                                    *(float *)((long)param_1 + 0x234) = fVar65;
                                    fVar73 = (fVar65 - fVar77) * 20.0 + 0.5;
                                    fVar77 = DAT_02958220;
                                    if (fVar73 != INFINITY) {
                                      fVar77 = (float)(int)fVar73 / 20.0;
                                    }
                                    if (fVar77 <= fVar62) {
                                      fVar77 = fVar62;
                                    }
                                    goto LAB_02495fd8;
                                  }
LAB_02493e34:
                                  iVar20 = (int)param_1[0x5b];
                                  if (iVar20 == 1) {
                                    lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
                                    if (*(int *)(lVar34 + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                      lVar34 = *plVar56;
                                    }
                                    plVar51 = (long *)StringLiteral_302;
                                    lVar26 = *(long *)(lVar34 + 0xb8);
                                    lVar34 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                                    if ((*(byte *)(lVar34 + 0x132) & 1) == 0) {
                                      lVar34 = FUN_00d5941c(lVar34);
                                    }
                                    lVar34 = *(long *)(*(long *)(lVar34 + 0xc0) + 8);
                                    if ((*(byte *)(lVar34 + 0x132) & 1) == 0) {
                                      lVar34 = FUN_00d5941c();
                                    }
                                    piVar30 = (int *)thunk_FUN_00d32ed4(lVar26 + 0x11f0,
                                                                        *(long *)(lVar34 + 0x80) +
                                                                        0xa0);
                                    if (*piVar30 != 0) {
                                      lVar34 = *plVar56;
                                      if (*(int *)(lVar34 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                        lVar34 = *plVar56;
                                      }
                                      FUN_013b8de4(*(long *)(lVar34 + 0xb8) + 0x11f0,&local_fe0,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                                  );
                                      memcpy(auStack_bf0,&local_fe0,0x378);
                                      puVar33 = auStack_bf0;
                                      goto LAB_02494358;
                                    }
                                    goto LAB_02495f00;
                                  }
                                  if (iVar20 != 6) {
                                    if (iVar20 == 3) {
                                      lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
                                      if (*(int *)(lVar34 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                        lVar34 = *plVar56;
                                      }
                                      lVar34 = *(long *)(lVar34 + 0xb8) + 0x98;
                                      goto LAB_02493ec0;
                                    }
                                    goto LAB_02494950;
                                  }
                                  lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
                                  if (*(int *)(lVar34 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                    lVar34 = *plVar56;
                                  }
                                  plVar51 = (long *)StringLiteral_302;
                                  uVar93 = FUN_024d66ec(param_1,*(long *)(lVar34 + 0xb8) + 0x98,0);
                                  local_d8 = CONCAT44(local_d8._4_4_,uVar93);
                                  lVar34 = param_1[0x5c];
                                  if (*(int *)(*(long *)
                                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                              + 0xe0) == 0) {
                                    thunk_FUN_00d32864(*(long *)
                                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                                  );
                                  }
                                  uVar28 = FUN_02681b9c(lVar34,0,0);
                                  if ((uVar28 & 1) != 0) {
                                    plVar55 = (long *)param_1[0x5c];
                                    uVar74 = (**(code **)(*param_1 + 0x548))
                                                       (param_1,*(undefined8 *)(*param_1 + 0x550));
                                    if (plVar55 == (long *)0x0) goto LAB_0249920c;
                                    (**(code **)(*plVar55 + 0x558))
                                              (plVar55,uVar74,*(undefined8 *)(*plVar55 + 0x560));
                                    lVar34 = param_1[0x5c];
                                    if (lVar34 == 0) goto LAB_0249920c;
                                    *(int *)(lVar34 + 0x3f8) = (int)param_1[0x7f];
                                    FUN_024c910c(lVar34,*(undefined4 *)((long)param_1 + 0x48c),0);
                                    plVar55 = (long *)param_1[0x5c];
                                    if (plVar55 == (long *)0x0) goto LAB_0249920c;
                                    (**(code **)(*plVar55 + 0x7d8))
                                              (plVar55,0,0,*(undefined8 *)(*plVar55 + 0x7e0));
                                    *(undefined1 *)(param_1 + 0x5e) = 1;
                                  }
LAB_02494484:
                                  local_b8 = CONCAT44(3,*puVar1);
                                }
                                else {
                                  lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
                                  if (*(int *)(lVar34 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                    lVar34 = *plVar56;
                                  }
                                  iVar20 = FUN_024d66ec(param_1,*(long *)(lVar34 + 0xb8) + 0x98,0);
                                  local_d8 = CONCAT44(local_d8._4_4_,iVar20);
                                  if (*(float *)(param_1 + 0x57) == DAT_02958224) {
                                    lVar34 = *plVar2;
                                    if ((lVar34 == 0) ||
                                       (lVar26 = *(long *)(lVar34 + 0x38), lVar26 == 0))
                                    goto LAB_0249920c;
                                    if (*(uint *)(lVar26 + 0x18) <= *puVar1)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    fVar62 = *(float *)(param_1 + 0x9a);
                                    fVar65 = 0.0;
                                    if ((0.0 < fVar62) &&
                                       (fVar65 = 0.0, *(char *)((long)param_1 + 700) == '\0')) {
                                      fVar65 = *(float *)(param_1 + 0x98) -
                                               *(float *)(param_1 + 0x99);
                                    }
                                    fVar65 = fVar60 * *(float *)(param_1 + 0x56) +
                                             *(float *)(lVar26 + (long)(int)*puVar1 * 0x178 + 0x154)
                                             + (fVar65 - *(float *)((long)param_1 + 0x4c4)) +
                                             fVar77 * (fVar57 + *(float *)((long)param_1 + 0x2b4));
                                  }
                                  else {
                                    lVar34 = param_1[0x6c];
                                    *(undefined1 *)((long)param_1 + 700) = 1;
                                    if (lVar34 == 0) goto LAB_0249920c;
                                    fVar62 = *(float *)(param_1 + 0x9a);
                                    fVar65 = *(float *)(param_1 + 0x57) +
                                             fVar60 * *(float *)(param_1 + 0x56);
                                  }
                                  puVar12 = System_Threading_Mutex_TypeInfo;
                                  lVar34 = *(long *)(lVar34 + 0x38);
                                  if (lVar34 == 0) goto LAB_0249920c;
                                  uVar43 = *(uint *)((long)param_1 + 0x48c);
                                  if ((*(uint *)(lVar34 + 0x18) <= uVar43) ||
                                     (uVar8 = uVar43 - 1, *(uint *)(lVar34 + 0x18) <= uVar8))
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  uVar71 = (ulong)(uint)(fVar65 + *(float *)(param_1 + 0x96));
                                  fVar79 = (fVar65 + *(float *)(param_1 + 0x96) + fVar62) -
                                           *(float *)(lVar34 + (long)(int)uVar43 * 0x178 + 0x158);
                                  if ((bVar16 || *(short *)(lVar34 + (long)(int)uVar8 * 0x178 + 0x20
                                                           ) != 0xad) ||
                                     ((fVar86 <= fVar79 && ((int)param_1[0x5b] != 0)))) {
                                    if (*(short *)(lVar34 + (long)(int)uVar43 * 0x178 + 0x20) ==
                                        0xad) {
                                      bVar16 = true;
                                      plVar51 = (long *)StringLiteral_302;
                                      plVar56 = (long *)System_Threading_Mutex_TypeInfo;
                                      goto LAB_02492630;
                                    }
                                    if ((bVar11 & *(byte *)(param_1 + 0x46)) != 0) {
                                      fVar65 = *(float *)((long)param_1 + 0x2cc);
                                      fVar62 = *(float *)(param_1 + 0x59) / 100.0;
                                      if ((fVar62 <= fVar65) ||
                                         ((int)param_1[0x48] <= *(int *)((long)param_1 + 0x23c))) {
                                        fVar65 = *(float *)((long)param_1 + 0x1dc);
                                        uVar71 = (ulong)(uint)fVar65;
                                        fVar62 = *(float *)(param_1 + 0x49);
                                        if ((fVar62 < fVar65) &&
                                           (*(int *)((long)param_1 + 0x23c) < (int)param_1[0x48]))
                                        goto LAB_02499210;
                                        goto LAB_024946c0;
                                      }
LAB_024992ac:
                                      fVar77 = fVar63;
                                      if (0.0 < fVar65) {
                                        fVar77 = fVar63 / (1.0 - fVar65);
                                      }
                                      fVar65 = fVar65 + (fVar63 - fVar84 * (local_178c +
                                                                           DAT_02958218)) / fVar77;
LAB_0249929c:
                                      if (fVar62 <= fVar65) {
                                        fVar65 = fVar62;
                                      }
                                      *(float *)((long)param_1 + 0x2cc) = fVar65;
                                      return;
                                    }
LAB_024946c0:
                                    lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
                                    if (*(int *)(lVar34 + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                      lVar34 = *(long *)puVar12;
                                    }
                                    lVar26 = *(long *)(lVar34 + 0xb8);
                                    iVar20 = *(int *)(lVar26 + 0xe78);
                                    if ((((float)iVar20 != local_182c) && (iVar20 != -1)) &&
                                       (bVar11 == 1)) {
                                      if (*(int *)(lVar34 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                        lVar26 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo
                                                          + 0xb8);
                                      }
                                      iVar22 = FUN_024d66ec(param_1,lVar26 + 0xe78,0);
                                      local_d8 = CONCAT44(local_d8._4_4_,iVar22);
                                      if ((param_1[0x6c] == 0) ||
                                         (lVar34 = *(long *)(param_1[0x6c] + 0x38), lVar34 == 0))
                                      goto LAB_0249920c;
                                      uVar8 = *puVar1 - 1;
                                      if (*(uint *)(lVar34 + 0x18) <= uVar8)
                                      goto 
                                      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                      ;
                                      local_182c = (float)iVar20;
                                      if (*(short *)(lVar34 + (long)(int)uVar8 * 0x178 + 0x20) ==
                                          0xad) {
                                        local_d8 = CONCAT44(local_d8._4_4_,iVar22 + -1);
                                        *puVar1 = uVar8;
                                        goto LAB_024947b4;
                                      }
                                    }
                                    if (fVar86 < fVar79) {
                                      if (*(int *)((long)param_1 + 0x2dc) == -1) {
                                        *(undefined4 *)((long)param_1 + 0x2dc) =
                                             *(undefined4 *)((long)param_1 + 0x48c);
                                      }
                                      plVar51 = (long *)StringLiteral_302;
                                      plVar56 = (long *)System_Threading_Mutex_TypeInfo;
                                      if ((char)param_1[0x46] != '\0') {
                                        fVar62 = *(float *)(param_1 + 0x58);
                                        if ((fVar62 < *(float *)((long)param_1 + 0x2b4)) &&
                                           (*(int *)((long)param_1 + 0x23c) < (int)param_1[0x48])) {
                                          fVar77 = *(float *)((long)param_1 + 0x2b4) +
                                                   ((fVar94 - fVar79) /
                                                   (float)((int)param_1[0x94] + 1)) / fVar77;
                                          if (fVar77 <= fVar62) {
                                            fVar77 = fVar62;
                                          }
LAB_024964c8:
                                          *(float *)((long)param_1 + 0x2b4) = fVar77;
                                          return;
                                        }
                                        fVar65 = *(float *)((long)param_1 + 0x2cc);
                                        fVar62 = *(float *)(param_1 + 0x59) / 100.0;
                                        if ((fVar65 < fVar62) &&
                                           (*(int *)((long)param_1 + 0x23c) < (int)param_1[0x48]))
                                        goto LAB_024992ac;
                                        fVar65 = *(float *)((long)param_1 + 0x1dc);
                                        uVar71 = (ulong)(uint)fVar65;
                                        fVar62 = *(float *)(param_1 + 0x49);
                                        if ((fVar62 < fVar65) &&
                                           (*(int *)((long)param_1 + 0x23c) < (int)param_1[0x48]))
                                        goto LAB_02499210;
                                      }
                                      switch((int)param_1[0x5b]) {
                                      case 0:
                                      case 2:
                                      case 4:
                                        uVar71 = uVar25;
                                        FUN_024d7014(fVar77,uVar25,fVar60,
                                                     *(undefined4 *)((long)param_1 + 0x2f4),fVar78,
                                                     local_1794,local_178c,fVar57,param_1,
                                                     local_d8 & 0xffffffff,local_ac,&local_a8,0);
                                        break;
                                      case 1:
                                        lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
                                        if (*(int *)(lVar34 + 0xe0) == 0) {
                                          thunk_FUN_00d32864();
                                          lVar34 = *plVar56;
                                        }
                                        lVar26 = *(long *)(lVar34 + 0xb8);
                                        lVar34 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                                        if ((*(byte *)(lVar34 + 0x132) & 1) == 0) {
                                          lVar34 = FUN_00d5941c(lVar34);
                                        }
                                        lVar34 = *(long *)(*(long *)(lVar34 + 0xc0) + 8);
                                        if ((*(byte *)(lVar34 + 0x132) & 1) == 0) {
                                          lVar34 = FUN_00d5941c();
                                        }
                                        piVar30 = (int *)thunk_FUN_00d32ed4(lVar26 + 0x11f0,
                                                                            *(long *)(lVar34 + 0x80)
                                                                            + 0xa0);
                                        if (*piVar30 == 0) {
                                          bVar16 = false;
                                          goto LAB_02495f00;
                                        }
                                        lVar34 = *plVar56;
                                        if (*(int *)(lVar34 + 0xe0) == 0) {
                                          thunk_FUN_00d32864();
                                          lVar34 = *plVar56;
                                        }
                                        FUN_013b8de4(*(long *)(lVar34 + 0xb8) + 0x11f0,&local_fe0,
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                                  );
                                        memcpy(auStack_878,&local_fe0,0x378);
                                        iVar20 = FUN_024d66ec(param_1,auStack_878,0);
                                        bVar16 = false;
                                        goto LAB_02494364;
                                      case 3:
                                        lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
                                        if (*(int *)(lVar34 + 0xe0) == 0) {
                                          thunk_FUN_00d32864();
                                          lVar34 = *plVar56;
                                        }
                                        uVar93 = FUN_024d66ec(param_1,*(long *)(lVar34 + 0xb8) +
                                                                      0xb00,0);
                                        bVar16 = false;
                                        goto LAB_02493ecc;
                                      case 5:
                                        *(undefined1 *)((long)param_1 + 0x334) = 1;
                                        uVar71 = uVar25;
                                        FUN_024d7014(fVar77,uVar25,fVar60,
                                                     *(undefined4 *)((long)param_1 + 0x2f4),fVar78,
                                                     local_1794,local_178c,fVar57,param_1,
                                                     local_d8 & 0xffffffff,local_ac,&local_a8,0);
                                        *(undefined4 *)(param_1 + 0x99) = 0;
                                        *(undefined4 *)(param_1 + 0x9a) = 0;
                                        *(undefined8 *)((long)param_1 + 0x4ac) = 0;
                                        *(int *)(param_1 + 0x95) = (int)param_1[0x95] + 1;
                                        break;
                                      case 6:
                                        lVar34 = param_1[0x5c];
                                        if (*(int *)(*(long *)
                                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                                  + 0xe0) == 0) {
                                          thunk_FUN_00d32864();
                                        }
                                        uVar28 = FUN_02681b9c(lVar34,0,0);
                                        if ((uVar28 & 1) != 0) {
                                          plVar55 = (long *)param_1[0x5c];
                                          uVar74 = (**(code **)(*param_1 + 0x548))
                                                             (param_1,*(undefined8 *)
                                                                       (*param_1 + 0x550));
                                          if (plVar55 == (long *)0x0) goto LAB_0249920c;
                                          (**(code **)(*plVar55 + 0x558))
                                                    (plVar55,uVar74,
                                                     *(undefined8 *)(*plVar55 + 0x560));
                                          lVar34 = param_1[0x5c];
                                          if (lVar34 == 0) goto LAB_0249920c;
                                          *(int *)(lVar34 + 0x3f8) = (int)param_1[0x7f];
                                          FUN_024c910c(lVar34,*(undefined4 *)((long)param_1 + 0x48c)
                                                       ,0);
                                          plVar55 = (long *)param_1[0x5c];
                                          if (plVar55 == (long *)0x0) goto LAB_0249920c;
                                          (**(code **)(*plVar55 + 0x7d8))
                                                    (plVar55,0,0,*(undefined8 *)(*plVar55 + 0x7e0));
                                          *(undefined1 *)(param_1 + 0x5e) = 1;
                                        }
                                        bVar16 = false;
                                        goto LAB_02494484;
                                      default:
                                        bVar16 = false;
                                        goto LAB_02494950;
                                      }
                                      bVar16 = false;
                                      bVar11 = 1;
                                      bVar10 = true;
                                      plVar51 = (long *)StringLiteral_302;
                                      plVar56 = (long *)System_Threading_Mutex_TypeInfo;
                                    }
                                    else {
                                      uVar71 = uVar25;
                                      FUN_024d7014(fVar77,uVar25,fVar60,
                                                   *(undefined4 *)((long)param_1 + 0x2f4),fVar78,
                                                   local_1794,local_178c,fVar57,param_1,
                                                   local_d8 & 0xffffffff,local_ac,&local_a8,0);
                                      bVar11 = 1;
                                      bVar16 = false;
                                      bVar10 = true;
                                      plVar51 = (long *)StringLiteral_302;
                                      plVar56 = (long *)System_Threading_Mutex_TypeInfo;
                                    }
                                  }
                                  else {
                                    local_d8 = CONCAT44(local_d8._4_4_,iVar20 + -1);
                                    *puVar1 = uVar8;
LAB_024947b4:
                                    local_b8 = CONCAT44(0x2d,uVar8);
                                    bVar16 = false;
                                    plVar51 = (long *)StringLiteral_302;
                                    plVar56 = (long *)System_Threading_Mutex_TypeInfo;
                                  }
                                }
                                goto LAB_02492630;
                              }
LAB_02494950:
                              if (uStack_a4 != 0xad) {
                                if (uStack_a4 == 9) {
                                  lVar34 = *plVar2;
                                  if ((lVar34 != 0) &&
                                     (lVar26 = *(long *)(lVar34 + 0x38), lVar26 != 0)) {
                                    uVar44 = *puVar1;
                                    if (*(uint *)(lVar26 + 0x18) <= uVar44)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    *(undefined1 *)(lVar26 + (long)(int)uVar44 * 0x178 + 0x194) = 0;
                                    *(uint *)((long)param_1 + 0x49c) = uVar44;
                                    lVar26 = *(long *)(lVar34 + 0x50);
                                    if (lVar26 != 0) {
                                      if (*(uint *)(param_1 + 0x94) < *(uint *)(lVar26 + 0x18)) {
                                        lVar26 = lVar26 + (long)(int)*(uint *)(param_1 + 0x94) *
                                                          0x5c;
                                        *(int *)(lVar26 + 0x2c) = *(int *)(lVar26 + 0x2c) + 1;
                                        goto LAB_024949c4;
                                      }
                                      goto 
                                      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                      ;
                                    }
                                  }
                                }
                                else {
                                  lVar34 = 0x4e4;
                                  if (*(char *)((long)param_1 + 0x1cc) != '\0') {
                                    lVar34 = 0x13c;
                                  }
                                  if (*(int *)((long)param_1 + 0x63c) == 1) {
                                    (**(code **)(*param_1 + 0x8c8))
                                              (param_1,*(undefined4 *)((long)param_1 + lVar34),
                                               *(undefined8 *)(*param_1 + 0x8d0));
                                  }
                                  else if (*(int *)((long)param_1 + 0x63c) == 0) {
                                    (**(code **)(*param_1 + 0x8b8))
                                              (fVar83,fVar66,param_1,
                                               *(undefined4 *)((long)param_1 + lVar34),
                                               *(undefined8 *)(*param_1 + 0x8c0));
                                  }
                                  if (bVar10) {
                                    *(uint *)((long)param_1 + 0x494) = *puVar1;
                                  }
                                  *(uint *)((long)param_1 + 0x49c) = *puVar1;
                                  *(int *)((long)param_1 + 0x4a4) =
                                       *(int *)((long)param_1 + 0x4a4) + 1;
                                  if ((param_1[0x6c] != 0) &&
                                     (lVar34 = *(long *)(param_1[0x6c] + 0x50), lVar34 != 0)) {
                                    if (*(uint *)(param_1 + 0x94) < *(uint *)(lVar34 + 0x18)) {
                                      lVar34 = lVar34 + (long)(int)*(uint *)(param_1 + 0x94) * 0x5c;
                                      bVar10 = false;
                                      *(float *)(lVar34 + 0x60) = fVar80;
                                      *(float *)(lVar34 + 100) = fVar87;
                                      goto LAB_02494abc;
                                    }
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                  }
                                }
                                goto LAB_0249920c;
                              }
                              if ((*plVar2 == 0) ||
                                 (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 == 0))
                              goto LAB_0249920c;
                              if (*(uint *)(lVar34 + 0x18) <= *puVar1)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              *(undefined1 *)(lVar34 + (long)(int)*puVar1 * 0x178 + 0x194) = 0;
                            }
                            else {
                              if (((uStack_a4 & 0xfffffffe) == 10) && ((int)param_1[0x5b] == 6)) {
                                fVar63 = (float)uVar71;
                                fVar84 = 0.0;
                                if ((0.0 < fVar63) &&
                                   (fVar84 = 0.0, *(char *)((long)param_1 + 700) == '\0')) {
                                  fVar84 = *(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x99);
                                }
                                uVar71 = (ulong)(uint)fVar86;
                                if (fVar86 < (*(float *)(param_1 + 0x96) -
                                             (*(float *)((long)param_1 + 0x4c4) - fVar63)) + fVar84)
                                {
                                  if (*(int *)((long)param_1 + 0x2dc) == -1) {
                                    *(uint *)((long)param_1 + 0x2dc) = uVar43;
                                  }
                                  plVar51 = (long *)StringLiteral_302;
                                  plVar56 = (long *)System_Threading_Mutex_TypeInfo;
                                  lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
                                  if (*(int *)(lVar34 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                    lVar34 = *plVar56;
                                  }
                                  uVar93 = FUN_024d66ec(param_1,*(long *)(lVar34 + 0xb8) + 0xb00,0);
                                  local_d8 = CONCAT44(local_d8._4_4_,uVar93);
                                  lVar34 = param_1[0x5c];
                                  if (*(int *)(*(long *)
                                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                              + 0xe0) == 0) {
                                    thunk_FUN_00d32864(*(long *)
                                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                                  );
                                  }
                                  uVar28 = FUN_02681b9c(lVar34,0,0);
                                  if ((uVar28 & 1) != 0) {
                                    plVar55 = (long *)param_1[0x5c];
                                    uVar74 = (**(code **)(*param_1 + 0x548))
                                                       (param_1,*(undefined8 *)(*param_1 + 0x550));
                                    if (plVar55 == (long *)0x0) goto LAB_0249920c;
                                    (**(code **)(*plVar55 + 0x558))
                                              (plVar55,uVar74,*(undefined8 *)(*plVar55 + 0x560));
                                    lVar34 = param_1[0x5c];
                                    if (lVar34 == 0) goto LAB_0249920c;
                                    *(int *)(lVar34 + 0x3f8) = (int)param_1[0x7f];
                                    FUN_024c910c(lVar34,*(undefined4 *)((long)param_1 + 0x48c),0);
                                    plVar55 = (long *)param_1[0x5c];
                                    if (plVar55 == (long *)0x0) goto LAB_0249920c;
                                    (**(code **)(*plVar55 + 0x7d8))
                                              (plVar55,0,0,*(undefined8 *)(*plVar55 + 0x7e0));
                                    *(undefined1 *)(param_1 + 0x5e) = 1;
                                  }
                                  local_b8 = CONCAT44(3,uVar43);
                                  goto LAB_02492630;
                                }
                              }
                              if ((((uStack_a4 - 0x2007 < 0x23) &&
                                   ((1L << ((ulong)(uStack_a4 - 0x2007) & 0x3f) & 0x600000001U) != 0
                                   )) || (uStack_a4 - 10 < 2)) || (uStack_a4 == 0xa0)) {
LAB_024944e4:
                                if (((uStack_a4 != 0xad) && (uStack_a4 != 0x200b)) &&
                                   (uStack_a4 != 0x2060)) {
                                  lVar34 = *plVar2;
                                  if ((lVar34 == 0) ||
                                     (lVar26 = *(long *)(lVar34 + 0x50), lVar26 == 0))
                                  goto LAB_0249920c;
                                  if (*(uint *)(lVar26 + 0x18) <= *(uint *)(param_1 + 0x94))
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  lVar26 = lVar26 + (long)(int)*(uint *)(param_1 + 0x94) * 0x5c;
                                  *(int *)(lVar26 + 0x2c) = *(int *)(lVar26 + 0x2c) + 1;
                                  *(int *)(lVar34 + 0x20) = *(int *)(lVar34 + 0x20) + 1;
                                }
                              }
                              else {
                                if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo +
                                            0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar25 = FUN_016fa418(uVar44,0);
                                if ((uVar25 & 1) != 0) goto LAB_024944e4;
                              }
                              if (uStack_a4 == 0xa0) {
                                if ((*plVar2 == 0) ||
                                   (lVar34 = *(long *)(*plVar2 + 0x50), lVar34 == 0))
                                goto LAB_0249920c;
                                if (*(uint *)(lVar34 + 0x18) <= *(uint *)(param_1 + 0x94))
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                ;
                                lVar34 = lVar34 + (long)(int)*(uint *)(param_1 + 0x94) * 0x5c;
LAB_024949c4:
                                *(int *)(lVar34 + 0x20) = *(int *)(lVar34 + 0x20) + 1;
                              }
                            }
LAB_02494abc:
                            if (((int)param_1[0x5b] == 1) && ((uStack_a4 == 0x2d || (!bVar9)))) {
                              if (param_1[0xca] == 0) goto LAB_0249920c;
                              fVar84 = *(float *)(param_1 + 0x3c);
                              iVar20 = FUN_026fd110(param_1[0xca] + 0x50,0);
                              if (param_1[0xca] == 0) goto LAB_0249920c;
                              fVar80 = (float)FUN_026fd120(param_1[0xca] + 0x50,0);
                              lVar34 = param_1[0xc9];
                              fVar63 = fVar73;
                              if (*(char *)((long)param_1 + 0x2fd) != '\0') {
                                fVar63 = 1.0;
                              }
                              if ((lVar34 == 0) || (*(long *)(lVar34 + 0x20) == 0))
                              goto LAB_0249920c;
                              fVar62 = *(float *)((long)param_1 + 0x3fc);
                              fVar66 = *(float *)(lVar34 + 0x2c);
                              fVar87 = (float)FUN_026fd668(*(long *)(lVar34 + 0x20),0);
                              fVar65 = *(float *)(param_1 + 0x69);
                              fVar87 = fVar62 * (fVar84 / (float)iVar20) * fVar80 * fVar63 * fVar66
                                       * fVar87;
                              fVar84 = *(float *)((long)param_1 + 0x34c);
                              if ((uStack_a4 == 10) &&
                                 (*(int *)((long)param_1 + 0x48c) != (int)param_1[0x92])) {
                                if ((*plVar2 == 0) ||
                                   (lVar34 = *(long *)(*plVar2 + 0x38), lVar34 == 0))
                                goto LAB_0249920c;
                                uVar44 = *(int *)((long)param_1 + 0x48c) - 1;
                                if (*(uint *)(lVar34 + 0x18) <= uVar44)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                ;
                                if (param_1[0xca] == 0) goto LAB_0249920c;
                                fVar63 = *(float *)(lVar34 + (long)(int)uVar44 * 0x178 + 0x60);
                                iVar20 = FUN_026fd110(param_1[0xca] + 0x50,0);
                                if (param_1[0xca] == 0) goto LAB_0249920c;
                                fVar62 = (float)FUN_026fd120(param_1[0xca] + 0x50,0);
                                lVar34 = param_1[0xc9];
                                fVar80 = fVar73;
                                if (*(char *)((long)param_1 + 0x2fd) != '\0') {
                                  fVar80 = 1.0;
                                }
                                if ((lVar34 == 0) || (*(long *)(lVar34 + 0x20) == 0))
                                goto LAB_0249920c;
                                fVar66 = *(float *)((long)param_1 + 0x3fc);
                                fVar79 = *(float *)(lVar34 + 0x2c);
                                fVar87 = (float)FUN_026fd668(*(long *)(lVar34 + 0x20),0);
                                if ((*plVar2 == 0) ||
                                   (lVar34 = *(long *)(*plVar2 + 0x50), lVar34 == 0))
                                goto LAB_0249920c;
                                if (*(uint *)(lVar34 + 0x18) <= *(uint *)(param_1 + 0x94))
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                ;
                                lVar34 = lVar34 + (long)(int)*(uint *)(param_1 + 0x94) * 0x5c;
                                fVar65 = *(float *)(lVar34 + 0x60);
                                fVar84 = *(float *)(lVar34 + 100);
                                fVar87 = fVar66 * (fVar63 / (float)iVar20) * fVar62 * fVar80 *
                                         fVar79 * fVar87;
                              }
                              fVar66 = *(float *)(param_1 + 0x9a);
                              fVar80 = *(float *)(param_1 + 0x96);
                              fVar79 = *(float *)((long)param_1 + 0x4c4);
                              fVar63 = 0.0;
                              fVar62 = 0.0;
                              if ((0.0 < fVar66) &&
                                 (fVar62 = 0.0, *(char *)((long)param_1 + 700) == '\0')) {
                                fVar62 = *(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x99);
                              }
                              fVar95 = *(float *)(param_1 + 199);
                              if ((char)param_1[0x1d] == '\0') {
                                if ((param_1[0xc9] == 0) ||
                                   (lVar34 = *(long *)(param_1[0xc9] + 0x20), lVar34 == 0))
                                goto LAB_0249920c;
                                FUN_026fd62c(&local_fe0,lVar34,0);
                                uStack_178 = uStack_fd8;
                                local_180 = local_fe0;
                                local_170 = (undefined4)local_fd0;
                                fVar63 = (float)FUN_026fd474(&local_180,0);
                              }
                              puVar12 = System_Threading_Mutex_TypeInfo;
                              fVar67 = *(float *)(param_1 + 0x6b);
                              fVar84 = (fVar92 - fVar65) - fVar84;
                              bVar17 = true;
                              if ((fVar67 <= fVar84) && (bVar17 = false, !NAN(fVar67))) {
                                bVar17 = fVar67 == -1.0;
                              }
                              if (!bVar17) {
                                fVar84 = fVar67;
                              }
                              fVar65 = _DAT_0294c6e8;
                              if ((uVar52 & 0x18) == 0) {
                                fVar65 = 1.0;
                              }
                              if (((fVar80 - (fVar79 - fVar66)) + fVar62 < fVar86) &&
                                 (ABS(fVar95) +
                                  fVar87 * fVar63 * (1.0 - *(float *)((long)param_1 + 0x2cc)) <
                                  fVar65 * fVar84)) {
                                lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
                                if (*(int *)(lVar34 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                  lVar34 = *(long *)puVar12;
                                }
                                FUN_024d69d4(param_1,*(long *)(lVar34 + 0xb8) + 0x788,
                                             local_d8 & 0xffffffff,
                                             *(undefined4 *)((long)param_1 + 0x48c),0);
                                lVar34 = *(long *)(*(long *)puVar12 + 0xb8);
                                memcpy(auStack_1358,(void *)(lVar34 + 0x788),0x378);
                                FUN_013b86dc(lVar34 + 0x11f0,auStack_1358,
                                             *(undefined8 *)
                                              Method_System_Collections_Generic_List<TextStyle>_get_Item__
                                            );
                              }
                            }
                            uVar25 = (ulong)(uint)fVar61;
                            fVar84 = 1.0;
                            lVar34 = *plVar2;
                            if ((lVar34 == 0) || (lVar26 = *(long *)(lVar34 + 0x38), lVar26 == 0))
                            goto LAB_0249920c;
                            if (*(uint *)(lVar26 + 0x18) <= *puVar1)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            uVar44 = *(uint *)(param_1 + 0x94);
                            lVar26 = lVar26 + (long)(int)*puVar1 * 0x178;
                            *(uint *)(lVar26 + 100) = uVar44;
                            *(int *)(lVar26 + 0x68) = (int)param_1[0x95];
                            if ((bVar9) ||
                               ((uStack_a4 < 0xe &&
                                ((1 << (ulong)(uStack_a4 & 0x1f) & 0x2c00U) != 0)))) {
                              lVar34 = *(long *)(lVar34 + 0x50);
                              if (lVar34 == 0) goto LAB_0249920c;
                              if (*(uint *)(lVar34 + 0x18) <= uVar44)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              if (*(int *)(lVar34 + (long)(int)uVar44 * 0x5c + 0x24) == 1)
                              goto LAB_02494e68;
                            }
                            else {
                              lVar34 = *(long *)(lVar34 + 0x50);
                              if (lVar34 == 0) goto LAB_0249920c;
LAB_02494e68:
                              if (*(uint *)(lVar34 + 0x18) <= uVar44)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              *(int *)(lVar34 + (long)(int)uVar44 * 0x5c + 0x68) =
                                   (int)param_1[0x4e];
                            }
                            if (uStack_a4 == 9) {
                              if (*plVar37 == 0) goto LAB_0249920c;
                              fVar84 = (float)FUN_026fd208(*plVar37 + 0x50,0);
                              if (*plVar37 == 0) goto LAB_0249920c;
                              fVar87 = *(float *)(param_1 + 199);
                              fVar63 = (float)NEON_ucvtf((uint)*(byte *)(*plVar37 + 0x1b9));
                              fVar84 = fVar61 * fVar84 * fVar63;
                              fVar80 = fVar84 * (float)(int)(fVar87 / fVar84);
                              uVar71 = (ulong)(uint)fVar80;
                              if (fVar80 <= fVar87) {
                                fVar80 = fVar87 + fVar84;
                              }
LAB_02495058:
                              *(float *)(param_1 + 199) = fVar80;
                            }
                            else if (*(float *)(param_1 + 0x55) == 0.0) {
                              if ((char)param_1[0x1d] == '\0') {
                                if (*(char *)((long)param_1 + 0x46c) != '\0') {
                                  fVar84 = (float)thunk_FUN_026935f0(lVar49,0);
                                }
                                fVar80 = *(float *)(param_1 + 199);
                                fVar87 = (float)FUN_026fd474(&local_f0,0);
                                if (param_1[0x1f] != 0) {
                                  fVar63 = 1.0 - *(float *)((long)param_1 + 0x2cc);
                                  fVar80 = fVar80 + fVar63 * (*(float *)((long)param_1 + 0x2a4) +
                                                             fVar61 * (fVar64 + fVar84 * fVar87) +
                                                             fVar60 * (fVar78 + local_1794 +
                                                                                *(float *)(param_1[
                                                  0x1f] + 0x1ac)));
                                  *(float *)(param_1 + 199) = fVar80;
                                  goto joined_r0x02494fac;
                                }
                                goto LAB_0249920c;
                              }
                              if (*plVar37 == 0) goto LAB_0249920c;
                              fVar80 = (1.0 - *(float *)((long)param_1 + 0x2cc)) *
                                       (*(float *)((long)param_1 + 0x2a4) +
                                       fVar61 * fVar64 +
                                       fVar60 * (fVar78 + local_1794 + *(float *)(*plVar37 + 0x1ac))
                                       );
                              uVar71 = (ulong)(uint)fVar80;
                              fVar80 = *(float *)(param_1 + 199) - fVar80;
                              *(float *)(param_1 + 199) = fVar80;
                              if ((uVar21 != 0) || (uStack_a4 == 0x200b)) {
                                fVar84 = fVar60 * *(float *)((long)param_1 + 0x2ac);
                                uVar71 = (ulong)(uint)fVar84;
                                fVar80 = fVar80 - fVar84;
                                goto LAB_02495058;
                              }
                            }
                            else {
                              if (*plVar37 == 0) goto LAB_0249920c;
                              fVar63 = *(float *)(param_1 + 199);
                              fVar80 = fVar63 + (1.0 - *(float *)((long)param_1 + 0x2cc)) *
                                                (*(float *)((long)param_1 + 0x2a4) +
                                                (*(float *)(param_1 + 0x55) - fVar89) +
                                                fVar60 * (local_1794 + *(float *)(*plVar37 + 0x1ac))
                                                );
                              *(float *)(param_1 + 199) = fVar80;
joined_r0x02494fac:
                              if ((uVar21 != 0) ||
                                 (uVar71 = (ulong)(uint)fVar63, uStack_a4 == 0x200b)) {
                                fVar84 = fVar60 * *(float *)((long)param_1 + 0x2ac);
                                uVar71 = (ulong)(uint)fVar84;
                                fVar80 = fVar80 + fVar84;
                                goto LAB_02495058;
                              }
                            }
                            lVar34 = *plVar2;
                            if ((lVar34 == 0) || (lVar26 = *(long *)(lVar34 + 0x38), lVar26 == 0))
                            goto LAB_0249920c;
                            uVar44 = *puVar1;
                            uVar43 = (uint)*(undefined8 *)(lVar26 + 0x18);
                            if (uVar43 <= uVar44)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            *(float *)(lVar26 + (long)(int)uVar44 * 0x178 + 0x144) = fVar80;
                            uVar52 = uStack_a4;
                            if ((int)uStack_a4 < 0xd) {
                              if ((uStack_a4 - 10 < 2) || (uStack_a4 == 3)) goto LAB_024950bc;
FUN_02495710:
                              if (((bool)(bVar9 & uStack_a4 == 0x2d)) || (uVar44 == uVar24))
                              goto LAB_024950bc;
                            }
                            else {
                              if (1 < uStack_a4 - 0x2028) {
                                if (uStack_a4 != 0xd) goto FUN_02495710;
                                uVar71 = 0;
                                *(float *)(param_1 + 199) = *(float *)((long)param_1 + 0x404) + 0.0;
                                if (uVar44 != uVar24) goto LAB_0249572c;
                              }
LAB_024950bc:
                              if (0.0 < *(float *)(param_1 + 0x9a)) {
                                fVar84 = *(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x99);
                                if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo
                                            + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                if (((fVar76 < ABS(fVar84)) &&
                                    (*(char *)((long)param_1 + 700) == '\0')) &&
                                   (*(char *)((long)param_1 + 0x334) == '\0')) {
                                  FUN_024d6ca8(fVar84,param_1,(int)param_1[0x92],
                                               *(undefined4 *)((long)param_1 + 0x48c),0);
                                  *(float *)((long)param_1 + 0x4bc) =
                                       *(float *)((long)param_1 + 0x4bc) - fVar84;
                                  *(float *)(param_1 + 0x9a) = fVar84 + *(float *)(param_1 + 0x9a);
                                  puVar12 = System_Threading_Mutex_TypeInfo;
                                  lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
                                  if (*(int *)(lVar34 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                    lVar34 = *(long *)puVar12;
                                  }
                                  lVar26 = *(long *)(lVar34 + 0xb8);
                                  if (*(int *)(lVar26 + 0x7ac) == (int)param_1[0x94]) {
                                    if (*(int *)(lVar34 + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                      lVar26 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo +
                                                        0xb8);
                                    }
                                    FUN_013b8de4(lVar26 + 0x11f0,&local_fe0,
                                                 *(undefined8 *)
                                                  Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                                );
                                    lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
                                    memcpy((void *)(*(long *)(lVar34 + 0xb8) + 0x788),&local_fe0,
                                           0x378);
                                    lVar34 = *(long *)(lVar34 + 0xb8);
                                    *(float *)(lVar34 + 0x7bc) = fVar84 + *(float *)(lVar34 + 0x7bc)
                                    ;
                                    *(float *)(lVar34 + 0x800) = fVar84 + *(float *)(lVar34 + 0x800)
                                    ;
                                    memcpy(auStack_16d0,(void *)(lVar34 + 0x788),0x378);
                                    FUN_013b86dc(lVar34 + 0x11f0,auStack_16d0,
                                                 *(undefined8 *)
                                                  Method_System_Collections_Generic_List<TextStyle>_get_Item__
                                                );
                                  }
                                }
                              }
                              fVar80 = *(float *)(param_1 + 0x9a);
                              *(undefined1 *)((long)param_1 + 0x334) = 0;
                              fVar63 = *(float *)((long)param_1 + 0x4c4) - fVar80;
                              fVar84 = *(float *)((long)param_1 + 0x4bc);
                              if (fVar63 <= *(float *)((long)param_1 + 0x4bc)) {
                                fVar84 = fVar63;
                              }
                              *(float *)((long)param_1 + 0x4bc) = fVar84;
                              fVar87 = *(float *)(param_1 + 0x98);
                              if (local_ac[0] == '\0') {
                                local_a8 = fVar84;
                              }
                              if ((*(char *)((long)param_1 + 0x32c) != '\0') &&
                                 (((int)param_1[100] <= *(int *)((long)param_1 + 0x48c) ||
                                  ((int)param_1[0x65] <= (int)param_1[0x94])))) {
                                local_ac[0] = '\x01';
                              }
                              lVar34 = *plVar2;
                              if ((lVar34 == 0) || (lVar26 = *(long *)(lVar34 + 0x50), lVar26 == 0))
                              goto LAB_0249920c;
                              uVar44 = *(uint *)(param_1 + 0x94);
                              if (*(uint *)(lVar26 + 0x18) <= uVar44)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              lVar54 = lVar26 + (long)(int)uVar44 * 0x5c;
                              *(int *)(lVar54 + 0x34) = (int)param_1[0x92];
                              iVar20 = (int)param_1[0x92];
                              if ((int)param_1[0x92] <= *(int *)((long)param_1 + 0x494)) {
                                iVar20 = *(int *)((long)param_1 + 0x494);
                              }
                              *(int *)((long)param_1 + 0x494) = iVar20;
                              *(int *)(lVar54 + 0x38) = iVar20;
                              *(undefined4 *)(param_1 + 0x93) =
                                   *(undefined4 *)((long)param_1 + 0x48c);
                              *(undefined4 *)(lVar54 + 0x3c) =
                                   *(undefined4 *)((long)param_1 + 0x48c);
                              iVar20 = *(int *)((long)param_1 + 0x494);
                              if (*(int *)((long)param_1 + 0x494) <= *(int *)((long)param_1 + 0x49c)
                                 ) {
                                iVar20 = *(int *)((long)param_1 + 0x49c);
                              }
                              local_d8 = CONCAT44(iVar20,(uint)local_d8);
                              *(int *)((long)param_1 + 0x49c) = iVar20;
                              *(int *)(lVar54 + 0x40) = iVar20;
                              *(int *)(lVar54 + 0x24) =
                                   (*(int *)(lVar54 + 0x3c) - *(int *)(lVar54 + 0x34)) + 1;
                              *(undefined4 *)(lVar54 + 0x28) =
                                   *(undefined4 *)((long)param_1 + 0x4a4);
                              lVar34 = *(long *)(lVar34 + 0x38);
                              if (lVar34 == 0) goto LAB_0249920c;
                              if (*(uint *)(lVar34 + 0x18) <= *(uint *)((long)param_1 + 0x494))
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              uVar93 = *(undefined4 *)
                                        (lVar34 + (long)(int)*(uint *)((long)param_1 + 0x494) *
                                                  0x178 + 0x11c);
                              lVar26 = lVar26 + (long)(int)uVar44 * 0x5c;
                              *(float *)(lVar26 + 0x70) = fVar63;
                              *(undefined4 *)(lVar26 + 0x6c) = uVar93;
                              lVar34 = *plVar2;
                              if ((lVar34 == 0) || (lVar26 = *(long *)(lVar34 + 0x50), lVar26 == 0))
                              goto LAB_0249920c;
                              if (*(uint *)(lVar26 + 0x18) <= *(uint *)(param_1 + 0x94))
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              lVar34 = *(long *)(lVar34 + 0x38);
                              if (lVar34 == 0) goto LAB_0249920c;
                              if (*(uint *)(lVar34 + 0x18) <= *(uint *)((long)param_1 + 0x49c))
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              uVar93 = *(undefined4 *)
                                        (lVar34 + (long)(int)*(uint *)((long)param_1 + 0x49c) *
                                                  0x178 + 0x128);
                              fVar87 = fVar87 - fVar80;
                              lVar26 = lVar26 + (long)(int)*(uint *)(param_1 + 0x94) * 0x5c;
                              *(float *)(lVar26 + 0x78) = fVar87;
                              *(undefined4 *)(lVar26 + 0x74) = uVar93;
                              lVar34 = *plVar2;
                              if ((lVar34 == 0) || (lVar54 = *(long *)(lVar34 + 0x50), lVar54 == 0))
                              goto LAB_0249920c;
                              lVar29 = (long)(int)*(uint *)(param_1 + 0x94);
                              if (*(uint *)(lVar54 + 0x18) <= *(uint *)(param_1 + 0x94))
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              lVar26 = lVar54 + lVar29 * 0x5c;
                              *(float *)(lVar26 + 0x44) =
                                   *(float *)(lVar26 + 0x74) - fVar61 * fVar83;
                              *(float *)(lVar26 + 0x5c) = local_178c;
                              if (*(int *)(lVar26 + 0x24) == 1) {
                                *(int *)(lVar54 + lVar29 * 0x5c + 0x68) = (int)param_1[0x4e];
                              }
                              if ((*plVar37 == 0) ||
                                 (lVar26 = *(long *)(lVar34 + 0x38), lVar26 == 0))
                              goto LAB_0249920c;
                              lVar47 = (long)(int)*(uint *)((long)param_1 + 0x49c);
                              uVar43 = (uint)*(undefined8 *)(lVar26 + 0x18);
                              if (uVar43 <= *(uint *)((long)param_1 + 0x49c))
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              if ((*(char *)(lVar26 + lVar47 * 0x178 + 0x194) == '\0') &&
                                 (lVar47 = (long)(int)*(uint *)(param_1 + 0x93),
                                 uVar43 <= *(uint *)(param_1 + 0x93)))
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              fVar61 = (1.0 - *(float *)((long)param_1 + 0x2cc)) *
                                       (fVar60 * (fVar78 + local_1794 + *(float *)(*plVar37 + 0x1ac)
                                                 ) - *(float *)((long)param_1 + 0x2a4));
                              fVar84 = -fVar61;
                              if ((char)param_1[0x1d] != '\0') {
                                fVar84 = fVar61;
                              }
                              lVar54 = lVar54 + lVar29 * 0x5c;
                              *(float *)(lVar54 + 0x58) =
                                   *(float *)(lVar26 + lVar47 * 0x178 + 0x144) + fVar84;
                              fVar84 = *(float *)(param_1 + 0x9a);
                              *(float *)(lVar54 + 0x48) = fVar77 * fVar57 + (fVar87 - fVar63);
                              *(float *)(lVar54 + 0x4c) = fVar87;
                              uVar71 = (ulong)(uint)(0.0 - fVar84);
                              *(float *)(lVar54 + 0x50) = 0.0 - fVar84;
                              *(float *)(lVar54 + 0x54) = fVar63;
                              plVar56 = (long *)System_Threading_Mutex_TypeInfo;
                              uVar52 = uStack_a4;
                              if ((int)uStack_a4 < 0x2d) {
                                if (uStack_a4 - 10 < 2) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering:
                                  lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
                                  if (*(int *)(lVar34 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                    lVar34 = *plVar56;
                                  }
                                  plVar51 = (long *)StringLiteral_302;
                                  FUN_024d69d4(param_1,*(long *)(lVar34 + 0xb8) + 0x410,
                                               local_d8 & 0xffffffff,
                                               *(undefined4 *)((long)param_1 + 0x48c),0);
                                  lVar34 = param_1[0x6c];
                                  *(undefined4 *)((long)param_1 + 0x4a4) = 0;
                                  iVar20 = (int)param_1[0x94] + 1;
                                  *(int *)(param_1 + 0x94) = iVar20;
                                  *(int *)(param_1 + 0x92) = *(int *)((long)param_1 + 0x48c) + 1;
                                  if ((lVar34 != 0) && (*(long *)(lVar34 + 0x50) != 0)) {
                                    if (*(int *)(*(long *)(lVar34 + 0x50) + 0x18) <= iVar20) {
                                      FUN_024d6e60(param_1,iVar20,0);
                                      lVar34 = param_1[0x6c];
                                      if (lVar34 == 0) goto LAB_0249920c;
                                    }
                                    lVar34 = *(long *)(lVar34 + 0x38);
                                    if (lVar34 != 0) {
                                      uVar21 = *puVar1;
                                      if (uVar21 < *(uint *)(lVar34 + 0x18)) {
                                        fVar84 = *(float *)(lVar34 + (long)(int)uVar21 * 0x178 +
                                                           0x154);
                                        if (*(float *)(param_1 + 0x57) == DAT_02958224) {
                                          fVar63 = 0.0;
                                          if ((uStack_a4 == 0x2029) || (uStack_a4 == 10)) {
                                            fVar63 = *(float *)((long)param_1 + 0x2c4);
                                          }
                                          uVar35 = 0;
                                          fVar63 = *(float *)(param_1 + 0x9a) +
                                                   fVar84 + (0.0 - *(float *)((long)param_1 + 0x4c4)
                                                            ) +
                                                   fVar77 * (fVar57 + *(float *)((long)param_1 +
                                                                                0x2b4)) +
                                                   fVar60 * (*(float *)(param_1 + 0x56) + fVar63);
                                        }
                                        else {
                                          if ((uStack_a4 == 0x2029) ||
                                             (fVar63 = 0.0, uStack_a4 == 10)) {
                                            fVar63 = *(float *)((long)param_1 + 0x2c4);
                                          }
                                          uVar35 = 1;
                                          fVar63 = *(float *)(param_1 + 0x9a) +
                                                   *(float *)(param_1 + 0x57) +
                                                   fVar60 * (*(float *)(param_1 + 0x56) + fVar63);
                                        }
                                        *(float *)(param_1 + 0x9a) = fVar63;
                                        *(undefined1 *)((long)param_1 + 700) = uVar35;
                                        lVar34 = *plVar56;
                                        if (*(int *)(lVar34 + 0xe0) == 0) {
                                          thunk_FUN_00d32864();
                                          lVar34 = *plVar56;
                                          uVar21 = *puVar1;
                                        }
                                        lVar34 = *(long *)(lVar34 + 0xb8);
                                        uVar74 = *(undefined8 *)(lVar34 + 0x15a8);
                                        *(float *)(param_1 + 0x99) = fVar84;
                                        uVar71 = NEON_rev64(uVar74,4);
                                        param_1[0x98] = uVar71;
                                        *(float *)(param_1 + 199) =
                                             *(float *)(param_1 + 0x80) + 0.0 +
                                             *(float *)((long)param_1 + 0x404);
                                        FUN_024d69d4(param_1,lVar34 + 0x98,local_d8 & 0xffffffff,
                                                     uVar21,0);
                                        FUN_024d69d4(param_1,*(long *)(*plVar56 + 0xb8) + 0xb00,
                                                     local_d8 & 0xffffffff,
                                                     *(undefined4 *)((long)param_1 + 0x48c),0);
                                        *(int *)((long)param_1 + 0x48c) =
                                             *(int *)((long)param_1 + 0x48c) + 1;
                                        bVar10 = true;
                                        bVar11 = 1;
                                        goto LAB_02492630;
                                      }
                                      goto 
                                      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                      ;
                                    }
                                  }
                                  goto LAB_0249920c;
                                }
                                if (uStack_a4 == 3) {
                                  if (param_1[0x8e] == 0) goto LAB_0249920c;
                                  local_d8 = CONCAT44(iVar20,(int)*(undefined8 *)
                                                                   (param_1[0x8e] + 0x18));
                                  uVar52 = 3;
                                }
                              }
                              else if ((uStack_a4 - 0x2028 < 2) || (uStack_a4 == 0x2d))
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering;
                            }
LAB_0249572c:
                            uVar44 = *puVar1;
                            if (uVar43 <= uVar44)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            if (*(char *)(lVar26 + (long)(int)uVar44 * 0x178 + 0x194) != '\0') {
                              lVar26 = lVar26 + (long)(int)uVar44 * 0x178;
                              uVar28 = *(ulong *)(lVar26 + 0x11c);
                              uVar71 = *(ulong *)((long)param_1 + 0x4d4);
                              *(ulong *)((long)param_1 + 0x4d4) =
                                   uVar28 ^ (uVar28 ^ uVar71) &
                                            CONCAT44(-(uint)((float)(uVar71 >> 0x20) <
                                                            (float)(uVar28 >> 0x20)),
                                                     -(uint)((float)uVar71 < (float)uVar28));
                              uVar28 = *(ulong *)((long)param_1 + 0x4dc);
                              uVar71 = *(ulong *)(lVar26 + 0x128);
                              *(ulong *)((long)param_1 + 0x4dc) =
                                   uVar71 ^ (uVar71 ^ uVar28) &
                                            CONCAT44(-(uint)((float)(uVar71 >> 0x20) <
                                                            (float)(uVar28 >> 0x20)),
                                                     -(uint)((float)uVar71 < (float)uVar28));
                            }
                            if (((int)param_1[0x5b] == 5) &&
                               ((0xd < uVar52 || ((1 << (ulong)(uVar52 & 0x1f) & 0x2c00U) == 0)))) {
                              lVar26 = *(long *)(lVar34 + 0x58);
                              if (lVar26 == 0) goto LAB_0249920c;
                              iVar20 = (int)param_1[0x95] + 1;
                              if (*(int *)(lVar26 + 0x18) < iVar20) {
                                if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                FUN_01147c08((long *)(lVar34 + 0x58),iVar20,1,
                                             *(undefined8 *)
                                              Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__
                                            );
                                lVar34 = *plVar2;
                                if (lVar34 == 0) goto LAB_0249920c;
                              }
                              lVar26 = *(long *)(lVar34 + 0x58);
                              if (lVar26 == 0) goto LAB_0249920c;
                              uVar52 = *(uint *)(param_1 + 0x95);
                              lVar54 = (long)(int)uVar52;
                              uVar43 = *(uint *)(lVar26 + 0x18);
                              if (uVar43 <= uVar52)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                              ;
                              lVar29 = lVar26 + lVar54 * 0x14;
                              fVar63 = *(float *)(lVar29 + 0x30);
                              uVar71 = (ulong)(uint)fVar63;
                              *(undefined4 *)(lVar29 + 0x28) =
                                   *(undefined4 *)((long)param_1 + 0x4ac);
                              fVar84 = *(float *)((long)param_1 + 0x4bc);
                              if (fVar63 <= *(float *)((long)param_1 + 0x4bc)) {
                                fVar84 = fVar63;
                              }
                              *(float *)(lVar29 + 0x30) = fVar84;
                              uVar44 = *(uint *)((long)param_1 + 0x48c);
                              if (uVar44 == 0 && uVar52 == 0) {
                                *(uint *)(lVar26 + lVar54 * 0x14 + 0x20) = uVar44;
                              }
                              else {
                                uVar8 = uVar44 - 1;
                                if (0 < (int)uVar44) {
                                  lVar34 = *(long *)(lVar34 + 0x38);
                                  if (lVar34 == 0) goto LAB_0249920c;
                                  if (*(uint *)(lVar34 + 0x18) <= uVar8)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  if (uVar52 != *(uint *)(lVar34 + (long)(int)uVar8 * 0x178 + 0x68))
                                  {
                                    if (uVar52 - 1 < uVar43) {
                                      *(uint *)(lVar26 + 0x20 + (long)(int)(uVar52 - 1) * 0x14 + 4)
                                           = uVar8;
                                      *(uint *)(lVar26 + 0x20 + lVar54 * 0x14) = uVar44;
                                      goto LAB_024957b0;
                                    }
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                  }
                                }
                                if (uVar44 == uVar24) {
                                  *(uint *)(lVar26 + lVar54 * 0x14 + 0x24) = uVar24;
                                  uVar44 = uVar24;
                                }
                              }
                            }
LAB_024957b0:
                            puVar12 = System_Threading_Mutex_TypeInfo;
                            if (((char)param_1[0x5a] != '\0') ||
                               ((*(uint *)(param_1 + 0x5b) < 7 &&
                                ((1 << (ulong)(*(uint *)(param_1 + 0x5b) & 0x1f) & 0x4aU) != 0)))) {
                              if ((uVar21 == 0) &&
                                 (((uStack_a4 != 0x2d && (uStack_a4 != 0x200b)) &&
                                  (uStack_a4 != 0xad)))) {
                                if (*(char *)((long)param_1 + 0x2d2) == '\0') {
LAB_02495868:
                                  if (((((0x2bfd < uStack_a4 - 0xac01) &&
                                        (0x1d < uStack_a4 - 0xa961)) && (0xfd < uStack_a4 - 0x1101))
                                      || (uVar28 = FUN_024e95f0(0), (uVar28 & 1) != 0)) &&
                                     ((((0xed < uStack_a4 - 0xff01 && (0x1d < uStack_a4 - 0xfe31))
                                       && (0x717d < uStack_a4 - 0x2e81)) &&
                                      (0x1fd < uStack_a4 - 0xf901)))) goto LAB_024958f0;
                                  lVar34 = FUN_024e94b0(0);
                                  if ((lVar34 == 0) || (*(long *)(lVar34 + 0x10) == 0))
                                  goto LAB_0249920c;
                                  local_fe0 = (double)CONCAT44(local_fe0._4_4_,uStack_a4);
                                  uVar28 = FUN_0129aa60(*(long *)(lVar34 + 0x10),&local_fe0,
                                                        *(undefined8 *)
                                                                                                                  
                                                  System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                                  );
                                  if ((int)*puVar1 < (int)uVar24) {
                                    lVar34 = FUN_024e94b0(0);
                                    if (((lVar34 != 0) && (*plVar2 != 0)) &&
                                       (lVar26 = *(long *)(*plVar2 + 0x38), lVar26 != 0)) {
                                      if (*(uint *)(lVar26 + 0x18) <= *puVar1 + 1)
                                      goto 
                                      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                      ;
                                      if (*(long *)(lVar34 + 0x18) != 0) {
                                        local_fe0 = (double)CONCAT44(local_fe0._4_4_,
                                                                     (uint)*(ushort *)
                                                                            (lVar26 + (long)(int)(*
                                                  puVar1 + 1) * 0x178 + 0x20));
                                        uVar31 = FUN_0129aa60(*(long *)(lVar34 + 0x18),&local_fe0,
                                                              *(undefined8 *)
                                                                                                                              
                                                  System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                                  );
                                        if ((uVar28 & 1) != 0) goto LAB_02495adc;
                                        if ((uVar31 & 1) == 0) goto LAB_02495bc4;
                                        if (bVar11 != 0) goto joined_r0x02495af4;
                                        goto LAB_024959d4;
                                      }
                                    }
                                    goto LAB_0249920c;
                                  }
                                  if ((uVar28 & 1) == 0) {
LAB_02495bc4:
                                    puVar12 = System_Threading_Mutex_TypeInfo;
                                    lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
                                    if (*(int *)(lVar34 + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                      lVar34 = *(long *)puVar12;
                                    }
                                    FUN_024d69d4(param_1,*(long *)(lVar34 + 0xb8) + 0x98,
                                                 local_d8 & 0xffffffff,
                                                 *(undefined4 *)((long)param_1 + 0x48c),0);
                                    bVar11 = 0;
                                    goto LAB_02495b70;
                                  }
LAB_02495adc:
                                  if (uVar53 != uVar75 || ((bVar11 ^ 0xff) & 1) != 0)
                                  goto LAB_02495b70;
joined_r0x02495af4:
                                  if (uVar21 != 0) goto LAB_02495af8;
                                }
                                else {
LAB_024958f0:
                                  if (bVar11 == 0) {
LAB_024959d4:
                                    bVar11 = 0;
                                    goto LAB_02495b70;
                                  }
                                  if (!(bool)(uStack_a4 == 0xad & (bVar16 ^ 1U)))
                                  goto joined_r0x02495af4;
LAB_02495af8:
                                  puVar12 = System_Threading_Mutex_TypeInfo;
                                  lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
                                  if (*(int *)(lVar34 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                    lVar34 = *(long *)puVar12;
                                  }
                                  FUN_024d69d4(param_1,*(long *)(lVar34 + 0xb8) + 0xe78,
                                               local_d8 & 0xffffffff,
                                               *(undefined4 *)((long)param_1 + 0x48c),0);
                                }
                                puVar12 = System_Threading_Mutex_TypeInfo;
                                lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
                                if (*(int *)(lVar34 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                  lVar34 = *(long *)puVar12;
                                }
                                FUN_024d69d4(param_1,*(long *)(lVar34 + 0xb8) + 0x98,
                                             local_d8 & 0xffffffff,
                                             *(undefined4 *)((long)param_1 + 0x48c),0);
                                bVar11 = 1;
                              }
                              else {
                                if (*(char *)((long)param_1 + 0x2d2) == '\x01') goto LAB_024958f0;
                                if (((uStack_a4 - 0x2007 < 0x29) &&
                                    ((1L << ((ulong)(uStack_a4 - 0x2007) & 0x3f) & 0x10000000401U)
                                     != 0)) || ((uStack_a4 == 0xa0 || (uStack_a4 == 0x2060))))
                                goto LAB_02495868;
                                lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
                                if (*(int *)(lVar34 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                  lVar34 = *(long *)puVar12;
                                  uVar44 = *puVar1;
                                }
                                FUN_024d69d4(param_1,*(long *)(lVar34 + 0xb8) + 0x98,
                                             local_d8 & 0xffffffff,uVar44,0);
                                bVar11 = 0;
                                *(undefined4 *)(*(long *)(*(long *)puVar12 + 0xb8) + 0xe78) =
                                     0xffffffff;
                              }
                            }
LAB_02495b70:
                            plVar56 = (long *)System_Threading_Mutex_TypeInfo;
                            lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
                            if (*(int *)(lVar34 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                              lVar34 = *plVar56;
                            }
                            plVar51 = (long *)StringLiteral_302;
                            FUN_024d69d4(param_1,*(long *)(lVar34 + 0xb8) + 0xb00,
                                         local_d8 & 0xffffffff,
                                         *(undefined4 *)((long)param_1 + 0x48c),0);
                            *(int *)((long)param_1 + 0x48c) = *(int *)((long)param_1 + 0x48c) + 1;
                          }
                        }
                        else {
                          *(undefined1 *)((long)param_1 + 0x429) = 1;
                          *(undefined4 *)((long)param_1 + 0x63c) = 0;
                          uVar28 = FUN_024d0688(param_1,param_1[0x8e],(uint)local_d8 + 1,&local_f4,0
                                               );
                          if ((uVar28 & 1) == 0)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor
                          ;
                          local_d8 = CONCAT44(local_d8._4_4_,local_f4);
                          if (*(int *)((long)param_1 + 0x63c) != 0)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor
                          ;
                        }
LAB_02492630:
                        uVar21 = (uint)local_d8 + 1;
                        local_d8 = CONCAT44(local_d8._4_4_,uVar21);
                        lVar34 = param_1[0x8e];
                        if (lVar34 == 0) goto LAB_0249920c;
                        goto LAB_02492378;
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
      }
      (**(code **)(*param_1 + 0x948))(param_1,*(undefined8 *)(*param_1 + 0x950));
      *(undefined4 *)(param_1 + 0x7b) = 0;
      *(undefined4 *)((long)param_1 + 0x3e4) = 0;
      if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c(param_1,0);
      goto LAB_024919cc;
    }
  }
  puVar12 = System_Collections_Generic_List<ScriptableRenderPass>_TypeInfo;
  uVar93 = FUN_02681c0c(param_1,0);
  local_d8 = CONCAT44(uVar93,(uint)local_d8);
  uVar74 = FUN_0176eb1c((long)&local_d8 + 4,0);
  uVar74 = FUN_015f5b28(*(undefined8 *)puVar12,uVar74,0);
  if (*(int *)(*plVar51 + 0xe0) == 0) {
    thunk_FUN_00d32864(*plVar51);
  }
  FUN_02661754(uVar74,0);
LAB_024919cc:
  *(undefined1 *)((long)param_1 + 0x244) = 1;
  return;
LAB_02496a50:
  do {
    uVar24 = uVar44 - 1;
    if (*(uint *)(lVar49 + 0x18) <= uVar24)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*plVar2 == 0) || (lVar26 = *(long *)(*plVar2 + 0x50), lVar26 == 0)) goto LAB_0249920c;
    lVar29 = (long)(int)uVar24;
    lVar54 = lVar49 + lVar29 * 0x178;
    uVar43 = *(uint *)(lVar54 + 100);
    if (*(uint *)(lVar26 + 0x18) <= uVar43)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar45 = *(long *)(lVar54 + 0x38);
    uVar5 = *(ushort *)(lVar54 + 0x20);
    lVar47 = (long)(int)uVar43;
    lVar26 = lVar26 + lVar47 * 0x5c;
    uVar8 = *(uint *)(lVar26 + 0x3c);
    iVar22 = *(int *)(lVar26 + 0x28);
    iVar23 = *(int *)(lVar26 + 0x2c);
    uVar7 = *(uint *)(lVar26 + 0x40);
    lVar54 = (long)(int)uVar7;
    uVar52 = *(uint *)(lVar26 + 0x68);
    fVar63 = *(float *)(lVar26 + 0x5c);
    fVar80 = *(float *)(lVar26 + 0x60);
    iVar4 = *(int *)(lVar26 + 0x20);
    fVar58 = *(float *)(lVar26 + 0x4c);
    fVar92 = *(float *)(lVar26 + 0x54);
    fVar86 = *(float *)(lVar26 + 0x58);
    fVar82 = *(float *)(lVar26 + 0x6c);
    fVar76 = *(float *)(lVar26 + 0x70);
    fVar91 = *(float *)(lVar26 + 0x74);
    fVar59 = *(float *)(lVar26 + 0x78);
    fVar61 = fVar63 + fVar80;
    uVar50 = (uint)uVar5;
    if ((int)uVar52 < 9) {
      switch(uVar52) {
      case 1:
        if ((char)param_1[0x1d] == '\0') {
          local_1798 = fVar80 + 0.0;
        }
        else {
          local_1798 = 0.0 - fVar86;
        }
        break;
      case 2:
LAB_02496c1c:
        local_1798 = (fVar80 + fVar63 * 0.5) - fVar86 * 0.5;
        break;
      default:
        goto switchD_02496b58_caseD_3;
      case 4:
        local_1798 = fVar61 - fVar86;
        if ((char)param_1[0x1d] != '\0') {
          local_1798 = fVar61;
        }
        break;
      case 8:
        goto switchD_02496b58_caseD_8;
      }
LAB_02496c90:
      local_17a0 = 0;
    }
    else if (uVar52 == 0x10) {
switchD_02496b58_caseD_8:
      if (uVar5 < 0xad) {
        if ((uVar50 != 3) && (uVar50 != 10)) goto LAB_02496bac;
      }
      else if ((uVar50 != 0xad) && ((uVar50 != 0x200b && (uVar50 != 0x2060)))) {
LAB_02496bac:
        if (*(uint *)(lVar49 + 0x18) <= uVar8)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar6 = *(undefined2 *)(lVar49 + (long)(int)uVar8 * 0x178 + 0x20);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar25 = FUN_016f9f84(uVar6,0);
        if ((uVar25 & 1) == 0) {
          bVar18 = (int)uVar43 < (int)param_1[0x94];
        }
        else {
          bVar18 = false;
        }
        if ((fVar86 <= fVar63) && (!bVar18 && (uVar52 >> 4 & 1) == 0)) {
          local_1798 = fVar80;
          if ((char)param_1[0x1d] != '\0') {
            local_1798 = fVar61;
          }
          goto LAB_02496c90;
        }
        if (((uVar44 == 1) || (uVar43 != uVar75)) || (uVar24 == *(uint *)((long)param_1 + 0x31c))) {
          local_1798 = fVar80;
          if ((char)param_1[0x1d] != '\0') {
            local_1798 = fVar61;
          }
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          local_1840 = FUN_016fa418(uVar5,0);
          local_17a0 = 0;
        }
        else {
          cVar36 = (char)param_1[0x1d];
          fVar61 = -fVar86;
          if (cVar36 != '\0') {
            fVar61 = fVar86;
          }
          if (*(uint *)(lVar49 + 0x18) <= uVar8)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar86 = 1.0;
          iVar23 = (int)*(char *)(lVar49 + (long)(int)uVar8 * 0x178 + 0x194) +
                   (-iVar4 - (local_1840 & 1)) + iVar23 + -1;
          if (0 < iVar23) {
            fVar86 = *(float *)((long)param_1 + 0x2d4);
          }
          if (iVar23 < 1) {
            iVar23 = 1;
          }
          if (uVar50 == 9) {
LAB_02498bb8:
            fVar86 = 1.0 - fVar86;
          }
          else {
            if (uVar50 != 0xa0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar25 = FUN_016fa418(uVar5,0);
              cVar36 = (char)param_1[0x1d];
              if ((uVar25 & 1) != 0) goto LAB_02498bb8;
            }
            iVar23 = (iVar4 - (~local_1840 & 1)) + iVar22;
          }
          fVar86 = ((fVar63 + fVar61) * fVar86) / (float)iVar23;
          if (cVar36 == '\0') {
            local_1798 = local_1798 + fVar86;
            local_17a0 = CONCAT44((float)((ulong)local_17a0 >> 0x20) + 0.0,(float)local_17a0 + 0.0);
          }
          else {
            local_1798 = local_1798 - fVar86;
          }
        }
      }
    }
    else if (uVar52 == 0x20) {
      fVar86 = fVar82 + fVar91;
      goto LAB_02496c1c;
    }
switchD_02496b58_caseD_3:
    uVar52 = (uint)*(undefined8 *)(lVar49 + 0x18);
    if (uVar52 <= uVar24)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar26 = lVar49 + lVar29 * 0x178;
    fVar61 = fVar73 + local_1798;
    fVar86 = (float)local_17d0 + (float)local_17a0;
    fVar63 = (float)((ulong)local_17d0 >> 0x20) + (float)((ulong)local_17a0 >> 0x20);
    if (*(char *)(lVar26 + 0x194) == '\0') goto LAB_02497688;
    iVar22 = *(int *)(lVar49 + lVar29 * 0x178 + 0x2c);
    if (iVar22 != 0) goto LAB_02497374;
    fVar83 = fmodf(*(float *)((long)param_1 + 0x30c) * (float)(int)uVar43,1.0);
    switch(*(undefined4 *)((long)param_1 + 0x304)) {
    case 0:
      lVar40 = lVar49 + lVar29 * 0x178;
      *(undefined4 *)(lVar40 + 0x84) = 0;
      *(undefined4 *)(lVar40 + 0xac) = 0;
      *(undefined4 *)(lVar40 + 0xd4) = 0x3f800000;
      fVar83 = 1.0;
      break;
    case 1:
      fVar59 = *(float *)(lVar49 + lVar29 * 0x178 + 0x70);
      if (*(int *)((long)param_1 + 0x26c) == 0x208) {
        lVar40 = lVar49 + lVar29 * 0x178;
        fVar91 = (local_1798 + fVar59) - *(float *)((long)param_1 + 0x4d4);
        fVar59 = *(float *)((long)param_1 + 0x4dc) - *(float *)((long)param_1 + 0x4d4);
        goto LAB_02496df8;
      }
      lVar40 = lVar49 + lVar29 * 0x178;
      fVar91 = fVar91 - fVar82;
      *(float *)(lVar40 + 0x84) = fVar83 + (fVar59 - fVar82) / fVar91;
      *(float *)(lVar40 + 0xac) = fVar83 + (*(float *)(lVar40 + 0x98) - fVar82) / fVar91;
      *(float *)(lVar40 + 0xd4) = fVar83 + (*(float *)(lVar40 + 0xc0) - fVar82) / fVar91;
      fVar83 = fVar83 + (*(float *)(lVar40 + 0xe8) - fVar82) / fVar91;
      break;
    case 2:
      lVar40 = lVar49 + lVar29 * 0x178;
      fVar59 = *(float *)((long)param_1 + 0x4dc) - *(float *)((long)param_1 + 0x4d4);
      fVar91 = (local_1798 + *(float *)(lVar40 + 0x70)) - *(float *)((long)param_1 + 0x4d4);
LAB_02496df8:
      *(float *)(lVar40 + 0x84) = fVar83 + fVar91 / fVar59;
      *(float *)(lVar40 + 0xac) =
           fVar83 + ((local_1798 + *(float *)(lVar40 + 0x98)) - *(float *)((long)param_1 + 0x4d4)) /
                    (*(float *)((long)param_1 + 0x4dc) - *(float *)((long)param_1 + 0x4d4));
      *(float *)(lVar40 + 0xd4) =
           fVar83 + ((local_1798 + *(float *)(lVar40 + 0xc0)) - *(float *)((long)param_1 + 0x4d4)) /
                    (*(float *)((long)param_1 + 0x4dc) - *(float *)((long)param_1 + 0x4d4));
      fVar83 = fVar83 + ((local_1798 + *(float *)(lVar40 + 0xe8)) -
                        *(float *)((long)param_1 + 0x4d4)) /
                        (*(float *)((long)param_1 + 0x4dc) - *(float *)((long)param_1 + 0x4d4));
      break;
    case 3:
      switch((int)param_1[0x61]) {
      case 0:
        lVar40 = lVar49 + lVar29 * 0x178;
        *(undefined4 *)(lVar40 + 0x88) = 0;
        *(undefined4 *)(lVar40 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar40 + 0xd8) = 0;
        *(undefined4 *)(lVar40 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar40 = lVar49 + lVar29 * 0x178;
        fVar59 = fVar59 - fVar76;
        fVar91 = fVar83 + (*(float *)(lVar40 + 0x74) - fVar76) / fVar59;
        fVar59 = fVar83 + (*(float *)(lVar40 + 0x9c) - fVar76) / fVar59;
        *(float *)(lVar40 + 0x88) = fVar91;
        *(float *)(lVar40 + 0xb0) = fVar59;
        *(float *)(lVar40 + 0xd8) = fVar91;
        *(float *)(lVar40 + 0x100) = fVar59;
        break;
      case 2:
        lVar40 = lVar49 + lVar29 * 0x178;
        fVar91 = fVar83 + (*(float *)(lVar40 + 0x74) - *(float *)(param_1 + 0x9b)) /
                          (*(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0x9b));
        *(float *)(lVar40 + 0x88) = fVar91;
        fVar59 = *(float *)(param_1 + 0x9b);
        fVar76 = *(float *)(param_1 + 0x9c);
        *(float *)(lVar40 + 0xd8) = fVar91;
        fVar91 = fVar83 + (*(float *)(lVar40 + 0x9c) - fVar59) / (fVar76 - fVar59);
        *(float *)(lVar40 + 0xb0) = fVar91;
        *(float *)(lVar40 + 0x100) = fVar91;
        break;
      case 3:
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
        uVar52 = (uint)*(undefined8 *)(lVar49 + 0x18);
      }
      if (uVar52 <= uVar24)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar40 = lVar49 + lVar29 * 0x178;
      fVar91 = *(float *)(lVar40 + 0x15c);
      fVar59 = (1.0 - (*(float *)(lVar40 + 0x88) + *(float *)(lVar40 + 0xb0)) * fVar91) * 0.5;
      fVar76 = fVar83 + *(float *)(lVar40 + 0x88) * fVar91 + fVar59;
      fVar83 = fVar83 + fVar59 + *(float *)(lVar40 + 0xb0) * fVar91;
      *(float *)(lVar40 + 0x84) = fVar76;
      *(float *)(lVar40 + 0xac) = fVar76;
      *(float *)(lVar40 + 0xd4) = fVar83;
      break;
    default:
      goto switchD_02496d4c_default;
    }
    *(float *)(lVar49 + lVar29 * 0x178 + 0xfc) = fVar83;
switchD_02496d4c_default:
    switch((int)param_1[0x61]) {
    case 0:
      if (uVar52 <= uVar24)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar40 = lVar49 + lVar29 * 0x178;
      *(undefined4 *)(lVar40 + 0x88) = 0;
      *(undefined4 *)(lVar40 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar40 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar40 + 0x100) = 0;
      break;
    case 1:
      if (uVar24 < uVar52) {
        lVar40 = lVar49 + lVar29 * 0x178;
        fVar58 = fVar58 - fVar92;
        fVar83 = (*(float *)(lVar40 + 0x74) - fVar92) / fVar58;
        fVar58 = (*(float *)(lVar40 + 0x9c) - fVar92) / fVar58;
        *(float *)(lVar40 + 0x88) = fVar83;
        goto LAB_02497174;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    case 2:
      if (uVar52 <= uVar24)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar40 = lVar49 + lVar29 * 0x178;
      fVar83 = (*(float *)(lVar40 + 0x74) - *(float *)(param_1 + 0x9b)) /
               (*(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0x9b));
      *(float *)(lVar40 + 0x88) = fVar83;
      fVar58 = (*(float *)(lVar40 + 0x9c) - *(float *)(param_1 + 0x9b)) /
               (*(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0x9b));
LAB_02497174:
      *(float *)(lVar40 + 0xb0) = fVar58;
      *(float *)(lVar40 + 0xd8) = fVar58;
      *(float *)(lVar40 + 0x100) = fVar83;
      break;
    case 3:
      if (uVar52 <= uVar24)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar40 = lVar49 + lVar29 * 0x178;
      fVar58 = *(float *)(lVar40 + 0x15c);
      fVar91 = (1.0 - (*(float *)(lVar40 + 0x84) + *(float *)(lVar40 + 0xd4)) / fVar58) * 0.5;
      fVar83 = *(float *)(lVar40 + 0x84) / fVar58 + fVar91;
      fVar91 = fVar91 + *(float *)(lVar40 + 0xd4) / fVar58;
      *(float *)(lVar40 + 0x88) = fVar83;
      *(float *)(lVar40 + 0xb0) = fVar91;
      *(float *)(lVar40 + 0x100) = fVar83;
      *(float *)(lVar40 + 0xd8) = fVar91;
    }
    if (uVar52 <= uVar24)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar40 = lVar49 + lVar29 * 0x178;
    fVar83 = *(float *)(lVar40 + 0x160) * (1.0 - *(float *)((long)param_1 + 0x2cc));
    if ((*(char *)(lVar40 + 0x5c) == '\0') && ((*(byte *)(lVar49 + lVar29 * 0x178 + 400) & 1) != 0))
    {
      fVar83 = -fVar83;
    }
    fVar91 = fVar77;
    if (((iVar19 == 2) || (fVar91 = fVar94, iVar19 == 1)) || (fVar91 = fVar77 / fVar60, iVar19 == 0)
       ) {
      fVar83 = fVar91 * fVar83;
    }
    lVar40 = lVar49 + lVar29 * 0x178;
    fVar58 = *(float *)(lVar40 + 0x88);
    fVar59 = *(float *)(lVar40 + 0x84);
    fVar91 = -2.1474836e+09;
    if (fVar59 != INFINITY) {
      fVar91 = (float)(int)fVar59;
    }
    fVar76 = *(float *)(lVar40 + 0xd4);
    fVar82 = *(float *)(lVar40 + 0xd8);
    fVar92 = -2.1474836e+09;
    if (fVar58 != INFINITY) {
      fVar92 = (float)(int)fVar58;
    }
    uVar93 = FUN_024e0374(fVar59 - fVar91,fVar58 - fVar92,param_1,0);
    *(undefined4 *)(lVar40 + 0x84) = uVar93;
    if (*(uint *)(lVar49 + 0x18) <= uVar24)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar82 = fVar82 - fVar92;
    *(float *)(lVar40 + 0x88) = fVar83;
    uVar93 = FUN_024e0374(fVar59 - fVar91,fVar82,param_1,0);
    *(undefined4 *)(lVar49 + lVar29 * 0x178 + 0xac) = uVar93;
    if (*(uint *)(lVar49 + 0x18) <= uVar24)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar76 = fVar76 - fVar91;
    *(float *)(lVar49 + lVar29 * 0x178 + 0xb0) = fVar83;
    fVar91 = (float)FUN_024e0374(fVar76,fVar82,param_1,0);
    *(float *)(lVar40 + 0xd4) = fVar91;
    if (*(uint *)(lVar49 + 0x18) <= uVar24)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar40 + 0xd8) = fVar83;
    uVar93 = FUN_024e0374(fVar76,fVar58 - fVar92,param_1,0);
    *(undefined4 *)(lVar49 + lVar29 * 0x178 + 0xfc) = uVar93;
    uVar52 = (uint)*(undefined8 *)(lVar49 + 0x18);
    if (uVar52 <= uVar24)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar49 + lVar29 * 0x178 + 0x100) = fVar83;
LAB_02497374:
    if (((int)param_1[100] <= (int)uVar24) || (*(int *)((long)param_1 + 0x324) <= local_17b4))
    goto LAB_02497490;
    if (((int)uVar43 < (int)param_1[0x65]) && ((int)param_1[0x5b] != 5)) {
      if (uVar52 <= uVar24)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar26 = lVar49 + lVar29 * 0x178;
      *(ulong *)(lVar26 + 0x70) =
           CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar26 + 0x70) >> 0x20),
                    fVar61 + (float)*(undefined8 *)(lVar26 + 0x70));
      *(float *)(lVar26 + 0x78) = fVar63 + *(float *)(lVar26 + 0x78);
      if (*(uint *)(lVar49 + 0x18) <= uVar24)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar26 = lVar49 + lVar29 * 0x178;
      *(ulong *)(lVar26 + 0x98) =
           CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar26 + 0x98) >> 0x20),
                    fVar61 + (float)*(undefined8 *)(lVar26 + 0x98));
      *(float *)(lVar26 + 0xa0) = fVar63 + *(float *)(lVar26 + 0xa0);
      if (*(uint *)(lVar49 + 0x18) <= uVar24)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar26 = lVar49 + lVar29 * 0x178;
      *(ulong *)(lVar26 + 0xc0) =
           CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar26 + 0xc0) >> 0x20),
                    fVar61 + (float)*(undefined8 *)(lVar26 + 0xc0));
      *(float *)(lVar26 + 200) = fVar63 + *(float *)(lVar26 + 200);
      if (*(uint *)(lVar49 + 0x18) <= uVar24)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar26 = lVar49 + lVar29 * 0x178;
      *(ulong *)(lVar26 + 0xe8) =
           CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar26 + 0xe8) >> 0x20),
                    fVar61 + (float)*(undefined8 *)(lVar26 + 0xe8));
      *(float *)(lVar26 + 0xf0) = fVar63 + *(float *)(lVar26 + 0xf0);
      if (iVar22 == 0) goto LAB_02497668;
LAB_02497598:
      if (iVar22 == 1) {
        pcVar42 = *(code **)(*param_1 + 0x8f8);
        uVar74 = *(undefined8 *)(*param_1 + 0x900);
        goto LAB_02497674;
      }
    }
    else {
      if (((int)uVar43 < (int)param_1[0x65]) && ((int)param_1[0x5b] == 5)) {
        if (uVar52 <= uVar24)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(uint *)(lVar49 + lVar29 * 0x178 + 0x68) != uVar3) goto LAB_02497490;
        lVar26 = lVar49 + lVar29 * 0x178;
        *(ulong *)(lVar26 + 0x70) =
             CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar26 + 0x70) >> 0x20),
                      fVar61 + (float)*(undefined8 *)(lVar26 + 0x70));
        *(float *)(lVar26 + 0x78) = fVar63 + *(float *)(lVar26 + 0x78);
        if (*(uint *)(lVar49 + 0x18) <= uVar24)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar26 = lVar49 + lVar29 * 0x178;
        *(ulong *)(lVar26 + 0x98) =
             CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar26 + 0x98) >> 0x20),
                      fVar61 + (float)*(undefined8 *)(lVar26 + 0x98));
        *(float *)(lVar26 + 0xa0) = fVar63 + *(float *)(lVar26 + 0xa0);
        if (*(uint *)(lVar49 + 0x18) <= uVar24)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar26 = lVar49 + lVar29 * 0x178;
        *(ulong *)(lVar26 + 0xc0) =
             CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar26 + 0xc0) >> 0x20),
                      fVar61 + (float)*(undefined8 *)(lVar26 + 0xc0));
        *(float *)(lVar26 + 200) = fVar63 + *(float *)(lVar26 + 200);
        if (*(uint *)(lVar49 + 0x18) <= uVar24)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar26 = lVar49 + lVar29 * 0x178;
        *(ulong *)(lVar26 + 0xe8) =
             CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar26 + 0xe8) >> 0x20),
                      fVar61 + (float)*(undefined8 *)(lVar26 + 0xe8));
        *(float *)(lVar26 + 0xf0) = fVar63 + *(float *)(lVar26 + 0xf0);
      }
      else {
LAB_02497490:
        if (uVar52 <= uVar24)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        puVar12 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        lVar40 = lVar49 + lVar29 * 0x178;
        uVar93 = *(undefined4 *)
                  (*(undefined8 **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8) + 1);
        *(undefined8 *)(lVar40 + 0x70) =
             **(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        *(undefined4 *)(lVar40 + 0x78) = uVar93;
        if (*(uint *)(lVar49 + 0x18) <= uVar24)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar40 = lVar49 + lVar29 * 0x178;
        uVar93 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
        *(undefined8 *)(lVar40 + 0x98) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
        *(undefined4 *)(lVar40 + 0xa0) = uVar93;
        if (*(uint *)(lVar49 + 0x18) <= uVar24)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar40 = lVar49 + lVar29 * 0x178;
        uVar93 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
        *(undefined8 *)(lVar40 + 0xc0) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
        *(undefined4 *)(lVar40 + 200) = uVar93;
        if (*(uint *)(lVar49 + 0x18) <= uVar24)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar40 = lVar49 + lVar29 * 0x178;
        uVar93 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
        *(undefined8 *)(lVar40 + 0xe8) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
        *(undefined4 *)(lVar40 + 0xf0) = uVar93;
        if (*(uint *)(lVar49 + 0x18) <= uVar24)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(undefined1 *)(lVar26 + 0x194) = 0;
      }
      if (iVar22 != 0) goto LAB_02497598;
LAB_02497668:
      pcVar42 = *(code **)(*param_1 + 0x8d8);
      uVar74 = *(undefined8 *)(*param_1 + 0x8e0);
LAB_02497674:
      (*pcVar42)(param_1,uVar24,0,uVar74);
    }
LAB_02497688:
    if ((*plVar2 == 0) || (lVar26 = *(long *)(*plVar2 + 0x38), lVar26 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar26 + 0x18) <= uVar24)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar26 = lVar26 + lVar29 * 0x178;
    uVar74 = *(undefined8 *)(lVar26 + 0x11c);
    *(undefined8 *)(lVar26 + 0x11c) =
         CONCAT44(fVar86 + (float)((ulong)uVar74 >> 0x20),fVar61 + (float)uVar74);
    *(float *)(lVar26 + 0x124) = fVar63 + *(float *)(lVar26 + 0x124);
    if ((*plVar2 == 0) || (lVar26 = *(long *)(*plVar2 + 0x38), lVar26 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar26 + 0x18) <= uVar24)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar26 = lVar26 + lVar29 * 0x178;
    *(ulong *)(lVar26 + 0x110) =
         CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar26 + 0x110) >> 0x20),
                  fVar61 + (float)*(undefined8 *)(lVar26 + 0x110));
    *(float *)(lVar26 + 0x118) = fVar63 + *(float *)(lVar26 + 0x118);
    if ((*plVar2 == 0) || (lVar26 = *(long *)(*plVar2 + 0x38), lVar26 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar26 + 0x18) <= uVar24)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar26 = lVar26 + lVar29 * 0x178;
    *(ulong *)(lVar26 + 0x128) =
         CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar26 + 0x128) >> 0x20),
                  fVar61 + (float)*(undefined8 *)(lVar26 + 0x128));
    *(float *)(lVar26 + 0x130) = fVar63 + *(float *)(lVar26 + 0x130);
    if ((*plVar2 == 0) || (lVar26 = *(long *)(*plVar2 + 0x38), lVar26 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar26 + 0x18) <= uVar24)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar26 = lVar26 + lVar29 * 0x178;
    *(float *)(lVar26 + 0x134) = fVar61 + *(float *)(lVar26 + 0x134);
    *(ulong *)(lVar26 + 0x138) =
         CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar26 + 0x138) >> 0x20),
                  fVar86 + (float)*(undefined8 *)(lVar26 + 0x138));
    lVar26 = *plVar2;
    if ((lVar26 == 0) || (lVar40 = *(long *)(lVar26 + 0x38), lVar40 == 0)) goto LAB_0249920c;
    uVar52 = *(uint *)(lVar40 + 0x18);
    if (uVar52 <= uVar24)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar46 = lVar40 + lVar29 * 0x178;
    uVar71 = CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar46 + 0x140) >> 0x20),
                      fVar61 + (float)*(undefined8 *)(lVar46 + 0x140));
    fVar91 = fVar86 + *(float *)(lVar46 + 0x150);
    uVar28 = (ulong)(uint)fVar91;
    uVar31 = CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar46 + 0x148) >> 0x20),
                      fVar86 + (float)*(undefined8 *)(lVar46 + 0x148));
    *(ulong *)(lVar46 + 0x140) = uVar71;
    *(ulong *)(lVar46 + 0x148) = uVar31;
    *(float *)(lVar46 + 0x150) = fVar91;
    if (uVar43 == uVar75) {
      uVar75 = *puVar1 - 1;
      if (uVar24 == uVar75) goto LAB_0249788c;
    }
    else {
      lVar26 = *(long *)(lVar26 + 0x50);
      if (lVar26 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar26 + 0x18) <= uVar75)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar46 = (long)(int)uVar75;
      lVar48 = lVar26 + lVar46 * 0x5c;
      uVar31 = (ulong)(uint)*(float *)(lVar48 + 0x58);
      fVar91 = fVar86 + *(float *)(lVar48 + 0x54);
      uVar71 = (ulong)(uint)fVar91;
      fVar58 = fVar61 + *(float *)(lVar48 + 0x58);
      uVar28 = (ulong)(uint)fVar58;
      *(ulong *)(lVar48 + 0x4c) =
           CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar48 + 0x4c) >> 0x20),
                    fVar86 + (float)*(undefined8 *)(lVar48 + 0x4c));
      *(float *)(lVar48 + 0x54) = fVar91;
      *(float *)(lVar48 + 0x58) = fVar58;
      if (uVar52 <= *(uint *)(lVar48 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar93 = *(undefined4 *)(lVar40 + (long)(int)*(uint *)(lVar48 + 0x34) * 0x178 + 0x11c);
      lVar26 = lVar26 + lVar46 * 0x5c;
      *(float *)(lVar26 + 0x70) = fVar91;
      *(undefined4 *)(lVar26 + 0x6c) = uVar93;
      lVar26 = *plVar2;
      if ((lVar26 == 0) || (lVar40 = *(long *)(lVar26 + 0x50), lVar40 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar40 + 0x18) <= uVar75)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_0249920c;
      uVar75 = *(uint *)(lVar40 + lVar46 * 0x5c + 0x40);
      if (*(uint *)(lVar26 + 0x18) <= uVar75)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar40 = lVar40 + lVar46 * 0x5c;
      *(undefined4 *)(lVar40 + 0x74) = *(undefined4 *)(lVar26 + (long)(int)uVar75 * 0x178 + 0x128);
      *(undefined4 *)(lVar40 + 0x78) = *(undefined4 *)(lVar40 + 0x4c);
      uVar75 = *puVar1 - 1;
LAB_0249788c:
      if (uVar24 == uVar75) {
        lVar26 = *plVar2;
        if ((lVar26 == 0) || (lVar40 = *(long *)(lVar26 + 0x50), lVar40 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar40 + 0x18) <= uVar43)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar46 = lVar40 + lVar47 * 0x5c;
        uVar31 = (ulong)(uint)*(float *)(lVar46 + 0x58);
        uVar71 = CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar46 + 0x4c) >> 0x20),
                          fVar86 + (float)*(undefined8 *)(lVar46 + 0x4c));
        fVar91 = fVar86 + *(float *)(lVar46 + 0x54);
        fVar61 = fVar61 + *(float *)(lVar46 + 0x58);
        uVar28 = (ulong)(uint)fVar61;
        *(ulong *)(lVar46 + 0x4c) = uVar71;
        *(float *)(lVar46 + 0x54) = fVar91;
        *(float *)(lVar46 + 0x58) = fVar61;
        lVar26 = *(long *)(lVar26 + 0x38);
        if (lVar26 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(lVar46 + 0x34))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar93 = *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar46 + 0x34) * 0x178 + 0x11c);
        lVar40 = lVar40 + lVar47 * 0x5c;
        *(float *)(lVar40 + 0x70) = fVar91;
        *(undefined4 *)(lVar40 + 0x6c) = uVar93;
        lVar26 = *plVar2;
        if ((lVar26 == 0) || (lVar40 = *(long *)(lVar26 + 0x50), lVar40 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar40 + 0x18) <= uVar43)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar26 = *(long *)(lVar26 + 0x38);
        if (lVar26 == 0) goto LAB_0249920c;
        uVar75 = *(uint *)(lVar40 + lVar47 * 0x5c + 0x40);
        if (*(uint *)(lVar26 + 0x18) <= uVar75)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar40 = lVar40 + lVar47 * 0x5c;
        *(undefined4 *)(lVar40 + 0x74) = *(undefined4 *)(lVar26 + (long)(int)uVar75 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar40 + 0x78) = *(undefined4 *)(lVar40 + 0x4c);
      }
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar25 = FUN_016f9468(uVar50,0);
    if (((((uVar25 & 1) == 0) && (1 < uVar50 - 0x2010)) && (uVar50 != 0xad)) && (uVar50 != 0x2d)) {
      if (bVar10) {
        if (((uVar44 != 1) && ((int)uVar24 < (int)(*(uint *)(lVar49 + 0x18) - 1))) &&
           (((int)uVar24 < (int)*puVar1 && ((uVar50 == 0x2019 || (uVar50 == 0x27)))))) {
          if (*(uint *)(lVar49 + 0x18) <= uVar44 - 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar6 = *(undefined2 *)(lVar49 + lVar34 + -0x438);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar25 = FUN_016f9468(uVar6,0);
          if ((uVar25 & 1) != 0) {
            if (*(uint *)(lVar49 + 0x18) <= uVar44)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar6 = *(undefined2 *)(lVar49 + lVar34 + -0x148);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar25 = FUN_016f9468(uVar6,0);
            if ((uVar25 & 1) != 0) goto LAB_02497aa4;
          }
        }
      }
      else {
        if (uVar44 != 1) {
LAB_024985a0:
          bVar10 = false;
          goto LAB_02497aac;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar25 = FUN_016f93a0(uVar50,0);
        if ((uVar25 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar25 = FUN_016f68bc(uVar50,0);
          if (((uVar50 != 0x200b) && ((uVar25 & 1) == 0)) && (*puVar1 != 1)) goto LAB_024985a0;
        }
      }
      if (uVar24 == *puVar1 - 1) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar25 = FUN_016f9468(uVar50,0);
        iVar22 = iVar20;
        if ((uVar25 & 1) == 0) goto LAB_02497de0;
      }
      else {
LAB_02497de0:
        iVar22 = uVar44 - 2;
      }
      lVar26 = *plVar2;
      if (lVar26 == 0) goto LAB_0249920c;
      lVar40 = *(long *)(lVar26 + 0x40);
      if (lVar40 == 0) goto LAB_0249920c;
      uVar75 = *(uint *)(lVar26 + 0x24);
      iVar23 = *(int *)(lVar40 + 0x18);
      if (iVar23 < (int)(uVar75 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar26 + 0x40),iVar23 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar26 = *plVar2;
        if (lVar26 == 0) goto LAB_0249920c;
      }
      lVar40 = *(long *)(lVar26 + 0x40);
      if (lVar40 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar40 + 0x18) <= uVar75)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar40 = lVar40 + (long)(int)uVar75 * 0x18;
      *(uint *)(lVar40 + 0x28) = uVar53;
      *(int *)(lVar40 + 0x2c) = iVar22;
      *(uint *)(lVar40 + 0x30) = (iVar22 - uVar53) + 1;
      *(long **)(lVar40 + 0x20) = param_1;
      lVar40 = *(long *)(lVar26 + 0x50);
      *(int *)(lVar26 + 0x24) = *(int *)(lVar26 + 0x24) + 1;
      if (lVar40 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar40 + 0x18) <= uVar43)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar40 = lVar40 + lVar47 * 0x5c;
      bVar10 = false;
      local_17b4 = local_17b4 + 1;
      *(int *)(lVar40 + 0x30) = *(int *)(lVar40 + 0x30) + 1;
    }
    else {
      if (!bVar10) {
        uVar53 = uVar24;
      }
      if (uVar24 == *puVar1 - 1) {
        lVar26 = *plVar2;
        if (lVar26 == 0) goto LAB_0249920c;
        lVar40 = *(long *)(lVar26 + 0x40);
        if (lVar40 == 0) goto LAB_0249920c;
        uVar75 = *(uint *)(lVar26 + 0x24);
        iVar22 = *(int *)(lVar40 + 0x18);
        if (iVar22 < (int)(uVar75 + 1)) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147b84((long *)(lVar26 + 0x40),iVar22 + 1,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
          lVar26 = *plVar2;
          if (lVar26 == 0) goto LAB_0249920c;
        }
        lVar40 = *(long *)(lVar26 + 0x40);
        if (lVar40 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar40 + 0x18) <= uVar75)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar40 = lVar40 + (long)(int)uVar75 * 0x18;
        *(uint *)(lVar40 + 0x28) = uVar53;
        *(uint *)(lVar40 + 0x2c) = uVar24;
        *(long **)(lVar40 + 0x20) = param_1;
        *(uint *)(lVar40 + 0x30) = uVar44 - uVar53;
        lVar40 = *(long *)(lVar26 + 0x50);
        *(int *)(lVar26 + 0x24) = *(int *)(lVar26 + 0x24) + 1;
        if (lVar40 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar40 + 0x18) <= uVar43)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar40 = lVar40 + lVar47 * 0x5c;
        local_17b4 = local_17b4 + 1;
        *(int *)(lVar40 + 0x30) = *(int *)(lVar40 + 0x30) + 1;
      }
LAB_02497aa4:
      bVar10 = true;
    }
LAB_02497aac:
    if ((*plVar2 == 0) || (lVar26 = *(long *)(*plVar2 + 0x38), lVar26 == 0)) goto LAB_0249920c;
    uVar75 = *(uint *)(lVar26 + 0x18);
    if (uVar75 <= uVar24)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar26 + lVar29 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar16) {
LAB_02497adc:
        if (uVar75 <= uVar44 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar47 = *param_1;
        uVar75 = *(uint *)(lVar26 + lVar34 + -0x330);
        uVar93 = *(undefined4 *)(lVar26 + lVar34 + -0x2f8);
LAB_0249805c:
        pcVar42 = *(code **)(lVar47 + 0x908);
        uVar74 = *(undefined8 *)(lVar47 + 0x910);
LAB_02498064:
        uVar31 = (ulong)uVar75;
        uVar71 = (ulong)(uint)local_1810;
        uVar28 = (ulong)(uint)local_180c;
        (*pcVar42)(local_1808,uVar71,uVar28,uVar31,local_1790,0,local_1804,uVar93,param_1,
                   (long)&local_c0 + 4,uVar21,uVar74);
        puVar12 = System_Threading_Mutex_TypeInfo;
        lVar26 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar26 = *(long *)puVar12;
        }
LAB_024980b4:
        bVar16 = false;
        fVar57 = 0.0;
        local_1790 = *(float *)(*(long *)(lVar26 + 0xb8) + 0x15a8);
        local_1794 = 0.0;
      }
      else {
LAB_02497fc4:
        bVar16 = false;
      }
    }
    else {
      lVar26 = lVar26 + lVar29 * 0x178;
      iVar22 = *(int *)(lVar26 + 0x68);
      *(undefined4 *)(lVar26 + 0x16c) = local_c0._4_4_;
      if ((((int)param_1[100] < (int)uVar24) || ((int)param_1[0x65] < (int)uVar43)) ||
         (((int)param_1[0x5b] == 5 && (iVar22 + 1 != (int)param_1[0x66])))) {
        bVar18 = false;
      }
      else {
        bVar18 = true;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar25 = FUN_016f68bc(uVar50,0);
      if ((uVar50 != 0x200b) && ((uVar25 & 1) == 0)) {
        lVar26 = *plVar2;
        if ((lVar26 == 0) || (lVar47 = *(long *)(lVar26 + 0x38), lVar47 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar47 + 0x18) <= uVar24)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar91 = *(float *)(lVar47 + lVar29 * 0x178 + 0x160);
        if (fVar57 <= fVar91) {
          fVar57 = fVar91;
        }
        if (local_1794 <= ABS(fVar83)) {
          local_1794 = ABS(fVar83);
        }
        if (iVar22 != local_1814) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar26 = *plVar2;
            if (lVar26 == 0) goto LAB_0249920c;
            lVar47 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          else {
            lVar47 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          local_1790 = *(float *)(lVar47 + 0x15a8);
        }
        lVar26 = *(long *)(lVar26 + 0x38);
        if (lVar26 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar26 + 0x18) <= uVar24)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (param_1[0x1e] == 0) goto LAB_0249920c;
        fVar58 = *(float *)(lVar26 + lVar29 * 0x178 + 0x14c);
        fVar91 = (float)FUN_026fd1d0(param_1[0x1e] + 0x50,0);
        fVar58 = fVar58 + fVar57 * fVar91;
        if (fVar58 <= local_1790) {
          local_1790 = fVar58;
        }
        uVar71 = (ulong)(uint)local_1790;
        local_1814 = iVar22;
      }
      if (!bVar16) {
        bVar16 = false;
        if ((((uVar50 == 0xd) || ((uVar50 | 1) == 0xb)) || ((int)uVar7 < (int)uVar24)) ||
           ((bool)(bVar18 ^ 1))) goto LAB_024980d0;
        if (uVar24 == uVar7) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar25 = FUN_016fa418(uVar50,0);
          if ((uVar25 & 1) != 0) goto LAB_02497fc4;
        }
        if ((*plVar2 == 0) || (lVar26 = *(long *)(*plVar2 + 0x38), lVar26 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar26 + 0x18) <= uVar24)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar26 = lVar26 + lVar29 * 0x178;
        local_1804 = *(float *)(lVar26 + 0x160);
        local_1808 = *(float *)(lVar26 + 0x11c);
        bVar16 = fVar57 != 0.0;
        fVar91 = local_1804;
        if (bVar16) {
          fVar91 = fVar57;
        }
        fVar57 = fVar91;
        uVar21 = *(uint *)(lVar26 + 0x168);
        local_180c = 0.0;
        fVar91 = fVar83;
        if (bVar16) {
          fVar91 = local_1794;
        }
        uVar71 = (ulong)(uint)fVar91;
        local_1810 = local_1790;
        local_1794 = fVar91;
      }
      if (*puVar1 == 1) {
        if ((*plVar2 != 0) && (lVar26 = *(long *)(*plVar2 + 0x38), lVar26 != 0)) {
          if (uVar24 < *(uint *)(lVar26 + 0x18)) {
            lVar26 = lVar26 + lVar29 * 0x178;
            lVar47 = *param_1;
            uVar75 = *(uint *)(lVar26 + 0x128);
            uVar93 = *(undefined4 *)(lVar26 + 0x160);
            goto LAB_0249805c;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if ((uVar24 == uVar8) || ((int)uVar7 <= (int)uVar24)) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar25 = FUN_016f68bc(uVar50,0);
        if ((*plVar2 != 0) && (lVar26 = *(long *)(*plVar2 + 0x38), lVar26 != 0)) {
          if (uVar50 == 0x200b || (uVar25 & 1) != 0) {
            lVar47 = lVar54;
            if (*(uint *)(lVar26 + 0x18) <= uVar7)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
            lVar47 = lVar29;
            if (*(uint *)(lVar26 + 0x18) <= uVar24)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          lVar26 = lVar26 + lVar47 * 0x178;
          uVar75 = *(uint *)(lVar26 + 0x128);
          uVar93 = *(undefined4 *)(lVar26 + 0x160);
          pcVar42 = *(code **)(*param_1 + 0x908);
          uVar74 = *(undefined8 *)(*param_1 + 0x910);
          goto LAB_02498064;
        }
        goto LAB_0249920c;
      }
      if (!bVar18) {
        if ((*plVar2 != 0) && (lVar26 = *(long *)(*plVar2 + 0x38), lVar26 != 0)) {
          uVar75 = *(uint *)(lVar26 + 0x18);
          goto LAB_02497adc;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar24 < (int)(*puVar1 - 1)) {
        if ((*plVar2 == 0) || (lVar26 = *(long *)(*plVar2 + 0x38), lVar26 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar26 + 0x18) <= uVar44)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar25 = FUN_024a9e4c(uVar21,*(undefined4 *)(lVar26 + lVar34),0);
        if ((uVar25 & 1) == 0) {
          if ((*plVar2 != 0) && (lVar26 = *(long *)(*plVar2 + 0x38), lVar26 != 0)) {
            if (uVar24 < *(uint *)(lVar26 + 0x18)) {
              lVar26 = lVar26 + lVar29 * 0x178;
              uVar31 = (ulong)*(uint *)(lVar26 + 0x128);
              uVar28 = (ulong)(uint)local_180c;
              uVar71 = (ulong)(uint)local_1810;
              (**(code **)(*param_1 + 0x908))
                        (local_1808,uVar71,uVar28,uVar31,local_1790,0,local_1804,
                         *(undefined4 *)(lVar26 + 0x160),param_1,(long)&local_c0 + 4,uVar21,
                         *(undefined8 *)(*param_1 + 0x910));
              puVar12 = System_Threading_Mutex_TypeInfo;
              lVar26 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar26 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar26 = *(long *)puVar12;
              }
              goto LAB_024980b4;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          goto LAB_0249920c;
        }
      }
      bVar16 = true;
    }
LAB_024980d0:
    if ((*plVar2 == 0) || (lVar26 = *(long *)(*plVar2 + 0x38), lVar26 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar26 + 0x18) <= uVar24)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (lVar45 == 0) goto LAB_0249920c;
    uVar75 = *(uint *)(lVar26 + lVar29 * 0x178 + 400);
    fVar91 = (float)FUN_026fd1f0(lVar45 + 0x50,0);
    if ((uVar75 >> 6 & 1) == 0) {
      if (bVar9) {
        if ((*plVar2 == 0) || (lVar26 = *(long *)(*plVar2 + 0x38), lVar26 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar26 + 0x18) <= uVar44 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar75 = *(uint *)(lVar26 + lVar34 + -0x330);
        pcVar42 = *(code **)(*param_1 + 0x908);
        uVar74 = *(undefined8 *)(*param_1 + 0x910);
        fVar86 = fVar84 * fVar91 + *(float *)(lVar26 + lVar34 + -0x30c);
LAB_02498648:
        uVar31 = (ulong)uVar75;
        uVar71 = (ulong)(uint)local_17e4;
        uVar28 = (ulong)(uint)local_17f4;
        (*pcVar42)(local_17e0,uVar71,uVar28,uVar31,fVar86,0,fVar84,fVar84,param_1,
                   (long)&local_c0 + 4,local_17dc,uVar74);
      }
LAB_0249867c:
      bVar9 = false;
    }
    else {
      lVar26 = *plVar2;
      if ((lVar26 == 0) || (lVar47 = *(long *)(lVar26 + 0x38), lVar47 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar47 + 0x18) <= uVar24)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(undefined4 *)(lVar47 + lVar29 * 0x178 + 0x174) = local_c0._4_4_;
      if ((((int)param_1[100] < (int)uVar24) || ((int)param_1[0x65] < (int)uVar43)) ||
         (((int)param_1[0x5b] == 5 &&
          (*(int *)(lVar47 + lVar29 * 0x178 + 0x68) + 1 != (int)param_1[0x66])))) {
        bVar18 = false;
      }
      else {
        bVar18 = true;
      }
      if ((((uVar50 == 0xd) || ((uVar50 | 1) == 0xb)) || ((int)uVar7 < (int)uVar24)) ||
         (bVar9 || !bVar18)) {
LAB_02498228:
        if (!bVar9) goto LAB_0249867c;
      }
      else {
        if (uVar24 == uVar7) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar25 = FUN_016fa418(uVar50,0);
          if ((uVar25 & 1) != 0) goto LAB_02498228;
          lVar26 = *plVar2;
          if (lVar26 == 0) goto LAB_0249920c;
        }
        lVar26 = *(long *)(lVar26 + 0x38);
        if (lVar26 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar26 + 0x18) <= uVar24)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar26 = lVar26 + lVar29 * 0x178;
        local_182c = *(float *)(lVar26 + 0x60);
        fVar84 = *(float *)(lVar26 + 0x160);
        local_1830 = *(float *)(lVar26 + 0x14c);
        uVar71 = (ulong)(uint)local_1830;
        local_17e0 = *(float *)(lVar26 + 0x11c);
        local_17dc = *(uint *)(lVar26 + 0x170);
        local_17e4 = fVar91 * fVar84 + local_1830;
        local_17f4 = 0.0;
      }
      uVar75 = *puVar1;
      if (uVar75 == 1) {
LAB_024983ac:
        if ((*plVar2 != 0) && (lVar26 = *(long *)(*plVar2 + 0x38), lVar26 != 0)) {
          if (uVar24 < *(uint *)(lVar26 + 0x18)) {
            lVar26 = lVar26 + lVar29 * 0x178;
            lVar54 = *param_1;
            uVar75 = *(uint *)(lVar26 + 0x128);
            fVar86 = *(float *)(lVar26 + 0x14c);
LAB_024983d8:
            pcVar42 = *(code **)(lVar54 + 0x908);
            uVar74 = *(undefined8 *)(lVar54 + 0x910);
FUN_02498644:
            fVar86 = fVar91 * fVar84 + fVar86;
            goto LAB_02498648;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if (uVar24 == uVar8) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar25 = FUN_016f68bc(uVar50,0);
        if ((*plVar2 != 0) && (lVar26 = *(long *)(*plVar2 + 0x38), lVar26 != 0)) {
          uVar75 = *(uint *)(lVar26 + 0x18);
          if (uVar50 == 0x200b || (uVar25 & 1) != 0) {
            if (uVar75 <= uVar7)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
LAB_02498620:
            lVar54 = lVar29;
            if (uVar75 <= uVar24)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
LAB_02498628:
          lVar26 = lVar26 + lVar54 * 0x178;
          fVar86 = *(float *)(lVar26 + 0x14c);
          uVar75 = *(uint *)(lVar26 + 0x128);
          pcVar42 = *(code **)(*param_1 + 0x908);
          uVar74 = *(undefined8 *)(*param_1 + 0x910);
          goto FUN_02498644;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar24 < (int)uVar75) {
        lVar26 = *plVar2;
        if ((lVar26 != 0) && (lVar47 = *(long *)(lVar26 + 0x38), lVar47 != 0)) {
          if (uVar44 < *(uint *)(lVar47 + 0x18)) {
            if (*(float *)(lVar47 + lVar34 + -0x108) == local_182c) {
              fVar58 = *(float *)(lVar47 + lVar34 + -0x1c);
              if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar71 = (ulong)(uint)local_1830;
              uVar25 = FUN_024aa280(fVar86 + fVar58,uVar71,0);
              if ((uVar25 & 1) != 0) {
                uVar75 = *puVar1;
                goto 
                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
                ;
              }
              lVar26 = *plVar2;
              if (lVar26 == 0) goto LAB_0249920c;
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if (lVar26 != 0) {
              uVar75 = *(uint *)(lVar26 + 0x18);
              if ((int)uVar24 <= (int)uVar7) goto LAB_02498620;
              if (uVar7 < uVar75) goto LAB_02498628;
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
      if ((int)uVar24 < (int)uVar75) {
        iVar22 = FUN_02681c0c(lVar45,0);
        if (*(uint *)(lVar49 + 0x18) <= uVar44)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar26 = *(long *)(lVar49 + lVar34 + -0x130);
        if (lVar26 == 0) goto LAB_0249920c;
        iVar23 = FUN_02681c0c(lVar26,0);
        if (iVar22 != iVar23) goto LAB_024983ac;
      }
      if (!bVar18) {
        if ((*plVar2 != 0) && (lVar26 = *(long *)(*plVar2 + 0x38), lVar26 != 0)) {
          if (uVar44 - 2 < *(uint *)(lVar26 + 0x18)) {
            lVar54 = *param_1;
            uVar75 = *(uint *)(lVar26 + lVar34 + -0x330);
            fVar86 = *(float *)(lVar26 + lVar34 + -0x30c);
            goto LAB_024983d8;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      bVar9 = true;
    }
    if ((*plVar2 == 0) || (lVar26 = *(long *)(*plVar2 + 0x38), lVar26 == 0)) goto LAB_0249920c;
    uVar75 = (uint)*(undefined8 *)(lVar26 + 0x18);
    if (uVar75 <= uVar24)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar26 + lVar29 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar17) {
        uVar28 = (ulong)(uint)local_17c0;
        uVar31 = (ulong)(uint)local_17bc;
        uVar71 = (ulong)(uint)local_17ac;
        (**(code **)(*param_1 + 0x918))
                  (local_17b0,uVar71,uVar28,uVar31,local_17b8,uVar28,param_1,(long)&local_c0 + 4,
                   local_d0 & 0xffffffff,*(undefined8 *)(*param_1 + 0x920));
      }
LAB_024986e8:
      bVar17 = false;
    }
    else {
      if ((((int)param_1[100] < (int)uVar24) || ((int)param_1[0x65] < (int)uVar43)) ||
         (((int)param_1[0x5b] == 5 &&
          (*(int *)(lVar26 + lVar29 * 0x178 + 0x68) + 1 != (int)param_1[0x66])))) {
        bVar18 = false;
      }
      else {
        bVar18 = true;
      }
      if (!bVar17) {
        if ((((uVar50 == 0xd) || ((uVar50 | 1) == 0xb)) || ((int)uVar7 < (int)uVar24)) || (!bVar18))
        goto LAB_024986e8;
        if (uVar24 == uVar7) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar25 = FUN_016fa418(uVar50,0);
          if ((uVar25 & 1) != 0) goto LAB_024986e8;
        }
        puVar12 = System_Threading_Mutex_TypeInfo;
        lVar54 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar54 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar54 = *(long *)puVar12;
        }
        if ((*plVar2 == 0) || (lVar26 = *(long *)(*plVar2 + 0x38), lVar26 == 0)) goto LAB_0249920c;
        uVar75 = (uint)*(undefined8 *)(lVar26 + 0x18);
        if (uVar75 <= uVar24)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar54 = *(long *)(lVar54 + 0xb8);
        lVar47 = lVar26 + lVar29 * 0x178;
        uStack_c8 = *(undefined8 *)(lVar47 + 0x184);
        local_d0 = *(ulong *)(lVar47 + 0x17c);
        local_17b0 = *(float *)(lVar54 + 0x1598);
        local_17ac = *(float *)(lVar54 + 0x159c);
        local_17bc = *(float *)(lVar54 + 0x15a0);
        local_17b8 = *(float *)(lVar54 + 0x15a4);
        local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar47 + 0x18c));
        local_17c0 = 0.0;
      }
      if (uVar75 <= uVar24)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar26 = lVar26 + lVar29 * 0x178;
      fVar92 = *(float *)(lVar26 + 0x188);
      uVar32 = *(ulong *)(lVar26 + 0x17c);
      fVar82 = *(float *)(lVar26 + 0x184);
      uVar74 = *(undefined8 *)(lVar26 + 0x184);
      fVar76 = *(float *)(lVar26 + 0x18c);
      fVar86 = *(float *)(lVar26 + 0x11c);
      fVar58 = *(float *)(lVar26 + 0x128);
      fVar59 = *(float *)(lVar26 + 0x148);
      fVar91 = *(float *)(lVar26 + 0x150);
      uStack_16e8 = uStack_c8;
      local_16f0 = local_d0;
      local_16e0 = (float)local_c0;
      local_1708 = uVar32;
      local_1700 = fVar82;
      local_16fc = fVar92;
      local_16f8 = fVar76;
      uVar25 = FUN_024ab330(&local_16f0,&local_1708,0);
      lVar26 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
      if ((uVar25 & 1) == 0) {
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar26);
        }
        fVar86 = fVar86 - local_d0._4_4_;
        if (fVar86 <= local_17b0) {
          local_17b0 = fVar86;
        }
        fVar91 = fVar91 - (float)local_c0;
        uVar71 = (ulong)(uint)fVar91;
        fVar58 = fVar58 + (float)uStack_c8;
        uVar28 = (ulong)(uint)fVar58;
        if (fVar91 <= local_17ac) {
          local_17ac = fVar91;
        }
        fVar59 = fVar59 + uStack_c8._4_4_;
        uVar31 = (ulong)(uint)fVar59;
        if (local_17bc <= fVar58) {
          local_17bc = fVar58;
        }
        if (local_17b8 <= fVar59) {
          local_17b8 = fVar59;
        }
      }
      else {
        if (*(int *)(lVar26 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar26);
        }
        fVar86 = (fVar86 + (local_17bc - (float)uStack_c8)) * 0.5;
        uVar31 = (ulong)(uint)fVar86;
        if (fVar91 <= local_17ac) {
          local_17ac = fVar91;
        }
        uVar71 = (ulong)(uint)local_17ac;
        uVar28 = (ulong)(uint)local_17c0;
        if (local_17b8 <= fVar59) {
          local_17b8 = fVar59;
        }
        (**(code **)(*param_1 + 0x918))
                  (local_17b0,uVar71,uVar28,uVar31,local_17b8,uVar28,param_1,(long)&local_c0 + 4,
                   local_d0 & 0xffffffff,*(undefined8 *)(*param_1 + 0x920));
        local_17ac = fVar91 - fVar76;
        local_17bc = fVar58 + fVar82;
        local_c0 = CONCAT44(local_c0._4_4_,fVar76);
        local_17c0 = 0.0;
        local_17b8 = fVar59 + fVar92;
        local_17b0 = fVar86;
        local_d0 = uVar32;
        uStack_c8 = uVar74;
      }
      if (((*puVar1 == 1) || (uVar24 == uVar8)) || (((int)uVar7 <= (int)uVar24 || (!bVar18)))) {
        uVar28 = (ulong)(uint)local_17c0;
        uVar31 = (ulong)(uint)local_17bc;
        uVar71 = (ulong)(uint)local_17ac;
        (**(code **)(*param_1 + 0x918))
                  (local_17b0,uVar71,uVar28,uVar31,local_17b8,uVar28,param_1,(long)&local_c0 + 4,
                   local_d0 & 0xffffffff,*(undefined8 *)(*param_1 + 0x920));
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
    }
    uVar24 = *puVar1;
    iVar20 = iVar20 + 1;
    lVar34 = lVar34 + 0x178;
    bVar18 = (int)uVar44 < (int)uVar24;
    uVar75 = uVar43;
    uVar44 = uVar44 + 1;
  } while (bVar18);
  lVar49 = *plVar2;
  if (lVar49 != 0) {
    iVar19 = uVar43 + 1;
LAB_02498c58:
    puVar13 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    puVar12 = PTR_DAT_033ed410;
    *(uint *)(lVar49 + 0x18) = uVar24;
    lVar34 = param_1[0xd3];
    *(int *)(lVar49 + 0x2c) = iVar19;
    iVar19 = local_17b4;
    if ((int)uVar24 < 1) {
      iVar19 = 1;
    }
    if (local_17b4 == 0) {
      iVar19 = 1;
    }
    *(int *)(lVar49 + 0x1c) = (int)lVar34;
    *(int *)(lVar49 + 0x24) = iVar19;
    *(int *)(lVar49 + 0x30) = (int)param_1[0x95] + 1;
    if (((int)param_1[0x62] != 0xff) ||
       (uVar25 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0)),
       (uVar25 & 1) == 0)) {
LAB_02496098:
      if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__ + 0xe0) == 0
         ) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c(param_1,0);
      return;
    }
    lVar49 = param_1[0xde];
    if (lVar49 != 0) {
      (**(code **)(lVar49 + 0x18))
                (*(undefined8 *)(lVar49 + 0x40),*plVar2,*(undefined8 *)(lVar49 + 0x28));
    }
    if (param_1[0xe4] == 0) goto LAB_0249920c;
    iVar19 = FUN_02859dc4(param_1[0xe4],0);
    if (iVar19 != 0x19) {
      lVar49 = param_1[0xe4];
      if (lVar49 == 0) goto LAB_0249920c;
      uVar24 = FUN_02859dc4(lVar49,0);
      FUN_02859e00(lVar49,uVar24 | 0x19,0);
    }
    if (*(int *)((long)param_1 + 0x314) != 0) {
      if ((*plVar2 == 0) || (lVar49 = *(long *)(*plVar2 + 0x60), lVar49 == 0)) goto LAB_0249920c;
      if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar49 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      FUN_024e8000(lVar49 + 0x20,1,0);
    }
    if (param_1[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (param_1[0x73],0);
      if ((param_1[0x6c] != 0) && (lVar49 = *(long *)(param_1[0x6c] + 0x60), lVar49 != 0)) {
        if (*(int *)(lVar49 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (param_1[0x73] != 0) {
          FUN_0266b9c4(param_1[0x73],*(undefined8 *)(lVar49 + 0x30),0);
          if ((param_1[0x6c] != 0) && (lVar49 = *(long *)(param_1[0x6c] + 0x60), lVar49 != 0)) {
            if (*(int *)(lVar49 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (param_1[0x73] != 0) {
              FUN_0266bbc8(param_1[0x73],*(undefined8 *)(lVar49 + 0x48),0);
              if ((param_1[0x6c] != 0) && (lVar49 = *(long *)(param_1[0x6c] + 0x60), lVar49 != 0)) {
                if (*(int *)(lVar49 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                if (param_1[0x73] != 0) {
                  FUN_0266bc74(param_1[0x73],*(undefined8 *)(lVar49 + 0x50),0);
                  if ((param_1[0x6c] != 0) &&
                     (lVar49 = *(long *)(param_1[0x6c] + 0x60), lVar49 != 0)) {
                    if (*(int *)(lVar49 + 0x18) == 0)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if (param_1[0x73] != 0) {
                      FUN_0266c1dc(param_1[0x73],*(undefined8 *)(lVar49 + 0x58),0);
                      if (param_1[0x73] != 0) {
                        FUN_0266ed90(param_1[0x73],0);
                        if (param_1[0xe3] != 0) {
                          FUN_02858f1c(param_1[0xe3],param_1[0x73],0);
                          if (param_1[0xe3] != 0) {
                            uVar74 = FUN_02858bac(param_1[0xe3],0);
                            if (param_1[0xe3] != 0) {
                              uVar24 = FUN_02858a14(param_1[0xe3],0);
                              lVar49 = *plVar2;
                              if (lVar49 != 0) {
                                lVar26 = 0;
                                lVar34 = 0;
                                do {
                                  uVar25 = lVar34 + 1;
                                  if ((long)*(int *)(lVar49 + 0x34) <= (long)uVar25)
                                  goto LAB_02496098;
                                  lVar49 = *(long *)(lVar49 + 0x60);
                                  if (lVar49 == 0) break;
                                  if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  if (*(uint *)(lVar49 + 0x18) <= uVar25)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  FUN_024e7ecc(lVar49 + lVar26 + 0x70,0);
                                  lVar49 = param_1[0xe0];
                                  if (lVar49 == 0) break;
                                  if (*(uint *)(lVar49 + 0x18) <= uVar25)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  uVar27 = *(undefined8 *)(lVar49 + lVar34 * 8 + 0x28);
                                  if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar32 = FUN_0268b4e0(uVar27,0,0);
                                  if ((uVar32 & 1) == 0) {
                                    if (*(int *)((long)param_1 + 0x314) != 0) {
                                      if ((*plVar2 == 0) ||
                                         (lVar49 = *(long *)(*plVar2 + 0x60), lVar49 == 0)) break;
                                      if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      if (*(uint *)(lVar49 + 0x18) <= uVar25)
                                      goto 
                                      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                      ;
                                      FUN_024e8000(lVar49 + lVar26 + 0x70,1,0);
                                    }
                                    lVar49 = param_1[0xe0];
                                    if (lVar49 == 0) break;
                                    if (*(uint *)(lVar49 + 0x18) <= uVar25)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar49 = *(long *)(lVar49 + lVar34 * 8 + 0x28);
                                    if (lVar49 == 0) break;
                                    lVar49 = FUN_024f0144(lVar49,0);
                                    if ((*plVar2 == 0) ||
                                       (lVar54 = *(long *)(*plVar2 + 0x60), lVar54 == 0)) break;
                                    if (*(uint *)(lVar54 + 0x18) <= uVar25)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar49 == 0) break;
                                    FUN_0266b9c4(lVar49,*(undefined8 *)(lVar54 + lVar26 + 0x80),0);
                                    lVar49 = param_1[0xe0];
                                    if (lVar49 == 0) break;
                                    if (*(uint *)(lVar49 + 0x18) <= uVar25)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar49 = *(long *)(lVar49 + lVar34 * 8 + 0x28);
                                    if (lVar49 == 0) break;
                                    lVar49 = FUN_024f0144(lVar49,0);
                                    if ((*plVar2 == 0) ||
                                       (lVar54 = *(long *)(*plVar2 + 0x60), lVar54 == 0)) break;
                                    if (*(uint *)(lVar54 + 0x18) <= uVar25)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar49 == 0) break;
                                    FUN_0266bbc8(lVar49,*(undefined8 *)(lVar54 + lVar26 + 0x98),0);
                                    lVar49 = param_1[0xe0];
                                    if (lVar49 == 0) break;
                                    if (*(uint *)(lVar49 + 0x18) <= uVar25)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar49 = *(long *)(lVar49 + lVar34 * 8 + 0x28);
                                    if (lVar49 == 0) break;
                                    lVar49 = FUN_024f0144(lVar49,0);
                                    if ((*plVar2 == 0) ||
                                       (lVar54 = *(long *)(*plVar2 + 0x60), lVar54 == 0)) break;
                                    if (*(uint *)(lVar54 + 0x18) <= uVar25)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar49 == 0) break;
                                    FUN_0266bc74(lVar49,*(undefined8 *)(lVar54 + lVar26 + 0xa0),0);
                                    lVar49 = param_1[0xe0];
                                    if (lVar49 == 0) break;
                                    if (*(uint *)(lVar49 + 0x18) <= uVar25)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar49 = *(long *)(lVar49 + lVar34 * 8 + 0x28);
                                    if (lVar49 == 0) break;
                                    lVar49 = FUN_024f0144(lVar49,0);
                                    if ((*plVar2 == 0) ||
                                       (lVar54 = *(long *)(*plVar2 + 0x60), lVar54 == 0)) break;
                                    if (*(uint *)(lVar54 + 0x18) <= uVar25)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar49 == 0) break;
                                    FUN_0266c1dc(lVar49,*(undefined8 *)(lVar54 + lVar26 + 0xa8),0);
                                    lVar49 = param_1[0xe0];
                                    if (lVar49 == 0) break;
                                    if (*(uint *)(lVar49 + 0x18) <= uVar25)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar49 = *(long *)(lVar49 + lVar34 * 8 + 0x28);
                                    if ((lVar49 == 0) ||
                                       (lVar49 = FUN_024f0144(lVar49,0), lVar49 == 0)) break;
                                    FUN_0266ed90(lVar49,0);
                                    lVar49 = param_1[0xe0];
                                    if (lVar49 == 0) break;
                                    if (*(uint *)(lVar49 + 0x18) <= uVar25)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar49 = *(long *)(lVar49 + lVar34 * 8 + 0x28);
                                    if (lVar49 == 0) break;
                                    lVar49 = FUN_02738ef4(lVar49,0);
                                    lVar54 = param_1[0xe0];
                                    if (lVar54 == 0) break;
                                    if (*(uint *)(lVar54 + 0x18) <= uVar25)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar54 = *(long *)(lVar54 + lVar34 * 8 + 0x28);
                                    if ((lVar54 == 0) ||
                                       (uVar27 = FUN_024f0144(lVar54,0), lVar49 == 0)) break;
                                    FUN_02858f1c(lVar49,uVar27,0);
                                    lVar49 = param_1[0xe0];
                                    if (lVar49 == 0) break;
                                    if (*(uint *)(lVar49 + 0x18) <= uVar25)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar49 = *(long *)(lVar49 + lVar34 * 8 + 0x28);
                                    if ((lVar49 == 0) ||
                                       (lVar49 = FUN_02738ef4(lVar49,0), lVar49 == 0)) break;
                                    FUN_02858b14(uVar74,uVar71,uVar28,uVar31,lVar49,0);
                                    lVar49 = param_1[0xe0];
                                    if (lVar49 == 0) break;
                                    if (*(uint *)(lVar49 + 0x18) <= uVar25)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar49 = *(long *)(lVar49 + lVar34 * 8 + 0x28);
                                    if ((lVar49 == 0) ||
                                       (lVar49 = FUN_02738ef4(lVar49,0), lVar49 == 0)) break;
                                    FUN_02858a50(lVar49,uVar24 & 1,0);
                                    lVar49 = param_1[0xe0];
                                    if (lVar49 == 0) break;
                                    if (*(uint *)(lVar49 + 0x18) <= uVar25)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    plVar51 = *(long **)(lVar49 + lVar34 * 8 + 0x28);
                                    uVar21 = (**(code **)(*param_1 + 0x2b8))
                                                       (param_1,*(undefined8 *)(*param_1 + 0x2c0));
                                    if (plVar51 == (long *)0x0) break;
                                    (**(code **)(*plVar51 + 0x2c8))
                                              (plVar51,uVar21 & 1,*(undefined8 *)(*plVar51 + 0x2d0))
                                    ;
                                  }
                                  lVar49 = *plVar2;
                                  lVar34 = lVar34 + 1;
                                  lVar26 = lVar26 + 0x50;
                                } while (lVar49 != 0);
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
  goto LAB_0249920c;
}


