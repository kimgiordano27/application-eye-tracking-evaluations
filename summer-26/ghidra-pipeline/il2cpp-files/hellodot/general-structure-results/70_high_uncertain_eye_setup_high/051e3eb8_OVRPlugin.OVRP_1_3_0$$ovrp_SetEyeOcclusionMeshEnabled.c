/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$ovrp_SetEyeOcclusionMeshEnabled
ENTRY_POINT: 051e3eb8
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_3_0__ovrp_SetEyeOcclusionMeshEnabled(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  uint *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  int *unaff_x24;
  
                    /* try { // try from 051e3ec4 to 052e3ec7 has its CatchHandler @ 051e3ef4 */
  FUN_03920910();
                    /* try { // try from 051e3ec8 to 052e3ef7 has its CatchHandler @ 051e3e7c */
  lVar4 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (lVar4 != 0) {
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                    /* catch() { ... } // from try @ 051e3ec4 with catch @ 051e3ef4 */
                    /* try { // try from 051e3ef8 to 052e3f03 has its CatchHandler @ 051e3f18 */
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                    /* try { // try from 051e3f04 to 052e3f0f has its CatchHandler @ 051e3e7c */
      *unaff_x24 = *unaff_x24 + 1;
                    /* try { // try from 051e3f10 to 052e3f17 has its CatchHandler @ 051e3f18 */
    }
    else {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 051e3ef8 with catch @ 051e3f18
                       catch(type#2 @ 00000000) { ... } // from try @ 051e3f10 with catch @ 051e3f18
                        */
      FUN_03920910();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_051e4298;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 0x13;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_03920910();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_051e4298;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 0x15;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_03920910();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_051e4298;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 0x16;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_03920910();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_051e4298;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 0x17;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_03920910();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_051e4298;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 0x18;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_03920910();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_051e4298;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 2;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_03920910();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_051e4298;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 3;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_03920910();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_051e4298;
    }
    puVar2 = PTR_DAT_06609388;
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 4;
    }
    else {
      FUN_03920910();
    }
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20) = unaff_x19;
    uVar3 = FUN_02ce7ad4(*unaff_x21,5);
    FUN_04e5d48c(uVar3,*(undefined8 *)puVar2,0);
    *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28) = uVar3;
    return;
  }
LAB_051e4298:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


