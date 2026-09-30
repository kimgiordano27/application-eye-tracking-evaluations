/*
FUNCTION_NAME: OVRManager$$LateUpdate
ENTRY_POINT: 051a915c
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRManager__LateUpdate(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar8;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 uStack000000000000002c;
  undefined8 uStack0000000000000034;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined8 uStack0000000000000074;
  
  puVar1 = PTR_DAT_066063c8;
  uStack0000000000000034 = *(undefined8 *)((long)unaff_x21 + 0x14);
  uVar8 = *unaff_x21;
  uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc) >> 0x20);
  uVar3 = uStack0000000000000050;
  uStack0000000000000048 = (undefined4)unaff_x21[1];
  uVar2 = uStack0000000000000048;
  uStack000000000000004c = (undefined4)((ulong)unaff_x21[1] >> 0x20);
  uStack0000000000000040 = uVar8;
  uStack0000000000000054 = uStack0000000000000034;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uStack000000000000002c = uStack000000000000004c;
  lVar5 = *param_1;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_066063c8) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
        goto LAB_051a91dc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_02ce0a7c(param_1,*(long *)PTR_DAT_066063c8,4);
LAB_051a91dc:
  in_stack_00000068 = uVar2;
  uStack0000000000000074 = uStack0000000000000034;
  uStack000000000000006c = uStack000000000000002c;
  in_stack_00000070 = uVar3;
  in_stack_00000060 = uVar8;
  (*(code *)*puVar4)(param_1,&stack0x00000060,puVar4[1]);
  uStack0000000000000014 = *(undefined8 *)((long)unaff_x19 + 0x14);
  uVar8 = *unaff_x19;
  uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x19 + 0xc) >> 0x20);
  uStack0000000000000008 = (undefined4)unaff_x19[1];
  uStack000000000000000c = (undefined4)((ulong)unaff_x19[1] >> 0x20);
  lVar5 = *param_1;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto LAB_051a9260;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_02ce0a7c(param_1,*(long *)puVar1,2);
LAB_051a9260:
  in_stack_00000068 = uStack0000000000000008;
  uStack0000000000000074 = uStack0000000000000014;
  uStack000000000000006c = uStack000000000000000c;
  in_stack_00000070 = uStack0000000000000010;
  in_stack_00000060 = uVar8;
  (*(code *)*puVar4)(param_1,&stack0x00000060,puVar4[1]);
  return param_1;
}


