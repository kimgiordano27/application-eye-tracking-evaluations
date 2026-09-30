/*
FUNCTION_NAME: System.ValueTuple<__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericStructType>$$Equals
ENTRY_POINT: 027c0fe0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x027c162c) */
/* WARNING: Removing unreachable block (ram,0x027c1638) */

undefined8
System_ValueTuple<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericStructType>__Equals
          (long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long *plVar10;
  long lVar11;
  int unaff_w23;
  long lVar12;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  
  lVar11 = *param_1;
  if (lVar11 != 0) {
    uVar4 = FUN_0353bc74(lVar11,0);
    if ((uVar4 & 1) != 0) {
      FUN_0354b564(lVar11,unaff_w21,unaff_w23,0);
    }
    lVar12 = *(long *)(unaff_x20 + 0x18);
    if (lVar12 != 0) {
      if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
        uVar4 = 0;
        uVar7 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
        do {
          if (uVar7 <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          lVar8 = *(long *)(lVar12 + 0x20 + uVar4 * 8);
          if (lVar8 != 0) {
            uVar2 = (*(code *)**(undefined8 **)
                                (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60))();
            if (lVar8 == 0) goto LAB_027c161c;
            (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb8))
                      (lVar8,unaff_w21,uVar2,unaff_w23,*(undefined8 *)(unaff_x20 + 0x10));
          }
          uVar7 = (ulong)*(uint *)(lVar12 + 0x18);
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)(int)*(uint *)(lVar12 + 0x18));
      }
      if (unaff_w23 != 2) {
        return 1;
      }
      uVar4 = FUN_0353bc74(lVar11,0);
      if ((uVar4 & 1) == 0) {
        lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_01ecaf44();
        }
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_01ecaf44();
        }
        plVar10 = *(long **)(*(long *)(lVar11 + 0xb8) + 8);
        if (plVar10 != (long *)0x0) {
          lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01ecaf44(lVar11);
          }
          lVar12 = *plVar10;
          uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar11) {
                puVar5 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_027c1444;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238(plVar10,lVar11,0);
LAB_027c1444:
          plVar10 = (long *)(*(code *)*puVar5)(plVar10,puVar5[1]);
          puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar11 = *plVar10;
            uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar4 != 0) {
              piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                  puVar5 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_027c14ac;
                }
                uVar4 = uVar4 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_027c14ac:
            uVar4 = (*(code *)*puVar5)(plVar10,puVar5[1]);
            if ((uVar4 & 1) == 0) {
              if (plVar10 == (long *)0x0) {
                return 1;
              }
              lVar11 = *plVar10;
              uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar4 == 0) goto LAB_027c15c4;
              piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              goto LAB_027c15ac;
            }
            lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd0);
            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_01ecaf44(lVar11);
            }
            lVar12 = *plVar10;
            uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar4 != 0) {
              piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar11) {
                  lVar11 = lVar12 + (long)*piVar9 * 0x10 + 0x138;
                  goto LAB_027c1524;
                }
                uVar4 = uVar4 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar4 != 0);
            }
            lVar11 = FUN_01ecb238(plVar10,lVar11,0);
LAB_027c1524:
            lVar11 = *(long *)(lVar11 + 8);
            (**(code **)(lVar11 + 0x10))
                      (*(undefined8 *)(lVar11 + 8),lVar11,plVar10,0,&stack0x00000030);
            puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
            (*(code *)puVar5[2])(*puVar5);
            if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_0358d1e4(in_stack_00000030,0,*(undefined4 *)(in_stack_00000030 + 0x18),0);
          } while( true );
        }
      }
      else {
        lVar12 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01ecaf44();
        }
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar12 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01ecaf44();
        }
        plVar10 = *(long **)(*(long *)(lVar12 + 0xb8) + 8);
        if (plVar10 != (long *)0x0) {
          lVar12 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_01ecaf44(lVar12);
          }
          lVar8 = *plVar10;
          uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar12) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_027c1164;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238(plVar10,lVar12,0);
LAB_027c1164:
          plVar10 = (long *)(*(code *)*puVar5)(plVar10,puVar5[1]);
          puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar12 = *plVar10;
            uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar4 != 0) {
              piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                  puVar5 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_027c11cc;
                }
                uVar4 = uVar4 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_027c11cc:
            uVar4 = (*(code *)*puVar5)(plVar10,puVar5[1]);
            if ((uVar4 & 1) == 0) {
              if (plVar10 == (long *)0x0) {
                return 1;
              }
              lVar11 = *plVar10;
              uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar4 == 0) goto LAB_027c1364;
              piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              goto LAB_027c134c;
            }
            lVar12 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd0);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_01ecaf44(lVar12);
            }
            lVar8 = *plVar10;
            uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar4 != 0) {
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar12) {
                  lVar12 = lVar8 + (long)*piVar9 * 0x10 + 0x138;
                  goto LAB_027c1244;
                }
                uVar4 = uVar4 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar4 != 0);
            }
            lVar12 = FUN_01ecb238(plVar10,lVar12,0);
LAB_027c1244:
            lVar12 = *(long *)(lVar12 + 8);
            (**(code **)(lVar12 + 0x10))
                      (*(undefined8 *)(lVar12 + 8),lVar12,plVar10,0,&stack0x00000020);
            in_stack_00000010 = in_stack_00000020;
            in_stack_00000018 = in_stack_00000028;
            puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
            (*(code *)puVar5[2])(*puVar5,puVar5,&stack0x00000010,0,&stack0x00000020);
            lVar12 = in_stack_00000020;
            if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (0 < (int)*(ulong *)(in_stack_00000020 + 0x18)) {
              uVar4 = 0;
              uVar7 = *(ulong *)(in_stack_00000020 + 0x18) & 0xffffffff;
              lVar8 = in_stack_00000020 + 0x20;
              do {
                if (uVar7 <= uVar4) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                plVar6 = (long *)FUN_01ec9a08(lVar8,0);
                if (plVar6 != (long *)0x0) {
                  uVar2 = (**(code **)(*plVar6 + 0x158))(plVar6,*(undefined8 *)(*plVar6 + 0x160));
                  uVar3 = (*(code *)**(undefined8 **)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60))();
                  FUN_0354b54c(lVar11,uVar2,(int)plVar6[3],uVar3,0);
                }
                uVar7 = (ulong)*(uint *)(lVar12 + 0x18);
                uVar4 = uVar4 + 1;
                lVar8 = lVar8 + 8;
              } while ((long)uVar4 < (long)(int)*(uint *)(lVar12 + 0x18));
            }
          } while( true );
        }
      }
    }
  }
LAB_027c161c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar9 = piVar9 + 4;
    if (uVar4 == 0) break;
LAB_027c134c:
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_027c1380;
    }
  }
LAB_027c1364:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar10,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_027c1380:
  (*(code *)*puVar5)(plVar10,puVar5[1]);
  return 1;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar9 = piVar9 + 4;
    if (uVar4 == 0) break;
LAB_027c15ac:
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_027c15e0;
    }
  }
LAB_027c15c4:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar10,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_027c15e0:
  (*(code *)*puVar5)(plVar10,puVar5[1]);
  return 1;
}


