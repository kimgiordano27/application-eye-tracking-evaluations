/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$WriteArrayElement<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03a88338
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_SpaceQueryResult>
               (long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long in_x14;
  long in_x15;
  long in_x16;
  long in_x17;
  long unaff_x19;
  size_t unaff_x20;
  void *pvVar10;
  long *plVar11;
  undefined1 *__dest;
  void *pvVar12;
  undefined1 *__dest_00;
  void *unaff_x25;
  undefined1 *__dest_01;
  size_t unaff_x27;
  long *plVar13;
  long unaff_x29;
  
  uVar1 = *(uint *)(in_x14 + 0xfc);
  uVar2 = *(uint *)(in_x15 + 0xfc);
  uVar3 = *(uint *)(in_x16 + 0xfc);
  uVar4 = *(uint *)(in_x17 + 0xfc);
  uVar5 = *(uint *)(param_1 + 0xfc);
  __dest_00 = &stack0x00000000 + -(unaff_x20 + 0xf & 0x1fffffff0);
  __dest_01 = __dest_00 + -(unaff_x27 + 0xf & 0x1fffffff0);
  __dest = __dest_01 + -(param_4 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x68) = param_4;
  lVar9 = (long)__dest - (param_3 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x80) = lVar9;
  *(long *)(unaff_x29 + -0x78) = param_3;
  lVar9 = lVar9 - (param_2 + 0xfU & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x98) = lVar9;
  *(long *)(unaff_x29 + -0x90) = param_2;
  lVar9 = lVar9 - ((ulong)uVar1 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xb0) = lVar9;
  *(ulong *)(unaff_x29 + -0xa8) = (ulong)uVar1;
  lVar9 = lVar9 - ((ulong)uVar2 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -200) = lVar9;
  *(ulong *)(unaff_x29 + -0xc0) = (ulong)uVar2;
  lVar9 = lVar9 - ((ulong)uVar3 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xe0) = lVar9;
  *(ulong *)(unaff_x29 + -0xd8) = (ulong)uVar3;
  lVar9 = lVar9 - ((ulong)uVar4 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xf8) = lVar9;
  *(ulong *)(unaff_x29 + -0xf0) = (ulong)uVar4;
  *(ulong *)(unaff_x29 + -0x108) = (ulong)uVar5;
  *(ulong *)(unaff_x29 + -0x110) = lVar9 - ((ulong)uVar5 + 0xf & 0x1fffffff0);
  lVar9 = FUN_05fc572c(*(undefined8 *)(unaff_x29 + -0x50),0);
  if (lVar9 != 0) {
    plVar13 = *(long **)(unaff_x19 + 0x38);
    plVar11 = *(long **)(lVar9 + 0x38);
    if (-1 < *(int *)(*plVar13 + 0x28)) {
      unaff_x25 = (void *)(unaff_x29 + -0x18);
    }
    memcpy(__dest_00,unaff_x25,unaff_x20);
    lVar6 = thunk_FUN_032a52d0(*plVar13,__dest_00);
    if (plVar11 != (long *)0x0) {
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar11 + 0x40)), lVar7 == 0)) {

        Unity_Collections_LowLevel_Unsafe_UnsafeUtilityExtensions__AsRef<__Il2CppFullySharedGenericStructType>
        :
        uVar8 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar8,0);
      }
      if ((int)plVar11[3] != 0) {
        plVar11[4] = lVar6;
        thunk_FUN_0333a630(plVar11 + 4,lVar6);
        lVar6 = *(long *)(unaff_x19 + 0x38);
        plVar11 = *(long **)(lVar9 + 0x38);
        pvVar10 = *(void **)(unaff_x29 + -0x58);
        if (-1 < *(int *)(*(long *)(lVar6 + 8) + 0x28)) {
          pvVar10 = (void *)(unaff_x29 + -0x20);
        }
        memcpy(__dest_01,pvVar10,unaff_x27);
        lVar6 = thunk_FUN_032a52d0(*(undefined8 *)(lVar6 + 8),__dest_01);
        if (plVar11 == (long *)0x0) goto LAB_03a88920;
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar11 + 0x40)), lVar7 == 0))
        goto 
        Unity_Collections_LowLevel_Unsafe_UnsafeUtilityExtensions__AsRef<__Il2CppFullySharedGenericStructType>
        ;
        if (1 < *(uint *)(plVar11 + 3)) {
          plVar11[5] = lVar6;
          thunk_FUN_0333a630(plVar11 + 5,lVar6);
          lVar6 = *(long *)(unaff_x19 + 0x38);
          plVar11 = *(long **)(lVar9 + 0x38);
          pvVar10 = *(void **)(unaff_x29 + -0x60);
          if (-1 < *(int *)(*(long *)(lVar6 + 0x10) + 0x28)) {
            pvVar10 = (void *)(unaff_x29 + -0x28);
          }
          memcpy(__dest,pvVar10,*(size_t *)(unaff_x29 + -0x68));
          lVar6 = thunk_FUN_032a52d0(*(undefined8 *)(lVar6 + 0x10),__dest);
          if (plVar11 == (long *)0x0) goto LAB_03a88920;
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar11 + 0x40)), lVar7 == 0))
          goto 
          Unity_Collections_LowLevel_Unsafe_UnsafeUtilityExtensions__AsRef<__Il2CppFullySharedGenericStructType>
          ;
          if (2 < *(uint *)(plVar11 + 3)) {
            plVar11[6] = lVar6;
            thunk_FUN_0333a630(plVar11 + 6,lVar6);
            lVar6 = *(long *)(unaff_x19 + 0x38);
            pvVar12 = *(void **)(unaff_x29 + -0x80);
            plVar11 = *(long **)(lVar9 + 0x38);
            pvVar10 = *(void **)(unaff_x29 + -0x70);
            if (-1 < *(int *)(*(long *)(lVar6 + 0x18) + 0x28)) {
              pvVar10 = (void *)(unaff_x29 + -0x30);
            }
            memcpy(pvVar12,pvVar10,*(size_t *)(unaff_x29 + -0x78));
            lVar6 = thunk_FUN_032a52d0(*(undefined8 *)(lVar6 + 0x18),pvVar12);
            if (plVar11 == (long *)0x0) goto LAB_03a88920;
            if ((lVar6 != 0) &&
               (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar11 + 0x40)), lVar7 == 0))
            goto 
            Unity_Collections_LowLevel_Unsafe_UnsafeUtilityExtensions__AsRef<__Il2CppFullySharedGenericStructType>
            ;
            if (3 < *(uint *)(plVar11 + 3)) {
              plVar11[7] = lVar6;
              thunk_FUN_0333a630(plVar11 + 7,lVar6);
              lVar6 = *(long *)(unaff_x19 + 0x38);
              pvVar12 = *(void **)(unaff_x29 + -0x98);
              plVar11 = *(long **)(lVar9 + 0x38);
              pvVar10 = *(void **)(unaff_x29 + -0x88);
              if (-1 < *(int *)(*(long *)(lVar6 + 0x20) + 0x28)) {
                pvVar10 = (void *)(unaff_x29 + -0x38);
              }
              memcpy(pvVar12,pvVar10,*(size_t *)(unaff_x29 + -0x90));
              lVar6 = thunk_FUN_032a52d0(*(undefined8 *)(lVar6 + 0x20),pvVar12);
              if (plVar11 == (long *)0x0) goto LAB_03a88920;
              if ((lVar6 != 0) &&
                 (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar11 + 0x40)), lVar7 == 0))
              goto 
              Unity_Collections_LowLevel_Unsafe_UnsafeUtilityExtensions__AsRef<__Il2CppFullySharedGenericStructType>
              ;
              if (4 < *(uint *)(plVar11 + 3)) {
                plVar11[8] = lVar6;
                thunk_FUN_0333a630(plVar11 + 8,lVar6);
                lVar6 = *(long *)(unaff_x19 + 0x38);
                pvVar12 = *(void **)(unaff_x29 + -0xb0);
                plVar11 = *(long **)(lVar9 + 0x38);
                pvVar10 = *(void **)(unaff_x29 + -0xa0);
                if (-1 < *(int *)(*(long *)(lVar6 + 0x28) + 0x28)) {
                  pvVar10 = (void *)(unaff_x29 + -0x40);
                }
                memcpy(pvVar12,pvVar10,*(size_t *)(unaff_x29 + -0xa8));
                lVar6 = thunk_FUN_032a52d0(*(undefined8 *)(lVar6 + 0x28),pvVar12);
                if (plVar11 == (long *)0x0) goto LAB_03a88920;
                if ((lVar6 != 0) &&
                   (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar11 + 0x40)), lVar7 == 0))
                goto 
                Unity_Collections_LowLevel_Unsafe_UnsafeUtilityExtensions__AsRef<__Il2CppFullySharedGenericStructType>
                ;
                if (5 < *(uint *)(plVar11 + 3)) {
                  plVar11[9] = lVar6;
                  thunk_FUN_0333a630(plVar11 + 9,lVar6);
                  lVar6 = *(long *)(unaff_x19 + 0x38);
                  pvVar12 = *(void **)(unaff_x29 + -200);
                  plVar11 = *(long **)(lVar9 + 0x38);
                  pvVar10 = *(void **)(unaff_x29 + -0xb8);
                  if (-1 < *(int *)(*(long *)(lVar6 + 0x30) + 0x28)) {
                    pvVar10 = (void *)(unaff_x29 + -0x48);
                  }
                  memcpy(pvVar12,pvVar10,*(size_t *)(unaff_x29 + -0xc0));
                  lVar6 = thunk_FUN_032a52d0(*(undefined8 *)(lVar6 + 0x30),pvVar12);
                  if (plVar11 == (long *)0x0) goto LAB_03a88920;
                  if ((lVar6 != 0) &&
                     (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar11 + 0x40)), lVar7 == 0
                     )) goto 
                        Unity_Collections_LowLevel_Unsafe_UnsafeUtilityExtensions__AsRef<__Il2CppFullySharedGenericStructType>
                        ;
                  if (6 < *(uint *)(plVar11 + 3)) {
                    plVar11[10] = lVar6;
                    thunk_FUN_0333a630(plVar11 + 10,lVar6);
                    lVar6 = *(long *)(unaff_x19 + 0x38);
                    pvVar12 = *(void **)(unaff_x29 + -0xe0);
                    plVar11 = *(long **)(lVar9 + 0x38);
                    pvVar10 = *(void **)(unaff_x29 + -0xd0);
                    if (-1 < *(int *)(*(long *)(lVar6 + 0x38) + 0x28)) {
                      pvVar10 = (void *)(unaff_x29 + 0x60);
                    }
                    memcpy(pvVar12,pvVar10,*(size_t *)(unaff_x29 + -0xd8));
                    lVar6 = thunk_FUN_032a52d0(*(undefined8 *)(lVar6 + 0x38),pvVar12);
                    if (plVar11 == (long *)0x0) goto LAB_03a88920;
                    if ((lVar6 != 0) &&
                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar11 + 0x40)),
                       lVar7 == 0))
                    goto 
                    Unity_Collections_LowLevel_Unsafe_UnsafeUtilityExtensions__AsRef<__Il2CppFullySharedGenericStructType>
                    ;
                    if (7 < *(uint *)(plVar11 + 3)) {
                      plVar11[0xb] = lVar6;
                      thunk_FUN_0333a630(plVar11 + 0xb,lVar6);
                      lVar6 = *(long *)(unaff_x19 + 0x38);
                      pvVar12 = *(void **)(unaff_x29 + -0xf8);
                      plVar11 = *(long **)(lVar9 + 0x38);
                      pvVar10 = *(void **)(unaff_x29 + -0xe8);
                      if (-1 < *(int *)(*(long *)(lVar6 + 0x40) + 0x28)) {
                        pvVar10 = (void *)(unaff_x29 + 0x68);
                      }
                      memcpy(pvVar12,pvVar10,*(size_t *)(unaff_x29 + -0xf0));
                      lVar6 = thunk_FUN_032a52d0(*(undefined8 *)(lVar6 + 0x40),pvVar12);
                      if (plVar11 == (long *)0x0) goto LAB_03a88920;
                      if ((lVar6 != 0) &&
                         (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar11 + 0x40)),
                         lVar7 == 0))
                      goto 
                      Unity_Collections_LowLevel_Unsafe_UnsafeUtilityExtensions__AsRef<__Il2CppFullySharedGenericStructType>
                      ;
                      if (8 < *(uint *)(plVar11 + 3)) {
                        plVar11[0xc] = lVar6;
                        thunk_FUN_0333a630(plVar11 + 0xc,lVar6);
                        uVar8 = FUN_05fb2df0(lVar9,0);
                        lVar6 = *(long *)(*(long *)(unaff_x29 + -0x50) + 0x18);
                        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_032d5ee8();
                        }
                        FUN_05fb3740(lVar6,lVar9,0);
                        FUN_05fb2e6c(lVar9,uVar8,0);
                        pvVar10 = *(void **)(unaff_x29 + 0x70);
                        uVar8 = FUN_05fa802c(lVar9,0);
                        lVar9 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x48);
                        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                          lVar9 = FUN_032934b8(lVar9);
                        }
                        pvVar12 = (void *)FUN_032d5de0(uVar8,lVar9,
                                                       *(undefined8 *)(unaff_x29 + -0x110));
                        memcpy(pvVar10,pvVar12,*(size_t *)(unaff_x29 + -0x108));
                        if (*(long *)(*(long *)(unaff_x29 + -0x100) + 0x28) ==
                            *(long *)(unaff_x29 + -0x10)) {
                          return;
                        }
                    /* WARNING: Subroutine does not return */
                        __stack_chk_fail();
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
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
  }
LAB_03a88920:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


