/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_remove_session_create
ENTRY_POINT: 08419244
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


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_remove_session_create
          (undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 extraout_x1;
  long lVar18;
  undefined8 uVar19;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar9 = PTR_DAT_0927c520;
  puVar3 = PTR_DAT_0927c478;
  puVar2 = PTR_DAT_0927c470;
  if ((bRam0000000009850c95 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_0927c520);
    FUN_03d2d2b0(PTR_DAT_0927c480);
    FUN_03d2d2b0(PTR_DAT_0927c488);
    FUN_03d2d2b0(PTR_DAT_091da320);
    FUN_03d2d2b0(PTR_DAT_091da328);
    FUN_03d2d2b0(PTR_DAT_091da330);
    FUN_03d2d2b0(PTR_DAT_091a3250);
    FUN_03d2d2b0(PTR_DAT_0927c490);
    FUN_03d2d2b0(PTR_DAT_091da358);
    FUN_03d2d2b0(PTR_DAT_0927c478);
    FUN_03d2d2b0(PTR_DAT_0927c470);
    FUN_03d2d2b0(PTR_DAT_0927c498);
    bRam0000000009850c95 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  lVar11 = thunk_FUN_03d2ef40(*(undefined8 *)puVar2);
  FUN_0590bc60(lVar11,*(undefined8 *)puVar3);
  lVar12 = *(long *)puVar9;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar12 = *(long *)puVar9;
  }
  puVar8 = PTR_DAT_0927c498;
  puVar7 = PTR_DAT_0927c490;
  puVar6 = PTR_DAT_0927c488;
  puVar5 = PTR_DAT_0927c480;
  puVar4 = PTR_DAT_091da328;
  puVar3 = PTR_DAT_091da320;
  puVar2 = PTR_DAT_091a3250;
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
  if (lVar12 != 0) {
    FUN_05a3a290(&uStack_98,lVar12,*(undefined8 *)PTR_DAT_091da358);
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    uStack_70 = uStack_88;
    while( true ) {
      uVar13 = FUN_06daab3c(&uStack_80,*(undefined8 *)puVar4);
      uVar16 = uStack_70;
      if ((uVar13 & 1) == 0) {
        FUN_06daab38(&uStack_80,*(undefined8 *)puVar3);
        iVar10 = FUN_04efb9a0(lVar11,*(undefined8 *)puVar5);
        puVar2 = PTR_DAT_0927c520;
        if (iVar10 == 0) {
          thunk_FUN_03d1e194(PTR_DAT_0927c520);
          FUN_037e7a9c();
          lVar11 = thunk_FUN_03d1e194(puVar2);
          uVar17 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8);
          uVar16 = thunk_FUN_03d1e194(PTR_DAT_091a29b8);
          uVar14 = thunk_FUN_03d1e194(PTR_DAT_091dc840);
          uVar16 = thunk_FUN_0512c1fc(uVar16,uVar17,uVar14);
          uVar14 = thunk_FUN_03d1e194(PTR_DAT_0927c4a0);
        }
        else {
          iVar10 = FUN_04efb9a0(lVar11,*(undefined8 *)puVar5);
          if (iVar10 < 2) {
            uVar16 = FUN_04f02988(lVar11,*(undefined8 *)puVar6);
            FUN_04f02988(lVar11,*(undefined8 *)puVar6);
            uVar14 = thunk_FUN_03d2ef40(*(undefined8 *)puVar9);
            FUN_08418ee0(uVar14,uVar16,extraout_x1);
            return uVar14;
          }
          lVar12 = thunk_FUN_03d1e194(PTR_DAT_0927c540);
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          lVar12 = thunk_FUN_03d1e194(PTR_DAT_0927c540);
          lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
          uVar16 = thunk_FUN_03d1e194(PTR_DAT_091a29b8);
          uVar14 = thunk_FUN_03d1e194(PTR_DAT_0927c4b0);
          if (lVar12 == 0) {
            lVar12 = thunk_FUN_03d1e194(PTR_DAT_0927c540);
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            puVar2 = PTR_DAT_0927c540;
            lVar12 = thunk_FUN_03d1e194(PTR_DAT_0927c540);
            uVar19 = **(undefined8 **)(lVar12 + 0xb8);
            thunk_FUN_03d1e194(PTR_DAT_0927c4b8);
            lVar12 = thunk_FUN_03d2ef40();
            uVar17 = thunk_FUN_03d1e194(PTR_DAT_0927c548);
            FUN_054b57f8(lVar12,uVar19,uVar17,0);
            lVar18 = thunk_FUN_03d1e194(puVar2);
            *(long *)(*(long *)(lVar18 + 0xb8) + 8) = lVar12;
            lVar18 = thunk_FUN_03d1e194(puVar2);
            thunk_FUN_03d1023c(*(long *)(lVar18 + 0xb8) + 8,lVar12);
          }
          uVar17 = thunk_FUN_03d1e194(PTR_DAT_0927c4c8);
          uVar17 = thunk_FUN_04f0eeec(lVar11,lVar12,uVar17);
          uVar19 = thunk_FUN_03d1e194(PTR_DAT_091dc840);
          uVar16 = thunk_FUN_0512c1fc(uVar16,uVar17,uVar19);
        }
        uVar16 = FUN_06fc5244(uVar14,uVar16,0);
        thunk_FUN_03d1e194(PTR_DAT_091fb028);
        uVar14 = thunk_FUN_03d2ef40();
        FUN_0842b5c8(uVar14,uVar16,0);
        uVar16 = thunk_FUN_03d1e194(PTR_DAT_0927c550);
                    /* WARNING: Subroutine does not return */
        FUN_03d2d414(uVar14,uVar16);
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar14 = FUN_07207d1c(param_1,uVar16,0);
      uStack_98 = 0;
      uStack_90 = 0;
      FUN_0653b8e0(&uStack_98,uVar14,uVar16,*(undefined8 *)puVar8);
      if (lVar11 == 0) break;
      lVar12 = *(long *)(lVar11 + 0x10);
      lVar18 = *(long *)puVar7;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        lVar12 = lVar12 + (long)(int)uVar1 * 0x10;
        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
        puVar15 = (undefined8 *)(lVar12 + 0x20);
        *puVar15 = uStack_98;
        *(undefined8 *)(lVar12 + 0x28) = uStack_90;
        thunk_FUN_03d1023c(puVar15,0);
      }
      else {
        FUN_0590c4e0(lVar11,uStack_98,uStack_90,
                     *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


