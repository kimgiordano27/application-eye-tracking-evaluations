/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Message_GetNetSyncSessionArray
ENTRY_POINT: 05f53368
PROGRAM: vandalizer-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


long Oculus_Platform_CAPI__ovr_Message_GetNetSyncSessionArray
               (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  float *unaff_x19;
  long lVar4;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  long in_stack_00000018;
  
  puVar1 = PTR_DAT_0759b370;
  fVar5 = INFINITY;
  lVar4 = 0;
  while( true ) {
    uVar3 = FUN_05a2e8e4(&stack0x00000008,*unaff_x24);
    lVar2 = in_stack_00000018;
    if ((uVar3 & 1) == 0) {
      FUN_05a2e8e0(&stack0x00000008,*unaff_x23);
      *unaff_x19 = fVar5;
      return lVar4;
    }
    if (in_stack_00000018 == 0) break;
    fVar6 = (float)FUN_06eed6c4(in_stack_00000018,0);
    if (DAT_07a3fba1 == '\0') {
      FUN_031f20f4(puVar1);
                    /* try { // try from 05f533cc to 060533db has its CatchHandler @ 05f53ab8 */
      DAT_07a3fba1 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    fVar7 = param_2 - unaff_s9;
    param_3 = param_3 - unaff_s10;
    param_2 = param_3 * param_3;
    fVar6 = SQRT(param_2 + (fVar6 - unaff_s8) * (fVar6 - unaff_s8) + fVar7 * fVar7);
    if (fVar6 < fVar5) {
      fVar5 = fVar6;
      lVar4 = lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


