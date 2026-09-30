/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugInterface$$set_OpacityOverride
ENTRY_POINT: 04c139e0
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


void Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface__set_OpacityOverride(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  undefined8 *unaff_x22;
  long lVar10;
  undefined8 *unaff_x23;
  undefined8 uVar11;
  undefined8 *unaff_x24;
  long lVar12;
  undefined8 *unaff_x25;
  
  uVar4 = FUN_0354cb00();
  *(undefined8 *)(unaff_x19 + 0x10) = uVar4;
                    /* try { // try from 04c139ec to 04d139fb has its CatchHandler @ 04c13a3c */
  uVar4 = FUN_0354cb00(*(undefined8 *)(unaff_x20 + 0x58),*unaff_x24,*unaff_x25);
                    /* try { // try from 04c139fc to 04d13a5b has its CatchHandler @ 04c13954 */
  *(undefined8 *)(unaff_x19 + 0x48) = uVar4;
  uVar4 = FUN_04c1a188(*(undefined8 *)(unaff_x20 + 0x18),*unaff_x23,0);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
  uVar4 = FUN_04c1a188(*(undefined8 *)(unaff_x20 + 0x20),*unaff_x22,0);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar4;
  lVar6 = *(long *)(unaff_x20 + 0x38);
  *(long *)(unaff_x19 + 0x30) = lVar6;
  puVar2 = PTR_DAT_065e54e0;
  if (lVar6 == 0) {
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c139ec with catch @ 04c13a3c
                        */
    lVar6 = *(long *)PTR_DAT_065e54e0;
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c139cc with catch @ 04c13a40
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c139b0 with catch @ 04c13a44
                        */
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar6 = *(long *)puVar2;
    }
                    /* try { // try from 04c13a5c to 04d13a5f has its CatchHandler @ 04c13a6c */
    lVar10 = *(long *)PTR_DAT_065ca230;
    plVar9 = (long *)**(undefined8 **)(lVar6 + 0xb8);
    lVar6 = *(long *)(lVar10 + 0x38);
    if (lVar6 == 0) {
                    /* catch() { ... } // from try @ 04c13a5c with catch @ 04c13a6c */
      FUN_02ce09d4(lVar10);
      lVar6 = *(long *)(lVar10 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
                    /* try { // try from 04c13a7c to 04d13a83 has its CatchHandler @ 04c13a98 */
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                    /* try { // try from 04c13a84 to 04d13a8f has its CatchHandler @ 04c13954 */
      lVar6 = FUN_02ce0978();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
                    /* try { // try from 04c13a90 to 04d13a97 has its CatchHandler @ 04c13a98 */
      thunk_FUN_02cd038c();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04c13a7c with catch @ 04c13a98
                       catch(type#2 @ 00000000) { ... } // from try @ 04c13a90 with catch @ 04c13a98
                        */
    lVar6 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
                    /* try { // try from 04c13a9c to 04d13d07 has its CatchHandler @ 04c13a9c
                       catch() { ... } // from try @ 04c13a9c with catch @ 04c13a9c
                       catch() { ... } // from try @ 04c13e28 with catch @ 04c13a9c
                       catch() { ... } // from try @ 04c13f3c with catch @ 04c13a9c
                       catch() { ... } // from try @ 04c13f44 with catch @ 04c13a9c
                       catch() { ... } // from try @ 04c13f50 with catch @ 04c13a9c
                       catch() { ... } // from try @ 04c1400c with catch @ 04c13a9c */
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02ce0978();
    }
    if (plVar9 == (long *)0x0) goto LAB_04c13dc0;
    lVar10 = *plVar9;
    uVar4 = **(undefined8 **)(lVar6 + 0xb8);
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    uVar11 = *(undefined8 *)PTR_DAT_065e5508;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065e39d8) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar8 + 5) * 0x10 + 0x138);
          goto LAB_04c13bb8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065e39d8,5);
LAB_04c13bb8:
    (*(code *)*puVar5)(plVar9,uVar11,uVar4,puVar5[1]);
  }
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined4 *)(unaff_x19 + 0x58) = *(undefined4 *)(unaff_x20 + 0x50);
  puVar2 = PTR_DAT_065e5070;
  lVar6 = *(long *)(unaff_x20 + 0x48);
  if (lVar6 == 0) {
    lVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e4818);
    FUN_04c27b90(lVar6,0);
  }
  *(long *)(unaff_x19 + 0x50) = lVar6;
  lVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
  FUN_04c29120(lVar6,0);
  puVar2 = PTR_DAT_065e54f0;
  iVar1 = *(int *)(unaff_x19 + 0x58);
  if (iVar1 != 0) {
    if (lVar6 == 0) goto LAB_04c13dc0;
    plVar9 = *(long **)(lVar6 + 0x28);
    lVar10 = *(long *)PTR_DAT_065e54f0;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar10 = *(long *)puVar2;
    }
    puVar3 = PTR_DAT_065e5078;
    lVar12 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
    if (lVar12 == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar10 = *(long *)puVar2;
      }
      uVar4 = **(undefined8 **)(lVar10 + 0xb8);
      lVar12 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5080);
      FUN_04a48c38(lVar12,uVar4,*(undefined8 *)PTR_DAT_065e54e8,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar12;
    }
    uVar4 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
    FUN_04c27a60(uVar4,iVar1,lVar12,0);
    if (plVar9 == (long *)0x0) goto LAB_04c13dc0;
    lVar10 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065e3f80) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface__Awake;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065e3f80,2);
Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface__Awake:
    (*(code *)*puVar5)(plVar9,uVar4,puVar5[1]);
  }
  plVar9 = *(long **)(unaff_x19 + 0x50);
  if (plVar9 != (long *)0x0) {
    lVar10 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065e3f90) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04c13d94;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065e3f90,0);
LAB_04c13d94:
    uVar4 = (*(code *)*puVar5)(plVar9,lVar6,puVar5[1]);
    *(undefined8 *)(unaff_x19 + 0x40) = uVar4;
    return;
  }
LAB_04c13dc0:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


