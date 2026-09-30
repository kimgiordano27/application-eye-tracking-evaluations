/*
FUNCTION_NAME: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents.MessageEvent$$.ctor
ENTRY_POINT: 03f879a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 105
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f87bc8) */

void UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageEvent___ctor(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long unaff_x20;
  
  FUN_022df844();
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar9 = (long *)FUN_03f87db4();
  puVar8 = PTR_DAT_045819b8;
  puVar7 = PTR_DAT_045819b0;
  puVar6 = PTR_DAT_045819a8;
  puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar3 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  puVar2 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar12 = *plVar9;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03f87a4c;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar5,0);
LAB_03f87a4c:
    uVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    if ((uVar13 & 1) == 0) {
      if (plVar9 == (long *)0x0) {
        return;
      }
      lVar12 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 == 0) goto LAB_03f87b70;
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    lVar12 = *plVar9;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03f87aa8;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar6,0);
LAB_03f87aa8:
    lVar12 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long **)(lVar12 + 0x18) != (long *)0x0) {
      lVar14 = **(long **)(lVar12 + 0x18);
      bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
      if ((bVar1 <= *(byte *)(lVar14 + 0x130)) &&
         (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
        uVar11 = FUN_0340ebc0(*(undefined8 *)puVar7,*(undefined8 *)(lVar12 + 0x10),
                              *(undefined8 *)puVar8,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0403f2cc(uVar11,0);
        FUN_03f88760();
      }
    }
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
    if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_03f87b8c;
    }
  }
LAB_03f87b70:
  puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_03f87b8c:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  return;
}


