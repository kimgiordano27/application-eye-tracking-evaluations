/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_create_t_sessiongroup_handle_get
ENTRY_POINT: 0901b8a4
PROGRAM: MatchPointTennis-libil2cpp.so
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
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_create_t_sessiongroup_handle_get
          (long param_1)

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
  undefined8 *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 uVar18;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0x1b8));
  FUN_04447ba8(PTR_DAT_09fba8a8);
  FUN_04447ba8(PTR_DAT_09fba8a0);
  FUN_04447ba8(PTR_DAT_09fba8c8);
  *(undefined1 *)(unaff_x22 + 0x628) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  lVar10 = thunk_FUN_0448520c(*unaff_x21);
  FUN_059fe5dc(lVar10,*unaff_x19);
  lVar11 = *unaff_x23;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar11 = *unaff_x23;
  }
  puVar8 = PTR_DAT_09fba8c8;
  puVar7 = PTR_DAT_09fba8c0;
  puVar6 = PTR_DAT_09fba8b8;
  puVar5 = PTR_DAT_09fba8b0;
  puVar4 = PTR_DAT_09f26460;
  puVar3 = PTR_DAT_09f211a0;
  puVar2 = PTR_DAT_09f21198;
  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
  if (lVar11 != 0) {
    FUN_05bae95c(&stack0x00000008,lVar11,*(undefined8 *)PTR_DAT_09f211b8);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while( true ) {
      uVar12 = FUN_0768d020(&stack0x00000020,*(undefined8 *)puVar3);
      uVar15 = in_stack_00000030;
      if ((uVar12 & 1) == 0) {
        FUN_0768d01c(&stack0x00000020,*(undefined8 *)puVar2);
        iVar9 = FUN_04ce58e8(lVar10,*(undefined8 *)puVar5);
        puVar2 = PTR_DAT_09fc0138;
        if (iVar9 == 0) {
          thunk_FUN_044adef4(PTR_DAT_09fc0138);
          FUN_03db7f50();
          lVar10 = thunk_FUN_044adef4(puVar2);
          uVar16 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
          uVar15 = thunk_FUN_044adef4(PTR_DAT_09f21278);
          uVar13 = thunk_FUN_044adef4(PTR_DAT_09fba8d0);
          uVar15 = thunk_FUN_04fd4178(uVar15,uVar16,uVar13);
          uVar13 = thunk_FUN_044adef4(PTR_DAT_09fba8d8);
        }
        else {
          iVar9 = FUN_04ce58e8(lVar10,*(undefined8 *)puVar5);
          if (iVar9 < 2) {
            uVar15 = FUN_04cecb64(lVar10,*(undefined8 *)puVar6);
            FUN_04cecb64(lVar10,*(undefined8 *)puVar6);
            uVar13 = thunk_FUN_0448520c(*unaff_x23);
            FUN_0901b498(uVar13,uVar15,extraout_x1);
            return uVar13;
          }
          lVar11 = thunk_FUN_044adef4(PTR_DAT_09fc0158);
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar11 = thunk_FUN_044adef4(PTR_DAT_09fc0158);
          lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
          uVar15 = thunk_FUN_044adef4(PTR_DAT_09f21278);
          uVar13 = thunk_FUN_044adef4(PTR_DAT_09fba8e8);
          if (lVar11 == 0) {
            lVar11 = thunk_FUN_044adef4(PTR_DAT_09fc0158);
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            puVar2 = PTR_DAT_09fc0158;
            lVar11 = thunk_FUN_044adef4(PTR_DAT_09fc0158);
            uVar18 = **(undefined8 **)(lVar11 + 0xb8);
            thunk_FUN_044adef4(PTR_DAT_09fba8f0);
            lVar11 = thunk_FUN_0448520c();
            uVar16 = thunk_FUN_044adef4(PTR_DAT_09fc0160);
            FUN_05555340(lVar11,uVar18,uVar16,0);
            lVar17 = thunk_FUN_044adef4(puVar2);
            *(long *)(*(long *)(lVar17 + 0xb8) + 8) = lVar11;
            lVar17 = thunk_FUN_044adef4(puVar2);
            thunk_FUN_044bb4b4(*(long *)(lVar17 + 0xb8) + 8,lVar11);
          }
          uVar16 = thunk_FUN_044adef4(PTR_DAT_09fba900);
          uVar16 = thunk_FUN_04cfebe4(lVar10,lVar11,uVar16);
          uVar18 = thunk_FUN_044adef4(PTR_DAT_09fba8d0);
          uVar15 = thunk_FUN_04fd4178(uVar15,uVar16,uVar18);
        }
        uVar15 = FUN_078a7764(uVar13,uVar15,0);
        thunk_FUN_044adef4(PTR_DAT_09f273d8);
        uVar13 = thunk_FUN_0448520c();
        FUN_090250b8(uVar13,uVar15,0);
        uVar15 = thunk_FUN_044adef4(PTR_DAT_09fc0168);
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar13,uVar15);
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar13 = FUN_07acb74c();
      in_stack_00000008 = 0;
      in_stack_00000010 = 0;
      FUN_06c733e0(&stack0x00000008,uVar13,uVar15,*(undefined8 *)puVar8);
      if (lVar10 == 0) break;
      lVar11 = *(long *)(lVar10 + 0x10);
      lVar17 = *(long *)puVar7;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        lVar11 = lVar11 + (long)(int)uVar1 * 0x10;
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        puVar14 = (undefined8 *)(lVar11 + 0x20);
        *puVar14 = in_stack_00000008;
        *(undefined8 *)(lVar11 + 0x28) = in_stack_00000010;
        thunk_FUN_044bb4b4(puVar14,0);
      }
      else {
        FUN_059fee5c(lVar10,in_stack_00000008,in_stack_00000010,
                     *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


