/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$get_foveatedRenderingLevel
ENTRY_POINT: 06351ee4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 97
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;strong_foveation_hits_4;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__get_foveatedRenderingLevel(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined **in_x10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  undefined8 unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long *plVar12;
  long *plVar13;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
code_r0x06351ee4:
  uVar10 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)in_x10[0xfd]) {
        puVar5 = (undefined8 *)(param_1 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_06351f30;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_0377596c(unaff_x27,*(long *)in_x10[0xfd],0);
LAB_06351f30:
  iVar2 = (*(code *)*puVar5)(unaff_x27,puVar5[1]);
  if (3 < iVar2) {
    plVar12 = *(long **)(unaff_x22 + 0x28);
    uVar6 = (**(code **)(*unaff_x19 + 0x278))();
    if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)PTR_DAT_07d88078);
    }
    uVar7 = FUN_061d52c8(0);
    uVar7 = FUN_06334b04(*(undefined8 *)PTR_DAT_07db4f88,uVar7,unaff_x25,
                         *(undefined8 *)(unaff_x21 + 0x60));
    if (*(int *)(*(long *)PTR_DAT_07d9b718 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)PTR_DAT_07d9b718);
    }
    uVar8 = thunk_FUN_037787d0();
    uVar6 = FUN_062d6f1c(uVar8,uVar6,uVar7,0);
    if (plVar12 == (long *)0x0) {
LAB_06352130:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07db27e8) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_06352050;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar12,*(long *)PTR_DAT_07db27e8,1);
LAB_06352050:
    (*(code *)*puVar5)(plVar12,4,uVar6,0,puVar5[1]);
  }
LAB_06352068:
  if (*(char *)(unaff_x21 + 0xc0) == '\0') {
    if (*(long *)(unaff_x22 + 0x20) == 0) goto LAB_06352130;
    iVar2 = *(int *)(*(long *)(unaff_x22 + 0x20) + 0x20);
  }
  else {
    iVar2 = *(int *)(unaff_x21 + 0xc4);
  }
  if (iVar2 == 1) {
    thunk_FUN_037a15ac(PTR_DAT_07d88078);
    FUN_031ae340();
    uVar6 = FUN_061d52c8(0);
    FUN_031a5e18(unaff_x29);
    uVar7 = (**(code **)(*unaff_x29 + 0x1b8))(unaff_x29,*(undefined8 *)(*unaff_x29 + 0x1c0));
    uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db4c00);
    FUN_06334b04(uVar8,uVar6,unaff_x25,uVar7);
  }
  else {
    do {
      if (*(long *)(unaff_x21 + 0xe0) == 0) {
        FUN_062dc848();
        goto LAB_063520c8;
      }
      uVar6 = FUN_063526ec();
      while( true ) {
        *(undefined8 *)(unaff_x26 + 0x30) = uVar6;
        thunk_FUN_037aeb94((undefined8 *)(unaff_x26 + 0x30),uVar6);
LAB_063520c8:
        while( true ) {
          uVar10 = (**(code **)(*unaff_x19 + 0x288))();
          if ((uVar10 & 1) == 0) {
            FUN_0634fda8();
            return;
          }
          iVar2 = (**(code **)(*unaff_x19 + 0x238))();
          if (iVar2 == 4) break;
          if (iVar2 != 5) {
            if (iVar2 == 0xd) {
              return;
            }
            FUN_031a5e18();
            uVar3 = (**(code **)(*unaff_x19 + 0x238))();
            in_stack_00000018 = thunk_FUN_037a15ac(PTR_DAT_07db23b0);
            in_stack_00000020 = 0xffffffffffffffff;
            in_stack_00000028 = uVar3;
            uVar6 = FUN_06278b80(&stack0x00000018,0);
            uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db4b80);
            System_Convert__ToInt32(uVar7,uVar6,0);
            goto LAB_063521cc;
          }
        }
        plVar12 = (long *)(**(code **)(*unaff_x19 + 0x248))();
        if (plVar12 == (long *)0x0) goto LAB_06352130;
        unaff_x25 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
        unaff_x26 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db4ee0);
        FUN_06352c74(unaff_x26,unaff_x25,0);
        if (((unaff_x21 == 0) || (lVar9 = FUN_06338600(), lVar9 == 0)) ||
           (lVar9 = FUN_0633a078(lVar9,unaff_x25), unaff_x26 == 0)) goto LAB_06352130;
        plVar12 = (long *)(unaff_x26 + 0x20);
        *plVar12 = lVar9;
        thunk_FUN_037aeb94(plVar12,lVar9);
        if (*(long *)(unaff_x21 + 0xd8) == 0) goto LAB_06352130;
        lVar9 = FUN_0633a078(*(long *)(unaff_x21 + 0xd8),unaff_x25);
        plVar13 = (long *)(unaff_x26 + 0x18);
        *plVar13 = lVar9;
        thunk_FUN_037aeb94(plVar13,lVar9);
        if (unaff_x24 == 0) goto LAB_06352130;
        lVar9 = *(long *)(unaff_x24 + 0x10);
        *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_06352130;
        uVar1 = *(uint *)(unaff_x24 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(unaff_x24 + 0x18) = uVar1 + 1;
          plVar4 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
          *plVar4 = unaff_x26;
          thunk_FUN_037aeb94(plVar4,unaff_x26);
        }
        else {
          FUN_049ceef4();
        }
        lVar9 = *plVar12;
        if ((lVar9 == 0) && (lVar9 = *plVar13, lVar9 == 0)) {
          uVar10 = (**(code **)(*unaff_x19 + 0x288))();
          if ((uVar10 & 1) == 0) goto LAB_06352134;
          unaff_x27 = *(long **)(unaff_x22 + 0x28);
          if (unaff_x27 == (long *)0x0) goto LAB_06352068;
          param_1 = *unaff_x27;
          in_x10 = &PTR_DAT_07db2000;
          goto code_r0x06351ee4;
        }
        if (*(char *)(lVar9 + 0x80) != '\0') break;
        if (*(long *)(lVar9 + 0x48) == 0) {
          uVar6 = FUN_063488fc();
          *(undefined8 *)(lVar9 + 0x48) = uVar6;
          thunk_FUN_037aeb94((long *)(lVar9 + 0x48),uVar6);
        }
        plVar12 = (long *)FUN_06348d4c();
        uVar10 = FUN_062dcd48();
        if ((uVar10 & 1) == 0) goto LAB_06352134;
        if ((plVar12 == (long *)0x0) ||
           (uVar10 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0)),
           (uVar10 & 1) == 0)) {
          uVar6 = FUN_063491cc();
        }
        else {
          uVar6 = FUN_06348db8();
        }
      }
      uVar10 = (**(code **)(*unaff_x19 + 0x288))();
    } while ((uVar10 & 1) != 0);
LAB_06352134:
    thunk_FUN_037a15ac(PTR_DAT_07d88078);
    FUN_031ae340();
    uVar6 = FUN_061d52c8(0);
    uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db4bf0);
    FUN_063349e4(uVar7,uVar6,unaff_x25);
  }
LAB_063521cc:
  uVar6 = FUN_062d5fcc();
  uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db4f90);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar6,uVar7);
}


