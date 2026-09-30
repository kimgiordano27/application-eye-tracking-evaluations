/*
FUNCTION_NAME: Mono.Unity.UnityTls.unitytls_interface_struct.unitytls_tlsctx_write_t$$Invoke
ENTRY_POINT: 038dfe10
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 160
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x038dffe8) */

void Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_write_t__Invoke(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 in_w9;
  ulong uVar10;
  int *piVar11;
  int unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(param_1 + 0x20) = in_w9;
  lVar8 = unaff_x20[7];
  if ((lVar8 == 0) || (*(int *)(lVar8 + 0x18) == 0)) {
    lVar9 = 0;
  }
  else {
    lVar9 = lVar8 + 0x20;
  }
  *(undefined4 *)(lVar9 + (int)unaff_x20[8]) = *(undefined4 *)(unaff_x21 + 0x18);
  iVar1 = (int)unaff_x20[8] + 4;
  *(int *)(unaff_x20 + 8) = iVar1;
  if ((lVar8 == 0) || (*(int *)(lVar8 + 0x18) == 0)) {
    lVar9 = 0;
  }
  else {
    lVar9 = lVar8 + 0x20;
  }
  *(undefined4 *)(lVar9 + iVar1) = 2;
  iVar1 = (int)unaff_x20[8] + 4;
  *(int *)(unaff_x20 + 8) = iVar1;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar2 = unaff_w19 * 2;
  if (*(int *)(lVar8 + 0x18) < iVar2) {
    (**(code **)(*unaff_x20 + 0x418))();
    if (*(int *)(*(long *)StringLiteral_2948 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar4 = (long *)FUN_029cff28(iVar2,*(undefined8 *)StringLiteral_2946);
    puVar3 = StringLiteral_2947;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_029cfea8(plVar4,*(undefined8 *)StringLiteral_2947);
    FUN_03952ce8();
    plVar5 = (long *)(**(code **)(*unaff_x20 + 0x3f8))();
    uVar6 = FUN_029cfea8(plVar4,*(undefined8 *)puVar3);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar6,uVar6);
    }
    (**(code **)(*plVar5 + 0x358))(plVar5,uVar6,0,iVar2,*(undefined8 *)(*plVar5 + 0x360));
    lVar8 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_038dffd8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_038dffd8:
    (*(code *)*puVar7)(plVar4,puVar7[1]);
    return;
  }
  if (*(int *)(lVar8 + 0x18) < iVar1 + iVar2) {
    (**(code **)(*unaff_x20 + 0x418))();
    lVar8 = unaff_x20[7];
    lVar9 = 0;
    if (lVar8 == 0) goto LAB_038dfff4;
  }
  if (*(int *)(lVar8 + 0x18) == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = lVar8 + 0x20;
  }
LAB_038dfff4:
  lVar8 = 0;
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    lVar8 = unaff_x21 + 0x20;
  }
  FUN_03952c90(lVar8,lVar9 + (int)unaff_x20[8],iVar2,0);
  *(int *)(unaff_x20 + 8) = (int)unaff_x20[8] + iVar2;
  return;
}


