/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_81
ENTRY_POINT: 033fe474
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_<>c__<_cctor>b__786_81(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  
  do {
    FUN_01d996c0();
    lVar8 = *unaff_x23;
    thunk_FUN_01da0934();
    if (lVar8 == 0) {
LAB_033fe57c:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar3 = FUN_033fe8a0(lVar8);
    if ((((uVar3 & 1) != 0) || (lVar9 = *(long *)(lVar8 + 0x20), thunk_FUN_01da0934(), lVar9 == 0))
       || (uVar3 = FUN_033fe9f8(lVar8), (uVar3 & 1) == 0)) {
      puVar1 = StringLiteral_9532;
      if (*unaff_x20 != 0) {
        return;
      }
      lVar8 = *(long *)StringLiteral_9532;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar8 = *(long *)puVar1;
      }
      if (((**(long **)(lVar8 + 0xb8) != 0) &&
          (lVar8 = FUN_026799f0(**(long **)(lVar8 + 0xb8),*(undefined8 *)StringLiteral_9536),
          lVar8 != 0)) && (plVar4 = *(long **)(unaff_x22 + 0x20), plVar4 != (long *)0x0)) {
        iVar2 = (**(code **)(*plVar4 + 0x1a8))
                          (plVar4,*(undefined4 *)(lVar8 + 0x18),*(undefined8 *)(*plVar4 + 0x1b0));
        uVar3 = *(ulong *)(lVar8 + 0x18);
        uVar6 = (uint)uVar3;
        if ((int)uVar6 < 1) {
          return;
        }
        iVar7 = 0;
        if (uVar6 != 0) {
          iVar7 = iVar2 / (int)uVar6;
        }
        uVar5 = iVar2 - iVar7 * uVar6;
        if (uVar5 < uVar6) {
          do {
            iVar2 = iVar2 + 1;
            lVar9 = *(long *)(lVar8 + (long)(int)uVar5 * 8 + 0x20);
            thunk_FUN_01da0934();
            iVar7 = (int)uVar3;
            if ((lVar9 == 0) || (lVar9 == unaff_x21)) {
              if (iVar7 < 2) {
                return;
              }
            }
            else {
              uVar3 = OVRPlugin_<>c__<_cctor>b__786_106(lVar9);
              if (iVar7 < 2) {
                return;
              }
              if ((uVar3 & 1) != 0) {
                return;
              }
            }
            uVar6 = *(uint *)(lVar8 + 0x18);
            uVar3 = (ulong)(iVar7 - 1);
            iVar7 = 0;
            if (uVar6 != 0) {
              iVar7 = iVar2 / (int)uVar6;
            }
            uVar5 = iVar2 - iVar7 * uVar6;
          } while (uVar5 < uVar6);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      goto LAB_033fe57c;
    }
    thunk_FUN_01da0934();
    thunk_FUN_01da0934();
  } while( true );
}


