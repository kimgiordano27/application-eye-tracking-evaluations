/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 037850c4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


bool System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_Reset
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long *plVar7;
  undefined8 *unaff_x21;
  ulong uVar8;
  long unaff_x22;
  int unaff_w23;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_037850e4;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_037850e4:
  iVar1 = (*(code *)*puVar2)();
  plVar7 = (long *)*unaff_x21;
  if (unaff_w23 < iVar1) {
    if (plVar7 == (long *)0x0) {
LAB_03785210:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar3 = *(long *)(unaff_x22 + 0x20);
    uVar8 = (ulong)*(uint *)((long)unaff_x21 + 0x24);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) goto LAB_037851d8;
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
  }
  else {
    if (plVar7 == (long *)0x0) goto LAB_03785210;
    lVar3 = *(long *)(unaff_x22 + 0x20);
    uVar8 = unaff_x21[1];
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) goto LAB_037851d8;
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
  }
  puVar2 = (undefined8 *)FUN_02d9a5d4(plVar7,lVar3,3);
LAB_037851e8:
  (*(code *)*puVar2)(plVar7,uVar8,puVar2[1]);
  return unaff_w23 < iVar1;
LAB_037851d8:
  puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
  goto LAB_037851e8;
}


