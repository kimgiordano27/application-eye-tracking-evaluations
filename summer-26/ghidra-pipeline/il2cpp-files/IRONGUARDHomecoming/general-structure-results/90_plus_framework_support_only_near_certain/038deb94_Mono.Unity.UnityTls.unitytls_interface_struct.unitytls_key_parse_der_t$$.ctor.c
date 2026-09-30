/*
FUNCTION_NAME: Mono.Unity.UnityTls.unitytls_interface_struct.unitytls_key_parse_der_t$$.ctor
ENTRY_POINT: 038deb94
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x038deeac) */

void Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t___ctor(long param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  int in_w10;
  int *piVar8;
  int in_w11;
  long *unaff_x19;
  long unaff_x20;
  int iVar9;
  int unaff_w22;
  long lVar10;
  ulong uVar11;
  
  if (in_w10 < in_w11) {
    (**(code **)(*unaff_x19 + 0x418))();
    plVar3 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x378))(plVar3,0,*(undefined8 *)(*plVar3 + 0x380));
      lVar10 = unaff_x19[6];
      uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
      if (*(int *)(*(long *)Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__ + 0xe0)
          == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0391c54c(lVar10,0,uVar1,0);
      plVar3 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x358))(plVar3,unaff_x19[6],0,4,*(undefined8 *)(*plVar3 + 0x360));
        uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
        if (*(int *)(*(long *)StringLiteral_2948 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar3 = (long *)FUN_029cff28(uVar1,*(undefined8 *)StringLiteral_2946);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar10 = FUN_029cfea8(plVar3,*(undefined8 *)StringLiteral_2947);
        if (0 < *(int *)(unaff_x20 + 0x10)) {
          uVar11 = 0;
          do {
            uVar2 = FUN_03409f80();
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(uint *)(lVar10 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            *(undefined1 *)(lVar10 + 0x20 + uVar11) = uVar2;
            uVar11 = uVar11 + 1;
          } while ((long)uVar11 < (long)*(int *)(unaff_x20 + 0x10));
        }
        plVar4 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar4 + 0x358))
                  (plVar4,lVar10,0,*(undefined4 *)(unaff_x20 + 0x10),
                   *(undefined8 *)(*plVar4 + 0x360));
        if (plVar3 == (long *)0x0) {
          return;
        }
        lVar10 = *plVar3;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_038dee68;
            }
            uVar11 = uVar11 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_01ecb238(plVar3,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_038dee68:
        (*(code *)*puVar5)(plVar3,puVar5[1]);
        return;
      }
    }
  }
  else {
    uVar6 = *(uint *)(unaff_x19 + 8);
    if (in_w10 < (int)(uVar6 + in_w11)) {
      (**(code **)(*unaff_x19 + 0x418))();
      uVar6 = *(uint *)(unaff_x19 + 8);
      param_1 = unaff_x19[7];
      *(uint *)(unaff_x19 + 8) = uVar6 + 1;
      if (param_1 == 0) goto LAB_038dee58;
    }
    else {
      *(uint *)(unaff_x19 + 8) = uVar6 + 1;
    }
    if (*(uint *)(param_1 + 0x18) <= uVar6) {
LAB_038dee8c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined1 *)(param_1 + (int)uVar6 + 0x20) = 0;
    lVar10 = unaff_x19[7];
    if ((lVar10 == 0) || (*(int *)(lVar10 + 0x18) == 0)) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar10 + 0x20;
    }
    *(undefined4 *)(lVar7 + (int)unaff_x19[8]) = *(undefined4 *)(unaff_x20 + 0x10);
    lVar7 = unaff_x19[8];
    uVar6 = (int)lVar7 + 4;
    *(uint *)(unaff_x19 + 8) = uVar6;
    if (unaff_w22 < 1) {
      return;
    }
    *(int *)(unaff_x19 + 8) = (int)lVar7 + 5;
    uVar2 = FUN_03409f80();
    if (lVar10 != 0) {
      iVar9 = 1;
      do {
        if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_038dee8c;
        *(undefined1 *)(lVar10 + (int)uVar6 + 0x20) = uVar2;
        if (unaff_w22 == iVar9) {
          return;
        }
        uVar6 = *(uint *)(unaff_x19 + 8);
        lVar10 = unaff_x19[7];
        *(uint *)(unaff_x19 + 8) = uVar6 + 1;
        uVar2 = FUN_03409f80();
        iVar9 = iVar9 + 1;
      } while (lVar10 != 0);
    }
  }
LAB_038dee58:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


