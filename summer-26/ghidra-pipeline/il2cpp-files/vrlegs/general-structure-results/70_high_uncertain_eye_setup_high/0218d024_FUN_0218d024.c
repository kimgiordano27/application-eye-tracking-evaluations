/*
FUNCTION_NAME: FUN_0218d024
ENTRY_POINT: 0218d024
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0218d58c) */
/* WARNING: Removing unreachable block (ram,0x0218d620) */

undefined8 FUN_0218d024(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 local_58;
  char local_54 [4];
  
  if ((DAT_041220da & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbe5c8);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(PTR_DAT_03cc0270);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    DAT_041220da = 1;
  }
  local_54[0] = '\0';
  local_58 = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01a46ff8();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01a46ff8();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01a46ff8();
  }
  puVar1 = PTR_DAT_03cbdf88;
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01a46ff8();
  }
  uVar8 = **(undefined8 **)(lVar2 + 0xb8);
  thunk_FUN_01a4b338();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_036cee6c(uVar8,0,0);
  lVar2 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01a46ff8(lVar2);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01a46ff8();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01a46ff8();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01a46ff8();
  }
  puVar6 = *(undefined8 **)(lVar2 + 0xb8);
  if ((uVar3 & 1) == 0) {
    uVar8 = puVar6[1];
    local_54[0] = '\0';
    FUN_027e0bd8(uVar8,local_54,0);
    lVar2 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01a46ff8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01a46ff8();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar2 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01a46ff8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01a46ff8();
    }
    uVar9 = **(undefined8 **)(lVar2 + 0xb8);
    thunk_FUN_01a4b338();
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_036d35a8(uVar9,0,0);
    if ((uVar3 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01a46ff8();
      }
      uVar9 = *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe5e8);
      }
      uVar9 = FUN_0277b678(uVar9,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar2 = FUN_036d4494(uVar9,0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
        uVar3 = 0;
        uVar7 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
        do {
          if (uVar7 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar4 = *(long *)(param_1 + 0x20);
          lVar10 = *(long *)(lVar2 + 0x20 + uVar3 * 8);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01a46ff8();
          }
          lVar4 = **(long **)(lVar4 + 0xc0);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01a46ff8(lVar4);
          }
          if (lVar10 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = thunk_FUN_01a89d6c(lVar10,lVar4);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6ee0(lVar10,lVar4);
            }
          }
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar7 = FUN_036cee6c(lVar5,0,0);
          if ((uVar7 & 1) != 0) {
            lVar2 = *(long *)(param_1 + 0x20);
            if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_01a46ff8();
            }
            lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
            if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_01a46ff8();
            }
            if (*(int *)(lVar2 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            thunk_FUN_01a4b338();
            lVar2 = *(long *)(param_1 + 0x20);
            if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_01a46ff8();
            }
            lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
            if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_01a46ff8();
            }
            **(long **)(lVar2 + 0xb8) = lVar5;
            lVar2 = *(long *)(param_1 + 0x20);
            if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_01a46ff8();
            }
            lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
            if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_01a46ff8();
            }
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (*(undefined8 *)(lVar2 + 0xb8),lVar5);
            break;
          }
          uVar7 = (ulong)*(uint *)(lVar2 + 0x18);
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)(int)*(uint *)(lVar2 + 0x18));
      }
      lVar2 = *(long *)(param_1 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01a46ff8();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01a46ff8();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar2 = *(long *)(param_1 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01a46ff8();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01a46ff8();
      }
      uVar9 = **(undefined8 **)(lVar2 + 0xb8);
      thunk_FUN_01a4b338();
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar3 = FUN_036d35a8(uVar9,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc0270 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        local_58 = FUN_036e9830(0);
        uVar3 = FUN_036e8c10(&local_58,0);
        if ((uVar3 & 1) != 0) {
          lVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe5c8);
          FUN_036cfa1c(lVar2,0);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_036cf564(lVar2,0,0);
          lVar4 = *(long *)(param_1 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01a46ff8();
          }
          uVar9 = FUN_01f7e2fc(lVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28));
          lVar4 = *(long *)(param_1 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01a46ff8();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01a46ff8();
          }
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          thunk_FUN_01a4b338();
          lVar4 = *(long *)(param_1 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01a46ff8();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01a46ff8();
          }
          **(undefined8 **)(lVar4 + 0xb8) = uVar9;
          lVar4 = *(long *)(param_1 + 0x20);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01a46ff8();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01a46ff8();
          }
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (*(undefined8 *)(lVar4 + 0xb8),uVar9);
          FUN_036cf564(lVar2,1,0);
        }
      }
    }
    if (local_54[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar8,0);
    }
    lVar2 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01a46ff8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01a46ff8();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar2 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01a46ff8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01a46ff8();
    }
    puVar6 = *(undefined8 **)(lVar2 + 0xb8);
  }
  uVar8 = *puVar6;
  thunk_FUN_01a4b338();
  return uVar8;
}


