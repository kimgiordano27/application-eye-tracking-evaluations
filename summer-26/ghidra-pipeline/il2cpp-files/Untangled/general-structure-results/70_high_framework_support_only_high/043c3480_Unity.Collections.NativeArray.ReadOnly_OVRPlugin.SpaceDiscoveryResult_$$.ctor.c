/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 043c3480
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>___ctor(void)

{
  char in_NG;
  char in_OV;
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  int unaff_w24;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long in_stack_00000008;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  while( true ) {
    if (in_NG != in_OV) {
      return 0xffffffff;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    in_stack_00000060 = unaff_x21[4];
    in_stack_00000048 = unaff_x21[1];
    in_stack_00000040 = *unaff_x21;
    in_stack_00000058 = unaff_x21[3];
    in_stack_00000050 = unaff_x21[2];
    uVar1 = thunk_FUN_02ef1438(**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0),
                               &stack0x00000040);
    lVar3 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02eea768(lVar3);
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    lVar4 = unaff_x22 + (int)unaff_w19 * unaff_x27;
    uVar8 = *(undefined8 *)(lVar4 + 0x28);
    uVar7 = *(undefined8 *)(lVar4 + 0x20);
    uVar6 = *(undefined8 *)(lVar4 + 0x38);
    uVar5 = *(undefined8 *)(lVar4 + 0x30);
    unaff_x26[4] = *(undefined8 *)(lVar4 + 0x40);
    unaff_x26[1] = uVar8;
    *unaff_x26 = uVar7;
    unaff_x26[3] = uVar6;
    unaff_x26[2] = uVar5;
    in_stack_00000008 = lVar3;
    uVar2 = thunk_FUN_0565dc68(&stack0x00000008,uVar1,0);
    if ((uVar2 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    in_OV = SBORROW4(unaff_w19,unaff_w24);
    in_NG = (int)(unaff_w19 - unaff_w24) < 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


