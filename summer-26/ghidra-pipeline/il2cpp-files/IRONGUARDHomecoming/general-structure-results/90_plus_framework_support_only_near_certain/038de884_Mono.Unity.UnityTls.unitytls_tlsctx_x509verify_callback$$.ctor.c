/*
FUNCTION_NAME: Mono.Unity.UnityTls.unitytls_tlsctx_x509verify_callback$$.ctor
ENTRY_POINT: 038de884
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x038deeac) */
/* WARNING: Removing unreachable block (ram,0x038deb7c) */
/* WARNING: Removing unreachable block (ram,0x038dee9c) */

void Mono_Unity_UnityTls_unitytls_tlsctx_x509verify_callback___ctor(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 in_CY;
  undefined1 uVar5;
  ushort uVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  int *piVar16;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  while (!(bool)in_CY) {
    unaff_w21 = unaff_w21 + 1;
    if (*(int *)(unaff_x20 + 0x10) <= unaff_w21) {
      lVar12 = unaff_x19[7];
      if (lVar12 == 0) goto LAB_038dee58;
      iVar3 = *(int *)(unaff_x20 + 0x10);
      if (*(int *)(lVar12 + 0x18) < iVar3 + 5) {
        (**(code **)(*unaff_x19 + 0x418))();
        plVar9 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x378))(plVar9,0,*(undefined8 *)(*plVar9 + 0x380));
          lVar12 = unaff_x19[6];
          uVar4 = *(undefined4 *)(unaff_x20 + 0x10);
          if (*(int *)(*(long *)Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0391c54c(lVar12,0,uVar4,0);
          plVar9 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x358))(plVar9,unaff_x19[6],0,4,*(undefined8 *)(*plVar9 + 0x360))
            ;
            uVar4 = *(undefined4 *)(unaff_x20 + 0x10);
            if (*(int *)(*(long *)StringLiteral_2948 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            plVar9 = (long *)FUN_029cff28(uVar4,*(undefined8 *)StringLiteral_2946);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar12 = FUN_029cfea8(plVar9,*(undefined8 *)StringLiteral_2947);
            if (0 < *(int *)(unaff_x20 + 0x10)) {
              uVar17 = 0;
              do {
                uVar5 = FUN_03409f80();
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                if (*(uint *)(lVar12 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                *(undefined1 *)(lVar12 + 0x20 + uVar17) = uVar5;
                uVar17 = uVar17 + 1;
              } while ((long)uVar17 < (long)*(int *)(unaff_x20 + 0x10));
            }
            plVar10 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            (**(code **)(*plVar10 + 0x358))
                      (plVar10,lVar12,0,*(undefined4 *)(unaff_x20 + 0x10),
                       *(undefined8 *)(*plVar10 + 0x360));
            if (plVar9 == (long *)0x0) {
              return;
            }
            lVar12 = *plVar9;
            uVar17 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar17 != 0) {
              piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) ==
                    *(long *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                  puVar11 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_038dee68;
                }
                uVar17 = uVar17 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar17 != 0);
            }
            puVar11 = (undefined8 *)
                      FUN_01ecb238(plVar9,*(long *)
                                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                   ,0);
LAB_038dee68:
            (*(code *)*puVar11)(plVar9,puVar11[1]);
            return;
          }
        }
        goto LAB_038dee58;
      }
      uVar13 = *(uint *)(unaff_x19 + 8);
      if (*(int *)(lVar12 + 0x18) < (int)(uVar13 + iVar3 + 5)) {
        (**(code **)(*unaff_x19 + 0x418))();
        uVar13 = *(uint *)(unaff_x19 + 8);
        lVar12 = unaff_x19[7];
        *(uint *)(unaff_x19 + 8) = uVar13 + 1;
        if (lVar12 == 0) goto LAB_038dee58;
      }
      else {
        *(uint *)(unaff_x19 + 8) = uVar13 + 1;
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_038dee8c;
      *(undefined1 *)(lVar12 + (int)uVar13 + 0x20) = 0;
      lVar12 = unaff_x19[7];
      if ((lVar12 == 0) || (*(int *)(lVar12 + 0x18) == 0)) {
        lVar14 = 0;
      }
      else {
        lVar14 = lVar12 + 0x20;
      }
      *(undefined4 *)(lVar14 + (int)unaff_x19[8]) = *(undefined4 *)(unaff_x20 + 0x10);
      lVar14 = unaff_x19[8];
      uVar13 = (int)lVar14 + 4;
      *(uint *)(unaff_x19 + 8) = uVar13;
      if (iVar3 < 1) {
        return;
      }
      *(int *)(unaff_x19 + 8) = (int)lVar14 + 5;
      uVar5 = FUN_03409f80();
      if (lVar12 == 0) goto LAB_038dee58;
      iVar7 = 1;
      goto LAB_038dee14;
    }
    uVar6 = FUN_03409f80();
    in_CY = 0xff < uVar6;
  }
  lVar12 = unaff_x19[7];
  if (lVar12 != 0) {
    iVar3 = *(int *)(unaff_x20 + 0x10) * 2;
    if (iVar3 + 5 <= *(int *)(lVar12 + 0x18)) {
      uVar13 = *(uint *)(unaff_x19 + 8);
      if (*(int *)(lVar12 + 0x18) < (int)(uVar13 + iVar3 + 5)) {
        (**(code **)(*unaff_x19 + 0x418))();
        uVar13 = *(uint *)(unaff_x19 + 8);
        lVar12 = unaff_x19[7];
        *(uint *)(unaff_x19 + 8) = uVar13 + 1;
        if (lVar12 == 0) goto LAB_038dee58;
      }
      else {
        *(uint *)(unaff_x19 + 8) = uVar13 + 1;
      }
      if (uVar13 < *(uint *)(lVar12 + 0x18)) {
        *(undefined1 *)(lVar12 + (int)uVar13 + 0x20) = 1;
        lVar12 = unaff_x19[7];
        if (lVar12 == 0) {
          lVar14 = 0;
          *(undefined4 *)(long)(int)unaff_x19[8] = *(undefined4 *)(unaff_x20 + 0x10);
        }
        else {
          lVar14 = 0;
          if (*(int *)(lVar12 + 0x18) != 0) {
            lVar14 = lVar12 + 0x20;
          }
          *(undefined4 *)(lVar14 + (int)unaff_x19[8]) = *(undefined4 *)(unaff_x20 + 0x10);
        }
        *(int *)(unaff_x19 + 8) = (int)unaff_x19[8] + 4;
        iVar7 = thunk_FUN_01ed2e78(0);
        puVar11 = (undefined8 *)(unaff_x20 + iVar7);
        puVar2 = (undefined8 *)(lVar14 + (int)unaff_x19[8]);
        puVar1 = puVar2 + 4;
        puVar15 = puVar2;
        while (puVar1 <= (undefined8 *)((long)puVar2 + (long)iVar3)) {
          puVar1 = puVar11 + 1;
          uVar8 = *puVar11;
          uVar19 = puVar11[3];
          uVar18 = puVar11[2];
          puVar11 = puVar11 + 4;
          puVar15[1] = *puVar1;
          *puVar15 = uVar8;
          puVar15[3] = uVar19;
          puVar15[2] = uVar18;
          puVar1 = puVar15 + 8;
          puVar15 = puVar15 + 4;
        }
        for (; puVar15 < (undefined8 *)((long)puVar2 + (long)iVar3);
            puVar15 = (undefined8 *)((long)puVar15 + 2)) {
          *(undefined2 *)puVar15 = *(undefined2 *)puVar11;
          puVar11 = (undefined8 *)((long)puVar11 + 2);
        }
        *(int *)(unaff_x19 + 8) = (int)unaff_x19[8] + iVar3;
        return;
      }
LAB_038dee8c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    (**(code **)(*unaff_x19 + 0x418))();
    plVar9 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x378))(plVar9,1,*(undefined8 *)(*plVar9 + 0x380));
      lVar12 = unaff_x19[6];
      uVar4 = *(undefined4 *)(unaff_x20 + 0x10);
      if (*(int *)(*(long *)Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__ + 0xe0)
          == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0391c54c(lVar12,0,uVar4,0);
      plVar9 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x358))(plVar9,unaff_x19[6],0,4,*(undefined8 *)(*plVar9 + 0x360));
        if (*(int *)(*(long *)StringLiteral_2948 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar9 = (long *)FUN_029cff28(iVar3,*(undefined8 *)StringLiteral_2946);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar8 = FUN_029cfea8(plVar9,*(undefined8 *)StringLiteral_2947);
        FUN_03952894();
        plVar10 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar10 + 0x358))(plVar10,uVar8,0,iVar3,*(undefined8 *)(*plVar10 + 0x360));
        lVar12 = *plVar9;
        uVar17 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar17 != 0) {
          piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar11 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_038deb68;
            }
            uVar17 = uVar17 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_01ecb238(plVar9,*(long *)
                                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                               ,0);
LAB_038deb68:
        (*(code *)*puVar11)(plVar9,puVar11[1]);
        return;
      }
    }
  }
  goto LAB_038dee58;
  while( true ) {
    *(undefined1 *)(lVar12 + (int)uVar13 + 0x20) = uVar5;
    if (iVar3 == iVar7) {
      return;
    }
    uVar13 = *(uint *)(unaff_x19 + 8);
    lVar12 = unaff_x19[7];
    *(uint *)(unaff_x19 + 8) = uVar13 + 1;
    uVar5 = FUN_03409f80();
    iVar7 = iVar7 + 1;
    if (lVar12 == 0) break;
LAB_038dee14:
    if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_038dee8c;
  }
LAB_038dee58:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


