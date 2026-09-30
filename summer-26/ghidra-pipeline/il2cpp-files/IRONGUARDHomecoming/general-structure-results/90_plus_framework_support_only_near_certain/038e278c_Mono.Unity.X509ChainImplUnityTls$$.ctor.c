/*
FUNCTION_NAME: Mono.Unity.X509ChainImplUnityTls$$.ctor
ENTRY_POINT: 038e278c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x038e2a40) */

void Mono_Unity_X509ChainImplUnityTls___ctor(ulong param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x20;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_2946);
    thunk_FUN_01efb3a4(StringLiteral_2947);
                    /* try { // try from 038e27b0 to 039e27bf has its CatchHandler @ 038e27c0 */
    thunk_FUN_01efb3a4(StringLiteral_2948);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector3>__ctor__)
    ;
                    /* catch() { ... } // from try @ 038e271c with catch @ 038e27c0
                       catch() { ... } // from try @ 038e27b0 with catch @ 038e27c0 */
                    /* try { // try from 038e27c4 to 039e27c7 has its CatchHandler @ 038e27d0 */
                    /* try { // try from 038e27c8 to 039e27d3 has its CatchHandler @ 038e258c */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 038e27c4 with catch @ 038e27d0
                        */
    thunk_FUN_01efb3a4(Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__);
    *(undefined1 *)(unaff_x21 + 0x118) = 1;
  }
  lVar4 = thunk_FUN_01f116d0();
  if (((lVar4 == 0) || (unaff_x20 == (long *)0x0)) || (lVar10 = unaff_x20[7], lVar10 == 0)) {
LAB_038e2a8c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(int *)(lVar10 + 0x18) < 9) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar9 = thunk_FUN_01efb3a4(StringLiteral_2944);
    Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar6,uVar9,0);
    uVar9 = thunk_FUN_01efb3a4(StringLiteral_2945);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,uVar9);
  }
  uVar12 = *(uint *)(unaff_x20 + 8);
  iVar2 = *(int *)(lVar4 + 0x18);
  if (*(int *)(lVar10 + 0x18) < (int)(uVar12 + 9)) {
    (**(code **)(*unaff_x20 + 0x418))();
    uVar12 = *(uint *)(unaff_x20 + 8);
    lVar10 = unaff_x20[7];
    *(uint *)(unaff_x20 + 8) = uVar12 + 1;
    if (lVar10 == 0) goto LAB_038e2a8c;
  }
  else {
    *(uint *)(unaff_x20 + 8) = uVar12 + 1;
  }
  if (*(uint *)(lVar10 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  *(undefined1 *)(lVar10 + (int)uVar12 + 0x20) = 8;
  lVar10 = unaff_x20[7];
  if ((lVar10 == 0) || (*(int *)(lVar10 + 0x18) == 0)) {
    lVar11 = 0;
  }
  else {
    lVar11 = lVar10 + 0x20;
  }
  *(undefined4 *)(lVar11 + (int)unaff_x20[8]) = *(undefined4 *)(lVar4 + 0x18);
  iVar1 = (int)unaff_x20[8] + 4;
  *(int *)(unaff_x20 + 8) = iVar1;
  if ((lVar10 == 0) || (*(int *)(lVar10 + 0x18) == 0)) {
    lVar11 = 0;
  }
  else {
    lVar11 = lVar10 + 0x20;
  }
  *(undefined4 *)(lVar11 + iVar1) = 0x10;
  iVar1 = (int)unaff_x20[8] + 4;
  *(int *)(unaff_x20 + 8) = iVar1;
  if (lVar10 == 0) goto LAB_038e2a8c;
  iVar2 = iVar2 * 0x10;
  if (*(int *)(lVar10 + 0x18) < iVar2) {
    (**(code **)(*unaff_x20 + 0x418))();
    if (*(int *)(*(long *)StringLiteral_2948 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar5 = (long *)FUN_029cff28(iVar2,*(undefined8 *)StringLiteral_2946);
    puVar3 = StringLiteral_2947;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = FUN_029cfea8(plVar5,*(undefined8 *)StringLiteral_2947);
    FUN_03952ce8(lVar4,uVar6,iVar2,0,0,0);
    plVar7 = (long *)(**(code **)(*unaff_x20 + 0x3f8))();
    uVar6 = FUN_029cfea8(plVar5,*(undefined8 *)puVar3);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar6,uVar6);
    }
    (**(code **)(*plVar7 + 0x358))(plVar7,uVar6,0,iVar2,*(undefined8 *)(*plVar7 + 0x360));
    lVar4 = *plVar5;
    uVar13 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar4 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_038e2a30;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_038e2a30:
    (*(code *)*puVar8)(plVar5,puVar8[1]);
    return;
  }
  if (*(int *)(lVar10 + 0x18) < iVar1 + iVar2) {
    (**(code **)(*unaff_x20 + 0x418))();
    lVar10 = unaff_x20[7];
    lVar11 = 0;
    if (lVar10 == 0) goto LAB_038e2a4c;
  }
  if (*(int *)(lVar10 + 0x18) == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = lVar10 + 0x20;
  }
LAB_038e2a4c:
  lVar10 = 0;
  if (*(int *)(lVar4 + 0x18) != 0) {
    lVar10 = lVar4 + 0x20;
  }
  FUN_03952c90(lVar10,lVar11 + (int)unaff_x20[8],iVar2,0);
  *(int *)(unaff_x20 + 8) = (int)unaff_x20[8] + iVar2;
  return;
}


