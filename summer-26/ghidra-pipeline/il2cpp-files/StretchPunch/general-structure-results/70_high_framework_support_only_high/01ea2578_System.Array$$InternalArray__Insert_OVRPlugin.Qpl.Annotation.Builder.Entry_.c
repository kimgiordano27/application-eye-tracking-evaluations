/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 01ea2578
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__Insert<OVRPlugin_Qpl_Annotation_Builder_Entry>
               (long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 *puVar8;
  long lVar9;
  long in_x9;
  long in_x10;
  long lVar10;
  uint in_w11;
  long unaff_x19;
  long lVar11;
  undefined8 uVar12;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  if ((uint)in_x10 < in_w11) {
    *(uint *)(param_2 + 0x18) = (uint)in_x10 + 1;
    puVar8 = (undefined8 *)(param_1 + in_x10 * 8 + 0x20);
    *puVar8 = param_3;
    thunk_FUN_01e10808(puVar8);
  }
  else {
    FUN_03198f70(param_2,param_3,*(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70));
  }
  lVar11 = *(long *)(unaff_x19 + 0x48);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  uVar6 = thunk_FUN_01de27b8(*unaff_x25);
  FUN_031f3d3c(uVar6,*unaff_x26);
  in_stack_00000018 = uVar6;
  thunk_FUN_01e10808(&stack0x00000018,uVar6);
  uVar6 = thunk_FUN_01de27b8(*unaff_x25);
  FUN_031f3d3c(uVar6,*unaff_x26);
  in_stack_00000020 = uVar6;
  thunk_FUN_01e10808(&stack0x00000020,uVar6);
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_111);
  FUN_031c2bd4(uVar6,*(undefined8 *)StringLiteral_109);
  in_stack_00000028 = uVar6;
  thunk_FUN_01e10808(&stack0x00000028,uVar6);
  puVar4 = StringLiteral_108;
  if (lVar11 != 0) {
    in_stack_00000038 = in_stack_00000020;
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000040 = in_stack_00000028;
    lVar9 = *(long *)(lVar11 + 0x10);
    lVar10 = *(long *)StringLiteral_108;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
        lVar9 = lVar9 + (long)(int)uVar1 * 0x18;
        *(undefined8 *)(lVar9 + 0x30) = in_stack_00000028;
        *(undefined8 *)(lVar9 + 0x28) = in_stack_00000020;
        *(undefined8 *)(lVar9 + 0x20) = in_stack_00000018;
        thunk_FUN_01e10808(lVar9 + 0x20,0);
      }
      else {
        in_stack_00000058 = in_stack_00000020;
        in_stack_00000050 = in_stack_00000018;
        in_stack_00000060 = in_stack_00000028;
        FUN_023701b0(lVar11,&stack0x00000050,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      puVar5 = StringLiteral_113;
      puVar3 = 
      Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
      ;
      bVar7 = true;
      while( true ) {
        uVar12 = *(undefined8 *)(unaff_x19 + 0x20);
        uVar6 = FUN_03d71c60();
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(*(long *)puVar3);
        }
        uVar6 = FUN_02133b30(uVar12,uVar6,*(undefined8 *)puVar5);
        lVar11 = *(long *)(unaff_x19 + 0x40);
        if (lVar11 == 0) break;
        lVar9 = *(long *)(lVar11 + 0x10);
        lVar10 = *(long *)StringLiteral_107;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar9 == 0) break;
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          thunk_FUN_01e10808();
        }
        else {
          FUN_03198f70(lVar11,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        lVar11 = *(long *)(unaff_x19 + 0x48);
        in_stack_00000018 = 0;
        in_stack_00000020 = 0;
        in_stack_00000028 = 0;
        uVar6 = thunk_FUN_01de27b8(*unaff_x25);
        FUN_031f3d3c(uVar6,*unaff_x26);
        in_stack_00000018 = uVar6;
        thunk_FUN_01e10808(&stack0x00000018,uVar6);
        uVar6 = thunk_FUN_01de27b8(*unaff_x25);
        FUN_031f3d3c(uVar6,*unaff_x26);
        in_stack_00000020 = uVar6;
        thunk_FUN_01e10808(&stack0x00000020,uVar6);
        uVar6 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_111);
        FUN_031c2bd4(uVar6,*(undefined8 *)StringLiteral_109);
        in_stack_00000028 = uVar6;
        thunk_FUN_01e10808(&stack0x00000028,uVar6);
        if (lVar11 == 0) break;
        lVar10 = *(long *)puVar4;
        in_stack_00000038 = in_stack_00000020;
        in_stack_00000030 = in_stack_00000018;
        in_stack_00000040 = in_stack_00000028;
        lVar9 = *(long *)(lVar11 + 0x10);
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar9 == 0) break;
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          lVar9 = lVar9 + (long)(int)uVar1 * 0x18;
          *(undefined8 *)(lVar9 + 0x30) = in_stack_00000028;
          *(undefined8 *)(lVar9 + 0x28) = in_stack_00000020;
          *(undefined8 *)(lVar9 + 0x20) = in_stack_00000018;
          thunk_FUN_01e10808(lVar9 + 0x20,0);
        }
        else {
          in_stack_00000058 = in_stack_00000020;
          in_stack_00000050 = in_stack_00000018;
          in_stack_00000060 = in_stack_00000028;
          FUN_023701b0(lVar11,&stack0x00000050,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        bVar2 = !bVar7;
        bVar7 = false;
        if (bVar2) {
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


