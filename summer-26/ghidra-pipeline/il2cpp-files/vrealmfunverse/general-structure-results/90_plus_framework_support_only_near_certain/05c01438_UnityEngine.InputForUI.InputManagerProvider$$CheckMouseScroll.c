/*
FUNCTION_NAME: UnityEngine.InputForUI.InputManagerProvider$$CheckMouseScroll
ENTRY_POINT: 05c01438
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 161
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_15;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_InputForUI_InputManagerProvider__CheckMouseScroll(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int in_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  *(int *)(unaff_x21 + 0x18) = in_w10 + 1;
  *(undefined8 *)(param_1 + 0x20) = unaff_x22;
  thunk_FUN_02bb0e9c();
  lVar5 = thunk_FUN_02b79644(*unaff_x29);
  FUN_05b9af50(lVar5,0);
  puVar2 = Method_Newtonsoft_Json_JsonSerializer_set_MissingMemberHandling__;
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) =
         *(undefined8 *)
          Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_Interactors__
    ;
    thunk_FUN_02bb0e9c();
    *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)puVar2;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x20));
    puVar2 = PTR_DAT_063145b0;
    *(undefined4 *)(lVar5 + 0x18) = 0;
    lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
    FUN_037a5cd0(lVar6,*unaff_x26);
    puVar2 = PTR_DAT_063173b8;
    if (lVar6 != 0) {
      lVar9 = *(long *)(lVar6 + 0x10);
      uVar8 = *(undefined8 *)Method_System_Linq_Enumerable_Select<FieldInfo,_string>__;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar9 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538(lVar6,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70));
        }
        *(long *)(lVar5 + 0x30) = lVar6;
        thunk_FUN_02bb0e9c((long *)(lVar5 + 0x30),lVar6);
        lVar6 = thunk_FUN_02b79644(*unaff_x20);
        FUN_037a5cd0(lVar6,*unaff_x25);
        lVar9 = thunk_FUN_02b79644(*unaff_x19);
        FUN_05b9af48(lVar9,0);
        if (lVar9 != 0) {
          *(undefined8 *)(lVar9 + 0x18) =
               *(undefined8 *)Method_Newtonsoft_Json_JsonSerializer_set_PreserveReferencesHandling__
          ;
          thunk_FUN_02bb0e9c();
          *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
          thunk_FUN_02bb0e9c();
          if (lVar6 != 0) {
            lVar10 = *(long *)(lVar6 + 0x10);
            lVar11 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar10 != 0) {
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                plVar7 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                *plVar7 = lVar9;
                thunk_FUN_02bb0e9c(plVar7,lVar9);
              }
              else {
                FUN_037a6538(lVar6,lVar9,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar5 + 0x28) = lVar6;
              thunk_FUN_02bb0e9c((long *)(lVar5 + 0x28),lVar6);
              lVar6 = *(long *)(unaff_x21 + 0x10);
              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
              if (lVar6 != 0) {
                uVar1 = *(uint *)(unaff_x21 + 0x18);
                if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                  *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                  plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar7 = lVar5;
                  thunk_FUN_02bb0e9c(plVar7,lVar5);
                }
                else {
                  FUN_037a6538();
                }
                lVar5 = thunk_FUN_02b79644(*unaff_x29);
                FUN_05b9af50(lVar5,0);
                puVar2 = Method_Newtonsoft_Json_JsonTextReader_ReadNumberValue__;
                if (lVar5 != 0) {
                  *(undefined8 *)(lVar5 + 0x10) =
                       *(undefined8 *)
                        Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_RemoveInteractorByIdentifier__
                  ;
                  thunk_FUN_02bb0e9c();
                  *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)puVar2;
                  thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x20));
                  puVar2 = PTR_DAT_063145b0;
                  *(undefined4 *)(lVar5 + 0x18) = 0;
                  lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                  FUN_037a5cd0(lVar6,*unaff_x26);
                  puVar2 = PTR_DAT_063173b8;
                  if (lVar6 != 0) {
                    lVar9 = *(long *)(lVar6 + 0x10);
                    uVar8 = *(undefined8 *)
                             Method_System_Linq_Enumerable_Select<KeyValuePair<string,_string>,_string>__
                    ;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    if (lVar9 != 0) {
                      uVar1 = *(uint *)(lVar6 + 0x18);
                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                        thunk_FUN_02bb0e9c();
                      }
                      else {
                        FUN_037a6538(lVar6,uVar8,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar5 + 0x30) = lVar6;
                      thunk_FUN_02bb0e9c((long *)(lVar5 + 0x30),lVar6);
                      lVar6 = thunk_FUN_02b79644(*unaff_x20);
                      FUN_037a5cd0(lVar6,*unaff_x25);
                      lVar9 = thunk_FUN_02b79644(*unaff_x19);
                      FUN_05b9af48(lVar9,0);
                      if (lVar9 != 0) {
                        *(undefined8 *)(lVar9 + 0x18) =
                             *(undefined8 *)
                              Method_Newtonsoft_Json_JsonTextReader_ReadNumberCharIntoBuffer__;
                        thunk_FUN_02bb0e9c();
                        *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                        thunk_FUN_02bb0e9c();
                        if (lVar6 != 0) {
                          lVar10 = *(long *)(lVar6 + 0x10);
                          lVar11 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
                          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                          if (lVar10 != 0) {
                            uVar1 = *(uint *)(lVar6 + 0x18);
                            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                              plVar7 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar7 = lVar9;
                              thunk_FUN_02bb0e9c(plVar7,lVar9);
                            }
                            else {
                              FUN_037a6538(lVar6,lVar9,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                            }
                            *(long *)(lVar5 + 0x28) = lVar6;
                            thunk_FUN_02bb0e9c((long *)(lVar5 + 0x28),lVar6);
                            lVar6 = *(long *)(unaff_x21 + 0x10);
                            *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                            if (lVar6 != 0) {
                              uVar1 = *(uint *)(unaff_x21 + 0x18);
                              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar7 = lVar5;
                                thunk_FUN_02bb0e9c(plVar7,lVar5);
                              }
                              else {
                                FUN_037a6538();
                              }
                              lVar5 = thunk_FUN_02b79644(*unaff_x29);
                              FUN_05b9af50(lVar5,0);
                              puVar2 = PTR_DAT_0631b1e8;
                              if (lVar5 != 0) {
                                *(undefined8 *)(lVar5 + 0x10) =
                                     *(undefined8 *)
                                      Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_remove_WhenStateChanged__
                                ;
                                thunk_FUN_02bb0e9c();
                                *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)puVar2;
                                thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x20));
                                puVar3 = PTR_DAT_063145b0;
                                *(undefined4 *)(lVar5 + 0x18) = 1;
                                lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                                FUN_037a5cd0(lVar6,*unaff_x26);
                                if (lVar6 != 0) {
                                  lVar9 = *(long *)(lVar6 + 0x10);
                                  uVar8 = *(undefined8 *)puVar2;
                                  lVar10 = *(long *)PTR_DAT_063173b8;
                                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                  if (lVar9 != 0) {
                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                                      thunk_FUN_02bb0e9c();
                                    }
                                    else {
                                      FUN_037a6538(lVar6,uVar8,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar5 + 0x30) = lVar6;
                                    thunk_FUN_02bb0e9c((long *)(lVar5 + 0x30),lVar6);
                                    lVar6 = thunk_FUN_02b79644(*unaff_x20);
                                    FUN_037a5cd0(lVar6,*unaff_x25);
                                    lVar9 = thunk_FUN_02b79644(*unaff_x19);
                                    FUN_05b9af48(lVar9,0);
                                    puVar2 = 
                                    Method_Newtonsoft_Json_JsonReader_set_DateTimeZoneHandling__;
                                    if (lVar9 != 0) {
                                      *(undefined8 *)(lVar9 + 0x18) =
                                           *(undefined8 *)
                                            Method_Newtonsoft_Json_JsonReader_set_DateTimeZoneHandling__
                                      ;
                                      thunk_FUN_02bb0e9c();
                                      *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                      thunk_FUN_02bb0e9c();
                                      if (lVar6 != 0) {
                                        lVar10 = *(long *)(lVar6 + 0x10);
                                        lVar11 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                        if (lVar10 != 0) {
                                          uVar1 = *(uint *)(lVar6 + 0x18);
                                          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                            plVar7 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar7 = lVar9;
                                            thunk_FUN_02bb0e9c(plVar7,lVar9);
                                          }
                                          else {
                                            FUN_037a6538(lVar6,lVar9,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar5 + 0x28) = lVar6;
                                          thunk_FUN_02bb0e9c((long *)(lVar5 + 0x28),lVar6);
                                          lVar6 = *(long *)(unaff_x21 + 0x10);
                                          *(int *)(unaff_x21 + 0x1c) =
                                               *(int *)(unaff_x21 + 0x1c) + 1;
                                          if (lVar6 != 0) {
                                            uVar1 = *(uint *)(unaff_x21 + 0x18);
                                            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                              plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20)
                                              ;
                                              *plVar7 = lVar5;
                                              thunk_FUN_02bb0e9c(plVar7,lVar5);
                                            }
                                            else {
                                              FUN_037a6538();
                                            }
                                            lVar5 = thunk_FUN_02b79644(*unaff_x29);
                                            FUN_05b9af50(lVar5,0);
                                            puVar3 = 
                                            Method_Newtonsoft_Json_JsonSerializer_set_NullValueHandling__
                                            ;
                                            if (lVar5 != 0) {
                                              *(undefined8 *)(lVar5 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_add_WhenStateChanged__
                                              ;
                                              thunk_FUN_02bb0e9c();
                                              *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)puVar3;
                                              thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x20));
                                              puVar3 = PTR_DAT_063145b0;
                                              *(undefined4 *)(lVar5 + 0x18) = 0;
                                              lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                                              FUN_037a5cd0(lVar6,*(undefined8 *)PTR_DAT_063145b8);
                                              puVar3 = PTR_DAT_063173b8;
                                              if (lVar6 != 0) {
                                                lVar9 = *(long *)(lVar6 + 0x10);
                                                uVar8 = *(undefined8 *)
                                                                                                                  
                                                  Method_System_Linq_Enumerable_Select<DataColumn,_Type>__
                                                ;
                                                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                                if (lVar9 != 0) {
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                                                    thunk_FUN_02bb0e9c();
                                                  }
                                                  else {
                                                    FUN_037a6538(lVar6,uVar8,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02b79644(*unaff_x20);
                                                  FUN_037a5cd0(lVar6,*unaff_x25);
                                                  lVar9 = thunk_FUN_02b79644(*unaff_x19);
                                                  FUN_05b9af48(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                    thunk_FUN_02bb0e9c();
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    puVar3 = PTR_DAT_063145b8;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar9;
                                                        thunk_FUN_02bb0e9c(plVar7,lVar9);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar6,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar5;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar5);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar5 = thunk_FUN_02b79644(*unaff_x29);
                                                    FUN_05b9af50(lVar5,0);
                                                    puVar2 = 
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ulong>__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<SphericalHarmonicsL2>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x20));
                                                  puVar2 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar5 + 0x18) = 1;
                                                  lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_037a5cd0(lVar6,*(undefined8 *)puVar3);
                                                  puVar2 = PTR_DAT_063173b8;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<uint>__
                                                  ;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02b79644(*unaff_x20);
                                                  FUN_037a5cd0(lVar6,*unaff_x25);
                                                  lVar9 = thunk_FUN_02b79644(*unaff_x19);
                                                  FUN_05b9af48(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<byte>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar5;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar5);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar5 = thunk_FUN_02b79644(*unaff_x29);
                                                    FUN_05b9af50(lVar5,0);
                                                    puVar2 = PTR_DAT_0631b1f0;
                                                    if (lVar5 != 0) {
                                                      *(undefined8 *)(lVar5 + 0x10) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_SelectingInteractorAdded__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x20));
                                                  puVar4 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar5 + 0x18) = 1;
                                                  lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
                                                  FUN_037a5cd0(lVar6,*(undefined8 *)puVar3);
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar8 = *(undefined8 *)puVar2;
                                                    lVar10 = *(long *)PTR_DAT_063173b8;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar8;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar6,uVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02b79644(*unaff_x20);
                                                  FUN_037a5cd0(lVar6,*unaff_x25);
                                                  lVar9 = thunk_FUN_02b79644(*unaff_x19);
                                                  FUN_05b9af48(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar5;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar5);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar5 = thunk_FUN_02b79644(*unaff_x29);
                                                    FUN_05b9af50(lVar5,0);
                                                    puVar2 = 
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ProbeBrickIndex_Brick>__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_Awake__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x20));
                                                  puVar2 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar5 + 0x18) = 0;
                                                  lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_037a5cd0(lVar6,*(undefined8 *)puVar3);
                                                  puVar2 = PTR_DAT_063173b8;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<AndroidAxis,_string>__
                                                  ;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02b79644(*unaff_x20);
                                                  FUN_037a5cd0(lVar6,*unaff_x25);
                                                  lVar9 = thunk_FUN_02b79644(*unaff_x19);
                                                  FUN_05b9af48(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_GetExpectedDescription__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar5;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar5);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar5 = thunk_FUN_02b79644(*unaff_x29);
                                                    FUN_05b9af50(lVar5,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonTypeReflector_GetAttribute<DefaultValueAttribute>__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x20));
                                                  puVar2 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar5 + 0x18) = 0;
                                                  lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_037a5cd0(lVar6,*(undefined8 *)puVar3);
                                                  puVar2 = PTR_DAT_063173b8;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_JsonTextReader_FinishReadQuotedNumber__
                                                  ;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02b79644(*unaff_x20);
                                                  FUN_037a5cd0(lVar6,*unaff_x25);
                                                  lVar9 = thunk_FUN_02b79644(*unaff_x19);
                                                  FUN_05b9af48(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_FinishReadQuotedStringValue__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar5;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar5);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar5 = thunk_FUN_02b79644(*unaff_x29);
                                                    FUN_05b9af50(lVar5,0);
                                                    puVar2 = 
                                                  Method_System_Linq_Enumerable_Empty<Type>__;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Collections_Generic_Queue<JobHandle>_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x20));
                                                  puVar2 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar5 + 0x18) = 2;
                                                  lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_037a5cd0(lVar6,*(undefined8 *)puVar3);
                                                  puVar2 = PTR_DAT_063173b8;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<KeyValuePair<string,_JsonParser_JsonValue>,_string>__
                                                  ;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02b79644(*unaff_x20);
                                                  FUN_037a5cd0(lVar6,*unaff_x25);
                                                  lVar9 = thunk_FUN_02b79644(*unaff_x19);
                                                  FUN_05b9af48(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_DefaultValueHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar5;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar5);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar5 = thunk_FUN_02b79644(*unaff_x29);
                                                    FUN_05b9af50(lVar5,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_JsonReader_set_MaxDepth__;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_State__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x20));
                                                  puVar2 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar5 + 0x18) = 0;
                                                  lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_037a5cd0(lVar6,*(undefined8 *)puVar3);
                                                  puVar2 = PTR_DAT_063173b8;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<EnumMemberAttribute,_string>__
                                                  ;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02b79644(*unaff_x20);
                                                  FUN_037a5cd0(lVar6,*unaff_x25);
                                                  lVar9 = thunk_FUN_02b79644(*unaff_x19);
                                                  FUN_05b9af48(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_Deserialize<RegexOptions>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar5;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar5);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar5 = thunk_FUN_02b79644(*unaff_x29);
                                                    FUN_05b9af50(lVar5,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseUndefined__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_Registry__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x20));
                                                  puVar2 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar5 + 0x18) = 0;
                                                  lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_037a5cd0(lVar6,*(undefined8 *)puVar3);
                                                  puVar2 = PTR_DAT_063173b8;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<FieldInfo,_Enum>__
                                                  ;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02b79644(*unaff_x20);
                                                  FUN_037a5cd0(lVar6,*unaff_x25);
                                                  lVar9 = thunk_FUN_02b79644(*unaff_x19);
                                                  FUN_05b9af48(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_MatchValue__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar5;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar5);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar5 = thunk_FUN_02b79644(*unaff_x29);
                                                    FUN_05b9af50(lVar5,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EnsureType__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<LocomotionAxisTurnerInteractor,_LocomotionAxisTurnerInteractable>__ctor__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x20));
                                                  puVar2 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar5 + 0x18) = 2;
                                                  lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_037a5cd0(lVar6,*(undefined8 *)puVar3);
                                                  puVar2 = PTR_DAT_063173b8;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<DynamicMetaObject,_Expression>__
                                                  ;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02b79644(*unaff_x20);
                                                  FUN_037a5cd0(lVar6,*unaff_x25);
                                                  lVar9 = thunk_FUN_02b79644(*unaff_x19);
                                                  FUN_05b9af48(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewObject__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar5;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar5);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar5 = thunk_FUN_02b79644(*unaff_x29);
                                                    FUN_05b9af50(lVar5,0);
                                                    puVar2 = 
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector3>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x20));
                                                  puVar2 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar5 + 0x18) = 1;
                                                  lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_037a5cd0(lVar6,*(undefined8 *)puVar3);
                                                  puVar2 = PTR_DAT_063173b8;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceDiscoveryResult>__
                                                  ;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02b79644(*unaff_x20);
                                                  FUN_037a5cd0(lVar6,*unaff_x25);
                                                  lVar9 = thunk_FUN_02b79644(*unaff_x19);
                                                  FUN_05b9af48(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<int>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar5;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar5);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar5 = thunk_FUN_02b79644(*unaff_x29);
                                                    FUN_05b9af50(lVar5,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewList__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Registry__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x20));
                                                  puVar2 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar5 + 0x18) = 0;
                                                  lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_037a5cd0(lVar6,*(undefined8 *)puVar3);
                                                  puVar2 = PTR_DAT_063173b8;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<KeyValuePair<Guid,_PxrSpatialMeshInfo>,_Guid>__
                                                  ;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02b79644(*unaff_x20);
                                                  FUN_037a5cd0(lVar6,*unaff_x25);
                                                  lVar9 = thunk_FUN_02b79644(*unaff_x19);
                                                  FUN_05b9af48(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PopulateDictionary__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar5;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar5);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar5 = thunk_FUN_02b79644(*unaff_x29);
                                                    FUN_05b9af50(lVar5,0);
                                                    puVar2 = 
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetBoolean__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData__ctor__;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar5 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x20))
                                                    ;
                                                    puVar2 = PTR_DAT_063145b0;
                                                    *(undefined4 *)(lVar5 + 0x18) = 3;
                                                    lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_037a5cd0(lVar6,*(undefined8 *)puVar3);
                                                    puVar2 = PTR_DAT_063173b8;
                                                    if (lVar6 != 0) {
                                                      lVar9 = *(long *)(lVar6 + 0x10);
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__
                                                  ;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02b79644(*unaff_x20);
                                                  FUN_037a5cd0(lVar6,*unaff_x25);
                                                  lVar9 = thunk_FUN_02b79644(*unaff_x19);
                                                  FUN_05b9af48(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar5;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar5);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar5 = thunk_FUN_02b79644(*unaff_x29);
                                                    FUN_05b9af50(lVar5,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_string>>__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06332138;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar5 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x20))
                                                    ;
                                                    puVar2 = PTR_DAT_063145b0;
                                                    *(undefined4 *)(lVar5 + 0x18) = 3;
                                                    lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_037a5cd0(lVar6,*(undefined8 *)puVar3);
                                                    puVar2 = PTR_DAT_063173b8;
                                                    if (lVar6 != 0) {
                                                      lVar9 = *(long *)(lVar6 + 0x10);
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                                                  ;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02b79644(*unaff_x20);
                                                  FUN_037a5cd0(lVar6,*unaff_x25);
                                                  lVar9 = thunk_FUN_02b79644(*unaff_x19);
                                                  FUN_05b9af48(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData_EnsureDictionary__
                                                    ;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar6 != 0) {
                                                      lVar10 = *(long *)(lVar6 + 0x10);
                                                      lVar11 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar5;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar5);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar5 = thunk_FUN_02b79644(*unaff_x29);
                                                    FUN_05b9af50(lVar5,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_MetadataPropertyHandling__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_GetErrorContext__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x20));
                                                  puVar2 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar5 + 0x18) = 4;
                                                  lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_037a5cd0(lVar6,*(undefined8 *)puVar3);
                                                  puVar2 = PTR_DAT_063173b8;
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                                  ;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_02b79644(*unaff_x20);
                                                  FUN_037a5cd0(lVar6,*unaff_x25);
                                                  lVar9 = thunk_FUN_02b79644(*unaff_x19);
                                                  FUN_05b9af48(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_FloatParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar6;
                                                  thunk_FUN_02bb0e9c((long *)(lVar5 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar5;
                                                      thunk_FUN_02bb0e9c(plVar7,lVar5);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    *(long *)(in_stack_00000008 + 0x28) = unaff_x21;
                                                    thunk_FUN_02bb0e9c();
                                                    FUN_05b9ad1c(in_stack_00000000,in_stack_00000008
                                                                 ,0);
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


