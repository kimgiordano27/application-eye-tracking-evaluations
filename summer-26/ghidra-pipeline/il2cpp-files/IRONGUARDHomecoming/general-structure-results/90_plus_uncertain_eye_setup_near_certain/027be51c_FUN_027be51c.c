/*
FUNCTION_NAME: FUN_027be51c
ENTRY_POINT: 027be51c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x027beb9c) */
/* WARNING: Removing unreachable block (ram,0x027beba8) */

undefined8 FUN_027be51c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  
  if ((DAT_04830585 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Security_Cryptography_DerSequenceReader_PeekTag__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830585 = 1;
  }
  uVar2 = thunk_FUN_01f0a328(0);
  lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x58);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
  }
  puVar1 = Method_System_Security_Cryptography_DerSequenceReader_PeekTag__;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar8);
  }
  iVar3 = FUN_027bedf0();
  lVar8 = *(long *)puVar1;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar8);
    lVar8 = *(long *)puVar1;
  }
  lVar8 = **(long **)(lVar8 + 0xb8);
  if (lVar8 != 0) {
    uVar5 = FUN_0353bc74(lVar8,0);
    if ((uVar5 & 1) != 0) {
      FUN_0354b564(lVar8,uVar2,iVar3,0);
    }
    lVar13 = param_1[3];
    if (lVar13 != 0) {
      if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
        uVar5 = 0;
        uVar9 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
        do {
          if (uVar9 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          lVar10 = *(long *)(lVar13 + 0x20 + uVar5 * 8);
          if (lVar10 != 0) {
            uVar4 = (**(code **)(*param_1 + 0x158))(param_1,*(undefined8 *)(*param_1 + 0x160));
            if (lVar10 == 0) goto LAB_027beb8c;
            FUN_025e6898(lVar10,uVar2,uVar4,iVar3,param_1[2],
                         *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0xb8));
          }
          uVar9 = (ulong)*(uint *)(lVar13 + 0x18);
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)(int)*(uint *)(lVar13 + 0x18));
      }
      if (iVar3 != 2) {
        return 1;
      }
      uVar5 = FUN_0353bc74(lVar8,0);
      if ((uVar5 & 1) == 0) {
        lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x58);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01ecaf44();
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x58);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01ecaf44();
        }
        plVar12 = *(long **)(*(long *)(lVar8 + 0xb8) + 8);
        if (plVar12 != (long *)0x0) {
          lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0xc0);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01ecaf44(lVar8);
          }
          lVar13 = *plVar12;
          uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar5 != 0) {
            piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar8) {
                puVar6 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_027be9f4;
              }
              uVar5 = uVar5 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar12,lVar8,0);
LAB_027be9f4:
          plVar12 = (long *)(*(code *)*puVar6)(plVar12,puVar6[1]);
          puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar8 = *plVar12;
            uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar5 != 0) {
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                  puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_027bea5c;
                }
                uVar5 = uVar5 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar5 != 0);
            }
            puVar6 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar1,0);
LAB_027bea5c:
            uVar5 = (*(code *)*puVar6)(plVar12,puVar6[1]);
            if ((uVar5 & 1) == 0) {
              if (plVar12 == (long *)0x0) {
                return 1;
              }
              lVar8 = *plVar12;
              uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar5 == 0) goto LAB_027beb38;
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              goto LAB_027beb20;
            }
            lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0xd0);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_01ecaf44(lVar8);
            }
            lVar13 = *plVar12;
            uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar5 != 0) {
              piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar8) {
                  puVar6 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_027bead4;
                }
                uVar5 = uVar5 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar5 != 0);
            }
            puVar6 = (undefined8 *)FUN_01ecb238(plVar12,lVar8,0);
LAB_027bead4:
            lVar8 = (*(code *)*puVar6)(plVar12,puVar6[1]);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_0358d1e4(lVar8,0,*(undefined4 *)(lVar8 + 0x18),0);
          } while( true );
        }
      }
      else {
        lVar13 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x58);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_01ecaf44();
        }
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar13 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x58);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_01ecaf44();
        }
        plVar12 = *(long **)(*(long *)(lVar13 + 0xb8) + 8);
        if (plVar12 != (long *)0x0) {
          lVar13 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0xc0);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_01ecaf44(lVar13);
          }
          lVar10 = *plVar12;
          uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar5 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar13) {
                puVar6 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_027be754;
              }
              uVar5 = uVar5 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar12,lVar13,0);
LAB_027be754:
          plVar12 = (long *)(*(code *)*puVar6)(plVar12,puVar6[1]);
          puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar13 = *plVar12;
            uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar5 != 0) {
              piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                  puVar6 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_027be7bc;
                }
                uVar5 = uVar5 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar5 != 0);
            }
            puVar6 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar1,0);
LAB_027be7bc:
            uVar5 = (*(code *)*puVar6)(plVar12,puVar6[1]);
            if ((uVar5 & 1) == 0) {
              if (plVar12 == (long *)0x0) {
                return 1;
              }
              lVar8 = *plVar12;
              uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar5 == 0) goto LAB_027be914;
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              goto LAB_027be8fc;
            }
            lVar13 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0xd0);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = FUN_01ecaf44(lVar13);
            }
            lVar10 = *plVar12;
            uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar5 != 0) {
              piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar13) {
                  puVar6 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_027be834;
                }
                uVar5 = uVar5 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar5 != 0);
            }
            puVar6 = (undefined8 *)FUN_01ecb238(plVar12,lVar13,0);
LAB_027be834:
            lVar13 = (*(code *)*puVar6)(plVar12,puVar6[1]);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
                    /* try { // try from 027be850 to 028beb63 has its CatchHandler @ 027be850
                       catch() { ... } // from try @ 027be850 with catch @ 027be850
                       catch() { ... } // from try @ 027bebcc with catch @ 027be850
                       catch() { ... } // from try @ 027bec7c with catch @ 027be850
                       catch() { ... } // from try @ 027becc8 with catch @ 027be850
                       catch() { ... } // from try @ 027bed04 with catch @ 027be850 */
            if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
              uVar5 = 0;
              uVar9 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
              lVar10 = lVar13 + 0x20;
              do {
                if (uVar9 <= uVar5) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                plVar7 = (long *)FUN_01ec9a08(lVar10,0);
                if (plVar7 != (long *)0x0) {
                  uVar2 = (**(code **)(*plVar7 + 0x158))(plVar7,*(undefined8 *)(*plVar7 + 0x160));
                  uVar4 = (**(code **)(*param_1 + 0x158))(param_1,*(undefined8 *)(*param_1 + 0x160))
                  ;
                  FUN_0354b54c(lVar8,uVar2,(int)plVar7[3],uVar4,0);
                }
                uVar9 = (ulong)*(uint *)(lVar13 + 0x18);
                uVar5 = uVar5 + 1;
                lVar10 = lVar10 + 8;
              } while ((long)uVar5 < (long)(int)*(uint *)(lVar13 + 0x18));
            }
          } while( true );
        }
      }
    }
  }
LAB_027beb8c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar11 = piVar11 + 4;
    if (uVar5 == 0) break;
LAB_027be8fc:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_027be930;
    }
  }
LAB_027be914:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar12,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_027be930:
  (*(code *)*puVar6)(plVar12,puVar6[1]);
  return 1;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar11 = piVar11 + 4;
    if (uVar5 == 0) break;
LAB_027beb20:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_027beb54;
    }
  }
LAB_027beb38:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar12,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_027beb54:
  (*(code *)*puVar6)(plVar12,puVar6[1]);
                    /* try { // try from 027beb64 to 028bebcb has its CatchHandler @ 027bec90 */
  return 1;
}


