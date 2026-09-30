/*
FUNCTION_NAME: FUN_036366ec
ENTRY_POINT: 036366ec
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_036366ec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 local_24;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff72ab & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_System_IO_Stream_<>c_<BeginEndReadAsync>b__45_0__);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_TTS_Utilities_TTSSpeaker_<SpeakQueuedAsync>d__100_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9a9a8);
    DAT_03ff72ab = 1;
  }
  uVar6 = FUN_0362f0b0(param_1);
  lVar8 = *(long *)puVar1;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar8);
  }
  uVar7 = FUN_0391f968(uVar6,0,0);
  puVar4 = PTR_DAT_03d9a9a8;
  puVar3 = 
  Method_Meta_WitAi_TTS_Utilities_TTSSpeaker_<SpeakQueuedAsync>d__100_System_Collections_IEnumerator_Reset__
  ;
  puVar2 = 
  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
  ;
  if ((uVar7 & 1) == 0) {
    lVar8 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_System_IO_Stream_<>c_<BeginEndReadAsync>b__45_0__);
    FUN_03901184(lVar8,0);
    local_24 = FUN_03922ce0(param_1,0);
    uVar6 = thunk_FUN_01afa70c(*(undefined8 *)puVar2,&local_24);
    uVar6 = FUN_02ede300(*(undefined8 *)puVar4,uVar6,0);
    if (lVar8 == 0) goto LAB_036368b0;
    FUN_0392316c(lVar8,uVar6,0);
  }
  else {
    uVar6 = FUN_0362f0b0(param_1);
    lVar8 = *(long *)puVar1;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar8);
    }
    lVar8 = FUN_01f25754(uVar6,*(undefined8 *)puVar3);
  }
  if (param_1 != 0) {
    *(long *)(param_1 + 0xb0) = lVar8;
    thunk_FUN_01b4f09c((long *)(param_1 + 0xb0),lVar8);
    iVar5 = FUN_03634fac(param_1);
    if (iVar5 == 3) {
      lVar8 = FUN_03631db8(param_1);
      uVar6 = FUN_0362f0b0(param_1);
      if (lVar8 == 0) goto LAB_036368b0;
      FUN_03900e48(lVar8,uVar6,0);
    }
    else {
      FUN_03635fe0(param_1,0);
      FUN_03636594(param_1,0x1f);
    }
    return;
  }
LAB_036368b0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


