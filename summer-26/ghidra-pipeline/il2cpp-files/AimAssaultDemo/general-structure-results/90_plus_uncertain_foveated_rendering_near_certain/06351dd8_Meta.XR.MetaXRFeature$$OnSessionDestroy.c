/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionDestroy
ENTRY_POINT: 06351dd8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 141
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;strong_foveation_hits_4;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionDestroy(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  undefined8 unaff_x25;
  long unaff_x26;
  long lVar12;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
code_r0x06351dd8:
  lVar12 = *unaff_x28;
  if (lVar12 != 0) goto LAB_06351de0;
  uVar6 = (**(code **)(*unaff_x19 + 0x288))();
  if ((uVar6 & 1) == 0) goto LAB_06352134;
  plVar4 = *(long **)(unaff_x22 + 0x28);
  if (plVar4 != (long *)0x0) {
    lVar12 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07db27e8) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06351f30;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db27e8,0);
LAB_06351f30:
    iVar2 = (*(code *)*puVar7)(plVar4,puVar7[1]);
    if (3 < iVar2) {
      plVar4 = *(long **)(unaff_x22 + 0x28);
      uVar9 = (**(code **)(*unaff_x19 + 0x278))();
      if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07d88078);
      }
      uVar10 = FUN_061d52c8(0);
      uVar10 = FUN_06334b04(*(undefined8 *)PTR_DAT_07db4f88,uVar10,unaff_x25,
                            *(undefined8 *)(unaff_x21 + 0x60));
      if (*(int *)(*(long *)PTR_DAT_07d9b718 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07d9b718);
      }
      uVar8 = thunk_FUN_037787d0();
      uVar9 = FUN_062d6f1c(uVar8,uVar9,uVar10,0);
      if (plVar4 == (long *)0x0) {
LAB_06352130:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar12 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07db27e8) {
            puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_06352050;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db27e8,1);
LAB_06352050:
      (*(code *)*puVar7)(plVar4,4,uVar9,0,puVar7[1]);
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
    uVar9 = FUN_061d52c8(0);
    FUN_031a5e18(unaff_x29);
    uVar10 = (**(code **)(*unaff_x29 + 0x1b8))(unaff_x29,*(undefined8 *)(*unaff_x29 + 0x1c0));
    uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db4c00);
    FUN_06334b04(uVar8,uVar9,unaff_x25,uVar10);
    goto LAB_063521cc;
  }
  do {
    if (*(long *)(unaff_x21 + 0xe0) != 0) {
      uVar9 = FUN_063526ec();
      goto Meta_XR_MetaXRFoveationFeature__set_useDynamicFoveatedRendering;
    }
    FUN_062dc848();
    while( true ) {
      while( true ) {
        uVar6 = (**(code **)(*unaff_x19 + 0x288))();
        if ((uVar6 & 1) == 0) {
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
          uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db4b80);
          System_Convert__ToInt32(uVar10,uVar9,0);
          goto LAB_063521cc;
        }
      }
      plVar4 = (long *)(**(code **)(*unaff_x19 + 0x248))();
      if (plVar4 == (long *)0x0) goto LAB_06352130;
      unaff_x25 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      unaff_x26 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db4ee0);
      FUN_06352c74(unaff_x26,unaff_x25,0);
      if (((unaff_x21 == 0) || (lVar12 = FUN_06338600(), lVar12 == 0)) ||
         (lVar12 = FUN_0633a078(lVar12,unaff_x25), unaff_x26 == 0)) goto LAB_06352130;
      plVar4 = (long *)(unaff_x26 + 0x20);
      *plVar4 = lVar12;
      thunk_FUN_037aeb94(plVar4,lVar12);
      if (*(long *)(unaff_x21 + 0xd8) == 0) goto LAB_06352130;
      lVar12 = FUN_0633a078(*(long *)(unaff_x21 + 0xd8),unaff_x25);
      unaff_x28 = (long *)(unaff_x26 + 0x18);
      *unaff_x28 = lVar12;
      thunk_FUN_037aeb94(unaff_x28,lVar12);
      if (unaff_x24 == 0) goto LAB_06352130;
      lVar12 = *(long *)(unaff_x24 + 0x10);
      *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_06352130;
      uVar1 = *(uint *)(unaff_x24 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(unaff_x24 + 0x18) = uVar1 + 1;
        plVar5 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
        *plVar5 = unaff_x26;
        thunk_FUN_037aeb94(plVar5,unaff_x26);
      }
      else {
        FUN_049ceef4();
      }
      lVar12 = *plVar4;
      if (lVar12 == 0) goto code_r0x06351dd8;
LAB_06351de0:
      if (*(char *)(lVar12 + 0x80) != '\0') break;
      if (*(long *)(lVar12 + 0x48) == 0) {
        uVar9 = FUN_063488fc();
        *(undefined8 *)(lVar12 + 0x48) = uVar9;
        thunk_FUN_037aeb94((long *)(lVar12 + 0x48),uVar9);
      }
      plVar4 = (long *)FUN_06348d4c();
      uVar6 = FUN_062dcd48();
      if ((uVar6 & 1) == 0) goto LAB_06352134;
      if ((plVar4 == (long *)0x0) ||
         (uVar6 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0)),
         (uVar6 & 1) == 0)) {
        uVar9 = FUN_063491cc();
      }
      else {
        uVar9 = FUN_06348db8();
      }
Meta_XR_MetaXRFoveationFeature__set_useDynamicFoveatedRendering:
      *(undefined8 *)(unaff_x26 + 0x30) = uVar9;
      thunk_FUN_037aeb94((undefined8 *)(unaff_x26 + 0x30),uVar9);
    }
    uVar6 = (**(code **)(*unaff_x19 + 0x288))();
  } while ((uVar6 & 1) != 0);
LAB_06352134:
  thunk_FUN_037a15ac(PTR_DAT_07d88078);
  FUN_031ae340();
  uVar9 = FUN_061d52c8(0);
  uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db4bf0);
  FUN_063349e4(uVar10,uVar9,unaff_x25);
LAB_063521cc:
  uVar9 = FUN_062d5fcc();
  uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db4f90);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar9,uVar10);
}


