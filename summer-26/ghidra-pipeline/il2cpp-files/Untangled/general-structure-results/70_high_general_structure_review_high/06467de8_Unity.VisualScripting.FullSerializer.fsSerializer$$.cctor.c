/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$.cctor
ENTRY_POINT: 06467de8
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsSerializer___cctor
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  plVar1 = (long *)(**(code **)(param_1 + 0x358))(param_2,param_3,*(undefined8 *)(param_1 + 0x360));
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar3 = *plVar1;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)System_Collections_Generic_HashSet<Vector3>_TypeInfo) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xc) * 0x10 + 0x138);
        goto LAB_06467e70;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_02eea86c(plVar1,*(long *)System_Collections_Generic_HashSet<Vector3>_TypeInfo,0xc);
LAB_06467e70:
                    /* WARNING: Could not recover jumptable at 0x06467e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}


