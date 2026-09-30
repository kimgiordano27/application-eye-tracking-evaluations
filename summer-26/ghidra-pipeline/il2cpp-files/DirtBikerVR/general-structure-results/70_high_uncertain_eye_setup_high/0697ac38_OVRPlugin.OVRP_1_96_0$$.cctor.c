/*
FUNCTION_NAME: OVRPlugin.OVRP_1_96_0$$.cctor
ENTRY_POINT: 0697ac38
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


void OVRPlugin_OVRP_1_96_0___cctor(long param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long unaff_x19;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 in_stack_00000000;
  undefined8 *in_stack_00000008;
  int in_stack_00000198;
  long in_stack_000001b0;
  int in_stack_000001b8;
  int in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  FUN_051214f8(&stack0x00000230,**(undefined8 **)(param_1 + 0x5d0));
  memcpy(&stack0x000001b0,&stack0x00000000,0x80);
  puVar2 = PTR_DAT_084b75c0;
  fVar1 = DAT_015c5b88;
  in_stack_00000000 = 0;
  iVar4 = in_stack_000001c0 + 1;
  lVar5 = *(long *)PTR_DAT_084b75c0;
  in_stack_00000008 = &stack0x000001b0;
  in_stack_000001c0 = iVar4;
  if (iVar4 < in_stack_000001b8) {
    do {
      lVar3 = in_stack_000001b0;
      in_stack_000001c0 = iVar4;
      if ((*(ushort *)(*(long *)(lVar5 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      memmove(&stack0x000001c8,(void *)(lVar3 + (long)iVar4 * 0x68),0x68);
      memcpy(&stack0x00000140,&stack0x000001c8,0x68);
      iVar4 = FUN_07d2cd08(&stack0x00000140,0);
      if (((iVar4 == *(int *)(unaff_x19 + 0x454)) ||
          (iVar4 = FUN_07d2cd44(&stack0x00000140,0), iVar4 == *(int *)(unaff_x19 + 0x454))) &&
         (FUN_07d2cd08(&stack0x00000140,0), 0 < in_stack_00000198)) {
        iVar4 = 0;
        fVar8 = param_3;
        do {
          FUN_07d2cd88(&stack0x00000140,iVar4,0);
          FUN_07c888bc();
          param_3 = fVar8;
          if (fVar8 < 0.0) {
            fVar7 = fVar8;
            FUN_07d2cdf0(&stack0x00000140,iVar4,0);
            fVar6 = (float)FUN_07c88914();
            param_3 = param_4 * *(float *)(unaff_x19 + 700);
            if ((fVar1 < ABS(param_3 + fVar6 * *(float *)(unaff_x19 + 0x2b4) +
                                       fVar7 * *(float *)(unaff_x19 + 0x2b8))) &&
               (fVar7 = (float)FUN_07d2ce10(&stack0x00000140,iVar4,0), fVar7 < 0.0)) {
              if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              fVar8 = -fVar8 / *(float *)(*(long *)(unaff_x19 + 0x30) + 0x58);
              param_4 = 1.0;
              if (fVar8 <= 1.0) {
                param_4 = fVar8;
              }
              param_4 = 1.0 - param_4;
              param_3 = 1.0;
              if (0.0 <= fVar8) {
                param_3 = param_4;
              }
              FUN_07d2ce2c(fVar7 * param_3,&stack0x00000140,iVar4,0);
            }
          }
          iVar4 = iVar4 + 1;
          fVar8 = param_3;
        } while (iVar4 < in_stack_00000198);
      }
      iVar4 = in_stack_000001c0 + 1;
      lVar5 = *(long *)puVar2;
      in_stack_000001c0 = iVar4;
    } while (iVar4 < in_stack_000001b8);
  }
  in_stack_000001e8 = 0;
  in_stack_000001e0 = 0;
  in_stack_000001d8 = 0;
  in_stack_000001d0 = 0;
  in_stack_000001c8 = 0;
  FUN_061b8a0c(&stack0x000001b0,*(undefined8 *)PTR_DAT_084b75b8);
  return;
}


