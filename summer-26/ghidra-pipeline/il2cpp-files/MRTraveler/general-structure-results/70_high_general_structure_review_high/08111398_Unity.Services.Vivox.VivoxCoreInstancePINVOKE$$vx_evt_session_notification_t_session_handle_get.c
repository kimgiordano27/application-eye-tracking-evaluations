/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_notification_t_session_handle_get
ENTRY_POINT: 08111398
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_notification_t_session_handle_get
               (void)

{
  ulong uVar1;
  undefined8 uVar2;
  int in_w8;
  long unaff_x19;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  if (in_w8 != 0) {
    return 0;
  }
  FUN_08111604(unaff_x19 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x10);
                    /* try { // try from 081113c0 to 082113c7 has its CatchHandler @ 08111440 */
  if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
                    /* try { // try from 081113c8 to 082113eb has its CatchHandler @ 08111018 */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 08111374 with catch @ 081113cc
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 081111c4 with catch @ 081113d0
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 08111358 with catch @ 081113d4
                        */
  uVar1 = FUN_085dfaac(uVar3,0,0);
  uVar3 = 0;
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
                    /* try { // try from 081113ec to 082113ef has its CatchHandler @ 08111418 */
                    /* try { // try from 081113f0 to 08211427 has its CatchHandler @ 08111018 */
    if (*(int *)(*(long *)(unaff_x19 + 0x40) + 0x38) != 1) {
      return 0;
    }
    plVar4 = (long *)(unaff_x19 + 0x80);
    if (*plVar4 != 0) {
      return *plVar4;
    }
    uVar3 = 0;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      uVar3 = FUN_085917a0(*(long *)(unaff_x19 + 0x10),0);
                    /* catch() { ... } // from try @ 081113ec with catch @ 08111418 */
      *(undefined8 *)(unaff_x19 + 0x80) = uVar3;
      thunk_FUN_03d233cc(plVar4,uVar3);
                    /* try { // try from 08111428 to 0821143b has its CatchHandler @ 081114a4 */
      lVar5 = *(long *)(unaff_x19 + 0x80);
      uVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e80738);
      uVar3 = System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                        ();
      if (lVar5 != 0) {
        FUN_085da19c(lVar5,uVar2,0);
        return *plVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30(uVar3);
}


