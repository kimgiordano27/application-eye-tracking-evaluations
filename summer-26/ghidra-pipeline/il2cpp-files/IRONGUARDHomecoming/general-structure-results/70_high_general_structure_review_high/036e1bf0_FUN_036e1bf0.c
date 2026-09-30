/*
FUNCTION_NAME: FUN_036e1bf0
ENTRY_POINT: 036e1bf0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_036e1bf0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar4 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass62_0_<DOLocalJump>b__0__;
  if ((DAT_04834431 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass62_0_<DOLocalJump>b__0__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_GraphPointer_GetElementData<OnTimerElapsed_Data>__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_SortedList_KeyList_Insert__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphPointer_GetElementData<Once_Data>__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphPointer_GetElementData<State_Data>__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphPointer_GetElementData<SubgraphUnit_Data>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vuqaddq_s16__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphPointer_GetElementData<Timer_Data>__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphPointer_GetElementData<ToggleFlow_Data>__);
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_NativeArray<DrawingData_ProcessedBuilderData_MeshBuffers>_Dispose__
                      );
    DAT_04834431 = 1;
  }
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vuqaddq_s16__;
  pvVar7 = (void *)FUN_036e0b5c(param_1);
  if (param_2 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_02b6b104(param_2,*(undefined8 *)
                                  Method_System_Collections_SortedList_KeyList_Insert__);
  }
  lVar8 = FUN_01f08890(*(undefined8 *)puVar2,iVar6 << 1);
  puVar3 = Method_Unity_VisualScripting_GraphPointer_GetElementData<State_Data>__;
  puVar2 = Method_Unity_VisualScripting_GraphPointer_GetElementData<Once_Data>__;
  if (0 < iVar6) {
    if (param_2 == 0) goto LAB_036e1ea4;
    FUN_02b6b714(&local_a8,param_2,
                 *(undefined8 *)
                  Method_Unity_VisualScripting_GraphPointer_GetElementData<OnTimerElapsed_Data>__);
    uVar12 = 1;
    uStack_78 = uStack_a0;
    local_80 = local_a8;
    uStack_68 = uStack_90;
    local_70 = local_98;
    local_60 = local_88;
    while (uVar9 = FUN_02ce98b4(&local_80,*(undefined8 *)puVar3), uVar5 = uStack_68,
          uVar10 = local_70, (uVar9 & 1) != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar10 = FUN_036e0b5c(uVar10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar12 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar8 + (long)(int)(uVar12 - 1) * 8 + 0x20) = uVar10;
      uVar10 = FUN_036e0b5c(uVar5);
      if (*(uint *)(lVar8 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar1 = (long)(int)uVar12;
      uVar12 = uVar12 + 2;
      *(undefined8 *)(lVar8 + lVar1 * 8 + 0x20) = uVar10;
    }
    FUN_02ce99d4(&local_80,*(undefined8 *)puVar2);
  }
  puVar2 = 
  Method_Unity_Collections_NativeArray<DrawingData_ProcessedBuilderData_MeshBuffers>_Dispose__;
  uVar10 = FUN_035c41f0((long)iVar6,0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar4);
  }
  FUN_036e1f20(pvVar7,lVar8,uVar10);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  free(pvVar7);
  if (lVar8 != 0) {
    if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
      uVar9 = 0;
      uVar11 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
      do {
        if (uVar11 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        pvVar7 = *(void **)(lVar8 + 0x20 + uVar9 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        free(pvVar7);
        uVar11 = (ulong)*(uint *)(lVar8 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar8 + 0x18));
    }
    return;
  }
LAB_036e1ea4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


