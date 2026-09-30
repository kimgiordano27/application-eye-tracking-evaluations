/*
FUNCTION_NAME: HurricaneVR.Framework.Weapons.Guns.HVRCockingHandle$$OnReleased
ENTRY_POINT: 0218d0f0
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

undefined8 HurricaneVR_Framework_Weapons_Guns_HVRCockingHandle__OnReleased(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long unaff_x19;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *unaff_x25;
  undefined4 uStack0000000000000008;
  char cStack000000000000000c;
  
  thunk_FUN_01a4b338();
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar1 = FUN_036cee6c();
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01a46ff8(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01a46ff8();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01a46ff8();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01a46ff8();
  }
  puVar5 = *(undefined8 **)(lVar4 + 0xb8);
  if ((uVar1 & 1) == 0) {
    uVar7 = puVar5[1];
    cStack000000000000000c = '\0';
    FUN_027e0bd8(uVar7,(long)&stack0x00000008 + 4,0);
    lVar4 = *(long *)(unaff_x19 + 0x20);
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
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01a46ff8();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01a46ff8();
    }
    uVar8 = **(undefined8 **)(lVar4 + 0xb8);
    thunk_FUN_01a4b338();
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar1 = FUN_036d35a8(uVar8,0,0);
    if ((uVar1 & 1) != 0) {
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01a46ff8();
      }
      uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe5e8);
      }
      uVar8 = FUN_0277b678(uVar8,0);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar4 = FUN_036d4494(uVar8,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
        uVar1 = 0;
        uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        do {
          if (uVar6 <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar2 = *(long *)(unaff_x19 + 0x20);
          lVar9 = *(long *)(lVar4 + 0x20 + uVar1 * 8);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01a46ff8();
          }
          lVar2 = **(long **)(lVar2 + 0xc0);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01a46ff8(lVar2);
          }
          if (lVar9 == 0) {
            lVar3 = 0;
          }
          else {
            lVar3 = thunk_FUN_01a89d6c(lVar9,lVar2);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6ee0(lVar9,lVar2);
            }
          }
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar6 = FUN_036cee6c(lVar3,0,0);
          if ((uVar6 & 1) != 0) {
            lVar4 = *(long *)(unaff_x19 + 0x20);
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
            lVar4 = *(long *)(unaff_x19 + 0x20);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_01a46ff8();
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_01a46ff8();
            }
            **(long **)(lVar4 + 0xb8) = lVar3;
            lVar4 = *(long *)(unaff_x19 + 0x20);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_01a46ff8();
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_01a46ff8();
            }
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (*(undefined8 *)(lVar4 + 0xb8),lVar3);
            break;
          }
          uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
          uVar1 = uVar1 + 1;
        } while ((long)uVar1 < (long)(int)*(uint *)(lVar4 + 0x18));
      }
      lVar4 = *(long *)(unaff_x19 + 0x20);
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
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01a46ff8();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01a46ff8();
      }
      uVar8 = **(undefined8 **)(lVar4 + 0xb8);
      thunk_FUN_01a4b338();
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar1 = FUN_036d35a8(uVar8,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc0270 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uStack0000000000000008 = FUN_036e9830(0);
        uVar1 = FUN_036e8c10(&stack0x00000008,0);
        if ((uVar1 & 1) != 0) {
          lVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe5c8);
          FUN_036cfa1c(lVar4,0);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_036cf564(lVar4,0,0);
          lVar2 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01a46ff8();
          }
          uVar8 = FUN_01f7e2fc(lVar4,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x28));
          lVar2 = *(long *)(unaff_x19 + 0x20);
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
          lVar2 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01a46ff8();
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01a46ff8();
          }
          **(undefined8 **)(lVar2 + 0xb8) = uVar8;
          lVar2 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01a46ff8();
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01a46ff8();
          }
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (*(undefined8 *)(lVar2 + 0xb8),uVar8);
          FUN_036cf564(lVar4,1,0);
        }
      }
    }
    if (cStack000000000000000c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
    }
    lVar4 = *(long *)(unaff_x19 + 0x20);
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
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01a46ff8();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01a46ff8();
    }
    puVar5 = *(undefined8 **)(lVar4 + 0xb8);
  }
  uVar7 = *puVar5;
  thunk_FUN_01a4b338();
  return uVar7;
}


