/*
FUNCTION_NAME: OVRPlugin$$SaveSpace
ENTRY_POINT: 0601dca0
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


void OVRPlugin__SaveSpace(code *param_1)

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
  
  (*param_1)();
  lVar2 = *unaff_x20;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x23) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0xc) * 0x10 + 0x138);
        goto LAB_0601dcfc;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0322c1e8();
LAB_0601dcfc:
  (*(code *)*puVar1)();
  lVar2 = *unaff_x20;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x23) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0xc) * 0x10 + 0x138);
        goto LAB_0601dd60;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0322c1e8();
LAB_0601dd60:
  (*(code *)*puVar1)();
  FUN_05fa0bcc(0x3f000000);
  FUN_05fa0bcc(0x3f000000,unaff_x19 + 0x40,&stack0x00000020,0);
  fVar5 = *(float *)(unaff_x19 + 0x18) + *(float *)(unaff_x19 + 0x1c);
  fVar6 = *(float *)(unaff_x19 + 0x1c) / fVar5;
  if (fVar5 <= 0.0) {
    fVar6 = 0.5;
  }
  FUN_05faeaec(fVar6);
  return;
}


