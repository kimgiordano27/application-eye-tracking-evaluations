/*
FUNCTION_NAME: OVRPlugin$$DestroySpaceUser
ENTRY_POINT: 06acf000
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__DestroySpaceUser(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long unaff_x21;
  float fVar5;
  float fVar6;
  
  if (in_x9 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_06acf044;
      }
      in_x9 = in_x9 + -1;
      piVar4 = piVar4 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_0338f71c();
LAB_06acf044:
  fVar5 = (float)(*(code *)*puVar1)();
  if (0.0 < fVar5) {
    fVar5 = (float)FUN_06ad0d9c();
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)(unaff_x21 + 0xa38)) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
          goto LAB_06acf0c0;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c();
LAB_06acf0c0:
    fVar6 = (float)(*(code *)*puVar1)();
    if (fVar5 <= fVar6) {
      FUN_06acffa4();
    }
  }
  return;
}


