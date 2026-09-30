/*
FUNCTION_NAME: FUN_023a39fc
ENTRY_POINT: 023a39fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_13;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_023a39fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = StringLiteral_12686;
  puVar1 = StringLiteral_11991;
  puVar2 = 
  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
  ;
  if ((DAT_03781f07 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Threading_Tasks_Task<int>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Linq_Enumerable_ToArray<KeyValuePair<string,_WitResponseNode>>__
                      );
    thunk_FUN_00d48444(StringLiteral_14169);
    thunk_FUN_00d48444(System_MonoCustomAttrs_TypeInfo);
    thunk_FUN_00d48444(FullSerializer_fsConverterRegistrar_var);
    thunk_FUN_00d48444(StringLiteral_12686);
    thunk_FUN_00d48444(
                      Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_State__
                      );
    thunk_FUN_00d48444(StringLiteral_11991);
    DAT_03781f07 = 1;
  }
  **(undefined4 **)(*(long *)puVar3 + 0xb8) = 0;
  lVar4 = FUN_00da4fb8(*(undefined8 *)puVar1,2);
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar1 = FullSerializer_fsConverterRegistrar_var;
  if (lVar5 != 0) {
    FUN_023a22fc(lVar5,0,*(undefined8 *)FullSerializer_fsConverterRegistrar_var);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) == 0) {
LAB_023a3be0:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      *(undefined8 *)(lVar4 + 0x20) = 1;
      *(long *)(lVar4 + 0x28) = lVar5;
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar5 != 0) {
        FUN_023a22fc(lVar5,0,*(undefined8 *)puVar1);
        if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_023a3be0;
        *(undefined8 *)(lVar4 + 0x30) = 1;
        *(long *)(lVar4 + 0x38) = lVar5;
        puVar2 = System_MonoCustomAttrs_TypeInfo;
        *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar4;
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        puVar2 = StringLiteral_14169;
        if (lVar4 != 0) {
          FUN_01298da0(lVar4,*(undefined8 *)Method_System_Threading_Tasks_Task<int>__ctor__);
          *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = lVar4;
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar4 != 0) {
            FUN_01298de8(lVar4,0x20,
                         *(undefined8 *)
                          Method_System_Linq_Enumerable_ToArray<KeyValuePair<string,_WitResponseNode>>__
                        );
            *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = lVar4;
            lVar4 = thunk_FUN_00d62348();
            if (lVar4 != 0) {
              FUN_023a2aec();
              lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
              *(long *)(lVar5 + 0x20) = lVar4;
              *(undefined4 *)(lVar5 + 0x28) = 0;
              *(long *)(lVar5 + 0x30) = lVar4;
              *(undefined1 *)(lVar5 + 0x38) = 1;
              *(undefined4 *)(lVar5 + 0x3c) = 0x3f800000;
              *(undefined1 *)(lVar5 + 0x40) = 0;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


