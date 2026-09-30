/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_focus_create
ENTRY_POINT: 08419328
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


undefined8 Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_focus_create(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 extraout_x1;
  long lVar17;
  undefined8 *unaff_x19;
  long *unaff_x23;
  undefined8 uVar18;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000030 = 0;
  lVar10 = thunk_FUN_03d2ef40();
  FUN_0590bc60(lVar10,*unaff_x19);
  lVar11 = *unaff_x23;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar11 = *unaff_x23;
  }
  puVar8 = PTR_DAT_0927c498;
  puVar7 = PTR_DAT_0927c490;
  puVar6 = PTR_DAT_0927c488;
  puVar5 = PTR_DAT_0927c480;
  puVar4 = PTR_DAT_091da328;
  puVar3 = PTR_DAT_091da320;
  puVar2 = PTR_DAT_091a3250;
  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
  if (lVar11 != 0) {
    FUN_05a3a290(&stack0x00000008,lVar11,*(undefined8 *)PTR_DAT_091da358);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    uStack0000000000000030 = in_stack_00000018;
    while( true ) {
      uVar12 = FUN_06daab3c(&stack0x00000020,*(undefined8 *)puVar4);
      uVar15 = uStack0000000000000030;
      if ((uVar12 & 1) == 0) {
        FUN_06daab38(&stack0x00000020,*(undefined8 *)puVar3);
        iVar9 = FUN_04efb9a0(lVar10,*(undefined8 *)puVar5);
        puVar2 = PTR_DAT_0927c520;
        if (iVar9 == 0) {
          thunk_FUN_03d1e194(PTR_DAT_0927c520);
          FUN_037e7a9c();
          lVar10 = thunk_FUN_03d1e194(puVar2);
          uVar16 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
          uVar15 = thunk_FUN_03d1e194(PTR_DAT_091a29b8);
          uVar13 = thunk_FUN_03d1e194(PTR_DAT_091dc840);
          uVar15 = thunk_FUN_0512c1fc(uVar15,uVar16,uVar13);
          uVar13 = thunk_FUN_03d1e194(PTR_DAT_0927c4a0);
        }
        else {
          iVar9 = FUN_04efb9a0(lVar10,*(undefined8 *)puVar5);
          if (iVar9 < 2) {
            uVar15 = FUN_04f02988(lVar10,*(undefined8 *)puVar6);
            FUN_04f02988(lVar10,*(undefined8 *)puVar6);
            uVar13 = thunk_FUN_03d2ef40(*unaff_x23);
            FUN_08418ee0(uVar13,uVar15,extraout_x1);
            return uVar13;
          }
          lVar11 = thunk_FUN_03d1e194(PTR_DAT_0927c540);
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          lVar11 = thunk_FUN_03d1e194(PTR_DAT_0927c540);
          lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
          uVar15 = thunk_FUN_03d1e194(PTR_DAT_091a29b8);
          uVar13 = thunk_FUN_03d1e194(PTR_DAT_0927c4b0);
          if (lVar11 == 0) {
            lVar11 = thunk_FUN_03d1e194(PTR_DAT_0927c540);
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            puVar2 = PTR_DAT_0927c540;
            lVar11 = thunk_FUN_03d1e194(PTR_DAT_0927c540);
            uVar18 = **(undefined8 **)(lVar11 + 0xb8);
            thunk_FUN_03d1e194(PTR_DAT_0927c4b8);
            lVar11 = thunk_FUN_03d2ef40();
            uVar16 = thunk_FUN_03d1e194(PTR_DAT_0927c548);
            FUN_054b57f8(lVar11,uVar18,uVar16,0);
            lVar17 = thunk_FUN_03d1e194(puVar2);
            *(long *)(*(long *)(lVar17 + 0xb8) + 8) = lVar11;
            lVar17 = thunk_FUN_03d1e194(puVar2);
            thunk_FUN_03d1023c(*(long *)(lVar17 + 0xb8) + 8,lVar11);
          }
          uVar16 = thunk_FUN_03d1e194(PTR_DAT_0927c4c8);
          uVar16 = thunk_FUN_04f0eeec(lVar10,lVar11,uVar16);
          uVar18 = thunk_FUN_03d1e194(PTR_DAT_091dc840);
          uVar15 = thunk_FUN_0512c1fc(uVar15,uVar16,uVar18);
        }
        uVar15 = FUN_06fc5244(uVar13,uVar15,0);
        thunk_FUN_03d1e194(PTR_DAT_091fb028);
        uVar13 = thunk_FUN_03d2ef40();
        FUN_0842b5c8(uVar13,uVar15,0);
        uVar15 = thunk_FUN_03d1e194(PTR_DAT_0927c550);
                    /* WARNING: Subroutine does not return */
        FUN_03d2d414(uVar13,uVar15);
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar13 = FUN_07207d1c();
      in_stack_00000008 = 0;
      in_stack_00000010 = 0;
      FUN_0653b8e0(&stack0x00000008,uVar13,uVar15,*(undefined8 *)puVar8);
      if (lVar10 == 0) break;
      lVar11 = *(long *)(lVar10 + 0x10);
      lVar17 = *(long *)puVar7;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        lVar11 = lVar11 + (long)(int)uVar1 * 0x10;
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        puVar14 = (undefined8 *)(lVar11 + 0x20);
        *puVar14 = in_stack_00000008;
        *(undefined8 *)(lVar11 + 0x28) = in_stack_00000010;
        thunk_FUN_03d1023c(puVar14,0);
      }
      else {
        FUN_0590c4e0(lVar10,in_stack_00000008,in_stack_00000010,
                     *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


