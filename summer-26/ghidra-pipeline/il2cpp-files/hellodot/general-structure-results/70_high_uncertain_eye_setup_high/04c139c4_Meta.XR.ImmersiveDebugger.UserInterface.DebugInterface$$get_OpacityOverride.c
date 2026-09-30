/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugInterface$$get_OpacityOverride
ENTRY_POINT: 04c139c4
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface__get_OpacityOverride(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int in_w8;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *plVar8;
  long unaff_x22;
  undefined8 *puVar9;
  long lVar10;
  long unaff_x23;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *unaff_x24;
  long lVar13;
  long unaff_x25;
  undefined8 *puVar14;
  
  puVar14 = *(undefined8 **)(unaff_x25 + 0xd58);
  puVar11 = *(undefined8 **)(unaff_x23 + 0x518);
                    /* try { // try from 04c139cc to 04d139db has its CatchHandler @ 04c13a40 */
  puVar9 = *(undefined8 **)(unaff_x22 + 0x500);
  if (in_w8 == 0) {
    thunk_FUN_02cd038c();
  }
  uVar4 = FUN_0354cb00();
  *(undefined8 *)(unaff_x19 + 0x10) = uVar4;
  uVar4 = FUN_0354cb00(*(undefined8 *)(unaff_x20 + 0x58),*unaff_x24,*puVar14);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar4;
  uVar4 = FUN_04c1a188(*(undefined8 *)(unaff_x20 + 0x18),*puVar11,0);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
  uVar4 = FUN_04c1a188(*(undefined8 *)(unaff_x20 + 0x20),*puVar9,0);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar4;
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
    plVar8 = (long *)**(undefined8 **)(lVar5 + 0xb8);
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
    if (plVar8 == (long *)0x0) goto LAB_04c13dc0;
    lVar10 = *plVar8;
    uVar4 = **(undefined8 **)(lVar5 + 0xb8);
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    uVar12 = *(undefined8 *)PTR_DAT_065e5508;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065e39d8) {
          puVar9 = (undefined8 *)(lVar10 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto LAB_04c13bb8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)PTR_DAT_065e39d8,5);
LAB_04c13bb8:
    (*(code *)*puVar9)(plVar8,uVar12,uVar4,puVar9[1]);
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
    plVar8 = *(long **)(lVar5 + 0x28);
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
      uVar4 = **(undefined8 **)(lVar10 + 0xb8);
      lVar13 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5080);
      FUN_04a48c38(lVar13,uVar4,*(undefined8 *)PTR_DAT_065e54e8,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar13;
    }
    uVar4 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
    FUN_04c27a60(uVar4,iVar1,lVar13,0);
    if (plVar8 == (long *)0x0) goto LAB_04c13dc0;
    lVar10 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065e3f80) {
          puVar9 = (undefined8 *)(lVar10 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface__Awake;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)PTR_DAT_065e3f80,2);
Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface__Awake:
    (*(code *)*puVar9)(plVar8,uVar4,puVar9[1]);
  }
  plVar8 = *(long **)(unaff_x19 + 0x50);
  if (plVar8 != (long *)0x0) {
    lVar10 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065e3f90) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04c13d94;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)PTR_DAT_065e3f90,0);
LAB_04c13d94:
    uVar4 = (*(code *)*puVar9)(plVar8,lVar5,puVar9[1]);
    *(undefined8 *)(unaff_x19 + 0x40) = uVar4;
    return;
  }
LAB_04c13dc0:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


