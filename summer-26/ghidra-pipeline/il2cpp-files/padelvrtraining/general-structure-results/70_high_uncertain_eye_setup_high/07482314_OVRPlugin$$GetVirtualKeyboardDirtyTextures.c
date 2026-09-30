/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardDirtyTextures
ENTRY_POINT: 07482314
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetVirtualKeyboardDirtyTextures(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x23;
  float fVar5;
  float fVar6;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 0xc) * 0x10 + 0x138);
        goto LAB_0748235c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_03d8f370();
LAB_0748235c:
  (*(code *)*puVar1)();
  lVar2 = *unaff_x20;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x23) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0xc) * 0x10 + 0x138);
        goto LAB_074823c0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_03d8f370();
LAB_074823c0:
  (*(code *)*puVar1)();
  FUN_07403370(0x3f000000);
  FUN_07403370(0x3f000000);
  fVar5 = *(float *)(unaff_x19 + 0x18) + *(float *)(unaff_x19 + 0x1c);
  fVar6 = *(float *)(unaff_x19 + 0x1c) / fVar5;
  if (fVar5 <= 0.0) {
    fVar6 = 0.5;
  }
  FUN_074114fc(fVar6);
  return;
}


