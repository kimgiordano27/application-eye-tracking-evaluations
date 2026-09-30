/*
FUNCTION_NAME: FUN_0298d6ac
ENTRY_POINT: 0298d6ac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x0298d824) */
/* WARNING: Removing unreachable block (ram,0x0298d948) */
/* WARNING: Removing unreachable block (ram,0x0298d7a0) */

void FUN_0298d6ac(long *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  char local_34 [4];
  char local_28 [4];
  char local_24 [4];
  
  if ((DAT_04127cd0 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d07968);
    DAT_04127cd0 = 1;
  }
  local_24[0] = '\0';
  local_28[0] = '\0';
  local_34[0] = '\0';
  if ((*(byte *)(param_1 + 8) | 4) == 4) {
    return;
  }
  lVar7 = param_1[0x25];
  if (lVar7 != 0) {
    local_24[0] = '\0';
    FUN_027e0bd8(lVar7,local_24,0);
    lVar9 = param_1[0x25];
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar6 = *(long *)PTR_DAT_03d07968;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    uVar4 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 200));
    if ((uVar4 & 1) == 0) {
      *(undefined4 *)(lVar9 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar9 + 0x18);
      *(undefined4 *)(lVar9 + 0x18) = 0;
      if (0 < iVar1) {
        FUN_02793a34(*(undefined8 *)(lVar9 + 0x10),0,iVar1,0);
      }
    }
    if (local_24[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(lVar7,0);
    }
  }
  lVar7 = param_1[0x31];
  local_28[0] = '\0';
  FUN_027e0bd8(lVar7,local_28,0);
  lVar9 = param_1[0x31];
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar2 = *(uint *)(lVar9 + 0x18);
  if (0 < (int)uVar2) {
    uVar8 = 0;
    do {
      if (uVar2 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (*(long *)(lVar9 + (long)(int)uVar8 * 8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_0298bd58();
      uVar2 = *(uint *)(lVar9 + 0x18);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar2);
  }
  if (local_28[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(lVar7,0);
  }
  lVar7 = param_1[0x22];
  if (lVar7 != 0) {
    cVar3 = *(char *)(lVar7 + 0x10);
    FUN_0298da80(lVar7,0);
    if (param_1[0x24] != 0) {
      lVar7 = FUN_0298d380(param_1[0x24],param_1,4,0,0xff);
      *(undefined1 *)(param_1 + 8) = 4;
      FUN_0298d54c(param_1,lVar7);
      (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
      if (param_1[2] != 0) {
        uVar4 = FUN_0299ec14(param_1[2],0);
        if ((uVar4 & 1) != 0) {
          if (((param_1[2] == 0) || (lVar7 == 0)) ||
             (lVar9 = *(long *)(param_1[2] + 0xa8), lVar9 == 0)) goto LAB_0298d944;
          FUN_029bf178(lVar9,*(undefined4 *)(lVar7 + 0x54),0);
        }
        if (param_1[0x22] != 0) {
          FUN_0298da80(param_1[0x22],cVar3 != '\0');
          plVar5 = (long *)param_1[5];
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
            *(undefined1 *)(param_1 + 8) = 0;
            FUN_0298e1e4(param_1,0x401);
            lVar7 = param_1[0x2b];
            local_34[0] = '\0';
            FUN_027e0bd8(lVar7,local_34,0);
            *(undefined1 *)((long)param_1 + 0x184) = 0;
            if (local_34[0] == '\0') {
              return;
            }
            OVRManager_<>c__<InitOVRManager>b__424_0(lVar7,0);
            return;
          }
        }
      }
    }
  }
LAB_0298d944:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


