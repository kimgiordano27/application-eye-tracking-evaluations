/*
FUNCTION_NAME: OppyCharacterController.<RequestJumpAfterSeconds>d__26$$System.IDisposable.Dispose
ENTRY_POINT: 0318de3c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void OppyCharacterController_<RequestJumpAfterSeconds>d__26__System_IDisposable_Dispose
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,float param_5,
               long param_6)

{
  long lVar1;
  undefined4 unaff_w19;
  long lVar2;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar2 = *(long *)(param_6 + 0x10);
    lVar1 = FUN_03154420(*(long *)(param_1 + 0x48),unaff_w19,0);
    if (((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) &&
       (fVar3 = (float)FUN_0690449c(*(long *)(lVar1 + 0x10),0), lVar2 != 0)) {
      FUN_06904520((unaff_s10 * param_4 + unaff_s11 * fVar3 + unaff_s9 * param_5) -
                   unaff_s8 * param_3,
                   (unaff_s8 * fVar3 + unaff_s11 * param_3 + unaff_s10 * param_5) -
                   unaff_s9 * param_4,
                   (unaff_s9 * param_3 + unaff_s11 * param_4 + unaff_s8 * param_5) -
                   unaff_s10 * fVar3,
                   ((unaff_s11 * param_5 - unaff_s9 * fVar3) - unaff_s10 * param_3) -
                   unaff_s8 * param_4,lVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


