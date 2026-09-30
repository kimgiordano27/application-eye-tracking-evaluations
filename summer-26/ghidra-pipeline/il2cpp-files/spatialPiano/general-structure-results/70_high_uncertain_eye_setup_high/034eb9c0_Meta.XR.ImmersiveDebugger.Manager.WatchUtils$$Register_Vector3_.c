/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Register<Vector3>
ENTRY_POINT: 034eb9c0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Register<Vector3>(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar10;
  long unaff_x23;
  
  if ((param_1 & 1) != 0) {
    plVar4 = (long *)thunk_FUN_02f1863c();
    if (plVar4 == (long *)0x0) goto LAB_034ebbfc;
                    /* try { // try from 034eb9d4 to 035eb9e3 has its CatchHandler @ 034eba50 */
    uVar5 = (**(code **)(*plVar4 + 0x2e8))(plVar4,*(undefined8 *)(*plVar4 + 0x2f0));
                    /* try { // try from 034eb9e4 to 035eba73 has its CatchHandler @ 034eb8c4 */
    uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)(unaff_x23 + 0xe0));
    }
    plVar4 = (long *)FUN_050e4454(uVar10,0);
    if (plVar4 == (long *)0x0) goto LAB_034ebbfc;
    uVar10 = (**(code **)(*plVar4 + 0x2e8))(plVar4,*(undefined8 *)(*plVar4 + 0x2f0));
    uVar6 = FUN_0501e43c(uVar5,uVar10,0);
    if ((uVar6 & 1) != 0) {
      return;
    }
  }
  lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02f41e9c();
  }
                    /* catch(type#1 @ 06402238) { ... } // from try @ 034eb9d4 with catch @ 034eba50
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 034eb99c with catch @ 034eba54
                        */
  **(undefined8 **)(lVar7 + 0xb8) = unaff_x20;
                    /* catch(type#1 @ 06402238) { ... } // from try @ 034eb978 with catch @ 034eba58
                        */
  if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x30) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  puVar3 = PTR_DAT_067cad10;
                    /* try { // try from 034eba74 to 035eba77 has its CatchHandler @ 034eba80 */
  lVar7 = *(long *)PTR_DAT_067cad10;
                    /* catch() { ... } // from try @ 034eba74 with catch @ 034eba80 */
  if (*(int *)(lVar7 + 0xe4) == 0) {
                    /* try { // try from 034eba84 to 035eba8b has its CatchHandler @ 034ebaa8 */
    thunk_FUN_02f6670c();
    lVar7 = *(long *)puVar3;
  }
                    /* try { // try from 034eba8c to 035ebaab has its CatchHandler @ 034eb8c4 */
  puVar2 = PTR_DAT_067c9338;
  lVar7 = **(long **)(lVar7 + 0xb8);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034eba84 with catch @ 034ebaa8
                        */
                    /* try { // try from 034ebaac to 035ebbe7 has its CatchHandler @ 034ebaac
                       catch() { ... } // from try @ 034ebaac with catch @ 034ebaac
                       catch() { ... } // from try @ 034ebc1c with catch @ 034ebaac
                       catch() { ... } // from try @ 034ebc54 with catch @ 034ebaac
                       catch() { ... } // from try @ 034ebd30 with catch @ 034ebaac */
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
  }
  uVar5 = FUN_050e4454(uVar5,0);
  if (lVar7 == 0) goto LAB_034ebbfc;
  uVar6 = FUN_046ffaec(lVar7,uVar5,*(undefined8 *)PTR_DAT_067cad18);
  if ((uVar6 & 1) == 0) {
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar7 = *(long *)puVar3;
    }
    lVar8 = *(long *)(puVar2 + 0xe0);
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar8);
    }
    uVar5 = FUN_050e4454(uVar5,0);
    if (lVar7 == 0) goto LAB_034ebbfc;
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *(long *)PTR_DAT_067cad38;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_034ebbfc;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
    }
    else {
      FUN_03abf904(lVar7,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar7 = *(long *)puVar3;
  }
  lVar8 = *(long *)(puVar2 + 0xe0);
  lVar7 = **(long **)(lVar7 + 0xb8);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar8);
  }
  uVar5 = FUN_050e4454(uVar5,0);
  if (lVar7 != 0) {
    FUN_0470135c(lVar7,uVar5);
    return;
  }
LAB_034ebbfc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


