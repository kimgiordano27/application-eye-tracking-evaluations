/*
FUNCTION_NAME: Mono.Unity.UnityTls.unitytls_interface_struct.unitytls_tlsctx_set_x509verify_callback_t$$Invoke
ENTRY_POINT: 038df960
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 165
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x038dfbac) */

void Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_x509verify_callback_t__Invoke
               (long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x20;
  
  if ((unaff_x20 == (long *)0x0) || (lVar9 = unaff_x20[7], lVar9 == 0)) {
LAB_038dfbf8:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(int *)(lVar9 + 0x18) < 9) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(StringLiteral_2944);
    Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar5,uVar8,0);
    uVar8 = thunk_FUN_01efb3a4(StringLiteral_2945);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,uVar8);
  }
  uVar11 = *(uint *)(unaff_x20 + 8);
  iVar2 = *(int *)(param_1 + 0x18);
  if (*(int *)(lVar9 + 0x18) < (int)(uVar11 + 9)) {
    (**(code **)(*unaff_x20 + 0x418))();
    uVar11 = *(uint *)(unaff_x20 + 8);
    lVar9 = unaff_x20[7];
    *(uint *)(unaff_x20 + 8) = uVar11 + 1;
    if (lVar9 == 0) goto LAB_038dfbf8;
  }
  else {
    *(uint *)(unaff_x20 + 8) = uVar11 + 1;
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined1 *)(lVar9 + (int)uVar11 + 0x20) = 8;
  lVar9 = unaff_x20[7];
  if ((lVar9 == 0) || (*(int *)(lVar9 + 0x18) == 0)) {
    lVar10 = 0;
  }
  else {
    lVar10 = lVar9 + 0x20;
  }
  *(undefined4 *)(lVar10 + (int)unaff_x20[8]) = *(undefined4 *)(param_1 + 0x18);
  iVar1 = (int)unaff_x20[8] + 4;
  *(int *)(unaff_x20 + 8) = iVar1;
  if ((lVar9 == 0) || (*(int *)(lVar9 + 0x18) == 0)) {
    lVar10 = 0;
  }
  else {
    lVar10 = lVar9 + 0x20;
  }
  *(undefined4 *)(lVar10 + iVar1) = 1;
  iVar1 = (int)unaff_x20[8] + 4;
  *(int *)(unaff_x20 + 8) = iVar1;
  if (lVar9 == 0) goto LAB_038dfbf8;
  if (*(int *)(lVar9 + 0x18) < iVar2) {
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
    uVar5 = FUN_029cfea8(plVar4,*(undefined8 *)StringLiteral_2947);
    FUN_03952ce8(param_1,uVar5,iVar2,0,0,0);
    plVar6 = (long *)(**(code **)(*unaff_x20 + 0x3f8))();
    uVar5 = FUN_029cfea8(plVar4,*(undefined8 *)puVar3);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar5,uVar5);
    }
    (**(code **)(*plVar6 + 0x358))(plVar6,uVar5,0,iVar2,*(undefined8 *)(*plVar6 + 0x360));
    lVar9 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_038dfb9c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_038dfb9c:
    (*(code *)*puVar7)(plVar4,puVar7[1]);
    return;
  }
  if (*(int *)(lVar9 + 0x18) < iVar1 + iVar2) {
    (**(code **)(*unaff_x20 + 0x418))();
    lVar9 = unaff_x20[7];
    lVar10 = 0;
    if (lVar9 == 0)
    goto Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t__Invoke;
  }
  if (*(int *)(lVar9 + 0x18) == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = lVar9 + 0x20;
  }
Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t__Invoke:
  lVar9 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar9 = param_1 + 0x20;
  }
  FUN_03952c90(lVar9,lVar10 + (int)unaff_x20[8],iVar2,0);
  *(int *)(unaff_x20 + 8) = (int)unaff_x20[8] + iVar2;
  return;
}


