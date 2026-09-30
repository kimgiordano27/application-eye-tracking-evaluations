/*
FUNCTION_NAME: FUN_01db9bfc
ENTRY_POINT: 01db9bfc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_01db9bfc(void)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x20;
  int unaff_w21;
  int iVar11;
  long unaff_x22;
  int unaff_w23;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
  if (in_stack_00000008._4_1_ != '\0') {
    FUN_0102a860();
  }
  puVar3 = PTR_DAT_0235a788;
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01dba02c to 01eba037 has its CatchHandler @ 01db9fa4 */
    FUN_00fdc52c();
  }
  if ((unaff_w23 == 0xd) || (unaff_w23 == 0)) {
    iVar1 = *(int *)(unaff_x20 + 0x18);
    if (0 < iVar1) {
      iVar11 = 0;
      do {
        plVar4 = (long *)FUN_018985f8();
        if (plVar4 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
          if (((bVar2 <= *(byte *)(*plVar4 + 0x130)) &&
              (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar3)) &&
             ((*(byte *)((long)plVar4 + 0x1a) >> 3 & 1) == 0)) {
            FUN_01898668();
            (**(code **)(*plVar4 + 0x178))(plVar4);
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar1 != iVar11);
      if (0 < iVar1) {
        iVar11 = 0;
        do {
          plVar4 = (long *)FUN_018985f8();
          if (plVar4 != (long *)0x0) {
            FUN_01898668();
            lVar8 = *plVar4;
            plVar6 = plVar4;
            if (lVar8 != *unaff_x29) {
              plVar6 = (long *)0x0;
            }
            if (plVar6 == (long *)0x0) {
              bVar2 = *(byte *)(*(long *)PTR_DAT_0235a790 + 0x130);
              if ((*(byte *)(lVar8 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_0235a790)) {
                lVar8 = *unaff_x26;
                plVar6 = (long *)thunk_FUN_0103ffe0(plVar4,lVar8);
                if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fdc8d0(plVar4,lVar8);
                }
                if (unaff_w21 == 0) {
                  lVar8 = *plVar6;
                  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                  if (uVar9 != 0) {
                    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar10 + -2) == *unaff_x26) {
                        puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                        goto LAB_01db9e30;
                      }
                      uVar9 = uVar9 - 1;
                      piVar10 = piVar10 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_0103c348(plVar6,*unaff_x26,1);
LAB_01db9e30:
                  uVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
                  if ((uVar9 & 1) != 0) {
                    uVar5 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0235a768);
                    FUN_01dbb700(uVar5,plVar6);
                    FUN_01dab44c(uVar5,0);
                    goto LAB_01db9ecc;
                  }
                }
                lVar8 = *plVar6;
                uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar9 != 0) {
                  piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == *unaff_x26) {
                      puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                      goto LAB_01db9ebc;
                    }
                    uVar9 = uVar9 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar9 != 0);
                }
                puVar7 = (undefined8 *)FUN_0103c348(plVar6,*unaff_x26,0);
LAB_01db9ebc:
                (*(code *)*puVar7)(plVar6);
              }
              else {
                (**(code **)(lVar8 + 0x178))(plVar4);
              }
            }
            else {
              lVar8 = *unaff_x27;
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_01022c14();
                lVar8 = *unaff_x27;
              }
              uVar5 = FUN_00fdc2fc(lVar8);
              OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingSupported(plVar6,unaff_w21,uVar5);
            }
          }
LAB_01db9ecc:
          iVar11 = iVar11 + 1;
        } while (iVar11 != iVar1);
      }
    }
    if (DAT_0247da80 == '\0') {
      FUN_00fdc2e4(PTR_DAT_0234bc90);
      DAT_0247da80 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_0234bc90 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
  }
  return;
}


