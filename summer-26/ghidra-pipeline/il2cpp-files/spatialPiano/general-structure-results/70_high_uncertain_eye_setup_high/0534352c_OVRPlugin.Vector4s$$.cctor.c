/*
FUNCTION_NAME: OVRPlugin.Vector4s$$.cctor
ENTRY_POINT: 0534352c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin_Vector4s___cctor(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  float fVar5;
  
  if (param_1 != (long *)0x0) {
    lVar2 = *param_1;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)UnityEngine_UIElements_StyleValuePropertyBag<StyleFloat,_float>_TypeInfo) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_05343590;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_02f421d0(param_1,*(long *)
                                   UnityEngine_UIElements_StyleValuePropertyBag<StyleFloat,_float>_TypeInfo
                          ,0);
LAB_05343590:
    lVar2 = (*(code *)*puVar1)(param_1,puVar1[1]);
    if (lVar2 != 0) {
      fVar5 = (float)FUN_06101d4c(lVar2,0);
      lVar2 = FUN_04735a9c();
      if (lVar2 != 0) {
        return fVar5 * *(float *)(lVar2 + 0x70);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


