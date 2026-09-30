/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Message_GetNetSyncSessionArray
ENTRY_POINT: 08ff0c5c
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Oculus_Platform_CAPI__ovr_Message_GetNetSyncSessionArray(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *in_x9;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  undefined8 in_stack_00000020;
  
  (*in_x9)();
  if ((*(uint *)(unaff_x19 + 0x30) >> 1 & 1) != 0) {
    plVar5 = *(long **)(unaff_x19 + 0x28);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0ac75cb8) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 6) * 0x10 + 0x138);
          goto LAB_08ff0cd4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(plVar5,*(long *)PTR_DAT_0ac75cb8,6);
LAB_08ff0cd4:
    (*(code *)*puVar1)(&stack0x00000014,plVar5,puVar1[1]);
  }
  return;
}


