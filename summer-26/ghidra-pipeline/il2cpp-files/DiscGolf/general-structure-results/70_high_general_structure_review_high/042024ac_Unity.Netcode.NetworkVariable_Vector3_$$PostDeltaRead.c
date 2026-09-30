/*
FUNCTION_NAME: Unity.Netcode.NetworkVariable<Vector3>$$PostDeltaRead
ENTRY_POINT: 042024ac
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_Netcode_NetworkVariable<Vector3>__PostDeltaRead(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long in_x10;
  int *piVar3;
  long unaff_x19;
  long unaff_x28;
  long unaff_x29;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar2 != 0) {
    piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
                    /* try { // try from 042024c8 to 043024ef has its CatchHandler @ 042026a8 */
      if (*(long *)(piVar3 + -2) == **(long **)(in_x10 + 0xff0)) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar3 * 0x10 + 0x138);
        goto LAB_042024f8;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 4;
    } while (uVar2 != 0);
  }
  puVar1 = (undefined8 *)FUN_02dd004c();
LAB_042024f8:
  (*(code *)*puVar1)();
  if (unaff_x19 == 0) {
    if (**(char **)(unaff_x29 + -0x38) != '\0') {
                    /* try { // try from 04202514 to 04302573 has its CatchHandler @ 042026ac */
      thunk_FUN_02da42ec(**(undefined8 **)(unaff_x29 + -0x30),0);
    }
    if (*(long *)(unaff_x29 + -0x40) == 0) {
      if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
    }
    else if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96858();
    }
  }
  else if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


