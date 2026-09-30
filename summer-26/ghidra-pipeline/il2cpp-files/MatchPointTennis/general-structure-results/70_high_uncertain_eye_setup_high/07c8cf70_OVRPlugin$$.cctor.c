/*
FUNCTION_NAME: OVRPlugin$$.cctor
ENTRY_POINT: 07c8cf70
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin___cctor(undefined8 *param_1)

{
  float fVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  float fVar7;
  byte bStack0000000000000000;
  undefined8 uStack0000000000000004;
  
  (*(code *)*param_1)();
  *(undefined2 *)(unaff_x19 + 0x22) = *(undefined2 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x18) = uStack0000000000000004;
  *(byte *)(unaff_x19 + 0x20) = bStack0000000000000000 >> 5 & 1;
  *(byte *)(unaff_x19 + 0x21) = bStack0000000000000000 >> 4 & 1;
  puVar2 = PTR_DAT_09f4d1c0;
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09f4d1c0) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
        goto LAB_07c8d018;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_044822ac();
LAB_07c8d018:
  (*(code *)*puVar3)();
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
        goto LAB_07c8d080;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_044822ac();
LAB_07c8d080:
  (*(code *)*puVar3)();
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
        goto LAB_07c8d0e4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_044822ac();
LAB_07c8d0e4:
  (*(code *)*puVar3)();
  FUN_07c0f4f0(0x3f000000,unaff_x19 + 0x24,&stack0x00000020,0);
  FUN_07c0f4f0(0x3f000000,unaff_x19 + 0x40,&stack0x00000020,0);
  fVar7 = *(float *)(unaff_x19 + 0x18) + *(float *)(unaff_x19 + 0x1c);
  fVar1 = *(float *)(unaff_x19 + 0x1c) / fVar7;
  if (fVar7 <= 0.0) {
    fVar1 = 0.5;
  }
  FUN_07c1d674(fVar1,unaff_x19 + 0x24,unaff_x19 + 0x40,unaff_x19 + 0x5c,0);
  return;
}


