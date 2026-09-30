/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$add_OnLinkPSNAccountRequestEvent
ENTRY_POINT: 0523f314
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void PlayFab_Events_PlayFabEvents__add_OnLinkPSNAccountRequestEvent(long *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  float fVar2;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000018;
  
                    /* catch() { ... } // from try @ 0523f308 with catch @ 0523f314 */
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  in_stack_00000018 = FUN_0521be20(0);
  uVar1 = FUN_05000654(&stack0x00000018,0);
  if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffffc) != 0) {
    *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
    thunk_FUN_02dc1ef0((undefined8 *)(unaff_x20 + 0x38),uVar1);
    if (4 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined8 *)(unaff_x20 + 0x40) =
           *(undefined8 *)
            UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<PassFragmentData>_TypeInfo
      ;
      thunk_FUN_02dc1ef0((undefined8 *)(unaff_x20 + 0x40));
      in_stack_00000008._4_4_ = FUN_0523f590();
      uVar1 = FUN_05015a18((long)&stack0x00000008 + 4,0);
      if (5 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
        thunk_FUN_02dc1ef0();
        uVar1 = FUN_04e80ce4();
        if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
          thunk_FUN_02dabd98(*(long *)PTR_DAT_06646730);
        }
        FUN_05ea2238(uVar1,0);
        fVar2 = (float)FUN_0523f590();
        *(bool *)(unaff_x19 + 0x2c) = 0.0 < fVar2;
        if (fVar2 <= 0.0) {
          FUN_0523f608();
        }
        else {
          *(undefined1 *)(unaff_x19 + 0x2c) = 1;
          FUN_05edd364();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4def0();
}


