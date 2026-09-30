/*
FUNCTION_NAME: Mono.Unity.UnityTls.unitytls_interface_struct.unitytls_errorstate_raise_error_t$$.ctor
ENTRY_POINT: 038dea04
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x038deeac) */

void Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t___ctor(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long in_x10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  int iVar12;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  
  lVar7 = *unaff_x22;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == **(long **)(in_x10 + 0xe00)) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_038deb68;
      }
      uVar9 = uVar9 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_038deb68:
  (*(code *)*puVar4)();
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990();
  }
  if (unaff_w23 == 0) {
    return;
  }
  if ((unaff_x20 != 0) && (lVar7 = unaff_x19[7], lVar7 != 0)) {
    iVar1 = *(int *)(unaff_x20 + 0x10);
    if (*(int *)(lVar7 + 0x18) < iVar1 + 5) {
      (**(code **)(*unaff_x19 + 0x418))();
      plVar5 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x378))(plVar5,0,*(undefined8 *)(*plVar5 + 0x380));
        lVar7 = unaff_x19[6];
        uVar2 = *(undefined4 *)(unaff_x20 + 0x10);
        if (*(int *)(*(long *)Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__ + 0xe0
                    ) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0391c54c(lVar7,0,uVar2,0);
        plVar5 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x358))(plVar5,unaff_x19[6],0,4,*(undefined8 *)(*plVar5 + 0x360));
          uVar2 = *(undefined4 *)(unaff_x20 + 0x10);
          if (*(int *)(*(long *)StringLiteral_2948 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          plVar5 = (long *)FUN_029cff28(uVar2,*(undefined8 *)StringLiteral_2946);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar7 = FUN_029cfea8(plVar5,*(undefined8 *)StringLiteral_2947);
          if (0 < *(int *)(unaff_x20 + 0x10)) {
            uVar9 = 0;
            do {
              uVar3 = FUN_03409f80();
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              *(undefined1 *)(lVar7 + 0x20 + uVar9) = uVar3;
              uVar9 = uVar9 + 1;
            } while ((long)uVar9 < (long)*(int *)(unaff_x20 + 0x10));
          }
          plVar6 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          (**(code **)(*plVar6 + 0x358))
                    (plVar6,lVar7,0,*(undefined4 *)(unaff_x20 + 0x10),
                     *(undefined8 *)(*plVar6 + 0x360));
          if (plVar5 == (long *)0x0) {
            return;
          }
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_038dee68;
              }
              uVar9 = uVar9 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)
                   FUN_01ecb238(plVar5,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                ,0);
LAB_038dee68:
          (*(code *)*puVar4)(plVar5,puVar4[1]);
          return;
        }
      }
    }
    else {
      uVar8 = *(uint *)(unaff_x19 + 8);
      if (*(int *)(lVar7 + 0x18) < (int)(uVar8 + iVar1 + 5)) {
        (**(code **)(*unaff_x19 + 0x418))();
        uVar8 = *(uint *)(unaff_x19 + 8);
        lVar7 = unaff_x19[7];
        *(uint *)(unaff_x19 + 8) = uVar8 + 1;
        if (lVar7 == 0) goto LAB_038dee58;
      }
      else {
        *(uint *)(unaff_x19 + 8) = uVar8 + 1;
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar8) {
LAB_038dee8c:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined1 *)(lVar7 + (int)uVar8 + 0x20) = 0;
      lVar7 = unaff_x19[7];
      if ((lVar7 == 0) || (*(int *)(lVar7 + 0x18) == 0)) {
        lVar10 = 0;
      }
      else {
        lVar10 = lVar7 + 0x20;
      }
      *(undefined4 *)(lVar10 + (int)unaff_x19[8]) = *(undefined4 *)(unaff_x20 + 0x10);
      lVar10 = unaff_x19[8];
      uVar8 = (int)lVar10 + 4;
      *(uint *)(unaff_x19 + 8) = uVar8;
      if (iVar1 < 1) {
        return;
      }
      *(int *)(unaff_x19 + 8) = (int)lVar10 + 5;
      uVar3 = FUN_03409f80();
      if (lVar7 != 0) {
        iVar12 = 1;
        do {
          if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_038dee8c;
          *(undefined1 *)(lVar7 + (int)uVar8 + 0x20) = uVar3;
          if (iVar1 == iVar12) {
            return;
          }
          uVar8 = *(uint *)(unaff_x19 + 8);
          lVar7 = unaff_x19[7];
          *(uint *)(unaff_x19 + 8) = uVar8 + 1;
          uVar3 = FUN_03409f80();
          iVar12 = iVar12 + 1;
        } while (lVar7 != 0);
      }
    }
  }
LAB_038dee58:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


