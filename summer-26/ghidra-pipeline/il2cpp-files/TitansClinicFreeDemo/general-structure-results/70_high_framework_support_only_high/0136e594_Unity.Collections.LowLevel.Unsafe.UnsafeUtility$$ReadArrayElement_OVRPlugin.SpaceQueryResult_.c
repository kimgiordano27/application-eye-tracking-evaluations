/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ReadArrayElement<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0136e594
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement<OVRPlugin_SpaceQueryResult>
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  void *pvVar7;
  void *__s;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong __n;
  long in_x4;
  long lVar11;
  void *pvVar12;
  ulong __n_00;
  ulong uVar13;
  undefined8 uVar14;
  void *pvVar15;
  long *plVar16;
  long unaff_x29;
  
  *(long *)(unaff_x29 + -0x50) = param_1;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(param_1 + 0x28);
  plVar16 = (long *)(in_x4 + 0x38);
  lVar11 = *plVar16;
  if (lVar11 == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3ee0);
    thunk_FUN_01279b34(PTR_DAT_027b3ee8);
    thunk_FUN_01279b34(PTR_DAT_027b3ef0);
    thunk_FUN_01279b34(PTR_DAT_027b3ef8);
    thunk_FUN_01279b34(PTR_DAT_027b1de0);
    thunk_FUN_01279b34(PTR_DAT_027b3f00);
    thunk_FUN_01279b34(PTR_DAT_027b2350);
    thunk_FUN_01279b34(PTR_DAT_027b3f08);
    thunk_FUN_01279b34(PTR_DAT_027b3998);
    thunk_FUN_01279b34(PTR_DAT_027b1aa8);
    thunk_FUN_01279b34(PTR_DAT_027b3f10);
    thunk_FUN_01279b34(PTR_DAT_027b1c18);
    thunk_FUN_01279b34(PTR_DAT_027b3f18);
    thunk_FUN_01279b34(PTR_DAT_027b3a60);
    thunk_FUN_01279b34(PTR_DAT_027b3f20);
    thunk_FUN_01279b34(PTR_DAT_027b1ab0);
    thunk_FUN_01279b34(PTR_DAT_027b3f28);
    thunk_FUN_01279b34(PTR_DAT_027b38b8);
    thunk_FUN_01279b34(PTR_DAT_027b3f30);
    thunk_FUN_01279b34(PTR_DAT_027b3f38);
    thunk_FUN_01279b34(PTR_DAT_027b3a68);
    thunk_FUN_01279b34(PTR_DAT_027b3f40);
    thunk_FUN_01279b34(PTR_DAT_027b2aa0);
    thunk_FUN_01279b34(PTR_DAT_027b3f48);
    thunk_FUN_01279b34(PTR_DAT_027b37e0);
    thunk_FUN_01279b34(PTR_DAT_027b32e0);
    thunk_FUN_01279b34(PTR_DAT_027b3f50);
    lVar11 = *(long *)(in_x4 + 0x38);
    if (lVar11 == 0) {
      FUN_0122e7a4(in_x4);
      lVar11 = *(long *)(in_x4 + 0x38);
    }
  }
  __n_00 = (ulong)*(uint *)(*(long *)(lVar11 + 8) + 0xfc);
  uVar13 = __n_00 + 0xf & 0x1fffffff0;
  *(ulong *)(unaff_x29 + -0x30) = (long)&stack0x00000000 - uVar13;
  pvVar7 = (void *)(((long)&stack0x00000000 - uVar13) - uVar13);
  *(void **)(unaff_x29 + -0x38) = pvVar7;
  memset(pvVar7,0,__n_00);
  pvVar7 = (void *)((long)pvVar7 - uVar13);
  memset(pvVar7,0,__n_00);
  pvVar12 = (void *)((long)pvVar7 - uVar13);
  memset(pvVar12,0,__n_00);
  pvVar15 = (void *)((long)pvVar12 - uVar13);
  memset(pvVar15,0,__n_00);
  if (*(long *)(unaff_x29 + -0x28) == 0) {
    uVar13 = 0;

    Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<UnsafeList<int>>>
    :
    __s = (void *)0x0;
  }
  else {
    uVar13 = *(ulong *)(*(long *)(unaff_x29 + -0x28) + 0x18);
    if (uVar13 == 0)
    goto 
    Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<UnsafeList<int>>>
    ;
    __n = -(uVar13 >> 0x1f & 1) & 0xfffffff800000000 | (uVar13 & 0xffffffff) << 3;
    if ((uVar13 & 0xffffffff) == 0) {
      __s = (void *)0x0;
    }
    else {
      __s = (void *)((long)pvVar15 - (__n + 0xf & 0xfffffffffffffff0));
    }
    memset(__s,0,__n);
    if ((int)uVar13 < 0) {
      FUN_01f877a8(0);
    }
  }
  *(ulong *)(unaff_x29 + -0x48) = uVar13 & 0xffffffff;
  *(void **)(unaff_x29 + -0x40) = __s;
  FUN_023e459c(*(undefined8 *)(unaff_x29 + -0x28),__s,uVar13 & 0xffffffff,0);
  puVar1 = PTR_DAT_027b32e0;
  uVar14 = *(undefined8 *)*plVar16;
  if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar14 = FUN_01f7d8a0(uVar14,0);
  puVar2 = PTR_DAT_027b3ef0;
  if (*(int *)(*(long *)PTR_DAT_027b3ef0 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar13 = FUN_023f3158(uVar14,0);
  uVar14 = *(undefined8 *)*plVar16;
  if ((uVar13 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar14 = FUN_01f7d8a0(uVar14,0);
    uVar8 = FUN_01f7d8a0(*(undefined8 *)PTR_DAT_027b37e0,0);
    uVar13 = FUN_01f7f404(uVar14,uVar8,0);
    if ((uVar13 & 1) == 0) {
      uVar14 = *(undefined8 *)*plVar16;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar14 = FUN_01f7d8a0(uVar14,0);
      uVar8 = FUN_01f7d8a0(*(undefined8 *)PTR_DAT_027b3ee0,0);
      uVar13 = FUN_01f7f404(uVar14,uVar8,0);
      if ((uVar13 & 1) != 0) {
        uVar14 = FUN_023eee0c(*(undefined8 *)(param_2 + 0x18),0);
        uVar14 = FUN_023e5b3c(uVar14,*(undefined8 *)(unaff_x29 + -0x60),
                              *(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x48),
                              0);
        uVar13 = FUN_01fb0274(uVar14,0,0);
        if ((uVar13 & 1) == 0) {
          uVar14 = FUN_023f2fc4(uVar14,0);
          lVar11 = *(long *)(*plVar16 + 8);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0122e748(lVar11);
          }
          pvVar15 = (void *)FUN_01230b9c(uVar14,lVar11,*(undefined8 *)(unaff_x29 + -0x30));
        }
        else {
          memset(pvVar7,0,__n_00);
          pvVar15 = *(void **)(unaff_x29 + -0x30);
          memcpy(pvVar15,pvVar7,__n_00);
        }
        memcpy(pvVar12,pvVar15,__n_00);
        pvVar7 = *(void **)(unaff_x29 + -0x38);
        pvVar15 = pvVar12;
        goto LAB_0136f288;
      }
      uVar14 = *(undefined8 *)*plVar16;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar14 = FUN_01f7d8a0(uVar14,0);
      uVar8 = FUN_01f7d8a0(*(undefined8 *)PTR_DAT_027b3ee8,0);
      uVar13 = FUN_01f7f404(uVar14,uVar8,0);
      if ((uVar13 & 1) != 0) {
        uVar14 = FUN_023eee0c(*(undefined8 *)(param_2 + 0x18),0);
        uVar14 = FUN_023e5b3c(uVar14,*(undefined8 *)(unaff_x29 + -0x60),
                              *(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x48),
                              0);
        uVar13 = FUN_01fb0274(uVar14,0,0);
        if ((uVar13 & 1) == 0) {
          uVar14 = FUN_023f19e8(uVar14,0);
          lVar11 = *(long *)(*plVar16 + 8);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0122e748(lVar11);
          }
          pvVar12 = (void *)FUN_01230b9c(uVar14,lVar11,*(undefined8 *)(unaff_x29 + -0x30));
        }
        else {
          memset(pvVar7,0,__n_00);
          pvVar12 = *(void **)(unaff_x29 + -0x30);
          memcpy(pvVar12,pvVar7,__n_00);
        }
        memcpy(pvVar15,pvVar12,__n_00);
        pvVar7 = *(void **)(unaff_x29 + -0x38);
        goto LAB_0136f288;
      }
      uVar14 = *(undefined8 *)PTR_DAT_027b3f30;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar14 = FUN_01f7d8a0(uVar14,0);
      uVar8 = FUN_01f7d8a0(*(undefined8 *)*plVar16,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar13 = FUN_023f316c(uVar14,uVar8,0);
      if ((uVar13 & 1) == 0) {
        uVar14 = *(undefined8 *)*plVar16;
        lVar11 = thunk_FUN_01279b34(PTR_DAT_027b32e0);
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        plVar16 = (long *)FUN_01f7d8a0(uVar14,0);
        if (plVar16 == (long *)0x0) {
          uVar14 = thunk_FUN_01279b34(PTR_DAT_027b3f58);
          uVar8 = 0;
        }
        else {
          uVar14 = thunk_FUN_01279b34(PTR_DAT_027b3f58);
          uVar8 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
        }
        uVar9 = thunk_FUN_01279b34(PTR_DAT_027b3f60);
        uVar14 = FUN_01e68bb0(uVar14,uVar8,uVar9,0);
        thunk_FUN_01279b34(PTR_DAT_027b1d70);
        uVar8 = thunk_FUN_0124bba8();
        FUN_01f9c4b8(uVar8,uVar14,0);
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar8,in_x4);
      }
      uVar14 = FUN_023eee0c(*(undefined8 *)(param_2 + 0x18),0);
      uVar14 = FUN_023e5b3c(uVar14,*(undefined8 *)(unaff_x29 + -0x60),
                            *(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x48),0)
      ;
      pvVar15 = *(void **)(unaff_x29 + -0x30);
      puVar10 = *(undefined8 **)(*plVar16 + 0x10);
      uVar8 = *puVar10;
      *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0x10;
      *(void **)(unaff_x29 + -0x18) = pvVar15;
      *(undefined8 *)(unaff_x29 + -0x10) = uVar14;
      (*(code *)puVar10[2])(uVar8,puVar10,0,unaff_x29 + -0x20,pvVar15);
LAB_0136ee84:
      pvVar7 = *(void **)(unaff_x29 + -0x38);
      goto LAB_0136f288;
    }
    uVar14 = FUN_023eee0c(*(undefined8 *)(param_2 + 0x18),0);
    uVar14 = FUN_023ecbec(uVar14,*(undefined8 *)(unaff_x29 + -0x60),
                          *(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x48),0);
    lVar11 = *(long *)(*plVar16 + 8);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0122e748(lVar11);
    }
    pvVar15 = (void *)FUN_01230b9c(uVar14,lVar11,*(undefined8 *)(unaff_x29 + -0x30));
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar14 = FUN_01f7d8a0(uVar14,0);
    uVar8 = FUN_01f7d8a0(*(undefined8 *)PTR_DAT_027b3f20,0);
    uVar13 = FUN_01f7f404(uVar14,uVar8,0);
    if ((uVar13 & 1) == 0) {
      uVar14 = *(undefined8 *)*plVar16;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar14 = FUN_01f7d8a0(uVar14,0);
      uVar8 = FUN_01f7d8a0(*(undefined8 *)PTR_DAT_027b3ef8,0);
      uVar13 = FUN_01f7f404(uVar14,uVar8,0);
      if ((uVar13 & 1) == 0) {
        uVar14 = *(undefined8 *)*plVar16;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar14 = FUN_01f7d8a0(uVar14,0);
        uVar8 = FUN_01f7d8a0(*(undefined8 *)PTR_DAT_027b3f00,0);
        uVar13 = FUN_01f7f404(uVar14,uVar8,0);
        if ((uVar13 & 1) == 0) {
          uVar14 = *(undefined8 *)*plVar16;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar14 = FUN_01f7d8a0(uVar14,0);
          uVar8 = FUN_01f7d8a0(*(undefined8 *)PTR_DAT_027b3f38,0);
          uVar13 = FUN_01f7f404(uVar14,uVar8,0);
          if ((uVar13 & 1) == 0) {
            uVar14 = *(undefined8 *)*plVar16;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar14 = FUN_01f7d8a0(uVar14,0);
            uVar8 = FUN_01f7d8a0(*(undefined8 *)PTR_DAT_027b3f18,0);
            uVar13 = FUN_01f7f404(uVar14,uVar8,0);
            if ((uVar13 & 1) == 0) {
              uVar14 = *(undefined8 *)*plVar16;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              uVar14 = FUN_01f7d8a0(uVar14,0);
              uVar8 = FUN_01f7d8a0(*(undefined8 *)PTR_DAT_027b3f28,0);
              uVar13 = FUN_01f7f404(uVar14,uVar8,0);
              if ((uVar13 & 1) == 0) {
                uVar14 = *(undefined8 *)*plVar16;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01220628();
                }
                uVar14 = FUN_01f7d8a0(uVar14,0);
                uVar8 = FUN_01f7d8a0(*(undefined8 *)PTR_DAT_027b3f40,0);
                uVar13 = FUN_01f7f404(uVar14,uVar8,0);
                if ((uVar13 & 1) == 0) {
                  uVar14 = *(undefined8 *)*plVar16;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01220628();
                  }
                  uVar14 = FUN_01f7d8a0(uVar14,0);
                  uVar8 = FUN_01f7d8a0(*(undefined8 *)PTR_DAT_027b3f10,0);
                  uVar13 = FUN_01f7f404(uVar14,uVar8,0);
                  if ((uVar13 & 1) == 0) {
                    uVar14 = *(undefined8 *)*plVar16;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_01220628();
                    }
                    uVar14 = FUN_01f7d8a0(uVar14,0);
                    uVar8 = FUN_01f7d8a0(*(undefined8 *)PTR_DAT_027b3f08,0);
                    uVar13 = FUN_01f7f404(uVar14,uVar8,0);
                    if ((uVar13 & 1) == 0) {
                      memset(pvVar7,0,__n_00);
                      pvVar15 = *(void **)(unaff_x29 + -0x30);
                      memcpy(pvVar15,pvVar7,__n_00);
                      goto LAB_0136ee84;
                    }
                    uVar14 = FUN_023eee0c(*(undefined8 *)(param_2 + 0x18),0);
                    uVar5 = FUN_023ecc64(uVar14,*(undefined8 *)(unaff_x29 + -0x60),
                                         *(undefined8 *)(unaff_x29 + -0x40),
                                         *(undefined8 *)(unaff_x29 + -0x48),0);
                    puVar1 = PTR_DAT_027b3998;
                    *(undefined2 *)(unaff_x29 + -0x20) = uVar5;
                    uVar14 = thunk_FUN_0124b7d8(*(undefined8 *)puVar1,unaff_x29 + -0x20);
                    lVar11 = *(long *)(*plVar16 + 8);
                    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                      lVar11 = FUN_0122e748(lVar11);
                    }
                    pvVar15 = (void *)FUN_01230b9c(uVar14,lVar11,*(undefined8 *)(unaff_x29 + -0x30))
                    ;
                  }
                  else {
                    uVar14 = FUN_023eee0c(*(undefined8 *)(param_2 + 0x18),0);
                    uVar14 = FUN_023eccdc(uVar14,*(undefined8 *)(unaff_x29 + -0x60),
                                          *(undefined8 *)(unaff_x29 + -0x40),
                                          *(undefined8 *)(unaff_x29 + -0x48),0);
                    puVar1 = PTR_DAT_027b1c18;
                    *(undefined8 *)(unaff_x29 + -0x20) = uVar14;
                    uVar14 = thunk_FUN_0124b7d8(*(undefined8 *)puVar1,unaff_x29 + -0x20);
                    lVar11 = *(long *)(*plVar16 + 8);
                    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                      lVar11 = FUN_0122e748(lVar11);
                    }
                    pvVar15 = (void *)FUN_01230b9c(uVar14,lVar11,*(undefined8 *)(unaff_x29 + -0x30))
                    ;
                  }
                }
                else {
                  uVar14 = FUN_023eee0c(*(undefined8 *)(param_2 + 0x18),0);
                  uVar6 = FUN_023ecd60(uVar14,*(undefined8 *)(unaff_x29 + -0x60),
                                       *(undefined8 *)(unaff_x29 + -0x40),
                                       *(undefined8 *)(unaff_x29 + -0x48),0);
                  puVar1 = PTR_DAT_027b2aa0;
                  *(undefined4 *)(unaff_x29 + -0x20) = uVar6;
                  uVar14 = thunk_FUN_0124b7d8(*(undefined8 *)puVar1,unaff_x29 + -0x20);
                  lVar11 = *(long *)(*plVar16 + 8);
                  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                    lVar11 = FUN_0122e748(lVar11);
                  }
                  pvVar15 = (void *)FUN_01230b9c(uVar14,lVar11,*(undefined8 *)(unaff_x29 + -0x30));
                }
              }
              else {
                uVar14 = FUN_023eee0c(*(undefined8 *)(param_2 + 0x18),0);
                uVar14 = FUN_023ecde4(uVar14,*(undefined8 *)(unaff_x29 + -0x60),
                                      *(undefined8 *)(unaff_x29 + -0x40),
                                      *(undefined8 *)(unaff_x29 + -0x48),0);
                puVar1 = PTR_DAT_027b38b8;
                *(undefined8 *)(unaff_x29 + -0x20) = uVar14;
                uVar14 = thunk_FUN_0124b7d8(*(undefined8 *)puVar1,unaff_x29 + -0x20);
                lVar11 = *(long *)(*plVar16 + 8);
                if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                  lVar11 = FUN_0122e748(lVar11);
                }
                pvVar15 = (void *)FUN_01230b9c(uVar14,lVar11,*(undefined8 *)(unaff_x29 + -0x30));
              }
            }
            else {
              uVar14 = FUN_023eee0c(*(undefined8 *)(param_2 + 0x18),0);
              uVar5 = FUN_023ece5c(uVar14,*(undefined8 *)(unaff_x29 + -0x60),
                                   *(undefined8 *)(unaff_x29 + -0x40),
                                   *(undefined8 *)(unaff_x29 + -0x48),0);
              puVar1 = PTR_DAT_027b3a60;
              *(undefined2 *)(unaff_x29 + -0x20) = uVar5;
              uVar14 = thunk_FUN_0124b7d8(*(undefined8 *)puVar1,unaff_x29 + -0x20);
              lVar11 = *(long *)(*plVar16 + 8);
              if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                lVar11 = FUN_0122e748(lVar11);
              }
              pvVar15 = (void *)FUN_01230b9c(uVar14,lVar11,*(undefined8 *)(unaff_x29 + -0x30));
            }
          }
          else {
            uVar14 = FUN_023eee0c(*(undefined8 *)(param_2 + 0x18),0);
            uVar4 = FUN_023eced4(uVar14,*(undefined8 *)(unaff_x29 + -0x60),
                                 *(undefined8 *)(unaff_x29 + -0x40),
                                 *(undefined8 *)(unaff_x29 + -0x48),0);
            puVar1 = PTR_DAT_027b3a68;
            *(undefined1 *)(unaff_x29 + -0x20) = uVar4;
            uVar14 = thunk_FUN_0124b7d8(*(undefined8 *)puVar1,unaff_x29 + -0x20);
            lVar11 = *(long *)(*plVar16 + 8);
            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_0122e748(lVar11);
            }
            pvVar15 = (void *)FUN_01230b9c(uVar14,lVar11,*(undefined8 *)(unaff_x29 + -0x30));
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_027b1aa8 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          FUN_02402944(*(undefined8 *)PTR_DAT_027b3f50,0);
          uVar14 = FUN_023eee0c(*(undefined8 *)(param_2 + 0x18),0);
          uVar4 = FUN_023eced4(uVar14,*(undefined8 *)(unaff_x29 + -0x60),
                               *(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x48)
                               ,0);
          puVar1 = PTR_DAT_027b2350;
          *(undefined1 *)(unaff_x29 + -0x20) = uVar4;
          uVar14 = thunk_FUN_0124b7d8(*(undefined8 *)puVar1,unaff_x29 + -0x20);
          lVar11 = *(long *)(*plVar16 + 8);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_0122e748(lVar11);
          }
          pvVar15 = (void *)FUN_01230b9c(uVar14,lVar11,*(undefined8 *)(unaff_x29 + -0x30));
        }
      }
      else {
        uVar14 = FUN_023eee0c(*(undefined8 *)(param_2 + 0x18),0);
        bVar3 = FUN_023ecf4c(uVar14,*(undefined8 *)(unaff_x29 + -0x60),
                             *(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x48),0
                            );
        puVar1 = PTR_DAT_027b1de0;
        *(byte *)(unaff_x29 + -0x20) = bVar3 & 1;
        uVar14 = thunk_FUN_0124b7d8(*(undefined8 *)puVar1,unaff_x29 + -0x20);
        lVar11 = *(long *)(*plVar16 + 8);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_0122e748(lVar11);
        }
        pvVar15 = (void *)FUN_01230b9c(uVar14,lVar11,*(undefined8 *)(unaff_x29 + -0x30));
      }
    }
    else {
      uVar14 = FUN_023eee0c(*(undefined8 *)(param_2 + 0x18),0);
      uVar6 = FUN_023ecfc4(uVar14,*(undefined8 *)(unaff_x29 + -0x60),
                           *(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x48),0);
      puVar1 = PTR_DAT_027b1ab0;
      *(undefined4 *)(unaff_x29 + -0x20) = uVar6;
      uVar14 = thunk_FUN_0124b7d8(*(undefined8 *)puVar1,unaff_x29 + -0x20);
      lVar11 = *(long *)(*plVar16 + 8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0122e748(lVar11);
      }
      pvVar15 = (void *)FUN_01230b9c(uVar14,lVar11,*(undefined8 *)(unaff_x29 + -0x30));
    }
  }
  pvVar7 = *(void **)(unaff_x29 + -0x38);
LAB_0136f288:
  memcpy(pvVar7,pvVar15,__n_00);
  thunk_FUN_023e4718(*(undefined8 *)(unaff_x29 + -0x28),*(undefined8 *)(unaff_x29 + -0x40),
                     *(undefined8 *)(unaff_x29 + -0x48),0);
  pvVar15 = *(void **)(unaff_x29 + -0x30);
  memcpy(pvVar15,*(void **)(unaff_x29 + -0x38),__n_00);
  memcpy(*(void **)(unaff_x29 + -0x58),pvVar15,__n_00);
  if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


