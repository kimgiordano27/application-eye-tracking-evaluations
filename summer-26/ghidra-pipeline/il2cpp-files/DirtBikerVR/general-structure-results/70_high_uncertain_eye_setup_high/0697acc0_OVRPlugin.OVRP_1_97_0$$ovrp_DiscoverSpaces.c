/*
FUNCTION_NAME: OVRPlugin.OVRP_1_97_0$$ovrp_DiscoverSpaces
ENTRY_POINT: 0697acc0
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


void OVRPlugin_OVRP_1_97_0__ovrp_DiscoverSpaces(undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  float fVar3;
  float fVar4;
  float fVar5;
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
  
  while( true ) {
    memcpy(&stack0x00000140,(void *)(unaff_x22 + 0x18),0x68);
    iVar2 = FUN_07d2cd08(&stack0x00000140,0);
                    /* try { // try from 0697acf4 to 06a7ae73 has its CatchHandler @ 0697acf4
                       catch() { ... } // from try @ 0697acf4 with catch @ 0697acf4
                       catch() { ... } // from try @ 0697af38 with catch @ 0697acf4
                       catch() { ... } // from try @ 0697b0a0 with catch @ 0697acf4
                       catch() { ... } // from try @ 0697b0f8 with catch @ 0697acf4 */
    if (((iVar2 == *(int *)(unaff_x19 + 0x454)) ||
        (iVar2 = FUN_07d2cd44(&stack0x00000140,0), iVar2 == *(int *)(unaff_x19 + 0x454))) &&
       (FUN_07d2cd08(&stack0x00000140,0), 0 < in_stack_00000198)) {
      iVar2 = 0;
      fVar5 = param_2;
      do {
        FUN_07d2cd88(&stack0x00000140,iVar2,0);
        FUN_07c888bc();
        param_2 = fVar5;
        if (fVar5 < 0.0) {
          fVar4 = fVar5;
          FUN_07d2cdf0(&stack0x00000140,iVar2,0);
          fVar3 = (float)FUN_07c88914();
          param_2 = param_3 * *(float *)(unaff_x19 + 700);
          if ((unaff_s10 <
               ABS(param_2 + fVar3 * *(float *)(unaff_x19 + 0x2b4) +
                             fVar4 * *(float *)(unaff_x19 + 0x2b8))) &&
             (fVar4 = (float)FUN_07d2ce10(&stack0x00000140,iVar2,0), fVar4 < 0.0)) {
            if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            fVar5 = -fVar5 / *(float *)(*(long *)(unaff_x19 + 0x30) + 0x58);
            param_3 = unaff_s9;
            if (fVar5 <= unaff_s9) {
              param_3 = fVar5;
            }
            param_3 = unaff_s9 - param_3;
            param_2 = unaff_s9;
            if (0.0 <= fVar5) {
              param_2 = param_3;
            }
            FUN_07d2ce2c(fVar4 * param_2,&stack0x00000140,iVar2,0);
          }
        }
        iVar2 = iVar2 + 1;
        fVar5 = param_2;
      } while (iVar2 < in_stack_00000198);
    }
    lVar1 = in_stack_000001b0;
    iVar2 = in_stack_000001c0 + 1;
    in_stack_000001c0 = iVar2;
    if (in_stack_000001b8 <= iVar2) break;
    if ((*(ushort *)(*(long *)(*unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    memmove((void *)(unaff_x22 + 0x18),(void *)(lVar1 + (long)iVar2 * (long)unaff_w24),0x68);
  }
  in_stack_000001e8 = 0;
  in_stack_000001e0 = 0;
  in_stack_000001d8 = 0;
  in_stack_000001d0 = 0;
  in_stack_000001c8 = 0;
  FUN_061b8a0c(&stack0x000001b0,*(undefined8 *)PTR_DAT_084b75b8);
  return;
}


