/*
FUNCTION_NAME: FUN_03a3ee98
ENTRY_POINT: 03a3ee98
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a3f1a8) */

void FUN_03a3ee98(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  
                    /* try { // try from 03a3ee9c to 03b3eea7 has its CatchHandler @ 03a3f6cc */
  if ((DAT_04838c62 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_5859);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_Copy<int2>__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Rect>_Push__);
    DAT_04838c62 = 1;
  }
  puVar13 = (undefined8 *)(param_1 + 0x10);
                    /* try { // try from 03a3ef00 to 03b3ef2b has its CatchHandler @ 03a3f3b0 */
  uVar3 = FUN_0340eec4(*puVar13,0);
  puVar8 = (undefined8 *)Method_UnityEngine_Rendering_Universal_UTess_ModuleHandle_Copy<int2>__;
  if ((uVar3 & 1) == 0) {
    uVar3 = thunk_FUN_0340e318(*(undefined8 *)(param_1 + 0x10),
                               *(undefined8 *)Method_System_Collections_Generic_Stack<Rect>_Push__,0
                              );
    if ((uVar3 & 1) == 0) {
      puVar8 = puVar13;
    }
    uVar11 = *puVar8;
                    /* try { // try from 03a3ef3c to 03b3ef47 has its CatchHandler @ 03a3f3a8 */
    if (*(int *)(param_1 + 0x18) == 1) {
      lVar4 = FUN_033df4f4(0);
    }
    else {
                    /* try { // try from 03a3ef50 to 03b3ef57 has its CatchHandler @ 03a3f6c8 */
      lVar4 = FUN_033df5e4(0);
    }
    if (lVar4 != 0) {
                    /* try { // try from 03a3ef68 to 03b3ef6f has its CatchHandler @ 03a3f734 */
      lVar4 = FUN_033df788(lVar4,uVar11,(param_2 & 4) == 0,0);
      plVar12 = (long *)(param_1 + 0x30);
      *plVar12 = lVar4;
      thunk_FUN_01f51358(plVar12);
      if (*plVar12 == 0) {
        uVar11 = thunk_FUN_01efb3a4(
                                   Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                   );
        uVar11 = FUN_01f08890(uVar11,1);
        uVar10 = *puVar13;
        FUN_01bc50c0();
        FUN_01bc56ec(uVar11,uVar10);
        FUN_01bc5408(uVar11,0,uVar10);
        uVar10 = thunk_FUN_01efb3a4(StringLiteral_7218);
        uVar11 = FUN_033f1a88(uVar10,uVar11,0);
        goto LAB_03a3f168;
      }
      *(uint *)(param_1 + 0x28) = param_2;
      lVar4 = FUN_033dea98(*plVar12,0);
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      if (lVar4 != 0) {
        lVar4 = FUN_033d442c(lVar4,0);
        puVar2 = StringLiteral_5859;
                    /* try { // try from 03a3efac to 03b3efb7 has its CatchHandler @ 03a3f728 */
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
                    /* try { // try from 03a3efc8 to 03b3efd3 has its CatchHandler @ 03a3f70c */
        while (uVar3 = FUN_033d485c(lVar4,0), (uVar3 & 1) != 0) {
          plVar12 = (long *)FUN_033d4484(lVar4,0);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar11 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200));
                    /* try { // try from 03a3eff0 to 03b3eff3 has its CatchHandler @ 03a3f698 */
                    /* try { // try from 03a3eff4 to 03b3effb has its CatchHandler @ 03a3f6b4 */
          lVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
          FUN_03a36258(lVar5,uVar11);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          plVar6 = (long *)FUN_03a368a8(lVar5);
          uVar11 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
                    /* try { // try from 03a3f02c to 03b3f02f has its CatchHandler @ 03a3f68c */
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c(uVar11,uVar11);
          }
                    /* try { // try from 03a3f030 to 03b3f03b has its CatchHandler @ 03a3f694 */
          (**(code **)(*plVar6 + 0x2b8))(plVar6,uVar11,*(undefined8 *)(*plVar6 + 0x2c0));
          lVar7 = FUN_03a3ea14(param_1);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_03a38568(lVar7,lVar5);
        }
        plVar12 = (long *)thunk_FUN_01f116d0(lVar4,*(undefined8 *)puVar1);
        if (plVar12 != (long *)0x0) {
          lVar5 = *plVar12;
          lVar4 = *(long *)puVar1;
          uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar3 != 0) {
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar4) {
                puVar8 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_03a3f0c0;
              }
              uVar3 = uVar3 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar3 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar12,lVar4,0);
LAB_03a3f0c0:
          (*(code *)*puVar8)(plVar12,puVar8[1]);
        }
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar11 = thunk_FUN_01efb3a4(StringLiteral_7217);
  uVar11 = FUN_033f1a84(uVar11,0);
LAB_03a3f168:
  thunk_FUN_01efb3a4(Method_System_Reflection_MemberInfoSerializationHolder_GetObjectData__);
  uVar10 = thunk_FUN_01f117cc();
  FUN_03437810(uVar10,uVar11,0);
  uVar11 = thunk_FUN_01efb3a4(StringLiteral_7219);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar10,uVar11);
}


