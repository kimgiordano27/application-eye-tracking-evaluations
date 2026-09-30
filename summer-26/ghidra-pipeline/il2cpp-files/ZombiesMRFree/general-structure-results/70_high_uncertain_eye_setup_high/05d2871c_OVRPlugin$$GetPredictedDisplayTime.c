/*
FUNCTION_NAME: OVRPlugin$$GetPredictedDisplayTime
ENTRY_POINT: 05d2871c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetPredictedDisplayTime(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong in_x9;
  ulong uVar6;
  int *piVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar8;
  long unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  
  if ((in_x9 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb4b00);
    FUN_02fe925c(PTR_DAT_06fb8628);
    FUN_02fe925c(PTR_DAT_06fb4b60);
    *(undefined1 *)(unaff_x23 + 0x925) = 1;
  }
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  uStack000000000000006c = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  uStack0000000000000074 = 0;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  if ((unaff_x22 != 0) && (*(long *)(unaff_x22 + 0x20) != 0)) {
    uVar3 = FUN_068f5d7c(*(long *)(unaff_x22 + 0x20),0);
    FUN_05caf184(uVar3,0,0);
    in_stack_00000028 = uStack0000000000000008;
    in_stack_00000020 = in_stack_00000000;
    uStack0000000000000034 = uStack0000000000000010._4_4_;
    uVar1 = uStack0000000000000034;
    in_stack_00000038 = uStack0000000000000010._8_4_;
    uVar2 = in_stack_00000038;
    uStack000000000000002c = uStack000000000000000c;
    in_stack_00000030 = uStack0000000000000010;
    FUN_05cac024();
    in_stack_00000068 = uStack0000000000000008;
    in_stack_00000060 = in_stack_00000000;
    uStack000000000000006c = uStack000000000000000c;
    in_stack_00000070 = uStack0000000000000010;
    plVar8 = *(long **)(unaff_x20 + 0x40);
    uStack0000000000000074 = uVar1;
    in_stack_00000078 = uVar2;
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06fb4b00) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
            goto LAB_05d28828;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06fb4b00,4);
LAB_05d28828:
      lVar5 = (*(code *)*puVar4)(plVar8,puVar4[1]);
      if ((lVar5 != 0) && (plVar8 = *(long **)(lVar5 + 0x28), plVar8 != (long *)0x0)) {
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06fb4b60) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x12) * 0x10 + 0x138);
              goto LAB_05d28898;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06fb4b60,0x12);
LAB_05d28898:
        (*(code *)*puVar4)(plVar8,&stack0x00000040,puVar4[1]);
        plVar8 = *(long **)(unaff_x20 + 0x40);
        if (plVar8 != (long *)0x0) {
          lVar5 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06fb8628) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
                goto LAB_05d28908;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_02feb5b8(plVar8,*(long *)PTR_DAT_06fb8628,3);
LAB_05d28908:
          (*(code *)*puVar4)(plVar8,puVar4[1]);
          in_stack_00000028 = uStack0000000000000008;
          in_stack_00000020 = in_stack_00000000;
          in_stack_00000030 = uStack0000000000000010;
          uStack0000000000000034 = uVar1;
          in_stack_00000038 = uVar2;
          FUN_05cc35ac(&stack0x00000040,&stack0x00000020,0);
          FUN_05cc35ac(&stack0x00000040,&stack0x00000060,0);
          *(ulong *)((long)unaff_x19 + 0x14) = CONCAT44(in_stack_00000058,uStack0000000000000054);
          *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(in_stack_00000050,uStack000000000000004c);
          unaff_x19[1] = CONCAT44(uStack000000000000004c,in_stack_00000048);
          *unaff_x19 = in_stack_00000040;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


