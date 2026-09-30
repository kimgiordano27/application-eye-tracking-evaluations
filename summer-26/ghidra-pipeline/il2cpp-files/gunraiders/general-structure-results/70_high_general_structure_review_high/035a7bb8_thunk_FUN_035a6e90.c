/*
FUNCTION_NAME: thunk_FUN_035a6e90
ENTRY_POINT: 035a7bb8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x035a7194) */
/* WARNING: Removing unreachable block (ram,0x035a7360) */
/* WARNING: Removing unreachable block (ram,0x035a7434) */
/* WARNING: Removing unreachable block (ram,0x035a7204) */

void thunk_FUN_035a6e90(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  if ((DAT_04537bd0 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422f958);
    FUN_01c5d288(Method_System_Threading_Tasks_Task<ReceivedMqttPacket>_get_Result__);
    FUN_01c5d288(Method_System_Threading_Tasks_Task<SerializableProjectConfiguration>_GetAwaiter__);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField<string>_get_text__);
    FUN_01c5d288(Method_UnityEngine_ProBuilder_SimpleTuple<ProBuilderMesh,_int>__ctor__);
    FUN_01c5d288(Method_System_Threading_Tasks_Task<Socket>_ConfigureAwait__);
    FUN_01c5d288(Method_System_Threading_Tasks_Task<Stream>_ConfigureAwait__);
    FUN_01c5d288(Method_System_Threading_Tasks_Task<string>_ConfigureAwait__);
    FUN_01c5d288(Method_UnityEngine_ProBuilder_SimpleTuple<ProBuilderMesh,_int>_get_item1__);
    FUN_01c5d288(Method_System_Threading_Tasks_Task<string>_GetAwaiter__);
    FUN_01c5d288(Method_System_Threading_Tasks_Task<Task>__ctor__);
    FUN_01c5d288(Method_UnityEngine_ProBuilder_SimpleTuple<ProBuilderMesh,_int>_get_item2__);
    FUN_01c5d288(Method_System_Threading_Tasks_Task<Task>_ConfigureAwait__);
    FUN_01c5d288(GameAnalyticsSDK_State_GAState_TypeInfo);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField<string>_get_textEdition__);
    FUN_01c5d288(Method_System_Threading_Tasks_Task<Task>_TrySetResult__);
    FUN_01c5d288(Method_System_Threading_Tasks_Task<Task>_get_Result__);
    FUN_01c5d288(System_Collections_Generic_ICollection<Group>_TypeInfo);
    FUN_01c5d288(Method_UnityEngine_ProBuilder_SimpleTuple<float,_Vector2>_get_item1__);
    FUN_01c5d288(System_Collections_Generic_ICollection<IEventSystemHandler>_TypeInfo);
    FUN_01c5d288(System_Collections_Generic_ICollection<IResourceLocation>_TypeInfo);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField<string>_get_textInputBase__);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField<string>_set_isDelayed__);
    DAT_04537bd0 = 1;
  }
  puVar7 = Method_UnityEngine_UIElements_TextInputBaseField<string>_get_text__;
  puVar6 = Method_System_Threading_Tasks_Task<string>_GetAwaiter__;
  puVar5 = Method_System_Threading_Tasks_Task<string>_ConfigureAwait__;
  puVar4 = Method_System_Threading_Tasks_Task<SerializableProjectConfiguration>_GetAwaiter__;
  puVar3 = Method_UnityEngine_ProBuilder_SimpleTuple<ProBuilderMesh,_int>_get_item1__;
  puVar2 = System_Collections_Generic_ICollection<Group>_TypeInfo;
  uStack_70 = 0;
  uStack_a0 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d0 = 0;
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_028b0f3c(&uStack_108,*(long *)(param_1 + 0x88),
                 *(undefined8 *)Method_System_Threading_Tasks_Task<ReceivedMqttPacket>_get_Result__)
    ;
    uStack_88 = uStack_100;
    uStack_90 = uStack_108;
    lStack_78 = lStack_f0;
    uStack_80 = uStack_f8;
    uStack_70 = uStack_e8;
    while (uVar9 = FUN_02a4f6dc(&uStack_90,*(undefined8 *)puVar5), lVar15 = lStack_78,
          (uVar9 & 1) != 0) {
      lVar10 = thunk_FUN_01c496e0(*(undefined8 *)
                                   System_Collections_Generic_ICollection<IResourceLocation>_TypeInfo
                                 );
      FUN_02ceb6c0(lVar10,*(undefined8 *)
                           System_Collections_Generic_ICollection<IEventSystemHandler>_TypeInfo);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_0286e104(&uStack_108,lVar15,*(undefined8 *)puVar4);
      uStack_b8 = uStack_100;
      uStack_c0 = uStack_108;
      lStack_a8 = lStack_f0;
      uStack_b0 = uStack_f8;
      uStack_a0 = uStack_e8;
      while (uVar9 = FUN_02a1da6c(&uStack_c0,*(undefined8 *)puVar6), lVar14 = lStack_a8,
            (uVar9 & 1) != 0) {
        if (lStack_a8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(int *)(lStack_a8 + 0x98) == param_2) {
          lVar13 = *(long *)(lStack_a8 + 0x48);
          uVar8 = (undefined1)uStack_b0;
          uVar9 = uStack_b0 & 0xff;
          if (lVar13 != 0) {
            (**(code **)(lVar13 + 0x18))
                      (*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
          }
          FUN_0359f314(lVar14);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar14 = *(long *)(lVar10 + 0x10);
          lVar13 = *(long *)puVar2;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            *(undefined1 *)(lVar14 + (int)uVar1 + 0x20) = uVar8;
          }
          else {
            System_Collections_Generic_List<XRView>__Sort
                      (lVar10,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      FUN_02a1db84(&uStack_c0,
                   *(undefined8 *)Method_System_Threading_Tasks_Task<Stream>_ConfigureAwait__);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_02cec894(&uStack_108,lVar10,
                   *(undefined8 *)
                    Method_UnityEngine_ProBuilder_SimpleTuple<float,_Vector2>_get_item1__);
      uStack_d8 = uStack_100;
      uStack_e0 = uStack_108;
      uStack_d0 = uStack_f8;
      while (uVar9 = FUN_029f2f08(&uStack_e0,*(undefined8 *)puVar3), (uVar9 & 1) != 0) {
        FUN_0286f0dc(lVar15,uStack_d0 & 0xff,*(undefined8 *)puVar7);
      }
      FUN_029f2f04(&uStack_e0,
                   *(undefined8 *)
                    Method_UnityEngine_ProBuilder_SimpleTuple<ProBuilderMesh,_int>__ctor__);
    }
    FUN_02a4f7f4(&uStack_90,
                 *(undefined8 *)Method_System_Threading_Tasks_Task<Socket>_ConfigureAwait__);
    plVar18 = *(long **)(param_1 + 0x18);
    uVar11 = FUN_0359ad74(param_1,param_2);
    uVar11 = FUN_03152fb8(*(undefined8 *)
                           Method_UnityEngine_UIElements_TextInputBaseField<string>_set_isDelayed__,
                          uVar11,*(undefined8 *)
                                  Method_UnityEngine_UIElements_TextInputBaseField<string>_get_textInputBase__
                          ,0);
    lVar10 = *(long *)PTR_DAT_0422f958;
    lVar15 = *(long *)(lVar10 + 0x38);
    if (lVar15 == 0) {
      FUN_01c723f0(lVar10);
      lVar15 = *(long *)(lVar10 + 0x38);
    }
    lVar15 = *(long *)(lVar15 + 0x10);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = FUN_01c72394();
    }
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar15 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
    if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
      lVar15 = FUN_01c72394();
    }
    if (plVar18 != (long *)0x0) {
      lVar10 = *plVar18;
      uVar17 = **(undefined8 **)(lVar15 + 0xb8);
      uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar9 != 0) {
        piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)GameAnalyticsSDK_State_GAState_TypeInfo) {
            puVar12 = (undefined8 *)(lVar10 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_035a7388;
          }
          uVar9 = uVar9 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar9 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_01c72498(plVar18,*(long *)GameAnalyticsSDK_State_GAState_TypeInfo,1);
LAB_035a7388:
      (*(code *)*puVar12)(plVar18,3,uVar11,uVar17,puVar12[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


