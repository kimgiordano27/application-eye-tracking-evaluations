/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlayerNameTagSpawner.<SpawnCoroutine>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 02902e20
PROGRAM: sharks-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MultiplayerBlocks_Shared_PlayerNameTagSpawner_<SpawnCoroutine>d__4__System_IDisposable_Dispose
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x25;
  long in_stack_00000008;
  undefined8 in_stack_00000028;
  
  while( true ) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02902e14 with catch @ 02902e20
                        */
    uVar1 = thunk_FUN_02c28294(param_1,param_2,param_3);
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    unaff_x25 = unaff_x25 + -1;
    if (unaff_x25 == 0) {
      return 0xffffffff;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    in_stack_00000028 = unaff_x21;
    param_2 = thunk_FUN_018617ec(**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0),
                                 &stack0x00000028);
    lVar2 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4(lVar2);
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    param_1 = &stack0x00000008;
    param_3 = 0;
    in_stack_00000008 = lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


