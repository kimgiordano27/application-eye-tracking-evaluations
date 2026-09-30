/*
FUNCTION_NAME: Mono.Unity.UnityTls.unitytls_interface_struct.unitytls_tlsctx_create_client_t$$.ctor
ENTRY_POINT: 038df578
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x038df780) */

void Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t___ctor(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  
  uVar2 = *(uint *)(unaff_x20 + 8);
  lVar8 = unaff_x20[7];
  *(uint *)(unaff_x20 + 8) = uVar2 + 1;
  if (lVar8 == 0) {
LAB_038df7cc:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(uint *)(lVar8 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined1 *)(lVar8 + (int)uVar2 + 0x20) = 8;
  lVar8 = unaff_x20[7];
  if ((lVar8 == 0) || (*(int *)(lVar8 + 0x18) == 0)) {
    lVar9 = 0;
  }
  else {
    lVar9 = lVar8 + 0x20;
  }
  *(undefined4 *)(lVar9 + (int)unaff_x20[8]) = *(undefined4 *)(unaff_x22 + 0x18);
  iVar1 = (int)unaff_x20[8] + 4;
  *(int *)(unaff_x20 + 8) = iVar1;
  if ((lVar8 == 0) || (*(int *)(lVar8 + 0x18) == 0)) {
    lVar9 = 0;
  }
  else {
    lVar9 = lVar8 + 0x20;
  }
  *(undefined4 *)(lVar9 + iVar1) = 1;
  iVar1 = (int)unaff_x20[8] + 4;
  *(int *)(unaff_x20 + 8) = iVar1;
  if (lVar8 == 0) goto LAB_038df7cc;
  if (*(int *)(lVar8 + 0x18) < unaff_w21) {
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
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_038df770;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_038df770:
    (*(code *)*puVar7)(plVar4,puVar7[1]);
    return;
  }
  if (*(int *)(lVar8 + 0x18) < iVar1 + unaff_w21) {
    (**(code **)(*unaff_x20 + 0x418))();
    lVar8 = unaff_x20[7];
    lVar9 = 0;
    if (lVar8 == 0) goto LAB_038df78c;
  }
  if (*(int *)(lVar8 + 0x18) == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = lVar8 + 0x20;
  }
LAB_038df78c:
  lVar8 = 0;
  if (*(int *)(unaff_x22 + 0x18) != 0) {
    lVar8 = unaff_x22 + 0x20;
  }
  FUN_03952c90(lVar8,lVar9 + (int)unaff_x20[8],unaff_w21,0);
  *(int *)(unaff_x20 + 8) = (int)unaff_x20[8] + unaff_w21;
  return;
}


