/*
FUNCTION_NAME: FUN_05bf0084
ENTRY_POINT: 05bf0084
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;ray_or_cast_sink_hits_18;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


undefined4 FUN_05bf0084(long *param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  byte bVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  void *__dest;
  long *plVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  long *plVar26;
  uint uVar27;
  long lVar28;
  long *plVar29;
  long *plVar30;
  long lVar31;
  long *plVar32;
  uint uVar33;
  long lVar34;
  ulong uVar35;
  uint *puVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  int local_220;
  undefined1 auStack_210 [80];
  undefined1 auStack_1c0 [80];
  undefined8 local_170;
  undefined8 uStack_168;
  ulong local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  uint local_9c;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  uint local_78;
  undefined1 local_74 [4];
  
  if ((DAT_06b8209a & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675e660);
    FUN_02d6084c(Method_UnityEngine_Pool_CollectionPool<List<Column>,_Column>_Get__);
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_InputControl<Vector2>_ReadValueFromStateWithCaching__
                );
    FUN_02d6084c(PTR_DAT_0678dea8);
    FUN_02d6084c(Method_UnityEngine_InputSystem_InputControl<Quaternion>__ctor__);
    FUN_02d6084c(PTR_DAT_06768b20);
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<Substring>_AppendWithCapacity__
                );
    FUN_02d6084c(Method_UnityEngine_InputSystem_InputControl<Vector2>_get_value__);
    FUN_02d6084c(Method_UnityEngine_InputSystem_InputControl<Vector3>__ctor__);
    FUN_02d6084c(Method_UnityEngine_InputSystem_InputControl<Vector3>_FinishSetup__);
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadUnprocessedValueFromStateWithCaching__
                );
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadValueFromStateWithCaching__
                );
    FUN_02d6084c(PTR_DAT_067616a0);
    FUN_02d6084c(PTR_DAT_0675e2d0);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    FUN_02d6084c(Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
    FUN_02d6084c(Method_UnityEngine_InputSystem_InputControl<float>_ReadValue__);
    FUN_02d6084c(Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__);
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__
                );
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                );
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_RemoveAtByMovingTailWithCapacity__
                );
    FUN_02d6084c(Method_UnityEngine_XR_InputFeatureUsage<Eyes>__ctor__);
    FUN_02d6084c(Method_UnityEngine_XR_InputFeatureUsage<Hand>__ctor__);
    FUN_02d6084c(
                Method_UnityEngine_Rendering_DynamicArray_Iterator<RenderGraphObjectPool_SharedObjectPoolBase>_MoveNext__
                );
    FUN_02d6084c(Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__);
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_Append__
                );
    FUN_02d6084c(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<OnScreenControl_OnScreenDeviceInfo>_get_Item__
                );
    FUN_02d6084c(Method_UnityEngine_InputSystem_InputBindingComposite<Vector2>__ctor__);
    FUN_02d6084c(Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__);
    FUN_02d6084c(Method_UnityEngine_XR_InputFeatureUsage<InputTrackingState>_get_name__);
    FUN_02d6084c(Method_UnityEngine_XR_InputFeatureUsage<Quaternion>__ctor__);
    FUN_02d6084c(Method_UnityEngine_XR_InputFeatureUsage<Quaternion>_get_name__);
    FUN_02d6084c(Method_UnityEngine_XR_InputFeatureUsage<float>__ctor__);
    DAT_06b8209a = 1;
  }
  puVar7 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  puVar5 = Method_UnityEngine_InputSystem_InputBindingComposite<Vector2>__ctor__;
  local_74[0] = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  local_9c = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined1 *)((long)param_1 + 0x292) = 0;
  *(undefined2 *)(param_1 + 0x8d) = 0;
  *(int *)((long)param_1 + 0x284) = (int)param_1[0x50];
  FUN_05c4cf64(param_1 + 0x51,0);
  if ((*(byte *)((long)param_1 + 0x284) & 1) == 0) {
    uVar14 = (undefined4)param_1[0x47];
  }
  else {
    uVar14 = 700;
  }
  *(undefined4 *)((long)param_1 + 0x23c) = uVar14;
  puVar6 = 
  Method_UnityEngine_InputSystem_Utilities_InlinedArray<OnScreenControl_OnScreenDeviceInfo>_get_Item__
  ;
  FUN_04271348(param_1 + 0x48,uVar14,*(undefined8 *)puVar5);
  plVar26 = param_1 + 0x20;
  param_1[0x20] = param_1[0x1f];
  thunk_FUN_02dd37b4(plVar26);
  plVar29 = param_1 + 0x23;
  param_1[0x23] = param_1[0x22];
  thunk_FUN_02dd37b4(plVar29);
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar14 = 0;
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar7,0);
    uVar14 = (undefined4)param_1[0x24];
  }
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  FUN_05be391c((int)param_1[0xc6],&local_e0,uVar14,param_1[0x20],0,param_1[0x23]);
  uStack_168 = uStack_d8;
  local_170 = local_e0;
  uStack_158 = uStack_c8;
  local_160 = local_d0;
  uStack_148 = uStack_b8;
  local_150 = local_c0;
  local_140 = local_b0;
  uVar18 = local_d0;
  FUN_0427197c(*(long *)(*(long *)puVar7 + 0xb8) + 0x10,&local_170,*(undefined8 *)puVar6);
  plVar22 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
  lVar15 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
  if (lVar15 == 0) goto LAB_05bf25fc;
  FUN_047c195c(lVar15,*(undefined8 *)
                       Method_UnityEngine_Pool_CollectionPool<List<Column>,_Column>_Get__);
                    /* try { // try from 05bf0388 to 05cf0403 has its CatchHandler @ 05bf0388
                       catch() { ... } // from try @ 05bf0388 with catch @ 05bf0388
                       catch() { ... } // from try @ 05bf0430 with catch @ 05bf0388
                       catch() { ... } // from try @ 05bf0458 with catch @ 05bf0388
                       catch() { ... } // from try @ 05bf047c with catch @ 05bf0388
                       catch() { ... } // from try @ 05bf04ac with catch @ 05bf0388 */
  FUN_05be3ad4(param_1[0x23],param_1[0x20],*(long *)(*(long *)puVar7 + 0xb8),
               *(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 8));
  plVar1 = param_1 + 0x74;
  if (param_1[0x74] == 0) {
    lVar15 = param_1[0x92];
    lVar28 = thunk_FUN_02d9d534(*plVar22);
                    /* try { // try from 05bf0404 to 05cf042f has its CatchHandler @ 05bf0460 */
    FUN_05c4b424(lVar28,(int)lVar15,0);
    param_1[0x74] = lVar28;
    thunk_FUN_02dd37b4(plVar1,lVar28);
  }
  else {
    plVar30 = (long *)(param_1[0x74] + 0x38);
    lVar15 = *plVar30;
    if (lVar15 == 0) goto LAB_05bf25fc;
    lVar28 = param_1[0x92];
    if (*(int *)(lVar15 + 0x18) < (int)lVar28) {
      if (*(int *)(*plVar22 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_03563108(plVar30,(int)lVar28,0,
                   *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Eyes>__ctor__);
    }
  }
  *(undefined4 *)((long)param_1 + 0x65c) = 0;
  plVar30 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                    /* try { // try from 05bf0430 to 05cf044f has its CatchHandler @ 05bf0388 */
  if ((int)param_1[0x62] == 1) {
    FUN_05c2c0b8(param_1,param_1[0x20],0);
    if (param_1[0xcd] == 0) {
      *(undefined4 *)(param_1 + 0x62) = 3;
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar16 = FUN_05c41f0c(0);
      if ((uVar16 & 1) == 0) {
        if (*plVar26 == 0) goto LAB_05bf25fc;
        uVar17 = thunk_FUN_0606f5c0(*plVar26,0);
        uVar17 = FUN_04e8db00(*(undefined8 *)
                               Method_UnityEngine_XR_InputFeatureUsage<Quaternion>_get_name__,uVar17
                              ,*(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<float>__ctor__
                              ,0);
        if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e660);
        }
        FUN_0602283c(uVar17,param_1,0);
      }
    }
    else {
                    /* try { // try from 05bf0450 to 05cf0453 has its CatchHandler @ 05bf045c */
                    /* try { // try from 05bf0454 to 05cf0457 has its CatchHandler @ 05bf0458 */
      if (param_1[0xce] == 0) goto LAB_05bf25fc;
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05bf0454 with catch @ 05bf0458
                       try { // try from 05bf0458 to 05cf0477 has its CatchHandler @ 05bf0388 */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05bf0450 with catch @ 05bf045c
                        */
      iVar9 = FUN_0606f30c(param_1[0xce],0);
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05bf0404 with catch @ 05bf0460
                        */
      if (*plVar26 == 0) goto LAB_05bf25fc;
      iVar10 = FUN_0606f30c(*plVar26,0);
                    /* try { // try from 05bf0478 to 05cf047b has its CatchHandler @ 05bf049c */
                    /* try { // try from 05bf047c to 05cf049f has its CatchHandler @ 05bf0388 */
      if (iVar9 != iVar10) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
                    /* catch() { ... } // from try @ 05bf0478 with catch @ 05bf049c */
        uVar16 = FUN_05c4242c(0);
                    /* try { // try from 05bf04a0 to 05cf04ab has its CatchHandler @ 05bf04c0 */
        if ((uVar16 & 1) == 0) {
LAB_05bf04dc:
          if (param_1[0xce] == 0) goto LAB_05bf25fc;
          param_1[0xcf] = *(long *)(param_1[0xce] + 0x88);
        }
        else {
                    /* try { // try from 05bf04ac to 05cf04b7 has its CatchHandler @ 05bf0388 */
          if (*plVar29 == 0) goto LAB_05bf25fc;
          iVar9 = FUN_0606f30c(*plVar29,0);
                    /* try { // try from 05bf04b8 to 05cf04bf has its CatchHandler @ 05bf04c0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05bf04a0 with catch @ 05bf04c0
                       catch(type#2 @ 00000000) { ... } // from try @ 05bf04b8 with catch @ 05bf04c0
                        */
          if ((param_1[0xce] == 0) || (lVar15 = *(long *)(param_1[0xce] + 0x88), lVar15 == 0))
          goto LAB_05bf25fc;
          iVar10 = FUN_0606f30c(lVar15,0);
          if (iVar9 == iVar10) goto LAB_05bf04dc;
          if (param_1[0xce] == 0) goto LAB_05bf25fc;
          lVar15 = param_1[0x23];
          uVar17 = *(undefined8 *)(param_1[0xce] + 0x88);
          if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__ + 0xe4) ==
              0) {
            thunk_FUN_02dbd7b4();
          }
          lVar15 = FUN_05c3d38c(lVar15,uVar17,0);
          param_1[0xcf] = lVar15;
          plVar30 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        }
        thunk_FUN_02dd37b4(param_1 + 0xcf);
        lVar15 = *plVar30;
        lVar28 = param_1[0xcf];
        lVar31 = param_1[0xce];
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar15 = *plVar30;
        }
        uVar11 = FUN_05be3ad4(lVar28,lVar31,*(long *)(lVar15 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
        *(uint *)(param_1 + 0xd0) = uVar11;
        lVar15 = **(long **)(*plVar30 + 0xb8);
        if (lVar15 == 0) goto LAB_05bf25fc;
        if (*(uint *)(lVar15 + 0x18) <= uVar11) {
LAB_05bf26a8:
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        *(undefined4 *)(lVar15 + (long)(int)uVar11 * 0x38 + 0x54) = 0;
      }
    }
  }
  if (param_1[0x66] == 0) {
LAB_05bf25fc:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar11 = FUN_03b22888(param_1[0x66],0x6c696761,
                        *(undefined8 *)
                         Method_UnityEngine_InputSystem_Utilities_InlinedArray<Substring>_AppendWithCapacity__
                       );
  if ((int)param_1[0x62] == 6) {
                    /* try { // try from 05bf0670 to 05cf071b has its CatchHandler @ 05bf0670
                       catch() { ... } // from try @ 05bf0670 with catch @ 05bf0670
                       catch() { ... } // from try @ 05bf07b4 with catch @ 05bf0670
                       catch() { ... } // from try @ 05bf07fc with catch @ 05bf0670
                       catch() { ... } // from try @ 05bf084c with catch @ 05bf0670
                       catch() { ... } // from try @ 05bf087c with catch @ 05bf0670 */
    lVar15 = param_1[99];
    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar16 = FUN_0606a004(lVar15,0,0);
    puVar5 = PTR_DAT_0675e258;
    if (((uVar16 & 1) != 0) && (plVar30 = param_1, *(char *)((long)param_1 + 0x42d) == '\0')) {
      while( true ) {
                    /* try { // try from 05bf2610 to 05cf2613 has its CatchHandler @ 05bf2634 */
                    /* try { // try from 05bf2614 to 05cf2637 has its CatchHandler @ 05bf23d0 */
        plVar30 = (long *)plVar30[99];
        if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
                    /* catch() { ... } // from try @ 05bf2610 with catch @ 05bf2634 */
        uVar16 = FUN_0606a004(plVar30,0,0);
                    /* try { // try from 05bf2638 to 05cf2643 has its CatchHandler @ 05bf2658 */
        if ((uVar16 & 1) == 0) goto LAB_05bf06a0;
        if (plVar30 == (long *)0x0) break;
                    /* try { // try from 05bf2644 to 05cf264f has its CatchHandler @ 05bf23d0 */
                    /* try { // try from 05bf2650 to 05cf2657 has its CatchHandler @ 05bf2658 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05bf2638 with catch @ 05bf2658
                       catch(type#2 @ 00000000) { ... } // from try @ 05bf2650 with catch @ 05bf2658
                        */
        (**(code **)(*plVar30 + 0x558))
                  (plVar30,**(undefined8 **)(*(long *)(puVar5 + 0x90) + 0xb8),
                   *(undefined8 *)(*plVar30 + 0x560));
        (**(code **)(*plVar30 + 0x948))(plVar30,*(undefined8 *)(*plVar30 + 0x950));
        lVar15 = FUN_05c1a588(plVar30,0);
        if (lVar15 == 0) break;
        FUN_05c4b764(lVar15,0);
      }
      goto LAB_05bf25fc;
    }
  }
LAB_05bf06a0:
  if (param_2 == 0) goto LAB_05bf25fc;
  uVar12 = *(uint *)(param_2 + 0x18);
  plVar30 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  if ((int)uVar12 < 1) {
    local_220 = 0;
LAB_05bf1ca4:
    if (*(char *)((long)param_1 + 0x42d) != '\0') {
      *(undefined1 *)((long)param_1 + 0x42d) = 0;
LAB_05bf1cb0:
      return (int)param_1[0x94];
    }
    lVar15 = *plVar1;
    if (lVar15 != 0) {
      *(int *)(lVar15 + 0x1c) = local_220;
      lVar28 = *plVar30;
      if (*(int *)(lVar28 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar28 = *plVar30;
      }
      lVar28 = *(long *)(*(long *)(lVar28 + 0xb8) + 8);
      if (lVar28 != 0) {
        uVar11 = FUN_047c1490(lVar28,*(undefined8 *)
                                      Method_UnityEngine_InputSystem_InputControl<Quaternion>__ctor__
                             );
        *(uint *)(lVar15 + 0x34) = uVar11;
        if (*plVar1 != 0) {
          plVar26 = (long *)(*plVar1 + 0x60);
          lVar15 = *plVar26;
          if (lVar15 != 0) {
            uVar16 = (ulong)uVar11;
            if (*(int *)(lVar15 + 0x18) < (int)uVar11) {
              if (*(int *)(*plVar22 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_035631b4(plVar26,uVar16,0,
                           *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Hand>__ctor__);
            }
            if (param_1[0xe4] != 0) {
              plVar26 = param_1 + 0xe4;
              if (*(int *)(param_1[0xe4] + 0x18) < (int)uVar11) {
                uVar12 = uVar11 | (int)uVar11 >> 0x10;
                uVar12 = uVar12 | (int)uVar12 >> 8;
                uVar12 = uVar12 | (int)uVar12 >> 4;
                uVar12 = uVar12 | (int)uVar12 >> 2;
                if (*(int *)(*plVar22 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                FUN_03562eb8(plVar26,(uVar12 | (int)uVar12 >> 1) + 1,
                             *(undefined8 *)
                              Method_UnityEngine_Rendering_DynamicArray_Iterator<RenderGraphObjectPool_SharedObjectPoolBase>_MoveNext__
                            );
              }
              if (*(char *)((long)param_1 + 0x359) != '\0') {
                if (*plVar1 == 0) goto LAB_05bf25fc;
                plVar29 = (long *)(*plVar1 + 0x38);
                lVar15 = *plVar29;
                if (lVar15 == 0) goto LAB_05bf25fc;
                iVar9 = (int)param_1[0x94];
                if (0x100 < *(int *)(lVar15 + 0x18) - iVar9) {
                  iVar10 = 0x100;
                  if (0x100 < iVar9 + 1) {
                    iVar10 = iVar9 + 1;
                  }
                  if (*(int *)(*plVar22 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  FUN_03563108(plVar29,iVar10,1,
                               *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Eyes>__ctor__)
                  ;
                  plVar30 = (long *)
                            Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                }
              }
              puVar5 = 
              Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__
              ;
              fVar4 = DAT_01208240;
              if (0 < (int)uVar11) {
                lVar15 = 0;
                uVar35 = 0;
                lVar28 = 0x54;
                lVar31 = 0x20;
                do {
                  fVar40 = (float)uVar18;
                  if (uVar35 != 0) {
                    lVar23 = *plVar26;
                    if (lVar23 == 0) goto LAB_05bf25fc;
                    if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_05bf26a8;
                    uVar17 = *(undefined8 *)(lVar23 + uVar35 * 8 + 0x20);
                    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    uVar18 = UnityEngine_Font__add_textureRebuilt(uVar17,0,0);
                    if ((uVar18 & 1) != 0) {
                      lVar23 = *plVar30;
                      plVar29 = (long *)*plVar26;
                      if (*(int *)(lVar23 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                        lVar23 = *plVar30;
                      }
                      lVar23 = **(long **)(lVar23 + 0xb8);
                      if (lVar23 == 0) goto LAB_05bf25fc;
                      if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_05bf26a8;
                      lVar23 = lVar23 + lVar28;
                      local_f0 = *(undefined8 *)(lVar23 + -4);
                      uStack_f8 = *(undefined8 *)(lVar23 + -0xc);
                      uStack_100 = *(undefined8 *)(lVar23 + -0x14);
                      uStack_108 = *(undefined8 *)(lVar23 + -0x1c);
                      uVar17 = *(undefined8 *)(lVar23 + -0x24);
                      uStack_118 = *(undefined8 *)(lVar23 + -0x2c);
                      local_120 = *(undefined8 *)(lVar23 + -0x34);
                      local_110 = uVar17;
                      lVar23 = FUN_05c4a108(param_1,&local_120,0);
                      fVar40 = (float)uVar17;
                      if (plVar29 == (long *)0x0) goto LAB_05bf25fc;
                      if ((lVar23 != 0) &&
                         (lVar19 = thunk_FUN_02d9d438(lVar23,*(undefined8 *)(*plVar29 + 0x40)),
                         lVar19 == 0)) {
LAB_05bf26ac:
                        uVar17 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
                        FUN_02d609b4(uVar17,0);
                      }
                      if (*(uint *)(plVar29 + 3) <= uVar35) goto LAB_05bf26a8;
                      plVar29[uVar35 + 4] = lVar23;
                      thunk_FUN_02dd37b4((long)plVar29 + lVar31,lVar23);
                      plVar30 = (long *)
                                Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                      if ((*plVar1 == 0) || (lVar23 = *(long *)(*plVar1 + 0x60), lVar23 == 0))
                      goto LAB_05bf25fc;
                      if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_05bf26a8;
                      puVar20 = (undefined8 *)(lVar23 + lVar15 + 0x30);
                      *puVar20 = 0;
                      thunk_FUN_02dd37b4(puVar20,0);
                    }
                    if (param_1[0x77] == 0) goto LAB_05bf25fc;
                    fVar37 = (float)FUN_060780d0(param_1[0x77],0);
                    lVar23 = *plVar26;
                    if (lVar23 == 0) goto LAB_05bf25fc;
                    if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_05bf26a8;
                    lVar23 = *(long *)(lVar23 + uVar35 * 8 + 0x20);
                    if ((lVar23 == 0) ||
                       (fVar39 = fVar40, lVar23 = FUN_06177bfc(lVar23,0), lVar23 == 0))
                    goto LAB_05bf25fc;
                    fVar38 = (float)FUN_060780d0(lVar23,0);
                    fVar40 = (fVar40 - fVar39) * (fVar40 - fVar39);
                    uVar18 = (ulong)(uint)fVar40;
                    if (fVar4 <= (fVar37 - fVar38) * (fVar37 - fVar38) + fVar40) {
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_05bf25fc;
                      if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_05bf26a8;
                      lVar23 = *(long *)(lVar23 + uVar35 * 8 + 0x20);
                      if (lVar23 == 0) goto LAB_05bf25fc;
                      lVar23 = FUN_06177bfc(lVar23,0);
                      if ((param_1[0x77] == 0) || (FUN_060780d0(param_1[0x77],0), lVar23 == 0))
                      goto LAB_05bf25fc;
                      FUN_0607819c(lVar23,0);
                    }
                    lVar23 = *plVar26;
                    if (lVar23 == 0) goto LAB_05bf25fc;
                    if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_05bf26a8;
                    lVar23 = *(long *)(lVar23 + uVar35 * 8 + 0x20);
                    if (lVar23 == 0) goto LAB_05bf25fc;
                    uVar17 = *(undefined8 *)(lVar23 + 0xf0);
                    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    uVar21 = UnityEngine_Font__add_textureRebuilt(uVar17,0,0);
                    if ((uVar21 & 1) == 0) {
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_05bf25fc;
                      if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_05bf26a8;
                      lVar23 = *(long *)(lVar23 + uVar35 * 8 + 0x20);
                      if ((lVar23 == 0) || (lVar23 = *(long *)(lVar23 + 0xf0), lVar23 == 0))
                      goto LAB_05bf25fc;
                      iVar9 = FUN_0606f30c(lVar23,0);
                      lVar23 = *plVar30;
                      if (*(int *)(lVar23 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4(lVar23);
                        lVar23 = *plVar30;
                      }
                      lVar23 = **(long **)(lVar23 + 0xb8);
                      if (lVar23 == 0) goto LAB_05bf25fc;
                      if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_05bf26a8;
                      lVar23 = *(long *)(lVar23 + lVar28 + -0x1c);
                      if (lVar23 == 0) goto LAB_05bf25fc;
                      iVar10 = FUN_0606f30c(lVar23,0);
                      if (iVar9 != iVar10) goto LAB_05bf2110;
                    }
                    else {
LAB_05bf2110:
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_05bf25fc;
                      if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_05bf26a8;
                      lVar19 = *plVar30;
                      lVar23 = *(long *)(lVar23 + uVar35 * 8 + 0x20);
                      if (*(int *)(lVar19 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                        lVar19 = *plVar30;
                      }
                      lVar19 = **(long **)(lVar19 + 0xb8);
                      if (lVar19 == 0) goto LAB_05bf25fc;
                      if (*(uint *)(lVar19 + 0x18) <= uVar35) goto LAB_05bf26a8;
                      if (lVar23 == 0) goto LAB_05bf25fc;
                      thunk_FUN_05c49d5c(lVar23,*(undefined8 *)(lVar19 + lVar28 + -0x1c),0);
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_05bf25fc;
                      if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_05bf26a8;
                      lVar19 = **(long **)(*plVar30 + 0xb8);
                      if (lVar19 == 0) goto LAB_05bf25fc;
                      if (*(uint *)(lVar19 + 0x18) <= uVar35) goto LAB_05bf26a8;
                      lVar23 = *(long *)(lVar23 + uVar35 * 8 + 0x20);
                      if (lVar23 == 0) goto LAB_05bf25fc;
                      *(undefined8 *)(lVar23 + 0xd8) = *(undefined8 *)(lVar19 + lVar28 + -0x2c);
                      thunk_FUN_02dd37b4();
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_05bf25fc;
                      if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_05bf26a8;
                      lVar19 = **(long **)(*plVar30 + 0xb8);
                      if (lVar19 == 0) goto LAB_05bf25fc;
                      if (*(uint *)(lVar19 + 0x18) <= uVar35) goto LAB_05bf26a8;
                      lVar23 = *(long *)(lVar23 + uVar35 * 8 + 0x20);
                      if (lVar23 == 0) goto LAB_05bf25fc;
                      *(undefined8 *)(lVar23 + 0xe0) = *(undefined8 *)(lVar19 + lVar28 + -0x24);
                      thunk_FUN_02dd37b4();
                    }
                    lVar23 = *plVar30;
                    if (*(int *)(lVar23 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                      lVar23 = *plVar30;
                    }
                    lVar19 = **(long **)(lVar23 + 0xb8);
                    if (lVar19 == 0) goto LAB_05bf25fc;
                    if (*(uint *)(lVar19 + 0x18) <= uVar35) goto LAB_05bf26a8;
                    if (*(char *)(lVar19 + lVar28 + -0x13) != '\0') {
                      lVar24 = *plVar26;
                      if (lVar24 == 0) goto LAB_05bf25fc;
                      if (*(uint *)(lVar24 + 0x18) <= uVar35) goto LAB_05bf26a8;
                      lVar24 = *(long *)(lVar24 + uVar35 * 8 + 0x20);
                      if (*(int *)(lVar23 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                        lVar19 = **(long **)(*plVar30 + 0xb8);
                        if (lVar19 == 0) goto LAB_05bf25fc;
                      }
                      if (*(uint *)(lVar19 + 0x18) <= uVar35) goto LAB_05bf26a8;
                      if (lVar24 == 0) goto LAB_05bf25fc;
                      FUN_05c49db8(lVar24,*(undefined8 *)(lVar19 + lVar28 + -0x1c),0);
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_05bf25fc;
                      if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_05bf26a8;
                      lVar19 = **(long **)(*plVar30 + 0xb8);
                      if (lVar19 == 0) goto LAB_05bf25fc;
                      if (*(uint *)(lVar19 + 0x18) <= uVar35) goto LAB_05bf26a8;
                      lVar23 = *(long *)(lVar23 + uVar35 * 8 + 0x20);
                      if (lVar23 == 0) goto LAB_05bf25fc;
                      *(undefined8 *)(lVar23 + 0x100) = *(undefined8 *)(lVar19 + lVar28 + -0xc);
                      thunk_FUN_02dd37b4(lVar23 + 0x100);
                    }
                  }
                  lVar23 = *plVar30;
                  if (*(int *)(lVar23 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                    lVar23 = *plVar30;
                  }
                  lVar23 = **(long **)(lVar23 + 0xb8);
                  if (lVar23 == 0) goto LAB_05bf25fc;
                  if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_05bf26a8;
                  if ((*plVar1 == 0) || (lVar19 = *(long *)(*plVar1 + 0x60), lVar19 == 0))
                  goto LAB_05bf25fc;
                  if (*(uint *)(lVar19 + 0x18) <= uVar35) goto LAB_05bf26a8;
                  lVar24 = *(long *)(lVar19 + lVar15 + 0x30);
                  uVar12 = *(uint *)(lVar23 + lVar28);
                  if (lVar24 == 0) {
                    if (uVar35 == 0) {
                      uStack_138 = 0;
                      local_140 = 0;
                      uStack_128 = 0;
                      uStack_130 = 0;
                      uStack_158 = 0;
                      local_160 = 0;
                      uStack_148 = 0;
                      local_150 = 0;
                      uStack_168 = 0;
                      local_170 = 0;
                      FUN_05c3debc(&local_170,param_1[0x7b],uVar12 + 1,0);
                      memcpy(auStack_1c0,&local_170,0x50);
                      if (*(int *)(lVar19 + 0x18) == 0) goto LAB_05bf26a8;
                      memcpy((void *)(lVar19 + lVar15 + 0x20),auStack_1c0,0x50);
                      __dest = (void *)(lVar19 + 0x20);
                    }
                    else {
                      lVar23 = *plVar26;
                      if (lVar23 == 0) goto LAB_05bf25fc;
                      if (*(uint *)(lVar23 + 0x18) <= uVar35) goto LAB_05bf26a8;
                      lVar23 = *(long *)(lVar23 + uVar35 * 8 + 0x20);
                      if (lVar23 == 0) goto LAB_05bf25fc;
                      uVar17 = FUN_05c49f98(lVar23,0);
                      uStack_138 = 0;
                      local_140 = 0;
                      uStack_128 = 0;
                      uStack_130 = 0;
                      uStack_158 = 0;
                      local_160 = 0;
                      uStack_148 = 0;
                      local_150 = 0;
                      uStack_168 = 0;
                      local_170 = 0;
                      FUN_05c3debc(&local_170,uVar17,uVar12 + 1,0);
                      memcpy(auStack_210,&local_170,0x50);
                    /* try { // try from 05bf23d0 to 05cf2563 has its CatchHandler @ 05bf23d0
                       catch() { ... } // from try @ 05bf23d0 with catch @ 05bf23d0
                       catch() { ... } // from try @ 05bf25b4 with catch @ 05bf23d0
                       catch() { ... } // from try @ 05bf2614 with catch @ 05bf23d0
                       catch() { ... } // from try @ 05bf2644 with catch @ 05bf23d0 */
                      if (*(uint *)(lVar19 + 0x18) <= uVar35) goto LAB_05bf26a8;
                      __dest = (void *)(lVar19 + lVar15 + 0x20);
                      memcpy(__dest,auStack_210,0x50);
                    }
                    thunk_FUN_02dd37b4(__dest,0);
                  }
                  else {
                    iVar9 = *(int *)(lVar24 + 0x18);
                    if (iVar9 < (int)(uVar12 * 4)) {
                      if ((int)uVar12 < 0x401) {
                        uVar25 = (int)uVar12 >> 0x10;
LAB_05bf2434:
                        uVar12 = uVar12 | uVar25 | (int)(uVar12 | uVar25) >> 8;
                        uVar12 = uVar12 | (int)uVar12 >> 4;
                        uVar12 = uVar12 | (int)uVar12 >> 2;
                        iVar9 = (uVar12 | (int)uVar12 >> 1) + 1;
                      }
                      else {
LAB_05bf2360:
                        iVar9 = uVar12 + 0x100;
                      }
                      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      FUN_05c3ecd4(lVar19 + lVar15 + 0x20,iVar9,0);
                    }
                    else if ((0 < (int)uVar12) && (*(char *)((long)param_1 + 0x359) != '\0')) {
                      iVar10 = iVar9 + 3;
                      if (-1 < iVar9) {
                        iVar10 = iVar9;
                      }
                      if (0x100 < (int)((iVar10 >> 2) - uVar12)) {
                        if ((int)uVar12 < 0x401) {
                          uVar25 = uVar12 >> 0x10;
                          goto LAB_05bf2434;
                        }
                        goto LAB_05bf2360;
                      }
                    }
                  }
                  plVar30 = (long *)
                            Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                  if ((*plVar1 == 0) || (lVar23 = *(long *)(*plVar1 + 0x60), lVar23 == 0))
                  goto LAB_05bf25fc;
                  lVar19 = *(long *)
                            Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                  if (*(int *)(lVar19 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                    lVar19 = *plVar30;
                  }
                  lVar19 = **(long **)(lVar19 + 0xb8);
                  if (lVar19 == 0) goto LAB_05bf25fc;
                  if ((*(uint *)(lVar19 + 0x18) <= uVar35) || (*(uint *)(lVar23 + 0x18) <= uVar35))
                  goto LAB_05bf26a8;
                  *(undefined8 *)(lVar23 + lVar15 + 0x68) = *(undefined8 *)(lVar19 + lVar28 + -0x1c)
                  ;
                  thunk_FUN_02dd37b4();
                  uVar35 = uVar35 + 1;
                  lVar15 = lVar15 + 0x50;
                  lVar28 = lVar28 + 0x38;
                  lVar31 = lVar31 + 8;
                } while (uVar16 != uVar35);
              }
              lVar15 = *plVar26;
              if (lVar15 != 0) {
                lVar28 = (-(ulong)(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3) + 0x20;
                do {
                  uVar11 = (uint)uVar16;
                    /* try { // try from 05bf2564 to 05cf258b has its CatchHandler @ 05bf25f8 */
                  if ((int)*(uint *)(lVar15 + 0x18) <= (int)uVar11) goto LAB_05bf1cb0;
                  if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_05bf26a8;
                  uVar17 = *(undefined8 *)(lVar15 + lVar28);
                  if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                    /* try { // try from 05bf258c to 05cf2597 has its CatchHandler @ 05bf25f4 */
                  uVar18 = FUN_0606a004(uVar17,0,0);
                  if ((uVar18 & 1) == 0) goto LAB_05bf1cb0;
                  if ((*plVar1 == 0) || (lVar15 = *(long *)(*plVar1 + 0x60), lVar15 == 0)) break;
                    /* try { // try from 05bf25ac to 05cf25b3 has its CatchHandler @ 05bf25f0 */
                    /* try { // try from 05bf25b4 to 05cf260f has its CatchHandler @ 05bf23d0 */
                  if ((int)uVar11 < *(int *)(lVar15 + 0x18)) {
                    lVar15 = *plVar26;
                    if (lVar15 == 0) break;
                    if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_05bf26a8;
                    if ((*(long *)(lVar15 + lVar28) == 0) ||
                       (lVar15 = FUN_061784e8(*(long *)(lVar15 + lVar28),0), lVar15 == 0)) break;
                    FUN_0633c088(lVar15,0,0);
                  }
                  lVar15 = *plVar26;
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05bf25ac with catch @ 05bf25f0
                        */
                  uVar16 = (ulong)(uVar11 + 1);
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05bf258c with catch @ 05bf25f4
                        */
                  lVar28 = lVar28 + 8;
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05bf2564 with catch @ 05bf25f8
                        */
                } while (lVar15 != 0);
              }
            }
          }
        }
      }
    }
    goto LAB_05bf25fc;
  }
  uVar25 = 0;
  local_220 = 0;
LAB_05bf06c4:
  if (uVar12 <= uVar25) goto LAB_05bf26a8;
  puVar36 = (uint *)(param_2 + (long)(int)uVar25 * 0x10 + 0x24);
  if (*puVar36 == 0) goto LAB_05bf1ca4;
  if (*plVar1 == 0) goto LAB_05bf25fc;
  plVar30 = (long *)(*plVar1 + 0x38);
  lVar28 = *plVar30;
  lVar15 = param_1[0x94];
  if ((lVar28 == 0) || (*(int *)(lVar28 + 0x18) <= (int)lVar15)) {
    if (*(int *)(*plVar22 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
                    /* try { // try from 05bf071c to 05cf0723 has its CatchHandler @ 05bf080c */
    FUN_03563108(plVar30,(int)lVar15 + 1,1,
                 *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Eyes>__ctor__);
    uVar12 = *(uint *)(param_2 + 0x18);
  }
  if (uVar12 <= uVar25) goto LAB_05bf26a8;
  uVar12 = *puVar36;
                    /* try { // try from 05bf073c to 05cf0743 has its CatchHandler @ 05bf0828 */
  if ((uVar12 == 0x3c) && (*(char *)((long)param_1 + 0x33a) != '\0')) {
    lVar15 = param_1[0x24];
                    /* try { // try from 05bf075c to 05cf0763 has its CatchHandler @ 05bf082c */
    uVar16 = FUN_05c217f4(param_1,param_2,uVar25 + 1,&local_78,0);
    uVar33 = local_78;
    if ((uVar16 & 1) == 0) goto LAB_05bf0928;
    if (*(uint *)(param_2 + 0x18) <= uVar25) goto LAB_05bf26a8;
                    /* try { // try from 05bf077c to 05cf0783 has its CatchHandler @ 05bf0808 */
    iVar9 = *(int *)(param_2 + (long)(int)uVar25 * 0x10 + 0x28);
    if ((*(byte *)((long)param_1 + 0x284) & 1) != 0) {
                    /* try { // try from 05bf078c to 05cf07a3 has its CatchHandler @ 05bf0824 */
      *(undefined1 *)((long)param_1 + 0x292) = 1;
    }
    puVar5 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    plVar30 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    uVar25 = local_78;
    if (*(int *)((long)param_1 + 0x65c) != 1) goto LAB_05bf1c8c;
    lVar28 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                    /* try { // try from 05bf07b0 to 05cf07b3 has its CatchHandler @ 05bf0830 */
    if (*(int *)(lVar28 + 0xe4) == 0) {
                    /* try { // try from 05bf07b4 to 05cf07db has its CatchHandler @ 05bf0670 */
      thunk_FUN_02dbd7b4();
      lVar28 = *(long *)puVar5;
    }
    lVar28 = **(long **)(lVar28 + 0xb8);
    if (lVar28 != 0) {
      if (*(uint *)(param_1 + 0x24) < *(uint *)(lVar28 + 0x18)) {
                    /* try { // try from 05bf07dc to 05cf07df has its CatchHandler @ 05bf0820 */
        lVar28 = lVar28 + (long)(int)*(uint *)(param_1 + 0x24) * 0x38;
                    /* try { // try from 05bf07e0 to 05cf07e3 has its CatchHandler @ 05bf081c */
                    /* try { // try from 05bf07e4 to 05cf07e7 has its CatchHandler @ 05bf0818 */
                    /* try { // try from 05bf07e8 to 05cf07eb has its CatchHandler @ 05bf0814 */
        *(int *)(lVar28 + 0x54) = *(int *)(lVar28 + 0x54) + 1;
                    /* try { // try from 05bf07ec to 05cf07ef has its CatchHandler @ 05bf0810 */
                    /* try { // try from 05bf07f0 to 05cf07f3 has its CatchHandler @ 05bf0804 */
                    /* try { // try from 05bf07f4 to 05cf07f7 has its CatchHandler @ 05bf0800 */
                    /* try { // try from 05bf07f8 to 05cf07fb has its CatchHandler @ 05bf07fc */
        if ((*plVar1 != 0) && (lVar28 = *(long *)(*plVar1 + 0x38), lVar28 != 0)) {
                    /* catch() { ... } // from try @ 05bf07f8 with catch @ 05bf07fc
                       try { // try from 05bf07fc to 05cf0847 has its CatchHandler @ 05bf0670 */
                    /* catch() { ... } // from try @ 05bf07f4 with catch @ 05bf0800 */
                    /* catch() { ... } // from try @ 05bf07f0 with catch @ 05bf0804 */
                    /* catch() { ... } // from try @ 05bf077c with catch @ 05bf0808 */
          if (*(uint *)(param_1 + 0x94) < *(uint *)(lVar28 + 0x18)) {
                    /* catch() { ... } // from try @ 05bf071c with catch @ 05bf080c */
                    /* catch() { ... } // from try @ 05bf07ec with catch @ 05bf0810 */
                    /* catch() { ... } // from try @ 05bf07e8 with catch @ 05bf0814 */
            lVar28 = lVar28 + (long)(int)*(uint *)(param_1 + 0x94) * 0x178;
                    /* catch() { ... } // from try @ 05bf07e4 with catch @ 05bf0818 */
                    /* catch() { ... } // from try @ 05bf07e0 with catch @ 05bf081c */
            *(short *)(lVar28 + 0x24) = *(short *)((long)param_1 + 0x6bc) + -0x2000;
                    /* catch() { ... } // from try @ 05bf07dc with catch @ 05bf0820 */
                    /* catch() { ... } // from try @ 05bf078c with catch @ 05bf0824 */
            *(long *)(lVar28 + 0x40) = param_1[0x20];
                    /* catch() { ... } // from try @ 05bf073c with catch @ 05bf0828 */
            thunk_FUN_02dd37b4();
                    /* catch() { ... } // from try @ 05bf075c with catch @ 05bf082c */
                    /* catch() { ... } // from try @ 05bf07b0 with catch @ 05bf0830 */
            if ((param_1[0x74] != 0) && (lVar28 = *(long *)(param_1[0x74] + 0x38), lVar28 != 0)) {
              uVar12 = *(uint *)(param_1 + 0x94);
                    /* try { // try from 05bf0848 to 05cf084b has its CatchHandler @ 05bf086c */
              if (uVar12 < *(uint *)(lVar28 + 0x18)) {
                    /* try { // try from 05bf084c to 05cf086f has its CatchHandler @ 05bf0670 */
                *(int *)(lVar28 + (long)(int)uVar12 * 0x178 + 0x50) = (int)param_1[0x24];
                    /* catch() { ... } // from try @ 05bf0848 with catch @ 05bf086c */
                if ((param_1[0xd6] != 0) && (lVar31 = FUN_05c45ed8(param_1[0xd6],0), lVar31 != 0)) {
                    /* try { // try from 05bf0870 to 05cf087b has its CatchHandler @ 05bf0890 */
                    /* try { // try from 05bf087c to 05cf0887 has its CatchHandler @ 05bf0670 */
                  uVar17 = FUN_03aac1c4(lVar31,*(undefined4 *)((long)param_1 + 0x6bc),
                                        *(undefined8 *)
                                         Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadUnprocessedValueFromStateWithCaching__
                                       );
                    /* try { // try from 05bf0888 to 05cf088f has its CatchHandler @ 05bf0890 */
                  if (uVar12 < *(uint *)(lVar28 + 0x18)) {
                    /* catch() { ... } // from try @ 05bf0870 with catch @ 05bf0890
                       catch() { ... } // from try @ 05bf0888 with catch @ 05bf0890 */
                    /* try { // try from 05bf0894 to 05cf0bc3 has its CatchHandler @ 05bf0894
                       catch() { ... } // from try @ 05bf0894 with catch @ 05bf0894
                       catch() { ... } // from try @ 05bf1564 with catch @ 05bf0894
                       catch() { ... } // from try @ 05bf1950 with catch @ 05bf0894
                       catch() { ... } // from try @ 05bf1a2c with catch @ 05bf0894
                       catch() { ... } // from try @ 05bf1a9c with catch @ 05bf0894
                       catch() { ... } // from try @ 05bf1c3c with catch @ 05bf0894 */
                    *(undefined8 *)(lVar28 + (long)(int)uVar12 * 0x178 + 0x30) = uVar17;
                    thunk_FUN_02dd37b4();
                    if ((*plVar1 != 0) && (lVar28 = *(long *)(*plVar1 + 0x38), lVar28 != 0)) {
                      uVar12 = *(uint *)(param_1 + 0x94);
                      if (uVar12 < *(uint *)(lVar28 + 0x18)) {
                        uVar14 = *(undefined4 *)((long)param_1 + 0x65c);
                        lVar31 = lVar28 + (long)(int)uVar12 * 0x178;
                        *(int *)(lVar31 + 0x28) = iVar9;
                        *(undefined4 *)(lVar31 + 0x20) = uVar14;
                        if (uVar33 < *(uint *)(param_2 + 0x18)) {
                          *(int *)(lVar28 + (long)(int)uVar12 * 0x178 + 0x2c) =
                               (*(int *)(param_2 + (long)(int)uVar33 * 0x10 + 0x28) - iVar9) + 1;
                          *(undefined4 *)((long)param_1 + 0x65c) = 0;
                          *(int *)(param_1 + 0x24) = (int)lVar15;
                          local_220 = local_220 + 1;
                          plVar30 = (long *)
                                    Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__
                          ;
                          uVar25 = uVar33;
                          goto LAB_05bf1c84;
                        }
                      }
                      goto LAB_05bf26a8;
                    }
                    goto LAB_05bf25fc;
                  }
                  goto LAB_05bf26a8;
                }
                goto LAB_05bf25fc;
              }
              goto LAB_05bf26a8;
            }
            goto LAB_05bf25fc;
          }
          goto LAB_05bf26a8;
        }
        goto LAB_05bf25fc;
      }
      goto LAB_05bf26a8;
    }
    goto LAB_05bf25fc;
  }
LAB_05bf0928:
  local_74[0] = 0;
  lVar31 = param_1[0x20];
  lVar28 = param_1[0x23];
  lVar15 = param_1[0x24];
  if (*(int *)((long)param_1 + 0x65c) != 0) goto LAB_05bf09fc;
  uVar33 = *(uint *)((long)param_1 + 0x284);
  if ((uVar33 >> 4 & 1) == 0) {
    if ((uVar33 >> 3 & 1) == 0) {
      if ((uVar33 >> 5 & 1) != 0) goto LAB_05bf0950;
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar16 = FUN_04f83744(uVar12,0);
      if ((uVar16 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar12 = FUN_04f83be8(uVar12,0);
        goto LAB_05bf09f8;
      }
    }
  }
  else {
LAB_05bf0950:
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar16 = FUN_04f837e4(uVar12,0);
    if ((uVar16 & 1) != 0) {
      if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar12 = FUN_04f83a70(uVar12,0);
LAB_05bf09f8:
      uVar12 = uVar12 & 0xffff;
    }
  }
LAB_05bf09fc:
  uVar33 = uVar25 + 1;
  if ((int)uVar33 < (int)*(uint *)(param_2 + 0x18)) {
    if (*(uint *)(param_2 + 0x18) <= uVar33) goto LAB_05bf26a8;
    uVar27 = *(uint *)(param_2 + (long)(int)uVar33 * 0x10 + 0x24);
  }
  else {
    uVar27 = 0;
  }
  uVar13 = uVar12;
  if (*(char *)((long)param_1 + 0x33b) == '\0') {
LAB_05bf0b78:
    lVar23 = FUN_05c2c458(param_1,uVar12,param_1[0x20],*(undefined4 *)((long)param_1 + 0x284),
                          *(undefined4 *)((long)param_1 + 0x23c),local_74,0);
    if (lVar23 == 0) {
      if (*(uint *)(param_2 + 0x18) <= uVar25) goto LAB_05bf26a8;
                    /* try { // try from 05bf0bc4 to 05cf0bcf has its CatchHandler @ 05bf1b78 */
      FUN_05c2c9e8(param_1,uVar12,*(undefined4 *)(param_2 + (long)(int)uVar25 * 0x10 + 0x28),
                   param_1[0x20],0);
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
                    /* try { // try from 05bf0bec to 05cf0c03 has its CatchHandler @ 05bf1afc */
      iVar9 = FUN_05c41df4(0);
      if (*(uint *)(param_2 + 0x18) <= uVar25) goto LAB_05bf26a8;
      if (iVar9 == 0) {
        uVar13 = 0x25a1;
      }
      else {
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar13 = FUN_05c41df4(0);
                    /* try { // try from 05bf0c2c to 05cf0c33 has its CatchHandler @ 05bf1b40 */
      }
      *puVar36 = uVar13;
                    /* try { // try from 05bf0c44 to 05cf0c4f has its CatchHandler @ 05bf1b78 */
      lVar23 = param_1[0x20];
      uVar14 = *(undefined4 *)((long)param_1 + 0x284);
      uVar2 = *(undefined4 *)((long)param_1 + 0x23c);
      if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar23 = FUN_05c09ca0(uVar13,lVar23,1,uVar14,uVar2,local_74,0);
      if (lVar23 == 0) {
                    /* try { // try from 05bf0e34 to 05cf0e37 has its CatchHandler @ 05bf1ab0 */
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar23 = FUN_05c4236c(0);
        if (lVar23 != 0) {
          if (*(int *)(*(long *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                      + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          lVar23 = FUN_05c4236c(0);
          if (lVar23 == 0) goto LAB_05bf25fc;
                    /* try { // try from 05bf0e74 to 05cf0e77 has its CatchHandler @ 05bf1aac */
          if (0 < *(int *)(lVar23 + 0x18)) {
            lVar23 = *plVar26;
                    /* try { // try from 05bf0e90 to 05cf0ebf has its CatchHandler @ 05bf1ae4 */
            if (*(int *)(*(long *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                        + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar17 = FUN_05c4236c(0);
            uVar14 = *(undefined4 *)((long)param_1 + 0x284);
            uVar2 = *(undefined4 *)((long)param_1 + 0x23c);
            if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0
               ) {
              thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
            }
            lVar23 = FUN_05c0a248(uVar13,lVar23,uVar17,1,uVar14,uVar2,local_74,0);
            if (lVar23 != 0) goto LAB_05bf0c8c;
          }
        }
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar17 = FUN_05c41f68(0);
                    /* try { // try from 05bf0f20 to 05cf0f57 has its CatchHandler @ 05bf1b50 */
        if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e1b8);
        }
        uVar16 = FUN_0606a004(uVar17,0,0);
        if ((uVar16 & 1) != 0) {
          if (*(int *)(*(long *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                      + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar17 = FUN_05c41f68(0);
          uVar14 = *(undefined4 *)((long)param_1 + 0x284);
          uVar2 = *(undefined4 *)((long)param_1 + 0x23c);
                    /* try { // try from 05bf0f8c to 05cf0f9b has its CatchHandler @ 05bf1ae0 */
          if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0)
          {
            thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
          }
          lVar23 = FUN_05c09ca0(uVar13,uVar17,1,uVar14,uVar2,local_74,0);
          if (lVar23 != 0) goto LAB_05bf0c8c;
        }
        if (*(uint *)(param_2 + 0x18) <= uVar25) goto LAB_05bf26a8;
        *puVar36 = 0x20;
                    /* try { // try from 05bf0fdc to 05cf0fdf has its CatchHandler @ 05bf1aa8 */
        lVar23 = param_1[0x20];
        uVar14 = *(undefined4 *)((long)param_1 + 0x284);
        uVar2 = *(undefined4 *)((long)param_1 + 0x23c);
        if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar13 = 0x20;
                    /* try { // try from 05bf101c to 05cf101f has its CatchHandler @ 05bf1aa4 */
        lVar23 = FUN_05c09ca0(0x20,lVar23,1,uVar14,uVar2,local_74,0);
        if (lVar23 == 0) {
          if (*(uint *)(param_2 + 0x18) <= uVar25) goto LAB_05bf26a8;
          *puVar36 = 3;
                    /* try { // try from 05bf1038 to 05cf1067 has its CatchHandler @ 05bf1ad0 */
          lVar23 = param_1[0x20];
          uVar14 = *(undefined4 *)((long)param_1 + 0x284);
          uVar2 = *(undefined4 *)((long)param_1 + 0x23c);
          if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0)
          {
            thunk_FUN_02dbd7b4();
          }
          uVar13 = 3;
          lVar23 = FUN_05c09ca0(3,lVar23,1,uVar14,uVar2,local_74,0);
        }
      }
LAB_05bf0c8c:
                    /* try { // try from 05bf0c8c to 05cf0c8f has its CatchHandler @ 05bf1ac4 */
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar16 = FUN_05c41f0c(0);
      if ((uVar16 & 1) == 0) {
                    /* try { // try from 05bf0cc8 to 05cf0ccb has its CatchHandler @ 05bf1ac0 */
        plVar22 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,4);
        if (uVar12 >> 0x10 == 0) {
                    /* try { // try from 05bf0ce4 to 05cf0d13 has its CatchHandler @ 05bf1b34 */
          local_170 = CONCAT44(local_170._4_4_,uVar12);
          lVar19 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&local_170);
          if (plVar22 == (long *)0x0) goto LAB_05bf25fc;
          if ((lVar19 != 0) &&
             (lVar24 = thunk_FUN_02d9d438(lVar19,*(undefined8 *)(*plVar22 + 0x40)), lVar24 == 0))
          goto LAB_05bf26ac;
          if ((int)plVar22[3] == 0) goto LAB_05bf26a8;
          plVar22[4] = lVar19;
          thunk_FUN_02dd37b4(plVar22 + 4,lVar19);
          if (param_1[0x1f] == 0) goto LAB_05bf25fc;
          lVar19 = thunk_FUN_0606f5c0(param_1[0x1f],0);
          if ((lVar19 != 0) &&
             (lVar24 = thunk_FUN_02d9d438(lVar19,*(undefined8 *)(*plVar22 + 0x40)), lVar24 == 0))
          goto LAB_05bf26ac;
          if (*(uint *)(plVar22 + 3) < 2) goto LAB_05bf26a8;
          plVar22[5] = lVar19;
                    /* try { // try from 05bf0d74 to 05cf0dab has its CatchHandler @ 05bf1b74 */
          thunk_FUN_02dd37b4(plVar22 + 5,lVar19);
          if (lVar23 == 0) goto LAB_05bf25fc;
          local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(lVar23 + 0x14));
          lVar19 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&local_e0);
          if ((lVar19 != 0) &&
             (lVar24 = thunk_FUN_02d9d438(lVar19,*(undefined8 *)(*plVar22 + 0x40)), lVar24 == 0))
          goto LAB_05bf26ac;
          if (*(uint *)(plVar22 + 3) < 3) goto LAB_05bf26a8;
          plVar22[6] = lVar19;
          thunk_FUN_02dd37b4(plVar22 + 6,lVar19);
          lVar19 = thunk_FUN_0606f5c0(param_1,0);
                    /* try { // try from 05bf0de8 to 05cf0df7 has its CatchHandler @ 05bf1af0 */
          if ((lVar19 != 0) &&
             (lVar24 = thunk_FUN_02d9d438(lVar19,*(undefined8 *)(*plVar22 + 0x40)), lVar24 == 0))
          goto LAB_05bf26ac;
          if (*(uint *)(plVar22 + 3) < 4) goto LAB_05bf26a8;
          plVar22[7] = lVar19;
          thunk_FUN_02dd37b4(plVar22 + 7,lVar19);
          puVar20 = (undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Quaternion>__ctor__;
        }
        else {
          local_170 = CONCAT44(local_170._4_4_,uVar12);
          lVar19 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&local_170);
          if (plVar22 == (long *)0x0) goto LAB_05bf25fc;
          if ((lVar19 != 0) &&
             (lVar24 = thunk_FUN_02d9d438(lVar19,*(undefined8 *)(*plVar22 + 0x40)), lVar24 == 0))
          goto LAB_05bf26ac;
          if ((int)plVar22[3] == 0) goto LAB_05bf26a8;
                    /* try { // try from 05bf10c8 to 05cf10ff has its CatchHandler @ 05bf1b4c */
          plVar22[4] = lVar19;
          thunk_FUN_02dd37b4(plVar22 + 4,lVar19);
          if (param_1[0x1f] == 0) goto LAB_05bf25fc;
          lVar19 = thunk_FUN_0606f5c0(param_1[0x1f],0);
          if ((lVar19 != 0) &&
             (lVar24 = thunk_FUN_02d9d438(lVar19,*(undefined8 *)(*plVar22 + 0x40)), lVar24 == 0))
          goto LAB_05bf26ac;
          if (*(uint *)(plVar22 + 3) < 2) goto LAB_05bf26a8;
          plVar22[5] = lVar19;
          thunk_FUN_02dd37b4(plVar22 + 5,lVar19);
          if (lVar23 == 0) goto LAB_05bf25fc;
                    /* try { // try from 05bf1130 to 05cf117b has its CatchHandler @ 05bf1b70 */
          local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(lVar23 + 0x14));
          lVar19 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&local_e0);
          if ((lVar19 != 0) &&
             (lVar24 = thunk_FUN_02d9d438(lVar19,*(undefined8 *)(*plVar22 + 0x40)), lVar24 == 0))
          goto LAB_05bf26ac;
          if (*(uint *)(plVar22 + 3) < 3) goto LAB_05bf26a8;
          plVar22[6] = lVar19;
          thunk_FUN_02dd37b4(plVar22 + 6,lVar19);
          lVar19 = thunk_FUN_0606f5c0(param_1,0);
                    /* try { // try from 05bf1184 to 05cf1207 has its CatchHandler @ 05bf1b5c */
          if ((lVar19 != 0) &&
             (lVar24 = thunk_FUN_02d9d438(lVar19,*(undefined8 *)(*plVar22 + 0x40)), lVar24 == 0))
          goto LAB_05bf26ac;
          if (*(uint *)(plVar22 + 3) < 4) goto LAB_05bf26a8;
          plVar22[7] = lVar19;
          thunk_FUN_02dd37b4(plVar22 + 7,lVar19);
          puVar20 = (undefined8 *)
                    Method_UnityEngine_XR_InputFeatureUsage<InputTrackingState>_get_name__;
        }
        uVar17 = FUN_04e8e72c(*puVar20,plVar22,0);
        if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_0602283c(uVar17,param_1,0);
      }
    }
  }
  else {
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_Append__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar16 = FUN_05c4c7a8(uVar12,0);
    if ((uVar27 == 0xfe0e) || ((uVar16 & 1) == 0)) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_Append__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar16 = FUN_05c4c728(uVar12,0);
      if ((uVar27 != 0xfe0f) || ((uVar16 & 1) == 0)) goto LAB_05bf0b78;
    }
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar23 = FUN_05c4277c(0);
    if (lVar23 == 0) goto LAB_05bf0b78;
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar23 = FUN_05c4277c(0);
    if (lVar23 == 0) goto LAB_05bf25fc;
    if (*(int *)(lVar23 + 0x18) < 1) goto LAB_05bf0b78;
    lVar23 = *plVar26;
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar17 = FUN_05c4277c(0);
    lVar19 = param_1[0x50];
    lVar24 = param_1[0x47];
    if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
    }
    lVar23 = FUN_05c0a464(uVar12,lVar23,uVar17,1,(int)lVar19,(int)lVar24,local_74,0);
    if (lVar23 == 0) goto LAB_05bf0b78;
  }
  if ((*plVar1 == 0) || (lVar19 = *(long *)(*plVar1 + 0x38), lVar19 == 0)) goto LAB_05bf25fc;
  if (*(uint *)(lVar19 + 0x18) <= *(uint *)(param_1 + 0x94)) goto LAB_05bf26a8;
  puVar20 = (undefined8 *)(lVar19 + (long)(int)*(uint *)(param_1 + 0x94) * 0x178 + 0x38);
  *puVar20 = 0;
  thunk_FUN_02dd37b4(puVar20,0);
  if (lVar23 == 0) goto LAB_05bf25fc;
                    /* try { // try from 05bf124c to 05cf127b has its CatchHandler @ 05bf1b08 */
  if (*(char *)(lVar23 + 0x10) == '\x01') {
    if (*(long *)(lVar23 + 0x18) == 0) goto LAB_05bf25fc;
    iVar9 = FUN_05bf59d4(*(long *)(lVar23 + 0x18),0);
    if (*plVar26 == 0) goto LAB_05bf25fc;
    iVar10 = FUN_05bf59d4(*plVar26,0);
    if (iVar9 != iVar10) {
      plVar22 = *(long **)(lVar23 + 0x18);
                    /* try { // try from 05bf1288 to 05cf128b has its CatchHandler @ 05bf1b78 */
      if (plVar22 == (long *)0x0) {
        plVar22 = (long *)0x0;
        *plVar26 = 0;
      }
      else {
                    /* try { // try from 05bf1294 to 05cf130f has its CatchHandler @ 05bf1b58 */
        lVar19 = *(long *)Method_UnityEngine_InputSystem_InputControl<float>_ReadValue__;
        bVar3 = *(byte *)(lVar19 + 0x130);
        if (*(byte *)(*plVar22 + 0x130) < bVar3) {
          plVar30 = (long *)0x0;
        }
        else {
          plVar30 = plVar22;
          if (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar3 * 8 + -8) != lVar19) {
            plVar30 = (long *)0x0;
          }
        }
        *plVar26 = (long)plVar30;
        if (*(byte *)(*plVar22 + 0x130) < bVar3) {
          plVar22 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar3 * 8 + -8) != lVar19) {
          plVar22 = (long *)0x0;
        }
      }
      thunk_FUN_02dd37b4(plVar26,plVar22);
    }
    bVar8 = iVar9 != iVar10;
    if ((uVar27 >> 4 == 0xfe0) || (uVar27 - 0xe0100 < 0xf0)) {
      if (*plVar26 == 0) goto LAB_05bf25fc;
                    /* try { // try from 05bf1354 to 05cf1383 has its CatchHandler @ 05bf1b04 */
      iVar9 = FUN_05c03084(*plVar26,uVar13,uVar27,0);
      if (iVar9 != 0) {
        if (*plVar26 == 0) goto LAB_05bf25fc;
        uVar16 = FUN_05c05510(*plVar26,iVar9,&local_90,0);
        if ((uVar16 & 1) != 0) {
          if ((*plVar1 == 0) || (lVar19 = *(long *)(*plVar1 + 0x38), lVar19 == 0))
          goto LAB_05bf25fc;
                    /* try { // try from 05bf1394 to 05cf139f has its CatchHandler @ 05bf1af4 */
          if (*(uint *)(lVar19 + 0x18) <= *(uint *)(param_1 + 0x94)) goto LAB_05bf26a8;
          *(undefined8 *)(lVar19 + (long)(int)*(uint *)(param_1 + 0x94) * 0x178 + 0x38) = local_90;
          thunk_FUN_02dd37b4();
        }
      }
      if (*(uint *)(param_2 + 0x18) <= uVar33) goto LAB_05bf26a8;
      *(undefined4 *)(param_2 + (long)(int)uVar33 * 0x10 + 0x24) = 0x1a;
      uVar25 = uVar33;
    }
    if ((uVar11 & 1) != 0) {
                    /* try { // try from 05bf13d4 to 05cf1403 has its CatchHandler @ 05bf1b48 */
      if (((*plVar26 == 0) || (lVar19 = *(long *)(*plVar26 + 0x178), lVar19 == 0)) ||
         (lVar19 = *(long *)(lVar19 + 0x38), lVar19 == 0)) goto LAB_05bf25fc;
      uVar16 = FUN_04937278(lVar19,*(undefined4 *)(lVar23 + 0x28),&local_88,
                            *(undefined8 *)
                             Method_UnityEngine_InputSystem_InputControl<Vector2>_ReadValueFromStateWithCaching__
                           );
                    /* try { // try from 05bf1404 to 05cf140f has its CatchHandler @ 05bf1b1c */
      if ((uVar16 & 1) == 0) goto LAB_05bf1580;
      plVar30 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      plVar22 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
      if (local_88 == 0) goto LAB_05bf1ca4;
      iVar9 = 0;
                    /* try { // try from 05bf1420 to 05cf1427 has its CatchHandler @ 05bf1abc */
      while (iVar9 < *(int *)(local_88 + 0x18)) {
                    /* try { // try from 05bf1430 to 05cf14ab has its CatchHandler @ 05bf1b54 */
        auVar41 = FUN_03a7e878(local_88,iVar9,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadValueFromStateWithCaching__
                              );
        lVar19 = auVar41._0_8_;
        if (lVar19 == 0) goto LAB_05bf25fc;
        uVar16 = *(ulong *)(lVar19 + 0x18);
        uVar12 = (uint)uVar16;
        if (1 < (int)uVar12) {
          uVar33 = 1;
          do {
            if (*(uint *)(param_2 + 0x18) <= uVar25 + uVar33) goto LAB_05bf26a8;
            if (*plVar26 == 0) goto LAB_05bf25fc;
            iVar10 = FUN_05c02fa8(*plVar26,*(undefined4 *)
                                            (param_2 + (long)(int)(uVar25 + uVar33) * 0x10 + 0x24),0
                                 );
            if (*(uint *)(lVar19 + 0x18) <= uVar33) goto LAB_05bf26a8;
            if (iVar10 != *(int *)(lVar19 + (long)(int)uVar33 * 4 + 0x20)) goto LAB_05bf14c4;
            uVar33 = uVar33 + 1;
          } while (uVar12 != uVar33);
        }
        if (auVar41._8_4_ != 0) {
          if (*plVar26 == 0) goto LAB_05bf25fc;
          uVar35 = FUN_05c05510(*plVar26,auVar41._8_8_ & 0xffffffff,&local_98,0);
          if ((uVar35 & 1) != 0) {
            if ((*plVar1 == 0) || (lVar19 = *(long *)(*plVar1 + 0x38), lVar19 == 0))
            goto LAB_05bf25fc;
            if (*(uint *)(lVar19 + 0x18) <= *(uint *)(param_1 + 0x94)) goto LAB_05bf26a8;
                    /* try { // try from 05bf151c to 05cf154f has its CatchHandler @ 05bf1b00 */
            *(undefined8 *)(lVar19 + (long)(int)*(uint *)(param_1 + 0x94) * 0x178 + 0x38) = local_98
            ;
            thunk_FUN_02dd37b4();
            if ((int)uVar12 < 1) goto LAB_05bf1578;
            uVar35 = 0;
            uVar33 = 0;
            if (uVar25 <= *(uint *)(param_2 + 0x18)) {
              uVar33 = *(uint *)(param_2 + 0x18) - uVar25;
            }
            goto LAB_05bf1544;
          }
        }
LAB_05bf14c4:
        iVar9 = iVar9 + 1;
        if (local_88 == 0) goto LAB_05bf25fc;
      }
    }
  }
  else {
    bVar8 = false;
  }
  goto LAB_05bf1580;
  while( true ) {
                    /* try { // try from 05bf1550 to 05cf1563 has its CatchHandler @ 05bf1b18 */
    lVar19 = param_2 + (long)(int)(uVar25 + (int)uVar35) * 0x10;
    if (uVar35 == 0) {
      *(uint *)(lVar19 + 0x2c) = uVar12;
    }
    else {
      *(undefined4 *)(lVar19 + 0x24) = 0x1a;
                    /* try { // try from 05bf1564 to 05cf1577 has its CatchHandler @ 05bf0894 */
    }
    uVar35 = uVar35 + 1;
    if ((uVar16 & 0xffffffff) == uVar35) break;
LAB_05bf1544:
    if (uVar33 == uVar35) goto LAB_05bf26a8;
  }
LAB_05bf1578:
                    /* try { // try from 05bf1578 to 05cf1587 has its CatchHandler @ 05bf1b14 */
  uVar25 = (uVar25 + uVar12) - 1;
LAB_05bf1580:
  if ((*plVar1 == 0) || (lVar19 = *(long *)(*plVar1 + 0x38), lVar19 == 0)) goto LAB_05bf25fc;
  if (*(uint *)(lVar19 + 0x18) <= *(uint *)(param_1 + 0x94)) goto LAB_05bf26a8;
  lVar19 = lVar19 + (long)(int)*(uint *)(param_1 + 0x94) * 0x178;
  plVar22 = (long *)(lVar19 + 0x30);
  *plVar22 = lVar23;
  *(undefined4 *)(lVar19 + 0x20) = 0;
  thunk_FUN_02dd37b4(plVar22,lVar23);
  if ((*plVar1 == 0) || (lVar19 = *(long *)(*plVar1 + 0x38), lVar19 == 0)) goto LAB_05bf25fc;
  uVar12 = *(uint *)(param_1 + 0x94);
                    /* try { // try from 05bf15cc to 05cf15fb has its CatchHandler @ 05bf1b68 */
  if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_05bf26a8;
  lVar24 = lVar19 + (long)(int)uVar12 * 0x178;
  *(short *)(lVar24 + 0x24) = (short)uVar13;
  *(undefined1 *)(lVar24 + 0x54) = local_74[0];
  if (*(uint *)(param_2 + 0x18) <= uVar25) goto LAB_05bf26a8;
  lVar19 = lVar19 + (long)(int)uVar12 * 0x178;
  *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)(param_2 + (long)(int)uVar25 * 0x10 + 0x28);
  *(long *)(lVar19 + 0x40) = *plVar26;
  thunk_FUN_02dd37b4();
  plVar30 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  plVar22 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
                    /* try { // try from 05bf1618 to 05cf161b has its CatchHandler @ 05bf1b80 */
  if (*(char *)(lVar23 + 0x10) == '\x02') {
    plVar32 = *(long **)(lVar23 + 0x18);
    if (plVar32 == (long *)0x0) goto LAB_05bf25fc;
                    /* try { // try from 05bf1630 to 05cf169f has its CatchHandler @ 05bf1ba0 */
    bVar3 = *(byte *)(*(long *)
                       Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_RemoveAtByMovingTailWithCapacity__
                     + 0x130);
    if ((*(byte *)(*plVar32 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar32 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)
         Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_RemoveAtByMovingTailWithCapacity__
       )) goto LAB_05bf25fc;
    lVar31 = plVar32[0x11];
    lVar28 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar28 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar28 = *plVar30;
    }
    uVar12 = FUN_05be3d0c(lVar31,plVar32,*(long *)(lVar28 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar28 + 0xb8) + 8));
    *(uint *)(param_1 + 0x24) = uVar12;
    lVar28 = **(long **)(*plVar30 + 0xb8);
    if (lVar28 == 0) goto LAB_05bf25fc;
    if (*(uint *)(lVar28 + 0x18) <= uVar12) goto LAB_05bf26a8;
    lVar28 = lVar28 + (long)(int)uVar12 * 0x38;
    *(int *)(lVar28 + 0x54) = *(int *)(lVar28 + 0x54) + 1;
                    /* try { // try from 05bf16d0 to 05cf16d3 has its CatchHandler @ 05bf1b7c */
    if ((*plVar1 == 0) || (lVar28 = *(long *)(*plVar1 + 0x38), lVar28 == 0)) goto LAB_05bf25fc;
    uVar12 = *(uint *)(param_1 + 0x94);
    if (*(uint *)(lVar28 + 0x18) <= uVar12) goto LAB_05bf26a8;
    lVar28 = lVar28 + (long)(int)uVar12 * 0x178;
    *(undefined4 *)(lVar28 + 0x20) = 1;
                    /* try { // try from 05bf1700 to 05cf177f has its CatchHandler @ 05bf1b9c */
    *(int *)(lVar28 + 0x50) = (int)param_1[0x24];
    *(undefined4 *)((long)param_1 + 0x65c) = 0;
    *(int *)(param_1 + 0x24) = (int)lVar15;
    local_220 = local_220 + 1;
    goto LAB_05bf1c84;
  }
  if (bVar8) {
    if (*plVar26 == 0) goto LAB_05bf25fc;
    iVar9 = FUN_05bf59d4(*plVar26,0);
    if (param_1[0x1f] == 0) goto LAB_05bf25fc;
    iVar10 = FUN_05bf59d4(param_1[0x1f],0);
    if (iVar9 != iVar10) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar16 = FUN_05c4242c(0);
      if ((uVar16 & 1) == 0) {
        if (*plVar26 == 0) goto LAB_05bf25fc;
        lVar19 = *(long *)(*plVar26 + 0x88);
      }
      else {
        if (*plVar26 == 0) goto LAB_05bf25fc;
        uVar17 = *(undefined8 *)(*plVar26 + 0x88);
        lVar19 = *plVar29;
        if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__ + 0xe4) == 0)
        {
          thunk_FUN_02dbd7b4();
        }
        lVar19 = FUN_05c3d38c(lVar19,uVar17,0);
                    /* try { // try from 05bf17bc to 05cf17eb has its CatchHandler @ 05bf1b64 */
      }
      *plVar29 = lVar19;
      thunk_FUN_02dd37b4(plVar29);
      puVar5 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      lVar24 = *plVar29;
      lVar34 = *plVar26;
      lVar19 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar19 = *(long *)puVar5;
      }
      uVar14 = FUN_05be3ad4(lVar24,lVar34,*(long *)(lVar19 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 8));
      *(undefined4 *)(param_1 + 0x24) = uVar14;
    }
  }
  if (*(long *)(lVar23 + 0x20) == 0) goto LAB_05bf25fc;
                    /* try { // try from 05bf1824 to 05cf1853 has its CatchHandler @ 05bf1b60 */
  iVar9 = FUN_06114b10(*(long *)(lVar23 + 0x20),0);
  if (0 < iVar9) {
    if (*(long *)(lVar23 + 0x20) == 0) goto LAB_05bf25fc;
    lVar19 = *plVar26;
    lVar24 = *plVar29;
    uVar14 = FUN_06114b10(*(long *)(lVar23 + 0x20),0);
                    /* try { // try from 05bf1860 to 05cf1867 has its CatchHandler @ 05bf1ab8 */
    if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__ + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__);
    }
                    /* try { // try from 05bf1880 to 05cf1887 has its CatchHandler @ 05bf1b78 */
    lVar23 = FUN_05c3ce0c(lVar19,lVar24,uVar14,0);
    *plVar29 = lVar23;
    thunk_FUN_02dd37b4(plVar29,lVar23);
    puVar5 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    lVar19 = *plVar29;
                    /* try { // try from 05bf18a0 to 05cf18bf has its CatchHandler @ 05bf1af8 */
    lVar24 = *plVar26;
    lVar23 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar23 = *(long *)puVar5;
    }
                    /* try { // try from 05bf18cc to 05cf18d3 has its CatchHandler @ 05bf1ab4 */
    uVar14 = FUN_05be3ad4(lVar19,lVar24,*(long *)(lVar23 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 8));
    bVar8 = true;
    *(undefined4 *)(param_1 + 0x24) = uVar14;
  }
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar16 = FUN_04f80ed4(uVar13,0);
  puVar5 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  plVar22 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
  if ((uVar13 != 0x200b) && ((uVar16 & 1) == 0)) {
                    /* try { // try from 05bf1914 to 05cf194f has its CatchHandler @ 05bf1b78 */
    lVar23 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar23 = *(long *)puVar5;
    }
    lVar19 = **(long **)(lVar23 + 0xb8);
    if (lVar19 == 0) goto LAB_05bf25fc;
    uVar12 = *(uint *)(param_1 + 0x24);
    if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_05bf26a8;
                    /* try { // try from 05bf1950 to 05cf1a13 has its CatchHandler @ 05bf0894 */
    if (*(int *)(lVar19 + (long)(int)uVar12 * 0x38 + 0x54) < 0x3fff) {
                    /* catch() { ... } // from try @ 05bf101c with catch @ 05bf1aa4 */
                    /* catch() { ... } // from try @ 05bf0fdc with catch @ 05bf1aa8 */
      if (*(int *)(lVar23 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 05bf0e74 with catch @ 05bf1aac */
        thunk_FUN_02dbd7b4();
                    /* catch() { ... } // from try @ 05bf0e34 with catch @ 05bf1ab0 */
                    /* catch() { ... } // from try @ 05bf18cc with catch @ 05bf1ab4 */
                    /* catch() { ... } // from try @ 05bf1860 with catch @ 05bf1ab8 */
                    /* catch() { ... } // from try @ 05bf1420 with catch @ 05bf1abc */
                    /* catch() { ... } // from try @ 05bf0cc8 with catch @ 05bf1ac0 */
        lVar19 = **(long **)(*(long *)
                              Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__ +
                            0xb8);
                    /* catch() { ... } // from try @ 05bf0c8c with catch @ 05bf1ac4 */
        if (lVar19 == 0) goto LAB_05bf25fc;
                    /* catch() { ... } // from try @ 05bf1a94 with catch @ 05bf1ac8 */
        uVar12 = *(uint *)(param_1 + 0x24);
                    /* catch() { ... } // from try @ 05bf1a88 with catch @ 05bf1acc */
      }
    }
    else {
      if (bVar8) {
        if (param_1[0xf7] == 0) goto LAB_05bf25fc;
        uVar16 = FUN_047c3154(param_1[0xf7],uVar12,&local_9c,*(undefined8 *)PTR_DAT_0678dea8);
        puVar5 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        if ((uVar16 & 1) == 0) {
LAB_05bf19e4:
          lVar23 = *plVar29;
          uVar17 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067616a0);
          FUN_060369d4(uVar17,lVar23,0);
          puVar5 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                    /* try { // try from 05bf1a14 to 05cf1a17 has its CatchHandler @ 05bf1b98 */
          lVar19 = *plVar26;
                    /* try { // try from 05bf1a18 to 05cf1a1b has its CatchHandler @ 05bf1b94 */
          lVar23 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                    /* try { // try from 05bf1a1c to 05cf1a1f has its CatchHandler @ 05bf1b90 */
                    /* try { // try from 05bf1a20 to 05cf1a23 has its CatchHandler @ 05bf1b8c */
          if (*(int *)(lVar23 + 0xe4) == 0) {
                    /* try { // try from 05bf1a24 to 05cf1a27 has its CatchHandler @ 05bf1b88 */
            thunk_FUN_02dbd7b4();
                    /* try { // try from 05bf1a28 to 05cf1a2b has its CatchHandler @ 05bf1b84 */
            lVar23 = *(long *)puVar5;
          }
                    /* try { // try from 05bf1a2c to 05cf1a37 has its CatchHandler @ 05bf0894 */
                    /* try { // try from 05bf1a38 to 05cf1a3b has its CatchHandler @ 05bf1b44 */
                    /* try { // try from 05bf1a3c to 05cf1a3f has its CatchHandler @ 05bf1b3c */
          uVar12 = FUN_05be3ad4(uVar17,lVar19,*(long *)(lVar23 + 0xb8),
                                *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 8));
                    /* try { // try from 05bf1a40 to 05cf1a43 has its CatchHandler @ 05bf1b38 */
                    /* try { // try from 05bf1a44 to 05cf1a4b has its CatchHandler @ 05bf1b6c */
          if (param_1[0xf7] == 0) goto LAB_05bf25fc;
                    /* try { // try from 05bf1a4c to 05cf1a4f has its CatchHandler @ 05bf1b30 */
                    /* try { // try from 05bf1a50 to 05cf1a57 has its CatchHandler @ 05bf1b74 */
                    /* try { // try from 05bf1a58 to 05cf1a5b has its CatchHandler @ 05bf1b2c */
                    /* try { // try from 05bf1a5c to 05cf1a5f has its CatchHandler @ 05bf1b20 */
                    /* try { // try from 05bf1a60 to 05cf1a63 has its CatchHandler @ 05bf1b10 */
                    /* try { // try from 05bf1a64 to 05cf1a67 has its CatchHandler @ 05bf1b0c */
          FUN_047c17c8(param_1[0xf7],(int)param_1[0x24],uVar12,*(undefined8 *)PTR_DAT_06768b20);
                    /* try { // try from 05bf1a68 to 05cf1a6b has its CatchHandler @ 05bf1aec */
                    /* try { // try from 05bf1a6c to 05cf1a6f has its CatchHandler @ 05bf1ae8 */
                    /* try { // try from 05bf1a70 to 05cf1a77 has its CatchHandler @ 05bf1b28 */
          lVar23 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        }
        else {
          lVar23 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          if (*(int *)(lVar23 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar23 = *(long *)puVar5;
          }
          lVar19 = **(long **)(lVar23 + 0xb8);
          if (lVar19 == 0) goto LAB_05bf25fc;
          if (*(uint *)(lVar19 + 0x18) <= local_9c) goto LAB_05bf26a8;
          uVar12 = local_9c;
          if (0x3ffe < *(int *)(lVar19 + (long)(int)local_9c * 0x38 + 0x54)) goto LAB_05bf19e4;
        }
        *(uint *)(param_1 + 0x24) = uVar12;
                    /* try { // try from 05bf1a78 to 05cf1a7b has its CatchHandler @ 05bf1adc */
                    /* try { // try from 05bf1a7c to 05cf1a7f has its CatchHandler @ 05bf1ad8 */
        if (*(int *)(lVar23 + 0xe4) == 0) {
                    /* try { // try from 05bf1a80 to 05cf1a83 has its CatchHandler @ 05bf1b50 */
          thunk_FUN_02dbd7b4();
                    /* try { // try from 05bf1a84 to 05cf1a87 has its CatchHandler @ 05bf1ad4 */
                    /* try { // try from 05bf1a88 to 05cf1a8b has its CatchHandler @ 05bf1acc */
                    /* try { // try from 05bf1a8c to 05cf1a93 has its CatchHandler @ 05bf1b24 */
          uVar12 = *(uint *)(param_1 + 0x24);
          lVar23 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        }
                    /* try { // try from 05bf1a94 to 05cf1a97 has its CatchHandler @ 05bf1ac8 */
                    /* try { // try from 05bf1a98 to 05cf1a9b has its CatchHandler @ 05bf1b4c */
        lVar19 = **(long **)(lVar23 + 0xb8);
                    /* try { // try from 05bf1a9c to 05cf1bbb has its CatchHandler @ 05bf0894 */
      }
      else {
                    /* catch() { ... } // from try @ 05bf1038 with catch @ 05bf1ad0 */
                    /* catch() { ... } // from try @ 05bf1a84 with catch @ 05bf1ad4 */
        lVar23 = *plVar29;
                    /* catch() { ... } // from try @ 05bf1a7c with catch @ 05bf1ad8 */
                    /* catch() { ... } // from try @ 05bf1a78 with catch @ 05bf1adc */
                    /* catch() { ... } // from try @ 05bf0f8c with catch @ 05bf1ae0 */
                    /* catch() { ... } // from try @ 05bf0e90 with catch @ 05bf1ae4 */
        uVar17 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067616a0);
                    /* catch() { ... } // from try @ 05bf1a6c with catch @ 05bf1ae8 */
                    /* catch() { ... } // from try @ 05bf1a68 with catch @ 05bf1aec */
                    /* catch() { ... } // from try @ 05bf0de8 with catch @ 05bf1af0 */
                    /* catch() { ... } // from try @ 05bf1394 with catch @ 05bf1af4 */
        FUN_060369d4(uVar17,lVar23,0);
        puVar5 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                    /* catch() { ... } // from try @ 05bf18a0 with catch @ 05bf1af8 */
                    /* catch() { ... } // from try @ 05bf0bec with catch @ 05bf1afc */
                    /* catch() { ... } // from try @ 05bf151c with catch @ 05bf1b00 */
        lVar19 = *plVar26;
                    /* catch() { ... } // from try @ 05bf1354 with catch @ 05bf1b04 */
        lVar23 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                    /* catch() { ... } // from try @ 05bf124c with catch @ 05bf1b08 */
                    /* catch() { ... } // from try @ 05bf1a64 with catch @ 05bf1b0c */
        if (*(int *)(lVar23 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 05bf1a60 with catch @ 05bf1b10 */
          thunk_FUN_02dbd7b4();
                    /* catch() { ... } // from try @ 05bf1578 with catch @ 05bf1b14 */
          lVar23 = *(long *)puVar5;
        }
                    /* catch() { ... } // from try @ 05bf1550 with catch @ 05bf1b18 */
                    /* catch() { ... } // from try @ 05bf1404 with catch @ 05bf1b1c */
                    /* catch() { ... } // from try @ 05bf1a5c with catch @ 05bf1b20 */
                    /* catch() { ... } // from try @ 05bf1a8c with catch @ 05bf1b24 */
                    /* catch() { ... } // from try @ 05bf1a70 with catch @ 05bf1b28 */
        uVar12 = FUN_05be3ad4(uVar17,lVar19,*(long *)(lVar23 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 8));
                    /* catch() { ... } // from try @ 05bf1a58 with catch @ 05bf1b2c */
        *(uint *)(param_1 + 0x24) = uVar12;
                    /* catch() { ... } // from try @ 05bf1a4c with catch @ 05bf1b30 */
                    /* catch() { ... } // from try @ 05bf0ce4 with catch @ 05bf1b34 */
                    /* catch() { ... } // from try @ 05bf1a40 with catch @ 05bf1b38 */
        lVar19 = **(long **)(*(long *)puVar5 + 0xb8);
      }
                    /* catch() { ... } // from try @ 05bf1a3c with catch @ 05bf1b3c */
      if (lVar19 == 0) goto LAB_05bf25fc;
    }
                    /* catch() { ... } // from try @ 05bf1a38 with catch @ 05bf1b44 */
                    /* catch() { ... } // from try @ 05bf13d4 with catch @ 05bf1b48 */
                    /* catch() { ... } // from try @ 05bf10c8 with catch @ 05bf1b4c
                       catch() { ... } // from try @ 05bf1a98 with catch @ 05bf1b4c */
    if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_05bf26a8;
                    /* catch() { ... } // from try @ 05bf0f20 with catch @ 05bf1b50
                       catch() { ... } // from try @ 05bf1a80 with catch @ 05bf1b50 */
                    /* catch() { ... } // from try @ 05bf1430 with catch @ 05bf1b54 */
    lVar19 = lVar19 + (long)(int)uVar12 * 0x38;
                    /* catch() { ... } // from try @ 05bf1294 with catch @ 05bf1b58 */
                    /* catch() { ... } // from try @ 05bf1184 with catch @ 05bf1b5c */
                    /* catch() { ... } // from try @ 05bf1824 with catch @ 05bf1b60 */
    *(int *)(lVar19 + 0x54) = *(int *)(lVar19 + 0x54) + 1;
  }
                    /* catch() { ... } // from try @ 05bf17bc with catch @ 05bf1b64 */
  plVar30 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                    /* catch() { ... } // from try @ 05bf15cc with catch @ 05bf1b68 */
                    /* catch() { ... } // from try @ 05bf1a44 with catch @ 05bf1b6c */
                    /* catch() { ... } // from try @ 05bf1130 with catch @ 05bf1b70 */
                    /* catch() { ... } // from try @ 05bf0d74 with catch @ 05bf1b74
                       catch() { ... } // from try @ 05bf1a50 with catch @ 05bf1b74 */
                    /* catch() { ... } // from try @ 05bf0bc4 with catch @ 05bf1b78
                       catch() { ... } // from try @ 05bf0c44 with catch @ 05bf1b78
                       catch() { ... } // from try @ 05bf1288 with catch @ 05bf1b78
                       catch() { ... } // from try @ 05bf1880 with catch @ 05bf1b78
                       catch() { ... } // from try @ 05bf1914 with catch @ 05bf1b78 */
  if ((*plVar1 == 0) || (lVar23 = *(long *)(*plVar1 + 0x38), lVar23 == 0)) goto LAB_05bf25fc;
                    /* catch() { ... } // from try @ 05bf16d0 with catch @ 05bf1b7c */
                    /* catch() { ... } // from try @ 05bf1618 with catch @ 05bf1b80 */
                    /* catch() { ... } // from try @ 05bf1a28 with catch @ 05bf1b84 */
                    /* catch() { ... } // from try @ 05bf1a24 with catch @ 05bf1b88 */
  if (*(uint *)(lVar23 + 0x18) <= *(uint *)(param_1 + 0x94)) goto LAB_05bf26a8;
                    /* catch() { ... } // from try @ 05bf1a20 with catch @ 05bf1b8c */
                    /* catch() { ... } // from try @ 05bf1a1c with catch @ 05bf1b90 */
                    /* catch() { ... } // from try @ 05bf1a18 with catch @ 05bf1b94 */
                    /* catch() { ... } // from try @ 05bf1a14 with catch @ 05bf1b98 */
                    /* catch() { ... } // from try @ 05bf1700 with catch @ 05bf1b9c */
  *(long *)(lVar23 + (long)(int)*(uint *)(param_1 + 0x94) * 0x178 + 0x48) = *plVar29;
                    /* catch() { ... } // from try @ 05bf1630 with catch @ 05bf1ba0 */
  thunk_FUN_02dd37b4();
  if ((*plVar1 == 0) || (lVar23 = *(long *)(*plVar1 + 0x38), lVar23 == 0)) goto LAB_05bf25fc;
                    /* try { // try from 05bf1bbc to 05cf1bbf has its CatchHandler @ 05bf1bd4 */
  if (*(uint *)(lVar23 + 0x18) <= *(uint *)(param_1 + 0x94)) goto LAB_05bf26a8;
  uVar12 = *(uint *)(param_1 + 0x24);
  *(uint *)(lVar23 + (long)(int)*(uint *)(param_1 + 0x94) * 0x178 + 0x50) = uVar12;
                    /* catch() { ... } // from try @ 05bf1bbc with catch @ 05bf1bd4 */
  lVar23 = *plVar30;
  if (*(int *)(lVar23 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar23 = *plVar30;
    uVar12 = *(uint *)(param_1 + 0x24);
  }
  lVar19 = **(long **)(lVar23 + 0xb8);
  if (lVar19 == 0) goto LAB_05bf25fc;
  if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_05bf26a8;
  *(bool *)(lVar19 + (long)(int)uVar12 * 0x38 + 0x41) = bVar8;
  if (bVar8) {
                    /* try { // try from 05bf1c14 to 05cf1c3b has its CatchHandler @ 05bf1c50 */
    if (*(int *)(lVar23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar19 = **(long **)(*plVar30 + 0xb8);
      if (lVar19 == 0) goto LAB_05bf25fc;
      uVar12 = *(uint *)(param_1 + 0x24);
    }
                    /* try { // try from 05bf1c3c to 05cf1c47 has its CatchHandler @ 05bf0894 */
    if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_05bf26a8;
                    /* try { // try from 05bf1c48 to 05cf1c4f has its CatchHandler @ 05bf1c50 */
    plVar32 = (long *)(lVar19 + (long)(int)uVar12 * 0x38 + 0x48);
    *plVar32 = lVar28;
                    /* catch() { ... } // from try @ 05bf1c14 with catch @ 05bf1c50
                       catch() { ... } // from try @ 05bf1c48 with catch @ 05bf1c50 */
    thunk_FUN_02dd37b4(plVar32,lVar28);
    param_1[0x20] = lVar31;
    thunk_FUN_02dd37b4(plVar26);
    param_1[0x23] = lVar28;
    thunk_FUN_02dd37b4(plVar29,lVar28);
    *(int *)(param_1 + 0x24) = (int)lVar15;
  }
  uVar12 = *(uint *)(param_1 + 0x94);
LAB_05bf1c84:
  *(uint *)(param_1 + 0x94) = uVar12 + 1;
LAB_05bf1c8c:
  uVar12 = *(uint *)(param_2 + 0x18);
  uVar25 = uVar25 + 1;
  if ((int)uVar12 <= (int)uVar25) goto LAB_05bf1ca4;
  goto LAB_05bf06c4;
}


