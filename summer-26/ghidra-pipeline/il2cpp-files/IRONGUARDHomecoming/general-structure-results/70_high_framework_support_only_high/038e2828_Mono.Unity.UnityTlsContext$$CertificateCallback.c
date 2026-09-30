/*
FUNCTION_NAME: Mono.Unity.UnityTlsContext$$CertificateCallback
ENTRY_POINT: 038e2828
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x038e2a40) */

void Mono_Unity_UnityTlsContext__CertificateCallback(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  
  (**(code **)(param_1 + 0x418))(param_2,*(undefined8 *)(param_1 + 0x420));
  uVar2 = *(uint *)(unaff_x20 + 8);
  lVar9 = unaff_x20[7];
  *(uint *)(unaff_x20 + 8) = uVar2 + 1;
  if (lVar9 == 0) {
LAB_038e2a8c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined1 *)(lVar9 + (int)uVar2 + 0x20) = 8;
  lVar9 = unaff_x20[7];
  if ((lVar9 == 0) || (*(int *)(lVar9 + 0x18) == 0)) {
    lVar10 = 0;
  }
  else {
    lVar10 = lVar9 + 0x20;
  }
  *(undefined4 *)(lVar10 + (int)unaff_x20[8]) = *(undefined4 *)(unaff_x21 + 0x18);
  iVar1 = (int)unaff_x20[8] + 4;
  *(int *)(unaff_x20 + 8) = iVar1;
  if ((lVar9 == 0) || (*(int *)(lVar9 + 0x18) == 0)) {
    lVar10 = 0;
  }
  else {
    lVar10 = lVar9 + 0x20;
  }
  *(undefined4 *)(lVar10 + iVar1) = 0x10;
  iVar1 = (int)unaff_x20[8] + 4;
  *(int *)(unaff_x20 + 8) = iVar1;
  if (lVar9 == 0) goto LAB_038e2a8c;
  iVar3 = unaff_w19 * 0x10;
  if (*(int *)(lVar9 + 0x18) < iVar3) {
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
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_038e2a30;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
                    /* try { // try from 038e29e8 to 039e2b17 has its CatchHandler @ 038e29e8
                       catch() { ... } // from try @ 038e29e8 with catch @ 038e29e8
                       catch() { ... } // from try @ 038e2d70 with catch @ 038e29e8
                       catch() { ... } // from try @ 038e2de0 with catch @ 038e29e8
                       catch() { ... } // from try @ 038e2eb0 with catch @ 038e29e8
                       catch() { ... } // from try @ 038e2ec8 with catch @ 038e29e8 */
LAB_038e2a30:
    (*(code *)*puVar8)(plVar5,puVar8[1]);
    return;
  }
  if (*(int *)(lVar9 + 0x18) < iVar1 + iVar3) {
    (**(code **)(*unaff_x20 + 0x418))();
    lVar9 = unaff_x20[7];
    lVar10 = 0;
    if (lVar9 == 0) goto LAB_038e2a4c;
  }
  if (*(int *)(lVar9 + 0x18) == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = lVar9 + 0x20;
  }
LAB_038e2a4c:
  lVar9 = 0;
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    lVar9 = unaff_x21 + 0x20;
  }
  FUN_03952c90(lVar9,lVar10 + (int)unaff_x20[8],iVar3,0);
  *(int *)(unaff_x20 + 8) = (int)unaff_x20[8] + iVar3;
  return;
}


