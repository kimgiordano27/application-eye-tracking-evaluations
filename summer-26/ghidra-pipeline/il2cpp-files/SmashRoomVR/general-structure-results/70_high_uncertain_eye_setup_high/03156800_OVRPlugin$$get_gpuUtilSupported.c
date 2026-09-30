/*
FUNCTION_NAME: OVRPlugin$$get_gpuUtilSupported
ENTRY_POINT: 03156800
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 OVRPlugin__get_gpuUtilSupported(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  undefined1 auVar9 [16];
  long lStack0000000000000018;
  
  lStack0000000000000018 = param_1;
  if ((*(byte *)(unaff_x19 + 0xc) & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d803c8);
    thunk_FUN_01ad9084(PTR_DAT_03d80448);
    thunk_FUN_01ad9084(PTR_DAT_03d80450);
    thunk_FUN_01ad9084(PTR_DAT_03d803d0);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
    *(undefined1 *)(unaff_x19 + 0xc) = 1;
  }
  puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
  if (*(int *)(param_1 + 0x10) == 1) goto LAB_03156a94;
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x30);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  plVar8 = *(long **)(lVar4 + 0x40);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar4 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03d803c8) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_031568e8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)PTR_DAT_03d803c8,0);
LAB_031568e8:
  uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
  *(undefined8 *)(lStack0000000000000018 + 0x38) = uVar3;
  thunk_FUN_01b4f09c();
  *(undefined4 *)(lStack0000000000000018 + 0x10) = 0xfffffffd;
  do {
    plVar8 = *(long **)(lStack0000000000000018 + 0x38);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar5 = *plVar8;
    lVar4 = *(long *)puVar1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0315698c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78(plVar8,lVar4,0);
LAB_0315698c:
    uVar6 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    if ((uVar6 & 1) == 0) {
      FUN_03156d1c();
      *(undefined8 *)(lStack0000000000000018 + 0x38) = 0;
      thunk_FUN_01b4f09c((undefined8 *)(lStack0000000000000018 + 0x38),0);
      return 0;
    }
    plVar8 = *(long **)(lStack0000000000000018 + 0x38);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03d803d0) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03156a00;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)PTR_DAT_03d803d0,0);
LAB_03156a00:
    lVar4 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    plVar8 = (long *)FUN_0314d70c(lVar4,0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03d80448) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03156a74;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)PTR_DAT_03d80448,0);
LAB_03156a74:
    uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    *(undefined8 *)(lStack0000000000000018 + 0x40) = uVar3;
    thunk_FUN_01b4f09c();
    param_1 = lStack0000000000000018;
LAB_03156a94:
    plVar8 = *(long **)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar5 = *plVar8;
    lVar4 = *(long *)puVar1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03156af0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78(plVar8,lVar4,0);
LAB_03156af0:
    uVar6 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    if ((uVar6 & 1) != 0) {
      plVar8 = *(long **)(lStack0000000000000018 + 0x40);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar4 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_03156b7c;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    OVRPlugin__get_systemDisplayFrequency();
    *(undefined8 *)(lStack0000000000000018 + 0x40) = 0;
    thunk_FUN_01b4f09c((undefined8 *)(lStack0000000000000018 + 0x40),0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03d80450) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03156b98;
    }
  }
LAB_03156b7c:
  puVar2 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)PTR_DAT_03d80450,0);
LAB_03156b98:
  auVar9 = (*(code *)*puVar2)(plVar8,puVar2[1]);
  *(undefined1 (*) [16])(lStack0000000000000018 + 0x18) = auVar9;
  thunk_FUN_01b4f09c(lStack0000000000000018 + 0x20,0);
  *(undefined4 *)(lStack0000000000000018 + 0x10) = 1;
  return 1;
}


