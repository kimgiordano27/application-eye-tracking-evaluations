/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$get_useDynamicFoveatedRendering
ENTRY_POINT: 06352084
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 97
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;strong_foveation_hits_4;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__get_useDynamicFoveatedRendering(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  int in_w8;
  int *piVar12;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  undefined8 unaff_x25;
  long unaff_x26;
  long *plVar13;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
code_r0x06352084:
  if (in_w8 == 1) {
    thunk_FUN_037a15ac(PTR_DAT_07d88078);
    FUN_031ae340();
    uVar9 = FUN_061d52c8(0);
    FUN_031a5e18(unaff_x29);
    uVar11 = (**(code **)(*unaff_x29 + 0x1b8))(unaff_x29,*(undefined8 *)(*unaff_x29 + 0x1c0));
    uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db4c00);
    FUN_06334b04(uVar8,uVar9,unaff_x25,uVar11);
  }
  else {
    do {
      if (*(long *)(unaff_x21 + 0xe0) == 0) {
        FUN_062dc848();
        goto LAB_063520c8;
      }
      uVar9 = FUN_063526ec();
      while( true ) {
        *(undefined8 *)(unaff_x26 + 0x30) = uVar9;
        thunk_FUN_037aeb94((undefined8 *)(unaff_x26 + 0x30),uVar9);
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
            uVar9 = FUN_06278b80(&stack0x00000018,0);
            uVar11 = thunk_FUN_037a15ac(PTR_DAT_07db4b80);
            System_Convert__ToInt32(uVar11,uVar9,0);
            goto LAB_063521cc;
          }
        }
        plVar4 = (long *)(**(code **)(*unaff_x19 + 0x248))();
        if (plVar4 == (long *)0x0) goto LAB_06352130;
        unaff_x25 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        unaff_x26 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db4ee0);
        FUN_06352c74(unaff_x26,unaff_x25,0);
        if (((unaff_x21 == 0) || (lVar5 = FUN_06338600(), lVar5 == 0)) ||
           (lVar5 = FUN_0633a078(lVar5,unaff_x25), unaff_x26 == 0)) goto LAB_06352130;
        plVar4 = (long *)(unaff_x26 + 0x20);
        *plVar4 = lVar5;
        thunk_FUN_037aeb94(plVar4,lVar5);
        if (*(long *)(unaff_x21 + 0xd8) == 0) goto LAB_06352130;
        lVar5 = FUN_0633a078(*(long *)(unaff_x21 + 0xd8),unaff_x25);
        plVar13 = (long *)(unaff_x26 + 0x18);
        *plVar13 = lVar5;
        thunk_FUN_037aeb94(plVar13,lVar5);
        if (unaff_x24 == 0) goto LAB_06352130;
        lVar5 = *(long *)(unaff_x24 + 0x10);
        *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_06352130;
        uVar1 = *(uint *)(unaff_x24 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(unaff_x24 + 0x18) = uVar1 + 1;
          plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *plVar6 = unaff_x26;
          thunk_FUN_037aeb94(plVar6,unaff_x26);
        }
        else {
          FUN_049ceef4();
        }
        lVar5 = *plVar4;
        if ((lVar5 == 0) && (lVar5 = *plVar13, lVar5 == 0)) {
          uVar10 = (**(code **)(*unaff_x19 + 0x288))();
          if ((uVar10 & 1) == 0) goto LAB_06352134;
          plVar4 = *(long **)(unaff_x22 + 0x28);
          if (plVar4 == (long *)0x0) goto LAB_06352068;
          lVar5 = *plVar4;
          uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar10 == 0) goto LAB_06351f14;
          piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_06351efc;
        }
        if (*(char *)(lVar5 + 0x80) != '\0') break;
        if (*(long *)(lVar5 + 0x48) == 0) {
          uVar9 = FUN_063488fc();
          *(undefined8 *)(lVar5 + 0x48) = uVar9;
          thunk_FUN_037aeb94((long *)(lVar5 + 0x48),uVar9);
        }
        plVar4 = (long *)FUN_06348d4c();
        uVar10 = FUN_062dcd48();
        if ((uVar10 & 1) == 0) goto LAB_06352134;
        if ((plVar4 == (long *)0x0) ||
           (uVar10 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0)),
           (uVar10 & 1) == 0)) {
          uVar9 = FUN_063491cc();
        }
        else {
          uVar9 = FUN_06348db8();
        }
      }
      uVar10 = (**(code **)(*unaff_x19 + 0x288))();
    } while ((uVar10 & 1) != 0);
LAB_06352134:
    thunk_FUN_037a15ac(PTR_DAT_07d88078);
    FUN_031ae340();
    uVar9 = FUN_061d52c8(0);
    uVar11 = thunk_FUN_037a15ac(PTR_DAT_07db4bf0);
    FUN_063349e4(uVar11,uVar9,unaff_x25);
  }
LAB_063521cc:
  uVar9 = FUN_062d5fcc();
  uVar11 = thunk_FUN_037a15ac(PTR_DAT_07db4f90);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar9,uVar11);
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
LAB_06351efc:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07db27e8) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_06351f30;
    }
  }
LAB_06351f14:
  puVar7 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db27e8,0);
LAB_06351f30:
  iVar2 = (*(code *)*puVar7)(plVar4,puVar7[1]);
  if (3 < iVar2) {
    plVar4 = *(long **)(unaff_x22 + 0x28);
    uVar9 = (**(code **)(*unaff_x19 + 0x278))();
    if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)PTR_DAT_07d88078);
    }
    uVar11 = FUN_061d52c8(0);
    uVar11 = FUN_06334b04(*(undefined8 *)PTR_DAT_07db4f88,uVar11,unaff_x25,
                          *(undefined8 *)(unaff_x21 + 0x60));
    if (*(int *)(*(long *)PTR_DAT_07d9b718 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)PTR_DAT_07d9b718);
    }
    uVar8 = thunk_FUN_037787d0();
    uVar9 = FUN_062d6f1c(uVar8,uVar9,uVar11,0);
    if (plVar4 == (long *)0x0) goto LAB_06352130;
    lVar5 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07db27e8) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_06352050;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db27e8,1);
LAB_06352050:
    (*(code *)*puVar7)(plVar4,4,uVar9,0,puVar7[1]);
  }
LAB_06352068:
  if (*(char *)(unaff_x21 + 0xc0) != '\0') {
    in_w8 = *(int *)(unaff_x21 + 0xc4);
    goto code_r0x06352084;
  }
  if (*(long *)(unaff_x22 + 0x20) != 0) {
    in_w8 = *(int *)(*(long *)(unaff_x22 + 0x20) + 0x20);
    goto code_r0x06352084;
  }
LAB_06352130:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


