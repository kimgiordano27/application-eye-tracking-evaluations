/*
FUNCTION_NAME: System.ThrowHelper$$ThrowWrongValueTypeArgumentException
ENTRY_POINT: 01692ffc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void System_ThrowHelper__ThrowWrongValueTypeArgumentException(void)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  int in_w8;
  ulong uVar7;
  long unaff_x19;
  int iVar8;
  undefined8 *unaff_x24;
  undefined4 uStack000000000000000c;
  
  if (in_w8 != 3) {
    uVar3 = thunk_FUN_00d48444(StringLiteral_3033);
    uVar3 = FUN_00da4fb8(uVar3,1);
    FUN_00ac2be8();
    uStack000000000000000c = *(undefined4 *)(unaff_x19 + 0x18);
    uVar4 = thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgez_f64__);
                    /* try { // try from 01693324 to 017933bf has its CatchHandler @ 01693324
                       catch() { ... } // from try @ 01693324 with catch @ 01693324
                       catch() { ... } // from try @ 016936ac with catch @ 01693324
                       catch() { ... } // from try @ 01693748 with catch @ 01693324
                       catch() { ... } // from try @ 01693880 with catch @ 01693324 */
    uVar4 = thunk_FUN_00d61fa0(uVar4,&stack0x0000000c);
    FUN_00ac2be8(uVar3);
    FUN_00acb0b4(uVar3,uVar4);
    FUN_00adb25c(uVar3,0,uVar4);
    uVar4 = thunk_FUN_00d48444(OVRPlugin_OVRP_1_38_0_TypeInfo);
    uVar3 = FUN_017b63dc(uVar4,uVar3,0);
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                      );
    uVar4 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_01679968(uVar4,uVar3,0);
    uVar3 = thunk_FUN_00d48444(PTR_DAT_033f2328);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar4,uVar3);
  }
  lVar5 = *(long *)(unaff_x19 + 0x98);
  *(undefined1 *)(unaff_x19 + 0xc0) = 0;
                    /* try { // try from 01693014 to 01793033 has its CatchHandler @ 016930f4 */
  if ((lVar5 == 0) || (*(int *)(unaff_x19 + 0x80) < 1)) {
    bVar6 = false;
  }
  else {
    uVar2 = *(uint *)(lVar5 + 0x18);
    bVar6 = false;
    uVar7 = 0;
    do {
      if (uVar2 == uVar7) goto LAB_016932e0;
                    /* try { // try from 01693034 to 0179306b has its CatchHandler @ 016930ec */
      if (*(int *)(lVar5 + 0x20 + uVar7 * 4) != 0) {
        bVar6 = true;
        *(undefined1 *)(unaff_x19 + 0xc0) = 1;
      }
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)*(int *)(unaff_x19 + 0x80));
  }
  if (*(long *)(unaff_x19 + 0x70) != 0) {
    if (bVar6) {
                    /* try { // try from 0169306c to 0179308b has its CatchHandler @ 016930f0 */
      uVar3 = thunk_FUN_01798248();
    }
    else {
      uVar3 = thunk_FUN_01794c38(*(long *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x88),0);
    }
    *(undefined8 *)(unaff_x19 + 0xe8) = uVar3;
  }
  if (*(int *)(unaff_x19 + 0x80) < 1) {
    iVar8 = 1;
  }
  else {
    lVar5 = *(long *)(unaff_x19 + 0x88);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar7 = 0;
    iVar8 = 1;
    do {
      if (*(uint *)(lVar5 + 0x18) <= uVar7) {
LAB_016932e0:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar1 = uVar7 * 4;
      uVar7 = uVar7 + 1;
      iVar8 = *(int *)(lVar5 + 0x20 + lVar1) * iVar8;
    } while ((long)uVar7 < (long)*(int *)(unaff_x19 + 0x80));
  }
  uVar3 = FUN_00da4fb8(*unaff_x24);
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar3;
  uVar3 = FUN_00da4fb8(*unaff_x24,*(undefined4 *)(unaff_x19 + 0x80));
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar3;
  *(int *)(unaff_x19 + 0xb4) = iVar8;
  return;
}


