/*
FUNCTION_NAME: UnityEngine.UIElements.BaseListViewController$$remove_itemsRemoved
ENTRY_POINT: 05eb5e64
PROGRAM: hellodot-libil2cpp.so
SCORE: 78
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_UIElements_BaseListViewController__remove_itemsRemoved(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e1bc8);
  AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<PointableCanvasEventArgs>_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca058);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dff18);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06612f28);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06610df8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cf7b8);
  AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<RenderTexture>_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d9550);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e2c80);
  AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<float>_TypeInfo);
  AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<SortColumnDescription>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 699) = 1;
  uVar1 = _DAT_013db700;
  puVar12 = *(undefined8 **)(*unaff_x23 + 0xb8);
  puVar12[1] = _UNK_013db708;
  *puVar12 = uVar1;
  lVar10 = thunk_FUN_02cea894(*unaff_x20);
  FUN_04678954(lVar10,*unaff_x19);
  lVar11 = thunk_FUN_02cea894(*unaff_x22);
  FUN_04f7383c(lVar11,0);
  uVar1 = _DAT_013dd200;
  *(undefined8 *)(lVar11 + 0x18) = _UNK_013dd208;
  *(undefined8 *)(lVar11 + 0x10) = uVar1;
  puVar9 = OVRPlugin_EyeGazeState___TypeInfo;
  puVar8 = System_Action<float>_TypeInfo;
  puVar7 = PTR_DAT_06612f28;
  puVar6 = PTR_DAT_065e2c80;
  puVar5 = PTR_DAT_065dff18;
  puVar4 = PTR_DAT_065d8130;
  puVar3 = PTR_DAT_065cf7b8;
  puVar2 = PTR_DAT_065ca058;
  if (lVar10 != 0) {
    FUN_0467928c(lVar10,*(undefined8 *)PTR_DAT_065e1bc8,lVar11,
                 *(undefined8 *)OVRPlugin_EyeGazeState___TypeInfo);
    lVar11 = thunk_FUN_02cea894(*unaff_x22);
    FUN_04f7383c(lVar11,0);
    uVar1 = _DAT_013dcf40;
    *(undefined8 *)(lVar11 + 0x18) = _UNK_013dcf48;
    *(undefined8 *)(lVar11 + 0x10) = uVar1;
    FUN_0467928c(lVar10,*(undefined8 *)puVar4,lVar11,*(undefined8 *)puVar9);
    lVar11 = thunk_FUN_02cea894(*unaff_x22);
    FUN_04f7383c(lVar11,0);
    uVar1 = _DAT_013dc810;
    *(undefined8 *)(lVar11 + 0x18) = _UNK_013dc818;
    *(undefined8 *)(lVar11 + 0x10) = uVar1;
    FUN_0467928c(lVar10,*(undefined8 *)puVar3,lVar11,*(undefined8 *)puVar9);
    lVar11 = thunk_FUN_02cea894(*unaff_x22);
    FUN_04f7383c(lVar11,0);
    uVar1 = _DAT_013dcd40;
    *(undefined8 *)(lVar11 + 0x18) = _UNK_013dcd48;
    *(undefined8 *)(lVar11 + 0x10) = uVar1;
    FUN_0467928c(lVar10,*(undefined8 *)puVar6,lVar11,*(undefined8 *)puVar9);
    lVar11 = thunk_FUN_02cea894(*unaff_x22);
    FUN_04f7383c(lVar11,0);
    uVar1 = _DAT_013dc820;
    *(undefined8 *)(lVar11 + 0x18) = _UNK_013dc828;
    *(undefined8 *)(lVar11 + 0x10) = uVar1;
    FUN_0467928c(lVar10,*(undefined8 *)puVar5,lVar11,*(undefined8 *)puVar9);
    lVar11 = thunk_FUN_02cea894(*unaff_x22);
    FUN_04f7383c(lVar11,0);
    uVar1 = _DAT_013da8c0;
    *(undefined8 *)(lVar11 + 0x18) = _UNK_013da8c8;
    *(undefined8 *)(lVar11 + 0x10) = uVar1;
    FUN_0467928c(lVar10,*(undefined8 *)puVar7,lVar11,*(undefined8 *)puVar9);
    lVar11 = thunk_FUN_02cea894(*unaff_x22);
    FUN_04f7383c(lVar11,0);
    uVar1 = _DAT_013dcd50;
    *(undefined8 *)(lVar11 + 0x18) = _UNK_013dcd58;
    *(undefined8 *)(lVar11 + 0x10) = uVar1;
    FUN_0467928c(lVar10,*(undefined8 *)puVar2,lVar11,*(undefined8 *)puVar9);
    lVar11 = thunk_FUN_02cea894(*unaff_x22);
    FUN_04f7383c(lVar11,0);
    uVar1 = _DAT_013dbdc0;
    *(undefined8 *)(lVar11 + 0x18) = _UNK_013dbdc8;
    *(undefined8 *)(lVar11 + 0x10) = uVar1;
    FUN_0467928c(lVar10,*(undefined8 *)puVar8,lVar11,*(undefined8 *)puVar9);
    lVar11 = thunk_FUN_02cea894(*unaff_x22);
    FUN_04f7383c(lVar11,0);
    uVar1 = _DAT_013dcf50;
    *(undefined8 *)(lVar11 + 0x18) = _UNK_013dcf58;
    *(undefined8 *)(lVar11 + 0x10) = uVar1;
    FUN_0467928c(lVar10,*(undefined8 *)System_Action<PointableCanvasEventArgs>_TypeInfo,lVar11,
                 *(undefined8 *)puVar9);
    lVar11 = thunk_FUN_02cea894(*unaff_x22);
    FUN_04f7383c(lVar11,0);
    uVar1 = _DAT_013dc2d0;
    *(undefined8 *)(lVar11 + 0x18) = _UNK_013dc2d8;
    *(undefined8 *)(lVar11 + 0x10) = uVar1;
    FUN_0467928c(lVar10,*(undefined8 *)System_Action<RenderTexture>_TypeInfo,lVar11,
                 *(undefined8 *)puVar9);
    lVar11 = thunk_FUN_02cea894(*unaff_x22);
    FUN_04f7383c(lVar11,0);
    uVar1 = _DAT_013da8d0;
    *(undefined8 *)(lVar11 + 0x18) = _UNK_013da8d8;
    *(undefined8 *)(lVar11 + 0x10) = uVar1;
    FUN_0467928c(lVar10,*(undefined8 *)System_Action<Object>_TypeInfo,lVar11,*(undefined8 *)puVar9);
    lVar11 = thunk_FUN_02cea894(*unaff_x22);
    FUN_04f7383c(lVar11,0);
    uVar1 = _DAT_013dd920;
    *(undefined8 *)(lVar11 + 0x18) = _UNK_013dd928;
    *(undefined8 *)(lVar11 + 0x10) = uVar1;
    FUN_0467928c(lVar10,*(undefined8 *)PTR_DAT_065d9550,lVar11,*(undefined8 *)puVar9);
    lVar11 = thunk_FUN_02cea894(*unaff_x22);
    FUN_04f7383c(lVar11,0);
    uVar1 = _DAT_013db710;
    *(undefined8 *)(lVar11 + 0x18) = _UNK_013db718;
    *(undefined8 *)(lVar11 + 0x10) = uVar1;
    FUN_0467928c(lVar10,*(undefined8 *)System_Action<SortColumnDescription>_TypeInfo,lVar11,
                 *(undefined8 *)puVar9);
    lVar11 = thunk_FUN_02cea894(*unaff_x22);
    FUN_04f7383c(lVar11,0);
    uVar1 = _DAT_013da520;
    *(undefined8 *)(lVar11 + 0x18) = _UNK_013da528;
    *(undefined8 *)(lVar11 + 0x10) = uVar1;
    FUN_0467928c(lVar10,*(undefined8 *)PTR_DAT_0661dfa0,lVar11,*(undefined8 *)puVar9);
    lVar11 = thunk_FUN_02cea894(*unaff_x22);
    FUN_04f7383c(lVar11,0);
    uVar1 = _DAT_013dd080;
    *(undefined8 *)(lVar11 + 0x18) = _UNK_013dd088;
    *(undefined8 *)(lVar11 + 0x10) = uVar1;
    FUN_0467928c(lVar10,*(undefined8 *)PTR_DAT_065d17d8,lVar11,*(undefined8 *)puVar9);
    lVar11 = thunk_FUN_02cea894(*unaff_x22);
    FUN_04f7383c(lVar11,0);
    uVar1 = _DAT_013db4f0;
    *(undefined8 *)(lVar11 + 0x18) = _UNK_013db4f8;
    *(undefined8 *)(lVar11 + 0x10) = uVar1;
    FUN_0467928c(lVar10,*(undefined8 *)PTR_DAT_06610df8,lVar11,*(undefined8 *)puVar9);
    *(long *)(*(long *)(*(long *)PTR_DAT_065dcff8 + 0xb8) + 0x10) = lVar10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


