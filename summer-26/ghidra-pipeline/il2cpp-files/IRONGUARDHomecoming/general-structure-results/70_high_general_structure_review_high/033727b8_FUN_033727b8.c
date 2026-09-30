/*
FUNCTION_NAME: FUN_033727b8
ENTRY_POINT: 033727b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


void FUN_033727b8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double local_50;
  undefined4 local_48;
  undefined4 local_44;
  long local_40;
  undefined8 local_38;
  
  puVar3 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__;
  if ((DAT_048320f1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_TimeToTicks__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_FormatterLocator_LogAOTError__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_FormatterLocator_add_FormatterResolve__);
    DAT_048320f1 = 1;
  }
  lVar5 = *(long *)puVar3;
  dVar9 = *(double *)(param_1 + 0x20);
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar3;
  }
  dVar8 = (double)FUN_03581610(*(long *)(lVar5 + 0xb8) + 8,0);
  puVar1 = Method_Sirenix_Serialization_FormatterLocator_add_FormatterResolve__;
  if (dVar8 <= dVar9) {
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar3;
    }
    dVar9 = (double)FUN_03581610(*(long *)(lVar5 + 0xb8) + 8,0);
    *(double *)(param_1 + 0x20) = dVar9 + -1.0;
    FUN_0337239c(param_1,*(undefined8 *)puVar1);
  }
  puVar2 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
  puVar1 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar3 = Method_System_Globalization_Calendar_TimeToTicks__;
  local_38 = FUN_03581b30(uVar10,0);
  plVar6 = (long *)FUN_01f08890(*(undefined8 *)puVar2,4);
  dVar9 = (double)FUN_035815c4(&local_38,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  local_40 = (long)dVar9;
  lVar5 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,&local_40);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((lVar5 != 0) &&
     (lVar7 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
LAB_03372ac8:
    uVar10 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar10,0);
  }
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if ((int)plVar6[3] != 0) {
    plVar6[4] = lVar5;
    thunk_FUN_01f51358(plVar6 + 4,lVar5);
    local_44 = FUN_03581518(&local_38,0);
    lVar5 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_44);
    if ((lVar5 != 0) &&
       (lVar7 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
    goto LAB_03372ac8;
    if (1 < *(uint *)(plVar6 + 3)) {
      plVar6[5] = lVar5;
      thunk_FUN_01f51358(plVar6 + 5,lVar5);
      local_48 = FUN_03581560(&local_38,0);
      lVar5 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_48);
      if ((lVar5 != 0) &&
         (lVar7 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
      goto LAB_03372ac8;
      if (2 < *(uint *)(plVar6 + 3)) {
        plVar6[6] = lVar5;
        thunk_FUN_01f51358(plVar6 + 6,lVar5);
        iVar4 = FUN_035814cc(&local_38,0);
        local_50 = (double)(float)(int)((float)iVar4 / 100.0);
        lVar5 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,&local_50);
        if ((lVar5 != 0) &&
           (lVar7 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
        goto LAB_03372ac8;
        puVar3 = Method_Sirenix_Serialization_FormatterLocator_LogAOTError__;
        if (3 < *(uint *)(plVar6 + 3)) {
          plVar6[7] = lVar5;
          thunk_FUN_01f51358(plVar6 + 7,lVar5);
          FUN_0340f378(*(undefined8 *)puVar3,plVar6,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


