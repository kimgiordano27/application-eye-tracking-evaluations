/*
FUNCTION_NAME: OVRPlugin.OVRP_1_34_0$$.cctor
ENTRY_POINT: 069731c8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_34_0___cctor(float param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *plVar3;
  uint unaff_w21;
  long unaff_x22;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float fVar10;
  
  plVar1 = *(long **)(unaff_x22 + 0x20);
  *(float *)(unaff_x22 + 0x78) = unaff_s8 + (ABS(param_1) - unaff_s8);
  if (plVar1 != (long *)0x0) {
    fVar10 = *(float *)(unaff_x22 + 0x7c);
    fVar4 = (float)(**(code **)(*plVar1 + 0x4b8))(plVar1,*(undefined8 *)(*plVar1 + 0x4c0));
                    /* try { // try from 069731f8 to 06a7321f has its CatchHandler @ 06973388 */
    plVar1 = *(long **)(unaff_x22 + 0x28);
    *(float *)(unaff_x22 + 0x7c) = fVar10 + (ABS(fVar4) - fVar10);
    if (plVar1 != (long *)0x0) {
      fVar10 = *(float *)(unaff_x22 + 0x70) / *(float *)(unaff_x22 + 0x80);
      fVar4 = 1.0;
      if (fVar10 <= 1.0) {
        fVar4 = fVar10;
      }
      fVar5 = (float)*(undefined8 *)(unaff_x22 + 0x50);
      fVar6 = (float)((ulong)*(undefined8 *)(unaff_x22 + 0x50) >> 0x20);
      fVar7 = (float)*(undefined8 *)(unaff_x22 + 0x58);
      fVar8 = (float)((ulong)*(undefined8 *)(unaff_x22 + 0x58) >> 0x20);
      fVar9 = 0.0;
      if (0.0 <= fVar10) {
        fVar9 = fVar4;
      }
      fVar6 = fVar6 + ((float)((ulong)*(undefined8 *)(unaff_x22 + 0x60) >> 0x20) - fVar6) * fVar9;
      (**(code **)(*plVar1 + 0x2a8))
                (CONCAT44(fVar6,fVar5 + ((float)*(undefined8 *)(unaff_x22 + 0x60) - fVar5) * fVar9),
                 fVar6,fVar7 + ((float)*(undefined8 *)(unaff_x22 + 0x68) - fVar7) * fVar9,
                 fVar8 + ((float)((ulong)*(undefined8 *)(unaff_x22 + 0x68) >> 0x20) - fVar8) * fVar9
                 ,plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
      plVar1 = *(long **)(unaff_x22 + 0x20);
      if (plVar1 != (long *)0x0) {
        plVar3 = *(long **)(unaff_x22 + 0x30);
        fVar10 = *(float *)(unaff_x22 + 0x74);
        fVar4 = (float)(**(code **)(*plVar1 + 0x2c8))(plVar1,*(undefined8 *)(*plVar1 + 0x2d0));
        if (plVar3 != (long *)0x0) {
          fVar10 = fVar10 / fVar4;
          fVar4 = 1.0;
          if (fVar10 <= 1.0) {
            fVar4 = fVar10;
          }
          fVar9 = 0.0;
          if (0.0 <= fVar10) {
            fVar9 = fVar4;
          }
          (**(code **)(*plVar3 + 0x428))(fVar9,plVar3,*(undefined8 *)(*plVar3 + 0x430));
          plVar1 = *(long **)(unaff_x22 + 0x38);
          if (plVar1 != (long *)0x0) {
            fVar10 = *(float *)(unaff_x22 + 0x7c);
            fVar4 = 1.0;
            if (fVar10 <= 1.0) {
              fVar4 = fVar10;
            }
            fVar9 = 0.0;
            if (0.0 <= fVar10) {
              fVar9 = fVar4;
            }
            (**(code **)(*plVar1 + 0x428))(fVar9,plVar1,*(undefined8 *)(*plVar1 + 0x430));
            plVar1 = *(long **)(unaff_x22 + 0x40);
            if (plVar1 != (long *)0x0) {
              fVar10 = *(float *)(unaff_x22 + 0x78);
              fVar4 = 1.0;
              if (fVar10 <= 1.0) {
                fVar4 = fVar10;
              }
              fVar9 = 0.0;
              if (0.0 <= fVar10) {
                fVar9 = fVar4;
              }
              (**(code **)(*plVar1 + 0x428))(fVar9,plVar1,*(undefined8 *)(*plVar1 + 0x430));
              plVar1 = *(long **)(unaff_x22 + 0x20);
              if (plVar1 != (long *)0x0) {
                plVar3 = *(long **)(unaff_x22 + 0x48);
                fVar10 = *(float *)(unaff_x22 + 0x70);
                fVar4 = (float)(**(code **)(*plVar1 + 0x2c8))
                                         (plVar1,*(undefined8 *)(*plVar1 + 0x2d0));
                if (plVar3 != (long *)0x0) {
                  fVar10 = fVar10 / fVar4;
                  fVar4 = 1.0;
                  if (fVar10 <= 1.0) {
                    fVar4 = fVar10;
                  }
                  fVar9 = 0.0;
                  if (0.0 <= fVar10) {
                    fVar9 = fVar4;
                  }
                  (**(code **)(*plVar3 + 0x428))(fVar9,plVar3,*(undefined8 *)(*plVar3 + 0x430));
                  uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487fd0);
                  FUN_07ca4ee0(DAT_015c5c40,uVar2,0);
                  *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
                  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar2);
                  *(undefined4 *)(unaff_x19 + 0x10) = 1;
                  return unaff_w21 < 2;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


