/*
FUNCTION_NAME: Mono.Security.Authenticode.AuthenticodeDeformatter$$CheckSignature
ENTRY_POINT: 014dc05c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 98
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void Mono_Security_Authenticode_AuthenticodeDeformatter__CheckSignature(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined1 uStack0000000000000020;
  undefined1 uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  
  puVar4 = 
  Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__;
  if ((*(byte *)(unaff_x20 + 0xf2f) & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Renderer>_Clear__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                      );
    thunk_FUN_00d48444(StringLiteral_9958);
                    /* try { // try from 014dc094 to 015dc0db has its CatchHandler @ 014dc4b8 */
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(StringLiteral_1578);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<char>_Contains__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_TryGetValue__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
    thunk_FUN_00d48444(UnityEngine_XR_CommonUsages_TypeInfo);
                    /* try { // try from 014dc0dc to 015dc0ff has its CatchHandler @ 014dbf2c */
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_TapGestureRecognizer_CreateEnhancedGesture__
                      );
    thunk_FUN_00d48444(StringLiteral_3505);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_5_0_TypeInfo);
                    /* try { // try from 014dc100 to 015dc113 has its CatchHandler @ 014dc4ac */
    thunk_FUN_00d48444(FullSerializer_fsConverterRegistrar_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_1538);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<AdditionalLightsShadowCasterPass_ShadowResolutionRequest>_set_Capacity__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f35a8);
                    /* try { // try from 014dc130 to 015dc143 has its CatchHandler @ 014dc4a8 */
    thunk_FUN_00d48444(Method_System_Threading_Tasks_Task<Socket>_ConfigureAwait__);
    thunk_FUN_00d48444(Method_Oculus_Platform_Message<InvitePanelResultInfo>_get_Data__);
    thunk_FUN_00d48444(Method_OVRTask_WhenAll<OVRPlugin_Result>__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_StyleSheet_CheckAccess<Object>__);
                    /* try { // try from 014dc164 to 015dc177 has its CatchHandler @ 014dc4b4 */
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractableUnregisteredEventArgs>_System_IDisposable_Dispose__
                      );
    *(undefined1 *)(unaff_x20 + 0xf2f) = 1;
  }
                    /* try { // try from 014dc178 to 015dc197 has its CatchHandler @ 014dbf2c */
  plVar10 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar4);
  puVar4 = Method_Oculus_Platform_Message<InvitePanelResultInfo>_get_Data__;
  if (plVar10 != (long *)0x0) {
    FUN_0160aa4c(plVar10,0);
                    /* try { // try from 014dc198 to 015dc1af has its CatchHandler @ 014dc4b4 */
    FUN_0160c8e8(plVar10,*(undefined8 *)puVar4,0);
    puVar4 = Method_System_Collections_Generic_List<Renderer>_Clear__;
    if (*(int *)(param_1 + 0x20) < 4) {
      uVar12 = *(undefined8 *)
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractableUnregisteredEventArgs>_System_IDisposable_Dispose__
      ;
    }
    else {
                    /* try { // try from 014dc1b0 to 015dc1d7 has its CatchHandler @ 014dbf2c */
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__ +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      puVar8 = StringLiteral_9958;
      puVar7 = StringLiteral_3505;
      puVar6 = Method_OVRTask_WhenAll<OVRPlugin_Result>__;
      puVar5 = Method_System_Collections_Generic_List<char>_Contains__;
      puVar3 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
      puVar2 = 
      Method_System_Collections_Generic_Dictionary<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_TryGetValue__
      ;
      puVar1 = OVRPlugin_OVRP_1_5_0_TypeInfo;
                    /* try { // try from 014dc1d8 to 015dc277 has its CatchHandler @ 014dc4b0 */
      uVar9 = FUN_016f56e8(uVar12,0,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar4);
      }
      uVar12 = FUN_014dbb70(uVar9);
      uVar12 = FUN_015f5b28(*(undefined8 *)puVar7,uVar12,0);
      FUN_0160c8e8(plVar10,uVar12,0);
      uVar12 = FUN_016f5c78(*(undefined8 *)(param_1 + 0x18),0);
                    /* try { // try from 014dc278 to 015dc4a3 has its CatchHandler @ 014dbf2c */
      uVar12 = FUN_015f5b28(*(undefined8 *)puVar6,uVar12,0);
      FUN_0160c8e8(plVar10,uVar12,0);
      in_stack_00000058 = *(undefined8 *)puVar2;
      in_stack_00000068 = *(undefined4 *)(param_1 + 0x50);
      in_stack_00000060 = 0xffffffffffffffff;
      uVar12 = FUN_017a7f78(&stack0x00000058,0);
      uVar12 = FUN_015f5b28(*(undefined8 *)puVar1,uVar12,0);
      FUN_0160c8e8(plVar10,uVar12,0);
      in_stack_00000040 = *(undefined8 *)puVar5;
      in_stack_00000050 = *(undefined4 *)(param_1 + 0x54);
      in_stack_00000048 = 0xffffffffffffffff;
      uVar12 = FUN_017a7f78(&stack0x00000040,0);
      uVar12 = FUN_015f5b28(*(undefined8 *)StringLiteral_1538,uVar12,0);
      FUN_0160c8e8(plVar10,uVar12,0);
      in_stack_00000038 = *(undefined4 *)(param_1 + 0x58);
      in_stack_00000028 = *(undefined8 *)StringLiteral_1578;
      in_stack_00000030 = 0xffffffffffffffff;
      uVar12 = FUN_017a7f78(&stack0x00000028,0);
      uVar12 = FUN_015f5b28(*(undefined8 *)UnityEngine_XR_CommonUsages_TypeInfo,uVar12,0);
      FUN_0160c8e8(plVar10,uVar12,0);
      uStack0000000000000024 = *(undefined1 *)(param_1 + 0x71);
      uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar8,(long)&stack0x00000020 + 4);
      uVar12 = FUN_015f6780(*(undefined8 *)
                             Method_UnityEngine_UIElements_StyleSheet_CheckAccess<Object>__,uVar12,0
                           );
      FUN_0160c8e8(plVar10,uVar12,0);
      uStack0000000000000020 = *(undefined1 *)(param_1 + 0x70);
      uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar8,&stack0x00000020);
      uVar12 = FUN_015f6780(*(undefined8 *)
                             Method_UnityEngine_XR_Interaction_Toolkit_AR_TapGestureRecognizer_CreateEnhancedGesture__
                            ,uVar12,0);
      FUN_0160c8e8(plVar10,uVar12,0);
      uStack000000000000001c = *(undefined4 *)(param_1 + 0x60);
      uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,(long)&stack0x00000018 + 4);
      uStack0000000000000018 = *(undefined4 *)(param_1 + 100);
      uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x00000018);
      uVar12 = FUN_01600b5c(*(undefined8 *)
                             Method_System_Collections_Generic_List<AdditionalLightsShadowCasterPass_ShadowResolutionRequest>_set_Capacity__
                            ,uVar12,uVar11,0);
      FUN_0160c8e8(plVar10,uVar12,0);
      uStack0000000000000014 = *(undefined4 *)(param_1 + 0x68);
      uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,(long)&stack0x00000010 + 4);
      uStack0000000000000010 = *(undefined4 *)(param_1 + 0x6c);
      uVar11 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x00000010);
      uVar12 = FUN_01600b5c(*(undefined8 *)
                             Method_System_Threading_Tasks_Task<Socket>_ConfigureAwait__,uVar12,
                            uVar11,0);
      FUN_0160c8e8(plVar10,uVar12,0);
      uStack000000000000000c = *(undefined4 *)(param_1 + 0x78);
      uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,(long)&stack0x00000008 + 4);
      uVar12 = FUN_015f6780(*(undefined8 *)PTR_DAT_033f35a8,uVar12,0);
      FUN_0160c8e8(plVar10,uVar12,0);
      uStack0000000000000008 = *(undefined4 *)(param_1 + 0x74);
      uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x00000008);
      uVar12 = FUN_015f6780(*(undefined8 *)FullSerializer_fsConverterRegistrar_TypeInfo,uVar12,0);
    }
    FUN_0160c8e8(plVar10,uVar12,0);
    (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


