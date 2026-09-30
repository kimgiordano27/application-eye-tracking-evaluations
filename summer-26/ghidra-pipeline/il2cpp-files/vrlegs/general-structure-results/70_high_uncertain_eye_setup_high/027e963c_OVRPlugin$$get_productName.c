/*
FUNCTION_NAME: OVRPlugin$$get_productName
ENTRY_POINT: 027e963c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__get_productName(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
                    /* try { // try from 027e964c to 028e965b has its CatchHandler @ 027e965c */
  if ((*(byte *)(unaff_x22 + 0xfa) & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd9118);
                    /* catch() { ... } // from try @ 027e9618 with catch @ 027e965c
                       catch() { ... } // from try @ 027e964c with catch @ 027e965c */
                    /* try { // try from 027e9660 to 028e9663 has its CatchHandler @ 027e966c */
    *(undefined1 *)(unaff_x22 + 0xfa) = 1;
  }
                    /* try { // try from 027e9664 to 028e966f has its CatchHandler @ 027e95ec */
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 027e9660 with catch @ 027e966c
                        */
  uVar1 = FUN_027e971c(param_1);
                    /* catch() { ... } // from try @ 027e967c with catch @ 027e9670
                       catch() { ... } // from try @ 027e96b4 with catch @ 027e9670
                       catch() { ... } // from try @ 027e96e8 with catch @ 027e9670 */
  if ((uVar1 & 1) == 0) {
    lVar2 = param_1;
    if (*(long *)(param_1 + 0x20) != param_3) {
      lVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd9118);
      FUN_027e9780(lVar2,param_1,param_3,0);
    }
    if (param_2 != 0) {
      FUN_027e97d8(param_1,param_2,lVar2);
    }
  }
  else {
                    /* try { // try from 027e9674 to 028e967b has its CatchHandler @ 027e9684 */
                    /* try { // try from 027e967c to 028e969b has its CatchHandler @ 027e9670 */
    lVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd9118);
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027e9674 with catch @ 027e9684
                        */
    FUN_027e9780(lVar2,param_1,param_3,1);
    if (param_2 != 0) {
      (**(code **)(param_2 + 0x18))
                (*(undefined8 *)(param_2 + 0x40),lVar2,*(undefined8 *)(param_2 + 0x28));
    }
  }
  return lVar2;
}


