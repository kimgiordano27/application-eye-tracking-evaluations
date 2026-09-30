/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 042a5eb0
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_Qpl_Annotation_Builder_Entry>
               (undefined1 param_1 [16])

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar9;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  ulong uVar10;
  long lVar11;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  long in_stack_000002f8;
  
  *(long *)(unaff_x19 + 0xf0) = param_1._8_8_;
  *(long *)(unaff_x19 + 0xe8) = param_1._0_8_;
  puVar9 = *(undefined8 **)(unaff_x20 + 0x3a0);
  uVar4 = FUN_0160edfc(*unaff_x22);
  FUN_02df8d44(uVar4,*puVar9,0);
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  FUN_042a5498(&stack0x000000b8,uVar4);
  in_stack_000000a8 = unaff_x23[1];
  in_stack_000000a0 = *unaff_x23;
  in_stack_000000b0 = in_stack_000000c8;
  if (0xb < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x104) = in_stack_000000a8;
    *(undefined8 *)(unaff_x19 + 0xfc) = in_stack_000000a0;
    *(undefined4 *)(unaff_x19 + 0x10c) = in_stack_000000c8;
    puVar3 = PTR_DAT_06e33638;
    uVar4 = FUN_0160edfc(*unaff_x22,3);
    FUN_02df8d44(uVar4,*(undefined8 *)puVar3,0);
    in_stack_00000088 = 0;
    in_stack_00000090 = 0;
    in_stack_00000098 = 0;
    FUN_042a5498(&stack0x00000088,uVar4);
    in_stack_00000080 = in_stack_00000098;
    in_stack_00000078 = in_stack_00000090;
    in_stack_00000070 = in_stack_00000088;
    if (0xc < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000098;
      *(undefined8 *)(unaff_x19 + 0x118) = in_stack_00000090;
      *(undefined8 *)(unaff_x19 + 0x110) = in_stack_00000088;
      puVar3 = PTR_DAT_06de2228;
      uVar4 = FUN_0160edfc(*unaff_x22,4);
      FUN_02df8d44(uVar4,*(undefined8 *)puVar3,0);
      in_stack_00000058 = 0;
      in_stack_00000060 = 0;
      in_stack_00000068 = 0;
      FUN_042a5498(&stack0x00000058,uVar4);
      in_stack_00000050 = in_stack_00000068;
      in_stack_00000048 = in_stack_00000060;
      in_stack_00000040 = in_stack_00000058;
      if (0xd < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined4 *)(unaff_x19 + 0x134) = in_stack_00000068;
        *(undefined8 *)(unaff_x19 + 300) = in_stack_00000060;
        *(undefined8 *)(unaff_x19 + 0x124) = in_stack_00000058;
        puVar3 = PTR_DAT_06e1e1d8;
        uVar4 = FUN_0160edfc(*unaff_x22,4);
        FUN_02df8d44(uVar4,*(undefined8 *)puVar3,0);
        in_stack_00000028 = 0;
        in_stack_00000030 = 0;
        in_stack_00000038 = 0;
        FUN_042a5498(&stack0x00000028,uVar4);
        puVar3 = PTR_DAT_06de0848;
        if (0xe < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined4 *)(unaff_x19 + 0x148) = in_stack_00000038;
          *(undefined8 *)(unaff_x19 + 0x140) = in_stack_00000030;
          *(undefined8 *)(unaff_x19 + 0x138) = in_stack_00000028;
          puVar2 = PTR_DAT_06de7c70;
          lVar5 = *(long *)puVar3;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar5 = *(long *)puVar3;
          }
          **(long **)(lVar5 + 0xb8) = unaff_x19;
          thunk_FUN_01656ef8(*(undefined8 *)(*(long *)puVar3 + 0xb8));
          uVar4 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
          lVar5 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
          puVar2 = PTR_DAT_06e10c90;
          if (lVar5 != 0) {
            FUN_02f305bc(lVar5,uVar4,*(undefined8 *)PTR_DAT_06d8f410);
            plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
            *plVar6 = lVar5;
            thunk_FUN_01656ef8(plVar6,lVar5);
            lVar5 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
            if (lVar5 != 0) {
              FUN_046ed038(lVar5,*(undefined8 *)PTR_DAT_06e3b0c0);
              plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
              *plVar6 = lVar5;
              thunk_FUN_01656ef8(plVar6,lVar5);
              puVar2 = PTR_DAT_06dc3458;
              lVar5 = **(long **)(*(long *)puVar3 + 0xb8);
              if (lVar5 != 0) {
                if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
                  uVar10 = 0;
                  uVar8 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
                  lVar11 = lVar5 + 0x28;
                  do {
                    if (uVar8 <= uVar10) goto LAB_042a61f4;
                    lVar7 = *(long *)puVar3;
                    uVar1 = *(undefined4 *)(lVar11 + -4);
                    if (*(int *)(lVar7 + 0xe0) == 0) {
                      thunk_FUN_016466fc();
                      lVar7 = *(long *)puVar3;
                    }
                    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
                    if (lVar7 == 0) goto LAB_042a61f8;
                    FUN_046edfd0(lVar7,uVar1,&stack0x000002e0,*(undefined8 *)puVar2);
                    uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
                    uVar10 = uVar10 + 1;
                    lVar11 = lVar11 + 0x14;
                  } while ((long)uVar10 < (long)(int)*(uint *)(lVar5 + 0x18));
                }
                if (*(long *)(unaff_x21 + 0x28) == in_stack_000002f8) {
                  return;
                }
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
            }
          }
LAB_042a61f8:
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
      }
    }
  }
LAB_042a61f4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


