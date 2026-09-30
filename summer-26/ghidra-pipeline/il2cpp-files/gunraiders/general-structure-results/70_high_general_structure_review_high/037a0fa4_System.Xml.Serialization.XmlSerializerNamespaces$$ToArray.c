/*
FUNCTION_NAME: System.Xml.Serialization.XmlSerializerNamespaces$$ToArray
ENTRY_POINT: 037a0fa4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x037a11c8) */

long System_Xml_Serialization_XmlSerializerNamespaces__ToArray(long param_1)

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
  long *in_x10;
  int *piVar12;
  long *unaff_x20;
  
  if (in_x9 != 0) {
    piVar12 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *in_x10) {
                    /* catch() { ... } // from try @ 037a0ff4 with catch @ 037a0fdc
                       catch() { ... } // from try @ 037a1074 with catch @ 037a0fdc */
        puVar5 = (undefined8 *)(param_1 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_037a0fe8;
      }
      in_x9 = in_x9 + -1;
      piVar12 = piVar12 + 4;
    } while (in_x9 != 0);
  }
  puVar5 = (undefined8 *)FUN_01c72498();
LAB_037a0fe8:
  puVar2 = PTR_DAT_0422fce8;
                    /* try { // try from 037a0ff0 to 038a0ff3 has its CatchHandler @ 037a1000 */
                    /* try { // try from 037a0ff4 to 038a1017 has its CatchHandler @ 037a0fdc */
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar4 = Method_System_Security_Cryptography_DSACryptoServiceProvider_HashData__;
  puVar3 = PTR_DAT_04230960;
                    /* catch(type#1 @ 04025298) { ... } // from try @ 037a0ff0 with catch @ 037a1000
                        */
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  do {
    lVar9 = *plVar6;
                    /* try { // try from 037a1018 to 038a1023 has its CatchHandler @ 037a10a8 */
    lVar8 = *(long *)puVar3;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_037a1060;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01c72498(plVar6,lVar8,0);
                    /* try { // try from 037a1050 to 038a1067 has its CatchHandler @ 037a10a4 */
LAB_037a1060:
                    /* try { // try from 037a1068 to 038a1073 has its CatchHandler @ 037a10a0 */
    uVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar11 & 1) == 0) {
      lVar8 = 0;
      goto LAB_037a1128;
    }
    lVar9 = *plVar6;
                    /* try { // try from 037a1074 to 038a10d3 has its CatchHandler @ 037a0fdc */
    lVar8 = *(long *)puVar3;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_037a10c0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
                    /* catch(type#1 @ 04025298) { ... } // from try @ 037a1068 with catch @ 037a10a0
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 037a1050 with catch @ 037a10a4
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 037a1018 with catch @ 037a10a8
                        */
    puVar5 = (undefined8 *)FUN_01c72498(plVar6,lVar8,1);
LAB_037a10c0:
    plVar7 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar7);
    }
    lVar8 = FUN_037a3288(plVar7,plVar7[0xc]);
  } while (lVar8 == 0);
  *unaff_x20 = (long)plVar7;
LAB_037a1128:
  plVar6 = (long *)thunk_FUN_01c495e4(plVar6,*(undefined8 *)puVar2);
  if (plVar6 != (long *)0x0) {
    lVar10 = *plVar6;
    lVar9 = *(long *)puVar2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_037a1188;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01c72498(plVar6,lVar9,0);
LAB_037a1188:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
  }
  return lVar8;
}


