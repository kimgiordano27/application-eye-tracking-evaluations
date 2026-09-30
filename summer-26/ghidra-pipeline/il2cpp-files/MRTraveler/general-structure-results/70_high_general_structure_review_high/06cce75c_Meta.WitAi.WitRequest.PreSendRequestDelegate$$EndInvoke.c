/*
FUNCTION_NAME: Meta.WitAi.WitRequest.PreSendRequestDelegate$$EndInvoke
ENTRY_POINT: 06cce75c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Meta_WitAi_WitRequest_PreSendRequestDelegate__EndInvoke(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long *unaff_x19;
  int unaff_w20;
  int iVar7;
  long *unaff_x22;
  ulong unaff_x23;
  int iVar8;
  
  uVar6 = FUN_085c8064(0);
  FUN_085c808c();
  if (unaff_x22 != (long *)0x0) {
    iVar3 = (**(code **)(*unaff_x22 + 0x188))();
    if (DAT_094100b7 == '\0') {
      FUN_03c8f898(PTR_DAT_08e6a6b8);
      DAT_094100b7 = '\x01';
    }
    puVar2 = PTR_DAT_08e6a6b8;
    if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    iVar5 = -0x80000000;
    if ((float)(int)((float)iVar3 * 0.001953125) != INFINITY) {
      iVar5 = (int)((float)iVar3 * 0.001953125);
    }
    iVar3 = (**(code **)(*unaff_x22 + 0x1a8))();
    if (DAT_094100b7 == '\0') {
      FUN_03c8f898(PTR_DAT_08e6a6b8);
      DAT_094100b7 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    iVar1 = -0x80000000;
    if ((float)(int)((float)iVar3 * 0.001953125) != INFINITY) {
      iVar1 = (int)((float)iVar3 * 0.001953125);
    }
    if ((iVar5 == 0) || (iVar1 == 0)) {
      if (4 < unaff_w20) {
        if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_085a3c50(*(undefined8 *)PTR_DAT_08e8b3b0,0);
      }
      iVar3 = (**(code **)(*unaff_x22 + 0x188))();
      iVar5 = (**(code **)(*unaff_x22 + 0x1a8))();
      if (unaff_x19 != (long *)0x0) {
        FUN_085c4574(0,0,(float)iVar3,(float)iVar5);
        FUN_085c808c(uVar6,0);
        goto LAB_06ccea30;
      }
    }
    else {
      if (4 < unaff_w20) {
        if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_085a3c50(*(undefined8 *)PTR_DAT_08e8b3b8,0);
      }
      if ((unaff_x23 & 1) == 0) {
        if (0 < iVar5) {
          iVar3 = 0;
          do {
            if (0 < iVar1) {
              if (unaff_x19 == (long *)0x0) goto LAB_06cceac0;
              iVar7 = 0;
              iVar8 = iVar1;
              do {
                FUN_085c4574((float)(iVar3 << 9),(float)iVar7,0x44000000,0x44000000);
                iVar8 = iVar8 + -1;
                iVar7 = iVar7 + 0x200;
              } while (iVar8 != 0);
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 != iVar5);
        }
      }
      else if (0 < iVar5) {
        iVar3 = 0;
        do {
          if (0 < iVar1) {
            iVar8 = -0x200;
            iVar7 = iVar1;
            do {
              iVar4 = (**(code **)(*unaff_x22 + 0x1a8))();
              if (unaff_x19 == (long *)0x0) goto LAB_06cceac0;
              FUN_085c4574((float)(iVar3 << 9),(float)(iVar4 + iVar8),0x44000000,0x44000000);
              iVar7 = iVar7 + -1;
              iVar8 = iVar8 + -0x200;
            } while (iVar7 != 0);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 != iVar5);
      }
      FUN_085c808c(uVar6,0);
      if (unaff_x19 != (long *)0x0) {
LAB_06ccea30:
        FUN_085c4400();
        if (((4 < unaff_w20) && (iVar3 = (**(code **)(*unaff_x19 + 0x1a8))(), iVar3 < 0x11)) &&
           (iVar3 = (**(code **)(*unaff_x19 + 0x188))(), iVar3 < 0x11)) {
          FUN_06cceac4();
          return;
        }
        return;
      }
    }
  }
LAB_06cceac0:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


