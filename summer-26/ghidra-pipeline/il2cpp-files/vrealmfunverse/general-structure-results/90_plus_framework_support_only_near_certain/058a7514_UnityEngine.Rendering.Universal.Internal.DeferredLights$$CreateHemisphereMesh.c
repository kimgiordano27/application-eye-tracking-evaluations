/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.DeferredLights$$CreateHemisphereMesh
ENTRY_POINT: 058a7514
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 111
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_9;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void UnityEngine_Rendering_Universal_Internal_DeferredLights__CreateHemisphereMesh(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w24;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  puVar4 = (undefined8 *)FUN_0463ca1c();
  lVar5 = FUN_058a7d14(*puVar4);
  puVar3 = PTR_DAT_06313048;
  if (unaff_w24 < 7) {
    if (3 < unaff_w24) {
      if (unaff_w24 == 4) {
        uStack000000000000001c = *(undefined4 *)(unaff_x22 + 4);
        uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)Method_OVRTaskBuilder<OVRPlugin_Result>_SetException__,
                           (long)&stack0x00000018 + 4);
        FUN_04c0af28(*(undefined8 *)Method_OVRTaskBuilder<OVRPlugin_Result>_get_Task__,lVar5,uVar8,0
                    );
        goto LAB_058a7a48;
      }
      if (unaff_w24 != 5) {
        if (unaff_w24 != 6) goto LAB_058a7ce0;
        uStack000000000000001c = 8;
        uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(PTR_DAT_06312310 + 0x48),(long)&stack0x00000018 + 4);
        puVar4 = (undefined8 *)
                 Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetStateMachine__;
        goto LAB_058a79f4;
      }
      lVar6 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,5);
      if (lVar6 == 0) goto LAB_058a7ccc;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_058a7cd0;
      *(undefined8 *)(lVar6 + 0x20) = unaff_x19;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_058a7cd0;
      *(long *)(lVar6 + 0x28) = lVar5;
      thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),lVar5);
      uVar1 = *(uint *)(lVar6 + 0x18);
      puVar4 = (undefined8 *)
               Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRSceneManager_Metrics>>,_OVRSceneManager_<LoadSceneModelAsync>d__45>__
      ;
      goto joined_r0x058a7ad4;
    }
    if (unaff_w24 == 1) {
      plVar7 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,4);
      if (plVar7 == (long *)0x0) {
LAB_058a7ccc:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0)) {
LAB_058a7cd4:
        uVar8 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar8,0);
      }
      if ((int)plVar7[3] != 0) {
        plVar7[4] = lVar5;
        thunk_FUN_02bb0e9c(plVar7 + 4,lVar5);
        puVar2 = PTR_DAT_06312310;
        uStack000000000000001c = *(undefined4 *)(unaff_x22 + 100);
        lVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(PTR_DAT_06312310 + 0x48),(long)&stack0x00000018 + 4);
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
        goto LAB_058a7cd4;
        if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
          plVar7[5] = lVar5;
          thunk_FUN_02bb0e9c(plVar7 + 5,lVar5);
          uStack0000000000000018 = *(undefined4 *)(unaff_x22 + 0x68);
          lVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)(puVar2 + 0x48),&stack0x00000018);
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
          goto LAB_058a7cd4;
          if (2 < *(uint *)(plVar7 + 3)) {
            plVar7[6] = lVar5;
            thunk_FUN_02bb0e9c(plVar7 + 6,lVar5);
            uStack0000000000000014 = *(undefined4 *)(unaff_x22 + 0x70);
            lVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                              (*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000010 + 4);
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
            goto LAB_058a7cd4;
            if ((*(uint *)(plVar7 + 3) & 0xfffffffc) != 0) {
              plVar7[7] = lVar5;
              thunk_FUN_02bb0e9c(plVar7 + 7,lVar5);
              FUN_04c0afb0(*(undefined8 *)
                            Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetException__
                           ,plVar7,0);
              plVar7 = (long *)FUN_02b3c908(*(undefined8 *)puVar3,4);
              if (plVar7 == (long *)0x0) goto LAB_058a7ccc;
              if ((unaff_x20 != 0) && (lVar5 = thunk_FUN_02b79548(), lVar5 == 0)) goto LAB_058a7cd4;
              if ((int)plVar7[3] != 0) {
                plVar7[4] = unaff_x20;
                thunk_FUN_02bb0e9c();
                uStack0000000000000010 = *(undefined4 *)(unaff_x21 + 100);
                lVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                  (*(undefined8 *)(puVar2 + 0x48),&stack0x00000010);
                if ((lVar5 != 0) &&
                   (lVar6 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
                goto LAB_058a7cd4;
                if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
                  plVar7[5] = lVar5;
                  thunk_FUN_02bb0e9c(plVar7 + 5,lVar5);
                  uStack000000000000000c = *(undefined4 *)(unaff_x21 + 0x68);
                  lVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                    (*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000008 + 4);
                  if ((lVar5 != 0) &&
                     (lVar6 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0)
                     ) goto LAB_058a7cd4;
                  if (2 < *(uint *)(plVar7 + 3)) {
                    plVar7[6] = lVar5;
                    thunk_FUN_02bb0e9c(plVar7 + 6,lVar5);
                    uStack0000000000000008 = *(undefined4 *)(unaff_x21 + 0x70);
                    lVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                      (*(undefined8 *)(puVar2 + 0x48),&stack0x00000008);
                    if ((lVar5 != 0) &&
                       (lVar6 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar7 + 0x40)),
                       lVar6 == 0)) goto LAB_058a7cd4;
                    if ((*(uint *)(plVar7 + 3) & 0xfffffffc) != 0) {
                      plVar7[7] = lVar5;
                      thunk_FUN_02bb0e9c(plVar7 + 7,lVar5);
                      FUN_04c0afb0(*(undefined8 *)
                                    Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_get_Task__
                                   ,plVar7,0);
                      FUN_04c0ab28();
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_058a7cd0;
    }
    if (unaff_w24 == 2) {
      lVar6 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,5);
      if (lVar6 == 0) goto LAB_058a7ccc;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_058a7cd0;
      *(undefined8 *)(lVar6 + 0x20) = unaff_x19;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_058a7cd0;
      *(long *)(lVar6 + 0x28) = lVar5;
      thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),lVar5);
      if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_058a7cd0;
      *(undefined8 *)(lVar6 + 0x30) =
           *(undefined8 *)
            Method_OVRTaskBuilder<OVRSceneManager_Metrics>_Start<OVRSceneManager_<ProcessBatch>d__44>__
      ;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x30));
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) == 0) goto LAB_058a7cd0;
      *(long *)(lVar6 + 0x38) = unaff_x20;
      thunk_FUN_02bb0e9c((long *)(lVar6 + 0x38));
      puVar4 = (undefined8 *)Method_OVRTaskBuilder<OVRPlugin_Result>_SetResult__;
      if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_058a7cd0;
      goto LAB_058a7c5c;
    }
    if (unaff_w24 != 3) goto LAB_058a7ce0;
    lVar6 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,5);
    if (lVar6 == 0) goto LAB_058a7ccc;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_058a7cd0;
    *(undefined8 *)(lVar6 + 0x20) = unaff_x19;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_058a7cd0;
    *(long *)(lVar6 + 0x28) = lVar5;
    thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),lVar5);
    if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_058a7cd0;
    *(undefined8 *)(lVar6 + 0x30) =
         *(undefined8 *)
          Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_Start<OVRSceneManager_<LoadSceneModelAsync>d__45>__
    ;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x30));
    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) == 0) goto LAB_058a7cd0;
    *(long *)(lVar6 + 0x38) = unaff_x20;
    thunk_FUN_02bb0e9c((long *)(lVar6 + 0x38));
    uVar1 = *(uint *)(lVar6 + 0x18);
    puVar4 = (undefined8 *)
             Method_OVRTaskBuilder<OVRSceneManager_Metrics>_AwaitOnCompleted<OVRTask_Awaiter<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>,_OVRSceneManager_<ProcessBatch>d__44>__
    ;
  }
  else {
    if (unaff_w24 < 0xb) {
      if (unaff_w24 == 7) {
        uStack000000000000001c = 8;
        uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(PTR_DAT_06312310 + 0x48),(long)&stack0x00000018 + 4);
        puVar4 = (undefined8 *)
                 Method_OVRTaskBuilder<OVRSceneManager_Metrics>_AwaitOnCompleted<OVRTask_Awaiter<List<bool>>,_OVRSceneManager_<ProcessBatch>d__44>__
        ;
LAB_058a79f4:
        FUN_04c00984(*puVar4,uVar8,0);
LAB_058a7a48:
        FUN_04bffdac();
        return;
      }
      if (unaff_w24 == 8) goto LAB_058a7ca4;
      if (unaff_w24 != 10) goto LAB_058a7ce0;
      lVar6 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,5);
      if (lVar6 == 0) goto LAB_058a7ccc;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_058a7cd0;
      *(undefined8 *)(lVar6 + 0x20) = unaff_x19;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_058a7cd0;
      *(long *)(lVar6 + 0x28) = lVar5;
      thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),lVar5);
      uVar1 = *(uint *)(lVar6 + 0x18);
      puVar4 = (undefined8 *)
               Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneManager_<LoadSceneModelAsync>d__45>__
      ;
    }
    else {
      if (unaff_w24 != 0xb) {
        if ((unaff_w24 != 0xc) && (unaff_w24 != 0xd)) {
LAB_058a7ce0:
          thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
          uVar8 = thunk_FUN_02b79644();
          FUN_04cf6044(uVar8,0);
          uVar9 = thunk_FUN_02ba3594(
                                    Method_OVRTaskBuilder<OVRSceneManager_Metrics>_SetStateMachine__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar8,uVar9);
        }
LAB_058a7ca4:
        FUN_04bffdac();
        return;
      }
      lVar6 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,5);
      if (lVar6 == 0) goto LAB_058a7ccc;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_058a7cd0;
      *(undefined8 *)(lVar6 + 0x20) = unaff_x19;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_058a7cd0;
      *(long *)(lVar6 + 0x28) = lVar5;
      thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),lVar5);
      uVar1 = *(uint *)(lVar6 + 0x18);
      puVar4 = (undefined8 *)Method_OVRTaskBuilder<OVRPlugin_Result>_SetStateMachine__;
    }
joined_r0x058a7ad4:
    if (uVar1 < 3) goto LAB_058a7cd0;
    *(undefined8 *)(lVar6 + 0x30) = *puVar4;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x30));
    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) == 0) goto LAB_058a7cd0;
    *(long *)(lVar6 + 0x38) = unaff_x20;
    thunk_FUN_02bb0e9c((long *)(lVar6 + 0x38));
    uVar1 = *(uint *)(lVar6 + 0x18);
    puVar4 = (undefined8 *)PTR_DAT_0631a648;
  }
  if (4 < uVar1) {
LAB_058a7c5c:
    *(undefined8 *)(lVar6 + 0x40) = *puVar4;
    thunk_FUN_02bb0e9c();
    FUN_04c0ac30(lVar6,0);
    return;
  }
LAB_058a7cd0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


