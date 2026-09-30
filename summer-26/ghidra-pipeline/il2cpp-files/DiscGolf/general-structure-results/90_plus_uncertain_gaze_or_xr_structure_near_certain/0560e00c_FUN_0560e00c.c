/*
FUNCTION_NAME: FUN_0560e00c
ENTRY_POINT: 0560e00c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 90
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_4
*/


undefined4 FUN_0560e00c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long *plVar10;
  
  if ((DAT_06dbb999 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0e888);
    FUN_02d965b8(PTR_DAT_06a155b8);
    FUN_02d965b8(PTR_DAT_069feeb8);
    DAT_06dbb999 = 1;
  }
  puVar2 = PTR_DAT_06a155b8;
  puVar1 = PTR_DAT_06a0e888;
  uVar9 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  plVar10 = *(long **)(param_1 + 0x20);
  if (iVar4 < 3) {
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (plVar10 != (long *)0x0) {
        lVar5 = plVar10[0x62];
        *(undefined2 *)(param_1 + 0x30) = 0;
        *(undefined1 *)(param_1 + 0x32) = 0;
        *(char *)(param_1 + 0x28) = (char)lVar5;
        uVar9 = 0xc;
        if ((char)lVar5 == '\0') {
          uVar9 = 1;
        }
        *(undefined4 *)(param_1 + 0x2c) = uVar9;
        goto LAB_0560e10c;
      }
    }
    else {
      if (iVar4 == 1) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        goto OVRCameraRig__get_leftEyeCamera;
      }
      if (iVar4 != 2) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      do {
        while( true ) {
          iVar4 = *(int *)(param_1 + 0x2c) + -1;
          bVar3 = *(char *)(param_1 + 0x28) == '\0';
          *(int *)(param_1 + 0x2c) = iVar4;
          *(bool *)(param_1 + 0x28) = (!bVar3 && iVar4 != 0) && (bVar3 || -1 < iVar4);
          if ((!bVar3 && iVar4 != 0) && (bVar3 || -1 < iVar4)) {
            uVar7 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069feeb8);
            FUN_06356d78(0x40800000,uVar7,0);
            *(undefined8 *)(param_1 + 0x18) = uVar7;
            LeanTween__value((undefined8 *)(param_1 + 0x18),uVar7);
            uVar9 = 1;
            uVar8 = 3;
            goto LAB_0560e2f4;
          }
OVRCameraRig__get_leftHandAnchor:
          *(undefined8 *)(param_1 + 0x38) = 0;
          LeanTween__value((undefined8 *)(param_1 + 0x38),0);
          if (*(char *)(param_1 + 0x28) == '\0') {
            if (*(char *)(param_1 + 0x30) != '\0') goto LAB_0560e208;
            if (plVar10 == (long *)0x0) goto thunk_FUN_02d96860;
            (**(code **)(*plVar10 + 0x2e8))(plVar10,*(undefined8 *)(*plVar10 + 0x2f0));
            if ((*(char *)(param_1 + 0x32) == '\0') || (*(char *)((long)plVar10 + 0x311) == '\0'))
            goto LAB_0560e208;
            uVar7 = (**(code **)(*plVar10 + 0x318))(plVar10,*(undefined8 *)(*plVar10 + 800));
            *(undefined8 *)(param_1 + 0x18) = uVar7;
            LeanTween__value();
            uVar9 = 1;
            uVar8 = 4;
            goto LAB_0560e2f4;
          }
LAB_0560e10c:
          lVar5 = *(long *)(*(long *)puVar1 + 0x20);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02dcfd18();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02dcfd18();
          }
          if ((plVar10 == (long *)0x0) ||
             (lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8), lVar5 == 0)) goto thunk_FUN_02d96860;
          uVar7 = FUN_056861e4(lVar5,plVar10[0x19],2,0);
          *(undefined8 *)(param_1 + 0x38) = uVar7;
          LeanTween__value();
OVRCameraRig__get_leftEyeCamera:
          if (*(long *)(param_1 + 0x38) == 0) goto thunk_FUN_02d96860;
          uVar6 = FUN_0555c064(*(long *)(param_1 + 0x38),0);
          if ((uVar6 & 1) == 0) {
            *(undefined8 *)(param_1 + 0x18) = 0;
            LeanTween__value((undefined8 *)(param_1 + 0x18),0);
            uVar8 = 1;
            uVar9 = 1;
            goto LAB_0560e2f4;
          }
          if (*(long *)(param_1 + 0x38) == 0) goto thunk_FUN_02d96860;
          iVar4 = FUN_04819b90(*(long *)(param_1 + 0x38),*(undefined8 *)puVar2);
          if (7 < iVar4) break;
          if ((iVar4 == 1) || (iVar4 == 4)) {
OVRCameraRig__set_leftEyeAnchor:
            *(undefined1 *)(param_1 + 0x28) = 0;
          }
        }
        if (iVar4 == 8) {
          *(undefined2 *)(param_1 + 0x31) = 0x101;
          goto OVRCameraRig__set_leftEyeAnchor;
        }
      } while (iVar4 != 9);
      *(undefined1 *)(param_1 + 0x28) = 0;
      *(undefined2 *)(param_1 + 0x30) = 0x101;
      if (plVar10 != (long *)0x0) {
        uVar9 = 1;
        uVar7 = (**(code **)(*plVar10 + 0x308))(plVar10,1,*(undefined8 *)(*plVar10 + 0x310));
        *(undefined8 *)(param_1 + 0x18) = uVar7;
        LeanTween__value();
        uVar8 = 2;
        goto LAB_0560e2f4;
      }
    }
    goto thunk_FUN_02d96860;
  }
  if (iVar4 == 3) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto OVRCameraRig__get_leftHandAnchor;
  }
  if (iVar4 == 4) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
LAB_0560e208:
    if (*(char *)(param_1 + 0x30) == '\0') {
      if (plVar10 == (long *)0x0) goto thunk_FUN_02d96860;
      uVar6 = FUN_0560bec0(plVar10);
      if ((uVar6 & 1) != 0) {
        return 0;
      }
    }
    else if (plVar10 == (long *)0x0) {
thunk_FUN_02d96860:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar7 = FUN_0560cc68(plVar10);
    *(undefined8 *)(param_1 + 0x18) = uVar7;
    LeanTween__value();
    uVar9 = 1;
    uVar8 = 5;
  }
  else {
    if (iVar4 != 5) {
      return 0;
    }
    uVar8 = 0xffffffff;
  }
LAB_0560e2f4:
  *(undefined4 *)(param_1 + 0x10) = uVar8;
  return uVar9;
}


