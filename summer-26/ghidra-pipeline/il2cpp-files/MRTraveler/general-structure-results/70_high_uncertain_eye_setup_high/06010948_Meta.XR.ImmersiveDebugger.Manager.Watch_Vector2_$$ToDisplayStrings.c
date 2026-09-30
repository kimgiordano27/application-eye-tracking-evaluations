/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$ToDisplayStrings
ENTRY_POINT: 06010948
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__ToDisplayStrings
               (undefined8 param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  void *__src;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  size_t unaff_x20;
  size_t __n;
  void *unaff_x21;
  long unaff_x23;
  void *unaff_x24;
  long unaff_x29;
  
                    /* try { // try from 0601094c to 061109c3 has its CatchHandler @ 06010834 */
  memset(unaff_x21,param_2,unaff_x20);
  memcpy(unaff_x24,unaff_x21,unaff_x20);
  lVar1 = *unaff_x19;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03cf1244();
  }
  uVar2 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x18));
  lVar1 = *unaff_x19;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03cf1244(lVar1);
  }
  __src = (void *)thunk_FUN_03cd7b0c(*(undefined8 *)(unaff_x29 + -0x18),
                                     *(long *)(*(long *)(*(long *)(lVar1 + 0xc0) + 8) + 0x80) + 0x40
                                    );
  if ((uVar2 & 1) == 0) {
    __n = *(size_t *)(unaff_x29 + -0x20);
    memcpy(unaff_x24,__src,__n);
    memcpy(unaff_x21,unaff_x24,__n);
                    /* try { // try from 060109f0 to 06110a13 has its CatchHandler @ 06010a70 */
    memcpy(*(void **)(unaff_x29 + -0x38),unaff_x21,__n);
    lVar1 = *unaff_x19;
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03cf1244();
    }
    uVar2 = FUN_03c8fae4(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x18),
                         *(undefined8 *)(unaff_x29 + -0x38));
    __src = unaff_x21;
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
      goto LAB_06010a84;
    }
  }
  lVar1 = *unaff_x19;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03cf1244();
  }
                    /* try { // try from 06010a30 to 06110a53 has its CatchHandler @ 06010a74 */
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x18);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03cf1244(lVar1);
  }
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 06010a54 to 06110a8f has its CatchHandler @ 06010834 */
    lVar3 = FUN_03cf1244();
  }
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 060109f0 with catch @ 06010a70
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 06010a30 with catch @ 06010a74
                        */
  FUN_03c90414(lVar1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x128),
               *(undefined8 *)(unaff_x29 + -0x58),__src,0,unaff_x29 + -0x10);
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 060108f4 with catch @ 06010a78
                       catch(type#1 @ 088de0a8) { ... } // from try @ 060109c4 with catch @ 06010a78
                        */
  uVar4 = *(undefined8 *)(unaff_x29 + -0x10);
LAB_06010a84:
  if (4 < *(uint *)(unaff_x23 + 0x18)) {
                    /* try { // try from 06010a90 to 06110aa7 has its CatchHandler @ 06010ca8 */
    *(undefined8 *)(unaff_x23 + 0x40) = uVar4;
    thunk_FUN_03d233cc((undefined8 *)(unaff_x23 + 0x40));
                    /* try { // try from 06010aa8 to 06110c97 has its CatchHandler @ 06010834 */
    if (5 < *(uint *)(unaff_x23 + 0x18)) {
      *(undefined8 *)(unaff_x23 + 0x48) = *(undefined8 *)PTR_DAT_08e69cd8;
      thunk_FUN_03d233cc();
      FUN_06f74f38();
      if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


