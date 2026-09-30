/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetConsentTitle
ENTRY_POINT: 074091a8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_GetConsentTitle(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long in_x9;
  long unaff_x19;
  uint *unaff_x20;
  undefined8 *unaff_x22;
  long *unaff_x23;
  int *unaff_x24;
  
  uVar1 = *unaff_x20;
  if (uVar1 < *(uint *)(in_x9 + 0x18)) {
    *unaff_x20 = uVar1 + 1;
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 0x16;
    *unaff_x24 = *unaff_x24 + 1;
                    /* try { // try from 074091d8 to 075091db has its CatchHandler @ 074091e0 */
  }
  else {
                    /* try { // try from 074091dc to 0750920b has its CatchHandler @ 07408e68 */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 074091d8 with catch @ 074091e0
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 07408f94 with catch @ 074091e4
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 074090a4 with catch @ 074091e8
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 07409120 with catch @ 074091ec
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 07408fa8 with catch @ 074091f0
                        */
    FUN_051c31f4();
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 07409028 with catch @ 074091f4
                        */
    in_x9 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (in_x9 == 0) goto LAB_07409440;
  }
                    /* try { // try from 0740920c to 0750920f has its CatchHandler @ 07409230 */
  uVar1 = *unaff_x20;
                    /* try { // try from 07409210 to 07509237 has its CatchHandler @ 07408e68 */
  if (uVar1 < *(uint *)(in_x9 + 0x18)) {
    *unaff_x20 = uVar1 + 1;
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 0x17;
    *unaff_x24 = *unaff_x24 + 1;
  }
  else {
    FUN_051c31f4();
    in_x9 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (in_x9 == 0) goto LAB_07409440;
  }
  uVar1 = *unaff_x20;
  if (uVar1 < *(uint *)(in_x9 + 0x18)) {
    *unaff_x20 = uVar1 + 1;
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 0x18;
    *unaff_x24 = *unaff_x24 + 1;
  }
  else {
    FUN_051c31f4();
    in_x9 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (in_x9 == 0) goto LAB_07409440;
  }
  uVar1 = *unaff_x20;
  if (uVar1 < *(uint *)(in_x9 + 0x18)) {
    *unaff_x20 = uVar1 + 1;
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 2;
    *unaff_x24 = *unaff_x24 + 1;
  }
  else {
    FUN_051c31f4();
    in_x9 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (in_x9 == 0) goto LAB_07409440;
  }
  uVar1 = *unaff_x20;
  if (uVar1 < *(uint *)(in_x9 + 0x18)) {
    *unaff_x20 = uVar1 + 1;
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 3;
    *unaff_x24 = *unaff_x24 + 1;
  }
  else {
    FUN_051c31f4();
    in_x9 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (in_x9 == 0) {
LAB_07409440:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
  }
  puVar2 = PTR_DAT_08eb6430;
  uVar1 = *unaff_x20;
  if (uVar1 < *(uint *)(in_x9 + 0x18)) {
    *unaff_x20 = uVar1 + 1;
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 4;
  }
  else {
    FUN_051c31f4();
  }
  *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20) = unaff_x19;
  thunk_FUN_03d233cc();
  uVar3 = FUN_03c8f97c(*unaff_x22,5);
  FUN_0701f51c(uVar3,*(undefined8 *)puVar2,0);
  puVar4 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
  *puVar4 = uVar3;
  thunk_FUN_03d233cc(puVar4,uVar3);
  return;
}


