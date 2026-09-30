/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<KeyValuePair<Guid,-object>>
ENTRY_POINT: 023a62b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_11;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_10
*/


/* WARNING: Removing unreachable block (ram,0x023a6950) */
/* WARNING: Removing unreachable block (ram,0x023a6c48) */
/* WARNING: Removing unreachable block (ram,0x023a6eb8) */
/* WARNING: Removing unreachable block (ram,0x023a7088) */
/* WARNING: Removing unreachable block (ram,0x023a7200) */
/* WARNING: Removing unreachable block (ram,0x023a7250) */
/* WARNING: Removing unreachable block (ram,0x023a7248) */
/* WARNING: Removing unreachable block (ram,0x023a7180) */
/* WARNING: Removing unreachable block (ram,0x023a71f4) */

void System_Array__InternalArray__ICollection_Contains<KeyValuePair<Guid,_object>>
               (void *param_1,int param_2,size_t param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  void *unaff_x19;
  long *unaff_x20;
  void *unaff_x21;
  long unaff_x22;
  void *unaff_x23;
  undefined8 uVar15;
  void *unaff_x24;
  void *unaff_x25;
  void *unaff_x26;
  void *pvVar16;
  void *unaff_x27;
  size_t __n;
  long unaff_x29;
  
  *(void **)(unaff_x29 + -0xf0) = param_1;
  memset(param_1,param_2,param_3);
  *(undefined8 *)(unaff_x29 + -0xb0) = 0;
  *(undefined8 *)(unaff_x29 + -0xa8) = 0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 0;
  *(undefined8 *)(unaff_x29 + -0xb8) = 0;
  *(undefined8 *)(unaff_x29 + -0xd0) = 0;
  *(undefined8 *)(unaff_x29 + -200) = 0;
  if (unaff_x22 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar11 = thunk_FUN_01f117cc();
    uVar15 = thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInParent<Rigidbody>__);
    FUN_034efd20(uVar11,uVar15,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar11,*(undefined8 *)(unaff_x29 + -0x130));
  }
  if ((*(byte *)(*(long *)(*unaff_x20 + 8) + 0x135) & 1) == 0) {
    FUN_01ecaf44(*(long *)(*unaff_x20 + 8));
  }
  lVar8 = thunk_FUN_01f116d0();
  if (lVar8 != 0) {
    *(undefined8 *)(unaff_x29 + -0x40) = 0;
    *(undefined8 *)(unaff_x29 + -0x38) = 0;
    FUN_032f358c(unaff_x29 + -0x40,lVar8,*(undefined4 *)(unaff_x29 + -0xe4),
                 *(undefined8 *)(*unaff_x20 + 0x40));
    goto LAB_023a65e8;
  }
  if ((*(byte *)(*(long *)(*unaff_x20 + 0x10) + 0x135) & 1) == 0) {
    FUN_01ecaf44(*(long *)(*unaff_x20 + 0x10));
  }
  plVar9 = (long *)thunk_FUN_01f116d0();
  if (plVar9 == (long *)0x0) {
    *(long *)(unaff_x29 + -0x130) = unaff_x22;
    lVar8 = *(long *)(*unaff_x20 + 0x18);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44();
    }
    __n = *(size_t *)(unaff_x29 + -0xd8);
    lVar12 = **(long **)(unaff_x29 + -0x130);
    bVar3 = *(byte *)(lVar12 + 0x130);
    if ((bVar3 < *(byte *)(lVar8 + 0x130)) ||
       (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8)) {
      lVar8 = *(long *)(*unaff_x20 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44();
        lVar12 = **(long **)(unaff_x29 + -0x130);
        bVar3 = *(byte *)(lVar12 + 0x130);
      }
      if ((bVar3 < *(byte *)(lVar8 + 0x130)) ||
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8)) {
        lVar8 = *(long *)(*unaff_x20 + 0x28);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01ecaf44(lVar8);
        }
        pvVar16 = *(void **)(unaff_x29 + -0xf8);
        plVar9 = (long *)thunk_FUN_01f116d0(*(undefined8 *)(unaff_x29 + -0x130),lVar8);
        if (plVar9 == (long *)0x0) {
          lVar8 = *(long *)(*unaff_x20 + 0x30);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01ecaf44(lVar8);
          }
          plVar9 = (long *)thunk_FUN_01f116d0(*(undefined8 *)(unaff_x29 + -0x130),lVar8);
          if (plVar9 == (long *)0x0) {
            (*(code *)**(undefined8 **)(*unaff_x20 + 0x50))(unaff_x29 + -0xa0,4,2,0);
            lVar8 = *(long *)*unaff_x20;
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_01ecaf44(lVar8);
            }
            lVar12 = **(long **)(unaff_x29 + -0x130);
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar8) {
                  puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                  uVar11 = *(undefined8 *)(unaff_x29 + -0x130);
                  goto LAB_023a6ed8;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            uVar11 = *(undefined8 *)(unaff_x29 + -0x130);
            puVar10 = (undefined8 *)FUN_01ecb238(uVar11,lVar8,0);
LAB_023a6ed8:
            plVar9 = (long *)(*(code *)*puVar10)(uVar11,puVar10[1]);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            iVar6 = 4;
            iVar7 = 0;
            do {
              lVar8 = *plVar9;
              uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) ==
                      *(long *)
                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
                    puVar10 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_023a6f50;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar10 = (undefined8 *)
                        FUN_01ecb238(plVar9,*(long *)
                                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                                     ,0);
LAB_023a6f50:
              uVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
              if ((uVar13 & 1) == 0) goto LAB_023a7110;
              lVar8 = *(long *)(*unaff_x20 + 0xf8);
              if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_01ecaf44(lVar8);
              }
              lVar12 = *plVar9;
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == lVar8) {
                    lVar8 = lVar12 + (long)*piVar14 * 0x10 + 0x138;
                    goto LAB_023a6fc4;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              lVar8 = FUN_01ecb238(plVar9,lVar8,0);
LAB_023a6fc4:
              *(void **)(unaff_x29 + -0x28) = unaff_x19;
              lVar8 = *(long *)(lVar8 + 8);
              (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar9,unaff_x29 + -0x28)
              ;
              memcpy(*(void **)(unaff_x29 + -0xf0),unaff_x19,__n);
              if (iVar7 == iVar6) {
                *(undefined8 *)(unaff_x29 + -0x28) = 0;
                *(undefined8 *)(unaff_x29 + -0x20) = 0;
                iVar6 = iVar7 << 1;
                *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x98);
                *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0xa0);
                FUN_032f341c(unaff_x29 + -0x28,iVar6,2,0,*(undefined8 *)(*unaff_x20 + 0x50));
                uVar11 = *(undefined8 *)(unaff_x29 + -0x28);
                uVar1 = *(undefined8 *)(unaff_x29 + -0x20);
                uVar15 = *(undefined8 *)(unaff_x29 + -0xa0);
                uVar2 = *(undefined8 *)(unaff_x29 + -0x98);
                uVar5 = (*(code *)**(undefined8 **)(*unaff_x20 + 0x78))(unaff_x29 + -0xa0);
                (*(code *)**(undefined8 **)(*unaff_x20 + 0x110))(uVar15,uVar2,uVar11,uVar1,uVar5);
                FUN_032f3c24(unaff_x29 + -0xb0,*(undefined8 *)(*unaff_x20 + 0x118));
                *(undefined8 *)(unaff_x29 + -0xa0) = uVar11;
                *(undefined8 *)(unaff_x29 + -0x98) = uVar1;
              }
              memcpy(unaff_x19,*(void **)(unaff_x29 + -0xf0),*(size_t *)(unaff_x29 + -0xd8));
              puVar10 = *(undefined8 **)(*unaff_x20 + 0x70);
              uVar11 = *puVar10;
              *(int *)(unaff_x29 + -0x14) = iVar7;
              *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
              *(void **)(unaff_x29 + -0x20) = unaff_x19;
              (*(code *)puVar10[2])(uVar11,puVar10,unaff_x29 + -0xa0,unaff_x29 + -0x28);
              __n = *(size_t *)(unaff_x29 + -0xd8);
              iVar7 = iVar7 + 1;
            } while( true );
          }
          lVar8 = *(long *)(*unaff_x20 + 0x30);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01ecaf44(lVar8);
          }
          lVar12 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar8) {
                puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_023a6c60;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar8,0);
LAB_023a6c60:
          uVar5 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          (*(code *)**(undefined8 **)(*unaff_x20 + 0x50))
                    (unaff_x29 + -0x90,uVar5,*(undefined4 *)(unaff_x29 + -0xe4),0);
          lVar8 = *(long *)*unaff_x20;
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01ecaf44(lVar8);
          }
          lVar12 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar8) {
                puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_023a6cf0;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar8,0);
LAB_023a6cf0:
          plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
          puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          iVar6 = 0;
          do {
            lVar8 = *plVar9;
            uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                  puVar10 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_023a6d60;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_023a6d60:
            uVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
            if ((uVar13 & 1) == 0) goto LAB_023a6e40;
            lVar8 = *(long *)(*unaff_x20 + 0xf8);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_01ecaf44(lVar8);
            }
            lVar12 = *plVar9;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar8) {
                  lVar8 = lVar12 + (long)*piVar14 * 0x10 + 0x138;
                  goto LAB_023a6dd4;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            lVar8 = FUN_01ecb238(plVar9,lVar8,0);
LAB_023a6dd4:
            *(void **)(unaff_x29 + -0x28) = unaff_x19;
            lVar8 = *(long *)(lVar8 + 8);
            (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar9,unaff_x29 + -0x28);
            memcpy(pvVar16,unaff_x19,__n);
            memcpy(unaff_x27,pvVar16,__n);
            puVar10 = *(undefined8 **)(*unaff_x20 + 0x70);
            uVar11 = *puVar10;
            *(int *)(unaff_x29 + -0x14) = iVar6;
            *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
            *(void **)(unaff_x29 + -0x20) = unaff_x27;
            (*(code *)puVar10[2])(uVar11,puVar10,unaff_x29 + -0x90,unaff_x29 + -0x28);
            iVar6 = iVar6 + 1;
          } while( true );
        }
        lVar8 = *(long *)(*unaff_x20 + 0x28);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01ecaf44(lVar8);
        }
        lVar12 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar8) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_023a6968;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar8,0);
LAB_023a6968:
        uVar5 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        (*(code *)**(undefined8 **)(*unaff_x20 + 0x50))
                  (unaff_x29 + -0x80,uVar5,*(undefined4 *)(unaff_x29 + -0xe4),0);
        lVar8 = *(long *)*unaff_x20;
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01ecaf44(lVar8);
        }
        lVar12 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar8) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_023a69f8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar8,0);
LAB_023a69f8:
        plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        iVar6 = 0;
        do {
          lVar8 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                puVar10 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_023a6a68;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_023a6a68:
          uVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if ((uVar13 & 1) == 0) goto LAB_023a6b48;
          lVar8 = *(long *)(*unaff_x20 + 0xf8);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01ecaf44(lVar8);
          }
          lVar12 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar8) {
                lVar8 = lVar12 + (long)*piVar14 * 0x10 + 0x138;
                goto LAB_023a6adc;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          lVar8 = FUN_01ecb238(plVar9,lVar8,0);
LAB_023a6adc:
          *(void **)(unaff_x29 + -0x28) = unaff_x19;
          lVar8 = *(long *)(lVar8 + 8);
          (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar9,unaff_x29 + -0x28);
          memcpy(unaff_x25,unaff_x19,__n);
          memcpy(unaff_x27,unaff_x25,__n);
          puVar10 = *(undefined8 **)(*unaff_x20 + 0x70);
          uVar11 = *puVar10;
          *(int *)(unaff_x29 + -0x14) = iVar6;
          *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
          *(void **)(unaff_x29 + -0x20) = unaff_x27;
          (*(code *)puVar10[2])(uVar11,puVar10,unaff_x29 + -0x80,unaff_x29 + -0x28);
          iVar6 = iVar6 + 1;
        } while( true );
      }
      uVar15 = *(undefined8 *)(unaff_x29 + -0x130);
      uVar5 = (*(code *)**(undefined8 **)(*unaff_x20 + 0xb8))(uVar15);
      (*(code *)**(undefined8 **)(*unaff_x20 + 0x50))
                (unaff_x29 + -0x70,uVar5,*(undefined4 *)(unaff_x29 + -0xe4),0);
      puVar10 = *(undefined8 **)(*unaff_x20 + 0xc0);
      pvVar16 = *(void **)(unaff_x29 + -0x128);
      uVar11 = *puVar10;
      *(void **)(unaff_x29 + -0x28) = pvVar16;
      (*(code *)puVar10[2])(uVar11,puVar10,uVar15,unaff_x29 + -0x28,pvVar16);
      memcpy(unaff_x21,pvVar16,*(size_t *)(unaff_x29 + -0x120));
      iVar6 = 0;
      while (uVar13 = (*(code *)**(undefined8 **)(*unaff_x20 + 0xe0))(), (uVar13 & 1) != 0) {
        puVar10 = *(undefined8 **)(*unaff_x20 + 0xd0);
        uVar11 = *puVar10;
        *(void **)(unaff_x29 + -0x28) = unaff_x19;
        (*(code *)puVar10[2])(uVar11);
        memcpy(unaff_x26,unaff_x19,__n);
        memcpy(unaff_x27,unaff_x26,__n);
        puVar10 = *(undefined8 **)(*unaff_x20 + 0x70);
        uVar11 = *puVar10;
        *(int *)(unaff_x29 + -0x14) = iVar6;
        *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
        *(void **)(unaff_x29 + -0x20) = unaff_x27;
        (*(code *)puVar10[2])(uVar11,puVar10,unaff_x29 + -0x70,unaff_x29 + -0x28);
        iVar6 = iVar6 + 1;
      }
      lVar12 = *unaff_x20;
      lVar8 = *(long *)(lVar12 + 200);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44();
        lVar12 = *unaff_x20;
      }
      FUN_01f09244(lVar8,*(undefined8 *)(lVar12 + 0xe8),*(undefined8 *)(unaff_x29 + -0x118));
      uVar15 = *(undefined8 *)(unaff_x29 + -0x68);
      uVar11 = *(undefined8 *)(unaff_x29 + -0x70);
    }
    else {
      uVar15 = *(undefined8 *)(unaff_x29 + -0x130);
      uVar5 = (*(code *)**(undefined8 **)(*unaff_x20 + 0x80))(uVar15);
      (*(code *)**(undefined8 **)(*unaff_x20 + 0x50))
                (unaff_x29 + -0x60,uVar5,*(undefined4 *)(unaff_x29 + -0xe4),0);
      puVar10 = *(undefined8 **)(*unaff_x20 + 0x88);
      pvVar16 = *(void **)(unaff_x29 + -0x110);
      uVar11 = *puVar10;
      *(void **)(unaff_x29 + -0x28) = pvVar16;
      (*(code *)puVar10[2])(uVar11,puVar10,uVar15,unaff_x29 + -0x28,pvVar16);
      memcpy(unaff_x23,pvVar16,*(size_t *)(unaff_x29 + -0x108));
      iVar6 = 0;
      while (uVar13 = (*(code *)**(undefined8 **)(*unaff_x20 + 0xa8))(), (uVar13 & 1) != 0) {
        puVar10 = *(undefined8 **)(*unaff_x20 + 0x98);
        uVar11 = *puVar10;
        *(void **)(unaff_x29 + -0x28) = unaff_x19;
        (*(code *)puVar10[2])(uVar11);
        memcpy(unaff_x24,unaff_x19,__n);
        memcpy(unaff_x27,unaff_x24,__n);
        puVar10 = *(undefined8 **)(*unaff_x20 + 0x70);
        uVar11 = *puVar10;
        *(int *)(unaff_x29 + -0x14) = iVar6;
        *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
        *(void **)(unaff_x29 + -0x20) = unaff_x27;
        (*(code *)puVar10[2])(uVar11,puVar10,unaff_x29 + -0x60,unaff_x29 + -0x28);
        iVar6 = iVar6 + 1;
      }
      lVar12 = *unaff_x20;
      lVar8 = *(long *)(lVar12 + 0x90);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44();
        lVar12 = *unaff_x20;
      }
      FUN_01f09244(lVar8,*(undefined8 *)(lVar12 + 0xb0),*(undefined8 *)(unaff_x29 + -0x100));
      uVar15 = *(undefined8 *)(unaff_x29 + -0x58);
      uVar11 = *(undefined8 *)(unaff_x29 + -0x60);
    }
  }
  else {
    lVar8 = *(long *)(*unaff_x20 + 0x28);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar12 = *plVar9;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar8) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_023a64c4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar8,0);
LAB_023a64c4:
    uVar5 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    (*(code *)**(undefined8 **)(*unaff_x20 + 0x50))
              (unaff_x29 + -0x50,uVar5,*(undefined4 *)(unaff_x29 + -0xe4),0);
    iVar6 = (*(code *)**(undefined8 **)(*unaff_x20 + 0x78))(unaff_x29 + -0x50);
    if (0 < iVar6) {
      iVar6 = 0;
      do {
        lVar8 = *(long *)(*unaff_x20 + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01ecaf44(lVar8);
        }
        *(int *)(unaff_x29 + -0x14) = iVar6;
        lVar12 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar8) {
              lVar8 = lVar12 + (long)*piVar14 * 0x10 + 0x138;
              goto LAB_023a657c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        lVar8 = FUN_01ecb238(plVar9,lVar8,0);
LAB_023a657c:
        *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
        *(void **)(unaff_x29 + -0x20) = unaff_x19;
        lVar8 = *(long *)(lVar8 + 8);
        (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar9,unaff_x29 + -0x28);
        puVar10 = *(undefined8 **)(*unaff_x20 + 0x70);
        uVar11 = *puVar10;
        *(int *)(unaff_x29 + -0x14) = iVar6;
        *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
        *(void **)(unaff_x29 + -0x20) = unaff_x19;
        (*(code *)puVar10[2])(uVar11,puVar10,unaff_x29 + -0x50,unaff_x29 + -0x28);
        iVar6 = iVar6 + 1;
        iVar7 = (*(code *)**(undefined8 **)(*unaff_x20 + 0x78))(unaff_x29 + -0x50);
      } while (iVar6 < iVar7);
    }
    uVar15 = *(undefined8 *)(unaff_x29 + -0x48);
    uVar11 = *(undefined8 *)(unaff_x29 + -0x50);
  }
  goto LAB_023a65e4;
LAB_023a7110:
  if (plVar9 != (long *)0x0) {
    lVar8 = *plVar9;
    uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_023a7168;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(plVar9,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_023a7168:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x98);
  *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0xa0);
  (*(code *)**(undefined8 **)(*unaff_x20 + 0x50))
            (unaff_x29 + -0xc0,iVar7,*(undefined4 *)(unaff_x29 + -0xe4),0);
  (*(code *)**(undefined8 **)(*unaff_x20 + 0x110))
            (*(undefined8 *)(unaff_x29 + -0xa0),*(undefined8 *)(unaff_x29 + -0x98),
             *(undefined8 *)(unaff_x29 + -0xc0),*(undefined8 *)(unaff_x29 + -0xb8),iVar7);
  *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(unaff_x29 + -0xb8);
  *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x29 + -0xc0);
  FUN_032f3c24(unaff_x29 + -0xb0,*(undefined8 *)(*unaff_x20 + 0x118));
  uVar15 = *(undefined8 *)(unaff_x29 + -200);
  uVar11 = *(undefined8 *)(unaff_x29 + -0xd0);
  goto LAB_023a65e4;
LAB_023a6e40:
  if (plVar9 != (long *)0x0) {
    lVar8 = *plVar9;
    uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_023a6ea0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(plVar9,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_023a6ea0:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  uVar15 = *(undefined8 *)(unaff_x29 + -0x88);
  uVar11 = *(undefined8 *)(unaff_x29 + -0x90);
  goto LAB_023a65e4;
LAB_023a6b48:
  if (plVar9 != (long *)0x0) {
    lVar8 = *plVar9;
    uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
          goto FUN_023a6c30;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(plVar9,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
FUN_023a6c30:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  uVar15 = *(undefined8 *)(unaff_x29 + -0x78);
  uVar11 = *(undefined8 *)(unaff_x29 + -0x80);
LAB_023a65e4:
  *(undefined8 *)(unaff_x29 + -0x38) = uVar15;
  *(undefined8 *)(unaff_x29 + -0x40) = uVar11;
LAB_023a65e8:
  if (*(long *)(*(long *)(unaff_x29 + -0xe0) + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x38));
  }
  return;
}


