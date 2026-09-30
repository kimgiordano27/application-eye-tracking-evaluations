/*
FUNCTION_NAME: OVR.OpenVR.IVRNotifications._CreateNotification$$EndInvoke
ENTRY_POINT: 0562be04
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5
*/


void OVR_OpenVR_IVRNotifications__CreateNotification__EndInvoke(void)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 *puVar6;
  long unaff_x20;
  undefined8 *puVar7;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *puVar8;
  long unaff_x23;
  undefined8 *puVar9;
  undefined8 *unaff_x24;
  long unaff_x25;
  
  puVar9 = *(undefined8 **)(unaff_x23 + 0x300);
  puVar7 = *(undefined8 **)(unaff_x20 + 0x308);
  puVar6 = *(undefined8 **)(unaff_x19 + 0x310);
  puVar8 = *(undefined8 **)(unaff_x22 + 0x9d8);
  if ((*(byte *)(unaff_x25 + 0xacd) & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0ff60);
    FUN_02d965b8(System_Func<bool,_bool,_float,_bool>_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fb9d8);
    FUN_02d965b8(System_Func<bool,_bool,_bool,_float>_TypeInfo);
    FUN_02d965b8(System_Func<Assembly,_string,_bool,_Type>_TypeInfo);
    FUN_02d965b8(
                System_Func<CreateBackfillTicketRequest,_string,_Configuration,_Task<Response<CreateBackfillTicketResponse>>>_TypeInfo
                );
    FUN_02d965b8(
                System_Func<ApproveBackfillTicketRequest,_string,_Configuration,_Task<Response<LegacyBackfillTicket>>>_TypeInfo
                );
    FUN_02d965b8(
                System_Func<DeleteBackfillTicketRequest,_string,_Configuration,_Task<Response>>_TypeInfo
                );
    FUN_02d965b8(System_Func<IPEndPoint,_AsyncCallback,_object,_IAsyncResult>_TypeInfo);
    *(undefined1 *)(unaff_x25 + 0xacd) = 1;
  }
  uVar1 = FUN_0631e59c(*unaff_x24,0);
  uVar5 = *puVar9;
  **(undefined4 **)(*unaff_x21 + 0xb8) = uVar1;
  uVar1 = FUN_0631e59c(uVar5,0);
  uVar5 = *puVar7;
  *(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 4) = uVar1;
  uVar1 = FUN_0631e59c(uVar5,0);
  uVar5 = *puVar6;
  *(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 8) = uVar1;
  lVar2 = FUN_02d966a4(uVar5,5);
  lVar3 = FUN_02d966a4(*puVar8,1);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) =
           *(undefined8 *)
            System_Func<CreateBackfillTicketRequest,_string,_Configuration,_Task<Response<CreateBackfillTicketResponse>>>_TypeInfo
      ;
      LeanTween__value();
      if (lVar2 == 0) goto LAB_0562c014;
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
        *(long *)(lVar2 + 0x28) = lVar3;
        LeanTween__value((long *)(lVar2 + 0x28),lVar3);
        lVar3 = FUN_02d966a4(*puVar8,1);
        if (lVar3 == 0) goto LAB_0562c014;
        if (*(int *)(lVar3 + 0x18) != 0) {
          *(undefined8 *)(lVar3 + 0x20) =
               *(undefined8 *)
                System_Func<DeleteBackfillTicketRequest,_string,_Configuration,_Task<Response>>_TypeInfo
          ;
          LeanTween__value();
          if (2 < *(uint *)(lVar2 + 0x18)) {
            *(long *)(lVar2 + 0x30) = lVar3;
            LeanTween__value((long *)(lVar2 + 0x30),lVar3);
            lVar3 = FUN_02d966a4(*puVar8,1);
            if (lVar3 == 0) goto LAB_0562c014;
            if (*(int *)(lVar3 + 0x18) != 0) {
              *(undefined8 *)(lVar3 + 0x20) =
                   *(undefined8 *)
                    System_Func<IPEndPoint,_AsyncCallback,_object,_IAsyncResult>_TypeInfo;
              LeanTween__value();
              if (4 < *(uint *)(lVar2 + 0x18)) {
                *(long *)(lVar2 + 0x40) = lVar3;
                LeanTween__value((long *)(lVar2 + 0x40),lVar3);
                plVar4 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
                *plVar4 = lVar2;
                LeanTween__value(plVar4,lVar2);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
LAB_0562c014:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


