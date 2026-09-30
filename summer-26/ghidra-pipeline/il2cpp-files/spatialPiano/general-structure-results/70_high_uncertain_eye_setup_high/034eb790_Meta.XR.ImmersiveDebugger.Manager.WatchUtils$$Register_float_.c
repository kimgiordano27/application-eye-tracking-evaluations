/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Register<float>
ENTRY_POINT: 034eb790
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Register<float>(ushort *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_02f41e9c();
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar9 = **(long **)(unaff_x19 + 0x38);
                    /* try { // try from 034eb7b0 to 035eb7bf has its CatchHandler @ 034eb86c */
  lVar3 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 034eb7c0 to 035eb7e7 has its CatchHandler @ 034eb6d0 */
    lVar3 = FUN_02f41e9c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
                    /* try { // try from 034eb7e8 to 035eb7f7 has its CatchHandler @ 034eb868 */
  lVar3 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 034eb7f8 to 035eb88b has its CatchHandler @ 034eb6d0 */
    lVar3 = FUN_02f41e9c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  if (*(char *)(*(long *)(lVar3 + 0xb8) + 0xb) == '\0') {
    uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    FUN_02a7d698(*(undefined8 *)(PTR_DAT_067c9338 + 0xe0));
    uVar5 = FUN_050e4454(uVar5,0);
    puVar7 = PTR_DAT_067cad40;
LAB_034ebc5c:
    uVar10 = thunk_FUN_02f6ef30(puVar7);
    uVar5 = FUN_04f65e2c(uVar10,uVar5,0);
    thunk_FUN_02f6ef30(PTR_DAT_067c9600);
    uVar10 = thunk_FUN_02f45270();
    FUN_0510bee0(uVar10,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar10);
  }
  lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar9 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  lVar3 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 034eb7e8 with catch @ 034eb868
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 034eb7b0 with catch @ 034eb86c
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 034eb78c with catch @ 034eb870
                        */
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar3 = *(long *)(lVar9 + 0x20);
                    /* try { // try from 034eb88c to 035eb88f has its CatchHandler @ 034eb898 */
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
                    /* catch() { ... } // from try @ 034eb88c with catch @ 034eb898 */
                    /* try { // try from 034eb89c to 035eb8a3 has its CatchHandler @ 034eb8c0 */
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
                    /* try { // try from 034eb8a4 to 035eb8c3 has its CatchHandler @ 034eb6d0 */
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  if (*(char *)(*(long *)(lVar3 + 0xb8) + 0xe) != '\0') {
    uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    FUN_02a7d698(*(undefined8 *)(PTR_DAT_067c9338 + 0xe0));
    uVar5 = FUN_050e4454(uVar5,0);
    puVar7 = PTR_DAT_067cad48;
    goto LAB_034ebc5c;
  }
  lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    if ((**(long **)(lVar3 + 0xb8) == 0) ||
       (plVar4 = (long *)thunk_FUN_02f1863c(**(long **)(lVar3 + 0xb8),0), plVar4 == (long *)0x0))
    goto LAB_034ebbfc;
    uVar5 = (**(code **)(*plVar4 + 0x2e8))(plVar4,*(undefined8 *)(*plVar4 + 0x2f0));
    puVar7 = PTR_DAT_067c9338;
    uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
    }
    plVar4 = (long *)FUN_050e4454(uVar10,0);
    if (plVar4 == (long *)0x0) goto LAB_034ebbfc;
    uVar10 = (**(code **)(*plVar4 + 0x2e8))(plVar4,*(undefined8 *)(*plVar4 + 0x2f0));
    uVar6 = FUN_0501ecac(uVar5,uVar10,0);
    if ((uVar6 & 1) != 0) {
      return;
    }
    if (unaff_x20 == 0) goto LAB_034ebbfc;
    uVar5 = thunk_FUN_02f1863c();
    uVar5 = FUN_0336d42c(uVar5,*(undefined8 *)PTR_DAT_067cad28);
    uVar6 = FUN_03386914(uVar5,*(undefined8 *)PTR_DAT_067cad30);
    if ((uVar6 & 1) != 0) {
      plVar4 = (long *)thunk_FUN_02f1863c();
      if (plVar4 == (long *)0x0) goto LAB_034ebbfc;
      uVar5 = (**(code **)(*plVar4 + 0x2e8))(plVar4,*(undefined8 *)(*plVar4 + 0x2f0));
      uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if (*(int *)(*(long *)(puVar7 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)(puVar7 + 0xe0));
      }
      plVar4 = (long *)FUN_050e4454(uVar10,0);
      if (plVar4 == (long *)0x0) goto LAB_034ebbfc;
      uVar10 = (**(code **)(*plVar4 + 0x2e8))(plVar4,*(undefined8 *)(*plVar4 + 0x2f0));
      uVar6 = FUN_0501e43c(uVar5,uVar10,0);
      if ((uVar6 & 1) != 0) {
        return;
      }
    }
  }
  lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  **(long **)(lVar3 + 0xb8) = unaff_x20;
  if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x30) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  puVar7 = PTR_DAT_067cad10;
  lVar3 = *(long *)PTR_DAT_067cad10;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar3 = *(long *)puVar7;
  }
  puVar2 = PTR_DAT_067c9338;
  lVar3 = **(long **)(lVar3 + 0xb8);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
  }
  uVar5 = FUN_050e4454(uVar5,0);
  if (lVar3 == 0) goto LAB_034ebbfc;
  uVar6 = FUN_046ffaec(lVar3,uVar5,*(undefined8 *)PTR_DAT_067cad18);
  if ((uVar6 & 1) == 0) {
    lVar3 = *(long *)puVar7;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar3 = *(long *)puVar7;
    }
    lVar9 = *(long *)(puVar2 + 0xe0);
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar9);
    }
    uVar5 = FUN_050e4454(uVar5,0);
    if (lVar3 == 0) goto LAB_034ebbfc;
    lVar9 = *(long *)(lVar3 + 0x10);
    lVar8 = *(long *)PTR_DAT_067cad38;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_034ebbfc;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
    }
    else {
      FUN_03abf904(lVar3,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar3 = *(long *)puVar7;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar3 = *(long *)puVar7;
  }
  lVar9 = *(long *)(puVar2 + 0xe0);
  lVar3 = **(long **)(lVar3 + 0xb8);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar9);
  }
  uVar5 = FUN_050e4454(uVar5,0);
  if (lVar3 != 0) {
    FUN_0470135c(lVar3,uVar5);
    return;
  }
LAB_034ebbfc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


