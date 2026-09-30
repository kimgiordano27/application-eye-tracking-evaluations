/*
FUNCTION_NAME: OVR.OpenVR.IVRRenderModels._GetComponentState$$Invoke
ENTRY_POINT: 0562b4cc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 OVR_OpenVR_IVRRenderModels__GetComponentState__Invoke(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  uint unaff_w27;
  undefined8 *unaff_x28;
  uint unaff_w29;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  lVar4 = System_Collections_ObjectModel_ReadOnlyCollection<NativeArray<ConvertMeshJobData>>__get_Count
                    ();
  uVar2 = FUN_044266a8();
  uVar3 = FUN_044266c4();
  if (lVar4 != 0) {
    in_stack_00000018 = unaff_x28[1];
    in_stack_00000010 = *unaff_x28;
    in_stack_00000020 = *(undefined4 *)(unaff_x28 + 2);
    in_stack_00000038 = unaff_x22[1];
    in_stack_00000030 = *unaff_x22;
    in_stack_00000040 = *(undefined4 *)(unaff_x22 + 2);
    lVar4 = FUN_0562b5fc(lVar4,in_stack_00000008 | (ulong)unaff_w27 << 0x20,
                         unaff_x23 | (ulong)unaff_w29 << 0x20,uVar2,uVar3,&stack0x00000030,
                         &stack0x00000010);
    if (lVar4 != 0) {
      uVar5 = FUN_055f0190(lVar4,0);
      if ((uVar5 & 1) == 0) {
        FUN_04427388();
        puVar1 = PTR_DAT_06a0ffb8;
        lVar4 = *(long *)PTR_DAT_06a0ffb8;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar4 = *(long *)puVar1;
        }
        unaff_x21 = **(undefined8 **)(lVar4 + 0xb8);
      }
      else {
        uStack000000000000004c = (undefined4)in_stack_00000008;
        uStack0000000000000054 = (undefined4)unaff_x23;
        FUN_04427000();
      }
      return unaff_x21;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


