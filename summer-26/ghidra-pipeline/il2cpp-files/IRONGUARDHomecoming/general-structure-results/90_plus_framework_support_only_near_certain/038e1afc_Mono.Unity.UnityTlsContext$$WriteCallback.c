/*
FUNCTION_NAME: Mono.Unity.UnityTlsContext$$WriteCallback
ENTRY_POINT: 038e1afc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x038e1d8c) */

void Mono_Unity_UnityTlsContext__WriteCallback(void)

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
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_IsDefined__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__);
  *(undefined1 *)(unaff_x21 + 0x115) = 1;
  lVar4 = thunk_FUN_01f116d0();
                    /* try { // try from 038e1b38 to 039e1b47 has its CatchHandler @ 038e1e40 */
  if (((lVar4 == 0) || (unaff_x20 == (long *)0x0)) || (lVar10 = unaff_x20[7], lVar10 == 0)) {
LAB_038e1dd8:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 038e1dd8 to 039e1de7 has its CatchHandler @ 038e1e24 */
    FUN_01f08a3c();
  }
  if (*(int *)(lVar10 + 0x18) < 9) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
                    /* try { // try from 038e1de8 to 039e1deb has its CatchHandler @ 038e1e20 */
    uVar6 = thunk_FUN_01f117cc();
                    /* try { // try from 038e1dec to 039e1df7 has its CatchHandler @ 038e1e34 */
                    /* try { // try from 038e1df8 to 039e1dfb has its CatchHandler @ 038e1e18 */
    uVar9 = thunk_FUN_01efb3a4(StringLiteral_2944);
                    /* try { // try from 038e1dfc to 039e1e03 has its CatchHandler @ 038e1e34 */
                    /* catch() { ... } // from try @ 038e1cb4 with catch @ 038e1e04 */
                    /* catch() { ... } // from try @ 038e1c8c with catch @ 038e1e08 */
    Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar6,uVar9,0);
                    /* catch() { ... } // from try @ 038e1d20 with catch @ 038e1e0c */
                    /* catch() { ... } // from try @ 038e1c90 with catch @ 038e1e10 */
                    /* catch() { ... } // from try @ 038e1d40 with catch @ 038e1e14 */
    uVar9 = thunk_FUN_01efb3a4(StringLiteral_2945);
                    /* catch() { ... } // from try @ 038e1df8 with catch @ 038e1e18 */
                    /* catch() { ... } // from try @ 038e1c6c with catch @ 038e1e1c */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 038e1de8 with catch @ 038e1e20 */
    FUN_01f08910(uVar6,uVar9);
  }
  uVar12 = *(uint *)(unaff_x20 + 8);
  iVar2 = *(int *)(lVar4 + 0x18);
                    /* try { // try from 038e1b5c to 039e1b63 has its CatchHandler @ 038e1e38 */
  if (*(int *)(lVar10 + 0x18) < (int)(uVar12 + 9)) {
    (**(code **)(*unaff_x20 + 0x418))();
    uVar12 = *(uint *)(unaff_x20 + 8);
    lVar10 = unaff_x20[7];
    *(uint *)(unaff_x20 + 8) = uVar12 + 1;
    if (lVar10 == 0) goto LAB_038e1dd8;
  }
  else {
    *(uint *)(unaff_x20 + 8) = uVar12 + 1;
  }
                    /* try { // try from 038e1ba0 to 039e1ba7 has its CatchHandler @ 038e1e58 */
  if (*(uint *)(lVar10 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 038e1dd8 with catch @ 038e1e24 */
    FUN_01f08a44();
  }
                    /* try { // try from 038e1bb4 to 039e1bbf has its CatchHandler @ 038e1e54 */
  *(undefined1 *)(lVar10 + (int)uVar12 + 0x20) = 8;
  lVar10 = unaff_x20[7];
                    /* try { // try from 038e1bc4 to 039e1bcf has its CatchHandler @ 038e1c48 */
  if ((lVar10 == 0) || (*(int *)(lVar10 + 0x18) == 0)) {
    lVar11 = 0;
  }
  else {
    lVar11 = lVar10 + 0x20;
  }
                    /* try { // try from 038e1bdc to 039e1bf3 has its CatchHandler @ 038e1c50 */
  *(undefined4 *)(lVar11 + (int)unaff_x20[8]) = *(undefined4 *)(lVar4 + 0x18);
  iVar1 = (int)unaff_x20[8] + 4;
  *(int *)(unaff_x20 + 8) = iVar1;
                    /* try { // try from 038e1bf4 to 039e1bff has its CatchHandler @ 038e1c4c */
  if ((lVar10 == 0) || (*(int *)(lVar10 + 0x18) == 0)) {
    lVar11 = 0;
  }
  else {
    lVar11 = lVar10 + 0x20;
  }
  *(undefined4 *)(lVar11 + iVar1) = 0x10;
  iVar1 = (int)unaff_x20[8] + 4;
  *(int *)(unaff_x20 + 8) = iVar1;
                    /* try { // try from 038e1c18 to 039e1c2b has its CatchHandler @ 038e1c40 */
  if (lVar10 == 0) goto LAB_038e1dd8;
  iVar2 = iVar2 * 0x10;
  if (*(int *)(lVar10 + 0x18) < iVar2) {
                    /* try { // try from 038e1c30 to 039e1c33 has its CatchHandler @ 038e1c44 */
                    /* try { // try from 038e1c38 to 039e1c3b has its CatchHandler @ 038e1c4c */
                    /* try { // try from 038e1c3c to 039e1c6b has its CatchHandler @ 038e1948 */
    (**(code **)(*unaff_x20 + 0x418))();
                    /* catch() { ... } // from try @ 038e1c18 with catch @ 038e1c40 */
                    /* catch() { ... } // from try @ 038e1c30 with catch @ 038e1c44 */
                    /* catch() { ... } // from try @ 038e1bc4 with catch @ 038e1c48 */
                    /* catch() { ... } // from try @ 038e1bf4 with catch @ 038e1c4c
                       catch() { ... } // from try @ 038e1c38 with catch @ 038e1c4c */
                    /* catch() { ... } // from try @ 038e1bdc with catch @ 038e1c50 */
    if (*(int *)(*(long *)StringLiteral_2948 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar5 = (long *)FUN_029cff28(iVar2,*(undefined8 *)StringLiteral_2946);
    puVar3 = StringLiteral_2947;
                    /* try { // try from 038e1c6c to 039e1c83 has its CatchHandler @ 038e1e1c */
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = FUN_029cfea8(plVar5,*(undefined8 *)StringLiteral_2947);
                    /* try { // try from 038e1c8c to 039e1c8f has its CatchHandler @ 038e1e08 */
                    /* try { // try from 038e1c90 to 039e1ca3 has its CatchHandler @ 038e1e10 */
    FUN_03952ce8(lVar4,uVar6,iVar2,0,0,0);
                    /* try { // try from 038e1cb4 to 039e1d1f has its CatchHandler @ 038e1e04 */
    plVar7 = (long *)(**(code **)(*unaff_x20 + 0x3f8))();
    uVar6 = FUN_029cfea8(plVar5,*(undefined8 *)puVar3);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 038e1e2c to 039e1e2f has its CatchHandler @ 038e1ef4 */
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
          goto LAB_038e1d7c;
        }
        uVar13 = uVar13 - 1;
                    /* try { // try from 038e1d20 to 039e1d3f has its CatchHandler @ 038e1e0c */
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_038e1d7c:
    (*(code *)*puVar8)(plVar5,puVar8[1]);
    return;
  }
                    /* try { // try from 038e1d40 to 039e1d4b has its CatchHandler @ 038e1e14 */
  if (*(int *)(lVar10 + 0x18) < iVar1 + iVar2) {
    (**(code **)(*unaff_x20 + 0x418))();
                    /* try { // try from 038e1d58 to 039e1d5f has its CatchHandler @ 038e1e44 */
    lVar10 = unaff_x20[7];
    lVar11 = 0;
    if (lVar10 == 0) goto LAB_038e1d98;
  }
                    /* try { // try from 038e1d60 to 039e1d9b has its CatchHandler @ 038e1948 */
  if (*(int *)(lVar10 + 0x18) == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = lVar10 + 0x20;
  }
LAB_038e1d98:
  lVar10 = 0;
  if (*(int *)(lVar4 + 0x18) != 0) {
    lVar10 = lVar4 + 0x20;
  }
  FUN_03952c90(lVar10,lVar11 + (int)unaff_x20[8],iVar2,0);
  *(int *)(unaff_x20 + 8) = (int)unaff_x20[8] + iVar2;
  return;
}


