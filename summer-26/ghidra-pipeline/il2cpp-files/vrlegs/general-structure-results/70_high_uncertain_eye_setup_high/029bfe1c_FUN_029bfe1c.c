/*
FUNCTION_NAME: FUN_029bfe1c
ENTRY_POINT: 029bfe1c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029c016c) */

void FUN_029bfe1c(long *param_1,long param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  char local_38 [4];
  int local_34;
  
  local_34 = param_3;
  if ((DAT_04127dd8 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d07920);
    FUN_01ab69ac(PTR_DAT_03d07e10);
    FUN_01ab69ac(PTR_DAT_03d07b60);
    FUN_01ab69ac(PTR_DAT_03ccaef8);
    FUN_01ab69ac(PTR_DAT_03d08860);
    FUN_01ab69ac(PTR_DAT_03d08868);
    FUN_01ab69ac(PTR_DAT_03d08870);
    DAT_04127dd8 = 1;
  }
  local_38[0] = '\0';
  if (param_2 == 0) {
    cVar3 = FUN_0298e548(param_1,0);
    if (cVar3 == '\0') {
      return;
    }
    uVar7 = *(undefined8 *)PTR_DAT_03d08868;
LAB_029c0098:
    FUN_0298e564(param_1,1,uVar7,0);
    return;
  }
  uVar4 = FUN_02990f60();
  *(undefined4 *)(param_1 + 0x11) = uVar4;
  param_1[0x13] = param_1[0x13] + (long)(param_3 + 7);
  uVar5 = FUN_0298d310(param_1,0);
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_02994928(param_1,0);
    if (lVar6 == 0) goto LAB_029c0168;
    *(int *)(lVar6 + 0x24) = *(int *)(lVar6 + 0x24) + 1;
    lVar6 = FUN_02994928(param_1,0);
    if (lVar6 == 0) goto LAB_029c0168;
    *(int *)(lVar6 + 0x28) = *(int *)(lVar6 + 0x28) + 1;
  }
  puVar2 = PTR_DAT_03d07e10;
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 != 0) {
    cVar3 = *(char *)(param_2 + 0x20);
    if (cVar3 == -0x10) {
      lVar6 = FUN_02994928(param_1,0);
      if (lVar6 != 0) {
        *(int *)(lVar6 + 0x38) = *(int *)(lVar6 + 0x38) + param_3;
        *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
        FUN_029c01d4(param_1,param_2);
        return;
      }
LAB_029c0168:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (cVar3 == -0xd) {
      if ((1 < uVar1) && (uVar1 != 2)) {
        if ((*(byte *)(param_2 + 0x21) & 0x7f) == 7) {
          cVar3 = *(char *)(param_2 + 0x22);
          lVar6 = *(long *)PTR_DAT_03d07e10;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar6 = *(long *)puVar2;
          }
          if (cVar3 == *(char *)(*(long *)(lVar6 + 0xb8) + 4)) {
            lVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ccaef8);
            FUN_027b3d9c(lVar6,0);
            *(long *)(lVar6 + 0x18) = param_2;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((long *)(lVar6 + 0x18),param_2);
            *(int *)(lVar6 + 0x14) = (int)*(undefined8 *)(param_2 + 0x18);
            (**(code **)(*param_1 + 600))(param_1,lVar6,*(undefined8 *)(*param_1 + 0x260));
            return;
          }
        }
        if (*(int *)(*(long *)PTR_DAT_03d07920 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar6 = FUN_02992d88(0);
        if (lVar6 != 0) {
          FUN_029b3ef8(lVar6,param_2,0,param_3);
          *(undefined4 *)(lVar6 + 0x10) = 0;
          if (*(int *)(lVar6 + 0x14) < 0) {
            *(undefined4 *)(lVar6 + 0x14) = 0;
            FUN_029bb694(lVar6,0);
          }
          lVar9 = param_1[0x24];
          local_38[0] = '\0';
          FUN_027e0bd8(lVar9,local_38,0);
          if (param_1[0x24] != 0) {
            FUN_02265dfc(param_1[0x24],lVar6,*(undefined8 *)PTR_DAT_03d07b60);
            if (local_38[0] == '\0') {
              return;
            }
            OVRManager_<>c__<InitOVRManager>b__424_0(lVar9,0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        goto LAB_029c0168;
      }
    }
    else {
      cVar3 = FUN_0298e548(param_1,0);
      if (cVar3 == '\0') {
        return;
      }
      if (param_3 < 1) {
        return;
      }
      if (*(int *)(param_2 + 0x18) != 0) {
        uVar7 = FUN_026b7320((char *)(param_2 + 0x20),0);
        uVar8 = FUN_0276793c(&local_34,0);
        uVar7 = FUN_025be45c(*(undefined8 *)PTR_DAT_03d08860,uVar7,*(undefined8 *)PTR_DAT_03d08870,
                             uVar8,0);
        goto LAB_029c0098;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


