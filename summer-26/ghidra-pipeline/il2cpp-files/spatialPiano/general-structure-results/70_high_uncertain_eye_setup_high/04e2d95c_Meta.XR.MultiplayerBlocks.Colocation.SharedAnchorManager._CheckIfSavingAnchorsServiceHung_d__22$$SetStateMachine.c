/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager.<CheckIfSavingAnchorsServiceHung>d__22$$SetStateMachine
ENTRY_POINT: 04e2d95c
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

void Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<CheckIfSavingAnchorsServiceHung>d__22__SetStateMachine
               (void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 in_stack_00000030;
  long in_stack_00000048;
  
  while (lVar4 = *(long *)(unaff_x19 + 0x38), lVar4 != 0) {
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0x88);
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 == 0) break;
    uVar2 = *(uint *)(lVar4 + 0x18);
    if (uVar2 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = unaff_x20;
    }
    else {
      FUN_03abf904(lVar4,unaff_x20,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                  );
    }
    uVar3 = FUN_04aff1b0(&stack0x00000020,
                         *(undefined8 *)
                          (*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0x68));
    unaff_x20 = in_stack_00000030;
    if ((uVar3 & 1) == 0) {
      FUN_04aff1ac(&stack0x00000020,
                   *(undefined8 *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0x70));
      lVar4 = *(long *)(unaff_x19 + 0x30);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      iVar1 = *(int *)(lVar4 + 0x18);
      *(undefined4 *)(lVar4 + 0x18) = 0;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (0 < iVar1) {
        Newtonsoft_Json_Linq_JObject__LoadAsync(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
      }
      return;
    }
    if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    System_Collections_Generic_List<HID_HIDCollectionDescriptor>__System_Collections_ICollection_get_SyncRoot
              (*(long *)(unaff_x19 + 0x28),in_stack_00000030,
               *(undefined8 *)(*(long *)(*(long *)(in_stack_00000048 + 0x20) + 0xc0) + 0x80));
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


