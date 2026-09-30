/*
FUNCTION_NAME: FUN_0386c880
ENTRY_POINT: 0386c880
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void FUN_0386c880(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  puVar4 = Method_OVREyeGaze_OnPermissionGranted__;
  if ((DAT_045393a9 & 1) == 0) {
    FUN_01c5d288(Method_OVREyeGaze_OnPermissionGranted__);
    DAT_045393a9 = 1;
  }
  iVar3 = *(int *)(param_1 + 0x1c);
  lVar10 = *(long *)(param_1 + 0x10);
  plVar5 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar4,iVar3 * 2 + 2);
  if (lVar10 != 0) {
    uVar2 = iVar3 << 1 | 1;
    if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
      uVar11 = 0;
      uVar7 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar11) {
LAB_0386c994:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        lVar9 = *(long *)(lVar10 + uVar11 * 8 + 0x20);
        if (lVar9 != 0) {
          if (plVar5 == (long *)0x0) goto LAB_0386c9a4;
          lVar8 = plVar5[3];
          do {
            uVar1 = *(uint *)(lVar9 + 0x30) & uVar2;
            if ((uint)lVar8 <= uVar1) goto LAB_0386c994;
            lVar12 = *(long *)(lVar9 + 0x40);
            *(long *)(lVar9 + 0x40) = plVar5[(long)(int)uVar1 + 4];
            lVar8 = thunk_FUN_01c495e4(lVar9,*(undefined8 *)(*plVar5 + 0x40));
            if (lVar8 == 0) {
              uVar6 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar6,0);
            }
            lVar8 = plVar5[3];
            if ((uint)lVar8 <= uVar1) goto LAB_0386c994;
            plVar5[(long)(int)uVar1 + 4] = lVar9;
            lVar9 = lVar12;
          } while (lVar12 != 0);
        }
        uVar7 = (ulong)*(uint *)(lVar10 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((long)uVar11 < (long)(int)*(uint *)(lVar10 + 0x18));
    }
    *(long **)(param_1 + 0x10) = plVar5;
    *(uint *)(param_1 + 0x1c) = uVar2;
    return;
  }
LAB_0386c9a4:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


