/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingSupported
ENTRY_POINT: 074777c0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


long * OVRPlugin__get_foveatedRenderingSupported(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  long in_x9;
  int *in_x10;
  
  do {
    if ((bool)in_ZR) {
      puVar2 = (undefined8 *)FUN_03d8f370();
LAB_074777e4:
      plVar3 = (long *)(*(code *)*puVar2)();
      if (plVar3 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_091f9680 + 0x130);
        if (*(byte *)(*plVar3 + 0x130) < bVar1) {
          plVar3 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
                 *(long *)PTR_DAT_091f9680) {
          plVar3 = (long *)0x0;
        }
      }
      return plVar3;
    }
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138);
      goto LAB_074777e4;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


