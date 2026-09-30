/*
FUNCTION_NAME: Unity.Services.Authentication.WebRequestException$$get_ResponseCode
ENTRY_POINT: 05ef8ba0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Authentication_WebRequestException__get_ResponseCode(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x21;
  long unaff_x25;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  FUN_05e942c4();
  LeanTween__value(unaff_x21 + 0x10,param_1);
  if (unaff_x19 != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar2 != 0) {
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar2 + 0x18)) {
        lVar2 = lVar2 + (long)(int)uVar1 * 0x18;
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar2 + 0x30) = param_1;
        *(undefined8 *)(lVar2 + 0x28) = in_stack_00000010;
        *(undefined8 *)(lVar2 + 0x20) = in_stack_00000008;
        LeanTween__value(lVar2 + 0x20,0);
      }
      else {
        *(undefined8 *)(unaff_x25 + 0x1b8) = in_stack_00000010;
        *(undefined8 *)(unaff_x25 + 0x1b0) = in_stack_00000008;
        Unity_Collections_NativeArray<AttachmentDescriptor>___ctor();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


