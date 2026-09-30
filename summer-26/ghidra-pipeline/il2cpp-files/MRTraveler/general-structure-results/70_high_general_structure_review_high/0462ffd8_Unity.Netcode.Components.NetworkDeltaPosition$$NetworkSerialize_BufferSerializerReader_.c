/*
FUNCTION_NAME: Unity.Netcode.Components.NetworkDeltaPosition$$NetworkSerialize<BufferSerializerReader>
ENTRY_POINT: 0462ffd8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0463036c) */

undefined8
Unity_Netcode_Components_NetworkDeltaPosition__NetworkSerialize<BufferSerializerReader>(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x21;
  
  FUN_03cf1244();
                    /* catch() { ... } // from try @ 0462ffc0 with catch @ 0462ffe4 */
  plVar5 = (long *)thunk_FUN_03cf5138();
                    /* try { // try from 0462ffe8 to 0472fff3 has its CatchHandler @ 04630008 */
  if (plVar5 == (long *)0x0) {
    lVar8 = **(long **)(unaff_x19 + 0x38);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03cf1244(lVar8);
    }
    lVar10 = *unaff_x21;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar8) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0463014c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348();
LAB_0463014c:
    plVar5 = (long *)(*(code *)*puVar6)();
    puVar2 = PTR_DAT_08e6a290;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar8 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e6a290) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_046301b4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)PTR_DAT_08e6a290,0);
LAB_046301b4:
    uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar11 & 1) == 0) {
      System_Data_UniqueConstraint__NonVirtualCheckState(0);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc();
    }
    lVar8 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x38);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03cf1244(lVar8);
    }
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar8) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_04630228;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar5,lVar8,0);
LAB_04630228:
    uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    lVar8 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_04630284;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar2,0);
LAB_04630284:
    uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    bVar3 = (uVar11 & 1) == 0;
    uVar9 = 8;
    if (bVar3) {
      uVar9 = 0xf;
    }
    uVar1 = 0;
    if (bVar3) {
      uVar1 = uVar7;
    }
    if (plVar5 != (long *)0x0) {
      lVar8 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e6a288) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_04630300;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)PTR_DAT_08e6a288,0);
LAB_04630300:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
    if ((uVar9 | 8) != 8) {
      return uVar1;
    }
  }
  else {
                    /* try { // try from 0462fff4 to 0472ffff has its CatchHandler @ 0462ff0c */
    lVar8 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                    /* try { // try from 04630000 to 04730007 has its CatchHandler @ 04630008 */
      lVar8 = FUN_03cf1244(lVar8);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0462ffe8 with catch @ 04630008
                       catch(type#2 @ 00000000) { ... } // from try @ 04630000 with catch @ 04630008
                        */
    }
                    /* try { // try from 0463000c to 04730067 has its CatchHandler @ 0463000c
                       catch() { ... } // from try @ 0463000c with catch @ 0463000c
                       catch() { ... } // from try @ 04630088 with catch @ 0463000c
                       catch() { ... } // from try @ 046300c4 with catch @ 0463000c
                       catch() { ... } // from try @ 046300f4 with catch @ 0463000c */
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar8) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_046300ac;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar5,lVar8,0);
LAB_046300ac:
    iVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (iVar4 == 1) {
      lVar8 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03cf1244(lVar8);
      }
      lVar10 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_04630124;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_03cf1348(plVar5,lVar8,0);
LAB_04630124:
                    /* WARNING: Could not recover jumptable at 0x0463013c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*(code *)*puVar6)(plVar5,0,puVar6[1]);
      return uVar7;
    }
    if (iVar4 == 0) {
      System_Data_UniqueConstraint__NonVirtualCheckState(0);
      goto LAB_04630360;
    }
  }
  FUN_077709fc(0);
LAB_04630360:
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc();
}


