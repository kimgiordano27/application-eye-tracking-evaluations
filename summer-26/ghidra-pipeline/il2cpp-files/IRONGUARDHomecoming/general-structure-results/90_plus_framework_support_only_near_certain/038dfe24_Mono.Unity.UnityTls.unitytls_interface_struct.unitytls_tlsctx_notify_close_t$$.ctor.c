/*
FUNCTION_NAME: Mono.Unity.UnityTls.unitytls_interface_struct.unitytls_tlsctx_notify_close_t$$.ctor
ENTRY_POINT: 038dfe24
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 174
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x038dffe8) */

void Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_notify_close_t___ctor
               (long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 in_w9;
  ulong uVar10;
  int in_w10;
  int *piVar11;
  int unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  
  if (in_w10 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + 0x20;
  }
  *(undefined4 *)(lVar9 + (int)unaff_x20[8]) = in_w9;
  iVar1 = (int)unaff_x20[8] + 4;
  *(int *)(unaff_x20 + 8) = iVar1;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x18) == 0)) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + 0x20;
  }
  *(undefined4 *)(lVar9 + iVar1) = 2;
  iVar1 = (int)unaff_x20[8] + 4;
  *(int *)(unaff_x20 + 8) = iVar1;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar3 = unaff_w19 * 2;
  if (*(int *)(param_1 + 0x18) < iVar3) {
    (**(code **)(*unaff_x20 + 0x418))();
    if (*(int *)(*(long *)StringLiteral_2948 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar5 = (long *)FUN_029cff28(iVar3,*(undefined8 *)StringLiteral_2946);
    puVar4 = StringLiteral_2947;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_029cfea8(plVar5,*(undefined8 *)StringLiteral_2947);
    FUN_03952ce8();
    plVar6 = (long *)(**(code **)(*unaff_x20 + 0x3f8))();
    uVar7 = FUN_029cfea8(plVar5,*(undefined8 *)puVar4);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar7,uVar7);
    }
    (**(code **)(*plVar6 + 0x358))(plVar6,uVar7,0,iVar3,*(undefined8 *)(*plVar6 + 0x360));
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_038dffd8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_038dffd8:
    (*(code *)*puVar8)(plVar5,puVar8[1]);
    return;
  }
  if (*(int *)(param_1 + 0x18) < iVar1 + iVar3) {
    (**(code **)(*unaff_x20 + 0x418))();
    param_1 = unaff_x20[7];
    lVar9 = 0;
    if (param_1 == 0) goto LAB_038dfff4;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + 0x20;
  }
LAB_038dfff4:
  lVar2 = 0;
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    lVar2 = unaff_x21 + 0x20;
  }
  FUN_03952c90(lVar2,lVar9 + (int)unaff_x20[8],iVar3,0);
  *(int *)(unaff_x20 + 8) = (int)unaff_x20[8] + iVar3;
  return;
}


