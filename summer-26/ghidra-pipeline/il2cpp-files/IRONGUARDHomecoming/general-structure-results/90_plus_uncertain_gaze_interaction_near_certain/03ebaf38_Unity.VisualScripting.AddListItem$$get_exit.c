/*
FUNCTION_NAME: Unity.VisualScripting.AddListItem$$get_exit
ENTRY_POINT: 03ebaf38
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

void Unity_VisualScripting_AddListItem__get_exit(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long unaff_x19;
  undefined8 uVar17;
  int iVar18;
  
  puVar4 = Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__;
  if ((*(byte *)(unaff_x19 + 0xc24) & 1) == 0) {
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
  plVar7 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar4);
  FUN_03416d98(plVar7,0);
  puVar4 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (param_1 != (long *)0x0) {
    FUN_03418748(plVar7,*(undefined8 *)
                         Method_UnityEngine_InputSystem_LowLevel_InputStateHistory__ctor__,0);
    lVar13 = *param_1;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 9) * 0x10 + 0x138);
          goto LAB_03ebb084;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(param_1,*(long *)puVar4,9);
LAB_03ebb084:
    plVar9 = (long *)(*(code *)*puVar8)(param_1,puVar8[1]);
    puVar6 = StringLiteral_12070;
    puVar5 = Method_System_Linq_Enumerable_ToList<BezierKnot>__;
    puVar3 = 
    Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
    ;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar18 = 0;
    do {
      lVar14 = *plVar9;
      lVar13 = *(long *)puVar2;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar13) {
            puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_03ebb108;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar9,lVar13,0);
LAB_03ebb108:
      uVar15 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      if ((uVar15 & 1) == 0) {
        plVar9 = (long *)thunk_FUN_01f116d0(plVar9,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                           );
        if (plVar9 == (long *)0x0) goto LAB_03ebb358;
        lVar13 = *plVar9;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 == 0) goto LAB_03ebb330;
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_03ebb318;
      }
      lVar14 = *plVar9;
      lVar13 = *(long *)puVar2;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar13) {
            puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_03ebb168;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar9,lVar13,1);
LAB_03ebb168:
      plVar10 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      plVar11 = (long *)thunk_FUN_01f11920();
      plVar10 = (long *)*plVar11;
      plVar11 = (long *)plVar11[1];
      if (0 < iVar18) {
        FUN_03418748(plVar7,*(undefined8 *)puVar3,0);
      }
      lVar13 = thunk_FUN_01f116d0(plVar11,*(undefined8 *)puVar4);
      if (lVar13 == 0) {
        lVar13 = thunk_FUN_01f116d0(plVar11,*(undefined8 *)
                                             Method_UnityEngine_Component_GetComponents<Collider>__)
        ;
        if (lVar13 == 0) {
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar12 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar17 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
          FUN_03419fc0(plVar7,*(undefined8 *)puVar6,uVar12,uVar17,0);
        }
        else {
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar12 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
          if (plVar11 == (long *)0x0) {
            lVar13 = 0;
          }
          else {
            uVar17 = *(undefined8 *)Method_UnityEngine_Component_GetComponents<Collider>__;
            lVar13 = thunk_FUN_01f116d0(plVar11,uVar17);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(plVar11,uVar17);
            }
          }
          uVar17 = FUN_03ebac5c(lVar13);
          FUN_03419fc0(plVar7,*(undefined8 *)puVar6,uVar12,uVar17,0);
        }
      }
      else {
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar12 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        if (plVar11 == (long *)0x0) {
          lVar13 = 0;
        }
        else {
          uVar17 = *(undefined8 *)puVar4;
          lVar13 = thunk_FUN_01f116d0(plVar11,uVar17);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar11,uVar17);
          }
        }
        uVar17 = FUN_03ebaf1c(lVar13);
        FUN_03419fc0(plVar7,*(undefined8 *)puVar6,uVar12,uVar17,0);
      }
      iVar18 = iVar18 + 1;
    } while( true );
  }
  FUN_034192a0(plVar7,0,*(undefined8 *)
                         Method_System_Collections_Specialized_CaseSensitiveStringDictionary_Add__,0
              );
  goto LAB_03ebb380;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_03ebb318:
    if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
      puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_03ebb34c;
    }
  }
LAB_03ebb330:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_03ebb34c:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
LAB_03ebb358:
  FUN_03418748(plVar7,*(undefined8 *)
                       Method_UnityEngine_InputSystem_LowLevel_InputStateHistory__ctor__,0);
LAB_03ebb380:
                    /* WARNING: Could not recover jumptable at 0x03ebb3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
  return;
}


