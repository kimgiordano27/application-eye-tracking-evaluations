/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.Vector3f>
ENTRY_POINT: 049377f8
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


long System_Array__Empty<OVRPlugin_Vector3f>(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar16;
  long lVar17;
  
  puVar16 = *(undefined8 **)(unaff_x21 + 0xef8);
  if ((*(byte *)(unaff_x20 + 0x400) & 1) == 0) {
    FUN_04077588(PTR_DAT_092a5a90);
    FUN_04077588(PTR_DAT_092a5c48);
    FUN_04077588(PTR_DAT_092858c0);
    FUN_04077588(PTR_DAT_092858a0);
    FUN_04077588(PTR_DAT_09285898);
    FUN_04077588(PTR_DAT_092ac9c0);
    FUN_04077588(PTR_DAT_092b2dc0);
    FUN_04077588(PTR_DAT_092b4ef8);
    FUN_04077588(PTR_DAT_092b0288);
    FUN_04077588(PTR_DAT_092a5a98);
    FUN_04077588(PTR_DAT_092b4f00);
    FUN_04077588(PTR_DAT_092b04e0);
    FUN_04077588(PTR_DAT_092b04d8);
    FUN_04077588(PTR_DAT_092b0520);
    FUN_04077588(PTR_DAT_092b07a0);
    FUN_04077588(PTR_DAT_092b3238);
    FUN_04077588(PTR_DAT_092b2dc8);
    FUN_04077588(PTR_DAT_092b2b80);
    FUN_04077588(PTR_DAT_0928d470);
    FUN_04077588(PTR_DAT_092b04d0);
    *(undefined1 *)(unaff_x20 + 0x400) = 1;
  }
  lVar11 = thunk_FUN_040b4efc(*puVar16);
  thunk_FUN_048bd288(lVar11,0);
  if (param_2 != (long *)0x0) {
    iVar8 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
    uVar12 = (**(code **)(*param_2 + 0x1e8))(param_2,*(undefined8 *)(*param_2 + 0x1f0));
    iVar1 = iVar8 + 3;
    if ((uVar12 & 1) == 0) {
      iVar1 = iVar8 + 1;
    }
    uVar12 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
    puVar7 = PTR_DAT_092b4f00;
    puVar6 = PTR_DAT_092b0520;
    puVar5 = PTR_DAT_092b04e0;
    puVar4 = PTR_DAT_092a5a98;
    puVar3 = PTR_DAT_092858c0;
    puVar2 = PTR_DAT_092858a0;
    do {
      if ((uVar12 & 1) == 0) {
        return lVar11;
      }
      uVar12 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
      if (((uVar12 & 1) == 0) && (uVar12 = FUN_04825338(param_2,0), (uVar12 & 1) == 0)) {
        uVar12 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
        if (((uVar12 & 1) != 0) &&
           (iVar9 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0)),
           iVar9 < iVar8)) {
          return lVar11;
        }
      }
      else {
        uVar12 = FUN_04824428(param_2,*(undefined8 *)puVar6,iVar1,0);
        if ((uVar12 & 1) == 0) {
          uVar12 = FUN_04824428(param_2,*(undefined8 *)puVar5,iVar1,0);
          if ((uVar12 & 1) == 0) {
            uVar12 = FUN_04824428(param_2,*(undefined8 *)puVar7,iVar1,0);
            if ((uVar12 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_092a5a90 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              lVar17 = FUN_04822cb4(0);
              if ((lVar17 != 0) && (uVar10 = FUN_04822d3c(lVar17,param_2,0), lVar11 != 0)) {
                FUN_048bd380(lVar11,uVar10 & 1,0);
                goto LAB_04937b6c;
              }
              break;
            }
            uVar12 = FUN_04824428(param_2,*(undefined8 *)PTR_DAT_0928d470,iVar1,0);
            if ((uVar12 & 1) == 0) {
              uVar12 = FUN_04824428(param_2,*(undefined8 *)PTR_DAT_092b2dc8,iVar1,0);
              if ((uVar12 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_092a5c48 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                }
                lVar17 = FUN_0482313c(0);
                if ((lVar17 != 0) && (uVar13 = FUN_048231c4(lVar17,param_2,0), lVar11 != 0)) {
                  FUN_048bd044(lVar11,uVar13,0);
                  goto LAB_04937b6c;
                }
                break;
              }
              uVar12 = FUN_04824428(param_2,*(undefined8 *)PTR_DAT_092b2b80,iVar1,0);
              if ((uVar12 & 1) == 0) {
                uVar12 = FUN_04824428(param_2,*(undefined8 *)PTR_DAT_092b04d0,iVar1,0);
                if ((uVar12 & 1) != 0) {
                  if (*(int *)(*(long *)PTR_DAT_092ac9c0 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  lVar17 = FUN_04822534(0);
                  if ((lVar17 != 0) && (uVar13 = FUN_048225bc(lVar17,param_2,0), lVar11 != 0)) {
                    FUN_048bd16c(lVar11,uVar13,0);
                    goto LAB_04937b6c;
                  }
                  break;
                }
                uVar12 = FUN_04824428(param_2,*(undefined8 *)PTR_DAT_092b04d8,iVar1,0);
                if ((uVar12 & 1) == 0) {
                  uVar12 = FUN_04824428(param_2,*(undefined8 *)PTR_DAT_092b3238,iVar1,0);
                  if ((uVar12 & 1) == 0) {
                    uVar12 = FUN_04824428(param_2,*(undefined8 *)PTR_DAT_092b07a0,iVar1,0);
                    if ((uVar12 & 1) == 0) goto LAB_04937b6c;
                    if (*(int *)(*(long *)PTR_DAT_092b2dc0 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                    }
                    if (DAT_0988a1e4 == '\0') {
                      FUN_04077588(PTR_DAT_092b2dc0);
                      DAT_0988a1e4 = '\x01';
                    }
                    lVar17 = *(long *)PTR_DAT_092b2dc0;
                    if (*(int *)(lVar17 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                      lVar17 = *(long *)PTR_DAT_092b2dc0;
                    }
                    if ((**(long **)(lVar17 + 0xb8) == 0) ||
                       (uVar13 = FUN_0492e774(lVar17,param_2), lVar11 == 0)) break;
                    *(undefined8 *)(lVar11 + 0x40) = uVar13;
                    puVar16 = (undefined8 *)(lVar11 + 0x40);
                  }
                  else {
                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                    }
                    lVar17 = FUN_0481e0d4(0);
                    if ((lVar17 == 0) || (uVar13 = FUN_0481e15c(lVar17,param_2,0), lVar11 == 0))
                    break;
                    *(undefined8 *)(lVar11 + 0x70) = uVar13;
                    puVar16 = (undefined8 *)(lVar11 + 0x70);
                  }
                }
                else {
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  lVar17 = FUN_0481e0d4(0);
                  if (lVar17 == 0) break;
                  uVar13 = FUN_0481e15c(lVar17,param_2,0);
                  if (*(int *)(*(long *)PTR_DAT_092b0288 + 0xe4) == 0) {
                    thunk_FUN_040d65a8(*(long *)PTR_DAT_092b0288);
                  }
                  uVar13 = FUN_04871b34(uVar13,0);
                  if (lVar11 == 0) break;
                  *(undefined8 *)(lVar11 + 0x58) = uVar13;
                  puVar16 = (undefined8 *)(lVar11 + 0x58);
                }
              }
              else {
                lVar17 = FUN_0490b438(0);
                if ((lVar17 == 0) || (uVar13 = FUN_0490b4c0(lVar17,param_2,0), lVar11 == 0)) break;
                *(undefined8 *)(lVar11 + 0x38) = uVar13;
                puVar16 = (undefined8 *)(lVar11 + 0x38);
              }
            }
            else {
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              lVar17 = FUN_0481e0d4(0);
              if ((lVar17 == 0) || (uVar13 = FUN_0481e15c(lVar17,param_2,0), lVar11 == 0)) break;
              *(undefined8 *)(lVar11 + 0x20) = uVar13;
              puVar16 = (undefined8 *)(lVar11 + 0x20);
            }
          }
          else {
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            lVar17 = FUN_0481e0d4(0);
            if ((lVar17 == 0) || (uVar13 = FUN_0481e15c(lVar17,param_2,0), lVar11 == 0)) break;
            *(undefined8 *)(lVar11 + 0x18) = uVar13;
            puVar16 = (undefined8 *)(lVar11 + 0x18);
          }
        }
        else {
          if (lVar11 == 0) break;
          lVar17 = *(long *)(lVar11 + 0x10);
          if (lVar17 == 0) {
            uVar13 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285898);
            FUN_05c26520(uVar13,*(undefined8 *)puVar2);
            *(undefined8 *)(lVar11 + 0x10) = uVar13;
            thunk_FUN_040ec700(lVar11 + 0x10,uVar13);
            lVar17 = *(long *)(lVar11 + 0x10);
          }
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          lVar14 = FUN_0481e0d4(0);
          if ((lVar14 == 0) || (uVar13 = FUN_0481e15c(lVar14,param_2,0), lVar17 == 0)) break;
          lVar14 = *(long *)(lVar17 + 0x10);
          lVar15 = *(long *)puVar3;
          *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
          if (lVar14 == 0) break;
          uVar10 = *(uint *)(lVar17 + 0x18);
          if (*(uint *)(lVar14 + 0x18) <= uVar10) {
            FUN_05c26d88(lVar17,uVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            goto LAB_04937b6c;
          }
          *(uint *)(lVar17 + 0x18) = uVar10 + 1;
          puVar16 = (undefined8 *)(lVar14 + (long)(int)uVar10 * 8 + 0x20);
          *puVar16 = uVar13;
        }
        thunk_FUN_040ec700(puVar16,uVar13);
      }
LAB_04937b6c:
      uVar12 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


