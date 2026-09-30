/*
FUNCTION_NAME: FUN_02516bd8
ENTRY_POINT: 02516bd8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_02516bd8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((DAT_037829af & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_66__);
    DAT_037829af = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if ((plVar5 != (long *)0x0) && (*(char *)(param_1 + 0x18) == '\0')) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)Method_OVRPlugin_<>c_<_cctor>b__796_66__) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_02516c6c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_00d59724(plVar5,*(long *)Method_OVRPlugin_<>c_<_cctor>b__796_66__,1);
LAB_02516c6c:
    (*(code *)*puVar1)(plVar5,puVar1[1]);
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}


