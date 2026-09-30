/*
FUNCTION_NAME: OVRPlugin$$GetTrackingOriginType
ENTRY_POINT: 06945c54
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_21;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetTrackingOriginType(undefined8 *param_1,long param_2)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  int iVar10;
  long unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  undefined4 unaff_w25;
  long unaff_x26;
  long *unaff_x28;
  int unaff_w29;
  float fVar11;
  
  do {
    *(undefined8 *)(param_2 + 0x20) = *param_1;
    thunk_FUN_03afed3c();
    if ((*unaff_x20 == 0) || (lVar5 = FUN_04de82e0(*unaff_x20,unaff_w24,*unaff_x19), lVar5 == 0))
    goto LAB_069460ac;
    if ((*(uint *)(unaff_x26 + 0x18) & 0xfffffffe) == 0) break;
    *(undefined8 *)(unaff_x26 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
    thunk_FUN_03afed3c((undefined8 *)(unaff_x26 + 0x28));
    if (*(uint *)(unaff_x26 + 0x18) < 3) break;
    *(undefined8 *)(unaff_x26 + 0x30) = *(undefined8 *)PTR_DAT_084b6468;
    thunk_FUN_03afed3c();
    if ((*unaff_x21 == 0) ||
       (lVar5 = FUN_04de82e0(*unaff_x21,unaff_w25,*(undefined8 *)PTR_DAT_084b63c8), lVar5 == 0))
    goto LAB_069460ac;
    if ((*(uint *)(unaff_x26 + 0x18) & 0xfffffffc) == 0) break;
    *(undefined8 *)(unaff_x26 + 0x38) = *(undefined8 *)(lVar5 + 0x10);
    thunk_FUN_03afed3c((undefined8 *)(unaff_x26 + 0x38));
    if (*(uint *)(unaff_x26 + 0x18) < 5) break;
    *(undefined8 *)(unaff_x26 + 0x40) = *(undefined8 *)PTR_DAT_0848f320;
    thunk_FUN_03afed3c();
    uVar6 = FUN_065ce45c(unaff_x26,0);
    if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
    }
    FUN_07c4f4f4(uVar6,0);
    puVar3 = PTR_DAT_084b6480;
    fVar2 = DAT_015c5994;
    fVar1 = DAT_015c56e4;
    unaff_w24 = unaff_w24 + 1;
    if (*unaff_x20 == 0) goto LAB_069460ac;
    if (*(int *)(*unaff_x20 + 0x18) <= unaff_w24) {
      lVar5 = *unaff_x21;
      if (lVar5 == 0) goto LAB_069460ac;
      iVar9 = unaff_w29;
      if (1 < unaff_w29) {
        iVar9 = 2;
      }
      if (unaff_w29 < 1) goto LAB_069460b0;
      iVar10 = 0;
      goto LAB_06945da4;
    }
    if (unaff_x22 == 0) goto LAB_069460ac;
    unaff_w25 = FUN_04d8be94();
    if (*unaff_x20 == 0) goto LAB_069460ac;
    lVar5 = FUN_04de82e0(*unaff_x20,unaff_w24,*unaff_x19);
    lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b6438);
    FUN_0694d12c(lVar4,0);
    if ((lVar4 == 0) || (*(undefined4 *)(lVar4 + 0x10) = unaff_w25, lVar5 == 0)) goto LAB_069460ac;
    *(long *)(lVar5 + 0x88) = lVar4;
    thunk_FUN_03afed3c((long *)(lVar5 + 0x88),lVar4);
    param_2 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084867c8,5);
    if (param_2 == 0) goto LAB_069460ac;
    param_1 = (undefined8 *)PTR_DAT_084b64d8;
    unaff_x26 = param_2;
  } while (*(int *)(param_2 + 0x18) != 0);
LAB_069460ec:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
LAB_06945da4:
  do {
    lVar5 = FUN_04de82e0(lVar5,iVar10,*(undefined8 *)PTR_DAT_084b63c8);
    if ((lVar5 == 0) || (lVar5 = FUN_0694d834(), lVar5 == 0)) break;
    if (*(int *)(lVar5 + 0x18) == 2) {
      lVar4 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084867c8,5);
      if (lVar4 == 0) break;
      if (*(int *)(lVar4 + 0x18) == 0) goto LAB_069460ec;
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar3;
      thunk_FUN_03afed3c();
      if ((*unaff_x23 == 0) ||
         (lVar7 = FUN_04de82e0(*unaff_x23,iVar10,*(undefined8 *)PTR_DAT_084b6410), lVar7 == 0))
      break;
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) goto LAB_069460ec;
      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
      thunk_FUN_03afed3c((undefined8 *)(lVar4 + 0x28));
      if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_069460ec;
      *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)PTR_DAT_084b6468;
      thunk_FUN_03afed3c();
      lVar7 = FUN_04de82e0(lVar5,0,*unaff_x19);
      if (lVar7 == 0) break;
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) == 0) goto LAB_069460ec;
      *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(lVar7 + 0x28);
      thunk_FUN_03afed3c((undefined8 *)(lVar4 + 0x38));
      if (*(uint *)(lVar4 + 0x18) < 5) goto LAB_069460ec;
      *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)PTR_DAT_0848f320;
      thunk_FUN_03afed3c();
      uVar6 = FUN_065ce45c(lVar4,0);
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
      }
      FUN_07c4f4f4(uVar6,0);
      lVar4 = FUN_04de82e0(lVar5,0,*unaff_x19);
      if (((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
         (lVar4 = FUN_07c98f88(*(long *)(lVar4 + 0x80),0), lVar4 == 0)) break;
      fVar11 = (float)FUN_07cac280(lVar4,0);
      if (fVar1 <= fVar11) {
        lVar4 = FUN_04de82e0(lVar5,0,*unaff_x19);
        if (((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
           (lVar4 = FUN_07c98f88(*(long *)(lVar4 + 0x80),0), lVar4 == 0)) break;
        fVar11 = (float)FUN_07cac280(lVar4,0);
        if (fVar11 <= fVar2) {
          if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_07c4adbc(*(undefined8 *)PTR_DAT_084b6488,0);
          goto LAB_06946098;
        }
        if (*unaff_x23 == 0) break;
        lVar4 = FUN_04de82e0(*unaff_x23,iVar10,*(undefined8 *)PTR_DAT_084b6410);
        uVar6 = FUN_04de82e0(lVar5,1,*unaff_x19);
        if (lVar4 == 0) break;
        FUN_06941ffc(lVar4,uVar6);
        if (*unaff_x23 == 0) break;
        lVar4 = FUN_04de82e0(*unaff_x23,iVar10,*(undefined8 *)PTR_DAT_084b6410);
        uVar8 = *unaff_x19;
        uVar6 = 0;
      }
      else {
        if (*unaff_x23 == 0) break;
        lVar4 = FUN_04de82e0(*unaff_x23,iVar10,*(undefined8 *)PTR_DAT_084b6410);
        uVar6 = FUN_04de82e0(lVar5,0,*unaff_x19);
        if (lVar4 == 0) break;
        FUN_06941ffc(lVar4,uVar6);
        if (*unaff_x23 == 0) break;
        lVar4 = FUN_04de82e0(*unaff_x23,iVar10,*(undefined8 *)PTR_DAT_084b6410);
        uVar8 = *unaff_x19;
        uVar6 = 1;
      }
      uVar6 = FUN_04de82e0(lVar5,uVar6,uVar8);
      if (lVar4 == 0) break;
      FUN_069426d0(lVar4,uVar6);
    }
LAB_06946098:
    if (iVar9 + -1 == iVar10) {
LAB_069460b0:
      (**(code **)(*unaff_x28 + 0x248))();
      return;
    }
    lVar5 = *unaff_x21;
    iVar10 = iVar10 + 1;
  } while (lVar5 != 0);
LAB_069460ac:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


