/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 04937924
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__Empty<OVRPlugin_VirtualKeyboardModelAnimationState>(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  code *in_x9;
  long lVar11;
  long *unaff_x19;
  long unaff_x20;
  long lVar12;
  
  iVar5 = (*in_x9)();
  (**(code **)(*unaff_x19 + 0x1e8))();
  uVar7 = (**(code **)(*unaff_x19 + 0x1a8))();
  puVar4 = PTR_DAT_092a5a98;
  puVar3 = PTR_DAT_092858c0;
  puVar2 = PTR_DAT_092858a0;
  do {
    if ((uVar7 & 1) == 0) {
      return;
    }
    uVar7 = (**(code **)(*unaff_x19 + 0x1c8))();
    if (((uVar7 & 1) == 0) && (uVar7 = FUN_04825338(), (uVar7 & 1) == 0)) {
      uVar7 = (**(code **)(*unaff_x19 + 0x1d8))();
      if (((uVar7 & 1) != 0) && (iVar6 = (**(code **)(*unaff_x19 + 0x198))(), iVar6 < iVar5)) {
        return;
      }
    }
    else {
      uVar7 = FUN_04824428();
      if ((uVar7 & 1) == 0) {
        uVar7 = FUN_04824428();
        if ((uVar7 & 1) == 0) {
          uVar7 = FUN_04824428();
          if ((uVar7 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_092a5a90 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            lVar12 = FUN_04822cb4(0);
            if ((lVar12 == 0) || (FUN_04822d3c(), unaff_x20 == 0)) goto LAB_04937eac;
            FUN_048bd380();
            goto LAB_04937b6c;
          }
          uVar7 = FUN_04824428();
          if ((uVar7 & 1) == 0) {
            uVar7 = FUN_04824428();
            if ((uVar7 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_092a5c48 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              lVar12 = FUN_0482313c(0);
              if ((lVar12 == 0) || (FUN_048231c4(), unaff_x20 == 0)) goto LAB_04937eac;
              FUN_048bd044();
              goto LAB_04937b6c;
            }
            uVar7 = FUN_04824428();
            if ((uVar7 & 1) == 0) {
              uVar7 = FUN_04824428();
              if ((uVar7 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_092ac9c0 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                lVar12 = FUN_04822534(0);
                if ((lVar12 == 0) || (FUN_048225bc(), unaff_x20 == 0)) goto LAB_04937eac;
                FUN_048bd16c();
                goto LAB_04937b6c;
              }
              uVar7 = FUN_04824428();
              if ((uVar7 & 1) == 0) {
                uVar7 = FUN_04824428();
                if ((uVar7 & 1) == 0) {
                  uVar7 = FUN_04824428();
                  if ((uVar7 & 1) == 0) goto LAB_04937b6c;
                  if (*(int *)(*(long *)PTR_DAT_092b2dc0 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  if (DAT_0988a1e4 == '\0') {
                    FUN_04077588(PTR_DAT_092b2dc0);
                    DAT_0988a1e4 = '\x01';
                  }
                  lVar12 = *(long *)PTR_DAT_092b2dc0;
                  if (*(int *)(lVar12 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar12 = *(long *)PTR_DAT_092b2dc0;
                  }
                  if ((**(long **)(lVar12 + 0xb8) == 0) || (uVar8 = FUN_0492e774(), unaff_x20 == 0))
                  goto LAB_04937eac;
                  *(undefined8 *)(unaff_x20 + 0x40) = uVar8;
                  puVar10 = (undefined8 *)(unaff_x20 + 0x40);
                }
                else {
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  lVar12 = FUN_0481e0d4(0);
                  if ((lVar12 == 0) || (uVar8 = FUN_0481e15c(), unaff_x20 == 0)) goto LAB_04937eac;
                  *(undefined8 *)(unaff_x20 + 0x70) = uVar8;
                  puVar10 = (undefined8 *)(unaff_x20 + 0x70);
                }
              }
              else {
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                lVar12 = FUN_0481e0d4(0);
                if (lVar12 == 0) goto LAB_04937eac;
                uVar8 = FUN_0481e15c();
                if (*(int *)(*(long *)PTR_DAT_092b0288 + 0xe4) == 0) {
                  thunk_FUN_040d65a8(*(long *)PTR_DAT_092b0288);
                }
                uVar8 = FUN_04871b34(uVar8,0);
                if (unaff_x20 == 0) goto LAB_04937eac;
                *(undefined8 *)(unaff_x20 + 0x58) = uVar8;
                puVar10 = (undefined8 *)(unaff_x20 + 0x58);
              }
            }
            else {
              lVar12 = FUN_0490b438(0);
              if ((lVar12 == 0) || (uVar8 = FUN_0490b4c0(), unaff_x20 == 0)) goto LAB_04937eac;
              *(undefined8 *)(unaff_x20 + 0x38) = uVar8;
              puVar10 = (undefined8 *)(unaff_x20 + 0x38);
            }
          }
          else {
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            lVar12 = FUN_0481e0d4(0);
            if ((lVar12 == 0) || (uVar8 = FUN_0481e15c(), unaff_x20 == 0)) goto LAB_04937eac;
            *(undefined8 *)(unaff_x20 + 0x20) = uVar8;
            puVar10 = (undefined8 *)(unaff_x20 + 0x20);
          }
        }
        else {
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          lVar12 = FUN_0481e0d4(0);
          if ((lVar12 == 0) || (uVar8 = FUN_0481e15c(), unaff_x20 == 0)) goto LAB_04937eac;
          *(undefined8 *)(unaff_x20 + 0x18) = uVar8;
          puVar10 = (undefined8 *)(unaff_x20 + 0x18);
        }
LAB_04937ac0:
        thunk_FUN_040ec700(puVar10,uVar8);
      }
      else {
        if (unaff_x20 == 0) {
LAB_04937eac:
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar12 = *(long *)(unaff_x20 + 0x10);
        if (lVar12 == 0) {
          uVar8 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285898);
          FUN_05c26520(uVar8,*(undefined8 *)puVar2);
          *(undefined8 *)(unaff_x20 + 0x10) = uVar8;
          thunk_FUN_040ec700(unaff_x20 + 0x10,uVar8);
          lVar12 = *(long *)(unaff_x20 + 0x10);
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        lVar9 = FUN_0481e0d4(0);
        if ((lVar9 == 0) || (uVar8 = FUN_0481e15c(), lVar12 == 0)) goto LAB_04937eac;
        lVar9 = *(long *)(lVar12 + 0x10);
        lVar11 = *(long *)puVar3;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_04937eac;
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
          puVar10 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
          *puVar10 = uVar8;
          goto LAB_04937ac0;
        }
        FUN_05c26d88(lVar12,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
LAB_04937b6c:
    uVar7 = (**(code **)(*unaff_x19 + 0x1a8))();
  } while( true );
}


