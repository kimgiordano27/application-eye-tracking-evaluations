/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_send_notification_t_session_handle_get
ENTRY_POINT: 0814a23c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_send_notification_t_session_handle_get
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  int *unaff_x19;
  long unaff_x20;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000008;
  
  FUN_03c8f898(PTR_DAT_08f03eb0);
  FUN_03c8f898(PTR_DAT_08f035c0);
  FUN_03c8f898(PTR_DAT_08f03598);
  FUN_03c8f898(PTR_DAT_08f03530);
  FUN_03c8f898(PTR_DAT_08f03eb8);
  FUN_03c8f898(PTR_DAT_08f03e88);
  FUN_03c8f898(PTR_DAT_08f03e90);
  FUN_03c8f898(PTR_DAT_08f03e98);
  *(undefined1 *)(unaff_x20 + 0xee6) = 1;
  puVar2 = PTR_DAT_08f03598;
  puVar1 = PTR_DAT_08f03530;
  in_stack_00000008 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 8);
    unaff_x19[8] = 0;
    unaff_x19[9] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_08f03530 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (DAT_09428eee == '\0') {
      FUN_03c8f898(PTR_DAT_08f03530);
      DAT_09428eee = '\x01';
    }
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar3 = *(long *)puVar1;
    }
    plVar7 = (long *)**(undefined8 **)(lVar3 + 0xb8);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08f03eb8) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto FUN_0814a37c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)PTR_DAT_08f03eb8,0);
FUN_0814a37c:
    lVar3 = (*(code *)*puVar4)(plVar7,puVar4[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000008 = FUN_05c0e2e0(lVar3,*(undefined8 *)PTR_DAT_08f03e98);
    uVar5 = FUN_05ac7f04(&stack0x00000008,*(undefined8 *)PTR_DAT_08f03e90);
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 8) = in_stack_00000008;
      thunk_FUN_03d233cc(unaff_x19 + 8,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_042de4f8(unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  auVar8 = FUN_05ac7f48(&stack0x00000008,*(undefined8 *)PTR_DAT_08f03e88);
  *unaff_x19 = -2;
  puVar1 = PTR_DAT_08f035c0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_063c9024(unaff_x19 + 2,auVar8._0_8_,auVar8._8_8_,*(undefined8 *)puVar1);
  return;
}


