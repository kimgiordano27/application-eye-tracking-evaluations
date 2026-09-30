/*
FUNCTION_NAME: PXR_PermissionRequest$$RequestUserPermissionMR
ENTRY_POINT: 085fb1c8
PROGRAM: cac-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PXR_PermissionRequest__RequestUserPermissionMR(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long *plVar5;
  long unaff_x20;
  
  plVar5 = *(long **)(unaff_x19 + 0xed0);
  if ((*(byte *)(unaff_x20 + 0x35d) & 1) == 0) {
    FUN_03f13384(PTR_DAT_09199ed0);
    *(undefined1 *)(unaff_x20 + 0x35d) = 1;
  }
  uVar1 = _DAT_01929430;
  puVar2 = *(undefined8 **)(*plVar5 + 0xb8);
  puVar2[1] = _UNK_01929438;
  *puVar2 = uVar1;
  uVar1 = _DAT_01929a20;
  lVar3 = *plVar5;
  lVar4 = *(long *)(lVar3 + 0xb8);
  *(undefined8 *)(lVar4 + 0x18) = _UNK_01929a28;
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  uVar1 = _DAT_0192a5b0;
  lVar3 = *(long *)(lVar3 + 0xb8);
  *(undefined8 *)(lVar3 + 0x28) = _UNK_0192a5b8;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  return;
}


