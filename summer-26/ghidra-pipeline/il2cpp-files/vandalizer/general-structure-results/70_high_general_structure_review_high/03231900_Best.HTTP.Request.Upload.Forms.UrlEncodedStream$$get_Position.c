/*
FUNCTION_NAME: Best.HTTP.Request.Upload.Forms.UrlEncodedStream$$get_Position
ENTRY_POINT: 03231900
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


undefined8 Best_HTTP_Request_Upload_Forms_UrlEncodedStream__get_Position(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar3;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  
  FUN_03236c4c();
  lVar3 = *(long *)(unaff_x21 + 0x48);
  lVar1 = *(long *)(unaff_x21 + 0x50);
  FUN_03236eb8();
  if ((((in_stack_00000008 == lVar3) && (in_stack_00000010 == lVar1)) &&
      (in_stack_00000018 == lVar1)) &&
     ((in_stack_00000018 == in_stack_00000010 || (in_stack_00000020 == 0)))) {
    lVar3 = *(long *)(unaff_x21 + 0x78);
    if (lVar3 == 0) {
      *(undefined8 *)(unaff_x21 + 0x78) = 8;
      uVar2 = thunk_FUN_0329bfb0(0x40,0);
      *(undefined8 *)(unaff_x21 + 0x70) = uVar2;
    }
    else if (*(long *)(unaff_x21 + 0x68) - *(long *)(unaff_x21 + 0x40) == lVar3) {
      uVar2 = thunk_FUN_0329bfb0(lVar3 << 4,0);
      thunk_FUN_032a19d4(FUN_03237b78);
      thunk_FUN_0329bfb8(*(undefined8 *)(unaff_x21 + 0x70));
      thunk_FUN_0329bf60(uVar2,*(long *)(unaff_x21 + 0x78) << 3);
      *(undefined8 *)(unaff_x21 + 0x70) = uVar2;
      *(long *)(unaff_x21 + 0x78) = lVar3 << 1;
    }
    lVar3 = *(long *)(unaff_x21 + 0x68) - *(long *)(unaff_x21 + 0x40);
    FUN_03237b98();
    FUN_032370cc();
    *(undefined8 *)(*(long *)(unaff_x21 + 0x70) + lVar3 * 8) = unaff_x20;
    thunk_FUN_0329bf60(*(long *)(unaff_x21 + 0x70) + lVar3 * 8);
  }
  else {
    unaff_x20 = *(undefined8 *)
                 (*(long *)(unaff_x21 + 0x70) + *(long *)(in_stack_00000020 + 0x18) * 8);
  }
  FUN_0321c394();
  return unaff_x20;
}


