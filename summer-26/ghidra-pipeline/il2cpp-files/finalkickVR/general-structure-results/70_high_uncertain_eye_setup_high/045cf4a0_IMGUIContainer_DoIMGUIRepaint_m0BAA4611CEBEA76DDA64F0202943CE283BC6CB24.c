/*
FUNCTION_NAME: IMGUIContainer_DoIMGUIRepaint_m0BAA4611CEBEA76DDA64F0202943CE283BC6CB24
ENTRY_POINT: 045cf4a0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void IMGUIContainer_DoIMGUIRepaint_m0BAA4611CEBEA76DDA64F0202943CE283BC6CB24
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *pVVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined1 auStack_49c [67];
  byte local_459;
  undefined8 local_458;
  ulong local_450;
  undefined8 uStack_448;
  undefined1 auStack_438 [64];
  undefined8 local_3f8;
  RepaintData_t90534752135661579EC254884F550545D001B5EA *local_3f0;
  Il2CppObject *local_3e8;
  undefined1 auStack_3e0 [64];
  undefined1 auStack_3a0 [64];
  undefined1 auStack_360 [64];
  undefined1 auStack_320 [64];
  undefined1 auStack_2e0 [64];
  undefined1 auStack_2a0 [64];
  undefined1 auStack_260 [64];
  undefined1 auStack_220 [64];
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [64];
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [64];
  undefined1 auStack_110 [64];
  RepaintData_t90534752135661579EC254884F550545D001B5EA *local_d0;
  Il2CppObject *local_b8;
  undefined8 *local_b0;
  FinallyHelper<IMGUIContainer_DoIMGUIRepaint_m0BAA4611CEBEA76DDA64F0202943CE283BC6CB24::__9,false>
  aFStack_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 auStack_80 [64];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_28;
  
  puVar1 = PTR_IMGUIContainer_t2BB1312DCDFA8AC98E9ADA9EA696F2328A598A26_il2cpp_TypeInfo_var_048d99f8
  ;
  local_30 = param_6;
  local_28 = param_5;
  if ((IMGUIContainer_DoIMGUIRepaint_m0BAA4611CEBEA76DDA64F0202943CE283BC6CB24::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_IMGUIContainer_t2BB1312DCDFA8AC98E9ADA9EA696F2328A598A26_il2cpp_TypeInfo_var_048d99f8
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    IMGUIContainer_DoIMGUIRepaint_m0BAA4611CEBEA76DDA64F0202943CE283BC6CB24::
    s_Il2CppMethodInitialized = 1;
  }
  local_38 = 0;
  local_40 = 0;
  memset(auStack_80,0,0x40);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar4 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_88 = *(undefined8 *)(lVar4 + 0x20);
  local_40 = local_88;
  auVar5 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline
                     ((ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD *)&local_40,
                      (MethodInfo *)0x0);
  local_98 = auVar5._0_8_;
  local_b0 = &local_38;
  local_90 = local_98;
  local_38 = local_98;
  il2cpp::utils::
  Finally<IMGUIContainer_DoIMGUIRepaint_m0BAA4611CEBEA76DDA64F0202943CE283BC6CB24::__9>
            ((utils *)&local_b0,auVar5._8_8_);
  local_b8 = (Il2CppObject *)
             VisualElement_get_elementPanel_m4B4A37001D55527E4D015E6C6132607071F32B01_inline
                       (local_28,(MethodInfo *)0x0);
  NullCheck(local_b8);
  local_d0 = (RepaintData_t90534752135661579EC254884F550545D001B5EA *)
             VirtualFuncInvoker0<RepaintData_t90534752135661579EC254884F550545D001B5EA*>::Invoke
                       (0x21,local_b8);
  NullCheck(local_d0);
  RepaintData_get_currentOffset_m3892F6A8C226B0710B9A149DDAAF87E1B208675F_inline
            (local_d0,(MethodInfo *)0x0);
  memcpy(auStack_110,auStack_150,0x40);
  memcpy(auStack_80,auStack_110,0x40);
  local_170 = VisualElement_get_worldClip_m61B2DBE3962B9D3E328933EE88CC7B70DE7B711A(local_28,0);
  uStack_16c = param_2;
  uStack_168 = param_3;
  uStack_164 = param_4;
  local_160 = local_170;
  uStack_15c = param_2;
  uStack_158 = param_3;
  uStack_154 = param_4;
  memcpy(auStack_1b0,auStack_80,0x40);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
  uStack_1d4 = uStack_154;
  uStack_1d8 = uStack_158;
  uStack_1dc = uStack_15c;
  local_1e0 = local_160;
  memcpy(auStack_220,auStack_1b0,0x40);
  local_1d0 = VisualElement_ComputeAAAlignedBound_m6127DD99C85C7AA497C0AC3E58138D9BD4DB32A4
                        (local_1e0,auStack_220,0);
  uStack_1b8 = CONCAT44(uStack_1d4,uStack_1d8);
  local_1c0 = CONCAT44(uStack_1dc,local_1d0);
  *(undefined8 *)(local_28 + 0x400) = uStack_1b8;
  *(undefined8 *)(local_28 + 0x3f8) = local_1c0;
  memcpy(auStack_260,auStack_80,0x40);
  VisualElement_get_worldTransform_m706C9ADA6ADFBA381EDCAD418040C9F30D42E96A(auStack_2e0,local_28,0)
  ;
  memcpy(auStack_2a0,auStack_2e0,0x40);
  memcpy(auStack_3a0,auStack_260,0x40);
  memcpy(auStack_3e0,auStack_2a0,0x40);
  Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162
            (auStack_360,auStack_3a0,auStack_3e0,0);
  memcpy(auStack_320,auStack_360,0x40);
  memcpy(local_28 + 0x408,auStack_320,0x40);
  local_3e8 = (Il2CppObject *)
              VisualElement_get_elementPanel_m4B4A37001D55527E4D015E6C6132607071F32B01_inline
                        (local_28,(MethodInfo *)0x0);
  NullCheck(local_3e8);
  local_3f0 = (RepaintData_t90534752135661579EC254884F550545D001B5EA *)
              VirtualFuncInvoker0<RepaintData_t90534752135661579EC254884F550545D001B5EA*>::Invoke
                        (0x21,local_3e8);
  NullCheck(local_3f0);
  local_3f8 = RepaintData_get_repaintEvent_mFF94EDCD02BDF49EC4C8DF4A34DA0AADAD177F2E_inline
                        (local_3f0,(MethodInfo *)0x0);
  memcpy(auStack_438,local_28 + 0x408,0x40);
  uStack_448 = *(undefined8 *)(local_28 + 0x400);
  local_450 = *(ulong *)(local_28 + 0x3f8);
  local_458 = IMGUIContainer_get_onGUIHandler_mB8C7886B0E2B094D2D42F6E2C5CCAD4B131D64FA(local_28);
  pVVar3 = local_28;
  uVar2 = local_3f8;
  memcpy(auStack_49c,auStack_438,0x40);
  uStack_4ac = (undefined4)(local_450 >> 0x20);
  uStack_4a8 = (undefined4)uStack_448;
  uStack_4a4 = (undefined4)((ulong)uStack_448 >> 0x20);
  local_459 = IMGUIContainer_HandleIMGUIEvent_m9B04CA2F52F62EF5B2151EE5565FD9B7066A3118
                        (local_450 & 0xffffffff,uStack_4ac,uStack_4a8,uStack_4a4,pVVar3,uVar2,
                         auStack_49c,local_458,1,0);
  local_459 = local_459 & 1;
  il2cpp::utils::
  FinallyHelper<IMGUIContainer_DoIMGUIRepaint_m0BAA4611CEBEA76DDA64F0202943CE283BC6CB24::$_9,false>
  ::~FinallyHelper(aFStack_a8);
  return;
}


