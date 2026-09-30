/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$SerializeToString<ColocationSessionEventHandler.SpaceSharingInfo>
ENTRY_POINT: 05d055dc
PROGRAM: Hyper-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__SerializeToString<ColocationSessionEventHandler_SpaceSharingInfo>
          (void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x20;
  long unaff_x21;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05d055b8 with catch @ 05d055dc
                        */
  FUN_04980b90();
                    /* try { // try from 05d055e0 to 05e0569f has its CatchHandler @ 05d055e0
                       catch() { ... } // from try @ 05d055e0 with catch @ 05d055e0
                       catch() { ... } // from try @ 05d056d4 with catch @ 05d055e0
                       catch() { ... } // from try @ 05d0570c with catch @ 05d055e0
                       catch() { ... } // from try @ 05d057b8 with catch @ 05d055e0 */
  lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04980b34();
  }
  if (unaff_x20 != (long *)0x0) {
    if ((*(byte *)(lVar1 + 0x130) <= *(byte *)(*unaff_x20 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) == lVar1))
    {
      uVar4 = FUN_080024bc();
      return uVar4;
    }
  }
  lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    FUN_04980b34(lVar1);
  }
  plVar2 = (long *)thunk_FUN_04983e64();
  if (plVar2 == (long *)0x0) {
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 8) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
                    /* try { // try from 05d056c4 to 05e056d3 has its CatchHandler @ 05d05780 */
    uVar4 = thunk_FUN_04983f60();
                    /* try { // try from 05d056d4 to 05e056fb has its CatchHandler @ 05d055e0 */
    FUN_080023d4();
    return uVar4;
  }
  lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04980b34(lVar1);
  }
  lVar5 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar1) {
                    /* try { // try from 05d056fc to 05e0570b has its CatchHandler @ 05d0577c */
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_05d05700;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
                    /* try { // try from 05d056a0 to 05e056a7 has its CatchHandler @ 05d05784 */
  puVar3 = (undefined8 *)FUN_04980e68(plVar2,lVar1,0);
LAB_05d05700:
                    /* try { // try from 05d0570c to 05e0579f has its CatchHandler @ 05d055e0 */
                    /* WARNING: Could not recover jumptable at 0x05d05718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)*puVar3)(plVar2);
  return uVar4;
}


