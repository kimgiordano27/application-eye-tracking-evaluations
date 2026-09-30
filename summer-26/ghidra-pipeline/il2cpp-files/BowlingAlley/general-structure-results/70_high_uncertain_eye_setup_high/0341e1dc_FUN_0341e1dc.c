/*
FUNCTION_NAME: FUN_0341e1dc
ENTRY_POINT: 0341e1dc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0341e5e4) */

void FUN_0341e1dc(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  
  if ((DAT_076cdeba & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(PTR_DAT_0727a788);
    thunk_FUN_032e1da0(PTR_DAT_07279f60);
    thunk_FUN_032e1da0(PTR_DAT_0727a790);
    thunk_FUN_032e1da0(PTR_DAT_0727a180);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(PTR_DAT_0727a798);
    thunk_FUN_032e1da0(PTR_DAT_0727a190);
    thunk_FUN_032e1da0(PTR_DAT_0727a198);
    DAT_076cdeba = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar7 = OVRPlugin_OVRP_1_58_0___cctor(param_2,0);
    lVar12 = *param_2;
    if ((uVar7 & 1) == 0) {
      lVar12 = (**(code **)(lVar12 + 0x4d8))(param_2,*(undefined8 *)(lVar12 + 0x4e0));
      if (lVar12 != 0) {
        plVar9 = (long *)FUN_04efafb4(lVar12,*(undefined8 *)PTR_DAT_0727a788);
        puVar6 = PTR_DAT_0727a790;
        puVar5 = PTR_DAT_0727a198;
        puVar4 = PTR_DAT_0727a190;
        puVar3 = PTR_DAT_0727a180;
        puVar2 = PTR_DAT_072798f8;
        puVar1 = PTR_DAT_072794f0;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        do {
          lVar12 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar7 != 0) {
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0341e3d0;
              }
              uVar7 = uVar7 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar7 != 0);
          }
          puVar10 = (undefined8 *)FUN_032937ac(plVar9,*(long *)puVar3,0);
LAB_0341e3d0:
          uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if ((uVar7 & 1) == 0) {
            if (plVar9 == (long *)0x0) {
              return;
            }
            lVar12 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar7 == 0) goto LAB_0341e580;
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            goto LAB_0341e568;
          }
          lVar12 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar7 != 0) {
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar6) {
                puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0341e42c;
              }
              uVar7 = uVar7 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar7 != 0);
          }
          puVar10 = (undefined8 *)FUN_032937ac(plVar9,*(long *)puVar6,0);
LAB_0341e42c:
          lVar12 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if (*(long *)(lVar12 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar7 = FUN_057aa36c(*(long *)(lVar12 + 0x68),*(undefined8 *)puVar4,0);
          if ((uVar7 & 1) == 0) {
LAB_0341e4c0:
            if (*(long *)(lVar12 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            uVar7 = FUN_057aa36c(*(long *)(lVar12 + 0x68),*(undefined8 *)puVar5,0);
            if ((uVar7 & 1) != 0) {
              uVar8 = *(undefined8 *)(param_1 + 0x38);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              uVar7 = FUN_06be9890(uVar8,0,0);
              if ((uVar7 & 1) != 0) {
                plVar11 = *(long **)(param_1 + 0x38);
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                (**(code **)(*plVar11 + 0x558))
                          (plVar11,*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(*plVar11 + 0x560))
                ;
                uVar8 = *(undefined8 *)(lVar12 + 0x38);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_032cd7c0();
                }
                FUN_06bb23f0(uVar8,0);
              }
            }
          }
          else {
            uVar8 = *(undefined8 *)(param_1 + 0x30);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            uVar7 = FUN_06be9890(uVar8,0,0);
            if ((uVar7 & 1) == 0) goto LAB_0341e4c0;
            plVar11 = *(long **)(param_1 + 0x30);
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            (**(code **)(*plVar11 + 0x558))
                      (plVar11,*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(*plVar11 + 0x560));
            uVar8 = *(undefined8 *)(lVar12 + 0x38);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            FUN_06bb23f0(uVar8,0);
          }
        } while( true );
      }
    }
    else {
      lVar12 = (**(code **)(lVar12 + 0x178))(param_2,*(undefined8 *)(lVar12 + 0x180));
      if (lVar12 != 0) {
        uVar8 = FUN_057a19ac(*(undefined8 *)PTR_DAT_0727a798,*(undefined8 *)(lVar12 + 0x18),0);
        if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
        }
        FUN_06bb2a00(uVar8,0);
        if (*(long *)(param_1 + 0x20) != 0) {
          FUN_06e0380c(*(long *)(param_1 + 0x20),0,0);
          if (*(long *)(param_1 + 0x28) != 0) {
            FUN_06e0380c(*(long *)(param_1 + 0x28),0,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar13 = piVar13 + 4;
    if (uVar7 == 0) break;
LAB_0341e568:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07279f60) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0341e59c;
    }
  }
LAB_0341e580:
  puVar10 = (undefined8 *)FUN_032937ac(plVar9,*(long *)PTR_DAT_07279f60,0);
LAB_0341e59c:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  return;
}


