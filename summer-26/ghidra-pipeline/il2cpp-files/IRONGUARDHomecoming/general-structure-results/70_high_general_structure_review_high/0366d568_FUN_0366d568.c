/*
FUNCTION_NAME: FUN_0366d568
ENTRY_POINT: 0366d568
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_16;telemetry_or_network_hits_3
*/


void FUN_0366d568(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  
  if ((DAT_04833d72 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Meta_WitAi_Lib_MicBase_<ReadRawAudio>d__33_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_VoiceSDK_Utilities_MicPermissionsManager_<>c__DisplayClass1_0_<RequestMicPermission>b__0__
                      );
    DAT_04833d72 = 1;
  }
  plVar7 = (long *)(param_1 + 0x40);
  if (*plVar7 != 0) {
    return;
  }
  plVar3 = (long *)FUN_01f08890(*(undefined8 *)
                                 Method_Meta_WitAi_Lib_MicBase_<ReadRawAudio>d__33_System_Collections_IEnumerator_Reset__
                                ,5);
  puVar2 = 
  Method_Oculus_VoiceSDK_Utilities_MicPermissionsManager_<>c__DisplayClass1_0_<RequestMicPermission>b__0__
  ;
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  lVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_Oculus_VoiceSDK_Utilities_MicPermissionsManager_<>c__DisplayClass1_0_<RequestMicPermission>b__0__
                            );
  FUN_0366d894(lVar4,0,5,uVar1);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_0366d7b4:
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_01f51358(plVar3 + 4,lVar4);
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    lVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    FUN_0366d894(lVar4,1,8,uVar1);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_0366d7b4;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar4;
      thunk_FUN_01f51358(plVar3 + 5,lVar4);
      uVar1 = *(undefined4 *)(param_1 + 0x38);
      lVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
      FUN_0366d894(lVar4,2,0xb,uVar1);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_0366d7b4;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        thunk_FUN_01f51358(plVar3 + 6,lVar4);
        uVar1 = *(undefined4 *)(param_1 + 0x38);
        lVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
        FUN_0366d894(lVar4,3,0xe,uVar1);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_0366d7b4;
        if (3 < *(uint *)(plVar3 + 3)) {
          plVar3[7] = lVar4;
          thunk_FUN_01f51358(plVar3 + 7,lVar4);
          uVar1 = *(undefined4 *)(param_1 + 0x38);
          lVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
          FUN_0366d894(lVar4,4,0x12,uVar1);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_0366d7b4;
          if (4 < *(uint *)(plVar3 + 3)) {
            plVar3[8] = lVar4;
            thunk_FUN_01f51358(plVar3 + 8,lVar4);
            *plVar7 = (long)plVar3;
            thunk_FUN_01f51358(plVar7,plVar3);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


