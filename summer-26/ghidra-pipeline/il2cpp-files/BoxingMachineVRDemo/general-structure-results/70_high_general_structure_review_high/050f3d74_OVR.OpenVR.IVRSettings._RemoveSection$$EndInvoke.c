/*
FUNCTION_NAME: OVR.OpenVR.IVRSettings._RemoveSection$$EndInvoke
ENTRY_POINT: 050f3d74
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


long OVR_OpenVR_IVRSettings__RemoveSection__EndInvoke(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  int *piVar14;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar15;
  undefined8 uVar16;
  
  FUN_02d6084c();
  FUN_02d6084c(PTR_DAT_0677fb60);
  FUN_02d6084c(PTR_DAT_0677fb68);
  FUN_02d6084c(PTR_DAT_0677fb48);
  FUN_02d6084c(PTR_DAT_0677fb70);
  FUN_02d6084c(PTR_DAT_067680e0);
  FUN_02d6084c(PTR_DAT_0677fb78);
  FUN_02d6084c(PTR_DAT_0677fb80);
  FUN_02d6084c(PTR_DAT_0677fb88);
  *(undefined1 *)(unaff_x19 + 0xac0) = 1;
  lVar8 = thunk_FUN_02d9d534(*unaff_x22);
  FUN_050f42d4();
  FUN_050f4358();
  puVar3 = PTR_DAT_0677fb70;
  puVar5 = PTR_DAT_0677fb50;
  puVar4 = PTR_DAT_067680e0;
  if (lVar8 == 0) goto LAB_050f42d0;
  cVar1 = *(char *)((long)unaff_x21 + 0x26);
  uVar15 = *(undefined8 *)(lVar8 + 0x18);
  if (*(int *)(*(long *)PTR_DAT_067680e0 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  puVar2 = PTR_DAT_06763508;
  uVar6 = FUN_05116a98(uVar15,cVar1 != '\0',0);
  *(undefined4 *)(lVar8 + 0xbc) = uVar6;
  uVar16 = *(undefined8 *)(lVar8 + 0xd8);
  uVar15 = (**(code **)(*unaff_x21 + 0x268))();
  FUN_03356de4(uVar16,uVar15,*(undefined8 *)puVar5);
  lVar9 = FUN_03469470(*(undefined8 *)(lVar8 + 0x18),*(undefined8 *)puVar3);
  if (lVar9 == 0) {
LAB_050f3f54:
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
    FUN_04d62ba4();
  }
  else {
    *(undefined8 *)(lVar8 + 200) = *(undefined8 *)(lVar9 + 0x74);
    *(undefined8 *)(lVar8 + 0xd0) = *(undefined8 *)(lVar9 + 0x7c);
    *(undefined8 *)(lVar8 + 0xc0) = *(undefined8 *)(lVar9 + 0x6c);
    uVar15 = *(undefined8 *)(lVar9 + 0x58);
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar10 = FUN_0501fa14(uVar15,0,0);
    if ((uVar10 & 1) == 0) goto LAB_050f3f54;
    lVar11 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0677fb88);
    FUN_0504920c(lVar11,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar15 = FUN_05116ef4(lVar9,0);
    if (lVar11 == 0) goto LAB_050f42d0;
    *(undefined8 *)(lVar11 + 0x10) = uVar15;
    thunk_FUN_02dd37b4();
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
    FUN_04d62ba4(lVar9,lVar11,*(undefined8 *)PTR_DAT_0677fb80,0);
    if (lVar9 == 0) goto LAB_050f3f54;
  }
  *(long *)(lVar8 + 0xf0) = lVar9;
  uVar15 = thunk_FUN_02dd37b4((long *)(lVar8 + 0xf0),lVar9);
  puVar3 = PTR_DAT_06766bb8;
  if (*(char *)(lVar8 + 0x2a) != '\0') {
    uVar15 = FUN_050f45cc(uVar15,*(undefined8 *)(lVar8 + 0x18));
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)puVar3);
    }
    uVar10 = FUN_04f3a4e4(uVar15,0,0);
    if ((uVar10 & 1) == 0) {
      if (*(int *)(lVar8 + 0xbc) == 2) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar10 = FUN_05115b6c(0);
        if ((uVar10 & 1) != 0) {
          uVar15 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764ff8);
          FUN_04d566c0(uVar15,lVar8,*(undefined8 *)PTR_DAT_0677fb68,0);
          *(undefined8 *)(lVar8 + 0x80) = uVar15;
          thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x80),uVar15);
        }
      }
      else if ((*(long *)(lVar8 + 0x80) == 0) || (*(char *)(lVar8 + 0x88) != '\0')) {
        uVar15 = FUN_050f4b5c(uVar10,*(undefined8 *)(lVar8 + 0x18));
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)puVar3);
        }
        uVar10 = FUN_04f3a4e4(uVar15,0,0);
        if ((uVar10 & 1) != 0) {
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          plVar12 = (long *)FUN_05117140(0);
          if (plVar12 == (long *)0x0) goto LAB_050f42d0;
          uVar15 = (**(code **)(*plVar12 + 0x188))(plVar12,uVar15,*(undefined8 *)(*plVar12 + 400));
          lVar9 = lVar8 + 0x108;
          *(undefined8 *)(lVar8 + 0x108) = uVar15;
          goto LAB_050f4004;
        }
      }
      else {
        if (*(long *)(lVar8 + 0x18) == 0) goto LAB_050f42d0;
        uVar10 = FUN_05020d04(*(long *)(lVar8 + 0x18),0);
        if ((uVar10 & 1) != 0) {
          uVar15 = FUN_050f4ba4();
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)puVar3);
          }
          uVar10 = FUN_04f3a4e4(uVar15,0,0);
          if ((uVar10 & 1) != 0) goto OVR_OpenVR_IVRScreenshots__RequestScreenshot__Invoke;
        }
      }
    }
    else {
OVR_OpenVR_IVRScreenshots__RequestScreenshot__Invoke:
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      plVar12 = (long *)FUN_05117140(0);
      if (plVar12 == (long *)0x0) goto LAB_050f42d0;
      uVar15 = (**(code **)(*plVar12 + 0x188))(plVar12,uVar15,*(undefined8 *)(*plVar12 + 400));
      lVar9 = lVar8 + 0x100;
      *(undefined8 *)(lVar8 + 0x100) = uVar15;
LAB_050f4004:
      thunk_FUN_02dd37b4(lVar9);
      uVar15 = FUN_050f4adc(lVar8);
      uVar16 = (**(code **)(*unaff_x21 + 0x1b8))();
      FUN_03356de4(uVar15,uVar16,*(undefined8 *)puVar5);
    }
  }
  puVar4 = PTR_DAT_0677de30;
  uVar15 = FUN_050f4e58();
  uVar10 = FUN_04f26ca8(uVar15,0,0);
  if ((uVar10 & 1) != 0) {
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_050f5024(lVar8,uVar15);
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  puVar5 = PTR_DAT_0677bc60;
  if (unaff_x20 == (long *)0x0) {
LAB_050f42d0:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar16 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
  uVar15 = (**(code **)(*unaff_x20 + 0x2d8))();
  iVar7 = FUN_035722a4(uVar16,uVar15,*(undefined8 *)puVar5);
  puVar5 = PTR_DAT_0677fb78;
  puVar4 = PTR_DAT_0677fb58;
  if (iVar7 != -1) {
    plVar12 = (long *)FUN_050f589c(lVar8);
    uVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
    FUN_050f5920(uVar15,0,*(undefined8 *)puVar4);
    if (plVar12 == (long *)0x0) goto LAB_050f42d0;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0677fb60) {
          puVar13 = (undefined8 *)(lVar9 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_050f41d0;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar13 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)PTR_DAT_0677fb60,2);
LAB_050f41d0:
    (*(code *)*puVar13)(plVar12,uVar15,puVar13[1]);
  }
  return lVar8;
}


