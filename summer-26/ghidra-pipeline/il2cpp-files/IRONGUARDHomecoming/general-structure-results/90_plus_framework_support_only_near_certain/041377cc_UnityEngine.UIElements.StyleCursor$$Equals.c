/*
FUNCTION_NAME: UnityEngine.UIElements.StyleCursor$$Equals
ENTRY_POINT: 041377cc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 168
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04137a3c) */
/* WARNING: Removing unreachable block (ram,0x04137b04) */

void UnityEngine_UIElements_StyleCursor__Equals(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  int unaff_w20;
  long *plVar9;
  
  if (param_1 != 0) {
    plVar9 = *(long **)(unaff_x19 + 0x470);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)Method_System_DateTime_AddMonths__) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_041378dc;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)Method_System_DateTime_AddMonths__,0);
LAB_041378dc:
    plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
    puVar2 = Method_System_DateTime_AddTicks__;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar5 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0413794c;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_0413794c:
      uVar6 = (*(code *)*puVar4)(plVar9,puVar4[1]);
      if ((uVar6 & 1) == 0) break;
      lVar5 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto FUN_041379ac;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
FUN_041379ac:
      iVar3 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    } while (unaff_w20 != iVar3);
    if (plVar9 != (long *)0x0) {
      lVar5 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04137a24;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar9,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_04137a24:
      (*(code *)*puVar4)(plVar9,puVar4[1]);
    }
    FUN_04133b2c();
    if (((uVar6 & 1) != 0) && (lVar5 = *(long *)(unaff_x19 + 0x3d8), lVar5 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x04137a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x18))
                (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(unaff_x19 + 0x478),
                 *(undefined8 *)(lVar5 + 0x28));
      return;
    }
  }
  return;
}


