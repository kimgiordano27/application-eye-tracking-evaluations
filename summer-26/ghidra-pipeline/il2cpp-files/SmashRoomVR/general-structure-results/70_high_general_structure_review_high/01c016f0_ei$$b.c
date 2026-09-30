/*
FUNCTION_NAME: ei$$b
ENTRY_POINT: 01c016f0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_11;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 ei__b(long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fStack0000000000000008;
  
  puVar4 = Method_Unity_VisualScripting_TypeUtility_<>c__DisplayClass8_0_<Instantiator>b__1__;
  puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_35__;
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  fStack0000000000000008 = *(float *)(param_1 + 0x298);
  iVar9 = 1;
  while( true ) {
    uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
    lVar5 = FUN_0391c27c();
    if (lVar5 == 0) break;
    fVar10 = (float)FUN_03928d34(lVar5,0);
    uVar13 = (ulong)(uint)*(float *)(unaff_x20 + 0x28);
    fVar11 = (float)FUN_0391a0e8(-*(float *)(unaff_x20 + 0x28),0);
    lVar5 = FUN_0391c27c();
    if (lVar5 == 0) break;
    FUN_03928d34(lVar5,0);
    lVar5 = FUN_0391c27c();
    if (lVar5 == 0) break;
    FUN_03928d34(lVar5,0);
    fVar12 = (float)FUN_0391a0e8(-*(float *)(unaff_x20 + 0x28),0);
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(puVar2);
      DAT_03fed256 = '\x01';
    }
    if (*unaff_x21 == 0) break;
    puVar7 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
    uVar15 = *puVar7;
    uVar16 = puVar7[1];
    uVar17 = puVar7[2];
    uVar14 = puVar7[3];
    uVar6 = FUN_0391fab4(*unaff_x21,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar1);
    }
    param_4 = param_4 + fVar12;
    lVar5 = FUN_01f25ab0(fVar10 + fVar11,uVar13,param_4,uVar15,uVar16,uVar17,uVar14,uVar8,uVar6,
                         *(undefined8 *)puVar3);
    if (lVar5 == 0) break;
                    /* catch() { ... } // from try @ 01c01868 with catch @ 01c01828 */
    lVar5 = FUN_01ed712c(lVar5,*(undefined8 *)puVar4);
    if ((*(long *)(unaff_x20 + 0x40) == 0) || (lVar5 == 0)) break;
    FUN_038ea5f0(*(float *)(*(long *)(unaff_x20 + 0x40) + 0x20) * fStack0000000000000008,lVar5,0);
    fVar10 = (float)iVar9;
    iVar9 = iVar9 + 1;
                    /* try { // try from 01c0185c to 01d01867 has its CatchHandler @ 01c018f4 */
    if (*(float *)(unaff_x20 + 0x2c) <= fVar10) {
      uVar14 = *(undefined4 *)(unaff_x20 + 0x30);
                    /* try { // try from 01c01868 to 01d0190f has its CatchHandler @ 01c01828 */
      uVar8 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                                );
      FUN_03924d70(uVar14,uVar8,0);
      *(undefined8 *)(unaff_x19 + 0x18) = uVar8;
      thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x18),uVar8);
      *(undefined4 *)(unaff_x19 + 0x10) = 2;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


