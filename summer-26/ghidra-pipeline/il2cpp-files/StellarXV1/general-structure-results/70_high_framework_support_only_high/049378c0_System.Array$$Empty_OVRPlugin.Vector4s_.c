/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.Vector4s>
ENTRY_POINT: 049378c0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array__Empty<OVRPlugin_Vector4s>(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar13;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0x238));
  FUN_04077588(PTR_DAT_092b2dc8);
  FUN_04077588(PTR_DAT_092b2b80);
  FUN_04077588(PTR_DAT_0928d470);
  FUN_04077588(PTR_DAT_092b04d0);
  *(undefined1 *)(unaff_x20 + 0x400) = 1;
  lVar7 = thunk_FUN_040b4efc(*unaff_x21);
  thunk_FUN_048bd288(lVar7,0);
  if (unaff_x19 != (long *)0x0) {
    iVar4 = (**(code **)(*unaff_x19 + 0x198))();
    (**(code **)(*unaff_x19 + 0x1e8))();
    uVar8 = (**(code **)(*unaff_x19 + 0x1a8))();
    puVar3 = PTR_DAT_092a5a98;
    puVar2 = PTR_DAT_092858c0;
    puVar1 = PTR_DAT_092858a0;
    do {
      if ((uVar8 & 1) == 0) {
        return lVar7;
      }
      uVar8 = (**(code **)(*unaff_x19 + 0x1c8))();
      if (((uVar8 & 1) == 0) && (uVar8 = FUN_04825338(), (uVar8 & 1) == 0)) {
        uVar8 = (**(code **)(*unaff_x19 + 0x1d8))();
        if (((uVar8 & 1) != 0) && (iVar5 = (**(code **)(*unaff_x19 + 0x198))(), iVar5 < iVar4)) {
          return lVar7;
        }
      }
      else {
        uVar8 = FUN_04824428();
        if ((uVar8 & 1) == 0) {
          uVar8 = FUN_04824428();
          if ((uVar8 & 1) == 0) {
            uVar8 = FUN_04824428();
            if ((uVar8 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_092a5a90 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              lVar13 = FUN_04822cb4(0);
              if ((lVar13 != 0) && (uVar6 = FUN_04822d3c(), lVar7 != 0)) {
                FUN_048bd380(lVar7,uVar6 & 1,0);
                goto LAB_04937b6c;
              }
              break;
            }
            uVar8 = FUN_04824428();
            if ((uVar8 & 1) == 0) {
              uVar8 = FUN_04824428();
              if ((uVar8 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_092a5c48 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                lVar13 = FUN_0482313c(0);
                if ((lVar13 != 0) && (uVar9 = FUN_048231c4(), lVar7 != 0)) {
                  FUN_048bd044(lVar7,uVar9,0);
                  goto LAB_04937b6c;
                }
                break;
              }
              uVar8 = FUN_04824428();
              if ((uVar8 & 1) == 0) {
                uVar8 = FUN_04824428();
                if ((uVar8 & 1) != 0) {
                  if (*(int *)(*(long *)PTR_DAT_092ac9c0 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  lVar13 = FUN_04822534(0);
                  if ((lVar13 != 0) && (uVar9 = FUN_048225bc(), lVar7 != 0)) {
                    FUN_048bd16c(lVar7,uVar9,0);
                    goto LAB_04937b6c;
                  }
                  break;
                }
                uVar8 = FUN_04824428();
                if ((uVar8 & 1) == 0) {
                  uVar8 = FUN_04824428();
                  if ((uVar8 & 1) == 0) {
                    uVar8 = FUN_04824428();
                    if ((uVar8 & 1) == 0) goto LAB_04937b6c;
                    if (*(int *)(*(long *)PTR_DAT_092b2dc0 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                    }
                    if (DAT_0988a1e4 == '\0') {
                      FUN_04077588(PTR_DAT_092b2dc0);
                      DAT_0988a1e4 = '\x01';
                    }
                    lVar13 = *(long *)PTR_DAT_092b2dc0;
                    if (*(int *)(lVar13 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                      lVar13 = *(long *)PTR_DAT_092b2dc0;
                    }
                    if ((**(long **)(lVar13 + 0xb8) == 0) || (uVar9 = FUN_0492e774(), lVar7 == 0))
                    break;
                    *(undefined8 *)(lVar7 + 0x40) = uVar9;
                    puVar11 = (undefined8 *)(lVar7 + 0x40);
                  }
                  else {
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                    }
                    lVar13 = FUN_0481e0d4(0);
                    if ((lVar13 == 0) || (uVar9 = FUN_0481e15c(), lVar7 == 0)) break;
                    *(undefined8 *)(lVar7 + 0x70) = uVar9;
                    puVar11 = (undefined8 *)(lVar7 + 0x70);
                  }
                }
                else {
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  lVar13 = FUN_0481e0d4(0);
                  if (lVar13 == 0) break;
                  uVar9 = FUN_0481e15c();
                  if (*(int *)(*(long *)PTR_DAT_092b0288 + 0xe4) == 0) {
                    thunk_FUN_040d65a8(*(long *)PTR_DAT_092b0288);
                  }
                  uVar9 = FUN_04871b34(uVar9,0);
                  if (lVar7 == 0) break;
                  *(undefined8 *)(lVar7 + 0x58) = uVar9;
                  puVar11 = (undefined8 *)(lVar7 + 0x58);
                }
              }
              else {
                lVar13 = FUN_0490b438(0);
                if ((lVar13 == 0) || (uVar9 = FUN_0490b4c0(), lVar7 == 0)) break;
                *(undefined8 *)(lVar7 + 0x38) = uVar9;
                puVar11 = (undefined8 *)(lVar7 + 0x38);
              }
            }
            else {
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              lVar13 = FUN_0481e0d4(0);
              if ((lVar13 == 0) || (uVar9 = FUN_0481e15c(), lVar7 == 0)) break;
              *(undefined8 *)(lVar7 + 0x20) = uVar9;
              puVar11 = (undefined8 *)(lVar7 + 0x20);
            }
          }
          else {
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            lVar13 = FUN_0481e0d4(0);
            if ((lVar13 == 0) || (uVar9 = FUN_0481e15c(), lVar7 == 0)) break;
            *(undefined8 *)(lVar7 + 0x18) = uVar9;
            puVar11 = (undefined8 *)(lVar7 + 0x18);
          }
        }
        else {
          if (lVar7 == 0) break;
          lVar13 = *(long *)(lVar7 + 0x10);
          if (lVar13 == 0) {
            uVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285898);
            FUN_05c26520(uVar9,*(undefined8 *)puVar1);
            *(undefined8 *)(lVar7 + 0x10) = uVar9;
            thunk_FUN_040ec700(lVar7 + 0x10,uVar9);
            lVar13 = *(long *)(lVar7 + 0x10);
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          lVar10 = FUN_0481e0d4(0);
          if ((lVar10 == 0) || (uVar9 = FUN_0481e15c(), lVar13 == 0)) break;
          lVar10 = *(long *)(lVar13 + 0x10);
          lVar12 = *(long *)puVar2;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar10 == 0) break;
          uVar6 = *(uint *)(lVar13 + 0x18);
          if (*(uint *)(lVar10 + 0x18) <= uVar6) {
            FUN_05c26d88(lVar13,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            goto LAB_04937b6c;
          }
          *(uint *)(lVar13 + 0x18) = uVar6 + 1;
          puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar6 * 8 + 0x20);
          *puVar11 = uVar9;
        }
        thunk_FUN_040ec700(puVar11,uVar9);
      }
LAB_04937b6c:
      uVar8 = (**(code **)(*unaff_x19 + 0x1a8))();
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


