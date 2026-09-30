/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$OnSessionCreate
ENTRY_POINT: 07443c10
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 124
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;telemetry_or_network_hits_2;strong_foveation_hits_2;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MetaXRFoveationFeature__OnSessionCreate
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 unaff_s13;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 uStack0000000000000044;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  
  puVar1 = PTR_DAT_091a0f88;
  if (param_4 != 0) {
    lVar3 = *(long *)(*(long *)PTR_DAT_091a0f88 + 0xb8);
    fVar11 = *(float *)(lVar3 + 0x18);
    fVar12 = *(float *)(lVar3 + 0x1c);
    fVar13 = *(float *)(lVar3 + 0x20);
    fVar4 = (float)FUN_08abf9b0(param_4,0);
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      fVar5 = (float)FUN_08abf928(*(long *)(unaff_x20 + 0x20),0);
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        uStack0000000000000014 = unaff_s13;
        lVar3 = FUN_08a4d98c(*(long *)(unaff_x20 + 0x20),0);
        if (lVar3 != 0) {
          fVar6 = (float)FUN_08a5d3f4(lVar3,0);
          if ((*(long *)(unaff_x20 + 0x20) != 0) &&
             (fVar10 = param_3, fVar9 = param_2, lVar3 = FUN_08a4d98c(*(long *)(unaff_x20 + 0x20),0)
             , lVar3 != 0)) {
            fVar7 = (float)FUN_08a5d3f4(lVar3,0);
            if (*(long *)(unaff_x20 + 0x20) != 0) {
              fVar5 = fVar4 * 0.5 - fVar5;
              if (fVar5 <= 0.0) {
                fVar5 = 0.0;
              }
              fVar11 = fVar11 * fVar5;
              fVar12 = fVar12 * fVar5;
              fVar13 = fVar13 * fVar5;
              uVar8 = FUN_08abf928(*(long *)(unaff_x20 + 0x20),0);
              uStack0000000000000004 = uStack0000000000000018;
              uVar2 = FUN_07445ac0(fVar7 - fVar11,fVar9 - fVar12,fVar10 - fVar13,fVar11 + fVar6,
                                   fVar12 + param_2,fVar13 + param_3,uVar8);
              if ((uVar2 & 1) == 0) {
                if (DAT_098362c7 == '\0') {
                  FUN_03d2d2b0(PTR_DAT_091a0f88);
                  DAT_098362c7 = '\x01';
                }
                in_stack_00000050 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
                in_stack_00000058 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar1 + 0xb8) + 1);
              }
              else {
                FUN_05edca54(&stack0x00000050,&stack0x00000080,*(undefined8 *)PTR_DAT_09222990);
                uStack0000000000000044 = uStack0000000000000074;
                FUN_07445d78(&stack0x00000050,uStack0000000000000014,uStack0000000000000018,
                             uStack000000000000001c);
              }
              *unaff_x19 = in_stack_00000050;
              *(undefined4 *)(unaff_x19 + 1) = in_stack_00000058;
              return uVar2 & 1;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


