/*
FUNCTION_NAME: RequestPermissions$$remove_OnPermissionCallbackRecieved
ENTRY_POINT: 07d3fa08
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void RequestPermissions__remove_OnPermissionCallbackRecieved(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  int in_w8;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  undefined8 unaff_x19;
  long *unaff_x21;
  
  if (in_w8 == 0) {
    thunk_FUN_044a54b4();
  }
  if (DAT_0a528e76 == '\0') {
    FUN_04447ba8(PTR_DAT_09f36318);
    DAT_0a528e76 = '\x01';
  }
  lVar4 = *unaff_x21;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar4 = *unaff_x21;
  }
  **(undefined8 **)(lVar4 + 0xb8) = unaff_x19;
  puVar3 = PTR_DAT_09f54840;
  puVar2 = PTR_DAT_09f54828;
  thunk_FUN_044bb4b4(*(undefined8 *)(*unaff_x21 + 0xb8));
  iVar10 = 0;
  while( true ) {
    lVar4 = *unaff_x21;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_044a54b4(lVar4);
      lVar4 = *unaff_x21;
    }
    lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar5 == 0) break;
    iVar1 = *(int *)(lVar5 + 0x18);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_044a54b4(lVar4);
      lVar5 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8);
      if (lVar5 == 0) break;
    }
    if (iVar1 <= iVar10) {
      iVar10 = *(int *)(lVar5 + 0x18);
      *(undefined4 *)(lVar5 + 0x18) = 0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (0 < iVar10) {
        FUN_07a61000(*(undefined8 *)(lVar5 + 0x10),0,iVar10,0);
        return;
      }
      return;
    }
    plVar6 = (long *)FUN_05badb74(lVar5,iVar10,*(undefined8 *)puVar3);
    if (plVar6 != (long *)0x0) {
      lVar4 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar4 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto LAB_07d3fb24;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_044822ac(plVar6,*(long *)puVar2,3);
LAB_07d3fb24:
      uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_07d3fb98(plVar6);
      }
    }
    iVar10 = iVar10 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


