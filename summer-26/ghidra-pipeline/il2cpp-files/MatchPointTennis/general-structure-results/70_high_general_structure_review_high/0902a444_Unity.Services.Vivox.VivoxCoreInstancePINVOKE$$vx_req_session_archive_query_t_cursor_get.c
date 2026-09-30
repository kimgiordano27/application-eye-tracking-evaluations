/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_archive_query_t_cursor_get
ENTRY_POINT: 0902a444
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0902a8f4) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_archive_query_t_cursor_get
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 uVar10;
  
  uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x22) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0902a48c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_044822ac();
LAB_0902a48c:
  uVar4 = (*(code *)*puVar3)();
  uVar7 = FUN_078b4450(uVar4,0);
  if ((uVar7 & 1) == 0) {
    lVar6 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0902a4f8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac();
LAB_0902a4f8:
    uVar4 = (*(code *)*puVar3)();
    FUN_078a7764(*(undefined8 *)PTR_DAT_09f22d90,uVar4,0);
    if (unaff_x19 == 0) goto LAB_0902a8e8;
    FUN_0744298c();
  }
  if (*(int *)(*(long *)PTR_DAT_09f1e6b8 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_094bc3a0(0);
  puVar1 = PTR_DAT_09f1e5f0;
  if (unaff_x19 != 0) {
    FUN_0744298c();
    FUN_0744298c();
    lVar6 = FUN_04447c90(*(undefined8 *)puVar1,1);
    puVar2 = PTR_DAT_09f20e28;
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) != 0) {
        *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_09f20e28;
        thunk_FUN_044bb4b4();
        lVar5 = FUN_04447c90(*(undefined8 *)puVar1,2);
        if (lVar5 == 0) goto LAB_0902a8e8;
        if (*(int *)(lVar5 + 0x18) != 0) {
          *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)puVar2;
          thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x20));
          puVar1 = PTR_DAT_09f20c90;
          if (1 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)PTR_DAT_09fb9e28;
            uVar4 = thunk_FUN_044bb4b4();
            uVar4 = FUN_090270c8(uVar4,lVar5);
            uVar7 = FUN_078b4450(uVar4,0);
            if ((uVar7 & 1) == 0) {
              uVar7 = FUN_0744298c();
            }
            uVar10 = *(undefined8 *)puVar1;
            uVar4 = FUN_090271a0(uVar7,lVar6);
            uVar7 = FUN_078b4450(uVar4,0);
            if ((((uVar7 & 1) == 0) ||
                (uVar7 = thunk_FUN_078b3114(uVar10,*(undefined8 *)puVar1,0), (uVar7 & 1) != 0)) ||
               (uVar7 = thunk_FUN_078b3114(uVar10,*(undefined8 *)PTR_DAT_09f22ec0,0),
               (uVar7 & 1) != 0)) {
              FUN_0744298c();
            }
            if (unaff_x20 == 0) {
              return;
            }
            plVar9 = *(long **)(unaff_x20 + 0x28);
            if (plVar9 == (long *)0x0) {
              return;
            }
            lVar6 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f2bbb0) {
                  puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_0902a760;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar3 = (undefined8 *)FUN_044822ac(plVar9,*(long *)PTR_DAT_09f2bbb0,0);
LAB_0902a760:
            plVar9 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
            puVar2 = PTR_DAT_09f2bbb8;
            puVar1 = PTR_DAT_09f1f018;
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            do {
              lVar6 = *plVar9;
              uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                    puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_0902a7d8;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar3 = (undefined8 *)FUN_044822ac(plVar9,*(long *)puVar1,0);
LAB_0902a7d8:
              uVar7 = (*(code *)*puVar3)(plVar9,puVar3[1]);
              if ((uVar7 & 1) == 0) goto LAB_0902a860;
              lVar6 = *plVar9;
              uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                    puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_0902a834;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar3 = (undefined8 *)FUN_044822ac(plVar9,*(long *)puVar2,0);
LAB_0902a834:
              (*(code *)*puVar3)(plVar9,puVar3[1]);
              FUN_07442978();
            } while( true );
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
  }
LAB_0902a8e8:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
LAB_0902a860:
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0902a8bc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar9,*(long *)PTR_DAT_09f1f008,0);
LAB_0902a8bc:
    (*(code *)*puVar3)(plVar9,puVar3[1]);
  }
  return;
}


