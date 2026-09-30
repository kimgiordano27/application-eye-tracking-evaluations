/*
FUNCTION_NAME: OVRManager$$add_SpaceQueryResults
ENTRY_POINT: 05d62a04
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SpaceQueryResults(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar8;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000070;
  
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  uStack000000000000004c = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000054 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack000000000000002c = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000034 = 0;
  if ((unaff_x22 != 0) && (*(long *)(unaff_x22 + 0x20) != 0)) {
    uVar3 = FUN_06be6b04(*(long *)(unaff_x22 + 0x20),0);
    FUN_05cf0ff4(uVar3,0,0);
    uStack0000000000000028 = uStack0000000000000008;
    uStack0000000000000020 = in_stack_00000000;
    uStack0000000000000034 = uStack0000000000000010._4_4_;
    uVar1 = uStack0000000000000034;
    uStack0000000000000038 = uStack0000000000000010._8_4_;
    uVar2 = uStack0000000000000038;
    uStack000000000000002c = uStack000000000000000c;
    uStack0000000000000030 = uStack0000000000000010;
    FUN_05cede94();
    in_stack_00000068 = uStack0000000000000008;
    in_stack_00000060 = in_stack_00000000;
    in_stack_00000070 = uStack0000000000000010;
    plVar8 = *(long **)(unaff_x20 + 0x40);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_072ad988) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
            goto LAB_05d62ad4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_032937ac(plVar8,*(long *)PTR_DAT_072ad988,4);
LAB_05d62ad4:
      lVar5 = (*(code *)*puVar4)(plVar8,puVar4[1]);
      if ((lVar5 != 0) && (plVar8 = *(long **)(lVar5 + 0x28), plVar8 != (long *)0x0)) {
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_072ada08) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x12) * 0x10 + 0x138);
              goto LAB_05d62b44;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_032937ac(plVar8,*(long *)PTR_DAT_072ada08,0x12);
LAB_05d62b44:
        (*(code *)*puVar4)(plVar8,&stack0x00000040,puVar4[1]);
        plVar8 = *(long **)(unaff_x20 + 0x40);
        if (plVar8 != (long *)0x0) {
          lVar5 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_072b0ac0) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
                goto LAB_05d62bb4;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_032937ac(plVar8,*(long *)PTR_DAT_072b0ac0,3);
LAB_05d62bb4:
          (*(code *)*puVar4)(plVar8,puVar4[1]);
          uStack0000000000000028 = uStack0000000000000008;
          uStack0000000000000020 = in_stack_00000000;
          uStack0000000000000030 = uStack0000000000000010;
          uStack0000000000000034 = uVar1;
          uStack0000000000000038 = uVar2;
          FUN_05d0541c(&stack0x00000040,&stack0x00000020,0);
          FUN_05d0541c(&stack0x00000040,&stack0x00000060,0);
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
  FUN_032d5ee8();
}


