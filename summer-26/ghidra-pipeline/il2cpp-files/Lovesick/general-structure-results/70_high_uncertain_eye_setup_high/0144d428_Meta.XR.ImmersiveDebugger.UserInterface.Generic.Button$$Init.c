/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Button$$Init
ENTRY_POINT: 0144d428
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Generic_Button__Init(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 in_CY;
  undefined8 uVar5;
  int in_w8;
  int iVar6;
  int in_w9;
  int iVar7;
  int in_w10;
  int iVar8;
  int iVar9;
  long in_x11;
  long lVar10;
  uint in_w12;
  long lVar11;
  uint in_w13;
  int in_w14;
  long unaff_x19;
  
  while ((!(bool)in_CY && (in_w14 - 1U < in_w12))) {
    lVar11 = *(long *)(in_x11 + (long)(int)(in_w14 - 1U) * 8 + 0x20);
    if (lVar11 == 0) goto LAB_0144d820;
    uVar1 = *(int *)(unaff_x19 + 0x2c) + in_w8;
    if (*(uint *)(lVar11 + 0x18) <= uVar1) break;
    lVar10 = *(long *)(in_x11 + (long)(int)in_w13 * 8 + 0x20);
    if (lVar10 == 0) goto LAB_0144d820;
    if (*(uint *)(lVar10 + 0x18) <= uVar1) break;
    lVar11 = lVar11 + (long)(int)uVar1 * 0x10;
    uVar5 = *(undefined8 *)(lVar11 + 0x20);
    lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
    in_w9 = in_w9 + 1;
    in_w10 = in_w10 + -1;
    *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(lVar11 + 0x28);
    *(undefined8 *)(lVar10 + 0x20) = uVar5;
    if (*(int *)(unaff_x19 + 0x3c) < in_w9) {
      do {
        in_w8 = in_w8 + 1;
        if (*(int *)(unaff_x19 + 0x98) <= in_w8) {
          iVar7 = *(int *)(unaff_x19 + 0x9c);
          if (iVar7 < 1) goto LAB_0144d5a4;
          iVar9 = *(int *)(unaff_x19 + 0x40);
          iVar6 = 0;
          goto LAB_0144d4bc;
        }
      } while (*(int *)(unaff_x19 + 0x3c) < 1);
      in_w9 = 1;
      in_w10 = -1;
    }
    lVar11 = *(long *)(unaff_x19 + 0x90);
    if (lVar11 == 0) goto LAB_0144d820;
    uVar1 = *(uint *)(unaff_x19 + 0x30);
    if ((*(uint *)(lVar11 + 0x18) <= in_w10 + uVar1) || (*(uint *)(lVar11 + 0x18) <= uVar1)) break;
    lVar10 = *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
    if (lVar10 == 0) goto LAB_0144d820;
    uVar2 = *(int *)(unaff_x19 + 0x2c) + in_w8;
    if (*(uint *)(lVar10 + 0x18) <= uVar2) break;
    lVar11 = *(long *)(lVar11 + (long)(int)(in_w10 + uVar1) * 8 + 0x20);
    if (lVar11 == 0) goto LAB_0144d820;
    if (*(uint *)(lVar11 + 0x18) <= uVar2) break;
    lVar10 = lVar10 + (long)(int)uVar2 * 0x10;
    uVar5 = *(undefined8 *)(lVar10 + 0x20);
    lVar11 = lVar11 + (long)(int)uVar2 * 0x10;
    *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(lVar10 + 0x28);
    *(undefined8 *)(lVar11 + 0x20) = uVar5;
    in_x11 = *(long *)(unaff_x19 + 0x90);
    if (in_x11 == 0) goto LAB_0144d820;
    in_w12 = *(uint *)(in_x11 + 0x18);
    in_w14 = *(int *)(unaff_x19 + 0x9c) + *(int *)(unaff_x19 + 0x30);
    in_w13 = (in_w9 + in_w14) - 1;
    in_CY = in_w12 <= in_w13;
  }
  goto LAB_0144d81c;
LAB_0144d4bc:
  do {
    if (0 < iVar9) {
      iVar7 = 1;
      iVar8 = -1;
      do {
        lVar11 = *(long *)(unaff_x19 + 0x90);
        if (lVar11 == 0) goto LAB_0144d820;
        uVar1 = *(int *)(unaff_x19 + 0x30) + iVar6;
        if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_0144d81c;
        lVar11 = *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        if (lVar11 == 0) goto LAB_0144d820;
        uVar1 = *(uint *)(unaff_x19 + 0x2c);
        if ((*(uint *)(lVar11 + 0x18) <= uVar1) || (*(uint *)(lVar11 + 0x18) <= iVar8 + uVar1))
        goto LAB_0144d81c;
        puVar3 = (undefined8 *)(lVar11 + 0x20 + (long)(int)uVar1 * 0x10);
        uVar5 = *puVar3;
        puVar4 = (undefined8 *)(lVar11 + 0x20 + (long)(int)(iVar8 + uVar1) * 0x10);
        puVar4[1] = puVar3[1];
        *puVar4 = uVar5;
        lVar11 = *(long *)(unaff_x19 + 0x90);
        if (lVar11 == 0) goto LAB_0144d820;
        uVar1 = *(int *)(unaff_x19 + 0x30) + iVar6;
        if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_0144d81c;
        lVar11 = *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        if (lVar11 == 0) goto LAB_0144d820;
        iVar9 = *(int *)(unaff_x19 + 0x2c) + *(int *)(unaff_x19 + 0x98);
        uVar1 = iVar9 - 1;
        if ((*(uint *)(lVar11 + 0x18) <= uVar1) ||
           (uVar2 = (iVar7 + iVar9) - 1, *(uint *)(lVar11 + 0x18) <= uVar2)) goto LAB_0144d81c;
        puVar3 = (undefined8 *)(lVar11 + 0x20 + (long)(int)uVar1 * 0x10);
        uVar5 = *puVar3;
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + -1;
        puVar4 = (undefined8 *)(lVar11 + 0x20 + (long)(int)uVar2 * 0x10);
        puVar4[1] = puVar3[1];
        *puVar4 = uVar5;
        iVar9 = *(int *)(unaff_x19 + 0x40);
      } while (iVar7 <= iVar9);
      iVar7 = *(int *)(unaff_x19 + 0x9c);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < iVar7);
LAB_0144d5a4:
  *(undefined4 *)(unaff_x19 + 0xa0) = 1;
  if (*(int *)(unaff_x19 + 0x40) < 1) {
    uVar5 = 0;
  }
  else {
    *(undefined4 *)(unaff_x19 + 0xa4) = 1;
    if (0 < *(int *)(unaff_x19 + 0x3c)) {
      lVar11 = *(long *)(unaff_x19 + 0x90);
      if (lVar11 == 0) {
LAB_0144d820:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar1 = *(uint *)(unaff_x19 + 0x30);
      if ((uVar1 - 1 < *(uint *)(lVar11 + 0x18)) && (uVar1 < *(uint *)(lVar11 + 0x18))) {
        lVar10 = *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        if (lVar10 == 0) goto LAB_0144d820;
        uVar2 = *(uint *)(unaff_x19 + 0x2c);
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          lVar11 = *(long *)(lVar11 + (long)(int)(uVar1 - 1) * 8 + 0x20);
          if (lVar11 == 0) goto LAB_0144d820;
          uVar1 = uVar2 - *(int *)(unaff_x19 + 0xa0);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            lVar10 = lVar10 + (long)(int)uVar2 * 0x10;
            uVar5 = *(undefined8 *)(lVar10 + 0x20);
            lVar11 = lVar11 + (long)(int)uVar1 * 0x10;
            *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(lVar10 + 0x28);
            *(undefined8 *)(lVar11 + 0x20) = uVar5;
            lVar11 = *(long *)(unaff_x19 + 0x90);
            if (lVar11 == 0) goto LAB_0144d820;
            uVar2 = (*(int *)(unaff_x19 + 0x9c) + *(int *)(unaff_x19 + 0x30)) - 1;
            uVar1 = uVar2 + *(int *)(unaff_x19 + 0xa4);
            if ((uVar1 < *(uint *)(lVar11 + 0x18)) && (uVar2 < *(uint *)(lVar11 + 0x18))) {
              lVar10 = *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
              if (lVar10 == 0) goto LAB_0144d820;
              uVar2 = *(uint *)(unaff_x19 + 0x2c);
              if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                lVar11 = *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                if (lVar11 == 0) goto LAB_0144d820;
                uVar1 = uVar2 - *(int *)(unaff_x19 + 0xa0);
                if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                  lVar10 = lVar10 + (long)(int)uVar2 * 0x10;
                  uVar5 = *(undefined8 *)(lVar10 + 0x20);
                  lVar11 = lVar11 + (long)(int)uVar1 * 0x10;
                  *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(lVar10 + 0x28);
                  *(undefined8 *)(lVar11 + 0x20) = uVar5;
                  lVar11 = *(long *)(unaff_x19 + 0x90);
                  if (lVar11 == 0) goto LAB_0144d820;
                  uVar2 = (*(int *)(unaff_x19 + 0x9c) + *(int *)(unaff_x19 + 0x30)) - 1;
                  uVar1 = uVar2 + *(int *)(unaff_x19 + 0xa4);
                  if ((uVar1 < *(uint *)(lVar11 + 0x18)) && (uVar2 < *(uint *)(lVar11 + 0x18))) {
                    lVar10 = *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
                    if (lVar10 == 0) goto LAB_0144d820;
                    uVar2 = (*(int *)(unaff_x19 + 0x98) + *(int *)(unaff_x19 + 0x2c)) - 1;
                    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                      lVar11 = *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                      if (lVar11 == 0) goto LAB_0144d820;
                      uVar1 = uVar2 + *(int *)(unaff_x19 + 0xa0);
                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                        lVar10 = lVar10 + (long)(int)uVar2 * 0x10;
                        uVar5 = *(undefined8 *)(lVar10 + 0x20);
                        lVar11 = lVar11 + (long)(int)uVar1 * 0x10;
                        *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(lVar10 + 0x28);
                        *(undefined8 *)(lVar11 + 0x20) = uVar5;
                        lVar11 = *(long *)(unaff_x19 + 0x90);
                        if (lVar11 == 0) goto LAB_0144d820;
                        uVar1 = *(uint *)(unaff_x19 + 0x30);
                        uVar2 = uVar1 - *(int *)(unaff_x19 + 0xa4);
                        if ((uVar2 < *(uint *)(lVar11 + 0x18)) && (uVar1 < *(uint *)(lVar11 + 0x18))
                           ) {
                          lVar10 = *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                          if (lVar10 == 0) goto LAB_0144d820;
                          uVar1 = (*(int *)(unaff_x19 + 0x98) + *(int *)(unaff_x19 + 0x2c)) - 1;
                          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                            lVar11 = *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
                            if (lVar11 == 0) goto LAB_0144d820;
                            uVar2 = uVar1 + *(int *)(unaff_x19 + 0xa0);
                            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                              lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
                              uVar5 = *(undefined8 *)(lVar10 + 0x20);
                              lVar11 = lVar11 + (long)(int)uVar2 * 0x10;
                              *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(lVar10 + 0x28);
                              *(undefined8 *)(lVar11 + 0x20) = uVar5;
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


