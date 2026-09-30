/*
FUNCTION_NAME: Mono.Unity.UnityTls.unitytls_interface_struct.unitytls_tlsctx_get_ciphersuite_t$$.ctor
ENTRY_POINT: 038dfa3c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 157
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x038dfbac) */

void Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_ciphersuite_t___ctor
               (long param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  int in_w9;
  ulong uVar8;
  int *piVar9;
  long *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(int *)(param_1 + 0x18) < unaff_w21) {
    (**(code **)(*unaff_x20 + 0x418))();
    if (*(int *)(*(long *)StringLiteral_2948 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar3 = (long *)FUN_029cff28(unaff_w21,*(undefined8 *)StringLiteral_2946);
    puVar2 = StringLiteral_2947;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_029cfea8(plVar3,*(undefined8 *)StringLiteral_2947);
    FUN_03952ce8();
    plVar4 = (long *)(**(code **)(*unaff_x20 + 0x3f8))();
    uVar5 = FUN_029cfea8(plVar3,*(undefined8 *)puVar2);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar5,uVar5);
    }
    (**(code **)(*plVar4 + 0x358))(plVar4,uVar5,0,unaff_w21,*(undefined8 *)(*plVar4 + 0x360));
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_038dfb9c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_038dfb9c:
    (*(code *)*puVar6)(plVar3,puVar6[1]);
    return;
  }
  if (*(int *)(param_1 + 0x18) < in_w9 + unaff_w21) {
    (**(code **)(*unaff_x20 + 0x418))();
    param_1 = unaff_x20[7];
    lVar7 = 0;
    if (param_1 == 0)
    goto Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t__Invoke;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + 0x20;
  }
Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t__Invoke:
  lVar1 = 0;
  if (*(int *)(unaff_x22 + 0x18) != 0) {
    lVar1 = unaff_x22 + 0x20;
  }
  FUN_03952c90(lVar1,lVar7 + (int)unaff_x20[8],unaff_w21,0);
  *(int *)(unaff_x20 + 8) = (int)unaff_x20[8] + unaff_w21;
  return;
}


