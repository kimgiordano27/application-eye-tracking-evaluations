/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<ContactPoint>
ENTRY_POINT: 02412a5c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02412cb4) */

void System_Array__InternalArray__IEnumerable_GetEnumerator<ContactPoint>(long param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x23;
  long unaff_x29;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_01ecaf44();
  }
  iVar2 = *(int *)(param_1 + 0xfc);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar8 = *unaff_x19;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)Method_System_Runtime_Remoting_Contexts_Context_SetProperty__) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_02412adc;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_02412adc:
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar4 = Method_UnityEngine_UIElements_ContextualMenuManipulator_OnContextualMenuEvent__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar8 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02412b50;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_02412b50:
    uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar6 == (long *)0x0)
      goto System_Array__InternalArray__IEnumerable_GetEnumerator<ControlPoint>;
      lVar8 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 == 0) goto LAB_02412c50;
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02412bac;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar4,0);
LAB_02412bac:
    uVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    plVar9 = *(long **)(unaff_x20 + 0x38);
    lVar8 = *plVar9;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44();
      plVar9 = *(long **)(unaff_x20 + 0x38);
    }
    lVar1 = *(long *)(unaff_x29 + -0x18);
    if (-1 < *(int *)(*plVar9 + 0x28)) {
      lVar1 = unaff_x29 + -0x18;
    }
    FUN_01f09244(lVar8,plVar9[1],
                 (long)&stack0x00000000 - ((ulong)(iVar2 + 0x10) + 0xf & 0x1fffffff0),lVar1,0,
                 unaff_x29 + -0x10);
    if (*(long *)(unaff_x29 + -0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03e1a7ac(*(long *)(unaff_x29 + -0x10),uVar7,0);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_02412c6c;
    }
  }
LAB_02412c50:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02412c6c:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
System_Array__InternalArray__IEnumerable_GetEnumerator<ControlPoint>:
  if (*(long *)(unaff_x23 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


