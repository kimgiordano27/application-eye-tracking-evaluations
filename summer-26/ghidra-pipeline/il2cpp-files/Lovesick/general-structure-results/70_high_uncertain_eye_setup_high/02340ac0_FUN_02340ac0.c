/*
FUNCTION_NAME: FUN_02340ac0
ENTRY_POINT: 02340ac0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02340ac0(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = 
  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__;
  if ((DAT_03781cfa & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_59__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(UnityEngine_InputSystem_LightSensor_var);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                      );
    DAT_03781cfa = 1;
  }
  lVar5 = FUN_00da4fb8(*(undefined8 *)puVar4,8);
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 != 0) {
      *(undefined8 *)(lVar5 + 0x20) = 0xbf000000bf000000;
      *(undefined4 *)(lVar5 + 0x28) = 0x3f000000;
      uVar6 = DAT_02940f68;
      if (uVar1 != 1) {
        *(undefined4 *)(lVar5 + 0x34) = 0x3f000000;
        *(undefined8 *)(lVar5 + 0x2c) = uVar6;
        if (2 < uVar1) {
          *(undefined8 *)(lVar5 + 0x38) = uVar6;
          *(undefined4 *)(lVar5 + 0x40) = 0xbf000000;
          if (uVar1 != 3) {
            *(undefined8 *)(lVar5 + 0x44) = 0xbf000000bf000000;
            *(undefined4 *)(lVar5 + 0x4c) = 0xbf000000;
            uVar6 = DAT_02940f60;
            if (4 < uVar1) {
              *(undefined4 *)(lVar5 + 0x58) = 0x3f000000;
              *(undefined8 *)(lVar5 + 0x50) = uVar6;
              if (uVar1 != 5) {
                *(undefined8 *)(lVar5 + 0x5c) = 0x3f0000003f000000;
                *(undefined4 *)(lVar5 + 100) = 0x3f000000;
                if (6 < uVar1) {
                  *(undefined8 *)(lVar5 + 0x68) = 0x3f0000003f000000;
                  *(undefined4 *)(lVar5 + 0x70) = 0xbf000000;
                  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__796_59__;
                  if (uVar1 != 7) {
                    *(undefined8 *)(lVar5 + 0x74) = uVar6;
                    *(undefined4 *)(lVar5 + 0x7c) = 0xbf000000;
                    puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
                    **(long **)(*(long *)puVar4 + 0xb8) = lVar5;
                    puVar2 = UnityEngine_InputSystem_LightSensor_var;
                    uVar6 = FUN_00da4fb8(*(undefined8 *)puVar3,0x18);
                    FUN_016a34e8(uVar6,*(undefined8 *)puVar2,0);
                    *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = uVar6;
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
    FUN_00da5194();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


