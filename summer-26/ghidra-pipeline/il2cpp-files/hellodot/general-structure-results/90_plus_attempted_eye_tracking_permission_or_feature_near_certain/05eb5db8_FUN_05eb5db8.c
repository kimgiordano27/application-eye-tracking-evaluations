/*
FUNCTION_NAME: FUN_05eb5db8
ENTRY_POINT: 05eb5db8
PROGRAM: hellodot-libil2cpp.so
SCORE: 100
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_9;validity_or_gating_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05eb5db8(void)

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
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  
  puVar9 = OVRPlugin_BoneCapsule___TypeInfo;
  puVar4 = OVRPlugin_Bone___TypeInfo;
  puVar3 = OVRPlugin_BodyJointLocation___TypeInfo;
  puVar2 = PTR_DAT_065dcff8;
  if ((DAT_06a7d2bb & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_EyeGazeState___TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_Bone___TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_BodyJointLocation___TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dcff8);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_BoneCapsule___TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Action<Object>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d8130);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_0661dfa0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d17d8);
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
    DAT_06a7d2bb = 1;
  }
  uVar1 = _DAT_013db700;
  puVar13 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
  puVar13[1] = _UNK_013db708;
  *puVar13 = uVar1;
  lVar11 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
  FUN_04678954(lVar11,*(undefined8 *)puVar4);
  lVar12 = thunk_FUN_02cea894(*(undefined8 *)puVar9);
  FUN_04f7383c(lVar12,0);
  uVar1 = _DAT_013dd200;
  *(undefined8 *)(lVar12 + 0x18) = _UNK_013dd208;
  *(undefined8 *)(lVar12 + 0x10) = uVar1;
  puVar10 = OVRPlugin_EyeGazeState___TypeInfo;
  puVar8 = System_Action<float>_TypeInfo;
  puVar7 = PTR_DAT_06612f28;
  puVar6 = PTR_DAT_065e2c80;
  puVar5 = PTR_DAT_065dff18;
  puVar4 = PTR_DAT_065d8130;
  puVar3 = PTR_DAT_065cf7b8;
  puVar2 = PTR_DAT_065ca058;
  if (lVar11 != 0) {
    FUN_0467928c(lVar11,*(undefined8 *)PTR_DAT_065e1bc8,lVar12,
                 *(undefined8 *)OVRPlugin_EyeGazeState___TypeInfo);
    lVar12 = thunk_FUN_02cea894(*(undefined8 *)puVar9);
    FUN_04f7383c(lVar12,0);
    uVar1 = _DAT_013dcf40;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_013dcf48;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_0467928c(lVar11,*(undefined8 *)puVar4,lVar12,*(undefined8 *)puVar10);
    lVar12 = thunk_FUN_02cea894(*(undefined8 *)puVar9);
    FUN_04f7383c(lVar12,0);
    uVar1 = _DAT_013dc810;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_013dc818;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_0467928c(lVar11,*(undefined8 *)puVar3,lVar12,*(undefined8 *)puVar10);
    lVar12 = thunk_FUN_02cea894(*(undefined8 *)puVar9);
    FUN_04f7383c(lVar12,0);
    uVar1 = _DAT_013dcd40;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_013dcd48;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_0467928c(lVar11,*(undefined8 *)puVar6,lVar12,*(undefined8 *)puVar10);
    lVar12 = thunk_FUN_02cea894(*(undefined8 *)puVar9);
    FUN_04f7383c(lVar12,0);
    uVar1 = _DAT_013dc820;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_013dc828;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_0467928c(lVar11,*(undefined8 *)puVar5,lVar12,*(undefined8 *)puVar10);
    lVar12 = thunk_FUN_02cea894(*(undefined8 *)puVar9);
    FUN_04f7383c(lVar12,0);
    uVar1 = _DAT_013da8c0;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_013da8c8;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_0467928c(lVar11,*(undefined8 *)puVar7,lVar12,*(undefined8 *)puVar10);
    lVar12 = thunk_FUN_02cea894(*(undefined8 *)puVar9);
    FUN_04f7383c(lVar12,0);
    uVar1 = _DAT_013dcd50;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_013dcd58;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_0467928c(lVar11,*(undefined8 *)puVar2,lVar12,*(undefined8 *)puVar10);
    lVar12 = thunk_FUN_02cea894(*(undefined8 *)puVar9);
    FUN_04f7383c(lVar12,0);
    uVar1 = _DAT_013dbdc0;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_013dbdc8;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_0467928c(lVar11,*(undefined8 *)puVar8,lVar12,*(undefined8 *)puVar10);
    lVar12 = thunk_FUN_02cea894(*(undefined8 *)puVar9);
    FUN_04f7383c(lVar12,0);
    uVar1 = _DAT_013dcf50;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_013dcf58;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_0467928c(lVar11,*(undefined8 *)System_Action<PointableCanvasEventArgs>_TypeInfo,lVar12,
                 *(undefined8 *)puVar10);
    lVar12 = thunk_FUN_02cea894(*(undefined8 *)puVar9);
    FUN_04f7383c(lVar12,0);
    uVar1 = _DAT_013dc2d0;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_013dc2d8;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_0467928c(lVar11,*(undefined8 *)System_Action<RenderTexture>_TypeInfo,lVar12,
                 *(undefined8 *)puVar10);
    lVar12 = thunk_FUN_02cea894(*(undefined8 *)puVar9);
    FUN_04f7383c(lVar12,0);
    uVar1 = _DAT_013da8d0;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_013da8d8;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_0467928c(lVar11,*(undefined8 *)System_Action<Object>_TypeInfo,lVar12,*(undefined8 *)puVar10)
    ;
    lVar12 = thunk_FUN_02cea894(*(undefined8 *)puVar9);
    FUN_04f7383c(lVar12,0);
    uVar1 = _DAT_013dd920;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_013dd928;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_0467928c(lVar11,*(undefined8 *)PTR_DAT_065d9550,lVar12,*(undefined8 *)puVar10);
    lVar12 = thunk_FUN_02cea894(*(undefined8 *)puVar9);
    FUN_04f7383c(lVar12,0);
    uVar1 = _DAT_013db710;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_013db718;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_0467928c(lVar11,*(undefined8 *)System_Action<SortColumnDescription>_TypeInfo,lVar12,
                 *(undefined8 *)puVar10);
    lVar12 = thunk_FUN_02cea894(*(undefined8 *)puVar9);
    FUN_04f7383c(lVar12,0);
    uVar1 = _DAT_013da520;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_013da528;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_0467928c(lVar11,*(undefined8 *)PTR_DAT_0661dfa0,lVar12,*(undefined8 *)puVar10);
    lVar12 = thunk_FUN_02cea894(*(undefined8 *)puVar9);
    FUN_04f7383c(lVar12,0);
    uVar1 = _DAT_013dd080;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_013dd088;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_0467928c(lVar11,*(undefined8 *)PTR_DAT_065d17d8,lVar12,*(undefined8 *)puVar10);
    lVar12 = thunk_FUN_02cea894(*(undefined8 *)puVar9);
    FUN_04f7383c(lVar12,0);
    uVar1 = _DAT_013db4f0;
    *(undefined8 *)(lVar12 + 0x18) = _UNK_013db4f8;
    *(undefined8 *)(lVar12 + 0x10) = uVar1;
    FUN_0467928c(lVar11,*(undefined8 *)PTR_DAT_06610df8,lVar12,*(undefined8 *)puVar10);
    *(long *)(*(long *)(*(long *)PTR_DAT_065dcff8 + 0xb8) + 0x10) = lVar11;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


