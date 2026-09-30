/*
FUNCTION_NAME: FUN_06b9c12c
ENTRY_POINT: 06b9c12c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_4
*/


void FUN_06b9c12c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined4 local_34;
  
  puVar4 = Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Contains__;
  puVar3 = 
  Method_Unity_Burst_FunctionPointer<XRSocketGrabTransformer_FastCalculateRadiusOffset_000008E6_PostfixBurstDelegate>_get_Value__
  ;
  puVar2 = PTR_DAT_070c2428;
  if ((DAT_075602b0 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2428);
    FUN_03188a78(
                Method_Unity_Burst_FunctionPointer<XRSocketGrabTransformer_FastCalculateRadiusOffset_000008E6_PostfixBurstDelegate>_get_Value__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_Contains__
                );
    FUN_03188a78(Method_System_Collections_Generic_HashSet<OVRManager_EventListener>__ctor__);
    DAT_075602b0 = 1;
  }
  uVar6 = *(undefined8 *)puVar4;
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 4) = 2;
  uVar5 = FUN_0699fa58(uVar6,0);
  puVar8 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
  uVar6 = *(undefined8 *)puVar2;
  puVar8[4] = uVar5;
  *puVar8 = 8;
  uVar6 = FUN_03188b1c(uVar6,8);
  piVar7 = *(int **)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(piVar7 + 2) = uVar6;
  puVar4 = Method_System_Collections_Generic_HashSet<OVRManager_EventListener>__ctor__;
  puVar2 = PTR_DAT_070c1958;
  if (0 < *piVar7) {
    uVar9 = 0;
    do {
      lVar10 = *(long *)(piVar7 + 2);
      local_34 = (undefined4)uVar9;
      uVar6 = thunk_FUN_031c39fc(*(undefined8 *)(puVar2 + 0x48),&local_34);
      uVar6 = FUN_057b5e54(*(undefined8 *)puVar4,uVar6,0);
      uVar5 = FUN_0699fa58(uVar6,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      lVar1 = uVar9 * 4;
      uVar9 = uVar9 + 1;
      piVar7 = *(int **)(*(long *)puVar3 + 0xb8);
      *(undefined4 *)(lVar10 + lVar1 + 0x20) = uVar5;
    } while ((long)uVar9 < (long)*piVar7);
  }
  return;
}


