/*
FUNCTION_NAME: OVRPlugin.Quatf$$.ctor
ENTRY_POINT: 0602f768
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin_Quatf___ctor(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  float fVar6;
  
  plVar1 = (long *)FUN_0602c3c8();
  if (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_075f3788) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0602f7d0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0322c1e8(plVar1,*(long *)PTR_DAT_075f3788,0);
LAB_0602f7d0:
    lVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if (lVar3 != 0) {
      fVar6 = (float)FUN_06e6e3cc(lVar3,0);
      lVar3 = FUN_055ee02c();
      if (lVar3 != 0) {
        return fVar6 * *(float *)(lVar3 + 0x70);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


