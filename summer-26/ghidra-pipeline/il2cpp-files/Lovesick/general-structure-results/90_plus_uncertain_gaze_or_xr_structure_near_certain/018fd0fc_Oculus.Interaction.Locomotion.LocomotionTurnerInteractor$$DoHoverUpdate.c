/*
FUNCTION_NAME: Oculus.Interaction.Locomotion.LocomotionTurnerInteractor$$DoHoverUpdate
ENTRY_POINT: 018fd0fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


void Oculus_Interaction_Locomotion_LocomotionTurnerInteractor__DoHoverUpdate(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  undefined8 uVar4;
  
  puVar3 = StringLiteral_13747;
  puVar2 = StringLiteral_645;
  puVar1 = Method_OVRObjectPool_ListScope<OVRPlugin_SpaceComponentType>__ctor__;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_013593d0(*(long *)(unaff_x19 + 0x30),unaff_w21,unaff_w20,*(undefined8 *)StringLiteral_13747)
    ;
    uVar4 = *(undefined8 *)(unaff_x19 + 0x48);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_00bf3248(uVar4,unaff_w21,unaff_w20,*(undefined8 *)puVar1);
    if (*(long *)(unaff_x19 + 0x50) != 0) {
      FUN_013593d0(*(long *)(unaff_x19 + 0x50),unaff_w21,unaff_w20,*(undefined8 *)puVar3);
      if (*(long *)(unaff_x19 + 0x58) != 0) {
        FUN_013593d0(*(long *)(unaff_x19 + 0x58),unaff_w21,unaff_w20,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextWriter_<DoWriteValueAsync>d__99>__
                    );
        if (*(long *)(unaff_x19 + 0x60) != 0) {
          FUN_013593d0(*(long *)(unaff_x19 + 0x60),unaff_w21,unaff_w20,
                       *(undefined8 *)Method_UnityEngine_Resources_LoadAll<STMJitterData>__);
          puVar1 = Method_UnityEngine_UIElements_UIR_Page_DataSet<ushort>_SendUpdates__;
          if (*(long *)(unaff_x19 + 0x68) != 0) {
            FUN_013593d0(*(long *)(unaff_x19 + 0x68),unaff_w21 << 1,unaff_w20 << 1,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_UIR_Page_DataSet<ushort>_SendUpdates__);
            if (*(long *)(unaff_x19 + 0x68) != 0) {
              FUN_013593d0(*(long *)(unaff_x19 + 0x68),unaff_w21 << 1 | 1,unaff_w20 << 1 | 1,
                           *(undefined8 *)puVar1);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


