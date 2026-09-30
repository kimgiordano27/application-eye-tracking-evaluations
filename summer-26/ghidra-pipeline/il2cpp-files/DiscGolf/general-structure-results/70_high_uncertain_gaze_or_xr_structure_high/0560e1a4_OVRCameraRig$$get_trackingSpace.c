/*
FUNCTION_NAME: OVRCameraRig$$get_trackingSpace
ENTRY_POINT: 0560e1a4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_2
*/


undefined4 OVRCameraRig__get_trackingSpace(void)

{
  undefined1 in_ZR;
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
code_r0x0560e1a4:
  if ((bool)in_ZR) goto OVRCameraRig__set_leftEyeAnchor;
LAB_0560e1c0:
  do {
    iVar2 = *(int *)(unaff_x19 + 0x2c) + -1;
    bVar1 = *(char *)(unaff_x19 + 0x28) == '\0';
    *(int *)(unaff_x19 + 0x2c) = iVar2;
    *(bool *)(unaff_x19 + 0x28) = (!bVar1 && iVar2 != 0) && (bVar1 || -1 < iVar2);
    if ((!bVar1 && iVar2 != 0) && (bVar1 || -1 < iVar2)) {
      uVar5 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069feeb8);
      FUN_06356d78(0x40800000,uVar5,0);
      *(undefined8 *)(unaff_x19 + 0x18) = uVar5;
      LeanTween__value((undefined8 *)(unaff_x19 + 0x18),uVar5);
      uVar6 = 3;
LAB_0560e2f4:
      *(undefined4 *)(unaff_x19 + 0x10) = uVar6;
      return 1;
    }
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
    LeanTween__value((undefined8 *)(unaff_x19 + 0x38),0);
    if (*(char *)(unaff_x19 + 0x28) == '\0') {
      if (*(char *)(unaff_x19 + 0x30) == '\0') {
        if (unaff_x20 == (long *)0x0) goto thunk_FUN_02d96860;
        (**(code **)(*unaff_x20 + 0x2e8))();
        if ((*(char *)(unaff_x19 + 0x32) != '\0') && (*(char *)((long)unaff_x20 + 0x311) != '\0')) {
          uVar5 = (**(code **)(*unaff_x20 + 0x318))();
          *(undefined8 *)(unaff_x19 + 0x18) = uVar5;
          LeanTween__value();
          uVar6 = 4;
          goto LAB_0560e2f4;
        }
      }
      if (*(char *)(unaff_x19 + 0x30) == '\0') {
        if (unaff_x20 == (long *)0x0) goto thunk_FUN_02d96860;
        uVar4 = FUN_0560bec0();
        if ((uVar4 & 1) != 0) {
          return 0;
        }
      }
      else if (unaff_x20 == (long *)0x0) goto thunk_FUN_02d96860;
      uVar5 = FUN_0560cc68();
      *(undefined8 *)(unaff_x19 + 0x18) = uVar5;
      LeanTween__value();
      uVar6 = 5;
      goto LAB_0560e2f4;
    }
    lVar3 = *(long *)(*unaff_x23 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    if ((unaff_x20 == (long *)0x0) || (lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8), lVar3 == 0))
    {
thunk_FUN_02d96860:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar5 = FUN_056861e4(lVar3,unaff_x20[0x19],2,0);
    *(undefined8 *)(unaff_x19 + 0x38) = uVar5;
    LeanTween__value();
    if (*(long *)(unaff_x19 + 0x38) == 0) goto thunk_FUN_02d96860;
    uVar4 = FUN_0555c064(*(long *)(unaff_x19 + 0x38),0);
    if ((uVar4 & 1) == 0) {
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      LeanTween__value((undefined8 *)(unaff_x19 + 0x18),0);
      uVar6 = 1;
      goto LAB_0560e2f4;
    }
    if (*(long *)(unaff_x19 + 0x38) == 0) goto thunk_FUN_02d96860;
    iVar2 = FUN_04819b90(*(long *)(unaff_x19 + 0x38),*unaff_x22);
    if (iVar2 < 8) {
      if (iVar2 != 1) break;
    }
    else {
      if (iVar2 != 8) {
        if (iVar2 == 9) {
          *(undefined1 *)(unaff_x19 + 0x28) = 0;
          *(undefined2 *)(unaff_x19 + 0x30) = 0x101;
          if (unaff_x20 != (long *)0x0) {
            uVar5 = (**(code **)(*unaff_x20 + 0x308))();
            *(undefined8 *)(unaff_x19 + 0x18) = uVar5;
            LeanTween__value();
            uVar6 = 2;
            goto LAB_0560e2f4;
          }
          goto thunk_FUN_02d96860;
        }
        goto LAB_0560e1c0;
      }
      *(undefined2 *)(unaff_x19 + 0x31) = 0x101;
    }
OVRCameraRig__set_leftEyeAnchor:
    *(undefined1 *)(unaff_x19 + 0x28) = 0;
  } while( true );
  in_ZR = iVar2 == 4;
  goto code_r0x0560e1a4;
}


