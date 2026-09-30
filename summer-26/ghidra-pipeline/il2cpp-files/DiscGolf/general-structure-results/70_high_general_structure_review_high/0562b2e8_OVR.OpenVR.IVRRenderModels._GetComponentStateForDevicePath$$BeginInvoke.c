/*
FUNCTION_NAME: OVR.OpenVR.IVRRenderModels._GetComponentStateForDevicePath$$BeginInvoke
ENTRY_POINT: 0562b2e8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


long OVR_OpenVR_IVRRenderModels__GetComponentStateForDevicePath__BeginInvoke
               (long *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  
  puVar2 = System_Func<string,_string,_string>_TypeInfo;
  if ((DAT_06dbbabf & 1) == 0) {
    FUN_02d965b8(System_Func<string,_Type,_Type>_TypeInfo);
    FUN_02d965b8(System_Func<string,_uint,_uint>_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0ffb8);
    FUN_02d965b8(System_Func<string,_ulong,_ulong>_TypeInfo);
    FUN_02d965b8(System_Func<string,_WritingContext,_bool>_TypeInfo);
    FUN_02d965b8(System_Func<string,_string,_string>_TypeInfo);
    FUN_02d965b8(System_Func<TextShadow,_TextShadow,_bool>_TypeInfo);
    FUN_02d965b8(System_Func<Touch,_Touch,_PinchGesture>_TypeInfo);
    FUN_02d965b8(System_Func<Touch,_Touch,_TwistGesture>_TypeInfo);
    FUN_02d965b8(System_Func<Touch,_Touch,_TwoFingerDragGesture>_TypeInfo);
    FUN_02d965b8(System_Func<Touch,_Touch,_PinchGesture>_TypeInfo);
    FUN_02d965b8(System_Func<Touch,_Touch,_TwistGesture>_TypeInfo);
    DAT_06dbbabf = 1;
  }
  lVar7 = System_Collections_ObjectModel_ReadOnlyCollection<KeyValuePair<TrackableId,_object>>__System_Collections_IList_set_Item
                    (param_1,param_2,param_3,*(undefined8 *)puVar2);
  if (lVar7 != 0) {
    uVar8 = FUN_055f0190(lVar7,0);
    if ((uVar8 & 1) == 0) {
      return lVar7;
    }
    (**(code **)(*param_1 + 0x198))
              ((long)&stack0x00000048 + 4,param_1,lVar7,*(undefined8 *)(*param_1 + 0x1a0));
    uVar4 = uStack0000000000000058;
    uVar3 = uStack0000000000000050;
    puVar2 = System_Func<Touch,_Touch,_TwistGesture>_TypeInfo;
    lVar9 = *(long *)System_Func<Touch,_Touch,_TwistGesture>_TypeInfo;
    uVar1 = CONCAT44(uStack0000000000000058,uStack0000000000000054);
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar9 = *(long *)puVar2;
    }
    puVar11 = *(undefined8 **)(lVar9 + 0xb8);
    lVar12 = puVar11[1];
    if (lVar12 == 0) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        puVar11 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar13 = *puVar11;
      lVar12 = thunk_FUN_02dd3144(*(undefined8 *)System_Func<string,_uint,_uint>_TypeInfo);
      FUN_03b7820c(lVar12,uVar13,*(undefined8 *)System_Func<Touch,_Touch,_PinchGesture>_TypeInfo,0);
      plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar10 = lVar12;
      LeanTween__value(plVar10,lVar12);
    }
    uVar13 = thunk_FUN_02dd3144(*(undefined8 *)System_Func<string,_Type,_Type>_TypeInfo);
    FUN_03b6fe3c(uVar13,param_1,
                 *(undefined8 *)System_Func<Touch,_Touch,_TwoFingerDragGesture>_TypeInfo,0);
    lVar9 = System_Collections_ObjectModel_ReadOnlyCollection<NativeArray<ConvertMeshJobData>>__get_Count
                      (param_1,uStack000000000000005c,lVar12,uVar13,
                       *(undefined8 *)System_Func<string,_WritingContext,_bool>_TypeInfo);
    uVar5 = FUN_044266a8(param_1,*(undefined8 *)System_Func<Touch,_Touch,_TwistGesture>_TypeInfo);
    uVar6 = FUN_044266c4(param_1,*(undefined8 *)System_Func<Touch,_Touch,_PinchGesture>_TypeInfo);
    if (lVar9 != 0) {
      in_stack_00000018 = param_5[1];
      in_stack_00000010 = *param_5;
      in_stack_00000020 = *(undefined4 *)(param_5 + 2);
      in_stack_00000038 = param_4[1];
      in_stack_00000030 = *param_4;
      in_stack_00000040 = *(undefined4 *)(param_4 + 2);
      lVar12 = FUN_0562b5fc(lVar9,CONCAT44(uVar3,in_stack_00000048._4_4_),uVar1,uVar5,uVar6,
                            &stack0x00000030,&stack0x00000010);
      if (lVar12 != 0) {
        uVar8 = FUN_055f0190(lVar12,0);
        if ((uVar8 & 1) != 0) {
          uStack0000000000000050 = uVar3;
          uStack0000000000000058 = uVar4;
          FUN_04427000(param_1,(long)&stack0x00000048 + 4,lVar7,lVar9,lVar12,
                       *(undefined8 *)System_Func<string,_ulong,_ulong>_TypeInfo);
          return lVar7;
        }
        FUN_04427388(param_1,lVar7,*(undefined8 *)System_Func<TextShadow,_TextShadow,_bool>_TypeInfo
                    );
        puVar2 = PTR_DAT_06a0ffb8;
        lVar7 = *(long *)PTR_DAT_06a0ffb8;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar7 = *(long *)puVar2;
        }
        return **(long **)(lVar7 + 0xb8);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


