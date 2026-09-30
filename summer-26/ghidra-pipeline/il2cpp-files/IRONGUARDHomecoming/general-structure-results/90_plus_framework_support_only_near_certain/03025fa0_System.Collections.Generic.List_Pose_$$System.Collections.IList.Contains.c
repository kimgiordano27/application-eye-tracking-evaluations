/*
FUNCTION_NAME: System.Collections.Generic.List<Pose>$$System.Collections.IList.Contains
ENTRY_POINT: 03025fa0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x030261ac) */

void System_Collections_Generic_List<Pose>__System_Collections_IList_Contains(code *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x20;
  long unaff_x21;
  uint uStack0000000000000004;
  
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar5 = (long *)(*param_1)();
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  lVar8 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(uint *)(unaff_x20 + 0x28);
  if (plVar5 == (long *)0x0) {
    uStack0000000000000004 = uVar2;
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar9 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    uStack0000000000000004 = uVar2;
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0302601c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar4,0);
LAB_0302601c:
    uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar11 & 1) == 0) {
      iVar1 = *(int *)(unaff_x20 + 0x28);
      *(uint *)(unaff_x20 + 0x28) = uVar2;
      *(uint *)(unaff_x20 + 0x2c) = (*(int *)(unaff_x20 + 0x2c) + uVar2) - iVar1;
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 == 0) goto LAB_0302615c;
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar9 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x38);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_030260a0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar9,0);
LAB_030260a0:
    uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
      puVar6 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
      *puVar6 = uVar7;
      thunk_FUN_01f51358(puVar6,uVar7);
      uStack0000000000000004 = uVar2;
    }
    else {
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ecaf44();
      }
      FUN_03026268();
    }
    uVar2 = uStack0000000000000004 + 1;
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03026178;
    }
  }
LAB_0302615c:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_03026178:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


