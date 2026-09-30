/*
FUNCTION_NAME: FUN_03f78eac
ENTRY_POINT: 03f78eac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 FUN_03f78eac(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  
  if ((DAT_0483b5c1 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_5819);
    thunk_FUN_01efb3a4(StringLiteral_5820);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_0483b5c1 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 2) {
    if (iVar1 != 1) {
      if (iVar1 == 0) {
        plVar2 = *(long **)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar3 = (**(code **)(*plVar2 + 0x888))(plVar2,*(undefined8 *)(*plVar2 + 0x890));
        *(undefined8 *)(param_1 + 0x38) = uVar3;
        thunk_FUN_01f51358();
        uVar3 = *(undefined8 *)(param_1 + 0x38);
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        uVar5 = FUN_03583338(uVar3,0,0);
        if ((uVar5 & 1) != 0) {
          *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x38);
          thunk_FUN_01f51358();
          *(undefined4 *)(param_1 + 0x10) = 1;
          return 1;
        }
      }
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar2 = (long *)FUN_03f752a4(uVar3,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)StringLiteral_5819) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03f78fec;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar2,*(long *)StringLiteral_5819,0);
LAB_03f78fec:
    uVar3 = (*(code *)*puVar4)(plVar2,puVar4[1]);
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    thunk_FUN_01f51358();
  }
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  if (*(undefined8 **)(param_1 + 0x40) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = FUN_042af9e4(**(undefined8 **)(param_1 + 0x40));
  return uVar3;
}


