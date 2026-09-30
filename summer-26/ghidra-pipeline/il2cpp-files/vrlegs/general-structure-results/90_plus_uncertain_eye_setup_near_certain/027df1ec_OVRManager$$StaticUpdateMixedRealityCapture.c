/*
FUNCTION_NAME: OVRManager$$StaticUpdateMixedRealityCapture
ENTRY_POINT: 027df1ec
PROGRAM: vrlegs-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x027df0a4) */

void OVRManager__StaticUpdateMixedRealityCapture(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_021b51c4();
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c();
  }
  if (((unaff_x19 != 0) && (lVar7 = *(long *)(unaff_x19 + 0x40), lVar7 != 0)) &&
     (lVar7 != unaff_x21)) {
    Animancer_FadeGroup__get_TargetWeight(lVar7,&stack0x00000008,*(undefined8 *)PTR_DAT_03cfcee0);
    puVar4 = PTR_DAT_03cfced8;
    puVar3 = PTR_DAT_03cfced0;
    puVar2 = PTR_DAT_03cfcec8;
    puVar1 = PTR_DAT_03cfceb8;
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    while (uVar8 = FUN_021b51c8(&stack0x00000040,*(undefined8 *)puVar2), (uVar8 & 1) != 0) {
      FUN_01b7a454(&stack0x00000040,&stack0x00000008,*(undefined8 *)puVar3);
      plVar5 = in_stack_00000008;
      in_stack_00000028 = 0;
      if (((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x38) == 0)) ||
         (uVar8 = FUN_0219f8b8(*(long *)(unaff_x20 + 0x38),in_stack_00000008,&stack0x00000028,
                               *(undefined8 *)puVar1), (uVar8 & 1) == 0)) {
        in_stack_00000020 = 0;
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          FUN_0219f8b8(*(long *)(unaff_x19 + 0x38),plVar5,&stack0x00000020,*(undefined8 *)puVar1);
        }
        lVar6 = in_stack_00000028;
        lVar7 = in_stack_00000020;
        if (in_stack_00000028 != in_stack_00000020) {
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar10 = *plVar5;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                puVar9 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_027df044;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_01a472ec(plVar5,*(long *)puVar4,0);
LAB_027df044:
          (*(code *)*puVar9)(plVar5,lVar6,lVar7,1,puVar9[1]);
        }
      }
    }
    FUN_021b51c4(&stack0x00000040,*(undefined8 *)PTR_DAT_03cfcec0);
  }
  return;
}


