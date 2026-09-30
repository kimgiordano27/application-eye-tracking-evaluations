/*
FUNCTION_NAME: FUN_03239214
ENTRY_POINT: 03239214
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_16;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03239214(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar2 = PTR_DAT_03d84140;
  if ((DAT_03ff476f & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d84148);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d84150);
    thunk_FUN_01ad9084(StringLiteral_2296);
    thunk_FUN_01ad9084(PTR_DAT_03d84158);
    thunk_FUN_01ad9084(PTR_DAT_03d84160);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
    thunk_FUN_01ad9084(PTR_DAT_03d84168);
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d84140);
    thunk_FUN_01ad9084(Method_System_Collections_SortedList_SortedListEnumerator_get_Current__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__);
    thunk_FUN_01ad9084(PTR_DAT_03d84170);
    thunk_FUN_01ad9084(PTR_DAT_03d84178);
    thunk_FUN_01ad9084(PTR_DAT_03d840b0);
    thunk_FUN_01ad9084(Method_System_Collections_SortedList_SortedListEnumerator_get_Value__);
    thunk_FUN_01ad9084(PTR_DAT_03d84180);
    thunk_FUN_01ad9084(PTR_DAT_03d84188);
    thunk_FUN_01ad9084(PTR_DAT_03d84190);
    thunk_FUN_01ad9084(PTR_DAT_03d84198);
    thunk_FUN_01ad9084(PTR_DAT_03d841a0);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_41__);
    thunk_FUN_01ad9084(PTR_DAT_03d841a8);
    thunk_FUN_01ad9084(PTR_DAT_03d841b0);
    thunk_FUN_01ad9084(PTR_DAT_03d841b8);
    thunk_FUN_01ad9084(PTR_DAT_03d841c0);
    thunk_FUN_01ad9084(PTR_DAT_03d841c8);
    thunk_FUN_01ad9084(StringLiteral_3288);
    thunk_FUN_01ad9084(PTR_DAT_03d841d0);
    DAT_03ff476f = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_0328b7fc(&local_78,0x9b83dd9,0,0xffffffffffffffff,0);
  local_80 = local_68;
  uStack_88 = uStack_70;
  local_90 = local_78;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uStack_b8 = uStack_88;
  local_c0 = local_90;
  local_b0 = local_80;
  FUN_0328b9b4(&local_a8,&local_c0,0);
  plVar14 = (long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__ + 0xe0)
      == 0) {
    thunk_FUN_01ac7298();
  }
  if (DAT_03fed3d9 == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
    DAT_03fed3d9 = '\x01';
  }
  lVar9 = *plVar14;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar9 = *plVar14;
  }
  uVar15 = **(undefined8 **)(lVar9 + 0xb8);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  }
  uVar10 = FUN_0391f968(uVar15,0,0);
  if ((uVar10 & 1) == 0) {
    if (*(int *)(*plVar14 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03ff47be == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
      DAT_03ff47be = '\x01';
    }
    lVar9 = *plVar14;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar9 = *plVar14;
    }
    **(long **)(lVar9 + 0xb8) = param_1;
    thunk_FUN_01b4f09c(*(undefined8 *)(*plVar14 + 0xb8),param_1);
    uVar15 = FUN_0327738c(0);
    if (DAT_03ff47bf == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
      DAT_03ff47bf = '\x01';
    }
    lVar9 = *plVar14;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar9 = *plVar14;
    }
    puVar11 = (undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x20);
    *puVar11 = uVar15;
    thunk_FUN_01b4f09c(puVar11,uVar15);
    lVar9 = FUN_01b47fd0(*(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__,
                         9);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_03d841c8;
    thunk_FUN_01b4f09c();
    puVar2 = 
    Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
    if (*(int *)(*(long *)
                  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar15 = FUN_038eeb58(0);
    if (*(uint *)(lVar9 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    *(undefined8 *)(lVar9 + 0x28) = uVar15;
    thunk_FUN_01b4f09c();
    if (*(uint *)(lVar9 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)PTR_DAT_03d841c0;
    thunk_FUN_01b4f09c();
    puVar6 = 
    Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
    ;
    lVar12 = *(long *)
              Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
    ;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar12 = *(long *)puVar6;
    }
    plVar13 = (long *)**(long **)(lVar12 + 0xb8);
    if (plVar13 == (long *)0x0) {
      uVar15 = 0;
    }
    else {
      uVar15 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
    }
    if (*(uint *)(lVar9 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    *(undefined8 *)(lVar9 + 0x38) = uVar15;
    thunk_FUN_01b4f09c();
    if (*(uint *)(lVar9 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)PTR_DAT_03d84188;
    thunk_FUN_01b4f09c();
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    plVar13 = (long *)FUN_0324cebc(0);
    if (plVar13 == (long *)0x0) {
      uVar15 = 0;
    }
    else {
      uVar15 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
    }
    if (*(uint *)(lVar9 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    *(undefined8 *)(lVar9 + 0x48) = uVar15;
    thunk_FUN_01b4f09c();
    if (*(uint *)(lVar9 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    *(undefined8 *)(lVar9 + 0x50) = *(undefined8 *)PTR_DAT_03d84198;
    thunk_FUN_01b4f09c();
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    plVar13 = (long *)FUN_0324d3c0(0);
    if (plVar13 == (long *)0x0) {
      uVar15 = 0;
    }
    else {
      uVar15 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
    }
    if (*(uint *)(lVar9 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    *(undefined8 *)(lVar9 + 0x58) = uVar15;
    thunk_FUN_01b4f09c();
    if (*(uint *)(lVar9 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    *(undefined8 *)(lVar9 + 0x60) = *(undefined8 *)StringLiteral_3288;
    thunk_FUN_01b4f09c();
    uVar15 = FUN_02ee6e18(lVar9,0);
    puVar3 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__;
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_038f2acc(uVar15,0);
    puVar4 = Method_System_Collections_SortedList_SortedListEnumerator_get_Current__;
    plVar13 = (long *)FUN_01b47fd0(*(undefined8 *)
                                    Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                   ,2);
    if (*(int *)(*plVar14 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_032378bc();
    local_80 = CONCAT44(local_80._4_4_,uVar7);
    local_90 = *(undefined8 *)PTR_DAT_03d84170;
    uStack_88 = 0xffffffffffffffff;
    lVar9 = FUN_030750fc(&local_90,0);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if ((lVar9 != 0) &&
       (lVar12 = thunk_FUN_01afa9e0(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar12 == 0)) {
      uVar15 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar15,0);
    }
    if ((int)plVar13[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    plVar13[4] = lVar9;
    thunk_FUN_01b4f09c(plVar13 + 4,lVar9);
    local_98 = FUN_032367d4();
    local_a8 = *(undefined8 *)PTR_DAT_03d84180;
    uStack_a0 = 0xffffffffffffffff;
    lVar9 = FUN_030750fc(&local_a8,0);
    if ((lVar9 != 0) &&
       (lVar12 = thunk_FUN_01afa9e0(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar12 == 0)) {
      uVar15 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar15,0);
    }
    if (*(uint *)(plVar13 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    plVar13[5] = lVar9;
    thunk_FUN_01b4f09c(plVar13 + 5,lVar9);
    FUN_038f2cec(*(undefined8 *)PTR_DAT_03d841a8,plVar13,0);
    iVar8 = FUN_032367d4();
    if (iVar8 == 3) {
      plVar13 = (long *)FUN_01b47fd0(*(undefined8 *)puVar4,2);
      local_90 = FUN_03236824();
      puVar5 = Method_System_Collections_SortedList_SortedListEnumerator_get_Value__;
      lVar9 = thunk_FUN_01afa70c(*(undefined8 *)
                                  Method_System_Collections_SortedList_SortedListEnumerator_get_Value__
                                 ,&local_90);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if ((lVar9 != 0) &&
         (lVar12 = thunk_FUN_01afa9e0(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar12 == 0)) {
        uVar15 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar15,0);
      }
      if ((int)plVar13[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      plVar13[4] = lVar9;
      thunk_FUN_01b4f09c(plVar13 + 4,lVar9);
      local_a8 = FUN_03236874();
      lVar9 = thunk_FUN_01afa70c(*(undefined8 *)puVar5,&local_a8);
      if ((lVar9 != 0) &&
         (lVar12 = thunk_FUN_01afa9e0(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar12 == 0)) {
        uVar15 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar15,0);
      }
      if (*(uint *)(plVar13 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      plVar13[5] = lVar9;
      thunk_FUN_01b4f09c(plVar13 + 5,lVar9);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f2cec(*(undefined8 *)PTR_DAT_03d84190,plVar13,0);
    }
    if (*(int *)(*plVar14 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar10 = FUN_03239124();
    if ((uVar10 & 1) != 0) {
      lVar9 = *plVar14;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar9 = *plVar14;
      }
      uVar15 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x178);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar3);
      }
      FUN_038f336c(uVar15,0);
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar15 = UnityEngine_UIElements_StyleCache__SetValue(0);
    if (((uint)uVar15 < 0xc) && ((1 << (ulong)((uint)uVar15 & 0x1f) & 0x887U) != 0)) {
      *(undefined1 *)(param_1 + 0x11c) = 1;
      FUN_03236030(uVar15,0);
      *(undefined1 *)(param_1 + 0x69) = 0;
      if (*(int *)(*plVar14 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      System_Linq_Expressions_Interpreter_LessThanOrEqualInstruction_LessThanOrEqualInt32__Run
                (param_1);
      FUN_0323a808(param_1);
      FUN_0323aaa8(param_1);
      puVar2 = PTR_DAT_03d84168;
      lVar9 = *(long *)PTR_DAT_03d84168;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar9 = *(long *)puVar2;
      }
      FUN_0328bf50(&local_90,&local_78,*(undefined4 *)(*(long *)(lVar9 + 0xb8) + 4),0);
      plVar13 = (long *)FUN_01b47fd0(*(undefined8 *)puVar4,2);
      if (DAT_03fed2d7 == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
        DAT_03fed2d7 = '\x01';
      }
      lVar9 = *plVar14;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar9 = *plVar14;
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar7 = FUN_032075fc(lVar9,0);
      local_90 = CONCAT44(local_90._4_4_,uVar7);
      lVar9 = thunk_FUN_01afa70c(*(undefined8 *)
                                  Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__
                                 ,&local_90);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if ((lVar9 != 0) &&
         (lVar12 = thunk_FUN_01afa9e0(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar12 == 0)) {
        uVar15 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar15,0);
      }
      if ((int)plVar13[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      plVar13[4] = lVar9;
      thunk_FUN_01b4f09c(plVar13 + 4,lVar9);
      if (DAT_03fed2d7 == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
        DAT_03fed2d7 = '\x01';
      }
      lVar9 = *plVar14;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar9 = *plVar14;
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar15 = FUN_032177bc(lVar9,0);
      puVar4 = PTR_DAT_03d840b0;
      lVar9 = *(long *)PTR_DAT_03d840b0;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar9 = *(long *)puVar4;
      }
      lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
      uVar17 = *(undefined8 *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_41__;
      uVar16 = *(undefined8 *)PTR_DAT_03d841b8;
      if (lVar12 == 0) {
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar9 = *(long *)puVar4;
        }
        uVar18 = **(undefined8 **)(lVar9 + 0xb8);
        lVar12 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d84158);
        FUN_028b8b24(lVar12,uVar18,*(undefined8 *)PTR_DAT_03d84178,0);
        plVar14 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
        *plVar14 = lVar12;
        thunk_FUN_01b4f09c(plVar14,lVar12);
        plVar14 = (long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__;
      }
      uVar15 = FUN_01ebcdfc(uVar15,lVar12,*(undefined8 *)PTR_DAT_03d84150);
      uVar15 = FUN_01ec4698(uVar15,*(undefined8 *)StringLiteral_2296);
      lVar9 = FUN_02ee7544(uVar17,uVar15,0);
      if ((lVar9 != 0) &&
         (lVar12 = thunk_FUN_01afa9e0(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar12 == 0)) {
        uVar15 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar15,0);
      }
      if (*(uint *)(plVar13 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      plVar13[5] = lVar9;
      thunk_FUN_01b4f09c(plVar13 + 5,lVar9);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f2cec(uVar16,plVar13,0);
      if (*(char *)(param_1 + 0x10f) != '\0') {
        if (*(int *)(*plVar14 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (DAT_03fed2d7 == '\0') {
          thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
          DAT_03fed2d7 = '\x01';
        }
        lVar9 = *plVar14;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar9 = *plVar14;
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_03216fc0(lVar9,0);
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar10 = FUN_038f3c2c(0);
      puVar4 = PTR_DAT_03d84148;
      if ((uVar10 & 1) != 0) {
        uVar15 = FUN_01e8a9f8(param_1,*(undefined8 *)PTR_DAT_03d84148);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar10 = FUN_03922f24(uVar15,0,0);
        if ((uVar10 & 1) != 0) {
          lVar9 = FUN_0391c2b8(param_1,0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          FUN_01ed7044(lVar9,*(undefined8 *)PTR_DAT_03d84160);
        }
        lVar9 = FUN_01e8a9f8(param_1,*(undefined8 *)puVar4);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        *(undefined4 *)(lVar9 + 0x28) = *(undefined4 *)(param_1 + 100);
        uVar10 = FUN_0391b750(lVar9,0);
        if ((uVar10 & 1) == 0) {
          FUN_0391b78c(lVar9,1,0);
        }
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_03257fc0(1,0);
      }
      if (*(int *)(*plVar14 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03ff47c0 == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
        DAT_03ff47c0 = '\x01';
      }
      lVar9 = *plVar14;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar9 = *plVar14;
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x20);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      FUN_03236264(param_1,*(undefined4 *)(lVar9 + 0x18));
      uVar7 = *(undefined4 *)(param_1 + 0x30);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_03263438(uVar7,0);
      if (*(char *)(param_1 + 0x100) != '\0') {
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar10 = FUN_03251b34(1,0);
        if ((uVar10 & 1) == 0) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_038f2acc(*(undefined8 *)PTR_DAT_03d841b0,0);
        }
      }
      if (*(char *)(param_1 + 0x101) != '\0') {
        if (*(int *)(*plVar14 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_0323aba8();
        lVar9 = *(long *)puVar2;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar9 = *(long *)puVar2;
        }
        FUN_0328bf50(&local_90,&local_78,**(undefined4 **)(lVar9 + 0xb8),0);
      }
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar10 = FUN_032572a4(0);
      if ((uVar10 & 1) == 0) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_038f336c(*(undefined8 *)PTR_DAT_03d841d0,0);
        *(undefined1 *)(param_1 + 0x106) = 0;
      }
      else {
        cVar1 = *(char *)(param_1 + 0x106);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_03257464(cVar1 != '\0',0);
      }
      if (*(char *)(param_1 + 0x38) != '\0') {
        FUN_03b37388(*(undefined4 *)(param_1 + 0x40),0);
      }
      lVar9 = *plVar14;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar9 = *plVar14;
      }
      *(undefined1 *)(*(long *)(lVar9 + 0xb8) + 0x180) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x11c) = 0;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f336c(*(undefined8 *)PTR_DAT_03d841a0,0);
      FUN_0328b930(&local_90,&local_78,3,0);
    }
  }
  else {
    FUN_0391b78c(param_1,0,0);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03923b4c(param_1,0);
    FUN_0328b930(&local_90,&local_78,3,0);
  }
  FUN_0328bfa0(&local_78,0);
  return;
}


