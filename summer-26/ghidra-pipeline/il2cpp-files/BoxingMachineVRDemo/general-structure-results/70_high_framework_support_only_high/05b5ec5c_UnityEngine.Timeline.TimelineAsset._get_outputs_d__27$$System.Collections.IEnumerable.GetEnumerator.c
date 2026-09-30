/*
FUNCTION_NAME: UnityEngine.Timeline.TimelineAsset.<get_outputs>d__27$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 05b5ec5c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_Timeline_TimelineAsset_<get_outputs>d__27__System_Collections_IEnumerable_GetEnumerator
               (void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int *piVar3;
  long lVar4;
  long *plVar5;
  long unaff_x21;
  undefined4 unaff_w23;
  long *unaff_x24;
  long unaff_x25;
  int unaff_w26;
  int unaff_w27;
  int iVar6;
  
  FUN_05a48158();
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  thunk_FUN_06038ef0();
  if (unaff_w26 == unaff_w27) {
    FUN_06045874(0);
  }
  thunk_FUN_06038ef0();
  piVar3 = (int *)FUN_05b85628();
  iVar6 = 0x3f800000;
  if (piVar3[6] == 0) {
    iVar6 = piVar3[1];
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  thunk_FUN_06038bc0(iVar6);
  thunk_FUN_06038bc0(piVar3[4]);
  if (*piVar3 == 4) {
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List_Enumerator<ILayerProvider>_get_Current__ +
                0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)
                          Method_System_Collections_Generic_List_Enumerator<ILayerProvider>_get_Current__
                        );
    }
    FUN_05b5e2e4(piVar3);
    FUN_0603a150();
  }
  if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (*(long *)(unaff_x25 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  iVar6 = FUN_0604bd34(*(long *)(unaff_x25 + 0x18),0);
  if (((iVar6 == 8) || (iVar6 == 0x3b)) || (iVar6 == 0x4a)) {
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_06037438();
  }
  else {
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_0603763c();
  }
  FUN_05b84908();
  if (*(int *)(*(long *)PTR_DAT_06767d28 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06767d28);
  }
  FUN_05a5e770();
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__ + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_05a58138();
  if (unaff_w26 != unaff_w27) {
    lVar4 = FUN_06036b0c();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_06036024(lVar4,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_05a58138();
    plVar5 = (long *)FUN_05b855cc();
    lVar4 = *plVar5;
    uVar2 = FUN_06063868(0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_05b14d60(lVar4,unaff_w23,uVar2,0);
  }
  FUN_05a09978(&stack0x00000018,0);
  return;
}


