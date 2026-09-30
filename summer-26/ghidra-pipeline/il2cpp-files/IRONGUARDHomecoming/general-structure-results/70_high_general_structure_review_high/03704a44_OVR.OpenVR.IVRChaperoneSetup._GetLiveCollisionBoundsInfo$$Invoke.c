/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLiveCollisionBoundsInfo$$Invoke
ENTRY_POINT: 03704a44
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


long OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsInfo__Invoke(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *unaff_x22;
  long *unaff_x23;
  
  thunk_FUN_01ee6d7c(param_1);
  uVar5 = FUN_0403b648(0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    iVar4 = FUN_04039fb4(0);
    if (iVar4 != 7) {
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iVar4 = FUN_04039fb4(0);
      if (iVar4 != 2) {
        thunk_FUN_01efb3a4(Method_System_Text_Encoding_GetBytes__);
        uVar7 = thunk_FUN_01f117cc();
        uVar8 = thunk_FUN_01efb3a4(
                                  Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass26_0_<RequestStreamFromWeb>b__0__
                                  );
        FUN_0356d1bc(uVar7,uVar8,0);
        goto LAB_03704c00;
      }
    }
  }
  lVar6 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass5_0_<DOOrthoSize>b__1__
                            );
  FUN_035ac8e8(lVar6,0);
  if (lVar6 != 0) {
    lVar6 = FUN_03704c18();
    lVar9 = *unaff_x23;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar9);
      lVar9 = *unaff_x23;
    }
    lVar10 = *(long *)(lVar9 + 0xb8);
    *(bool *)lVar10 = lVar6 != 0;
    if (lVar6 == 0) {
      thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<BaseInputModule>__);
      uVar7 = thunk_FUN_01f117cc();
      uVar8 = thunk_FUN_01efb3a4(
                                Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass15_0_<GetTtsRequest>b__1__
                                );
      FUN_04073f58(uVar7,uVar8,0);
LAB_03704c00:
      uVar8 = thunk_FUN_01efb3a4(
                                Method_Meta_WitAi_TTS_Integrations_TTSWit_<>c__DisplayClass33_0_<RequestDownloadFromWeb>b__0__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar7,uVar8);
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar9);
      lVar10 = *(long *)(*unaff_x23 + 0xb8);
    }
    puVar3 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass61_0_<DOJump>b__0__;
    puVar2 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass60_0_<DOShakeScale>b__1__;
    puVar1 = Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureOutEvent>__ctor__;
    if (*(char *)(lVar10 + 1) != '\0') {
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
      return lVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


