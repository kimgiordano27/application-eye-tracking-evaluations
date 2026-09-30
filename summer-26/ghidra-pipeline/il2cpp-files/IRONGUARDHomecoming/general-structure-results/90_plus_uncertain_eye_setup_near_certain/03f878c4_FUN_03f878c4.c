/*
FUNCTION_NAME: FUN_03f878c4
ENTRY_POINT: 03f878c4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_12;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03f87bc8) */

void FUN_03f878c4(long param_1)

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
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  
  puVar4 = Method_System_Collections_CollectionBase_System_Collections_IList_Remove__;
  if ((DAT_0483b689 & 1) == 0) {
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
    DAT_0483b689 = 1;
  }
  puVar2 = PTR_DAT_045819c0;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar9 = FUN_03ec8718(*(undefined8 *)puVar2,0);
  if ((lVar9 == 0) ||
     (FUN_022df844(lVar9,param_1,*(undefined8 *)PTR_DAT_045819a0),
     puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__, param_1 == 0
     )) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar10 = (long *)FUN_03f87db4(param_1);
  puVar8 = PTR_DAT_045819b8;
  puVar7 = PTR_DAT_045819b0;
  puVar6 = PTR_DAT_045819a8;
  puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar3 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  puVar2 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar9 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
          puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03f87a4c;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar5,0);
LAB_03f87a4c:
    uVar13 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    if ((uVar13 & 1) == 0) {
      if (plVar10 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar10;
      uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar13 == 0) goto LAB_03f87b70;
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
          puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03f87aa8;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar6,0);
LAB_03f87aa8:
    lVar9 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long **)(lVar9 + 0x18) != (long *)0x0) {
      lVar14 = **(long **)(lVar9 + 0x18);
      bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
      if ((bVar1 <= *(byte *)(lVar14 + 0x130)) &&
         (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
        uVar12 = FUN_0340ebc0(*(undefined8 *)puVar7,*(undefined8 *)(lVar9 + 0x10),
                              *(undefined8 *)puVar8,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0403f2cc(uVar12,0);
        FUN_03f88760(param_1,*(undefined8 *)(lVar9 + 0x10),0);
      }
    }
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
    if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
      puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_03f87b8c;
    }
  }
LAB_03f87b70:
  puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar4,0);
LAB_03f87b8c:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
  return;
}


