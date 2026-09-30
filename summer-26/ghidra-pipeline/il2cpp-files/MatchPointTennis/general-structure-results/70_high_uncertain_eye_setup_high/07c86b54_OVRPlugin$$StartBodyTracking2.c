/*
FUNCTION_NAME: OVRPlugin$$StartBodyTracking2
ENTRY_POINT: 07c86b54
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StartBodyTracking2(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong in_x9;
  long lVar6;
  int *piVar7;
  int *in_x10;
  long lVar8;
  long in_x11;
  long unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  undefined4 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  
  do {
    if (in_x11 == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
      goto LAB_07c86b88;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar2 = (undefined8 *)FUN_044822ac(unaff_x22,param_3,1);
                    /* try { // try from 07c86b74 to 07d86b7b has its CatchHandler @ 07c86fe4 */
LAB_07c86b88:
        uVar3 = (*(code *)*puVar2)(unaff_x22,unaff_w21,(long)&stack0x00000048 + 4,puVar2[1]);
        if ((uVar3 & 1) != 0) {
          lVar4 = *(long *)(unaff_x19 + 0x28);
                    /* try { // try from 07c86bac to 07d86baf has its CatchHandler @ 07c87028 */
                    /* try { // try from 07c86bb4 to 07d86bbf has its CatchHandler @ 07c8700c */
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          in_stack_000000d8 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
          in_stack_000000d0 = in_stack_00000050;
          in_stack_000000b8 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
          in_stack_000000b0 = in_stack_00000070;
                    /* try { // try from 07c86bdc to 07d86be3 has its CatchHandler @ 07c86ff0 */
          *(undefined8 *)(unaff_x26 + 0x34) = uStack0000000000000064;
          *(ulong *)(unaff_x26 + 0x2c) = CONCAT44(uStack0000000000000060,uStack000000000000005c);
          *(undefined8 *)(unaff_x26 + 0x14) = uStack0000000000000084;
          *(ulong *)(unaff_x26 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
                    /* try { // try from 07c86bf0 to 07d86bf7 has its CatchHandler @ 07c86fdc */
          lVar6 = *(long *)(lVar4 + 0x10);
          lVar8 = *unaff_x28;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uVar1 = *(uint *)(lVar4 + 0x18);
                    /* try { // try from 07c86c08 to 07d86c0b has its CatchHandler @ 07c87028 */
                    /* try { // try from 07c86c0c to 07d86c1b has its CatchHandler @ 07c86ff8 */
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            lVar6 = lVar6 + (long)(int)uVar1 * 0x40;
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar6 + 0x20) = unaff_w21;
            *(undefined4 *)(lVar6 + 0x24) = in_stack_00000048._4_4_;
            uVar5 = *(undefined8 *)(unaff_x26 + 0x2c);
                    /* try { // try from 07c86c28 to 07d86c33 has its CatchHandler @ 07c86ffc */
            *(undefined8 *)(lVar6 + 0x3c) = *(undefined8 *)(unaff_x26 + 0x34);
            *(undefined8 *)(lVar6 + 0x34) = uVar5;
            *(undefined8 *)(lVar6 + 0x30) = in_stack_000000d8;
            *(undefined8 *)(lVar6 + 0x28) = in_stack_00000050;
            uVar5 = *(undefined8 *)(unaff_x26 + 0xc);
            *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(unaff_x26 + 0x14);
            *(undefined8 *)(lVar6 + 0x50) = uVar5;
            *(undefined8 *)(lVar6 + 0x4c) = in_stack_000000b8;
            *(undefined8 *)(lVar6 + 0x44) = in_stack_00000070;
          }
          else {
                    /* try { // try from 07c86c48 to 07d86c53 has its CatchHandler @ 07c87000 */
            uVar9 = *(undefined8 *)(unaff_x26 + 0x2c);
                    /* try { // try from 07c86c54 to 07d86c5f has its CatchHandler @ 07c87008 */
            uVar11 = *(undefined8 *)(unaff_x26 + 0x14);
            uVar10 = *(undefined8 *)(unaff_x26 + 0xc);
            uVar5 = *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70);
            uStack00000000000000f4 = in_stack_00000048._4_4_;
            *(undefined8 *)((long)unaff_x29 + 0x14) = *(undefined8 *)(unaff_x26 + 0x34);
            *(undefined8 *)((long)unaff_x29 + 0xc) = uVar9;
            unaff_x29[1] = in_stack_000000d8;
            *unaff_x29 = in_stack_00000050;
            *(undefined8 *)((long)unaff_x24 + 0x14) = uVar11;
            *(undefined8 *)((long)unaff_x24 + 0xc) = uVar10;
            unaff_x24[1] = in_stack_000000b8;
            *unaff_x24 = in_stack_00000070;
            uStack00000000000000f0 = unaff_w21;
            FUN_05d482a4(lVar4,&stack0x000000f0,uVar5);
          }
        }
        do {
          do {
            uVar3 = FUN_0767900c(&stack0x00000090,*unaff_x27);
            unaff_w21 = in_stack_000000a0;
            if ((uVar3 & 1) == 0) {
              FUN_07679008(&stack0x00000090,*(undefined8 *)PTR_DAT_09f4db88);
              *(undefined4 *)(unaff_x19 + 0x20) = 1;
              FUN_07c86d80();
              lVar4 = *(long *)(unaff_x19 + 0x18);
              if (lVar4 != 0) {
                    /* try { // try from 07c86cb4 to 07d86ccf has its CatchHandler @ 07c86fc8 */
                (**(code **)(lVar4 + 0x18))
                          (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            lVar4 = *unaff_x20;
            uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar3 != 0) {
              piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *unaff_x23) {
                  puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 7) * 0x10 + 0x138);
                  goto LAB_07c86a58;
                }
                uVar3 = uVar3 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar3 != 0);
            }
            puVar2 = (undefined8 *)FUN_044822ac();
LAB_07c86a58:
            uVar3 = (*(code *)*puVar2)();
          } while ((uVar3 & 1) == 0);
          lVar4 = *unaff_x20;
          uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *unaff_x23) {
                puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 8) * 0x10 + 0x138);
                goto LAB_07c86ac0;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined8 *)FUN_044822ac();
LAB_07c86ac0:
          uVar3 = (*(code *)*puVar2)();
        } while ((uVar3 & 1) == 0);
        lVar4 = *unaff_x20;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x23) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_07c86b24;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_044822ac();
LAB_07c86b24:
        unaff_x22 = (long *)(*(code *)*puVar2)();
        if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        param_1 = *unaff_x22;
        param_3 = *unaff_x25;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
}


