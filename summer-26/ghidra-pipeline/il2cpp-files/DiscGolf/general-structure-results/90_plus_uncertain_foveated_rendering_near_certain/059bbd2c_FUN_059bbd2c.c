/*
FUNCTION_NAME: FUN_059bbd2c
ENTRY_POINT: 059bbd2c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 139
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_2;strong_foveation_hits_2;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 FUN_059bbd2c(long param_1,long *param_2,undefined1 (*param_3) [12])

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  
  puVar13 = OVRUnityHumanoidSkeletonRetargeter_JointAdjustment_TypeInfo;
  puVar3 = OVRTelemetryConstants_OVRManager_TypeInfo;
                    /* try { // try from 059bbd34 to 05abbd43 has its CatchHandler @ 059bbd48 */
                    /* catch() { ... } // from try @ 059bbd20 with catch @ 059bbd44 */
                    /* catch() { ... } // from try @ 059bbd34 with catch @ 059bbd48 */
                    /* try { // try from 059bbd4c to 05abbd4f has its CatchHandler @ 059bbd58 */
                    /* try { // try from 059bbd50 to 05abbd5b has its CatchHandler @ 059bbb3c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 059bbd4c with catch @ 059bbd58
                        */
  if ((DAT_06dc153a & 1) == 0) {
    FUN_02d965b8(OVRVirtualKeyboard_CommitTextUnityEvent_TypeInfo);
    FUN_02d965b8(OVRTelemetryConstants_OVRManager_TypeInfo);
    FUN_02d965b8(OVRUnityHumanoidSkeletonRetargeter_JointAdjustment_TypeInfo);
    FUN_02d965b8(Unity_XR_Oculus_OculusSettings_FoveationMethod_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0d5a8);
    DAT_06dc153a = 1;
  }
  lVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar13);
  FUN_0400f984(lVar6,*(undefined8 *)puVar3);
  *param_2 = 0;
  LeanTween__value(param_2,0);
  puVar5 = Unity_XR_Oculus_OculusSettings_FoveationMethod_TypeInfo;
  puVar4 = OVRVirtualKeyboard_CommitTextUnityEvent_TypeInfo;
  puVar3 = PTR_DAT_06a0d5a8;
  if (param_1 != 0) {
    while( true ) {
      auVar15 = FUN_059b8f14(param_1,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (auVar15._0_4_ != 2) {
        lVar6 = *(long *)puVar3;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02df485c(lVar6);
          lVar6 = *(long *)puVar3;
        }
        uVar14 = **(undefined8 **)(lVar6 + 0xb8);
        *(undefined4 *)(*param_3 + 8) = *(undefined4 *)(*(undefined8 **)(lVar6 + 0xb8) + 1);
        *(undefined8 *)*param_3 = uVar14;
        return 0;
      }
      auVar17 = FUN_059b8f14(param_1,0);
      lVar7 = *(long *)puVar3;
      *param_3 = auVar17;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (auVar17._0_4_ == 4) {
        auVar16 = FUN_059b8f14(param_1,0);
        uVar14 = auVar16._0_8_;
        *(undefined8 *)*param_3 = uVar14;
        lVar7 = *(long *)puVar3;
        *(int *)(*param_3 + 8) = auVar16._8_4_;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          uVar14 = *(undefined8 *)*param_3;
          uVar10 = (ulong)*(uint *)(*param_3 + 8);
        }
        else {
          uVar10 = auVar16._8_8_ & 0xffffffff;
        }
        if (auVar16._0_4_ != 2) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if ((int)uVar14 != 3) {
            return 0;
          }
          uVar14 = *(undefined8 *)*param_3;
          uVar10 = (ulong)*(uint *)(*param_3 + 8);
        }
        puVar13 = (undefined *)((ulong)puVar13 & 0xffffffff00000000 | uVar10);
        uVar14 = FUN_059b9228(param_1,uVar14,puVar13);
        auVar17 = FUN_059b8f14(param_1,0);
        *param_3 = auVar17;
      }
      else {
        uVar14 = 0;
      }
      lVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
      FUN_0552aca4(lVar7,0);
      uVar8 = FUN_059b9228(param_1,auVar15._0_8_,auVar15._8_8_ & 0xffffffff);
      if (lVar7 == 0) break;
      *(undefined8 *)(lVar7 + 0x18) = uVar8;
      LeanTween__value();
      *(undefined8 *)(lVar7 + 0x10) = uVar14;
      LeanTween__value((undefined8 *)(lVar7 + 0x10),uVar14);
      if (lVar6 == 0) break;
      lVar11 = *(long *)(lVar6 + 0x10);
      lVar12 = *(long *)puVar4;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar11 == 0) break;
      uVar2 = *(uint *)(lVar6 + 0x18);
      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
        plVar9 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
        *plVar9 = lVar7;
        LeanTween__value(plVar9,lVar7);
      }
      else {
        FUN_040101ec(lVar6,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
        ;
      }
      iVar1 = *(int *)*param_3;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (iVar1 != 5) {
        *param_2 = lVar6;
        LeanTween__value(param_2,lVar6);
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


