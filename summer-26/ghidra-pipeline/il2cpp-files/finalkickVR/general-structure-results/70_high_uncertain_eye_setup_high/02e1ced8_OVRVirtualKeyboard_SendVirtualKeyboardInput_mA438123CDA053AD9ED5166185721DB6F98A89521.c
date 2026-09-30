/*
FUNCTION_NAME: OVRVirtualKeyboard_SendVirtualKeyboardInput_mA438123CDA053AD9ED5166185721DB6F98A89521
ENTRY_POINT: 02e1ced8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRVirtualKeyboard_SendVirtualKeyboardInput_mA438123CDA053AD9ED5166185721DB6F98A89521
               (long param_1,undefined4 param_2,undefined8 param_3,byte param_4,undefined8 param_5,
               undefined8 param_6)

{
  undefined *puVar1;
  undefined8 local_2d0 [2];
  undefined8 uStack_2bc;
  undefined8 local_2b0;
  undefined8 uStack_29c;
  undefined8 local_288;
  void *local_280;
  byte local_271;
  undefined8 local_270;
  undefined1 auStack_268 [44];
  int local_23c;
  undefined1 auStack_238 [44];
  undefined8 local_20c;
  undefined8 uStack_1f8;
  undefined8 local_1cc;
  undefined8 uStack_1b8;
  undefined8 local_18c;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined8 local_148;
  byte local_139;
  undefined8 local_138;
  byte local_12d;
  undefined8 local_12c;
  undefined8 uStack_118;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 *local_d0;
  ulong local_c8;
  undefined4 *local_c0;
  undefined4 *local_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_38;
  byte local_2d;
  undefined4 local_2c;
  long local_28;
  
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__;
  local_2d = param_4 & 1;
  local_40 = param_6;
  local_38 = param_5;
  local_2c = param_2;
  local_28 = param_1;
  if ((OVRVirtualKeyboard_SendVirtualKeyboardInput_mA438123CDA053AD9ED5166185721DB6F98A89521::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRVirtualKeyboard_SendVirtualKeyboardInput_mA438123CDA053AD9ED5166185721DB6F98A89521::
    s_Il2CppMethodInitialized = 1;
  }
  memset(&local_68,0,0x28);
  local_90 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_80 = 0;
  uStack_7c = 0;
  local_78 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  local_a0 = 0;
  uStack_9c = 0;
  local_98 = 0;
  local_b8 = (undefined4 *)0x0;
  local_c0 = (undefined4 *)0x0;
  local_c8 = 0;
  local_d0 = (undefined4 *)0x0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  local_e0 = 0;
  uStack_dc = 0;
  local_d8 = 0;
  il2cpp_codegen_initobj(&local_68,0x28);
  local_f4 = local_2c;
  local_68 = local_2c;
  OVRPose_ToPosef_m07DD283CB7D729999F7223E8879214C080066192(param_3,0);
  local_64 = local_12c;
  uStack_50 = uStack_118;
  local_12d = local_2d & 1;
  if (local_12d == 0) {
    local_c0 = &local_68;
  }
  else {
    local_b8 = &local_68;
  }
  local_d0 = &local_68;
  local_c8 = (ulong)(local_12d != 0);
  local_48 = local_c8;
  local_138 = local_38;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_139 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(local_138,0);
  local_139 = local_139 & 1;
  if (local_139 == 0) {
    OVRPose_ToPosef_m07DD283CB7D729999F7223E8879214C080066192(param_3,0);
    local_f0 = local_20c;
    uStack_dc = (undefined4)uStack_1f8;
    local_d8 = (undefined4)((ulong)uStack_1f8 >> 0x20);
  }
  else {
    local_148 = local_38;
    OVRExtensions_ToOVRPose_m52593B4249478412DFA025AD6DE338B96CFBC265(local_38,0);
    local_b0 = local_18c;
    uStack_164 = uStack_180;
    uStack_160 = uStack_17c;
    uStack_a8 = uStack_184;
    uStack_9c = (undefined4)uStack_178;
    local_98 = (undefined4)((ulong)uStack_178 >> 0x20);
    uStack_a4 = uStack_164;
    local_a0 = uStack_160;
    OVRPose_ToPosef_m07DD283CB7D729999F7223E8879214C080066192(&local_b0,0);
    local_f0 = local_1cc;
    uStack_dc = (undefined4)uStack_1b8;
    local_d8 = (undefined4)((ulong)uStack_1b8 >> 0x20);
  }
  local_90 = local_f0;
  uStack_7c = uStack_dc;
  local_78 = local_d8;
  memcpy(auStack_238,&local_68,0x28);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  memcpy(auStack_268,auStack_238,0x28);
  local_23c = OVRPlugin_SendVirtualKeyboardInput_m68694A0A4A269D6BB9E02E8B4D80ABF511367AE5
                        (auStack_268,&local_90,0);
  if (local_23c == 0) {
    local_270 = local_38;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_271 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(local_270,0);
    local_271 = local_271 & 1;
    if (local_271 != 0) {
      local_280 = *(void **)(local_28 + 0x140);
      local_288 = local_38;
      local_2b0 = local_90;
      uStack_29c = CONCAT44(local_78,uStack_7c);
      NullCheck(local_280);
      local_2d0[0] = local_2b0;
      uStack_2bc = uStack_29c;
      InteractorRootTransformOverride_Enqueue_m82D2F7EFD54535127772A21EAD9CEFABA9FAFF49
                (local_280,local_288,local_2d0,0);
    }
  }
  return;
}


