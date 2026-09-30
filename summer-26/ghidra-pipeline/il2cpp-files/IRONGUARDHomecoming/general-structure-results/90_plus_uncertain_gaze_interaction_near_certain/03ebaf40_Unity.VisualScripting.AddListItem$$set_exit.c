/*
FUNCTION_NAME: Unity.VisualScripting.AddListItem$$set_exit
ENTRY_POINT: 03ebaf40
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 214
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_10;ray_or_cast_sink_hits_5;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03ebb3fc) */
/* WARNING: Removing unreachable block (ram,0x03ebb364) */

void Unity_VisualScripting_AddListItem__set_exit(ulong param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long unaff_x21;
  undefined8 *puVar16;
  undefined8 uVar17;
  int iVar18;
  
  puVar16 = *(undefined8 **)(unaff_x21 + 0x2b0);
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<BezierKnot>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<BaseRaycaster>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<Collider>__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__);
    thunk_FUN_01efb3a4(StringLiteral_12070);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputStateHistory__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_LowLevel_InputStateHistory__ctor__);
    thunk_FUN_01efb3a4(Method_System_Collections_Specialized_CaseSensitiveStringDictionary_Add__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
                      );
    *(undefined1 *)(unaff_x19 + 0xc24) = 1;
  }
  plVar7 = (long *)thunk_FUN_01f117cc(*puVar16);
  FUN_03416d98(plVar7,0);
  puVar4 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (param_2 != (long *)0x0) {
    FUN_03418748(plVar7,*(undefined8 *)
                         Method_UnityEngine_InputSystem_LowLevel_InputStateHistory__ctor__,0);
    lVar12 = *param_2;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
          puVar16 = (undefined8 *)(lVar12 + (long)(*piVar15 + 9) * 0x10 + 0x138);
          goto LAB_03ebb084;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar16 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar4,9);
LAB_03ebb084:
    plVar8 = (long *)(*(code *)*puVar16)(param_2,puVar16[1]);
    puVar6 = StringLiteral_12070;
    puVar5 = Method_System_Linq_Enumerable_ToList<BezierKnot>__;
    puVar3 = 
    Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
    ;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar18 = 0;
    do {
      lVar13 = *plVar8;
      lVar12 = *(long *)puVar2;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar12) {
            puVar16 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_03ebb108;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar16 = (undefined8 *)FUN_01ecb238(plVar8,lVar12,0);
LAB_03ebb108:
      uVar14 = (*(code *)*puVar16)(plVar8,puVar16[1]);
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      if ((uVar14 & 1) == 0) {
        plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                           );
        if (plVar8 == (long *)0x0) goto LAB_03ebb358;
        lVar12 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 == 0) goto LAB_03ebb330;
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_03ebb318;
      }
      lVar13 = *plVar8;
      lVar12 = *(long *)puVar2;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar12) {
            puVar16 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_03ebb168;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar16 = (undefined8 *)FUN_01ecb238(plVar8,lVar12,1);
LAB_03ebb168:
      plVar9 = (long *)(*(code *)*puVar16)(plVar8,puVar16[1]);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      plVar10 = (long *)thunk_FUN_01f11920();
      plVar9 = (long *)*plVar10;
      plVar10 = (long *)plVar10[1];
      if (0 < iVar18) {
        FUN_03418748(plVar7,*(undefined8 *)puVar3,0);
      }
      lVar12 = thunk_FUN_01f116d0(plVar10,*(undefined8 *)puVar4);
      if (lVar12 == 0) {
        lVar12 = thunk_FUN_01f116d0(plVar10,*(undefined8 *)
                                             Method_UnityEngine_Component_GetComponents<Collider>__)
        ;
        if (lVar12 == 0) {
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar11 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar17 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
          FUN_03419fc0(plVar7,*(undefined8 *)puVar6,uVar11,uVar17,0);
        }
        else {
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar11 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
          if (plVar10 == (long *)0x0) {
            lVar12 = 0;
          }
          else {
            uVar17 = *(undefined8 *)Method_UnityEngine_Component_GetComponents<Collider>__;
            lVar12 = thunk_FUN_01f116d0(plVar10,uVar17);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(plVar10,uVar17);
            }
          }
          uVar17 = FUN_03ebac5c(lVar12);
          FUN_03419fc0(plVar7,*(undefined8 *)puVar6,uVar11,uVar17,0);
        }
      }
      else {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar11 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        if (plVar10 == (long *)0x0) {
          lVar12 = 0;
        }
        else {
          uVar17 = *(undefined8 *)puVar4;
          lVar12 = thunk_FUN_01f116d0(plVar10,uVar17);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar10,uVar17);
          }
        }
        uVar17 = FUN_03ebaf1c(lVar12);
        FUN_03419fc0(plVar7,*(undefined8 *)puVar6,uVar11,uVar17,0);
      }
      iVar18 = iVar18 + 1;
    } while( true );
  }
  FUN_034192a0(plVar7,0,*(undefined8 *)
                         Method_System_Collections_Specialized_CaseSensitiveStringDictionary_Add__,0
              );
  goto LAB_03ebb380;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_03ebb318:
    if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
      puVar16 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_03ebb34c;
    }
  }
LAB_03ebb330:
  puVar16 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_03ebb34c:
  (*(code *)*puVar16)(plVar8,puVar16[1]);
LAB_03ebb358:
  FUN_03418748(plVar7,*(undefined8 *)
                       Method_UnityEngine_InputSystem_LowLevel_InputStateHistory__ctor__,0);
LAB_03ebb380:
                    /* WARNING: Could not recover jumptable at 0x03ebb3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
  return;
}


