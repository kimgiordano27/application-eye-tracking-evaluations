/*
FUNCTION_NAME: OVRPlugin$$get_nativeSDKVersion
ENTRY_POINT: 06ab69ec
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__get_nativeSDKVersion(ulong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar8;
  long *unaff_x22;
  undefined8 uVar9;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  
  if ((param_1 & 1) == 0) {
    FUN_0335b6c8(&DAT_083dfe38,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cd2b8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cffc8,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x20 + 0x19a) = 1;
  }
  uVar3 = (**(code **)(*unaff_x22 + 0x358))();
  if ((uVar3 & 1) != 0) {
    if (*(char *)((long)unaff_x22 + 0x21) != '\0') {
      (**(code **)(*unaff_x22 + 0x248))();
      *(undefined1 *)((long)unaff_x22 + 0x21) = 0;
    }
    lVar4 = (**(code **)(*unaff_x22 + 600))();
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x78) != 0)) {
      plVar8 = *(long **)(*(long *)(lVar4 + 0x78) + 0x18);
      if (*(char *)((long)unaff_x22 + 0x21) != '\0') {
        (**(code **)(*unaff_x22 + 0x248))();
        *(undefined1 *)((long)unaff_x22 + 0x21) = 0;
      }
      lVar4 = (**(code **)(*unaff_x22 + 600))();
      if (lVar4 != 0) {
        uStack0000000000000014 = *(undefined8 *)(lVar4 + 0x44);
        uVar9 = *(undefined8 *)(lVar4 + 0x30);
        uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)(lVar4 + 0x3c) >> 0x20);
        uVar2 = uStack0000000000000050;
        uStack0000000000000048 = (undefined4)*(undefined8 *)(lVar4 + 0x38);
        uVar1 = uStack0000000000000048;
        uStack000000000000004c = (undefined4)((ulong)*(undefined8 *)(lVar4 + 0x38) >> 0x20);
        in_stack_00000040 = uVar9;
        uStack0000000000000054 = uStack0000000000000014;
        if (plVar8 != (long *)0x0) {
          uStack000000000000000c = uStack000000000000004c;
          lVar4 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_083cd2b8) {
                puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_06ab6b78;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined8 *)FUN_0338f71c(plVar8,DAT_083cd2b8,1);
LAB_06ab6b78:
          uStack0000000000000068 = uVar1;
          uStack0000000000000074 = uStack0000000000000014;
          uStack000000000000006c = uStack000000000000000c;
          uStack0000000000000070 = uVar2;
          in_stack_00000060 = uVar9;
          (*(code *)*puVar5)(&stack0x00000020,plVar8,&stack0x00000060,puVar5[1]);
          unaff_x19[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
          *unaff_x19 = in_stack_00000020;
          *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
          *(ulong *)((long)unaff_x19 + 0xc) =
               CONCAT44(uStack0000000000000030,uStack000000000000002c);
          goto LAB_06ab6bc0;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(int *)(DAT_083cffc8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  FUN_07a1747c(&stack0x00000060,0);
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000074;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
  unaff_x19[1] = CONCAT44(uStack000000000000006c,uStack0000000000000068);
  *unaff_x19 = in_stack_00000060;
LAB_06ab6bc0:
  return uVar3 & 1;
}


