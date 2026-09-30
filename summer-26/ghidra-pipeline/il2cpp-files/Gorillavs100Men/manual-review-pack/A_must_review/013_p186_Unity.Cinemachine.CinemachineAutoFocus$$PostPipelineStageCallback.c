/*
FUNCTION_NAME: Unity.Cinemachine.CinemachineAutoFocus$$PostPipelineStageCallback
ENTRY_POINT: 0393fca4
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Cinemachine_CinemachineAutoFocus__PostPipelineStageCallback(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int in_w8;
  
  if (in_w8 == 0) {
    thunk_FUN_020b5864();
  }
  lVar2 = FUN_03928280();
  if ((lVar2 != 0) &&
     (lVar2 = FUN_03739ec8(lVar2,0x3c,0x5f,0), puVar1 = StringLiteral_10494, lVar2 != 0)) {
    lVar2 = FUN_03739ec8(lVar2,0x3e,0x5f,0);
    lVar3 = RootMotion_Dynamics_Muscle__get_colliders(*(undefined8 *)puVar1,1);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02061554();
      }
      *(undefined2 *)(lVar3 + 0x20) = 0x5f;
      if (lVar2 != 0) {
        FUN_0373ba7c(lVar2,lVar3,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0206154c();
}


