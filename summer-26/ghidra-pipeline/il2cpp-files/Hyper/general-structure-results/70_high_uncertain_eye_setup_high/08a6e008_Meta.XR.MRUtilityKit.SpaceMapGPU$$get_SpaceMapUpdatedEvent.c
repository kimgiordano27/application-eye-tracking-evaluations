/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$get_SpaceMapUpdatedEvent
ENTRY_POINT: 08a6e008
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


void Meta_XR_MRUtilityKit_SpaceMapGPU__get_SpaceMapUpdatedEvent(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  undefined8 unaff_x24;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x28;
  undefined8 unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  do {
    uVar6 = *(undefined8 *)(param_1 + 0x1c);
    uVar7 = *(undefined8 *)(param_1 + 0x24);
    uVar8 = *(undefined8 *)(param_1 + 0x2c);
    if (unaff_x21 == 0) {
      unaff_x21 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09ce8);
      FUN_06052aa8();
      *(long *)(unaff_x22 + 0x20) = unaff_x21;
      thunk_FUN_049ee3d8(unaff_x22 + 0x20,unaff_x21);
    }
    if (*(long *)(unaff_x22 + 0x28) == 0) {
      uVar1 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac524a0);
      FUN_089c54f8();
      *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
      thunk_FUN_049ee3d8(unaff_x22 + 0x28,uVar1);
    }
    if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar3 = *unaff_x28;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac524b0) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x17) * 0x10 + 0x138);
          goto LAB_08a6e0f4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(unaff_x28,*(long *)PTR_DAT_0ac524b0,0x17);
LAB_08a6e0f4:
    (*(code *)*puVar2)(unaff_x28,unaff_x29,unaff_x24,uVar6,uVar7,uVar8,in_stack_00000018,unaff_x21);
    do {
      lVar3 = *(long *)(unaff_x19 + 0xe0);
      unaff_w23 = unaff_w23 + 1;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (*(int *)(lVar3 + 0x18) <= unaff_w23) {
        return;
      }
    } while ((in_stack_00000020._4_4_ != -1) && (unaff_w23 != in_stack_00000020._4_4_));
    param_1 = FUN_06b7fba4(lVar3,unaff_w23,*(undefined8 *)PTR_DAT_0ac540e0);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    unaff_x28 = *(long **)(unaff_x19 + 0xb8);
    unaff_x29 = *(undefined8 *)(unaff_x19 + 0xc0);
    unaff_x24 = *(undefined8 *)(param_1 + 0x14);
    unaff_x21 = *(long *)(unaff_x22 + 0x20);
  } while( true );
}


