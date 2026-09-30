/*
FUNCTION_NAME: FUN_078ce628
ENTRY_POINT: 078ce628
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_1;source_validity_pose_sink_structure
*/


void FUN_078ce628(long param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((DAT_0827302a & 1) == 0) {
    FUN_0373b518(
                Method_UnityEngine_InputSystem_InputControl<Vector2>_ReadValueFromStateWithCaching__
                );
    DAT_0827302a = 1;
  }
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_075c0ac8(param_1,0);
    }
    uVar2 = 0;
    if (param_3 != 0) {
      uVar2 = *(undefined8 *)(param_3 + 0x10);
    }
    if (DAT_08273070 == (code *)0x0) {
      DAT_08273070 = (code *)FUN_0373b4dc(
                                         "UnityEngine.VFX.VisualEffect::SendEventFromScript_Injected(System.IntPtr,System.Int32,System.IntPtr)"
                                         );
    }
                    /* WARNING: Could not recover jumptable at 0x078ce6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_08273070)(lVar1,param_2,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


