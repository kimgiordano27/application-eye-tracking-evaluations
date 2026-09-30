/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_add_session_t_uri_get
ENTRY_POINT: 0901736c
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
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_add_session_t_uri_get(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 extraout_x1;
  long unaff_x19;
  long *unaff_x23;
  undefined8 uVar14;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  lVar7 = *unaff_x23;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar7 = *unaff_x23;
  }
  puVar5 = PTR_DAT_09fba8c8;
  puVar4 = PTR_DAT_09f26460;
  puVar3 = PTR_DAT_09f211a0;
  puVar2 = PTR_DAT_09f21198;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar7 != 0) {
    FUN_05bae95c(&stack0x00000008,lVar7,*(undefined8 *)PTR_DAT_09f211b8);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while( true ) {
      uVar8 = FUN_0768d020(&stack0x00000020,*(undefined8 *)puVar3);
      uVar11 = in_stack_00000030;
      if ((uVar8 & 1) == 0) {
        FUN_0768d01c(&stack0x00000020,*(undefined8 *)puVar2);
        iVar6 = FUN_04ce58e8();
        puVar2 = PTR_DAT_09fbffe0;
        if (iVar6 == 0) {
          thunk_FUN_044adef4(PTR_DAT_09fbffe0);
          FUN_03db7f50();
          lVar7 = thunk_FUN_044adef4(puVar2);
          uVar12 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
          uVar11 = thunk_FUN_044adef4(PTR_DAT_09f21278);
          uVar9 = thunk_FUN_044adef4(PTR_DAT_09fba8d0);
          uVar11 = thunk_FUN_04fd4178(uVar11,uVar12,uVar9);
          uVar9 = thunk_FUN_044adef4(PTR_DAT_09fba8d8);
        }
        else {
          iVar6 = FUN_04ce58e8();
          if (iVar6 < 2) {
            uVar11 = FUN_04cecb64();
            FUN_04cecb64();
            uVar9 = thunk_FUN_0448520c(*unaff_x23);
            FUN_09016f10(uVar9,uVar11,extraout_x1);
            return uVar9;
          }
          lVar7 = thunk_FUN_044adef4(PTR_DAT_09fc0000);
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar7 = thunk_FUN_044adef4(PTR_DAT_09fc0000);
          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
          uVar11 = thunk_FUN_044adef4(PTR_DAT_09f21278);
          uVar9 = thunk_FUN_044adef4(PTR_DAT_09fba8e8);
          if (lVar7 == 0) {
            lVar7 = thunk_FUN_044adef4(PTR_DAT_09fc0000);
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            puVar2 = PTR_DAT_09fc0000;
            lVar7 = thunk_FUN_044adef4(PTR_DAT_09fc0000);
            uVar14 = **(undefined8 **)(lVar7 + 0xb8);
            thunk_FUN_044adef4(PTR_DAT_09fba8f0);
            uVar12 = thunk_FUN_0448520c();
            uVar13 = thunk_FUN_044adef4(PTR_DAT_09fc0008);
            FUN_05555340(uVar12,uVar14,uVar13,0);
            lVar7 = thunk_FUN_044adef4(puVar2);
            *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8) = uVar12;
            lVar7 = thunk_FUN_044adef4(puVar2);
            thunk_FUN_044bb4b4(*(long *)(lVar7 + 0xb8) + 8,uVar12);
          }
          thunk_FUN_044adef4(PTR_DAT_09fba900);
          uVar12 = thunk_FUN_04cfebe4();
          uVar13 = thunk_FUN_044adef4(PTR_DAT_09fba8d0);
          uVar11 = thunk_FUN_04fd4178(uVar11,uVar12,uVar13);
        }
        uVar11 = FUN_078a7764(uVar9,uVar11,0);
        thunk_FUN_044adef4(PTR_DAT_09f273d8);
        uVar9 = thunk_FUN_0448520c();
        FUN_090250b8(uVar9,uVar11,0);
        uVar11 = thunk_FUN_044adef4(PTR_DAT_09fc0010);
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar9,uVar11);
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar9 = FUN_07acb74c();
      in_stack_00000008 = 0;
      in_stack_00000010 = 0;
      FUN_06c733e0(&stack0x00000008,uVar9,uVar11,*(undefined8 *)puVar5);
      if (unaff_x19 == 0) break;
      lVar7 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        lVar7 = lVar7 + (long)(int)uVar1 * 0x10;
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        puVar10 = (undefined8 *)(lVar7 + 0x20);
        *puVar10 = in_stack_00000008;
        *(undefined8 *)(lVar7 + 0x28) = in_stack_00000010;
        thunk_FUN_044bb4b4(puVar10,0);
      }
      else {
        FUN_059fee5c();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


