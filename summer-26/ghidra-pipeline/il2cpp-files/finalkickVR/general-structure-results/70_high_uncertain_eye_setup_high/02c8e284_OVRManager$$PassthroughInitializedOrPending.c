/*
FUNCTION_NAME: OVRManager$$PassthroughInitializedOrPending
ENTRY_POINT: 02c8e284
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
OVRManager__PassthroughInitializedOrPending
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  float fVar1;
  FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9 *pFVar2;
  void *pvVar3;
  FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2 *pFVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_64;
  float local_44;
  
  local_44 = (float)std::__ndk1::numeric_limits<float>::infinity();
  local_44 = -local_44;
  pFVar4 = *(FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2 **)(param_4 + 0x10);
  NullCheck(pFVar4);
  pFVar2 = (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9 *)
           FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2::GetAt(pFVar4,0);
  NullCheck(pFVar2);
  uVar5 = FingerPinchData_get_TipPosition_mD5B40DFF813DE6F3C3B6BCF1091C32D028AAF5D7_inline
                    (pFVar2,(MethodInfo *)0x0);
  uVar7 = param_3;
  uVar8 = uVar5;
  for (local_64 = 1; local_64 < 5; local_64 = il2cpp_codegen_add<int,int>(local_64,1)) {
    pFVar4 = *(FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2 **)(param_4 + 0x10);
    NullCheck(pFVar4);
    pvVar3 = (void *)FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2::GetAt
                               (pFVar4,(long)local_64);
    NullCheck(pvVar3);
    fVar1 = *(float *)((long)pvVar3 + 0x18);
    if (local_44 < fVar1) {
      pFVar4 = *(FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2 **)(param_4 + 0x10)
      ;
      NullCheck(pFVar4);
      pFVar2 = (FingerPinchData_tFDFCE6C2DA75A8AE3DF6C46A1B338F87F76836F9 *)
               FingerPinchDataU5BU5D_tF0CE9342D5B2C2C61E1EC71AA32D4CFA44F53CA2::GetAt
                         (pFVar4,(long)local_64);
      NullCheck(pFVar2);
      uVar6 = FingerPinchData_get_TipPosition_mD5B40DFF813DE6F3C3B6BCF1091C32D028AAF5D7_inline
                        (pFVar2,(MethodInfo *)0x0);
      uVar8 = param_2;
      uVar9 = param_3;
      uVar7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline
                        (uVar5,param_2,param_3,uVar6,local_44,uVar7,0);
      uVar8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline
                        (uVar7,uVar8,uVar9,0x3f000000,0);
      uVar7 = uVar9;
      local_44 = fVar1;
    }
  }
  return uVar8;
}


