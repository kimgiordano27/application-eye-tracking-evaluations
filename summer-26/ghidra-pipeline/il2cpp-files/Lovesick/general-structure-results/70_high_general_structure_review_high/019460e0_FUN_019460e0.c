/*
FUNCTION_NAME: FUN_019460e0
ENTRY_POINT: 019460e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void FUN_019460e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  if ((DAT_0377a168 & 1) == 0) {
    thunk_FUN_00d48444(System_Linq_Expressions_Interpreter_LocalDefinition___TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_JsonUtility_FromJson<PackageJson>__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<IRuntimePanelComponent>_MoveNext__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f73b0);
    thunk_FUN_00d48444(Method_System_Text_RegularExpressions_Regex_IsMatch__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IXRHoverFilter>_get_Count__);
    DAT_0377a168 = 1;
  }
  if (*(long *)(param_1 + 0x110) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x110) + 0x68);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
    if ((lVar3 != 0) &&
       (FUN_026c8404(lVar3,param_1,
                     *(undefined8 *)System_Linq_Expressions_Interpreter_LocalDefinition___TypeInfo,0
                    ), lVar4 != 0)) {
      FUN_026c84dc(lVar4,lVar3,0);
      puVar2 = Method_System_Text_RegularExpressions_Regex_IsMatch__;
      if (*(long *)(param_1 + 0x110) != 0) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x110) + 0x70);
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_Text_RegularExpressions_Regex_IsMatch__);
        if ((lVar3 != 0) &&
           (FUN_013df2bc(lVar3,param_1,
                         *(undefined8 *)Method_UnityEngine_JsonUtility_FromJson<PackageJson>__,0),
           puVar1 = Method_System_Collections_Generic_List<IXRHoverFilter>_get_Count__, lVar4 != 0))
        {
          FUN_013df780(lVar4,lVar3,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<IXRHoverFilter>_get_Count__);
          if (*(long *)(param_1 + 0x110) != 0) {
            lVar4 = *(long *)(*(long *)(param_1 + 0x110) + 0x78);
            lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            if ((lVar3 != 0) &&
               (FUN_013df2bc(lVar3,param_1,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List_Enumerator<IRuntimePanelComponent>_MoveNext__
                             ,0), lVar4 != 0)) {
              FUN_013df780(lVar4,lVar3,*(undefined8 *)puVar1);
              if (*(long *)(param_1 + 0x110) != 0) {
                lVar4 = *(long *)(*(long *)(param_1 + 0x110) + 0x80);
                lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                if ((lVar3 != 0) &&
                   (FUN_013df2bc(lVar3,param_1,*(undefined8 *)PTR_DAT_033f73b0,0), lVar4 != 0)) {
                  FUN_013df780(lVar4,lVar3,*(undefined8 *)puVar1);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


