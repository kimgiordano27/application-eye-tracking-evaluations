/*
FUNCTION_NAME: Unity.Entities.Serialization.SerializeUtility.WorldDeserializationStatus$$Dispose
ENTRY_POINT: 0640c8f4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_Entities_Serialization_SerializeUtility_WorldDeserializationStatus__Dispose(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  
  if (0 < (int)*(ulong *)(param_1 + 0x18)) {
    uVar3 = 0;
    uVar4 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
    lVar2 = 0x800000000;
    do {
      if (uVar4 <= uVar3) {
LAB_0640c9c8:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar5 = *(long *)(unaff_x20 + 0x18);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      if ((ulong)*(uint *)(lVar5 + 0x18) <= uVar3 + 8) goto LAB_0640c9c8;
      lVar1 = lVar2 >> 0x20;
      lVar2 = lVar2 + 0x100000000;
      *(undefined1 *)(lVar5 + lVar1 + 0x20) = *(undefined1 *)(param_1 + 0x20 + uVar3);
      uVar4 = (ulong)*(uint *)(param_1 + 0x18);
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)*(uint *)(param_1 + 0x18));
  }
  return;
}


