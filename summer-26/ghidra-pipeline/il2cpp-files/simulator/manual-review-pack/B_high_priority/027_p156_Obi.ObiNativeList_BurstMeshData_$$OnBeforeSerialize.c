/*
FUNCTION_NAME: Obi.ObiNativeList<BurstMeshData>$$OnBeforeSerialize
ENTRY_POINT: 0244bc88
PROGRAM: simulator-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0244bd40) */
/* WARNING: Removing unreachable block (ram,0x0244bd3c) */
/* WARNING: Removing unreachable block (ram,0x0244bd80) */

void Obi_ObiNativeList<BurstMeshData>__OnBeforeSerialize(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *in_x10;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  
code_r0x0244bc88:
  puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  do {
    (*(code *)*puVar1)();
    Obi_ObiNativeList<BurstLineMeshData>__WipeToValue();
    lVar2 = *unaff_x23;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto Obi_ObiNativeList<BurstMeshData>__Dispose;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_018a8460();
Obi_ObiNativeList<BurstMeshData>__Dispose:
    uVar3 = (*(code *)*puVar1)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x23 == (long *)0x0) goto LAB_0244bd30;
      lVar2 = *unaff_x23;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 == 0) goto Obi_ObiNativeList<BurstMeshData>__OnAfterDeserialize;
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_018a835c(lVar2);
    }
    param_1 = *unaff_x23;
    uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar3 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == lVar2) goto code_r0x0244bc88;
        uVar3 = uVar3 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_018a8460();
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_03497240) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_0244bd24;
    }
  }
Obi_ObiNativeList<BurstMeshData>__OnAfterDeserialize:
  puVar1 = (undefined8 *)FUN_018a8460();
LAB_0244bd24:
  (*(code *)*puVar1)();
LAB_0244bd30:
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


