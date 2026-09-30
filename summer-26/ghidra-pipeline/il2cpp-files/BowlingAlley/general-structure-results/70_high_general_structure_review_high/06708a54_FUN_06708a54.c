/*
FUNCTION_NAME: FUN_06708a54
ENTRY_POINT: 06708a54
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_6;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06708a54(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long extraout_x1;
  char *pcVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_1128 [168];
  undefined8 local_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined8 local_1060;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  undefined8 local_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  undefined8 local_1020;
  undefined8 uStack_1018;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined8 local_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 local_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 local_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 local_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 local_f80;
  undefined8 uStack_f78;
  undefined8 local_f70;
  undefined8 local_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  undefined8 local_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 local_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 local_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 local_ee0;
  undefined8 uStack_ed8;
  undefined8 local_ed0;
  undefined8 uStack_ec8;
  undefined8 local_ec0;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined1 auStack_e98 [168];
  undefined8 local_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined8 local_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 local_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 local_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 local_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 local_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 local_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 local_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined1 auStack_ce8 [1584];
  undefined1 auStack_6b8 [1584];
  long local_88;
  
  puVar6 = Method_System_Collections_Generic_Dictionary<string,_Task<Texture>>__ctor__;
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  if ((DAT_076e0575 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_GetEnumerator__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Dictionary<string,_bool>_set_Item__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Dictionary<string,_Task<Texture>>__ctor__);
    DAT_076e0575 = 1;
  }
  uStack_d08 = 0;
  local_d10 = 0;
  uStack_cf8 = 0;
  uStack_d00 = 0;
  uStack_d28 = 0;
  local_d30 = 0;
  uStack_d18 = 0;
  uStack_d20 = 0;
  uStack_d48 = 0;
  local_d50 = 0;
  uStack_d38 = 0;
  uStack_d40 = 0;
  uStack_d68 = 0;
  local_d70 = 0;
  uStack_d58 = 0;
  uStack_d60 = 0;
  memset(auStack_6b8,0,0x630);
  uStack_d88 = 0;
  local_d90 = 0;
  uStack_d78 = 0;
  uStack_d80 = 0;
  uStack_da8 = 0;
  local_db0 = 0;
  uStack_d98 = 0;
  uStack_da0 = 0;
  uStack_dc8 = 0;
  local_dd0 = 0;
  uStack_db8 = 0;
  uStack_dc0 = 0;
  uStack_de8 = 0;
  local_df0 = 0;
  uStack_dd8 = 0;
  uStack_de0 = 0;
  memset(auStack_e98,0,0xa8);
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  if (DAT_076e01fc == '\0') {
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Dictionary<string,_Task<Texture>>__ctor__);
    DAT_076e01fc = '\x01';
  }
  lVar10 = *(long *)puVar6;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar10 = *(long *)puVar6;
  }
  pcVar12 = *(char **)(lVar10 + 0xb8);
  if (*pcVar12 != '\0') {
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      pcVar12 = *(char **)(*(long *)puVar6 + 0xb8);
    }
    if (pcVar12[1] != '\0') {
      if (param_2 == 0) {
LAB_06708f0c:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_06baf87c(&local_ee0,param_2,0);
      uStack_d28 = uStack_ed8;
      local_d30 = local_ee0;
      uStack_d18 = uStack_ec8;
      uStack_d20 = local_ed0;
      uStack_d08 = uStack_eb8;
      local_d10 = local_ec0;
      uStack_cf8 = uStack_ea8;
      uStack_d00 = uStack_eb0;
      FUN_06baf744(&local_ee0,param_2,0);
      uStack_d68 = uStack_ed8;
      local_d70 = local_ee0;
      uStack_d58 = uStack_ec8;
      uStack_d60 = local_ed0;
      uStack_d48 = uStack_eb8;
      local_d50 = local_ec0;
      uStack_d38 = uStack_ea8;
      uStack_d40 = uStack_eb0;
      uVar11 = FUN_06bb0da4(param_2,0,auStack_6b8,0);
      if ((uVar11 & 1) != 0) {
        uStack_ed8 = uStack_d28;
        local_ee0 = local_d30;
        uStack_ec8 = uStack_d18;
        local_ed0 = uStack_d20;
        uStack_eb8 = uStack_d08;
        local_ec0 = local_d10;
        uStack_ea8 = uStack_cf8;
        uStack_eb0 = uStack_d00;
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<string,_bool>_set_Item__
                    + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uStack_f18 = uStack_ed8;
        local_f20 = local_ee0;
        uStack_f08 = uStack_ec8;
        uStack_f10 = local_ed0;
        uStack_ef8 = uStack_eb8;
        local_f00 = local_ec0;
        uStack_ee8 = uStack_ea8;
        uStack_ef0 = uStack_eb0;
        FUN_06c09ab8(auStack_6b8,&local_f20,0);
        uStack_f58 = uStack_d68;
        local_f60 = local_d70;
        uStack_f48 = uStack_d58;
        uStack_f50 = uStack_d60;
        uStack_f38 = uStack_d48;
        local_f40 = local_d50;
        uStack_f28 = uStack_d38;
        uStack_f30 = uStack_d40;
        FUN_06c09a80(auStack_6b8,&local_f60,0);
        FUN_06c09ad4(0,auStack_6b8,0);
        puVar6 = 
        Method_System_Collections_Generic_Dictionary<string,_List<OpenXRInput_SerializedBinding>>_GetEnumerator__
        ;
        uVar5 = _UNK_013a3248;
        uVar4 = _DAT_013a3240;
        uVar3 = DAT_013a05f8;
        uVar2 = DAT_0139fd78;
        if ((param_1 == 0) || (lVar10 = *(long *)(param_1 + 0x10), lVar10 == 0)) goto LAB_06708f0c;
        if (0 < *(int *)(lVar10 + 0x18)) {
          iVar13 = 0;
          do {
            FUN_040f32d4(lVar10,iVar13,*(undefined8 *)puVar6);
            if (extraout_x1 == 0) goto LAB_06708f0c;
            uVar8 = *(undefined4 *)(extraout_x1 + 0x28);
            memcpy(auStack_ce8,auStack_6b8,0x630);
            FUN_066987e4(extraout_x1,uVar8,auStack_ce8,0);
            iVar7 = FUN_06695ef4(extraout_x1,0);
            if (0 < iVar7) {
              iVar7 = 0;
              do {
                uStack_d88 = uStack_d08;
                local_d90 = local_d10;
                uStack_d78 = uStack_cf8;
                uStack_d80 = uStack_d00;
                uStack_da8 = uStack_d28;
                local_db0 = local_d30;
                uStack_d98 = uStack_d18;
                uStack_da0 = uStack_d20;
                uStack_de8 = uStack_d68;
                local_df0 = local_d70;
                uStack_dd8 = uStack_d58;
                uStack_de0 = uStack_d60;
                uStack_dc8 = uStack_d48;
                local_dd0 = local_d50;
                uStack_db8 = uStack_d38;
                uStack_dc0 = uStack_d40;
                if ((iVar13 == 0 && *(int *)(lVar10 + 0x18) == 2) ||
                   (iVar7 == 0 && *(int *)(lVar10 + 0x18) == 1)) {
                  FUN_06bda1bc(&local_ee0,&local_db0,0);
                  local_f80 = CONCAT44((float)((ulong)local_ee0 >> 0x20) *
                                       (float)((ulong)uVar4 >> 0x20),(float)local_ee0 * (float)uVar4
                                      );
                  uStack_f78 = CONCAT44((float)((ulong)uStack_ed8 >> 0x20) *
                                        (float)((ulong)uVar5 >> 0x20),
                                        (float)uStack_ed8 * (float)uVar5);
                  local_f70 = local_ed0;
                  FUN_06bdaa4c(&local_ee0,&local_f80,0);
                  uStack_da8 = uStack_ed8;
                  local_db0 = local_ee0;
                  uStack_d98 = uStack_ec8;
                  uStack_da0 = local_ed0;
                  uStack_d88 = uStack_eb8;
                  local_d90 = local_ec0;
                  uStack_d78 = uStack_ea8;
                  uStack_d80 = uStack_eb0;
                  FUN_06bdb75c(&local_ee0,uVar2,0x3e800000,uVar3,0);
                  uStack_ff8 = uStack_ed8;
                  local_1000 = local_ee0;
                  uStack_fe8 = uStack_ec8;
                  uStack_ff0 = local_ed0;
                  uStack_fd8 = uStack_eb8;
                  local_fe0 = local_ec0;
                  uStack_fc8 = uStack_ea8;
                  uStack_fd0 = uStack_eb0;
                  uStack_fb8 = uStack_de8;
                  local_fc0 = local_df0;
                  uStack_fa8 = uStack_dd8;
                  uStack_fb0 = uStack_de0;
                  uStack_f98 = uStack_dc8;
                  local_fa0 = local_dd0;
                  uStack_f88 = uStack_db8;
                  uStack_f90 = uStack_dc0;
                  FUN_06bdb1f8(&local_ee0,&local_fc0,&local_1000,0);
                  uStack_de8 = uStack_ed8;
                  local_df0 = local_ee0;
                  uStack_dd8 = uStack_ec8;
                  uStack_de0 = local_ed0;
                  uStack_dc8 = uStack_eb8;
                  local_dd0 = local_ec0;
                  uStack_db8 = uStack_ea8;
                  uStack_dc0 = uStack_eb0;
                }
                uStack_ed8 = uStack_da8;
                local_ee0 = local_db0;
                uStack_ec8 = uStack_d98;
                local_ed0 = uStack_da0;
                uStack_eb8 = uStack_d88;
                local_ec0 = local_d90;
                uStack_ea8 = uStack_d78;
                uStack_eb0 = uStack_d80;
                uVar15 = uStack_da0;
                uVar16 = local_d90;
                uVar17 = uStack_d80;
                uVar14 = FUN_06695e18(extraout_x1,iVar7,0);
                uVar8 = FUN_06695e88(extraout_x1,iVar7,0);
                uStack_1038 = uStack_ed8;
                local_1040 = local_ee0;
                uStack_1028 = uStack_ec8;
                uStack_1030 = local_ed0;
                uStack_1018 = uStack_eb8;
                local_1020 = local_ec0;
                uStack_1008 = uStack_ea8;
                uStack_1010 = uStack_eb0;
                uStack_1078 = uStack_de8;
                local_1080 = local_df0;
                uStack_1068 = uStack_dd8;
                uStack_1070 = uStack_de0;
                uStack_1058 = uStack_dc8;
                local_1060 = local_dd0;
                uStack_1048 = uStack_db8;
                uStack_1050 = uStack_dc0;
                FUN_0669a280(uVar14,uVar15,uVar16,uVar17,auStack_e98,&local_1040,&local_1080,0,uVar8
                             ,0);
                memcpy(auStack_1128,auStack_e98,0xa8);
                FUN_066986e4(extraout_x1,iVar7,auStack_1128,0);
                iVar7 = iVar7 + 1;
                iVar9 = FUN_06695ef4(extraout_x1,0);
              } while (iVar7 < iVar9);
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < *(int *)(lVar10 + 0x18));
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


