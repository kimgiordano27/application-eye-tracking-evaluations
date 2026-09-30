/*
FUNCTION_NAME: OVRPlugin.Media$$Shutdown
ENTRY_POINT: 05692188
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__Shutdown(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  long *unaff_x19;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  
  (**(code **)(*unaff_x19 + 0x198))();
  FUN_05692370();
  puVar2 = System_Collections_Generic_Dictionary<string,_UriParser>_TypeInfo;
  if (unaff_x19[5] != 0) {
    thunk_FUN_0631c714(unaff_x19[5],unaff_x19[0xd],0);
    lVar6 = unaff_x19[0xd];
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if ((*unaff_x20 != 0) && (lVar6 != 0)) {
                    /* try { // try from 056921f4 to 0579220f has its CatchHandler @ 05692294 */
      FUN_0631a9d8(lVar6,**(undefined4 **)(*(long *)puVar2 + 0xb8),
                   *(undefined1 *)(*unaff_x20 + 0xd4),0);
      lVar6 = *(long *)puVar2;
      lVar5 = unaff_x19[0xd];
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar6 = *(long *)puVar2;
      }
                    /* try { // try from 05692220 to 05792253 has its CatchHandler @ 05692290 */
      uVar1 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 8);
      uVar3 = (**(code **)(*unaff_x19 + 0x188))();
      if (lVar5 != 0) {
        FUN_0631a9d8(lVar5,uVar1,uVar3 & 1,0);
        lVar6 = *(long *)puVar2;
        lVar5 = unaff_x19[0xd];
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar6 = *(long *)puVar2;
        }
        uVar1 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 4);
        uVar4 = (**(code **)(*unaff_x19 + 0x198))();
        if (lVar5 != 0) {
          FUN_0631a9d8(lVar5,uVar1,uVar4,0);
          if (unaff_x19[5] != 0) {
            thunk_FUN_0631c648(unaff_x19[5],unaff_x19[0xd],0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


