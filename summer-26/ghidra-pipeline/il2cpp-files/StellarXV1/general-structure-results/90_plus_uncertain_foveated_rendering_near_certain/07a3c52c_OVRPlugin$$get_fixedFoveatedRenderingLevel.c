/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 07a3c52c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_fixedFoveatedRenderingLevel(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 uVar2;
  long in_x9;
  int *in_x10;
  long *unaff_x19;
  int unaff_w21;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)FUN_040b1e00();
LAB_07a3c570:
      (*(code *)*puVar1)();
      (**(code **)(*unaff_x19 + 0x1a8))();
      if (unaff_w21 == 0) {
        uVar2 = (undefined1)unaff_x19[8];
      }
      else {
        if (unaff_w21 != 1) {
          return;
        }
        uVar2 = 1;
      }
      *(undefined1 *)((long)unaff_x19 + 0x59) = uVar2;
      return;
    }
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(in_x10[4] + 2) * 0x10 + 0x138);
      goto LAB_07a3c570;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


