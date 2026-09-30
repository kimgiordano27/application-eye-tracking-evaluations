/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcFrameImageFlipped
ENTRY_POINT: 06aefd9c
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcFrameImageFlipped(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar5;
  long unaff_x22;
  long lVar6;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  uStack000000000000004c = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000054 = 0;
  if ((unaff_x22 != 0) && (lVar6 = *(long *)(unaff_x22 + 0x20), lVar6 != 0)) {
    if (DAT_086ef188 == (code *)0x0) {
      DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    }
    uVar1 = (*DAT_086ef188)(lVar6);
    FUN_06a5e4b0(uVar1,0,0);
    in_stack_00000028 = in_stack_00000008;
    in_stack_00000020 = in_stack_00000000;
    in_stack_00000030 = in_stack_00000010;
    FUN_06a7083c(&stack0x00000060);
    plVar5 = *(long **)(unaff_x20 + 0x40);
    if (plVar5 != (long *)0x0) {
      lVar6 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == DAT_083cca40) {
            puVar2 = (undefined8 *)(lVar6 + (long)(*piVar4 + 4) * 0x10 + 0x138);
            goto LAB_06aefe6c;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_0338f71c(plVar5,DAT_083cca40,4);
LAB_06aefe6c:
      lVar6 = (*(code *)*puVar2)(plVar5,puVar2[1]);
      if ((lVar6 != 0) && (plVar5 = *(long **)(lVar6 + 0x28), plVar5 != (long *)0x0)) {
        lVar6 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == DAT_083cca30) {
              puVar2 = (undefined8 *)(lVar6 + (long)(*piVar4 + 0x12) * 0x10 + 0x138);
              goto LAB_06aefed8;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_0338f71c(plVar5,DAT_083cca30,0x12);
LAB_06aefed8:
        (*(code *)*puVar2)(plVar5,&stack0x00000040,puVar2[1]);
        plVar5 = *(long **)(unaff_x20 + 0x40);
        if (plVar5 != (long *)0x0) {
          lVar6 = *plVar5;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar4 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar4 + -2) == DAT_083cca48) {
                puVar2 = (undefined8 *)(lVar6 + (long)(*piVar4 + 3) * 0x10 + 0x138);
                goto LAB_06aeff44;
              }
              uVar3 = uVar3 - 1;
              piVar4 = piVar4 + 4;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined8 *)FUN_0338f71c(plVar5,DAT_083cca48,3);
LAB_06aeff44:
          (*(code *)*puVar2)(plVar5,puVar2[1]);
          in_stack_00000028 = in_stack_00000008;
          in_stack_00000020 = in_stack_00000000;
          in_stack_00000030 = in_stack_00000010;
          FUN_06a70228(&stack0x00000040,&stack0x00000020,&stack0x00000040);
          FUN_06a70228(&stack0x00000040,&stack0x00000060,&stack0x00000040);
          *(ulong *)((long)unaff_x19 + 0x14) =
               CONCAT44(uStack0000000000000058,uStack0000000000000054);
          *(ulong *)((long)unaff_x19 + 0xc) =
               CONCAT44(uStack0000000000000050,uStack000000000000004c);
          unaff_x19[1] = CONCAT44(uStack000000000000004c,uStack0000000000000048);
          *unaff_x19 = uStack0000000000000040;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


