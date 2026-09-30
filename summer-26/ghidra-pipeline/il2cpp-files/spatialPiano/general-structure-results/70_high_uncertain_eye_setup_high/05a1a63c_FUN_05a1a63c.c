/*
FUNCTION_NAME: FUN_05a1a63c
ENTRY_POINT: 05a1a63c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05a1a63c(undefined1 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  byte local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  
  puVar2 = PTR_DAT_067c9648;
  if ((DAT_06bc206e & 1) == 0) {
    FUN_02f08768(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>,_OVRSceneManager_<FetchAnchorsAsync>d__37>__
                );
    FUN_02f08768(PTR_DAT_067c9648);
    FUN_02f08768(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneRoom_<LoadRoom>d__19>__
                );
    FUN_02f08768(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSpatialAnchor_<WhenLocalizedAsync>d__26>__
                );
    FUN_02f08768(PTR_DAT_067d4460);
    FUN_02f08768(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchAnchorsAsync>d__56>__
                );
    FUN_02f08768(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    DAT_06bc206e = 1;
  }
  plVar3 = (long *)FUN_02f0880c(*(undefined8 *)puVar2,8);
  puVar2 = 
  Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneRoom_<LoadRoom>d__19>__
  ;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if ((*(long *)
        Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneRoom_<LoadRoom>d__19>__
       != 0) &&
     (lVar4 = thunk_FUN_02f45174(*(long *)
                                  Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneRoom_<LoadRoom>d__19>__
                                 ,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_05a1a8e4:
    uVar6 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar6,0);
  }
  puVar1 = 
  Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>,_OVRSceneManager_<FetchAnchorsAsync>d__37>__
  ;
  if ((int)plVar3[3] != 0) {
    plVar3[4] = *(long *)puVar2;
    local_34[0] = *param_1;
    lVar4 = thunk_FUN_02f44ec4(*(undefined8 *)puVar1,local_34);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_02f45174(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_05a1a8e4;
    puVar2 = 
    Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
    ;
    uVar7 = (uint)plVar3[3];
    if ((plVar3[3] & 0xfffffffeU) != 0) {
      plVar3[5] = lVar4;
      lVar4 = *(long *)puVar2;
      if (lVar4 != 0) {
        lVar4 = thunk_FUN_02f45174(lVar4,*(undefined8 *)(*plVar3 + 0x40));
        if (lVar4 == 0) goto LAB_05a1a8e4;
        uVar7 = (uint)plVar3[3];
      }
      puVar1 = PTR_DAT_067c9338;
      if (2 < uVar7) {
        plVar3[6] = *(long *)puVar2;
        local_38[0] = param_1[1];
        lVar4 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar1 + 0x30),local_38);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_02f45174(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_05a1a8e4;
        puVar2 = 
        Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSpatialAnchor_<WhenLocalizedAsync>d__26>__
        ;
        uVar7 = (uint)plVar3[3];
        if ((plVar3[3] & 0xfffffffcU) != 0) {
          plVar3[7] = lVar4;
          lVar4 = *(long *)puVar2;
          if (lVar4 != 0) {
            lVar4 = thunk_FUN_02f45174(lVar4,*(undefined8 *)(*plVar3 + 0x40));
            if (lVar4 == 0) goto LAB_05a1a8e4;
            uVar7 = (uint)plVar3[3];
          }
          if (4 < uVar7) {
            plVar3[8] = *(long *)puVar2;
            local_3c[0] = param_1[2];
            lVar4 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar1 + 0x18),local_3c);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_02f45174(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
            goto LAB_05a1a8e4;
            puVar2 = 
            Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchAnchorsAsync>d__56>__
            ;
            uVar7 = *(uint *)(plVar3 + 3);
            if (5 < uVar7) {
              plVar3[9] = lVar4;
              lVar4 = *(long *)puVar2;
              if (lVar4 != 0) {
                lVar4 = thunk_FUN_02f45174(lVar4,*(undefined8 *)(*plVar3 + 0x40));
                if (lVar4 == 0) goto LAB_05a1a8e4;
                uVar7 = *(uint *)(plVar3 + 3);
              }
              if (6 < uVar7) {
                local_40[0] = param_1[3];
                plVar3[10] = *(long *)puVar2;
                local_40[0] = local_40[0] ^ 1;
                lVar4 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar1 + 0x28),local_40);
                if ((lVar4 != 0) &&
                   (lVar5 = thunk_FUN_02f45174(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                goto LAB_05a1a8e4;
                puVar2 = PTR_DAT_067d4460;
                if ((*(uint *)(plVar3 + 3) & 0xfffffff8) != 0) {
                  plVar3[0xb] = lVar4;
                  FUN_04f700a0(*(undefined8 *)puVar2,plVar3,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


