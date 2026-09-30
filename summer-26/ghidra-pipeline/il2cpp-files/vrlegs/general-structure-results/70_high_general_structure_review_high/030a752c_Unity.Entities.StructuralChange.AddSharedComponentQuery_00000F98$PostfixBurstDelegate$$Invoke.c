/*
FUNCTION_NAME: Unity.Entities.StructuralChange.AddSharedComponentQuery_00000F98$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 030a752c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Entities_StructuralChange_AddSharedComponentQuery_00000F98_PostfixBurstDelegate__Invoke
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *unaff_x26;
  
  FUN_021de1ac(param_2,param_3,*param_1);
                    /* try { // try from 030a753c to 031a757b has its CatchHandler @ 030a7324 */
  puVar3 = (undefined8 *)(*(long *)(*unaff_x26 + 0xb8) + 8);
  *puVar3 = param_2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar3,param_2);
  uVar4 = FUN_01f6d39c();
  FUN_01f70920(uVar4,*(undefined8 *)_Common_UpdateManager_UpdateJobManager<TData>_var);
  iVar1 = FUN_036a2ca8();
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      UnityEngine_TextCore_Text_TextStyle__get_styleOpeningTagArray();
      FUN_036a2d20();
      FUN_036a2dec();
      FUN_036a2eb4();
      iVar1 = iVar1 + 1;
      iVar2 = FUN_036a2ca8();
    } while (iVar1 < iVar2);
  }
  return;
}


