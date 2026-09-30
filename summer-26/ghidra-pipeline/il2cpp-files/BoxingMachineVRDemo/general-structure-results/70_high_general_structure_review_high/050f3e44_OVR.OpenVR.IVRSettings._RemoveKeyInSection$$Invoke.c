/*
FUNCTION_NAME: OVR.OpenVR.IVRSettings._RemoveKeyInSection$$Invoke
ENTRY_POINT: 050f3e44
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void OVR_OpenVR_IVRSettings__RemoveKeyInSection__Invoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  
                    /* try { // try from 050f3e44 to 051f3e47 has its CatchHandler @ 050f40f8 */
                    /* try { // try from 050f3e48 to 051f40f3 has its CatchHandler @ 050f390c */
  uVar3 = FUN_05116a98();
  *(undefined4 *)(unaff_x19 + 0xbc) = uVar3;
  uVar12 = *(undefined8 *)(unaff_x19 + 0xd8);
  uVar5 = (**(code **)(*unaff_x21 + 0x268))();
  FUN_03356de4(uVar12,uVar5,*unaff_x24);
  lVar6 = FUN_03469470(*(undefined8 *)(unaff_x19 + 0x18),*unaff_x23);
  if (lVar6 == 0) {
LAB_050f3f54:
    lVar6 = thunk_FUN_02d9d534(*unaff_x26);
    FUN_04d62ba4();
  }
  else {
    *(undefined8 *)(unaff_x19 + 200) = *(undefined8 *)(lVar6 + 0x74);
    *(undefined8 *)(unaff_x19 + 0xd0) = *(undefined8 *)(lVar6 + 0x7c);
    *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(lVar6 + 0x6c);
    uVar5 = *(undefined8 *)(lVar6 + 0x58);
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar7 = FUN_0501fa14(uVar5,0,0);
    if ((uVar7 & 1) == 0) goto LAB_050f3f54;
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0677fb88);
    FUN_0504920c(lVar8,0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar5 = FUN_05116ef4(lVar6,0);
    if (lVar8 == 0) goto LAB_050f42d0;
    *(undefined8 *)(lVar8 + 0x10) = uVar5;
    thunk_FUN_02dd37b4();
    lVar6 = thunk_FUN_02d9d534(*unaff_x26);
    FUN_04d62ba4(lVar6,lVar8,*(undefined8 *)PTR_DAT_0677fb80,0);
    if (lVar6 == 0) goto LAB_050f3f54;
  }
  *(long *)(unaff_x19 + 0xf0) = lVar6;
  uVar5 = thunk_FUN_02dd37b4((long *)(unaff_x19 + 0xf0),lVar6);
  puVar1 = PTR_DAT_06766bb8;
  if (*(char *)(unaff_x19 + 0x2a) != '\0') {
    uVar5 = FUN_050f45cc(uVar5,*(undefined8 *)(unaff_x19 + 0x18));
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)puVar1);
    }
    uVar7 = FUN_04f3a4e4(uVar5,0,0);
    if ((uVar7 & 1) == 0) {
      if (*(int *)(unaff_x19 + 0xbc) == 2) {
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar7 = FUN_05115b6c(0);
        if ((uVar7 & 1) != 0) {
          uVar5 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764ff8);
          FUN_04d566c0();
          *(undefined8 *)(unaff_x19 + 0x80) = uVar5;
          thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x80),uVar5);
        }
      }
      else if ((*(long *)(unaff_x19 + 0x80) == 0) || (*(char *)(unaff_x19 + 0x88) != '\0')) {
        uVar5 = FUN_050f4b5c(uVar7,*(undefined8 *)(unaff_x19 + 0x18));
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)puVar1);
        }
        uVar7 = FUN_04f3a4e4(uVar5,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          plVar9 = (long *)FUN_05117140(0);
          if (plVar9 == (long *)0x0) goto LAB_050f42d0;
          uVar5 = (**(code **)(*plVar9 + 0x188))(plVar9,uVar5,*(undefined8 *)(*plVar9 + 400));
          lVar6 = unaff_x19 + 0x108;
          *(undefined8 *)(unaff_x19 + 0x108) = uVar5;
          goto LAB_050f4004;
        }
      }
      else {
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_050f42d0;
        uVar7 = FUN_05020d04(*(long *)(unaff_x19 + 0x18),0);
        if ((uVar7 & 1) != 0) {
          uVar5 = FUN_050f4ba4();
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)puVar1);
          }
          uVar7 = FUN_04f3a4e4(uVar5,0,0);
          if ((uVar7 & 1) != 0) goto OVR_OpenVR_IVRScreenshots__RequestScreenshot__Invoke;
        }
      }
    }
    else {
OVR_OpenVR_IVRScreenshots__RequestScreenshot__Invoke:
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      plVar9 = (long *)FUN_05117140(0);
      if (plVar9 == (long *)0x0) goto LAB_050f42d0;
      uVar5 = (**(code **)(*plVar9 + 0x188))(plVar9,uVar5,*(undefined8 *)(*plVar9 + 400));
      lVar6 = unaff_x19 + 0x100;
      *(undefined8 *)(unaff_x19 + 0x100) = uVar5;
LAB_050f4004:
      thunk_FUN_02dd37b4(lVar6);
      uVar5 = FUN_050f4adc();
      uVar12 = (**(code **)(*unaff_x21 + 0x1b8))();
      FUN_03356de4(uVar5,uVar12,*unaff_x24);
    }
  }
  puVar1 = PTR_DAT_0677de30;
  uVar5 = FUN_050f4e58();
  uVar7 = FUN_04f26ca8(uVar5,0,0);
  if ((uVar7 & 1) != 0) {
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
  uVar12 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  uVar5 = (**(code **)(*unaff_x20 + 0x2d8))();
  iVar4 = FUN_035722a4(uVar12,uVar5,*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_0677fb78;
  puVar1 = PTR_DAT_0677fb58;
  if (iVar4 != -1) {
    plVar9 = (long *)FUN_050f589c();
    uVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
    FUN_050f5920(uVar5,0,*(undefined8 *)puVar1);
    if (plVar9 == (long *)0x0) goto LAB_050f42d0;
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0677fb60) {
          puVar10 = (undefined8 *)(lVar6 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_050f41d0;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    puVar10 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)PTR_DAT_0677fb60,2);
LAB_050f41d0:
    (*(code *)*puVar10)(plVar9,uVar5,puVar10[1]);
  }
  return;
}


