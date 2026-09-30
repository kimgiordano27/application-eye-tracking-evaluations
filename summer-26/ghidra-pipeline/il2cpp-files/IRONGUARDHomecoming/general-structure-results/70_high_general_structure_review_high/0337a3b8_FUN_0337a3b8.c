/*
FUNCTION_NAME: FUN_0337a3b8
ENTRY_POINT: 0337a3b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0337a3b8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  
  puVar1 = Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__;
  if ((DAT_04832155 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__);
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_AddComponent<OneGrabFreeTransformer>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_AddComponent<Outline>__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                      );
    DAT_04832155 = 1;
  }
  puVar2 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__;
  local_38 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar3 = FUN_04039e88(0);
  lVar4 = FUN_0340ebc0(uVar3,*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x28),0);
  if (lVar4 != 0) {
    uVar5 = FUN_0340dc8c(lVar4,*(undefined8 *)puVar2,0);
    if ((uVar5 & 1) != 0) {
      lVar4 = FUN_03410500(lVar4,0,*(int *)(lVar4 + 0x10) + -1,0);
    }
    puVar1 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
    uVar5 = FUN_034d1720(lVar4,0);
    if ((uVar5 & 1) == 0) {
      FUN_034d0f5c(lVar4,0);
    }
    puVar2 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    local_38 = FUN_0354e6e4(0);
    plVar6 = (long *)FUN_01f08890(*(undefined8 *)puVar2,8);
    if (plVar6 != (long *)0x0) {
      if ((lVar4 != 0) &&
         (lVar7 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
LAB_0337a7fc:
        uVar3 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar3,0);
      }
      if ((int)plVar6[3] != 0) {
        plVar6[4] = lVar4;
        thunk_FUN_01f51358(plVar6 + 4,lVar4);
        lVar4 = *(long *)(param_1 + 0x30);
        if ((lVar4 != 0) &&
           (lVar7 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
        goto LAB_0337a7fc;
        puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
        if (1 < *(uint *)(plVar6 + 3)) {
          plVar6[5] = lVar4;
          thunk_FUN_01f51358(plVar6 + 5,lVar4);
          local_3c = FUN_0354e970(&local_38,0);
          lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_3c);
          if ((lVar4 != 0) &&
             (lVar7 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
          goto LAB_0337a7fc;
          if (2 < *(uint *)(plVar6 + 3)) {
            plVar6[6] = lVar4;
            thunk_FUN_01f51358(plVar6 + 6,lVar4);
            local_40 = FUN_0354e68c(&local_38,0);
            lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_40);
            if ((lVar4 != 0) &&
               (lVar7 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
            goto LAB_0337a7fc;
            if (3 < *(uint *)(plVar6 + 3)) {
              plVar6[7] = lVar4;
              thunk_FUN_01f51358(plVar6 + 7,lVar4);
              local_44 = FUN_0354e33c(&local_38,0);
              lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_44);
              if ((lVar4 != 0) &&
                 (lVar7 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
              goto LAB_0337a7fc;
              if (4 < *(uint *)(plVar6 + 3)) {
                plVar6[8] = lVar4;
                thunk_FUN_01f51358(plVar6 + 8,lVar4);
                local_48 = FUN_0354e488(&local_38,0);
                lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_48);
                if ((lVar4 != 0) &&
                   (lVar7 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                goto LAB_0337a7fc;
                if (5 < *(uint *)(plVar6 + 3)) {
                  plVar6[9] = lVar4;
                  thunk_FUN_01f51358(plVar6 + 9,lVar4);
                  local_4c = FUN_0354e604(&local_38,0);
                  lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_4c);
                  if ((lVar4 != 0) &&
                     (lVar7 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)
                     ) goto LAB_0337a7fc;
                  if (6 < *(uint *)(plVar6 + 3)) {
                    plVar6[10] = lVar4;
                    thunk_FUN_01f51358(plVar6 + 10,lVar4);
                    local_50 = FUN_0354e868(&local_38,0);
                    lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_50);
                    if ((lVar4 != 0) &&
                       (lVar7 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar7 == 0)) goto LAB_0337a7fc;
                    puVar2 = Method_UnityEngine_GameObject_AddComponent<Outline>__;
                    puVar1 = Method_UnityEngine_GameObject_AddComponent<OneGrabFreeTransformer>__;
                    if (7 < *(uint *)(plVar6 + 3)) {
                      plVar6[0xb] = lVar4;
                      thunk_FUN_01f51358(plVar6 + 0xb,lVar4);
                      uVar3 = FUN_0340f378(*(undefined8 *)puVar1,plVar6,0);
                      uVar8 = FUN_03405678(*(undefined8 *)puVar2,uVar3,0);
                      FUN_033a0e00(uVar8,0);
                      uVar3 = FUN_034d3d24(uVar3,2,0);
                      *(undefined8 *)(param_1 + 0x38) = uVar3;
                      thunk_FUN_01f51358((undefined8 *)(param_1 + 0x38),uVar3);
                      return;
                    }
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


