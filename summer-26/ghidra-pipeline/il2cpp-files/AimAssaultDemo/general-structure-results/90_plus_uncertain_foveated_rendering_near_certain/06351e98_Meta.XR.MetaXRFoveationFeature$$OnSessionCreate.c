/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$OnSessionCreate
ENTRY_POINT: 06351e98
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 129
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;telemetry_or_network_hits_2;strong_foveation_hits_8;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFoveationFeature__OnSessionCreate(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long unaff_x26;
  long *plVar14;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
code_r0x06351e98:
  uVar7 = FUN_063491cc();
Meta_XR_MetaXRFoveationFeature__set_useDynamicFoveatedRendering:
  *(undefined8 *)(unaff_x26 + 0x30) = uVar7;
  thunk_FUN_037aeb94((undefined8 *)(unaff_x26 + 0x30),uVar7);
  do {
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
        uVar7 = FUN_06278b80(&stack0x00000018,0);
        uVar12 = thunk_FUN_037a15ac(PTR_DAT_07db4b80);
        System_Convert__ToInt32(uVar12,uVar7,0);
        goto LAB_063521cc;
      }
    }
    plVar4 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if (plVar4 == (long *)0x0) {
LAB_06352130:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    unaff_x26 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db4ee0);
    FUN_06352c74(unaff_x26,uVar7,0);
    if (((unaff_x21 == 0) || (lVar5 = FUN_06338600(), lVar5 == 0)) ||
       (lVar5 = FUN_0633a078(lVar5,uVar7), unaff_x26 == 0)) goto LAB_06352130;
    plVar4 = (long *)(unaff_x26 + 0x20);
    *plVar4 = lVar5;
    thunk_FUN_037aeb94(plVar4,lVar5);
    if (*(long *)(unaff_x21 + 0xd8) == 0) goto LAB_06352130;
    lVar5 = FUN_0633a078(*(long *)(unaff_x21 + 0xd8),uVar7);
    plVar14 = (long *)(unaff_x26 + 0x18);
    *plVar14 = lVar5;
    thunk_FUN_037aeb94(plVar14,lVar5);
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
    if ((lVar5 != 0) || (lVar5 = *plVar14, lVar5 != 0)) {
      if (*(char *)(lVar5 + 0x80) == '\0') {
        if (*(long *)(lVar5 + 0x48) == 0) {
          uVar12 = FUN_063488fc();
          *(undefined8 *)(lVar5 + 0x48) = uVar12;
          thunk_FUN_037aeb94((long *)(lVar5 + 0x48),uVar12);
        }
        plVar4 = (long *)FUN_06348d4c();
        uVar10 = FUN_062dcd48();
        if ((uVar10 & 1) != 0) {
          if ((plVar4 == (long *)0x0) ||
             (uVar10 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0)),
             (uVar10 & 1) == 0)) goto code_r0x06351e98;
          uVar7 = FUN_06348db8();
          goto Meta_XR_MetaXRFoveationFeature__set_useDynamicFoveatedRendering;
        }
      }
      else {
        uVar10 = (**(code **)(*unaff_x19 + 0x288))();
        if ((uVar10 & 1) != 0) goto LAB_0635208c;
      }
LAB_06352134:
      thunk_FUN_037a15ac(PTR_DAT_07d88078);
      FUN_031ae340();
      uVar12 = FUN_061d52c8(0);
      uVar11 = thunk_FUN_037a15ac(PTR_DAT_07db4bf0);
      FUN_063349e4(uVar11,uVar12,uVar7);
LAB_063521cc:
      uVar7 = FUN_062d5fcc();
      uVar12 = thunk_FUN_037a15ac(PTR_DAT_07db4f90);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar7,uVar12);
    }
    uVar10 = (**(code **)(*unaff_x19 + 0x288))();
    if ((uVar10 & 1) == 0) goto LAB_06352134;
    plVar4 = *(long **)(unaff_x22 + 0x28);
    if (plVar4 != (long *)0x0) {
      lVar5 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar10 != 0) {
        piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07db27e8) {
            puVar8 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06351f30;
          }
          uVar10 = uVar10 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db27e8,0);
LAB_06351f30:
      iVar2 = (*(code *)*puVar8)(plVar4,puVar8[1]);
      if (3 < iVar2) {
        plVar4 = *(long **)(unaff_x22 + 0x28);
        uVar12 = (**(code **)(*unaff_x19 + 0x278))();
        if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
          thunk_FUN_03798b70(*(long *)PTR_DAT_07d88078);
        }
        uVar11 = FUN_061d52c8(0);
        uVar11 = FUN_06334b04(*(undefined8 *)PTR_DAT_07db4f88,uVar11,uVar7,
                              *(undefined8 *)(unaff_x21 + 0x60));
        if (*(int *)(*(long *)PTR_DAT_07d9b718 + 0xe4) == 0) {
          thunk_FUN_03798b70(*(long *)PTR_DAT_07d9b718);
        }
        uVar9 = thunk_FUN_037787d0();
        uVar12 = FUN_062d6f1c(uVar9,uVar12,uVar11,0);
        if (plVar4 == (long *)0x0) goto LAB_06352130;
        lVar5 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar10 != 0) {
          piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07db27e8) {
              puVar8 = (undefined8 *)(lVar5 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_06352050;
            }
            uVar10 = uVar10 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db27e8,1);
LAB_06352050:
        (*(code *)*puVar8)(plVar4,4,uVar12,0,puVar8[1]);
      }
    }
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
      uVar12 = FUN_061d52c8(0);
      FUN_031a5e18(unaff_x29);
      uVar11 = (**(code **)(*unaff_x29 + 0x1b8))(unaff_x29,*(undefined8 *)(*unaff_x29 + 0x1c0));
      uVar9 = thunk_FUN_037a15ac(PTR_DAT_07db4c00);
      FUN_06334b04(uVar9,uVar12,uVar7,uVar11);
      goto LAB_063521cc;
    }
LAB_0635208c:
    if (*(long *)(unaff_x21 + 0xe0) != 0) break;
    FUN_062dc848();
  } while( true );
  uVar7 = FUN_063526ec();
  goto Meta_XR_MetaXRFoveationFeature__set_useDynamicFoveatedRendering;
}


