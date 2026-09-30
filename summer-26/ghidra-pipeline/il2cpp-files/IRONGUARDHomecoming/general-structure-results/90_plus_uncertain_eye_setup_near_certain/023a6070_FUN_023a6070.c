/*
FUNCTION_NAME: FUN_023a6070
ENTRY_POINT: 023a6070
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_13;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;functionality_eye_api_context_without_clear_sink_hits_12
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

void FUN_023a6070(long *param_1,undefined4 param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  void *pvVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  int *piVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  void *__s;
  void *__s_00;
  ulong __n;
  void *__s_01;
  ulong __n_00;
  void *__s_02;
  void *__s_03;
  int *piVar24;
  ulong uVar25;
  size_t __n_01;
  long *local_190;
  int *local_188;
  ulong local_180;
  long local_178;
  int *local_170;
  ulong local_168;
  long local_160;
  void *local_158;
  void *local_150;
  undefined4 local_144;
  long local_140;
  size_t local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  int *local_110;
  int *piStack_108;
  int *local_100;
  int *piStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  int *local_88;
  int *piStack_80;
  int local_74;
  long local_70;
  
  lVar14 = tpidr_el0;
  local_70 = *(long *)(lVar14 + 0x28);
  plVar21 = param_3 + 7;
  lVar17 = *plVar21;
  local_144 = param_2;
  if (lVar17 == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023a5fa4 with catch @ 023a60c8
                        */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    lVar17 = *plVar21;
    if (lVar17 == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023a5f90 with catch @ 023a60d8
                        */
      FUN_01ecafa0(param_3);
      lVar17 = param_3[7];
    }
  }
  lVar16 = *(long *)(lVar17 + 0x90);
  lVar8 = *(long *)(lVar17 + 200);
  uVar15 = *(uint *)(lVar16 + 0xfc);
  __n = (ulong)uVar15;
  uVar22 = (ulong)*(uint *)(*(long *)(lVar17 + 0x68) + 0xfc);
                    /* try { // try from 023a60f8 to 024a60fb has its CatchHandler @ 023a611c */
  __n_00 = (ulong)*(uint *)(lVar8 + 0xfc);
                    /* try { // try from 023a60fc to 024a610f has its CatchHandler @ 023a5c18 */
  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
    lVar17 = FUN_01ecaf44(lVar16);
    uVar15 = *(uint *)(lVar17 + 0xfc);
                    /* try { // try from 023a6110 to 024a6117 has its CatchHandler @ 023a6118 */
    lVar8 = *(long *)(*plVar21 + 200);
  }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023a60f8 with catch @ 023a611c
                        */
  lVar17 = (long)&local_190 - ((ulong)(uVar15 + 0x10) + 0xf & 0x1fffffff0);
  local_190 = param_3;
  local_160 = lVar17;
  local_140 = lVar14;
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ecaf44();
  }
  local_178 = lVar17 - ((ulong)(*(int *)(lVar8 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uVar25 = uVar22 + 0xf & 0x1fffffff0;
  piVar20 = (int *)(local_178 - uVar25);
  piVar24 = (int *)((long)piVar20 - uVar25);
  uVar18 = __n + 0xf & 0x1fffffff0;
  local_170 = (int *)((long)piVar24 - uVar18);
  uVar23 = __n_00 + 0xf & 0x1fffffff0;
  local_188 = (int *)((long)local_170 - uVar23);
  __s_00 = (void *)((long)local_188 - uVar18);
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_168 = __n;
  local_138 = uVar22;
  memset(__s_00,0,__n);
  __s_01 = (void *)((long)__s_00 - uVar25);
  memset(__s_01,0,local_138);
  __s = (void *)((long)__s_01 - uVar23);
  local_d0 = 0;
  uStack_c8 = 0;
  local_180 = __n_00;
  memset(__s,0,__n_00);
  __s_03 = (void *)((long)__s - uVar25);
  memset(__s_03,0,local_138);
  __s_02 = (void *)((long)__s_03 - uVar25);
  local_e0 = 0;
  uStack_d8 = 0;
  memset(__s_02,0,local_138);
  pvVar9 = (void *)((long)__s_02 - uVar25);
  local_f0 = 0;
  uStack_e8 = 0;
  local_158 = pvVar9;
  memset(pvVar9,0,local_138);
  local_150 = (void *)((long)pvVar9 - uVar25);
  local_100 = (int *)0x0;
  piStack_f8 = (int *)0x0;
  memset(local_150,0,local_138);
  local_110 = (int *)0x0;
  piStack_108 = (int *)0x0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  if (param_1 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar12 = thunk_FUN_01f117cc();
    uVar13 = thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInParent<Rigidbody>__);
    FUN_034efd20(uVar12,uVar13,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar12,local_190);
  }
  lVar14 = *(long *)(*plVar21 + 8);
  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_01ecaf44(lVar14);
  }
  lVar14 = thunk_FUN_01f116d0(param_1,lVar14);
  if (lVar14 == 0) {
    lVar14 = *(long *)(*plVar21 + 0x10);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_01ecaf44(lVar14);
    }
    plVar10 = (long *)thunk_FUN_01f116d0(param_1,lVar14);
    if (plVar10 == (long *)0x0) {
      lVar14 = *(long *)(*plVar21 + 0x18);
      local_190 = param_1;
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01ecaf44();
      }
      __n_01 = local_138;
      plVar10 = local_190;
      lVar17 = *local_190;
      bVar1 = *(byte *)(lVar17 + 0x130);
      if ((bVar1 < *(byte *)(lVar14 + 0x130)) ||
         (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) != lVar14))
      {
        lVar14 = *(long *)(*plVar21 + 0x20);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = FUN_01ecaf44();
          lVar17 = *local_190;
          bVar1 = *(byte *)(lVar17 + 0x130);
        }
        plVar10 = local_190;
        if ((bVar1 < *(byte *)(lVar14 + 0x130)) ||
           (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) != lVar14
           )) {
          lVar14 = *(long *)(*plVar21 + 0x28);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = FUN_01ecaf44(lVar14);
          }
          pvVar9 = local_158;
          plVar10 = (long *)thunk_FUN_01f116d0(local_190,lVar14);
          if (plVar10 == (long *)0x0) {
            lVar14 = *(long *)(*plVar21 + 0x30);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_01ecaf44(lVar14);
            }
            plVar10 = (long *)thunk_FUN_01f116d0(local_190,lVar14);
            if (plVar10 == (long *)0x0) {
              (*(code *)**(undefined8 **)(*plVar21 + 0x50))(&local_100,4,2,0);
              lVar14 = *(long *)*plVar21;
              if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                lVar14 = FUN_01ecaf44(lVar14);
              }
              plVar10 = local_190;
              lVar17 = *local_190;
              uVar22 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar22 != 0) {
                piVar24 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == lVar14) {
                    puVar11 = (undefined8 *)(lVar17 + (long)*piVar24 * 0x10 + 0x138);
                    goto LAB_023a6ed8;
                  }
                  uVar22 = uVar22 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar22 != 0);
              }
              puVar11 = (undefined8 *)FUN_01ecb238(local_190,lVar14,0);
LAB_023a6ed8:
              plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              iVar6 = 4;
              iVar7 = 0;
              do {
                lVar14 = *plVar10;
                uVar22 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar22 != 0) {
                  piVar24 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) ==
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__)
                    {
                      puVar11 = (undefined8 *)(lVar14 + (long)*piVar24 * 0x10 + 0x138);
                      goto LAB_023a6f50;
                    }
                    uVar22 = uVar22 - 1;
                    piVar24 = piVar24 + 4;
                  } while (uVar22 != 0);
                }
                puVar11 = (undefined8 *)
                          FUN_01ecb238(plVar10,*(long *)
                                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                                       ,0);
LAB_023a6f50:
                uVar22 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                if ((uVar22 & 1) == 0) goto LAB_023a7110;
                lVar14 = *(long *)(*plVar21 + 0xf8);
                if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                  lVar14 = FUN_01ecaf44(lVar14);
                }
                lVar17 = *plVar10;
                uVar22 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar22 != 0) {
                  piVar24 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) == lVar14) {
                      lVar14 = lVar17 + (long)*piVar24 * 0x10 + 0x138;
                      goto LAB_023a6fc4;
                    }
                    uVar22 = uVar22 - 1;
                    piVar24 = piVar24 + 4;
                  } while (uVar22 != 0);
                }
                lVar14 = FUN_01ecb238(plVar10,lVar14,0);
LAB_023a6fc4:
                lVar14 = *(long *)(lVar14 + 8);
                local_88 = piVar20;
                (**(code **)(lVar14 + 0x10))
                          (*(undefined8 *)(lVar14 + 8),lVar14,plVar10,&local_88,piVar20);
                memcpy(local_150,piVar20,__n_01);
                if (iVar7 == iVar6) {
                  local_88 = (int *)0x0;
                  piStack_80 = (int *)0x0;
                  iVar6 = iVar7 << 1;
                  piStack_108 = piStack_f8;
                  local_110 = local_100;
                  FUN_032f341c(&local_88,iVar6,2,0,*(undefined8 *)(*plVar21 + 0x50));
                  piVar4 = piStack_80;
                  piVar3 = local_88;
                  piVar19 = piStack_f8;
                  piVar24 = local_100;
                  uVar5 = (*(code *)**(undefined8 **)(*plVar21 + 0x78))(&local_100);
                  (*(code *)**(undefined8 **)(*plVar21 + 0x110))
                            (piVar24,piVar19,piVar3,piVar4,uVar5);
                  FUN_032f3c24(&local_110,*(undefined8 *)(*plVar21 + 0x118));
                  local_100 = piVar3;
                  piStack_f8 = piVar4;
                }
                memcpy(piVar20,local_150,local_138);
                puVar11 = *(undefined8 **)(*plVar21 + 0x70);
                local_88 = &local_74;
                piStack_80 = piVar20;
                local_74 = iVar7;
                (*(code *)puVar11[2])(*puVar11,puVar11,&local_100,&local_88,piVar20);
                __n_01 = local_138;
                iVar7 = iVar7 + 1;
              } while( true );
            }
            lVar14 = *(long *)(*plVar21 + 0x30);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_01ecaf44(lVar14);
            }
            lVar17 = *plVar10;
            uVar22 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar22 != 0) {
              piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == lVar14) {
                  puVar11 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_023a6c60;
                }
                uVar22 = uVar22 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar22 != 0);
            }
            puVar11 = (undefined8 *)FUN_01ecb238(plVar10,lVar14,0);
LAB_023a6c60:
            uVar5 = (*(code *)*puVar11)(plVar10,puVar11[1]);
            (*(code *)**(undefined8 **)(*plVar21 + 0x50))(&local_f0,uVar5,local_144,0);
            lVar14 = *(long *)*plVar21;
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_01ecaf44(lVar14);
            }
            lVar17 = *plVar10;
            uVar22 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar22 != 0) {
              piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == lVar14) {
                  puVar11 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_023a6cf0;
                }
                uVar22 = uVar22 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar22 != 0);
            }
            puVar11 = (undefined8 *)FUN_01ecb238(plVar10,lVar14,0);
LAB_023a6cf0:
            plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
            puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            iVar6 = 0;
            do {
              lVar14 = *plVar10;
              uVar22 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar22 != 0) {
                piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
                    puVar11 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
                    goto LAB_023a6d60;
                  }
                  uVar22 = uVar22 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar22 != 0);
              }
              puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_023a6d60:
              uVar22 = (*(code *)*puVar11)(plVar10,puVar11[1]);
              if ((uVar22 & 1) == 0) goto LAB_023a6e40;
              lVar14 = *(long *)(*plVar21 + 0xf8);
              if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                lVar14 = FUN_01ecaf44(lVar14);
              }
              lVar17 = *plVar10;
              uVar22 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar22 != 0) {
                piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == lVar14) {
                    lVar14 = lVar17 + (long)*piVar19 * 0x10 + 0x138;
                    goto LAB_023a6dd4;
                  }
                  uVar22 = uVar22 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar22 != 0);
              }
              lVar14 = FUN_01ecb238(plVar10,lVar14,0);
LAB_023a6dd4:
              lVar14 = *(long *)(lVar14 + 8);
              local_88 = piVar20;
              (**(code **)(lVar14 + 0x10))
                        (*(undefined8 *)(lVar14 + 8),lVar14,plVar10,&local_88,piVar20);
              memcpy(pvVar9,piVar20,__n_01);
              memcpy(piVar24,pvVar9,__n_01);
              puVar11 = *(undefined8 **)(*plVar21 + 0x70);
              local_88 = &local_74;
              piStack_80 = piVar24;
              local_74 = iVar6;
              (*(code *)puVar11[2])(*puVar11,puVar11,&local_f0,&local_88,piVar24);
              iVar6 = iVar6 + 1;
            } while( true );
          }
          lVar14 = *(long *)(*plVar21 + 0x28);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = FUN_01ecaf44(lVar14);
          }
          lVar17 = *plVar10;
          uVar22 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar22 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == lVar14) {
                puVar11 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_023a6968;
              }
              uVar22 = uVar22 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar22 != 0);
          }
          puVar11 = (undefined8 *)FUN_01ecb238(plVar10,lVar14,0);
LAB_023a6968:
          uVar5 = (*(code *)*puVar11)(plVar10,puVar11[1]);
          (*(code *)**(undefined8 **)(*plVar21 + 0x50))(&local_e0,uVar5,local_144,0);
          lVar14 = *(long *)*plVar21;
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = FUN_01ecaf44(lVar14);
          }
          lVar17 = *plVar10;
          uVar22 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar22 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == lVar14) {
                puVar11 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_023a69f8;
              }
              uVar22 = uVar22 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar22 != 0);
          }
          puVar11 = (undefined8 *)FUN_01ecb238(plVar10,lVar14,0);
LAB_023a69f8:
          plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
          puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          iVar6 = 0;
          do {
            lVar14 = *plVar10;
            uVar22 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar22 != 0) {
              piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
                  puVar11 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_023a6a68;
                }
                uVar22 = uVar22 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar22 != 0);
            }
            puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_023a6a68:
            uVar22 = (*(code *)*puVar11)(plVar10,puVar11[1]);
            if ((uVar22 & 1) == 0) goto LAB_023a6b48;
            lVar14 = *(long *)(*plVar21 + 0xf8);
            if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_01ecaf44(lVar14);
            }
            lVar17 = *plVar10;
            uVar22 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar22 != 0) {
              piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == lVar14) {
                  lVar14 = lVar17 + (long)*piVar19 * 0x10 + 0x138;
                  goto LAB_023a6adc;
                }
                uVar22 = uVar22 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar22 != 0);
            }
            lVar14 = FUN_01ecb238(plVar10,lVar14,0);
LAB_023a6adc:
            lVar14 = *(long *)(lVar14 + 8);
            local_88 = piVar20;
            (**(code **)(lVar14 + 0x10))
                      (*(undefined8 *)(lVar14 + 8),lVar14,plVar10,&local_88,piVar20);
            memcpy(__s_02,piVar20,__n_01);
            memcpy(piVar24,__s_02,__n_01);
            puVar11 = *(undefined8 **)(*plVar21 + 0x70);
            local_88 = &local_74;
            piStack_80 = piVar24;
            local_74 = iVar6;
            (*(code *)puVar11[2])(*puVar11,puVar11,&local_e0,&local_88,piVar24);
            iVar6 = iVar6 + 1;
          } while( true );
        }
        uVar5 = (*(code *)**(undefined8 **)(*plVar21 + 0xb8))(local_190);
        (*(code *)**(undefined8 **)(*plVar21 + 0x50))(&local_d0,uVar5,local_144,0);
        piVar19 = local_188;
        puVar11 = *(undefined8 **)(*plVar21 + 0xc0);
        local_88 = local_188;
        (*(code *)puVar11[2])(*puVar11,puVar11,plVar10,&local_88,local_188);
        memcpy(__s,piVar19,local_180);
        iVar6 = 0;
        while (uVar22 = (*(code *)**(undefined8 **)(*plVar21 + 0xe0))(__s), (uVar22 & 1) != 0) {
          puVar11 = *(undefined8 **)(*plVar21 + 0xd0);
          local_88 = piVar20;
          (*(code *)puVar11[2])(*puVar11,puVar11,__s,&local_88,piVar20);
          memcpy(__s_03,piVar20,__n_01);
          memcpy(piVar24,__s_03,__n_01);
          puVar11 = *(undefined8 **)(*plVar21 + 0x70);
          local_88 = &local_74;
          piStack_80 = piVar24;
          local_74 = iVar6;
          (*(code *)puVar11[2])(*puVar11,puVar11,&local_d0,&local_88,piVar24);
          iVar6 = iVar6 + 1;
        }
        lVar17 = *plVar21;
        lVar14 = *(long *)(lVar17 + 200);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = FUN_01ecaf44();
          lVar17 = *plVar21;
        }
        FUN_01f09244(lVar14,*(undefined8 *)(lVar17 + 0xe8),local_178,__s,0,0);
        local_a0 = local_d0;
        uStack_98 = uStack_c8;
      }
      else {
        uVar5 = (*(code *)**(undefined8 **)(*plVar21 + 0x80))(local_190);
        (*(code *)**(undefined8 **)(*plVar21 + 0x50))(&local_c0,uVar5,local_144,0);
        piVar19 = local_170;
        puVar11 = *(undefined8 **)(*plVar21 + 0x88);
        local_88 = local_170;
        (*(code *)puVar11[2])(*puVar11,puVar11,plVar10,&local_88,local_170);
        memcpy(__s_00,piVar19,local_168);
        iVar6 = 0;
        while (uVar22 = (*(code *)**(undefined8 **)(*plVar21 + 0xa8))(__s_00), (uVar22 & 1) != 0) {
          puVar11 = *(undefined8 **)(*plVar21 + 0x98);
          local_88 = piVar20;
          (*(code *)puVar11[2])(*puVar11,puVar11,__s_00,&local_88,piVar20);
          memcpy(__s_01,piVar20,__n_01);
          memcpy(piVar24,__s_01,__n_01);
          puVar11 = *(undefined8 **)(*plVar21 + 0x70);
          local_88 = &local_74;
          piStack_80 = piVar24;
          local_74 = iVar6;
          (*(code *)puVar11[2])(*puVar11,puVar11,&local_c0,&local_88,piVar24);
          iVar6 = iVar6 + 1;
        }
        lVar17 = *plVar21;
        lVar14 = *(long *)(lVar17 + 0x90);
        if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
          lVar14 = FUN_01ecaf44();
          lVar17 = *plVar21;
        }
        FUN_01f09244(lVar14,*(undefined8 *)(lVar17 + 0xb0),local_160,__s_00,0,0);
        local_a0 = local_c0;
        uStack_98 = uStack_b8;
      }
    }
    else {
      lVar14 = *(long *)(*plVar21 + 0x28);
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01ecaf44(lVar14);
      }
      lVar17 = *plVar10;
      uVar22 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar22 != 0) {
        piVar24 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == lVar14) {
            puVar11 = (undefined8 *)(lVar17 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_023a64c4;
          }
          uVar22 = uVar22 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar22 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar10,lVar14,0);
LAB_023a64c4:
      uVar5 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      (*(code *)**(undefined8 **)(*plVar21 + 0x50))(&local_b0,uVar5,local_144,0);
      iVar6 = (*(code *)**(undefined8 **)(*plVar21 + 0x78))(&local_b0);
      local_a0 = local_b0;
      uStack_98 = uStack_a8;
      if (0 < iVar6) {
        iVar6 = 0;
        do {
          lVar14 = *(long *)(*plVar21 + 0x10);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = FUN_01ecaf44(lVar14);
          }
          lVar17 = *plVar10;
          uVar22 = (ulong)*(ushort *)(lVar17 + 0x12e);
          local_74 = iVar6;
          if (uVar22 != 0) {
            piVar24 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == lVar14) {
                lVar14 = lVar17 + (long)*piVar24 * 0x10 + 0x138;
                goto LAB_023a657c;
              }
              uVar22 = uVar22 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar22 != 0);
          }
          lVar14 = FUN_01ecb238(plVar10,lVar14,0);
LAB_023a657c:
          lVar14 = *(long *)(lVar14 + 8);
          local_88 = &local_74;
          piStack_80 = piVar20;
          (**(code **)(lVar14 + 0x10))(*(undefined8 *)(lVar14 + 8),lVar14,plVar10,&local_88,piVar20)
          ;
          puVar11 = *(undefined8 **)(*plVar21 + 0x70);
          local_88 = &local_74;
          piStack_80 = piVar20;
          local_74 = iVar6;
          (*(code *)puVar11[2])(*puVar11,puVar11,&local_b0,&local_88,piVar20);
          iVar6 = iVar6 + 1;
          iVar7 = (*(code *)**(undefined8 **)(*plVar21 + 0x78))(&local_b0);
          local_a0 = local_b0;
          uStack_98 = uStack_a8;
        } while (iVar6 < iVar7);
      }
    }
  }
  else {
    local_a0 = 0;
    uStack_98 = 0;
    FUN_032f358c(&local_a0,lVar14,local_144,*(undefined8 *)(*plVar21 + 0x40));
  }
LAB_023a65e8:
  if (*(long *)(local_140 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_a0,uStack_98);
LAB_023a7110:
  if (plVar10 != (long *)0x0) {
    lVar14 = *plVar10;
    uVar22 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar22 != 0) {
      piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_023a7168;
        }
        uVar22 = uVar22 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar22 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_01ecb238(plVar10,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_023a7168:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
  }
  piStack_108 = piStack_f8;
  local_110 = local_100;
  (*(code *)**(undefined8 **)(*plVar21 + 0x50))(&local_120,iVar7,local_144,0);
  (*(code *)**(undefined8 **)(*plVar21 + 0x110))(local_100,piStack_f8,local_120,uStack_118,iVar7);
  uStack_128 = uStack_118;
  local_130 = local_120;
  FUN_032f3c24(&local_110,*(undefined8 *)(*plVar21 + 0x118));
  local_a0 = local_130;
  uStack_98 = uStack_128;
  goto LAB_023a65e8;
LAB_023a6e40:
  local_a0 = local_f0;
  uStack_98 = uStack_e8;
  if (plVar10 != (long *)0x0) {
    lVar14 = *plVar10;
    uVar22 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar22 != 0) {
      piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_023a6ea0;
        }
        uVar22 = uVar22 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar22 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_01ecb238(plVar10,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_023a6ea0:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
    local_a0 = local_f0;
    uStack_98 = uStack_e8;
  }
  goto LAB_023a65e8;
LAB_023a6b48:
  local_a0 = local_e0;
  uStack_98 = uStack_d8;
  if (plVar10 != (long *)0x0) {
    lVar14 = *plVar10;
    uVar22 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar22 != 0) {
      piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
          goto FUN_023a6c30;
        }
        uVar22 = uVar22 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar22 != 0);
    }
    puVar11 = (undefined8 *)
              FUN_01ecb238(plVar10,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
FUN_023a6c30:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
    local_a0 = local_e0;
    uStack_98 = uStack_d8;
  }
  goto LAB_023a65e8;
}


