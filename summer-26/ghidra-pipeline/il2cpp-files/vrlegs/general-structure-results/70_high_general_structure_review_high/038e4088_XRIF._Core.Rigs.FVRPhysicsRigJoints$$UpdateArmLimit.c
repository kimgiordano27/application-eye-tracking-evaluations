/*
FUNCTION_NAME: XRIF._Core.Rigs.FVRPhysicsRigJoints$$UpdateArmLimit
ENTRY_POINT: 038e4088
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void XRIF__Core_Rigs_FVRPhysicsRigJoints__UpdateArmLimit(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  if ((DAT_041384e9 & 1) == 0) {
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary_Enumerator<string,_SessionProperty>_Dispose__
                );
    DAT_041384e9 = 1;
  }
  iVar1 = FUN_038e3264(param_1);
  if (1 < iVar1) {
    if ((*param_1 == 0) || (lVar2 = *(long *)(*param_1 + 0x398), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar1 = FUN_02217a2c(lVar2,param_2,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary_Enumerator<string,_SessionProperty>_Dispose__
                        );
    if (0 < iVar1) {
      FUN_038e3fa0(param_1,param_2,iVar1,0);
      return;
    }
  }
  return;
}


