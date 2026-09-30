/*
FUNCTION_NAME: FUN_038c24e0
ENTRY_POINT: 038c24e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_10;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_038c24e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar3 = StringLiteral_2648;
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((DAT_0483800d & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
                      );
    thunk_FUN_01efb3a4(StringLiteral_2648);
    thunk_FUN_01efb3a4(StringLiteral_2649);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_0483800d = 1;
  }
  puVar2 = Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__;
  FUN_035ac8e8(param_1,0);
  uVar8 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar8 = FUN_03579868(uVar8,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  lVar4 = FUN_0359e780(uVar8,0);
  if (lVar4 != 0) {
    uVar9 = *(ulong *)(lVar4 + 0x18);
    uVar8 = FUN_01f08890(*(undefined8 *)
                          Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
                         ,uVar9 & 0xffffffff);
    puVar7 = (undefined8 *)(param_1 + 0x10);
    *puVar7 = uVar8;
    thunk_FUN_01f51358(puVar7,uVar8);
    puVar1 = StringLiteral_2649;
    if (0 < (int)uVar9) {
      uVar10 = 0;
      lVar4 = 0x20;
      do {
        local_78 = *(undefined8 *)puVar1;
        plVar11 = (long *)*puVar7;
        uStack_70 = 0xffffffffffffffff;
        local_68 = (undefined4)uVar10;
        uVar8 = FUN_0359ff90(&local_78,0);
        lVar5 = FUN_038c26b8(param_2,uVar8,param_3);
        if (plVar11 == (long *)0x0) goto LAB_038c26a4;
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar11 + 0x40)), lVar6 == 0)) {
          uVar8 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar8,0);
        }
        if (*(uint *)(plVar11 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(long *)((long)plVar11 + lVar4) = lVar5;
        thunk_FUN_01f51358((long *)((long)plVar11 + lVar4),lVar5);
        uVar10 = uVar10 + 1;
        lVar4 = lVar4 + 8;
      } while ((uVar9 & 0xffffffff) != uVar10);
    }
    return;
  }
LAB_038c26a4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


