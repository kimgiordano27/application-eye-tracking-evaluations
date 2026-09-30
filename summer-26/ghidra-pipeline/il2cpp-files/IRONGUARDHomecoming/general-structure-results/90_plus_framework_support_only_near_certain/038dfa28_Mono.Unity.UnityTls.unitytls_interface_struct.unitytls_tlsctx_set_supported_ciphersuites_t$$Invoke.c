/*
FUNCTION_NAME: Mono.Unity.UnityTls.unitytls_interface_struct.unitytls_tlsctx_set_supported_ciphersuites_t$$Invoke
ENTRY_POINT: 038dfa28
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 162
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x038dfbac) */

void Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t__Invoke
               (long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  int in_w9;
  ulong uVar9;
  long in_x10;
  int *piVar10;
  long *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  
  *(undefined4 *)(in_x10 + in_w9) = 1;
  iVar1 = (int)unaff_x20[8] + 4;
  *(int *)(unaff_x20 + 8) = iVar1;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(int *)(param_1 + 0x18) < unaff_w21) {
    (**(code **)(*unaff_x20 + 0x418))();
    if (*(int *)(*(long *)StringLiteral_2948 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar4 = (long *)FUN_029cff28(unaff_w21,*(undefined8 *)StringLiteral_2946);
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
    (**(code **)(*plVar5 + 0x358))(plVar5,uVar6,0,unaff_w21,*(undefined8 *)(*plVar5 + 0x360));
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_038dfb9c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_038dfb9c:
    (*(code *)*puVar7)(plVar4,puVar7[1]);
    return;
  }
  if (*(int *)(param_1 + 0x18) < iVar1 + unaff_w21) {
    (**(code **)(*unaff_x20 + 0x418))();
    param_1 = unaff_x20[7];
    lVar8 = 0;
    if (param_1 == 0)
    goto Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t__Invoke;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + 0x20;
  }
Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t__Invoke:
  lVar2 = 0;
  if (*(int *)(unaff_x22 + 0x18) != 0) {
    lVar2 = unaff_x22 + 0x20;
  }
  FUN_03952c90(lVar2,lVar8 + (int)unaff_x20[8],unaff_w21,0);
  *(int *)(unaff_x20 + 8) = (int)unaff_x20[8] + unaff_w21;
  return;
}


