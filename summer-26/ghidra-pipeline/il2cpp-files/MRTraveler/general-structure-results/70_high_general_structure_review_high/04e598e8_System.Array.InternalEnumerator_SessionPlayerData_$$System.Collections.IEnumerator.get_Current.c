/*
FUNCTION_NAME: System.Array.InternalEnumerator<SessionPlayerData>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 04e598e8
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

void System_Array_InternalEnumerator<SessionPlayerData>__System_Collections_IEnumerator_get_Current
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long unaff_x27;
  long unaff_x29;
  
  uVar8 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == param_3) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_04e5992c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_03cf1348();
LAB_04e5992c:
  puVar1 = PTR_DAT_08e6a288;
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = PTR_DAT_08e6a290;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04e5999c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)puVar2,0);
LAB_04e5999c:
    uVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_04e59afc;
      lVar6 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_04e59ad4;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03cf1244(lVar6);
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto FUN_04e59a14;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(plVar4,lVar6,0);
FUN_04e59a14:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
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
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_04e59af0;
    }
  }
LAB_04e59ad4:
  puVar3 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)puVar1,0);
LAB_04e59af0:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_04e59afc:
  if (0 < (int)unaff_x21) {
    if (unaff_x22 == 0) {
LAB_04e59ba4:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar8 = 0;
    do {
      uVar5 = FUN_077e9ba0();
      if ((uVar5 & 1) != 0) {
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


