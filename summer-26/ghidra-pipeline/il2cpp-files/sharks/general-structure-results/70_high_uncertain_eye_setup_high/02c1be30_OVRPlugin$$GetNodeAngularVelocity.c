/*
FUNCTION_NAME: OVRPlugin$$GetNodeAngularVelocity
ENTRY_POINT: 02c1be30
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__GetNodeAngularVelocity(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  int *piVar13;
  long *unaff_x19;
  uint uVar14;
  undefined8 uVar15;
  uint unaff_w22;
  
  puVar1 = PTR_DAT_03804428;
  uVar15 = *(undefined8 *)PTR_DAT_0380b858;
  if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02bddb5c(uVar15,0);
  uVar5 = FUN_02be66d0();
  plVar9 = (long *)0x0;
  if ((uVar5 & 1) == 0) {
    plVar9 = unaff_x19;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc(*(long *)puVar1);
  }
  puVar2 = PTR_DAT_0380b8b8;
  plVar6 = (long *)FUN_02c1bb08();
  if ((unaff_w22 & 1) == 0) {
    if (plVar6 == (long *)0x0) goto LAB_02c1cd6c;
    lVar12 = *plVar6;
    lVar7 = *(long *)puVar2;
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar5 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar7) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02c1bf2c;
        }
        uVar5 = uVar5 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_0185dba8(plVar6,lVar7,0);
LAB_02c1bf2c:
    iVar4 = (*(code *)*puVar8)(plVar6,puVar8[1]);
    puVar3 = PTR_DAT_0380b8c0;
    if (iVar4 == 1) {
      lVar7 = *plVar6;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0380b8c0) {
            puVar8 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_02c1c694;
          }
          uVar5 = uVar5 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)FUN_0185dba8(plVar6,*(long *)PTR_DAT_0380b8c0,0);
LAB_02c1c694:
      lVar7 = (*(code *)*puVar8)(plVar6,0,puVar8[1]);
      if (lVar7 == 0) {
        thunk_FUN_01851c08(PTR_DAT_0380b860);
        uVar10 = thunk_FUN_01861bbc();
        uVar15 = thunk_FUN_01851c08(PTR_DAT_0380b8e8);
        FUN_02b0d540(uVar10,uVar15,0);
        uVar15 = thunk_FUN_01851c08(PTR_DAT_0380b8f0);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar10,uVar15);
      }
      if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar5 = FUN_02be74a8(plVar9,0,0);
      if ((uVar5 & 1) == 0) {
        plVar9 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804688,1);
        lVar12 = *plVar6;
        lVar7 = *(long *)puVar3;
        uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) goto LAB_02c1cbb4;
            uVar5 = uVar5 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar5 != 0);
        }
      }
      else {
        lVar7 = *plVar6;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_02c1cac4;
            }
            uVar5 = uVar5 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_0185dba8(plVar6,*(long *)puVar3,0);
LAB_02c1cac4:
        lVar7 = (*(code *)*puVar8)(plVar6,0,puVar8[1]);
        if ((lVar7 == 0) || (uVar15 = FUN_02b188e0(lVar7,0), plVar9 == (long *)0x0))
        goto LAB_02c1cd6c;
        uVar5 = (**(code **)(*plVar9 + 0x288))(plVar9,uVar15,*(undefined8 *)(*plVar9 + 0x290));
        if ((uVar5 & 1) == 0) {
          lVar12 = *(long *)PTR_DAT_0380b8b0;
          lVar7 = *(long *)(lVar12 + 0x38);
          if (lVar7 == 0) {
            FUN_0185db00(lVar12);
            lVar7 = *(long *)(lVar12 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0185daa4();
          }
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          lVar7 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0185daa4();
          }
          return (long *)**(undefined8 **)(lVar7 + 0xb8);
        }
        plVar9 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804688,1);
        lVar12 = *plVar6;
        lVar7 = *(long *)puVar3;
        uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) goto LAB_02c1cbb4;
            uVar5 = uVar5 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar5 != 0);
        }
      }
      puVar8 = (undefined8 *)FUN_0185dba8(plVar6,lVar7,0);
      goto LAB_02c1cbc0;
    }
    uVar14 = 0;
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar7 = FUN_02c1b2f0();
    uVar14 = lVar7 != 0 & unaff_w22;
  }
  if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar5 = FUN_02be74a8(plVar9,0,0);
  if ((uVar5 & 1) == 0) {
    uVar11 = 0;
  }
  else {
    if (plVar9 == (long *)0x0) goto LAB_02c1cd6c;
    uVar5 = FUN_02be87b8(plVar9,0);
    uVar11 = (uint)uVar5 & 1;
  }
  if ((uVar11 & uVar14) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar5 = FUN_02c1b6b4(plVar9);
    if (uVar5 == 0) goto LAB_02c1cd6c;
  }
  if (plVar6 != (long *)0x0) {
    plVar9 = (long *)FUN_036152ec(uVar5,*(undefined8 *)puVar2);
    return plVar9;
  }
LAB_02c1cd6c:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
LAB_02c1cbb4:
  puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
LAB_02c1cbc0:
  lVar7 = (*(code *)*puVar8)(plVar6,0,puVar8[1]);
  if (plVar9 != (long *)0x0) {
    if ((lVar7 != 0) &&
       (lVar12 = thunk_FUN_01861ac0(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0)) {
      uVar15 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar15,0);
    }
    if ((int)plVar9[3] != 0) {
      plVar9[4] = lVar7;
      thunk_FUN_0188fd20(plVar9 + 4,lVar7);
      return plVar9;
    }
                    /* WARNING: Subroutine does not return */
    FUN_017fc5b0();
  }
  goto LAB_02c1cd6c;
}


