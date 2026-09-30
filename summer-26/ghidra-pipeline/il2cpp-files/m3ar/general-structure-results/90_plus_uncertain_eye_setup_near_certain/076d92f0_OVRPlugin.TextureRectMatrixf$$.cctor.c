/*
FUNCTION_NAME: OVRPlugin.TextureRectMatrixf$$.cctor
ENTRY_POINT: 076d92f0
PROGRAM: m3ar-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_7
*/


void OVRPlugin_TextureRectMatrixf___cctor(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long in_x10;
  int *piVar6;
  long unaff_x19;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == **(long **)(in_x10 + 0x6c8)) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar6 + 6) * 0x10 + 0x138);
        goto LAB_076d9340;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_0406ae20();
LAB_076d9340:
  iVar1 = (*(code *)*puVar2)();
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      plVar3 = *(long **)(unaff_x19 + 0x38);
      if (plVar3 == (long *)0x0) goto OVRPlugin_ControllerState6___ctor;
      uVar9 = *(undefined4 *)(unaff_x19 + 0x68);
      uVar10 = *(undefined4 *)(unaff_x19 + 0x6c);
      lVar4 = *plVar3;
      uVar7 = *(undefined4 *)(unaff_x19 + 0x60);
      uVar8 = *(undefined4 *)(unaff_x19 + 100);
      goto LAB_076d93cc;
    }
    if (iVar1 == 1) {
      plVar3 = *(long **)(unaff_x19 + 0x38);
      if (plVar3 == (long *)0x0) goto OVRPlugin_ControllerState6___ctor;
      uVar9 = *(undefined4 *)(unaff_x19 + 0x58);
      uVar10 = *(undefined4 *)(unaff_x19 + 0x5c);
      lVar4 = *plVar3;
      uVar7 = *(undefined4 *)(unaff_x19 + 0x50);
      uVar8 = *(undefined4 *)(unaff_x19 + 0x54);
      goto LAB_076d93cc;
    }
  }
  else {
    if (iVar1 == 3) {
      plVar3 = *(long **)(unaff_x19 + 0x38);
      if (plVar3 == (long *)0x0) goto OVRPlugin_ControllerState6___ctor;
      uVar9 = *(undefined4 *)(unaff_x19 + 0x78);
      uVar10 = *(undefined4 *)(unaff_x19 + 0x7c);
      lVar4 = *plVar3;
      uVar7 = *(undefined4 *)(unaff_x19 + 0x70);
      uVar8 = *(undefined4 *)(unaff_x19 + 0x74);
    }
    else {
      if (iVar1 != 2) goto LAB_076d93d8;
      plVar3 = *(long **)(unaff_x19 + 0x38);
      if (plVar3 == (long *)0x0) goto OVRPlugin_ControllerState6___ctor;
      uVar9 = *(undefined4 *)(unaff_x19 + 0x48);
      uVar10 = *(undefined4 *)(unaff_x19 + 0x4c);
      lVar4 = *plVar3;
      uVar7 = *(undefined4 *)(unaff_x19 + 0x40);
      uVar8 = *(undefined4 *)(unaff_x19 + 0x44);
    }
LAB_076d93cc:
    (**(code **)(lVar4 + 0x2a8))(uVar7,uVar8,uVar9,uVar10,plVar3,*(undefined8 *)(lVar4 + 0x2b0));
  }
LAB_076d93d8:
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    lVar4 = FUN_08584ab0(*(long *)(unaff_x19 + 0x20),0);
    if ((*(long *)(unaff_x19 + 0x20) != 0) &&
       (iVar1 = FUN_0859a678(*(long *)(unaff_x19 + 0x20),0), lVar4 != 0)) {
      FUN_08588638(lVar4,0 < iVar1,0);
      if ((*(long *)(unaff_x19 + 0x28) != 0) &&
         (lVar4 = FUN_08584ab0(*(long *)(unaff_x19 + 0x28),0), lVar4 != 0)) {
        FUN_08588638(lVar4,*(char *)(unaff_x19 + 0x88) == '\0',0);
        return;
      }
    }
  }
OVRPlugin_ControllerState6___ctor:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


