/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.HierarchyItemButton$$Setup
ENTRY_POINT: 05194b08
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton__Setup
               (undefined8 *param_1,undefined4 *param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  int local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  iVar1 = param_2[1];
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      plVar10 = *(long **)(param_2 + 6);
      if (plVar10 == (long *)0x0) {
LAB_05194d28:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar3 = *(long *)(param_3 + 0x20);
      uVar2 = *param_2;
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02dcfd18();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02dcfd18(lVar3);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar3) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05194cd4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_02dd004c(plVar10,lVar3,0);
LAB_05194cd4:
      (*(code *)*puVar4)(&local_40,plVar10,uVar2,puVar4[1]);
    }
    else {
      if (iVar1 != 2) {
LAB_05194d2c:
        local_58 = iVar1;
        lVar3 = FUN_0297e1dc(*(undefined8 *)(param_3 + 0x20));
        uVar5 = thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x50),&local_58);
        uVar6 = thunk_FUN_02dfd288(PTR_DAT_06a0e908);
        uVar5 = FUN_0536388c(uVar6,uVar5,0);
        thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
        uVar6 = thunk_FUN_02dd3144();
        FUN_054e8008(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar6,param_3);
      }
      if ((*(ushort *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      uStack_38 = *(undefined8 *)(param_2 + 0x22);
      local_40 = *(undefined8 *)(param_2 + 0x20);
      local_30 = *(undefined8 *)(param_2 + 0x24);
    }
  }
  else if (iVar1 == 3) {
    if ((*(ushort *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    uStack_38 = *(undefined8 *)(param_2 + 0xe);
    local_40 = *(undefined8 *)(param_2 + 0xc);
    local_30 = *(undefined8 *)(param_2 + 0x10);
  }
  else if (iVar1 == 4) {
    lVar3 = *(long *)(param_3 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    FUN_05195180(&local_58,param_2 + 0x12,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xf0));
    local_40 = CONCAT44(uStack_54,local_58);
    uStack_38 = uStack_50;
    local_30 = local_48;
  }
  else {
    if (iVar1 != 5) goto LAB_05194d2c;
    plVar10 = *(long **)(param_2 + 4);
    if (plVar10 == (long *)0x0) goto LAB_05194d28;
    lVar3 = *(long *)(param_3 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18(lVar3);
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05194cf8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_02dd004c(plVar10,lVar3,0);
LAB_05194cf8:
    (*(code *)*puVar4)(&local_40,plVar10,puVar4[1]);
  }
  param_1[1] = uStack_38;
  *param_1 = local_40;
  param_1[2] = local_30;
  return;
}


