/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 02ea2210
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02ea247c) */
/* WARNING: Removing unreachable block (ram,0x02ea248c) */
/* WARNING: Removing unreachable block (ram,0x02ea2494) */
/* WARNING: Removing unreachable block (ram,0x02ea24bc) */
/* WARNING: Removing unreachable block (ram,0x02ea24a0) */
/* WARNING: Removing unreachable block (ram,0x02ea24ac) */
/* WARNING: Removing unreachable block (ram,0x02ea24cc) */
/* WARNING: Removing unreachable block (ram,0x02ea2510) */

void System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_Reset
               (void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x29;
  
  puVar1 = (undefined8 *)FUN_01ecb238();
  lVar2 = (*(code *)*puVar1)();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = FUN_0390b368(lVar2,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = FUN_0390b70c(lVar2,0);
  lVar4 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x26) {
        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 10) * 0x10 + 0x138);
        goto LAB_02ea23d8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02ea23d8:
  uVar3 = (*(code *)*puVar1)();
  uVar3 = FUN_03405678(*(undefined8 *)
                        Method_Oculus_Platform_Samples_SimplePlatformSample_DataEntry_leaderboardGetCallback__
                       ,uVar3,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar3,uVar3);
  }
  FUN_0390b840(lVar2,uVar3,0);
  lVar2 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x26) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar6 + 0xe) * 0x10 + 0x138);
        goto LAB_02ea2468;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02ea2468:
  (*(code *)*puVar1)();
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


