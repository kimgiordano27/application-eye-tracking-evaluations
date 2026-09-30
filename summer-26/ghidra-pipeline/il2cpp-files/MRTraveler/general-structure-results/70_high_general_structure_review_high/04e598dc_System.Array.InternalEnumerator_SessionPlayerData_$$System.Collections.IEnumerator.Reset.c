/*
FUNCTION_NAME: System.Array.InternalEnumerator<SessionPlayerData>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 04e598dc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04e59b08) */
/* WARNING: Removing unreachable block (ram,0x04e59bb8) */

void System_Array_InternalEnumerator<SessionPlayerData>__System_Collections_IEnumerator_Reset(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x27;
  long unaff_x29;
  
  lVar3 = FUN_03cf1244();
  lVar7 = *unaff_x23;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_04e5992c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348();
LAB_04e5992c:
  puVar1 = PTR_DAT_08e6a288;
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar2 = PTR_DAT_08e6a290;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar3 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04e5999c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar2,0);
LAB_04e5999c:
    uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_04e59afc;
      lVar3 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar8 == 0) goto LAB_04e59ad4;
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244(lVar3);
    }
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto FUN_04e59a14;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar5,lVar3,0);
FUN_04e59a14:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
    *(undefined4 *)(unaff_x29 + -0xc) = 0;
    uVar8 = FUN_04e59c8c();
    if ((uVar8 & 1) == 0) {
      if (*(int *)(unaff_x29 + -0xc) < (int)unaff_x21) {
        if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar8 = FUN_077e9ba0();
        if ((uVar8 & 1) == 0) {
          if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          FUN_077e9b24();
        }
      }
    }
    else {
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_077e9b24();
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_04e59af0;
    }
  }
LAB_04e59ad4:
  puVar4 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar1,0);
LAB_04e59af0:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_04e59afc:
  if (0 < (int)unaff_x21) {
    if (unaff_x22 == 0) {
LAB_04e59ba4:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar8 = 0;
    do {
      uVar6 = FUN_077e9ba0();
      if ((uVar6 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_04e59ba4;
        if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        FUN_04e5601c();
      }
      uVar8 = uVar8 + 1;
    } while (unaff_x21 != uVar8);
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


