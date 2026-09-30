/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection.Enumerator<Guid,-OVRTask.Callback<OVRAnchor>>$$Dispose
ENTRY_POINT: 02b8975c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Guid,_OVRTask_Callback<OVRAnchor>>__Dispose
               (ulong param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  void *__dest;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long lVar13;
  long *plVar14;
  undefined8 *__dest_00;
  undefined8 *__dest_01;
  long *plVar15;
  long unaff_x27;
  void *pvVar16;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
    FUN_01d7d918(StringLiteral_2806);
    FUN_01d7d918(StringLiteral_887);
    *(undefined1 *)(unaff_x21 + 0xef7) = 1;
  }
  lVar9 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  uVar10 = (ulong)*(uint *)(*(long *)(lVar9 + 0x70) + 0xfc);
  uVar11 = (ulong)*(uint *)(*(long *)(lVar9 + 0x78) + 0xfc);
  uVar12 = (ulong)*(uint *)(*(long *)(lVar9 + 0xa8) + 0xfc);
  *(ulong *)(unaff_x29 + -0x30) = uVar11;
  *(ulong *)(unaff_x29 + -0x28) = uVar10;
  uVar10 = uVar10 + 0xf & 0x1fffffff0;
  __dest_00 = (undefined8 *)(&stack0x00000000 + -uVar10);
  lVar13 = (long)__dest_00 - uVar10;
  uVar10 = uVar11 + 0xf & 0x1fffffff0;
  __dest_01 = (undefined8 *)(lVar13 - uVar10);
  lVar9 = (long)__dest_01 - uVar10;
  *(long *)(unaff_x29 + -0x50) = lVar9;
  pvVar16 = (void *)(lVar9 - (uVar12 + 0xf & 0x1fffffff0));
  *(ulong *)(unaff_x29 + -0x40) = uVar12;
  if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(3,0);
  }
  iVar1 = thunk_FUN_01dff4e0();
  if (iVar1 != 1) {
    FUN_033b2d60(7,0);
  }
  iVar1 = thunk_FUN_01dff49c();
  if (iVar1 != 0) {
    FUN_033b2d60(6,0);
  }
  uVar2 = FUN_033aadfc();
  if (uVar2 < (uint)unaff_x20) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  iVar1 = FUN_033aadfc();
  iVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x128))
                    (param_2);
  if ((int)(iVar1 - (uint)unaff_x20) < iVar3) {
    FUN_033b2d60(5,0);
  }
  lVar9 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x120);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    FUN_01dde7f8(lVar9);
  }
  lVar9 = thunk_FUN_01de26bc();
  if (lVar9 == 0) {
    lVar9 = thunk_FUN_01de26bc();
    if (lVar9 == 0) {
      *(long *)(unaff_x29 + -0x60) = lVar13;
      plVar14 = (long *)thunk_FUN_01de26bc();
      if (plVar14 == (long *)0x0) {
        FUN_033b3618();
      }
      uVar2 = *(uint *)(param_2 + 0x20);
      *(ulong *)(unaff_x29 + -0x38) = (ulong)uVar2;
      if (0 < (int)uVar2) {
        plVar15 = *(long **)(param_2 + 0x18);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar10 = 0;
        do {
          if (*(uint *)(plVar15 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          piVar4 = (int *)thunk_FUN_01dc553c((long)plVar15 +
                                             uVar10 * *(uint *)(*plVar15 + 0x104) + 0x20,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) +
                                                                  0xc0) + 0x68) + 0x80));
          if (-1 < *piVar4) {
            if (*(uint *)(plVar15 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            pvVar8 = (void *)thunk_FUN_01dc553c((long)plVar15 +
                                                uVar10 * *(uint *)(*plVar15 + 0x104) + 0x20,
                                                *(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 +
                                                                                       0x20) + 0xc0)
                                                                   + 0x68) + 0x80) + 0x40);
            memcpy(__dest_00,pvVar8,*(size_t *)(unaff_x29 + -0x28));
            if (*(uint *)(plVar15 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            pvVar8 = (void *)thunk_FUN_01dc553c((long)plVar15 +
                                                uVar10 * *(uint *)(*plVar15 + 0x104) + 0x20,
                                                *(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 +
                                                                                       0x20) + 0xc0)
                                                                   + 0x68) + 0x80) + 0x60);
            memcpy(__dest_01,pvVar8,*(size_t *)(unaff_x29 + -0x30));
            memset(pvVar16,0,*(size_t *)(unaff_x29 + -0x40));
            lVar13 = *(long *)(unaff_x19 + 0x20);
            lVar9 = *(long *)(lVar13 + 0xc0);
            if (*(int *)(*(long *)(lVar9 + 0x70) + 0x28) < 0) {
              pvVar8 = *(void **)(unaff_x29 + -0x60);
              memcpy(pvVar8,__dest_00,*(size_t *)(unaff_x29 + -0x28));
              lVar9 = *(long *)(lVar13 + 0xc0);
            }
            else {
              pvVar8 = (void *)*__dest_00;
            }
            if (*(int *)(*(long *)(lVar9 + 0x78) + 0x28) < 0) {
              *(ulong *)(unaff_x29 + -0x58) = unaff_x20;
              __dest = *(void **)(unaff_x29 + -0x50);
              memcpy(__dest,__dest_01,*(size_t *)(unaff_x29 + -0x30));
              lVar9 = *(long *)(lVar13 + 0xc0);
              unaff_x20 = *(ulong *)(unaff_x29 + -0x58);
            }
            else {
              __dest = (void *)*__dest_01;
            }
            FUN_030718bc(pvVar16,pvVar8,__dest,*(undefined8 *)(lVar9 + 0x130));
            lVar9 = thunk_FUN_01de23e8(*(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8),
                                       pvVar16);
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            if ((lVar9 != 0) &&
               (lVar13 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar13 == 0)) {
              uVar5 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar5,0);
            }
            uVar2 = (uint)unaff_x20;
            if (*(uint *)(plVar14 + 3) <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar14[(long)(int)uVar2 + 4] = lVar9;
            thunk_FUN_01e10808(plVar14 + (long)(int)uVar2 + 4,lVar9);
            unaff_x20 = (ulong)(uVar2 + 1);
          }
          uVar10 = uVar10 + 1;
        } while (*(ulong *)(unaff_x29 + -0x38) != uVar10);
      }
    }
    else if (0 < *(int *)(param_2 + 0x20)) {
      plVar14 = *(long **)(param_2 + 0x18);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar10 = 0;
      do {
        if (*(uint *)(plVar14 + 3) <= uVar10) goto LAB_02b89cbc;
        piVar4 = (int *)thunk_FUN_01dc553c((long)plVar14 +
                                           uVar10 * *(uint *)(*plVar14 + 0x104) + 0x20,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0)
                                                      + 0x68) + 0x80));
        if (-1 < *piVar4) {
          if (*(uint *)(plVar14 + 3) <= uVar10) {
LAB_02b89cbc:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          pvVar16 = (void *)thunk_FUN_01dc553c((long)plVar14 +
                                               uVar10 * *(uint *)(*plVar14 + 0x104) + 0x20,
                                               *(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 +
                                                                                      0x20) + 0xc0)
                                                                  + 0x68) + 0x80) + 0x40);
          memcpy(__dest_00,pvVar16,*(size_t *)(unaff_x29 + -0x28));
          uVar5 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70),
                                     __dest_00);
          if (*(uint *)(plVar14 + 3) <= uVar10) goto LAB_02b89cbc;
          pvVar16 = (void *)thunk_FUN_01dc553c((long)plVar14 +
                                               uVar10 * *(uint *)(*plVar14 + 0x104) + 0x20,
                                               *(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 +
                                                                                      0x20) + 0xc0)
                                                                  + 0x68) + 0x80) + 0x60);
          memcpy(__dest_01,pvVar16,*(size_t *)(unaff_x29 + -0x30));
          uVar6 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78),
                                     __dest_01);
          *(undefined8 *)(unaff_x29 + -0x20) = 0;
          *(undefined8 *)(unaff_x29 + -0x18) = 0;
          FUN_0336f7b8(unaff_x29 + -0x20,uVar5,uVar6,0);
          uVar2 = (uint)unaff_x20;
          if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_02b89cbc;
          uVar5 = *(undefined8 *)(unaff_x29 + -0x20);
          lVar13 = lVar9 + (long)(int)uVar2 * 0x10;
          puVar7 = (undefined8 *)(lVar13 + 0x20);
          *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)(unaff_x29 + -0x18);
          *puVar7 = uVar5;
          thunk_FUN_01e10808(puVar7,0);
          unaff_x20 = (ulong)(uVar2 + 1);
        }
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)*(int *)(param_2 + 0x20));
    }
  }
  else {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x158))
              (param_2,lVar9,unaff_x20 & 0xffffffff);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


