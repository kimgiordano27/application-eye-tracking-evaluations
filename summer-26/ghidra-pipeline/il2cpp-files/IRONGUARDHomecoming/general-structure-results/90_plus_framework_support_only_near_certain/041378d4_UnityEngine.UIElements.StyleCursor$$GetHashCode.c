/*
FUNCTION_NAME: UnityEngine.UIElements.StyleCursor$$GetHashCode
ENTRY_POINT: 041378d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 165
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04137a3c) */
/* WARNING: Removing unreachable block (ram,0x04137b04) */

void UnityEngine_UIElements_StyleCursor__GetHashCode(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  int unaff_w20;
  
  plVar4 = (long *)(**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  puVar2 = Method_System_DateTime_AddTicks__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0413794c;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_0413794c:
    uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar7 & 1) == 0) break;
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto FUN_041379ac;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
FUN_041379ac:
    iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  } while (unaff_w20 != iVar3);
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04137a24;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_04137a24:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  FUN_04133b2c();
  if (((uVar7 & 1) != 0) && (lVar6 = *(long *)(unaff_x19 + 0x3d8), lVar6 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x04137a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar6 + 0x18))
              (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(unaff_x19 + 0x478),
               *(undefined8 *)(lVar6 + 0x28));
    return;
  }
  return;
}


