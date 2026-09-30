/*
FUNCTION_NAME: FUN_038de7e8
ENTRY_POINT: 038de7e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x038deeac) */
/* WARNING: Removing unreachable block (ram,0x038deb7c) */
/* WARNING: Removing unreachable block (ram,0x038dee9c) */

void FUN_038de7e8(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  ushort uVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  int *piVar15;
  int iVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  if ((DAT_0483811c & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_2946);
    thunk_FUN_01efb3a4(StringLiteral_2947);
    thunk_FUN_01efb3a4(StringLiteral_2948);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__);
    DAT_0483811c = 1;
  }
  if ((char)param_1[10] == '\0') {
    if (param_2 != 0) {
LAB_038de8a0:
      lVar11 = param_1[7];
      if (lVar11 != 0) {
        iVar16 = *(int *)(param_2 + 0x10) * 2;
        if (iVar16 + 5 <= *(int *)(lVar11 + 0x18)) {
          uVar12 = *(uint *)(param_1 + 8);
          if (*(int *)(lVar11 + 0x18) < (int)(uVar12 + iVar16 + 5)) {
            (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
            uVar12 = *(uint *)(param_1 + 8);
            lVar11 = param_1[7];
            *(uint *)(param_1 + 8) = uVar12 + 1;
            if (lVar11 == 0) goto LAB_038dee58;
          }
          else {
            *(uint *)(param_1 + 8) = uVar12 + 1;
          }
          if (uVar12 < *(uint *)(lVar11 + 0x18)) {
            *(undefined1 *)(lVar11 + (int)uVar12 + 0x20) = 1;
            lVar11 = param_1[7];
            if (lVar11 == 0) {
              lVar13 = 0;
              *(undefined4 *)(long)(int)param_1[8] = *(undefined4 *)(param_2 + 0x10);
            }
            else {
              lVar13 = 0;
              if (*(int *)(lVar11 + 0x18) != 0) {
                lVar13 = lVar11 + 0x20;
              }
              *(undefined4 *)(lVar13 + (int)param_1[8]) = *(undefined4 *)(param_2 + 0x10);
            }
            *(int *)(param_1 + 8) = (int)param_1[8] + 4;
            iVar6 = thunk_FUN_01ed2e78(0);
            puVar10 = (undefined8 *)(param_2 + iVar6);
            puVar2 = (undefined8 *)(lVar13 + (int)param_1[8]);
            puVar1 = puVar2 + 4;
            puVar14 = puVar2;
            while (puVar1 <= (undefined8 *)((long)puVar2 + (long)iVar16)) {
              puVar1 = puVar10 + 1;
              uVar7 = *puVar10;
              uVar19 = puVar10[3];
              uVar18 = puVar10[2];
              puVar10 = puVar10 + 4;
              puVar14[1] = *puVar1;
              *puVar14 = uVar7;
              puVar14[3] = uVar19;
              puVar14[2] = uVar18;
              puVar1 = puVar14 + 8;
              puVar14 = puVar14 + 4;
            }
            for (; puVar14 < (undefined8 *)((long)puVar2 + (long)iVar16);
                puVar14 = (undefined8 *)((long)puVar14 + 2)) {
              *(undefined2 *)puVar14 = *(undefined2 *)puVar10;
              puVar10 = (undefined8 *)((long)puVar10 + 2);
            }
            *(int *)(param_1 + 8) = (int)param_1[8] + iVar16;
            return;
          }
LAB_038dee8c:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
        plVar8 = (long *)(**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400));
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x378))(plVar8,1,*(undefined8 *)(*plVar8 + 0x380));
          lVar11 = param_1[6];
          uVar3 = *(undefined4 *)(param_2 + 0x10);
          if (*(int *)(*(long *)Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0391c54c(lVar11,0,uVar3,0);
          plVar8 = (long *)(**(code **)(*param_1 + 0x3f8))
                                     (param_1,*(undefined8 *)(*param_1 + 0x400));
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x358))(plVar8,param_1[6],0,4,*(undefined8 *)(*plVar8 + 0x360));
            if (*(int *)(*(long *)StringLiteral_2948 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            plVar8 = (long *)FUN_029cff28(iVar16,*(undefined8 *)StringLiteral_2946);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar7 = FUN_029cfea8(plVar8,*(undefined8 *)StringLiteral_2947);
            FUN_03952894(uVar7,param_2,1,0);
            plVar9 = (long *)(**(code **)(*param_1 + 0x3f8))
                                       (param_1,*(undefined8 *)(*param_1 + 0x400));
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            (**(code **)(*plVar9 + 0x358))(plVar9,uVar7,0,iVar16,*(undefined8 *)(*plVar9 + 0x360));
            lVar11 = *plVar8;
            uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar17 != 0) {
              piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) ==
                    *(long *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                  puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_038deb68;
                }
                uVar17 = uVar17 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar17 != 0);
            }
            puVar10 = (undefined8 *)
                      FUN_01ecb238(plVar8,*(long *)
                                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                   ,0);
LAB_038deb68:
            (*(code *)*puVar10)(plVar8,puVar10[1]);
            return;
          }
        }
      }
    }
  }
  else if (param_2 != 0) {
    if (0 < *(int *)(param_2 + 0x10)) {
      iVar16 = 0;
      do {
        uVar5 = FUN_03409f80(param_2,iVar16,0);
        if (0xff < uVar5) goto LAB_038de8a0;
        iVar16 = iVar16 + 1;
      } while (iVar16 < *(int *)(param_2 + 0x10));
    }
    lVar11 = param_1[7];
    if (lVar11 != 0) {
      iVar16 = *(int *)(param_2 + 0x10);
      if (*(int *)(lVar11 + 0x18) < iVar16 + 5) {
        (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
        plVar8 = (long *)(**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400));
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x378))(plVar8,0,*(undefined8 *)(*plVar8 + 0x380));
          lVar11 = param_1[6];
          uVar3 = *(undefined4 *)(param_2 + 0x10);
          if (*(int *)(*(long *)Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0391c54c(lVar11,0,uVar3,0);
          plVar8 = (long *)(**(code **)(*param_1 + 0x3f8))
                                     (param_1,*(undefined8 *)(*param_1 + 0x400));
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x358))(plVar8,param_1[6],0,4,*(undefined8 *)(*plVar8 + 0x360));
            uVar3 = *(undefined4 *)(param_2 + 0x10);
            if (*(int *)(*(long *)StringLiteral_2948 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            plVar8 = (long *)FUN_029cff28(uVar3,*(undefined8 *)StringLiteral_2946);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar11 = FUN_029cfea8(plVar8,*(undefined8 *)StringLiteral_2947);
            if (0 < *(int *)(param_2 + 0x10)) {
              uVar17 = 0;
              do {
                uVar4 = FUN_03409f80(param_2,uVar17 & 0xffffffff,0);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                if (*(uint *)(lVar11 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                *(undefined1 *)(lVar11 + 0x20 + uVar17) = uVar4;
                uVar17 = uVar17 + 1;
              } while ((long)uVar17 < (long)*(int *)(param_2 + 0x10));
            }
            plVar9 = (long *)(**(code **)(*param_1 + 0x3f8))
                                       (param_1,*(undefined8 *)(*param_1 + 0x400));
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            (**(code **)(*plVar9 + 0x358))
                      (plVar9,lVar11,0,*(undefined4 *)(param_2 + 0x10),
                       *(undefined8 *)(*plVar9 + 0x360));
            if (plVar8 == (long *)0x0) {
              return;
            }
            lVar11 = *plVar8;
            uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar17 != 0) {
              piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) ==
                    *(long *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                  puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_038dee68;
                }
                uVar17 = uVar17 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar17 != 0);
            }
            puVar10 = (undefined8 *)
                      FUN_01ecb238(plVar8,*(long *)
                                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                   ,0);
LAB_038dee68:
            (*(code *)*puVar10)(plVar8,puVar10[1]);
            return;
          }
        }
      }
      else {
        uVar12 = *(uint *)(param_1 + 8);
        if (*(int *)(lVar11 + 0x18) < (int)(uVar12 + iVar16 + 5)) {
          (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
          uVar12 = *(uint *)(param_1 + 8);
          lVar11 = param_1[7];
          *(uint *)(param_1 + 8) = uVar12 + 1;
          if (lVar11 == 0) goto LAB_038dee58;
        }
        else {
          *(uint *)(param_1 + 8) = uVar12 + 1;
        }
        if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_038dee8c;
        *(undefined1 *)(lVar11 + (int)uVar12 + 0x20) = 0;
        lVar11 = param_1[7];
        if ((lVar11 == 0) || (*(int *)(lVar11 + 0x18) == 0)) {
          lVar13 = 0;
        }
        else {
          lVar13 = lVar11 + 0x20;
        }
        *(undefined4 *)(lVar13 + (int)param_1[8]) = *(undefined4 *)(param_2 + 0x10);
        lVar13 = param_1[8];
        uVar12 = (int)lVar13 + 4;
        *(uint *)(param_1 + 8) = uVar12;
        if (iVar16 < 1) {
          return;
        }
        *(int *)(param_1 + 8) = (int)lVar13 + 5;
        uVar4 = FUN_03409f80(param_2,0,0);
        if (lVar11 != 0) {
          iVar6 = 1;
          do {
            if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_038dee8c;
            *(undefined1 *)(lVar11 + (int)uVar12 + 0x20) = uVar4;
            if (iVar16 == iVar6) {
              return;
            }
            uVar12 = *(uint *)(param_1 + 8);
            lVar11 = param_1[7];
            *(uint *)(param_1 + 8) = uVar12 + 1;
            uVar4 = FUN_03409f80(param_2,iVar6,0);
            iVar6 = iVar6 + 1;
          } while (lVar11 != 0);
        }
      }
    }
  }
LAB_038dee58:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


