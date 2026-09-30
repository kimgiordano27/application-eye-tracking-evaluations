/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_chat_history_query_t_session_handle_set
ENTRY_POINT: 0847068c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x084708b8) */

undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_session_handle_set
          (void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  undefined8 uVar7;
  long unaff_x20;
  long unaff_x22;
  long *plVar8;
  long lVar9;
  double unaff_d8;
  char cStack000000000000000c;
  
  FUN_03d2d2b0();
  FUN_03d2d2b0(PTR_DAT_0927dc70);
  FUN_03d2d2b0(PTR_DAT_0927dc78);
  *(undefined1 *)(unaff_x19 + 0xf51) = 1;
  if (unaff_d8 < 0.0) {
    thunk_FUN_03d1e194(PTR_DAT_091ab1c0);
    uVar3 = thunk_FUN_03d2ef40();
    uVar7 = thunk_FUN_03d1e194(PTR_DAT_0927dc80);
    FUN_070cb7ec(uVar3,uVar7,0);
  }
  else {
    if (unaff_x22 != 0) {
      uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
      cStack000000000000000c = '\0';
      FUN_071e78b0(uVar7,&stack0x0000000c,0);
      lVar1 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927dc78);
      FUN_071bc31c(lVar1,0);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      *(long *)(lVar1 + 0x10) = unaff_x22;
      thunk_FUN_03d1023c();
      plVar8 = *(long **)(unaff_x20 + 0x38);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar4 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0927dc68) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_08470764;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03d8f370(plVar8,*(long *)PTR_DAT_0927dc68,0);
LAB_08470764:
      (*(code *)*puVar2)(plVar8,puVar2[1]);
      if (*(int *)(*(long *)PTR_DAT_091a1650 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar3 = FUN_07157b90();
      *(undefined8 *)(lVar1 + 0x18) = uVar3;
      lVar9 = *(long *)(unaff_x20 + 0x60);
      lVar4 = lVar9 + 1;
      *(long *)(unaff_x20 + 0x60) = lVar4;
      *(long *)(lVar1 + 0x20) = lVar9;
      if (lVar4 < 1) {
        *(undefined8 *)(unaff_x20 + 0x60) = 1;
      }
      if (*(long *)(unaff_x20 + 0x48) != 0) {
        FUN_05d2c4c8(*(long *)(unaff_x20 + 0x48),lVar1,*(undefined8 *)PTR_DAT_0927dc70);
        if (*(long *)(unaff_x20 + 0x50) != 0) {
          FUN_06ad5354(*(long *)(unaff_x20 + 0x50),*(undefined8 *)(lVar1 + 0x20),lVar1,
                       *(undefined8 *)PTR_DAT_0927dc60);
          uVar3 = *(undefined8 *)(lVar1 + 0x20);
          if (cStack000000000000000c != '\0') {
            thunk_FUN_03d180a8(uVar7,0);
          }
          return uVar3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    thunk_FUN_03d1e194(PTR_DAT_091adab0);
    uVar3 = thunk_FUN_03d2ef40();
    uVar7 = thunk_FUN_03d1e194(PTR_DAT_091d4508);
    FUN_070c4c34(uVar3,uVar7,0);
  }
  uVar7 = thunk_FUN_03d1e194(PTR_DAT_0927dc88);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar3,uVar7);
}


