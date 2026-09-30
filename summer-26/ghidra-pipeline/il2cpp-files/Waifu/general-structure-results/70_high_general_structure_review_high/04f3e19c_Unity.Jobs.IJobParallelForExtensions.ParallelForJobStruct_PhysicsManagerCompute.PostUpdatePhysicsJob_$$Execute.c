/*
FUNCTION_NAME: Unity.Jobs.IJobParallelForExtensions.ParallelForJobStruct<PhysicsManagerCompute.PostUpdatePhysicsJob>$$Execute
ENTRY_POINT: 04f3e19c
PROGRAM: Waifu-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Jobs_IJobParallelForExtensions_ParallelForJobStruct<PhysicsManagerCompute_PostUpdatePhysicsJob>__Execute
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  lVar3 = FUN_0338f618();
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
  if (lVar3 != 0) {
    FUN_05c75cec(lVar3,*unaff_x19,unaff_x19[1],DAT_083e0be0);
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0338f618();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0338f618();
    }
    if (**(long **)(lVar3 + 0xb8) != 0) {
      FUN_044f4048(**(long **)(lVar3 + 0xb8),*unaff_x19,unaff_x19[1],DAT_083ec650);
      lVar3 = *unaff_x20;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0338f618();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0338f618();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
      if (lVar3 != 0) {
        lVar4 = *unaff_x20;
        uVar1 = *unaff_x19;
        uVar2 = unaff_x19[1];
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0338f618();
        }
        FUN_05c75cec(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x280));
        lVar3 = *unaff_x20;
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0338f618();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0338f618();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
        if (lVar3 != 0) {
          lVar4 = *unaff_x20;
          uVar1 = *unaff_x19;
          uVar2 = unaff_x19[1];
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0338f618();
          }
          uVar5 = FUN_05c76328(lVar3,uVar1,uVar2,&stack0x00000018,
                               *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x288));
          if ((uVar5 & 1) != 0) {
            lVar3 = *unaff_x20;
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0338f618();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0338f618();
            }
            if (*(int *)(lVar3 + 0xe0) == 0) {
              FUN_033b9870();
            }
            lVar3 = *unaff_x20;
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0338f618();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0338f618();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
            if (lVar3 == 0) goto LAB_04f3e5e8;
            lVar4 = *unaff_x20;
            uVar1 = *unaff_x19;
            uVar2 = unaff_x19[1];
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_0338f618();
            }
            FUN_05c75cec(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x298));
            lVar3 = in_stack_00000018;
            if (in_stack_00000018 == 0) goto LAB_04f3e5e8;
            uVar1 = *unaff_x19;
            uVar2 = unaff_x19[1];
            if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
              FUN_0338f618();
            }
            (**(code **)(lVar3 + 0x18))
                      (*(undefined8 *)(lVar3 + 0x40),uVar1,uVar2,*(undefined8 *)(lVar3 + 0x28));
          }
          lVar3 = *unaff_x20;
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0338f618();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0338f618();
          }
          if (*(int *)(lVar3 + 0xe0) == 0) {
            FUN_033b9870();
          }
          lVar3 = *unaff_x20;
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0338f618();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0338f618();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
          if (lVar3 != 0) {
            lVar4 = *unaff_x20;
            uVar1 = *unaff_x19;
            uVar2 = unaff_x19[1];
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_0338f618();
            }
            uVar5 = FUN_05c76328(lVar3,uVar1,uVar2,&stack0x00000010,
                                 *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2b0));
            if ((uVar5 & 1) != 0) {
              lVar3 = *unaff_x20;
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0338f618();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0338f618();
              }
              if (*(int *)(lVar3 + 0xe0) == 0) {
                FUN_033b9870();
              }
              lVar3 = *unaff_x20;
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0338f618();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0338f618();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
              if (lVar3 == 0) goto LAB_04f3e5e8;
              lVar4 = *unaff_x20;
              uVar1 = *unaff_x19;
              uVar2 = unaff_x19[1];
              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_0338f618();
              }
              FUN_05c75cec(lVar3,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x2b8));
              lVar3 = in_stack_00000010;
              if (in_stack_00000010 == 0) goto LAB_04f3e5e8;
              uVar1 = *unaff_x19;
              uVar2 = unaff_x19[1];
              if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
                FUN_0338f618();
              }
              (**(code **)(lVar3 + 0x18))
                        (*(undefined8 *)(lVar3 + 0x40),uVar1,uVar2,*(undefined8 *)(lVar3 + 0x28));
            }
            lVar3 = *unaff_x20;
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0338f618();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0338f618();
            }
            if (*(int *)(lVar3 + 0xe0) == 0) {
              FUN_033b9870();
            }
            lVar3 = *unaff_x20;
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0338f618();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
            if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0338f618();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x58);
            if (lVar3 != 0) {
              uVar5 = FUN_05c76328(lVar3,*unaff_x19,unaff_x19[1],&stack0x00000008,DAT_083e0bb8);
              if ((uVar5 & 1) == 0) {
                return;
              }
              lVar3 = *unaff_x20;
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0338f618();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0338f618();
              }
              if (*(int *)(lVar3 + 0xe0) == 0) {
                FUN_033b9870();
              }
              lVar3 = *unaff_x20;
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0338f618();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0338f618();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x58);
              if ((lVar3 != 0) &&
                 (FUN_05c75cec(lVar3,*unaff_x19,unaff_x19[1],DAT_083e0ba8), in_stack_00000008 != 0))
              {
                (**(code **)(in_stack_00000008 + 0x18))
                          (*(undefined8 *)(in_stack_00000008 + 0x40),*unaff_x19,unaff_x19[1],
                           *(undefined8 *)(in_stack_00000008 + 0x28));
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_04f3e5e8:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


