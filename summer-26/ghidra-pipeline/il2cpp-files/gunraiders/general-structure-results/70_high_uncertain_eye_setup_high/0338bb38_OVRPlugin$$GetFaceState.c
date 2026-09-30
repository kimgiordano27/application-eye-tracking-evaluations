/*
FUNCTION_NAME: OVRPlugin$$GetFaceState
ENTRY_POINT: 0338bb38
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetFaceState(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined8 uVar7;
  
  uVar3 = (**(code **)(param_1 + 0x6a8))();
  uVar4 = FUN_03210168(uVar3,0,0);
  puVar1 = System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar5 = FUN_0337f350(uVar3);
    uVar7 = *(undefined8 *)PTR_DAT_0422fb38;
    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fb28);
    }
    uVar7 = FUN_032e04b8(uVar7,0);
    uVar4 = FUN_032ea0d4(uVar5,uVar7,0);
    puVar2 = UnityEngine_Splines_InterpolatorUtility_TypeInfo;
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar6 = FUN_033a78fc(0);
      if ((lVar6 != 0) &&
         (uVar5 = FUN_023c14fc(lVar6,uVar3,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_bool>_get_Current__
                              ), unaff_x21 != 0)) {
        *(undefined8 *)(unaff_x21 + 0x10) = uVar5;
        uVar5 = thunk_FUN_01c496e0(*(undefined8 *)
                                    Method_System_Collections_Generic_List_Enumerator<Pet>_get_Current__
                                  );
        FUN_02f898a4();
        if (unaff_x19 != 0) {
          *(undefined8 *)(unaff_x19 + 0xc0) = uVar5;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar4 = FUN_0337f1bc(uVar3,unaff_w20 & 1,0);
          if ((uVar4 & 1) == 0) {
            return;
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar6 = FUN_033a78fc(0);
          if (lVar6 != 0) {
            uVar3 = FUN_023c18ac(lVar6,uVar3,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Bounds>_Dispose__
                                );
            *(undefined8 *)(unaff_x19 + 200) = uVar3;
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  }
  return;
}


