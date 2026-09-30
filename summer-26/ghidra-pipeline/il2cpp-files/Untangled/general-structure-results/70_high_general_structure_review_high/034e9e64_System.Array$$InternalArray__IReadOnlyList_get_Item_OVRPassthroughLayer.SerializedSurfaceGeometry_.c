/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 034e9e64
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x034e9f6c) */
/* WARNING: Removing unreachable block (ram,0x034e9f98) */

void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  
code_r0x034e9e64:
  puVar4 = (undefined8 *)FUN_02eea86c();
  do {
    plVar5 = (long *)(*(code *)*puVar4)();
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(long *)(*plVar5 + 0x40) != *(long *)(*unaff_x23 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440();
    }
    puVar6 = (uint *)thunk_FUN_02ef195c();
    uVar2 = *puVar6;
    uVar1 = *(uint *)(unaff_x20 + 0x58) & uVar2;
    if ((uVar2 & (unaff_w19 ^ 0xffffffff)) == 0) {
      if (uVar1 != uVar2) {
        FUN_034ec894();
      }
    }
    else if (uVar1 == uVar2) {
      FUN_034ec8d0();
    }
    lVar7 = *unaff_x21;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_034e9e1c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_02eea86c();
LAB_034e9e1c:
    uVar8 = (*(code *)*puVar4)();
    puVar3 = PTR_DAT_06d01f60;
    if ((uVar8 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_02ef170c();
      if (plVar5 == (long *)0x0) goto LAB_034e9f60;
      lVar7 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_034e9f38;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *unaff_x21;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 == 0) goto code_r0x034e9e64;
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    while (*(long *)(piVar9 + -2) != *unaff_x22) {
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
      if (uVar8 == 0) goto code_r0x034e9e64;
    }
    puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_034e9f54;
    }
  }
LAB_034e9f38:
  puVar4 = (undefined8 *)FUN_02eea86c(plVar5,*(long *)puVar3,0);
LAB_034e9f54:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_034e9f60:
  *(uint *)(unaff_x20 + 0x58) = unaff_w19;
  return;
}


