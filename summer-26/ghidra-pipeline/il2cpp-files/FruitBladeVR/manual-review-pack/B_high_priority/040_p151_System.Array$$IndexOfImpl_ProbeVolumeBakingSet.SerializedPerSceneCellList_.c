/*
FUNCTION_NAME: System.Array$$IndexOfImpl<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 01eef628
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__IndexOfImpl<ProbeVolumeBakingSet_SerializedPerSceneCellList>(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x25;
  long unaff_x29;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_01c8c820(param_1);
    in_x9 = *(long *)(unaff_x19 + 0x38);
  }
  FUN_01c5d5a0(param_1,*(undefined8 *)(in_x9 + 8));
  plVar1 = *(long **)(unaff_x29 + -0xd8);
  if (plVar1 == (long *)0x0) {
LAB_01eefaa8:
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0));
    if (2 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
      thunk_FUN_01cc8040((undefined8 *)(unaff_x20 + 0x30),uVar2);
      if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffffc) != 0) {
        *(undefined8 *)(unaff_x20 + 0x38) = *(undefined8 *)PTR_DAT_03cb6838;
        thunk_FUN_01cc8040();
        if ((*(long *)(unaff_x29 + -0x38) == 0) ||
           (plVar1 = (long *)thunk_FUN_01c6bfbc(*(long *)(unaff_x29 + -0x38),0),
           plVar1 == (long *)0x0)) goto LAB_01eefaa8;
        uVar2 = (**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0));
        if (4 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
          thunk_FUN_01cc8040((undefined8 *)(unaff_x20 + 0x40),uVar2);
          if (5 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined8 *)(unaff_x20 + 0x48) = *(undefined8 *)PTR_DAT_03cb6830;
            thunk_FUN_01cc8040();
            FUN_02f7bab0();
            if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
              return;
            }
            goto LAB_01eefb08;
          }
        }
      }
    }
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbdc();
    }
  }
LAB_01eefb08:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


