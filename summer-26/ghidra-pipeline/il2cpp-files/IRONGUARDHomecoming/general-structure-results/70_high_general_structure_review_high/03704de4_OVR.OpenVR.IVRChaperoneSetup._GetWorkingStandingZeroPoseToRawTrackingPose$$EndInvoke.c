/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingStandingZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 03704de4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__EndInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  char *pcVar12;
  long *unaff_x20;
  long *unaff_x21;
  
  thunk_FUN_01ee6d7c();
  uVar7 = FUN_037044fc();
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*unaff_x20);
  }
  uVar8 = FUN_0403b648(0);
  if (((uVar8 & 1) == 0) || (uVar8 = FUN_03704734(), (uVar8 & 1) == 0)) {
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    iVar6 = FUN_04039fb4(0);
    if (iVar6 == 7) {
OVR_OpenVR_IVRChaperoneSetup__SetWorkingPlayAreaSize__Invoke:
      lVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass60_0_<DOShakeScale>b__0__
                                );
      FUN_035ac8e8(lVar9,0);
      if (lVar9 == 0) goto LAB_03705024;
      FUN_037050a4(lVar9,uVar7);
      lVar9 = *unaff_x21;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar9);
        lVar9 = *unaff_x21;
      }
      uVar7 = *(undefined8 *)(lVar9 + 0xb8);
      bVar4 = true;
      goto LAB_03704efc;
    }
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    iVar6 = FUN_04039fb4(0);
    if (iVar6 == 2) goto OVR_OpenVR_IVRChaperoneSetup__SetWorkingPlayAreaSize__Invoke;
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    iVar6 = FUN_04039fb4(0);
    if (iVar6 != 0xb) {
      thunk_FUN_01efb3a4(Method_System_Text_Encoding_GetBytes__);
      uVar7 = thunk_FUN_01f117cc();
      uVar11 = thunk_FUN_01efb3a4(
                                 Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass61_0_<DOJump>b__3__
                                 );
      FUN_0356d1bc(uVar7,uVar11,0);
      goto LAB_03705058;
    }
    lVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass59_0_<DOShakeScale>b__1__
                              );
    uVar11 = FUN_035ac8e8(lVar9,0);
    if (lVar9 == 0) goto LAB_03705024;
    bVar5 = FUN_036ddfd0(uVar11,uVar7);
    lVar9 = *unaff_x21;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar9);
      lVar9 = *unaff_x21;
    }
    **(byte **)(lVar9 + 0xb8) = bVar5 & 1;
  }
  else {
    lVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass5_0_<DOOrthoSize>b__1__
                              );
    FUN_035ac8e8(lVar9,0);
    if (lVar9 == 0) goto LAB_03705024;
    lVar10 = FUN_03704758(lVar9);
    lVar9 = *unaff_x21;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar9);
      lVar9 = *unaff_x21;
    }
    uVar7 = *(undefined8 *)(lVar9 + 0xb8);
    bVar4 = lVar10 != 0;
LAB_03704efc:
    *(bool *)uVar7 = bVar4;
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar9);
    lVar9 = *unaff_x21;
  }
  pcVar12 = *(char **)(lVar9 + 0xb8);
  if (*pcVar12 == '\0') {
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<BaseInputModule>__);
    uVar7 = thunk_FUN_01f117cc();
    uVar11 = thunk_FUN_01efb3a4(
                               Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass61_0_<DOJump>b__1__
                               );
    FUN_04073f58(uVar7,uVar11,0);
LAB_03705058:
    uVar11 = thunk_FUN_01efb3a4(
                               Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass46_0_<GetVoiceSettingsFields>b__0__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar7,uVar11);
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar9);
    pcVar12 = *(char **)(*unaff_x21 + 0xb8);
  }
  puVar3 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass61_0_<DOJump>b__0__;
  puVar2 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass60_0_<DOShakeScale>b__1__;
  puVar1 = Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureOutEvent>__ctor__;
  if (pcVar12[1] != '\0') {
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403f2cc(*(undefined8 *)puVar2,0);
  }
  lVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  UnityEngine_UIElements_UIR_Implementation_RenderEvents__UpdateLocalFlipsWinding
            (lVar9,*(undefined8 *)puVar3,0);
  if (lVar9 != 0) {
    FUN_023360e0(lVar9,*(undefined8 *)
                        Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass5_0_<DOOrthoSize>b__0__
                );
    return;
  }
LAB_03705024:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


