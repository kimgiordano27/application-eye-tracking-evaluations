/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager.<ShareAnchorsWithUser>d__24$$SetStateMachine
ENTRY_POINT: 0638b028
PROGRAM: Waifu-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<ShareAnchorsWithUser>d__24__SetStateMachine
               (long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 uVar3;
  
  iVar1 = FUN_05cac5a8(param_2,unaff_w20,
                       *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) + 0x108));
  if (iVar1 < 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    uVar2 = FUN_05cabf14(*(long *)(unaff_x19 + 0x28),unaff_w20,DAT_083e1b00);
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      iVar1 = FUN_05cabf14(*(long *)(unaff_x19 + 0x38),uVar2,DAT_083e1b00);
      if (iVar1 + -1 < 1) {
        uVar3 = *(undefined8 *)(unaff_x19 + 0x10);
        if (DAT_086efbf8 == (code *)0x0) {
          DAT_086efbf8 = (code *)FUN_033d1b68(
                                             "UnityEngine.Jobs.TransformAccessArray::SetTransform(System.IntPtr,System.Int32,UnityEngine.Transform)"
                                             );
        }
        (*DAT_086efbf8)(uVar3,unaff_w20,0);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          FUN_050cc8d8(*(long *)(unaff_x19 + 0x20),unaff_w20,DAT_083fbca8);
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            FUN_05cad404(*(long *)(unaff_x19 + 0x28),unaff_w20,DAT_083e1ae8);
            if (*(long *)(unaff_x19 + 0x30) != 0) {
              FUN_05cad404(*(long *)(unaff_x19 + 0x30),uVar2,DAT_083e1ae8);
              if (*(long *)(unaff_x19 + 0x38) != 0) {
                FUN_05cad404(*(long *)(unaff_x19 + 0x38),uVar2,DAT_083e1ae8);
                uVar3 = *(undefined8 *)(unaff_x19 + 0x10);
                if (DAT_086efbe8 == (code *)0x0) {
                  DAT_086efbe8 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Jobs.TransformAccessArray::GetLength(System.IntPtr)"
                                                  );
                }
                uVar2 = (*DAT_086efbe8)(uVar3);
                *(undefined4 *)(unaff_x19 + 0x18) = uVar2;
                return;
              }
            }
          }
        }
      }
      else if (*(long *)(unaff_x19 + 0x38) != 0) {
        FUN_05cac994(*(long *)(unaff_x19 + 0x38),uVar2,iVar1 + -1,1,
                     *(undefined8 *)(*(long *)(*(long *)(DAT_083e1b10 + 0x20) + 0xc0) + 0x110));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


