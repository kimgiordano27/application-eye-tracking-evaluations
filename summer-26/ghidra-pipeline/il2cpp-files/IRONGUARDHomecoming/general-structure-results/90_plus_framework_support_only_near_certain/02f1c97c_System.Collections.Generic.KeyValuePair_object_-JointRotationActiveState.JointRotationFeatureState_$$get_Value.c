/*
FUNCTION_NAME: System.Collections.Generic.KeyValuePair<object,-JointRotationActiveState.JointRotationFeatureState>$$get_Value
ENTRY_POINT: 02f1c97c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f1cbbc) */

void System_Collections_Generic_KeyValuePair<object,_JointRotationActiveState_JointRotationFeatureState>__get_Value
               (ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_01ecaf44();
  }
  lVar10 = *(long *)(*(long *)(param_2 + 0xc0) + 0x18);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01ecaf44(lVar10);
  }
  lVar11 = *unaff_x19;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar10) {
        puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_02f1c9e8;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238();
LAB_02f1c9e8:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar9 = (long *)(*(code *)*puVar8)();
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar10 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02f1ca58;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_02f1ca58:
    uVar12 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    if ((uVar12 & 1) == 0) break;
    lVar10 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x38);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    lVar11 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02f1cadc;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar9,lVar10,0);
LAB_02f1cadc:
    (*(code *)*puVar8)(&stack0x00000060,plVar9,puVar8[1]);
    uVar7 = in_stack_00000080;
    uVar6 = in_stack_00000078;
    uVar5 = in_stack_00000070;
    uVar4 = in_stack_00000068;
    uVar3 = in_stack_00000060;
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    in_stack_00000060 = uVar3;
    in_stack_00000068 = uVar4;
    in_stack_00000070 = uVar5;
    in_stack_00000078 = uVar6;
    in_stack_00000080 = uVar7;
    FUN_02f1c5c8();
  } while( true );
  if (plVar9 != (long *)0x0) {
    lVar10 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02f1cb90;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_02f1cb90:
    (*(code *)*puVar8)(plVar9,puVar8[1]);
  }
  return;
}


