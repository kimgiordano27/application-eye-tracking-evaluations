/*
FUNCTION_NAME: FUN_03e16058
ENTRY_POINT: 03e16058
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03e16058(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  puVar2 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
  puVar1 = Method_Oculus_Platform_Message<LeaderboardEntryList>__ctor__;
  if ((DAT_0483a795 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_04579548);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>_get_Data__);
    DAT_0483a795 = 1;
  }
  plVar3 = (long *)FUN_01f08890(*(undefined8 *)puVar2,4);
  local_38 = *(undefined4 *)(param_1 + 1);
  local_40 = *param_1;
  lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_40);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_03e16250:
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_01f51358(plVar3 + 4,lVar4);
    local_48 = *(undefined4 *)((long)param_1 + 0x14);
    local_50 = *(undefined8 *)((long)param_1 + 0xc);
    lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_50);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_03e16250;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar4;
      thunk_FUN_01f51358(plVar3 + 5,lVar4);
      local_58 = *(undefined4 *)(param_1 + 4);
      local_60 = param_1[3];
      lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_60);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_03e16250;
      puVar1 = Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>_get_Data__;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        thunk_FUN_01f51358(plVar3 + 6,lVar4);
        uStack_68 = *(undefined8 *)((long)param_1 + 0x2c);
        local_70 = *(undefined8 *)((long)param_1 + 0x24);
        lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_70);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_03e16250;
        puVar1 = PTR_DAT_04579548;
        if (3 < *(uint *)(plVar3 + 3)) {
          plVar3[7] = lVar4;
          thunk_FUN_01f51358(plVar3 + 7,lVar4);
          FUN_0340f378(*(undefined8 *)puVar1,plVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


