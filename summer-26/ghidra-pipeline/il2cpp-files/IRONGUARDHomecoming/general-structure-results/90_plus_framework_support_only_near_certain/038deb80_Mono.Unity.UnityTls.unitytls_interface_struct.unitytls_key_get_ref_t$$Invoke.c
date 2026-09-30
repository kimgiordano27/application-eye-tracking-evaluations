/*
FUNCTION_NAME: Mono.Unity.UnityTls.unitytls_interface_struct.unitytls_key_get_ref_t$$Invoke
ENTRY_POINT: 038deb80
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 160
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x038deeac) */

void Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t__Invoke(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  int iVar11;
  ulong uVar12;
  
  lVar7 = unaff_x19[7];
  if (lVar7 != 0) {
    iVar1 = *(int *)(unaff_x20 + 0x10);
    if (*(int *)(lVar7 + 0x18) < iVar1 + 5) {
      (**(code **)(*unaff_x19 + 0x418))();
      plVar4 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x378))(plVar4,0,*(undefined8 *)(*plVar4 + 0x380));
        lVar7 = unaff_x19[6];
        uVar2 = *(undefined4 *)(unaff_x20 + 0x10);
        if (*(int *)(*(long *)Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__ + 0xe0
                    ) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0391c54c(lVar7,0,uVar2,0);
        plVar4 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x358))(plVar4,unaff_x19[6],0,4,*(undefined8 *)(*plVar4 + 0x360));
          uVar2 = *(undefined4 *)(unaff_x20 + 0x10);
          if (*(int *)(*(long *)StringLiteral_2948 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          plVar4 = (long *)FUN_029cff28(uVar2,*(undefined8 *)StringLiteral_2946);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar7 = FUN_029cfea8(plVar4,*(undefined8 *)StringLiteral_2947);
          if (0 < *(int *)(unaff_x20 + 0x10)) {
            uVar12 = 0;
            do {
              uVar3 = FUN_03409f80();
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (*(uint *)(lVar7 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              *(undefined1 *)(lVar7 + 0x20 + uVar12) = uVar3;
              uVar12 = uVar12 + 1;
            } while ((long)uVar12 < (long)*(int *)(unaff_x20 + 0x10));
          }
          plVar5 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          (**(code **)(*plVar5 + 0x358))
                    (plVar5,lVar7,0,*(undefined4 *)(unaff_x20 + 0x10),
                     *(undefined8 *)(*plVar5 + 0x360));
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar7 = *plVar4;
          uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar12 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_038dee68;
              }
              uVar12 = uVar12 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar12 != 0);
          }
          puVar6 = (undefined8 *)
                   FUN_01ecb238(plVar4,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                ,0);
LAB_038dee68:
          (*(code *)*puVar6)(plVar4,puVar6[1]);
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
        lVar9 = 0;
      }
      else {
        lVar9 = lVar7 + 0x20;
      }
      *(undefined4 *)(lVar9 + (int)unaff_x19[8]) = *(undefined4 *)(unaff_x20 + 0x10);
      lVar9 = unaff_x19[8];
      uVar8 = (int)lVar9 + 4;
      *(uint *)(unaff_x19 + 8) = uVar8;
      if (iVar1 < 1) {
        return;
      }
      *(int *)(unaff_x19 + 8) = (int)lVar9 + 5;
      uVar3 = FUN_03409f80();
      if (lVar7 != 0) {
        iVar11 = 1;
        do {
          if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_038dee8c;
          *(undefined1 *)(lVar7 + (int)uVar8 + 0x20) = uVar3;
          if (iVar1 == iVar11) {
            return;
          }
          uVar8 = *(uint *)(unaff_x19 + 8);
          lVar7 = unaff_x19[7];
          *(uint *)(unaff_x19 + 8) = uVar8 + 1;
          uVar3 = FUN_03409f80();
          iVar11 = iVar11 + 1;
        } while (lVar7 != 0);
      }
    }
  }
LAB_038dee58:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


