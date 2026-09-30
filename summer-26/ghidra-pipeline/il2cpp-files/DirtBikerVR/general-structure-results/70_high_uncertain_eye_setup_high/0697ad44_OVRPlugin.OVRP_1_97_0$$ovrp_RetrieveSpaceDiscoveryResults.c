/*
FUNCTION_NAME: OVRPlugin.OVRP_1_97_0$$ovrp_RetrieveSpaceDiscoveryResults
ENTRY_POINT: 0697ad44
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_97_0__ovrp_RetrieveSpaceDiscoveryResults
               (undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  int iVar2;
  long unaff_x19;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  int in_stack_00000198;
  long in_stack_000001b0;
  int in_stack_000001b8;
  int in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  do {
    FUN_07d2cdf0(&stack0x00000140,unaff_w21,0);
    fVar3 = (float)FUN_07c88914();
    fVar4 = param_2 * *(float *)(unaff_x19 + 0x2b8);
    param_2 = param_3 * *(float *)(unaff_x19 + 700);
    if ((unaff_s10 < ABS(param_2 + fVar3 * *(float *)(unaff_x19 + 0x2b4) + fVar4)) &&
       (fVar3 = (float)FUN_07d2ce10(&stack0x00000140,unaff_w21,0), fVar3 < 0.0)) {
      if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      fVar4 = -unaff_s8 / *(float *)(*(long *)(unaff_x19 + 0x30) + 0x58);
      param_3 = unaff_s9;
      if (fVar4 <= unaff_s9) {
        param_3 = fVar4;
      }
      param_3 = unaff_s9 - param_3;
      param_2 = unaff_s9;
      if (0.0 <= fVar4) {
        param_2 = param_3;
      }
      FUN_07d2ce2c(fVar3 * param_2,&stack0x00000140,unaff_w21,0);
    }
    do {
      unaff_w21 = unaff_w21 + 1;
      if (in_stack_00000198 <= unaff_w21) {
        do {
          lVar1 = in_stack_000001b0;
          iVar2 = in_stack_000001c0 + 1;
          in_stack_000001c0 = iVar2;
          if (in_stack_000001b8 <= iVar2) {
            in_stack_000001e8 = 0;
            in_stack_000001e0 = 0;
            in_stack_000001d8 = 0;
            in_stack_000001d0 = 0;
            in_stack_000001c8 = 0;
            FUN_061b8a0c(&stack0x000001b0,*(undefined8 *)PTR_DAT_084b75b8);
            return;
          }
          if ((*(ushort *)(*(long *)(*unaff_x23 + 0x20) + 0x135) & 1) == 0) {
            FUN_03ac4090();
          }
          memmove((void *)(unaff_x22 + 0x18),(void *)(lVar1 + (long)iVar2 * (long)unaff_w24),0x68);
          memcpy(&stack0x00000140,(void *)(unaff_x22 + 0x18),0x68);
          iVar2 = FUN_07d2cd08(&stack0x00000140,0);
        } while (((iVar2 != *(int *)(unaff_x19 + 0x454)) &&
                 (iVar2 = FUN_07d2cd44(&stack0x00000140,0), iVar2 != *(int *)(unaff_x19 + 0x454)))
                || (FUN_07d2cd08(&stack0x00000140,0), in_stack_00000198 < 1));
        unaff_w21 = 0;
      }
      FUN_07d2cd88(&stack0x00000140,unaff_w21,0);
      FUN_07c888bc();
      unaff_s8 = param_2;
    } while (0.0 <= param_2);
  } while( true );
}


