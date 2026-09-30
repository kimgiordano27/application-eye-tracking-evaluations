/*
FUNCTION_NAME: OVRSceneManager$$OVRManager_SceneCaptureComplete
ENTRY_POINT: 02828650
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRSceneManager__OVRManager_SceneCaptureComplete(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  long unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long *plVar12;
  int unaff_w25;
  long unaff_x26;
  int iVar13;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000018;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0x518));
  FUN_01ab69ac(PTR_DAT_03ce6520);
  FUN_01ab69ac(PTR_DAT_03ce6528);
  FUN_01ab69ac(PTR_DAT_03ce6530);
  FUN_01ab69ac(PTR_DAT_03ce6538);
  FUN_01ab69ac(PTR_DAT_03cfeb28);
  FUN_01ab69ac(PTR_DAT_03cfeb30);
  FUN_01ab69ac(PTR_DAT_03cc1940);
  *(undefined1 *)(unaff_x19 + 0x3f5) = 1;
  if ((unaff_x24 & 1) != 0) {
    if (unaff_x20 == (long *)0x0) goto LAB_02828bac;
    (**(code **)(*unaff_x20 + 0x208))();
  }
  uVar6 = FUN_0282f8a8();
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_03cfdb28 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar4 = FUN_02828bb4();
    if (iVar4 == 0) {
      if (unaff_x23 == 0) goto LAB_02828bac;
    }
    else {
      if (iVar4 == -1) {
        if (unaff_x20 == (long *)0x0) goto LAB_02828bac;
        (**(code **)(*unaff_x20 + 0x248))();
        goto LAB_02828b50;
      }
      if ((*unaff_x22 == 0) || (*(int *)(*unaff_x22 + 0x18) < iVar4)) {
        lVar7 = FUN_02827888(in_stack_00000018,iVar4);
        *unaff_x22 = lVar7;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      if ((unaff_x23 == 0) || (FUN_025c5094(), unaff_x20 == (long *)0x0)) goto LAB_02828bac;
      (**(code **)(*unaff_x20 + 0x228))();
    }
    iVar10 = *(int *)(unaff_x23 + 0x10);
    plVar12 = (long *)PTR_DAT_03cc27f8;
    uStack000000000000000c = unaff_w21;
    iVar13 = iVar4;
    if (iVar4 < iVar10) {
      do {
        uVar6 = FUN_025b8a2c(unaff_x23,iVar13,0);
        if (unaff_x26 == 0) goto LAB_02828bac;
        uVar3 = *(uint *)(unaff_x26 + 0x18);
        uVar5 = (uint)uVar6;
        uVar1 = uVar5 & 0xffff;
        if ((int)uVar1 < (int)uVar3) {
          if (uVar3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          if (*(char *)(unaff_x26 + (uVar6 & 0xffff) + 0x20) != '\0') goto LAB_02828810;
        }
        else {
LAB_02828810:
          if (uVar1 < 0x5d) {
            plVar11 = (long *)PTR_DAT_03ce6518;
            switch(uVar5 & 0xffff) {
            case 8:
              plVar11 = (long *)PTR_DAT_03ce6508;
              break;
            case 9:
              break;
            case 10:
              plVar11 = (long *)PTR_DAT_03ce6510;
              break;
            case 0xb:
switchD_02828844_caseD_b:
              if ((unaff_w25 != 1) && ((int)uVar3 <= (int)uVar1)) goto LAB_02828ab8;
              if (((unaff_w25 == 2) ||
                  (plVar11 = (long *)PTR_DAT_03ce6530, (uVar5 & 0xffff) != 0x27)) &&
                 ((unaff_w25 == 2 || (plVar11 = (long *)PTR_DAT_03ce6520, (uVar5 & 0xffff) != 0x22))
                 )) {
                lVar7 = *unaff_x22;
                if ((lVar7 == 0) || (*(int *)(lVar7 + 0x18) < 6)) {
                  lVar7 = FUN_02827888(in_stack_00000018,6);
                  *unaff_x22 = lVar7;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  lVar7 = *unaff_x22;
                }
                FUN_0282fe70(uVar6 & 0xffffffff,lVar7,0);
                plVar11 = plVar12;
              }
              break;
            case 0xc:
              plVar11 = (long *)PTR_DAT_03ce6528;
              break;
            case 0xd:
              plVar11 = (long *)PTR_DAT_03ce6538;
              break;
            default:
              plVar11 = (long *)PTR_DAT_03cc1940;
              if ((uVar5 & 0xffff) != 0x5c) goto switchD_02828844_caseD_b;
            }
          }
          else {
            uVar2 = uVar5 & 0xffff;
            plVar11 = (long *)PTR_DAT_03cfeb30;
            if (((uVar2 != 0x85) && (plVar11 = (long *)PTR_DAT_03cfeb28, uVar2 != 0x2028)) &&
               (plVar11 = (long *)PTR_DAT_03cfeb20, uVar2 != 0x2029)) goto switchD_02828844_caseD_b;
          }
          lVar7 = *plVar11;
          if (lVar7 != 0) {
            uVar6 = FUN_025bd20c(lVar7,*plVar12,4,0);
            iVar10 = iVar13 - iVar4;
            if (iVar10 == 0 || iVar13 < iVar4) {
              if ((uVar6 & 1) != 0) {
                if (unaff_x20 != (long *)0x0) goto LAB_02828a78;
                goto LAB_02828bac;
              }
              if (unaff_x20 == (long *)0x0) goto LAB_02828bac;
            }
            else {
              lVar8 = *unaff_x22;
              iVar9 = 6;
              if ((uVar6 & 1) == 0) {
                iVar9 = 0;
              }
              if ((lVar8 == 0) || (*(int *)(lVar8 + 0x18) < iVar13 + (iVar9 - iVar4))) {
                lVar8 = FUN_02827710(in_stack_00000018);
                if ((uVar6 & 1) != 0) {
                  FUN_02794c7c(*unaff_x22,lVar8,6,0);
                }
                FUN_028277d8(in_stack_00000018,*unaff_x22);
                *unaff_x22 = lVar8;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                lVar8 = *unaff_x22;
              }
              FUN_025c5094(unaff_x23,iVar4,lVar8,iVar9,iVar10,0);
              if (unaff_x20 == (long *)0x0) goto LAB_02828bac;
              (**(code **)(*unaff_x20 + 0x228))
                        (unaff_x20,*unaff_x22,iVar9,iVar10,*(undefined8 *)(*unaff_x20 + 0x230));
              plVar12 = (long *)PTR_DAT_03cc27f8;
              if ((uVar6 & 1) != 0) {
LAB_02828a78:
                iVar4 = iVar13 + 1;
                (**(code **)(*unaff_x20 + 0x228))
                          (unaff_x20,*unaff_x22,0,6,*(undefined8 *)(*unaff_x20 + 0x230));
                goto LAB_02828ab8;
              }
            }
            iVar4 = iVar13 + 1;
            (**(code **)(*unaff_x20 + 0x248))(unaff_x20,lVar7,*(undefined8 *)(*unaff_x20 + 0x250));
          }
        }
LAB_02828ab8:
        iVar10 = *(int *)(unaff_x23 + 0x10);
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar10);
      unaff_x24 = unaff_x24 & 0xffffffff;
      unaff_w21 = uStack000000000000000c;
    }
    iVar10 = iVar10 - iVar4;
    if (0 < iVar10) {
      lVar7 = *unaff_x22;
      if ((lVar7 == 0) || (*(int *)(lVar7 + 0x18) < iVar10)) {
        lVar7 = FUN_02827888(in_stack_00000018,iVar10);
        *unaff_x22 = lVar7;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar7 = *unaff_x22;
      }
      FUN_025c5094(unaff_x23,iVar4,lVar7,0,iVar10,0);
      if (unaff_x20 == (long *)0x0) goto LAB_02828bac;
      (**(code **)(*unaff_x20 + 0x228))
                (unaff_x20,*unaff_x22,0,iVar10,*(undefined8 *)(*unaff_x20 + 0x230));
    }
  }
LAB_02828b50:
  if ((unaff_x24 & 1) == 0) {
    return;
  }
  if (unaff_x20 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02828b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x20 + 0x208))(unaff_x20,unaff_w21,*(undefined8 *)(*unaff_x20 + 0x210));
    return;
  }
LAB_02828bac:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


