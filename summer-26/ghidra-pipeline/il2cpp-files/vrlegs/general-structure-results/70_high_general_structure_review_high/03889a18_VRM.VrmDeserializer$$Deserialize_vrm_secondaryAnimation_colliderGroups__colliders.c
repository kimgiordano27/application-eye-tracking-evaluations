/*
FUNCTION_NAME: VRM.VrmDeserializer$$Deserialize_vrm_secondaryAnimation_colliderGroups__colliders
ENTRY_POINT: 03889a18
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4
*/


void VRM_VrmDeserializer__Deserialize_vrm_secondaryAnimation_colliderGroups__colliders(void)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  int in_w8;
  long lVar4;
  long *unaff_x20;
  long unaff_x21;
  
  lVar4 = *unaff_x20;
  *(int *)(unaff_x21 + 0x1c) = in_w8 + 1;
  puVar2 = Method_System_Collections_Generic_List_Enumerator<SourceFileEntry>_Dispose__;
  uVar3 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 200));
  if ((uVar3 & 1) == 0) {
    *(undefined4 *)(unaff_x21 + 0x18) = 0;
  }
  else {
    iVar1 = *(int *)(unaff_x21 + 0x18);
    *(undefined4 *)(unaff_x21 + 0x18) = 0;
    if (0 < iVar1) {
      FUN_02793a34(*(undefined8 *)(unaff_x21 + 0x10),0,iVar1,0);
    }
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar4 = *(long *)puVar2;
  }
  if (**(long **)(lVar4 + 0xb8) != 0) {
    FUN_02249ee0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


