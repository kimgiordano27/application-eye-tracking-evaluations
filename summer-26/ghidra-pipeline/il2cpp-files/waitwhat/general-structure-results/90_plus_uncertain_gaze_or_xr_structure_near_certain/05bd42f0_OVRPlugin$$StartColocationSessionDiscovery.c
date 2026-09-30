/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionDiscovery
ENTRY_POINT: 05bd42f0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__StartColocationSessionDiscovery
               (long param_1,float param_2,undefined1 param_3 [16],float param_4,float param_5)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  ulong uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar10;
  undefined8 unaff_d11;
  float unaff_s13;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000010;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  float in_stack_00000050;
  float in_stack_00000060;
  
  lVar2 = 0;
  uVar3 = 0;
  fVar8 = (float)unaff_d11 + param_5 * param_4;
  fVar9 = (float)((ulong)unaff_d11 >> 0x20) + param_2 * param_4;
  fVar10 = unaff_s10 + unaff_s8 * param_4;
  fVar4 = SQRT((fVar10 - unaff_s9) * (fVar10 - unaff_s9) +
               (fVar8 - in_stack_00000060) * (fVar8 - in_stack_00000060) +
               (fVar9 - in_stack_00000050) * (fVar9 - in_stack_00000050));
  fVar6 = fVar9 + param_2 * fVar4 * 0.5;
  uStack0000000000000030 = CONCAT44(fVar6,fVar8 + param_5 * fVar4 * 0.5);
  uStack0000000000000038 = 0;
  uStack0000000000000048 = 0;
  uStack0000000000000040 = CONCAT44(fVar9,fVar8);
  while( true ) {
    fStack0000000000000010 = (float)(int)uVar3 / ((float)(int)param_1 + unaff_s13);
    fStack0000000000000000 = in_stack_00000060;
    fStack0000000000000004 = in_stack_00000050;
    fVar8 = fVar9;
    fVar7 = fVar10;
    uVar5 = FUN_05bd479c(uStack0000000000000040,fVar9,fVar10,uStack0000000000000030,fVar6,
                         fVar10 + unaff_s8 * fVar4 * 0.5);
    lVar1 = unaff_x19[7];
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(uint *)(lVar1 + 0x18) <= uVar3) break;
    lVar1 = lVar1 + lVar2;
    uVar3 = uVar3 + 1;
    lVar2 = lVar2 + 0xc;
    *(undefined4 *)(lVar1 + 0x20) = uVar5;
    *(float *)(lVar1 + 0x24) = fVar8;
    *(float *)(lVar1 + 0x28) = fVar7;
    param_1 = (long)(int)unaff_x19[10];
    if (param_1 <= (long)uVar3) {
      (**(code **)(*unaff_x19 + 0x1c8))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


