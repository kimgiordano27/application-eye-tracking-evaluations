/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$GetColorAtPosition
ENTRY_POINT: 08a6e624
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x08a6e718) */

void Meta_XR_MRUtilityKit_SpaceMapGPU__GetColorAtPosition(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w21;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x26;
  long *unaff_x27;
  undefined8 uVar10;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 in_stack_00000060;
  
  do {
    uVar1 = in_stack_00000060;
    lVar3 = *unaff_x27;
    uVar10 = *(undefined8 *)(unaff_x19 + 0xc0);
    uVar6 = *(undefined8 *)(unaff_x26 + 0x1c);
    uVar7 = *(undefined8 *)(unaff_x26 + 0x24);
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    uVar8 = *(undefined8 *)(unaff_x26 + 0x2c);
    uVar9 = *(undefined8 *)(unaff_x26 + 0x34);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac524b0) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x17) * 0x10 + 0x138);
          goto LAB_08a6e694;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(unaff_x27,*(long *)PTR_DAT_0ac524b0,0x17);
LAB_08a6e694:
    (*(code *)*puVar2)(unaff_x27,uVar10,uVar6,uVar7,uVar8,uVar9,uVar1,0);
    while (uVar4 = FUN_05fefd38(&stack0x00000050,*unaff_x20), (uVar4 & 1) == 0) {
      FUN_05fefd34(&stack0x00000050,*(undefined8 *)PTR_DAT_0ac21200);
      do {
        lVar3 = *(long *)(unaff_x19 + 0xe8);
        unaff_w21 = unaff_w21 + 1;
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        if (*(int *)(lVar3 + 0x18) <= unaff_w21) {
          return;
        }
      } while ((in_stack_00000018._4_4_ != -1) && (unaff_w21 != in_stack_00000018._4_4_));
      unaff_x26 = FUN_06b7fba4(lVar3,unaff_w21,*(undefined8 *)PTR_DAT_0ac54120);
      if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar3 = FUN_089c1b78(unaff_x26,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      FUN_06b8097c(&stack0x00000020,lVar3,*(undefined8 *)PTR_DAT_0ac21230);
      in_stack_00000060 = in_stack_00000030;
      in_stack_00000058 = in_stack_00000028;
      in_stack_00000050 = in_stack_00000020;
      in_stack_00000020 = 0;
      in_stack_00000028 = &stack0x00000050;
    }
    unaff_x27 = *(long **)(unaff_x19 + 0xb8);
    if (unaff_x27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
  } while( true );
}


