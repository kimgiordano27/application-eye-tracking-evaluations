/*
FUNCTION_NAME: Oculus.Platform.Vrcamera$$SetGetDataChannelMessageUpdateNotificationCallback
ENTRY_POINT: 033222a4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 114
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * Oculus_Platform_Vrcamera__SetGetDataChannelMessageUpdateNotificationCallback(void)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  long *plVar7;
  ulong unaff_x23;
  long unaff_x24;
  
  FUN_01c5d288(PTR_DAT_0422fc38);
  *(undefined1 *)(unaff_x24 + 0x22d) = 1;
  if (unaff_x20 == 0) {
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar4 = thunk_FUN_01c496e0();
    uVar5 = thunk_FUN_01c273e8(System_Linq_Expressions_Interpreter_OrInstruction_OrInt16_TypeInfo);
    FUN_0323fc78(uVar4,uVar5,0);
LAB_033224c4:
    uVar5 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_Dictionary<PhotonNetwork_RaiseEventBatch,_PhotonNetwork_SerializeViewBatch>_GetEnumerator__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar4,uVar5);
  }
  uVar3 = thunk_FUN_03152714();
  if ((uVar3 & 1) == 0) {
    if ((unaff_x23 & 1) == 0) {
      plVar7 = (long *)FUN_01bf7788();
      if ((unaff_w19 & 1) != 0) {
        if (*(int *)(*(long *)
                      UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo +
                    0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar3 = Oculus_Platform_CAPI__ovr_Message_GetParty(plVar7,0,0);
        if ((uVar3 & 1) != 0) {
          uVar5 = thunk_FUN_01c273e8(
                                    Method_System_Collections_Generic_Dictionary<PhotonNetwork_RaiseEventBatch,_PhotonNetwork_SerializeViewBatch>_TryGetValue__
                                    );
          thunk_FUN_01c273e8(PTR_DAT_04234850);
          uVar5 = FUN_03152fb8(uVar5);
          thunk_FUN_01c273e8(OVRPlugin_Hand_TypeInfo);
          uVar4 = thunk_FUN_01c496e0();
          FUN_033144b8(uVar4,uVar5);
          uVar5 = thunk_FUN_01c273e8(
                                    Method_System_Collections_Generic_Dictionary<PhotonNetwork_RaiseEventBatch,_PhotonNetwork_SerializeViewBatch>_GetEnumerator__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar4,uVar5);
        }
      }
    }
    else {
      iVar2 = FUN_031572ac();
      if ((iVar2 < 1) || (iVar2 == *(int *)(unaff_x20 + 0x10) + -1)) {
        thunk_FUN_01c273e8(PTR_DAT_04231770);
        uVar4 = thunk_FUN_01c496e0();
        uVar5 = thunk_FUN_01c273e8(
                                  Method_System_Collections_Generic_Dictionary<PhotonNetwork_RaiseEventBatch,_PhotonNetwork_SerializeViewBatch>_Add__
                                  );
        uVar6 = thunk_FUN_01c273e8(
                                  System_Linq_Expressions_Interpreter_OrInstruction_OrInt16_TypeInfo
                                  );
        FUN_0323fce4(uVar4,uVar5,uVar6,0);
        goto LAB_033224c4;
      }
      uVar5 = System_IO_BufferedStream_<DisposeAsync>d__34__MoveNext();
      plVar7 = (long *)FUN_032185d0(uVar5,0);
      uVar5 = FUN_031548e4();
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      plVar7 = (long *)(**(code **)(*plVar7 + 0x308))
                                 (plVar7,uVar5,unaff_w19 & 1,unaff_w21 & 1,
                                  *(undefined8 *)(*plVar7 + 0x310));
      if (plVar7 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)
                           UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo
                         + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar7);
        }
      }
    }
  }
  else {
    if ((unaff_w19 & 1) != 0) {
      thunk_FUN_01c273e8(OVRPlugin_Hand_TypeInfo);
      uVar4 = thunk_FUN_01c496e0();
      uVar5 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_Dictionary<PhotonNetwork_RaiseEventBatch,_PhotonNetwork_SerializeViewBatch>__ctor__
                                );
      FUN_033144b8(uVar4,uVar5);
      goto LAB_033224c4;
    }
    plVar7 = (long *)0x0;
  }
  return plVar7;
}


