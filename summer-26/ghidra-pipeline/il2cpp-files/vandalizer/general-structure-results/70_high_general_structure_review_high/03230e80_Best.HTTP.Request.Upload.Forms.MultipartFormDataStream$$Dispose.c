/*
FUNCTION_NAME: Best.HTTP.Request.Upload.Forms.MultipartFormDataStream$$Dispose
ENTRY_POINT: 03230e80
PROGRAM: vandalizer-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


undefined8 Best_HTTP_Request_Upload_Forms_MultipartFormDataStream__Dispose(void)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long lVar2;
  long unaff_x25;
  long unaff_x26;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  
  FUN_03236eb8();
  if ((((unaff_x26 == in_stack_00000008) && (unaff_x24 == in_stack_00000010)) &&
      (unaff_x25 == in_stack_00000018)) &&
     ((unaff_x25 == unaff_x24 || (unaff_x23 == in_stack_00000020)))) {
    lVar2 = *(long *)(unaff_x21 + 0x78);
    if (lVar2 == 0) {
      *(undefined8 *)(unaff_x21 + 0x78) = 8;
      uVar1 = thunk_FUN_0329bfb0(0x40,0);
      *(undefined8 *)(unaff_x21 + 0x70) = uVar1;
    }
    else if (*(long *)(unaff_x21 + 0x68) - *(long *)(unaff_x21 + 0x40) == lVar2) {
      uVar1 = thunk_FUN_0329bfb0(lVar2 << 4,0);
      thunk_FUN_032a19d4(FUN_0323753c);
      thunk_FUN_0329bfb8(*(undefined8 *)(unaff_x21 + 0x70));
      thunk_FUN_0329bf60(uVar1,*(long *)(unaff_x21 + 0x78) << 3);
      *(undefined8 *)(unaff_x21 + 0x70) = uVar1;
      *(long *)(unaff_x21 + 0x78) = lVar2 << 1;
    }
    lVar2 = *(long *)(unaff_x21 + 0x68) - *(long *)(unaff_x21 + 0x40);
    FUN_0323755c();
    FUN_032370cc();
    *(undefined8 *)(*(long *)(unaff_x21 + 0x70) + lVar2 * 8) = unaff_x20;
    thunk_FUN_0329bf60(*(long *)(unaff_x21 + 0x70) + lVar2 * 8);
  }
  else {
    unaff_x20 = *(undefined8 *)(*(long *)(unaff_x21 + 0x70) + *(long *)(unaff_x23 + 0x18) * 8);
  }
  FUN_0321c394();
  return unaff_x20;
}


