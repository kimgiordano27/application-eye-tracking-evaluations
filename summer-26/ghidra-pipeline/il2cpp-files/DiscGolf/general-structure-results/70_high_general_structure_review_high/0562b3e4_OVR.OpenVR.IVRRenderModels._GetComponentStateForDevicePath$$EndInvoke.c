/*
FUNCTION_NAME: OVR.OpenVR.IVRRenderModels._GetComponentStateForDevicePath$$EndInvoke
ENTRY_POINT: 0562b3e4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 OVR_OpenVR_IVRRenderModels__GetComponentStateForDevicePath__EndInvoke(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *unaff_x19;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar11;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  (**(code **)(*unaff_x19 + 0x198))((long)&stack0x00000048 + 4);
  uVar4 = in_stack_00000058;
  uVar3 = uStack0000000000000050;
  puVar2 = System_Func<Touch,_Touch,_TwistGesture>_TypeInfo;
  lVar7 = *(long *)System_Func<Touch,_Touch,_TwistGesture>_TypeInfo;
  uVar1 = CONCAT44(in_stack_00000058,uStack0000000000000054);
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar7 = *(long *)puVar2;
  }
  puVar10 = *(undefined8 **)(lVar7 + 0xb8);
  if (puVar10[1] == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar10 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar11 = *puVar10;
    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)System_Func<string,_uint,_uint>_TypeInfo);
    FUN_03b7820c(uVar8,uVar11,*(undefined8 *)System_Func<Touch,_Touch,_PinchGesture>_TypeInfo,0);
    puVar10 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *puVar10 = uVar8;
    LeanTween__value(puVar10,uVar8);
  }
  thunk_FUN_02dd3144(*(undefined8 *)System_Func<string,_Type,_Type>_TypeInfo);
  FUN_03b6fe3c();
  lVar7 = System_Collections_ObjectModel_ReadOnlyCollection<NativeArray<ConvertMeshJobData>>__get_Count
                    ();
  uVar5 = FUN_044266a8();
  uVar6 = FUN_044266c4();
  if (lVar7 != 0) {
    in_stack_00000018 = unaff_x28[1];
    in_stack_00000010 = *unaff_x28;
    in_stack_00000020 = *(undefined4 *)(unaff_x28 + 2);
    in_stack_00000038 = unaff_x22[1];
    in_stack_00000030 = *unaff_x22;
    in_stack_00000040 = *(undefined4 *)(unaff_x22 + 2);
    lVar7 = FUN_0562b5fc(lVar7,CONCAT44(uVar3,in_stack_00000048._4_4_),uVar1,uVar5,uVar6,
                         &stack0x00000030,&stack0x00000010);
    if (lVar7 != 0) {
      uVar9 = FUN_055f0190(lVar7,0);
      if ((uVar9 & 1) == 0) {
        FUN_04427388();
        puVar2 = PTR_DAT_06a0ffb8;
        lVar7 = *(long *)PTR_DAT_06a0ffb8;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar7 = *(long *)puVar2;
        }
        unaff_x21 = **(undefined8 **)(lVar7 + 0xb8);
      }
      else {
        uStack0000000000000050 = uVar3;
        in_stack_00000058 = uVar4;
        FUN_04427000();
      }
      return unaff_x21;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


