/*
FUNCTION_NAME: OVRPlugin$$GetOpenXRInstanceProcAddrFunc
ENTRY_POINT: 05d287ec
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetOpenXRInstanceProcAddrFunc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  ulong uVar3;
  long in_x10;
  int *piVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar5;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  piVar4 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar4 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 4) * 0x10 + 0x138);
      goto LAB_05d28828;
    }
    in_x9 = in_x9 + -1;
    piVar4 = piVar4 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_02feb5b8();
LAB_05d28828:
  lVar2 = (*(code *)*puVar1)();
  if ((lVar2 != 0) && (plVar5 = *(long **)(lVar2 + 0x28), plVar5 != (long *)0x0)) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_06fb4b60) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0x12) * 0x10 + 0x138);
          goto LAB_05d28898;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02feb5b8(plVar5,*(long *)PTR_DAT_06fb4b60,0x12);
LAB_05d28898:
    (*(code *)*puVar1)(plVar5,&stack0x00000040,puVar1[1]);
    plVar5 = *(long **)(unaff_x20 + 0x40);
    if (plVar5 != (long *)0x0) {
      lVar2 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_06fb8628) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 3) * 0x10 + 0x138);
            goto LAB_05d28908;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_02feb5b8(plVar5,*(long *)PTR_DAT_06fb8628,3);
LAB_05d28908:
      (*(code *)*puVar1)(plVar5,puVar1[1]);
      in_stack_00000028 = in_stack_00000008;
      in_stack_00000020 = in_stack_00000000;
      in_stack_00000030 = in_stack_00000010;
      FUN_05cc35ac(&stack0x00000040,&stack0x00000020,0);
      FUN_05cc35ac(&stack0x00000040,&stack0x00000060,0);
      *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000054;
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
      unaff_x19[1] = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      *unaff_x19 = in_stack_00000040;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


