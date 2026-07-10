/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03a82f80
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_SpaceQueryResult>(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  long unaff_x21;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined4 uVar5;
  
                    /* try { // try from 03a82f8c to 03b82f93 has its CatchHandler @ 03a82fdc */
  uVar5 = *(undefined4 *)(*(undefined8 **)(*param_1 + 0xb8) + 1);
  *(undefined8 *)(unaff_x21 + 0x10) = **(undefined8 **)(*param_1 + 0xb8);
  *(undefined4 *)(unaff_x21 + 0x18) = uVar5;
  puVar2 = PTR_DAT_07d93e58;
  puVar1 = PTR_DAT_07d93b60;
                    /* try { // try from 03a82fa4 to 03b82fab has its CatchHandler @ 03a82fd8 */
                    /* try { // try from 03a82fac to 03b82fcb has its CatchHandler @ 03a82f00 */
  uVar3 = thunk_FUN_037788cc(*unaff_x24);
  FUN_058e414c();
  uVar4 = thunk_FUN_037788cc(*unaff_x25);
                    /* try { // try from 03a82fcc to 03b82fcf has its CatchHandler @ 03a82fd4 */
                    /* try { // try from 03a82fd0 to 03b82ff3 has its CatchHandler @ 03a82f00 */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 03a82fcc with catch @ 03a82fd4
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 03a82fa4 with catch @ 03a82fd8
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 03a82f8c with catch @ 03a82fdc
                        */
  FUN_058e5348();
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
                    /* try { // try from 03a82ff4 to 03b82ff7 has its CatchHandler @ 03a83020 */
                    /* try { // try from 03a82ff8 to 03b8302f has its CatchHandler @ 03a82f00 */
  uVar3 = FUN_03a70b88(uVar3,uVar4);
  uVar3 = FUN_03fa4fd8(uVar3,*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 03a82ff4 with catch @ 03a83020 */
                    /* try { // try from 03a83030 to 03b83037 has its CatchHandler @ 03a8304c */
                    /* try { // try from 03a83038 to 03b83043 has its CatchHandler @ 03a82f00 */
  FUN_0420f09c(uVar3,*unaff_x19,*(undefined8 *)puVar1);
  return;
}


