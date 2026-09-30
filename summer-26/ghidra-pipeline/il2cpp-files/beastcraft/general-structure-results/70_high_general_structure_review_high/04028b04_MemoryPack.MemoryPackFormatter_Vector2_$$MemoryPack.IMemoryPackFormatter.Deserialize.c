/*
FUNCTION_NAME: MemoryPack.MemoryPackFormatter<Vector2>$$MemoryPack.IMemoryPackFormatter.Deserialize
ENTRY_POINT: 04028b04
PROGRAM: beastcraft-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void MemoryPack_MemoryPackFormatter<Vector2>__MemoryPack_IMemoryPackFormatter_Deserialize(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  
  FUN_05627048();
  plVar2 = (long *)(unaff_x20 + 0x10);
  if (*plVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  if (*(int *)(*plVar2 + 0x18) == unaff_w22) {
    return;
  }
  lVar1 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  if (unaff_w22 < 1) {
    lVar1 = *(long *)(lVar1 + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02e7568c();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02e7568c();
    }
    lVar1 = **(long **)(lVar1 + 0xb8);
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x18);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02e7568c();
    }
                    /* try { // try from 04028b54 to 04128b63 has its CatchHandler @ 04028b64 */
    lVar1 = FUN_02e3cb08(lVar1,unaff_w22);
                    /* catch() { ... } // from try @ 04028ae0 with catch @ 04028b64
                       catch() { ... } // from try @ 04028b54 with catch @ 04028b64 */
                    /* try { // try from 04028b68 to 04128b6b has its CatchHandler @ 04028b74 */
    if (0 < *(int *)(unaff_x20 + 0x18)) {
                    /* try { // try from 04028b6c to 04128b77 has its CatchHandler @ 04028974 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04028b68 with catch @ 04028b74
                        */
      FUN_05628dac(*plVar2,0,lVar1,0,*(int *)(unaff_x20 + 0x18),0);
    }
  }
  *plVar2 = lVar1;
  thunk_FUN_02ee2be8(plVar2,lVar1);
  return;
}


