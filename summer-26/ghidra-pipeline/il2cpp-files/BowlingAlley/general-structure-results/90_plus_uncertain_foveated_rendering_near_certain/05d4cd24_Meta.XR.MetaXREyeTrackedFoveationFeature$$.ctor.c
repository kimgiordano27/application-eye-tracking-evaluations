/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$.ctor
ENTRY_POINT: 05d4cd24
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined4
Meta_XR_MetaXREyeTrackedFoveationFeature___ctor(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  int *piVar2;
  long *unaff_x19;
  
  if (in_x9 != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar2 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar2 + 6) * 0x10 + 0x138);
        goto LAB_05d4cd68;
      }
      in_x9 = in_x9 + -1;
      piVar2 = piVar2 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_032937ac();
LAB_05d4cd68:
  (*(code *)*puVar1)();
  if (*unaff_x19 != 0) {
    return *(undefined4 *)(*unaff_x19 + 0x3c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


