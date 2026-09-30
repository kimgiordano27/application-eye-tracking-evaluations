/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$WriteArrayElement<OVRLocatable.TrackingSpacePose>
ENTRY_POINT: 037b4658
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRLocatable_TrackingSpacePose>
               (void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  int unaff_w23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x29;
  undefined1 auVar6 [16];
  
  if (unaff_w23 < 0xc) {
    if (unaff_w23 == 9) {
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar1 = FUN_0545d804();
      *(undefined8 *)(unaff_x29 + -0x18) = 0;
      *(undefined8 *)(unaff_x29 + -0x10) = 0;
      FUN_05d7c700(unaff_x29 + -0x18,uVar1,0);
    }
    else if (unaff_w23 == 10) {
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar1 = FUN_0545dc88();
      *(undefined8 *)(unaff_x29 + -0x18) = 0;
      *(undefined8 *)(unaff_x29 + -0x10) = 0;
      FUN_05d7c710(unaff_x29 + -0x18,uVar1,0);
    }
    else {
      if (unaff_w23 != 0xb) {
LAB_037b4978:
        uVar2 = **(undefined8 **)(unaff_x20 + 0x38);
        FUN_0297e1b4(*(undefined8 *)(unaff_x25 + 0xe0));
        plVar3 = (long *)FUN_054f73b4(uVar2,0);
        FUN_02979e58();
        (**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
        thunk_FUN_02dfd288(PTR_DAT_06a0e918);
        uVar2 = FUN_0536e0dc();
        thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
        uVar4 = thunk_FUN_02dd3144();
        uVar5 = thunk_FUN_02dfd288(PTR_DAT_06a0e068);
        auVar6 = FUN_0544bfcc(uVar4,uVar2,uVar5,0);
        if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar4);
        }
        goto 
        Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElementWithStride<MeshGenerator_TessellationJobParameters>
        ;
      }
      if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar2 = FUN_0545e1e4();
      *(undefined8 *)(unaff_x29 + -0x18) = 0;
      *(undefined8 *)(unaff_x29 + -0x10) = 0;
      FUN_05d7c720(unaff_x29 + -0x18,uVar2,0);
    }
  }
  else if (unaff_w23 == 0xc) {
    if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar2 = FUN_0545e6d0();
    *(undefined8 *)(unaff_x29 + -0x18) = 0;
    *(undefined8 *)(unaff_x29 + -0x10) = 0;
    Unity_Netcode_NetworkUpdateLoop_NetworkPostScriptLateUpdate_<>c__<CreateLoopSystem>b__0_0
              (unaff_x29 + -0x18,uVar2,0);
  }
  else if (unaff_w23 == 0xd) {
    if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_0545ec2c();
    *(undefined8 *)(unaff_x29 + -0x18) = 0;
    *(undefined8 *)(unaff_x29 + -0x10) = 0;
    FUN_05d7c748(unaff_x29 + -0x18,0);
  }
  else {
    if (unaff_w23 != 0xe) goto LAB_037b4978;
    if (*(int *)(*(long *)PTR_DAT_069ff7e0 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_0545ef70();
    *(undefined8 *)(unaff_x29 + -0x18) = 0;
    *(undefined8 *)(unaff_x29 + -0x10) = 0;
    FUN_05d7c75c(unaff_x29 + -0x18,0);
  }
  auVar6 = *(undefined1 (*) [16])(unaff_x29 + -0x18);
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }

  Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElementWithStride<MeshGenerator_TessellationJobParameters>
  :
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar6._0_8_,auVar6._8_8_);
}


