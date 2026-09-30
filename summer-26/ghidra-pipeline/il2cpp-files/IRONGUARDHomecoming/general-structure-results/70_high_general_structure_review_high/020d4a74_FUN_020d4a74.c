/*
FUNCTION_NAME: FUN_020d4a74
ENTRY_POINT: 020d4a74
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void FUN_020d4a74(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((DAT_0482fa03 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<float,_Vector3,_Vector3>__ctor__
                      );
    DAT_0482fa03 = 1;
  }
  lVar2 = FUN_04070398(param_4,0);
  puVar1 = Method_Unity_VisualScripting_StaticFunctionInvoker<float,_Vector3,_Vector3>__ctor__;
  if (lVar2 != 0) {
    uVar4 = FUN_0407d3c8(lVar2,0);
    *(undefined4 *)(param_4 + 0x6c) = uVar4;
    *(undefined4 *)(param_4 + 0x70) = param_2;
    *(undefined4 *)(param_4 + 0x74) = param_3;
    uVar3 = FUN_01f08890(*(undefined8 *)puVar1,0x14);
    *(undefined8 *)(param_4 + 0x60) = uVar3;
    thunk_FUN_01f51358();
    if (DAT_0482ee19 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee19 = '\x01';
    }
    uVar4 = *(undefined4 *)
             (*(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                       0xb8) + 0x20);
    *(undefined8 *)(param_4 + 0x50) =
         *(undefined8 *)
          (*(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8
                    ) + 0x18);
    *(undefined4 *)(param_4 + 0x58) = uVar4;
    FUN_020d4b38(param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


