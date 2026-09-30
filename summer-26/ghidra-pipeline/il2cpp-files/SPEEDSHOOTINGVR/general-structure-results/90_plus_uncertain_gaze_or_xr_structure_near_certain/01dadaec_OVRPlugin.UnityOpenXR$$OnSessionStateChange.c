/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionStateChange
ENTRY_POINT: 01dadaec
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01daddf4) */

void OVRPlugin_UnityOpenXR__OnSessionStateChange(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar11;
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
  
  if ((param_1 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0235a2a8);
    FUN_00fdc2e4(PTR_DAT_0235a2b0);
    FUN_00fdc2e4(PTR_DAT_0235a2b8);
    FUN_00fdc2e4(PTR_DAT_0235a2c0);
    FUN_00fdc2e4(PTR_DAT_0235a2c8);
    FUN_00fdc2e4(PTR_DAT_0235a2d0);
    *(undefined1 *)(unaff_x21 + 0x9af) = 1;
  }
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = (long *)0x0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if (unaff_x20 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(unaff_x20 + 0x40);
    if (lVar11 != 0) {
      FUN_017d3a2c(&stack0x00000008,lVar11,*(undefined8 *)PTR_DAT_0235a2d0);
      puVar3 = PTR_DAT_0235a2c8;
      puVar2 = PTR_DAT_0235a2b8;
      puVar1 = PTR_DAT_0235a2a8;
      in_stack_00000048 = in_stack_00000010;
      in_stack_00000040 = in_stack_00000008;
      in_stack_00000050 = in_stack_00000018;
                    /* try { // try from 01dadb9c to 01eadbdb has its CatchHandler @ 01dadb9c
                       catch() { ... } // from try @ 01dadb9c with catch @ 01dadb9c
                       catch() { ... } // from try @ 01dadfc4 with catch @ 01dadb9c
                       catch() { ... } // from try @ 01dae098 with catch @ 01dadb9c
                       catch() { ... } // from try @ 01dae118 with catch @ 01dadb9c */
      while (uVar5 = FUN_0150a200(&stack0x00000040,*(undefined8 *)puVar2),
            plVar4 = in_stack_00000050, (uVar5 & 1) != 0) {
        in_stack_00000038 = 0;
        if (*(long *)(unaff_x20 + 0x38) != 0) {
          FUN_0146ab1c(*(long *)(unaff_x20 + 0x38),in_stack_00000050,&stack0x00000038,
                       *(undefined8 *)puVar1);
        }
        in_stack_00000030 = 0;
        if ((unaff_x19 != 0) && (*(long *)(unaff_x19 + 0x38) != 0)) {
          FUN_0146ab1c(*(long *)(unaff_x19 + 0x38),plVar4,&stack0x00000030,*(undefined8 *)puVar1);
        }
        lVar9 = in_stack_00000038;
        lVar7 = in_stack_00000030;
        if (in_stack_00000038 != in_stack_00000030) {
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
          lVar8 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_01dadc54;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_0103c348(plVar4,*(long *)puVar3,0);
LAB_01dadc54:
          (*(code *)*puVar6)(plVar4,lVar9,lVar7,1,puVar6[1]);
        }
      }
      FUN_0150a1fc(&stack0x00000040,*(undefined8 *)PTR_DAT_0235a2b0);
    }
  }
  if (((unaff_x19 != 0) && (lVar7 = *(long *)(unaff_x19 + 0x40), lVar7 != 0)) && (lVar7 != lVar11))
  {
    FUN_017d3a2c(&stack0x00000008,lVar7,*(undefined8 *)PTR_DAT_0235a2d0);
    puVar3 = PTR_DAT_0235a2c8;
    puVar2 = PTR_DAT_0235a2b8;
    puVar1 = PTR_DAT_0235a2a8;
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    while (uVar5 = FUN_0150a200(&stack0x00000040,*(undefined8 *)puVar2), plVar4 = in_stack_00000050,
          (uVar5 & 1) != 0) {
      in_stack_00000028 = 0;
      if (((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x38) == 0)) ||
         (uVar5 = FUN_0146ab1c(*(long *)(unaff_x20 + 0x38),in_stack_00000050,&stack0x00000028,
                               *(undefined8 *)puVar1), (uVar5 & 1) == 0)) {
        in_stack_00000020 = 0;
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          FUN_0146ab1c(*(long *)(unaff_x19 + 0x38),plVar4,&stack0x00000020,*(undefined8 *)puVar1);
        }
        lVar7 = in_stack_00000028;
        lVar11 = in_stack_00000020;
        if (in_stack_00000028 != in_stack_00000020) {
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
          lVar9 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_01dadd98;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_0103c348(plVar4,*(long *)puVar3,0);
LAB_01dadd98:
          (*(code *)*puVar6)(plVar4,lVar7,lVar11,1,puVar6[1]);
        }
      }
    }
    FUN_0150a1fc(&stack0x00000040,*(undefined8 *)PTR_DAT_0235a2b0);
  }
  return;
}


