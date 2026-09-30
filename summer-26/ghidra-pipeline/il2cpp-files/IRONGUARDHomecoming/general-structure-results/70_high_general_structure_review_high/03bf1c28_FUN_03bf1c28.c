/*
FUNCTION_NAME: FUN_03bf1c28
ENTRY_POINT: 03bf1c28
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_12;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_03bf1c28(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  byte local_5c [4];
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  undefined4 local_34;
  
  puVar2 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if ((DAT_04839a78 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                      );
    thunk_FUN_01efb3a4(StringLiteral_13990);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_14105);
    DAT_04839a78 = 1;
  }
  plVar3 = (long *)FUN_01f08890(*(undefined8 *)puVar2,7);
  local_34 = *param_1;
  lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_34);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_03bf1f2c:
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
  puVar1 = StringLiteral_13990;
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_01f51358(plVar3 + 4,lVar4);
    local_38 = (uint)*(byte *)(param_1 + 8);
    lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_38);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_03bf1f2c;
    puVar1 = Method_Unity_Collections_NativeArray<float4>_Dispose__;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar4;
      thunk_FUN_01f51358(plVar3 + 5,lVar4);
      local_40 = *(undefined8 *)(param_1 + 1);
      lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_40);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_03bf1f2c;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        thunk_FUN_01f51358(plVar3 + 6,lVar4);
        local_48 = *(undefined8 *)(param_1 + 3);
        lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_48);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_03bf1f2c;
        puVar2 = 
        Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
        ;
        if (3 < *(uint *)(plVar3 + 3)) {
          plVar3[7] = lVar4;
          thunk_FUN_01f51358(plVar3 + 7,lVar4);
          local_4c = param_1[5];
          lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&local_4c);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_03bf1f2c;
          if (4 < *(uint *)(plVar3 + 3)) {
            plVar3[8] = lVar4;
            thunk_FUN_01f51358(plVar3 + 8,lVar4);
            local_58 = *(undefined8 *)(param_1 + 6);
            lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_58);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
            goto LAB_03bf1f2c;
            puVar1 = 
            Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
            if (5 < *(uint *)(plVar3 + 3)) {
              plVar3[9] = lVar4;
              thunk_FUN_01f51358(plVar3 + 9,lVar4);
              local_5c[0] = *(byte *)((long)param_1 + 0x23) >> 3 & 1;
              lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_5c);
              if ((lVar4 != 0) &&
                 (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
              goto LAB_03bf1f2c;
              puVar1 = StringLiteral_14105;
              if (6 < *(uint *)(plVar3 + 3)) {
                plVar3[10] = lVar4;
                thunk_FUN_01f51358(plVar3 + 10,lVar4);
                FUN_0340f378(*(undefined8 *)puVar1,plVar3,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


