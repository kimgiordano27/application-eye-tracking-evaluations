/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureWidth
ENTRY_POINT: 03394608
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx__GetKtxTextureWidth(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x29;
  
  *(long *)(unaff_x20 + 0x90) = param_1;
  if (param_1 == 0) {
    *(undefined8 *)(unaff_x20 + 0x98) = 0;
  }
  else {
    uVar2 = FUN_0338477c(*(undefined8 *)(param_1 + 0x60),0);
    if ((uVar2 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(unaff_x20 + 0x90);
    }
    *(undefined8 *)(unaff_x20 + 0x98) = uVar5;
  }
  plVar3 = (long *)FUN_03396234();
  while (uVar2 = FUN_0335ce1c(), (uVar2 & 1) != 0) {
    iVar1 = (**(code **)(*unaff_x19 + 0x188))();
    if (iVar1 != 5) {
      if (iVar1 == 0xe) goto LAB_033948dc;
      if (plVar3 == (long *)0x0) {
LAB_033946d4:
        FUN_033966b4();
      }
      else {
        uVar2 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
        if ((uVar2 & 1) == 0) goto LAB_033946d4;
        FUN_033962a0();
      }
      lVar6 = *unaff_x23;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x29) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_0339474c;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_01c72498();
LAB_0339474c:
      (*(code *)*puVar4)();
    }
  }
  FUN_0339d160();
LAB_033948dc:
  FUN_0339cf34();
  return;
}


