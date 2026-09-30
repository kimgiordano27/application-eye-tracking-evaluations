/*
FUNCTION_NAME: FUN_00fcd6c0
ENTRY_POINT: 00fcd6c0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_00fcd6c0(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  
  if ((DAT_03775b2c & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Data_DataRelationCollection_DataTableRelationCollection_EnsureDataSet__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<int>__
                      );
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_19__);
    thunk_FUN_00d48444(StringLiteral_8894);
    DAT_03775b2c = 1;
  }
  puVar2 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
  if (*(char *)((long)param_1 + 0x52) == '\0') {
    *(undefined1 *)((long)param_1 + 0x52) = 1;
    if ((*(char *)((long)param_1 + 0x22) != '\0') &&
       (uVar5 = FUN_015ff8a0(param_1[5],0), (uVar5 & 1) == 0)) {
      if (*(char *)((long)param_1 + 0x6b) == '\0') {
        if ((param_1[5] == 0) || (lVar6 = FUN_01602744(param_1[5],0x2c,0,0), lVar6 == 0))
        goto LAB_00fcd910;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (0 < (int)uVar1) {
          uVar9 = 0;
          do {
            if (uVar1 <= uVar9) goto LAB_00fcd914;
            lVar7 = *(long *)(lVar6 + (long)(int)uVar9 * 8 + 0x20);
            if (lVar7 == 0) goto LAB_00fcd910;
            uVar8 = FUN_01604318(lVar7,0);
            lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            if (lVar7 == 0) goto LAB_00fcd910;
            FUN_016f27fc(lVar7,param_1,*(undefined8 *)(*param_1 + 0x250),0);
            FUN_00fe0700(uVar8,lVar7,0);
            uVar1 = *(uint *)(lVar6 + 0x18);
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (int)uVar1);
        }
      }
      else {
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_Data_DataRelationCollection_DataTableRelationCollection_EnsureDataSet__
                                  );
        puVar4 = StringLiteral_8894;
        puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_19__;
        if (lVar6 == 0) goto LAB_00fcd910;
        FUN_011c181c(lVar6,param_1,
                     *(undefined8 *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<int>__
                     ,0);
        FUN_0132e0e8(*(undefined8 *)puVar4,lVar6,*(undefined8 *)puVar3);
      }
    }
    if (((char)param_1[8] != '\0') && (uVar5 = FUN_015ff8a0(param_1[9],0), (uVar5 & 1) == 0)) {
      if ((param_1[9] == 0) || (lVar6 = FUN_01602744(param_1[9],0x2c,0,0), lVar6 == 0)) {
LAB_00fcd910:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar1) {
        uVar9 = 0;
        do {
          if (uVar1 <= uVar9) {
LAB_00fcd914:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar7 = *(long *)(lVar6 + (long)(int)uVar9 * 8 + 0x20);
          if (lVar7 == 0) goto LAB_00fcd910;
          uVar8 = FUN_01604318(lVar7,0);
          lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar7 == 0) goto LAB_00fcd910;
          FUN_016f27fc(lVar7,param_1,*(undefined8 *)(*param_1 + 0x290),0);
          FUN_00fe0700(uVar8,lVar7,0);
          uVar1 = *(uint *)(lVar6 + 0x18);
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)uVar1);
      }
    }
  }
  return;
}


