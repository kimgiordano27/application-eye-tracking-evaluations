/*
FUNCTION_NAME: OVRPlugin$$StopEyeTracking
ENTRY_POINT: 06950584
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_7;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


undefined4 OVRPlugin__StopEyeTracking(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000020;
  long lStack0000000000000030;
  
  puVar5 = *(undefined8 **)(unaff_x20 + 0xeb0);
  uStack0000000000000008 = 0;
  uStack0000000000000020 = param_2;
  lStack0000000000000030 = param_1;
  do {
    do {
      do {
        uVar2 = FUN_061c1964(&stack0x00000020,*puVar5);
        lVar1 = lStack0000000000000030;
        if ((uVar2 & 1) == 0) {
          uVar7 = 0x3f800000;
          goto FUN_0695064c;
        }
        if (lStack0000000000000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        plVar3 = *(long **)(lStack0000000000000030 + 0x80);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar2 = (**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
      } while ((uVar2 & 1) == 0);
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar4 = *(long *)(lVar4 + 0x48);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    } while (*(char *)(lVar4 + 0xe1) != '\0');
    plVar3 = *(long **)(lVar1 + 0x80);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    fVar6 = (float)(**(code **)(*plVar3 + 0x4b8))(plVar3,*(undefined8 *)(*plVar3 + 0x4c0));
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (0.0 <= *(float *)(*(long *)(unaff_x19 + 0x10) + 0x78)) {
      fVar6 = -fVar6;
    }
  } while (fVar6 <= *(float *)(unaff_x19 + 0x28));
  *(undefined1 *)(unaff_x19 + 0x21) = 1;
  if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_07cb2910(*(long *)(unaff_x19 + 0x30),0);
  uVar7 = DAT_015c5994;
FUN_0695064c:
  FUN_061c1960(&stack0x00000020,*(undefined8 *)PTR_DAT_084b5ea8);
  return uVar7;
}


