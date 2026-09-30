/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 01ea24e8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__Insert<OVRPlugin_Qpl_Annotation>(void)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  bool bVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  FUN_01d7d918(StringLiteral_110);
  FUN_01d7d918(StringLiteral_111);
  FUN_01d7d918(StringLiteral_112);
  FUN_01d7d918(StringLiteral_113);
  FUN_01d7d918(
              Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
              );
  *(undefined1 *)(unaff_x20 + 0xe30) = 1;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  lVar8 = *(long *)(unaff_x19 + 0x40);
  if (lVar8 != 0) {
    uVar9 = *(undefined8 *)(unaff_x19 + 0x20);
    lVar11 = *(long *)(lVar8 + 0x10);
    lVar13 = *(long *)StringLiteral_107;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    puVar6 = StringLiteral_112;
    puVar5 = StringLiteral_110;
    if (lVar11 != 0) {
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        *puVar12 = uVar9;
        thunk_FUN_01e10808(puVar12);
      }
      else {
        FUN_03198f70(lVar8,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
        ;
      }
      lVar8 = *(long *)(unaff_x19 + 0x48);
      in_stack_00000020 = 0;
      in_stack_00000028 = 0;
      uVar9 = thunk_FUN_01de27b8(*(undefined8 *)puVar6);
      FUN_031f3d3c(uVar9,*(undefined8 *)puVar5);
      in_stack_00000018 = uVar9;
      thunk_FUN_01e10808(&stack0x00000018,uVar9);
      uVar9 = thunk_FUN_01de27b8(*(undefined8 *)puVar6);
      FUN_031f3d3c(uVar9,*(undefined8 *)puVar5);
      in_stack_00000020 = uVar9;
      thunk_FUN_01e10808(&stack0x00000020,uVar9);
      uVar9 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_111);
      FUN_031c2bd4(uVar9,*(undefined8 *)StringLiteral_109);
      in_stack_00000028 = uVar9;
      thunk_FUN_01e10808(&stack0x00000028,uVar9);
      puVar4 = StringLiteral_108;
      if (lVar8 != 0) {
        in_stack_00000038 = in_stack_00000020;
        in_stack_00000030 = in_stack_00000018;
        in_stack_00000040 = in_stack_00000028;
        lVar11 = *(long *)(lVar8 + 0x10);
        lVar13 = *(long *)StringLiteral_108;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar11 != 0) {
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            lVar11 = lVar11 + (long)(int)uVar1 * 0x18;
            *(undefined8 *)(lVar11 + 0x30) = in_stack_00000028;
            *(undefined8 *)(lVar11 + 0x28) = in_stack_00000020;
            *(undefined8 *)(lVar11 + 0x20) = in_stack_00000018;
            thunk_FUN_01e10808(lVar11 + 0x20,0);
          }
          else {
            in_stack_00000058 = in_stack_00000020;
            in_stack_00000050 = in_stack_00000018;
            in_stack_00000060 = in_stack_00000028;
            FUN_023701b0(lVar8,&stack0x00000050,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          puVar7 = StringLiteral_113;
          puVar3 = 
          Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
          ;
          bVar10 = true;
          while( true ) {
            uVar14 = *(undefined8 *)(unaff_x19 + 0x20);
            uVar9 = FUN_03d71c60();
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01dc4f30(*(long *)puVar3);
            }
            uVar9 = FUN_02133b30(uVar14,uVar9,*(undefined8 *)puVar7);
            lVar8 = *(long *)(unaff_x19 + 0x40);
            if (lVar8 == 0) break;
            lVar11 = *(long *)(lVar8 + 0x10);
            lVar13 = *(long *)StringLiteral_107;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar11 == 0) break;
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
              thunk_FUN_01e10808();
            }
            else {
              FUN_03198f70(lVar8,uVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            lVar8 = *(long *)(unaff_x19 + 0x48);
            in_stack_00000018 = 0;
            in_stack_00000020 = 0;
            in_stack_00000028 = 0;
            uVar9 = thunk_FUN_01de27b8(*(undefined8 *)puVar6);
            FUN_031f3d3c(uVar9,*(undefined8 *)puVar5);
            in_stack_00000018 = uVar9;
            thunk_FUN_01e10808(&stack0x00000018,uVar9);
            uVar9 = thunk_FUN_01de27b8(*(undefined8 *)puVar6);
            FUN_031f3d3c(uVar9,*(undefined8 *)puVar5);
            in_stack_00000020 = uVar9;
            thunk_FUN_01e10808(&stack0x00000020,uVar9);
            uVar9 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_111);
            FUN_031c2bd4(uVar9,*(undefined8 *)StringLiteral_109);
            in_stack_00000028 = uVar9;
            thunk_FUN_01e10808(&stack0x00000028,uVar9);
            if (lVar8 == 0) break;
            lVar13 = *(long *)puVar4;
            in_stack_00000038 = in_stack_00000020;
            in_stack_00000030 = in_stack_00000018;
            in_stack_00000040 = in_stack_00000028;
            lVar11 = *(long *)(lVar8 + 0x10);
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar11 == 0) break;
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              lVar11 = lVar11 + (long)(int)uVar1 * 0x18;
              *(undefined8 *)(lVar11 + 0x30) = in_stack_00000028;
              *(undefined8 *)(lVar11 + 0x28) = in_stack_00000020;
              *(undefined8 *)(lVar11 + 0x20) = in_stack_00000018;
              thunk_FUN_01e10808(lVar11 + 0x20,0);
            }
            else {
              in_stack_00000058 = in_stack_00000020;
              in_stack_00000050 = in_stack_00000018;
              in_stack_00000060 = in_stack_00000028;
              FUN_023701b0(lVar8,&stack0x00000050,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            bVar2 = !bVar10;
            bVar10 = false;
            if (bVar2) {
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


