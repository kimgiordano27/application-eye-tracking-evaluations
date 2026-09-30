/*
FUNCTION_NAME: Hyper.PopupModule.Presenters.AppVersionUpdatePopupPresenter$$get_ButtonCloseText
ENTRY_POINT: 0917b638
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


float Hyper_PopupModule_Presenters_AppVersionUpdatePopupPresenter__get_ButtonCloseText(void)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  int in_w8;
  long lVar5;
  undefined4 unaff_w19;
  uint unaff_w20;
  undefined4 unaff_w21;
  int unaff_w22;
  long unaff_x23;
  uint unaff_w24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar6;
  float fVar7;
  float unaff_s11;
  float fVar8;
  float fVar9;
  
  do {
    if (in_w8 == 0) {
      thunk_FUN_049a583c();
    }
    if (unaff_s10 * unaff_s10 + unaff_s11 * unaff_s11 <= unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9)
    {
      unaff_s11 = unaff_s8;
      unaff_s10 = unaff_s9;
    }
    do {
      fVar8 = unaff_s11;
      fVar6 = unaff_s10;
      if ((unaff_w24 >> 1 & 1) != 0) {
        fVar6 = *(float *)(unaff_x23 + 0xd4);
        fVar8 = *(float *)(unaff_x23 + 0xd8);
        lVar4 = *unaff_x25;
        if (*(char *)(unaff_x23 + 0x118) != '\0') {
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_049a583c();
            lVar4 = *unaff_x25;
          }
          fVar6 = (float)FUN_0917b7c4(fVar6,fVar8,*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 4));
          lVar4 = *unaff_x25;
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        if (fVar8 * fVar8 + fVar6 * fVar6 <= unaff_s11 * unaff_s11 + unaff_s10 * unaff_s10) {
          fVar8 = unaff_s11;
          fVar6 = unaff_s10;
        }
      }
      fVar9 = fVar8;
      fVar7 = fVar6;
      if ((unaff_w24 >> 3 & 1) != 0) {
        fVar7 = *(float *)(unaff_x23 + 0xe4);
        fVar9 = *(float *)(unaff_x23 + 0xe8);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        if (fVar7 * fVar7 + fVar9 * fVar9 <= fVar8 * fVar8 + fVar6 * fVar6) {
          fVar9 = fVar8;
          fVar7 = fVar6;
        }
      }
      do {
        unaff_w22 = unaff_w22 + 1;
        lVar4 = *unaff_x25;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_049a583c();
          lVar4 = *unaff_x25;
        }
        lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
        if (lVar5 == 0) goto LAB_0917b744;
        if (*(int *)(lVar5 + 0x18) <= unaff_w22) {
          return fVar7;
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_049a583c();
          lVar5 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 8);
          if (lVar5 == 0) goto LAB_0917b744;
        }
        unaff_x23 = FUN_06b7fba4(lVar5,unaff_w22,*unaff_x26);
        lVar4 = *unaff_x27;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_049a583c(lVar4);
          lVar4 = *unaff_x27;
        }
        if (*(int *)(*(long *)(lVar4 + 0xb8) + 0x120) == 1) {
          if (unaff_x23 == 0) goto LAB_0917b744;
        }
        else {
          if (unaff_x23 == 0) goto LAB_0917b744;
          *(undefined1 *)(unaff_x23 + 0x118) = 0;
        }
        uVar1 = *(undefined4 *)(unaff_x23 + 0x10);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar3 = FUN_09179a48(uVar1,unaff_w19);
      } while ((uVar3 & 1) == 0);
      if (*(long *)(unaff_x23 + 0x38) == 0) {
LAB_0917b744:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      uVar2 = FUN_0917dc30(*(long *)(unaff_x23 + 0x38),unaff_w21);
      unaff_w24 = uVar2 | unaff_w20;
      unaff_s8 = fVar9;
      unaff_s9 = fVar7;
      if ((unaff_w24 & 1) != 0) {
        unaff_s9 = *(float *)(unaff_x23 + 0xcc);
        unaff_s8 = *(float *)(unaff_x23 + 0xd0);
        lVar4 = *unaff_x25;
        if (*(char *)(unaff_x23 + 0x118) != '\0') {
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_049a583c();
            lVar4 = *unaff_x25;
          }
          unaff_s9 = (float)FUN_0917b7c4(unaff_s9,unaff_s8,
                                         *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 4));
          lVar4 = *unaff_x25;
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        if (unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9 <= fVar9 * fVar9 + fVar7 * fVar7) {
          unaff_s8 = fVar9;
          unaff_s9 = fVar7;
        }
      }
      unaff_s11 = unaff_s8;
      unaff_s10 = unaff_s9;
    } while ((unaff_w24 >> 2 & 1) == 0);
    unaff_s10 = *(float *)(unaff_x23 + 0xdc);
    unaff_s11 = *(float *)(unaff_x23 + 0xe0);
    in_w8 = *(int *)(*unaff_x25 + 0xe4);
  } while( true );
}


