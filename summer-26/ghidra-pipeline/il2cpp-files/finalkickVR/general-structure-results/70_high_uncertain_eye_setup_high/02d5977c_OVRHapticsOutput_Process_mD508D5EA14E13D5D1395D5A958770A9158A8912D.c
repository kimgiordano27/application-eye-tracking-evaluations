/*
FUNCTION_NAME: OVRHapticsOutput_Process_mD508D5EA14E13D5D1395D5A958770A9158A8912D
ENTRY_POINT: 02d5977c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_18;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRHapticsOutput_Process_mD508D5EA14E13D5D1395D5A958770A9158A8912D(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  ClipPlaybackTracker_tE311D8396BEABBFDE613AAB1A13FE30D1A6FA75B *pCVar13;
  undefined8 uVar14;
  undefined4 extraout_var;
  OVRNativeBuffer_tEBEDDBFD193B5EE2FE1E0C1B22AA823FB3703915 *pOVar15;
  List_1_tB829B146F0C20427588C75576BC36BB6A1D016E6 *pLVar16;
  OVRHapticsClip_t76F18B7843EDB06C61DE1DBA343216CEB5BE2E8C *pOVar17;
  void *pvVar18;
  float fVar19;
  float fVar20;
  int local_198;
  int iStack_134;
  int local_74;
  int local_70;
  int local_5c;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  
  puVar5 = 
  Method_Oculus_Interaction_Demo_WaterSpray_<StampRoutine>d__35_System_Collections_IEnumerator_Reset__
  ;
  puVar4 = Method_UnityEngine_Rendering_VolumeProfile_<>c_<OnEnable>b__2_0__;
  puVar3 = Method_Oculus_Platform_VoipAudioSourceHiLevel_FilterReadDelegate_OnAudioFilterRead__;
  puVar2 = Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  if ((OVRHapticsOutput_Process_mD508D5EA14E13D5D1395D5A958770A9158A8912D::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Platform_VoipAudioSourceHiLevel_FilterReadDelegate_OnAudioFilterRead__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Net_WebConnection_<>c_<Connect>b__16_0__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Net_WebConnection_<>c_<Connect>b__16_1__);
    OVRHapticsOutput_Process_mD508D5EA14E13D5D1395D5A958770A9158A8912D::s_Il2CppMethodInitialized =
         1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  iVar6 = Config_get_SampleRateHz_m2D1B79A8EC0A19BA0EA97E6B3039D15788BB9F47_inline
                    ((MethodInfo *)0x0);
  if (iVar6 == 0) {
    if (*(int *)(param_1 + 0x48) != 0) {
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                );
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)Method_System_Net_WebConnection_<>c_<Connect>b__16_1__,0);
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    uVar7 = Config_get_SampleRateHz_m2D1B79A8EC0A19BA0EA97E6B3039D15788BB9F47_inline
                      ((MethodInfo *)0x0);
    *(undefined4 *)(param_1 + 0x48) = uVar7;
    pOVar15 = *(OVRNativeBuffer_tEBEDDBFD193B5EE2FE1E0C1B22AA823FB3703915 **)(param_1 + 0x38);
    NullCheck(pOVar15);
    iVar6 = OVRNativeBuffer_GetCapacity_m388215B1A6727C487815D040FE7DF9E91B2EA1AF_inline
                      (pOVar15,(MethodInfo *)0x0);
    iVar8 = Config_get_MaximumBufferSamplesCount_mFA9670050A7B57A5778B588CB400DBEB413DE4C0_inline
                      ((MethodInfo *)0x0);
    iVar9 = Config_get_SampleSizeInBytes_m8A59438CA870B1DEDA2DDE836BBF513D4DA6C209_inline
                      ((MethodInfo *)0x0);
    iVar8 = il2cpp_codegen_multiply<int,int>(iVar8,iVar9);
    if (iVar6 != iVar8) {
      pvVar18 = *(void **)(param_1 + 0x38);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      iVar6 = Config_get_MaximumBufferSamplesCount_mFA9670050A7B57A5778B588CB400DBEB413DE4C0_inline
                        ((MethodInfo *)0x0);
      iVar8 = Config_get_SampleSizeInBytes_m8A59438CA870B1DEDA2DDE836BBF513D4DA6C209_inline
                        ((MethodInfo *)0x0);
      NullCheck(pvVar18);
      uVar7 = il2cpp_codegen_multiply<int,int>(iVar6,iVar8);
      OVRNativeBuffer_Reset_m65A403E428F766CF99119FFDDC3824A856F6B45A(pvVar18,uVar7,0);
    }
    uVar7 = *(undefined4 *)(param_1 + 0x30);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    uVar12 = OVRPlugin_GetControllerHapticsState_mEEA959FE0B91F35368C4229D5423C70C448E03DE(uVar7);
    fVar19 = (float)Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(0);
    fVar19 = (float)il2cpp_codegen_subtract<float,float>(fVar19,*(float *)(param_1 + 0x18));
    iStack_134 = (int)((ulong)uVar12 >> 0x20);
    if (0 < *(int *)(param_1 + 0x14)) {
      iVar6 = *(int *)(param_1 + 0x14);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      iVar8 = Config_get_SampleRateHz_m2D1B79A8EC0A19BA0EA97E6B3039D15788BB9F47_inline
                        ((MethodInfo *)0x0);
      fVar20 = (float)il2cpp_codegen_multiply<float,float>(fVar19,(float)iVar8);
      fVar20 = (float)il2cpp_codegen_add<float,float>(fVar20,0.5);
      iVar8 = il2cpp_codegen_cast_double_to_int<int>((double)fVar20);
      local_4c = il2cpp_codegen_subtract<int,int>(iVar6,iVar8);
      if (local_4c < 0) {
        local_4c = 0;
      }
      iVar6 = il2cpp_codegen_subtract<int,int>(iStack_134,local_4c);
      if (iVar6 == 0) {
        uVar7 = il2cpp_codegen_add<int,int>(*(int *)(param_1 + 0x1c),1);
        *(undefined4 *)(param_1 + 0x1c) = uVar7;
      }
      else {
        uVar7 = il2cpp_codegen_add<int,int>(*(int *)(param_1 + 0x20),1);
        *(undefined4 *)(param_1 + 0x20) = uVar7;
      }
      if ((0 < local_4c) && (iStack_134 == 0)) {
        uVar7 = il2cpp_codegen_add<int,int>(*(int *)(param_1 + 0x24),1);
        *(undefined4 *)(param_1 + 0x24) = uVar7;
      }
      *(int *)(param_1 + 0x14) = iStack_134;
      uVar7 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(0);
      *(undefined4 *)(param_1 + 0x18) = uVar7;
    }
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    iVar6 = Config_get_OptimalBufferSamplesCount_mBC971D5C4CF6F34A8A3925DC8103A09E3E8BF4F7_inline
                      ((MethodInfo *)0x0);
    local_40 = iVar6;
    if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      iVar8 = Config_get_SampleRateHz_m2D1B79A8EC0A19BA0EA97E6B3039D15788BB9F47_inline
                        ((MethodInfo *)0x0);
      fVar19 = (float)il2cpp_codegen_multiply<float,float>(fVar19,1000.0);
      iVar8 = il2cpp_codegen_cast_double_to_int<int>
                        ((double)(float)(int)(fVar19 / (1000.0 / (float)iVar8)));
      iVar9 = Config_get_MinimumSafeSamplesQueued_m479D3DEBCD5251637DC7FDE141FBECAC70DE5A1C_inline
                        ((MethodInfo *)0x0);
      local_40 = il2cpp_codegen_add<int,int>(iVar9,iVar8);
      if (iVar6 <= local_40) {
        local_40 = iVar6;
      }
    }
    if (iStack_134 <= local_40) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      iVar6 = Config_get_MaximumBufferSamplesCount_mFA9670050A7B57A5778B588CB400DBEB413DE4C0_inline
                        ((MethodInfo *)0x0);
      if (iVar6 < local_40) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        local_40 = Config_get_MaximumBufferSamplesCount_mFA9670050A7B57A5778B588CB400DBEB413DE4C0_inline
                             ((MethodInfo *)0x0);
      }
      local_198 = (int)uVar12;
      if (local_198 < local_40) {
        local_40 = local_198;
      }
      local_44 = 0;
      local_48 = 0;
      while (local_44 < local_40) {
        pLVar16 = *(List_1_tB829B146F0C20427588C75576BC36BB6A1D016E6 **)(param_1 + 0x28);
        NullCheck(pLVar16);
        iVar6 = List_1_get_Count_m56AACF0D9683BE0A6929A5B9DE131EE44C5DC9C1_inline
                          (pLVar16,*(MethodInfo **)puVar4);
        if (iVar6 <= local_48) break;
        iVar6 = il2cpp_codegen_subtract<int,int>(local_40,local_44);
        pLVar16 = *(List_1_tB829B146F0C20427588C75576BC36BB6A1D016E6 **)(param_1 + 0x28);
        NullCheck(pLVar16);
        pCVar13 = (ClipPlaybackTracker_tE311D8396BEABBFDE613AAB1A13FE30D1A6FA75B *)
                  List_1_get_Item_m1DF20120684518D1E70C0DC8F9D80031B06744F3
                            (pLVar16,local_48,*(MethodInfo **)puVar5);
        NullCheck(pCVar13);
        pOVar17 = (OVRHapticsClip_t76F18B7843EDB06C61DE1DBA343216CEB5BE2E8C *)
                  ClipPlaybackTracker_get_Clip_m5F7BF9A75928114403808D29DCF2E00243A5D87A_inline
                            (pCVar13,(MethodInfo *)0x0);
        NullCheck(pOVar17);
        iVar8 = OVRHapticsClip_get_Count_mF6DCD041E169A35A5B208FE92AEE5D47269F107E_inline
                          (pOVar17,(MethodInfo *)0x0);
        pLVar16 = *(List_1_tB829B146F0C20427588C75576BC36BB6A1D016E6 **)(param_1 + 0x28);
        NullCheck(pLVar16);
        pCVar13 = (ClipPlaybackTracker_tE311D8396BEABBFDE613AAB1A13FE30D1A6FA75B *)
                  List_1_get_Item_m1DF20120684518D1E70C0DC8F9D80031B06744F3
                            (pLVar16,local_48,*(MethodInfo **)puVar5);
        NullCheck(pCVar13);
        iVar9 = ClipPlaybackTracker_get_ReadCount_m5CB89D120FC361680A8450515CA02357D2879191_inline
                          (pCVar13,(MethodInfo *)0x0);
        local_5c = il2cpp_codegen_subtract<int,int>(iVar8,iVar9);
        if (iVar6 <= local_5c) {
          local_5c = iVar6;
        }
        if (0 < local_5c) {
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
          iVar6 = Config_get_SampleSizeInBytes_m8A59438CA870B1DEDA2DDE836BBF513D4DA6C209_inline
                            ((MethodInfo *)0x0);
          uVar7 = il2cpp_codegen_multiply<int,int>(local_5c,iVar6);
          iVar6 = Config_get_SampleSizeInBytes_m8A59438CA870B1DEDA2DDE836BBF513D4DA6C209_inline
                            ((MethodInfo *)0x0);
          uVar11 = il2cpp_codegen_multiply<int,int>(local_44,iVar6);
          pLVar16 = *(List_1_tB829B146F0C20427588C75576BC36BB6A1D016E6 **)(param_1 + 0x28);
          NullCheck(pLVar16);
          pCVar13 = (ClipPlaybackTracker_tE311D8396BEABBFDE613AAB1A13FE30D1A6FA75B *)
                    List_1_get_Item_m1DF20120684518D1E70C0DC8F9D80031B06744F3
                              (pLVar16,local_48,*(MethodInfo **)puVar5);
          NullCheck(pCVar13);
          iVar6 = ClipPlaybackTracker_get_ReadCount_m5CB89D120FC361680A8450515CA02357D2879191_inline
                            (pCVar13,(MethodInfo *)0x0);
          iVar8 = Config_get_SampleSizeInBytes_m8A59438CA870B1DEDA2DDE836BBF513D4DA6C209_inline
                            ((MethodInfo *)0x0);
          uVar10 = il2cpp_codegen_multiply<int,int>(iVar6,iVar8);
          pLVar16 = *(List_1_tB829B146F0C20427588C75576BC36BB6A1D016E6 **)(param_1 + 0x28);
          NullCheck(pLVar16);
          pCVar13 = (ClipPlaybackTracker_tE311D8396BEABBFDE613AAB1A13FE30D1A6FA75B *)
                    List_1_get_Item_m1DF20120684518D1E70C0DC8F9D80031B06744F3
                              (pLVar16,local_48,*(MethodInfo **)puVar5);
          NullCheck(pCVar13);
          pOVar17 = (OVRHapticsClip_t76F18B7843EDB06C61DE1DBA343216CEB5BE2E8C *)
                    ClipPlaybackTracker_get_Clip_m5F7BF9A75928114403808D29DCF2E00243A5D87A_inline
                              (pCVar13,(MethodInfo *)0x0);
          NullCheck(pOVar17);
          uVar12 = OVRHapticsClip_get_Samples_m433E8160F5A8874E4AC7972406FB0CC146AC74BE_inline
                             (pOVar17,(MethodInfo *)0x0);
          pvVar18 = *(void **)(param_1 + 0x38);
          NullCheck(pvVar18);
          uVar14 = OVRNativeBuffer_GetPointer_m0BDE8F3A317E948AA21A16BAF97CDF360C9C6AA7
                             (pvVar18,uVar11,0);
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
          Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(uVar12,uVar10,uVar14,uVar7,0);
          pLVar16 = *(List_1_tB829B146F0C20427588C75576BC36BB6A1D016E6 **)(param_1 + 0x28);
          NullCheck(pLVar16);
          pCVar13 = (ClipPlaybackTracker_tE311D8396BEABBFDE613AAB1A13FE30D1A6FA75B *)
                    List_1_get_Item_m1DF20120684518D1E70C0DC8F9D80031B06744F3
                              (pLVar16,local_48,*(MethodInfo **)puVar5);
          NullCheck(pCVar13);
          iVar6 = ClipPlaybackTracker_get_ReadCount_m5CB89D120FC361680A8450515CA02357D2879191_inline
                            (pCVar13,(MethodInfo *)0x0);
          NullCheck(pCVar13);
          iVar6 = il2cpp_codegen_add<int,int>(iVar6,local_5c);
          ClipPlaybackTracker_set_ReadCount_m5BA54F5A69408488A59C5FFA2DE454E199469671_inline
                    (pCVar13,iVar6,(MethodInfo *)0x0);
          local_44 = il2cpp_codegen_add<int,int>(local_44,local_5c);
        }
        local_48 = il2cpp_codegen_add<int,int>(local_48,1);
      }
      pLVar16 = *(List_1_tB829B146F0C20427588C75576BC36BB6A1D016E6 **)(param_1 + 0x28);
      NullCheck(pLVar16);
      iVar6 = List_1_get_Count_m56AACF0D9683BE0A6929A5B9DE131EE44C5DC9C1_inline
                        (pLVar16,*(MethodInfo **)puVar4);
      for (local_70 = il2cpp_codegen_subtract<int,int>(iVar6,1); -1 < local_70;
          local_70 = il2cpp_codegen_subtract<int,int>(local_70,1)) {
        pLVar16 = *(List_1_tB829B146F0C20427588C75576BC36BB6A1D016E6 **)(param_1 + 0x28);
        NullCheck(pLVar16);
        iVar6 = List_1_get_Count_m56AACF0D9683BE0A6929A5B9DE131EE44C5DC9C1_inline
                          (pLVar16,*(MethodInfo **)puVar4);
        if (iVar6 < 1) break;
        pLVar16 = *(List_1_tB829B146F0C20427588C75576BC36BB6A1D016E6 **)(param_1 + 0x28);
        NullCheck(pLVar16);
        pCVar13 = (ClipPlaybackTracker_tE311D8396BEABBFDE613AAB1A13FE30D1A6FA75B *)
                  List_1_get_Item_m1DF20120684518D1E70C0DC8F9D80031B06744F3
                            (pLVar16,local_70,*(MethodInfo **)puVar5);
        NullCheck(pCVar13);
        iVar6 = ClipPlaybackTracker_get_ReadCount_m5CB89D120FC361680A8450515CA02357D2879191_inline
                          (pCVar13,(MethodInfo *)0x0);
        pLVar16 = *(List_1_tB829B146F0C20427588C75576BC36BB6A1D016E6 **)(param_1 + 0x28);
        NullCheck(pLVar16);
        pCVar13 = (ClipPlaybackTracker_tE311D8396BEABBFDE613AAB1A13FE30D1A6FA75B *)
                  List_1_get_Item_m1DF20120684518D1E70C0DC8F9D80031B06744F3
                            (pLVar16,local_70,*(MethodInfo **)puVar5);
        NullCheck(pCVar13);
        pOVar17 = (OVRHapticsClip_t76F18B7843EDB06C61DE1DBA343216CEB5BE2E8C *)
                  ClipPlaybackTracker_get_Clip_m5F7BF9A75928114403808D29DCF2E00243A5D87A_inline
                            (pCVar13,(MethodInfo *)0x0);
        NullCheck(pOVar17);
        iVar8 = OVRHapticsClip_get_Count_mF6DCD041E169A35A5B208FE92AEE5D47269F107E_inline
                          (pOVar17,(MethodInfo *)0x0);
        if (iVar8 <= iVar6) {
          pLVar16 = *(List_1_tB829B146F0C20427588C75576BC36BB6A1D016E6 **)(param_1 + 0x28);
          NullCheck(pLVar16);
          List_1_RemoveAt_m7C70CF4778FAA1C22586E0F909585AD0F1A9172C
                    (pLVar16,local_70,
                     *(MethodInfo **)Method_System_Net_WebConnection_<>c_<Connect>b__16_0__);
        }
      }
      if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
        iVar6 = il2cpp_codegen_add<int,int>(iStack_134,local_44);
        local_74 = il2cpp_codegen_subtract<int,int>(local_40,iVar6);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        iVar6 = Config_get_MinimumBufferSamplesCount_m27DBFB9FEA1CB7EF08AC8C62B2F7B99CF1B9457C_inline
                          ((MethodInfo *)0x0);
        iVar6 = il2cpp_codegen_subtract<int,int>(iVar6,local_44);
        if (local_74 < iVar6) {
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
          iVar6 = Config_get_MinimumBufferSamplesCount_m27DBFB9FEA1CB7EF08AC8C62B2F7B99CF1B9457C_inline
                            ((MethodInfo *)0x0);
          local_74 = il2cpp_codegen_subtract<int,int>(iVar6,local_44);
        }
        if (local_198 < local_74) {
          local_74 = local_198;
        }
        if (0 < local_74) {
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
          iVar6 = Config_get_SampleSizeInBytes_m8A59438CA870B1DEDA2DDE836BBF513D4DA6C209_inline
                            ((MethodInfo *)0x0);
          uVar7 = il2cpp_codegen_multiply<int,int>(local_74,iVar6);
          iVar6 = Config_get_SampleSizeInBytes_m8A59438CA870B1DEDA2DDE836BBF513D4DA6C209_inline
                            ((MethodInfo *)0x0);
          uVar11 = il2cpp_codegen_multiply<int,int>(local_44,iVar6);
          pOVar17 = *(OVRHapticsClip_t76F18B7843EDB06C61DE1DBA343216CEB5BE2E8C **)(param_1 + 0x40);
          NullCheck(pOVar17);
          uVar12 = OVRHapticsClip_get_Samples_m433E8160F5A8874E4AC7972406FB0CC146AC74BE_inline
                             (pOVar17,(MethodInfo *)0x0);
          pvVar18 = *(void **)(param_1 + 0x38);
          NullCheck(pvVar18);
          uVar14 = OVRNativeBuffer_GetPointer_m0BDE8F3A317E948AA21A16BAF97CDF360C9C6AA7
                             (pvVar18,uVar11,0);
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
          Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(uVar12,0,uVar14,uVar7,0);
          local_44 = il2cpp_codegen_add<int,int>(local_44,local_74);
        }
      }
      if (0 < local_44) {
        pvVar18 = *(void **)(param_1 + 0x38);
        NullCheck(pvVar18);
        uVar12 = OVRNativeBuffer_GetPointer_m0BDE8F3A317E948AA21A16BAF97CDF360C9C6AA7(pvVar18,0);
        uVar7 = *(undefined4 *)(param_1 + 0x30);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        OVRPlugin_SetControllerHaptics_mF261D7841611D1A96353C34F471145D69A15A0DE
                  (uVar7,uVar12,local_44,0);
        OVRPlugin_GetControllerHapticsState_mEEA959FE0B91F35368C4229D5423C70C448E03DE
                  (*(undefined4 *)(param_1 + 0x30),0);
        *(undefined4 *)(param_1 + 0x14) = extraout_var;
        uVar7 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(0);
        *(undefined4 *)(param_1 + 0x18) = uVar7;
      }
    }
  }
  return;
}


