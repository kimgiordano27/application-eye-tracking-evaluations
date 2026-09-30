/*
FUNCTION_NAME: OVRPlugin$$SetBoundaryVisible
ENTRY_POINT: 02c21d48
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c22074) */

undefined4 OVRPlugin__SetBoundaryVisible(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  uint *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  undefined4 uVar14;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar15;
  
  FUN_017fc350(*(undefined8 *)(param_1 + 0x298));
  FUN_017fc350(PTR_DAT_0380baa8);
  *(undefined1 *)(unaff_x20 + 0xf18) = 1;
  plVar4 = *(long **)(unaff_x24 + 0x10);
  if ((plVar4 == (long *)0x0) ||
     (plVar4 = (long *)(**(code **)(*plVar4 + 0x388))(plVar4,*(undefined8 *)(*plVar4 + 0x390)),
     plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  lVar8 = *plVar4;
  uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_037f9958) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_02c21dd8;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined8 *)FUN_0185dba8(plVar4,*(long *)PTR_DAT_037f9958,0);
LAB_02c21dd8:
  plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
  puVar3 = PTR_DAT_0380baa8;
  puVar2 = PTR_DAT_037f3298;
  puVar1 = PTR_DAT_037f2c00;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  do {
    lVar9 = *plVar4;
    lVar8 = *(long *)puVar2;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02c21e50;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_0185dba8(plVar4,lVar8,0);
LAB_02c21e50:
    uVar11 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar11 & 1) == 0) {
      uVar14 = 0;
      uVar10 = 8;
LAB_02c21f94:
      puVar1 = PTR_DAT_037f3288;
      plVar4 = (long *)thunk_FUN_01861ac0(plVar4,*(undefined8 *)PTR_DAT_037f3288);
      if (plVar4 == (long *)0x0) goto LAB_02c22008;
      lVar8 = *plVar4;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 == 0) goto LAB_02c21fe0;
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar4;
    lVar8 = *(long *)puVar2;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_02c21eb0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_0185dba8(plVar4,lVar8,1);
LAB_02c21eb0:
    lVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar15 = *(undefined8 *)puVar1;
    lVar9 = thunk_FUN_01861ac0(lVar8,uVar15);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944(lVar8,uVar15);
    }
    if (0 < unaff_w21) {
      uVar10 = (uint)*(undefined8 *)(lVar9 + 0x18);
      if (0 < (int)uVar10) {
        uVar13 = 0;
        while( true ) {
          if (uVar10 <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5b0();
          }
          if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          if (*(uint *)(unaff_x23 + 0x18) <= unaff_w22 + uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5b0();
          }
          if (*(ushort *)(unaff_x23 + (long)(int)(unaff_w22 + uVar13) * 2 + 0x20) !=
              (ushort)*(byte *)(lVar9 + (int)uVar13 + 0x20)) break;
          if (uVar10 - 1 == uVar13) {
            *unaff_x19 = uVar10;
            plVar6 = *(long **)(unaff_x24 + 0x10);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            plVar6 = (long *)(**(code **)(*plVar6 + 0x308))
                                       (plVar6,lVar9,*(undefined8 *)(*plVar6 + 0x310));
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc944();
            }
            puVar7 = (undefined4 *)thunk_FUN_01861d10();
            uVar14 = *puVar7;
            uVar10 = 7;
            goto LAB_02c21f94;
          }
          uVar13 = uVar13 + 1;
          if ((unaff_w21 <= (int)uVar13) || ((int)uVar10 <= (int)uVar13)) break;
        }
      }
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_02c21ffc;
    }
  }
LAB_02c21fe0:
  puVar5 = (undefined8 *)FUN_0185dba8(plVar4,*(long *)puVar1,0);
LAB_02c21ffc:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_02c22008:
  if ((uVar10 | 8) == 8) {
    uVar14 = 0xffffffff;
    *unaff_x19 = 0;
  }
  return uVar14;
}


