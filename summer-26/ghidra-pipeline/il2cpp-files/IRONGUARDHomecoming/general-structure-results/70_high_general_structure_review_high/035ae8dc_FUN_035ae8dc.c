/*
FUNCTION_NAME: FUN_035ae8dc
ENTRY_POINT: 035ae8dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_12;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 FUN_035ae8dc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  plVar1 = param_1;
  if ((DAT_0483354a & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Sirenix_Serialization_Utilities_TypeExtensions_GetAllMembers<MethodInfo>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vshl_u64__);
    thunk_FUN_01efb3a4(Method_System_Threading_Timer_Init__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ToggleFlow_Enter__);
    thunk_FUN_01efb3a4(Method_System_Array_ArrayEnumerator_get_Current__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Array_SorterGenericArray_IntrospectiveSort__);
    thunk_FUN_01efb3a4(Method_System_Array_SorterObjectArray_IntrospectiveSort__);
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_TweenSettingsExtensions_SetDelay<TweenerCore<Vector3,_Path,_PathOptions>>__
                      );
    plVar1 = (long *)thunk_FUN_01efb3a4(
                                       Method_Unity_Collections_FixedString4096Bytes_CheckIndexInRange__
                                       );
    DAT_0483354a = 1;
  }
  puVar6 = (undefined8 *)Method_Unity_Collections_FixedString4096Bytes_CheckIndexInRange__;
  switch((int)param_1[9]) {
  case 1:
    plVar1 = (long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vshl_u64__;
    goto LAB_035ae9c8;
  case 2:
    plVar1 = (long *)
             Method_Sirenix_Serialization_Utilities_TypeExtensions_GetAllMembers<MethodInfo>__;
    goto LAB_035ae9c8;
  case 3:
    plVar1 = (long *)Method_System_Threading_Timer_Init__;
LAB_035ae9c8:
    lVar5 = *plVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *plVar1;
    }
    return **(undefined8 **)(lVar5 + 0xb8);
  case 4:
    lVar5 = param_1[7];
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) != 0)) {
      lVar7 = param_1[8];
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x10) == 0) {
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c();
          }
          uVar3 = FUN_01f08c64(lVar5,1,0,
                               *(undefined8 *)Method_System_Array_ArrayEnumerator_get_Current__,
                               *(undefined8 *)
                                Method_System_Array_SorterGenericArray_IntrospectiveSort__);
          return uVar3;
        }
        plVar1 = (long *)FUN_034ba52c(lVar7,0);
        if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035aea38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*plVar1 + 0x288))
                            (plVar1,param_1[7],1,0,*(undefined8 *)(*plVar1 + 0x290));
          return uVar3;
        }
        goto LAB_035aed80;
      }
LAB_035aed84:
      plVar1 = (long *)0x0;
      puVar6 = (undefined8 *)
               Method_DG_Tweening_TweenSettingsExtensions_SetDelay<TweenerCore<Vector3,_Path,_PathOptions>>__
      ;
    }
    break;
  case 5:
    if ((param_1[7] != 0) && (*(int *)(param_1[7] + 0x10) != 0)) {
      if (param_1[8] != 0) {
        plVar1 = (long *)FUN_034ba52c(param_1[8],0);
        if (plVar1 == (long *)0x0) goto LAB_035aed80;
        uVar3 = (**(code **)(*plVar1 + 0x298))(plVar1,param_1[7],*(undefined8 *)(*plVar1 + 0x2a0));
        if (*(int *)(*(long *)Method_Unity_VisualScripting_ToggleFlow_Enter__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)Method_Unity_VisualScripting_ToggleFlow_Enter__);
        }
        uVar2 = System_TermInfoDriver___ctor(uVar3,0,0);
        if ((uVar2 & 1) == 0) {
          return uVar3;
        }
        uVar3 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                  );
        uVar3 = FUN_01f08890(uVar3,2);
        lVar5 = param_1[7];
        FUN_01bc50c0();
        FUN_01bc56ec(uVar3,lVar5);
        FUN_01bc5408(uVar3,0,lVar5);
        lVar5 = param_1[8];
        FUN_01bc50c0(uVar3);
        FUN_01bc56ec(uVar3,lVar5);
        FUN_01bc5408(uVar3,1,lVar5);
        uVar4 = thunk_FUN_01efb3a4(
                                  Method_System_Collections_ArrayList_ArrayListEnumeratorSimple_MoveNext__
                                  );
        uVar3 = FUN_035ae81c(uVar4,uVar3);
        thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_ReturnObject<Expression>__);
        uVar4 = thunk_FUN_01f117cc();
        FUN_03480238(uVar4,uVar3,0);
        goto LAB_035aedc8;
      }
      goto LAB_035aed84;
    }
    break;
  case 6:
    if ((param_1[7] != 0) && (*(int *)(param_1[7] + 0x10) != 0)) {
      if (param_1[8] != 0) {
        uVar3 = FUN_034ba52c(param_1[8],0);
        return uVar3;
      }
      goto LAB_035aed84;
    }
    break;
  case 7:
    uVar2 = FUN_034b27d8(param_1[6],0,0);
    if ((uVar2 & 1) != 0) {
      lVar5 = param_1[5];
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      plVar1 = (long *)FUN_03582560(lVar5,0,0);
      puVar6 = (undefined8 *)Method_System_Array_SorterObjectArray_IntrospectiveSort__;
      if (((ulong)plVar1 & 1) != 0) break;
    }
    uVar2 = FUN_034b27c0(param_1[6],0,0);
    if ((uVar2 & 1) == 0) {
      plVar1 = (long *)param_1[5];
      if ((plVar1 == (long *)0x0) ||
         (lVar5 = (**(code **)(*plVar1 + 0x478))(plVar1,*(undefined8 *)(*plVar1 + 0x480)),
         lVar5 == 0)) goto LAB_035aed80;
      if (*(uint *)(lVar5 + 0x18) <= *(uint *)(param_1 + 4)) goto LAB_035aed94;
      uVar3 = *(undefined8 *)(lVar5 + (long)(int)*(uint *)(param_1 + 4) * 8 + 0x20);
      goto LAB_035aed60;
    }
    plVar1 = (long *)param_1[6];
    if ((plVar1 == (long *)0x0) ||
       (lVar5 = (**(code **)(*plVar1 + 0x328))(plVar1,*(undefined8 *)(*plVar1 + 0x330)), lVar5 == 0)
       ) goto LAB_035aed80;
    if (*(uint *)(param_1 + 4) < *(uint *)(lVar5 + 0x18)) {
      return *(undefined8 *)(lVar5 + (long)(int)*(uint *)(param_1 + 4) * 8 + 0x20);
    }
    goto LAB_035aed94;
  case 8:
    *(undefined4 *)(param_1 + 9) = 4;
    plVar1 = (long *)(**(code **)(*param_1 + 0x1a8))
                               (param_1,param_2,param_3,*(undefined8 *)(*param_1 + 0x1b0));
    lVar5 = *(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
    if (plVar1 == (long *)0x0) {
LAB_035aebb8:
      plVar1 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar1 + 0x130) < *(byte *)(lVar5 + 0x130)) goto LAB_035aebb8;
      if (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5) {
        plVar1 = (long *)0x0;
      }
    }
    lVar7 = param_1[2];
    *(undefined4 *)(param_1 + 9) = 8;
    if (lVar7 == 0) {
LAB_035aed80:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(int *)(lVar7 + 0x18) != 0) {
      uVar3 = *(undefined8 *)(lVar7 + 0x20);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar5);
      }
      uVar2 = FUN_03582560(uVar3,0,0);
      if ((uVar2 & 1) != 0) {
        return 0;
      }
      if (plVar1 != (long *)0x0) {
        uVar3 = (**(code **)(*plVar1 + 0x928))(plVar1,param_1[2],*(undefined8 *)(*plVar1 + 0x930));
LAB_035aed60:
        uVar3 = FUN_035adb74(param_1,uVar3);
        return uVar3;
      }
      goto LAB_035aed80;
    }
    goto LAB_035aed94;
  default:
    uVar3 = thunk_FUN_01efb3a4(Method_System_Collections_ArrayList_ArrayListEnumeratorSimple_Reset__
                              );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar4,uVar3,0);
LAB_035aedc8:
    uVar3 = thunk_FUN_01efb3a4(Method_System_Array_SorterGenericArray_IntrospectiveSort__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,uVar3);
  }
  FUN_035ae788(plVar1,*puVar6);
LAB_035aed94:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


