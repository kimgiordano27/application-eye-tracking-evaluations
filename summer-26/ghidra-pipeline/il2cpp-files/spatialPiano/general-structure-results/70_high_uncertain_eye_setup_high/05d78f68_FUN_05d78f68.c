/*
FUNCTION_NAME: FUN_05d78f68
ENTRY_POINT: 05d78f68
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05d78f68(long param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  
  if ((DAT_06bc3a13 & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_UIElements_Painter2D_OnMeshGeneration__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_Unity_AppUI_UI_PanAndZoomable_DampingEffect__);
    FUN_02f08768(Method_Unity_AppUI_UI_PanAndZoomable_OnFocusOut__);
    DAT_06bc3a13 = 1;
  }
  puVar1 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  local_60 = 0;
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  if (*(char *)(param_1 + 0xd0) != '\0') {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    local_60 = *(undefined4 *)(param_2 + 0x128);
    uStack_78 = *(ulong *)(param_2 + 0x110);
    local_80 = *(undefined8 *)(param_2 + 0x108);
    uStack_68 = *(undefined8 *)(param_2 + 0x120);
    local_70 = *(undefined8 *)(param_2 + 0x118);
    uStack_88 = *(undefined8 *)(param_2 + 0x100);
    local_90 = *(undefined8 *)(param_2 + 0xf8);
    uVar4 = *(undefined8 *)(param_2 + 0x160);
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_Painter2D_OnMeshGeneration__ + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    puVar3 = Method_Unity_AppUI_UI_PanAndZoomable_OnFocusOut__;
    puVar2 = Method_Unity_AppUI_UI_PanAndZoomable_DampingEffect__;
    FUN_060d69f4(&local_90,4,0);
    uStack_78 = uStack_78 & 0xffffffff;
    local_90 = uVar4;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05daf224(0,param_1 + 0xc0,&local_90,0,0,1,*(undefined8 *)puVar3,0);
    uStack_c8 = *(undefined8 *)(param_2 + 0x100);
    local_d0 = *(undefined8 *)(param_2 + 0xf8);
    uStack_b8 = *(undefined8 *)(param_2 + 0x110);
    local_c0 = *(undefined8 *)(param_2 + 0x108);
    uStack_a8 = *(undefined8 *)(param_2 + 0x120);
    local_b0 = *(undefined8 *)(param_2 + 0x118);
    local_a0 = *(undefined4 *)(param_2 + 0x128);
    uVar4 = *(undefined8 *)(param_2 + 0x160);
    FUN_060d69f4(&local_d0,0,0);
    uStack_b8 = CONCAT44(param_3,(undefined4)uStack_b8);
    local_d0 = uVar4;
    FUN_05daf224(0,param_1 + 200,&local_d0,0,0,1,*(undefined8 *)puVar2,0);
  }
  return;
}


