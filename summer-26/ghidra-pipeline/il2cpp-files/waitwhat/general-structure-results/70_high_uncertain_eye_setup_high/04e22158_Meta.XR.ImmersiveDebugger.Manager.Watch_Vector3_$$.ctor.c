/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$.ctor
ENTRY_POINT: 04e22158
PROGRAM: waitwhat-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>___ctor(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x24;
  
                    /* try { // try from 04e2215c to 04f2215f has its CatchHandler @ 04e2218c */
                    /* try { // try from 04e22160 to 04f22173 has its CatchHandler @ 04e22194 */
  uVar2 = FUN_0592cd7c(unaff_x21 + 0x18,*(undefined8 *)(param_1 + 0x2b8));
                    /* try { // try from 04e22174 to 04f22183 has its CatchHandler @ 04e21f30 */
  if ((7 < *(uint *)(unaff_x19 + 0x18)) &&
     (*(undefined8 *)(unaff_x19 + 0x58) = uVar2, *(uint *)(unaff_x19 + 0x18) != 8)) {
    *(undefined8 *)(unaff_x19 + 0x60) = *unaff_x24;
                    /* try { // try from 04e22184 to 04f22187 has its CatchHandler @ 04e22188 */
    lVar3 = *(long *)(unaff_x20 + 0x20);
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 04e22184 with catch @ 04e22188
                       try { // try from 04e22188 to 04f221ab has its CatchHandler @ 04e21f30 */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 04e2215c with catch @ 04e2218c
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 04e220f0 with catch @ 04e22190
                        */
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 04e22160 with catch @ 04e22194
                        */
      lVar3 = FUN_031c09d4();
    }
    uVar2 = FUN_0597a880(unaff_x21 + 0x20,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x2c0));
                    /* try { // try from 04e221ac to 04f221c3 has its CatchHandler @ 04e22214 */
    if ((9 < *(uint *)(unaff_x19 + 0x18)) &&
       (*(undefined8 *)(unaff_x19 + 0x68) = uVar2, *(uint *)(unaff_x19 + 0x18) != 10)) {
                    /* try { // try from 04e221c4 to 04f22203 has its CatchHandler @ 04e21f30 */
      *(undefined8 *)(unaff_x19 + 0x70) = *unaff_x24;
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4();
      }
      uVar2 = FUN_0592cd7c(unaff_x21 + 0x28,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x2c8));
      if ((0xb < *(uint *)(unaff_x19 + 0x18)) &&
         (*(undefined8 *)(unaff_x19 + 0x78) = uVar2, puVar1 = PTR_DAT_070c1958,
         *(uint *)(unaff_x19 + 0x18) != 0xc)) {
                    /* try { // try from 04e22204 to 04f22213 has its CatchHandler @ 04e22214 */
        *(undefined8 *)(unaff_x19 + 0x80) = *unaff_x24;
                    /* catch() { ... } // from try @ 04e221ac with catch @ 04e22214
                       catch() { ... } // from try @ 04e22204 with catch @ 04e22214 */
                    /* try { // try from 04e22218 to 04f2221b has its CatchHandler @ 04e22224 */
                    /* try { // try from 04e2221c to 04f22227 has its CatchHandler @ 04e21f30 */
        if (*(int *)(*(long *)(puVar1 + 0x28) + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04e22218 with catch @ 04e22224
                        */
        lVar3 = *(long *)(unaff_x20 + 0x20);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_031c09d4();
        }
        uVar2 = FUN_058a4c0c(unaff_x21 + 0x2c,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x2d0));
        if ((0xd < *(uint *)(unaff_x19 + 0x18)) &&
           (*(undefined8 *)(unaff_x19 + 0x88) = uVar2, *(uint *)(unaff_x19 + 0x18) != 0xe)) {
          *(undefined8 *)(unaff_x19 + 0x90) = *unaff_x24;
          if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
            FUN_031c09d4();
          }
          uVar2 = FUN_04db3034();
          if ((0xf < *(uint *)(unaff_x19 + 0x18)) &&
             (*(undefined8 *)(unaff_x19 + 0x98) = uVar2, *(uint *)(unaff_x19 + 0x18) != 0x10)) {
            *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)PTR_DAT_070c3400;
            FUN_057bfff0();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


