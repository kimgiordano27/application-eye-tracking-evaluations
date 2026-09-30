/*
FUNCTION_NAME: FUN_05b3930c
ENTRY_POINT: 05b3930c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_8;frame_or_lifecycle_behavior
*/


void FUN_05b3930c(long param_1)

{
  undefined8 uVar1;
  
  if ((DAT_06bc2a06 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cefc0);
    FUN_02f08768(
                Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnSessionDiscoveredWithSpatialAnchor__
                );
    FUN_02f08768(
                Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_SpaceSharingBeforeHostStart__
                );
    FUN_02f08768(Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_Start__);
    FUN_02f08768(Method_System_Drawing_Color_CheckByte__);
    FUN_02f08768(Method_UnityEngine_Color_get_Item__);
    FUN_02f08768(Method_UnityEngine_Color32_get_Item__);
    FUN_02f08768(Method_Unity_AppUI_UI_ColorField_<OnClick>b__22_0__);
    FUN_02f08768(Method_Unity_AppUI_UI_ColorField_OnClick__);
    FUN_02f08768(Method_Unity_AppUI_UI_ColorField_OnKeyboardFocusIn__);
    DAT_06bc2a06 = 1;
  }
  if (*(char *)(param_1 + 0xd8) != '\0') {
    return;
  }
  if (*(long *)(param_1 + 0xe0) == 0) {
    uVar1 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cefc0);
    FUN_0482ce0c(uVar1,param_1,*(undefined8 *)Method_System_Drawing_Color_CheckByte__,0);
    *(undefined8 *)(param_1 + 0xe0) = uVar1;
  }
  if (*(long *)(param_1 + 0xf8) == 0) {
    uVar1 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cefc0);
    FUN_0482ce0c(uVar1,param_1,
                 *(undefined8 *)
                  Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnSessionDiscoveredWithSpatialAnchor__
                 ,0);
    *(undefined8 *)(param_1 + 0xf8) = uVar1;
  }
  if (*(long *)(param_1 + 0x100) == 0) {
    uVar1 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cefc0);
    FUN_0482ce0c(uVar1,param_1,*(undefined8 *)Method_UnityEngine_Color_get_Item__,0);
    *(undefined8 *)(param_1 + 0x100) = uVar1;
  }
  if (*(long *)(param_1 + 0x108) == 0) {
    uVar1 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cefc0);
    FUN_0482ce0c(uVar1,param_1,
                 *(undefined8 *)
                  Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_SpaceSharingBeforeHostStart__
                 ,0);
    *(undefined8 *)(param_1 + 0x108) = uVar1;
  }
  if (*(long *)(param_1 + 0x110) == 0) {
    uVar1 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cefc0);
    FUN_0482ce0c(uVar1,param_1,*(undefined8 *)Method_UnityEngine_Color32_get_Item__,0);
    *(undefined8 *)(param_1 + 0x110) = uVar1;
  }
  if (*(long *)(param_1 + 0xe8) == 0) {
    uVar1 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cefc0);
    FUN_0482ce0c(uVar1,param_1,
                 *(undefined8 *)
                  Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_Start__,0);
    *(undefined8 *)(param_1 + 0xe8) = uVar1;
  }
  if (*(long *)(param_1 + 0xf0) == 0) {
    uVar1 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cefc0);
    FUN_0482ce0c(uVar1,param_1,*(undefined8 *)Method_Unity_AppUI_UI_ColorField_<OnClick>b__22_0__,0)
    ;
    *(undefined8 *)(param_1 + 0xf0) = uVar1;
  }
  if (*(long *)(param_1 + 0x120) == 0) {
    uVar1 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cefc0);
    FUN_0482ce0c(uVar1,param_1,*(undefined8 *)Method_Unity_AppUI_UI_ColorField_OnClick__,0);
    *(undefined8 *)(param_1 + 0x120) = uVar1;
  }
  if (*(long *)(param_1 + 0x118) == 0) {
    uVar1 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cefc0);
    FUN_0482ce0c(uVar1,param_1,*(undefined8 *)Method_Unity_AppUI_UI_ColorField_OnKeyboardFocusIn__,0
                );
    *(undefined8 *)(param_1 + 0x118) = uVar1;
  }
  FUN_05b3b8d8(param_1,1);
  return;
}


