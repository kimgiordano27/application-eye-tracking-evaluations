/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLiveCollisionBoundsInfo$$.ctor
ENTRY_POINT: 03704990
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;ray_or_cast_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


long OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsInfo___ctor
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long unaff_x22;
  
  puVar2 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>_GetEnumerator__;
  if ((*(byte *)(unaff_x22 + 0x16) & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>_GetEnumerator__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass5_0_<DOOrthoSize>b__0__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureOutEvent>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass5_0_<DOOrthoSize>b__1__
                      );
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass60_0_<DOShakeScale>b__1__
                      );
    thunk_FUN_01efb3a4(Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass61_0_<DOJump>b__0__);
    *(undefined1 *)(unaff_x22 + 0x16) = 1;
  }
  puVar1 = Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_037044fc(param_3);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar1);
  }
  uVar6 = FUN_0403b648(0);
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    iVar4 = FUN_04039fb4(0);
    if (iVar4 != 7) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iVar4 = FUN_04039fb4(0);
      if (iVar4 != 2) {
        thunk_FUN_01efb3a4(Method_System_Text_Encoding_GetBytes__);
        uVar5 = thunk_FUN_01f117cc();
        uVar8 = thunk_FUN_01efb3a4(
                                  Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass26_0_<RequestStreamFromWeb>b__0__
                                  );
        FUN_0356d1bc(uVar5,uVar8,0);
        goto LAB_03704c00;
      }
    }
  }
  lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass5_0_<DOOrthoSize>b__1__
                            );
  uVar8 = FUN_035ac8e8(lVar7,0);
  if (lVar7 != 0) {
    lVar7 = FUN_03704c18(uVar8,uVar5,param_1,param_2);
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar9);
      lVar9 = *(long *)puVar2;
    }
    lVar10 = *(long *)(lVar9 + 0xb8);
    *(bool *)lVar10 = lVar7 != 0;
    if (lVar7 == 0) {
      thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<BaseInputModule>__);
      uVar5 = thunk_FUN_01f117cc();
      uVar8 = thunk_FUN_01efb3a4(
                                Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass15_0_<GetTtsRequest>b__1__
                                );
      FUN_04073f58(uVar5,uVar8,0);
LAB_03704c00:
      uVar8 = thunk_FUN_01efb3a4(
                                Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass33_0_<RequestDownloadFromWeb>b__0__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar5,uVar8);
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar9);
      lVar10 = *(long *)(*(long *)puVar2 + 0xb8);
    }
    puVar3 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass61_0_<DOJump>b__0__;
    puVar1 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass60_0_<DOShakeScale>b__1__;
    puVar2 = Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureOutEvent>__ctor__;
    if (*(char *)(lVar10 + 1) != '\0') {
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0403f2cc(*(undefined8 *)puVar1,0);
    }
    lVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    UnityEngine_UIElements_UIR_Implementation_RenderEvents__UpdateLocalFlipsWinding
              (lVar9,*(undefined8 *)puVar3,0);
    if (lVar9 != 0) {
      FUN_023360e0(lVar9,*(undefined8 *)
                          Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass5_0_<DOOrthoSize>b__0__
                  );
      return lVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


