/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_transcribed_message_t_session_handle_set
ENTRY_POINT: 08440600
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08440958) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_transcribed_message_t_session_handle_set
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long unaff_x20;
  long *plVar9;
  undefined8 *unaff_x22;
  undefined8 uVar10;
  
  FUN_06b6dddc();
  FUN_06b6dddc();
  lVar3 = FUN_03d2d394(*unaff_x22,1);
  puVar1 = PTR_DAT_091a1448;
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_091a1448;
      thunk_FUN_03d1023c();
      lVar4 = FUN_03d2d394(*unaff_x22,2);
      if (lVar4 == 0) goto LAB_0844094c;
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar1;
        thunk_FUN_03d1023c((undefined8 *)(lVar4 + 0x20));
        puVar1 = PTR_DAT_091a5a20;
        if (1 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)PTR_DAT_091a85f0;
          uVar5 = thunk_FUN_03d1023c();
          uVar5 = FUN_08432024(uVar5,lVar4);
          uVar6 = FUN_06fd246c(uVar5,0);
          if ((uVar6 & 1) == 0) {
            uVar6 = FUN_06b6dddc();
          }
          uVar10 = *(undefined8 *)puVar1;
          uVar5 = FUN_084320fc(uVar6,lVar3);
          uVar6 = FUN_06fd246c(uVar5,0);
          if ((((uVar6 & 1) == 0) ||
              (uVar6 = thunk_FUN_06fd18b4(uVar10,*(undefined8 *)puVar1,0), (uVar6 & 1) != 0)) ||
             (uVar6 = thunk_FUN_06fd18b4(uVar10,*(undefined8 *)PTR_DAT_091b2d80,0), (uVar6 & 1) != 0
             )) {
            FUN_06b6dddc();
          }
          if (unaff_x20 == 0) {
            return;
          }
          plVar9 = *(long **)(unaff_x20 + 0x28);
          if (plVar9 == (long *)0x0) {
            return;
          }
          lVar3 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar6 != 0) {
            piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_091af380) {
                puVar7 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                goto 
                Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_transcribed_message_t_participant_uri_get
                ;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)PTR_DAT_091af380,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_transcribed_message_t_participant_uri_get:
          plVar9 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
          puVar2 = PTR_DAT_091af388;
          puVar1 = PTR_DAT_091a1508;
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          do {
            lVar3 = *plVar9;
            uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar6 != 0) {
              piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                  puVar7 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_0844083c;
                }
                uVar6 = uVar6 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)puVar1,0);
LAB_0844083c:
            uVar6 = (*(code *)*puVar7)(plVar9,puVar7[1]);
            if ((uVar6 & 1) == 0) goto LAB_084408c4;
            lVar3 = *plVar9;
            uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar6 != 0) {
              piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar7 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_08440898;
                }
                uVar6 = uVar6 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)puVar2,0);
LAB_08440898:
            (*(code *)*puVar7)(plVar9,puVar7[1]);
            FUN_06b6ddc8();
          } while( true );
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d2d550();
  }
LAB_0844094c:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
LAB_084408c4:
  if (plVar9 != (long *)0x0) {
    lVar3 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_091a14e0) {
          puVar7 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_08440920;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)PTR_DAT_091a14e0,0);
LAB_08440920:
    (*(code *)*puVar7)(plVar9,puVar7[1]);
  }
  return;
}


