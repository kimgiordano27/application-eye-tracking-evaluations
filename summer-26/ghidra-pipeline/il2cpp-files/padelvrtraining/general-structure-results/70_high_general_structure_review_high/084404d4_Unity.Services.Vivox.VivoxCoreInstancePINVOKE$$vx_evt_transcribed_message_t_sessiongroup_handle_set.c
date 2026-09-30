/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_transcribed_message_t_sessiongroup_handle_set
ENTRY_POINT: 084404d4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08440958) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_transcribed_message_t_sessiongroup_handle_set
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 uVar10;
  
  puVar3 = (undefined8 *)FUN_03d8f370();
  uVar4 = (*(code *)*puVar3)();
  uVar5 = FUN_06fd246c(uVar4,0);
  if ((uVar5 & 1) == 0) {
    lVar7 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0844055c;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370();
LAB_0844055c:
    uVar4 = (*(code *)*puVar3)();
    FUN_06fc5244(*(undefined8 *)PTR_DAT_091a8618,uVar4,0);
    if (unaff_x19 == 0) goto LAB_0844094c;
    FUN_06b6dddc();
  }
  if (*(int *)(*(long *)PTR_DAT_091a0bf0 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_08a08fd8(0);
  puVar2 = PTR_DAT_091a2770;
  if (unaff_x19 != 0) {
    FUN_06b6dddc();
    FUN_06b6dddc();
    lVar7 = FUN_03d2d394(*(undefined8 *)puVar2,1);
    puVar1 = PTR_DAT_091a1448;
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) != 0) {
        *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_091a1448;
        thunk_FUN_03d1023c();
        lVar6 = FUN_03d2d394(*(undefined8 *)puVar2,2);
        if (lVar6 == 0) goto LAB_0844094c;
        if (*(int *)(lVar6 + 0x18) != 0) {
          *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar1;
          thunk_FUN_03d1023c((undefined8 *)(lVar6 + 0x20));
          puVar2 = PTR_DAT_091a5a20;
          if (1 < *(uint *)(lVar6 + 0x18)) {
            *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_091a85f0;
            uVar4 = thunk_FUN_03d1023c();
            uVar4 = FUN_08432024(uVar4,lVar6);
            uVar5 = FUN_06fd246c(uVar4,0);
            if ((uVar5 & 1) == 0) {
              uVar5 = FUN_06b6dddc();
            }
            uVar10 = *(undefined8 *)puVar2;
            uVar4 = FUN_084320fc(uVar5,lVar7);
            uVar5 = FUN_06fd246c(uVar4,0);
            if ((((uVar5 & 1) == 0) ||
                (uVar5 = thunk_FUN_06fd18b4(uVar10,*(undefined8 *)puVar2,0), (uVar5 & 1) != 0)) ||
               (uVar5 = thunk_FUN_06fd18b4(uVar10,*(undefined8 *)PTR_DAT_091b2d80,0),
               (uVar5 & 1) != 0)) {
              FUN_06b6dddc();
            }
            if (unaff_x20 == 0) {
              return;
            }
            plVar9 = *(long **)(unaff_x20 + 0x28);
            if (plVar9 == (long *)0x0) {
              return;
            }
            lVar7 = *plVar9;
            uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar5 != 0) {
              piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_091af380) {
                  puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                  goto 
                  Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_transcribed_message_t_participant_uri_get
                  ;
                }
                uVar5 = uVar5 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar5 != 0);
            }
            puVar3 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)PTR_DAT_091af380,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_transcribed_message_t_participant_uri_get:
            plVar9 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
            puVar1 = PTR_DAT_091af388;
            puVar2 = PTR_DAT_091a1508;
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            do {
              lVar7 = *plVar9;
              uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar5 != 0) {
                piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                    puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_0844083c;
                  }
                  uVar5 = uVar5 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar5 != 0);
              }
              puVar3 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)puVar2,0);
LAB_0844083c:
              uVar5 = (*(code *)*puVar3)(plVar9,puVar3[1]);
              if ((uVar5 & 1) == 0) goto LAB_084408c4;
              lVar7 = *plVar9;
              uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar5 != 0) {
                piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                    puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_08440898;
                  }
                  uVar5 = uVar5 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar5 != 0);
              }
              puVar3 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)puVar1,0);
LAB_08440898:
              (*(code *)*puVar3)(plVar9,puVar3[1]);
              FUN_06b6ddc8();
            } while( true );
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
  }
LAB_0844094c:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
LAB_084408c4:
  if (plVar9 != (long *)0x0) {
    lVar7 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_091a14e0) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_08440920;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)PTR_DAT_091a14e0,0);
LAB_08440920:
    (*(code *)*puVar3)(plVar9,puVar3[1]);
  }
  return;
}


