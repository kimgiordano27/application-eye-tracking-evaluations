/*
FUNCTION_NAME: UnityEngine.UIElements.StyleCursor$$ToString
ENTRY_POINT: 041378fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 141
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04137a3c) */
/* WARNING: Removing unreachable block (ram,0x04137b04) */

void UnityEngine_UIElements_StyleCursor__ToString(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  long *plVar7;
  
  plVar7 = *(long **)(unaff_x24 + 200);
  do {
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0413794c;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0413794c:
    uVar4 = (*(code *)*puVar2)();
    if ((uVar4 & 1) == 0) break;
    lVar3 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *plVar7) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto FUN_041379ac;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
FUN_041379ac:
    iVar1 = (*(code *)*puVar2)();
  } while (unaff_w20 != iVar1);
  if (unaff_x21 != (long *)0x0) {
    lVar3 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04137a24;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_04137a24:
    (*(code *)*puVar2)();
  }
  FUN_04133b2c();
  if (((uVar4 & 1) != 0) && (lVar3 = *(long *)(unaff_x19 + 0x3d8), lVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x04137a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x18))
              (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(unaff_x19 + 0x478),
               *(undefined8 *)(lVar3 + 0x28));
    return;
  }
  return;
}


