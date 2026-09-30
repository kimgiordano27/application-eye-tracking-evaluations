/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Vector3>$$Serialize
ENTRY_POINT: 031b3de0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Sirenix_Serialization_MinimalBaseFormatter<Vector3>__Serialize
               (long param_1,int param_2,int param_3)

{
  int iVar1;
  
                    /* try { // try from 031b3de4 to 032b3deb has its CatchHandler @ 031b3dec */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031b3db0 with catch @ 031b3dec
                       catch(type#2 @ 00000000) { ... } // from try @ 031b3de4 with catch @ 031b3dec
                        */
  if (param_2 < 0) {
    FUN_0358b9dc(0);
  }
  if (param_3 < 0) {
    FUN_0358b620(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - param_2 < param_3) {
    FUN_0358b15c(0x17,0);
  }
  if (0 < param_3) {
    iVar1 = *(int *)(param_1 + 0x18) - param_3;
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar1 - param_2 != 0 && param_2 <= iVar1) {
      FUN_0358d498(*(undefined8 *)(param_1 + 0x10),param_3 + param_2,*(undefined8 *)(param_1 + 0x10)
                   ,param_2,iVar1 - param_2,0);
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  return;
}


