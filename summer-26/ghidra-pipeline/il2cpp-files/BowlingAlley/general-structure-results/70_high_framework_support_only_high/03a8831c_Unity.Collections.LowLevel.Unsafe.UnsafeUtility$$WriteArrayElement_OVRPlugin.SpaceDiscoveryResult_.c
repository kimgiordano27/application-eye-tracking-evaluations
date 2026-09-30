/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$WriteArrayElement<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03a8831c
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


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_SpaceDiscoveryResult>
               (long param_1)

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
  long in_x9;
  long in_x10;
  ulong uVar10;
  long in_x11;
  ulong uVar11;
  long in_x12;
  ulong uVar12;
  long in_x13;
  ulong uVar13;
  long in_x14;
  long unaff_x19;
  void *pvVar14;
  long *plVar15;
  undefined1 *__dest;
  void *pvVar16;
  undefined1 *__dest_00;
  void *unaff_x25;
  undefined1 *__dest_01;
  long *plVar17;
  long unaff_x29;
  
  uVar1 = *(uint *)(in_x9 + 0xfc);
  uVar2 = *(uint *)(in_x10 + 0xfc);
  uVar3 = *(uint *)(in_x13 + 0xfc);
  uVar4 = *(uint *)(in_x12 + 0xfc);
  uVar5 = *(uint *)(in_x14 + 0xfc);
  uVar13 = (ulong)*(uint *)(*(long *)(param_1 + 0x30) + 0xfc);
  uVar12 = (ulong)*(uint *)(*(long *)(param_1 + 0x38) + 0xfc);
  uVar11 = (ulong)*(uint *)(*(long *)(param_1 + 0x40) + 0xfc);
  uVar10 = (ulong)*(uint *)(*(long *)(param_1 + 0x48) + 0xfc);
  __dest_00 = &stack0x00000000 + -((ulong)uVar1 + 0xf & 0x1fffffff0);
  __dest_01 = __dest_00 + -((ulong)uVar2 + 0xf & 0x1fffffff0);
  __dest = __dest_01 + -((ulong)*(uint *)(in_x11 + 0xfc) + 0xf & 0x1fffffff0);
  *(ulong *)(unaff_x29 + -0x68) = (ulong)*(uint *)(in_x11 + 0xfc);
  lVar9 = (long)__dest - ((ulong)uVar4 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x80) = lVar9;
  *(ulong *)(unaff_x29 + -0x78) = (ulong)uVar4;
  lVar9 = lVar9 - ((ulong)uVar3 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x98) = lVar9;
  *(ulong *)(unaff_x29 + -0x90) = (ulong)uVar3;
  lVar9 = lVar9 - ((ulong)uVar5 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xb0) = lVar9;
  *(ulong *)(unaff_x29 + -0xa8) = (ulong)uVar5;
  lVar9 = lVar9 - (uVar13 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -200) = lVar9;
  *(ulong *)(unaff_x29 + -0xc0) = uVar13;
  lVar9 = lVar9 - (uVar12 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xe0) = lVar9;
  *(ulong *)(unaff_x29 + -0xd8) = uVar12;
  lVar9 = lVar9 - (uVar11 + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xf8) = lVar9;
  *(ulong *)(unaff_x29 + -0xf0) = uVar11;
  *(ulong *)(unaff_x29 + -0x108) = uVar10;
  *(ulong *)(unaff_x29 + -0x110) = lVar9 - (uVar10 + 0xf & 0x1fffffff0);
  lVar9 = FUN_05fc572c(*(undefined8 *)(unaff_x29 + -0x50),0);
  if (lVar9 != 0) {
    plVar17 = *(long **)(unaff_x19 + 0x38);
    plVar15 = *(long **)(lVar9 + 0x38);
    if (-1 < *(int *)(*plVar17 + 0x28)) {
      unaff_x25 = (void *)(unaff_x29 + -0x18);
    }
    memcpy(__dest_00,unaff_x25,(ulong)uVar1);
    lVar6 = thunk_FUN_032a52d0(*plVar17,__dest_00);
    if (plVar15 != (long *)0x0) {
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar15 + 0x40)), lVar7 == 0)) {

        Unity_Collections_LowLevel_Unsafe_UnsafeUtilityExtensions__AsRef<__Il2CppFullySharedGenericStructType>
        :
        uVar8 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar8,0);
      }
      if ((int)plVar15[3] != 0) {
        plVar15[4] = lVar6;
        thunk_FUN_0333a630(plVar15 + 4,lVar6);
        lVar6 = *(long *)(unaff_x19 + 0x38);
        plVar15 = *(long **)(lVar9 + 0x38);
        pvVar14 = *(void **)(unaff_x29 + -0x58);
        if (-1 < *(int *)(*(long *)(lVar6 + 8) + 0x28)) {
          pvVar14 = (void *)(unaff_x29 + -0x20);
        }
        memcpy(__dest_01,pvVar14,(ulong)uVar2);
        lVar6 = thunk_FUN_032a52d0(*(undefined8 *)(lVar6 + 8),__dest_01);
        if (plVar15 == (long *)0x0) goto LAB_03a88920;
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar15 + 0x40)), lVar7 == 0))
        goto 
        Unity_Collections_LowLevel_Unsafe_UnsafeUtilityExtensions__AsRef<__Il2CppFullySharedGenericStructType>
        ;
        if (1 < *(uint *)(plVar15 + 3)) {
          plVar15[5] = lVar6;
          thunk_FUN_0333a630(plVar15 + 5,lVar6);
          lVar6 = *(long *)(unaff_x19 + 0x38);
          plVar15 = *(long **)(lVar9 + 0x38);
          pvVar14 = *(void **)(unaff_x29 + -0x60);
          if (-1 < *(int *)(*(long *)(lVar6 + 0x10) + 0x28)) {
            pvVar14 = (void *)(unaff_x29 + -0x28);
          }
          memcpy(__dest,pvVar14,*(size_t *)(unaff_x29 + -0x68));
          lVar6 = thunk_FUN_032a52d0(*(undefined8 *)(lVar6 + 0x10),__dest);
          if (plVar15 == (long *)0x0) goto LAB_03a88920;
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar15 + 0x40)), lVar7 == 0))
          goto 
          Unity_Collections_LowLevel_Unsafe_UnsafeUtilityExtensions__AsRef<__Il2CppFullySharedGenericStructType>
          ;
          if (2 < *(uint *)(plVar15 + 3)) {
            plVar15[6] = lVar6;
            thunk_FUN_0333a630(plVar15 + 6,lVar6);
            lVar6 = *(long *)(unaff_x19 + 0x38);
            pvVar16 = *(void **)(unaff_x29 + -0x80);
            plVar15 = *(long **)(lVar9 + 0x38);
            pvVar14 = *(void **)(unaff_x29 + -0x70);
            if (-1 < *(int *)(*(long *)(lVar6 + 0x18) + 0x28)) {
              pvVar14 = (void *)(unaff_x29 + -0x30);
            }
            memcpy(pvVar16,pvVar14,*(size_t *)(unaff_x29 + -0x78));
            lVar6 = thunk_FUN_032a52d0(*(undefined8 *)(lVar6 + 0x18),pvVar16);
            if (plVar15 == (long *)0x0) goto LAB_03a88920;
            if ((lVar6 != 0) &&
               (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar15 + 0x40)), lVar7 == 0))
            goto 
            Unity_Collections_LowLevel_Unsafe_UnsafeUtilityExtensions__AsRef<__Il2CppFullySharedGenericStructType>
            ;
            if (3 < *(uint *)(plVar15 + 3)) {
              plVar15[7] = lVar6;
              thunk_FUN_0333a630(plVar15 + 7,lVar6);
              lVar6 = *(long *)(unaff_x19 + 0x38);
              pvVar16 = *(void **)(unaff_x29 + -0x98);
              plVar15 = *(long **)(lVar9 + 0x38);
              pvVar14 = *(void **)(unaff_x29 + -0x88);
              if (-1 < *(int *)(*(long *)(lVar6 + 0x20) + 0x28)) {
                pvVar14 = (void *)(unaff_x29 + -0x38);
              }
              memcpy(pvVar16,pvVar14,*(size_t *)(unaff_x29 + -0x90));
              lVar6 = thunk_FUN_032a52d0(*(undefined8 *)(lVar6 + 0x20),pvVar16);
              if (plVar15 == (long *)0x0) goto LAB_03a88920;
              if ((lVar6 != 0) &&
                 (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar15 + 0x40)), lVar7 == 0))
              goto 
              Unity_Collections_LowLevel_Unsafe_UnsafeUtilityExtensions__AsRef<__Il2CppFullySharedGenericStructType>
              ;
              if (4 < *(uint *)(plVar15 + 3)) {
                plVar15[8] = lVar6;
                thunk_FUN_0333a630(plVar15 + 8,lVar6);
                lVar6 = *(long *)(unaff_x19 + 0x38);
                pvVar16 = *(void **)(unaff_x29 + -0xb0);
                plVar15 = *(long **)(lVar9 + 0x38);
                pvVar14 = *(void **)(unaff_x29 + -0xa0);
                if (-1 < *(int *)(*(long *)(lVar6 + 0x28) + 0x28)) {
                  pvVar14 = (void *)(unaff_x29 + -0x40);
                }
                memcpy(pvVar16,pvVar14,*(size_t *)(unaff_x29 + -0xa8));
                lVar6 = thunk_FUN_032a52d0(*(undefined8 *)(lVar6 + 0x28),pvVar16);
                if (plVar15 == (long *)0x0) goto LAB_03a88920;
                if ((lVar6 != 0) &&
                   (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar15 + 0x40)), lVar7 == 0))
                goto 
                Unity_Collections_LowLevel_Unsafe_UnsafeUtilityExtensions__AsRef<__Il2CppFullySharedGenericStructType>
                ;
                if (5 < *(uint *)(plVar15 + 3)) {
                  plVar15[9] = lVar6;
                  thunk_FUN_0333a630(plVar15 + 9,lVar6);
                  lVar6 = *(long *)(unaff_x19 + 0x38);
                  pvVar16 = *(void **)(unaff_x29 + -200);
                  plVar15 = *(long **)(lVar9 + 0x38);
                  pvVar14 = *(void **)(unaff_x29 + -0xb8);
                  if (-1 < *(int *)(*(long *)(lVar6 + 0x30) + 0x28)) {
                    pvVar14 = (void *)(unaff_x29 + -0x48);
                  }
                  memcpy(pvVar16,pvVar14,*(size_t *)(unaff_x29 + -0xc0));
                  lVar6 = thunk_FUN_032a52d0(*(undefined8 *)(lVar6 + 0x30),pvVar16);
                  if (plVar15 == (long *)0x0) goto LAB_03a88920;
                  if ((lVar6 != 0) &&
                     (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar15 + 0x40)), lVar7 == 0
                     )) goto 
                        Unity_Collections_LowLevel_Unsafe_UnsafeUtilityExtensions__AsRef<__Il2CppFullySharedGenericStructType>
                        ;
                  if (6 < *(uint *)(plVar15 + 3)) {
                    plVar15[10] = lVar6;
                    thunk_FUN_0333a630(plVar15 + 10,lVar6);
                    lVar6 = *(long *)(unaff_x19 + 0x38);
                    pvVar16 = *(void **)(unaff_x29 + -0xe0);
                    plVar15 = *(long **)(lVar9 + 0x38);
                    pvVar14 = *(void **)(unaff_x29 + -0xd0);
                    if (-1 < *(int *)(*(long *)(lVar6 + 0x38) + 0x28)) {
                      pvVar14 = (void *)(unaff_x29 + 0x60);
                    }
                    memcpy(pvVar16,pvVar14,*(size_t *)(unaff_x29 + -0xd8));
                    lVar6 = thunk_FUN_032a52d0(*(undefined8 *)(lVar6 + 0x38),pvVar16);
                    if (plVar15 == (long *)0x0) goto LAB_03a88920;
                    if ((lVar6 != 0) &&
                       (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar7 == 0))
                    goto 
                    Unity_Collections_LowLevel_Unsafe_UnsafeUtilityExtensions__AsRef<__Il2CppFullySharedGenericStructType>
                    ;
                    if (7 < *(uint *)(plVar15 + 3)) {
                      plVar15[0xb] = lVar6;
                      thunk_FUN_0333a630(plVar15 + 0xb,lVar6);
                      lVar6 = *(long *)(unaff_x19 + 0x38);
                      pvVar16 = *(void **)(unaff_x29 + -0xf8);
                      plVar15 = *(long **)(lVar9 + 0x38);
                      pvVar14 = *(void **)(unaff_x29 + -0xe8);
                      if (-1 < *(int *)(*(long *)(lVar6 + 0x40) + 0x28)) {
                        pvVar14 = (void *)(unaff_x29 + 0x68);
                      }
                      memcpy(pvVar16,pvVar14,*(size_t *)(unaff_x29 + -0xf0));
                      lVar6 = thunk_FUN_032a52d0(*(undefined8 *)(lVar6 + 0x40),pvVar16);
                      if (plVar15 == (long *)0x0) goto LAB_03a88920;
                      if ((lVar6 != 0) &&
                         (lVar7 = thunk_FUN_032a55a4(lVar6,*(undefined8 *)(*plVar15 + 0x40)),
                         lVar7 == 0))
                      goto 
                      Unity_Collections_LowLevel_Unsafe_UnsafeUtilityExtensions__AsRef<__Il2CppFullySharedGenericStructType>
                      ;
                      if (8 < *(uint *)(plVar15 + 3)) {
                        plVar15[0xc] = lVar6;
                        thunk_FUN_0333a630(plVar15 + 0xc,lVar6);
                        uVar8 = FUN_05fb2df0(lVar9,0);
                        lVar6 = *(long *)(*(long *)(unaff_x29 + -0x50) + 0x18);
                        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_032d5ee8();
                        }
                        FUN_05fb3740(lVar6,lVar9,0);
                        FUN_05fb2e6c(lVar9,uVar8,0);
                        pvVar14 = *(void **)(unaff_x29 + 0x70);
                        uVar8 = FUN_05fa802c(lVar9,0);
                        lVar9 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x48);
                        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                          lVar9 = FUN_032934b8(lVar9);
                        }
                        pvVar16 = (void *)FUN_032d5de0(uVar8,lVar9,
                                                       *(undefined8 *)(unaff_x29 + -0x110));
                        memcpy(pvVar14,pvVar16,*(size_t *)(unaff_x29 + -0x108));
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


