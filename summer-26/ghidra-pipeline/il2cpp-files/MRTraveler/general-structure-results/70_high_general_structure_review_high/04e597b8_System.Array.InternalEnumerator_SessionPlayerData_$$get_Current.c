/*
FUNCTION_NAME: System.Array.InternalEnumerator<SessionPlayerData>$$get_Current
ENTRY_POINT: 04e597b8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04e59b08) */
/* WARNING: Removing unreachable block (ram,0x04e59bb8) */

void System_Array_InternalEnumerator<SessionPlayerData>__get_Current(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x23;
  undefined4 unaff_w25;
  long unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  puVar2 = PTR_DAT_08e6baa0;
  uVar4 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e6baa0,unaff_w25);
  lVar5 = thunk_FUN_03cf5234(*unaff_x28);
  FUN_077e9ae8(lVar5,uVar4,unaff_w25,0);
  uVar4 = FUN_03c8f97c(*(undefined8 *)puVar2,unaff_w25);
  lVar6 = thunk_FUN_03cf5234(*unaff_x28);
  FUN_077e9ae8(lVar6,uVar4,unaff_w25,0);
  if (unaff_x23 != (long *)0x0) {
    lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03cf1244(lVar10);
    }
    lVar11 = *unaff_x23;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_04e5992c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348();
LAB_04e5992c:
    puVar2 = PTR_DAT_08e6a288;
    plVar8 = (long *)(*(code *)*puVar7)();
    puVar3 = PTR_DAT_08e6a290;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    do {
      lVar10 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_04e5999c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)puVar3,0);
LAB_04e5999c:
      uVar12 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto LAB_04e59afc;
        lVar6 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar12 == 0) goto LAB_04e59ad4;
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_04e59abc;
      }
      lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03cf1244(lVar10);
      }
      lVar11 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto FUN_04e59a14;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348(plVar8,lVar10,0);
FUN_04e59a14:
      (*(code *)*puVar7)(plVar8,puVar7[1]);
      *(undefined4 *)(unaff_x29 + -0xc) = 0;
      uVar12 = FUN_04e59c8c();
      iVar1 = *(int *)(unaff_x29 + -0xc);
      if ((uVar12 & 1) == 0) {
        if (iVar1 < (int)unaff_x21) {
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          uVar12 = FUN_077e9ba0(lVar6,iVar1,0);
          if ((uVar12 & 1) == 0) {
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            FUN_077e9b24(lVar5,iVar1,0);
          }
        }
      }
      else {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_077e9b24(lVar6,iVar1,0);
      }
    } while( true );
  }
LAB_04e59ba4:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_04e59abc:
    if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
      puVar7 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_04e59af0;
    }
  }
LAB_04e59ad4:
  puVar7 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)puVar2,0);
LAB_04e59af0:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
LAB_04e59afc:
  if (0 < (int)unaff_x21) {
    if (lVar5 == 0) goto LAB_04e59ba4;
    uVar12 = 0;
    do {
      uVar9 = FUN_077e9ba0(lVar5,uVar12 & 0xffffffff,0);
      if ((uVar9 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_04e59ba4;
        if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        FUN_04e5601c();
      }
      uVar12 = uVar12 + 1;
    } while (unaff_x21 != uVar12);
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


