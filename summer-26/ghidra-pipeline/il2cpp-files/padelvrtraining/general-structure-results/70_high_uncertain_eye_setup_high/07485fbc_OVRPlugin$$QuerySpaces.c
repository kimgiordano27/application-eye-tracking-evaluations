/*
FUNCTION_NAME: OVRPlugin$$QuerySpaces
ENTRY_POINT: 07485fbc
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


float OVRPlugin__QuerySpaces(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long *unaff_x20;
  float fVar8;
  float fVar9;
  float unaff_s10;
  float in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  puVar1 = PTR_DAT_0921fbf0;
  if (unaff_x20 != (long *)0x0) {
    lVar3 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0921fbf0) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 9) * 0x10 + 0x138);
          goto LAB_07486018;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03d8f370();
LAB_07486018:
    uVar5 = (*(code *)*puVar2)();
    if ((uVar5 & 1) == 0) {
      plVar7 = *(long **)(unaff_x19 + 0x28);
      if (plVar7 == (long *)0x0) goto LAB_07486170;
      lVar4 = *plVar7;
      lVar3 = *(long *)puVar1;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_07486138;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03d8f370(plVar7,lVar3,4);
LAB_07486138:
      in_stack_00000000 = (float)(*(code *)*puVar2)(plVar7,puVar2[1]);
      in_stack_00000000 = unaff_s10 * in_stack_00000000;
    }
    else {
      fVar8 = (float)FUN_08a44d84(in_stack_00000008._4_4_,uStack0000000000000010,
                                  uStack0000000000000014,in_stack_00000018,0);
      plVar7 = *(long **)(unaff_x19 + 0x28);
      if (plVar7 == (long *)0x0) goto LAB_07486170;
      lVar4 = *plVar7;
      lVar3 = *(long *)puVar1;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_07486100;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03d8f370(plVar7,lVar3,4);
LAB_07486100:
      fVar9 = (float)(*(code *)*puVar2)(plVar7,puVar2[1]);
      in_stack_00000000 = in_stack_00000000 + fVar8 * fVar9;
    }
    return in_stack_00000000;
  }
LAB_07486170:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


