/*
FUNCTION_NAME: FUN_02e9ec08
ENTRY_POINT: 02e9ec08
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02e9ef4c) */

void FUN_02e9ec08(long param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined2 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 local_44;
  undefined2 local_40 [2];
  char local_3c [4];
  ulong local_38;
  
  if ((DAT_0412a5f5 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d1f440);
    FUN_01ab69ac(PTR_DAT_03cbede8);
    DAT_0412a5f5 = 1;
  }
  local_3c[0] = '\0';
  local_44 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar7 = FUN_02ee980c(*(long *)(param_1 + 0x20),0);
    if ((uVar7 & 1) == 0) {
      uVar12 = *(undefined8 *)(param_1 + 0x38);
      local_3c[0] = '\0';
      FUN_027e0bd8(uVar12,local_3c,0);
      if (((uint)*(ulong *)(param_1 + 0x30) >> 0x1a & 1) == 0) {
        *(ulong *)(param_1 + 0x30) = *(ulong *)(param_1 + 0x30) | 0x4000000;
        FUN_02ea5980(param_1);
        uVar6 = 4;
        *(ulong *)(param_1 + 0x30) = *(ulong *)(param_1 + 0x30) & 0xfffffffffbffffff;
      }
      else {
        uVar6 = 2;
      }
      if (local_3c[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar12,0);
      }
      if ((uVar6 | 2) != 2) {
        return;
      }
    }
    local_38 = *(ulong *)(param_1 + 0x30);
    lVar11 = *(long *)(param_1 + 0x38);
    if (lVar11 != 0) {
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      uVar10 = *(undefined2 *)(lVar11 + 0x2c);
      uVar2 = *(undefined2 *)(lVar11 + 0x30);
      if (*(int *)(*(long *)PTR_DAT_03cbede8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar11 = FUN_02ea5db8(uVar12,uVar10,uVar2,&local_38,lVar11 + 0x18);
      if (lVar11 != 0) {
        if (*(int *)(lVar11 + 0x10) != 0) {
          if ((*(ulong *)(param_1 + 0x30) & 0x70000) == 0x50000) {
            local_40[0] = 0;
            iVar5 = thunk_FUN_01a5ddb0(0);
            uVar6 = FUN_02ea5f94(param_1,lVar11 + iVar5,local_40,*(undefined4 *)(lVar11 + 0x10),
                                 0xffff);
            uVar7 = *(ulong *)(param_1 + 0x30);
            if (((uVar6 >> 1 & 1) == 0) &&
               (((uVar6 >> 5 & 1) != 0 || (((uint)uVar7 >> 0x1d & 1) == 0)))) {
              local_38 = local_38 | 4;
            }
            if ((uVar7 & 0x20000000) != 0 && (uVar6 & 0x21) != 0) {
              uVar6 = uVar6 & 0x10;
            }
            if (((uVar6 & 0x11) != 1) &&
               (local_38 = local_38 | 0x100, ((uint)uVar7 >> 0x13 & 1) == 0)) {
              local_44 = 0;
              uVar1 = *(undefined4 *)(lVar11 + 0x10);
              uVar10 = 0x25;
              if ((uVar7 & 0x20000000) != 0) {
                uVar10 = 0xffff;
              }
              if (*(int *)(*(long *)PTR_DAT_03d1f440 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              lVar8 = FUN_02ee7264(lVar11,0,uVar1,0,&local_44,1,0x3f,0x23,uVar10,0);
              if (lVar8 != 0) {
                lVar11 = FUN_025c65fc(0,lVar8,0,local_44,0);
              }
            }
          }
          else if (((uint)*(ulong *)(param_1 + 0x30) >> 0x19 & 1) == 0) {
            lVar8 = *(long *)(param_1 + 0x38);
            if (lVar8 == 0) goto LAB_02e9ef48;
            if (*(long *)(lVar8 + 0x18) == 0) {
              if (0 < *(int *)(lVar11 + 0x10)) {
                uVar6 = 0;
                do {
                  if ((uint)*(ushort *)(lVar8 + 0x36) <= uVar6 + *(ushort *)(lVar8 + 0x2c))
                  goto LAB_02e9ee50;
                  sVar3 = FUN_025b8a2c(lVar11,uVar6,0);
                  if ((*(long *)(param_1 + 0x38) == 0) || (*(long *)(param_1 + 0x10) == 0)) break;
                  sVar4 = FUN_025b8a2c(*(long *)(param_1 + 0x10),
                                       uVar6 + *(ushort *)(*(long *)(param_1 + 0x38) + 0x2c),0);
                  if (sVar3 != sVar4) goto LAB_02e9ee50;
                  uVar6 = uVar6 + 1 & 0xffff;
                  if (*(int *)(lVar11 + 0x10) <= (int)uVar6) goto LAB_02e9ee60;
                  lVar8 = *(long *)(param_1 + 0x38);
                } while (lVar8 != 0);
                goto LAB_02e9ef48;
              }
            }
            else {
LAB_02e9ee50:
              local_38 = local_38 | 0x104;
            }
          }
        }
LAB_02e9ee60:
        if (*(long *)(param_1 + 0x38) != 0) {
          plVar9 = (long *)(*(long *)(param_1 + 0x38) + 0x10);
          *plVar9 = lVar11;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9,lVar11);
          uVar12 = *(undefined8 *)(param_1 + 0x38);
          local_3c[0] = '\0';
          FUN_027e0bd8(uVar12,local_3c,0);
          *(ulong *)(param_1 + 0x30) = local_38 | *(ulong *)(param_1 + 0x30);
          if (local_3c[0] != '\0') {
            OVRManager_<>c__<InitOVRManager>b__424_0(uVar12,0);
          }
          return;
        }
      }
    }
  }
LAB_02e9ef48:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


