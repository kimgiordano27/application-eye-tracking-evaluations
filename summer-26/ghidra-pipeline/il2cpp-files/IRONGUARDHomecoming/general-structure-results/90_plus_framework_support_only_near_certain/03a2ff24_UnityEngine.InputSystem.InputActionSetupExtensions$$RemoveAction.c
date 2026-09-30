/*
FUNCTION_NAME: UnityEngine.InputSystem.InputActionSetupExtensions$$RemoveAction
ENTRY_POINT: 03a2ff24
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 154
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a301e0) */

long UnityEngine_InputSystem_InputActionSetupExtensions__RemoveAction
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long in_x9;
  long in_x10;
  int *piVar12;
  long *unaff_x19;
  
  piVar12 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar12 + -2) == param_3) {
      puVar6 = (undefined8 *)(param_1 + (long)(*piVar12 + 1) * 0x10 + 0x138);
      goto LAB_03a2ff60;
    }
    in_x9 = in_x9 + -1;
    piVar12 = piVar12 + 4;
  } while (in_x9 != 0);
  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03a2ff60:
  uVar7 = (*(code *)*puVar6)();
  if ((uVar7 & 1) == 0) {
    plVar8 = (long *)FUN_035b0974(0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar10 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_UnityEngine_Component_GetComponents<BaseRaycaster>__) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 9) * 0x10 + 0x138);
          goto LAB_03a2ffd8;
        }
        uVar7 = uVar7 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_UnityEngine_Component_GetComponents<BaseRaycaster>__,9);
LAB_03a2ffd8:
    plVar8 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
    puVar5 = Method_System_Linq_Enumerable_ToList<BezierKnot>__;
    puVar4 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar11 = *plVar8;
      lVar10 = *(long *)puVar3;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar10) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03a30050;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar8,lVar10,0);
LAB_03a30050:
      uVar7 = (*(code *)*puVar6)(plVar8,puVar6[1]);
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      if ((uVar7 & 1) == 0) {
        plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                           );
        if (plVar8 == (long *)0x0) break;
        lVar10 = *plVar8;
        uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar7 == 0) goto LAB_03a30170;
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_03a30158;
      }
      lVar11 = *plVar8;
      lVar10 = *(long *)puVar3;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar10) {
            puVar6 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_03a300b0;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar8,lVar10,1);
LAB_03a300b0:
      plVar9 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      plVar9 = (long *)thunk_FUN_01f11920();
      if ((long *)*unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar1 = (long *)*plVar9;
      plVar9 = (long *)plVar9[1];
      lVar10 = *(long *)puVar4;
      if ((plVar1 != (long *)0x0) && (*plVar1 != lVar10)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar1,lVar10);
      }
      if ((plVar9 != (long *)0x0) && (*plVar9 != lVar10)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar9,lVar10);
      }
      (**(code **)(*(long *)*unaff_x19 + 0x188))();
    } while( true );
  }
  goto LAB_03a3019c;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar12 = piVar12 + 4;
    if (uVar7 == 0) break;
LAB_03a30158:
    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03a3018c;
    }
  }
LAB_03a30170:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_03a3018c:
  (*(code *)*puVar6)(plVar8,puVar6[1]);
LAB_03a3019c:
  return *unaff_x19;
}


