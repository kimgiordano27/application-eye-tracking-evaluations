/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking.<CreateRoom>d__25$$SetStateMachine
ENTRY_POINT: 06e21ffc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_CustomMatchmaking_<CreateRoom>d__25__SetStateMachine
               (ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e93538);
    FUN_03c8f898(PTR_DAT_08e93540);
    FUN_03c8f898(PTR_DAT_08e6b288);
    *(undefined1 *)(unaff_x20 + 0x42) = 1;
  }
  puVar2 = PTR_DAT_08e93540;
  puVar1 = PTR_DAT_08e6b288;
  if (*(long *)(param_2 + 0x30) != 0) {
    lVar4 = *(long *)(*(long *)(param_2 + 0x30) + 0x100);
    uVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6b288);
    FUN_085f2ea0(uVar3,param_2,*(undefined8 *)puVar2,0);
    if (lVar4 != 0) {
      FUN_085f3000(lVar4,uVar3,0);
      puVar2 = PTR_DAT_08e93538;
      if (*(long *)(param_2 + 0x40) != 0) {
        lVar4 = *(long *)(*(long *)(param_2 + 0x40) + 0x100);
        uVar3 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
        FUN_085f2ea0(uVar3,param_2,*(undefined8 *)puVar2,0);
        if (lVar4 != 0) {
          FUN_085f3000(lVar4,uVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


