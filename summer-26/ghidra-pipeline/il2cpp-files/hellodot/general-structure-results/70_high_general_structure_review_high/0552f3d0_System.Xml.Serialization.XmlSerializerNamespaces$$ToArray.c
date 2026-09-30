/*
FUNCTION_NAME: System.Xml.Serialization.XmlSerializerNamespaces$$ToArray
ENTRY_POINT: 0552f3d0
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0552f5e0) */

long System_Xml_Serialization_XmlSerializerNamespaces__ToArray
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long in_x9;
  ulong uVar11;
  int *in_x10;
  int *piVar12;
  long in_x11;
  long *unaff_x20;
  
                    /* try { // try from 0552f3d0 to 0562f3db has its CatchHandler @ 0552f4fc */
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar5 = (undefined8 *)FUN_02ce0a7c();
      goto LAB_0552f400;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar5 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_0552f400:
  puVar2 = PTR_DAT_065c8a48;
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar4 = PTR_DAT_06616758;
  puVar3 = PTR_DAT_065c8d08;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  do {
    lVar9 = *plVar6;
    lVar8 = *(long *)puVar3;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
                    /* try { // try from 0552f43c to 0562f457 has its CatchHandler @ 0552f510 */
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar8) {
                    /* try { // try from 0552f46c to 0562f477 has its CatchHandler @ 0552f50c */
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0552f478;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar6,lVar8,0);
LAB_0552f478:
    uVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar11 & 1) == 0) {
      lVar8 = 0;
      goto LAB_0552f540;
    }
                    /* try { // try from 0552f488 to 0562f493 has its CatchHandler @ 0552f51c */
    lVar9 = *plVar6;
    lVar8 = *(long *)puVar3;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
                    /* try { // try from 0552f49c to 0562f4af has its CatchHandler @ 0552f524 */
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto System_Xml_Serialization_XmlSerializerNamespaces__get_NamespaceList;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
                    /* try { // try from 0552f4b4 to 0562f4bf has its CatchHandler @ 0552f520 */
      } while (uVar11 != 0);
    }
                    /* try { // try from 0552f4c0 to 0562f4ef has its CatchHandler @ 0552f2d4 */
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar6,lVar8,1);
System_Xml_Serialization_XmlSerializerNamespaces__get_NamespaceList:
    plVar7 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(plVar7);
    }
    lVar8 = FUN_055316a0(plVar7,plVar7[0xc]);
  } while (lVar8 == 0);
  *unaff_x20 = (long)plVar7;
LAB_0552f540:
  plVar6 = (long *)thunk_FUN_02cea798(plVar6,*(undefined8 *)puVar2);
  if (plVar6 != (long *)0x0) {
    lVar10 = *plVar6;
    lVar9 = *(long *)puVar2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0552f5a0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar6,lVar9,0);
LAB_0552f5a0:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
  }
  return lVar8;
}


