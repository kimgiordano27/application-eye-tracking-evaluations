/*
FUNCTION_NAME: HurricaneVR.Framework.Weapons.Guns.HVRCockingHandle$$.ctor
ENTRY_POINT: 0218d26c
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

undefined8 HurricaneVR_Framework_Weapons_Guns_HVRCockingHandle___ctor(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x25;
  ulong uVar7;
  undefined4 uStack0000000000000008;
  char cStack000000000000000c;
  
  lVar1 = FUN_036d4494();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
    uVar7 = 0;
    uVar4 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
    do {
      if (uVar4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar2 = *(long *)(unaff_x19 + 0x20);
      lVar6 = *(long *)(lVar1 + 0x20 + uVar7 * 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01a46ff8();
      }
      lVar2 = **(long **)(lVar2 + 0xc0);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01a46ff8(lVar2);
      }
      if (lVar6 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = thunk_FUN_01a89d6c(lVar6,lVar2);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(lVar6,lVar2);
        }
      }
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar4 = FUN_036cee6c(lVar3,0,0);
      if ((uVar4 & 1) != 0) {
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
        **(long **)(lVar1 + 0xb8) = lVar3;
        lVar1 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_01a46ff8();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x18);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_01a46ff8();
        }
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  (*(undefined8 *)(lVar1 + 0xb8),lVar3);
        break;
      }
      uVar4 = (ulong)*(uint *)(lVar1 + 0x18);
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)(int)*(uint *)(lVar1 + 0x18));
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
  uVar5 = **(undefined8 **)(lVar1 + 0xb8);
  thunk_FUN_01a4b338();
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar7 = FUN_036d35a8(uVar5,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_03cc0270 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uStack0000000000000008 = FUN_036e9830(0);
    uVar7 = FUN_036e8c10(&stack0x00000008,0);
    if ((uVar7 & 1) != 0) {
      lVar1 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe5c8);
      FUN_036cfa1c(lVar1,0);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_036cf564(lVar1,0,0);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01a46ff8();
      }
      uVar5 = FUN_01f7e2fc(lVar1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x28));
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
      **(undefined8 **)(lVar2 + 0xb8) = uVar5;
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01a46ff8();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01a46ff8();
      }
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (*(undefined8 *)(lVar2 + 0xb8),uVar5);
      FUN_036cf564(lVar1,1,0);
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
  uVar5 = **(undefined8 **)(lVar1 + 0xb8);
  thunk_FUN_01a4b338();
  return uVar5;
}


