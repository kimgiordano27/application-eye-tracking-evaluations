/*
FUNCTION_NAME: OVR.OpenVR.IVRScreenshots._RequestScreenshot$$.ctor
ENTRY_POINT: 050f3f18
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void OVR_OpenVR_IVRScreenshots__RequestScreenshot___ctor(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  
  if (unaff_x23 == 0) goto LAB_050f42d0;
  *(undefined8 *)(unaff_x23 + 0x10) = param_1;
  thunk_FUN_02dd37b4();
  lVar4 = thunk_FUN_02d9d534(*unaff_x26);
  FUN_04d62ba4();
  if (lVar4 == 0) {
    lVar4 = thunk_FUN_02d9d534(*unaff_x26);
    FUN_04d62ba4();
  }
  *(long *)(unaff_x19 + 0xf0) = lVar4;
  uVar5 = thunk_FUN_02dd37b4((long *)(unaff_x19 + 0xf0),lVar4);
  puVar1 = PTR_DAT_06766bb8;
  if (*(char *)(unaff_x19 + 0x2a) != '\0') {
    uVar5 = FUN_050f45cc(uVar5,*(undefined8 *)(unaff_x19 + 0x18));
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)puVar1);
    }
    uVar6 = FUN_04f3a4e4(uVar5,0,0);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(unaff_x19 + 0xbc) == 2) {
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar6 = FUN_05115b6c(0);
        if ((uVar6 & 1) != 0) {
          uVar5 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764ff8);
          FUN_04d566c0();
          *(undefined8 *)(unaff_x19 + 0x80) = uVar5;
          thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x80),uVar5);
        }
      }
      else if ((*(long *)(unaff_x19 + 0x80) == 0) || (*(char *)(unaff_x19 + 0x88) != '\0')) {
        uVar5 = FUN_050f4b5c(uVar6,*(undefined8 *)(unaff_x19 + 0x18));
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)puVar1);
        }
        uVar6 = FUN_04f3a4e4(uVar5,0,0);
        if ((uVar6 & 1) != 0) {
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          plVar7 = (long *)FUN_05117140(0);
          if (plVar7 == (long *)0x0) goto LAB_050f42d0;
          uVar5 = (**(code **)(*plVar7 + 0x188))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 400));
          lVar4 = unaff_x19 + 0x108;
          *(undefined8 *)(unaff_x19 + 0x108) = uVar5;
          goto LAB_050f4004;
        }
      }
      else {
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_050f42d0;
        uVar6 = FUN_05020d04(*(long *)(unaff_x19 + 0x18),0);
        if ((uVar6 & 1) != 0) {
          uVar5 = FUN_050f4ba4();
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)puVar1);
          }
          uVar6 = FUN_04f3a4e4(uVar5,0,0);
          if ((uVar6 & 1) != 0) goto OVR_OpenVR_IVRScreenshots__RequestScreenshot__Invoke;
        }
      }
    }
    else {
OVR_OpenVR_IVRScreenshots__RequestScreenshot__Invoke:
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      plVar7 = (long *)FUN_05117140(0);
      if (plVar7 == (long *)0x0) goto LAB_050f42d0;
      uVar5 = (**(code **)(*plVar7 + 0x188))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 400));
      lVar4 = unaff_x19 + 0x100;
      *(undefined8 *)(unaff_x19 + 0x100) = uVar5;
LAB_050f4004:
      thunk_FUN_02dd37b4(lVar4);
      uVar5 = FUN_050f4adc();
      uVar8 = (**(code **)(*unaff_x21 + 0x1b8))();
      FUN_03356de4(uVar5,uVar8,*unaff_x24);
    }
  }
  puVar1 = PTR_DAT_0677de30;
  uVar5 = FUN_050f4e58();
  uVar6 = FUN_04f26ca8(uVar5,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_050f5024();
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  puVar2 = PTR_DAT_0677bc60;
  if (unaff_x20 == (long *)0x0) {
LAB_050f42d0:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  uVar5 = (**(code **)(*unaff_x20 + 0x2d8))();
  iVar3 = FUN_035722a4(uVar8,uVar5,*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_0677fb78;
  puVar1 = PTR_DAT_0677fb58;
  if (iVar3 != -1) {
    plVar7 = (long *)FUN_050f589c();
    uVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
    FUN_050f5920(uVar5,0,*(undefined8 *)puVar1);
    if (plVar7 == (long *)0x0) goto LAB_050f42d0;
    lVar4 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0677fb60) {
          puVar9 = (undefined8 *)(lVar4 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_050f41d0;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_0677fb60,2);
LAB_050f41d0:
    (*(code *)*puVar9)(plVar7,uVar5,puVar9[1]);
  }
  return;
}


