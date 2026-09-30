/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager.ShouldRetrieveInstanceDelegate$$Invoke
ENTRY_POINT: 06d9b5cc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_ImmersiveDebugger_Manager_DebugManager_ShouldRetrieveInstanceDelegate__Invoke(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  long *unaff_x22;
  long *plVar8;
  int iVar9;
  
  puVar1 = PTR_DAT_08e8fb10;
  lVar5 = *unaff_x22;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e8fb10) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xd) * 0x10 + 0x138);
        goto LAB_06d9b624;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06d9b624:
  (*(code *)*puVar4)();
  lVar5 = *unaff_x22;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
        goto LAB_06d9b680;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06d9b680:
  iVar2 = (*(code *)*puVar4)();
  if (iVar2 == 3) {
    plVar8 = (long *)(unaff_x20 + 0x20);
    if (*plVar8 != 0) goto LAB_06d9b728;
    lVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8fae8);
    FUN_06d9a5c8();
  }
  else if (iVar2 == 2) {
    plVar8 = (long *)(unaff_x20 + 0x18);
    if (*plVar8 != 0) goto LAB_06d9b728;
    lVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8fbc0);
    FUN_06d9b90c();
  }
  else {
    if (iVar2 != 1) {
      return 0;
    }
    plVar8 = (long *)(unaff_x20 + 0x10);
    if (*plVar8 != 0) goto LAB_06d9b728;
    lVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8fbb8);
    FUN_06d9b87c();
  }
  *plVar8 = lVar5;
  thunk_FUN_03d233cc(plVar8,lVar5);
LAB_06d9b728:
  plVar8 = (long *)*plVar8;
  iVar2 = 0;
  if (plVar8 != (long *)0x0) {
    lVar5 = *(long *)(unaff_x20 + 0x28);
    if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) == 0x20)) {
      plVar8[4] = lVar5;
      thunk_FUN_03d233cc();
    }
    *(undefined4 *)(plVar8 + 5) = *(undefined4 *)(unaff_x20 + 0x40);
    iVar2 = (**(code **)(*plVar8 + 0x178))(plVar8);
    lVar5 = *unaff_x22;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 6) * 0x10 + 0x138);
          goto LAB_06d9b7cc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06d9b7cc:
    iVar3 = (*(code *)*puVar4)();
    if (iVar3 == 3) {
      FUN_0712ec00(*(undefined8 *)(unaff_x20 + 0x30),0);
    }
    else {
      if (0 < iVar2) {
        iVar3 = 0;
        iVar9 = iVar2;
        do {
          FUN_0712ec00(*(undefined8 *)(unaff_x20 + 0x30),iVar3);
          FUN_0712ec00(*(undefined8 *)(unaff_x20 + 0x38),iVar3);
          iVar9 = iVar9 + -1;
          iVar3 = iVar3 + 4;
        } while (iVar9 != 0);
      }
      iVar2 = iVar2 << 1;
    }
  }
  return iVar2;
}


