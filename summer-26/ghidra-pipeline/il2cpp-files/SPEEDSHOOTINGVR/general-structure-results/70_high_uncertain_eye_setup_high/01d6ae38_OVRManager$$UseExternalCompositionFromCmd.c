/*
FUNCTION_NAME: OVRManager$$UseExternalCompositionFromCmd
ENTRY_POINT: 01d6ae38
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UseExternalCompositionFromCmd(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x21;
  int unaff_w22;
  long unaff_x23;
  int unaff_w24;
  int unaff_w25;
  
  if (unaff_w25 < 0) {
    thunk_FUN_010303a8(PTR_DAT_0234be28);
    uVar8 = thunk_FUN_010400dc();
    puVar9 = PTR_DAT_02351040;
LAB_01d6b0d0:
    uVar10 = thunk_FUN_010303a8(puVar9);
    puVar9 = PTR_DAT_02358a08;
  }
  else {
    if (unaff_w24 < 0) {
      thunk_FUN_010303a8(PTR_DAT_0234be28);
      uVar8 = thunk_FUN_010400dc();
      puVar9 = PTR_DAT_02351048;
      goto LAB_01d6b0d0;
    }
    uVar5 = FUN_0105cb24();
    if ((uVar5 & 1) != 0) {
      return;
    }
    iVar1 = FUN_0105cdc0();
    iVar2 = FUN_0105cdc0();
    iVar2 = unaff_w24 - iVar2;
    if (-1 < iVar2) {
      iVar3 = FUN_01d60e34();
      if (iVar3 - unaff_w22 < unaff_w25 - iVar1) {
        thunk_FUN_010303a8(PTR_DAT_0234bcd0);
        uVar8 = thunk_FUN_010400dc();
        uVar10 = thunk_FUN_010303a8(PTR_DAT_0234be18);
        FUN_01c65ad0(uVar8,uVar10,0);
      }
      else {
        iVar3 = FUN_01d60e34();
        if (iVar2 <= iVar3 - unaff_w22) {
          plVar6 = (long *)thunk_FUN_0105d828();
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x408))(plVar6,*(undefined8 *)(*plVar6 + 0x410));
            plVar6 = (long *)thunk_FUN_0105d828();
            if ((plVar6 != (long *)0x0) &&
               (plVar6 = (long *)(**(code **)(*plVar6 + 0x408))
                                           (plVar6,*(undefined8 *)(*plVar6 + 0x410)),
               plVar6 != (long *)0x0)) {
              uVar4 = (**(code **)(*plVar6 + 0x5c8))(plVar6,*(undefined8 *)(*plVar6 + 0x5d0));
              if ((unaff_x21 == unaff_x23) && (unaff_w25 - iVar1 <= iVar2)) {
                for (; 0 < unaff_w22; unaff_w22 = unaff_w22 + -1) {
                  FUN_0105cf40();
                  FUN_0105d0a0();
                }
                return;
              }
              if (unaff_w22 < 1) {
                return;
              }
              while (lVar7 = FUN_0105cf40(), lVar7 != 0 || ((uVar4 ^ 0xffffffff) & 1) != 0) {
                FUN_0105d0a0();
                unaff_w22 = unaff_w22 + -1;
                if (unaff_w22 == 0) {
                  return;
                }
              }
              thunk_FUN_010303a8(PTR_DAT_0234c890);
              uVar8 = thunk_FUN_010400dc();
              FUN_01d4a4a4(uVar8,0);
              goto LAB_01d6b0f8;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        thunk_FUN_010303a8(PTR_DAT_0234bcd0);
        uVar8 = thunk_FUN_010400dc();
        uVar10 = thunk_FUN_010303a8(PTR_DAT_02358a20);
        uVar11 = thunk_FUN_010303a8(PTR_DAT_023589f8);
        FUN_01c5e198(uVar8,uVar10,uVar11,0);
      }
      goto LAB_01d6b0f8;
    }
    thunk_FUN_010303a8(PTR_DAT_0234be28);
    uVar8 = thunk_FUN_010400dc();
    uVar10 = thunk_FUN_010303a8(PTR_DAT_02351048);
    puVar9 = PTR_DAT_02358a18;
  }
  uVar11 = thunk_FUN_010303a8(puVar9);
  FUN_01c62494(uVar8,uVar10,uVar11,0);
LAB_01d6b0f8:
  uVar10 = thunk_FUN_010303a8(PTR_DAT_02358a10);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar8,uVar10);
}


