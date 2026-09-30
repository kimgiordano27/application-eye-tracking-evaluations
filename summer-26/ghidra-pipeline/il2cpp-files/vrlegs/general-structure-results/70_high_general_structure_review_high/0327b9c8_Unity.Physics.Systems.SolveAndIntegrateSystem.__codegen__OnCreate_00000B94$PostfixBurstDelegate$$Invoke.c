/*
FUNCTION_NAME: Unity.Physics.Systems.SolveAndIntegrateSystem.__codegen__OnCreate_00000B94$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 0327b9c8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Physics_Systems_SolveAndIntegrateSystem___codegen__OnCreate_00000B94_PostfixBurstDelegate__Invoke
               (long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 0x48) = 0x80;
  FUN_027b3d9c(param_1,0);
  if (0 < (int)param_2) {
    *(undefined1 *)(param_1 + 0x60) = 1;
    if ((param_2 & 3) != 0) {
      param_2 = param_2 + 4 & 0xfffffffc;
    }
    *(uint *)(param_1 + 0x40) = param_2;
    return;
  }
  thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
  uVar1 = thunk_FUN_01a89e68();
  uVar2 = thunk_FUN_01a6ca08(Cinemachine_CinemachineBlend_TypeInfo);
  uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cdbbe0);
  FUN_026a7658(uVar1,uVar2,uVar3,0);
  uVar2 = thunk_FUN_01a6ca08(Cinemachine_CinemachineBlendDefinition_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar1,uVar2);
}


