/*
FUNCTION_NAME: System.Number$$UInt64ToNumber
ENTRY_POINT: 034722d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Number__UInt64ToNumber(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x20;
  int unaff_w21;
  
  thunk_FUN_01ee6d7c();
  FUN_034898b4();
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    FUN_03477a2c();
  }
  if ((unaff_w21 == 0x80) && (*(long *)(unaff_x20 + 0x20) != 0)) {
    FUN_03477a2c();
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    FUN_03477a2c();
  }
  if (*(char *)(unaff_x20 + 0x30) != '\0') {
    FUN_0348aba4();
  }
  plVar5 = *(long **)(unaff_x20 + 0x10);
  if ((plVar5 == (long *)0x0) ||
     (iVar4 = (**(code **)(*plVar5 + 0x3c8))(plVar5,*(undefined8 *)(*plVar5 + 0x3d0)), iVar4 < 1)) {
    return;
  }
  plVar5 = *(long **)(unaff_x20 + 0x10);
  if ((plVar5 == (long *)0x0) ||
     (plVar5 = (long *)(**(code **)(*plVar5 + 0x328))(plVar5,*(undefined8 *)(*plVar5 + 0x330)),
     puVar3 = Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__,
     puVar2 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__,
     puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__,
     plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar9 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03472420;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_03472420:
    uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar11 & 1) == 0) {
      return;
    }
    lVar10 = *plVar5;
    lVar9 = *(long *)puVar3;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0347247c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar9,0);
LAB_0347247c:
    plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    lVar10 = *plVar5;
    lVar9 = *(long *)puVar3;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_034724dc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar9,1);
LAB_034724dc:
    uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar7,*(long *)puVar2,uVar8);
    }
    FUN_03477a2c();
  } while( true );
}


