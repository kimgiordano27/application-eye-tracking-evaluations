/*
FUNCTION_NAME: FUN_05535754
ENTRY_POINT: 05535754
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05536838) */
/* WARNING: Removing unreachable block (ram,0x055366f8) */
/* WARNING: Removing unreachable block (ram,0x05535ec4) */
/* WARNING: Removing unreachable block (ram,0x0553610c) */
/* WARNING: Removing unreachable block (ram,0x05536904) */

long * FUN_05535754(long param_1,long *param_2,byte param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  undefined8 uVar22;
  long lVar23;
  long local_88;
  long local_70;
  long *local_68;
  
  if ((DAT_06dbb1b4 & 1) == 0) {
    FUN_02d965b8(System_Action_var);
    FUN_02d965b8(UnityEngine_XR_ARCore_ARCoreCameraSubsystem_var);
    FUN_02d965b8(PTR_DAT_06a1cbb8);
    FUN_02d965b8(UnityEngine_XR_ARCore_ARCoreEnvironmentProbeSubsystem_var);
    FUN_02d965b8(UnityEngine_XR_ARCore_ARCoreFaceSubsystem_var);
    FUN_02d965b8(UnityEngine_XR_ARCore_ARCoreImageTrackingSubsystem_var);
    FUN_02d965b8(UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var);
    FUN_02d965b8(Unity_Services_Core_Scheduler_Internal_ActionScheduler_var);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(PTR_DAT_06a1c920);
    FUN_02d965b8(PTR_DAT_06a1c928);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(System_Action<T>_var);
    FUN_02d965b8(System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10>_var);
    FUN_02d965b8(System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11>_var);
    FUN_02d965b8(System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12>_var);
    FUN_02d965b8(System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12,_T13>_var);
    FUN_02d965b8(PTR_DAT_069fbb48);
    FUN_02d965b8(UnityEngine_XR_ARCore_ARCoreRaycastSubsystem_var);
    FUN_02d965b8(PTR_DAT_06a1c970);
    DAT_06dbb1b4 = 1;
  }
  puVar17 = PTR_DAT_069fb9c0;
  local_70 = 0;
  local_68 = (long *)0x0;
  if (param_1 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar22 = thunk_FUN_02dd3144();
    puVar17 = PTR_DAT_06a1aea0;
  }
  else {
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar10 = FUN_055006dc(param_2,0,0);
    puVar2 = PTR_DAT_06a1c970;
    if ((uVar10 & 1) == 0) {
      uVar22 = *(undefined8 *)UnityEngine_XR_ARCore_ARCoreRaycastSubsystem_var;
      if (*(int *)(*(long *)(puVar17 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar22 = FUN_054f73b4(uVar22,0);
      uVar10 = FUN_055006dc(param_2,uVar22,0);
      plVar16 = (long *)0x0;
      if ((uVar10 & 1) == 0) {
        plVar16 = param_2;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      puVar3 = Unity_Services_Core_Scheduler_Internal_ActionScheduler_var;
      plVar11 = (long *)FUN_05535590(param_1,plVar16,0);
      if ((param_3 & 1) == 0) {
        if (plVar11 == (long *)0x0) goto LAB_05536834;
        lVar12 = *plVar11;
        uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar10 != 0) {
          piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
              puVar13 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_055359ac;
            }
            uVar10 = uVar10 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar10 != 0);
        }
        puVar13 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar3,0);
LAB_055359ac:
        iVar8 = (*(code *)*puVar13)(plVar11,puVar13[1]);
        puVar5 = System_Action<T>_var;
        if (iVar8 == 1) {
          lVar12 = *plVar11;
          uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar10 != 0) {
            piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)System_Action<T>_var) {
                puVar13 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_0553611c;
              }
              uVar10 = uVar10 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar10 != 0);
          }
          puVar13 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)System_Action<T>_var,0);
LAB_0553611c:
          lVar12 = (*(code *)*puVar13)(plVar11,0,puVar13[1]);
          if (lVar12 == 0) {
            thunk_FUN_02dfd288(UnityEngine_XR_ARCore_ARCoreSessionSubsystem_var);
            uVar22 = thunk_FUN_02dd3144();
            uVar15 = thunk_FUN_02dfd288(
                                       System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12,_T13,_T14>_var
                                       );
            FUN_0541d8a8(uVar22,uVar15,0);
            goto LAB_055368ec;
          }
          if (*(int *)(*(long *)(puVar17 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar10 = FUN_05501380(plVar16,0,0);
          if ((uVar10 & 1) == 0) {
            plVar16 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_06a1cbb8,1);
            lVar14 = *plVar11;
            lVar12 = *(long *)puVar5;
            uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar10 != 0) {
              piVar21 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == lVar12) goto LAB_0553667c;
                uVar10 = uVar10 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar10 != 0);
            }
          }
          else {
            lVar12 = *plVar11;
            uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar10 != 0) {
              piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)puVar5) {
                  puVar13 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_05536584;
                }
                uVar10 = uVar10 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar10 != 0);
            }
            puVar13 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar5,0);
LAB_05536584:
            lVar12 = (*(code *)*puVar13)(plVar11,0,puVar13[1]);
            if ((lVar12 == 0) || (uVar22 = FUN_05429a34(lVar12,0), plVar16 == (long *)0x0))
            goto LAB_05536834;
            uVar10 = (**(code **)(*plVar16 + 0x328))
                               (plVar16,uVar22,*(undefined8 *)(*plVar16 + 0x330));
            if ((uVar10 & 1) == 0) {
              lVar14 = *(long *)System_Action_var;
              lVar12 = *(long *)(lVar14 + 0x38);
              if (lVar12 == 0) {
                FUN_02dcfd74(lVar14);
                lVar12 = *(long *)(lVar14 + 0x38);
              }
              lVar12 = *(long *)(lVar12 + 0x10);
              if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
                lVar12 = FUN_02dcfd18();
              }
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
              if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
                lVar12 = FUN_02dcfd18();
              }
              return (long *)**(undefined8 **)(lVar12 + 0xb8);
            }
            plVar16 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_06a1cbb8,1);
            lVar14 = *plVar11;
            lVar12 = *(long *)puVar5;
            uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar10 != 0) {
              piVar21 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == lVar12) goto LAB_0553667c;
                uVar10 = uVar10 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar10 != 0);
            }
          }
          puVar13 = (undefined8 *)FUN_02dd004c(plVar11,lVar12,0);
          goto LAB_05536688;
        }
        bVar6 = false;
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        lVar12 = FUN_05534de8(param_1);
        bVar6 = (bool)(lVar12 != 0 & param_3);
      }
      if (*(int *)(*(long *)(puVar17 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar10 = FUN_05501380(plVar16,0,0);
      if ((uVar10 & 1) != 0) {
        if (plVar16 == (long *)0x0) goto LAB_05536834;
        bVar7 = FUN_0550258c(plVar16,0);
        if ((bVar6 & bVar7) == 1) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          lVar12 = FUN_05535154(plVar16);
          if (lVar12 == 0) goto LAB_05536834;
          bVar6 = *(char *)(lVar12 + 0x15) != '\0';
        }
      }
      puVar2 = PTR_DAT_069fbb48;
      if (plVar11 != (long *)0x0) {
        lVar12 = *plVar11;
        uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar10 != 0) {
          piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
              puVar13 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
              goto Oculus_Avatar2_OvrAvatarPrimitive_MeshInfo__MeshVertsComplete;
            }
            uVar10 = uVar10 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar10 != 0);
        }
        puVar13 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar3,0);
Oculus_Avatar2_OvrAvatarPrimitive_MeshInfo__MeshVertsComplete:
        uVar9 = (*(code *)*puVar13)(plVar11,puVar13[1]);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar2);
        }
        uVar9 = FUN_054e9108(uVar9,0x10,0);
        if (bVar6 == false) {
          if (*(int *)(*(long *)(puVar17 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar10 = FUN_055006dc(plVar16,0,0);
          if ((uVar10 & 1) == 0) {
            lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                         System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12,_T13>_var
                                       );
            FUN_0400f9fc(lVar12,uVar9,
                         *(undefined8 *)
                          System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12>_var);
            lVar14 = *plVar11;
            uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar10 != 0) {
              piVar21 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06a1c920) {
                  puVar13 = (undefined8 *)(lVar14 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_0553638c;
                }
                uVar10 = uVar10 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar10 != 0);
            }
            puVar13 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_06a1c920,0);
LAB_0553638c:
            plVar11 = (long *)(*(code *)*puVar13)(plVar11,puVar13[1]);
            puVar3 = System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10>_var;
            puVar2 = PTR_DAT_06a1c928;
            puVar17 = PTR_DAT_069fbff8;
joined_r0x055363a4:
            do {
              local_68 = plVar11;
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar14 = *plVar11;
              uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar10 != 0) {
                piVar21 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)puVar17) {
                    puVar13 = (undefined8 *)(lVar14 + (long)*piVar21 * 0x10 + 0x138);
                    goto LAB_05536410;
                  }
                  uVar10 = uVar10 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar10 != 0);
              }
              puVar13 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar17,0);
LAB_05536410:
              uVar10 = (*(code *)*puVar13)(plVar11,puVar13[1]);
              plVar11 = local_68;
              if ((uVar10 & 1) == 0) {
                if (local_68 == (long *)0x0) goto joined_r0x055367f4;
                lVar14 = *local_68;
                uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar10 == 0) goto Oculus_Avatar2_OvrAvatarPrimitive_MeshInfo__SetNormalsBuffer;
                piVar21 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                goto LAB_05536550;
              }
              if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar14 = *local_68;
              uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar10 != 0) {
                piVar21 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
                    puVar13 = (undefined8 *)(lVar14 + (long)*piVar21 * 0x10 + 0x138);
                    goto LAB_05536474;
                  }
                  uVar10 = uVar10 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar10 != 0);
              }
              puVar13 = (undefined8 *)FUN_02dd004c(local_68,*(long *)puVar2,0);
LAB_05536474:
              lVar14 = (*(code *)*puVar13)(plVar11,puVar13[1]);
              if (lVar14 == 0) {
                thunk_FUN_02dfd288(UnityEngine_XR_ARCore_ARCoreSessionSubsystem_var);
                uVar22 = thunk_FUN_02dd3144();
                uVar15 = thunk_FUN_02dfd288(
                                           System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12,_T13,_T14>_var
                                           );
                FUN_0541d8a8(uVar22,uVar15,0);
                uVar15 = thunk_FUN_02dfd288(
                                           System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12,_T13,_T14,_T15>_var
                                           );
                    /* WARNING: Subroutine does not return */
                FUN_02d96724(uVar22,uVar15);
              }
              uVar22 = FUN_05429a34(lVar14,0);
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860(uVar22,uVar22);
              }
              uVar10 = (**(code **)(*plVar16 + 0x328))
                                 (plVar16,uVar22,*(undefined8 *)(*plVar16 + 0x330));
              plVar11 = local_68;
            } while ((uVar10 & 1) == 0);
            if (lVar12 != 0) {
              lVar18 = *(long *)(lVar12 + 0x10);
              lVar23 = *(long *)puVar3;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar18 != 0) {
                uVar1 = *(uint *)(lVar12 + 0x18);
                if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                  *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                  plVar11 = (long *)(lVar18 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar11 = lVar14;
                  LeanTween__value(plVar11,lVar14);
                  plVar11 = local_68;
                }
                else {
                  FUN_040101ec(lVar12,lVar14,
                               *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
                  plVar11 = local_68;
                }
                goto joined_r0x055363a4;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar12 = *plVar11;
          uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar10 != 0) {
            piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06a1c920) {
                puVar13 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_055361ec;
              }
              uVar10 = uVar10 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar10 != 0);
          }
          puVar13 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_06a1c920,0);
LAB_055361ec:
          local_68 = (long *)(*(code *)*puVar13)(plVar11,puVar13[1]);
          puVar2 = PTR_DAT_06a1c928;
          puVar17 = PTR_DAT_069fbff8;
          do {
            plVar16 = local_68;
            if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar12 = *local_68;
            uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar10 != 0) {
              piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)puVar17) {
                  puVar13 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_05536268;
                }
                uVar10 = uVar10 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar10 != 0);
            }
            puVar13 = (undefined8 *)FUN_02dd004c(local_68,*(long *)puVar17,0);
LAB_05536268:
            uVar10 = (*(code *)*puVar13)(plVar16,puVar13[1]);
            plVar16 = local_68;
            if ((uVar10 & 1) == 0) {
              if (local_68 == (long *)0x0) goto LAB_055366ec;
              lVar12 = *local_68;
              uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar10 == 0) goto LAB_05536370;
              piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              goto LAB_05536358;
            }
            if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar12 = *local_68;
            uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar10 != 0) {
              piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
                  puVar13 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_055362cc;
                }
                uVar10 = uVar10 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar10 != 0);
            }
            puVar13 = (undefined8 *)FUN_02dd004c(local_68,*(long *)puVar2,0);
LAB_055362cc:
            lVar12 = (*(code *)*puVar13)(plVar16,puVar13[1]);
            if (lVar12 == 0) {
              thunk_FUN_02dfd288(UnityEngine_XR_ARCore_ARCoreSessionSubsystem_var);
              uVar22 = thunk_FUN_02dd3144();
              uVar15 = thunk_FUN_02dfd288(
                                         System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12,_T13,_T14>_var
                                         );
              FUN_0541d8a8(uVar22,uVar15,0);
              uVar15 = thunk_FUN_02dfd288(
                                         System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12,_T13,_T14,_T15>_var
                                         );
                    /* WARNING: Subroutine does not return */
              FUN_02d96724(uVar22,uVar15);
            }
          } while( true );
        }
        lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                     UnityEngine_XR_ARCore_ARCoreOcclusionSubsystem_var);
        FUN_04e9288c(lVar14,uVar9,
                     *(undefined8 *)UnityEngine_XR_ARCore_ARCoreImageTrackingSubsystem_var);
        lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                     System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12,_T13>_var
                                   );
        FUN_0400f9fc(lVar12,uVar9,
                     *(undefined8 *)
                      System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12>_var);
        puVar5 = UnityEngine_XR_ARCore_ARCoreFaceSubsystem_var;
        puVar3 = PTR_DAT_06a1c928;
        puVar2 = PTR_DAT_069fbff8;
        iVar8 = 0;
        local_88 = param_1;
        do {
          lVar18 = *plVar11;
          uVar10 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar10 != 0) {
            piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_06a1c920) {
                puVar13 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_05535bc8;
              }
              uVar10 = uVar10 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar10 != 0);
          }
          puVar13 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_06a1c920,0);
LAB_05535bc8:
          plVar11 = (long *)(*(code *)*puVar13)(plVar11,puVar13[1]);
joined_r0x05535be4:
          local_68 = plVar11;
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar18 = *plVar11;
          uVar10 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar10 != 0) {
            piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
                puVar13 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_05535c34;
              }
              uVar10 = uVar10 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar10 != 0);
          }
          puVar13 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar2,0);
LAB_05535c34:
          uVar10 = (*(code *)*puVar13)(plVar11,puVar13[1]);
          plVar11 = local_68;
          if ((uVar10 & 1) != 0) {
            if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar18 = *local_68;
            uVar10 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar10 != 0) {
              piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
                  puVar13 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_05535c98;
                }
                uVar10 = uVar10 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar10 != 0);
            }
            puVar13 = (undefined8 *)FUN_02dd004c(local_68,*(long *)puVar3,0);
LAB_05535c98:
            lVar18 = (*(code *)*puVar13)(plVar11,puVar13[1]);
            if (lVar18 == 0) {
              thunk_FUN_02dfd288(UnityEngine_XR_ARCore_ARCoreSessionSubsystem_var);
              uVar22 = thunk_FUN_02dd3144();
              uVar15 = thunk_FUN_02dfd288(
                                         System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12,_T13,_T14>_var
                                         );
              FUN_0541d8a8(uVar22,uVar15,0);
              uVar15 = thunk_FUN_02dfd288(
                                         System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12,_T13,_T14,_T15>_var
                                         );
                    /* WARNING: Subroutine does not return */
              FUN_02d96724(uVar22,uVar15);
            }
            uVar22 = FUN_05429a34(lVar18,0);
            if (*(int *)(*(long *)(puVar17 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar10 = FUN_05501380(plVar16,0,0);
            if ((uVar10 & 1) != 0) goto code_r0x05535ce0;
            goto LAB_05535d00;
          }
          if (local_68 != (long *)0x0) {
            lVar18 = *local_68;
            uVar10 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar10 != 0) {
              piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_069fbff0) {
                  puVar13 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_05535eac;
                }
                uVar10 = uVar10 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar10 != 0);
            }
            puVar13 = (undefined8 *)FUN_02dd004c(local_68,*(long *)PTR_DAT_069fbff0,0);
LAB_05535eac:
            (*(code *)*puVar13)(plVar11,puVar13[1]);
          }
          if (*(int *)(*(long *)PTR_DAT_06a1c970 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          local_88 = FUN_05534de8(local_88);
          if (local_88 == 0) goto joined_r0x055367f4;
          if (*(int *)(*(long *)PTR_DAT_06a1c970 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          iVar8 = iVar8 + 1;
          plVar11 = (long *)FUN_05535590(local_88,plVar16,1);
        } while (plVar11 != (long *)0x0);
      }
LAB_05536834:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar22 = thunk_FUN_02dd3144();
    puVar17 = PTR_DAT_06a1cdc8;
  }
  uVar15 = thunk_FUN_02dfd288(puVar17);
  FUN_0544bf54(uVar22,uVar15,0);
LAB_055368ec:
  uVar15 = thunk_FUN_02dfd288(
                             System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12,_T13,_T14,_T15>_var
                             );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar22,uVar15);
LAB_0553667c:
  puVar13 = (undefined8 *)(lVar14 + (long)*piVar21 * 0x10 + 0x138);
LAB_05536688:
  lVar12 = (*(code *)*puVar13)(plVar11,0,puVar13[1]);
  if (plVar16 != (long *)0x0) {
    if ((lVar12 != 0) &&
       (lVar14 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)(*plVar16 + 0x40)), lVar14 == 0)) {
      uVar22 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar22,0);
    }
    if ((int)plVar16[3] != 0) {
      plVar16[4] = lVar12;
      LeanTween__value(plVar16 + 4,lVar12);
      return plVar16;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  goto LAB_05536834;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar21 = piVar21 + 4;
    if (uVar10 == 0) break;
LAB_05536550:
    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar13 = (undefined8 *)(lVar14 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_055367e4;
    }
  }
Oculus_Avatar2_OvrAvatarPrimitive_MeshInfo__SetNormalsBuffer:
  puVar13 = (undefined8 *)FUN_02dd004c(local_68,*(long *)PTR_DAT_069fbff0,0);
LAB_055367e4:
  (*(code *)*puVar13)(plVar11,puVar13[1]);
joined_r0x055367f4:
  if (lVar12 != 0) {
    plVar16 = (long *)FUN_04011c04(lVar12,*(undefined8 *)
                                           System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11>_var
                                  );
    return plVar16;
  }
  goto LAB_05536834;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar21 = piVar21 + 4;
    if (uVar10 == 0) break;
LAB_05536358:
    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar13 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_055366e0;
    }
  }
LAB_05536370:
  puVar13 = (undefined8 *)FUN_02dd004c(local_68,*(long *)PTR_DAT_069fbff0,0);
LAB_055366e0:
  (*(code *)*puVar13)(plVar16,puVar13[1]);
LAB_055366ec:
  lVar12 = *plVar11;
  uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar10 != 0) {
    piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
        puVar13 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
        goto LAB_05536748;
      }
      uVar10 = uVar10 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar10 != 0);
  }
  puVar13 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar3,0);
LAB_05536748:
  uVar9 = (*(code *)*puVar13)(plVar11,puVar13[1]);
  plVar16 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_06a1cbb8,uVar9);
  lVar12 = *plVar11;
  uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar10 != 0) {
    piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
        puVar13 = (undefined8 *)(lVar12 + (long)(*piVar21 + 5) * 0x10 + 0x138);
        goto LAB_055367c0;
      }
      uVar10 = uVar10 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar10 != 0);
  }
  puVar13 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar3,5);
LAB_055367c0:
  (*(code *)*puVar13)(plVar11,plVar16,0,puVar13[1]);
  return plVar16;
code_r0x05535ce0:
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar10 = (**(code **)(*plVar16 + 0x328))(plVar16,uVar22,*(undefined8 *)(*plVar16 + 0x330));
  plVar11 = local_68;
  if ((uVar10 & 1) == 0) goto joined_r0x05535be4;
LAB_05535d00:
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar10 = FUN_04e95158(lVar14,uVar22,&local_70,*(undefined8 *)puVar5);
  if ((uVar10 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_06a1c970 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar23 = FUN_05535154(uVar22);
    if (iVar8 == 0) goto LAB_05535d64;
LAB_05535d2c:
    if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(char *)(lVar23 + 0x15) == '\0') goto LAB_05535dec;
  }
  else {
    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar23 = *(long *)(local_70 + 0x10);
    if (iVar8 != 0) goto LAB_05535d2c;
LAB_05535d64:
    if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  if (((*(char *)(lVar23 + 0x14) == '\0') && (local_70 != 0)) &&
     (*(int *)(local_70 + 0x18) != iVar8)) {
LAB_05535dec:
    plVar11 = local_68;
    if (local_70 == 0) {
      lVar18 = thunk_FUN_02dd3144(*(undefined8 *)UnityEngine_XR_ARCore_ARCoreCameraSubsystem_var);
      *(long *)(lVar18 + 0x10) = lVar23;
      LeanTween__value((long *)(lVar18 + 0x10),lVar23);
      puVar4 = UnityEngine_XR_ARCore_ARCoreEnvironmentProbeSubsystem_var;
      *(int *)(lVar18 + 0x18) = iVar8;
      FUN_04e935f0(lVar14,uVar22,lVar18,*(undefined8 *)puVar4);
      plVar11 = local_68;
    }
    goto joined_r0x05535be4;
  }
  if (lVar12 != 0) {
    lVar19 = *(long *)(lVar12 + 0x10);
    lVar20 = *(long *)System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10>_var;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar19 != 0) {
      uVar1 = *(uint *)(lVar12 + 0x18);
      if (uVar1 < *(uint *)(lVar19 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
        plVar11 = (long *)(lVar19 + (long)(int)uVar1 * 8 + 0x20);
        *plVar11 = lVar18;
        LeanTween__value(plVar11,lVar18);
      }
      else {
        FUN_040101ec(lVar12,lVar18,
                     *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
      }
      goto LAB_05535dec;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


