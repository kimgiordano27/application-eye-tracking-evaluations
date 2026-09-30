/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_chat_history_query_t_time_start_get
ENTRY_POINT: 08147ea4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_17;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_time_start_get
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  int *unaff_x19;
  long unaff_x20;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  FUN_03c8f898(PTR_DAT_08e7e1f8);
  FUN_03c8f898(PTR_DAT_08f03c48);
  *(undefined1 *)(unaff_x20 + 0xec3) = 1;
  puVar1 = PTR_DAT_08e69550;
  in_stack_00000028 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar12 = *(long *)(unaff_x19 + 8);
    lVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f03c48);
    FUN_07145224(lVar4,0);
    plVar9 = (long *)(unaff_x19 + 10);
    *plVar9 = lVar4;
    thunk_FUN_03d233cc(plVar9,lVar4);
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    *(undefined8 *)(*(long *)(unaff_x19 + 10) + 0x20) = *(undefined8 *)(unaff_x19 + 8);
    thunk_FUN_03d233cc();
    puVar2 = PTR_DAT_08e7e1f8;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    *(undefined4 *)(lVar12 + 0x20) = 1;
    lVar4 = *plVar9;
    uVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
    FUN_07bef028(uVar5,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    puVar10 = (undefined8 *)(lVar4 + 0x28);
    *puVar10 = uVar5;
    thunk_FUN_03d233cc(puVar10,uVar5);
    if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar4 = *(long *)(*plVar9 + 0x28);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_07bef030(lVar4,0);
    if (*(long *)(lVar12 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    plVar11 = *(long **)(*(long *)(lVar12 + 0x30) + 0x28);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar4 = *plVar11;
    lVar12 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f03910) {
          puVar10 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto FUN_08147ff8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar10 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08f03910,0);
FUN_08147ff8:
    uVar5 = (*(code *)*puVar10)(plVar11,puVar10[1]);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    puVar10 = (undefined8 *)(lVar12 + 0x10);
    *puVar10 = uVar5;
    thunk_FUN_03d233cc(puVar10);
    lVar4 = *plVar9;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(lVar4 + 0x10) == 0) {
      thunk_FUN_03ce5214(PTR_DAT_08e82d68);
      uVar5 = thunk_FUN_03cf5234();
      uVar6 = thunk_FUN_03ce5214(PTR_DAT_08f03c50);
      FUN_07103730(uVar5,uVar6,0);
      if (*plVar9 != 0) {
        FUN_081472b8(*plVar9,uVar5);
        uVar6 = thunk_FUN_03ce5214(PTR_DAT_08f03c58);
                    /* WARNING: Subroutine does not return */
        FUN_03c8f9fc(uVar5,uVar6);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar12 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar3 = FUN_06959edc(lVar12,*(undefined8 *)PTR_DAT_08f03c40);
    uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6a938);
    FUN_051c0230(uVar5,uVar3,*(undefined8 *)PTR_DAT_08e6aa40);
    *(undefined8 *)(lVar4 + 0x18) = uVar5;
    thunk_FUN_03d233cc((undefined8 *)(lVar4 + 0x18),uVar5);
    lVar4 = *plVar9;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000008 = 0;
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_0814404c(&stack0x00000008,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18));
    FUN_0814408c(&stack0x00000008);
    if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar4 = FUN_081471d4();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000028 = FUN_071787d8(lVar4,0);
    uVar7 = FUN_0701d1d0(&stack0x00000028,0);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
      thunk_FUN_03d233cc(unaff_x19 + 0xc,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_045259b0(unaff_x19 + 2,&stack0x00000028);
      return;
    }
  }
  FUN_0701d29c(&stack0x00000028,0);
  if (*(long *)(unaff_x19 + 10) != 0) {
    FUN_08147334();
    *unaff_x19 = -2;
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    thunk_FUN_03d233cc(unaff_x19 + 10,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_0701e078(unaff_x19 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


