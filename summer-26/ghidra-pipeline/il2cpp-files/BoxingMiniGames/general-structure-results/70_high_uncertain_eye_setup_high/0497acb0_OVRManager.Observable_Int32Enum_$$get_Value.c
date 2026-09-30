/*
FUNCTION_NAME: OVRManager.Observable<Int32Enum>$$get_Value
ENTRY_POINT: 0497acb0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_Observable<Int32Enum>__get_Value
               (undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x23;
  undefined *puVar6;
  
  if ((*(byte *)(unaff_x23 + 0xbef) & 1) == 0) {
    FUN_03642964(PTR_DAT_07a008f0);
    *(undefined1 *)(unaff_x23 + 0xbef) = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_036aa1c8(PTR_DAT_079fb6c0);
    uVar4 = thunk_FUN_0367fe20();
    FUN_05d7e1a0(uVar4,param_3,0);
  }
  else {
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x28);
    if (lVar1 == 0) goto LAB_0497af64;
    uVar2 = FUN_055b992c(lVar1,*param_1,param_1[1],*(undefined8 *)PTR_DAT_07a008f0);
    if ((uVar2 & 1) == 0) {
      lVar1 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0367c9fc();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0367c9fc();
      }
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      lVar1 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0367c9fc();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0367c9fc();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x30);
      if (lVar1 == 0) goto LAB_0497af64;
      lVar3 = *(long *)(unaff_x19 + 0x20);
      uVar4 = *param_1;
      uVar5 = param_1[1];
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0367c9fc();
      }
      uVar2 = FUN_055b992c(lVar1,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x1f0));
      if ((uVar2 & 1) == 0) {
        lVar1 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_0367c9fc();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_0367c9fc();
        }
        if (*(int *)(lVar1 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        lVar1 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_0367c9fc();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_0367c9fc();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x18);
        if (lVar1 == 0) {
LAB_0497af64:
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar3 = *(long *)(unaff_x19 + 0x20);
        uVar4 = *param_1;
        uVar5 = param_1[1];
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0367c9fc();
        }
        uVar2 = FUN_055b992c(lVar1,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x2a0));
        if ((uVar2 & 1) == 0) {
          lVar1 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0367c9fc();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0367c9fc();
          }
          if (*(int *)(lVar1 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          lVar1 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0367c9fc();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0367c9fc();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x20);
          if (lVar1 != 0) {
            lVar3 = *(long *)(unaff_x19 + 0x20);
            uVar4 = *param_1;
            uVar5 = param_1[1];
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0367c9fc();
            }
            uVar2 = FUN_055b992c(lVar1,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x2a8))
            ;
            if ((uVar2 & 1) == 0) {
              return;
            }
            FUN_0753bfb8(&PTR_DAT_079fd000);
            return;
          }
          goto LAB_0497af64;
        }
        thunk_FUN_036aa1c8(PTR_DAT_079fdb88);
        uVar4 = thunk_FUN_0367fa58();
        puVar6 = PTR_DAT_07a00918;
      }
      else {
        thunk_FUN_036aa1c8(PTR_DAT_079fdb88);
        uVar4 = thunk_FUN_0367fa58();
        puVar6 = PTR_DAT_07a00908;
      }
    }
    else {
      thunk_FUN_036aa1c8(PTR_DAT_079fdb88);
      uVar4 = thunk_FUN_0367fa58();
      puVar6 = PTR_DAT_07a00900;
    }
    uVar5 = thunk_FUN_036aa1c8(puVar6);
    uVar5 = FUN_05c8e390(uVar5,uVar4,0);
    thunk_FUN_036aa1c8(PTR_DAT_079f7680);
    uVar4 = thunk_FUN_0367fe20();
    FUN_05e177c8(uVar4,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar4);
}


