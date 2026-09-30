/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<SessionPlayerData>$$Dispose
ENTRY_POINT: 06ac3700
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<SessionPlayerData>__Dispose(long *param_1)

{
  ulong uVar1;
  int in_w8;
  long unaff_x19;
  long unaff_x22;
  ulong uVar2;
  undefined8 *puVar3;
  
  uVar2 = 0;
  puVar3 = (undefined8 *)(unaff_x22 + 0x30);
  do {
    if (*(uint *)(unaff_x22 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    if (-1 < *(int *)(puVar3 + -2)) {
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar1 = (**(code **)(*param_1 + 0x1b8))(param_1,*puVar3);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
      in_w8 = *(int *)(unaff_x19 + 0x20);
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 3;
    if ((long)in_w8 <= (long)uVar2) {
      return 0;
    }
  } while( true );
}


