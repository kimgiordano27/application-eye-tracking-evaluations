/*
FUNCTION_NAME: PXR_PermissionRequest$$RequestUserPermissionMR
ENTRY_POINT: 085fb0c8
PROGRAM: cac-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4
*/


void PXR_PermissionRequest__RequestUserPermissionMR(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  long *unaff_x20;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    param_1 = *unaff_x20;
  }
  lVar1 = *(long *)(param_1 + 0xb8);
  FUN_08798f14(*(undefined4 *)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x24),
               *(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x2c),0);
  FUN_088095c8();
  FUN_0879900c(0);
  lVar1 = *(long *)(*unaff_x20 + 0xb8);
  FUN_08798f14(*(undefined4 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x14),
               *(undefined4 *)(lVar1 + 0x18),*(undefined4 *)(lVar1 + 0x1c),0);
  UnityEngine_UI_FontData__get_horizontalOverflow();
  FUN_0879900c(0);
  puVar2 = *(undefined4 **)(*unaff_x20 + 0xb8);
  FUN_08798f14(*puVar2,puVar2[1],puVar2[2],puVar2[3],0);
  FUN_088093c8();
  FUN_0879900c(0);
  return;
}


