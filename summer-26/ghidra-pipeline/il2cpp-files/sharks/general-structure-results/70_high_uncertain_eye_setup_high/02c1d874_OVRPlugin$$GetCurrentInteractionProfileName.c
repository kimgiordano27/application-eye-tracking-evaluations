/*
FUNCTION_NAME: OVRPlugin$$GetCurrentInteractionProfileName
ENTRY_POINT: 02c1d874
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetCurrentInteractionProfileName(long *param_1)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  
  if ((DAT_03a25ece & 1) == 0) {
    FUN_017fc350(PTR_DAT_03802908);
    FUN_017fc350(PTR_DAT_037f7340);
    DAT_03a25ece = 1;
  }
  if (param_1 == (long *)0x0) goto LAB_02c1db40;
  plVar2 = (long *)(**(code **)(*param_1 + 0x288))(param_1,1,*(undefined8 *)(*param_1 + 0x290));
  uVar3 = FUN_02b0f554(plVar2,0,0);
  if ((uVar3 & 1) == 0) {
    if (plVar2 == (long *)0x0) goto LAB_02c1db40;
    uVar3 = FUN_02b0f3d4(plVar2,0);
    if ((uVar3 & 1) == 0) goto LAB_02c1d8ec;
  }
  else {
LAB_02c1d8ec:
    plVar2 = (long *)(**(code **)(*param_1 + 0x2b8))(param_1,1,*(undefined8 *)(*param_1 + 0x2c0));
  }
  uVar3 = FUN_02b0f554(plVar2,0,0);
  if ((uVar3 & 1) == 0) {
    if (plVar2 == (long *)0x0) {
LAB_02c1db40:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar3 = FUN_02b0f3d4(plVar2,0);
    if ((uVar3 & 1) != 0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_03802908 + 0x130);
      if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03802908))
      {
                    /* WARNING: Subroutine does not return */
        FUN_017fc944(plVar2);
      }
      plVar4 = (long *)FUN_02b1c1d0(plVar2,0);
      uVar3 = FUN_02b0f518(plVar4,0,0);
      if (((uVar3 & 1) != 0) && (uVar3 = FUN_02b0f518(plVar4,plVar2,0), (uVar3 & 1) != 0)) {
        lVar5 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
        if ((lVar5 == 0) || (*(long *)(lVar5 + 0x18) == 0)) {
          if (plVar4 != (long *)0x0) {
            lVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
            uVar9 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
            uVar10 = (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
            if (lVar5 != 0) {
              uVar9 = FUN_02be8fbc(lVar5,uVar9,uVar10,0);
              return uVar9;
            }
          }
        }
        else {
          plVar2 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f7340);
          if (plVar2 != (long *)0x0) {
            if (0 < (int)plVar2[3]) {
              uVar11 = 0;
              do {
                if (*(uint *)(lVar5 + 0x18) <= uVar11) {
LAB_02c1db44:
                    /* WARNING: Subroutine does not return */
                  FUN_017fc5b0();
                }
                plVar6 = *(long **)(lVar5 + (long)(int)uVar11 * 8 + 0x20);
                if (plVar6 == (long *)0x0) goto LAB_02c1db40;
                lVar7 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
                if ((lVar7 != 0) &&
                   (lVar8 = thunk_FUN_01861ac0(lVar7,*(undefined8 *)(*plVar2 + 0x40)), lVar8 == 0))
                {
                  uVar9 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
                  FUN_017fc474(uVar9,0);
                }
                if (*(uint *)(plVar2 + 3) <= uVar11) goto LAB_02c1db44;
                plVar2[(long)(int)uVar11 + 4] = lVar7;
                thunk_FUN_0188fd20(plVar2 + (long)(int)uVar11 + 4,lVar7);
                uVar11 = uVar11 + 1;
              } while ((int)uVar11 < (int)plVar2[3]);
            }
            if (plVar4 != (long *)0x0) {
              lVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
              uVar9 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
              uVar10 = (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
              if (lVar5 != 0) {
                uVar9 = FUN_02be90b4(lVar5,uVar9,uVar10,plVar2,0);
                return uVar9;
              }
            }
          }
        }
        goto LAB_02c1db40;
      }
    }
  }
  return 0;
}


