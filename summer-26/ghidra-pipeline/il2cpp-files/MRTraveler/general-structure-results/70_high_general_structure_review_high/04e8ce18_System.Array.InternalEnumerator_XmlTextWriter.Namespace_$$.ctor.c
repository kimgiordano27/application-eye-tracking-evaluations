/*
FUNCTION_NAME: System.Array.InternalEnumerator<XmlTextWriter.Namespace>$$.ctor
ENTRY_POINT: 04e8ce18
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04e8d164) */
/* WARNING: Removing unreachable block (ram,0x04e8d110) */

long System_Array_InternalEnumerator<XmlTextWriter_Namespace>___ctor
               (undefined8 param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x6e4) & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e6a288);
    FUN_03c8f898(PTR_DAT_08e6a290);
    FUN_03c8f898(PTR_DAT_08e69768);
    FUN_03c8f898(PTR_DAT_08e69a78);
    FUN_03c8f898(PTR_DAT_08e846c8);
    FUN_03c8f898(PTR_DAT_08e697c8);
    FUN_03c8f898(PTR_DAT_08e697c0);
    *(undefined1 *)(unaff_x20 + 0x6e4) = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar9 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03cf1244(lVar9);
    }
    if (*param_2 != lVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fecc(param_2);
    }
    iVar4 = FUN_04e915e4(param_2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x40)
                        );
    if (iVar4 != 0) {
      lVar9 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e697c0);
      FUN_052124c0(lVar9,*(undefined8 *)PTR_DAT_08e697c8);
      plVar5 = (long *)FUN_04e918ec(param_2,*(undefined8 *)
                                             (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x50));
      puVar3 = PTR_DAT_08e6a290;
      puVar2 = PTR_DAT_08e69a78;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      do {
        lVar10 = *plVar5;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_04e8cf68;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar3,0);
LAB_04e8cf68:
        uVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar12 & 1) == 0) {
          if (plVar5 == (long *)0x0) goto LAB_04e8d104;
          lVar10 = *plVar5;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 == 0) goto LAB_04e8d0a0;
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_04e8d088;
        }
        lVar10 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x58);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_03cf1244(lVar10);
        }
        lVar11 = *plVar5;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_04e8cfe0;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_03cf1348(plVar5,lVar10,0);
LAB_04e8cfe0:
        plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar10 = *(long *)(lVar9 + 0x10);
        lVar11 = *(long *)puVar2;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
          thunk_FUN_03d233cc();
        }
        else {
          FUN_05212cf4(lVar9,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
    lVar9 = param_2[5];
    if (lVar9 != 0) {
      lVar10 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e697c0);
      FUN_052125e8(lVar10,lVar9,*(undefined8 *)PTR_DAT_08e846c8);
      return lVar10;
    }
  }
  return 0;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_04e8d088:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_04e8d0f8;
    }
  }
LAB_04e8d0a0:
  puVar6 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)PTR_DAT_08e6a288,0);
LAB_04e8d0f8:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_04e8d104:
  if (param_2[5] != 0) {
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_05212f00(lVar9,param_2[5],*(undefined8 *)PTR_DAT_08e69768);
  }
  return lVar9;
}


