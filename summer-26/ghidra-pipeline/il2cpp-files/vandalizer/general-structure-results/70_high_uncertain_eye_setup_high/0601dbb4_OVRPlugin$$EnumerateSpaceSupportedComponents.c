/*
FUNCTION_NAME: OVRPlugin$$EnumerateSpaceSupportedComponents
ENTRY_POINT: 0601dbb4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EnumerateSpaceSupportedComponents(long param_1)

{
  float fVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *in_x10;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  float fVar7;
  byte bStack0000000000000000;
  undefined8 uStack0000000000000004;
  
  uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *in_x10) {
        puVar3 = (undefined8 *)(param_1 + (long)(*piVar6 + 6) * 0x10 + 0x138);
        goto LAB_0601dc00;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0322c1e8();
LAB_0601dc00:
  (*(code *)*puVar3)();
  *(undefined2 *)(unaff_x19 + 0x22) = *(undefined2 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x18) = uStack0000000000000004;
  *(byte *)(unaff_x19 + 0x20) = bStack0000000000000000 >> 5 & 1;
  *(byte *)(unaff_x19 + 0x21) = bStack0000000000000000 >> 4 & 1;
  puVar2 = PTR_DAT_075f2fc8;
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_075f2fc8) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
        goto LAB_0601dc94;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0322c1e8();
LAB_0601dc94:
  (*(code *)*puVar3)();
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
        goto LAB_0601dcfc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0322c1e8();
LAB_0601dcfc:
  (*(code *)*puVar3)();
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
        goto LAB_0601dd60;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0322c1e8();
LAB_0601dd60:
  (*(code *)*puVar3)();
  FUN_05fa0bcc(0x3f000000,unaff_x19 + 0x24,&stack0x00000020,0);
  FUN_05fa0bcc(0x3f000000,unaff_x19 + 0x40,&stack0x00000020,0);
  fVar7 = *(float *)(unaff_x19 + 0x18) + *(float *)(unaff_x19 + 0x1c);
  fVar1 = *(float *)(unaff_x19 + 0x1c) / fVar7;
  if (fVar7 <= 0.0) {
    fVar1 = 0.5;
  }
  FUN_05faeaec(fVar1,unaff_x19 + 0x24,unaff_x19 + 0x40,unaff_x19 + 0x5c,0);
  return;
}


