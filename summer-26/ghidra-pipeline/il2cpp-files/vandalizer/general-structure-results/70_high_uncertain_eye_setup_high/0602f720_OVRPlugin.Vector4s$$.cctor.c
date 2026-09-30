/*
FUNCTION_NAME: OVRPlugin.Vector4s$$.cctor
ENTRY_POINT: 0602f720
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin_Vector4s___cctor(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  float fVar6;
  
  if ((DAT_07a46bc7 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f73c8);
    FUN_031f20f4(PTR_DAT_075f3788);
    DAT_07a46bc7 = 1;
  }
  lVar1 = FUN_0602c3c8(param_1);
  if (lVar1 == 0) {
    fVar6 = 1.0;
  }
  else {
    plVar2 = (long *)FUN_0602c3c8(param_1);
    if (plVar2 == (long *)0x0) goto LAB_0602f81c;
    lVar1 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_075f3788) {
          puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0602f7d0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_0322c1e8(plVar2,*(long *)PTR_DAT_075f3788,0);
LAB_0602f7d0:
    lVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (lVar1 == 0) goto LAB_0602f81c;
    fVar6 = (float)FUN_06e6e3cc(lVar1,0);
  }
  lVar1 = FUN_055ee02c(param_1,*(undefined8 *)PTR_DAT_075f73c8);
  if (lVar1 != 0) {
    return fVar6 * *(float *)(lVar1 + 0x70);
  }
LAB_0602f81c:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


