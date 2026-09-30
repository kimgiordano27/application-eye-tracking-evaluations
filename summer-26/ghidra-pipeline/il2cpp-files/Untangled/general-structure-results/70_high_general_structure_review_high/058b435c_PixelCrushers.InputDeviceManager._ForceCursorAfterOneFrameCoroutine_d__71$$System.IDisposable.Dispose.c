/*
FUNCTION_NAME: PixelCrushers.InputDeviceManager.<ForceCursorAfterOneFrameCoroutine>d__71$$System.IDisposable.Dispose
ENTRY_POINT: 058b435c
PROGRAM: Untangled-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void PixelCrushers_InputDeviceManager_<ForceCursorAfterOneFrameCoroutine>d__71__System_IDisposable_Dispose
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack0000000000000004;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  int in_stack_00000038;
  
  uStack0000000000000004 = param_1;
  uStack0000000000000014 = param_2;
  iVar1 = FUN_05856bb8();
  if (iVar1 == 0) {
    lVar3 = FUN_066c67b0();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_066d6484(lVar3,0,0);
    FUN_058b4500();
  }
  else {
    in_stack_00000028 = *(undefined8 *)PTR_DAT_06d5c650;
    in_stack_00000030 = 0xffffffffffffffff;
    in_stack_00000038 = iVar1;
    uVar2 = FUN_05638848(&stack0x00000028,0);
    uVar2 = FUN_05458458(*(undefined8 *)PTR_DAT_06d61500,uVar2,0);
    if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02708);
    }
    FUN_06693dbc(uVar2,0);
  }
  return;
}


