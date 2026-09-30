/*
FUNCTION_NAME: FUN_034c3ff0
ENTRY_POINT: 034c3ff0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_034c3ff0(long *param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  if ((DAT_04832cc5 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    DAT_04832cc5 = 1;
  }
  plVar1 = (long *)(**(code **)(*param_1 + 0x2f8))(param_1,1,*(undefined8 *)(*param_1 + 0x300));
  uVar2 = FUN_034a66c0(plVar1,0,0);
  if ((uVar2 & 1) != 0) {
    uVar8 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    uVar6 = thunk_FUN_01efb3a4(Method_System_TypeSpec_Parse__);
    uVar7 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                              );
    uVar8 = FUN_0340ebc0(uVar6,uVar8,uVar7,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar6,uVar8,0);
    uVar8 = thunk_FUN_01efb3a4(Method_System_TypeSpec_Resolve__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,uVar8);
  }
  if ((param_6 == 0) || (lVar9 = *(long *)(param_6 + 0x18), lVar9 == 0)) {
    plVar5 = (long *)FUN_01f08890(*(undefined8 *)
                                   Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                  ,1);
    if (plVar5 == (long *)0x0) goto LAB_034c415c;
    if ((param_3 != 0) &&
       (lVar9 = thunk_FUN_01f116d0(param_3,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0))
    goto LAB_034c41e4;
    plVar3 = plVar5;
    if ((int)plVar5[3] == 0) goto LAB_034c41e0;
  }
  else {
    plVar3 = (long *)FUN_01f08890(*(undefined8 *)
                                   Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                  ,(uint)lVar9 + 1);
    FUN_0358d3e4(param_6,plVar3,0,0);
    if (plVar3 == (long *)0x0) goto LAB_034c415c;
    if ((param_3 != 0) &&
       (lVar4 = thunk_FUN_01f116d0(param_3,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_034c41e4:
      uVar8 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar8,0);
    }
    if (*(uint *)(plVar3 + 3) <= (uint)lVar9) {
LAB_034c41e0:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar5 = (long *)((long)plVar3 + ((lVar9 << 0x20) >> 0x1d));
  }
  plVar5[4] = param_3;
  thunk_FUN_01f51358(plVar5 + 4,param_3);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034c4158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x358))
              (plVar1,param_2,param_4,param_5,plVar3,param_7,*(undefined8 *)(*plVar1 + 0x360));
    return;
  }
LAB_034c415c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


