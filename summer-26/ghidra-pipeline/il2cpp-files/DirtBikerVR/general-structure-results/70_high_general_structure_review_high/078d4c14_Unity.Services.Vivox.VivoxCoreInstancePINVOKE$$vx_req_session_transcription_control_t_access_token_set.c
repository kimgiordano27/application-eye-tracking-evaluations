/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_transcription_control_t_access_token_set
ENTRY_POINT: 078d4c14
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_transcription_control_t_access_token_set
               (void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long unaff_x21;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  FUN_03a8a718(System_Collections_Generic_List<PanelRaycaster>_TypeInfo);
  FUN_03a8a718(System_Predicate<LobbyPlayerJoined>_TypeInfo);
                    /* try { // try from 078d4c30 to 079d4c3f has its CatchHandler @ 078d4c40 */
  FUN_03a8a718(System_Predicate<object>_TypeInfo);
                    /* catch() { ... } // from try @ 078d4ba4 with catch @ 078d4c40
                       catch() { ... } // from try @ 078d4c30 with catch @ 078d4c40 */
  FUN_03a8a718(System_Predicate<InputControlScheme>_TypeInfo);
                    /* try { // try from 078d4c44 to 079d4c47 has its CatchHandler @ 078d4c50 */
                    /* try { // try from 078d4c48 to 079d4c53 has its CatchHandler @ 078d441c */
  *(undefined1 *)(unaff_x22 + 0xa4c) = 1;
  plVar8 = *(long **)(unaff_x21 + 0x18);
                    /* catch() { ... } // from try @ 078d4c44 with catch @ 078d4c50 */
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar4 = *plVar8;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)System_Collections_Generic_List<PanelRaycaster>_TypeInfo) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 7) * 0x10 + 0x138);
        goto 
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_transcription_control_t_access_token_get
        ;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_03ac43c4(plVar8,*(long *)System_Collections_Generic_List<PanelRaycaster>_TypeInfo,7);

  Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_transcription_control_t_access_token_get
  :
  lVar4 = (*(code *)*puVar2)(plVar8);
  puVar1 = System_Predicate<InputControlScheme>_TypeInfo;
  lVar3 = *(long *)System_Predicate<InputControlScheme>_TypeInfo;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar3 = *(long *)puVar1;
  }
  puVar2 = *(undefined8 **)(lVar3 + 0xb8);
  lVar7 = puVar2[4];
  if (lVar7 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar2 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar9 = *puVar2;
    lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)System_Predicate<KerningPair>_TypeInfo);
    FUN_049639e4(lVar7,uVar9,*(undefined8 *)System_Predicate<object>_TypeInfo,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
    *plVar8 = lVar7;
    thunk_FUN_03afed3c(plVar8,lVar7);
  }
  if (lVar4 != 0) {
    FUN_04513f78(lVar4,lVar7,*(undefined8 *)System_Predicate<LobbyPlayerJoined>_TypeInfo);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


