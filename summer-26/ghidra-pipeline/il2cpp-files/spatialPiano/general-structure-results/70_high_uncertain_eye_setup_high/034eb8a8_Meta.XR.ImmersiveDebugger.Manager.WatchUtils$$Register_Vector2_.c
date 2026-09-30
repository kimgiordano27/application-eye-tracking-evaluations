/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Register<Vector2>
ENTRY_POINT: 034eb8a8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Register<Vector2>(ulong param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_02f41e9c();
  }
  if (*(char *)(*(long *)(param_2 + 0xb8) + 0xe) != '\0') {
    uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    FUN_02a7d698(*(undefined8 *)(PTR_DAT_067c9338 + 0xe0));
                    /* try { // try from 034ebc44 to 035ebc53 has its CatchHandler @ 034ebcf4 */
    uVar6 = FUN_050e4454(uVar6,0);
                    /* try { // try from 034ebc54 to 035ebd17 has its CatchHandler @ 034ebaac */
    uVar10 = thunk_FUN_02f6ef30(PTR_DAT_067cad48);
    uVar6 = FUN_04f65e2c(uVar10,uVar6,0);
    thunk_FUN_02f6ef30(PTR_DAT_067c9600);
    uVar10 = thunk_FUN_02f45270();
    FUN_0510bee0(uVar10,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar10);
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034eb89c with catch @ 034eb8c0
                        */
  lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
                    /* try { // try from 034eb8c4 to 035eb977 has its CatchHandler @ 034eb8c4
                       catch() { ... } // from try @ 034eb8c4 with catch @ 034eb8c4
                       catch() { ... } // from try @ 034eb9ac with catch @ 034eb8c4
                       catch() { ... } // from try @ 034eb9e4 with catch @ 034eb8c4
                       catch() { ... } // from try @ 034eba8c with catch @ 034eb8c4 */
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02f41e9c();
  }
  if (**(long **)(lVar4 + 0xb8) != 0) {
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02f41e9c();
    }
    if ((**(long **)(lVar4 + 0xb8) == 0) ||
       (plVar5 = (long *)thunk_FUN_02f1863c(**(long **)(lVar4 + 0xb8),0), plVar5 == (long *)0x0))
    goto LAB_034ebbfc;
    uVar6 = (**(code **)(*plVar5 + 0x2e8))(plVar5,*(undefined8 *)(*plVar5 + 0x2f0));
    puVar2 = PTR_DAT_067c9338;
    uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
    }
    plVar5 = (long *)FUN_050e4454(uVar10,0);
    if (plVar5 == (long *)0x0) goto LAB_034ebbfc;
    uVar10 = (**(code **)(*plVar5 + 0x2e8))(plVar5,*(undefined8 *)(*plVar5 + 0x2f0));
    uVar7 = FUN_0501ecac(uVar6,uVar10,0);
                    /* try { // try from 034eb978 to 035eb97f has its CatchHandler @ 034eba58 */
    if ((uVar7 & 1) != 0) {
      return;
    }
    if (unaff_x20 == 0) goto LAB_034ebbfc;
                    /* try { // try from 034eb99c to 035eb9ab has its CatchHandler @ 034eba54 */
    uVar6 = thunk_FUN_02f1863c();
                    /* try { // try from 034eb9ac to 035eb9d3 has its CatchHandler @ 034eb8c4 */
    uVar6 = FUN_0336d42c(uVar6,*(undefined8 *)PTR_DAT_067cad28);
    uVar7 = FUN_03386914(uVar6,*(undefined8 *)PTR_DAT_067cad30);
    if ((uVar7 & 1) != 0) {
      plVar5 = (long *)thunk_FUN_02f1863c();
      if (plVar5 == (long *)0x0) goto LAB_034ebbfc;
      uVar6 = (**(code **)(*plVar5 + 0x2e8))(plVar5,*(undefined8 *)(*plVar5 + 0x2f0));
      uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)(puVar2 + 0xe0));
      }
      plVar5 = (long *)FUN_050e4454(uVar10,0);
      if (plVar5 == (long *)0x0) goto LAB_034ebbfc;
      uVar10 = (**(code **)(*plVar5 + 0x2e8))(plVar5,*(undefined8 *)(*plVar5 + 0x2f0));
      uVar7 = FUN_0501e43c(uVar6,uVar10,0);
      if ((uVar7 & 1) != 0) {
        return;
      }
    }
  }
  lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02f41e9c();
  }
  **(long **)(lVar4 + 0xb8) = unaff_x20;
  if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x30) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  puVar2 = PTR_DAT_067cad10;
  lVar4 = *(long *)PTR_DAT_067cad10;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar4 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_067c9338;
  lVar4 = **(long **)(lVar4 + 0xb8);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
  }
  uVar6 = FUN_050e4454(uVar6,0);
  if (lVar4 == 0) goto LAB_034ebbfc;
  uVar7 = FUN_046ffaec(lVar4,uVar6,*(undefined8 *)PTR_DAT_067cad18);
  if ((uVar7 & 1) == 0) {
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar4 = *(long *)puVar2;
    }
    lVar8 = *(long *)(puVar3 + 0xe0);
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar8);
    }
    uVar6 = FUN_050e4454(uVar6,0);
    if (lVar4 == 0) goto LAB_034ebbfc;
    lVar8 = *(long *)(lVar4 + 0x10);
    lVar9 = *(long *)PTR_DAT_067cad38;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_034ebbfc;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
    }
    else {
      FUN_03abf904(lVar4,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar4 = *(long *)puVar2;
  }
  lVar8 = *(long *)(puVar3 + 0xe0);
  lVar4 = **(long **)(lVar4 + 0xb8);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar8);
  }
  uVar6 = FUN_050e4454(uVar6,0);
  if (lVar4 != 0) {
    FUN_0470135c(lVar4,uVar6);
    return;
  }
LAB_034ebbfc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


