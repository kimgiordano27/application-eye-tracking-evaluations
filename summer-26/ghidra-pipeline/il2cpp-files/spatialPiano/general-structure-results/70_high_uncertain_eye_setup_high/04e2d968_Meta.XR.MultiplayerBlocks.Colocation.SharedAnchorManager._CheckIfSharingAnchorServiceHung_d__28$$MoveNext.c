/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager.<CheckIfSharingAnchorServiceHung>d__28$$MoveNext
ENTRY_POINT: 04e2d968
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04e2da34) */

void Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<CheckIfSharingAnchorServiceHung>d__28__MoveNext
               (long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 in_stack_00000030;
  long in_stack_00000048;
  
  do {
                    /* try { // try from 04e2d968 to 04f2d97f has its CatchHandler @ 04e2da50 */
    lVar4 = *(long *)(param_2 + 0x10);
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) + 0x88);
                    /* try { // try from 04e2d980 to 04f2d99f has its CatchHandler @ 04e2d8b0 */
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (lVar4 == 0) break;
    uVar2 = *(uint *)(param_2 + 0x18);
    if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                    /* try { // try from 04e2d9a0 to 04f2d9b7 has its CatchHandler @ 04e2da50 */
      *(uint *)(param_2 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar4 + (long)(int)uVar2 * 8 + 0x20) = unaff_x20;
    }
    else {
                    /* try { // try from 04e2d9b8 to 04f2d9cb has its CatchHandler @ 04e2d8b0 */
      FUN_03abf904(param_2,unaff_x20,
                   *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
    uVar3 = FUN_04aff1b0(&stack0x00000020,
                         *(undefined8 *)
                          (*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0x68));
    unaff_x20 = in_stack_00000030;
    if ((uVar3 & 1) == 0) {
                    /* try { // try from 04e2d9cc to 04f2d9e3 has its CatchHandler @ 04e2da50 */
      FUN_04aff1ac(&stack0x00000020,
                   *(undefined8 *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0x70));
                    /* try { // try from 04e2d9e4 to 04f2da3f has its CatchHandler @ 04e2d8b0 */
      lVar4 = *(long *)(unaff_x19 + 0x30);
      if (lVar4 != 0) {
        iVar1 = *(int *)(lVar4 + 0x18);
        *(undefined4 *)(lVar4 + 0x18) = 0;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (0 < iVar1) {
          Newtonsoft_Json_Linq_JObject__LoadAsync(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    System_Collections_Generic_List<HID_HIDCollectionDescriptor>__System_Collections_ICollection_get_SyncRoot
              (*(long *)(unaff_x19 + 0x28),in_stack_00000030,
               *(undefined8 *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0x80));
    param_2 = *(long *)(unaff_x19 + 0x38);
    param_1 = in_stack_00000048;
  } while (param_2 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


