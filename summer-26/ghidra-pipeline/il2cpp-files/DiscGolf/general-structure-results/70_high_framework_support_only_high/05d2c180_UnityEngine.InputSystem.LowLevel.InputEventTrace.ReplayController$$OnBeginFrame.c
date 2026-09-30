/*
FUNCTION_NAME: UnityEngine.InputSystem.LowLevel.InputEventTrace.ReplayController$$OnBeginFrame
ENTRY_POINT: 05d2c180
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_1
*/


void UnityEngine_InputSystem_LowLevel_InputEventTrace_ReplayController__OnBeginFrame(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar3;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined4 unaff_w25;
  undefined4 unaff_w26;
  undefined4 unaff_w28;
  undefined4 unaff_w29;
  
  *(undefined8 *)(param_1 + 0x10) = unaff_x20;
  LeanTween__value();
  *(undefined4 *)(unaff_x21 + 0x18) = 10;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Assets_Scripts_PlayerBehavior_<StartNextPlayersTurnInSeconds>d__31_TypeInfo
  ;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = unaff_w29;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)
           Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_GetEnumerator__
  ;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = unaff_w28;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)PTR_DAT_069fc980;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 10;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)
           Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_0_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 0xd;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
                    /* try { // try from 05d2c314 to 05e2c527 has its CatchHandler @ 05d2c314
                       catch() { ... } // from try @ 05d2c314 with catch @ 05d2c314
                       catch() { ... } // from try @ 05d2cbe8 with catch @ 05d2c314
                       catch() { ... } // from try @ 05d2ce6c with catch @ 05d2c314
                       catch() { ... } // from try @ 05d2cff4 with catch @ 05d2c314
                       catch() { ... } // from try @ 05d2d074 with catch @ 05d2c314 */
  *(undefined4 *)(lVar2 + 0x18) = unaff_w26;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Mono_Security_PKCS7_EncryptedData_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 2;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 6;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Eyes>__ctor__;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 0x17;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Method_Meta_XR_ImmersiveDebugger_Hierarchy_Item<Component>__ctor__;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = unaff_w26;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Method_UnityEngine_InputSystem_InputControl<Vector2>_get_value__;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 0x13;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Method_UnityEngine_InputSystem_InputControl<Vector2>_FinishSetup__;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 0x27;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Mono_Security_PKCS7_SignedData_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 2;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)
           Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>__ctor__;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 10;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)
           Method_System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_Add__;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 10;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)PauseMenuController_<BuildSceneList>d__25_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = unaff_w29;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Unity_Services_CloudSave_Internal_PlayerDataService_<>c_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = unaff_w25;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)OVRPlugin_OVRP_1_129_0_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 0xf;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Method_System_Collections_Generic_HashSet<Type>_Remove__;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = unaff_w29;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)
           Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule_RaycastComparer_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 0xb;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)System_IO_Path_<>c_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = unaff_w26;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)PauseMenuController_<HideInstructionsOverlay>d__33_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 10;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)
           Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_1_TypeInfo;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 0xb;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)PTR_DAT_06a122e8;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 0xb;
  FUN_04e935f0();
  lVar2 = thunk_FUN_02dd3144(*unaff_x22);
  uVar3 = *(undefined8 *)Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1_TypeInfo
  ;
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  LeanTween__value((undefined8 *)(lVar2 + 0x10),uVar3);
  *(undefined4 *)(lVar2 + 0x18) = 0xe;
  FUN_04e935f0();
  puVar1 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Resize__;
  **(undefined8 **)
    (*(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Resize__ + 0xb8) =
       unaff_x19;
  LeanTween__value(*(undefined8 *)(*(long *)puVar1 + 0xb8));
  return;
}


