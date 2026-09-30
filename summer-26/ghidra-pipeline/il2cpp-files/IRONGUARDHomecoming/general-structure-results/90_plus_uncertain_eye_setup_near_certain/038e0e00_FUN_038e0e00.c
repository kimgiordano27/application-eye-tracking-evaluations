/*
FUNCTION_NAME: FUN_038e0e00
ENTRY_POINT: 038e0e00
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x038e10d8) */

void FUN_038e0e00(long *param_1,undefined8 param_2)

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
  
  puVar3 = Method_System_Security_Cryptography_RijndaelManaged__ctor__;
  if ((DAT_04838112 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_2946);
    thunk_FUN_01efb3a4(StringLiteral_2947);
                    /* try { // try from 038e0e40 to 039e0e4f has its CatchHandler @ 038e0e54 */
    thunk_FUN_01efb3a4(StringLiteral_2948);
                    /* catch() { ... } // from try @ 038e0d74 with catch @ 038e0e54
                       catch() { ... } // from try @ 038e0e40 with catch @ 038e0e54 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
                    /* try { // try from 038e0e58 to 039e0e5b has its CatchHandler @ 038e0fb8 */
                    /* try { // try from 038e0e5c to 039e0e7f has its CatchHandler @ 038e0a48 */
                    /* catch() { ... } // from try @ 038e0bbc with catch @ 038e0e60
                       catch() { ... } // from try @ 038e0d30 with catch @ 038e0e60 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__);
                    /* catch() { ... } // from try @ 038e0b94 with catch @ 038e0e64
                       catch() { ... } // from try @ 038e0d28 with catch @ 038e0e64 */
                    /* catch() { ... } // from try @ 038e0bd0 with catch @ 038e0e68
                       catch() { ... } // from try @ 038e0d34 with catch @ 038e0e68
                       catch() { ... } // from try @ 038e0d40 with catch @ 038e0e68 */
    thunk_FUN_01efb3a4(Method_System_Security_Cryptography_RijndaelManaged__ctor__);
    DAT_04838112 = 1;
  }
                    /* try { // try from 038e0e80 to 039e0e97 has its CatchHandler @ 038e0fa8 */
  lVar4 = thunk_FUN_01f116d0(param_2,*(undefined8 *)puVar3);
  if (((lVar4 == 0) || (param_1 == (long *)0x0)) || (lVar10 = param_1[7], lVar10 == 0)) {
LAB_038e1124:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 038e1124 to 039e1143 has its CatchHandler @ 038e0fbc */
    FUN_01f08a3c();
  }
                    /* try { // try from 038e0e98 to 039e0f97 has its CatchHandler @ 038e0a48 */
  if (*(int *)(lVar10 + 0x18) < 9) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 038e1024 with catch @ 038e1128
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 038e1054 with catch @ 038e112c
                       catch(type#1 @ 042b3198) { ... } // from try @ 038e1120 with catch @ 038e112c
                        */
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
                    /* try { // try from 038e1144 to 039e1147 has its CatchHandler @ 038e1158 */
    uVar9 = thunk_FUN_01efb3a4(StringLiteral_2944);
    Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar6,uVar9,0);
                    /* catch() { ... } // from try @ 038e1144 with catch @ 038e1158 */
    uVar9 = thunk_FUN_01efb3a4(StringLiteral_2945);
                    /* try { // try from 038e1164 to 039e116f has its CatchHandler @ 038e1184 */
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,uVar9);
  }
  uVar12 = *(uint *)(param_1 + 8);
  iVar2 = *(int *)(lVar4 + 0x18);
  if (*(int *)(lVar10 + 0x18) < (int)(uVar12 + 9)) {
    (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
    uVar12 = *(uint *)(param_1 + 8);
    lVar10 = param_1[7];
    *(uint *)(param_1 + 8) = uVar12 + 1;
    if (lVar10 == 0) goto LAB_038e1124;
  }
  else {
    *(uint *)(param_1 + 8) = uVar12 + 1;
  }
  if (*(uint *)(lVar10 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 038e1170 to 039e117b has its CatchHandler @ 038e0fbc */
    FUN_01f08a44();
  }
  *(undefined1 *)(lVar10 + (int)uVar12 + 0x20) = 8;
  lVar10 = param_1[7];
  if ((lVar10 == 0) || (*(int *)(lVar10 + 0x18) == 0)) {
    lVar11 = 0;
  }
  else {
    lVar11 = lVar10 + 0x20;
  }
  *(undefined4 *)(lVar11 + (int)param_1[8]) = *(undefined4 *)(lVar4 + 0x18);
  iVar1 = (int)param_1[8] + 4;
  *(int *)(param_1 + 8) = iVar1;
  if ((lVar10 == 0) || (*(int *)(lVar10 + 0x18) == 0)) {
    lVar11 = 0;
  }
  else {
    lVar11 = lVar10 + 0x20;
  }
  *(undefined4 *)(lVar11 + iVar1) = 2;
  iVar1 = (int)param_1[8] + 4;
  *(int *)(param_1 + 8) = iVar1;
  if (lVar10 == 0) goto LAB_038e1124;
  iVar2 = iVar2 * 2;
  if (*(int *)(lVar10 + 0x18) < iVar2) {
    (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
                    /* try { // try from 038e0f98 to 039e0fa7 has its CatchHandler @ 038e0fa8 */
    if (*(int *)(*(long *)StringLiteral_2948 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
                    /* catch() { ... } // from try @ 038e0e80 with catch @ 038e0fa8
                       catch() { ... } // from try @ 038e0f98 with catch @ 038e0fa8 */
                    /* try { // try from 038e0fac to 039e0faf has its CatchHandler @ 038e0fb8 */
                    /* try { // try from 038e0fb0 to 039e0fbb has its CatchHandler @ 038e0a48 */
    plVar5 = (long *)FUN_029cff28(iVar2,*(undefined8 *)StringLiteral_2946);
    puVar3 = StringLiteral_2947;
                    /* catch() { ... } // from try @ 038e0e58 with catch @ 038e0fb8
                       catch() { ... } // from try @ 038e0fac with catch @ 038e0fb8 */
                    /* try { // try from 038e0fbc to 039e1023 has its CatchHandler @ 038e0fbc
                       catch() { ... } // from try @ 038e0fbc with catch @ 038e0fbc
                       catch() { ... } // from try @ 038e1060 with catch @ 038e0fbc
                       catch() { ... } // from try @ 038e1124 with catch @ 038e0fbc
                       catch() { ... } // from try @ 038e1170 with catch @ 038e0fbc */
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = FUN_029cfea8(plVar5,*(undefined8 *)StringLiteral_2947);
    FUN_03952ce8(lVar4,uVar6,iVar2,0,0,0);
    plVar7 = (long *)(**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400));
    uVar6 = FUN_029cfea8(plVar5,*(undefined8 *)puVar3);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar6,uVar6);
    }
                    /* try { // try from 038e1024 to 039e1033 has its CatchHandler @ 038e1128 */
    (**(code **)(*plVar7 + 0x358))(plVar7,uVar6,0,iVar2,*(undefined8 *)(*plVar7 + 0x360));
    lVar4 = *plVar5;
    uVar13 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar13 != 0) {
                    /* try { // try from 038e1054 to 039e105f has its CatchHandler @ 038e112c */
      piVar14 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* try { // try from 038e1060 to 039e111f has its CatchHandler @ 038e0fbc */
        if (*(long *)(piVar14 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar4 + (long)*piVar14 * 0x10 + 0x138);
          goto FUN_038e10c8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
FUN_038e10c8:
    (*(code *)*puVar8)(plVar5,puVar8[1]);
    return;
  }
  if (*(int *)(lVar10 + 0x18) < iVar1 + iVar2) {
    (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
    lVar10 = param_1[7];
    lVar11 = 0;
    if (lVar10 == 0) goto LAB_038e10e4;
  }
  if (*(int *)(lVar10 + 0x18) == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = lVar10 + 0x20;
  }
LAB_038e10e4:
  lVar10 = 0;
  if (*(int *)(lVar4 + 0x18) != 0) {
    lVar10 = lVar4 + 0x20;
  }
  FUN_03952c90(lVar10,lVar11 + (int)param_1[8],iVar2,0);
  *(int *)(param_1 + 8) = (int)param_1[8] + iVar2;
  return;
}


