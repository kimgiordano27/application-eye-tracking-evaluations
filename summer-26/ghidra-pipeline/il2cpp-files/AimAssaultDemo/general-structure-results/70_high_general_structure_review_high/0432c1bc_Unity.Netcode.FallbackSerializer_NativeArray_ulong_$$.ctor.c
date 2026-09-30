/*
FUNCTION_NAME: Unity.Netcode.FallbackSerializer<NativeArray<ulong>>$$.ctor
ENTRY_POINT: 0432c1bc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0432c650) */
/* WARNING: Removing unreachable block (ram,0x0432c398) */

void Unity_Netcode_FallbackSerializer<NativeArray<ulong>>___ctor(void)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  
  lVar1 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03775678();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x48);
  if (lVar1 != 0) {
    FUN_059eb0a8(lVar1,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x60));
    lVar1 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03775678();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x60);
    if (lVar1 != 0) {
      FUN_045b99ec(lVar1,*unaff_x26);
      in_stack_00000058 = in_stack_00000008;
      in_stack_00000050 = in_stack_00000000;
      in_stack_00000060 = in_stack_00000010;
      while (uVar2 = FUN_05d6471c(&stack0x00000050,*unaff_x25), (uVar2 & 1) != 0) {
        if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        (**(code **)(in_stack_00000060 + 0x18))
                  (*(undefined8 *)(in_stack_00000060 + 0x40),
                   *(undefined8 *)(in_stack_00000060 + 0x28));
      }
      FUN_05d64718(&stack0x00000050,*unaff_x24);
      lVar1 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03775678();
      }
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      lVar1 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03775678();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x60);
      if (lVar1 != 0) {
        FUN_045b9518(lVar1,*unaff_x23);
        lVar1 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_03775678();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x58);
        if (lVar1 != 0) {
          FUN_059eb0a8(lVar1,*unaff_x22);
          lVar1 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_03775678();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x18);
          if ((lVar1 != 0) &&
             (lVar1 = FUN_059ead0c(lVar1,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x70)),
             lVar1 != 0)) {
            FUN_05648f14(lVar1,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x80));
            in_stack_00000038 = in_stack_00000008;
            in_stack_00000030 = in_stack_00000000;
            in_stack_00000040 = in_stack_00000010;
            while (uVar2 = FUN_05e12288(&stack0x00000030,
                                        *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xb0)),
                  (uVar2 & 1) != 0) {
              FUN_040ed9d4(in_stack_00000040,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xa8));
            }
            FUN_05e12284(&stack0x00000030,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xb8));
            lVar1 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
            if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
              lVar1 = FUN_03775678();
            }
            if (*(int *)(lVar1 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            lVar1 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
            if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
              lVar1 = FUN_03775678();
            }
            lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x18);
            if (lVar1 != 0) {
              FUN_059eb0a8(lVar1,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xc0));
              lVar1 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
              if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                lVar1 = FUN_03775678();
              }
              lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x20);
              if ((lVar1 != 0) &&
                 (lVar1 = FUN_059ead0c(lVar1,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xd0)),
                 lVar1 != 0)) {
                FUN_05648f14(&stack0x00000018,lVar1,
                             *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xe0));
                while (uVar2 = FUN_05e12288(&stack0x00000018,
                                            *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x110)),
                      (uVar2 & 1) != 0) {
                  FUN_040ed9d4(in_stack_00000028,
                               *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x108));
                }
                FUN_05e12284(&stack0x00000018,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x118))
                ;
                lVar1 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                  lVar1 = FUN_03775678();
                }
                if (*(int *)(lVar1 + 0xe4) == 0) {
                  thunk_FUN_03798b70();
                }
                lVar1 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
                if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                  lVar1 = FUN_03775678();
                }
                lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x20);
                if (lVar1 != 0) {
                  FUN_059eb0a8(lVar1,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x120));
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


