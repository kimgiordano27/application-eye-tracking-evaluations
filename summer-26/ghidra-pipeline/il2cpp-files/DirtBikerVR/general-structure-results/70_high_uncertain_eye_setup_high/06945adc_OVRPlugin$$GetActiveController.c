/*
FUNCTION_NAME: OVRPlugin$$GetActiveController
ENTRY_POINT: 06945adc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActiveController(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  int iVar11;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x25;
  undefined8 *puVar12;
  long *unaff_x28;
  int unaff_w29;
  float fVar13;
  
  puVar12 = *(undefined8 **)(unaff_x25 + 0x410);
  lVar5 = FUN_04de82e0(param_1,2,*puVar12);
  if ((*unaff_x23 != 0) && (uVar6 = FUN_04de82e0(*unaff_x23,1,*puVar12), lVar5 != 0)) {
    FUN_069426d0(lVar5,uVar6);
    if ((*unaff_x23 != 0) &&
       (lVar5 = FUN_04de82e0(*unaff_x23,2,*(undefined8 *)PTR_DAT_084b6410), lVar5 != 0)) {
      uVar6 = FUN_065cddf0(*(undefined8 *)PTR_DAT_084b64a8,*(undefined8 *)(lVar5 + 0x28),
                           *(undefined8 *)PTR_DAT_0848f320,0);
      FUN_07c4f4f4(uVar6,0);
      if (unaff_x28[7] != 0) {
        lVar5 = unaff_x28[9];
        uVar6 = FUN_04de82e0(unaff_x28[7],2,*(undefined8 *)PTR_DAT_084b6410);
        if (lVar5 != 0) {
          FUN_06941ffc(lVar5,uVar6);
          lVar5 = *unaff_x20;
          if (lVar5 != 0) {
            iVar10 = 0;
            while (puVar3 = PTR_DAT_084b6480, fVar2 = DAT_015c5994, fVar1 = DAT_015c56e4,
                  iVar10 < *(int *)(lVar5 + 0x18)) {
              if (unaff_x22 == 0) goto LAB_069460ac;
              uVar4 = FUN_04d8be94();
              if (*unaff_x20 == 0) goto LAB_069460ac;
              lVar5 = FUN_04de82e0(*unaff_x20,iVar10,*unaff_x19);
              lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b6438);
              FUN_0694d12c(lVar7,0);
              if ((lVar7 == 0) || (*(undefined4 *)(lVar7 + 0x10) = uVar4, lVar5 == 0))
              goto LAB_069460ac;
              *(long *)(lVar5 + 0x88) = lVar7;
              thunk_FUN_03afed3c((long *)(lVar5 + 0x88),lVar7);
              lVar5 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084867c8,5);
              if (lVar5 == 0) goto LAB_069460ac;
              if (*(int *)(lVar5 + 0x18) == 0) goto LAB_069460ec;
              *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_084b64d8;
              thunk_FUN_03afed3c();
              if ((*unaff_x20 == 0) ||
                 (lVar7 = FUN_04de82e0(*unaff_x20,iVar10,*unaff_x19), lVar7 == 0))
              goto LAB_069460ac;
              if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_069460ec;
              *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
              thunk_FUN_03afed3c((undefined8 *)(lVar5 + 0x28));
              if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_069460ec;
              *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)PTR_DAT_084b6468;
              thunk_FUN_03afed3c();
              if ((*unaff_x21 == 0) ||
                 (lVar7 = FUN_04de82e0(*unaff_x21,uVar4,*(undefined8 *)PTR_DAT_084b63c8), lVar7 == 0
                 )) goto LAB_069460ac;
              if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) == 0) goto LAB_069460ec;
              *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(lVar7 + 0x10);
              thunk_FUN_03afed3c((undefined8 *)(lVar5 + 0x38));
              if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_069460ec;
              *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)PTR_DAT_0848f320;
              thunk_FUN_03afed3c();
              uVar6 = FUN_065ce45c(lVar5,0);
              if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
                thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
              }
              FUN_07c4f4f4(uVar6,0);
              lVar5 = *unaff_x20;
              iVar10 = iVar10 + 1;
              if (lVar5 == 0) goto LAB_069460ac;
            }
            lVar5 = *unaff_x21;
            if (lVar5 != 0) {
              iVar10 = unaff_w29;
              if (1 < unaff_w29) {
                iVar10 = 2;
              }
              if (unaff_w29 < 1) goto LAB_069460b0;
              iVar11 = 0;
              goto LAB_06945da4;
            }
          }
        }
      }
    }
  }
  goto LAB_069460ac;
LAB_06945da4:
  do {
    lVar5 = FUN_04de82e0(lVar5,iVar11,*(undefined8 *)PTR_DAT_084b63c8);
    if ((lVar5 == 0) || (lVar5 = FUN_0694d834(), lVar5 == 0)) break;
    if (*(int *)(lVar5 + 0x18) == 2) {
      lVar7 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084867c8,5);
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x18) == 0) {
LAB_069460ec:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar3;
      thunk_FUN_03afed3c();
      if ((*unaff_x23 == 0) ||
         (lVar8 = FUN_04de82e0(*unaff_x23,iVar11,*(undefined8 *)PTR_DAT_084b6410), lVar8 == 0))
      break;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto LAB_069460ec;
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
      thunk_FUN_03afed3c((undefined8 *)(lVar7 + 0x28));
      if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_069460ec;
      *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)PTR_DAT_084b6468;
      thunk_FUN_03afed3c();
      lVar8 = FUN_04de82e0(lVar5,0,*unaff_x19);
      if (lVar8 == 0) break;
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_069460ec;
      *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)(lVar8 + 0x28);
      thunk_FUN_03afed3c((undefined8 *)(lVar7 + 0x38));
      if (*(uint *)(lVar7 + 0x18) < 5) goto LAB_069460ec;
      *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)PTR_DAT_0848f320;
      thunk_FUN_03afed3c();
      uVar6 = FUN_065ce45c(lVar7,0);
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
      }
      FUN_07c4f4f4(uVar6,0);
      lVar7 = FUN_04de82e0(lVar5,0,*unaff_x19);
      if (((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
         (lVar7 = FUN_07c98f88(*(long *)(lVar7 + 0x80),0), lVar7 == 0)) break;
      fVar13 = (float)FUN_07cac280(lVar7,0);
      if (fVar1 <= fVar13) {
        lVar7 = FUN_04de82e0(lVar5,0,*unaff_x19);
        if (((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
           (lVar7 = FUN_07c98f88(*(long *)(lVar7 + 0x80),0), lVar7 == 0)) break;
        fVar13 = (float)FUN_07cac280(lVar7,0);
        if (fVar13 <= fVar2) {
          if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_07c4adbc(*(undefined8 *)PTR_DAT_084b6488,0);
          goto LAB_06946098;
        }
        if (*unaff_x23 == 0) break;
        lVar7 = FUN_04de82e0(*unaff_x23,iVar11,*(undefined8 *)PTR_DAT_084b6410);
        uVar6 = FUN_04de82e0(lVar5,1,*unaff_x19);
        if (lVar7 == 0) break;
        FUN_06941ffc(lVar7,uVar6);
        if (*unaff_x23 == 0) break;
        lVar7 = FUN_04de82e0(*unaff_x23,iVar11,*(undefined8 *)PTR_DAT_084b6410);
        uVar9 = *unaff_x19;
        uVar6 = 0;
      }
      else {
        if (*unaff_x23 == 0) break;
        lVar7 = FUN_04de82e0(*unaff_x23,iVar11,*(undefined8 *)PTR_DAT_084b6410);
        uVar6 = FUN_04de82e0(lVar5,0,*unaff_x19);
        if (lVar7 == 0) break;
        FUN_06941ffc(lVar7,uVar6);
        if (*unaff_x23 == 0) break;
        lVar7 = FUN_04de82e0(*unaff_x23,iVar11,*(undefined8 *)PTR_DAT_084b6410);
        uVar9 = *unaff_x19;
        uVar6 = 1;
      }
      uVar6 = FUN_04de82e0(lVar5,uVar6,uVar9);
      if (lVar7 == 0) break;
      FUN_069426d0(lVar7,uVar6);
    }
LAB_06946098:
    if (iVar10 + -1 == iVar11) {
LAB_069460b0:
      (**(code **)(*unaff_x28 + 0x248))();
      return;
    }
    lVar5 = *unaff_x21;
    iVar11 = iVar11 + 1;
  } while (lVar5 != 0);
LAB_069460ac:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


