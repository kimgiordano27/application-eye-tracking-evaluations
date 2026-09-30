/*
FUNCTION_NAME: Best.HTTP.Request.Upload.UploadStreamBase$$Dispose
ENTRY_POINT: 031c5f6c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_6
*/


undefined8 Best_HTTP_Request_Upload_UploadStreamBase__Dispose(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long lVar3;
  long unaff_x24;
  long unaff_x25;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  
  if ((((unaff_x25 == in_stack_00000008) && (unaff_x23 == in_stack_00000010)) &&
      (unaff_x24 == in_stack_00000018)) &&
     ((unaff_x24 == unaff_x23 || (unaff_x22 == in_stack_00000020)))) {
    lVar3 = *(long *)(unaff_x19 + 0x78);
    if (lVar3 == 0) {
      *(undefined8 *)(unaff_x19 + 0x78) = 8;
      uVar1 = thunk_FUN_0322f0ac(0x40,0);
      *(undefined8 *)(unaff_x19 + 0x70) = uVar1;
    }
    else if (*(long *)(unaff_x19 + 0x68) - *(long *)(unaff_x19 + 0x40) == lVar3) {
      uVar1 = thunk_FUN_0322f0ac(lVar3 << 4,0);
      thunk_FUN_03234608(FUN_031ccc44);
      thunk_FUN_0322f0b4(*(undefined8 *)(unaff_x19 + 0x70));
      *(undefined8 *)(unaff_x19 + 0x70) = uVar1;
      *(long *)(unaff_x19 + 0x78) = lVar3 << 1;
    }
    lVar3 = *(long *)(unaff_x19 + 0x68);
    lVar2 = *(long *)(unaff_x19 + 0x40);
    FUN_031ccc64();
    FUN_031cc310();
    *(undefined8 *)(*(long *)(unaff_x19 + 0x70) + (lVar3 - lVar2) * 8) = unaff_x20;
  }
  else {
    unaff_x20 = *(undefined8 *)(*(long *)(unaff_x19 + 0x70) + *(long *)(unaff_x22 + 0x18) * 8);
  }
  FUN_031b0dd0(unaff_x19 + 0x80);
  return unaff_x20;
}


