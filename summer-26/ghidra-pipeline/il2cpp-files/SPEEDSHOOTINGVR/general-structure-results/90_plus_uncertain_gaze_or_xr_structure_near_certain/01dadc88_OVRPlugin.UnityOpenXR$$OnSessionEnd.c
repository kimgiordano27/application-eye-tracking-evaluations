/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionEnd
ENTRY_POINT: 01dadc88
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01daddf4) */

void OVRPlugin_UnityOpenXR__OnSessionEnd(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  
                    /* try { // try from 01dadc88 to 01eadc8f has its CatchHandler @ 01dadfe0 */
  if (((unaff_x19 != 0) && (lVar6 = *(long *)(unaff_x19 + 0x40), lVar6 != 0)) && (lVar6 != 0)) {
                    /* try { // try from 01dadca0 to 01eadca7 has its CatchHandler @ 01dadfdc */
                    /* try { // try from 01dadcac to 01eadce7 has its CatchHandler @ 01dae000 */
    FUN_017d3a2c(&stack0x00000008,lVar6,*(undefined8 *)PTR_DAT_0235a2d0);
    puVar3 = PTR_DAT_0235a2c8;
    puVar2 = PTR_DAT_0235a2b8;
    puVar1 = PTR_DAT_0235a2a8;
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    while (uVar7 = FUN_0150a200(&stack0x00000040,*(undefined8 *)puVar2), plVar5 = in_stack_00000050,
          (uVar7 & 1) != 0) {
      in_stack_00000028 = 0;
                    /* try { // try from 01dadcf4 to 01eadcf7 has its CatchHandler @ 01dae060 */
      if (((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x38) == 0)) ||
         (uVar7 = FUN_0146ab1c(*(long *)(unaff_x20 + 0x38),in_stack_00000050,&stack0x00000028,
                               *(undefined8 *)puVar1), (uVar7 & 1) == 0)) {
        in_stack_00000020 = 0;
                    /* try { // try from 01dadd18 to 01eadd2b has its CatchHandler @ 01dae054 */
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          FUN_0146ab1c(*(long *)(unaff_x19 + 0x38),plVar5,&stack0x00000020,*(undefined8 *)puVar1);
        }
        lVar4 = in_stack_00000028;
        lVar6 = in_stack_00000020;
                    /* try { // try from 01dadd40 to 01eadd47 has its CatchHandler @ 01dae05c */
        if (in_stack_00000028 != in_stack_00000020) {
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
          lVar9 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar7 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_01dadd98;
              }
              uVar7 = uVar7 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar7 != 0);
          }
          puVar8 = (undefined8 *)FUN_0103c348(plVar5,*(long *)puVar3,0);
LAB_01dadd98:
          (*(code *)*puVar8)(plVar5,lVar4,lVar6,1,puVar8[1]);
        }
      }
    }
    FUN_0150a1fc(&stack0x00000040,*(undefined8 *)PTR_DAT_0235a2b0);
  }
  return;
}


