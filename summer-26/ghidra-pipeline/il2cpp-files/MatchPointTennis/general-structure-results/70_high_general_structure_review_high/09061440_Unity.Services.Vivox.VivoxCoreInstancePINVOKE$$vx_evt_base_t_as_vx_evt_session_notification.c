/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_base_t_as_vx_evt_session_notification
ENTRY_POINT: 09061440
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x090617b0) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_base_t_as_vx_evt_session_notification
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  long unaff_x20;
  long *plVar8;
  long unaff_x21;
  undefined8 *unaff_x23;
  undefined8 uVar9;
  
  puVar1 = PTR_DAT_09f20e28;
  if (param_1 == 0) {
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_base_t_as_vx_evt_transcribed_message:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)PTR_DAT_09f20e28;
    thunk_FUN_044bb4b4();
    lVar3 = FUN_04447c90(*unaff_x23,2);
    if (lVar3 == 0)
    goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_base_t_as_vx_evt_transcribed_message;
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar1;
      thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x20));
      puVar1 = PTR_DAT_09f20c90;
      if (1 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)PTR_DAT_09fb9e28;
        uVar4 = thunk_FUN_044bb4b4();
        uVar4 = FUN_0905ad54(uVar4,lVar3);
        uVar5 = FUN_078b4450(uVar4,0);
        if ((uVar5 & 1) == 0) {
          uVar5 = FUN_0744298c();
        }
        uVar9 = *(undefined8 *)puVar1;
        uVar4 = FUN_0905ae2c(uVar5,param_1);
        uVar5 = FUN_078b4450(uVar4,0);
        if ((((uVar5 & 1) == 0) ||
            (uVar5 = thunk_FUN_078b3114(uVar9,*(undefined8 *)puVar1,0), (uVar5 & 1) != 0)) ||
           (uVar5 = thunk_FUN_078b3114(uVar9,*(undefined8 *)PTR_DAT_09f22ec0,0), (uVar5 & 1) != 0))
        {
          FUN_0744298c();
        }
        uVar5 = FUN_078b4450(*(undefined8 *)(unaff_x21 + 0x10),0);
        if ((uVar5 & 1) == 0) {
          FUN_0744298c();
        }
        uVar5 = FUN_078b4450(*(undefined8 *)(unaff_x21 + 0x18),0);
        if ((uVar5 & 1) == 0) {
          FUN_0744298c();
        }
        if (unaff_x20 == 0) {
          return;
        }
        plVar8 = *(long **)(unaff_x20 + 0x28);
        if (plVar8 == (long *)0x0) {
          return;
        }
        lVar3 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2bbb0) {
              puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0906161c;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_044822ac(plVar8,*(long *)PTR_DAT_09f2bbb0,0);
LAB_0906161c:
        plVar8 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
        puVar2 = PTR_DAT_09f2bbb8;
        puVar1 = PTR_DAT_09f1f018;
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        do {
          lVar3 = *plVar8;
          uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar5 != 0) {
            piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_09061694;
              }
              uVar5 = uVar5 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_044822ac(plVar8,*(long *)puVar1,0);
LAB_09061694:
          uVar5 = (*(code *)*puVar6)(plVar8,puVar6[1]);
          if ((uVar5 & 1) == 0) goto LAB_0906171c;
          lVar3 = *plVar8;
          uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar5 != 0) {
            piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_090616f0;
              }
              uVar5 = uVar5 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_044822ac(plVar8,*(long *)puVar2,0);
LAB_090616f0:
          (*(code *)*puVar6)(plVar8,puVar6[1]);
          FUN_07442978();
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
LAB_0906171c:
  if (plVar8 != (long *)0x0) {
    lVar3 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_09061778;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_044822ac(plVar8,*(long *)PTR_DAT_09f1f008,0);
LAB_09061778:
    (*(code *)*puVar6)(plVar8,puVar6[1]);
  }
  return;
}


