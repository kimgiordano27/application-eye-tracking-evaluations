/*
FUNCTION_NAME: FUN_027abab4
ENTRY_POINT: 027abab4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void FUN_027abab4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 local_38;
  
  puVar1 = Method_Unity_XR_CoreUtils_Datums_Datum<int>_set_Value__;
  if ((DAT_037887b7 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_XR_CoreUtils_Datums_Datum<int>_set_Value__);
    thunk_FUN_00d48444(StringLiteral_1678);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtpq_s64_f64__);
    thunk_FUN_00d48444(StringLiteral_6276);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<RenderGraphDebugData_ResourceDebugData>_get_Item__
                      );
    thunk_FUN_00d48444(UnityEngine_InputSystem_Utilities_ReadOnlyArray<NameAndParameters>_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Rendering_DebugActionDesc_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12919);
    thunk_FUN_00d48444(StringLiteral_4507);
    DAT_037887b7 = 1;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = UnityEngine_Rendering_DebugActionDesc_TypeInfo;
  if (lVar3 != 0) {
    FUN_0275950c(lVar3,0);
    *(long *)(param_1 + 0x10) = lVar3;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = StringLiteral_4507;
    if (lVar3 != 0) {
      FUN_02760580(lVar3,0);
      *(long *)(param_1 + 0x28) = lVar3;
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar1 = 
      Method_System_Collections_Generic_List<RenderGraphDebugData_ResourceDebugData>_get_Item__;
      if (lVar3 != 0) {
        FUN_013b0f04(lVar3,*(undefined8 *)StringLiteral_12919);
        *(long *)(param_1 + 0x38) = lVar3;
        *(undefined1 *)(param_1 + 0x40) = 0;
        FUN_017b46ec(param_1,0);
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar2 = StringLiteral_1678;
        puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtpq_s64_f64__;
        if (lVar3 != 0) {
          FUN_01320e50(lVar3,*(undefined8 *)StringLiteral_6276);
          *(long *)(param_1 + 0x18) = lVar3;
          FUN_01322050(lVar3,param_2,*(undefined8 *)puVar1);
          lVar3 = *(long *)puVar2;
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar3 = *(long *)puVar2;
          }
          if (**(long **)(lVar3 + 0xb8) != 0) {
            FUN_0135f61c(**(long **)(lVar3 + 0xb8),&local_38,
                         *(undefined8 *)
                          UnityEngine_InputSystem_Utilities_ReadOnlyArray<NameAndParameters>_TypeInfo
                        );
            *(undefined8 *)(param_1 + 0x20) = local_38;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


