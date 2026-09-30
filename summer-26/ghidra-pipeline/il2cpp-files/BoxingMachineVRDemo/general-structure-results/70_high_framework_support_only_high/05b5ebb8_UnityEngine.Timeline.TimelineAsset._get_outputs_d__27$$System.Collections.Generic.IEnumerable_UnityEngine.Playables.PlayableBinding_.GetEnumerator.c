/*
FUNCTION_NAME: UnityEngine.Timeline.TimelineAsset.<get_outputs>d__27$$System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator
ENTRY_POINT: 05b5ebb8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void UnityEngine_Timeline_TimelineAsset_<get_outputs>d__27__System_Collections_Generic_IEnumerable<UnityEngine_Playables_PlayableBinding>_GetEnumerator
               (void)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  long unaff_x21;
  int iVar9;
  
  FUN_05a09970(&stack0x00000018);
  lVar6 = FUN_05b84ffc();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar1 = *(undefined4 *)(lVar6 + 0x24);
  plVar7 = (long *)FUN_05b855cc();
  if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  iVar3 = FUN_05b14d30(*plVar7,uVar1,0);
  iVar4 = FUN_06063868(0);
  plVar7 = (long *)FUN_05b855cc();
  if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar6 = FUN_05b14cfc(*plVar7,uVar1,0);
  puVar2 = Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__;
  if (*(int *)(*(long *)
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__ +
              0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_05a48158(lVar6,0);
  if (unaff_x21 != 0) {
    thunk_FUN_06038ef0();
    if (iVar3 == iVar4) {
      FUN_06045874(0);
    }
    thunk_FUN_06038ef0();
    piVar8 = (int *)FUN_05b85628();
    iVar9 = 0x3f800000;
    if (piVar8[6] == 0) {
      iVar9 = piVar8[1];
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    thunk_FUN_06038bc0(iVar9);
    thunk_FUN_06038bc0(piVar8[4]);
    if (*piVar8 == 4) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<ILayerProvider>_get_Current__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)
                            Method_System_Collections_Generic_List_Enumerator<ILayerProvider>_get_Current__
                          );
      }
      FUN_05b5e2e4(piVar8);
      FUN_0603a150();
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(long *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    iVar9 = FUN_0604bd34(*(long *)(lVar6 + 0x18),0);
    if (((iVar9 == 8) || (iVar9 == 0x3b)) || (iVar9 == 0x4a)) {
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
    puVar2 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__ + 0xe4) == 0)
    {
      thunk_FUN_02dbd7b4();
    }
    FUN_05a58138();
    if (iVar3 != iVar4) {
      lVar6 = FUN_06036b0c();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_06036024(lVar6,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05a58138();
      plVar7 = (long *)FUN_05b855cc();
      lVar6 = *plVar7;
      uVar5 = FUN_06063868(0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_05b14d60(lVar6,uVar1,uVar5,0);
    }
    FUN_05a09978(&stack0x00000018,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


