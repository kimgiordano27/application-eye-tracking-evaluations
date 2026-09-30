/*
FUNCTION_NAME: FUN_03d03fd0
ENTRY_POINT: 03d03fd0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_03d03fd0(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined4 local_28;
  undefined4 local_24;
  
  puVar2 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
  puVar1 = 
  Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
  ;
  if ((DAT_04839f53 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_045730c0);
    DAT_04839f53 = 1;
  }
  plVar3 = (long *)FUN_01f08890(*(undefined8 *)puVar2,5);
  local_24 = *param_1;
  lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_24);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_03d041fc:
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_01f51358(plVar3 + 4,lVar4);
    local_28 = param_1[1];
    lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_28);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_03d041fc;
    puVar1 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar4;
      thunk_FUN_01f51358(plVar3 + 5,lVar4);
      local_34[0] = *(undefined1 *)(param_1 + 2);
      lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_34);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_03d041fc;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        thunk_FUN_01f51358(plVar3 + 6,lVar4);
        local_38[0] = *(undefined1 *)((long)param_1 + 9);
        lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_38);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_03d041fc;
        if (3 < *(uint *)(plVar3 + 3)) {
          plVar3[7] = lVar4;
          thunk_FUN_01f51358(plVar3 + 7,lVar4);
          local_3c[0] = *(undefined1 *)((long)param_1 + 10);
          lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_3c);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_03d041fc;
          puVar1 = PTR_DAT_045730c0;
          if (4 < *(uint *)(plVar3 + 3)) {
            plVar3[8] = lVar4;
            thunk_FUN_01f51358(plVar3 + 8,lVar4);
            FUN_0340f378(*(undefined8 *)puVar1,plVar3,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


