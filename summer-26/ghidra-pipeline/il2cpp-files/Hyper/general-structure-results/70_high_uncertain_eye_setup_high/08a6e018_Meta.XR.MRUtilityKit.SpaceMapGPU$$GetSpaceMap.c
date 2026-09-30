/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$GetSpaceMap
ENTRY_POINT: 08a6e018
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMapGPU__GetSpaceMap(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x22;
  int unaff_w23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long *unaff_x28;
  undefined8 unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  do {
    lVar1 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09ce8);
    FUN_06052aa8();
    *(long *)(unaff_x22 + 0x20) = lVar1;
    thunk_FUN_049ee3d8(unaff_x22 + 0x20,lVar1);
    do {
      if (*(long *)(unaff_x22 + 0x28) == 0) {
        uVar2 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac524a0);
        FUN_089c54f8();
        *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
        thunk_FUN_049ee3d8(unaff_x22 + 0x28,uVar2);
      }
      if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar4 = *unaff_x28;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac524b0) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x17) * 0x10 + 0x138);
            goto LAB_08a6e0f4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_04980e68(unaff_x28,*(long *)PTR_DAT_0ac524b0,0x17);
LAB_08a6e0f4:
      (*(code *)*puVar3)(unaff_x28,unaff_x29,unaff_x24,unaff_x25,unaff_x26,unaff_x27,
                         in_stack_00000018,lVar1);
      do {
        lVar1 = *(long *)(unaff_x19 + 0xe0);
        unaff_w23 = unaff_w23 + 1;
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        if (*(int *)(lVar1 + 0x18) <= unaff_w23) {
          return;
        }
      } while ((in_stack_00000020._4_4_ != -1) && (unaff_w23 != in_stack_00000020._4_4_));
      lVar4 = FUN_06b7fba4(lVar1,unaff_w23,*(undefined8 *)PTR_DAT_0ac540e0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      unaff_x28 = *(long **)(unaff_x19 + 0xb8);
      unaff_x29 = *(undefined8 *)(unaff_x19 + 0xc0);
      unaff_x24 = *(undefined8 *)(lVar4 + 0x14);
      lVar1 = *(long *)(unaff_x22 + 0x20);
      unaff_x25 = *(undefined8 *)(lVar4 + 0x1c);
      unaff_x26 = *(undefined8 *)(lVar4 + 0x24);
      unaff_x27 = *(undefined8 *)(lVar4 + 0x2c);
    } while (lVar1 != 0);
  } while( true );
}


