/*
FUNCTION_NAME: FUN_03322268
ENTRY_POINT: 03322268
PROGRAM: gunraiders-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * FUN_03322268(long param_1,uint param_2,uint param_3,ulong param_4,undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  
  if ((DAT_0453322d & 1) == 0) {
    FUN_01c5d288(UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fc38);
    DAT_0453322d = 1;
  }
  if (param_1 != 0) {
    uVar3 = thunk_FUN_03152714(param_1,**(undefined8 **)(*(long *)PTR_DAT_0422fc38 + 0xb8),0);
    if ((uVar3 & 1) == 0) {
      if ((param_4 & 1) == 0) {
        plVar7 = (long *)FUN_01bf7788(param_1,param_5,0,param_2 & 1,param_3 & 1,0);
        if ((param_2 & 1) != 0) {
          if (*(int *)(*(long *)
                        UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar3 = Oculus_Platform_CAPI__ovr_Message_GetParty(plVar7,0,0);
          if ((uVar3 & 1) != 0) {
            uVar5 = thunk_FUN_01c273e8(
                                      Method_System_Collections_Generic_Dictionary<PhotonNetwork_RaiseEventBatch,_PhotonNetwork_SerializeViewBatch>_TryGetValue__
                                      );
            uVar4 = thunk_FUN_01c273e8(PTR_DAT_04234850);
            uVar5 = FUN_03152fb8(uVar5,param_1,uVar4,0);
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
        iVar2 = FUN_031572ac(param_1,0x2c,0);
        if ((iVar2 < 1) || (iVar2 == *(int *)(param_1 + 0x10) + -1)) {
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
        uVar5 = System_IO_BufferedStream_<DisposeAsync>d__34__MoveNext(param_1,iVar2 + 1,0);
        plVar7 = (long *)FUN_032185d0(uVar5,0);
        uVar5 = FUN_031548e4(param_1,0,iVar2,0);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        plVar7 = (long *)(**(code **)(*plVar7 + 0x308))
                                   (plVar7,uVar5,param_2 & 1,param_3 & 1,
                                    *(undefined8 *)(*plVar7 + 0x310));
        if (plVar7 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo
                           + 0x130);
          if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo))
          {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(plVar7);
          }
        }
      }
    }
    else {
      if ((param_2 & 1) != 0) {
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


