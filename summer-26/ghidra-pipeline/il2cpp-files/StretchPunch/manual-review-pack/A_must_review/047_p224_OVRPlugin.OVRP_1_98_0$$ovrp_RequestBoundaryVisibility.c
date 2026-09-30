/*
FUNCTION_NAME: OVRPlugin.OVRP_1_98_0$$ovrp_RequestBoundaryVisibility
ENTRY_POINT: 033fa4e4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033fa764) */

void OVRPlugin_OVRP_1_98_0__ovrp_RequestBoundaryVisibility(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  long *plStack0000000000000050;
  
  puVar3 = StringLiteral_9486;
  puVar2 = StringLiteral_9484;
  puVar1 = StringLiteral_9482;
  uStack0000000000000048 = in_stack_00000010;
  uStack0000000000000040 = in_stack_00000008;
  plStack0000000000000050 = in_stack_00000018;
  do {
    do {
      uVar6 = FUN_02c52b88(&stack0x00000040,*(undefined8 *)puVar2);
      plVar5 = plStack0000000000000050;
      if ((uVar6 & 1) == 0) {
        FUN_02c52b84(&stack0x00000040,*(undefined8 *)StringLiteral_9483);
        if (((unaff_x19 != 0) && (lVar8 = *(long *)(unaff_x19 + 0x40), lVar8 != 0)) &&
           (lVar8 != unaff_x21)) {
          FUN_0319996c(&stack0x00000008,lVar8,*(undefined8 *)StringLiteral_9487);
          puVar3 = StringLiteral_9486;
          puVar2 = StringLiteral_9484;
          puVar1 = StringLiteral_9482;
          uStack0000000000000048 = in_stack_00000010;
          uStack0000000000000040 = in_stack_00000008;
          plStack0000000000000050 = in_stack_00000018;
          while (uVar6 = FUN_02c52b88(&stack0x00000040,*(undefined8 *)puVar2),
                plVar5 = plStack0000000000000050, (uVar6 & 1) != 0) {
            in_stack_00000028 = 0;
            if (((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x38) == 0)) ||
               (uVar6 = FUN_02b258e8(*(long *)(unaff_x20 + 0x38),plStack0000000000000050,
                                     &stack0x00000028,*(undefined8 *)puVar1), (uVar6 & 1) == 0)) {
              in_stack_00000020 = 0;
              if (*(long *)(unaff_x19 + 0x38) != 0) {
                FUN_02b258e8(*(long *)(unaff_x19 + 0x38),plVar5,&stack0x00000020,
                             *(undefined8 *)puVar1);
              }
              lVar4 = in_stack_00000028;
              lVar8 = in_stack_00000020;
              if (in_stack_00000028 != in_stack_00000020) {
                if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01d7db70();
                }
                lVar9 = *plVar5;
                uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar6 != 0) {
                  piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                      puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                      goto LAB_033fa708;
                    }
                    uVar6 = uVar6 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar6 != 0);
                }
                puVar7 = (undefined8 *)FUN_01dde8fc(plVar5,*(long *)puVar3,0);
LAB_033fa708:
                (*(code *)*puVar7)(plVar5,lVar4,lVar8,1,puVar7[1]);
              }
            }
          }
          FUN_02c52b84(&stack0x00000040,*(undefined8 *)StringLiteral_9483);
        }
        return;
      }
      in_stack_00000038 = 0;
      if (*(long *)(unaff_x20 + 0x38) != 0) {
        FUN_02b258e8(*(long *)(unaff_x20 + 0x38),plStack0000000000000050,&stack0x00000038,
                     *(undefined8 *)puVar1);
      }
      in_stack_00000030 = 0;
      if ((unaff_x19 != 0) && (*(long *)(unaff_x19 + 0x38) != 0)) {
        FUN_02b258e8(*(long *)(unaff_x19 + 0x38),plVar5,&stack0x00000030,*(undefined8 *)puVar1);
      }
      lVar4 = in_stack_00000038;
      lVar8 = in_stack_00000030;
    } while (in_stack_00000038 == in_stack_00000030);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar9 = *plVar5;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_033fa5c4;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_01dde8fc(plVar5,*(long *)puVar3,0);
LAB_033fa5c4:
    (*(code *)*puVar7)(plVar5,lVar4,lVar8,1,puVar7[1]);
  } while( true );
}


