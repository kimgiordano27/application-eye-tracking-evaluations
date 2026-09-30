/*
FUNCTION_NAME: FUN_015bc448
ENTRY_POINT: 015bc448
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_015bc448(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  int local_44;
  
                    /* try { // try from 015bc454 to 016bc457 has its CatchHandler @ 015bc64c */
                    /* try { // try from 015bc464 to 016bc46f has its CatchHandler @ 015bc668 */
  if ((DAT_03777e3d & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<int,_List<VisualElementAsset>>_TryGetValue__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Socket>_Create__
                      );
                    /* try { // try from 015bc48c to 016bc48f has its CatchHandler @ 015bc650 */
    thunk_FUN_00d48444(Method_System_Text_UTF8Encoding_GetByteCount__);
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_6890);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
                    /* try { // try from 015bc4b4 to 016bc4bb has its CatchHandler @ 015bc664 */
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JArray_<WriteToAsync>d__0>__
                      );
                    /* try { // try from 015bc4c0 to 016bc4c7 has its CatchHandler @ 015bc660 */
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_LinkedPool<MeshHandle>_Get__);
                    /* try { // try from 015bc4cc to 016bc4d7 has its CatchHandler @ 015bc65c */
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_68>__ctor__
                      );
                    /* try { // try from 015bc4dc to 016bc4e7 has its CatchHandler @ 015bc694 */
    thunk_FUN_00d48444(Oculus_Interaction_Input_DataModifier<HmdDataAsset>_TypeInfo);
    thunk_FUN_00d48444(System_OperatingSystem_TypeInfo);
                    /* try { // try from 015bc4f4 to 016bc4fb has its CatchHandler @ 015bc670 */
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_NamedValue_ParseMultiple__);
    thunk_FUN_00d48444(Sirenix_Serialization_MinimalBaseFormatter<Keyframe>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<SunglassesWithoutTag>_MoveNext__
                      );
                    /* try { // try from 015bc518 to 016bc54f has its CatchHandler @ 015bc674 */
    thunk_FUN_00d48444(OVRManager_<>c_TypeInfo);
    DAT_03777e3d = 1;
  }
  puVar3 = Method_System_Text_UTF8Encoding_GetByteCount__;
  local_60 = 0;
  lVar10 = *(long *)(param_1 + 8);
  if (*param_1 == 0) {
    local_60 = *(undefined8 *)(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    FUN_015baefc(*(undefined8 *)OVRManager_<>c_TypeInfo);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
                    /* try { // try from 015bc560 to 016bc56f has its CatchHandler @ 015bc66c */
    lVar6 = FUN_015bc060(param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],param_1[0xe],
                         param_1[0xf],param_1[0x10],lVar10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
                    /* try { // try from 015bc570 to 016bc59f has its CatchHandler @ 015bc1a8 */
    local_60 = FUN_013bdbc4(lVar6,*(undefined8 *)
                                   Oculus_Interaction_Input_DataModifier<HmdDataAsset>_TypeInfo);
    uVar7 = FUN_013ba28c(&local_60,
                         *(undefined8 *)
                          Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_68>__ctor__
                        );
    if ((uVar7 & 1) == 0) {
      *param_1 = 0;
                    /* try { // try from 015bc5a0 to 016bc5ab has its CatchHandler @ 015bc658 */
      *(undefined8 *)(param_1 + 0x12) = local_60;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
                    /* try { // try from 015bc5c8 to 016bc5d3 has its CatchHandler @ 015bc654 */
      FUN_01098fc0(param_1 + 2,&local_60,param_1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_List<VisualElementAsset>>_TryGetValue__
                  );
      return;
    }
  }
                    /* try { // try from 015bc5f4 to 016bc5fb has its CatchHandler @ 015bc698 */
                    /* try { // try from 015bc5fc to 016bc5ff has its CatchHandler @ 015bc648 */
                    /* try { // try from 015bc600 to 016bc603 has its CatchHandler @ 015bc644 */
  FUN_013ba2d0(&local_60,local_58,
               *(undefined8 *)Method_UnityEngine_UIElements_UIR_LinkedPool<MeshHandle>_Get__);
  uVar4 = local_58._8_4_;
  uVar9 = local_58._0_8_;
                    /* try { // try from 015bc604 to 016bc607 has its CatchHandler @ 015bc68c */
                    /* try { // try from 015bc608 to 016bc60b has its CatchHandler @ 015bc640 */
                    /* try { // try from 015bc60c to 016bc60f has its CatchHandler @ 015bc63c */
                    /* try { // try from 015bc610 to 016bc613 has its CatchHandler @ 015bc680 */
                    /* try { // try from 015bc614 to 016bc617 has its CatchHandler @ 015bc638 */
                    /* try { // try from 015bc618 to 016bc61b has its CatchHandler @ 015bc634 */
                    /* try { // try from 015bc61c to 016bc623 has its CatchHandler @ 015bc674 */
  if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
              0xe0) == 0) {
    thunk_FUN_00d32864();
  }
                    /* try { // try from 015bc624 to 016bc627 has its CatchHandler @ 015bc66c */
                    /* try { // try from 015bc628 to 016bc62b has its CatchHandler @ 015bc630 */
                    /* try { // try from 015bc62c to 016bc62f has its CatchHandler @ 015bc664 */
  uVar7 = FUN_0268b5e4(local_58._0_8_,0);
  puVar2 = Method_System_Collections_Generic_List_Enumerator<SunglassesWithoutTag>_MoveNext__;
  puVar1 = System_OperatingSystem_TypeInfo;
                    /* catch() { ... } // from try @ 015bc628 with catch @ 015bc630
                       try { // try from 015bc630 to 016bc6af has its CatchHandler @ 015bc1a8 */
                    /* catch() { ... } // from try @ 015bc618 with catch @ 015bc634 */
                    /* catch() { ... } // from try @ 015bc614 with catch @ 015bc638 */
                    /* catch() { ... } // from try @ 015bc60c with catch @ 015bc63c */
                    /* catch() { ... } // from try @ 015bc608 with catch @ 015bc640 */
  if ((uVar7 & 1) != 0) {
                    /* catch() { ... } // from try @ 015bc600 with catch @ 015bc644 */
    if (local_58._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
                    /* catch() { ... } // from try @ 015bc5fc with catch @ 015bc648 */
                    /* catch() { ... } // from try @ 015bc454 with catch @ 015bc64c */
                    /* catch() { ... } // from try @ 015bc48c with catch @ 015bc650 */
    bVar5 = FUN_01b6eabc(local_58._0_8_,0);
                    /* catch() { ... } // from try @ 015bc5c8 with catch @ 015bc654 */
                    /* catch() { ... } // from try @ 015bc5a0 with catch @ 015bc658 */
                    /* catch() { ... } // from try @ 015bc4cc with catch @ 015bc65c */
                    /* catch() { ... } // from try @ 015bc4c0 with catch @ 015bc660 */
    if ((local_58._8_4_ == 0 & bVar5) != 0) {
                    /* catch() { ... } // from try @ 015bc4b4 with catch @ 015bc664
                       catch() { ... } // from try @ 015bc62c with catch @ 015bc664 */
                    /* catch() { ... } // from try @ 015bc464 with catch @ 015bc668 */
                    /* catch() { ... } // from try @ 015bc560 with catch @ 015bc66c
                       catch() { ... } // from try @ 015bc624 with catch @ 015bc66c */
      local_58 = FUN_01b6eba8(local_58._0_8_,0);
                    /* catch() { ... } // from try @ 015bc4f4 with catch @ 015bc670 */
                    /* catch() { ... } // from try @ 015bc518 with catch @ 015bc674
                       catch() { ... } // from try @ 015bc61c with catch @ 015bc674 */
                    /* catch() { ... } // from try @ 015bc348 with catch @ 015bc678 */
                    /* catch() { ... } // from try @ 015bc31c with catch @ 015bc67c */
                    /* catch() { ... } // from try @ 015bc370 with catch @ 015bc680
                       catch() { ... } // from try @ 015bc610 with catch @ 015bc680 */
                    /* catch() { ... } // from try @ 015bc37c with catch @ 015bc684 */
                    /* catch() { ... } // from try @ 015bc388 with catch @ 015bc688 */
      uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)
                                  UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                                 ,local_58);
                    /* catch() { ... } // from try @ 015bc41c with catch @ 015bc68c
                       catch() { ... } // from try @ 015bc604 with catch @ 015bc68c */
                    /* catch() { ... } // from try @ 015bc3b0 with catch @ 015bc690 */
                    /* catch() { ... } // from try @ 015bc398 with catch @ 015bc694
                       catch() { ... } // from try @ 015bc4dc with catch @ 015bc694 */
                    /* catch() { ... } // from try @ 015bc3d4 with catch @ 015bc698
                       catch() { ... } // from try @ 015bc5f4 with catch @ 015bc698 */
      FUN_01600b5c(*(undefined8 *)Sirenix_Serialization_MinimalBaseFormatter<Keyframe>_TypeInfo,
                   *(undefined8 *)puVar2,uVar8,0);
      FUN_015bafa0();
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
                    /* try { // try from 015bc6b0 to 016bc6c7 has its CatchHandler @ 015bc714 */
      if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
                    /* try { // try from 015bc6c8 to 016bc703 has its CatchHandler @ 015bc1a8 */
      FUN_00bc9454(*(long *)(lVar10 + 0x10),uVar9,*(undefined8 *)StringLiteral_6890);
      local_70 = 0;
      uStack_68 = 0;
      local_44 = 0;
      FUN_011e70d8(&local_70,uVar9,&local_44,*(undefined8 *)puVar1);
      uVar9 = uStack_68;
      uVar8 = local_70;
      goto LAB_015bc748;
    }
  }
  local_44 = local_58._8_4_;
                    /* try { // try from 015bc704 to 016bc713 has its CatchHandler @ 015bc714 */
  uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JArray_<WriteToAsync>d__0>__
                             ,&local_44);
                    /* catch() { ... } // from try @ 015bc6b0 with catch @ 015bc714
                       catch() { ... } // from try @ 015bc704 with catch @ 015bc714 */
                    /* try { // try from 015bc718 to 016bc71b has its CatchHandler @ 015bc724 */
                    /* try { // try from 015bc71c to 016bc727 has its CatchHandler @ 015bc1a8 */
  FUN_01600b5c(*(undefined8 *)Method_UnityEngine_InputSystem_Utilities_NamedValue_ParseMultiple__,
               *(undefined8 *)puVar2,uVar9,0);
                    /* catch() { ... } // from try @ 015bc718 with catch @ 015bc724 */
  FUN_015bb18c();
  local_58._0_8_ = 0;
  local_58._8_8_ = 0;
  local_70 = CONCAT44(local_70._4_4_,uVar4);
  FUN_011e70d8(local_58,0,&local_70,*(undefined8 *)puVar1);
  uVar9 = local_58._8_8_;
  uVar8 = local_58._0_8_;
LAB_015bc748:
  *param_1 = -2;
  puVar1 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Socket>_Create__;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  local_58._0_8_ = uVar8;
  local_58._8_8_ = uVar9;
  FUN_011ccb9c(param_1 + 2,local_58,*(undefined8 *)puVar1);
  return;
}


