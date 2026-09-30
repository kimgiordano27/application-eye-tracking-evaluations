/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_GroupPresenceOptions_SetMatchSessionId_Native
ENTRY_POINT: 03303944
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


undefined8
Oculus_Platform_CAPI__ovr_GroupPresenceOptions_SetMatchSessionId_Native(undefined8 *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  
  lVar3 = FUN_01c5d2fc(*param_1,*(undefined4 *)(unaff_x19 + 0x18));
  iVar2 = (int)*(undefined8 *)(unaff_x19 + 0x18);
  if (0 < iVar2) {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar7 = *(uint *)(lVar3 + 0x18);
    uVar4 = 0;
    do {
      if (uVar7 <= uVar4) goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
      *(int *)(lVar3 + 0x20 + uVar4 * 4) = (int)uVar4;
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)iVar2);
  }
  if ((int)unaff_w22 < 2) {
    uVar7 = 0;
  }
  else {
    lVar8 = 0;
    uVar7 = 0;
    bVar1 = false;
    do {
      if (((uint)*(ulong *)(unaff_x20 + 0x18) <= uVar7) ||
         ((*(ulong *)(unaff_x20 + 0x18) & 0xffffffff) <= lVar8 + 1U))
      goto Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers;
      uVar5 = *(undefined8 *)(unaff_x20 + 0x28 + lVar8 * 8);
      uVar6 = *(undefined8 *)(unaff_x20 + (long)(int)uVar7 * 8 + 0x20);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iVar2 = FUN_03300b64(uVar6,lVar3,0,uVar5,lVar3,0);
      if (iVar2 == 0) {
        bVar1 = true;
      }
      else if (iVar2 == 2) {
        bVar1 = false;
        uVar7 = (int)lVar8 + 1;
      }
      lVar8 = lVar8 + 1;
    } while ((ulong)unaff_w22 - 1 != lVar8);
    if (bVar1) {
      thunk_FUN_01c273e8(OVRRaycaster_<>c_TypeInfo);
      uVar5 = thunk_FUN_01c496e0();
      uVar6 = thunk_FUN_01c273e8(
                                DarkTonic_MasterAudio_PlaylistController_PlaylistEndedEventHandler_TypeInfo
                                );
      FUN_0320e3ec(uVar5,uVar6,0);
      uVar6 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_Dictionary<string,_Type>_TryGetValue__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar5,uVar6);
    }
  }
  if (uVar7 < *(uint *)(unaff_x20 + 0x18)) {
    return *(undefined8 *)(unaff_x20 + (long)(int)uVar7 * 8 + 0x20);
  }
Oculus_Platform_CAPI__ovr_InviteOptions_ClearSuggestedUsers:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


