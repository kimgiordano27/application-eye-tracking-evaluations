/*
FUNCTION_NAME: UnityEngine.TextEditor$$OnCursorIndexChange
ENTRY_POINT: 05bf8250
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_TextEditor__OnCursorIndexChange(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long in_x10;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 in_stack_00000008;
  
  if ((uint)in_x10 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x21 + 0x18) = (uint)in_x10 + 1;
    *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = unaff_x22;
    thunk_FUN_02bb0e9c();
  }
  else {
    FUN_037a6538();
  }
  lVar3 = thunk_FUN_02b79644(*(undefined8 *)Method_Newtonsoft_Json_Linq_JProperty_ClearItems__);
  FUN_05b9af50(lVar3,0);
  puVar2 = Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_string>>__;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)PTR_DAT_06332138;
    thunk_FUN_02bb0e9c();
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x20));
    uVar4 = *unaff_x25;
    *(undefined4 *)(lVar3 + 0x18) = 3;
    lVar5 = thunk_FUN_02b79644(uVar4);
    FUN_037a5cd0(lVar5,*unaff_x19);
    if (lVar5 != 0) {
      lVar7 = *(long *)(lVar5 + 0x10);
      uVar4 = *(undefined8 *)
               Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
      ;
      lVar8 = *unaff_x26;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538(lVar5,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                      );
        }
        *(long *)(lVar3 + 0x30) = lVar5;
        thunk_FUN_02bb0e9c((long *)(lVar3 + 0x30),lVar5);
        lVar5 = thunk_FUN_02b79644(*(undefined8 *)
                                    Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__);
        FUN_037a5cd0(lVar5,*(undefined8 *)
                            Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__);
        lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                    Method_Newtonsoft_Json_Linq_JObject_ValidateToken__);
        FUN_05b9af48(lVar7,0);
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)Method_LitJson_JsonData_EnsureDictionary__;
          thunk_FUN_02bb0e9c();
          *(undefined8 *)(lVar7 + 0x10) =
               *(undefined8 *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<byte>__
          ;
          thunk_FUN_02bb0e9c();
          if (lVar5 != 0) {
            lVar8 = *(long *)(lVar5 + 0x10);
            lVar9 = *unaff_x27;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar1 = *(uint *)(lVar5 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                *plVar6 = lVar7;
                thunk_FUN_02bb0e9c(plVar6,lVar7);
              }
              else {
                FUN_037a6538(lVar5,lVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar3 + 0x28) = lVar5;
              thunk_FUN_02bb0e9c((long *)(lVar3 + 0x28),lVar5);
              lVar5 = *(long *)(unaff_x21 + 0x10);
              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
              if (lVar5 != 0) {
                uVar1 = *(uint *)(unaff_x21 + 0x18);
                if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                  *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                  plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar6 = lVar3;
                  thunk_FUN_02bb0e9c(plVar6,lVar3);
                }
                else {
                  FUN_037a6538();
                }
                *(long *)(unaff_x20 + 0x28) = unaff_x21;
                thunk_FUN_02bb0e9c();
                FUN_05b9ad1c(in_stack_00000008);
                return;
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


