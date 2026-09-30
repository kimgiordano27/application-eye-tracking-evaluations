/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$StartSpaceMap
ENTRY_POINT: 08a6e128
PROGRAM: Hyper-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMapGPU__StartSpaceMap(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long lVar8;
  long unaff_x22;
  int unaff_w23;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  do {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(int *)(param_1 + 0x18) <= unaff_w23) {
      return;
    }
    if ((in_stack_00000020._4_4_ == -1) || (unaff_w23 == in_stack_00000020._4_4_)) {
      lVar3 = FUN_06b7fba4(param_1,unaff_w23,*(undefined8 *)PTR_DAT_0ac540e0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      plVar1 = *(long **)(unaff_x19 + 0xb8);
      uVar2 = *(undefined8 *)(unaff_x19 + 0xc0);
      uVar9 = *(undefined8 *)(lVar3 + 0x14);
      lVar8 = *(long *)(unaff_x22 + 0x20);
      uVar10 = *(undefined8 *)(lVar3 + 0x1c);
      uVar11 = *(undefined8 *)(lVar3 + 0x24);
      uVar12 = *(undefined8 *)(lVar3 + 0x2c);
      if (lVar8 == 0) {
        lVar8 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09ce8);
        FUN_06052aa8();
        *(long *)(unaff_x22 + 0x20) = lVar8;
        thunk_FUN_049ee3d8(unaff_x22 + 0x20,lVar8);
      }
      if (*(long *)(unaff_x22 + 0x28) == 0) {
        uVar4 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac524a0);
        FUN_089c54f8();
        *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
        thunk_FUN_049ee3d8(unaff_x22 + 0x28,uVar4);
      }
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar3 = *plVar1;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0ac524b0) {
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 0x17) * 0x10 + 0x138);
            goto LAB_08a6e0f4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_04980e68(plVar1,*(long *)PTR_DAT_0ac524b0,0x17);
LAB_08a6e0f4:
      (*(code *)*puVar5)(plVar1,uVar2,uVar9,uVar10,uVar11,uVar12,in_stack_00000018,lVar8);
    }
    param_1 = *(long *)(unaff_x19 + 0xe0);
    unaff_w23 = unaff_w23 + 1;
  } while( true );
}


