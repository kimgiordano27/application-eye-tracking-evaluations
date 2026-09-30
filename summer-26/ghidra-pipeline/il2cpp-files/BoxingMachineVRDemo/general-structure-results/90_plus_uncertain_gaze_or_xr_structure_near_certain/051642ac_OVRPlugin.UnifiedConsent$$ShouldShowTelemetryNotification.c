/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$ShouldShowTelemetryNotification
ENTRY_POINT: 051642ac
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnifiedConsent__ShouldShowTelemetryNotification
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  code *pcVar7;
  int *in_x10;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  int iVar9;
  long *unaff_x26;
  
  do {
    in_x9 = in_x9 + -1;
    piVar8 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_02d9a5d4();
      goto LAB_051642d8;
    }
    plVar4 = (long *)(in_x10 + 2);
    in_x10 = piVar8;
  } while (*plVar4 != param_3);
  puVar2 = (undefined8 *)(param_1 + (long)(*piVar8 + 2) * 0x10 + 0x138);
LAB_051642d8:
  lVar3 = (*(code *)*puVar2)();
  if (lVar3 == 0) goto LAB_05164658;
  if (*(int *)(lVar3 + 0x18) == 0) {
    lVar3 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_05164340;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_05164340:
    lVar3 = (*(code *)*puVar2)();
    puVar1 = PTR_DAT_06782540;
    if (lVar3 == 0) goto LAB_05164658;
    if (*(int *)(lVar3 + 0x18) == 0) {
      lVar3 = thunk_FUN_02d9d438();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88();
      }
      lVar3 = *(long *)puVar1;
      plVar4 = (long *)thunk_FUN_02d9d438();
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88();
      }
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_05164604;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_02d9a5d4(plVar4,lVar3,2);
LAB_05164604:
      uVar6 = (*(code *)*puVar2)(plVar4,puVar2[1]);
      if ((uVar6 & 1) == 0) {
        if (unaff_x19 != (long *)0x0) {
          (**(code **)(*unaff_x19 + 0x698))();
          goto LAB_051644a0;
        }
      }
      else if (unaff_x19 != (long *)0x0) {
        pcVar7 = *(code **)(*unaff_x19 + 0x658);
LAB_05164498:
        (*pcVar7)();
LAB_051644a0:
        (**(code **)(*unaff_x20 + 0x1e8))();
        return;
      }
      goto LAB_05164658;
    }
  }
  if (unaff_x19 != (long *)0x0) {
    (**(code **)(*unaff_x19 + 0x578))();
    puVar1 = PTR_DAT_06782408;
    iVar9 = 0;
    do {
      lVar3 = *unaff_x21;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar8 + 3) * 0x10 + 0x138);
            goto LAB_051643cc;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_051643cc:
      lVar3 = (*(code *)*puVar2)();
      if (lVar3 == 0) break;
      if (*(int *)(lVar3 + 0x18) <= iVar9) {
        FUN_051652f4();
        pcVar7 = *(code **)(*unaff_x19 + 0x588);
        goto LAB_05164498;
      }
      lVar3 = *unaff_x21;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar8 + 3) * 0x10 + 0x138);
            goto LAB_05164438;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_05164438:
      lVar3 = (*(code *)*puVar2)();
      if (lVar3 == 0) break;
      FUN_03aac1c4(lVar3,iVar9,*(undefined8 *)puVar1);
      FUN_05163090();
      iVar9 = iVar9 + 1;
    } while( true );
  }
LAB_05164658:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


