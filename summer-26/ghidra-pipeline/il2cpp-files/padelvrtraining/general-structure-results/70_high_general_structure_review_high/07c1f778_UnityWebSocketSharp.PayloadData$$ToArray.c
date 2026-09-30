/*
FUNCTION_NAME: UnityWebSocketSharp.PayloadData$$ToArray
ENTRY_POINT: 07c1f778
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void UnityWebSocketSharp_PayloadData__ToArray(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long unaff_x19;
  
  uVar1 = thunk_FUN_03d1e194(PTR_DAT_091a4f90);
  uVar2 = thunk_FUN_03d19be4(uVar1,*(undefined8 *)*param_1);
  if ((uVar2 & 1) == 0) {
    puVar3 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar3 = *param_1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&PTR_PTR_08cb6798,0);
  }
  uVar1 = *param_1;
  __cxa_end_catch();
  if (unaff_x19 != 0) {
    *(undefined8 *)(unaff_x19 + 0x40) = uVar1;
    thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x40),uVar1);
    FUN_07c20088();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


