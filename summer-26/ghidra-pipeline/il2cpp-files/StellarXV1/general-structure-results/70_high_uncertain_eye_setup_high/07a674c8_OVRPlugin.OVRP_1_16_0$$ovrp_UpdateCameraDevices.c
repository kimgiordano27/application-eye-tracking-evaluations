/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_UpdateCameraDevices
ENTRY_POINT: 07a674c8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_UpdateCameraDevices
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  int unaff_w20;
  int iVar8;
  int iVar9;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  ulong uVar10;
  int unaff_w23;
  float fVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  while( true ) {
    param_1 = FUN_074d875c(param_1,param_2,param_3);
    unaff_w23 = unaff_w23 + 1;
    if (unaff_w20 <= unaff_w23) break;
    param_2 = *unaff_x22;
    param_3 = 0;
  }
  uVar5 = FUN_074d875c(param_1,*(undefined8 *)PTR_DAT_0928fcb8,0);
  puVar4 = PTR_DAT_092f0dc8;
  puVar3 = PTR_DAT_0928fcb8;
  puVar2 = PTR_DAT_09287ad0;
  puVar1 = PTR_DAT_092860a8;
  if (*(char *)(unaff_x19 + 0x48) == '\0') {
LAB_07a67600:
    FUN_07a64d34();
    uVar10 = FUN_074e4b3c(uVar5,*unaff_x21,0);
    if ((uVar10 & 1) != 0) {
      FUN_07a64d4c(uVar5);
    }
    return;
  }
  lVar7 = *(long *)(unaff_x19 + 0x30);
  if (lVar7 != 0) {
    uVar10 = 0;
    while (*(long *)(lVar7 + 0x18) != 0) {
      unaff_x21 = (undefined8 *)PTR_DAT_09285978;
      if ((long)*(int *)(*(long *)(lVar7 + 0x18) + 0x18) <= (long)uVar10) goto LAB_07a67600;
      in_stack_00000008 = *(undefined8 *)puVar4;
      in_stack_00000018 = (undefined4)uVar10;
      in_stack_00000010 = 0xffffffffffffffff;
      uVar6 = FUN_076b01b4(&stack0x00000008,0);
      uVar5 = FUN_074d875c(uVar5,uVar6,0);
      uVar5 = FUN_074d875c(uVar5,*(undefined8 *)puVar1,0);
      if ((*(long *)(unaff_x19 + 0x30) == 0) ||
         (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x18), lVar7 == 0)) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      fVar11 = *(float *)(lVar7 + uVar10 * 4 + 0x20) * 50.0;
      if ((fVar11 != INFINITY) && (iVar8 = (int)fVar11, 0 < iVar8)) {
        iVar9 = 0;
        do {
          uVar5 = FUN_074d875c(uVar5,*(undefined8 *)puVar2,0);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar8);
      }
      uVar5 = FUN_074d875c(uVar5,*(undefined8 *)puVar3,0);
      lVar7 = *(long *)(unaff_x19 + 0x30);
      uVar10 = uVar10 + 1;
      if (lVar7 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


