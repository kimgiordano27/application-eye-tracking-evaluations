/*
FUNCTION_NAME: FUN_01000a18
ENTRY_POINT: 01000a18
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_01000a18(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_03775d2f & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
    thunk_FUN_00d48444(StringLiteral_11858);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<ParameterExpression>_Add__);
    thunk_FUN_00d48444(Method_System_Text_RegularExpressions_Regex_IsMatch__);
    thunk_FUN_00d48444(System_Func<OVRTelemetryMarker,_OVRTelemetryMarker>_TypeInfo);
    DAT_03775d2f = 1;
  }
  uVar2 = FUN_02689fe0(param_1,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_026540a0(0x3f800000,*(long *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),0);
    if (*(long *)(param_1 + 0xa0) != 0) {
      uVar2 = FUN_00fb7f54(*(long *)(param_1 + 0xa0),0);
      puVar1 = Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__;
      if ((uVar2 & 1) != 0) {
        if (*(int *)(*(long *)Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__ +
                    0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_03774e19 == '\0') {
          thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
          DAT_03774e19 = '\x01';
        }
        lVar3 = *(long *)puVar1;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar3 = *(long *)puVar1;
        }
        if ((**(long **)(lVar3 + 0xb8) == 0) || (*(long *)(param_1 + 0xa0) == 0)) goto LAB_01000c24;
        lVar4 = *(long *)(**(long **)(lVar3 + 0xb8) + 0xd8);
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x18);
        lVar3 = FUN_0268fd10(param_1,0);
        if ((lVar3 == 0) || (FUN_0269f578(lVar3,0), lVar4 == 0)) goto LAB_01000c24;
        FUN_00fb7f74(lVar4,uVar5,0,0);
      }
      if (*(long *)(param_1 + 0x90) != 0) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x90) + 0x20);
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_Text_RegularExpressions_Regex_IsMatch__);
        if ((lVar3 != 0) &&
           (FUN_013df2bc(lVar3,param_1,*(undefined8 *)StringLiteral_11858,0), lVar4 != 0)) {
          FUN_013df7e0(lVar4,lVar3,
                       *(undefined8 *)System_Func<OVRTelemetryMarker,_OVRTelemetryMarker>_TypeInfo);
          FUN_00fdf628(*(undefined8 *)(param_1 + 0x70),0);
          puVar1 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
          if (*(long *)(param_1 + 0xb0) != 0) {
            FUN_026f17d8(*(long *)(param_1 + 0xb0),1,0);
            uVar5 = *(undefined8 *)(param_1 + 0x78);
            lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            if (lVar3 != 0) {
              FUN_016f27fc(lVar3,param_1,
                           *(undefined8 *)
                            Method_System_Collections_Generic_HashSet<ParameterExpression>_Add__,0);
              FUN_00fe0700(uVar5,lVar3,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_01000c24:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


