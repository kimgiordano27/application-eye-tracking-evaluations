/*
FUNCTION_NAME: FUN_024129d8
ENTRY_POINT: 024129d8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02412cb4) */

void FUN_024129d8(undefined8 ****param_1,long *param_2,long param_3)

{
  undefined8 ****ppppuVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  int *piVar12;
  undefined1 auStack_70 [8];
  undefined8 ***local_68;
  long local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar9 = *(long **)(param_3 + 0x38);
  local_68 = param_1;
  if (plVar9 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Contexts_Context_SetProperty__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ContextualMenuManipulator_OnContextualMenuEvent__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    plVar9 = *(long **)(param_3 + 0x38);
    if (plVar9 == (long *)0x0) {
      FUN_01ecafa0(param_3);
      plVar9 = *(long **)(param_3 + 0x38);
    }
  }
  lVar6 = *plVar9;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44();
  }
  iVar2 = *(int *)(lVar6 + 0xfc);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)Method_System_Runtime_Remoting_Contexts_Context_SetProperty__) {
        puVar7 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_02412adc;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_01ecb238(param_2,*(long *)
                                 Method_System_Runtime_Remoting_Contexts_Context_SetProperty__,0);
LAB_02412adc:
  plVar9 = (long *)(*(code *)*puVar7)(param_2,puVar7[1]);
  puVar5 = Method_UnityEngine_UIElements_ContextualMenuManipulator_OnContextualMenuEvent__;
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar9;
    uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02412b50;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_02412b50:
    uVar11 = (*(code *)*puVar7)(plVar9,puVar7[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar9 == (long *)0x0)
      goto System_Array__InternalArray__IEnumerable_GetEnumerator<ControlPoint>;
      lVar6 = *plVar9;
      uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar11 == 0) goto LAB_02412c50;
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar9;
    uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02412bac;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar5,0);
LAB_02412bac:
    uVar8 = (*(code *)*puVar7)(plVar9,puVar7[1]);
    plVar10 = *(long **)(param_3 + 0x38);
    lVar6 = *plVar10;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
      plVar10 = *(long **)(param_3 + 0x38);
    }
    ppppuVar1 = (undefined8 ****)local_68;
    if (-1 < *(int *)(*plVar10 + 0x28)) {
      ppppuVar1 = &local_68;
    }
    FUN_01f09244(lVar6,plVar10[1],auStack_70 + -((ulong)(iVar2 + 0x10) + 0xf & 0x1fffffff0),
                 ppppuVar1,0,&local_60);
    if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03e1a7ac(local_60,uVar8,0);
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_02412c6c;
    }
  }
LAB_02412c50:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar9,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02412c6c:
  (*(code *)*puVar7)(plVar9,puVar7[1]);
System_Array__InternalArray__IEnumerable_GetEnumerator<ControlPoint>:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


