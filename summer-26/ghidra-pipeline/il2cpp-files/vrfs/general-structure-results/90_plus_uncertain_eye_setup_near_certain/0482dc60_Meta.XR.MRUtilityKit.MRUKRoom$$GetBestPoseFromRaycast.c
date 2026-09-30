/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetBestPoseFromRaycast
ENTRY_POINT: 0482dc60
PROGRAM: vrfs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__GetBestPoseFromRaycast(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_051df7a8();
  if (unaff_x20 != 0) {
    *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
                    /* try { // try from 0482dc74 to 0492dc83 has its CatchHandler @ 0482dc84 */
    thunk_FUN_01656ef8((undefined8 *)(unaff_x20 + 0x40),uVar1);
    if (*(long *)(unaff_x19 + 0x60) != 0) {
      lVar2 = *(long *)(unaff_x19 + 0x98);
                    /* catch() { ... } // from try @ 0482db8c with catch @ 0482dc84
                       catch() { ... } // from try @ 0482dbc4 with catch @ 0482dc84
                       catch() { ... } // from try @ 0482dbf0 with catch @ 0482dc84
                       catch() { ... } // from try @ 0482dc74 with catch @ 0482dc84 */
                    /* try { // try from 0482dc88 to 0492dc8b has its CatchHandler @ 0482dc94 */
      uVar1 = FUN_051df7a8(*(long *)(unaff_x19 + 0x60),0);
                    /* try { // try from 0482dc8c to 0492dc97 has its CatchHandler @ 0482dab8 */
      if (lVar2 != 0) {
        puVar3 = (undefined8 *)(lVar2 + 0x38);
        *puVar3 = uVar1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0482dc88 with catch @ 0482dc94
                        */
        thunk_FUN_01656ef8(puVar3,uVar1);
        if (*(long *)(unaff_x19 + 0x98) != 0) {
          FUN_029bcb24(*(long *)(unaff_x19 + 0x98),0);
          if (*(long *)(unaff_x19 + 0x98) != 0) {
            FUN_051de334(*(long *)(unaff_x19 + 0x98),1,0);
            if (*(long *)(unaff_x19 + 0x150) != 0) {
              *(undefined1 *)(*(long *)(unaff_x19 + 0x150) + 0x21) = 1;
              if (*(long *)(unaff_x19 + 0x78) != 0) {
                FUN_051de334(*(long *)(unaff_x19 + 0x78),0,0);
                if (*(long *)(unaff_x19 + 0x90) != 0) {
                  FUN_051de334(*(long *)(unaff_x19 + 0x90),0,0);
                  if ((*(long *)(unaff_x19 + 0xa0) != 0) &&
                     (lVar2 = *(long *)(*(long *)(unaff_x19 + 0xa0) + 0x90), lVar2 != 0)) {
                    FUN_051df8e4(lVar2,0,0);
                    if (*(long *)(unaff_x19 + 0x158) != 0) {
                      FUN_0482df04(*(long *)(unaff_x19 + 0x158),0);
                      if (*(long *)(unaff_x19 + 0x158) != 0) {
                        FUN_0482dfbc(*(long *)(unaff_x19 + 0x158),1);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


