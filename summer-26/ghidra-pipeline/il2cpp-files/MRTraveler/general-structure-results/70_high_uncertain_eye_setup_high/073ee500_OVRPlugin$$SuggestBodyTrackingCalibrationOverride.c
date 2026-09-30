/*
FUNCTION_NAME: OVRPlugin$$SuggestBodyTrackingCalibrationOverride
ENTRY_POINT: 073ee500
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SuggestBodyTrackingCalibrationOverride(void)

{
  float fVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar7;
  float fVar8;
  byte bStack0000000000000000;
  undefined8 uStack0000000000000004;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e73668);
  *(undefined1 *)(unaff_x21 + 0x7e2) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  plVar7 = *(long **)(unaff_x19 + 0x10);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08eb1f80) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
          goto LAB_073ee584;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)PTR_DAT_08eb1f80,6);
LAB_073ee584:
    (*(code *)*puVar3)(plVar7,puVar3[1]);
    *(undefined2 *)(unaff_x19 + 0x22) = *(undefined2 *)(unaff_x19 + 0x20);
    *(undefined8 *)(unaff_x19 + 0x18) = uStack0000000000000004;
    *(byte *)(unaff_x19 + 0x20) = bStack0000000000000000 >> 5 & 1;
    *(byte *)(unaff_x19 + 0x21) = bStack0000000000000000 >> 4 & 1;
    puVar2 = PTR_DAT_08e73668;
    if (unaff_x20 != (long *)0x0) {
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08e73668) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
            goto LAB_073ee618;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348();
LAB_073ee618:
      (*(code *)*puVar3)();
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
            goto LAB_073ee680;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348();
LAB_073ee680:
      (*(code *)*puVar3)();
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
            goto LAB_073ee6e4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348();
LAB_073ee6e4:
      (*(code *)*puVar3)();
      FUN_07370f48(0x3f000000,unaff_x19 + 0x24,&stack0x00000020,0);
      FUN_07370f48(0x3f000000,unaff_x19 + 0x40,&stack0x00000020,0);
      fVar8 = *(float *)(unaff_x19 + 0x18) + *(float *)(unaff_x19 + 0x1c);
      fVar1 = *(float *)(unaff_x19 + 0x1c) / fVar8;
      if (fVar8 <= 0.0) {
        fVar1 = 0.5;
      }
      FUN_0737f038(fVar1,unaff_x19 + 0x24,unaff_x19 + 0x40,unaff_x19 + 0x5c,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


