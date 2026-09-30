/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$DeserializeMember<Vector2>
ENTRY_POINT: 01e74898
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsBaseConverter__DeserializeMember<Vector2>(long param_1)

{
  long lVar1;
  long unaff_x19;
  void *unaff_x24;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_01ae9e74();
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  lVar1 = *(long *)(lVar2 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ae9e74();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ae9e74();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar1 = *(long *)(lVar2 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ae9e74();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ae9e74();
  }
  lVar1 = **(long **)(lVar1 + 0xb8);
  memcpy(&stack0x00000000,unaff_x24,0x60);
  if (lVar1 != 0) {
    memcpy(&stack0x00000060,&stack0x00000000,0x60);
    FUN_02c959b0(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


