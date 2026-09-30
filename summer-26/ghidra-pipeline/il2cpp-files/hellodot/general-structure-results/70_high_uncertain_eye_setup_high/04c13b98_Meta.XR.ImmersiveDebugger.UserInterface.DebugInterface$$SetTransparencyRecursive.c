/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugInterface$$SetTransparencyRecursive
ENTRY_POINT: 04c13b98
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface__SetTransparencyRecursive(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  int unaff_w23;
  undefined8 uVar15;
  long lVar16;
  
  puVar7 = PTR_DAT_065e5518;
  puVar6 = PTR_DAT_065e5510;
  puVar5 = PTR_DAT_065e5500;
  puVar4 = PTR_DAT_065e54f8;
  puVar3 = PTR_DAT_065e4848;
  puVar2 = PTR_DAT_065e3d58;
  if (unaff_w23 != 6) {
    if (unaff_w23 != 0) {
      return;
    }
    if (*(long *)(unaff_x20 + 0x30) != 0) {
      thunk_FUN_02c7737c(PTR_DAT_065c96d8);
      uVar12 = thunk_FUN_02cea894();
      uVar15 = thunk_FUN_02c7737c(PTR_DAT_065e5520);
      FUN_04e9e938(uVar12,uVar15,0);
      uVar15 = thunk_FUN_02c7737c(PTR_DAT_065e5530);
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar12,uVar15);
    }
  }
  uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
  if (*(int *)(*(long *)PTR_DAT_065dcac8 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar12 = FUN_0354cb00(uVar12,*(undefined8 *)puVar6,*(undefined8 *)puVar3);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar12;
  uVar12 = FUN_0354cb00(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)puVar4,
                        *(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar12;
  uVar12 = FUN_04c1a188(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)puVar7,0);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar12;
  uVar12 = FUN_04c1a188(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)puVar5,0);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar12;
  lVar9 = *(long *)(unaff_x20 + 0x38);
  *(long *)(unaff_x19 + 0x30) = lVar9;
  puVar2 = PTR_DAT_065e54e0;
  if (lVar9 == 0) {
    lVar9 = *(long *)PTR_DAT_065e54e0;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar9 = *(long *)puVar2;
    }
    lVar14 = *(long *)PTR_DAT_065ca230;
    plVar13 = (long *)**(undefined8 **)(lVar9 + 0xb8);
    lVar9 = *(long *)(lVar14 + 0x38);
    if (lVar9 == 0) {
      FUN_02ce09d4(lVar14);
      lVar9 = *(long *)(lVar14 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02ce0978();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar9 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02ce0978();
    }
    if (plVar13 == (long *)0x0) goto LAB_04c13dc0;
    lVar14 = *plVar13;
    uVar12 = **(undefined8 **)(lVar9 + 0xb8);
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    uVar15 = *(undefined8 *)PTR_DAT_065e5508;
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065e39d8) {
          puVar8 = (undefined8 *)(lVar14 + (long)(*piVar11 + 5) * 0x10 + 0x138);
          goto LAB_04c13bb8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)PTR_DAT_065e39d8,5);
LAB_04c13bb8:
    (*(code *)*puVar8)(plVar13,uVar15,uVar12,puVar8[1]);
  }
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined4 *)(unaff_x19 + 0x58) = *(undefined4 *)(unaff_x20 + 0x50);
  puVar2 = PTR_DAT_065e5070;
  lVar9 = *(long *)(unaff_x20 + 0x48);
  if (lVar9 == 0) {
    lVar9 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e4818);
    FUN_04c27b90(lVar9,0);
  }
  *(long *)(unaff_x19 + 0x50) = lVar9;
  lVar9 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
  FUN_04c29120(lVar9,0);
  puVar2 = PTR_DAT_065e54f0;
  iVar1 = *(int *)(unaff_x19 + 0x58);
  if (iVar1 != 0) {
    if (lVar9 == 0) goto LAB_04c13dc0;
    plVar13 = *(long **)(lVar9 + 0x28);
    lVar14 = *(long *)PTR_DAT_065e54f0;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar14 = *(long *)puVar2;
    }
    puVar3 = PTR_DAT_065e5078;
    lVar16 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
    if (lVar16 == 0) {
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar14 = *(long *)puVar2;
      }
      uVar12 = **(undefined8 **)(lVar14 + 0xb8);
      lVar16 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5080);
      FUN_04a48c38(lVar16,uVar12,*(undefined8 *)PTR_DAT_065e54e8,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar16;
    }
    uVar12 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
    FUN_04c27a60(uVar12,iVar1,lVar16,0);
    if (plVar13 == (long *)0x0) goto LAB_04c13dc0;
    lVar14 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065e3f80) {
          puVar8 = (undefined8 *)(lVar14 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface__Awake;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)PTR_DAT_065e3f80,2);
Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface__Awake:
    (*(code *)*puVar8)(plVar13,uVar12,puVar8[1]);
  }
  plVar13 = *(long **)(unaff_x19 + 0x50);
  if (plVar13 != (long *)0x0) {
    lVar14 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065e3f90) {
          puVar8 = (undefined8 *)(lVar14 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04c13d94;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)PTR_DAT_065e3f90,0);
LAB_04c13d94:
    uVar12 = (*(code *)*puVar8)(plVar13,lVar9,puVar8[1]);
    *(undefined8 *)(unaff_x19 + 0x40) = uVar12;
    return;
  }
LAB_04c13dc0:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


