/*
FUNCTION_NAME: FUN_06236abc
ENTRY_POINT: 06236abc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_06236abc(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  float local_e0;
  float fStack_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  
  local_e8 = param_2;
  if ((DAT_06b8b722 & 1) == 0) {
    FUN_02d6084c(Method_System_UInt32_CompareTo__);
    FUN_02d6084c(Method_Firebase_Firestore_Converters_UInt32Converter_DeserializeInteger__);
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Samples_DeviceSimulator_XRDeviceSimulatorUI_OnPrimaryButtonAction__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Samples_DeviceSimulator_XRDeviceSimulatorUI_OnRestingHandAxis2DAction__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Samples_DeviceSimulator_XRDeviceSimulatorUI_OnSecondaryButtonAction__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Samples_DeviceSimulator_XRDeviceSimulatorUI_OnStopManipulationAction__
                );
    DAT_06b8b722 = 1;
  }
  puVar3 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Samples_DeviceSimulator_XRDeviceSimulatorUI_OnSecondaryButtonAction__
  ;
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Samples_DeviceSimulator_XRDeviceSimulatorUI_OnRestingHandAxis2DAction__
  ;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  if (*(long *)(param_3 + 0x28) == 0) {
    return;
  }
  uVar9 = FUN_0360e64c(param_1,*(long *)(param_3 + 0x28),
                       *(undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_Samples_DeviceSimulator_XRDeviceSimulatorUI_OnPrimaryButtonAction__
                      );
  lVar10 = FUN_0360e64c(param_1,*(undefined8 *)(param_3 + 0x2a),*(undefined8 *)puVar3);
  lVar11 = FUN_0360e64c(param_1,*(undefined8 *)(param_3 + 0x2c),*(undefined8 *)puVar3);
  lVar12 = FUN_0360e64c(param_1,*(undefined8 *)(param_3 + 0x2e),*(undefined8 *)puVar2);
  if (lVar12 != 0) {
    if (*(int *)(lVar12 + 0x18) == 0) {
      return;
    }
    if (lVar10 != 0) {
      uVar14 = *(ulong *)(lVar10 + 0x18);
      FUN_0632b300(param_1,uVar14 & 0xffffffff,*(undefined4 *)(lVar12 + 0x18),&local_f8,&local_108,0
                  );
      uVar5 = uStack_100;
      uVar4 = local_108;
      if (*(int *)(*(long *)Method_System_UInt32_CompareTo__ + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_062347f4(lVar10,lVar12,uVar4,uVar5);
      fVar1 = param_3[0x43];
      local_10c = (uint)(param_3[0x42] != 0.0) << 0x18;
      if (0 < (int)uVar14) {
        uVar13 = 0;
        pfVar15 = (float *)(lVar10 + 0x24);
        do {
          if (*(uint *)(lVar10 + 0x18) <= uVar13) {
LAB_06236de8:
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          fVar18 = param_3[0x32];
          fVar16 = param_3[0x33];
          fVar26 = pfVar15[-1];
          fVar19 = *pfVar15;
          fVar20 = param_3[0x30];
          fVar21 = param_3[0x31];
          fVar17 = param_3[2];
          fVar23 = param_3[3];
          fVar24 = *param_3;
          fVar25 = param_3[1];
          uVar22 = **(undefined4 **)
                     (*(long *)
                       Method_UnityEngine_XR_Interaction_Toolkit_Samples_DeviceSimulator_XRDeviceSimulatorUI_OnStopManipulationAction__
                     + 0xb8);
          uVar8 = FUN_05bda2ec(param_3[0xc],param_3[0xd],param_3[0xe],param_3[0xf],0);
          if (lVar11 == 0) goto LAB_06236dec;
          if (*(uint *)(lVar11 + 0x18) <= uVar13) goto LAB_06236de8;
          local_d0 = *(undefined8 *)(lVar11 + 0x20 + uVar13 * 8);
          fStack_dc = (1.0 - (fVar19 - fVar21) / fVar16) * fVar23 + fVar25;
          local_e0 = ((fVar26 - fVar20) / fVar18) * fVar17 + fVar24;
          local_c8 = 0;
          local_c0 = local_10c;
          local_a8 = 0;
          uStack_b0 = 0;
          local_b8 = 0;
          local_d8 = uVar22;
          local_d4 = uVar8;
          iStack_c4 = ((uint)fVar1 & 0xff0000) << 8;
          iStack_bc = (int)fVar1 << 0x10;
          FUN_03db9be8(&local_f8,uVar13 & 0xffffffff,&local_e0,
                       *(undefined8 *)
                        Method_Firebase_Firestore_Converters_UInt32Converter_DeserializeInteger__);
          uVar13 = uVar13 + 1;
          pfVar15 = pfVar15 + 2;
        } while ((uVar14 & 0xffffffff) != uVar13);
      }
      uVar7 = uStack_f0;
      uVar6 = local_f8;
      uVar5 = uStack_100;
      uVar4 = local_108;
      fVar1 = param_3[0x44];
      lVar10 = FUN_0623e4e8(&local_e8,0);
      if (lVar10 != 0) {
        FUN_0632a348(lVar10,uVar6,uVar7,uVar4,uVar5,uVar9,fVar1 == 2.8026e-45,0);
        return;
      }
    }
  }
LAB_06236dec:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


