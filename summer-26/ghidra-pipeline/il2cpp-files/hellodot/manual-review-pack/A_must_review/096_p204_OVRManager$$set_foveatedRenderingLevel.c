/*
FUNCTION_NAME: OVRManager$$set_foveatedRenderingLevel
ENTRY_POINT: 051a0744
PROGRAM: hellodot-libil2cpp.so
SCORE: 127
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_foveatedRenderingLevel
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong unaff_d8;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  uVar10 = 0x3f800000;
  uVar11 = 0x3f800000;
  uVar12 = 0x3f800000;
  if ((param_4 & 1) == 0) {
    uVar12 = *(undefined4 *)(unaff_x19 + 0x54);
    uVar11 = *(undefined4 *)(unaff_x19 + 0x58);
    uVar10 = *(undefined4 *)(unaff_x19 + 0x5c);
    unaff_d8 = (ulong)*(uint *)(unaff_x19 + 0x60);
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if (lVar2 != 0) {
    in_stack_00000060 = *(undefined8 *)(lVar2 + 0x168);
    in_stack_00000048 = *(undefined8 *)(lVar2 + 0x150);
    in_stack_00000040 = *(undefined8 *)(lVar2 + 0x148);
    in_stack_00000058 = *(undefined8 *)(lVar2 + 0x160);
    uVar9 = *(undefined8 *)(lVar2 + 0x158);
    in_stack_00000050 = uVar9;
    if (*(int *)(*(long *)PTR_DAT_06608408 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar8 = OVRManager__remove_SpaceSetComponentStatusComplete(&stack0x00000040,0);
    plVar6 = *(long **)(unaff_x19 + 0x70);
    if (plVar6 != (long *)0x0) {
      lVar2 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06608558) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_051a0804;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)PTR_DAT_06608558,0);
LAB_051a0804:
      uVar8 = (*(code *)*puVar1)(uVar8,uVar9,param_3,plVar6,puVar1[1]);
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_0519e3e8(&stack0x00000020);
      FUN_051a0958(uVar8,uVar9,param_3);
      lVar2 = *(long *)(unaff_x19 + 0x28);
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0x50) = uVar12;
        *(undefined4 *)(lVar2 + 0x54) = uVar11;
        *(undefined4 *)(lVar2 + 0x58) = uVar10;
        *(int *)(lVar2 + 0x5c) = (int)unaff_d8;
        plVar6 = *(long **)(unaff_x19 + 0x48);
        lVar2 = *(long *)(unaff_x19 + 0x28);
        if (plVar6 == (long *)0x0) {
          uVar7 = 0;
        }
        else {
          lVar3 = *plVar6;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06604d90) {
                puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
                goto LAB_051a08e4;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar1 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)PTR_DAT_06604d90,0);
LAB_051a08e4:
          uVar7 = (*(code *)*puVar1)(plVar6,puVar1[1]);
        }
        if (lVar2 != 0) {
          *(undefined4 *)(lVar2 + 0x78) = uVar7;
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            FUN_050e6f30(*(long *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x68),0,0);
            FUN_051a0f64(uVar12,uVar11,uVar10,unaff_d8,uVar8,uVar9,param_3);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


