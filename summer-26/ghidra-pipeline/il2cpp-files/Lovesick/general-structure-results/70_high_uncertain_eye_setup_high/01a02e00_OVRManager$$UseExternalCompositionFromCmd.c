/*
FUNCTION_NAME: OVRManager$$UseExternalCompositionFromCmd
ENTRY_POINT: 01a02e00
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRManager__UseExternalCompositionFromCmd(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar7;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 uStack0000000000000034;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined8 uStack0000000000000074;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_00d59724();
      goto LAB_01a02e2c;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_01a02e2c:
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = Method_Obi_ObiConstraints<ObiSkinConstraintsBatch>_GetBatch__;
  uStack0000000000000034 = *(undefined8 *)((long)unaff_x21 + 0x14);
  uVar7 = *unaff_x21;
  uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc) >> 0x20);
  uStack000000000000004c = (undefined4)((ulong)unaff_x21[1] >> 0x20);
  uStack0000000000000054 = uStack0000000000000034;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uStack0000000000000028 = (undefined4)unaff_x21[1];
  uStack000000000000002c = uStack000000000000004c;
  lVar4 = *plVar3;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Obi_ObiConstraints<ObiSkinConstraintsBatch>_GetBatch__) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
        goto LAB_01a02eb8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_00d59724(plVar3,*(long *)
                                Method_Obi_ObiConstraints<ObiSkinConstraintsBatch>_GetBatch__,4);
LAB_01a02eb8:
  in_stack_00000068 = uStack0000000000000028;
  uStack0000000000000074 = uStack0000000000000034;
  uStack000000000000006c = uStack000000000000002c;
  in_stack_00000070 = uStack0000000000000050;
  in_stack_00000060 = uVar7;
  (*(code *)*puVar2)(plVar3,&stack0x00000060,puVar2[1]);
  uStack0000000000000014 = *(undefined8 *)((long)unaff_x19 + 0x14);
  uVar7 = *unaff_x19;
  uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x19 + 0xc) >> 0x20);
  uStack0000000000000008 = (undefined4)unaff_x19[1];
  uStack000000000000000c = (undefined4)((ulong)unaff_x19[1] >> 0x20);
  lVar4 = *plVar3;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_01a02f3c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_00d59724(plVar3,*(long *)puVar1,2);
LAB_01a02f3c:
  in_stack_00000068 = uStack0000000000000008;
  uStack0000000000000074 = uStack0000000000000014;
  uStack000000000000006c = uStack000000000000000c;
  in_stack_00000070 = uStack0000000000000010;
  in_stack_00000060 = uVar7;
  (*(code *)*puVar2)(plVar3,&stack0x00000060,puVar2[1]);
  return plVar3;
}


