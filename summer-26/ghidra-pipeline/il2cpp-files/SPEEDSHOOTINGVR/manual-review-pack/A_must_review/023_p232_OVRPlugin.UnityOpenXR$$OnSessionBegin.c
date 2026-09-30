/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionBegin
ENTRY_POINT: 01dadbc4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01daddf4) */

void OVRPlugin_UnityOpenXR__OnSessionBegin
               (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  
  do {
    FUN_0146ab1c(param_1,unaff_x22,param_3,param_4);
    do {
      in_stack_00000030 = 0;
      if ((unaff_x19 != 0) && (*(long *)(unaff_x19 + 0x38) != 0)) {
                    /* try { // try from 01dadbdc to 01eadbe3 has its CatchHandler @ 01dadfd4 */
        FUN_0146ab1c(*(long *)(unaff_x19 + 0x38),unaff_x22,&stack0x00000030,*unaff_x27);
      }
      lVar4 = in_stack_00000038;
      lVar7 = in_stack_00000030;
      if (in_stack_00000038 != in_stack_00000030) {
        if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        lVar8 = *unaff_x22;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
                    /* try { // try from 01dadc24 to 01eadc27 has its CatchHandler @ 01dadffc */
            if (*(long *)(piVar10 + -2) == *unaff_x26) {
                    /* try { // try from 01dadc4c to 01eadc53 has its CatchHandler @ 01dadfec */
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01dadc54;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_0103c348(unaff_x22,*unaff_x26,0);
LAB_01dadc54:
                    /* try { // try from 01dadc58 to 01eadc5f has its CatchHandler @ 01dae000 */
                    /* try { // try from 01dadc64 to 01eadc6b has its CatchHandler @ 01dadfe8 */
        (*(code *)*puVar6)(unaff_x22,lVar4,lVar7,1,puVar6[1]);
      }
      uVar9 = FUN_0150a200(&stack0x00000040,*unaff_x25);
      if ((uVar9 & 1) == 0) {
                    /* try { // try from 01dadc70 to 01eadc77 has its CatchHandler @ 01dadfe4 */
                    /* try { // try from 01dadc7c to 01eadc83 has its CatchHandler @ 01dadfd8 */
        FUN_0150a1fc(&stack0x00000040,*(undefined8 *)PTR_DAT_0235a2b0);
        if (unaff_x19 == 0) {
          return;
        }
        lVar7 = *(long *)(unaff_x19 + 0x40);
        if (lVar7 == 0) {
          return;
        }
        if (lVar7 == unaff_x21) {
          return;
        }
        FUN_017d3a2c(&stack0x00000008,lVar7,*(undefined8 *)PTR_DAT_0235a2d0);
        puVar3 = PTR_DAT_0235a2c8;
        puVar2 = PTR_DAT_0235a2b8;
        puVar1 = PTR_DAT_0235a2a8;
        in_stack_00000048 = in_stack_00000010;
        in_stack_00000040 = in_stack_00000008;
        in_stack_00000050 = in_stack_00000018;
        goto LAB_01dadcdc;
      }
      in_stack_00000038 = 0;
      param_1 = *(long *)(unaff_x20 + 0x38);
      unaff_x22 = in_stack_00000050;
    } while (param_1 == 0);
    param_4 = *unaff_x27;
    param_3 = &stack0x00000038;
  } while( true );
LAB_01dadcdc:
  do {
    do {
      uVar9 = FUN_0150a200(&stack0x00000040,*(undefined8 *)puVar2);
      plVar5 = in_stack_00000050;
      if ((uVar9 & 1) == 0) {
        FUN_0150a1fc(&stack0x00000040,*(undefined8 *)PTR_DAT_0235a2b0);
        return;
      }
      in_stack_00000028 = 0;
    } while (((unaff_x20 != 0) && (*(long *)(unaff_x20 + 0x38) != 0)) &&
            (uVar9 = FUN_0146ab1c(*(long *)(unaff_x20 + 0x38),in_stack_00000050,&stack0x00000028,
                                  *(undefined8 *)puVar1), (uVar9 & 1) != 0));
    in_stack_00000020 = 0;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_0146ab1c(*(long *)(unaff_x19 + 0x38),plVar5,&stack0x00000020,*(undefined8 *)puVar1);
    }
    lVar4 = in_stack_00000028;
    lVar7 = in_stack_00000020;
  } while (in_stack_00000028 == in_stack_00000020);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar8 = *plVar5;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_01dadd98;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_0103c348(plVar5,*(long *)puVar3,0);
LAB_01dadd98:
  (*(code *)*puVar6)(plVar5,lVar4,lVar7,1,puVar6[1]);
  goto LAB_01dadcdc;
}


