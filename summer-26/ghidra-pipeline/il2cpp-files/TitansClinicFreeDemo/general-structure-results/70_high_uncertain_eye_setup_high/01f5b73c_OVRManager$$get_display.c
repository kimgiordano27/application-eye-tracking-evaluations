/*
FUNCTION_NAME: OVRManager$$get_display
ENTRY_POINT: 01f5b73c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__get_display(void)

{
  undefined1 in_ZR;
  ushort uVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar6;
  int unaff_w22;
  int unaff_w23;
  int unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w28;
  
code_r0x01f5b73c:
  iVar4 = unaff_w28 + 1;
  if ((bool)in_ZR) goto LAB_01f5b710;
LAB_01f5b744:
  unaff_w21 = unaff_w22 + -1;
  do {
    iVar4 = unaff_w26;
    if (unaff_w28 < 3) {
      iVar4 = unaff_w26 + 1;
    }
    bVar3 = false;
    iVar6 = unaff_w21;
    if (unaff_w28 < 3) {
      unaff_w23 = unaff_w26;
    }
LAB_01f5b770:
    unaff_w26 = iVar4;
    if ((2 < unaff_w26) || (unaff_w21 = iVar6 + 1, *(int *)(unaff_x20 + 0x10) <= unaff_w21)) {
      if ((unaff_w23 == 2) && ((unaff_w24 == 1 && (unaff_w25 == 0)))) {
        uVar5 = 0;
      }
      else {
        if ((unaff_w23 != 1) || ((unaff_w24 != 0 || (unaff_w25 != 2)))) {
          if ((unaff_w23 == 0) && ((unaff_w24 == 1 && (unaff_w25 == 2)))) {
            bVar3 = true;
            uVar5 = 2;
          }
          else {
            bVar3 = unaff_w24 == 2 && (unaff_w23 == 1 && unaff_w25 == 0);
            uVar5 = 3;
            if (unaff_w24 != 2 || (unaff_w23 != 1 || unaff_w25 != 0)) {
              uVar5 = 0xffffffff;
            }
          }
          goto LAB_01f5b880;
        }
        uVar5 = 1;
      }
      bVar3 = true;
LAB_01f5b880:
      *unaff_x19 = uVar5;
      return bVar3;
    }
    uVar1 = FUN_01e60d24();
    iVar4 = unaff_w26;
    if (0x26 < uVar1) {
      if (uVar1 == 0x27) goto LAB_01f5b764;
      if (uVar1 != 0x5c) goto LAB_01f5b6c4;
LAB_01f5b75c:
      iVar6 = iVar6 + 2;
      goto LAB_01f5b770;
    }
    if (uVar1 == 0x22) {
LAB_01f5b764:
      if (!bVar3) {
LAB_01f5b768:
        bVar3 = true;
        iVar6 = unaff_w21;
        goto LAB_01f5b770;
      }
    }
    else {
      if (uVar1 == 0x25) goto LAB_01f5b75c;
LAB_01f5b6c4:
      if (bVar3) goto LAB_01f5b768;
    }
    if (uVar1 == 0x4d) {
      do {
        iVar6 = unaff_w21;
        unaff_w21 = iVar6 + 1;
        if (*(int *)(unaff_x20 + 0x10) <= unaff_w21) break;
        sVar2 = FUN_01e60d24();
      } while (sVar2 == 0x4d);
      bVar3 = false;
      iVar4 = unaff_w26 + 1;
      unaff_w24 = unaff_w26;
      goto LAB_01f5b770;
    }
    if (uVar1 == 0x79) {
      do {
        iVar6 = unaff_w21;
        unaff_w21 = iVar6 + 1;
        if (*(int *)(unaff_x20 + 0x10) <= unaff_w21) break;
        sVar2 = FUN_01e60d24();
      } while (sVar2 == 0x79);
      bVar3 = false;
      iVar4 = unaff_w26 + 1;
      unaff_w25 = unaff_w26;
      goto LAB_01f5b770;
    }
    if (uVar1 != 100) {
      bVar3 = false;
      iVar6 = unaff_w21;
      goto LAB_01f5b770;
    }
    if ((iVar6 + 2 < *(int *)(unaff_x20 + 0x10)) && (sVar2 = FUN_01e60d24(), sVar2 == 100)) break;
    unaff_w28 = 1;
  } while( true );
  iVar4 = 2;
LAB_01f5b710:
  unaff_w22 = unaff_w21 + iVar4;
  unaff_w28 = iVar4;
  if (unaff_w22 < *(int *)(unaff_x20 + 0x10)) goto code_r0x01f5b724;
  goto LAB_01f5b744;
code_r0x01f5b724:
  sVar2 = FUN_01e60d24();
  in_ZR = sVar2 == 100;
  goto code_r0x01f5b73c;
}


