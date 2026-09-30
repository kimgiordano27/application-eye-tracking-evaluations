/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingEnabled
ENTRY_POINT: 0338ba68
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_6;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_faceTrackingEnabled(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 uVar9;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0xab0));
  *(undefined1 *)(unaff_x21 + 0x656) = 1;
  lVar3 = thunk_FUN_01c496e0(*unaff_x22);
  FUN_0338cd44(lVar3,0);
  puVar1 = Method_UnityEngine_UIElements_EventBase<NavigationMoveEvent>_SetCreateFunction__;
  if (unaff_x23 != (long *)0x0) {
    lVar4 = (**(code **)(*unaff_x23 + 0x1c8))();
    uVar5 = (**(code **)(*unaff_x23 + 0x1b8))();
    uVar5 = FUN_03146988(uVar5,*(undefined8 *)puVar1,0);
    if (lVar4 != 0) {
      uVar5 = Oculus_Platform_CAPI__ovr_NetSync_SetVoipChannelCfg(lVar4,uVar5,0x34,0);
      uVar6 = FUN_03210168(uVar5,0,0);
      if ((uVar6 & 1) != 0) {
        plVar7 = (long *)(**(code **)(*unaff_x23 + 0x1c8))();
        uVar5 = (**(code **)(*unaff_x23 + 0x1b8))();
        uVar5 = FUN_03146988(uVar5,*(undefined8 *)puVar1,0);
        if (plVar7 == (long *)0x0) goto LAB_0338bca8;
        uVar5 = (**(code **)(*plVar7 + 0x6a8))(plVar7,uVar5,0x34,*(undefined8 *)(*plVar7 + 0x6b0));
      }
      uVar6 = FUN_03210168(uVar5,0,0);
      puVar1 = System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
      if ((uVar6 & 1) == 0) {
        if (*(int *)(*(long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo + 0xe0) == 0
           ) {
          thunk_FUN_01c1d1e8();
        }
        uVar8 = FUN_0337f350(uVar5);
        uVar9 = *(undefined8 *)PTR_DAT_0422fb38;
        if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fb28);
        }
        uVar9 = FUN_032e04b8(uVar9,0);
        uVar6 = FUN_032ea0d4(uVar8,uVar9,0);
        puVar2 = UnityEngine_Splines_InterpolatorUtility_TypeInfo;
        if ((uVar6 & 1) == 0) {
          if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar4 = FUN_033a78fc(0);
          if ((lVar4 != 0) &&
             (uVar8 = FUN_023c14fc(lVar4,uVar5,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_bool>_get_Current__
                                  ), lVar3 != 0)) {
            *(undefined8 *)(lVar3 + 0x10) = uVar8;
            uVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                        Method_System_Collections_Generic_List_Enumerator<Pet>_get_Current__
                                      );
            FUN_02f898a4(uVar8,lVar3,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_EventBase<NavigationCancelEvent>_TypeId__,0)
            ;
            if (unaff_x19 != 0) {
              *(undefined8 *)(unaff_x19 + 0xc0) = uVar8;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar6 = FUN_0337f1bc(uVar5,unaff_w20 & 1,0);
              if ((uVar6 & 1) == 0) {
                return;
              }
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              lVar3 = FUN_033a78fc(0);
              if (lVar3 != 0) {
                uVar5 = FUN_023c18ac(lVar3,uVar5,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_Bounds>_Dispose__
                                    );
                *(undefined8 *)(unaff_x19 + 200) = uVar5;
                return;
              }
            }
          }
          goto LAB_0338bca8;
        }
      }
      return;
    }
  }
LAB_0338bca8:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


