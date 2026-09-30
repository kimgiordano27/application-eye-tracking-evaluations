/*
FUNCTION_NAME: System.Collections.Generic.List.Enumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$Dispose
ENTRY_POINT: 05f4c3b4
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05f4c96c) */
/* WARNING: Removing unreachable block (ram,0x05f4c690) */

void System_Collections_Generic_List_Enumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__Dispose
               (undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack0000000000000000;
  undefined8 *puStack0000000000000008;
  long in_stack_00000010;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 *in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000078;
  
  uStack0000000000000000 = 0;
  puStack0000000000000008 = param_1;
  while (uVar1 = FUN_05fee16c(&stack0x00000050,*unaff_x23), (uVar1 & 1) != 0) {
    if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    (**(code **)(in_stack_00000060 + 0x18))
              (*(undefined8 *)(in_stack_00000060 + 0x40),*(undefined8 *)(in_stack_00000060 + 0x28));
  }
  FUN_05fee168(&stack0x00000050,*unaff_x22);
  lVar2 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x28);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_04980b34();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar2 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x28);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_04980b34();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x50);
  if (lVar2 != 0) {
    FUN_06511970(lVar2,*unaff_x21);
    lVar2 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x28);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04980b34();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x48);
    if (lVar2 != 0) {
      FUN_085f1414(lVar2,*(undefined8 *)
                          (*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x60));
      lVar2 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x28);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04980b34();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x60);
      if (lVar2 != 0) {
        FUN_06511e44(lVar2,*unaff_x24);
        in_stack_00000060 = in_stack_00000010;
        in_stack_00000058 = puStack0000000000000008;
        in_stack_00000050 = uStack0000000000000000;
        uStack0000000000000000 = 0;
        puStack0000000000000008 = &stack0x00000050;
        while (uVar1 = FUN_05fee16c(&stack0x00000050,*unaff_x23), (uVar1 & 1) != 0) {
          if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          (**(code **)(in_stack_00000060 + 0x18))
                    (*(undefined8 *)(in_stack_00000060 + 0x40),
                     *(undefined8 *)(in_stack_00000060 + 0x28));
        }
        FUN_05fee168(&stack0x00000050,*unaff_x22);
        lVar2 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x28);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_04980b34();
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        lVar2 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x28);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_04980b34();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x60);
        if (lVar2 != 0) {
          FUN_06511970(lVar2,*unaff_x21);
          lVar2 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x28);
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_04980b34();
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x58);
          if (lVar2 != 0) {
            FUN_085f1414(lVar2,*unaff_x20);
            lVar2 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x28);
            if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_04980b34();
            }
            lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
            if ((lVar2 != 0) &&
               (lVar2 = FUN_085f106c(lVar2,*(undefined8 *)
                                            (*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) +
                                            0x70)), lVar2 != 0)) {
              FUN_0795ca5c(lVar2,*(undefined8 *)
                                  (*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x80));
              in_stack_00000030 = uStack0000000000000000;
              in_stack_00000040 = in_stack_00000010;
              uStack0000000000000000 = 0;
              in_stack_00000038 = puStack0000000000000008;
              puStack0000000000000008 = &stack0x00000030;
              while (uVar1 = FUN_0608d250(&stack0x00000030,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) +
                                           0xb0)), (uVar1 & 1) != 0) {
                FUN_05ceb9b4(in_stack_00000040,
                             *(undefined8 *)
                              (*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0xa8));
              }
              FUN_0608d24c(&stack0x00000030,
                           *(undefined8 *)
                            (*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0xb8));
              lVar2 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x28);
              if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                lVar2 = FUN_04980b34();
              }
              if (*(int *)(lVar2 + 0xe4) == 0) {
                thunk_FUN_049a583c();
              }
              lVar2 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x28);
              if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                lVar2 = FUN_04980b34();
              }
              lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
              if (lVar2 != 0) {
                FUN_085f1414(lVar2,*(undefined8 *)
                                    (*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0xc0));
                lVar2 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x28);
                if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                  lVar2 = FUN_04980b34();
                }
                lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
                if ((lVar2 != 0) &&
                   (lVar2 = FUN_085f106c(lVar2,*(undefined8 *)
                                                (*(long *)(*(long *)(in_stack_00000078 + 0x20) +
                                                          0xc0) + 0xd0)), lVar2 != 0)) {
                  FUN_0795ca5c(&stack0x00000018,lVar2,
                               *(undefined8 *)
                                (*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0xe0));
                  uStack0000000000000000 = 0;
                  puStack0000000000000008 = (undefined8 *)&stack0x00000018;
                  while (uVar1 = FUN_0608d250(&stack0x00000018,
                                              *(undefined8 *)
                                               (*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0
                                                         ) + 0x110)), (uVar1 & 1) != 0) {
                    FUN_05ceb9b4(in_stack_00000028,
                                 *(undefined8 *)
                                  (*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x108));
                  }
                  FUN_0608d24c(&stack0x00000018,
                               *(undefined8 *)
                                (*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x118));
                  lVar2 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x28);
                  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                    lVar2 = FUN_04980b34();
                  }
                  if (*(int *)(lVar2 + 0xe4) == 0) {
                    thunk_FUN_049a583c();
                  }
                  lVar2 = *(long *)(*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) + 0x28);
                  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                    lVar2 = FUN_04980b34();
                  }
                  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
                  if (lVar2 != 0) {
                    FUN_085f1414(lVar2,*(undefined8 *)
                                        (*(long *)(*(long *)(in_stack_00000078 + 0x20) + 0xc0) +
                                        0x120));
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


