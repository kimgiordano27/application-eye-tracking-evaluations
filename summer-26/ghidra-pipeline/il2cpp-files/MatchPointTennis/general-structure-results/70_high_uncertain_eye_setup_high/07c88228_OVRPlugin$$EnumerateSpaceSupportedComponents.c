/*
FUNCTION_NAME: OVRPlugin$$EnumerateSpaceSupportedComponents
ENTRY_POINT: 07c88228
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EnumerateSpaceSupportedComponents(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x22;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  ulong in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 in_stack_00000098;
  
  puVar4 = (undefined8 *)FUN_044822ac();
  plVar5 = (long *)(*(code *)*puVar4)();
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* try { // try from 07c88260 to 07d88267 has its CatchHandler @ 07c88508 */
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f509e0) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07c882a4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
                    /* try { // try from 07c88288 to 07d8828f has its CatchHandler @ 07c8850c */
    puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f509e0,0);
LAB_07c882a4:
    plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
    if (plVar5 != (long *)0x0) {
      lVar7 = *plVar5;
                    /* try { // try from 07c882c0 to 07d882d7 has its CatchHandler @ 07c886ac */
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
                    /* try { // try from 07c882d8 to 07d882df has its CatchHandler @ 07c88504 */
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09f4dba0) {
                    /* try { // try from 07c88300 to 07d88303 has its CatchHandler @ 07c88520 */
                    /* try { // try from 07c88304 to 07d88307 has its CatchHandler @ 07c8851c */
                    /* try { // try from 07c88308 to 07d8830b has its CatchHandler @ 07c88514 */
                    /* try { // try from 07c8830c to 07d8830f has its CatchHandler @ 07c88510 */
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_07c88310;
          }
                    /* try { // try from 07c882e4 to 07d882e7 has its CatchHandler @ 07c88500 */
          uVar8 = uVar8 - 1;
                    /* try { // try from 07c882e8 to 07d882fb has its CatchHandler @ 07c886ac */
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f4dba0,1);
LAB_07c88310:
      puVar3 = PTR_DAT_09f50aa8;
      puVar2 = PTR_DAT_09f4db90;
      puVar1 = PTR_DAT_09f4db88;
                    /* try { // try from 07c88310 to 07d88313 has its CatchHandler @ 07c886ac */
      (*(code *)*puVar4)(&stack0x00000080,plVar5,puVar4[1]);
      in_stack_00000068 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
      in_stack_00000070 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
      in_stack_00000060 = in_stack_00000080;
      while (uVar6 = FUN_0767900c(&stack0x00000060,*(undefined8 *)puVar2), uVar8 = in_stack_00000070
            , (uVar6 & 1) != 0) {
        plVar5 = *(long **)(unaff_x19 + 0x30);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar7 = *plVar5;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
              goto LAB_07c883b8;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_044822ac(plVar5,*unaff_x22,7);
LAB_07c883b8:
        uVar6 = (*(code *)*puVar4)(plVar5,uVar8 & 0xffffffff,&stack0x00000040,puVar4[1]);
        if ((uVar6 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uStack0000000000000088 = in_stack_00000048;
          in_stack_00000080 = in_stack_00000040;
          uStack0000000000000094 = (undefined4)uStack0000000000000054;
          in_stack_00000098 = SUB84(uStack0000000000000054,4);
          uStack0000000000000090 = uStack0000000000000050;
          FUN_0737a2c8(*(long *)(unaff_x19 + 0x40),uVar8 & 0xffffffff,&stack0x00000080,
                       *(undefined8 *)puVar3);
        }
        plVar5 = *(long **)(unaff_x19 + 0x30);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar7 = *plVar5;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x22) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 8) * 0x10 + 0x138);
              goto LAB_07c88460;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_044822ac(plVar5,*unaff_x22,8);
LAB_07c88460:
        uVar6 = (*(code *)*puVar4)(plVar5,uVar8 & 0xffffffff,&stack0x00000020,puVar4[1]);
        if ((uVar6 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          uStack0000000000000088 = in_stack_00000028;
          in_stack_00000080 = in_stack_00000020;
          uStack0000000000000094 = (undefined4)uStack0000000000000034;
          in_stack_00000098 = SUB84(uStack0000000000000034,4);
          uStack0000000000000090 = uStack0000000000000030;
          FUN_0737a2c8(*(long *)(unaff_x19 + 0x48),uVar8 & 0xffffffff,&stack0x00000080,
                       *(undefined8 *)puVar3);
        }
      }
      FUN_07679008(&stack0x00000060,*(undefined8 *)puVar1);
      lVar7 = *(long *)(unaff_x19 + 0x20);
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


