/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03bf0cf0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__IndexOf<OVRPlugin_SpaceDiscoveryResult>(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 03bf0cf0 to 03cf0cfb has its CatchHandler @ 03bf0d40 */
  FUN_037756d4();
                    /* try { // try from 03bf0d00 to 03cf0d0f has its CatchHandler @ 03bf0d3c */
  iVar1 = FUN_0625b654();
  if (iVar1 == 0) {
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 03bf0d00 with catch @ 03bf0d3c
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 03bf0cf0 with catch @ 03bf0d40
                        */
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 03bf0cc0 with catch @ 03bf0d44
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 03bf0c48 with catch @ 03bf0d48
                        */
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 03bf0d18 with catch @ 03bf0d4c
                        */
      lVar3 = FUN_03775678();
    }
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 03bf0c68 with catch @ 03bf0d50
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 03bf0c00 with catch @ 03bf0d54
                        */
    if (*(int *)(lVar3 + 0xe4) == 0) {
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 03bf0c18 with catch @ 03bf0d58
                       catch(type#1 @ 078dda18) { ... } // from try @ 03bf0c90 with catch @ 03bf0d58
                        */
      thunk_FUN_03798b70();
    }
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03775678();
    }
                    /* try { // try from 03bf0d70 to 03cf0d87 has its CatchHandler @ 03bf0dc8 */
    uVar2 = **(undefined8 **)(lVar3 + 0xb8);
  }
  else {
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
                    /* try { // try from 03bf0d18 to 03cf0d23 has its CatchHandler @ 03bf0d4c */
    FUN_046d3c84(&stack0x00000010);
                    /* try { // try from 03bf0d24 to 03cf0d6f has its CatchHandler @ 03bf0bc8 */
    uVar2 = thunk_FUN_037784fc(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10));
  }
  return uVar2;
}


