/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_create_t_sessiongroup_handle_set
ENTRY_POINT: 0901b80c
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
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_create_t_sessiongroup_handle_set
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
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  puVar9 = PTR_DAT_09fc0138;
  puVar3 = PTR_DAT_09fba8a8;
  puVar2 = PTR_DAT_09fba8a0;
  if ((DAT_0a533628 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09fba8b0);
    FUN_04447ba8(PTR_DAT_09fba8b8);
    FUN_04447ba8(PTR_DAT_09f21198);
    FUN_04447ba8(PTR_DAT_09f211a0);
    FUN_04447ba8(PTR_DAT_09f211a8);
    FUN_04447ba8(PTR_DAT_09fc0138);
    FUN_04447ba8(PTR_DAT_09f26460);
    FUN_04447ba8(PTR_DAT_09fba8c0);
    FUN_04447ba8(PTR_DAT_09f211b8);
    FUN_04447ba8(PTR_DAT_09fba8a8);
    FUN_04447ba8(PTR_DAT_09fba8a0);
    FUN_04447ba8(PTR_DAT_09fba8c8);
    DAT_0a533628 = 1;
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  lVar11 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
  FUN_059fe5dc(lVar11,*(undefined8 *)puVar3);
  lVar12 = *(long *)puVar9;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar12 = *(long *)puVar9;
  }
  puVar8 = PTR_DAT_09fba8c8;
  puVar7 = PTR_DAT_09fba8c0;
  puVar6 = PTR_DAT_09fba8b8;
  puVar5 = PTR_DAT_09fba8b0;
  puVar4 = PTR_DAT_09f26460;
  puVar3 = PTR_DAT_09f211a0;
  puVar2 = PTR_DAT_09f21198;
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
  if (lVar12 != 0) {
    FUN_05bae95c(&stack0x00000008,lVar12,*(undefined8 *)PTR_DAT_09f211b8);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while( true ) {
      uVar13 = FUN_0768d020(&stack0x00000020,*(undefined8 *)puVar3);
      uVar16 = in_stack_00000030;
      if ((uVar13 & 1) == 0) {
        FUN_0768d01c(&stack0x00000020,*(undefined8 *)puVar2);
        iVar10 = FUN_04ce58e8(lVar11,*(undefined8 *)puVar5);
        puVar2 = PTR_DAT_09fc0138;
        if (iVar10 == 0) {
          thunk_FUN_044adef4(PTR_DAT_09fc0138);
          FUN_03db7f50();
          lVar11 = thunk_FUN_044adef4(puVar2);
          uVar17 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8);
          uVar16 = thunk_FUN_044adef4(PTR_DAT_09f21278);
          uVar14 = thunk_FUN_044adef4(PTR_DAT_09fba8d0);
          uVar16 = thunk_FUN_04fd4178(uVar16,uVar17,uVar14);
          uVar14 = thunk_FUN_044adef4(PTR_DAT_09fba8d8);
        }
        else {
          iVar10 = FUN_04ce58e8(lVar11,*(undefined8 *)puVar5);
          if (iVar10 < 2) {
            uVar16 = FUN_04cecb64(lVar11,*(undefined8 *)puVar6);
            FUN_04cecb64(lVar11,*(undefined8 *)puVar6);
            uVar14 = thunk_FUN_0448520c(*(undefined8 *)puVar9);
            FUN_0901b498(uVar14,uVar16,extraout_x1);
            return uVar14;
          }
          lVar12 = thunk_FUN_044adef4(PTR_DAT_09fc0158);
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar12 = thunk_FUN_044adef4(PTR_DAT_09fc0158);
          lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
          uVar16 = thunk_FUN_044adef4(PTR_DAT_09f21278);
          uVar14 = thunk_FUN_044adef4(PTR_DAT_09fba8e8);
          if (lVar12 == 0) {
            lVar12 = thunk_FUN_044adef4(PTR_DAT_09fc0158);
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            puVar2 = PTR_DAT_09fc0158;
            lVar12 = thunk_FUN_044adef4(PTR_DAT_09fc0158);
            uVar19 = **(undefined8 **)(lVar12 + 0xb8);
            thunk_FUN_044adef4(PTR_DAT_09fba8f0);
            lVar12 = thunk_FUN_0448520c();
            uVar17 = thunk_FUN_044adef4(PTR_DAT_09fc0160);
            FUN_05555340(lVar12,uVar19,uVar17,0);
            lVar18 = thunk_FUN_044adef4(puVar2);
            *(long *)(*(long *)(lVar18 + 0xb8) + 8) = lVar12;
            lVar18 = thunk_FUN_044adef4(puVar2);
            thunk_FUN_044bb4b4(*(long *)(lVar18 + 0xb8) + 8,lVar12);
          }
          uVar17 = thunk_FUN_044adef4(PTR_DAT_09fba900);
          uVar17 = thunk_FUN_04cfebe4(lVar11,lVar12,uVar17);
          uVar19 = thunk_FUN_044adef4(PTR_DAT_09fba8d0);
          uVar16 = thunk_FUN_04fd4178(uVar16,uVar17,uVar19);
        }
        uVar16 = FUN_078a7764(uVar14,uVar16,0);
        thunk_FUN_044adef4(PTR_DAT_09f273d8);
        uVar14 = thunk_FUN_0448520c();
        FUN_090250b8(uVar14,uVar16,0);
        uVar16 = thunk_FUN_044adef4(PTR_DAT_09fc0168);
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar14,uVar16);
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar14 = FUN_07acb74c(param_1,uVar16,0);
      in_stack_00000008 = 0;
      in_stack_00000010 = 0;
      FUN_06c733e0(&stack0x00000008,uVar14,uVar16,*(undefined8 *)puVar8);
      if (lVar11 == 0) break;
      lVar12 = *(long *)(lVar11 + 0x10);
      lVar18 = *(long *)puVar7;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        lVar12 = lVar12 + (long)(int)uVar1 * 0x10;
        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
        puVar15 = (undefined8 *)(lVar12 + 0x20);
        *puVar15 = in_stack_00000008;
        *(undefined8 *)(lVar12 + 0x28) = in_stack_00000010;
        thunk_FUN_044bb4b4(puVar15,0);
      }
      else {
        FUN_059fee5c(lVar11,in_stack_00000008,in_stack_00000010,
                     *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


