/*
FUNCTION_NAME: FUN_06bbac78
ENTRY_POINT: 06bbac78
PROGRAM: waitwhat-libil2cpp.so
SCORE: 113
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 FUN_06bbac78(long param_1,int param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68;
  undefined1 local_60 [16];
  
  if ((DAT_0756040b & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2418);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<string,_DataMember>_TryGetValue__);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<PropertyName,_object>_ContainsKey__);
    FUN_03188a78(PTR_DAT_0711e420);
    FUN_03188a78(PTR_DAT_0711e428);
    FUN_03188a78(
                Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                );
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(PTR_DAT_070f5830);
    FUN_03188a78(Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_Dispose__);
    FUN_03188a78(PTR_DAT_070f2dc8);
    FUN_03188a78(
                Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPreprocess__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Start__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Unselect__
                );
    DAT_0756040b = 1;
  }
  puVar4 = PTR_DAT_070c1b68;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  auVar2 = ZEXT816(0);
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_06bbb198;
  local_60 = FUN_04368824(*(long *)(param_1 + 0x10),*(int *)(param_1 + 0x40) + param_2,
                          *(undefined8 *)
                           Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_remove_WhenPostprocessed__
                         );
  iVar6 = FUN_06b46f4c(local_60 + 8,0);
  if (iVar6 == 1) {
    if (local_60._12_4_ != 6) {
      local_68 = local_60._12_4_;
      local_78 = *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_Dispose__;
      uStack_70 = 0xffffffffffffffff;
      uVar7 = FUN_05965738(&local_78,0);
      puVar9 = (undefined8 *)
               Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPreprocess__
      ;
      goto LAB_06bbaefc;
    }
LAB_06bbaf3c:
    plVar10 = (long *)0x0;
  }
  else {
    auVar2 = local_60;
    if (iVar6 != 6) {
      if (iVar6 == 5) {
        if (local_60._0_8_ == 0) goto LAB_06bbb198;
        uVar7 = FUN_06b474d0(local_60._0_8_,local_60._8_8_,0);
        uVar8 = FUN_057bebf8(uVar7,0);
        puVar3 = PTR_DAT_070c1958;
        plVar10 = (long *)0x0;
        plVar12 = (long *)0x0;
        if ((uVar8 & 1) == 0) {
          uVar11 = *(undefined8 *)PTR_DAT_0711e420;
          if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar11 = FUN_0593e698(uVar11,0);
          puVar5 = PTR_DAT_070f5830;
          uVar13 = *(undefined4 *)(param_1 + 0x58);
          if (*(int *)(*(long *)PTR_DAT_070f5830 + 0xe4) == 0) {
            thunk_FUN_031e5338(*(long *)PTR_DAT_070f5830);
          }
          plVar10 = (long *)FUN_06c59644(uVar13,uVar7,uVar11,0);
          if (plVar10 == (long *)0x0) {
            plVar10 = (long *)0x0;
          }
          else if (*plVar10 != *(long *)PTR_DAT_0711e428) {
            plVar10 = (long *)0x0;
          }
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar8 = FUN_069d8404(plVar10,0,0);
          if ((uVar8 & 1) != 0) {
            uVar11 = *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<string,_DataMember>_TryGetValue__
            ;
            if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            uVar11 = FUN_0593e698(uVar11,0);
            uVar13 = *(undefined4 *)(param_1 + 0x58);
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_031e5338(*(long *)puVar5);
            }
            plVar12 = (long *)FUN_06c59644(uVar13,uVar7,uVar11,0);
            if (plVar12 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)
                                 Method_System_Collections_Generic_Dictionary<PropertyName,_object>_ContainsKey__
                               + 0x130);
              if (bVar1 <= *(byte *)(*plVar12 + 0x130)) {
                if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)
                     Method_System_Collections_Generic_Dictionary<PropertyName,_object>_ContainsKey__
                   ) {
                  plVar12 = (long *)0x0;
                }
                goto LAB_06bbb0f0;
              }
            }
          }
          plVar12 = (long *)0x0;
        }
LAB_06bbb0f0:
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar8 = FUN_069d8404(plVar12,0,0);
        if ((uVar8 & 1) != 0) {
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar8 = FUN_069d8404(plVar10,0,0);
          if ((uVar8 & 1) != 0) {
            uVar7 = FUN_057b5e54(*(undefined8 *)
                                  Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Unselect__
                                 ,uVar7,0);
            if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
              thunk_FUN_031e5338(*(long *)PTR_DAT_070c2418);
            }
            FUN_0698c5bc(uVar7,0);
          }
        }
        goto UnityEngine_EventSystems_EventSystem__Update;
      }
      local_68 = FUN_06b46f4c(local_60 + 8,0);
      local_78 = *(undefined8 *)PTR_DAT_070f2dc8;
      uStack_70 = 0xffffffffffffffff;
      uVar7 = FUN_05965738(&local_78,0);
      puVar9 = (undefined8 *)
               Method_Oculus_Interaction_Interactor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_Start__
      ;
LAB_06bbaefc:
      uVar7 = FUN_057b27f0(*puVar9,uVar7,0);
      if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)PTR_DAT_070c2418);
      }
      FUN_0698c5bc(uVar7,0);
      goto LAB_06bbaf3c;
    }
    if (local_60._0_8_ == 0) {
LAB_06bbb198:
      local_60 = auVar2;
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    plVar10 = (long *)FUN_06b47598(local_60._0_8_,local_60._8_8_,0);
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else if (*plVar10 != *(long *)PTR_DAT_0711e428) {
      plVar10 = (long *)0x0;
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar8 = FUN_069d8404(plVar10,0,0);
    if ((uVar8 & 1) != 0) {
      auVar2 = local_60;
      if (local_60._0_8_ == 0) goto LAB_06bbb198;
      plVar12 = (long *)FUN_06b47598(local_60._0_8_,local_60._8_8_,0);
      if (plVar12 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)
                           Method_System_Collections_Generic_Dictionary<PropertyName,_object>_ContainsKey__
                         + 0x130);
        if (bVar1 <= *(byte *)(*plVar12 + 0x130)) {
          if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)
               Method_System_Collections_Generic_Dictionary<PropertyName,_object>_ContainsKey__) {
            plVar12 = (long *)0x0;
          }
          goto UnityEngine_EventSystems_EventSystem__Update;
        }
      }
    }
  }
  plVar12 = (long *)0x0;
UnityEngine_EventSystems_EventSystem__Update:
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar8 = FUN_069d69b8(plVar10,0,0);
  if ((uVar8 & 1) == 0) {
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar8 = FUN_069d69b8(plVar12,0,0);
    uVar7 = 0;
    if ((uVar8 & 1) != 0) {
      uVar7 = FUN_06c81180(plVar12,0);
    }
  }
  else {
    uVar7 = FUN_06c81178(plVar10,0);
  }
  return uVar7;
}


