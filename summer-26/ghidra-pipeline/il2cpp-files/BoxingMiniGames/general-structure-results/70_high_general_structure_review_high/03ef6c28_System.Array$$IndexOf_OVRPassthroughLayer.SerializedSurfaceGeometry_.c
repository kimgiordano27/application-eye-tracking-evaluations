/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 03ef6c28
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03ef6f90) */
/* WARNING: Removing unreachable block (ram,0x03ef6fa4) */

long System_Array__IndexOf<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  int *piVar6;
  long unaff_x19;
  size_t unaff_x22;
  long *unaff_x23;
  void *unaff_x24;
  void *unaff_x25;
  void *unaff_x26;
  long unaff_x28;
  long *plVar7;
  long unaff_x29;
  
  if (in_x9 != 0) {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_03ef6c68;
      }
      in_x9 = in_x9 + -1;
      piVar6 = piVar6 + 4;
    } while (in_x9 != 0);
  }
                    /* try { // try from 03ef6c4c to 03ff6c67 has its CatchHandler @ 03ef6dd0 */
  puVar1 = (undefined8 *)FUN_0367cd30();
LAB_03ef6c68:
  uVar2 = (*(code *)*puVar1)();
  if ((uVar2 & 1) == 0) {
    if (unaff_x28 == 0) {
      unaff_x28 = **(long **)(*(long *)(PTR_DAT_079f4610 + 0x90) + 0xb8);
    }
  }
  else {
    lVar3 = FUN_05ca6890(0x10,0);
                    /* try { // try from 03ef6c88 to 03ff6c97 has its CatchHandler @ 03ef6dcc */
    if (lVar3 == 0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      goto LAB_03ef7090;
    }
    FUN_05ca401c(lVar3);
    do {
      plVar7 = *(long **)(unaff_x29 + -0x18);
      if (plVar7 == (long *)0x0) {
        if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        goto LAB_03ef7090;
      }
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
                    /* try { // try from 03ef6cb4 to 03ff6cbf has its CatchHandler @ 03ef6dd8 */
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc(lVar4);
                    /* try { // try from 03ef6cc0 to 03ff6d87 has its CatchHandler @ 03ef697c */
      }
      lVar5 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar4) {
            lVar4 = lVar5 + (long)*piVar6 * 0x10 + 0x138;
            goto LAB_03ef6d0c;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      lVar4 = FUN_0367cd30(plVar7,lVar4,0);
LAB_03ef6d0c:
      lVar4 = *(long *)(lVar4 + 8);
      *(void **)(unaff_x29 + -0x10) = unaff_x24;
      (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar7,unaff_x29 + -0x10);
      memcpy(unaff_x26,unaff_x24,unaff_x22);
      FUN_05ca3ecc(lVar3);
      memcpy(unaff_x25,unaff_x26,unaff_x22);
      uVar2 = FUN_03642bb8(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20));
      if ((uVar2 & 1) != 0) {
        lVar5 = *(long *)(unaff_x19 + 0x38);
        lVar4 = *(long *)(lVar5 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0367c9fc();
          lVar5 = *(long *)(unaff_x19 + 0x38);
        }
        FUN_036436fc(lVar4,*(undefined8 *)(lVar5 + 0x28),*(undefined8 *)(unaff_x29 + -0x30));
        FUN_05ca401c(lVar3,*(undefined8 *)(unaff_x29 + -0x10),0);
      }
      plVar7 = *(long **)(unaff_x29 + -0x18);
      if (plVar7 == (long *)0x0) {
        if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        goto LAB_03ef7090;
      }
      lVar4 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x23) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_03ef6e08;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_0367cd30(plVar7,*unaff_x23,0);
LAB_03ef6e08:
      uVar2 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    } while ((uVar2 & 1) != 0);
    unaff_x28 = FUN_05ca69ec(lVar3,0);
  }
  plVar7 = *(long **)(unaff_x29 + -0x18);
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_079f4598) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03ef6eb0;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30(plVar7,*(long *)PTR_DAT_079f4598,0);
LAB_03ef6eb0:
    (*(code *)*puVar1)(plVar7,puVar1[1]);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return unaff_x28;
  }
LAB_03ef7090:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


