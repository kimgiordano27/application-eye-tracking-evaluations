/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$InternalDeserialize_2_Version
ENTRY_POINT: 064658f4
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_6
*/


void Unity_VisualScripting_FullSerializer_fsSerializer__InternalDeserialize_2_Version
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 uVar8;
  
  if ((*(byte *)(unaff_x19 + 0xab8) & 1) == 0) {
    FUN_02f07e70(System_Collections_Generic_HashSet<Vector3>_TypeInfo);
    *(undefined1 *)(unaff_x19 + 0xab8) = 1;
  }
  puVar1 = System_Collections_Generic_HashSet<Vector3>_TypeInfo;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar8 = *(undefined8 *)System_Collections_Generic_HashSet<Vector3>_TypeInfo;
  lVar2 = thunk_FUN_02ef170c(param_2,uVar8);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08440(param_2,uVar8);
  }
  lVar2 = *(long *)puVar1;
  plVar3 = (long *)thunk_FUN_02ef170c(param_2,lVar2);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08440(param_2,lVar2);
  }
  lVar5 = *plVar3;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar2) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
        goto LAB_0646599c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_02eea86c(plVar3,lVar2,0xb);
LAB_0646599c:
                    /* WARNING: Could not recover jumptable at 0x064659ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


