/*
FUNCTION_NAME: Unity.Netcode.Components.NetworkDeltaPosition$$NetworkSerialize<BufferSerializerWriter>
ENTRY_POINT: 04630064
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0463036c) */

undefined8
Unity_Netcode_Components_NetworkDeltaPosition__NetworkSerialize<BufferSerializerWriter>
          (undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x21;
  
  lVar8 = *unaff_x21;
                    /* try { // try from 04630068 to 04730077 has its CatchHandler @ 046300a8 */
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
                    /* try { // try from 04630080 to 04730087 has its CatchHandler @ 046300a4 */
      if (*(long *)(piVar11 + -2) == param_2) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0463014c;
      }
      uVar10 = uVar10 - 1;
                    /* try { // try from 04630088 to 047300bf has its CatchHandler @ 0463000c */
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348();
LAB_0463014c:
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar2 = PTR_DAT_08e6a290;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar8 = *plVar5;
                    /* try { // try from 04630168 to 04730177 has its CatchHandler @ 046301a8 */
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
                    /* try { // try from 04630180 to 04730187 has its CatchHandler @ 046301a4 */
                    /* try { // try from 04630188 to 047301bf has its CatchHandler @ 0463010c */
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e6a290) {
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 04630168 with catch @ 046301a8
                        */
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_046301b4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)PTR_DAT_08e6a290,0);
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 04630180 with catch @ 046301a4
                        */
LAB_046301b4:
  uVar10 = (*(code *)*puVar4)(plVar5,puVar4[1]);
                    /* try { // try from 046301c0 to 047301c3 has its CatchHandler @ 046301e4 */
  if ((uVar10 & 1) == 0) {
    System_Data_UniqueConstraint__NonVirtualCheckState(0);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 04630380 to 04730387 has its CatchHandler @ 046303a4 */
    FUN_03c8f9fc();
  }
                    /* try { // try from 046301c4 to 047301e7 has its CatchHandler @ 0463010c */
  lVar8 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x38);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03cf1244(lVar8);
  }
  lVar9 = *plVar5;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar8) {
        puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_04630228;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348(plVar5,lVar8,0);
LAB_04630228:
  uVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
  lVar8 = *plVar5;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_04630284;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar2,0);
LAB_04630284:
  uVar10 = (*(code *)*puVar4)(plVar5,puVar4[1]);
  bVar3 = (uVar10 & 1) == 0;
  uVar7 = 8;
  if (bVar3) {
    uVar7 = 0xf;
  }
  uVar1 = 0;
  if (bVar3) {
    uVar1 = uVar6;
  }
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e6a288) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04630300;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)PTR_DAT_08e6a288,0);
LAB_04630300:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
  }
  if ((uVar7 | 8) == 8) {
    FUN_077709fc(0);
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc();
  }
  return uVar1;
}


