/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$IsVersioned
ENTRY_POINT: 06465d58
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsSerializer__IsVersioned(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 in_w8;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x19 + 0xabc) = in_w8;
  puVar1 = System_Collections_Generic_HashSet<Vector3>_TypeInfo;
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar2 = thunk_FUN_02ef170c();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08440();
  }
  lVar2 = *(long *)puVar1;
  plVar3 = (long *)thunk_FUN_02ef170c();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08440();
  }
  lVar5 = *plVar3;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar2) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_06465de0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_02eea86c(plVar3,lVar2,0);
LAB_06465de0:
                    /* WARNING: Could not recover jumptable at 0x06465df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


