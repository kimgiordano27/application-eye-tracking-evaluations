/*
FUNCTION_NAME: FUN_072ed13c
ENTRY_POINT: 072ed13c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_072ed13c(long *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 local_40 [16];
  long local_28;
  
  puVar2 = PTR_DAT_07a02e00;
  if ((DAT_07ef2aea & 1) == 0) {
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<VisualTreeDataBindingsUpdater_VersionInfo>_get_Current__
                );
    FUN_03642964(PTR_DAT_07a02e00);
    FUN_03642964(PTR_DAT_079f4d70);
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
                );
    DAT_07ef2aea = 1;
  }
  puVar3 = 
  Method_System_Collections_Generic_List_Enumerator<VisualTreeDataBindingsUpdater_VersionInfo>_get_Current__
  ;
  local_28 = 0;
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
  ;
  local_40 = FUN_0539b8a8(&local_28,*(undefined8 *)puVar3);
  if (local_28 != 0) {
    lVar4 = *(long *)(local_28 + 0x10);
    lVar5 = *(long *)PTR_DAT_079f4d70;
    *(int *)(local_28 + 0x1c) = *(int *)(local_28 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(local_28 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(local_28 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = param_2;
      }
      else {
        FUN_04526fb8(local_28,param_2,
                     *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      (**(code **)(*param_1 + 0x2f8))(param_1,local_28,*(undefined8 *)(*param_1 + 0x300));
      FUN_04b15ef4(local_40,*(undefined8 *)puVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


