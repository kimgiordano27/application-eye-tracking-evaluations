/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$get_SizeDeltaWithMargin
ENTRY_POINT: 0144d2a0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__get_SizeDeltaWithMargin
          (undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined4 param_4,
          undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  float unaff_w24;
  int iVar11;
  long unaff_x25;
  undefined4 uVar12;
  float fVar13;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float in_stack_00000000;
  undefined8 in_stack_00000058;
  
  do {
    uVar5 = FUN_015f5b28(param_1,param_7,param_8);
    (**(code **)(unaff_x25 + 0x18))
              (*(undefined8 *)(unaff_x25 + 0x40),uVar5,*(undefined8 *)(unaff_x25 + 0x28));
    do {
      if (0 < *(int *)(unaff_x19 + 0x9c)) {
        iVar11 = 0;
        do {
          lVar7 = *(long *)(unaff_x19 + 0x90);
          if (lVar7 == 0) goto LAB_0144d820;
          uVar1 = iVar11 + *(int *)(unaff_x19 + 0x30);
          if (*(uint *)(lVar7 + 0x18) <= uVar1) goto LAB_0144d81c;
          if (unaff_x20 == 0) goto LAB_0144d820;
          lVar7 = *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
          iVar6 = *(int *)(unaff_x19 + 0x2c);
          fVar13 = ((float)iVar11 / unaff_s14) * unaff_s11 + unaff_s13;
          uVar12 = FUN_02672074((unaff_s9 / in_stack_00000000) * unaff_s10 + unaff_s12);
          if (lVar7 == 0) goto LAB_0144d820;
          uVar1 = iVar6 + unaff_w21;
          if (*(uint *)(lVar7 + 0x18) <= uVar1) goto LAB_0144d81c;
          lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
          *(undefined4 *)(lVar7 + 0x20) = uVar12;
          *(float *)(lVar7 + 0x24) = fVar13;
          *(undefined4 *)(lVar7 + 0x28) = param_4;
          *(undefined4 *)(lVar7 + 0x2c) = param_5;
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(unaff_x19 + 0x9c));
      }
      iVar11 = *(int *)(unaff_x19 + 0x98);
      unaff_w21 = unaff_w21 + 1;
      if (iVar11 <= unaff_w21) {
        if (iVar11 < 1) goto LAB_0144d4a8;
        iVar9 = *(int *)(unaff_x19 + 0x3c);
        iVar6 = 0;
        goto LAB_0144d384;
      }
      unaff_s9 = (float)unaff_w21;
    } while ((iVar11 < 1) || (unaff_x25 = *(long *)(unaff_x19 + 0x88), unaff_x25 == 0));
    in_stack_00000058._4_4_ = (unaff_s9 / (float)iVar11) * unaff_w24;
    param_7 = FUN_017841b4((long)&stack0x00000058 + 4,*unaff_x22,0);
    param_1 = *unaff_x23;
    param_8 = 0;
  } while( true );
LAB_0144d384:
  do {
    if (0 < iVar9) {
      iVar11 = 1;
      iVar8 = -1;
      do {
        lVar7 = *(long *)(unaff_x19 + 0x90);
        if (lVar7 == 0) goto LAB_0144d820;
        uVar1 = *(uint *)(unaff_x19 + 0x30);
        if ((*(uint *)(lVar7 + 0x18) <= iVar8 + uVar1) || (*(uint *)(lVar7 + 0x18) <= uVar1))
        goto LAB_0144d81c;
        lVar10 = *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        if (lVar10 == 0) goto LAB_0144d820;
        uVar2 = *(int *)(unaff_x19 + 0x2c) + iVar6;
        if (*(uint *)(lVar10 + 0x18) <= uVar2) goto LAB_0144d81c;
        lVar7 = *(long *)(lVar7 + (long)(int)(iVar8 + uVar1) * 8 + 0x20);
        if (lVar7 == 0) goto LAB_0144d820;
        if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_0144d81c;
        lVar10 = lVar10 + (long)(int)uVar2 * 0x10;
        uVar5 = *(undefined8 *)(lVar10 + 0x20);
        lVar7 = lVar7 + (long)(int)uVar2 * 0x10;
        *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar10 + 0x28);
        *(undefined8 *)(lVar7 + 0x20) = uVar5;
        lVar7 = *(long *)(unaff_x19 + 0x90);
        if (lVar7 == 0) goto LAB_0144d820;
        iVar9 = *(int *)(unaff_x19 + 0x9c) + *(int *)(unaff_x19 + 0x30);
        uVar1 = (iVar11 + iVar9) - 1;
        if ((*(uint *)(lVar7 + 0x18) <= uVar1) ||
           (uVar2 = iVar9 - 1, *(uint *)(lVar7 + 0x18) <= uVar2)) goto LAB_0144d81c;
        lVar10 = *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
        if (lVar10 == 0) goto LAB_0144d820;
        uVar2 = *(int *)(unaff_x19 + 0x2c) + iVar6;
        if (*(uint *)(lVar10 + 0x18) <= uVar2) goto LAB_0144d81c;
        lVar7 = *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_0144d820;
        if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_0144d81c;
        lVar10 = lVar10 + (long)(int)uVar2 * 0x10;
        uVar5 = *(undefined8 *)(lVar10 + 0x20);
        lVar7 = lVar7 + (long)(int)uVar2 * 0x10;
        iVar11 = iVar11 + 1;
        iVar8 = iVar8 + -1;
        *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar10 + 0x28);
        *(undefined8 *)(lVar7 + 0x20) = uVar5;
        iVar9 = *(int *)(unaff_x19 + 0x3c);
      } while (iVar11 <= iVar9);
      iVar11 = *(int *)(unaff_x19 + 0x98);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < iVar11);
LAB_0144d4a8:
  iVar11 = *(int *)(unaff_x19 + 0x9c);
  if (0 < iVar11) {
    iVar9 = *(int *)(unaff_x19 + 0x40);
    iVar6 = 0;
    do {
      if (0 < iVar9) {
        iVar11 = 1;
        iVar8 = -1;
        do {
          lVar7 = *(long *)(unaff_x19 + 0x90);
          if (lVar7 == 0) goto LAB_0144d820;
          uVar1 = *(int *)(unaff_x19 + 0x30) + iVar6;
          if (*(uint *)(lVar7 + 0x18) <= uVar1) goto LAB_0144d81c;
          lVar7 = *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
          if (lVar7 == 0) goto LAB_0144d820;
          uVar1 = *(uint *)(unaff_x19 + 0x2c);
          if ((*(uint *)(lVar7 + 0x18) <= uVar1) || (*(uint *)(lVar7 + 0x18) <= iVar8 + uVar1))
          goto LAB_0144d81c;
          puVar3 = (undefined8 *)(lVar7 + 0x20 + (long)(int)uVar1 * 0x10);
          uVar5 = *puVar3;
          puVar4 = (undefined8 *)(lVar7 + 0x20 + (long)(int)(iVar8 + uVar1) * 0x10);
          puVar4[1] = puVar3[1];
          *puVar4 = uVar5;
          lVar7 = *(long *)(unaff_x19 + 0x90);
          if (lVar7 == 0) goto LAB_0144d820;
          uVar1 = *(int *)(unaff_x19 + 0x30) + iVar6;
          if (*(uint *)(lVar7 + 0x18) <= uVar1) goto LAB_0144d81c;
          lVar7 = *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
          if (lVar7 == 0) goto LAB_0144d820;
          iVar9 = *(int *)(unaff_x19 + 0x2c) + *(int *)(unaff_x19 + 0x98);
          uVar1 = iVar9 - 1;
          if ((*(uint *)(lVar7 + 0x18) <= uVar1) ||
             (uVar2 = (iVar11 + iVar9) - 1, *(uint *)(lVar7 + 0x18) <= uVar2)) goto LAB_0144d81c;
          puVar3 = (undefined8 *)(lVar7 + 0x20 + (long)(int)uVar1 * 0x10);
          uVar5 = *puVar3;
          iVar11 = iVar11 + 1;
          iVar8 = iVar8 + -1;
          puVar4 = (undefined8 *)(lVar7 + 0x20 + (long)(int)uVar2 * 0x10);
          puVar4[1] = puVar3[1];
          *puVar4 = uVar5;
          iVar9 = *(int *)(unaff_x19 + 0x40);
        } while (iVar11 <= iVar9);
        iVar11 = *(int *)(unaff_x19 + 0x9c);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar11);
  }
  *(undefined4 *)(unaff_x19 + 0xa0) = 1;
  if (*(int *)(unaff_x19 + 0x40) < 1) {
    uVar5 = 0;
  }
  else {
    *(undefined4 *)(unaff_x19 + 0xa4) = 1;
    if (0 < *(int *)(unaff_x19 + 0x3c)) {
      lVar7 = *(long *)(unaff_x19 + 0x90);
      if (lVar7 == 0) {
LAB_0144d820:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar1 = *(uint *)(unaff_x19 + 0x30);
      if ((uVar1 - 1 < *(uint *)(lVar7 + 0x18)) && (uVar1 < *(uint *)(lVar7 + 0x18))) {
        lVar10 = *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        if (lVar10 == 0) goto LAB_0144d820;
        uVar2 = *(uint *)(unaff_x19 + 0x2c);
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          lVar7 = *(long *)(lVar7 + (long)(int)(uVar1 - 1) * 8 + 0x20);
          if (lVar7 == 0) goto LAB_0144d820;
          uVar1 = uVar2 - *(int *)(unaff_x19 + 0xa0);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            lVar10 = lVar10 + (long)(int)uVar2 * 0x10;
            uVar5 = *(undefined8 *)(lVar10 + 0x20);
            lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
            *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar10 + 0x28);
            *(undefined8 *)(lVar7 + 0x20) = uVar5;
            lVar7 = *(long *)(unaff_x19 + 0x90);
            if (lVar7 == 0) goto LAB_0144d820;
            uVar2 = (*(int *)(unaff_x19 + 0x9c) + *(int *)(unaff_x19 + 0x30)) - 1;
            uVar1 = uVar2 + *(int *)(unaff_x19 + 0xa4);
            if ((uVar1 < *(uint *)(lVar7 + 0x18)) && (uVar2 < *(uint *)(lVar7 + 0x18))) {
              lVar10 = *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
              if (lVar10 == 0) goto LAB_0144d820;
              uVar2 = *(uint *)(unaff_x19 + 0x2c);
              if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                lVar7 = *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                if (lVar7 == 0) goto LAB_0144d820;
                uVar1 = uVar2 - *(int *)(unaff_x19 + 0xa0);
                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                  lVar10 = lVar10 + (long)(int)uVar2 * 0x10;
                  uVar5 = *(undefined8 *)(lVar10 + 0x20);
                  lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
                  *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar10 + 0x28);
                  *(undefined8 *)(lVar7 + 0x20) = uVar5;
                  lVar7 = *(long *)(unaff_x19 + 0x90);
                  if (lVar7 == 0) goto LAB_0144d820;
                  uVar2 = (*(int *)(unaff_x19 + 0x9c) + *(int *)(unaff_x19 + 0x30)) - 1;
                  uVar1 = uVar2 + *(int *)(unaff_x19 + 0xa4);
                  if ((uVar1 < *(uint *)(lVar7 + 0x18)) && (uVar2 < *(uint *)(lVar7 + 0x18))) {
                    lVar10 = *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
                    if (lVar10 == 0) goto LAB_0144d820;
                    uVar2 = (*(int *)(unaff_x19 + 0x98) + *(int *)(unaff_x19 + 0x2c)) - 1;
                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                      lVar7 = *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                      if (lVar7 == 0) goto LAB_0144d820;
                      uVar1 = uVar2 + *(int *)(unaff_x19 + 0xa0);
                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                        lVar10 = lVar10 + (long)(int)uVar2 * 0x10;
                        uVar5 = *(undefined8 *)(lVar10 + 0x20);
                        lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
                        *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar10 + 0x28);
                        *(undefined8 *)(lVar7 + 0x20) = uVar5;
                        lVar7 = *(long *)(unaff_x19 + 0x90);
                        if (lVar7 == 0) goto LAB_0144d820;
                        uVar1 = *(uint *)(unaff_x19 + 0x30);
                        uVar2 = uVar1 - *(int *)(unaff_x19 + 0xa4);
                        if ((uVar2 < *(uint *)(lVar7 + 0x18)) && (uVar1 < *(uint *)(lVar7 + 0x18)))
                        {
                          lVar10 = *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                          if (lVar10 == 0) goto LAB_0144d820;
                          uVar1 = (*(int *)(unaff_x19 + 0x98) + *(int *)(unaff_x19 + 0x2c)) - 1;
                          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                            lVar7 = *(long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
                            if (lVar7 == 0) goto LAB_0144d820;
                            uVar2 = uVar1 + *(int *)(unaff_x19 + 0xa0);
                            if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                              lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
                              uVar5 = *(undefined8 *)(lVar10 + 0x20);
                              lVar7 = lVar7 + (long)(int)uVar2 * 0x10;
                              *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar10 + 0x28);
                              *(undefined8 *)(lVar7 + 0x20) = uVar5;
                              *(undefined8 *)(unaff_x19 + 0x18) = 0;
                              *(undefined4 *)(unaff_x19 + 0x10) = 1;
                              return 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_0144d81c:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *(undefined4 *)(unaff_x19 + 0x10) = 2;
    uVar5 = 1;
  }
  return uVar5;
}


