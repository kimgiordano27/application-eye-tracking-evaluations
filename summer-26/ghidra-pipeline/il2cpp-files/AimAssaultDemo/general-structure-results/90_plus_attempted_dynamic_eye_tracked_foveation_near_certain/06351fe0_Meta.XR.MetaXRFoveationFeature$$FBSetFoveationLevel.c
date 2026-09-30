/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBSetFoveationLevel
ENTRY_POINT: 06351fe0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 129
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__FBSetFoveationLevel(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  undefined8 unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long *plVar13;
  undefined8 unaff_x29;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
code_r0x06351fe0:
  uVar6 = FUN_062d6f1c(param_1,param_2,unaff_x29,0);
  if (unaff_x27 == (long *)0x0) {
LAB_06352130:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar10 = *unaff_x27;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07db27e8) {
        puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_06352050;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_0377596c(unaff_x27,*(long *)PTR_DAT_07db27e8,1);
LAB_06352050:
  (*(code *)*puVar7)(unaff_x27,4,uVar6,0,puVar7[1]);
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
    FUN_031a5e18(in_stack_00000010);
    uVar8 = (**(code **)(*in_stack_00000010 + 0x1b8))
                      (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x1c0));
    uVar9 = thunk_FUN_037a15ac(PTR_DAT_07db4c00);
    FUN_06334b04(uVar9,uVar6,unaff_x25,uVar8);
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
          uVar11 = (**(code **)(*unaff_x19 + 0x288))();
          if ((uVar11 & 1) == 0) {
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
            uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db4b80);
            System_Convert__ToInt32(uVar8,uVar6,0);
            goto LAB_063521cc;
          }
        }
        plVar4 = (long *)(**(code **)(*unaff_x19 + 0x248))();
        if (plVar4 == (long *)0x0) goto LAB_06352130;
        unaff_x25 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        unaff_x26 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db4ee0);
        FUN_06352c74(unaff_x26,unaff_x25,0);
        if (((unaff_x21 == 0) || (lVar10 = FUN_06338600(), lVar10 == 0)) ||
           (lVar10 = FUN_0633a078(lVar10,unaff_x25), unaff_x26 == 0)) goto LAB_06352130;
        plVar4 = (long *)(unaff_x26 + 0x20);
        *plVar4 = lVar10;
        thunk_FUN_037aeb94(plVar4,lVar10);
        if (*(long *)(unaff_x21 + 0xd8) == 0) goto LAB_06352130;
        lVar10 = FUN_0633a078(*(long *)(unaff_x21 + 0xd8),unaff_x25);
        plVar13 = (long *)(unaff_x26 + 0x18);
        *plVar13 = lVar10;
        thunk_FUN_037aeb94(plVar13,lVar10);
        if (unaff_x24 == 0) goto LAB_06352130;
        lVar10 = *(long *)(unaff_x24 + 0x10);
        *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_06352130;
        uVar1 = *(uint *)(unaff_x24 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(unaff_x24 + 0x18) = uVar1 + 1;
          plVar5 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
          *plVar5 = unaff_x26;
          thunk_FUN_037aeb94(plVar5,unaff_x26);
        }
        else {
          FUN_049ceef4();
        }
        lVar10 = *plVar4;
        if ((lVar10 == 0) && (lVar10 = *plVar13, lVar10 == 0)) {
          uVar11 = (**(code **)(*unaff_x19 + 0x288))();
          if ((uVar11 & 1) == 0) goto LAB_06352134;
          plVar4 = *(long **)(unaff_x22 + 0x28);
          if (plVar4 == (long *)0x0) goto LAB_06352068;
          lVar10 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_06351f14;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_06351efc;
        }
        if (*(char *)(lVar10 + 0x80) != '\0') break;
        if (*(long *)(lVar10 + 0x48) == 0) {
          uVar6 = FUN_063488fc();
          *(undefined8 *)(lVar10 + 0x48) = uVar6;
          thunk_FUN_037aeb94((long *)(lVar10 + 0x48),uVar6);
        }
        plVar4 = (long *)FUN_06348d4c();
        uVar11 = FUN_062dcd48();
        if ((uVar11 & 1) == 0) goto LAB_06352134;
        if ((plVar4 == (long *)0x0) ||
           (uVar11 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0)),
           (uVar11 & 1) == 0)) {
          uVar6 = FUN_063491cc();
        }
        else {
          uVar6 = FUN_06348db8();
        }
      }
      uVar11 = (**(code **)(*unaff_x19 + 0x288))();
    } while ((uVar11 & 1) != 0);
LAB_06352134:
    thunk_FUN_037a15ac(PTR_DAT_07d88078);
    FUN_031ae340();
    uVar6 = FUN_061d52c8(0);
    uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db4bf0);
    FUN_063349e4(uVar8,uVar6,unaff_x25);
  }
LAB_063521cc:
  uVar6 = FUN_062d5fcc();
  uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db4f90);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar6,uVar8);
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_06351efc:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07db27e8) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_06351f30;
    }
  }
LAB_06351f14:
  puVar7 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db27e8,0);
LAB_06351f30:
  iVar2 = (*(code *)*puVar7)(plVar4,puVar7[1]);
  if (3 < iVar2) goto code_r0x06351f44;
  goto LAB_06352068;
code_r0x06351f44:
  unaff_x27 = *(long **)(unaff_x22 + 0x28);
  param_2 = (**(code **)(*unaff_x19 + 0x278))();
  if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)PTR_DAT_07d88078);
  }
  uVar6 = FUN_061d52c8(0);
  unaff_x29 = FUN_06334b04(*(undefined8 *)PTR_DAT_07db4f88,uVar6,unaff_x25,
                           *(undefined8 *)(unaff_x21 + 0x60));
  if (*(int *)(*(long *)PTR_DAT_07d9b718 + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)PTR_DAT_07d9b718);
  }
  param_1 = thunk_FUN_037787d0();
  goto code_r0x06351fe0;
}


