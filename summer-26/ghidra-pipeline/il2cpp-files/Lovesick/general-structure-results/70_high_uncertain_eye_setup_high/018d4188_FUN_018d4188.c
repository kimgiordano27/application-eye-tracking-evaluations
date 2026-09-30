/*
FUNCTION_NAME: FUN_018d4188
ENTRY_POINT: 018d4188
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_018d4188(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((DAT_03779a3c & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    DAT_03779a3c = 1;
  }
  if (param_2 != (long *)0x0) {
    plVar5 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
    if (plVar5 != (long *)0x0) {
      if (*plVar5 !=
          *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar5);
      }
      if (0 < (int)plVar5[2]) {
        sVar2 = FUN_015fa29c(plVar5,0,0);
        if (sVar2 == 0x2f) {
          iVar3 = FUN_01605160(plVar5,0x2f,0);
          puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
          if (0 < iVar3) {
            uVar6 = FUN_01601d40(plVar5,1,iVar3 + -1,0);
            uVar7 = FUN_01603ec8(plVar5,iVar3 + 1,0);
            uVar4 = FUN_0185e544(uVar7,0);
            lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            if (lVar8 != 0) {
              FUN_02021868(lVar8,uVar6,uVar4,0);
              return lVar8;
            }
            goto LAB_018d42e8;
          }
        }
      }
      uVar6 = thunk_FUN_00d48444(Sirenix_Utilities_Direction_TypeInfo);
      uVar6 = FUN_01801b58(param_2,uVar6,0);
      uVar7 = thunk_FUN_00d48444(StringLiteral_4477);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar6,uVar7);
    }
  }
LAB_018d42e8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


