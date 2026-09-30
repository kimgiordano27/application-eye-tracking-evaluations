/*
FUNCTION_NAME: Obi.ObiNativeList<BurstMeshData>$$Dispose
ENTRY_POINT: 0244bbe0
PROGRAM: simulator-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0244bd40) */
/* WARNING: Removing unreachable block (ram,0x0244bd3c) */
/* WARNING: Removing unreachable block (ram,0x0244bd80) */

void Obi_ObiNativeList<BurstMeshData>__Dispose(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong in_x9;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  
  do {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
        goto Obi_ObiNativeList<BurstMeshData>__Dispose;
      }
      in_x9 = in_x9 - 1;
      piVar5 = piVar5 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_018a8460();
Obi_ObiNativeList<BurstMeshData>__Dispose:
      uVar2 = (*(code *)*puVar1)();
      if ((uVar2 & 1) == 0) {
        if (unaff_x23 == (long *)0x0) goto LAB_0244bd30;
        lVar3 = *unaff_x23;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 == 0) goto Obi_ObiNativeList<BurstMeshData>__OnAfterDeserialize;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_0244bcf0;
      }
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_018a835c(lVar3);
      }
      lVar4 = *unaff_x23;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == lVar3) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0244bbd0;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_018a8460();
LAB_0244bbd0:
      (*(code *)*puVar1)();
      Obi_ObiNativeList<BurstLineMeshData>__WipeToValue();
      param_1 = *unaff_x23;
      param_3 = *unaff_x24;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
LAB_0244bcf0:
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_03497240) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
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


