/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$.cctor
ENTRY_POINT: 07a67440
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  int iVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  float fVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  FUN_04077588();
  *(undefined1 *)(unaff_x20 + 0x5cd) = 1;
  puVar9 = (undefined8 *)PTR_DAT_09285978;
  if (*(char *)(unaff_x19 + 0x58) != '\0') {
    uVar8 = *(undefined8 *)PTR_DAT_09285978;
    if (*(char *)(unaff_x19 + 0x60) != '\0') {
      uVar8 = FUN_074d875c(uVar8,*(undefined8 *)PTR_DAT_092f0dd0,0);
      puVar1 = PTR_DAT_09287ad0;
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_07a675f4;
      fVar12 = *(float *)(*(long *)(unaff_x19 + 0x30) + 0x20) * 50.0;
      if ((fVar12 != INFINITY) && (iVar7 = (int)fVar12, 0 < iVar7)) {
        iVar11 = 0;
        do {
          uVar8 = FUN_074d875c(uVar8,*(undefined8 *)puVar1,0);
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar7);
      }
      uVar8 = FUN_074d875c(uVar8,*(undefined8 *)PTR_DAT_0928fcb8,0);
    }
    puVar4 = PTR_DAT_092f0dc8;
    puVar3 = PTR_DAT_0928fcb8;
    puVar2 = PTR_DAT_09287ad0;
    puVar1 = PTR_DAT_092860a8;
    if (*(char *)(unaff_x19 + 0x48) != '\0') {
      lVar6 = *(long *)(unaff_x19 + 0x30);
      if (lVar6 != 0) {
        uVar10 = 0;
        while (*(long *)(lVar6 + 0x18) != 0) {
          puVar9 = (undefined8 *)PTR_DAT_09285978;
          if ((long)*(int *)(*(long *)(lVar6 + 0x18) + 0x18) <= (long)uVar10) goto LAB_07a67600;
          in_stack_00000008 = *(undefined8 *)puVar4;
          in_stack_00000018 = (undefined4)uVar10;
          in_stack_00000010 = 0xffffffffffffffff;
          uVar5 = FUN_076b01b4(&stack0x00000008,0);
          uVar8 = FUN_074d875c(uVar8,uVar5,0);
          uVar8 = FUN_074d875c(uVar8,*(undefined8 *)puVar1,0);
          if ((*(long *)(unaff_x19 + 0x30) == 0) ||
             (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x18), lVar6 == 0)) break;
          if (*(uint *)(lVar6 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          fVar12 = *(float *)(lVar6 + uVar10 * 4 + 0x20) * 50.0;
          if ((fVar12 != INFINITY) && (iVar7 = (int)fVar12, 0 < iVar7)) {
            iVar11 = 0;
            do {
              uVar8 = FUN_074d875c(uVar8,*(undefined8 *)puVar2,0);
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar7);
          }
          uVar8 = FUN_074d875c(uVar8,*(undefined8 *)puVar3,0);
          lVar6 = *(long *)(unaff_x19 + 0x30);
          uVar10 = uVar10 + 1;
          if (lVar6 == 0) break;
        }
      }
LAB_07a675f4:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
LAB_07a67600:
    FUN_07a64d34();
    uVar10 = FUN_074e4b3c(uVar8,*puVar9,0);
    if ((uVar10 & 1) != 0) {
      FUN_07a64d4c(uVar8);
    }
  }
  return;
}


