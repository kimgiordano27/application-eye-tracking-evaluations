/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_DestroySpaceUser
ENTRY_POINT: 036a55e4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_79_0__ovrp_DestroySpaceUser(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((DAT_04833fa6 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_<>c__DisplayClass8_0_<UnregisterManagedCallback>b__0__
                      );
                    /* try { // try from 036a5604 to 037a5613 has its CatchHandler @ 036a57cc */
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_PlayerInput_ActionEvent__ctor__);
                    /* try { // try from 036a5614 to 037a5633 has its CatchHandler @ 036a57dc */
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<GrabInteractor,_GrabInteractable>__ctor__
                      );
    DAT_04833fa6 = 1;
  }
  puVar5 = Method_UnityEngine_InputSystem_PlayerInput_ActionEvent__ctor__;
  puVar4 = Method_Oculus_Interaction_PointerInteractor<GrabInteractor,_GrabInteractable>__ctor__;
  lVar6 = *(long *)(param_1 + 0x58);
  if (lVar6 == 0) {
LAB_036a56f0:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar3 = *(int *)(lVar6 + 0x18);
  if (0 < iVar3) {
                    /* try { // try from 036a5634 to 037a563f has its CatchHandler @ 036a57c8 */
    iVar7 = 0;
    do {
      iVar1 = iVar7 + 1;
                    /* try { // try from 036a5650 to 037a5657 has its CatchHandler @ 036a57c4 */
      iVar2 = iVar1;
      if (iVar1 < iVar3) {
        do {
          lVar6 = FUN_030f28e4(lVar6,iVar7,*(undefined8 *)puVar5);
          if ((lVar6 == 0) || (*(long *)(param_1 + 0x58) == 0)) goto LAB_036a56f0;
          uVar8 = *(undefined8 *)(lVar6 + 0x20);
          lVar6 = FUN_030f28e4(*(long *)(param_1 + 0x58),iVar2,*(undefined8 *)puVar5);
          if (lVar6 == 0) goto LAB_036a56f0;
          uVar9 = *(undefined8 *)(lVar6 + 0x20);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)puVar4);
          }
          FUN_040bcc4c(uVar8,uVar9,0);
          lVar6 = *(long *)(param_1 + 0x58);
          if (lVar6 == 0) goto LAB_036a56f0;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(lVar6 + 0x18));
      }
      iVar3 = *(int *)(lVar6 + 0x18);
      iVar7 = iVar1;
    } while (iVar1 < iVar3);
  }
  return;
}


