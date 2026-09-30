/*
FUNCTION_NAME: FUN_020c44d4
ENTRY_POINT: 020c44d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_14;telemetry_or_network_hits_5
*/


undefined8 FUN_020c44d4(long param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  byte local_48 [4];
  byte local_44 [4];
  uint local_38;
  undefined4 local_34;
  
  if ((DAT_0482f990 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Dictionary_ValueCollection<int,_PointerEventData>_GetEnumerator__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Dictionary_ValueCollection<int,_ListLayoutEase_ListElementEase>_GetEnumerator__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Dictionary_ValueCollection<int,_PointableDebugGizmos_PointData>_GetEnumerator__
                      );
    DAT_0482f990 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar9 != 0) {
      fVar10 = *(float *)(param_1 + 0x30);
      if (*(int *)(lVar9 + 0x20) == 8) {
        fVar11 = (float)FUN_0407a3b4(0);
      }
      else {
        fVar11 = (float)FUN_0407a33c(0);
      }
      fVar10 = fVar10 + fVar11;
      *(float *)(param_1 + 0x30) = fVar10;
LAB_020c4774:
      if (*(float *)(param_1 + 0x28) <= fVar10) {
        FUN_020a2690(*(undefined4 *)(param_1 + 0x2c),0);
        local_34 = *(undefined4 *)(lVar9 + 0x20);
        uVar6 = thunk_FUN_01f113fc(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary_ValueCollection<int,_PointerEventData>_GetEnumerator__
                                   ,&local_34);
        uVar2 = FUN_0209a4e8(0);
        puVar1 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
        ;
        local_38 = CONCAT31(local_38._1_3_,uVar2) & 0xffffff01;
        uVar7 = thunk_FUN_01f113fc(*(undefined8 *)
                                    Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                                   ,&local_38);
        local_44[0] = FUN_020a25f0(0);
        local_44[0] = local_44[0] & 1;
        uVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_44);
        uVar6 = FUN_0340f334(*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary_ValueCollection<int,_ListLayoutEase_ListElementEase>_GetEnumerator__
                             ,uVar6,uVar7,uVar8,0);
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__);
        }
        FUN_0403ea2c(uVar6,0);
        return 0;
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_01f51358((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    plVar3 = (long *)FUN_01f08890(*(undefined8 *)
                                   Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                  ,4);
    if (lVar9 != 0) {
      local_34 = *(undefined4 *)(lVar9 + 0x20);
      lVar4 = thunk_FUN_01f113fc(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary_ValueCollection<int,_PointerEventData>_GetEnumerator__
                                 ,&local_34);
      if (plVar3 != (long *)0x0) {
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_020c4888:
          uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar6,0);
        }
        if ((int)plVar3[3] != 0) {
          plVar3[4] = lVar4;
          thunk_FUN_01f51358(plVar3 + 4,lVar4);
          local_38 = *(uint *)(param_1 + 0x28);
          lVar4 = thunk_FUN_01f113fc(*(undefined8 *)
                                      Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                                     ,&local_38);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_020c4888;
          if (1 < *(uint *)(plVar3 + 3)) {
            plVar3[5] = lVar4;
            thunk_FUN_01f51358(plVar3 + 5,lVar4);
            local_44[0] = FUN_0209a4e8(0);
            puVar1 = 
            Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
            local_44[0] = local_44[0] & 1;
            lVar4 = thunk_FUN_01f113fc(*(undefined8 *)
                                        Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                                       ,local_44);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
            goto LAB_020c4888;
            if (2 < *(uint *)(plVar3 + 3)) {
              plVar3[6] = lVar4;
              thunk_FUN_01f51358(plVar3 + 6,lVar4);
              local_48[0] = FUN_020a25f0(0);
              local_48[0] = local_48[0] & 1;
              lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_48);
              if ((lVar4 != 0) &&
                 (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
              goto LAB_020c4888;
              if (3 < *(uint *)(plVar3 + 3)) {
                plVar3[7] = lVar4;
                thunk_FUN_01f51358(plVar3 + 7,lVar4);
                uVar6 = FUN_0340f378(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_ValueCollection<int,_PointableDebugGizmos_PointData>_GetEnumerator__
                                     ,plVar3,0);
                if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0)
                    == 0) {
                  thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__);
                }
                FUN_0403ea2c(uVar6,0);
                *(undefined4 *)(param_1 + 0x30) = 0;
                fVar10 = 0.0;
                goto LAB_020c4774;
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


