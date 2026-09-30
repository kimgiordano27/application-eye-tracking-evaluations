/*
FUNCTION_NAME: OVRSkeleton$$Start
ENTRY_POINT: 02d59ad8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_12;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRSkeleton__Start(void)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ClipPlaybackTracker_tE311D8396BEABBFDE613AAB1A13FE30D1A6FA75B *pCVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  List_1_tB829B146F0C20427588C75576BC36BB6A1D016E6 *pLVar9;
  OVRHapticsClip_t76F18B7843EDB06C61DE1DBA343216CEB5BE2E8C *pOVar10;
  void *pvVar11;
  long unaff_x29;
  float fVar12;
  undefined8 *in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined8 *in_stack_00000080;
  undefined8 *in_stack_00000088;
  undefined8 *in_stack_00000090;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000bc;
  byte bStack00000000000000df;
  undefined4 uStack00000000000000fc;
  undefined4 uStack0000000000000168;
  int iStack0000000000000178;
  int iStack00000000000001a4;
  byte bStack00000000000001b3;
  int iStack00000000000001c4;
  
  if (*(int *)(unaff_x29 + -0xdc) < 0) {
    *(undefined4 *)(unaff_x29 + -0x2c) = 0;
  }
  *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x29 + -0x18);
  *(undefined4 *)(unaff_x29 + -0xec) = *(undefined4 *)(unaff_x29 + -0xe4);
  *(undefined4 *)(unaff_x29 + -0xf0) = *(undefined4 *)(unaff_x29 + -0x2c);
  iVar3 = il2cpp_codegen_subtract<int,int>(*(int *)(unaff_x29 + -0xec),*(int *)(unaff_x29 + -0xf0));
  if (iVar3 == 0) {
    *(undefined4 *)(unaff_x29 + -0xf4) = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x1c);
    uVar4 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0xf4),1);
    *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x1c) = uVar4;
  }
  else {
    *(undefined4 *)(unaff_x29 + -0xf8) = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x20);
    uVar4 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0xf8),1);
    *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x20) = uVar4;
  }
  *(undefined4 *)(unaff_x29 + -0xfc) = *(undefined4 *)(unaff_x29 + -0x2c);
  if ((0 < *(int *)(unaff_x29 + -0xfc)) &&
     ((int)((ulong)*(undefined8 *)(unaff_x29 + -0x18) >> 0x20) == 0)) {
    uVar4 = il2cpp_codegen_add<int,int>(*(int *)(*(long *)(unaff_x29 + -8) + 0x24),1);
    *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x24) = uVar4;
  }
  *(int *)(*(long *)(unaff_x29 + -8) + 0x14) =
       (int)((ulong)*(undefined8 *)(unaff_x29 + -0x18) >> 0x20);
  uVar4 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(0);
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x18) = uVar4;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000070);
  uVar4 = Config_get_OptimalBufferSamplesCount_mBC971D5C4CF6F34A8A3925DC8103A09E3E8BF4F7_inline
                    ((MethodInfo *)0x0);
  *(undefined4 *)(unaff_x29 + -0x20) = uVar4;
  if ((*(byte *)(*(long *)(unaff_x29 + -8) + 0x10) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000070);
    iVar3 = Config_get_SampleRateHz_m2D1B79A8EC0A19BA0EA97E6B3039D15788BB9F47_inline
                      ((MethodInfo *)0x0);
    *(float *)(unaff_x29 + -0x30) = 1000.0 / (float)iVar3;
    fVar1 = *(float *)(unaff_x29 + -0x30);
    fVar12 = (float)il2cpp_codegen_multiply<float,float>(*(float *)(unaff_x29 + -0x1c),1000.0);
    iVar3 = il2cpp_codegen_cast_double_to_int<int>((double)(float)(int)(fVar12 / fVar1));
    *(int *)(unaff_x29 + -0x34) = iVar3;
    iVar3 = Config_get_MinimumSafeSamplesQueued_m479D3DEBCD5251637DC7FDE141FBECAC70DE5A1C_inline
                      ((MethodInfo *)0x0);
    uVar4 = il2cpp_codegen_add<int,int>(iVar3,*(int *)(unaff_x29 + -0x34));
    *(undefined4 *)(unaff_x29 + -0x38) = uVar4;
    if (*(int *)(unaff_x29 + -0x38) < *(int *)(unaff_x29 + -0x20)) {
      *(undefined4 *)(unaff_x29 + -0x20) = *(undefined4 *)(unaff_x29 + -0x38);
    }
  }
  if ((int)((ulong)*(undefined8 *)(unaff_x29 + -0x18) >> 0x20) <= *(int *)(unaff_x29 + -0x20)) {
    iVar3 = *(int *)(unaff_x29 + -0x20);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000070);
    iVar5 = Config_get_MaximumBufferSamplesCount_mFA9670050A7B57A5778B588CB400DBEB413DE4C0_inline
                      ((MethodInfo *)0x0);
    if (iVar5 < iVar3) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000070);
      uVar4 = Config_get_MaximumBufferSamplesCount_mFA9670050A7B57A5778B588CB400DBEB413DE4C0_inline
                        ((MethodInfo *)0x0);
      *(undefined4 *)(unaff_x29 + -0x20) = uVar4;
    }
    if ((int)*(undefined8 *)(unaff_x29 + -0x18) < *(int *)(unaff_x29 + -0x20)) {
      *(int *)(unaff_x29 + -0x20) = (int)*(undefined8 *)(unaff_x29 + -0x18);
    }
    *(undefined4 *)(unaff_x29 + -0x24) = 0;
    *(undefined4 *)(unaff_x29 + -0x28) = 0;
    while (*(int *)(unaff_x29 + -0x24) < *(int *)(unaff_x29 + -0x20)) {
      iVar3 = *(int *)(unaff_x29 + -0x28);
      pLVar9 = *(List_1_tB829B146F0C20427588C75576BC36BB6A1D016E6 **)
                (*(long *)(unaff_x29 + -8) + 0x28);
      NullCheck(pLVar9);
      iVar5 = List_1_get_Count_m56AACF0D9683BE0A6929A5B9DE131EE44C5DC9C1_inline
                        (pLVar9,(MethodInfo *)*in_stack_00000078);
      if (iVar5 <= iVar3) break;
      uVar4 = il2cpp_codegen_subtract<int,int>
                        (*(int *)(unaff_x29 + -0x20),*(int *)(unaff_x29 + -0x24));
      *(undefined4 *)(unaff_x29 + -0x3c) = uVar4;
      pLVar9 = *(List_1_tB829B146F0C20427588C75576BC36BB6A1D016E6 **)
                (*(long *)(unaff_x29 + -8) + 0x28);
      iVar3 = *(int *)(unaff_x29 + -0x28);
      NullCheck(pLVar9);
      pCVar6 = (ClipPlaybackTracker_tE311D8396BEABBFDE613AAB1A13FE30D1A6FA75B *)
               List_1_get_Item_m1DF20120684518D1E70C0DC8F9D80031B06744F3
                         (pLVar9,iVar3,(MethodInfo *)*in_stack_00000080);
      NullCheck(pCVar6);
      pOVar10 = (OVRHapticsClip_t76F18B7843EDB06C61DE1DBA343216CEB5BE2E8C *)
                ClipPlaybackTracker_get_Clip_m5F7BF9A75928114403808D29DCF2E00243A5D87A_inline
                          (pCVar6,(MethodInfo *)0x0);
      NullCheck(pOVar10);
      iVar5 = OVRHapticsClip_get_Count_mF6DCD041E169A35A5B208FE92AEE5D47269F107E_inline
                        (pOVar10,(MethodInfo *)0x0);
      pLVar9 = *(List_1_tB829B146F0C20427588C75576BC36BB6A1D016E6 **)
                (*(long *)(unaff_x29 + -8) + 0x28);
      iVar3 = *(int *)(unaff_x29 + -0x28);
      NullCheck(pLVar9);
      pCVar6 = (ClipPlaybackTracker_tE311D8396BEABBFDE613AAB1A13FE30D1A6FA75B *)
               List_1_get_Item_m1DF20120684518D1E70C0DC8F9D80031B06744F3
                         (pLVar9,iVar3,(MethodInfo *)*in_stack_00000080);
      NullCheck(pCVar6);
      iVar3 = ClipPlaybackTracker_get_ReadCount_m5CB89D120FC361680A8450515CA02357D2879191_inline
                        (pCVar6,(MethodInfo *)0x0);
      uVar4 = il2cpp_codegen_subtract<int,int>(iVar5,iVar3);
      *(undefined4 *)(unaff_x29 + -0x40) = uVar4;
      if (*(int *)(unaff_x29 + -0x40) < *(int *)(unaff_x29 + -0x3c)) {
        *(undefined4 *)(unaff_x29 + -0x3c) = *(undefined4 *)(unaff_x29 + -0x40);
      }
      if (0 < *(int *)(unaff_x29 + -0x3c)) {
        iVar3 = *(int *)(unaff_x29 + -0x3c);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000070);
        iVar5 = Config_get_SampleSizeInBytes_m8A59438CA870B1DEDA2DDE836BBF513D4DA6C209_inline
                          ((MethodInfo *)0x0);
        uVar4 = il2cpp_codegen_multiply<int,int>(iVar3,iVar5);
        *(undefined4 *)(unaff_x29 + -0x44) = uVar4;
        iVar3 = *(int *)(unaff_x29 + -0x24);
        iVar5 = Config_get_SampleSizeInBytes_m8A59438CA870B1DEDA2DDE836BBF513D4DA6C209_inline
                          ((MethodInfo *)0x0);
        uVar4 = il2cpp_codegen_multiply<int,int>(iVar3,iVar5);
        *(undefined4 *)(unaff_x29 + -0x48) = uVar4;
        pLVar9 = *(List_1_tB829B146F0C20427588C75576BC36BB6A1D016E6 **)
                  (*(long *)(unaff_x29 + -8) + 0x28);
        iVar3 = *(int *)(unaff_x29 + -0x28);
        NullCheck(pLVar9);
        pCVar6 = (ClipPlaybackTracker_tE311D8396BEABBFDE613AAB1A13FE30D1A6FA75B *)
                 List_1_get_Item_m1DF20120684518D1E70C0DC8F9D80031B06744F3
                           (pLVar9,iVar3,(MethodInfo *)*in_stack_00000080);
        NullCheck(pCVar6);
        iVar3 = ClipPlaybackTracker_get_ReadCount_m5CB89D120FC361680A8450515CA02357D2879191_inline
                          (pCVar6,(MethodInfo *)0x0);
        iVar5 = Config_get_SampleSizeInBytes_m8A59438CA870B1DEDA2DDE836BBF513D4DA6C209_inline
                          ((MethodInfo *)0x0);
        uVar4 = il2cpp_codegen_multiply<int,int>(iVar3,iVar5);
        *(undefined4 *)(unaff_x29 + -0x4c) = uVar4;
        pLVar9 = *(List_1_tB829B146F0C20427588C75576BC36BB6A1D016E6 **)
                  (*(long *)(unaff_x29 + -8) + 0x28);
        iVar3 = *(int *)(unaff_x29 + -0x28);
        NullCheck(pLVar9);
        pCVar6 = (ClipPlaybackTracker_tE311D8396BEABBFDE613AAB1A13FE30D1A6FA75B *)
                 List_1_get_Item_m1DF20120684518D1E70C0DC8F9D80031B06744F3
                           (pLVar9,iVar3,(MethodInfo *)*in_stack_00000080);
        NullCheck(pCVar6);
        pOVar10 = (OVRHapticsClip_t76F18B7843EDB06C61DE1DBA343216CEB5BE2E8C *)
                  ClipPlaybackTracker_get_Clip_m5F7BF9A75928114403808D29DCF2E00243A5D87A_inline
                            (pCVar6,(MethodInfo *)0x0);
        NullCheck(pOVar10);
        uVar8 = OVRHapticsClip_get_Samples_m433E8160F5A8874E4AC7972406FB0CC146AC74BE_inline
                          (pOVar10,(MethodInfo *)0x0);
        uVar4 = *(undefined4 *)(unaff_x29 + -0x4c);
        pvVar11 = *(void **)(*(long *)(unaff_x29 + -8) + 0x38);
        uVar2 = *(undefined4 *)(unaff_x29 + -0x48);
        NullCheck(pvVar11);
        uVar7 = OVRNativeBuffer_GetPointer_m0BDE8F3A317E948AA21A16BAF97CDF360C9C6AA7
                          (pvVar11,uVar2,0);
        uVar2 = *(undefined4 *)(unaff_x29 + -0x44);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000088);
        Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(uVar8,uVar4,uVar7,uVar2,0);
        pLVar9 = *(List_1_tB829B146F0C20427588C75576BC36BB6A1D016E6 **)
                  (*(long *)(unaff_x29 + -8) + 0x28);
        iVar3 = *(int *)(unaff_x29 + -0x28);
        NullCheck(pLVar9);
        pCVar6 = (ClipPlaybackTracker_tE311D8396BEABBFDE613AAB1A13FE30D1A6FA75B *)
                 List_1_get_Item_m1DF20120684518D1E70C0DC8F9D80031B06744F3
                           (pLVar9,iVar3,(MethodInfo *)*in_stack_00000080);
        NullCheck(pCVar6);
        iVar5 = ClipPlaybackTracker_get_ReadCount_m5CB89D120FC361680A8450515CA02357D2879191_inline
                          (pCVar6,(MethodInfo *)0x0);
        iVar3 = *(int *)(unaff_x29 + -0x3c);
        NullCheck(pCVar6);
        iVar3 = il2cpp_codegen_add<int,int>(iVar5,iVar3);
        ClipPlaybackTracker_set_ReadCount_m5BA54F5A69408488A59C5FFA2DE454E199469671_inline
                  (pCVar6,iVar3,(MethodInfo *)0x0);
        uVar4 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x24),*(int *)(unaff_x29 + -0x3c))
        ;
        *(undefined4 *)(unaff_x29 + -0x24) = uVar4;
      }
      uVar4 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x28),1);
      *(undefined4 *)(unaff_x29 + -0x28) = uVar4;
    }
    pLVar9 = *(List_1_tB829B146F0C20427588C75576BC36BB6A1D016E6 **)
              (*(long *)(unaff_x29 + -8) + 0x28);
    NullCheck(pLVar9);
    iVar3 = List_1_get_Count_m56AACF0D9683BE0A6929A5B9DE131EE44C5DC9C1_inline
                      (pLVar9,(MethodInfo *)*in_stack_00000078);
    uVar4 = il2cpp_codegen_subtract<int,int>(iVar3,1);
    *(undefined4 *)(unaff_x29 + -0x50) = uVar4;
    while (iStack00000000000001c4 = *(int *)(unaff_x29 + -0x50), -1 < iStack00000000000001c4) {
      pLVar9 = *(List_1_tB829B146F0C20427588C75576BC36BB6A1D016E6 **)
                (*(long *)(unaff_x29 + -8) + 0x28);
      NullCheck(pLVar9);
      iVar3 = List_1_get_Count_m56AACF0D9683BE0A6929A5B9DE131EE44C5DC9C1_inline
                        (pLVar9,(MethodInfo *)*in_stack_00000078);
      if (iVar3 < 1) break;
      pLVar9 = *(List_1_tB829B146F0C20427588C75576BC36BB6A1D016E6 **)
                (*(long *)(unaff_x29 + -8) + 0x28);
      iVar3 = *(int *)(unaff_x29 + -0x50);
      NullCheck(pLVar9);
      pCVar6 = (ClipPlaybackTracker_tE311D8396BEABBFDE613AAB1A13FE30D1A6FA75B *)
               List_1_get_Item_m1DF20120684518D1E70C0DC8F9D80031B06744F3
                         (pLVar9,iVar3,(MethodInfo *)*in_stack_00000080);
      NullCheck(pCVar6);
      iVar5 = ClipPlaybackTracker_get_ReadCount_m5CB89D120FC361680A8450515CA02357D2879191_inline
                        (pCVar6,(MethodInfo *)0x0);
      pLVar9 = *(List_1_tB829B146F0C20427588C75576BC36BB6A1D016E6 **)
                (*(long *)(unaff_x29 + -8) + 0x28);
      iVar3 = *(int *)(unaff_x29 + -0x50);
      NullCheck(pLVar9);
      pCVar6 = (ClipPlaybackTracker_tE311D8396BEABBFDE613AAB1A13FE30D1A6FA75B *)
               List_1_get_Item_m1DF20120684518D1E70C0DC8F9D80031B06744F3
                         (pLVar9,iVar3,(MethodInfo *)*in_stack_00000080);
      NullCheck(pCVar6);
      pOVar10 = (OVRHapticsClip_t76F18B7843EDB06C61DE1DBA343216CEB5BE2E8C *)
                ClipPlaybackTracker_get_Clip_m5F7BF9A75928114403808D29DCF2E00243A5D87A_inline
                          (pCVar6,(MethodInfo *)0x0);
      NullCheck(pOVar10);
      iVar3 = OVRHapticsClip_get_Count_mF6DCD041E169A35A5B208FE92AEE5D47269F107E_inline
                        (pOVar10,(MethodInfo *)0x0);
      if (iVar3 <= iVar5) {
        pLVar9 = *(List_1_tB829B146F0C20427588C75576BC36BB6A1D016E6 **)
                  (*(long *)(unaff_x29 + -8) + 0x28);
        iVar3 = *(int *)(unaff_x29 + -0x50);
        NullCheck(pLVar9);
        List_1_RemoveAt_m7C70CF4778FAA1C22586E0F909585AD0F1A9172C
                  (pLVar9,iVar3,
                   *(MethodInfo **)Method_System_Net_WebConnection_<>c_<Connect>b__16_0__);
      }
      uVar4 = il2cpp_codegen_subtract<int,int>(*(int *)(unaff_x29 + -0x50),1);
      *(undefined4 *)(unaff_x29 + -0x50) = uVar4;
    }
    bStack00000000000001b3 = *(byte *)(*(long *)(unaff_x29 + -8) + 0x11) & 1;
    if (bStack00000000000001b3 != 0) {
      iVar3 = *(int *)(unaff_x29 + -0x20);
      iStack00000000000001a4 = (int)((ulong)*(undefined8 *)(unaff_x29 + -0x18) >> 0x20);
      iVar5 = il2cpp_codegen_add<int,int>(iStack00000000000001a4,*(int *)(unaff_x29 + -0x24));
      uVar4 = il2cpp_codegen_subtract<int,int>(iVar3,iVar5);
      *(undefined4 *)(unaff_x29 + -0x54) = uVar4;
      iVar3 = *(int *)(unaff_x29 + -0x54);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000070);
      iVar5 = Config_get_MinimumBufferSamplesCount_m27DBFB9FEA1CB7EF08AC8C62B2F7B99CF1B9457C_inline
                        ((MethodInfo *)0x0);
      iVar5 = il2cpp_codegen_subtract<int,int>(iVar5,*(int *)(unaff_x29 + -0x24));
      if (iVar3 < iVar5) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000070);
        iVar3 = Config_get_MinimumBufferSamplesCount_m27DBFB9FEA1CB7EF08AC8C62B2F7B99CF1B9457C_inline
                          ((MethodInfo *)0x0);
        uVar4 = il2cpp_codegen_subtract<int,int>(iVar3,*(int *)(unaff_x29 + -0x24));
        *(undefined4 *)(unaff_x29 + -0x54) = uVar4;
      }
      iStack0000000000000178 = (int)*(undefined8 *)(unaff_x29 + -0x18);
      if (iStack0000000000000178 < *(int *)(unaff_x29 + -0x54)) {
        uStack0000000000000168 = (undefined4)*(undefined8 *)(unaff_x29 + -0x18);
        *(undefined4 *)(unaff_x29 + -0x54) = uStack0000000000000168;
      }
      if (0 < *(int *)(unaff_x29 + -0x54)) {
        iVar3 = *(int *)(unaff_x29 + -0x54);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000070);
        iVar5 = Config_get_SampleSizeInBytes_m8A59438CA870B1DEDA2DDE836BBF513D4DA6C209_inline
                          ((MethodInfo *)0x0);
        uVar4 = il2cpp_codegen_multiply<int,int>(iVar3,iVar5);
        *(undefined4 *)(unaff_x29 + -0x58) = uVar4;
        iVar3 = *(int *)(unaff_x29 + -0x24);
        iVar5 = Config_get_SampleSizeInBytes_m8A59438CA870B1DEDA2DDE836BBF513D4DA6C209_inline
                          ((MethodInfo *)0x0);
        uVar4 = il2cpp_codegen_multiply<int,int>(iVar3,iVar5);
        *(undefined4 *)(unaff_x29 + -0x5c) = uVar4;
        *(undefined4 *)(unaff_x29 + -0x60) = 0;
        pOVar10 = *(OVRHapticsClip_t76F18B7843EDB06C61DE1DBA343216CEB5BE2E8C **)
                   (*(long *)(unaff_x29 + -8) + 0x40);
        NullCheck(pOVar10);
        uVar8 = OVRHapticsClip_get_Samples_m433E8160F5A8874E4AC7972406FB0CC146AC74BE_inline
                          (pOVar10,(MethodInfo *)0x0);
        uVar4 = *(undefined4 *)(unaff_x29 + -0x60);
        pvVar11 = *(void **)(*(long *)(unaff_x29 + -8) + 0x38);
        uVar2 = *(undefined4 *)(unaff_x29 + -0x5c);
        NullCheck(pvVar11);
        uVar7 = OVRNativeBuffer_GetPointer_m0BDE8F3A317E948AA21A16BAF97CDF360C9C6AA7
                          (pvVar11,uVar2,0);
        uVar2 = *(undefined4 *)(unaff_x29 + -0x58);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000088);
        Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(uVar8,uVar4,uVar7,uVar2,0);
        uVar4 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x24),*(int *)(unaff_x29 + -0x54))
        ;
        *(undefined4 *)(unaff_x29 + -0x24) = uVar4;
      }
    }
    if (0 < *(int *)(unaff_x29 + -0x24)) {
      pvVar11 = *(void **)(*(long *)(unaff_x29 + -8) + 0x38);
      NullCheck(pvVar11);
      uVar8 = OVRNativeBuffer_GetPointer_m0BDE8F3A317E948AA21A16BAF97CDF360C9C6AA7(pvVar11,0);
      *(undefined8 *)(unaff_x29 + -0x70) = uVar8;
      uStack00000000000000fc = *(undefined4 *)(unaff_x29 + -0x24);
      *(undefined4 *)(unaff_x29 + -0x68) = uStack00000000000000fc;
      uVar4 = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x30);
      uVar7 = *(undefined8 *)(unaff_x29 + -0x68);
      uVar8 = *(undefined8 *)(unaff_x29 + -0x70);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000090);
      bStack00000000000000df =
           OVRPlugin_SetControllerHaptics_mF261D7841611D1A96353C34F471145D69A15A0DE
                     (uVar4,uVar8,uVar7,0);
      bStack00000000000000df = bStack00000000000000df & 1;
      uStack00000000000000bc = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x30);
      uVar8 = OVRPlugin_GetControllerHapticsState_mEEA959FE0B91F35368C4229D5423C70C448E03DE
                        (uStack00000000000000bc,0);
      *(undefined8 *)(unaff_x29 + -0x18) = uVar8;
      uStack00000000000000a4 = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x18) >> 0x20);
      uStack000000000000009c = uStack00000000000000a4;
      *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x14) = uStack00000000000000a4;
      uVar4 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(0);
      *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x18) = uVar4;
    }
  }
  return;
}


