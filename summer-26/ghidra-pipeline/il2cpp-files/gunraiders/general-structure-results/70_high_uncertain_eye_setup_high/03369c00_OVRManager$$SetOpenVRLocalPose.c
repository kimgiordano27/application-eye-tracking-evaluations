/*
FUNCTION_NAME: OVRManager$$SetOpenVRLocalPose
ENTRY_POINT: 03369c00
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetOpenVRLocalPose(long *param_1)

{
  undefined1 in_ZR;
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  long *unaff_x25;
  undefined8 *unaff_x27;
  int unaff_w28;
  
code_r0x03369c00:
  if (!(bool)in_ZR) {
    unaff_x25 = param_1;
  }
  uVar3 = 0;
  if (param_1 != (long *)0x0) {
    if (unaff_x25 == (long *)0x0) {
LAB_03369d24:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar3 = (**(code **)(*unaff_x25 + 0x168))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x170));
  }
  uVar4 = FUN_03152760(uVar3,*unaff_x27,4,0);
  if ((uVar4 & 1) == 0) goto LAB_03369c40;
  FUN_03369dc8();
LAB_03369c9c:
                    /* try { // try from 03369ca0 to 03469cb7 has its CatchHandler @ 03369ce4 */
  iVar1 = (**(code **)(*unaff_x20 + 0x1b8))();
                    /* try { // try from 03369cb8 to 03469cd3 has its CatchHandler @ 03369c74 */
  uVar3 = (**(code **)(*unaff_x20 + 0x188))();
  uVar2 = FUN_0337d8dc(uVar3,0);
                    /* try { // try from 03369cd4 to 03469ce3 has its CatchHandler @ 03369ce4 */
                    /* catch() { ... } // from try @ 03369ca0 with catch @ 03369ce4
                       catch() { ... } // from try @ 03369cd4 with catch @ 03369ce4 */
                    /* try { // try from 03369ce8 to 03469ceb has its CatchHandler @ 03369cf4 */
                    /* try { // try from 03369cec to 03469cf7 has its CatchHandler @ 03369c74 */
  if ((((int)(iVar1 - (uVar2 & 1)) <= unaff_w28) || ((unaff_x21 & 1) == 0)) ||
     (uVar4 = (**(code **)(*unaff_x20 + 0x1d8))(), (uVar4 & 1) == 0)) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03369ce8 with catch @ 03369cf4
                        */
                    /* catch() { ... } // from try @ 03369d04 with catch @ 03369cf8
                       catch() { ... } // from try @ 03369d3c with catch @ 03369cf8
                       catch() { ... } // from try @ 03369d70 with catch @ 03369cf8 */
                    /* try { // try from 03369cfc to 03469d03 has its CatchHandler @ 03369d0c */
    uVar4 = FUN_03369e94();
    if ((uVar4 & 1) != 0) {
      thunk_FUN_01c273e8(
                        Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_ReservedBrick>_MoveNext__
                        );
      uVar3 = FUN_0336c688();
      uVar5 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_List_Enumerator<ProbeBrickIndex_ReservedBrick>_get_Current__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar3,uVar5);
    }
    return;
  }
  if ((unaff_x23 & 1) != 0) {
    if (unaff_x20 == (long *)0x0) goto LAB_03369d24;
    iVar1 = (**(code **)(*unaff_x20 + 0x188))();
    if (iVar1 == 3) goto LAB_03369bec;
  }
LAB_03369c40:
  if ((unaff_x22 & 1) == 0) {
    if (unaff_x20 != (long *)0x0) goto code_r0x03369c50;
  }
  else if (unaff_x20 != (long *)0x0) goto LAB_03369c68;
  goto LAB_03369d24;
LAB_03369bec:
  param_1 = (long *)(**(code **)(*unaff_x20 + 0x198))();
  in_ZR = param_1 == (long *)0x0;
  goto code_r0x03369c00;
code_r0x03369c50:
  iVar1 = (**(code **)(*unaff_x20 + 0x188))();
  if (iVar1 != 5) {
LAB_03369c68:
                    /* catch() { ... } // from try @ 03369c80 with catch @ 03369c74
                       catch() { ... } // from try @ 03369cb8 with catch @ 03369c74
                       catch() { ... } // from try @ 03369cec with catch @ 03369c74 */
    (**(code **)(*unaff_x20 + 0x188))();
                    /* try { // try from 03369c78 to 03469c7f has its CatchHandler @ 03369c88 */
                    /* try { // try from 03369c80 to 03469c9f has its CatchHandler @ 03369c74 */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03369c78 with catch @ 03369c88
                        */
    (**(code **)(*unaff_x20 + 0x198))();
    FUN_033694a0();
  }
  goto LAB_03369c9c;
}


