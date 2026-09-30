/*
FUNCTION_NAME: FUN_02489b5c
ENTRY_POINT: 02489b5c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 181
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_21;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0248a2b4) */
/* WARNING: Removing unreachable block (ram,0x0248a170) */
/* WARNING: Removing unreachable block (ram,0x0248a224) */
/* WARNING: Removing unreachable block (ram,0x0248a34c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02489b5c(long *param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  long lVar24;
  int *piVar25;
  ulong uVar26;
  undefined1 *puVar27;
  uint uVar28;
  long lVar29;
  undefined1 uVar30;
  char cVar31;
  uint uVar32;
  uint uVar33;
  float *pfVar34;
  undefined4 *puVar35;
  long lVar36;
  long *plVar37;
  float *pfVar38;
  code *pcVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long *plVar47;
  long *plVar48;
  long lVar49;
  uint uVar50;
  long *plVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  double dVar63;
  ulong uVar64;
  double dVar65;
  float fVar66;
  undefined8 uVar67;
  float fVar68;
  undefined4 uVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
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
  undefined4 uVar87;
  float fVar88;
  uint local_183c;
  float local_182c;
  int local_1818;
  float local_1814;
  float local_1810;
  float local_180c;
  float local_1808;
  uint local_1804;
  float local_17f4;
  float local_17e4;
  uint local_17e0;
  float local_17dc;
  undefined8 local_17d8;
  float local_17d0;
  float local_17cc;
  float local_17c0;
  int local_17bc;
  float local_17b8;
  float local_17b4;
  undefined8 local_17a8;
  float local_179c;
  float local_1798;
  float local_1794;
  float local_1784;
  float local_1780;
  float fStack_177c;
  float local_1778;
  float local_1774;
  uint local_174c;
  long local_1738;
  float local_172c;
  int local_171c;
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
  
  puVar9 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_037825d2 & 1) == 0) {
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
    DAT_037825d2 = 1;
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
  lVar46 = param_1[0x1e];
  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar37 = (long *)StringLiteral_302;
  uVar20 = FUN_0268b4e0(lVar46,0,0);
  if ((uVar20 & 1) != 0) {
LAB_02489ebc:
    puVar9 = System_Collections_Generic_List<ScriptableRenderPass>_TypeInfo;
    uVar87 = FUN_02681c0c(param_1,0);
    local_d8 = CONCAT44(uVar87,(uint)local_d8);
    uVar67 = FUN_0176eb1c((long)&local_d8 + 4,0);
    uVar67 = FUN_015f5b28(*(undefined8 *)puVar9,uVar67,0);
    if (*(int *)(*plVar37 + 0xe0) == 0) {
      thunk_FUN_00d32864(*plVar37);
    }
    FUN_02661754(uVar67,0);
    *(undefined1 *)((long)param_1 + 0x244) = 1;
    return;
  }
  if (param_1[0x1e] == 0) goto LAB_02491464;
  lVar46 = FUN_024b11ac(param_1[0x1e],0);
  if (lVar46 == 0) goto LAB_02489ebc;
  if (param_1[0x6c] != 0) {
    FUN_024f1728(param_1[0x6c],0);
  }
  puVar10 = Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
  lVar46 = param_1[0x8e];
  if ((lVar46 == 0) || (*(long *)(lVar46 + 0x18) == 0)) {
LAB_02489f28:
    (**(code **)(*param_1 + 0x958))(param_1,1,*(undefined8 *)(*param_1 + 0x960));
    *(undefined4 *)(param_1 + 0x7b) = 0;
    *(undefined4 *)((long)param_1 + 0x3e4) = 0;
    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_024a942c(param_1,0);
    *(undefined1 *)((long)param_1 + 0x244) = 1;
    return;
  }
  if ((int)*(long *)(lVar46 + 0x18) == 0)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (*(int *)(lVar46 + 0x20) == 0) goto LAB_02489f28;
  lVar46 = param_1[0x1e];
  plVar51 = param_1 + 0x1f;
  *plVar51 = lVar46;
  puVar10 = System_Threading_Mutex_TypeInfo;
  lVar29 = param_1[0x21];
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x22] = lVar29;
  puVar11 = 
  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_HaveDuplicateReferences<InputControl>__;
  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    uVar87 = (undefined4)param_1[0x23];
    lVar46 = param_1[0x1f];
    lVar29 = param_1[0x22];
  }
  else {
    uVar87 = 0;
  }
  local_fb0 = 0;
  uStack_fc8 = 0;
  local_fd0 = 0;
  uStack_fb8 = 0;
  local_fc0 = 0;
  uStack_fd8 = 0;
  local_fe0 = 0.0;
  FUN_02499fd4((int)param_1[0xc2],&local_fe0,uVar87,lVar46,0,lVar29,0);
  uStack_c28 = uStack_fd8;
  local_c30 = local_fe0;
  uStack_c18 = uStack_fc8;
  uStack_c20 = local_fd0;
  uStack_c08 = uStack_fb8;
  local_c10 = local_fc0;
  local_c00 = local_fb0;
  FUN_013b7dec(*(long *)(*(long *)puVar10 + 0xb8) + 0x10,&local_c30,*(undefined8 *)puVar11);
                    /* try { // try from 02489fd4 to 0258a0cb has its CatchHandler @ 02489fd4
                       catch() { ... } // from try @ 02489fd4 with catch @ 02489fd4
                       catch() { ... } // from try @ 0248a104 with catch @ 02489fd4
                       catch() { ... } // from try @ 0248a12c with catch @ 02489fd4
                       catch() { ... } // from try @ 0248a158 with catch @ 02489fd4
                       catch() { ... } // from try @ 0248a198 with catch @ 02489fd4 */
  lVar46 = param_1[0x76];
  param_1[0xd2] = param_1[0x35];
  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar20 = FUN_02681b9c(lVar46,0,0);
  if ((uVar20 & 1) != 0) {
    if (param_1[0x76] == 0) goto LAB_02491464;
    FUN_024eb3e4(param_1[0x76],0);
  }
  if (param_1[0x1e] == 0) goto LAB_02491464;
  lVar46 = param_1[0x91];
  fVar70 = *(float *)((long)param_1 + 0x1dc);
  iVar16 = FUN_026fd110(param_1[0x1e] + 0x50,0);
  puVar12 = StringLiteral_4307;
  puVar11 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmin_s32__;
  puVar10 = Method_System_Collections_Generic_List_Enumerator<TMP_Text>_MoveNext__;
  puVar9 = System_Action<byte[],_int,_long>_TypeInfo;
  if (param_1[0x1e] == 0) goto LAB_02491464;
  fVar52 = (float)FUN_026fd120(param_1[0x1e] + 0x50,0);
  fVar66 = DAT_028aa040;
  fVar77 = *(float *)((long)param_1 + 0x1dc);
  *(undefined4 *)((long)param_1 + 0x3fc) = 0x3f800000;
  *(float *)(param_1 + 0x3c) = fVar77;
  fVar52 = (fVar70 / (float)iVar16) * fVar52;
  fVar55 = fVar66;
  fVar70 = fVar52 * fVar66;
  if (*(char *)((long)param_1 + 0x2fd) != '\0') {
    fVar55 = 1.0;
    fVar70 = fVar52;
  }
  local_fe0._0_4_ = fVar77;
  FUN_013b7dec(param_1 + 0x3d,&local_fe0,*(undefined8 *)puVar9);
  uStack_a4 = 0;
  *(uint *)((long)param_1 + 0x254) = *(uint *)(param_1 + 0x4a);
                    /* try { // try from 0248a0cc to 0258a0d3 has its CatchHandler @ 0248a13c */
  if ((*(uint *)(param_1 + 0x4a) & 1) == 0) {
    local_fe0._0_4_ = (float)param_1[0x41];
  }
  else {
    local_fe0._0_4_ = 9.80909e-43;
  }
                    /* try { // try from 0248a0dc to 0258a0e3 has its CatchHandler @ 0248a134 */
  *(float *)((long)param_1 + 0x20c) = local_fe0._0_4_;
  FUN_013b7dec(param_1 + 0x42,&local_fe0,*(undefined8 *)puVar11);
                    /* try { // try from 0248a0f8 to 0258a103 has its CatchHandler @ 0248a138 */
  FUN_024f24a0(param_1 + 0x4b,0);
                    /* try { // try from 0248a104 to 0258a127 has its CatchHandler @ 02489fd4 */
  *(undefined4 *)(param_1 + 0x4e) = *(undefined4 *)((long)param_1 + 0x264);
  local_fe0 = (double)CONCAT44(local_fe0._4_4_,*(undefined4 *)((long)param_1 + 0x264));
  FUN_013b7dec(param_1 + 0x4f,&local_fe0,*(undefined8 *)puVar12);
  *(undefined4 *)((long)param_1 + 0x614) = 0;
                    /* try { // try from 0248a128 to 0258a12b has its CatchHandler @ 0248a130 */
  FUN_013b7d38(param_1 + 0xc3,*(undefined8 *)puVar10);
                    /* try { // try from 0248a12c to 0258a153 has its CatchHandler @ 02489fd4 */
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774d76 = '\x01';
  }
  fVar79 = *(float *)((long)param_1 + 0x144);
  pfVar34 = *(float **)
             (*(long *)
               Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
             0xb8);
  fVar52 = *(float *)(param_1 + 0x28) * 255.0;
  fVar84 = *(float *)(param_1 + 0x29);
  fVar75 = *(float *)((long)param_1 + 0x14c);
  local_180c = *pfVar34;
  if (*(float *)(param_1 + 0x28) < 0.0) {
    fVar52 = 0.0;
  }
  local_1814 = pfVar34[1];
  local_1810 = pfVar34[2];
  dVar63 = modf((double)fVar52,&local_fe0);
  if (0.0 <= fVar52) {
    if (dVar63 == 0.5) {
      fVar52 = 1.0;
      goto LAB_0248a1e8;
    }
    fVar53 = (float)(int)(fVar52 + 0.5);
  }
  else if (dVar63 == -0.5) {
    fVar52 = -1.0;
LAB_0248a1e8:
    fVar53 = (float)local_fe0;
    if (((long)local_fe0 & 1U) != 0) {
      fVar53 = (float)local_fe0 + fVar52;
    }
  }
  else {
    fVar53 = (float)(int)(fVar52 + -0.5);
  }
  fVar52 = fVar79 * 255.0;
  if (fVar79 < 0.0) {
    fVar52 = 0.0;
  }
  dVar63 = modf((double)fVar52,&local_fe0);
  if (0.0 <= fVar52) {
    if (dVar63 == 0.5) {
      fVar52 = 1.0;
      goto LAB_0248a278;
    }
    fVar79 = (float)(int)(fVar52 + 0.5);
  }
  else if (dVar63 == -0.5) {
    fVar52 = -1.0;
LAB_0248a278:
    fVar79 = (float)local_fe0;
    if (((long)local_fe0 & 1U) != 0) {
      fVar79 = (float)local_fe0 + fVar52;
    }
  }
  else {
    fVar79 = (float)(int)(fVar52 + -0.5);
  }
  fVar52 = fVar84 * 255.0;
  if (fVar84 < 0.0) {
    fVar52 = 0.0;
  }
  dVar63 = modf((double)fVar52,&local_fe0);
  puVar11 = Method_System_Collections_Generic_List<uint>_ToArray__;
  puVar10 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
  if (0.0 <= fVar52) {
    if (dVar63 == 0.5) {
      fVar52 = 1.0;
      goto LAB_0248a308;
    }
    fVar84 = (float)(int)(fVar52 + 0.5);
  }
  else if (dVar63 == -0.5) {
    fVar52 = -1.0;
LAB_0248a308:
    fVar84 = (float)local_fe0;
    if (((long)local_fe0 & 1U) != 0) {
      fVar84 = (float)local_fe0 + fVar52;
    }
  }
  else {
    fVar84 = (float)(int)(fVar52 + -0.5);
  }
  fVar52 = fVar75 * 255.0;
  if (fVar75 < 0.0) {
    fVar52 = 0.0;
  }
  dVar63 = modf((double)fVar52,&local_fe0);
  if (0.0 <= fVar52) {
    if (dVar63 == 0.5) {
      fVar52 = 1.0;
      goto LAB_0248a3a8;
    }
    fVar75 = (float)(int)(fVar52 + 0.5);
  }
  else if (dVar63 == -0.5) {
    fVar52 = -1.0;
LAB_0248a3a8:
    fVar75 = (float)local_fe0;
    if (((long)local_fe0 & 1U) != 0) {
      fVar75 = (float)local_fe0 + fVar52;
    }
  }
  else {
    fVar75 = (float)(int)(fVar52 + -0.5);
  }
  uVar33 = (int)fVar53 & 0xffU | ((int)fVar79 & 0xffU) << 8 | ((int)fVar84 & 0xffU) << 0x10 |
           (int)fVar75 << 0x18;
  *(uint *)((long)param_1 + 0x13c) = uVar33;
  *(uint *)((long)param_1 + 0x4e4) = uVar33;
  *(uint *)(param_1 + 0x2a) = uVar33;
  *(uint *)((long)param_1 + 0x154) = uVar33;
  local_fe0._0_4_ = (float)uVar33;
  FUN_013b7dec(param_1 + 0x9d,&local_fe0,*(undefined8 *)puVar11);
  local_fe0._0_4_ = *(float *)((long)param_1 + 0x4e4);
  FUN_013b7dec(param_1 + 0xa1,&local_fe0,*(undefined8 *)puVar11);
  local_fe0 = (double)CONCAT44(local_fe0._4_4_,*(undefined4 *)((long)param_1 + 0x4e4));
  FUN_013b7dec(param_1 + 0xa5,&local_fe0,*(undefined8 *)puVar11);
  uVar87 = *(undefined4 *)((long)param_1 + 0x4e4);
  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_037825d3 == '\0') {
    thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
    DAT_037825d3 = '\x01';
  }
  puVar12 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AR_ARBaseGestureInteractable_OnGestureStarted<TwistGesture>__
  ;
  puVar11 = Method_System_Collections_Generic_List<SoundData>_GetEnumerator__;
  lVar29 = *(long *)puVar10;
  if (*(int *)(lVar29 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar29 = *(long *)puVar10;
  }
  puVar35 = *(undefined4 **)(lVar29 + 0xb8);
  uStack_fd8 = 0;
  local_fe0 = 0.0;
  local_fd0 = local_fd0 & 0xffffffff00000000;
  UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
            (*puVar35,puVar35[1],puVar35[2],puVar35[3],&local_fe0,uVar87,0);
  uStack_c48 = uStack_fd8;
  local_c50 = local_fe0;
  local_c40 = (undefined4)local_fd0;
  FUN_013b7dec(param_1 + 0xa9,&local_c50,*(undefined8 *)puVar11);
  param_1[0xaf] = 0;
  FUN_013b7dec(param_1 + 0xb0,0,*(undefined8 *)puVar12);
  puVar10 = 
  UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Theme_Primitives_Vector3AffordanceTheme_TypeInfo
  ;
  if (param_1[0x1f] != 0) {
    local_c68 = (uint)*(byte *)(param_1[0x1f] + 0x1b8);
    *(uint *)(param_1 + 0xbd) = local_c68;
    puVar11 = Method_System_Collections_Generic_Dictionary<SystemLanguage,_string>_Add__;
    FUN_013b7dec(param_1 + 0xb9,&local_c68,*(undefined8 *)puVar10);
    FUN_013b7d38(param_1 + 0xbe,*(undefined8 *)puVar11);
    *(undefined1 *)((long)param_1 + 0x46c) = 0;
    *(undefined4 *)(param_1 + 0x9a) = 0;
    *(undefined4 *)(param_1 + 0x57) = 0xc6fffe00;
    plVar47 = (long *)System_Threading_Mutex_TypeInfo;
    if (param_1[0x1f] != 0) {
      fVar52 = (float)FUN_026fd130(param_1[0x1f] + 0x50,0);
      if (*plVar51 != 0) {
        fVar75 = (float)FUN_026fd140(*plVar51 + 0x50,0);
        if (*plVar51 != 0) {
          fVar79 = (float)FUN_026fd180(*plVar51 + 0x50,0);
          *(undefined8 *)((long)param_1 + 0x2a4) = 0;
          *(undefined4 *)(param_1 + 199) = 0;
          param_1[0x80] = 0;
          local_c68 = 0;
          FUN_013b7dec(param_1 + 0x81,&local_c68,*(undefined8 *)puVar9);
          *(undefined1 *)(param_1 + 0x85) = 0;
          *(undefined4 *)((long)param_1 + 0x48c) = 0;
          *(undefined4 *)(param_1 + 0x92) = *(undefined4 *)((long)param_1 + 0x31c);
          *(undefined8 *)((long)param_1 + 0x494) = 0;
          *(undefined4 *)((long)param_1 + 0x49c) = 0;
          lVar29 = *plVar47;
          if (*(int *)(lVar29 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar29 = *plVar47;
          }
          lVar21 = param_1[0x6c];
          uVar67 = *(undefined8 *)(*(long *)(lVar29 + 0xb8) + 0x15a8);
          param_1[0x94] = 0;
          param_1[0x99] = 0;
          *(undefined1 *)((long)param_1 + 700) = 0;
          lVar29 = NEON_rev64(uVar67,4);
          *(undefined4 *)((long)param_1 + 0x2dc) = 0xffffffff;
          param_1[0x98] = lVar29;
          *(undefined4 *)(param_1 + 0x95) = 0;
          if ((lVar21 != 0) && (*(long *)(lVar21 + 0x58) != 0)) {
            uVar17 = (int)param_1[0x66] - 1;
            uVar33 = *(int *)(*(long *)(lVar21 + 0x58) + 0x18) - 1;
            if ((int)uVar17 <= (int)uVar33) {
              uVar33 = uVar17;
            }
            uVar3 = 0;
            if (-1 < (int)uVar17) {
              uVar3 = uVar33;
            }
            FUN_024f1d04(lVar21,0);
            fVar53 = *(float *)(param_1 + 0x67);
            *(undefined4 *)(param_1 + 0x6b) = 0xbf800000;
            fVar85 = *(float *)(param_1 + 0x6a);
            param_1[0x69] = 0;
            lVar29 = *plVar47;
            fVar84 = *(float *)((long)param_1 + 0x33c);
            fVar88 = *(float *)((long)param_1 + 0x354);
            fVar54 = *(float *)((long)param_1 + 0x344);
            if (*(int *)(lVar29 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar29 = *plVar47;
            }
            *(undefined8 *)((long)param_1 + 0x4d4) =
                 *(undefined8 *)(*(long *)(lVar29 + 0xb8) + 0x1598);
            *(undefined8 *)((long)param_1 + 0x4dc) =
                 *(undefined8 *)(*(long *)(lVar29 + 0xb8) + 0x15a0);
            puVar9 = 
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
              FUN_024d69d4(param_1,*(long *)(*plVar47 + 0xb8) + 0x98,0xffffffff,0xffffffff,0);
              FUN_024d69d4(param_1,*(long *)(*plVar47 + 0xb8) + 0x410,0xffffffff,0xffffffff,0);
              FUN_024d69d4(param_1,*(long *)(*plVar47 + 0xb8) + 0x788,0xffffffff,0xffffffff,0);
              FUN_024d69d4(param_1,*(long *)(*plVar47 + 0xb8) + 0xb00,0xffffffff,0xffffffff,0);
              FUN_024d69d4(param_1,*(long *)(*plVar47 + 0xb8) + 0xe78,0xffffffff,0xffffffff,0);
              FUN_013b7d38(*(long *)(*plVar47 + 0xb8) + 0x11f0,*(undefined8 *)puVar9);
              fVar81 = DAT_028aa3e4;
              fVar74 = DAT_028aa028;
              local_d8 = local_d8 & 0xffffffff00000000;
              lVar29 = param_1[0x8e];
              if (lVar29 != 0) {
                puVar1 = (uint *)((long)param_1 + 0x48c);
                uVar33 = (int)lVar46 - 1;
                uVar20 = (ulong)(uint)fVar70;
                fVar52 = fVar52 - (fVar75 - fVar79);
                lVar46 = (long)param_1 + 0x42c;
                local_172c = 0.0;
                if (fVar85 <= 0.0) {
                  fVar85 = 0.0;
                }
                if (fVar88 <= 0.0) {
                  fVar88 = 0.0;
                }
                plVar2 = param_1 + 0x6c;
                fVar85 = fVar85 + _LAB_028aa024;
                uVar64 = (ulong)(uint)fVar85;
                fVar75 = fVar88 + _LAB_028aa024;
                fVar55 = fVar77 * DAT_028aa028 * fVar55;
                bVar7 = true;
                local_182c = 0.0;
                bVar13 = false;
                local_171c = 0;
                uVar17 = 0;
                bVar8 = 1;
                local_1784 = fVar85;
LAB_0248a8e0:
                fVar77 = (float)uVar20;
                fVar79 = 1.0;
                if ((int)*(uint *)(lVar29 + 0x18) <= (int)uVar17) {
LAB_0248e4dc:
                  fVar70 = (float)uVar64;
                  if (((char)param_1[0x46] != '\0') &&
                     (fVar70 = DAT_02956ccc,
                     DAT_02956ccc < *(float *)((long)param_1 + 0x234) - *(float *)(param_1 + 0x47)))
                  {
                    fVar70 = *(float *)((long)param_1 + 0x1dc);
                    fVar66 = *(float *)((long)param_1 + 0x24c);
                    if ((fVar70 < fVar66) && (*(int *)((long)param_1 + 0x23c) < (int)param_1[0x48]))
                    {
                      if (*(float *)((long)param_1 + 0x2cc) < *(float *)(param_1 + 0x59) / 100.0) {
                        *(undefined4 *)((long)param_1 + 0x2cc) = 0;
                      }
                      fVar55 = (*(float *)((long)param_1 + 0x234) - fVar70) * 0.5;
                      if (fVar55 <= DAT_028aa298) {
                        fVar55 = DAT_028aa298;
                      }
                      *(float *)(param_1 + 0x47) = fVar70;
                      fVar55 = (fVar70 + fVar55) * 20.0 + 0.5;
                      fVar70 = DAT_02958220;
                      if (fVar55 != INFINITY) {
                        fVar70 = (float)(int)fVar55 / 20.0;
                      }
                      if (fVar66 <= fVar70) {
                        fVar70 = fVar66;
                      }
LAB_0248e598:
                      *(float *)((long)param_1 + 0x1dc) = fVar70;
                      return;
                    }
                  }
                  *(undefined1 *)((long)param_1 + 0x244) = 1;
                  if ((int)param_1[0x48] <= *(int *)((long)param_1 + 0x23c)) {
                    uVar67 = FUN_0176eb1c((long)param_1 + 0x23c,0);
                    uVar22 = FUN_017840ac((long)param_1 + 0x1dc,0);
                    uVar67 = FUN_0160073c(*(undefined8 *)
                                           Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__,
                                          uVar67,*(undefined8 *)
                                                  Method_UnityEngine_GameObject_GetComponents<Component>__
                                          ,uVar22,0);
                    if (*(int *)(*plVar37 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*plVar37);
                    }
                    FUN_02660dac(uVar67,0);
                  }
                  puVar9 = Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
                  if ((*puVar1 == 0) || ((*puVar1 == 1 && (uStack_a4 == 3)))) {
                    (**(code **)(*param_1 + 0x958))(param_1,1,*(undefined8 *)(*param_1 + 0x960));
                    lVar46 = *(long *)puVar9;
                    goto LAB_02491474;
                  }
                  lVar46 = *plVar47;
                  if (*(int *)(lVar46 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar46 = *plVar47;
                  }
                  plVar37 = (long *)PTR_DAT_033ed410;
                  lVar46 = **(long **)(lVar46 + 0xb8);
                  if (lVar46 == 0) goto LAB_02491464;
                  if (*(uint *)(lVar46 + 0x18) <= *(uint *)(param_1 + 0xd0))
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  local_c0 = CONCAT44(*(int *)(lVar46 + (long)(int)*(uint *)(param_1 + 0xd0) * 0x38
                                              + 0x54) << 2,(float)local_c0);
                  if ((*plVar2 == 0) || (lVar46 = *(long *)(*plVar2 + 0x60), lVar46 == 0))
                  goto LAB_02491464;
                  if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  if (*(int *)(lVar46 + 0x18) == 0)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  FUN_024e7d94(lVar46 + 0x20,0,0);
                  if (DAT_03774d76 == '\0') {
                    thunk_FUN_00d48444(
                                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                      );
                    DAT_03774d76 = '\x01';
                  }
                  iVar16 = (int)param_1[0x4d];
                  local_179c = **(float **)
                                 (*(long *)
                                   Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                 + 0xb8);
                  local_17a8 = *(undefined8 *)
                                (*(float **)
                                  (*(long *)
                                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                  + 0xb8) + 1);
                  lVar46 = param_1[0xea];
                  local_17d8 = local_17a8;
                  local_17d0 = local_179c;
                  if (iVar16 < 0x401) {
                    if (iVar16 == 0x100) {
                      if (lVar46 == 0) goto LAB_02491464;
                      if (*(uint *)(lVar46 + 0x18) < 2)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      uVar67 = *(undefined8 *)(lVar46 + 0x30);
                      if ((int)param_1[0x5b] == 5) {
                        if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x58), lVar29 == 0))
                        goto LAB_02491464;
                        if (*(uint *)(lVar29 + 0x18) <= uVar3)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        fVar70 = *(float *)(lVar29 + (long)(int)uVar3 * 0x14 + 0x28);
                      }
                      else {
                        fVar70 = *(float *)(param_1 + 0x96);
                      }
                      local_17d0 = fVar53 + 0.0 + *(float *)(lVar46 + 0x2c);
                      fVar70 = (0.0 - fVar70) - fVar84;
                    }
                    else if (iVar16 == 0x200) {
                      if (lVar46 == 0) goto LAB_02491464;
                      if ((*(int *)(lVar46 + 0x18) == 1) || (*(int *)(lVar46 + 0x18) == 0))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      local_17d0 = (*(float *)(lVar46 + 0x20) + *(float *)(lVar46 + 0x2c)) * 0.5;
                      uVar67 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar46 + 0x24) >> 0x20) +
                                        (float)((ulong)*(undefined8 *)(lVar46 + 0x30) >> 0x20)) *
                                        0.5,((float)*(undefined8 *)(lVar46 + 0x24) +
                                            (float)*(undefined8 *)(lVar46 + 0x30)) * 0.5);
                      if ((int)param_1[0x5b] == 5) {
                        if ((*plVar2 == 0) || (lVar46 = *(long *)(*plVar2 + 0x58), lVar46 == 0))
                        goto LAB_02491464;
                        if (*(uint *)(lVar46 + 0x18) <= uVar3)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        lVar46 = lVar46 + (long)(int)uVar3 * 0x14;
                        local_17d0 = fVar53 + 0.0 + local_17d0;
                        fVar70 = ((fVar84 + *(float *)(lVar46 + 0x28) + *(float *)(lVar46 + 0x30)) -
                                 fVar54) * -0.5 + 0.0;
                      }
                      else {
                        local_17d0 = fVar53 + 0.0 + local_17d0;
                        fVar70 = ((fVar84 + *(float *)(param_1 + 0x96) + local_a8) - fVar54) * -0.5
                                 + 0.0;
                      }
                    }
                    else {
                      if (iVar16 != 0x400) goto LAB_0248eb64;
                      if (lVar46 == 0) goto LAB_02491464;
                      if (*(int *)(lVar46 + 0x18) == 0)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      uVar67 = *(undefined8 *)(lVar46 + 0x24);
                      fVar70 = local_a8;
                      if ((int)param_1[0x5b] == 5) {
                        if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x58), lVar29 == 0))
                        goto LAB_02491464;
                        if (*(uint *)(lVar29 + 0x18) <= uVar3)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        fVar70 = *(float *)(lVar29 + (long)(int)uVar3 * 0x14 + 0x30);
                      }
                      local_17d0 = fVar53 + 0.0 + *(float *)(lVar46 + 0x20);
                      fVar70 = fVar54 + (0.0 - fVar70);
                    }
                    local_17d8 = CONCAT44((float)((ulong)uVar67 >> 0x20) + 0.0,
                                          (float)uVar67 + fVar70);
                  }
                  else if (iVar16 == 0x800) {
                    if (lVar46 == 0) goto LAB_02491464;
                    if ((*(int *)(lVar46 + 0x18) == 1) || (*(int *)(lVar46 + 0x18) == 0))
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    fVar70 = ((float)*(undefined8 *)(lVar46 + 0x24) +
                             (float)*(undefined8 *)(lVar46 + 0x30)) * 0.5;
                    local_17d0 = fVar53 + 0.0 +
                                 (*(float *)(lVar46 + 0x20) + *(float *)(lVar46 + 0x2c)) * 0.5;
                    local_17d8 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar46 + 0x24) >> 0x20) +
                                          (float)((ulong)*(undefined8 *)(lVar46 + 0x30) >> 0x20)) *
                                          0.5 + 0.0,fVar70 + 0.0);
                  }
                  else {
                    if (iVar16 == 0x1000) {
                      if (lVar46 == 0) goto LAB_02491464;
                      if ((*(int *)(lVar46 + 0x18) == 1) || (*(int *)(lVar46 + 0x18) == 0))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      fVar70 = (float)*(undefined8 *)(lVar46 + 0x24) +
                               (float)*(undefined8 *)(lVar46 + 0x30);
                      fVar66 = (float)((ulong)*(undefined8 *)(lVar46 + 0x24) >> 0x20) +
                               (float)((ulong)*(undefined8 *)(lVar46 + 0x30) >> 0x20);
                      fVar84 = fVar84 + *(float *)(param_1 + 0x9c) + *(float *)(param_1 + 0x9b);
                      local_17d0 = fVar53 + 0.0 +
                                   (*(float *)(lVar46 + 0x20) + *(float *)(lVar46 + 0x2c)) * 0.5;
                    }
                    else {
                      if (iVar16 != 0x2000) goto LAB_0248eb64;
                      if (lVar46 == 0) goto LAB_02491464;
                      if ((*(int *)(lVar46 + 0x18) == 1) || (*(int *)(lVar46 + 0x18) == 0))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      fVar70 = (float)*(undefined8 *)(lVar46 + 0x24) +
                               (float)*(undefined8 *)(lVar46 + 0x30);
                      fVar66 = (float)((ulong)*(undefined8 *)(lVar46 + 0x24) >> 0x20) +
                               (float)((ulong)*(undefined8 *)(lVar46 + 0x30) >> 0x20);
                      fVar84 = *(float *)((long)param_1 + 0x4b4) - fVar84;
                      local_17d0 = fVar53 + 0.0 +
                                   (*(float *)(lVar46 + 0x20) + *(float *)(lVar46 + 0x2c)) * 0.5;
                    }
                    fVar70 = fVar70 * 0.5;
                    local_17d8 = CONCAT44(fVar66 * 0.5 + 0.0,
                                          fVar70 + (0.0 - (fVar84 - fVar54) * 0.5));
                  }
LAB_0248eb64:
                  lVar46 = FUN_0249b7f8(param_1,0);
                  if (lVar46 != 0) {
                    FUN_026a125c(lVar46,0);
                    dVar63 = DAT_028aa048;
                    *(float *)((long)param_1 + 0x6dc) = fVar70;
                    dVar65 = modf(dVar63,&local_fe0);
                    puVar9 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
                    if (dVar65 == 0.5) {
                      fVar66 = (float)local_fe0;
                      if (((long)local_fe0 & 1U) != 0) {
                        fVar66 = (float)local_fe0 + 1.0;
                      }
                    }
                    else {
                      fVar66 = 255.0;
                    }
                    dVar65 = modf(dVar63,&local_fe0);
                    if (dVar65 == 0.5) {
                      fVar55 = (float)local_fe0;
                      if (((long)local_fe0 & 1U) != 0) {
                        fVar55 = (float)local_fe0 + 1.0;
                      }
                    }
                    else {
                      fVar55 = 255.0;
                    }
                    dVar65 = modf(dVar63,&local_fe0);
                    if (dVar65 == 0.5) {
                      fVar52 = (float)local_fe0;
                      if (((long)local_fe0 & 1U) != 0) {
                        fVar52 = (float)local_fe0 + 1.0;
                      }
                    }
                    else {
                      fVar52 = 255.0;
                    }
                    dVar65 = modf(dVar63,&local_fe0);
                    if (dVar65 == 0.5) {
                      fVar77 = (float)local_fe0;
                      if (((long)local_fe0 & 1U) != 0) {
                        fVar77 = (float)local_fe0 + 1.0;
                      }
                    }
                    else {
                      fVar77 = 255.0;
                    }
                    dVar65 = modf(dVar63,&local_fe0);
                    if (dVar65 == 0.5) {
                      fVar75 = (float)local_fe0;
                      if (((long)local_fe0 & 1U) != 0) {
                        fVar75 = (float)local_fe0 + 1.0;
                      }
                    }
                    else {
                      fVar75 = 255.0;
                    }
                    dVar65 = modf(dVar63,&local_fe0);
                    if (dVar65 == 0.5) {
                      fVar79 = (float)local_fe0;
                      if (((long)local_fe0 & 1U) != 0) {
                        fVar79 = (float)local_fe0 + 1.0;
                      }
                    }
                    else {
                      fVar79 = 255.0;
                    }
                    dVar65 = modf(dVar63,&local_fe0);
                    if (dVar65 == 0.5) {
                      fVar84 = (float)local_fe0;
                      if (((long)local_fe0 & 1U) != 0) {
                        fVar84 = (float)local_fe0 + 1.0;
                      }
                    }
                    else {
                      fVar84 = 255.0;
                    }
                    dVar63 = modf(dVar63,&local_fe0);
                    if (dVar63 == 0.5) {
                      fVar53 = (float)local_fe0;
                      if (((long)local_fe0 & 1U) != 0) {
                        fVar53 = (float)local_fe0 + 1.0;
                      }
                    }
                    else {
                      fVar53 = 255.0;
                    }
                    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    if (DAT_037825d3 == '\0') {
                      thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
                      DAT_037825d3 = '\x01';
                    }
                    puVar9 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
                    lVar46 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
                    if (*(int *)(lVar46 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar46 = *(long *)puVar9;
                    }
                    puVar35 = *(undefined4 **)(lVar46 + 0xb8);
                    UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                              (*puVar35,puVar35[1],puVar35[2],puVar35[3],&local_d0,0x4000ffff,0);
                    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    lVar46 = *plVar2;
                    if (lVar46 != 0) {
                      uVar33 = *puVar1;
                      if ((int)uVar33 < 1) {
                        local_17bc = 0;
                        iVar16 = 0;
                        plVar51 = (long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                        ;
                        goto LAB_02491068;
                      }
                      lVar46 = *(long *)(lVar46 + 0x38);
                      if (lVar46 != 0) {
                        iVar16 = 0;
                        bVar14 = false;
                        bVar6 = false;
                        bVar13 = false;
                        local_17bc = 0;
                        local_183c = 0;
                        bVar7 = false;
                        local_174c = 0;
                        local_1818 = 0;
                        local_17e0 = (int)fVar75 & 0xffU | ((int)fVar79 & 0xffU) << 8 |
                                     ((int)fVar84 & 0xffU) << 0x10 | (int)fVar53 << 0x18;
                        local_1794 = *(float *)(*(long *)(*(long *)System_Threading_Mutex_TypeInfo +
                                                         0xb8) + 0x15a8);
                        local_1798 = 0.0;
                        local_1808 = 0.0;
                        fVar75 = 0.0;
                        local_17dc = 0.0;
                        local_182c = 0.0;
                        local_1804 = (int)fVar66 & 0xffU | ((int)fVar55 & 0xffU) << 8 |
                                     ((int)fVar52 & 0xffU) << 0x10 | (int)fVar77 << 0x18;
                        fVar77 = 0.0;
                        fVar66 = 0.0;
                        local_1738 = 0x2e0;
                        uVar17 = 0;
                        uVar41 = 1;
                        local_17f4 = local_1814;
                        local_17e4 = local_180c;
                        local_17cc = local_1810;
                        local_17c0 = local_1814;
                        local_17b8 = local_180c;
                        local_17b4 = local_1814;
                        fVar55 = local_180c;
                        fVar52 = local_1810;
                        goto LAB_0248ef74;
                      }
                    }
                  }
                  goto LAB_02491464;
                }
                if (*(uint *)(lVar29 + 0x18) <= uVar17)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                uVar17 = *(uint *)(lVar29 + (long)(int)uVar17 * 0xc + 0x20);
                if (uVar17 == 0) goto LAB_0248e4dc;
                uStack_a4 = uVar17;
                if (5 < local_171c) {
                  uVar67 = FUN_0176eb1c(&uStack_a4,0);
                  uVar22 = FUN_0176eb1c(&local_d8,0);
                  uVar67 = FUN_0160073c(*(undefined8 *)
                                         UnityEngine_Rendering_Universal_DebugValidationMode_var,
                                        uVar67,*(undefined8 *)
                                                Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                                        ,uVar22,0);
                  if (*(int *)(*plVar37 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*plVar37);
                  }
                  FUN_026610e4(uVar67,0);
                  local_b8 = CONCAT44(3,*puVar1);
                }
                if ((*(char *)((long)param_1 + 0x2fa) == '\0') || (uStack_a4 != 0x3c)) {
                  if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 == 0))
                  goto LAB_02491464;
                  if (*(uint *)(lVar29 + 0x18) <= *puVar1)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  lVar29 = lVar29 + (long)(int)*puVar1 * 0x178;
                  *(undefined4 *)((long)param_1 + 0x63c) = *(undefined4 *)(lVar29 + 0x2c);
                  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(lVar29 + 0x58);
                  param_1[0x1f] = *(long *)(lVar29 + 0x38);

                  UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__GetInputAction
                  :
                  if ((param_1[0x6c] == 0) ||
                     (lVar29 = *(long *)(param_1[0x6c] + 0x38), lVar29 == 0)) goto LAB_02491464;
                  uVar17 = *puVar1;
                  if (*(uint *)(lVar29 + 0x18) <= uVar17)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  lVar49 = (long)(int)uVar17;
                  cVar31 = *(char *)(lVar29 + lVar49 * 0x178 + 0x5c);
                  *(undefined1 *)((long)param_1 + 0x429) = 0;
                  lVar21 = param_1[0x23];
                  if ((uint)local_b8 == uVar17) {
                    bVar6 = true;
                    uStack_a4 = local_b8._4_4_;
                    *(undefined4 *)((long)param_1 + 0x63c) = 0;
                    if (local_b8._4_4_ == 0x2026) {
                      lVar24 = param_1[0xc9];
                      lVar29 = lVar29 + lVar49 * 0x178;
                      *(undefined4 *)(lVar29 + 0x2c) = 0;
                      *(long *)(lVar29 + 0x30) = lVar24;
                      *(long *)(lVar29 + 0x38) = param_1[0xca];
                      *(long *)(lVar29 + 0x50) = param_1[0xcb];
                      *(int *)(lVar29 + 0x58) = (int)param_1[0xcc];
                      *(undefined1 *)(param_1 + 0x5e) = 1;
                      local_b8 = CONCAT44(3,uVar17 + 1);
                    }
                    else if (local_b8._4_4_ == 3) {
                      if ((*plVar51 == 0) || (lVar24 = FUN_024b11ac(*plVar51,0), lVar24 == 0))
                      goto LAB_02491464;
                      local_c68 = 3;
                      FUN_01299bc0(lVar24,&local_c68,&local_fe0,*(undefined8 *)PTR_DAT_033ef3c8);
                      if (*(uint *)(lVar29 + 0x18) <= uVar17)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      bVar6 = true;
                      *(double *)(lVar29 + lVar49 * 0x178 + 0x30) = local_fe0;
                      uVar17 = *(uint *)((long)param_1 + 0x48c);
                      *(undefined1 *)(param_1 + 0x5e) = 1;
                    }
                  }
                  else {
                    bVar6 = false;
                  }
                  uVar41 = uStack_a4;
                  plVar47 = (long *)System_Threading_Mutex_TypeInfo;
                  if (((int)uVar17 < *(int *)((long)param_1 + 0x31c)) && (uStack_a4 != 3)) {
                    if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 == 0))
                    goto LAB_02491464;
                    if (*(uint *)(lVar29 + 0x18) <= uVar17)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    lVar29 = lVar29 + (long)(int)uVar17 * 0x178;
                    *(undefined1 *)(lVar29 + 0x194) = 0;
                    *(undefined2 *)(lVar29 + 0x20) = 0x200b;
                    *(undefined4 *)(lVar29 + 100) = 0;
                    *puVar1 = uVar17 + 1;
                  }
                  else {
                    iVar16 = *(int *)((long)param_1 + 0x63c);
                    fVar62 = fVar79;
                    if (iVar16 == 0) {
                      uVar17 = *(uint *)((long)param_1 + 0x254);
                      if ((uVar17 >> 4 & 1) == 0) {
                        if ((uVar17 >> 3 & 1) == 0) {
                          if ((uVar17 >> 5 & 1) != 0) {
                            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0)
                                == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar23 = FUN_016f92d4(uVar41,0);
                            uVar17 = uStack_a4;
                            if ((uVar23 & 1) != 0) {
                              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0
                                          ) == 0) {
                                thunk_FUN_00d32864();
                              }
                              uStack_a4 = FUN_016f95a8(uVar17,0);
                              uStack_a4 = uStack_a4 & 0xffff;
                              fVar62 = fVar81;
                            }
                          }
                        }
                        else {
                          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) ==
                              0) {
                            thunk_FUN_00d32864();
                          }
                          uVar23 = FUN_016f9218(uVar41,0);
                          uVar17 = uStack_a4;
                          if ((uVar23 & 1) != 0) {
                            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0)
                                == 0) {
                              thunk_FUN_00d32864();
                            }
                            uStack_a4 = FUN_016f9724(uVar17,0);
                            goto LAB_0248af70;
                          }
                        }
                      }
                      else {
                        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0
                           ) {
                          thunk_FUN_00d32864();
                        }
                        uVar23 = FUN_016f92d4(uVar41,0);
                        uVar17 = uStack_a4;
                        fVar62 = 1.0;
                        if ((uVar23 & 1) != 0) {
                          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) ==
                              0) {
                            thunk_FUN_00d32864();
                          }
                          uStack_a4 = FUN_016f95a8(uVar17,0);
LAB_0248af70:
                          uStack_a4 = uStack_a4 & 0xffff;
                          fVar62 = 1.0;
                        }
                      }
                      iVar16 = *(int *)((long)param_1 + 0x63c);
                      if (iVar16 == 0) goto LAB_0248af84;
LAB_0248abc8:
                      if (iVar16 == 1) {
                        if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 == 0))
                        goto LAB_02491464;
                        if (*(uint *)(lVar29 + 0x18) <= *puVar1)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        lVar29 = lVar29 + (long)(int)*puVar1 * 0x178;
                        lVar49 = *(long *)(lVar29 + 0x40);
                        param_1[0xd2] = lVar49;
                        *(undefined4 *)((long)param_1 + 0x69c) = *(undefined4 *)(lVar29 + 0x48);
                        if ((lVar49 == 0) || (lVar29 = FUN_024ebfa0(lVar49,0), lVar29 == 0))
                        goto LAB_02491464;
                        FUN_0132138c(lVar29,*(undefined4 *)((long)param_1 + 0x69c),&local_fe0,
                                     *(undefined8 *)
                                      System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
                        dVar63 = local_fe0;
                        puVar9 = System_Threading_Mutex_TypeInfo;
                        plVar47 = (long *)System_Threading_Mutex_TypeInfo;
                        if (local_fe0 == 0.0) goto LAB_0248ab98;
                        if (uStack_a4 == 0x3c) {
                          uStack_a4 = *(int *)((long)param_1 + 0x69c) + 0xe000;
                        }
                        else {
                          lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
                          if (*(int *)(lVar29 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar29 = *(long *)puVar9;
                          }
                          *(undefined4 *)((long)param_1 + 0x1b4) =
                               *(undefined4 *)(*(long *)(lVar29 + 0xb8) + 0x68);
                        }
                        if (param_1[0x1f] == 0) goto LAB_02491464;
                        fVar77 = *(float *)(param_1 + 0x3c);
                        memmove(&local_160,(void *)(param_1[0x1f] + 0x50),0x60);
                        iVar16 = FUN_026fd110(&local_160,0);
                        if (*plVar51 == 0) goto LAB_02491464;
                        memmove(&local_160,(void *)(*plVar51 + 0x50),0x60);
                        fVar56 = (float)FUN_026fd120(&local_160,0);
                        fVar86 = fVar66;
                        if (*(char *)((long)param_1 + 0x2fd) != '\0') {
                          fVar86 = 1.0;
                        }
                        if (param_1[0xd2] == 0) goto LAB_02491464;
                        fVar86 = (fVar77 / (float)iVar16) * fVar56 * fVar86;
                        iVar16 = FUN_026fd110(param_1[0xd2] + 0x48,0);
                        fVar77 = *(float *)(param_1 + 0x3c);
                        if (iVar16 < 1) {
                          if (*plVar51 == 0) goto LAB_02491464;
                          iVar16 = FUN_026fd110(*plVar51 + 0x50,0);
                          if (*plVar51 == 0) goto LAB_02491464;
                          fVar56 = (float)FUN_026fd120(*plVar51 + 0x50,0);
                          fVar80 = fVar66;
                          if (*(char *)((long)param_1 + 0x2fd) != '\0') {
                            fVar80 = fVar79;
                          }
                          if (param_1[0x1f] == 0) goto LAB_02491464;
                          fVar76 = (float)FUN_026fd140(param_1[0x1f] + 0x50,0);
                          if (*(long *)((long)dVar63 + 0x20) == 0) goto LAB_02491464;
                          FUN_026fd62c(&local_fe0,*(long *)((long)dVar63 + 0x20),0);
                          uStack_178 = uStack_fd8;
                          local_180 = local_fe0;
                          local_170 = (undefined4)local_fd0;
                          fVar57 = (float)FUN_026fd45c(&local_180,0);
                          if (*(long *)((long)dVar63 + 0x20) == 0) goto LAB_02491464;
                          fVar58 = *(float *)((long)dVar63 + 0x2c);
                          fVar82 = (float)FUN_026fd668(*(long *)((long)dVar63 + 0x20),0);
                          if (*plVar51 == 0) goto LAB_02491464;
                          fVar79 = (float)FUN_026fd140(*plVar51 + 0x50,0);
                          if (*plVar51 == 0) goto LAB_02491464;
                          fVar60 = (float)FUN_026fd170(*plVar51 + 0x50,0);
                          if (*plVar51 == 0) goto LAB_02491464;
                          fVar71 = *(float *)((long)param_1 + 0x3fc);
                          fVar59 = (float)FUN_026fd120(*plVar51 + 0x50,0);
                          if (param_1[0x1f] == 0) goto LAB_02491464;
                          fVar59 = fVar86 * fVar60 * fVar71 * fVar59;
                          fVar80 = (fVar77 / (float)iVar16) * fVar56 * fVar80;
                          fVar77 = fVar80 * (fVar76 / fVar57) * fVar58 * fVar82;
                          fVar80 = fVar80 / fVar77;
                          fVar79 = fVar80 * fVar79;
                          fVar86 = (float)FUN_026fd180(param_1[0x1f] + 0x50,0);
                          fVar80 = fVar80 * fVar86;
                        }
                        else {
                          if (param_1[0xd2] == 0) goto LAB_02491464;
                          iVar16 = FUN_026fd110(param_1[0xd2] + 0x48,0);
                          if (param_1[0xd2] == 0) goto LAB_02491464;
                          fVar56 = (float)FUN_026fd120(param_1[0xd2] + 0x48,0);
                          if (*(long *)((long)dVar63 + 0x20) == 0) goto LAB_02491464;
                          fVar80 = *(float *)((long)dVar63 + 0x2c);
                          fVar76 = fVar66;
                          if (*(char *)((long)param_1 + 0x2fd) != '\0') {
                            fVar76 = 1.0;
                          }
                          fVar57 = (float)FUN_026fd668(*(long *)((long)dVar63 + 0x20),0);
                          if (param_1[0xd2] == 0) goto LAB_02491464;
                          fVar79 = (float)FUN_026fd140(param_1[0xd2] + 0x48,0);
                          if (param_1[0xd2] == 0) goto LAB_02491464;
                          fVar58 = (float)FUN_026fd170(param_1[0xd2] + 0x48,0);
                          if (param_1[0xd2] == 0) goto LAB_02491464;
                          fVar82 = *(float *)((long)param_1 + 0x3fc);
                          fVar59 = (float)FUN_026fd120(param_1[0xd2] + 0x48,0);
                          if (param_1[0xd2] == 0) goto LAB_02491464;
                          fVar59 = fVar86 * fVar58 * fVar82 * fVar59;
                          fVar77 = (fVar77 / (float)iVar16) * fVar56 * fVar76 * fVar80 * fVar57;
                          fVar80 = (float)FUN_026fd180(param_1[0xd2] + 0x48,0);
                        }
                        lVar29 = param_1[0x6c];
                        param_1[200] = (long)dVar63;
                        if ((lVar29 != 0) && (lVar49 = *(long *)(lVar29 + 0x38), lVar49 != 0)) {
                          if (*puVar1 < *(uint *)(lVar49 + 0x18)) {
                            lVar49 = lVar49 + (long)(int)*puVar1 * 0x178;
                            *(undefined4 *)(lVar49 + 0x2c) = 1;
                            *(float *)(lVar49 + 0x160) = fVar77;
                            local_172c = 0.0;
                            *(long *)(lVar49 + 0x40) = param_1[0xd2];
                            *(long *)(lVar49 + 0x38) = param_1[0x1f];
                            *(int *)(lVar49 + 0x58) = (int)param_1[0x23];
                            *(int *)(param_1 + 0x23) = (int)lVar21;
                            goto LAB_0248b384;
                          }
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                          ;
                        }
                        goto LAB_02491464;
                      }
                      lVar29 = *plVar2;
                      fVar86 = 0.0;
                      if (uStack_a4 != 3 && uStack_a4 != 0xad) {
                        fVar86 = fVar77;
                      }
                      fVar59 = 0.0;
                      if (lVar29 == 0) goto LAB_02491464;
                      fVar79 = 0.0;
                      fVar80 = 0.0;
                    }
                    else {
                      if (iVar16 != 0) goto LAB_0248abc8;
LAB_0248af84:
                      if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 == 0))
                      goto LAB_02491464;
                      uVar41 = *puVar1;
                      uVar17 = *(uint *)(lVar29 + 0x18);
                      if (uVar17 <= uVar41)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      lVar21 = *(long *)(lVar29 + (long)(int)uVar41 * 0x178 + 0x30);
                      param_1[200] = lVar21;
                      plVar47 = (long *)System_Threading_Mutex_TypeInfo;
                      if (lVar21 == 0) goto LAB_0248ab98;
                      lVar49 = lVar29 + (long)(int)uVar41 * 0x178;
                      lVar21 = *(long *)(lVar49 + 0x38);
                      param_1[0x1f] = lVar21;
                      param_1[0x22] = *(long *)(lVar49 + 0x50);
                      *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(lVar49 + 0x58);
                      if (bVar6) {
                        lVar49 = param_1[0x8e];
                        if (lVar49 == 0) goto LAB_02491464;
                        if (*(uint *)(lVar49 + 0x18) <= (uint)local_d8)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        if ((*(int *)(lVar49 + (long)(int)(uint)local_d8 * 0xc + 0x20) != 10) ||
                           (uVar41 == *(uint *)(param_1 + 0x92))) goto LAB_0248b014;
                        if (uVar17 <= uVar41 - 1)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        if (lVar21 == 0) goto LAB_02491464;
                        fVar86 = *(float *)(lVar29 + (long)(int)(uVar41 - 1) * 0x178 + 0x60);
                        iVar16 = FUN_026fd110(lVar21 + 0x50,0);
                        lVar29 = *plVar51;
                      }
                      else {
LAB_0248b014:
                        if (lVar21 == 0) goto LAB_02491464;
                        fVar86 = *(float *)(param_1 + 0x3c);
                        iVar16 = FUN_026fd110(lVar21 + 0x50,0);
                        lVar29 = param_1[0x1f];
                      }
                      if (lVar29 == 0) goto LAB_02491464;
                      fVar76 = (float)FUN_026fd120(lVar29 + 0x50,0);
                      fVar56 = fVar66;
                      if (*(char *)((long)param_1 + 0x2fd) != '\0') {
                        fVar56 = fVar79;
                      }
                      fVar80 = 0.0;
                      fVar79 = 0.0;
                      if (!(bool)(bVar6 & uStack_a4 == 0x2026)) {
                        if (*plVar51 == 0) goto LAB_02491464;
                        fVar79 = (float)FUN_026fd140(*plVar51 + 0x50,0);
                        if (*plVar51 == 0) goto LAB_02491464;
                        fVar80 = (float)FUN_026fd180(*plVar51 + 0x50,0);
                      }
                      lVar29 = param_1[200];
                      if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto LAB_02491464;
                      fVar57 = *(float *)((long)param_1 + 0x3fc);
                      fVar58 = *(float *)(lVar29 + 0x2c);
                      fVar77 = (float)FUN_026fd668(*(long *)(lVar29 + 0x20),0);
                      if (*plVar51 == 0) goto LAB_02491464;
                      fVar82 = (float)FUN_026fd170(*plVar51 + 0x50,0);
                      if (*plVar51 == 0) goto LAB_02491464;
                      fVar60 = *(float *)((long)param_1 + 0x3fc);
                      fVar59 = (float)FUN_026fd120(*plVar51 + 0x50,0);
                      lVar29 = param_1[0x6c];
                      if ((lVar29 == 0) || (lVar21 = *(long *)(lVar29 + 0x38), lVar21 == 0))
                      goto LAB_02491464;
                      if (*(uint *)(lVar21 + 0x18) <= *puVar1)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      lVar21 = lVar21 + (long)(int)*puVar1 * 0x178;
                      *(undefined4 *)(lVar21 + 0x2c) = 0;
                      fVar56 = ((fVar62 * fVar86) / (float)iVar16) * fVar76 * fVar56;
                      fVar77 = fVar56 * fVar57 * fVar58 * fVar77;
                      *(float *)(lVar21 + 0x160) = fVar77;
                      uVar17 = *(uint *)(param_1 + 0x23);
                      fVar59 = fVar56 * fVar82 * fVar60 * fVar59;
                      if (uVar17 == 0) {
                        local_172c = *(float *)(param_1 + 0xc2);
                      }
                      else {
                        lVar21 = param_1[0xe0];
                        if (lVar21 == 0) goto LAB_02491464;
                        if (*(uint *)(lVar21 + 0x18) <= uVar17)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        lVar21 = *(long *)(lVar21 + (long)(int)uVar17 * 8 + 0x20);
                        if (lVar21 == 0) goto LAB_02491464;
                        local_172c = *(float *)(lVar21 + 0x4c);
                      }
LAB_0248b384:
                      fVar86 = 0.0;
                      if (uStack_a4 != 3 && uStack_a4 != 0xad) {
                        fVar86 = fVar77;
                      }
                    }
                    lVar29 = *(long *)(lVar29 + 0x38);
                    if (lVar29 == 0) goto LAB_02491464;
                    if (*(uint *)(lVar29 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    lVar29 = lVar29 + (long)(int)*puVar1 * 0x178;
                    *(short *)(lVar29 + 0x20) = (short)uStack_a4;
                    *(int *)(lVar29 + 0x60) = (int)param_1[0x3c];
                    *(undefined4 *)(lVar29 + 0x164) = *(undefined4 *)((long)param_1 + 0x4e4);
                    if ((param_1[0x6c] == 0) ||
                       (lVar29 = *(long *)(param_1[0x6c] + 0x38), lVar29 == 0)) goto LAB_02491464;
                    if (*(uint *)(lVar29 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    *(int *)(lVar29 + (long)(int)*puVar1 * 0x178 + 0x168) = (int)param_1[0x2a];
                    if ((param_1[0x6c] == 0) ||
                       (lVar29 = *(long *)(param_1[0x6c] + 0x38), lVar29 == 0)) goto LAB_02491464;
                    if (*(uint *)(lVar29 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    *(undefined4 *)(lVar29 + (long)(int)*puVar1 * 0x178 + 0x170) =
                         *(undefined4 *)((long)param_1 + 0x154);
                    if ((param_1[0x6c] == 0) ||
                       (lVar29 = *(long *)(param_1[0x6c] + 0x38), lVar29 == 0)) goto LAB_02491464;
                    uVar17 = *puVar1;
                    FUN_013b78b8(param_1 + 0xa9,&local_fe0,
                                 *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
                    if (*(uint *)(lVar29 + 0x18) <= uVar17)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    lVar29 = lVar29 + (long)(int)uVar17 * 0x178;
                    *(undefined4 *)(lVar29 + 0x18c) = (undefined4)local_fd0;
                    *(undefined8 *)(lVar29 + 0x184) = uStack_fd8;
                    *(double *)(lVar29 + 0x17c) = local_fe0;
                    if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 == 0))
                    goto LAB_02491464;
                    if (*(uint *)(lVar29 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    *(undefined4 *)(lVar29 + (long)(int)*puVar1 * 0x178 + 400) =
                         *(undefined4 *)((long)param_1 + 0x254);
                    if ((param_1[200] == 0) ||
                       (lVar29 = *(long *)(param_1[200] + 0x20), lVar29 == 0)) goto LAB_02491464;
                    FUN_026fd62c(&local_c68,lVar29,0);
                    uVar17 = uStack_a4;
                    local_f0 = CONCAT44(uStack_c64,local_c68);
                    uStack_e8 = uStack_c60;
                    local_e0 = local_c58;
                    if ((int)uStack_a4 < 0x10000) {
                      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0)
                      {
                        thunk_FUN_00d32864();
                      }
                      uVar17 = FUN_016f68bc(uVar17,0);
                      uVar17 = uVar17 & 1;
                    }
                    else {
                      uVar17 = 0;
                    }
                    local_1794 = *(float *)(param_1 + 0x54);
                    *(undefined4 *)((long)param_1 + 0x2f4) = 0;
                    if (*(char *)((long)param_1 + 0x2f1) == '\0') {
                      fVar57 = 0.0;
                      fVar76 = 0.0;
                      fVar56 = 0.0;
                    }
                    else {
                      if (param_1[200] == 0) goto LAB_02491464;
                      uVar32 = *puVar1;
                      uVar41 = *(uint *)(param_1[200] + 0x28);
                      if ((int)uVar32 < (int)uVar33) {
                        if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 == 0))
                        goto LAB_02491464;
                        if (*(uint *)(lVar29 + 0x18) <= uVar32 + 1)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        lVar29 = *(long *)(lVar29 + (long)(int)(uVar32 + 1) * 0x178 + 0x30);
                        if ((((lVar29 == 0) || (*plVar51 == 0)) ||
                            (lVar21 = *(long *)(*plVar51 + 0x128), lVar21 == 0)) ||
                           (lVar21 = *(long *)(lVar21 + 0x18), lVar21 == 0)) goto LAB_02491464;
                        local_fe0 = (double)CONCAT44(local_fe0._4_4_,
                                                     uVar41 | *(int *)(lVar29 + 0x28) << 0x10);
                        uVar20 = FUN_0129eff4(lVar21,&local_fe0,&local_188,
                                              *(undefined8 *)
                                               Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                                             );
                        uVar87 = 0;
                        if ((uVar20 & 1) == 0) {
                          fVar57 = 0.0;
                          fVar76 = 0.0;
                          fVar56 = 0.0;
                        }
                        else {
                          if (local_188 == 0) goto LAB_02491464;
                          fVar56 = *(float *)(local_188 + 0x14);
                          fVar76 = *(float *)(local_188 + 0x18);
                          fVar57 = *(float *)(local_188 + 0x1c);
                          uVar87 = *(undefined4 *)(local_188 + 0x20);
                          if ((*(byte *)(local_188 + 0x39) & 1) != 0) {
                            local_1794 = 0.0;
                          }
                        }
                        uVar32 = *puVar1;
                      }
                      else {
                        uVar87 = 0;
                        fVar57 = 0.0;
                        fVar76 = 0.0;
                        fVar56 = 0.0;
                      }
                      if (0 < (int)uVar32) {
                        if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 == 0))
                        goto LAB_02491464;
                        if (*(uint *)(lVar29 + 0x18) <= (uint)((long)(int)uVar32 + -1))
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        lVar29 = *(long *)(lVar29 + ((long)(int)uVar32 + -1) * 0x178 + 0x30);
                        if (((lVar29 == 0) || (*plVar51 == 0)) ||
                           ((lVar21 = *(long *)(*plVar51 + 0x128), lVar21 == 0 ||
                            (lVar21 = *(long *)(lVar21 + 0x18), lVar21 == 0)))) goto LAB_02491464;
                        local_fe0 = (double)CONCAT44(local_fe0._4_4_,
                                                     *(uint *)(lVar29 + 0x28) | uVar41 << 0x10);
                        uVar20 = FUN_0129eff4(lVar21,&local_fe0,&local_188,
                                              *(undefined8 *)
                                               Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                                             );
                        if ((uVar20 & 1) != 0) {
                          if ((local_188 == 0) ||
                             (fVar56 = (float)FUN_024bb1bc(fVar56,fVar76,fVar57,uVar87,
                                                           *(undefined4 *)(local_188 + 0x28),
                                                           *(undefined4 *)(local_188 + 0x2c),
                                                           *(undefined4 *)(local_188 + 0x30),
                                                           *(undefined4 *)(local_188 + 0x34),0),
                             local_188 == 0)) goto LAB_02491464;
                          if ((*(byte *)(local_188 + 0x39) & 1) != 0) {
                            local_1794 = 0.0;
                          }
                        }
                      }
                      *(float *)((long)param_1 + 0x2f4) = fVar57;
                    }
                    if ((char)param_1[0x1d] != '\0') {
                      fVar82 = *(float *)(param_1 + 199);
                      fVar58 = (float)FUN_026fd474(&local_f0,0);
                      fVar82 = fVar82 - fVar86 * fVar58 * (1.0 - *(float *)((long)param_1 + 0x2cc));
                      *(float *)(param_1 + 199) = fVar82;
                      if ((uVar17 != 0) || (uStack_a4 == 0x200b)) {
                        *(float *)(param_1 + 199) =
                             fVar82 - fVar55 * *(float *)((long)param_1 + 0x2ac);
                      }
                    }
                    fVar82 = *(float *)(param_1 + 0x55);
                    fVar58 = 0.0;
                    if (fVar82 != 0.0) {
                      fVar58 = (float)FUN_026fd454(&local_f0,0);
                      fVar60 = (float)FUN_026fd464(&local_f0,0);
                      fVar58 = (1.0 - *(float *)((long)param_1 + 0x2cc)) *
                               (fVar82 * 0.5 - fVar86 * (fVar58 * 0.5 + fVar60));
                      *(float *)(param_1 + 199) = *(float *)(param_1 + 199) + fVar58;
                    }
                    if (((cVar31 == '\0') && (*(int *)((long)param_1 + 0x63c) == 0)) &&
                       ((*(byte *)((long)param_1 + 0x254) & 1) != 0)) {
                      lVar29 = param_1[0x22];
                      if (*(int *)(*(long *)
                                    System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                  + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar20 = FUN_02681b9c(lVar29,0,0);
                      fVar60 = 0.0;
                      if ((uVar20 & 1) != 0) {
                        lVar29 = param_1[0x22];
                        if (*(int *)(*(long *)
                                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                    + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        plVar37 = (long *)
                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                        ;
                        if (lVar29 == 0) goto LAB_02491464;
                        uVar20 = FUN_0267e1d8(lVar29,*(undefined4 *)
                                                      (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0x54),0);
                        if ((uVar20 & 1) != 0) {
                          lVar29 = param_1[0x22];
                          if (*(int *)(*plVar37 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            plVar37 = (long *)
                                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                            ;
                          }
                          if (lVar29 == 0) goto LAB_02491464;
                          fVar82 = (float)FUN_0267f610(lVar29,*(undefined4 *)
                                                               (*(long *)(*plVar37 + 0xb8) + 0x54),0
                                                      );
                          if ((*plVar51 == 0) || (param_1[0x22] == 0)) goto LAB_02491464;
                          fVar71 = *(float *)(*plVar51 + 0x1b0);
                          fVar60 = (float)FUN_0267f610(param_1[0x22],
                                                       *(undefined4 *)
                                                        (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0xcc),0);
                          fVar60 = fVar60 * fVar82 * fVar71 * 0.25;
                          if (fVar82 < local_172c + fVar60) {
                            local_172c = fVar82 - fVar60;
                          }
                        }
                      }
                      if (*plVar51 == 0) goto LAB_02491464;
                      local_179c = *(float *)(*plVar51 + 0x1b4);
                    }
                    else {
                      lVar29 = param_1[0x22];
                      if (*(int *)(*(long *)
                                    System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                  + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar20 = FUN_02681b9c(lVar29,0,0);
                      local_179c = 0.0;
                      if ((uVar20 & 1) != 0) {
                        lVar29 = param_1[0x22];
                        if (*(int *)(*(long *)
                                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                    + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        plVar37 = (long *)
                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                        ;
                        if (lVar29 == 0) goto LAB_02491464;
                        uVar20 = FUN_0267e1d8(lVar29,*(undefined4 *)
                                                      (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0x54),0);
                        if ((uVar20 & 1) != 0) {
                          lVar29 = param_1[0x22];
                          if (*(int *)(*plVar37 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            plVar37 = (long *)
                                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                            ;
                          }
                          if (lVar29 == 0) goto LAB_02491464;
                          uVar20 = FUN_0267e1d8(lVar29,*(undefined4 *)
                                                        (*(long *)(*plVar37 + 0xb8) + 0xcc),0);
                          if ((uVar20 & 1) != 0) {
                            lVar29 = param_1[0x22];
                            if (*(int *)(*plVar37 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                              plVar37 = (long *)
                                        Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                              ;
                            }
                            if (lVar29 != 0) {
                              fVar82 = (float)FUN_0267f610(lVar29,*(undefined4 *)
                                                                   (*(long *)(*plVar37 + 0xb8) +
                                                                   0x54),0);
                              if ((*plVar51 != 0) && (param_1[0x22] != 0)) {
                                fVar71 = *(float *)(*plVar51 + 0x1a8);
                                fVar60 = (float)FUN_0267f610(param_1[0x22],
                                                             *(undefined4 *)
                                                              (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0xcc),0);
                                fVar60 = fVar60 * fVar82 * fVar71 * 0.25;
                                if (fVar82 < local_172c + fVar60) {
                                  local_172c = fVar82 - fVar60;
                                }
                                goto LAB_0248ba68;
                              }
                            }
                            goto LAB_02491464;
                          }
                        }
                      }
                      fVar60 = 0.0;
                    }
LAB_0248ba68:
                    local_1774 = *(float *)(param_1 + 199);
                    fVar82 = (float)FUN_026fd464(&local_f0,0);
                    local_1774 = local_1774 +
                                 (1.0 - *(float *)((long)param_1 + 0x2cc)) *
                                 fVar86 * (fVar56 + ((fVar82 - local_172c) - fVar60));
                    fVar56 = (float)FUN_026fd46c(&local_f0,0);
                    fVar82 = *(float *)((long)param_1 + 0x614) +
                             ((fVar59 + fVar86 * (fVar76 + local_172c + fVar56)) -
                             *(float *)(param_1 + 0x9a));
                    fVar56 = (float)FUN_026fd45c(&local_f0,0);
                    fVar71 = fVar82 - fVar86 * (local_172c + local_172c + fVar56);
                    fVar56 = (float)FUN_026fd454(&local_f0,0);
                    fVar76 = local_1774 +
                             (1.0 - *(float *)((long)param_1 + 0x2cc)) *
                             fVar86 * (fVar60 + fVar60 + local_172c + local_172c + fVar56);
                    local_1778 = local_1774;
                    fVar56 = fVar76;
                    if (((*(int *)((long)param_1 + 0x63c) == 0) && (cVar31 == '\0')) &&
                       ((*(byte *)((long)param_1 + 0x254) >> 1 & 1) != 0)) {
                      fVar73 = (float)(int)param_1[0xbd] * fVar74;
                      fVar56 = (float)FUN_026fd46c(&local_f0,0);
                      fVar72 = fVar73 * fVar86 * (fVar60 + local_172c + fVar56);
                      fVar56 = (float)FUN_026fd46c(&local_f0,0);
                      fVar68 = (float)FUN_026fd45c(&local_f0,0);
                      fVar82 = fVar82 + 0.0;
                      fVar71 = fVar71 + 0.0;
                      fVar73 = fVar73 * fVar86 * (((fVar56 - fVar68) - local_172c) - fVar60);
                      fVar56 = fVar76 + fVar73;
                      fVar68 = local_1774 + fVar72;
                      fVar61 = (fVar72 - fVar73) * 0.5;
                      local_1774 = (local_1774 + fVar73) - fVar61;
                      fVar76 = (fVar76 + fVar72) - fVar61;
                      local_1778 = fVar68 - fVar61;
                      fVar56 = fVar56 - fVar61;
                    }
                    if (*(char *)((long)param_1 + 0x46c) == '\0') {
                      fVar61 = 0.0;
                      fVar72 = 0.0;
                      local_1780 = 0.0;
                      fStack_177c = 0.0;
                      fVar73 = fVar71;
                      fVar68 = fVar82;
                    }
                    else {
                      thunk_FUN_026935f0(lVar46,0);
                      fVar78 = (fVar76 + local_1774) * 0.5;
                      fVar83 = (fVar71 + fVar82) * 0.5;
                      fVar82 = fVar82 - fVar83;
                      fStack_177c = 0.0;
                      fVar68 = fVar82;
                      local_1778 = (float)FUN_02692df0(local_1778 - fVar78,lVar46,0);
                      local_1778 = fVar78 + local_1778;
                      fStack_177c = fStack_177c + 0.0;
                      fVar71 = fVar71 - fVar83;
                      local_1780 = 0.0;
                      fVar73 = fVar71;
                      local_1774 = (float)FUN_02692df0(local_1774 - fVar78,lVar46,0);
                      local_1774 = fVar78 + local_1774;
                      local_1780 = local_1780 + 0.0;
                      fVar72 = 0.0;
                      fVar76 = (float)FUN_02692df0(fVar76 - fVar78,lVar46,0);
                      fVar76 = fVar78 + fVar76;
                      fVar82 = fVar83 + fVar82;
                      fVar72 = fVar72 + 0.0;
                      fVar61 = 0.0;
                      fVar56 = (float)FUN_02692df0(fVar56 - fVar78,lVar46,0);
                      fVar56 = fVar78 + fVar56;
                      fVar71 = fVar83 + fVar71;
                      fVar61 = fVar61 + 0.0;
                      fVar73 = fVar83 + fVar73;
                      fVar68 = fVar83 + fVar68;
                    }
                    if (*plVar2 == 0) goto LAB_02491464;
                    lVar29 = *(long *)(*plVar2 + 0x38);
                    uVar20 = (ulong)(uint)fVar86;
                    if (lVar29 == 0) goto LAB_02491464;
                    if (*(uint *)(lVar29 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    lVar29 = lVar29 + (long)(int)*puVar1 * 0x178;
                    *(float *)(lVar29 + 0x120) = fVar73;
                    *(float *)(lVar29 + 0x11c) = local_1774;
                    *(float *)(lVar29 + 0x124) = local_1780;
                    if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 == 0))
                    goto LAB_02491464;
                    if (*(uint *)(lVar29 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    lVar29 = lVar29 + (long)(int)*puVar1 * 0x178;
                    *(float *)(lVar29 + 0x114) = fVar68;
                    *(float *)(lVar29 + 0x110) = local_1778;
                    *(float *)(lVar29 + 0x118) = fStack_177c;
                    if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 == 0))
                    goto LAB_02491464;
                    if (*(uint *)(lVar29 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    lVar29 = lVar29 + (long)(int)*puVar1 * 0x178;
                    *(float *)(lVar29 + 0x128) = fVar76;
                    *(float *)(lVar29 + 300) = fVar82;
                    *(float *)(lVar29 + 0x130) = fVar72;
                    if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 == 0))
                    goto LAB_02491464;
                    if (*(uint *)(lVar29 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    lVar29 = lVar29 + (long)(int)*puVar1 * 0x178;
                    *(float *)(lVar29 + 0x134) = fVar56;
                    *(float *)(lVar29 + 0x138) = fVar71;
                    *(float *)(lVar29 + 0x13c) = fVar61;
                    if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 == 0))
                    goto LAB_02491464;
                    uVar41 = *puVar1;
                    lVar21 = (long)(int)uVar41;
                    if (*(uint *)(lVar29 + 0x18) <= uVar41)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    lVar49 = lVar29 + lVar21 * 0x178;
                    *(int *)(lVar49 + 0x140) = (int)param_1[199];
                    fVar82 = *(float *)(param_1 + 0x9a);
                    uVar64 = (ulong)(uint)fVar82;
                    fVar56 = *(float *)((long)param_1 + 0x614);
                    *(float *)(lVar49 + 0x15c) = (fVar76 - local_1774) / (fVar68 - fVar73);
                    *(float *)(lVar49 + 0x14c) = (fVar59 - fVar82) + fVar56;
                    fVar79 = fVar79 * fVar86;
                    if (*(int *)((long)param_1 + 0x63c) == 0) {
                      fVar79 = fVar79 / fVar62;
                      fVar80 = (fVar80 * fVar86) / fVar62;
                    }
                    else {
                      fVar80 = fVar80 * fVar86;
                    }
                    uVar32 = *(uint *)(param_1 + 0x92);
                    bVar14 = uVar17 != 0;
                    fVar79 = fVar56 + fVar79;
                    bVar15 = uVar41 != uVar32;
                    if (bVar15 && bVar14) {
                      fVar56 = *(float *)(param_1 + 0x98);
                      lVar29 = lVar29 + lVar21 * 0x178;
                      *(float *)(lVar29 + 0x154) = fVar56;
                      fVar80 = *(float *)((long)param_1 + 0x4c4);
                      *(float *)(lVar29 + 0x148) = fVar56 - fVar82;
                      *(float *)(lVar29 + 0x158) = fVar80;
                      *(float *)(param_1 + 0x97) = fVar56 - fVar82;
                      fVar80 = fVar80 - fVar82;
                      *(float *)(lVar29 + 0x150) = fVar80;
                    }
                    else {
                      fVar80 = fVar56 + fVar80;
                      fVar76 = fVar79;
                      fVar59 = fVar80;
                      if (fVar56 != 0.0) {
                        fVar76 = (fVar79 - fVar56) / *(float *)((long)param_1 + 0x3fc);
                        fVar59 = (fVar80 - fVar56) / *(float *)((long)param_1 + 0x3fc);
                        if (fVar76 <= fVar79) {
                          fVar76 = fVar79;
                        }
                        if (fVar80 <= fVar59) {
                          fVar59 = fVar80;
                        }
                      }
                      lVar29 = lVar29 + lVar21 * 0x178;
                      fVar56 = fVar76;
                      if (fVar76 <= *(float *)(param_1 + 0x98)) {
                        fVar56 = *(float *)(param_1 + 0x98);
                      }
                      fVar71 = fVar59;
                      if (*(float *)((long)param_1 + 0x4c4) <= fVar59) {
                        fVar71 = *(float *)((long)param_1 + 0x4c4);
                      }
                      *(float *)((long)param_1 + 0x4c4) = fVar71;
                      fVar80 = fVar80 - fVar82;
                      *(float *)(param_1 + 0x98) = fVar56;
                      *(float *)(lVar29 + 0x154) = fVar76;
                      *(float *)(lVar29 + 0x158) = fVar59;
                      *(float *)(lVar29 + 0x148) = fVar79 - fVar82;
                      *(float *)(param_1 + 0x97) = fVar79 - fVar82;
                      *(float *)(lVar29 + 0x150) = fVar80;
                    }
                    *(float *)((long)param_1 + 0x4bc) = fVar80;
                    if (((int)param_1[0x94] == 0) || (*(char *)((long)param_1 + 0x334) != '\0')) {
                      if (!bVar15 || !bVar14) {
                        *(float *)(param_1 + 0x96) = fVar56;
                        if (param_1[0x1f] != 0) {
                          fVar56 = *(float *)((long)param_1 + 0x4b4);
                          fVar76 = (float)FUN_026fd150(param_1[0x1f] + 0x50,0);
                          fVar62 = (fVar86 * fVar76) / fVar62;
                          uVar64 = (ulong)*(uint *)(param_1 + 0x9a);
                          if (fVar56 <= fVar62) {
                            fVar56 = fVar62;
                          }
                          *(float *)((long)param_1 + 0x4b4) = fVar56;
                          goto LAB_0248bef4;
                        }
                        goto LAB_02491464;
                      }
                    }
                    else {
LAB_0248bef4:
                      if ((!bVar15 || !bVar14) && (float)uVar64 == 0.0) {
                        fVar62 = *(float *)((long)param_1 + 0x4ac);
                        if (*(float *)((long)param_1 + 0x4ac) <= fVar79) {
                          fVar62 = fVar79;
                        }
                        *(float *)((long)param_1 + 0x4ac) = fVar62;
                      }
                    }
                    uVar28 = uStack_a4;
                    lVar29 = *plVar2;
                    if ((lVar29 == 0) || (lVar21 = *(long *)(lVar29 + 0x38), lVar21 == 0))
                    goto LAB_02491464;
                    uVar40 = *puVar1;
                    if (*(uint *)(lVar21 + 0x18) <= uVar40)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    lVar21 = lVar21 + (long)(int)uVar40 * 0x178;
                    *(undefined1 *)(lVar21 + 0x194) = 0;
                    uVar50 = *(uint *)(param_1 + 0x4e);
                    if ((uStack_a4 == 9) ||
                       (((((uVar17 == 0 && (uStack_a4 != 3)) && (uStack_a4 != 0x200b)) &&
                         (uStack_a4 != 0xad)) ||
                        (((bool)(uStack_a4 == 0xad & (bVar13 ^ 1U)) ||
                         (*(int *)((long)param_1 + 0x63c) == 1)))))) {
                      *(undefined1 *)(lVar21 + 0x194) = 1;
                      pfVar38 = (float *)((long)param_1 + 0x34c);
                      pfVar34 = (float *)(param_1 + 0x69);
                      if (bVar6) {
                        lVar29 = *(long *)(lVar29 + 0x50);
                        if (lVar29 == 0) goto LAB_02491464;
                        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(param_1 + 0x94))
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        lVar29 = lVar29 + (long)(int)*(uint *)(param_1 + 0x94) * 0x5c;
                        pfVar34 = (float *)(lVar29 + 0x60);
                        pfVar38 = (float *)(lVar29 + 100);
                      }
                      fVar62 = *pfVar34;
                      fVar56 = *pfVar38;
                      fVar79 = *(float *)(param_1 + 0x6b);
                      fVar76 = *(float *)(param_1 + 199);
                      local_1784 = (fVar85 - fVar62) - fVar56;
                      bVar14 = true;
                      if ((fVar79 <= local_1784) && (bVar14 = false, !NAN(fVar79))) {
                        bVar14 = fVar79 == -1.0;
                      }
                      if (!bVar14) {
                        local_1784 = fVar79;
                      }
                      fVar79 = 0.0;
                      if ((char)param_1[0x1d] == '\0') {
                        fVar79 = (float)FUN_026fd474(&local_f0,0);
                        uVar64 = (ulong)*(uint *)(param_1 + 0x9a);
                      }
                      fVar59 = *(float *)((long)param_1 + 0x4c4);
                      fVar80 = *(float *)((long)param_1 + 0x2cc);
                      fVar82 = (float)uVar64;
                      if (uStack_a4 != 0xad) {
                        fVar77 = fVar86;
                      }
                      fVar71 = 0.0;
                      if ((0.0 < fVar82) && (fVar71 = 0.0, *(char *)((long)param_1 + 700) == '\0'))
                      {
                        fVar71 = *(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x99);
                      }
                      fVar71 = (*(float *)(param_1 + 0x96) - (fVar59 - fVar82)) + fVar71;
                      uVar28 = *puVar1;
                      if (fVar75 < fVar71) {
                        if (*(int *)((long)param_1 + 0x2dc) == -1) {
                          *(uint *)((long)param_1 + 0x2dc) = uVar28;
                        }
                        plVar37 = (long *)StringLiteral_302;
                        plVar47 = (long *)System_Threading_Mutex_TypeInfo;
                        uVar67 = DAT_02941c08;
                        if ((char)param_1[0x46] != '\0') {
                          fVar68 = *(float *)(param_1 + 0x58);
                          if (((fVar68 < *(float *)((long)param_1 + 0x2b4)) && (0.0 < fVar82)) &&
                             (*(int *)((long)param_1 + 0x23c) < (int)param_1[0x48])) {
                            fVar70 = *(float *)((long)param_1 + 0x2b4) +
                                     ((fVar88 - fVar71) / (float)(int)param_1[0x94]) / fVar70;
                            if (fVar70 <= fVar68) {
                              fVar70 = fVar68;
                            }
                            goto LAB_0248ea5c;
                          }
                          fVar71 = *(float *)((long)param_1 + 0x1dc);
                          fVar82 = *(float *)(param_1 + 0x49);
                          uVar64 = (ulong)(uint)fVar82;
                          if ((fVar82 < fVar71) &&
                             (*(int *)((long)param_1 + 0x23c) < (int)param_1[0x48])) {
                            fVar70 = (fVar71 - *(float *)(param_1 + 0x47)) * 0.5;
                            if (fVar70 <= DAT_028aa298) {
                              fVar70 = DAT_028aa298;
                            }
                            fVar66 = (fVar71 - fVar70) * 20.0 + 0.5;
                            fVar70 = DAT_02958220;
                            if (fVar66 != INFINITY) {
                              fVar70 = (float)(int)fVar66 / 20.0;
                            }
                            if (fVar70 <= fVar82) {
                              fVar70 = fVar82;
                            }
                            *(float *)((long)param_1 + 0x234) = fVar71;
                            goto LAB_0248e598;
                          }
                        }
                        switch((int)param_1[0x5b]) {
                        case 1:
                          lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
                          if (*(int *)(lVar29 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar29 = *plVar47;
                          }
                          lVar21 = *(long *)(lVar29 + 0xb8);
                          lVar29 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                          if ((*(byte *)(lVar29 + 0x132) & 1) == 0) {
                            lVar29 = FUN_00d5941c(lVar29);
                          }
                          plVar37 = (long *)StringLiteral_302;
                          lVar29 = *(long *)(*(long *)(lVar29 + 0xc0) + 8);
                          if ((*(byte *)(lVar29 + 0x132) & 1) == 0) {
                            lVar29 = FUN_00d5941c();
                          }
                          piVar25 = (int *)thunk_FUN_00d32ed4(lVar21 + 0x11f0,
                                                              *(long *)(lVar29 + 0x80) + 0xa0);
                          if (*piVar25 == 0) {
LAB_0248e4bc:
                            local_b8 = DAT_02941c08;
                            local_d8 = CONCAT44(local_d8._4_4_,0xffffffff);
                            puVar1[0] = 0;
                            puVar1[1] = 0;
                          }
                          else {
                            lVar29 = *plVar47;
                            if (*(int *)(lVar29 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                              lVar29 = *plVar47;
                            }
                            FUN_013b8de4(*(long *)(lVar29 + 0xb8) + 0x11f0,&local_fe0,
                                         *(undefined8 *)
                                          Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                        );
                            memcpy(auStack_500,&local_fe0,0x378);
                            puVar27 = auStack_500;
LAB_0248c8f4:
                            iVar16 = FUN_024d66ec(param_1,puVar27,0);
LAB_0248c900:
                            local_d8 = CONCAT44(local_d8._4_4_,iVar16 + -1);
                            iVar16 = *(int *)((long)param_1 + 0x48c) + -1;
                            *(int *)((long)param_1 + 0x48c) = iVar16;
                            local_b8 = CONCAT44(0x2026,iVar16);
                            local_171c = local_171c + 1;
                          }
                          goto LAB_0248ab98;
                        default:
                          goto switchD_0248c274_caseD_2;
                        case 3:
                          lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
                          if (*(int *)(lVar29 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar29 = *plVar47;
                          }
                          lVar29 = *(long *)(lVar29 + 0xb8) + 0xb00;
LAB_0248c524:
                          plVar37 = (long *)StringLiteral_302;
                          uVar87 = FUN_024d66ec(param_1,lVar29,0);
LAB_0248c530:
                          local_d8 = CONCAT44(local_d8._4_4_,uVar87);
                          break;
                        case 5:
                          if ((uVar28 == 0) || ((int)(uint)local_d8 < 0)) {
                            local_d8 = CONCAT44(local_d8._4_4_,0xffffffff);
                            *puVar1 = 0;
                            local_b8 = uVar67;
                            plVar47 = (long *)System_Threading_Mutex_TypeInfo;
                            plVar37 = (long *)StringLiteral_302;
                          }
                          else {
                            fVar77 = *(float *)(param_1 + 0x98);
                            lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
                            if (*(int *)(lVar29 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                              lVar29 = *plVar47;
                            }
                            uVar87 = FUN_024d66ec(param_1,*(long *)(lVar29 + 0xb8) + 0x410,0);
                            local_d8 = CONCAT44(local_d8._4_4_,uVar87);
                            if (fVar75 < fVar77 - fVar59) break;
                            *(undefined1 *)((long)param_1 + 0x334) = 1;
                            *(undefined4 *)(param_1 + 0x92) = *(undefined4 *)((long)param_1 + 0x48c)
                            ;
                            uVar64 = *(ulong *)(*(long *)(*plVar47 + 0xb8) + 0x15a8);
                            *(float *)(param_1 + 199) = *(float *)((long)param_1 + 0x404) + 0.0;
                            *(undefined4 *)(param_1 + 0x99) = 0;
                            lVar29 = NEON_rev64(uVar64,4);
                            param_1[0x98] = lVar29;
                            *(undefined4 *)(param_1 + 0x9a) = 0;
                            *(undefined8 *)((long)param_1 + 0x4ac) = 0;
                            *(int *)(param_1 + 0x94) = (int)param_1[0x94] + 1;
                            *(int *)(param_1 + 0x95) = (int)param_1[0x95] + 1;
                          }
                          goto LAB_0248ab98;
                        case 6:
                          lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
                          if (*(int *)(lVar29 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar29 = *plVar47;
                          }
                          uVar87 = FUN_024d66ec(param_1,*(long *)(lVar29 + 0xb8) + 0xb00,0);
                          plVar37 = (long *)StringLiteral_302;
                          local_d8 = CONCAT44(local_d8._4_4_,uVar87);
                          lVar29 = param_1[0x5c];
                          if (*(int *)(*(long *)
                                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                      + 0xe0) == 0) {
                            thunk_FUN_00d32864(*(long *)
                                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                              );
                          }
                          uVar23 = FUN_02681b9c(lVar29,0,0);
                          if ((uVar23 & 1) != 0) {
                            plVar48 = (long *)param_1[0x5c];
                            uVar67 = (**(code **)(*param_1 + 0x548))
                                               (param_1,*(undefined8 *)(*param_1 + 0x550));
                            if (plVar48 == (long *)0x0) goto LAB_02491464;
                            (**(code **)(*plVar48 + 0x558))
                                      (plVar48,uVar67,*(undefined8 *)(*plVar48 + 0x560));
                            lVar29 = param_1[0x5c];
                            if (lVar29 == 0) goto LAB_02491464;
                            *(int *)(lVar29 + 0x3f8) = (int)param_1[0x7f];
                            FUN_024c910c(lVar29,*(undefined4 *)((long)param_1 + 0x48c),0);
                            plVar48 = (long *)param_1[0x5c];
                            if (plVar48 == (long *)0x0) goto LAB_02491464;
                            (**(code **)(*plVar48 + 0x7d8))
                                      (plVar48,0,0,*(undefined8 *)(*plVar48 + 0x7e0));
                            *(undefined1 *)(param_1 + 0x5e) = 1;
                          }
                        }
                        local_b8 = CONCAT44(3,uVar28);
                        goto LAB_0248ab98;
                      }
switchD_0248c274_caseD_2:
                      plVar47 = (long *)System_Threading_Mutex_TypeInfo;
                      fVar82 = 1.0 - fVar80;
                      uVar64 = (ulong)(uint)fVar82;
                      fVar79 = ABS(fVar76) + fVar79 * fVar82 * fVar77;
                      fVar77 = _DAT_0294c6e8;
                      if ((uVar50 & 0x18) == 0) {
                        fVar77 = 1.0;
                      }
                      if (fVar77 * local_1784 < fVar79) {
                        if (((char)param_1[0x5a] == '\0') || (uVar28 == *(uint *)(param_1 + 0x92)))
                        {
                          if (((char)param_1[0x46] != '\0') &&
                             (*(int *)((long)param_1 + 0x23c) < (int)param_1[0x48])) {
                            fVar76 = *(float *)(param_1 + 0x59) / 100.0;
                            if (fVar80 < fVar76) {
                              fVar70 = fVar79 / fVar82;
                              if (fVar80 <= 0.0) {
                                fVar70 = fVar79;
                              }
                              fVar80 = fVar80 + (fVar79 - fVar77 * (local_1784 + DAT_02958218)) /
                                                fVar70;
                              goto LAB_0249154c;
                            }
                            fVar80 = *(float *)((long)param_1 + 0x1dc);
                            uVar64 = (ulong)(uint)fVar80;
                            fVar76 = *(float *)(param_1 + 0x49);
                            if (fVar80 <= fVar76) goto LAB_0248c3dc;
LAB_024914c0:
                            fVar70 = (fVar80 - *(float *)(param_1 + 0x47)) * 0.5;
                            if (fVar70 <= DAT_028aa298) {
                              fVar70 = DAT_028aa298;
                            }
                            *(float *)((long)param_1 + 0x234) = fVar80;
                            fVar66 = (fVar80 - fVar70) * 20.0 + 0.5;
                            fVar70 = DAT_02958220;
                            if (fVar66 != INFINITY) {
                              fVar70 = (float)(int)fVar66 / 20.0;
                            }
                            if (fVar70 <= fVar76) {
                              fVar70 = fVar76;
                            }
                            goto LAB_0248e598;
                          }
LAB_0248c3dc:
                          iVar16 = (int)param_1[0x5b];
                          if (iVar16 == 1) {
                            lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
                            if (*(int *)(lVar29 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                              lVar29 = *plVar47;
                            }
                            plVar37 = (long *)StringLiteral_302;
                            lVar21 = *(long *)(lVar29 + 0xb8);
                            lVar29 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                            if ((*(byte *)(lVar29 + 0x132) & 1) == 0) {
                              lVar29 = FUN_00d5941c(lVar29);
                            }
                            lVar29 = *(long *)(*(long *)(lVar29 + 0xc0) + 8);
                            if ((*(byte *)(lVar29 + 0x132) & 1) == 0) {
                              lVar29 = FUN_00d5941c();
                            }
                            piVar25 = (int *)thunk_FUN_00d32ed4(lVar21 + 0x11f0,
                                                                *(long *)(lVar29 + 0x80) + 0xa0);
                            if (*piVar25 != 0) {
                              lVar29 = *plVar47;
                              if (*(int *)(lVar29 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                                lVar29 = *plVar47;
                              }
                              FUN_013b8de4(*(long *)(lVar29 + 0xb8) + 0x11f0,&local_fe0,
                                           *(undefined8 *)
                                            Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                          );
                              memcpy(auStack_bf0,&local_fe0,0x378);
                              puVar27 = auStack_bf0;
                              goto LAB_0248c8f4;
                            }
                            goto LAB_0248e4bc;
                          }
                          if (iVar16 != 6) {
                            if (iVar16 == 3) {
                              lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
                              if (*(int *)(lVar29 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                                lVar29 = *plVar47;
                              }
                              lVar29 = *(long *)(lVar29 + 0xb8) + 0x98;
                              goto LAB_0248c524;
                            }
                            goto LAB_0248cf18;
                          }
                          lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
                          if (*(int *)(lVar29 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar29 = *plVar47;
                          }
                          plVar37 = (long *)StringLiteral_302;
                          uVar87 = FUN_024d66ec(param_1,*(long *)(lVar29 + 0xb8) + 0x98,0);
                          local_d8 = CONCAT44(local_d8._4_4_,uVar87);
                          lVar29 = param_1[0x5c];
                          if (*(int *)(*(long *)
                                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                      + 0xe0) == 0) {
                            thunk_FUN_00d32864(*(long *)
                                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                              );
                          }
                          uVar23 = FUN_02681b9c(lVar29,0,0);
                          if ((uVar23 & 1) != 0) {
                            plVar48 = (long *)param_1[0x5c];
                            uVar67 = (**(code **)(*param_1 + 0x548))
                                               (param_1,*(undefined8 *)(*param_1 + 0x550));
                            if (plVar48 == (long *)0x0) goto LAB_02491464;
                            (**(code **)(*plVar48 + 0x558))
                                      (plVar48,uVar67,*(undefined8 *)(*plVar48 + 0x560));
                            lVar29 = param_1[0x5c];
                            if (lVar29 == 0) goto LAB_02491464;
                            *(int *)(lVar29 + 0x3f8) = (int)param_1[0x7f];
                            FUN_024c910c(lVar29,*(undefined4 *)((long)param_1 + 0x48c),0);
                            plVar48 = (long *)param_1[0x5c];
                            if (plVar48 == (long *)0x0) goto LAB_02491464;
                            (**(code **)(*plVar48 + 0x7d8))
                                      (plVar48,0,0,*(undefined8 *)(*plVar48 + 0x7e0));
                            *(undefined1 *)(param_1 + 0x5e) = 1;
                          }
LAB_0248ca1c:
                          local_b8 = CONCAT44(3,*puVar1);
                        }
                        else {
                          lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
                          if (*(int *)(lVar29 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar29 = *plVar47;
                          }
                          iVar16 = FUN_024d66ec(param_1,*(long *)(lVar29 + 0xb8) + 0x98,0);
                          local_d8 = CONCAT44(local_d8._4_4_,iVar16);
                          if (*(float *)(param_1 + 0x57) == DAT_02958224) {
                            lVar29 = *plVar2;
                            if ((lVar29 == 0) || (lVar21 = *(long *)(lVar29 + 0x38), lVar21 == 0))
                            goto LAB_02491464;
                            if (*(uint *)(lVar21 + 0x18) <= *puVar1)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            fVar76 = *(float *)(param_1 + 0x9a);
                            fVar80 = 0.0;
                            if ((0.0 < fVar76) &&
                               (fVar80 = 0.0, *(char *)((long)param_1 + 700) == '\0')) {
                              fVar80 = *(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x99);
                            }
                            fVar80 = fVar55 * *(float *)(param_1 + 0x56) +
                                     *(float *)(lVar21 + (long)(int)*puVar1 * 0x178 + 0x154) +
                                     (fVar80 - *(float *)((long)param_1 + 0x4c4)) +
                                     fVar70 * (fVar52 + *(float *)((long)param_1 + 0x2b4));
                          }
                          else {
                            lVar29 = param_1[0x6c];
                            *(undefined1 *)((long)param_1 + 700) = 1;
                            if (lVar29 == 0) goto LAB_02491464;
                            fVar76 = *(float *)(param_1 + 0x9a);
                            fVar80 = *(float *)(param_1 + 0x57) +
                                     fVar55 * *(float *)(param_1 + 0x56);
                          }
                          puVar9 = System_Threading_Mutex_TypeInfo;
                          lVar29 = *(long *)(lVar29 + 0x38);
                          if (lVar29 == 0) goto LAB_02491464;
                          uVar40 = *(uint *)((long)param_1 + 0x48c);
                          if ((*(uint *)(lVar29 + 0x18) <= uVar40) ||
                             (uVar42 = uVar40 - 1, *(uint *)(lVar29 + 0x18) <= uVar42))
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                          ;
                          uVar64 = (ulong)(uint)(fVar80 + *(float *)(param_1 + 0x96));
                          fVar82 = (fVar80 + *(float *)(param_1 + 0x96) + fVar76) -
                                   *(float *)(lVar29 + (long)(int)uVar40 * 0x178 + 0x158);
                          if ((bVar13 || *(short *)(lVar29 + (long)(int)uVar42 * 0x178 + 0x20) !=
                                         0xad) || ((fVar75 <= fVar82 && ((int)param_1[0x5b] != 0))))
                          {
                            if (*(short *)(lVar29 + (long)(int)uVar40 * 0x178 + 0x20) == 0xad) {
                              bVar13 = true;
                              plVar47 = (long *)System_Threading_Mutex_TypeInfo;
                              plVar37 = (long *)StringLiteral_302;
                            }
                            else {
                              if ((bVar8 & *(byte *)(param_1 + 0x46)) != 0) {
                                fVar80 = *(float *)((long)param_1 + 0x2cc);
                                fVar76 = *(float *)(param_1 + 0x59) / 100.0;
                                if ((fVar76 <= fVar80) ||
                                   ((int)param_1[0x48] <= *(int *)((long)param_1 + 0x23c))) {
                                  fVar80 = *(float *)((long)param_1 + 0x1dc);
                                  uVar64 = (ulong)(uint)fVar80;
                                  fVar76 = *(float *)(param_1 + 0x49);
                                  if ((fVar76 < fVar80) &&
                                     (*(int *)((long)param_1 + 0x23c) < (int)param_1[0x48]))
                                  goto LAB_024914c0;
                                  goto LAB_0248cc70;
                                }
LAB_0249155c:
                                fVar70 = fVar79;
                                if (0.0 < fVar80) {
                                  fVar70 = fVar79 / (1.0 - fVar80);
                                }
                                fVar80 = fVar80 + (fVar79 - fVar77 * (local_1784 + DAT_02958218)) /
                                                  fVar70;
LAB_0249154c:
                                if (fVar76 <= fVar80) {
                                  fVar80 = fVar76;
                                }
                                *(float *)((long)param_1 + 0x2cc) = fVar80;
                                return;
                              }
LAB_0248cc70:
                              lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
                              if (*(int *)(lVar29 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                                lVar29 = *(long *)puVar9;
                              }
                              lVar21 = *(long *)(lVar29 + 0xb8);
                              iVar16 = *(int *)(lVar21 + 0xe78);
                              if ((((float)iVar16 != local_182c) && (iVar16 != -1)) && (bVar8 == 1))
                              {
                                if (*(int *)(lVar29 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                  lVar21 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8
                                                    );
                                }
                                iVar18 = FUN_024d66ec(param_1,lVar21 + 0xe78,0);
                                local_d8 = CONCAT44(local_d8._4_4_,iVar18);
                                if ((param_1[0x6c] == 0) ||
                                   (lVar29 = *(long *)(param_1[0x6c] + 0x38), lVar29 == 0))
                                goto LAB_02491464;
                                uVar40 = *puVar1 - 1;
                                if (*(uint *)(lVar29 + 0x18) <= uVar40)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                                ;
                                local_182c = (float)iVar16;
                                if (*(short *)(lVar29 + (long)(int)uVar40 * 0x178 + 0x20) == 0xad) {
                                  bVar13 = false;
                                  local_b8 = CONCAT44(0x2d,uVar40);
                                  local_d8 = CONCAT44(local_d8._4_4_,iVar18 + -1);
                                  *puVar1 = uVar40;
                                  plVar47 = (long *)System_Threading_Mutex_TypeInfo;
                                  plVar37 = (long *)StringLiteral_302;
                                  goto LAB_0248ab98;
                                }
                              }
                              if (fVar75 < fVar82) {
                                if (*(int *)((long)param_1 + 0x2dc) == -1) {
                                  *(undefined4 *)((long)param_1 + 0x2dc) =
                                       *(undefined4 *)((long)param_1 + 0x48c);
                                }
                                plVar37 = (long *)StringLiteral_302;
                                plVar47 = (long *)System_Threading_Mutex_TypeInfo;
                                if ((char)param_1[0x46] != '\0') {
                                  fVar76 = *(float *)(param_1 + 0x58);
                                  if ((fVar76 < *(float *)((long)param_1 + 0x2b4)) &&
                                     (*(int *)((long)param_1 + 0x23c) < (int)param_1[0x48])) {
                                    fVar70 = *(float *)((long)param_1 + 0x2b4) +
                                             ((fVar88 - fVar82) / (float)((int)param_1[0x94] + 1)) /
                                             fVar70;
                                    if (fVar70 <= fVar76) {
                                      fVar70 = fVar76;
                                    }
LAB_0248ea5c:
                                    *(float *)((long)param_1 + 0x2b4) = fVar70;
                                    return;
                                  }
                                  fVar80 = *(float *)((long)param_1 + 0x2cc);
                                  fVar76 = *(float *)(param_1 + 0x59) / 100.0;
                                  if ((fVar80 < fVar76) &&
                                     (*(int *)((long)param_1 + 0x23c) < (int)param_1[0x48]))
                                  goto LAB_0249155c;
                                  fVar80 = *(float *)((long)param_1 + 0x1dc);
                                  uVar64 = (ulong)(uint)fVar80;
                                  fVar76 = *(float *)(param_1 + 0x49);
                                  if ((fVar76 < fVar80) &&
                                     (*(int *)((long)param_1 + 0x23c) < (int)param_1[0x48]))
                                  goto LAB_024914c0;
                                }
                                switch((int)param_1[0x5b]) {
                                case 0:
                                case 2:
                                case 4:
                                  uVar64 = uVar20;
                                  FUN_024d7014(fVar70,uVar20,fVar55,
                                               *(undefined4 *)((long)param_1 + 0x2f4),local_179c,
                                               local_1794,local_1784,fVar52,param_1,
                                               local_d8 & 0xffffffff,local_ac,&local_a8,0);
                                  break;
                                case 1:
                                  lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
                                  if (*(int *)(lVar29 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                    lVar29 = *plVar47;
                                  }
                                  lVar21 = *(long *)(lVar29 + 0xb8);
                                  lVar29 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                                  if ((*(byte *)(lVar29 + 0x132) & 1) == 0) {
                                    lVar29 = FUN_00d5941c(lVar29);
                                  }
                                  lVar29 = *(long *)(*(long *)(lVar29 + 0xc0) + 8);
                                  if ((*(byte *)(lVar29 + 0x132) & 1) == 0) {
                                    lVar29 = FUN_00d5941c();
                                  }
                                  piVar25 = (int *)thunk_FUN_00d32ed4(lVar21 + 0x11f0,
                                                                      *(long *)(lVar29 + 0x80) +
                                                                      0xa0);
                                  if (*piVar25 == 0) {
                                    bVar13 = false;
                                    goto LAB_0248e4bc;
                                  }
                                  lVar29 = *plVar47;
                                  if (*(int *)(lVar29 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                    lVar29 = *plVar47;
                                  }
                                  FUN_013b8de4(*(long *)(lVar29 + 0xb8) + 0x11f0,&local_fe0,
                                               *(undefined8 *)
                                                Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                              );
                                  memcpy(auStack_878,&local_fe0,0x378);
                                  iVar16 = FUN_024d66ec(param_1,auStack_878,0);
                                  bVar13 = false;
                                  goto LAB_0248c900;
                                case 3:
                                  lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
                                  if (*(int *)(lVar29 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                    lVar29 = *plVar47;
                                  }
                                  uVar87 = FUN_024d66ec(param_1,*(long *)(lVar29 + 0xb8) + 0xb00,0);
                                  bVar13 = false;
                                  goto LAB_0248c530;
                                case 5:
                                  *(undefined1 *)((long)param_1 + 0x334) = 1;
                                  uVar64 = uVar20;
                                  FUN_024d7014(fVar70,uVar20,fVar55,
                                               *(undefined4 *)((long)param_1 + 0x2f4),local_179c,
                                               local_1794,local_1784,fVar52,param_1,
                                               local_d8 & 0xffffffff,local_ac,&local_a8,0);
                                  *(undefined4 *)(param_1 + 0x99) = 0;
                                  *(undefined4 *)(param_1 + 0x9a) = 0;
                                  *(undefined8 *)((long)param_1 + 0x4ac) = 0;
                                  *(int *)(param_1 + 0x95) = (int)param_1[0x95] + 1;
                                  break;
                                case 6:
                                  lVar29 = param_1[0x5c];
                                  if (*(int *)(*(long *)
                                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                              + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar23 = FUN_02681b9c(lVar29,0,0);
                                  if ((uVar23 & 1) != 0) {
                                    plVar48 = (long *)param_1[0x5c];
                                    uVar67 = (**(code **)(*param_1 + 0x548))
                                                       (param_1,*(undefined8 *)(*param_1 + 0x550));
                                    if (plVar48 == (long *)0x0) goto LAB_02491464;
                                    (**(code **)(*plVar48 + 0x558))
                                              (plVar48,uVar67,*(undefined8 *)(*plVar48 + 0x560));
                                    lVar29 = param_1[0x5c];
                                    if (lVar29 == 0) goto LAB_02491464;
                                    *(int *)(lVar29 + 0x3f8) = (int)param_1[0x7f];
                                    FUN_024c910c(lVar29,*(undefined4 *)((long)param_1 + 0x48c),0);
                                    plVar48 = (long *)param_1[0x5c];
                                    if (plVar48 == (long *)0x0) goto LAB_02491464;
                                    (**(code **)(*plVar48 + 0x7d8))
                                              (plVar48,0,0,*(undefined8 *)(*plVar48 + 0x7e0));
                                    *(undefined1 *)(param_1 + 0x5e) = 1;
                                  }
                                  bVar13 = false;
                                  goto LAB_0248ca1c;
                                default:
                                  bVar13 = false;
                                  goto LAB_0248cf18;
                                }
                                bVar13 = false;
                                bVar8 = 1;
                                bVar7 = true;
                                plVar47 = (long *)System_Threading_Mutex_TypeInfo;
                                plVar37 = (long *)StringLiteral_302;
                              }
                              else {
                                uVar64 = uVar20;
                                FUN_024d7014(fVar70,uVar20,fVar55,
                                             *(undefined4 *)((long)param_1 + 0x2f4),local_179c,
                                             local_1794,local_1784,fVar52,param_1,
                                             local_d8 & 0xffffffff,local_ac,&local_a8,0);
                                bVar8 = 1;
                                bVar13 = false;
                                bVar7 = true;
                                plVar47 = (long *)System_Threading_Mutex_TypeInfo;
                                plVar37 = (long *)StringLiteral_302;
                              }
                            }
                          }
                          else {
                            bVar13 = false;
                            local_b8 = CONCAT44(0x2d,uVar42);
                            local_d8 = CONCAT44(local_d8._4_4_,iVar16 + -1);
                            *puVar1 = uVar42;
                            plVar47 = (long *)System_Threading_Mutex_TypeInfo;
                            plVar37 = (long *)StringLiteral_302;
                          }
                        }
                        goto LAB_0248ab98;
                      }
LAB_0248cf18:
                      if (uStack_a4 != 0xad) {
                        if (uStack_a4 == 9) {
                          lVar29 = *plVar2;
                          if ((lVar29 != 0) && (lVar21 = *(long *)(lVar29 + 0x38), lVar21 != 0)) {
                            uVar28 = *puVar1;
                            if (*(uint *)(lVar21 + 0x18) <= uVar28)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            *(undefined1 *)(lVar21 + (long)(int)uVar28 * 0x178 + 0x194) = 0;
                            *(uint *)((long)param_1 + 0x49c) = uVar28;
                            lVar21 = *(long *)(lVar29 + 0x50);
                            if (lVar21 != 0) {
                              if (*(uint *)(param_1 + 0x94) < *(uint *)(lVar21 + 0x18)) {
                                lVar21 = lVar21 + (long)(int)*(uint *)(param_1 + 0x94) * 0x5c;
                                *(int *)(lVar21 + 0x2c) = *(int *)(lVar21 + 0x2c) + 1;
                                goto LAB_0248cf8c;
                              }
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                            }
                          }
                        }
                        else {
                          lVar29 = 0x4e4;
                          if (*(char *)((long)param_1 + 0x1cc) != '\0') {
                            lVar29 = 0x13c;
                          }
                          if (*(int *)((long)param_1 + 0x63c) == 1) {
                            (**(code **)(*param_1 + 0x8c8))
                                      (param_1,*(undefined4 *)((long)param_1 + lVar29),
                                       *(undefined8 *)(*param_1 + 0x8d0));
                          }
                          else if (*(int *)((long)param_1 + 0x63c) == 0) {
                            (**(code **)(*param_1 + 0x8b8))
                                      (local_172c,fVar60,param_1,
                                       *(undefined4 *)((long)param_1 + lVar29),
                                       *(undefined8 *)(*param_1 + 0x8c0));
                          }
                          if (bVar7) {
                            *(uint *)((long)param_1 + 0x494) = *puVar1;
                          }
                          *(uint *)((long)param_1 + 0x49c) = *puVar1;
                          *(int *)((long)param_1 + 0x4a4) = *(int *)((long)param_1 + 0x4a4) + 1;
                          if ((param_1[0x6c] != 0) &&
                             (lVar29 = *(long *)(param_1[0x6c] + 0x50), lVar29 != 0)) {
                            if (*(uint *)(param_1 + 0x94) < *(uint *)(lVar29 + 0x18)) {
                              lVar29 = lVar29 + (long)(int)*(uint *)(param_1 + 0x94) * 0x5c;
                              bVar7 = false;
                              *(float *)(lVar29 + 0x60) = fVar62;
                              *(float *)(lVar29 + 100) = fVar56;
                              goto FUN_0248d088;
                            }
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                          }
                        }
                        goto LAB_02491464;
                      }
                      if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 == 0))
                      goto LAB_02491464;
                      if (*(uint *)(lVar29 + 0x18) <= *puVar1)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      *(undefined1 *)(lVar29 + (long)(int)*puVar1 * 0x178 + 0x194) = 0;
                    }
                    else {
                      if (((uStack_a4 & 0xfffffffe) == 10) && ((int)param_1[0x5b] == 6)) {
                        fVar79 = (float)uVar64;
                        fVar77 = 0.0;
                        if ((0.0 < fVar79) && (fVar77 = 0.0, *(char *)((long)param_1 + 700) == '\0')
                           ) {
                          fVar77 = *(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x99);
                        }
                        uVar64 = (ulong)(uint)fVar75;
                        if (fVar75 < (*(float *)(param_1 + 0x96) -
                                     (*(float *)((long)param_1 + 0x4c4) - fVar79)) + fVar77) {
                          if (*(int *)((long)param_1 + 0x2dc) == -1) {
                            *(uint *)((long)param_1 + 0x2dc) = uVar40;
                          }
                          plVar37 = (long *)StringLiteral_302;
                          plVar47 = (long *)System_Threading_Mutex_TypeInfo;
                          lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
                          if (*(int *)(lVar29 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar29 = *plVar47;
                          }
                          uVar87 = FUN_024d66ec(param_1,*(long *)(lVar29 + 0xb8) + 0xb00,0);
                          local_d8 = CONCAT44(local_d8._4_4_,uVar87);
                          lVar29 = param_1[0x5c];
                          if (*(int *)(*(long *)
                                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                      + 0xe0) == 0) {
                            thunk_FUN_00d32864(*(long *)
                                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                              );
                          }
                          uVar23 = FUN_02681b9c(lVar29,0,0);
                          if ((uVar23 & 1) != 0) {
                            plVar48 = (long *)param_1[0x5c];
                            uVar67 = (**(code **)(*param_1 + 0x548))
                                               (param_1,*(undefined8 *)(*param_1 + 0x550));
                            if (plVar48 == (long *)0x0) goto LAB_02491464;
                            (**(code **)(*plVar48 + 0x558))
                                      (plVar48,uVar67,*(undefined8 *)(*plVar48 + 0x560));
                            lVar29 = param_1[0x5c];
                            if (lVar29 == 0) goto LAB_02491464;
                            *(int *)(lVar29 + 0x3f8) = (int)param_1[0x7f];
                            FUN_024c910c(lVar29,*(undefined4 *)((long)param_1 + 0x48c),0);
                            plVar48 = (long *)param_1[0x5c];
                            if (plVar48 == (long *)0x0) goto LAB_02491464;
                            (**(code **)(*plVar48 + 0x7d8))
                                      (plVar48,0,0,*(undefined8 *)(*plVar48 + 0x7e0));
                            *(undefined1 *)(param_1 + 0x5e) = 1;
                          }
                          local_b8 = CONCAT44(3,uVar40);
                          goto LAB_0248ab98;
                        }
                      }
                      if ((((uStack_a4 - 0x2007 < 0x23) &&
                           ((1L << ((ulong)(uStack_a4 - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
                          (uStack_a4 - 10 < 2)) || (uStack_a4 == 0xa0)) {
UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs:
                        if (((uStack_a4 != 0xad) && (uStack_a4 != 0x200b)) && (uStack_a4 != 0x2060))
                        {
                          lVar29 = *plVar2;
                          if ((lVar29 == 0) || (lVar21 = *(long *)(lVar29 + 0x50), lVar21 == 0))
                          goto LAB_02491464;
                          if (*(uint *)(lVar21 + 0x18) <= *(uint *)(param_1 + 0x94))
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                          ;
                          lVar21 = lVar21 + (long)(int)*(uint *)(param_1 + 0x94) * 0x5c;
                          *(int *)(lVar21 + 0x2c) = *(int *)(lVar21 + 0x2c) + 1;
                          *(int *)(lVar29 + 0x20) = *(int *)(lVar29 + 0x20) + 1;
                        }
                      }
                      else {
                        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0
                           ) {
                          thunk_FUN_00d32864();
                        }
                        uVar20 = FUN_016fa418(uVar28,0);
                        if ((uVar20 & 1) != 0)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs
                        ;
                      }
                      if (uStack_a4 == 0xa0) {
                        if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x50), lVar29 == 0))
                        goto LAB_02491464;
                        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(param_1 + 0x94))
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        lVar29 = lVar29 + (long)(int)*(uint *)(param_1 + 0x94) * 0x5c;
LAB_0248cf8c:
                        *(int *)(lVar29 + 0x20) = *(int *)(lVar29 + 0x20) + 1;
                      }
                    }
FUN_0248d088:
                    if (((int)param_1[0x5b] == 1) && ((uStack_a4 == 0x2d || (!bVar6)))) {
                      if (param_1[0xca] == 0) goto LAB_02491464;
                      fVar77 = *(float *)(param_1 + 0x3c);
                      iVar16 = FUN_026fd110(param_1[0xca] + 0x50,0);
                      if (param_1[0xca] == 0) goto LAB_02491464;
                      fVar62 = (float)FUN_026fd120(param_1[0xca] + 0x50,0);
                      lVar29 = param_1[0xc9];
                      fVar79 = fVar66;
                      if (*(char *)((long)param_1 + 0x2fd) != '\0') {
                        fVar79 = 1.0;
                      }
                      if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto LAB_02491464;
                      fVar76 = *(float *)((long)param_1 + 0x3fc);
                      fVar82 = *(float *)(lVar29 + 0x2c);
                      fVar56 = (float)FUN_026fd668(*(long *)(lVar29 + 0x20),0);
                      fVar80 = *(float *)(param_1 + 0x69);
                      fVar56 = fVar76 * (fVar77 / (float)iVar16) * fVar62 * fVar79 * fVar82 * fVar56
                      ;
                      fVar77 = *(float *)((long)param_1 + 0x34c);
                      if ((uStack_a4 == 10) &&
                         (*(int *)((long)param_1 + 0x48c) != (int)param_1[0x92])) {
                        if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 == 0))
                        goto LAB_02491464;
                        uVar28 = *(int *)((long)param_1 + 0x48c) - 1;
                        if (*(uint *)(lVar29 + 0x18) <= uVar28)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        if (param_1[0xca] == 0) goto LAB_02491464;
                        fVar79 = *(float *)(lVar29 + (long)(int)uVar28 * 0x178 + 0x60);
                        iVar16 = FUN_026fd110(param_1[0xca] + 0x50,0);
                        if (param_1[0xca] == 0) goto LAB_02491464;
                        fVar76 = (float)FUN_026fd120(param_1[0xca] + 0x50,0);
                        lVar29 = param_1[0xc9];
                        fVar62 = fVar66;
                        if (*(char *)((long)param_1 + 0x2fd) != '\0') {
                          fVar62 = 1.0;
                        }
                        if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto LAB_02491464;
                        fVar82 = *(float *)((long)param_1 + 0x3fc);
                        fVar59 = *(float *)(lVar29 + 0x2c);
                        fVar56 = (float)FUN_026fd668(*(long *)(lVar29 + 0x20),0);
                        if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x50), lVar29 == 0))
                        goto LAB_02491464;
                        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(param_1 + 0x94))
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        lVar29 = lVar29 + (long)(int)*(uint *)(param_1 + 0x94) * 0x5c;
                        fVar80 = *(float *)(lVar29 + 0x60);
                        fVar77 = *(float *)(lVar29 + 100);
                        fVar56 = fVar82 * (fVar79 / (float)iVar16) * fVar76 * fVar62 * fVar59 *
                                 fVar56;
                      }
                      fVar82 = *(float *)(param_1 + 0x9a);
                      fVar62 = *(float *)(param_1 + 0x96);
                      fVar59 = *(float *)((long)param_1 + 0x4c4);
                      fVar79 = 0.0;
                      fVar76 = 0.0;
                      if ((0.0 < fVar82) && (fVar76 = 0.0, *(char *)((long)param_1 + 700) == '\0'))
                      {
                        fVar76 = *(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x99);
                      }
                      fVar60 = *(float *)(param_1 + 199);
                      if ((char)param_1[0x1d] == '\0') {
                        if ((param_1[0xc9] == 0) ||
                           (lVar29 = *(long *)(param_1[0xc9] + 0x20), lVar29 == 0))
                        goto LAB_02491464;
                        FUN_026fd62c(&local_fe0,lVar29,0);
                        uStack_178 = uStack_fd8;
                        local_180 = local_fe0;
                        local_170 = (undefined4)local_fd0;
                        fVar79 = (float)FUN_026fd474(&local_180,0);
                      }
                      puVar9 = System_Threading_Mutex_TypeInfo;
                      fVar71 = *(float *)(param_1 + 0x6b);
                      fVar77 = (fVar85 - fVar80) - fVar77;
                      bVar14 = true;
                      if ((fVar71 <= fVar77) && (bVar14 = false, !NAN(fVar71))) {
                        bVar14 = fVar71 == -1.0;
                      }
                      if (!bVar14) {
                        fVar77 = fVar71;
                      }
                      fVar80 = _DAT_0294c6e8;
                      if ((uVar50 & 0x18) == 0) {
                        fVar80 = 1.0;
                      }
                      if (((fVar62 - (fVar59 - fVar82)) + fVar76 < fVar75) &&
                         (ABS(fVar60) + fVar56 * fVar79 * (1.0 - *(float *)((long)param_1 + 0x2cc))
                          < fVar80 * fVar77)) {
                        lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
                        if (*(int *)(lVar29 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                          lVar29 = *(long *)puVar9;
                        }
                        FUN_024d69d4(param_1,*(long *)(lVar29 + 0xb8) + 0x788,local_d8 & 0xffffffff,
                                     *(undefined4 *)((long)param_1 + 0x48c),0);
                        lVar29 = *(long *)(*(long *)puVar9 + 0xb8);
                        memcpy(auStack_1358,(void *)(lVar29 + 0x788),0x378);
                        FUN_013b86dc(lVar29 + 0x11f0,auStack_1358,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_List<TextStyle>_get_Item__);
                      }
                    }
                    uVar20 = (ulong)(uint)fVar86;
                    fVar77 = 1.0;
                    lVar29 = *plVar2;
                    if ((lVar29 == 0) || (lVar21 = *(long *)(lVar29 + 0x38), lVar21 == 0))
                    goto LAB_02491464;
                    if (*(uint *)(lVar21 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    uVar28 = *(uint *)(param_1 + 0x94);
                    lVar21 = lVar21 + (long)(int)*puVar1 * 0x178;
                    *(uint *)(lVar21 + 100) = uVar28;
                    *(int *)(lVar21 + 0x68) = (int)param_1[0x95];
                    if ((bVar6) ||
                       ((uStack_a4 < 0xe && ((1 << (ulong)(uStack_a4 & 0x1f) & 0x2c00U) != 0)))) {
                      lVar29 = *(long *)(lVar29 + 0x50);
                      if (lVar29 == 0) goto LAB_02491464;
                      if (*(uint *)(lVar29 + 0x18) <= uVar28)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      if (*(int *)(lVar29 + (long)(int)uVar28 * 0x5c + 0x24) == 1)
                      goto LAB_0248d42c;
                    }
                    else {
                      lVar29 = *(long *)(lVar29 + 0x50);
                      if (lVar29 == 0) goto LAB_02491464;
LAB_0248d42c:
                      if (*(uint *)(lVar29 + 0x18) <= uVar28)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      *(int *)(lVar29 + (long)(int)uVar28 * 0x5c + 0x68) = (int)param_1[0x4e];
                    }
                    if (uStack_a4 == 9) {
                      if (*plVar51 == 0) goto LAB_02491464;
                      fVar77 = (float)FUN_026fd208(*plVar51 + 0x50,0);
                      if (*plVar51 == 0) goto LAB_02491464;
                      fVar56 = *(float *)(param_1 + 199);
                      fVar79 = (float)NEON_ucvtf((uint)*(byte *)(*plVar51 + 0x1b9));
                      fVar77 = fVar86 * fVar77 * fVar79;
                      fVar62 = fVar77 * (float)(int)(fVar56 / fVar77);
                      uVar64 = (ulong)(uint)fVar62;
                      if (fVar62 <= fVar56) {
                        fVar62 = fVar56 + fVar77;
                      }
LAB_0248d614:
                      *(float *)(param_1 + 199) = fVar62;
                    }
                    else if (*(float *)(param_1 + 0x55) == 0.0) {
                      if ((char)param_1[0x1d] == '\0') {
                        if (*(char *)((long)param_1 + 0x46c) != '\0') {
                          fVar77 = (float)thunk_FUN_026935f0(lVar46,0);
                        }
                        fVar62 = *(float *)(param_1 + 199);
                        fVar56 = (float)FUN_026fd474(&local_f0,0);
                        if (param_1[0x1f] != 0) {
                          fVar79 = 1.0 - *(float *)((long)param_1 + 0x2cc);
                          fVar62 = fVar62 + fVar79 * (*(float *)((long)param_1 + 0x2a4) +
                                                     fVar86 * (fVar57 + fVar77 * fVar56) +
                                                     fVar55 * (local_179c +
                                                              local_1794 +
                                                              *(float *)(param_1[0x1f] + 0x1ac)));
                          *(float *)(param_1 + 199) = fVar62;
                          goto joined_r0x0248d568;
                        }
                        goto LAB_02491464;
                      }
                      if (*plVar51 == 0) goto LAB_02491464;
                      fVar62 = (1.0 - *(float *)((long)param_1 + 0x2cc)) *
                               (*(float *)((long)param_1 + 0x2a4) +
                               fVar86 * fVar57 +
                               fVar55 * (local_179c + local_1794 + *(float *)(*plVar51 + 0x1ac)));
                      uVar64 = (ulong)(uint)fVar62;
                      fVar62 = *(float *)(param_1 + 199) - fVar62;
                      *(float *)(param_1 + 199) = fVar62;
                      if ((uVar17 != 0) || (uStack_a4 == 0x200b)) {
                        fVar77 = fVar55 * *(float *)((long)param_1 + 0x2ac);
                        uVar64 = (ulong)(uint)fVar77;
                        fVar62 = fVar62 - fVar77;
                        goto LAB_0248d614;
                      }
                    }
                    else {
                      if (*plVar51 == 0) goto LAB_02491464;
                      fVar79 = *(float *)(param_1 + 199);
                      fVar62 = fVar79 + (1.0 - *(float *)((long)param_1 + 0x2cc)) *
                                        (*(float *)((long)param_1 + 0x2a4) +
                                        (*(float *)(param_1 + 0x55) - fVar58) +
                                        fVar55 * (local_1794 + *(float *)(*plVar51 + 0x1ac)));
                      *(float *)(param_1 + 199) = fVar62;
joined_r0x0248d568:
                      if ((uVar17 != 0) || (uVar64 = (ulong)(uint)fVar79, uStack_a4 == 0x200b)) {
                        fVar77 = fVar55 * *(float *)((long)param_1 + 0x2ac);
                        uVar64 = (ulong)(uint)fVar77;
                        fVar62 = fVar62 + fVar77;
                        goto LAB_0248d614;
                      }
                    }
                    lVar29 = *plVar2;
                    if ((lVar29 == 0) || (lVar21 = *(long *)(lVar29 + 0x38), lVar21 == 0))
                    goto LAB_02491464;
                    uVar28 = *puVar1;
                    uVar40 = (uint)*(undefined8 *)(lVar21 + 0x18);
                    if (uVar40 <= uVar28)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    *(float *)(lVar21 + (long)(int)uVar28 * 0x178 + 0x144) = fVar62;
                    uVar50 = uStack_a4;
                    if ((int)uStack_a4 < 0xd) {
                      if ((uStack_a4 - 10 < 2) || (uStack_a4 == 3)) goto LAB_0248d6b8;
LAB_0248d69c:
                      if (((bool)(bVar6 & uStack_a4 == 0x2d)) || (uVar28 == uVar33))
                      goto LAB_0248d6b8;
                    }
                    else {
                      if (1 < uStack_a4 - 0x2028) {
                        if (uStack_a4 != 0xd) goto LAB_0248d69c;
                        uVar64 = 0;
                        *(float *)(param_1 + 199) = *(float *)((long)param_1 + 0x404) + 0.0;
                        if (uVar28 != uVar33) goto LAB_0248dc08;
                      }
LAB_0248d6b8:
                      if (0.0 < *(float *)(param_1 + 0x9a)) {
                        fVar77 = *(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x99);
                        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0)
                            == 0) {
                          thunk_FUN_00d32864();
                        }
                        if (((fVar74 < ABS(fVar77)) && (*(char *)((long)param_1 + 700) == '\0')) &&
                           (*(char *)((long)param_1 + 0x334) == '\0')) {
                          FUN_024d6ca8(fVar77,param_1,(int)param_1[0x92],
                                       *(undefined4 *)((long)param_1 + 0x48c),0);
                          *(float *)((long)param_1 + 0x4bc) =
                               *(float *)((long)param_1 + 0x4bc) - fVar77;
                          *(float *)(param_1 + 0x9a) = fVar77 + *(float *)(param_1 + 0x9a);
                          puVar9 = System_Threading_Mutex_TypeInfo;
                          lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
                          if (*(int *)(lVar29 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar29 = *(long *)puVar9;
                          }
                          lVar21 = *(long *)(lVar29 + 0xb8);
                          if (*(int *)(lVar21 + 0x7ac) == (int)param_1[0x94]) {
                            if (*(int *)(lVar29 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                              lVar21 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
                            }
                            FUN_013b8de4(lVar21 + 0x11f0,&local_fe0,
                                         *(undefined8 *)
                                          Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                        );
                            lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
                            memcpy((void *)(*(long *)(lVar29 + 0xb8) + 0x788),&local_fe0,0x378);
                            lVar29 = *(long *)(lVar29 + 0xb8);
                            *(float *)(lVar29 + 0x7bc) = fVar77 + *(float *)(lVar29 + 0x7bc);
                            *(float *)(lVar29 + 0x800) = fVar77 + *(float *)(lVar29 + 0x800);
                            memcpy(auStack_16d0,(void *)(lVar29 + 0x788),0x378);
                            FUN_013b86dc(lVar29 + 0x11f0,auStack_16d0,
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_List<TextStyle>_get_Item__
                                        );
                          }
                        }
                      }
                      fVar62 = *(float *)(param_1 + 0x9a);
                      *(undefined1 *)((long)param_1 + 0x334) = 0;
                      fVar79 = *(float *)((long)param_1 + 0x4c4) - fVar62;
                      fVar77 = *(float *)((long)param_1 + 0x4bc);
                      if (fVar79 <= *(float *)((long)param_1 + 0x4bc)) {
                        fVar77 = fVar79;
                      }
                      *(float *)((long)param_1 + 0x4bc) = fVar77;
                      fVar56 = *(float *)(param_1 + 0x98);
                      if (local_ac[0] == '\0') {
                        local_a8 = fVar77;
                      }
                      if ((*(char *)((long)param_1 + 0x32c) != '\0') &&
                         (((int)param_1[100] <= *(int *)((long)param_1 + 0x48c) ||
                          ((int)param_1[0x65] <= (int)param_1[0x94])))) {
                        local_ac[0] = '\x01';
                      }
                      lVar29 = *plVar2;
                      if ((lVar29 == 0) || (lVar21 = *(long *)(lVar29 + 0x50), lVar21 == 0))
                      goto LAB_02491464;
                      uVar28 = *(uint *)(param_1 + 0x94);
                      if (*(uint *)(lVar21 + 0x18) <= uVar28)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      lVar49 = lVar21 + (long)(int)uVar28 * 0x5c;
                      *(int *)(lVar49 + 0x34) = (int)param_1[0x92];
                      iVar16 = (int)param_1[0x92];
                      if ((int)param_1[0x92] <= *(int *)((long)param_1 + 0x494)) {
                        iVar16 = *(int *)((long)param_1 + 0x494);
                      }
                      *(int *)((long)param_1 + 0x494) = iVar16;
                      *(int *)(lVar49 + 0x38) = iVar16;
                      *(undefined4 *)(param_1 + 0x93) = *(undefined4 *)((long)param_1 + 0x48c);
                      *(undefined4 *)(lVar49 + 0x3c) = *(undefined4 *)((long)param_1 + 0x48c);
                      iVar16 = *(int *)((long)param_1 + 0x494);
                      if (*(int *)((long)param_1 + 0x494) <= *(int *)((long)param_1 + 0x49c)) {
                        iVar16 = *(int *)((long)param_1 + 0x49c);
                      }
                      local_d8 = CONCAT44(iVar16,(uint)local_d8);
                      *(int *)((long)param_1 + 0x49c) = iVar16;
                      *(int *)(lVar49 + 0x40) = iVar16;
                      *(int *)(lVar49 + 0x24) =
                           (*(int *)(lVar49 + 0x3c) - *(int *)(lVar49 + 0x34)) + 1;
                      *(undefined4 *)(lVar49 + 0x28) = *(undefined4 *)((long)param_1 + 0x4a4);
                      lVar29 = *(long *)(lVar29 + 0x38);
                      if (lVar29 == 0) goto LAB_02491464;
                      if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)param_1 + 0x494))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      uVar87 = *(undefined4 *)
                                (lVar29 + (long)(int)*(uint *)((long)param_1 + 0x494) * 0x178 +
                                0x11c);
                      lVar21 = lVar21 + (long)(int)uVar28 * 0x5c;
                      *(float *)(lVar21 + 0x70) = fVar79;
                      *(undefined4 *)(lVar21 + 0x6c) = uVar87;
                      lVar29 = *plVar2;
                      if ((lVar29 == 0) || (lVar21 = *(long *)(lVar29 + 0x50), lVar21 == 0))
                      goto LAB_02491464;
                      if (*(uint *)(lVar21 + 0x18) <= *(uint *)(param_1 + 0x94))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      lVar29 = *(long *)(lVar29 + 0x38);
                      if (lVar29 == 0) goto LAB_02491464;
                      if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)param_1 + 0x49c))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      fVar56 = fVar56 - fVar62;
                      lVar21 = lVar21 + (long)(int)*(uint *)(param_1 + 0x94) * 0x5c;
                      *(undefined4 *)(lVar21 + 0x74) =
                           *(undefined4 *)
                            (lVar29 + (long)(int)*(uint *)((long)param_1 + 0x49c) * 0x178 + 0x128);
                      *(float *)(lVar21 + 0x78) = fVar56;
                      lVar29 = *plVar2;
                      if ((lVar29 == 0) || (lVar49 = *(long *)(lVar29 + 0x50), lVar49 == 0))
                      goto LAB_02491464;
                      lVar24 = (long)(int)*(uint *)(param_1 + 0x94);
                      if (*(uint *)(lVar49 + 0x18) <= *(uint *)(param_1 + 0x94))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      lVar21 = lVar49 + lVar24 * 0x5c;
                      *(float *)(lVar21 + 0x44) = *(float *)(lVar21 + 0x74) - fVar86 * local_172c;
                      *(float *)(lVar21 + 0x5c) = local_1784;
                      if (*(int *)(lVar21 + 0x24) == 1) {
                        *(int *)(lVar49 + lVar24 * 0x5c + 0x68) = (int)param_1[0x4e];
                      }
                      if ((*plVar51 == 0) || (lVar21 = *(long *)(lVar29 + 0x38), lVar21 == 0))
                      goto LAB_02491464;
                      lVar44 = (long)(int)*(uint *)((long)param_1 + 0x49c);
                      uVar40 = (uint)*(undefined8 *)(lVar21 + 0x18);
                      if (uVar40 <= *(uint *)((long)param_1 + 0x49c))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      if ((*(char *)(lVar21 + lVar44 * 0x178 + 0x194) == '\0') &&
                         (lVar44 = (long)(int)*(uint *)(param_1 + 0x93),
                         uVar40 <= *(uint *)(param_1 + 0x93)))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      fVar62 = (1.0 - *(float *)((long)param_1 + 0x2cc)) *
                               (fVar55 * (local_179c + local_1794 + *(float *)(*plVar51 + 0x1ac)) -
                               *(float *)((long)param_1 + 0x2a4));
                      fVar77 = -fVar62;
                      if ((char)param_1[0x1d] != '\0') {
                        fVar77 = fVar62;
                      }
                      lVar49 = lVar49 + lVar24 * 0x5c;
                      *(float *)(lVar49 + 0x58) =
                           *(float *)(lVar21 + lVar44 * 0x178 + 0x144) + fVar77;
                      fVar77 = *(float *)(param_1 + 0x9a);
                      *(float *)(lVar49 + 0x48) = fVar70 * fVar52 + (fVar56 - fVar79);
                      *(float *)(lVar49 + 0x4c) = fVar56;
                      uVar64 = (ulong)(uint)(0.0 - fVar77);
                      *(float *)(lVar49 + 0x50) = 0.0 - fVar77;
                      *(float *)(lVar49 + 0x54) = fVar79;
                      plVar47 = (long *)System_Threading_Mutex_TypeInfo;
                      uVar50 = uStack_a4;
                      if ((int)uStack_a4 < 0x2d) {
                        if (uStack_a4 - 10 < 2) {
LAB_0248dad8:
                          lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
                          if (*(int *)(lVar29 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar29 = *plVar47;
                          }
                          plVar37 = (long *)StringLiteral_302;
                          FUN_024d69d4(param_1,*(long *)(lVar29 + 0xb8) + 0x410,
                                       local_d8 & 0xffffffff,*(undefined4 *)((long)param_1 + 0x48c),
                                       0);
                          lVar29 = param_1[0x6c];
                          *(undefined4 *)((long)param_1 + 0x4a4) = 0;
                          iVar16 = (int)param_1[0x94] + 1;
                          *(int *)(param_1 + 0x94) = iVar16;
                          *(int *)(param_1 + 0x92) = *(int *)((long)param_1 + 0x48c) + 1;
                          if ((lVar29 != 0) && (*(long *)(lVar29 + 0x50) != 0)) {
                            if (*(int *)(*(long *)(lVar29 + 0x50) + 0x18) <= iVar16) {
                              FUN_024d6e60(param_1,iVar16,0);
                              lVar29 = param_1[0x6c];
                              if (lVar29 == 0) goto LAB_02491464;
                            }
                            lVar29 = *(long *)(lVar29 + 0x38);
                            if (lVar29 != 0) {
                              uVar17 = *puVar1;
                              if (uVar17 < *(uint *)(lVar29 + 0x18)) {
                                fVar77 = *(float *)(lVar29 + (long)(int)uVar17 * 0x178 + 0x154);
                                if (*(float *)(param_1 + 0x57) == DAT_02958224) {
                                  fVar79 = 0.0;
                                  if ((uStack_a4 == 0x2029) || (uStack_a4 == 10)) {
                                    fVar79 = *(float *)((long)param_1 + 0x2c4);
                                  }
                                  uVar30 = 0;
                                  fVar79 = *(float *)(param_1 + 0x9a) +
                                           fVar77 + (0.0 - *(float *)((long)param_1 + 0x4c4)) +
                                           fVar70 * (fVar52 + *(float *)((long)param_1 + 0x2b4)) +
                                           fVar55 * (*(float *)(param_1 + 0x56) + fVar79);
                                }
                                else {
                                  if ((uStack_a4 == 0x2029) || (fVar79 = 0.0, uStack_a4 == 10)) {
                                    fVar79 = *(float *)((long)param_1 + 0x2c4);
                                  }
                                  uVar30 = 1;
                                  fVar79 = *(float *)(param_1 + 0x9a) +
                                           *(float *)(param_1 + 0x57) +
                                           fVar55 * (*(float *)(param_1 + 0x56) + fVar79);
                                }
                                *(float *)(param_1 + 0x9a) = fVar79;
                                *(undefined1 *)((long)param_1 + 700) = uVar30;
                                lVar29 = *plVar47;
                                if (*(int *)(lVar29 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                  lVar29 = *plVar47;
                                  uVar17 = *puVar1;
                                }
                                lVar29 = *(long *)(lVar29 + 0xb8);
                                uVar67 = *(undefined8 *)(lVar29 + 0x15a8);
                                *(float *)(param_1 + 0x99) = fVar77;
                                uVar64 = NEON_rev64(uVar67,4);
                                param_1[0x98] = uVar64;
                                *(float *)(param_1 + 199) =
                                     *(float *)(param_1 + 0x80) + 0.0 +
                                     *(float *)((long)param_1 + 0x404);
                                FUN_024d69d4(param_1,lVar29 + 0x98,local_d8 & 0xffffffff,uVar17,0);
                                FUN_024d69d4(param_1,*(long *)(*plVar47 + 0xb8) + 0xb00,
                                             local_d8 & 0xffffffff,
                                             *(undefined4 *)((long)param_1 + 0x48c),0);
                                *(int *)((long)param_1 + 0x48c) =
                                     *(int *)((long)param_1 + 0x48c) + 1;
                                bVar7 = true;
                                bVar8 = 1;
                                goto LAB_0248ab98;
                              }
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                            }
                          }
                          goto LAB_02491464;
                        }
                        if (uStack_a4 == 3) {
                          if (param_1[0x8e] == 0) goto LAB_02491464;
                          local_d8 = CONCAT44(iVar16,(int)*(undefined8 *)(param_1[0x8e] + 0x18));
                          uVar50 = 3;
                        }
                      }
                      else if ((uStack_a4 - 0x2028 < 2) || (uStack_a4 == 0x2d)) goto LAB_0248dad8;
                    }
LAB_0248dc08:
                    uVar28 = *puVar1;
                    if (uVar40 <= uVar28)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    if (*(char *)(lVar21 + (long)(int)uVar28 * 0x178 + 0x194) != '\0') {
                      lVar21 = lVar21 + (long)(int)uVar28 * 0x178;
                      uVar23 = *(ulong *)(lVar21 + 0x11c);
                      uVar64 = *(ulong *)((long)param_1 + 0x4d4);
                      *(ulong *)((long)param_1 + 0x4d4) =
                           uVar23 ^ (uVar23 ^ uVar64) &
                                    CONCAT44(-(uint)((float)(uVar64 >> 0x20) <
                                                    (float)(uVar23 >> 0x20)),
                                             -(uint)((float)uVar64 < (float)uVar23));
                      uVar23 = *(ulong *)((long)param_1 + 0x4dc);
                      uVar64 = *(ulong *)(lVar21 + 0x128);
                      *(ulong *)((long)param_1 + 0x4dc) =
                           uVar64 ^ (uVar64 ^ uVar23) &
                                    CONCAT44(-(uint)((float)(uVar64 >> 0x20) <
                                                    (float)(uVar23 >> 0x20)),
                                             -(uint)((float)uVar64 < (float)uVar23));
                    }
                    if (((int)param_1[0x5b] == 5) &&
                       ((0xd < uVar50 || ((1 << (ulong)(uVar50 & 0x1f) & 0x2c00U) == 0)))) {
                      lVar21 = *(long *)(lVar29 + 0x58);
                      if (lVar21 == 0) goto LAB_02491464;
                      iVar16 = (int)param_1[0x95] + 1;
                      if (*(int *)(lVar21 + 0x18) < iVar16) {
                        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        FUN_01147c08((long *)(lVar29 + 0x58),iVar16,1,
                                     *(undefined8 *)
                                      Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__
                                    );
                        lVar29 = *plVar2;
                        if (lVar29 == 0) goto LAB_02491464;
                      }
                      lVar21 = *(long *)(lVar29 + 0x58);
                      if (lVar21 == 0) goto LAB_02491464;
                      uVar50 = *(uint *)(param_1 + 0x95);
                      lVar49 = (long)(int)uVar50;
                      uVar40 = *(uint *)(lVar21 + 0x18);
                      if (uVar40 <= uVar50)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      lVar24 = lVar21 + lVar49 * 0x14;
                      fVar79 = *(float *)(lVar24 + 0x30);
                      uVar64 = (ulong)(uint)fVar79;
                      *(undefined4 *)(lVar24 + 0x28) = *(undefined4 *)((long)param_1 + 0x4ac);
                      fVar77 = *(float *)((long)param_1 + 0x4bc);
                      if (fVar79 <= *(float *)((long)param_1 + 0x4bc)) {
                        fVar77 = fVar79;
                      }
                      *(float *)(lVar24 + 0x30) = fVar77;
                      uVar28 = *(uint *)((long)param_1 + 0x48c);
                      if (uVar28 == 0 && uVar50 == 0) {
                        *(uint *)(lVar21 + lVar49 * 0x14 + 0x20) = uVar28;
                      }
                      else {
                        uVar42 = uVar28 - 1;
                        if (0 < (int)uVar28) {
                          lVar29 = *(long *)(lVar29 + 0x38);
                          if (lVar29 == 0) goto LAB_02491464;
                          if (*(uint *)(lVar29 + 0x18) <= uVar42)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                          ;
                          if (uVar50 != *(uint *)(lVar29 + (long)(int)uVar42 * 0x178 + 0x68)) {
                            if (uVar50 - 1 < uVar40) {
                              *(uint *)(lVar21 + 0x20 + (long)(int)(uVar50 - 1) * 0x14 + 4) = uVar42
                              ;
                              *(uint *)(lVar21 + 0x20 + lVar49 * 0x14) = uVar28;
                              goto LAB_0248dc84;
                            }
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                          }
                        }
                        if (uVar28 == uVar33) {
                          *(uint *)(lVar21 + lVar49 * 0x14 + 0x24) = uVar33;
                          uVar28 = uVar33;
                        }
                      }
                    }
LAB_0248dc84:
                    plVar47 = (long *)System_Threading_Mutex_TypeInfo;
                    if (((char)param_1[0x5a] != '\0') ||
                       ((*(uint *)(param_1 + 0x5b) < 7 &&
                        ((1 << (ulong)(*(uint *)(param_1 + 0x5b) & 0x1f) & 0x4aU) != 0)))) {
                      if ((uVar17 == 0) &&
                         (((uStack_a4 != 0x2d && (uStack_a4 != 0x200b)) && (uStack_a4 != 0xad)))) {
                        if (*(char *)((long)param_1 + 0x2d2) == '\0') {
LAB_0248de4c:
                          if (((((0x2bfd < uStack_a4 - 0xac01) && (0x1d < uStack_a4 - 0xa961)) &&
                               (0xfd < uStack_a4 - 0x1101)) ||
                              (uVar23 = FUN_024e95f0(0), (uVar23 & 1) != 0)) &&
                             ((((0xed < uStack_a4 - 0xff01 && (0x1d < uStack_a4 - 0xfe31)) &&
                               (0x717d < uStack_a4 - 0x2e81)) && (0x1fd < uStack_a4 - 0xf901))))
                          goto LAB_0248ded4;
                          lVar29 = FUN_024e94b0(0);
                          if ((lVar29 == 0) || (*(long *)(lVar29 + 0x10) == 0)) goto LAB_02491464;
                          local_fe0 = (double)CONCAT44(local_fe0._4_4_,uStack_a4);
                          uVar23 = FUN_0129aa60(*(long *)(lVar29 + 0x10),&local_fe0,
                                                *(undefined8 *)
                                                 System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                               );
                          if ((int)*puVar1 < (int)uVar33) {
                            lVar29 = FUN_024e94b0(0);
                            if (((lVar29 == 0) || (*plVar2 == 0)) ||
                               (lVar21 = *(long *)(*plVar2 + 0x38), lVar21 == 0)) goto LAB_02491464;
                            if (*(uint *)(lVar21 + 0x18) <= *puVar1 + 1)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            if (*(long *)(lVar29 + 0x18) == 0) goto LAB_02491464;
                            local_fe0 = (double)CONCAT44(local_fe0._4_4_,
                                                         (uint)*(ushort *)
                                                                (lVar21 + (long)(int)(*puVar1 + 1) *
                                                                          0x178 + 0x20));
                            uVar26 = FUN_0129aa60(*(long *)(lVar29 + 0x18),&local_fe0,
                                                  *(undefined8 *)
                                                                                                      
                                                  System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                                 );
                            if ((uVar23 & 1) != 0) goto LAB_0248e0dc;
                            if ((uVar26 & 1) == 0) goto LAB_0248e1b0;
                            plVar47 = (long *)System_Threading_Mutex_TypeInfo;
                            if (bVar8 == 0) {
                              bVar8 = 0;
                              goto LAB_0248e168;
                            }
                          }
                          else {
                            if ((uVar23 & 1) == 0) {
LAB_0248e1b0:
                              plVar47 = (long *)System_Threading_Mutex_TypeInfo;
                              lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
                              if (*(int *)(lVar29 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                                lVar29 = *plVar47;
                              }
                              FUN_024d69d4(param_1,*(long *)(lVar29 + 0xb8) + 0x98,
                                           local_d8 & 0xffffffff,
                                           *(undefined4 *)((long)param_1 + 0x48c),0);
                              bVar8 = 0;
                              goto LAB_0248e168;
                            }
LAB_0248e0dc:
                            plVar47 = (long *)System_Threading_Mutex_TypeInfo;
                            if (uVar41 != uVar32 || ((bVar8 ^ 0xff) & 1) != 0) goto LAB_0248e168;
                          }
joined_r0x0248e0fc:
                          System_Threading_Mutex_TypeInfo = (undefined *)plVar47;
                          if (uVar17 != 0) {
LAB_0248e100:
                            plVar47 = (long *)System_Threading_Mutex_TypeInfo;
                            lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
                            if (*(int *)(lVar29 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                              lVar29 = *plVar47;
                            }
                            FUN_024d69d4(param_1,*(long *)(lVar29 + 0xb8) + 0xe78,
                                         local_d8 & 0xffffffff,
                                         *(undefined4 *)((long)param_1 + 0x48c),0);
                          }
                          lVar29 = *plVar47;
                          if (*(int *)(lVar29 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar29 = *plVar47;
                          }
                          FUN_024d69d4(param_1,*(long *)(lVar29 + 0xb8) + 0x98,local_d8 & 0xffffffff
                                       ,*(undefined4 *)((long)param_1 + 0x48c),0);
                          bVar8 = 1;
                        }
                        else {
LAB_0248ded4:
                          plVar47 = (long *)System_Threading_Mutex_TypeInfo;
                          if (bVar8 != 0) {
                            if (!(bool)(uStack_a4 == 0xad & (bVar13 ^ 1U))) goto joined_r0x0248e0fc;
                            goto LAB_0248e100;
                          }
                          bVar8 = 0;
                        }
                      }
                      else {
                        if (*(char *)((long)param_1 + 0x2d2) == '\x01') goto LAB_0248ded4;
                        if (((uStack_a4 - 0x2007 < 0x29) &&
                            ((1L << ((ulong)(uStack_a4 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
                           ((uStack_a4 == 0xa0 || (uStack_a4 == 0x2060)))) goto LAB_0248de4c;
                        lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
                        if (*(int *)(lVar29 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                          uVar28 = *puVar1;
                          lVar29 = *plVar47;
                        }
                        FUN_024d69d4(param_1,*(long *)(lVar29 + 0xb8) + 0x98,local_d8 & 0xffffffff,
                                     uVar28,0);
                        bVar8 = 0;
                        *(undefined4 *)(*(long *)(*plVar47 + 0xb8) + 0xe78) = 0xffffffff;
                      }
                    }
LAB_0248e168:
                    lVar29 = *plVar47;
                    if (*(int *)(lVar29 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar29 = *plVar47;
                    }
                    plVar37 = (long *)StringLiteral_302;
                    FUN_024d69d4(param_1,*(long *)(lVar29 + 0xb8) + 0xb00,local_d8 & 0xffffffff,
                                 *(undefined4 *)((long)param_1 + 0x48c),0);
                    *(int *)((long)param_1 + 0x48c) = *(int *)((long)param_1 + 0x48c) + 1;
                  }
                }
                else {
                  *(undefined1 *)((long)param_1 + 0x429) = 1;
                  *(undefined4 *)((long)param_1 + 0x63c) = 0;
                  uVar23 = FUN_024d0688(param_1,param_1[0x8e],(uint)local_d8 + 1,&local_f4,0);
                  if ((uVar23 & 1) == 0)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__GetInputAction
                  ;
                  local_d8 = CONCAT44(local_d8._4_4_,local_f4);
                  if (*(int *)((long)param_1 + 0x63c) != 0)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__GetInputAction
                  ;
                }
LAB_0248ab98:
                uVar17 = (uint)local_d8 + 1;
                local_d8 = CONCAT44(local_d8._4_4_,uVar17);
                lVar29 = param_1[0x8e];
                if (lVar29 == 0) goto LAB_02491464;
                goto LAB_0248a8e0;
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
LAB_0248ef74:
  uVar33 = uVar41 - 1;
  if (*(uint *)(lVar46 + 0x18) <= uVar33)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x50), lVar29 == 0)) goto LAB_02491464;
  lVar49 = (long)(int)uVar33;
  lVar21 = lVar46 + lVar49 * 0x178;
  uVar32 = *(uint *)(lVar21 + 100);
  if (*(uint *)(lVar29 + 0x18) <= uVar32)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar44 = *(long *)(lVar21 + 0x38);
  uVar42 = (uint)*(ushort *)(lVar21 + 0x20);
  lVar24 = (long)(int)uVar32;
  lVar29 = lVar29 + lVar24 * 0x5c;
  uVar28 = *(uint *)(lVar29 + 0x3c);
  uVar40 = *(uint *)(lVar29 + 0x40);
  lVar21 = (long)(int)uVar40;
  iVar18 = *(int *)(lVar29 + 0x28);
  iVar19 = *(int *)(lVar29 + 0x2c);
  uVar50 = *(uint *)(lVar29 + 0x68);
  fVar81 = *(float *)(lVar29 + 0x5c);
  fVar62 = *(float *)(lVar29 + 0x60);
  iVar4 = *(int *)(lVar29 + 0x20);
  fVar53 = *(float *)(lVar29 + 0x4c);
  fVar85 = *(float *)(lVar29 + 0x54);
  fVar79 = *(float *)(lVar29 + 0x58);
  fVar74 = *(float *)(lVar29 + 0x6c);
  fVar88 = *(float *)(lVar29 + 0x70);
  fVar84 = *(float *)(lVar29 + 0x74);
  fVar54 = *(float *)(lVar29 + 0x78);
  fVar86 = fVar81 + fVar62;
  if ((int)uVar50 < 9) {
    switch(uVar50) {
    case 1:
      if ((char)param_1[0x1d] == '\0') {
        local_179c = fVar62 + 0.0;
      }
      else {
        local_179c = 0.0 - fVar79;
      }
      break;
    case 2:
LAB_0248f124:
      local_179c = (fVar62 + fVar81 * 0.5) - fVar79 * 0.5;
      break;
    default:
      goto switchD_0248f070_caseD_3;
    case 4:
      local_179c = fVar86 - fVar79;
      if ((char)param_1[0x1d] != '\0') {
        local_179c = fVar86;
      }
      break;
    case 8:
      goto switchD_0248f070_caseD_8;
    }
LAB_0248f194:
    local_17a8 = 0;
  }
  else if (uVar50 == 0x10) {
switchD_0248f070_caseD_8:
    if (uVar42 < 0xad) {
      if ((uVar42 != 3) && (uVar42 != 10)) goto LAB_0248f0c8;
    }
    else if ((uVar42 != 0xad) && ((uVar42 != 0x200b && (uVar42 != 0x2060)))) {
LAB_0248f0c8:
      if (*(uint *)(lVar46 + 0x18) <= uVar28)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar5 = *(undefined2 *)(lVar46 + (long)(int)uVar28 * 0x178 + 0x20);
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar20 = FUN_016f9f84(uVar5,0);
      if ((uVar20 & 1) == 0) {
        bVar15 = (int)uVar32 < (int)param_1[0x94];
      }
      else {
        bVar15 = false;
      }
      if ((fVar79 <= fVar81) && (!bVar15 && (uVar50 >> 4 & 1) == 0)) {
        local_179c = fVar62;
        if ((char)param_1[0x1d] != '\0') {
          local_179c = fVar86;
        }
        goto LAB_0248f194;
      }
      if (((uVar41 == 1) || (uVar32 != uVar17)) || (uVar33 == *(uint *)((long)param_1 + 0x31c))) {
        local_179c = fVar62;
        if ((char)param_1[0x1d] != '\0') {
          local_179c = fVar86;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        local_183c = FUN_016fa418(uVar42,0);
        local_17a8 = 0;
      }
      else {
        cVar31 = (char)param_1[0x1d];
        fVar62 = -fVar79;
        if (cVar31 != '\0') {
          fVar62 = fVar79;
        }
        if (*(uint *)(lVar46 + 0x18) <= uVar28)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar79 = 1.0;
        iVar19 = (int)*(char *)(lVar46 + (long)(int)uVar28 * 0x178 + 0x194) +
                 (-iVar4 - (local_183c & 1)) + iVar19 + -1;
        if (0 < iVar19) {
          fVar79 = *(float *)((long)param_1 + 0x2d4);
        }
        if (iVar19 < 1) {
          iVar19 = 1;
        }
        if (uVar42 == 9) {
LAB_02490fe0:
          fVar79 = 1.0 - fVar79;
        }
        else {
          if (uVar42 != 0xa0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar20 = FUN_016fa418(uVar42,0);
            cVar31 = (char)param_1[0x1d];
            if ((uVar20 & 1) != 0) goto LAB_02490fe0;
          }
          iVar19 = (iVar4 - (~local_183c & 1)) + iVar18;
        }
        fVar79 = ((fVar81 + fVar62) * fVar79) / (float)iVar19;
        if (cVar31 == '\0') {
          local_179c = local_179c + fVar79;
          local_17a8 = CONCAT44((float)((ulong)local_17a8 >> 0x20) + 0.0,(float)local_17a8 + 0.0);
        }
        else {
          local_179c = local_179c - fVar79;
        }
      }
    }
  }
  else if (uVar50 == 0x20) {
    fVar79 = fVar74 + fVar84;
    goto LAB_0248f124;
  }
switchD_0248f070_caseD_3:
  uVar50 = (uint)*(undefined8 *)(lVar46 + 0x18);
  if (uVar50 <= uVar33)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar29 = lVar46 + lVar49 * 0x178;
  fVar62 = local_17d0 + local_179c;
  fVar79 = (float)local_17d8 + (float)local_17a8;
  fVar81 = (float)((ulong)local_17d8 >> 0x20) + (float)((ulong)local_17a8 >> 0x20);
  plVar51 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(char *)(lVar29 + 0x194) == '\0') goto LAB_0248fabc;
  iVar18 = *(int *)(lVar46 + lVar49 * 0x178 + 0x2c);
  if (iVar18 != 0) goto LAB_0248f808;
  fVar77 = fmodf(*(float *)((long)param_1 + 0x30c) * (float)(int)uVar32,1.0);
  switch(*(undefined4 *)((long)param_1 + 0x304)) {
  case 0:
    lVar36 = lVar46 + lVar49 * 0x178;
    *(undefined4 *)(lVar36 + 0x84) = 0;
    *(undefined4 *)(lVar36 + 0xac) = 0;
    *(undefined4 *)(lVar36 + 0xd4) = 0x3f800000;
    fVar77 = 1.0;
    break;
  case 1:
    fVar54 = *(float *)(lVar46 + lVar49 * 0x178 + 0x70);
    if (*(int *)((long)param_1 + 0x26c) == 0x208) {
      lVar36 = lVar46 + lVar49 * 0x178;
      fVar84 = (local_179c + fVar54) - *(float *)((long)param_1 + 0x4d4);
      fVar54 = *(float *)((long)param_1 + 0x4dc) - *(float *)((long)param_1 + 0x4d4);
      goto LAB_0248f2dc;
    }
    lVar36 = lVar46 + lVar49 * 0x178;
    fVar84 = fVar84 - fVar74;
    *(float *)(lVar36 + 0x84) = fVar77 + (fVar54 - fVar74) / fVar84;
    *(float *)(lVar36 + 0xac) = fVar77 + (*(float *)(lVar36 + 0x98) - fVar74) / fVar84;
    *(float *)(lVar36 + 0xd4) = fVar77 + (*(float *)(lVar36 + 0xc0) - fVar74) / fVar84;
    fVar77 = fVar77 + (*(float *)(lVar36 + 0xe8) - fVar74) / fVar84;
    break;
  case 2:
    lVar36 = lVar46 + lVar49 * 0x178;
    fVar54 = *(float *)((long)param_1 + 0x4dc) - *(float *)((long)param_1 + 0x4d4);
    fVar84 = (local_179c + *(float *)(lVar36 + 0x70)) - *(float *)((long)param_1 + 0x4d4);
LAB_0248f2dc:
    *(float *)(lVar36 + 0x84) = fVar77 + fVar84 / fVar54;
    *(float *)(lVar36 + 0xac) =
         fVar77 + ((local_179c + *(float *)(lVar36 + 0x98)) - *(float *)((long)param_1 + 0x4d4)) /
                  (*(float *)((long)param_1 + 0x4dc) - *(float *)((long)param_1 + 0x4d4));
    *(float *)(lVar36 + 0xd4) =
         fVar77 + ((local_179c + *(float *)(lVar36 + 0xc0)) - *(float *)((long)param_1 + 0x4d4)) /
                  (*(float *)((long)param_1 + 0x4dc) - *(float *)((long)param_1 + 0x4d4));
    fVar77 = fVar77 + ((local_179c + *(float *)(lVar36 + 0xe8)) - *(float *)((long)param_1 + 0x4d4))
                      / (*(float *)((long)param_1 + 0x4dc) - *(float *)((long)param_1 + 0x4d4));
    break;
  case 3:
    switch((int)param_1[0x61]) {
    case 0:
      lVar36 = lVar46 + lVar49 * 0x178;
      *(undefined4 *)(lVar36 + 0x88) = 0;
      *(undefined4 *)(lVar36 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar36 + 0xd8) = 0;
      *(undefined4 *)(lVar36 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar36 = lVar46 + lVar49 * 0x178;
      fVar54 = fVar54 - fVar88;
      fVar84 = fVar77 + (*(float *)(lVar36 + 0x74) - fVar88) / fVar54;
      fVar54 = fVar77 + (*(float *)(lVar36 + 0x9c) - fVar88) / fVar54;
      *(float *)(lVar36 + 0x88) = fVar84;
      *(float *)(lVar36 + 0xb0) = fVar54;
      *(float *)(lVar36 + 0xd8) = fVar84;
      *(float *)(lVar36 + 0x100) = fVar54;
      break;
    case 2:
      lVar36 = lVar46 + lVar49 * 0x178;
      fVar84 = fVar77 + (*(float *)(lVar36 + 0x74) - *(float *)(param_1 + 0x9b)) /
                        (*(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0x9b));
      *(float *)(lVar36 + 0x88) = fVar84;
      fVar54 = *(float *)(param_1 + 0x9b);
      fVar88 = *(float *)(param_1 + 0x9c);
      *(float *)(lVar36 + 0xd8) = fVar84;
      fVar84 = fVar77 + (*(float *)(lVar36 + 0x9c) - fVar54) / (fVar88 - fVar54);
      *(float *)(lVar36 + 0xb0) = fVar84;
      *(float *)(lVar36 + 0x100) = fVar84;
      break;
    case 3:
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
      uVar50 = (uint)*(undefined8 *)(lVar46 + 0x18);
    }
    if (uVar50 <= uVar33)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar36 = lVar46 + lVar49 * 0x178;
    fVar84 = *(float *)(lVar36 + 0x15c);
    fVar54 = (1.0 - (*(float *)(lVar36 + 0x88) + *(float *)(lVar36 + 0xb0)) * fVar84) * 0.5;
    fVar88 = fVar77 + *(float *)(lVar36 + 0x88) * fVar84 + fVar54;
    fVar77 = fVar77 + fVar54 + *(float *)(lVar36 + 0xb0) * fVar84;
    *(float *)(lVar36 + 0x84) = fVar88;
    *(float *)(lVar36 + 0xac) = fVar88;
    *(float *)(lVar36 + 0xd4) = fVar77;
    break;
  default:
    goto switchD_0248f240_default;
  }
  *(float *)(lVar46 + lVar49 * 0x178 + 0xfc) = fVar77;
switchD_0248f240_default:
  switch((int)param_1[0x61]) {
  case 0:
    if (uVar50 <= uVar33)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar36 = lVar46 + lVar49 * 0x178;
    *(undefined4 *)(lVar36 + 0x88) = 0;
    *(undefined4 *)(lVar36 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar36 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar36 + 0x100) = 0;
    break;
  case 1:
    if (uVar33 < uVar50) {
      lVar36 = lVar46 + lVar49 * 0x178;
      fVar53 = fVar53 - fVar85;
      fVar77 = (*(float *)(lVar36 + 0x74) - fVar85) / fVar53;
      fVar53 = (*(float *)(lVar36 + 0x9c) - fVar85) / fVar53;
      *(float *)(lVar36 + 0x88) = fVar77;
      goto LAB_0248f644;
    }
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  case 2:
    if (uVar50 <= uVar33)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar36 = lVar46 + lVar49 * 0x178;
    fVar77 = (*(float *)(lVar36 + 0x74) - *(float *)(param_1 + 0x9b)) /
             (*(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0x9b));
    *(float *)(lVar36 + 0x88) = fVar77;
    fVar53 = (*(float *)(lVar36 + 0x9c) - *(float *)(param_1 + 0x9b)) /
             (*(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0x9b));
LAB_0248f644:
    *(float *)(lVar36 + 0xb0) = fVar53;
    *(float *)(lVar36 + 0xd8) = fVar53;
    *(float *)(lVar36 + 0x100) = fVar77;
    break;
  case 3:
    if (uVar50 <= uVar33)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar36 = lVar46 + lVar49 * 0x178;
    fVar53 = *(float *)(lVar36 + 0x15c);
    fVar84 = (1.0 - (*(float *)(lVar36 + 0x84) + *(float *)(lVar36 + 0xd4)) / fVar53) * 0.5;
    fVar77 = *(float *)(lVar36 + 0x84) / fVar53 + fVar84;
    fVar84 = fVar84 + *(float *)(lVar36 + 0xd4) / fVar53;
    *(float *)(lVar36 + 0x88) = fVar77;
    *(float *)(lVar36 + 0xb0) = fVar84;
    *(float *)(lVar36 + 0x100) = fVar77;
    *(float *)(lVar36 + 0xd8) = fVar84;
  }
  if (uVar50 <= uVar33)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar36 = lVar46 + lVar49 * 0x178;
  fVar77 = ABS(fVar70) * *(float *)(lVar36 + 0x160) * (1.0 - *(float *)((long)param_1 + 0x2cc));
  if ((*(char *)(lVar36 + 0x5c) == '\0') && ((*(byte *)(lVar46 + lVar49 * 0x178 + 400) & 1) != 0)) {
    fVar77 = -fVar77;
  }
  lVar36 = lVar46 + lVar49 * 0x178;
  fVar53 = *(float *)(lVar36 + 0x88);
  fVar54 = *(float *)(lVar36 + 0x84);
  fVar84 = -2.1474836e+09;
  if (fVar54 != INFINITY) {
    fVar84 = (float)(int)fVar54;
  }
  fVar88 = *(float *)(lVar36 + 0xd4);
  fVar74 = *(float *)(lVar36 + 0xd8);
  fVar85 = -2.1474836e+09;
  if (fVar53 != INFINITY) {
    fVar85 = (float)(int)fVar53;
  }
  uVar87 = FUN_024e0374(fVar54 - fVar84,fVar53 - fVar85,param_1,0);
  *(undefined4 *)(lVar36 + 0x84) = uVar87;
  if (*(uint *)(lVar46 + 0x18) <= uVar33)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar74 = fVar74 - fVar85;
  *(float *)(lVar36 + 0x88) = fVar77;
  uVar87 = FUN_024e0374(fVar54 - fVar84,fVar74,param_1,0);
  *(undefined4 *)(lVar46 + lVar49 * 0x178 + 0xac) = uVar87;
  if (*(uint *)(lVar46 + 0x18) <= uVar33)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar88 = fVar88 - fVar84;
  *(float *)(lVar46 + lVar49 * 0x178 + 0xb0) = fVar77;
  fVar84 = (float)FUN_024e0374(fVar88,fVar74,param_1,0);
  *(float *)(lVar36 + 0xd4) = fVar84;
  if (*(uint *)(lVar46 + 0x18) <= uVar33)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar36 + 0xd8) = fVar77;
  uVar87 = FUN_024e0374(fVar88,fVar53 - fVar85,param_1,0);
  *(undefined4 *)(lVar46 + lVar49 * 0x178 + 0xfc) = uVar87;
  uVar50 = (uint)*(undefined8 *)(lVar46 + 0x18);
  if (uVar50 <= uVar33)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar46 + lVar49 * 0x178 + 0x100) = fVar77;
LAB_0248f808:
  if (((int)uVar33 < (int)param_1[100]) && (local_17bc < *(int *)((long)param_1 + 0x324))) {
    if (((int)uVar32 < (int)param_1[0x65]) && ((int)param_1[0x5b] != 5)) {
      if (uVar50 <= uVar33)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = lVar46 + lVar49 * 0x178;
      *(ulong *)(lVar29 + 0x70) =
           CONCAT44(fVar79 + (float)((ulong)*(undefined8 *)(lVar29 + 0x70) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar29 + 0x70));
      *(float *)(lVar29 + 0x78) = fVar81 + *(float *)(lVar29 + 0x78);
      plVar51 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (*(uint *)(lVar46 + 0x18) <= uVar33)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = lVar46 + lVar49 * 0x178;
      *(ulong *)(lVar29 + 0x98) =
           CONCAT44(fVar79 + (float)((ulong)*(undefined8 *)(lVar29 + 0x98) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar29 + 0x98));
      *(float *)(lVar29 + 0xa0) = fVar81 + *(float *)(lVar29 + 0xa0);
      uVar50 = *(uint *)(lVar46 + 0x18);
LAB_0248fa4c:
      if (uVar50 <= uVar33)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = lVar46 + lVar49 * 0x178;
      *(ulong *)(lVar29 + 0xc0) =
           CONCAT44(fVar79 + (float)((ulong)*(undefined8 *)(lVar29 + 0xc0) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar29 + 0xc0));
      *(float *)(lVar29 + 200) = fVar81 + *(float *)(lVar29 + 200);
      if (*(uint *)(lVar46 + 0x18) <= uVar33)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = lVar46 + lVar49 * 0x178;
      *(ulong *)(lVar29 + 0xe8) =
           CONCAT44(fVar79 + (float)((ulong)*(undefined8 *)(lVar29 + 0xe8) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar29 + 0xe8));
      *(float *)(lVar29 + 0xf0) = fVar81 + *(float *)(lVar29 + 0xf0);
      if (iVar18 != 0) goto LAB_0248f9d0;
LAB_0248fa9c:
      pcVar39 = *(code **)(*param_1 + 0x8d8);
      uVar67 = *(undefined8 *)(*param_1 + 0x8e0);
LAB_0248faa8:
      (*pcVar39)(param_1,uVar33,0,uVar67);
      goto LAB_0248fabc;
    }
    if (((int)uVar32 < (int)param_1[0x65]) && ((int)param_1[0x5b] == 5)) {
      if (uVar33 < uVar50) {
        if (*(uint *)(lVar46 + lVar49 * 0x178 + 0x68) != uVar3) goto LAB_0248f8d8;
        lVar29 = lVar46 + lVar49 * 0x178;
        *(ulong *)(lVar29 + 0x70) =
             CONCAT44(fVar79 + (float)((ulong)*(undefined8 *)(lVar29 + 0x70) >> 0x20),
                      fVar62 + (float)*(undefined8 *)(lVar29 + 0x70));
        *(float *)(lVar29 + 0x78) = fVar81 + *(float *)(lVar29 + 0x78);
        if (uVar33 < *(uint *)(lVar46 + 0x18)) {
          lVar29 = lVar46 + lVar49 * 0x178;
          *(ulong *)(lVar29 + 0x98) =
               CONCAT44(fVar79 + (float)((ulong)*(undefined8 *)(lVar29 + 0x98) >> 0x20),
                        fVar62 + (float)*(undefined8 *)(lVar29 + 0x98));
          *(float *)(lVar29 + 0xa0) = fVar81 + *(float *)(lVar29 + 0xa0);
          uVar50 = *(uint *)(lVar46 + 0x18);
          plVar51 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          goto LAB_0248fa4c;
        }
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    }
  }
LAB_0248f8d8:
  if (uVar50 <= uVar33)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774d76 = '\x01';
  }
  puVar9 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  lVar36 = lVar46 + lVar49 * 0x178;
  uVar87 = *(undefined4 *)
            (*(undefined8 **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8) + 1);
  *(undefined8 *)(lVar36 + 0x70) =
       **(undefined8 **)
         (*(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
         0xb8);
  *(undefined4 *)(lVar36 + 0x78) = uVar87;
  plVar51 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(uint *)(lVar46 + 0x18) <= uVar33)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar36 = lVar46 + lVar49 * 0x178;
  uVar87 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar36 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar36 + 0xa0) = uVar87;
  if (*(uint *)(lVar46 + 0x18) <= uVar33)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar36 = lVar46 + lVar49 * 0x178;
  uVar87 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar36 + 0xc0) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar36 + 200) = uVar87;
  if (*(uint *)(lVar46 + 0x18) <= uVar33)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar36 = lVar46 + lVar49 * 0x178;
  uVar87 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar36 + 0xe8) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar36 + 0xf0) = uVar87;
  if (*(uint *)(lVar46 + 0x18) <= uVar33)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined1 *)(lVar29 + 0x194) = 0;
  if (iVar18 == 0) goto LAB_0248fa9c;
LAB_0248f9d0:
  if (iVar18 == 1) {
    pcVar39 = *(code **)(*param_1 + 0x8f8);
    uVar67 = *(undefined8 *)(*param_1 + 0x900);
    goto LAB_0248faa8;
  }
LAB_0248fabc:
  if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 == 0)) goto LAB_02491464;
  if (*(uint *)(lVar29 + 0x18) <= uVar33)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar29 = lVar29 + lVar49 * 0x178;
  uVar67 = *(undefined8 *)(lVar29 + 0x11c);
  *(undefined8 *)(lVar29 + 0x11c) =
       CONCAT44(fVar79 + (float)((ulong)uVar67 >> 0x20),fVar62 + (float)uVar67);
  *(float *)(lVar29 + 0x124) = fVar81 + *(float *)(lVar29 + 0x124);
  if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 == 0)) goto LAB_02491464;
  if (*(uint *)(lVar29 + 0x18) <= uVar33)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar29 = lVar29 + lVar49 * 0x178;
  *(ulong *)(lVar29 + 0x110) =
       CONCAT44(fVar79 + (float)((ulong)*(undefined8 *)(lVar29 + 0x110) >> 0x20),
                fVar62 + (float)*(undefined8 *)(lVar29 + 0x110));
  *(float *)(lVar29 + 0x118) = fVar81 + *(float *)(lVar29 + 0x118);
  if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 == 0)) goto LAB_02491464;
  if (*(uint *)(lVar29 + 0x18) <= uVar33)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar29 = lVar29 + lVar49 * 0x178;
  *(ulong *)(lVar29 + 0x128) =
       CONCAT44(fVar79 + (float)((ulong)*(undefined8 *)(lVar29 + 0x128) >> 0x20),
                fVar62 + (float)*(undefined8 *)(lVar29 + 0x128));
  *(float *)(lVar29 + 0x130) = fVar81 + *(float *)(lVar29 + 0x130);
  if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 == 0)) goto LAB_02491464;
  if (*(uint *)(lVar29 + 0x18) <= uVar33)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar29 = lVar29 + lVar49 * 0x178;
  *(float *)(lVar29 + 0x134) = fVar62 + *(float *)(lVar29 + 0x134);
  *(ulong *)(lVar29 + 0x138) =
       CONCAT44(fVar81 + (float)((ulong)*(undefined8 *)(lVar29 + 0x138) >> 0x20),
                fVar79 + (float)*(undefined8 *)(lVar29 + 0x138));
  lVar29 = *plVar2;
  if ((lVar29 == 0) || (lVar36 = *(long *)(lVar29 + 0x38), lVar36 == 0)) goto LAB_02491464;
  uVar50 = *(uint *)(lVar36 + 0x18);
  if (uVar50 <= uVar33)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar43 = lVar36 + lVar49 * 0x178;
  *(ulong *)(lVar43 + 0x140) =
       CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar43 + 0x140) >> 0x20),
                fVar62 + (float)*(undefined8 *)(lVar43 + 0x140));
  *(ulong *)(lVar43 + 0x148) =
       CONCAT44(fVar79 + (float)((ulong)*(undefined8 *)(lVar43 + 0x148) >> 0x20),
                fVar79 + (float)*(undefined8 *)(lVar43 + 0x148));
  *(float *)(lVar43 + 0x150) = fVar79 + *(float *)(lVar43 + 0x150);
  if (uVar32 == uVar17) {
    uVar17 = *puVar1 - 1;
    if (uVar33 == uVar17) goto LAB_0248fccc;
  }
  else {
    lVar29 = *(long *)(lVar29 + 0x50);
    if (lVar29 == 0) goto LAB_02491464;
    if (*(uint *)(lVar29 + 0x18) <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar43 = (long)(int)uVar17;
    lVar45 = lVar29 + lVar43 * 0x5c;
    fVar84 = fVar79 + *(float *)(lVar45 + 0x54);
    *(ulong *)(lVar45 + 0x4c) =
         CONCAT44(fVar79 + (float)((ulong)*(undefined8 *)(lVar45 + 0x4c) >> 0x20),
                  fVar79 + (float)*(undefined8 *)(lVar45 + 0x4c));
    *(float *)(lVar45 + 0x54) = fVar84;
    *(float *)(lVar45 + 0x58) = fVar62 + *(float *)(lVar45 + 0x58);
    if (uVar50 <= *(uint *)(lVar45 + 0x34))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar87 = *(undefined4 *)(lVar36 + (long)(int)*(uint *)(lVar45 + 0x34) * 0x178 + 0x11c);
    lVar29 = lVar29 + lVar43 * 0x5c;
    *(float *)(lVar29 + 0x70) = fVar84;
    *(undefined4 *)(lVar29 + 0x6c) = uVar87;
    lVar29 = *plVar2;
    if ((lVar29 == 0) || (lVar36 = *(long *)(lVar29 + 0x50), lVar36 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar36 + 0x18) <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar29 = *(long *)(lVar29 + 0x38);
    if (lVar29 == 0) goto LAB_02491464;
    uVar17 = *(uint *)(lVar36 + lVar43 * 0x5c + 0x40);
    if (*(uint *)(lVar29 + 0x18) <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar36 = lVar36 + lVar43 * 0x5c;
    *(undefined4 *)(lVar36 + 0x74) = *(undefined4 *)(lVar29 + (long)(int)uVar17 * 0x178 + 0x128);
    *(undefined4 *)(lVar36 + 0x78) = *(undefined4 *)(lVar36 + 0x4c);
    uVar17 = *puVar1 - 1;
LAB_0248fccc:
    if (uVar33 == uVar17) {
      lVar29 = *plVar2;
      if ((lVar29 == 0) || (lVar36 = *(long *)(lVar29 + 0x50), lVar36 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar36 + 0x18) <= uVar32)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar43 = lVar36 + lVar24 * 0x5c;
      fVar84 = fVar79 + *(float *)(lVar43 + 0x54);
      *(ulong *)(lVar43 + 0x4c) =
           CONCAT44(fVar79 + (float)((ulong)*(undefined8 *)(lVar43 + 0x4c) >> 0x20),
                    fVar79 + (float)*(undefined8 *)(lVar43 + 0x4c));
      *(float *)(lVar43 + 0x54) = fVar84;
      *(float *)(lVar43 + 0x58) = fVar62 + *(float *)(lVar43 + 0x58);
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_02491464;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(lVar43 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar87 = *(undefined4 *)(lVar29 + (long)(int)*(uint *)(lVar43 + 0x34) * 0x178 + 0x11c);
      lVar36 = lVar36 + lVar24 * 0x5c;
      *(float *)(lVar36 + 0x70) = fVar84;
      *(undefined4 *)(lVar36 + 0x6c) = uVar87;
      lVar29 = *plVar2;
      if ((lVar29 == 0) || (lVar36 = *(long *)(lVar29 + 0x50), lVar36 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar36 + 0x18) <= uVar32)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_02491464;
      uVar17 = *(uint *)(lVar36 + lVar24 * 0x5c + 0x40);
      if (*(uint *)(lVar29 + 0x18) <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar36 = lVar36 + lVar24 * 0x5c;
      *(undefined4 *)(lVar36 + 0x74) = *(undefined4 *)(lVar29 + (long)(int)uVar17 * 0x178 + 0x128);
      *(undefined4 *)(lVar36 + 0x78) = *(undefined4 *)(lVar36 + 0x4c);
    }
  }
  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar20 = FUN_016f9468(uVar42,0);
  if (((((uVar20 & 1) == 0) && (1 < uVar42 - 0x2010)) && (uVar42 != 0xad)) && (uVar42 != 0x2d)) {
    if (bVar7) {
      if (((uVar41 != 1) && ((int)uVar33 < (int)(*(uint *)(lVar46 + 0x18) - 1))) &&
         (((int)uVar33 < (int)*puVar1 && ((uVar42 == 0x2019 || (uVar42 == 0x27)))))) {
        if (*(uint *)(lVar46 + 0x18) <= uVar41 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar5 = *(undefined2 *)(lVar46 + local_1738 + -0x438);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar20 = FUN_016f9468(uVar5,0);
        if ((uVar20 & 1) != 0) {
          if (*(uint *)(lVar46 + 0x18) <= uVar41)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar5 = *(undefined2 *)(lVar46 + local_1738 + -0x148);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar20 = FUN_016f9468(uVar5,0);
          if ((uVar20 & 1) != 0) goto LAB_0248fee0;
        }
      }
    }
    else {
      if (uVar41 != 1) {
LAB_024909a0:
        bVar7 = false;
        goto LAB_0248fee8;
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
        if (((uVar42 != 0x200b) && ((uVar20 & 1) == 0)) && (*puVar1 != 1)) goto LAB_024909a0;
      }
    }
    if (uVar33 == *puVar1 - 1) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar20 = FUN_016f9468(uVar42,0);
      iVar18 = iVar16;
      if ((uVar20 & 1) == 0) goto LAB_02490204;
    }
    else {
LAB_02490204:
      iVar18 = uVar41 - 2;
    }
    lVar29 = *plVar2;
    if (lVar29 == 0) goto LAB_02491464;
    lVar36 = *(long *)(lVar29 + 0x40);
    if (lVar36 == 0) goto LAB_02491464;
    uVar17 = *(uint *)(lVar29 + 0x24);
    iVar19 = *(int *)(lVar36 + 0x18);
    if (iVar19 < (int)(uVar17 + 1)) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147b84((long *)(lVar29 + 0x40),iVar19 + 1,
                   *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
      lVar29 = *plVar2;
      if (lVar29 == 0) goto LAB_02491464;
    }
    lVar36 = *(long *)(lVar29 + 0x40);
    if (lVar36 == 0) goto LAB_02491464;
    if (*(uint *)(lVar36 + 0x18) <= uVar17)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar36 = lVar36 + (long)(int)uVar17 * 0x18;
    *(long **)(lVar36 + 0x20) = param_1;
    *(uint *)(lVar36 + 0x28) = local_174c;
    *(int *)(lVar36 + 0x2c) = iVar18;
    *(uint *)(lVar36 + 0x30) = (iVar18 - local_174c) + 1;
    lVar36 = *(long *)(lVar29 + 0x50);
    *(int *)(lVar29 + 0x24) = *(int *)(lVar29 + 0x24) + 1;
    if (lVar36 == 0) goto LAB_02491464;
    if (*(uint *)(lVar36 + 0x18) <= uVar32)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar36 = lVar36 + lVar24 * 0x5c;
    bVar7 = false;
    local_17bc = local_17bc + 1;
    *(int *)(lVar36 + 0x30) = *(int *)(lVar36 + 0x30) + 1;
  }
  else {
    if (!bVar7) {
      local_174c = uVar33;
    }
    if (uVar33 == *puVar1 - 1) {
      lVar29 = *plVar2;
      if (lVar29 == 0) goto LAB_02491464;
      lVar36 = *(long *)(lVar29 + 0x40);
      if (lVar36 == 0) goto LAB_02491464;
      uVar17 = *(uint *)(lVar29 + 0x24);
      iVar18 = *(int *)(lVar36 + 0x18);
      if (iVar18 < (int)(uVar17 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar29 + 0x40),iVar18 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar29 = *plVar2;
        if (lVar29 == 0) goto LAB_02491464;
      }
      lVar36 = *(long *)(lVar29 + 0x40);
      if (lVar36 == 0) goto LAB_02491464;
      if (*(uint *)(lVar36 + 0x18) <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar36 = lVar36 + (long)(int)uVar17 * 0x18;
      *(long **)(lVar36 + 0x20) = param_1;
      *(uint *)(lVar36 + 0x28) = local_174c;
      *(uint *)(lVar36 + 0x2c) = uVar33;
      *(uint *)(lVar36 + 0x30) = uVar41 - local_174c;
      lVar36 = *(long *)(lVar29 + 0x50);
      *(int *)(lVar29 + 0x24) = *(int *)(lVar29 + 0x24) + 1;
      if (lVar36 == 0) goto LAB_02491464;
      if (*(uint *)(lVar36 + 0x18) <= uVar32)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar36 = lVar36 + lVar24 * 0x5c;
      local_17bc = local_17bc + 1;
      *(int *)(lVar36 + 0x30) = *(int *)(lVar36 + 0x30) + 1;
    }
LAB_0248fee0:
    bVar7 = true;
  }
LAB_0248fee8:
  if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 == 0)) goto LAB_02491464;
  uVar17 = *(uint *)(lVar29 + 0x18);
  if (uVar17 <= uVar33)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar29 + lVar49 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar13) {
LAB_0248ff18:
      if (uVar17 <= uVar41 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = *param_1;
      uVar87 = *(undefined4 *)(lVar29 + local_1738 + -0x330);
      uVar69 = *(undefined4 *)(lVar29 + local_1738 + -0x2f8);
LAB_02490474:
      pcVar39 = *(code **)(lVar24 + 0x908);
      uVar67 = *(undefined8 *)(lVar24 + 0x910);
LAB_0249047c:
      (*pcVar39)(local_180c,local_1814,local_1810,uVar87,local_1794,0,local_1808,uVar69,param_1,
                 (long)&local_c0 + 4,local_1804,uVar67);
      puVar9 = System_Threading_Mutex_TypeInfo;
      lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar29 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar29 = *(long *)puVar9;
      }
LAB_024904cc:
      bVar13 = false;
      fVar66 = 0.0;
      local_1794 = *(float *)(*(long *)(lVar29 + 0xb8) + 0x15a8);
      local_1798 = 0.0;
    }
    else {
LAB_024903d8:
      bVar13 = false;
    }
  }
  else {
    lVar29 = lVar29 + lVar49 * 0x178;
    iVar18 = *(int *)(lVar29 + 0x68);
    *(undefined4 *)(lVar29 + 0x16c) = local_c0._4_4_;
    if ((((int)param_1[100] < (int)uVar33) || ((int)param_1[0x65] < (int)uVar32)) ||
       (((int)param_1[0x5b] == 5 && (iVar18 + 1 != (int)param_1[0x66])))) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar20 = FUN_016f68bc(uVar42,0);
    if ((uVar42 != 0x200b) && ((uVar20 & 1) == 0)) {
      lVar29 = *plVar2;
      if ((lVar29 == 0) || (lVar24 = *(long *)(lVar29 + 0x38), lVar24 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= uVar33)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      fVar84 = *(float *)(lVar24 + lVar49 * 0x178 + 0x160);
      if (fVar66 <= fVar84) {
        fVar66 = fVar84;
      }
      if (local_1798 <= ABS(fVar77)) {
        local_1798 = ABS(fVar77);
      }
      if (iVar18 != local_1818) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar29 = *plVar2;
          if (lVar29 == 0) goto LAB_02491464;
          lVar24 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        else {
          lVar24 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        local_1794 = *(float *)(lVar24 + 0x15a8);
      }
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_02491464;
      if (*(uint *)(lVar29 + 0x18) <= uVar33)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (param_1[0x1e] == 0) goto LAB_02491464;
      fVar53 = *(float *)(lVar29 + lVar49 * 0x178 + 0x14c);
      fVar84 = (float)FUN_026fd1d0(param_1[0x1e] + 0x50,0);
      fVar53 = fVar53 + fVar66 * fVar84;
      local_1818 = iVar18;
      if (fVar53 <= local_1794) {
        local_1794 = fVar53;
      }
    }
    if (!bVar13) {
      bVar13 = false;
      if ((((uVar42 == 0xd) || ((uVar42 | 1) == 0xb)) || ((int)uVar40 < (int)uVar33)) || (!bVar15))
      goto LAB_024904e8;
      if (uVar33 == uVar40) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar20 = FUN_016fa418(uVar42,0);
        if ((uVar20 & 1) != 0) goto LAB_024903d8;
      }
      if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar29 + 0x18) <= uVar33)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = lVar29 + lVar49 * 0x178;
      local_1808 = *(float *)(lVar29 + 0x160);
      local_180c = *(float *)(lVar29 + 0x11c);
      bVar13 = fVar66 != 0.0;
      fVar84 = local_1808;
      if (bVar13) {
        fVar84 = fVar66;
      }
      fVar66 = fVar84;
      local_1804 = *(uint *)(lVar29 + 0x168);
      local_1810 = 0.0;
      fVar84 = fVar77;
      if (bVar13) {
        fVar84 = local_1798;
      }
      local_1814 = local_1794;
      local_1798 = fVar84;
    }
    if (*puVar1 == 1) {
      if ((*plVar2 != 0) && (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 != 0)) {
        if (uVar33 < *(uint *)(lVar29 + 0x18)) {
          lVar29 = lVar29 + lVar49 * 0x178;
          lVar24 = *param_1;
          uVar87 = *(undefined4 *)(lVar29 + 0x128);
          uVar69 = *(undefined4 *)(lVar29 + 0x160);
          goto LAB_02490474;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    if ((uVar33 == uVar28) || ((int)uVar40 <= (int)uVar33)) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar20 = FUN_016f68bc(uVar42,0);
      if ((*plVar2 != 0) && (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 != 0)) {
        if (uVar42 == 0x200b || (uVar20 & 1) != 0) {
          lVar24 = lVar21;
          if (*(uint *)(lVar29 + 0x18) <= uVar40)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
          lVar24 = lVar49;
          if (*(uint *)(lVar29 + 0x18) <= uVar33)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        lVar29 = lVar29 + lVar24 * 0x178;
        uVar87 = *(undefined4 *)(lVar29 + 0x128);
        uVar69 = *(undefined4 *)(lVar29 + 0x160);
        pcVar39 = *(code **)(*param_1 + 0x908);
        uVar67 = *(undefined8 *)(*param_1 + 0x910);
        goto LAB_0249047c;
      }
      goto LAB_02491464;
    }
    if (!bVar15) {
      if ((*plVar2 != 0) && (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 != 0)) {
        uVar17 = *(uint *)(lVar29 + 0x18);
        goto LAB_0248ff18;
      }
      goto LAB_02491464;
    }
    if ((int)uVar33 < (int)(*puVar1 - 1)) {
      if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar29 + 0x18) <= uVar41)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar20 = FUN_024a9e4c(local_1804,*(undefined4 *)(lVar29 + local_1738),0);
      if ((uVar20 & 1) == 0) {
        if ((*plVar2 != 0) && (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 != 0)) {
          if (uVar33 < *(uint *)(lVar29 + 0x18)) {
            lVar29 = lVar29 + lVar49 * 0x178;
            (**(code **)(*param_1 + 0x908))
                      (local_180c,local_1814,local_1810,*(undefined4 *)(lVar29 + 0x128),local_1794,0
                       ,local_1808,*(undefined4 *)(lVar29 + 0x160),param_1,(long)&local_c0 + 4,
                       local_1804,*(undefined8 *)(*param_1 + 0x910));
            puVar9 = System_Threading_Mutex_TypeInfo;
            lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar29 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar29 = *(long *)puVar9;
            }
            goto LAB_024904cc;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        goto LAB_02491464;
      }
    }
    bVar13 = true;
  }
LAB_024904e8:
  if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 == 0)) goto LAB_02491464;
  if (*(uint *)(lVar29 + 0x18) <= uVar33)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (lVar44 == 0) goto LAB_02491464;
  uVar17 = *(uint *)(lVar29 + lVar49 * 0x178 + 400);
  fVar84 = (float)FUN_026fd1f0(lVar44 + 0x50,0);
  if ((uVar17 >> 6 & 1) == 0) {
    if (bVar6) {
      if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar29 + 0x18) <= uVar41 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar87 = *(undefined4 *)(lVar29 + local_1738 + -0x330);
      pcVar39 = *(code **)(*param_1 + 0x908);
      uVar67 = *(undefined8 *)(*param_1 + 0x910);
      fVar79 = local_17dc * fVar84 + *(float *)(lVar29 + local_1738 + -0x30c);
LAB_02490a68:
      (*pcVar39)(local_17e4,local_17f4,fVar52,uVar87,fVar79,0,local_17dc,local_17dc,param_1,
                 (long)&local_c0 + 4,local_17e0,uVar67);
    }
LAB_02490a9c:
    bVar6 = false;
  }
  else {
    lVar29 = *plVar2;
    if ((lVar29 == 0) || (lVar24 = *(long *)(lVar29 + 0x38), lVar24 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar24 + 0x18) <= uVar33)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(undefined4 *)(lVar24 + lVar49 * 0x178 + 0x174) = local_c0._4_4_;
    if ((((int)param_1[100] < (int)uVar33) || ((int)param_1[0x65] < (int)uVar32)) ||
       (((int)param_1[0x5b] == 5 &&
        (*(int *)(lVar24 + lVar49 * 0x178 + 0x68) + 1 != (int)param_1[0x66])))) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if ((((uVar42 == 0xd) || ((uVar42 | 1) == 0xb)) || ((int)uVar40 < (int)uVar33)) ||
       (bVar6 || !bVar15)) {
LAB_02490668:
      if (!bVar6) goto LAB_02490a9c;
    }
    else {
      if (uVar33 == uVar40) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar20 = FUN_016fa418(uVar42,0);
        if ((uVar20 & 1) != 0) goto LAB_02490668;
        lVar29 = *plVar2;
        if (lVar29 == 0) goto LAB_02491464;
      }
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_02491464;
      if (*(uint *)(lVar29 + 0x18) <= uVar33)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = lVar29 + lVar49 * 0x178;
      fVar75 = *(float *)(lVar29 + 0x60);
      local_17dc = *(float *)(lVar29 + 0x160);
      local_182c = *(float *)(lVar29 + 0x14c);
      local_17e4 = *(float *)(lVar29 + 0x11c);
      local_17e0 = *(uint *)(lVar29 + 0x170);
      local_17f4 = fVar84 * local_17dc + local_182c;
      fVar52 = 0.0;
    }
    uVar17 = *puVar1;
    if (uVar17 == 1) {
      if (*plVar2 != 0) {
        lVar29 = *(long *)(*plVar2 + 0x38);
joined_r0x024907c8:
        if (lVar29 != 0) {
          if (uVar33 < *(uint *)(lVar29 + 0x18)) {
            lVar29 = lVar29 + lVar49 * 0x178;
            lVar21 = *param_1;
            uVar87 = *(undefined4 *)(lVar29 + 0x128);
            fVar79 = *(float *)(lVar29 + 0x14c);
LAB_024907e8:
            pcVar39 = *(code **)(lVar21 + 0x908);
            uVar67 = *(undefined8 *)(lVar21 + 0x910);
LAB_02490a64:
            fVar79 = fVar84 * local_17dc + fVar79;
            goto LAB_02490a68;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
      }
      goto LAB_02491464;
    }
    if (uVar33 == uVar28) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar20 = FUN_016f68bc(uVar42,0);
      if ((*plVar2 != 0) && (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 != 0)) {
        uVar17 = *(uint *)(lVar29 + 0x18);
        if (uVar42 == 0x200b || (uVar20 & 1) != 0) {
          if (uVar17 <= uVar40)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
LAB_02490a40:
          lVar21 = lVar49;
          if (uVar17 <= uVar33)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
LAB_02490a48:
        lVar29 = lVar29 + lVar21 * 0x178;
        fVar79 = *(float *)(lVar29 + 0x14c);
        uVar87 = *(undefined4 *)(lVar29 + 0x128);
        pcVar39 = *(code **)(*param_1 + 0x908);
        uVar67 = *(undefined8 *)(*param_1 + 0x910);
        goto LAB_02490a64;
      }
      goto LAB_02491464;
    }
    if ((int)uVar33 < (int)uVar17) {
      lVar29 = *plVar2;
      if ((lVar29 != 0) && (lVar24 = *(long *)(lVar29 + 0x38), lVar24 != 0)) {
        if (uVar41 < *(uint *)(lVar24 + 0x18)) {
          if (*(float *)(lVar24 + local_1738 + -0x108) == fVar75) {
            fVar53 = *(float *)(lVar24 + local_1738 + -0x1c);
            if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar20 = FUN_024aa280(fVar79 + fVar53,local_182c,0);
            if ((uVar20 & 1) != 0) {
              uVar17 = *puVar1;
              goto LAB_024908ec;
            }
            lVar29 = *plVar2;
            if (lVar29 == 0) goto LAB_02491464;
          }
          lVar29 = *(long *)(lVar29 + 0x38);
          if (lVar29 != 0) {
            uVar17 = *(uint *)(lVar29 + 0x18);
            if ((int)uVar33 <= (int)uVar40) goto LAB_02490a40;
            if (uVar40 < uVar17) goto LAB_02490a48;
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
          goto LAB_02491464;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
LAB_024908ec:
    if ((int)uVar33 < (int)uVar17) {
      iVar18 = FUN_02681c0c(lVar44,0);
      if (*(uint *)(lVar46 + 0x18) <= uVar41)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = *(long *)(lVar46 + local_1738 + -0x130);
      if (lVar29 == 0) goto LAB_02491464;
      iVar19 = FUN_02681c0c(lVar29,0);
      if (iVar18 != iVar19) {
        if (*plVar2 != 0) {
          lVar29 = *(long *)(*plVar2 + 0x38);
          goto joined_r0x024907c8;
        }
        goto LAB_02491464;
      }
    }
    if (!bVar15) {
      if ((*plVar2 != 0) && (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 != 0)) {
        if (uVar41 - 2 < *(uint *)(lVar29 + 0x18)) {
          lVar21 = *param_1;
          uVar87 = *(undefined4 *)(lVar29 + local_1738 + -0x330);
          fVar79 = *(float *)(lVar29 + local_1738 + -0x30c);
          goto LAB_024907e8;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    bVar6 = true;
  }
  if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 == 0)) goto LAB_02491464;
  uVar17 = (uint)*(undefined8 *)(lVar29 + 0x18);
  if (uVar17 <= uVar33)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar29 + lVar49 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar14) {
      (**(code **)(*param_1 + 0x918))
                (local_17b8,local_17b4,local_17cc,fVar55,local_17c0,local_17cc,param_1,
                 (long)&local_c0 + 4,local_d0 & 0xffffffff,*(undefined8 *)(*param_1 + 0x920));
    }
LAB_02490b04:
    bVar14 = false;
  }
  else {
    if ((((int)param_1[100] < (int)uVar33) || ((int)param_1[0x65] < (int)uVar32)) ||
       (((int)param_1[0x5b] == 5 &&
        (*(int *)(lVar29 + lVar49 * 0x178 + 0x68) + 1 != (int)param_1[0x66])))) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if (!bVar14) {
      if ((((uVar42 == 0xd) || ((uVar42 | 1) == 0xb)) || ((int)uVar40 < (int)uVar33)) || (!bVar15))
      goto LAB_02490b04;
      if (uVar33 == uVar40) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar20 = FUN_016fa418(uVar42,0);
        if ((uVar20 & 1) != 0) goto LAB_02490b04;
      }
      puVar9 = System_Threading_Mutex_TypeInfo;
      lVar21 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar21 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar21 = *(long *)puVar9;
      }
      if ((*plVar2 == 0) || (lVar29 = *(long *)(*plVar2 + 0x38), lVar29 == 0)) goto LAB_02491464;
      uVar17 = (uint)*(undefined8 *)(lVar29 + 0x18);
      if (uVar17 <= uVar33)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar21 = *(long *)(lVar21 + 0xb8);
      lVar24 = lVar29 + lVar49 * 0x178;
      uStack_c8 = *(undefined8 *)(lVar24 + 0x184);
      local_d0 = *(ulong *)(lVar24 + 0x17c);
      local_17b8 = *(float *)(lVar21 + 0x1598);
      local_17b4 = *(float *)(lVar21 + 0x159c);
      fVar55 = *(float *)(lVar21 + 0x15a0);
      local_17c0 = *(float *)(lVar21 + 0x15a4);
      local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar24 + 0x18c));
      local_17cc = 0.0;
    }
    if (uVar17 <= uVar33)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar29 = lVar29 + lVar49 * 0x178;
    fVar84 = *(float *)(lVar29 + 0x128);
    fVar85 = *(float *)(lVar29 + 0x188);
    uVar64 = *(ulong *)(lVar29 + 0x17c);
    fVar74 = *(float *)(lVar29 + 0x184);
    uVar67 = *(undefined8 *)(lVar29 + 0x184);
    fVar88 = *(float *)(lVar29 + 0x18c);
    fVar79 = *(float *)(lVar29 + 0x11c);
    fVar53 = *(float *)(lVar29 + 0x148);
    fVar54 = *(float *)(lVar29 + 0x150);
    uStack_16e8 = uStack_c8;
    local_16f0 = local_d0;
    local_16e0 = (float)local_c0;
    local_1708 = uVar64;
    local_1700 = fVar74;
    local_16fc = fVar85;
    local_16f8 = fVar88;
    uVar20 = FUN_024ab330(&local_16f0,&local_1708,0);
    lVar29 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if ((uVar20 & 1) == 0) {
      if (*(int *)(lVar29 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar29);
      }
      fVar84 = fVar84 + (float)uStack_c8;
      fVar79 = fVar79 - local_d0._4_4_;
      if (fVar79 <= local_17b8) {
        local_17b8 = fVar79;
      }
      if (fVar54 - (float)local_c0 <= local_17b4) {
        local_17b4 = fVar54 - (float)local_c0;
      }
      if (fVar55 <= fVar84) {
        fVar55 = fVar84;
      }
      if (local_17c0 <= fVar53 + uStack_c8._4_4_) {
        local_17c0 = fVar53 + uStack_c8._4_4_;
      }
    }
    else {
      if (*(int *)(lVar29 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar29);
      }
      fVar79 = (fVar79 + (fVar55 - (float)uStack_c8)) * 0.5;
      if (fVar54 <= local_17b4) {
        local_17b4 = fVar54;
      }
      if (local_17c0 <= fVar53) {
        local_17c0 = fVar53;
      }
      (**(code **)(*param_1 + 0x918))
                (local_17b8,local_17b4,local_17cc,fVar79,local_17c0,local_17cc,param_1,
                 (long)&local_c0 + 4,local_d0 & 0xffffffff,*(undefined8 *)(*param_1 + 0x920));
      local_17b4 = fVar54 - fVar88;
      local_c0 = CONCAT44(local_c0._4_4_,fVar88);
      fVar55 = fVar84 + fVar74;
      local_17cc = 0.0;
      local_17c0 = fVar53 + fVar85;
      local_17b8 = fVar79;
      local_d0 = uVar64;
      uStack_c8 = uVar67;
    }
    if (((*puVar1 == 1) || (uVar33 == uVar28)) || (((int)uVar40 <= (int)uVar33 || (!bVar15)))) {
      (**(code **)(*param_1 + 0x918))
                (local_17b8,local_17b4,local_17cc,fVar55,local_17c0,local_17cc,param_1,
                 (long)&local_c0 + 4,local_d0 & 0xffffffff,*(undefined8 *)(*param_1 + 0x920));
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
  }
  uVar33 = *puVar1;
  iVar16 = iVar16 + 1;
  local_1738 = local_1738 + 0x178;
  bVar15 = (int)uVar33 <= (int)uVar41;
  uVar17 = uVar32;
  uVar41 = uVar41 + 1;
  if (bVar15) goto LAB_02491038;
  goto LAB_0248ef74;
LAB_02491038:
  lVar46 = *plVar2;
  if (lVar46 == 0) goto LAB_02491464;
  iVar16 = uVar32 + 1;
  plVar37 = (long *)PTR_DAT_033ed410;
LAB_02491068:
  *(uint *)(lVar46 + 0x18) = uVar33;
  lVar29 = param_1[0xd3];
  *(int *)(lVar46 + 0x2c) = iVar16;
  iVar16 = local_17bc;
  if ((int)uVar33 < 1) {
    iVar16 = 1;
  }
  if (local_17bc == 0) {
    iVar16 = 1;
  }
  *(int *)(lVar46 + 0x1c) = (int)lVar29;
  *(int *)(lVar46 + 0x24) = iVar16;
  *(int *)(lVar46 + 0x30) = (int)param_1[0x95] + 1;
  if (((int)param_1[0x62] != 0xff) ||
     (uVar20 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0)),
     (uVar20 & 1) == 0)) {
LAB_02491468:
    lVar46 = *(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
LAB_02491474:
    if (*(int *)(lVar46 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_024a942c(param_1,0);
    return;
  }
  lVar46 = param_1[0xda];
  if (lVar46 != 0) {
    (**(code **)(lVar46 + 0x18))
              (*(undefined8 *)(lVar46 + 0x40),*plVar2,*(undefined8 *)(lVar46 + 0x28));
  }
  if (*(int *)((long)param_1 + 0x314) != 0) {
    if ((*plVar2 == 0) || (lVar46 = *(long *)(*plVar2 + 0x60), lVar46 == 0)) goto LAB_02491464;
    if (*(int *)(*plVar37 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(int *)(lVar46 + 0x18) == 0)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    FUN_024e8000(lVar46 + 0x20,1,0);
  }
  if (param_1[0x73] != 0) {
    UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
              (param_1[0x73],0);
    if ((param_1[0x6c] != 0) && (lVar46 = *(long *)(param_1[0x6c] + 0x60), lVar46 != 0)) {
      if (*(int *)(lVar46 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      if (param_1[0x73] != 0) {
        FUN_0266b9c4(param_1[0x73],*(undefined8 *)(lVar46 + 0x30),0);
        if ((param_1[0x6c] != 0) && (lVar46 = *(long *)(param_1[0x6c] + 0x60), lVar46 != 0)) {
          if (*(int *)(lVar46 + 0x18) == 0)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          if (param_1[0x73] != 0) {
            FUN_0266bbc8(param_1[0x73],*(undefined8 *)(lVar46 + 0x48),0);
            if ((param_1[0x6c] != 0) && (lVar46 = *(long *)(param_1[0x6c] + 0x60), lVar46 != 0)) {
              if (*(int *)(lVar46 + 0x18) == 0)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              if (param_1[0x73] != 0) {
                FUN_0266bc74(param_1[0x73],*(undefined8 *)(lVar46 + 0x50),0);
                if ((param_1[0x6c] != 0) && (lVar46 = *(long *)(param_1[0x6c] + 0x60), lVar46 != 0))
                {
                  if (*(int *)(lVar46 + 0x18) == 0)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  if (param_1[0x73] != 0) {
                    FUN_0266c1dc(param_1[0x73],*(undefined8 *)(lVar46 + 0x58),0);
                    if (param_1[0x73] != 0) {
                      FUN_0266ed90(param_1[0x73],0);
                      lVar46 = *plVar2;
                      if (lVar46 != 0) {
                        lVar21 = 0;
                        lVar29 = 0;
                        do {
                          uVar20 = lVar29 + 1;
                          if ((long)*(int *)(lVar46 + 0x34) <= (long)uVar20) goto LAB_02491468;
                          lVar46 = *(long *)(lVar46 + 0x60);
                          if (lVar46 == 0) break;
                          if (*(int *)(*plVar37 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          if (*(uint *)(lVar46 + 0x18) <= uVar20)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                          ;
                          FUN_024e7ecc(lVar46 + lVar21 + 0x70,0);
                          lVar46 = param_1[0xe0];
                          if (lVar46 == 0) break;
                          if (*(uint *)(lVar46 + 0x18) <= uVar20)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                          ;
                          uVar67 = *(undefined8 *)(lVar46 + lVar29 * 8 + 0x28);
                          if (*(int *)(*plVar51 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          uVar64 = FUN_0268b4e0(uVar67,0,0);
                          if ((uVar64 & 1) == 0) {
                            if (*(int *)((long)param_1 + 0x314) != 0) {
                              if ((*plVar2 == 0) ||
                                 (lVar46 = *(long *)(*plVar2 + 0x60), lVar46 == 0)) break;
                              if (*(int *)(*plVar37 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              if (*(uint *)(lVar46 + 0x18) <= uVar20)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              FUN_024e8000(lVar46 + lVar21 + 0x70,1,0);
                            }
                            lVar46 = param_1[0xe0];
                            if (lVar46 == 0) break;
                            if (*(uint *)(lVar46 + 0x18) <= uVar20)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            lVar46 = *(long *)(lVar46 + lVar29 * 8 + 0x28);
                            if (lVar46 == 0) break;
                            lVar46 = FUN_024eefa0(lVar46,0);
                            if ((*plVar2 == 0) || (lVar49 = *(long *)(*plVar2 + 0x60), lVar49 == 0))
                            break;
                            if (*(uint *)(lVar49 + 0x18) <= uVar20)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            if (lVar46 == 0) break;
                            FUN_0266b9c4(lVar46,*(undefined8 *)(lVar49 + lVar21 + 0x80),0);
                            lVar46 = param_1[0xe0];
                            if (lVar46 == 0) break;
                            if (*(uint *)(lVar46 + 0x18) <= uVar20)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            lVar46 = *(long *)(lVar46 + lVar29 * 8 + 0x28);
                            if (lVar46 == 0) break;
                            lVar46 = FUN_024eefa0(lVar46,0);
                            if ((*plVar2 == 0) || (lVar49 = *(long *)(*plVar2 + 0x60), lVar49 == 0))
                            break;
                            if (*(uint *)(lVar49 + 0x18) <= uVar20)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            if (lVar46 == 0) break;
                            FUN_0266bbc8(lVar46,*(undefined8 *)(lVar49 + lVar21 + 0x98),0);
                            lVar46 = param_1[0xe0];
                            if (lVar46 == 0) break;
                            if (*(uint *)(lVar46 + 0x18) <= uVar20)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            lVar46 = *(long *)(lVar46 + lVar29 * 8 + 0x28);
                            if (lVar46 == 0) break;
                            lVar46 = FUN_024eefa0(lVar46,0);
                            if ((*plVar2 == 0) || (lVar49 = *(long *)(*plVar2 + 0x60), lVar49 == 0))
                            break;
                            if (*(uint *)(lVar49 + 0x18) <= uVar20)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            if (lVar46 == 0) break;
                            FUN_0266bc74(lVar46,*(undefined8 *)(lVar49 + lVar21 + 0xa0),0);
                            lVar46 = param_1[0xe0];
                            if (lVar46 == 0) break;
                            if (*(uint *)(lVar46 + 0x18) <= uVar20)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            lVar46 = *(long *)(lVar46 + lVar29 * 8 + 0x28);
                            if (lVar46 == 0) break;
                            lVar46 = FUN_024eefa0(lVar46,0);
                            if ((*plVar2 == 0) || (lVar49 = *(long *)(*plVar2 + 0x60), lVar49 == 0))
                            break;
                            if (*(uint *)(lVar49 + 0x18) <= uVar20)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            if (lVar46 == 0) break;
                            FUN_0266c1dc(lVar46,*(undefined8 *)(lVar49 + lVar21 + 0xa8),0);
                            lVar46 = param_1[0xe0];
                            if (lVar46 == 0) break;
                            if (*(uint *)(lVar46 + 0x18) <= uVar20)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            lVar46 = *(long *)(lVar46 + lVar29 * 8 + 0x28);
                            if ((lVar46 == 0) || (lVar46 = FUN_024eefa0(lVar46,0), lVar46 == 0))
                            break;
                            FUN_0266ed90(lVar46,0);
                          }
                          lVar46 = *plVar2;
                          lVar29 = lVar29 + 1;
                          lVar21 = lVar21 + 0x50;
                        } while (lVar46 != 0);
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
  goto LAB_02491464;
}


