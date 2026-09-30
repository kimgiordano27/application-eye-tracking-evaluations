/*
FUNCTION_NAME: Pathfinding.Polygon.ClosestPointOnTriangleProjected_0000034E$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 0358bfe0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Pathfinding_Polygon_ClosestPointOnTriangleProjected_0000034E_PostfixBurstDelegate___ctor
               (ulong param_1)

{
  ulong uVar1;
  long lVar2;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  ulong unaff_x23;
  
  param_1 = param_1 & 0xffffffff;
  while (unaff_x23 < param_1) {
                    /* try { // try from 0358bff4 to 0368c01f has its CatchHandler @ 0358c138 */
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20 + unaff_x23 * 8);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar1 = FUN_068f9b78(uVar3,0,0);
    if (((uVar1 & 1) == 0) && ((unaff_x19 & 1) == 0)) {
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_x23) break;
      lVar2 = *(long *)(unaff_x20 + 0x20 + unaff_x23 * 8);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      FUN_03241180(lVar2,0);
    }
                    /* try { // try from 0358c038 to 0368c063 has its CatchHandler @ 0358c12c */
    param_1 = (ulong)*(uint *)(unaff_x20 + 0x18);
    unaff_x23 = unaff_x23 + 1;
    if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x23) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


