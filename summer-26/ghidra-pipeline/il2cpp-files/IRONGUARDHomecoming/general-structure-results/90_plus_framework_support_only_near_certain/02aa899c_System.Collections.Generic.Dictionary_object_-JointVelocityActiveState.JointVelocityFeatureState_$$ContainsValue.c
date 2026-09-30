/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<object,-JointVelocityActiveState.JointVelocityFeatureState>$$ContainsValue
ENTRY_POINT: 02aa899c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined4
System_Collections_Generic_Dictionary<object,_JointVelocityActiveState_JointVelocityFeatureState>__ContainsValue
          (undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined4 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long unaff_x26;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x26 + 0x28);
  bVar3 = DAT_0483104b;
  *(long *)(unaff_x29 + -0x38) = param_2;
  *(undefined8 *)(unaff_x29 + -0x30) = param_1;
  if ((bVar3 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483104b = 1;
  }
  plVar7 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  uVar1 = *(uint *)(plVar7[0x15] + 0xfc);
  puVar14 = (undefined8 *)
            (&stack0x00000000 + -((ulong)*(uint *)(plVar7[0xf] + 0xfc) + 0xf & 0x1fffffff0));
  plVar15 = (long *)((long)puVar14 - ((ulong)*(uint *)(plVar7[0x11] + 0xfc) + 0xf & 0x1fffffff0));
  plVar16 = (long *)((long)plVar15 - ((ulong)*(uint *)(plVar7[0x13] + 0xfc) + 0xf & 0x1fffffff0));
  lVar13 = (long)plVar16 - ((ulong)uVar1 + 0xf & 0x1fffffff0);
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(long *)(unaff_x29 + -0x48) = unaff_x29 + -0x38;
  *(long *)(unaff_x29 + -0x40) = unaff_x29 + -0x30;
  piVar4 = (int *)thunk_FUN_01ee7388(param_1,*(undefined8 *)(*plVar7 + 0x80));
  if (*piVar4 == 0) {
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x30),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x30),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20)
                                                     + 0xc0) + 0x80) + 0x60);
    plVar7 = (long *)*puVar5;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar4 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02aa8b44;
        }
        uVar11 = uVar11 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar7,lVar8,0);
LAB_02aa8b44:
    uVar6 = (*(code *)*puVar5)(plVar7,puVar5[1]);
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x30),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x80
                          ) + 0x160,uVar6);
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x30),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x30),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20)
                                                     + 0xc0) + 0x80) + 0xa0);
    plVar7 = (long *)*puVar5;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar4 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02aa8c1c;
        }
        uVar11 = uVar11 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar7,lVar8,0);
LAB_02aa8c1c:
    uVar6 = (*(code *)*puVar5)(plVar7,puVar5[1]);
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x30),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x80
                          ) + 0x180,uVar6);
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x30),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x80),
                 0xfffffffc);
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x30),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20)
                                                     + 0xc0) + 0x80) + 0xe0);
    plVar7 = (long *)*puVar5;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x50);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar4 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02aa8cf4;
        }
        uVar11 = uVar11 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar7,lVar8,0);
LAB_02aa8cf4:
    uVar6 = (*(code *)*puVar5)(plVar7,puVar5[1]);
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x30),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x80
                          ) + 0x1a0,uVar6);
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x30),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x80),
                 0xfffffffb);
LAB_02aa8d3c:
    puVar5 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x30),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20)
                                                     + 0xc0) + 0x80) + 0x160);
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    plVar7 = (long *)*puVar5;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar4 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02aa8db4;
        }
        uVar11 = uVar11 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02aa8db4:
    uVar11 = (*(code *)*puVar5)(plVar7,puVar5[1]);
    if ((uVar11 & 1) != 0) {
      puVar5 = (undefined8 *)
               thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x30),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) +
                                                                 0x20) + 0xc0) + 0x80) + 0x180);
      plVar7 = (long *)*puVar5;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = *plVar7;
      lVar8 = *(long *)puVar2;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar4 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_02aa8e34;
          }
          uVar11 = uVar11 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar7,lVar8,0);
LAB_02aa8e34:
      uVar11 = (*(code *)*puVar5)(plVar7,puVar5[1]);
      if ((uVar11 & 1) != 0) {
        puVar5 = (undefined8 *)
                 thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x30),
                                    *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) +
                                                                   0x20) + 0xc0) + 0x80) + 0x1a0);
        plVar7 = (long *)*puVar5;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar9 = *plVar7;
        lVar8 = *(long *)puVar2;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar4 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == lVar8) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_02aa8eb4;
            }
            uVar11 = uVar11 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar7,lVar8,0);
LAB_02aa8eb4:
        uVar11 = (*(code *)*puVar5)(plVar7,puVar5[1]);
        if ((uVar11 & 1) != 0) {
          plVar7 = (long *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x30),
                                              *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 +
                                                                                       -0x38) + 0x20
                                                                             ) + 0xc0) + 0x80) +
                                              0x120);
          lVar8 = *plVar7;
          puVar5 = (undefined8 *)
                   thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x30),
                                      *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) +
                                                                     0x20) + 0xc0) + 0x80) + 0x160);
          plVar7 = (long *)*puVar5;
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x30)
          ;
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01ecaf44(lVar9);
          }
          lVar10 = *plVar7;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar4 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar4 + -2) == lVar9) {
                lVar9 = lVar10 + (long)*piVar4 * 0x10 + 0x138;
                goto LAB_02aa9054;
              }
              uVar11 = uVar11 - 1;
              piVar4 = piVar4 + 4;
            } while (uVar11 != 0);
          }
          lVar9 = FUN_01ecb238(plVar7,lVar9,0);
LAB_02aa9054:
          *(undefined8 **)(unaff_x29 + -0x28) = puVar14;
          lVar9 = *(long *)(lVar9 + 8);
          (**(code **)(lVar9 + 0x10))
                    (*(undefined8 *)(lVar9 + 8),lVar9,plVar7,unaff_x29 + -0x28,puVar14);
          puVar5 = (undefined8 *)
                   thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x30),
                                      *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) +
                                                                     0x20) + 0xc0) + 0x80) + 0x180);
          plVar7 = (long *)*puVar5;
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x48)
          ;
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01ecaf44(lVar9);
          }
          lVar10 = *plVar7;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar4 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar4 + -2) == lVar9) {
                lVar9 = lVar10 + (long)*piVar4 * 0x10 + 0x138;
                goto LAB_02aa9100;
              }
              uVar11 = uVar11 - 1;
              piVar4 = piVar4 + 4;
            } while (uVar11 != 0);
          }
          lVar9 = FUN_01ecb238(plVar7,lVar9,0);
LAB_02aa9100:
          *(long **)(unaff_x29 + -0x28) = plVar15;
          lVar9 = *(long *)(lVar9 + 8);
          (**(code **)(lVar9 + 0x10))
                    (*(undefined8 *)(lVar9 + 8),lVar9,plVar7,unaff_x29 + -0x28,plVar15);
          puVar5 = (undefined8 *)
                   thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x30),
                                      *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) +
                                                                     0x20) + 0xc0) + 0x80) + 0x1a0);
          plVar7 = (long *)*puVar5;
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x60)
          ;
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01ecaf44(lVar9);
          }
          lVar10 = *plVar7;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar4 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar4 + -2) == lVar9) {
                lVar9 = lVar10 + (long)*piVar4 * 0x10 + 0x138;
                goto LAB_02aa91ac;
              }
              uVar11 = uVar11 - 1;
              piVar4 = piVar4 + 4;
            } while (uVar11 != 0);
          }
          lVar9 = FUN_01ecb238(plVar7,lVar9,0);
LAB_02aa91ac:
          *(long **)(unaff_x29 + -0x28) = plVar16;
          lVar9 = *(long *)(lVar9 + 8);
          (**(code **)(lVar9 + 0x10))
                    (*(undefined8 *)(lVar9 + 8),lVar9,plVar7,unaff_x29 + -0x28,plVar16);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar9 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0);
          puVar5 = *(undefined8 **)(lVar9 + 0xa0);
          if (-1 < *(int *)(*(long *)(lVar9 + 0x78) + 0x28)) {
            puVar14 = (undefined8 *)*puVar14;
          }
          uVar6 = *puVar5;
          if (-1 < *(int *)(*(long *)(lVar9 + 0x88) + 0x28)) {
            plVar15 = (long *)*plVar15;
          }
          if (-1 < *(int *)(*(long *)(lVar9 + 0x98) + 0x28)) {
            plVar16 = (long *)*plVar16;
          }
          *(undefined8 **)(unaff_x29 + -0x28) = puVar14;
          *(long **)(unaff_x29 + -0x20) = plVar15;
          *(long **)(unaff_x29 + -0x18) = plVar16;
          *(long *)(unaff_x29 + -0x10) = lVar13;
          (*(code *)puVar5[2])(uVar6,puVar5,lVar8,unaff_x29 + -0x28,lVar13);
          FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x30),
                       *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0)
                                + 0x80) + 0x20,lVar13,(ulong)uVar1);
          uVar12 = 1;
          FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x30),
                       *(undefined8 *)
                        (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x80),
                       1);
          goto LAB_02aa9018;
        }
      }
    }
    (*(code *)**(undefined8 **)
                (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 8))
              (*(undefined8 *)(unaff_x29 + -0x30));
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x30),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x80
                          ) + 0x1a0,0);
    (*(code *)**(undefined8 **)
                (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x10))
              (*(undefined8 *)(unaff_x29 + -0x30));
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x30),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x80
                          ) + 0x180,0);
    (*(code *)**(undefined8 **)
                (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x18))
              (*(undefined8 *)(unaff_x29 + -0x30));
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x30),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x80
                          ) + 0x160,0);
  }
  else if (*piVar4 == 1) {
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x30),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x80),
                 0xfffffffb);
    goto LAB_02aa8d3c;
  }
  uVar12 = 0;
LAB_02aa9018:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


