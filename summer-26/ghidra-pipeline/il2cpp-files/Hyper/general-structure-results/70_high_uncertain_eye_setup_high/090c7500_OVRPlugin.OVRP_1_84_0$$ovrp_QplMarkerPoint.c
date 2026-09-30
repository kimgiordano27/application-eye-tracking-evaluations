/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerPoint
ENTRY_POINT: 090c7500
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerPoint(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  long *unaff_x21;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  (*(code *)*param_1)(&stack0x00000004);
  lVar2 = *(long *)(unaff_x19 + 0x48);
  if (lVar2 != 0) {
    fVar8 = *(float *)(unaff_x19 + 0x3c);
    fVar9 = *(float *)(unaff_x19 + 0x7c);
    fVar6 = (float)(**(code **)(lVar2 + 0x18))
                             (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    fVar8 = fVar8 * fVar6;
    fVar6 = 1.0;
    if (fVar8 <= 1.0) {
      fVar6 = fVar8;
    }
    fVar10 = 0.0;
    if (0.0 <= fVar8) {
      fVar10 = fVar6;
    }
    *(float *)(unaff_x19 + 0x7c) = fVar9 + (fStack000000000000000c - fVar9) * fVar10;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      thunk_FUN_0a122260(*(long *)(unaff_x19 + 0x30),*(undefined4 *)(unaff_x19 + 0x58),0);
      plVar5 = *(long **)(unaff_x19 + 0x28);
      if (plVar5 != (long *)0x0) {
        lVar2 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *unaff_x21) {
              puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 6) * 0x10 + 0x138);
              goto LAB_090c75e0;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar1 = (undefined8 *)FUN_04980e68(plVar5,*unaff_x21,6);
LAB_090c75e0:
        (*(code *)*puVar1)(&stack0x00000004,plVar5,puVar1[1]);
        fVar6 = fStack0000000000000008;
        lVar2 = *(long *)(unaff_x19 + 0x48);
        if (lVar2 != 0) {
          fVar9 = *(float *)(unaff_x19 + 0x40);
          fVar10 = *(float *)(unaff_x19 + 0x80);
          fVar8 = (float)(**(code **)(lVar2 + 0x18))
                                   (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
          fVar9 = fVar9 * fVar8;
          fVar8 = 1.0;
          if (fVar9 <= 1.0) {
            fVar8 = fVar9;
          }
          fVar7 = 0.0;
          if (0.0 <= fVar9) {
            fVar7 = fVar8;
          }
          *(float *)(unaff_x19 + 0x80) = fVar10 + (fVar6 - fVar10) * fVar7;
          if (*(long *)(unaff_x19 + 0x30) != 0) {
            thunk_FUN_0a122260(*(long *)(unaff_x19 + 0x30),*(undefined4 *)(unaff_x19 + 0x5c),0);
            if (*(long *)(unaff_x19 + 0x30) != 0) {
              FUN_0a1229d0(*(undefined4 *)(unaff_x19 + 0x68),*(long *)(unaff_x19 + 0x30),
                           *(undefined4 *)(unaff_x19 + 0x54),0);
              if (*(long *)(unaff_x19 + 0x30) != 0) {
                thunk_FUN_0a122260(*(undefined4 *)(unaff_x19 + 0x6c),*(long *)(unaff_x19 + 0x30),
                                   *(undefined4 *)(unaff_x19 + 0x60),0);
                if (*(long *)(unaff_x19 + 0x30) != 0) {
                  FUN_0a1229d0(*(undefined4 *)(unaff_x19 + 0x70),*(long *)(unaff_x19 + 0x30),
                               *(undefined4 *)(unaff_x19 + 0x50),0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


