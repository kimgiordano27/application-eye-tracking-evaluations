/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugInterface$$set_RotateOverride
ENTRY_POINT: 04c139a4
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface__set_RotateOverride(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x24;
  undefined8 *puVar12;
  long lVar13;
  long unaff_x26;
  undefined8 *puVar14;
  long unaff_x27;
  undefined8 *puVar15;
  
  puVar4 = PTR_DAT_065e5518;
  puVar3 = PTR_DAT_065e5500;
  puVar2 = PTR_DAT_065e3d58;
                    /* try { // try from 04c139b0 to 04d139b7 has its CatchHandler @ 04c13a44 */
  puVar15 = *(undefined8 **)(unaff_x27 + 0x510);
  puVar14 = *(undefined8 **)(unaff_x26 + 0x848);
  puVar12 = *(undefined8 **)(unaff_x24 + 0x4f8);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar8 = FUN_0354cb00(uVar8,*puVar15,*puVar14);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar8;
  uVar8 = FUN_0354cb00(*(undefined8 *)(unaff_x20 + 0x58),*puVar12,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar8;
  uVar8 = FUN_04c1a188(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)puVar4,0);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar8;
  uVar8 = FUN_04c1a188(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)puVar3,0);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar8;
  lVar5 = *(long *)(unaff_x20 + 0x38);
  *(long *)(unaff_x19 + 0x30) = lVar5;
  puVar2 = PTR_DAT_065e54e0;
  if (lVar5 == 0) {
    lVar5 = *(long *)PTR_DAT_065e54e0;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar5 = *(long *)puVar2;
    }
    lVar10 = *(long *)PTR_DAT_065ca230;
    plVar9 = (long *)**(undefined8 **)(lVar5 + 0xb8);
    lVar5 = *(long *)(lVar10 + 0x38);
    if (lVar5 == 0) {
      FUN_02ce09d4(lVar10);
      lVar5 = *(long *)(lVar10 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02ce0978();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar5 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02ce0978();
    }
    if (plVar9 == (long *)0x0) goto LAB_04c13dc0;
    lVar10 = *plVar9;
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    uVar11 = *(undefined8 *)PTR_DAT_065e5508;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065e39d8) {
          puVar12 = (undefined8 *)(lVar10 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto LAB_04c13bb8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar12 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065e39d8,5);
LAB_04c13bb8:
    (*(code *)*puVar12)(plVar9,uVar11,uVar8,puVar12[1]);
  }
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined4 *)(unaff_x19 + 0x58) = *(undefined4 *)(unaff_x20 + 0x50);
  puVar2 = PTR_DAT_065e5070;
  lVar5 = *(long *)(unaff_x20 + 0x48);
  if (lVar5 == 0) {
    lVar5 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e4818);
    FUN_04c27b90(lVar5,0);
  }
  *(long *)(unaff_x19 + 0x50) = lVar5;
  lVar5 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
  FUN_04c29120(lVar5,0);
  puVar2 = PTR_DAT_065e54f0;
  iVar1 = *(int *)(unaff_x19 + 0x58);
  if (iVar1 != 0) {
    if (lVar5 == 0) goto LAB_04c13dc0;
    plVar9 = *(long **)(lVar5 + 0x28);
    lVar10 = *(long *)PTR_DAT_065e54f0;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar10 = *(long *)puVar2;
    }
    puVar3 = PTR_DAT_065e5078;
    lVar13 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
    if (lVar13 == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar10 = *(long *)puVar2;
      }
      uVar8 = **(undefined8 **)(lVar10 + 0xb8);
      lVar13 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5080);
      FUN_04a48c38(lVar13,uVar8,*(undefined8 *)PTR_DAT_065e54e8,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar13;
    }
    uVar8 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
    FUN_04c27a60(uVar8,iVar1,lVar13,0);
    if (plVar9 == (long *)0x0) goto LAB_04c13dc0;
    lVar10 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065e3f80) {
          puVar12 = (undefined8 *)(lVar10 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface__Awake;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar12 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065e3f80,2);
Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface__Awake:
    (*(code *)*puVar12)(plVar9,uVar8,puVar12[1]);
  }
  plVar9 = *(long **)(unaff_x19 + 0x50);
  if (plVar9 != (long *)0x0) {
    lVar10 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065e3f90) {
          puVar12 = (undefined8 *)(lVar10 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04c13d94;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar12 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065e3f90,0);
LAB_04c13d94:
    uVar8 = (*(code *)*puVar12)(plVar9,lVar5,puVar12[1]);
    *(undefined8 *)(unaff_x19 + 0x40) = uVar8;
    return;
  }
LAB_04c13dc0:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


