/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerPoint
ENTRY_POINT: 090c75b8
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerPoint(long param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long lVar3;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_stack_00000008;
  
  do {
    if ((bool)in_ZR) {
      puVar2 = (undefined8 *)FUN_04980e68();
LAB_090c75e0:
      (*(code *)*puVar2)(&stack0x00000004);
      fVar1 = in_stack_00000008;
      lVar3 = *(long *)(unaff_x19 + 0x48);
      if (lVar3 != 0) {
        fVar6 = *(float *)(unaff_x19 + 0x40);
        fVar7 = *(float *)(unaff_x19 + 0x80);
        fVar4 = (float)(**(code **)(lVar3 + 0x18))
                                 (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
        fVar6 = fVar6 * fVar4;
        fVar4 = 1.0;
        if (fVar6 <= 1.0) {
          fVar4 = fVar6;
        }
        fVar5 = 0.0;
        if (0.0 <= fVar6) {
          fVar5 = fVar4;
        }
        *(float *)(unaff_x19 + 0x80) = fVar7 + (fVar1 - fVar7) * fVar5;
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
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(in_x10[4] + 6) * 0x10 + 0x138);
      goto LAB_090c75e0;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


