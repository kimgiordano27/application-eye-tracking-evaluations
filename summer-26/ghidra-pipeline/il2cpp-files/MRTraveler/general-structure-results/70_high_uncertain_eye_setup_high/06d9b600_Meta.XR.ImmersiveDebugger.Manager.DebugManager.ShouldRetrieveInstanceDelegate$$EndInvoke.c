/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager.ShouldRetrieveInstanceDelegate$$EndInvoke
ENTRY_POINT: 06d9b600
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_ImmersiveDebugger_Manager_DebugManager_ShouldRetrieveInstanceDelegate__EndInvoke
              (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long unaff_x20;
  long *unaff_x22;
  long *plVar7;
  int iVar8;
  long *unaff_x25;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)(*in_x10 + 0xd) * 0x10 + 0x138);
      goto LAB_06d9b624;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar3 = (undefined8 *)FUN_03cf1348();
LAB_06d9b624:
  (*(code *)*puVar3)();
  lVar4 = *unaff_x22;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x25) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
        goto LAB_06d9b680;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_03cf1348();
LAB_06d9b680:
  iVar1 = (*(code *)*puVar3)();
  if (iVar1 == 3) {
    plVar7 = (long *)(unaff_x20 + 0x20);
    if (*plVar7 != 0) goto LAB_06d9b728;
    lVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8fae8);
    FUN_06d9a5c8();
  }
  else if (iVar1 == 2) {
    plVar7 = (long *)(unaff_x20 + 0x18);
    if (*plVar7 != 0) goto LAB_06d9b728;
    lVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8fbc0);
    FUN_06d9b90c();
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    plVar7 = (long *)(unaff_x20 + 0x10);
    if (*plVar7 != 0) goto LAB_06d9b728;
    lVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8fbb8);
    FUN_06d9b87c();
  }
  *plVar7 = lVar4;
  thunk_FUN_03d233cc(plVar7,lVar4);
LAB_06d9b728:
  plVar7 = (long *)*plVar7;
  iVar1 = 0;
  if (plVar7 != (long *)0x0) {
    lVar4 = *(long *)(unaff_x20 + 0x28);
    if ((lVar4 == 0) || (*(int *)(lVar4 + 0x18) == 0x20)) {
      plVar7[4] = lVar4;
      thunk_FUN_03d233cc();
    }
    *(undefined4 *)(plVar7 + 5) = *(undefined4 *)(unaff_x20 + 0x40);
    iVar1 = (**(code **)(*plVar7 + 0x178))(plVar7);
    lVar4 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
          goto LAB_06d9b7cc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348();
LAB_06d9b7cc:
    iVar2 = (*(code *)*puVar3)();
    if (iVar2 == 3) {
      FUN_0712ec00(*(undefined8 *)(unaff_x20 + 0x30),0);
    }
    else {
      if (0 < iVar1) {
        iVar2 = 0;
        iVar8 = iVar1;
        do {
          FUN_0712ec00(*(undefined8 *)(unaff_x20 + 0x30),iVar2);
          FUN_0712ec00(*(undefined8 *)(unaff_x20 + 0x38),iVar2);
          iVar8 = iVar8 + -1;
          iVar2 = iVar2 + 4;
        } while (iVar8 != 0);
      }
      iVar1 = iVar1 << 1;
    }
  }
  return iVar1;
}


