/*
FUNCTION_NAME: HurricaneVR.Framework.Weapons.Guns.HVRCockingHandle$$PushBack
ENTRY_POINT: 0218d19c
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

undefined8 HurricaneVR_Framework_Weapons_Guns_HVRCockingHandle__PushBack(ulong param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x25;
  undefined4 uStack0000000000000008;
  char cStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_01a46ff8();
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0xc0) + 0x18);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01a46ff8();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01a46ff8();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x18);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01a46ff8();
  }
  uVar6 = **(undefined8 **)(lVar1 + 0xb8);
  thunk_FUN_01a4b338();
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar2 = FUN_036d35a8(uVar6,0,0);
  if ((uVar2 & 1) != 0) {
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01a46ff8();
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x20);
    if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe5e8);
    }
    uVar6 = FUN_0277b678(uVar6,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar1 = FUN_036d4494(uVar6,0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
      uVar2 = 0;
      uVar5 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar3 = *(long *)(unaff_x19 + 0x20);
        lVar7 = *(long *)(lVar1 + 0x20 + uVar2 * 8);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01a46ff8();
        }
        lVar3 = **(long **)(lVar3 + 0xc0);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01a46ff8(lVar3);
        }
        if (lVar7 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = thunk_FUN_01a89d6c(lVar7,lVar3);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0(lVar7,lVar3);
          }
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar5 = FUN_036cee6c(lVar4,0,0);
        if ((uVar5 & 1) != 0) {
          lVar1 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_01a46ff8();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x18);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_01a46ff8();
          }
          if (*(int *)(lVar1 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          thunk_FUN_01a4b338();
          lVar1 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_01a46ff8();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x18);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_01a46ff8();
          }
          **(long **)(lVar1 + 0xb8) = lVar4;
          lVar1 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_01a46ff8();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x18);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_01a46ff8();
          }
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (*(undefined8 *)(lVar1 + 0xb8),lVar4);
          break;
        }
        uVar5 = (ulong)*(uint *)(lVar1 + 0x18);
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)(int)*(uint *)(lVar1 + 0x18));
    }
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01a46ff8();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x18);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01a46ff8();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01a46ff8();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x18);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01a46ff8();
    }
    uVar6 = **(undefined8 **)(lVar1 + 0xb8);
    thunk_FUN_01a4b338();
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar2 = FUN_036d35a8(uVar6,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_03cc0270 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uStack0000000000000008 = FUN_036e9830(0);
      uVar2 = FUN_036e8c10(&stack0x00000008,0);
      if ((uVar2 & 1) != 0) {
        lVar1 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe5c8);
        FUN_036cfa1c(lVar1,0);
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_036cf564(lVar1,0,0);
        lVar3 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01a46ff8();
        }
        uVar6 = FUN_01f7e2fc(lVar1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28));
        lVar3 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01a46ff8();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x18);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01a46ff8();
        }
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        thunk_FUN_01a4b338();
        lVar3 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01a46ff8();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x18);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01a46ff8();
        }
        **(undefined8 **)(lVar3 + 0xb8) = uVar6;
        lVar3 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01a46ff8();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x18);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01a46ff8();
        }
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  (*(undefined8 *)(lVar3 + 0xb8),uVar6);
        FUN_036cf564(lVar1,1,0);
      }
    }
  }
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01a46ff8();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x18);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01a46ff8();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01a46ff8();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x18);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01a46ff8();
  }
  uVar6 = **(undefined8 **)(lVar1 + 0xb8);
  thunk_FUN_01a4b338();
  return uVar6;
}


