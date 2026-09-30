/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionCreate
ENTRY_POINT: 03698dc4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionCreate(undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float unaff_s8;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if (lVar1 != 0) {
    in_stack_00000040 = *(undefined8 *)(lVar1 + 0x168);
    in_stack_00000028 = *(undefined8 *)(lVar1 + 0x150);
    in_stack_00000020 = *(undefined8 *)(lVar1 + 0x148);
    in_stack_00000038 = *(undefined8 *)(lVar1 + 0x160);
    uVar4 = *(undefined8 *)(lVar1 + 0x158);
    in_stack_00000030 = uVar4;
    fVar5 = param_3;
    if (*(int *)(*(long *)Method_OVRPlugin_FovfPair_get_Item__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar3 = (float)uVar4;
    fVar2 = (float)FUN_03694cd0(&stack0x00000020,0);
    FUN_0406761c(fVar2 - unaff_s8,fVar3 - param_2,fVar5 - param_3,0);
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_03637e30(*(long *)(unaff_x19 + 0x30),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


