/*
FUNCTION_NAME: OVRPlugin$$get_initialized
ENTRY_POINT: 05d7830c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_initialized(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  bool bVar5;
  long in_x10;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long *unaff_x21;
  ulong in_stack_00000000;
  float in_stack_00000008;
  
  piVar6 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar6 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(*piVar6 + 6) * 0x10 + 0x138);
      goto LAB_05d78348;
    }
    in_x9 = in_x9 + -1;
    piVar6 = piVar6 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_032937ac();
LAB_05d78348:
  (*(code *)*puVar2)();
  plVar7 = *(long **)(unaff_x19 + 0x28);
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 6) * 0x10 + 0x138);
          goto LAB_05d783b4;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_032937ac(plVar7,*unaff_x21,6);
LAB_05d783b4:
    (*(code *)*puVar2)(plVar7,puVar2[1]);
    plVar7 = *(long **)(unaff_x19 + 0x28);
    if (plVar7 != (long *)0x0) {
      lVar3 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x21) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 6) * 0x10 + 0x138);
            goto LAB_05d78420;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_032937ac(plVar7,*unaff_x21,6);
LAB_05d78420:
      (*(code *)*puVar2)(plVar7,puVar2[1]);
      iVar1 = *(int *)(unaff_x19 + 0x38);
      if (((iVar1 == 0) || ((DAT_013a00e4 <= in_stack_00000008 && (iVar1 == 1)))) ||
         ((bVar5 = false, DAT_013a00e4 <= in_stack_00000000._4_4_ &&
          ((DAT_013a00e4 <= in_stack_00000008 && (iVar1 == 2)))))) {
        bVar5 = (in_stack_00000000 & 0x20f) == 0;
      }
      *(bool *)(unaff_x19 + 100) = bVar5;
      *(float *)(unaff_x19 + 0x74) = 1.0 - in_stack_00000000._4_4_;
      *(undefined4 *)(unaff_x19 + 0x78) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


