/*
FUNCTION_NAME: UnityEngine.Networking.PlayerConnection.PlayerConnection.<>c__DisplayClass20_0$$<BlockUntilRecvMsg>b__0
ENTRY_POINT: 03f878e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_12;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03f87bc8) */

void UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0__<BlockUntilRecvMsg>b__0
               (long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  long *plVar15;
  long unaff_x21;
  
  plVar15 = *(long **)(unaff_x19 + 0xa68);
  if ((*(byte *)(unaff_x21 + 0x689) & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(PTR_DAT_045819a0);
    thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_System_Collections_IList_Remove__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_045819a8);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(PTR_DAT_045819b0);
    thunk_FUN_01efb3a4(PTR_DAT_045819b8);
    thunk_FUN_01efb3a4(PTR_DAT_045819c0);
    *(undefined1 *)(unaff_x21 + 0x689) = 1;
  }
  puVar4 = PTR_DAT_045819c0;
  if (*(int *)(*plVar15 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar9 = FUN_03ec8718(*(undefined8 *)puVar4,0);
  if ((lVar9 == 0) ||
     (FUN_022df844(lVar9,param_1,*(undefined8 *)PTR_DAT_045819a0),
     puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__, param_1 == 0
     )) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar15 = (long *)FUN_03f87db4(param_1);
  puVar8 = PTR_DAT_045819b8;
  puVar7 = PTR_DAT_045819b0;
  puVar6 = PTR_DAT_045819a8;
  puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar3 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  puVar2 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar9 = *plVar15;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
          puVar10 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03f87a4c;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)puVar5,0);
LAB_03f87a4c:
    uVar12 = (*(code *)*puVar10)(plVar15,puVar10[1]);
    if ((uVar12 & 1) == 0) {
      if (plVar15 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar15;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 == 0) goto LAB_03f87b70;
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar15;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar6) {
          puVar10 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03f87aa8;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)puVar6,0);
LAB_03f87aa8:
    lVar9 = (*(code *)*puVar10)(plVar15,puVar10[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long **)(lVar9 + 0x18) != (long *)0x0) {
      lVar13 = **(long **)(lVar9 + 0x18);
      bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
      if ((bVar1 <= *(byte *)(lVar13 + 0x130)) &&
         (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
        uVar11 = FUN_0340ebc0(*(undefined8 *)puVar7,*(undefined8 *)(lVar9 + 0x10),
                              *(undefined8 *)puVar8,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0403f2cc(uVar11,0);
        FUN_03f88760(param_1,*(undefined8 *)(lVar9 + 0x10),0);
      }
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
      puVar10 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03f87b8c;
    }
  }
LAB_03f87b70:
  puVar10 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)puVar4,0);
LAB_03f87b8c:
  (*(code *)*puVar10)(plVar15,puVar10[1]);
  return;
}


